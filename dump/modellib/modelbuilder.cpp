
//
// modellib/modelbuilder.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 180
//	struct: 1
//

// <04BDF7F3> modellib/modelbuilder.cpp:22
// function call: 1
void CBuilderMaterialGroup::SetName(const char* pName)
{
	CUtlString::operator=(
			const char* src);  // 24
} /* size: 9, inline expansions: 1 (5 bytes) */

// <04BD93CE> modellib/modelbuilder.cpp:22
void CBuilderMaterialGroup::SetName(const char* pName)
{
} /* size: 0 */

// <04BD90C9> modellib/modelbuilder.cpp:27
// variable: 1
// function calls: 14
void CBuilderMaterialGroup::AddMaterial(HMaterial hMat)
{
	int nMat; // 29
	CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::NumAllocated(); // 1143
	CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
		int i);  // 1148
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 1479
	Construct<CStrongHandle<InfoForResourceTypeIMaterial2> >(CStrongHandle<InfoForResourceTypeIMaterial2>* pMemory); // 1148
	CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::Base(); // 112
	Base(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 368
	ResetDbgInfo(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 824
	GrowMemory(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 29
	CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
			int i);  // 30
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 30
} /* size: 114, variables: 1, inline expansions: 14 (194 bytes) */

// <04BD8D90> modellib/modelbuilder.cpp:37
// function calls: 12
void CBuilderModelInfo::CBuilderModelInfo()
{
	Vector::Vector(); // 37
	Vector::Vector(); // 37
	Vector::Vector(); // 37
	Vector::Vector(); // 37
	Vector::Vector(); // 37
	CUtlString::CUtlString(); // 37
	CUtlString::CUtlString(); // 37
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 40
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 41
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 42
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 43
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 45
} /* size: 0, inline expansions: 12 (0 bytes) */

// <04BD8D74> modellib/modelbuilder.cpp:37
void CBuilderModelInfo::CBuilderModelInfo()
{
} /* size: 0 */

// <04BD8A41> modellib/modelbuilder.cpp:50
// function calls: 13
void CBuilderModelInfo::operator=(const PermModelInfo_t& info)
{
	Vector::operator=(
			const Vector& vOther);  // 53
	Vector::operator=(
			const Vector& vOther);  // 54
	Vector::operator=(
			const Vector& vOther);  // 55
	Vector::operator=(
			const Vector& vOther);  // 56
	Vector::operator=(
			const Vector& vOther);  // 58
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 60
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 61
} /* size: 0, inline expansions: 13 (0 bytes) */

// <04BD87C0> modellib/modelbuilder.cpp:66
// function calls: 9
void CBuilderModelInfo::FillInPermData(PermModelInfo_t* pPermData)
{
	CUtlString::Get(); // 76
	Vector::operator=(
			const Vector& vOther);  // 69
	Vector::operator=(
			const Vector& vOther);  // 70
	Vector::operator=(
			const Vector& vOther);  // 71
	Vector::operator=(
			const Vector& vOther);  // 72
	Vector::operator=(
			const Vector& vOther);  // 74
	CUtlString::operator=(
			const char* src);  // 76
	CUtlString::Get(); // 77
	CUtlString::operator=(
			const char* src);  // 77
} /* size: 0, inline expansions: 9 (0 bytes) */

// <04BD7DFF> modellib/modelbuilder.cpp:84
// function calls: 45
void CModelSkeletonBuilder::CModelSkeletonBuilder()
{
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
			int minimumSize);  // 130
	BoneDict_t::BoneDict_t(); // 84
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 84
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 84
	CUtlMemory<short int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short int, CUtlMemory<short int, int> >::CUtlVector(); // 84
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 84
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::CUtlVector(); // 84
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 84
	CUtlMemory<Quaternion, int>::ValidateGrowSize(); // 475
	CUtlMemory<Quaternion, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVector(); // 84
	CUtlMemory<bool, int>::ValidateGrowSize(); // 475
	CUtlMemory<bool, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<bool, CUtlMemory<bool, int> >::CUtlVector(); // 84
} /* size: 355, inline expansions: 45 (517 bytes) */

// <04BD7DE3> modellib/modelbuilder.cpp:84
void CModelSkeletonBuilder::CModelSkeletonBuilder()
{
} /* size: 0 */

// <04BD7AF4> modellib/modelbuilder.cpp:88
// variable: 1
// function calls: 12
void CModelSkeletonBuilder::Clear()
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
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 91
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 92
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveAll(); // 93
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 94
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::RemoveAll(); // 95
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 96
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 97
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveAll(); // 98
} /* size: 0, inline expansions: 8 (0 bytes) */

// <04BDF889> modellib/modelbuilder.cpp:101
// function call: 1
void CModelSkeletonBuilder::NumBones()
{
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04BD7AD8> modellib/modelbuilder.cpp:101
void CModelSkeletonBuilder::NumBones()
{
} /* size: 0 */

// <04BDF8E2> modellib/modelbuilder.cpp:106
// function call: 1
void CModelSkeletonBuilder::GetNumParentIndices()
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 108
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04BD7ABC> modellib/modelbuilder.cpp:106
void CModelSkeletonBuilder::GetNumParentIndices()
{
} /* size: 0 */

// <04BDF93B> modellib/modelbuilder.cpp:111
// function calls: 4
void CModelSkeletonBuilder::GetParent(int nBone)
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 108
	CModelSkeletonBuilder::GetNumParentIndices(); // 113
	{
	}
	CUtlMemory<short int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 114
} /* size: 0, inline expansions: 4 (0 bytes) */

// <04BD7A55> modellib/modelbuilder.cpp:111
// variables: 2
void CModelSkeletonBuilder::GetParent(int nBone)
{
	const char   __FUNCTION__; // 28699
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 113
	}
} /* size: 0, variables: 1 */

// <01F1C8C3> modellib/modelbuilder.cpp:111
// variables: 2
void CModelSkeletonBuilder::GetParent(int nBone)
{
	const char   __FUNCTION__; // 36222
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 113
	}
} /* size: 0, variables: 1 */

// <00B52898> modellib/modelbuilder.cpp:111
// variables: 2
void CModelSkeletonBuilder::GetParent(int nBone)
{
	const char   __FUNCTION__; // 10947
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 113
	}
} /* size: 0, variables: 1 */

// <04BDFA4A> modellib/modelbuilder.cpp:117
// function calls: 2
void CModelSkeletonBuilder::GetFlags(int nBone)
{
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
			int i);  // 119
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04BD7A2D> modellib/modelbuilder.cpp:117
void CModelSkeletonBuilder::GetFlags(int nBone)
{
} /* size: 0 */

// <04BDFADD> modellib/modelbuilder.cpp:122
// function calls: 3
void CModelSkeletonBuilder::GetBoneNameByIndex(int nBone)
{
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 124
	CUtlString::Get(); // 124
} /* size: 0, inline expansions: 3 (0 bytes) */

// <04BD7A05> modellib/modelbuilder.cpp:122
void CModelSkeletonBuilder::GetBoneNameByIndex(int nBone)
{
} /* size: 0 */

// <04BDFB98> modellib/modelbuilder.cpp:127
// function calls: 2
void CModelSkeletonBuilder::GetBonePos(int nBone)
{
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 129
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04BD79DD> modellib/modelbuilder.cpp:127
void CModelSkeletonBuilder::GetBonePos(int nBone)
{
} /* size: 0 */

// <04BDFC43> modellib/modelbuilder.cpp:132
// function calls: 2
void CModelSkeletonBuilder::GetBoneRotation(int nBone)
{
	CUtlMemory<Quaternion, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
			int i);  // 134
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04BD79B5> modellib/modelbuilder.cpp:132
void CModelSkeletonBuilder::GetBoneRotation(int nBone)
{
} /* size: 0 */

// <04BDFCEE> modellib/modelbuilder.cpp:137
// function calls: 2
void CModelSkeletonBuilder::SetParent(int nBone, uint32 nParentHash)
{
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 139
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04BD7981> modellib/modelbuilder.cpp:137
void CModelSkeletonBuilder::SetParent(int nBone, uint32 nParentHash)
{
} /* size: 0 */

// <04BD7715> modellib/modelbuilder.cpp:142
// variable: 1
// function calls: 7
void CModelSkeletonBuilder::SetParent(int nBone, const char* pParent)
{
	CUtlStringToken nBoneHash; // 144
	CUtlStringToken::CUtlStringToken(); // 144
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 146
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 139
	CModelSkeletonBuilder::SetParent(
			int nBone,
			uint32 nParentHash);  // 148
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <04BDFD88> modellib/modelbuilder.cpp:151
// function calls: 4
void CModelSkeletonBuilder::AddFlags(int nBone, BoneFlags_t nFlags)
{
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
			int i);  // 153
	operator|(BoneFlags_t a,
			BoneFlags_t b);  // 163
	operator|=(BoneFlags_t& a,
			BoneFlags_t b);  // 153
} /* size: 0, inline expansions: 4 (0 bytes) */

// <04BD76E1> modellib/modelbuilder.cpp:151
void CModelSkeletonBuilder::AddFlags(int nBone, BoneFlags_t nFlags)
{
} /* size: 0 */

// <04BDFEB8> modellib/modelbuilder.cpp:156
// function calls: 2
void CModelSkeletonBuilder::AddBoneSphere(int nBone, float flSphere)
{
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 158
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04BD76AD> modellib/modelbuilder.cpp:156
void CModelSkeletonBuilder::AddBoneSphere(int nBone, float flSphere)
{
} /* size: 0 */

// <04BD754E> modellib/modelbuilder.cpp:161
// function calls: 5
void CModelSkeletonBuilder::ClearFlags(int nBone, BoneFlags_t nFlags)
{
	operator~(BoneFlags_t a); // 163
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
			int i);  // 163
	operator&(BoneFlags_t a,
			BoneFlags_t b);  // 163
	operator&=(BoneFlags_t& a,
			BoneFlags_t b);  // 163
} /* size: 0, inline expansions: 5 (0 bytes) */

// <04BDFF70> modellib/modelbuilder.cpp:166
// function calls: 3
void CModelSkeletonBuilder::SetPosParent(int nBone, const Vector& vPos)
{
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 168
	Vector::operator=(
			const Vector& vOther);  // 168
} /* size: 0, inline expansions: 3 (0 bytes) */

// <04BD751A> modellib/modelbuilder.cpp:166
void CModelSkeletonBuilder::SetPosParent(int nBone, const Vector& vPos)
{
} /* size: 0 */

// <04BE0037> modellib/modelbuilder.cpp:171
// function calls: 2
void CModelSkeletonBuilder::SetRotParent(int nBone, const Quaternion& vRot)
{
	CUtlMemory<Quaternion, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
			int i);  // 173
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04BD74E6> modellib/modelbuilder.cpp:171
void CModelSkeletonBuilder::SetRotParent(int nBone, const Quaternion& vRot)
{
} /* size: 0 */

// <04BD5F32> modellib/modelbuilder.cpp:176
// variables: 3
// function calls: 90
void CModelSkeletonBuilder::FindOrAddBone(uint32 nBoneHash, uint32 nParentHash, float flSphere, BoneFlags_t nFlags, const Vector& vBoneLocalPos, const Quaternion& vBoneLocalRot, const char* pBoneName)
{
	BoneFlags_t simBoneMask; // 178
	bool bSimBone; // 180
	int nIndex; // 183
	Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
		KeyArg_t k);  // 226
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
			handle_t idx);  // 227
	CModelSkeletonBuilder::FindBoneIndexByHash(
				uint32 nHash);  // 183
	operator&(BoneFlags_t a,
			BoneFlags_t b);  // 180
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			const unsigned int& src);  // 194
	CUtlString::CUtlString(
			const char* pString);  // 195
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1252
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1514
	Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
			CUtlString& src);  // 195
	CUtlString::~CUtlString(); // 195
	CUtlMemory<float, int>::NumAllocated(); // 1196
	CUtlMemory<float, int>::operator[](
			int i);  // 602
	CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
		int i);  // 1201
	CopyConstruct<float>(float* pMemory,
				const float& src);  // 1201
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<float, CUtlMemory<float, int> >::AddToTail(
			const float& src);  // 196
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::NumAllocated(); // 1196
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Element(
		int i);  // 1201
	CopyConstruct<CModelSkeleton::BoneFlags_t>(BoneFlags_t* pMemory,
							const BoneFlags_t& src);  // 1201
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Base(); // 112
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Base(); // 368
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::AddToTail(
			const BoneFlags_t& src);  // 197
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
			const Vector& src);  // 198
	CUtlMemory<Quaternion, int>::NumAllocated(); // 1196
	CUtlMemory<Quaternion, int>::operator[](
			int i);  // 602
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Element(
		int i);  // 1201
	CopyConstruct<Quaternion>(Quaternion* pMemory,
					const Quaternion& src);  // 1201
	CUtlMemory<Quaternion, int>::Base(); // 112
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Base(); // 368
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::AddToTail(
			const Quaternion& src);  // 199
	CUtlMemory<bool, int>::NumAllocated(); // 1196
	CUtlMemory<bool, int>::operator[](
			int i);  // 602
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::Element(
		int i);  // 1201
	CopyConstruct<bool>(bool* pMemory,
				const bool& src);  // 1201
	CUtlMemory<bool, int>::Base(); // 112
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::Base(); // 368
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::AddToTail(
			const bool& src);  // 200
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
			int i);  // 720
	CUtlKeyValuePair<unsigned int, short unsigned int>::CUtlKeyValuePair<unsigned int, short unsigned int>(
								const unsigned int& k,
								const short unsigned int& v);  // 1514
	Construct<CUtlKeyValuePair<unsigned int, short unsigned int>, unsigned int&, short unsigned int&>(CUtlKeyValuePair<unsigned int, short unsigned int>* pMemory); // 720
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 714
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 249
	Insert(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 202
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
			int i);  // 153
	operator|(BoneFlags_t a,
			BoneFlags_t b);  // 163
	operator|=(BoneFlags_t& a,
			BoneFlags_t b);  // 153
	CModelSkeletonBuilder::AddFlags(
		int nBone,
		BoneFlags_t nFlags);  // 187
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 158
	CModelSkeletonBuilder::AddBoneSphere(
			int nBone,
			float flSphere);  // 188
	CUtlMemory<bool, int>::operator[](
			int i);  // 588
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
			int i);  // 189
} /* size: 1023, variables: 3, inline expansions: 90 (1873 bytes) */

// <04BE1EA2> modellib/modelbuilder.cpp:207
// variables: 2
// function calls: 7
void CModelSkeletonBuilder::FindOrAddBone(const char* pBoneName, const char* pParentName, float flSphere, BoneFlags_t nFlags, const Vector& vBoneLocalPos, const Quaternion& vBoneLocalRot)
{
	CUtlStringToken nBoneHash; // 209
	CUtlStringToken nParentHash; // 210
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 209
	CUtlStringToken::CUtlStringToken(); // 210
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 213
} /* size: 0, variables: 2, inline expansions: 7 (0 bytes) */

// <04BD5EB6> modellib/modelbuilder.cpp:207
// variables: 2
void CModelSkeletonBuilder::FindOrAddBone(const char* pBoneName, const char* pParentName, float flSphere, BoneFlags_t nFlags, const Vector& vBoneLocalPos, const Quaternion& vBoneLocalRot)
{
	CUtlStringToken nBoneHash; // 209
	CUtlStringToken nParentHash; // 210
} /* size: 0, variables: 2 */

// <04BE0AC3> modellib/modelbuilder.cpp:218
// variable: 1
// function calls: 9
void CModelSkeletonBuilder::FindBoneIndex(const char* pBoneName)
{
	CUtlStringToken hash; // 220
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 220
	Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
		KeyArg_t k);  // 226
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
			handle_t idx);  // 227
	CModelSkeletonBuilder::FindBoneIndexByHash(
				uint32 nHash);  // 221
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <04BD5E82> modellib/modelbuilder.cpp:218
// variable: 1
void CModelSkeletonBuilder::FindBoneIndex(const char* pBoneName)
{
	CUtlStringToken hash; // 220
} /* size: 0, variables: 1 */

// <04BE094E> modellib/modelbuilder.cpp:224
// variable: 1
// function calls: 5
void CModelSkeletonBuilder::FindBoneIndexByHash(uint32 nHash)
{
	UtlHashHandle_t handle; // 226
	Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
		KeyArg_t k);  // 226
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
			handle_t idx);  // 227
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <04BD5E4E> modellib/modelbuilder.cpp:224
// variable: 1
void CModelSkeletonBuilder::FindBoneIndexByHash(uint32 nHash)
{
	UtlHashHandle_t handle; // 226
} /* size: 0, variables: 1 */

// <04BD59DF> modellib/modelbuilder.cpp:234
// variable: 1
// function calls: 18
void CModelSkeletonBuilder::AddFlagToAllParentsOfBone(int nBoneIndex, BoneFlags_t nFlag)
{
	int nParentIndex; // 236
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 236
	Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
		KeyArg_t k);  // 226
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
			handle_t idx);  // 227
	CModelSkeletonBuilder::FindBoneIndexByHash(
				uint32 nHash);  // 236
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
			int i);  // 239
	Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
		KeyArg_t k);  // 226
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
	IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
			handle_t idx);  // 227
	CModelSkeletonBuilder::FindBoneIndexByHash(
				uint32 nHash);  // 240
	operator|(BoneFlags_t a,
			BoneFlags_t b);  // 163
	operator|=(BoneFlags_t& a,
			BoneFlags_t b);  // 239
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 240
} /* size: 0, variables: 1, inline expansions: 18 (0 bytes) */

// <04BE4DE5> modellib/modelbuilder.cpp:244
void CModelSkeletonBuilder::AppendRenderMeshSkeleton(const CRenderSkeleton* pRenderSkeleton, LODGroupMask_t nLODGroupMask)
{
} /* size: 0 */

// <04BE21F7> modellib/modelbuilder.cpp:244
// variables: 72
// function calls: 181
void CModelSkeletonBuilder::AppendRenderMeshSkeleton(const CRenderSkeleton* pRenderSkeleton, LODGroupMask_t nLODGroupMask)
{
	{
		int nBone; // 249
		{
			const RenderSkeletonBone_t* pBone; // 251
			uint32 nBoneHash; // 252
			uint32 nParentHash; // 253
			int nLocalBoneParent; // 254
			const matrix3x4a_t& mInvBindPose; // 257
			matrix3x4a_t mBindPose; // 258
			Vector vPos; // 260
			Quaternion vRot; // 261
			const int  nExistingBoneIndex; // 276
			const int  nIndex; // 279
			const BoneFlags_t  nMeshBoneFlags; // 281
			{
				const uint32  nGlobalParentHash; // 291
				{
					matrix3x4a_t mLocalSpace; // 296
					{
						const int  nLocalReparentBoneIndex; // 305
						{
							matrix3x4a_t mBoneToWorld; // 311
							matrix3x4a_t mBoneToWorldInv; // 313
							Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
								KeyArg_t k);  // 226
							CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
							CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
									int i);  // 204
							CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
							IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
									handle_t idx);  // 227
							CModelSkeletonBuilder::FindBoneIndexByHash(
										uint32 nHash);  // 312
							matrix3x4_t::matrix3x4_t(); // 303
							matrix3x4a_t::matrix3x4a_t(); // 311
							matrix3x4_t::matrix3x4_t(); // 303
							matrix3x4a_t::matrix3x4a_t(); // 313
							{
								fltx4 retVal; // 602
								_mm_load_ps(const float* __P); // 603
							}
							LoadAlignedSIMD<>(const void* pSIMD); // 36
							{
								fltx4 retVal; // 602
								_mm_load_ps(const float* __P); // 603
							}
							LoadAlignedSIMD<>(const void* pSIMD); // 35
							{
								fltx4 retVal; // 1352
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1353
							}
							SplatWSIMD<>(const fltx4& a); // 38
							{
								fltx4 retVal; // 602
								_mm_load_ps(const float* __P); // 603
							}
							LoadAlignedSIMD<>(const void* pSIMD); // 37
							{
								fltx4 retVal; // 1352
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1353
							}
							SplatWSIMD<>(const fltx4& a); // 38
							{
								__v4sf __r0; // 2491
								__v4sf __r1; // 2491
								__v4sf __r2; // 2491
								__v4sf __r3; // 2491
								__v4sf __t0; // 2491
								__v4sf __t1; // 2491
								__v4sf __t2; // 2491
								__v4sf __t3; // 2491
							}
							TransposeSIMD<>(fltx4& x,
									fltx4& y,
									fltx4& z,
									fltx4& w);  // 40
							{
								fltx4 retVal; // 1352
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1353
							}
							SplatWSIMD<>(const fltx4& a); // 38
							{
								fltx4 retVal; // 1616
								_mm_sub_ps(__m128 __A,
										__m128 __B);  // 1617
							}
							SubSIMD<>(const fltx4& a,
									const fltx4& b);  // 1797
							NegSIMD<>(const fltx4& a); // 38
							_mm_store_ps(float* __P,
									__m128 __A);  // 273
							StoreAlignedSIMD<>(float* pSIMD,
										const fltx4& a);  // 42
							_mm_store_ps(float* __P,
									__m128 __A);  // 273
							StoreAlignedSIMD<>(float* pSIMD,
										const fltx4& a);  // 43
							_mm_store_ps(float* __P,
									__m128 __A);  // 273
							StoreAlignedSIMD<>(float* pSIMD,
										const fltx4& a);  // 44
							matrix3x4_t::matrix3x4_t(); // 303
							matrix3x4a_t::matrix3x4a_t(); // 46
							{
								fltx4 retVal; // 602
								_mm_load_ps(const float* __P); // 603
							}
							LoadAlignedSIMD<>(const void* pSIMD); // 11
							{
								fltx4 retVal; // 602
								_mm_load_ps(const float* __P); // 603
							}
							LoadAlignedSIMD<>(const void* pSIMD); // 12
							{
								fltx4 retVal; // 602
								_mm_load_ps(const float* __P); // 603
							}
							LoadAlignedSIMD<>(const void* pSIMD); // 13
							{
								fltx4 retVal; // 602
								_mm_load_ps(const float* __P); // 603
							}
							LoadAlignedSIMD<>(const void* pSIMD); // 2267
							{
								fltx4 retVal; // 718
								_mm_and_ps(__m128 __A,
										__m128 __B);  // 719
							}
							AndSIMD<>(const fltx4& a,
									const fltx4& b);  // 2267
							fabs<>(const fltx4& x); // 2272
							AbsSIMD<>(const fltx4& val); // 15
							{
								fltx4 retVal; // 718
								_mm_and_ps(__m128 __A,
										__m128 __B);  // 719
							}
							AndSIMD<>(const fltx4& a,
									const fltx4& b);  // 2267
							fabs<>(const fltx4& x); // 2272
							AbsSIMD<>(const fltx4& val); // 15
							{
								fltx4 retVal; // 718
								_mm_and_ps(__m128 __A,
										__m128 __B);  // 719
							}
							AndSIMD<>(const fltx4& a,
									const fltx4& b);  // 2267
							fabs<>(const fltx4& x); // 2272
							AbsSIMD<>(const fltx4& val); // 15
							MatrixDiffIdentity(const matrix3x4a_t& in); // 50
							{
								fltx4 retVal; // 718
								_mm_and_ps(__m128 __A,
										__m128 __B);  // 719
							}
							AndSIMD<>(const fltx4& a,
									const fltx4& b);  // 2267
							fabs<>(const fltx4& x); // 2272
							AbsSIMD<>(const fltx4& val); // 50
							{
								fltx4 retVal; // 718
								_mm_and_ps(__m128 __A,
										__m128 __B);  // 719
							}
							AndSIMD<>(const fltx4& a,
									const fltx4& b);  // 2267
							fabs<>(const fltx4& x); // 2272
							AbsSIMD<>(const fltx4& val); // 50
							{
								fltx4 retVal; // 718
								_mm_and_ps(__m128 __A,
										__m128 __B);  // 719
							}
							AndSIMD<>(const fltx4& a,
									const fltx4& b);  // 2267
							fabs<>(const fltx4& x); // 2272
							AbsSIMD<>(const fltx4& val); // 50
							{
								fltx4 retVal; // 2228
								_mm_max_ps(__m128 __A,
										__m128 __B);  // 2229
							}
							MaxSIMD<>(const fltx4& a,
									const fltx4& b);  // 50
							{
								fltx4 retVal; // 2095
								_mm_cmple_ps(__m128 __A,
										__m128 __B);  // 2096
							}
							CmpLeSIMD<>(const fltx4& a,
									const fltx4& b);  // 2157
							_mm_movemask_ps(__m128 __A); // 1805
							TestSignSIMD<>(const fltx4& a); // 2157
							IsAllGreaterThan<>(const fltx4& a,
										const fltx4& b);  // 52
							MatrixInvert_Aligned(const matrix3x4a_t& in,
										matrix3x4a_t& out);  // 314
						}
					}
					matrix3x4_t::matrix3x4_t(); // 303
					matrix3x4a_t::matrix3x4a_t(); // 296
				}
				{
				}
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
						int i);  // 291
				CUtlMemory<Vector, int>::operator[](
						int i);  // 588
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
						int i);  // 168
				Vector::operator=(
						const Vector& vOther);  // 168
				CModelSkeletonBuilder::SetPosParent(
						int nBone,
						const Vector& vPos);  // 328
				CUtlMemory<Quaternion, int>::operator[](
						int i);  // 588
				CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
						int i);  // 173
				CModelSkeletonBuilder::SetRotParent(
						int nBone,
						const Quaternion& vRot);  // 329
			}
			operator&(BoneFlags_t a,
					BoneFlags_t b);  // 284
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
					int i);  // 204
			CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
			IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
					handle_t idx);  // 227
			Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
				KeyArg_t k);  // 226
			CModelSkeletonBuilder::FindBoneIndexByHash(
						uint32 nHash);  // 276
			CUtlString::Get(); // 279
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 153
			operator|(BoneFlags_t a,
					BoneFlags_t b);  // 163
			operator|=(BoneFlags_t& a,
					BoneFlags_t b);  // 153
			CModelSkeletonBuilder::AddFlags(
				int nBone,
				BoneFlags_t nFlags);  // 282
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
					int i);  // 252
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 291
			matrix3x4_t::Base(); // 291
			matrix3x4_t::Base(); // 291
			matrix3x4a_t::operator=(
					const matrix3x4_t& src);  // 290
			matrix3x4_t::matrix3x4_t(); // 290
			matrix3x4a_t::matrix3x4a_t(
					const matrix3x4_t& src);  // 257
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 35
			{
				fltx4 retVal; // 1352
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1353
			}
			SplatWSIMD<>(const fltx4& a); // 38
			{
				__v4sf __r0; // 2491
				__v4sf __r1; // 2491
				__v4sf __r2; // 2491
				__v4sf __r3; // 2491
				__v4sf __t0; // 2491
				__v4sf __t1; // 2491
				__v4sf __t2; // 2491
				__v4sf __t3; // 2491
			}
			TransposeSIMD<>(fltx4& x,
					fltx4& y,
					fltx4& z,
					fltx4& w);  // 40
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 36
			{
				fltx4 retVal; // 1352
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1353
			}
			SplatWSIMD<>(const fltx4& a); // 38
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 37
			{
				fltx4 retVal; // 1352
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1353
			}
			SplatWSIMD<>(const fltx4& a); // 38
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 1797
			NegSIMD<>(const fltx4& a); // 38
			_mm_store_ps(float* __P,
					__m128 __A);  // 273
			StoreAlignedSIMD<>(float* pSIMD,
						const fltx4& a);  // 42
			_mm_store_ps(float* __P,
					__m128 __A);  // 273
			StoreAlignedSIMD<>(float* pSIMD,
						const fltx4& a);  // 43
			_mm_store_ps(float* __P,
					__m128 __A);  // 273
			StoreAlignedSIMD<>(float* pSIMD,
						const fltx4& a);  // 44
			matrix3x4_t::matrix3x4_t(); // 303
			matrix3x4a_t::matrix3x4a_t(); // 46
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 11
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 12
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 13
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 2267
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 2267
			fabs<>(const fltx4& x); // 2272
			AbsSIMD<>(const fltx4& val); // 15
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 2267
			fabs<>(const fltx4& x); // 2272
			AbsSIMD<>(const fltx4& val); // 15
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 2267
			fabs<>(const fltx4& x); // 2272
			AbsSIMD<>(const fltx4& val); // 15
			MatrixDiffIdentity(const matrix3x4a_t& in); // 50
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 2267
			fabs<>(const fltx4& x); // 2272
			AbsSIMD<>(const fltx4& val); // 50
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 2267
			fabs<>(const fltx4& x); // 2272
			AbsSIMD<>(const fltx4& val); // 50
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 2267
			fabs<>(const fltx4& x); // 2272
			AbsSIMD<>(const fltx4& val); // 50
			{
				fltx4 retVal; // 2228
				_mm_max_ps(__m128 __A,
						__m128 __B);  // 2229
			}
			MaxSIMD<>(const fltx4& a,
					const fltx4& b);  // 50
			{
				fltx4 retVal; // 2095
				_mm_cmple_ps(__m128 __A,
						__m128 __B);  // 2096
			}
			CmpLeSIMD<>(const fltx4& a,
					const fltx4& b);  // 2157
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 2157
			IsAllGreaterThan<>(const fltx4& a,
						const fltx4& b);  // 52
			MatrixInvert_Aligned(const matrix3x4a_t& in,
						matrix3x4a_t& out);  // 259
			matrix3x4_t::matrix3x4_t(); // 303
			matrix3x4a_t::matrix3x4a_t(); // 258
			Vector::Vector(); // 260
			Quaternion::Quaternion(); // 261
			{
				matrix3x4a_t mLocalSpace; // 266
				CUtlMemory<CUtlStringToken, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
						int i);  // 265
				matrix3x4_t::matrix3x4_t(); // 303
				matrix3x4a_t::matrix3x4a_t(); // 266
			}
		}
	}
} /* size: 0 */

// <04BD588C> modellib/modelbuilder.cpp:244
// variables: 20
void CModelSkeletonBuilder::AppendRenderMeshSkeleton(const CRenderSkeleton* pRenderSkeleton, LODGroupMask_t nLODGroupMask)
{
	const char   __FUNCTION__; // 29074
	{
		int nBone; // 249
		{
			const RenderSkeletonBone_t* pBone; // 251
			uint32 nBoneHash; // 252
			uint32 nParentHash; // 253
			int nLocalBoneParent; // 254
			const matrix3x4a_t& mInvBindPose; // 257
			matrix3x4a_t mBindPose; // 258
			Vector vPos; // 260
			Quaternion vRot; // 261
			const int  nExistingBoneIndex; // 276
			const int  nIndex; // 279
			const BoneFlags_t  nMeshBoneFlags; // 281
			{
				matrix3x4a_t mLocalSpace; // 266
			}
			{
				const uint32  nGlobalParentHash; // 291
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 288
				}
				{
					matrix3x4a_t mLocalSpace; // 296
					{
						const int  nLocalReparentBoneIndex; // 305
						{
							matrix3x4a_t mBoneToWorld; // 311
							matrix3x4a_t mBoneToWorldInv; // 313
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <01F1A6FA> modellib/modelbuilder.cpp:244
// variables: 20
void CModelSkeletonBuilder::AppendRenderMeshSkeleton(const CRenderSkeleton* pRenderSkeleton, LODGroupMask_t nLODGroupMask)
{
	const char   __FUNCTION__; // 36597
	{
		int nBone; // 249
		{
			const RenderSkeletonBone_t* pBone; // 251
			uint32 nBoneHash; // 252
			uint32 nParentHash; // 253
			int nLocalBoneParent; // 254
			const matrix3x4a_t& mInvBindPose; // 257
			matrix3x4a_t mBindPose; // 258
			Vector vPos; // 260
			Quaternion vRot; // 261
			const int  nExistingBoneIndex; // 276
			const int  nIndex; // 279
			const BoneFlags_t  nMeshBoneFlags; // 281
			{
				matrix3x4a_t mLocalSpace; // 266
			}
			{
				const uint32  nGlobalParentHash; // 291
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 288
				}
				{
					matrix3x4a_t mLocalSpace; // 296
					{
						const int  nLocalReparentBoneIndex; // 305
						{
							matrix3x4a_t mBoneToWorld; // 311
							matrix3x4a_t mBoneToWorldInv; // 313
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <00B506CF> modellib/modelbuilder.cpp:244
// variables: 20
void CModelSkeletonBuilder::AppendRenderMeshSkeleton(const CRenderSkeleton* pRenderSkeleton, LODGroupMask_t nLODGroupMask)
{
	const char   __FUNCTION__; // 11322
	{
		int nBone; // 249
		{
			const RenderSkeletonBone_t* pBone; // 251
			uint32 nBoneHash; // 252
			uint32 nParentHash; // 253
			int nLocalBoneParent; // 254
			const matrix3x4a_t& mInvBindPose; // 257
			matrix3x4a_t mBindPose; // 258
			Vector vPos; // 260
			Quaternion vRot; // 261
			const int  nExistingBoneIndex; // 276
			const int  nIndex; // 279
			const BoneFlags_t  nMeshBoneFlags; // 281
			{
				matrix3x4a_t mLocalSpace; // 266
			}
			{
				const uint32  nGlobalParentHash; // 291
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 288
				}
				{
					matrix3x4a_t mLocalSpace; // 296
					{
						const int  nLocalReparentBoneIndex; // 305
						{
							matrix3x4a_t mBoneToWorld; // 311
							matrix3x4a_t mBoneToWorldInv; // 313
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <04BD4F84> modellib/modelbuilder.cpp:334
// variables: 4
// function calls: 37
void CModelSkeletonBuilder::MarkBonesWithHitboxsAsSimBones(const CRenderMesh* pMeshData)
{
	{
		int s; // 336
		{
			int nHitBoxes; // 338
			{
				int h; // 340
				{
					int nBoneIndex; // 342
					CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
							int i);  // 545
					CUtlRBTree<CUtlMap<char const::Element(
						int i);  // 93
					CUtlMap<char const::operator[](
							IndexType_t i);  // 186
					CUtlDict<CHitBoxSet, int>::Element(
						int i);  // 213
					CUtlDict<CHitBoxSet, int>::operator[](
							int i);  // 342
					CUtlMemory<CHitBox, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::operator[](
							int i);  // 342
					Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
						KeyArg_t k);  // 226
					CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
					CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
							int i);  // 204
					CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
					IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
							handle_t idx);  // 227
					CModelSkeletonBuilder::FindBoneIndexByHash(
								uint32 nHash);  // 342
					CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
							int i);  // 153
					operator|(BoneFlags_t a,
							BoneFlags_t b);  // 163
					operator|=(BoneFlags_t& a,
							BoneFlags_t b);  // 153
					CModelSkeletonBuilder::AddFlags(
						int nBone,
						BoneFlags_t nFlags);  // 345
					CUtlMemory<bool, int>::operator[](
							int i);  // 588
					CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
							int i);  // 451
					CModelSkeletonBuilder::MarkSimBone(
							int iBone);  // 346
				}
			}
			CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Count(); // 338
		}
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 611
		CUtlRBTree<CUtlMap<char const::LeftChild(
				int i);  // 1329
		CUtlRBTree<CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>::Node_t, i this); // 351
		CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>* this); // 384
		CUtlDict<CHitBoxSet, int>::First(); // 336
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsIdxValid(
				int i);  // 661
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsIdxAfter(
				int i,
				const Iterator_t& it);  // 664
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 611
		CUtlRBTree<CUtlMap<char const::LeftChild(
				int i);  // 667
		CUtlRBTree<CUtlMap<char const::IsValidIndex(
				int i);  // 659
		CUtlRBTree<CUtlMap<char const::IsValidIndex(
				int i);  // 190
		CUtlMap<char const::IsValidIndex(
				IndexType_t i);  // 250
		CUtlDict<CHitBoxSet, int>::IsValidIndex(
				int i);  // 336
		CUtlMap<char const::NextInorder(
				IndexType_t i);  // 390
		CUtlDict<CHitBoxSet, int>::Next(
			int i);  // 336
	}
} /* size: 343 */

// <04BD469F> modellib/modelbuilder.cpp:353
// variables: 8
// function calls: 32
void CModelSkeletonBuilder::MarkBonesWithConstraintsAsSimBones(const CRenderMesh* pMeshData)
{
	{
		int cIt; // 355
		{
			const CBaseConstraint* pConstraint; // 357
			{
				int tIt; // 361
				{
					const CConstraintTarget& target; // 363
					const int  nBoneIndex; // 364
					CUtlMemory<CConstraintTarget, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::operator[](
							int i);  // 363
					Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
						KeyArg_t k);  // 226
					CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
					CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
							int i);  // 204
					CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
					IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
							handle_t idx);  // 227
					CModelSkeletonBuilder::FindBoneIndexByHash(
								uint32 nHash);  // 364
					CUtlMemory<bool, int>::operator[](
							int i);  // 588
					CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
							int i);  // 451
					CModelSkeletonBuilder::MarkSimBone(
							int iBone);  // 368
				}
				CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 361
			}
			{
				int sIt; // 374
				{
					const CConstraintSlave& slave; // 376
					const int  nBoneIndex; // 377
					CUtlMemory<CConstraintSlave, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::operator[](
							int i);  // 376
					Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
						KeyArg_t k);  // 226
					CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
					CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
							int i);  // 204
					CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
					IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
							handle_t idx);  // 227
					CModelSkeletonBuilder::FindBoneIndexByHash(
								uint32 nHash);  // 377
					CUtlMemory<bool, int>::operator[](
							int i);  // 588
					CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
							int i);  // 451
					CModelSkeletonBuilder::MarkSimBone(
							int iBone);  // 381
					CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
							int i);  // 153
					operator|(BoneFlags_t a,
							BoneFlags_t b);  // 163
					operator|=(BoneFlags_t& a,
							BoneFlags_t b);  // 153
					CModelSkeletonBuilder::AddFlags(
						int nBone,
						BoneFlags_t nFlags);  // 382
				}
				CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 374
			}
			CUtlMemory<CBaseConstraint::operator[](
					int i);  // 595
			CUtlVectorBase<CBaseConstraint::operator[](
					int i);  // 357
		}
		CUtlVectorBase<CBaseConstraint::Count(); // 355
	}
} /* size: 302 */

// <04BE177D> modellib/modelbuilder.cpp:388
// function calls: 3
void CModelSkeletonBuilder::MarkBonesWithAttachmentsAsSimBones(const CRenderMesh* pMeshData)
{
	CUtlRBTree<CUtlMap<char const::Count()(char const* const&, char const* const&)>::Node_t, this); // 177
	CUtlMap<char const::Count()(char const* const&, char const* const&)>* this); // 232
	CUtlDict<CAttachment, int>::Count(); // 390
} /* size: 0, inline expansions: 3 (0 bytes) */

// <04BE0DAD> modellib/modelbuilder.cpp:388
// variables: 4
// function calls: 39
void CModelSkeletonBuilder::MarkBonesWithAttachmentsAsSimBones(const CRenderMesh* pMeshData)
{
	{
		int a; // 393
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 611
		CUtlRBTree<CUtlMap<char const::LeftChild(
				int i);  // 1329
		CUtlRBTree<CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>::Node_t, this); // 351
		CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>* this); // 384
		CUtlDict<CAttachment, int>::First(); // 393
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsIdxValid(
				int i);  // 661
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsIdxAfter(
				int i,
				const Iterator_t& it);  // 664
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 611
		CUtlRBTree<CUtlMap<char const::LeftChild(
				int i);  // 667
		CUtlRBTree<CUtlMap<char const::IsValidIndex(
				int i);  // 659
		CUtlRBTree<CUtlMap<char const::IsValidIndex(
				int i);  // 190
		CUtlMap<char const::IsValidIndex(
				IndexType_t i);  // 250
		CUtlDict<CAttachment, int>::IsValidIndex(
				int i);  // 393
		{
			int i; // 396
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
					int i);  // 545
			CUtlRBTree<CUtlMap<char const::Element(
				int i);  // 93
			CUtlMap<char const::operator[](
					IndexType_t i);  // 186
			CUtlDict<CAttachment, int>::Element(
				int i);  // 213
			CUtlDict<CAttachment, int>::operator[](
					int i);  // 396
			{
				const char* pInfluenceName; // 400
				int nBoneIndex; // 401
				CUtlString::Get(); // 400
				CUtlStringToken::CUtlStringToken(); // 121
				{
				}
				MakeStringToken(const char* pString,
						bool bWriteToDatabase);  // 119
				MakeStringToken(const char* pString,
						bool bWriteToDatabase);  // 220
				Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
					KeyArg_t k);  // 226
				CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
				CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
						int i);  // 204
				CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
				IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
						handle_t idx);  // 227
				CModelSkeletonBuilder::FindBoneIndexByHash(
							uint32 nHash);  // 221
				CModelSkeletonBuilder::FindBoneIndex(
						const char* pBoneName);  // 401
				CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
						int i);  // 153
				operator|(BoneFlags_t a,
						BoneFlags_t b);  // 163
				operator|=(BoneFlags_t& a,
						BoneFlags_t b);  // 153
				CModelSkeletonBuilder::AddFlags(
					int nBone,
					BoneFlags_t nFlags);  // 404
				CUtlMemory<bool, int>::operator[](
						int i);  // 588
				CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
						int i);  // 451
				CModelSkeletonBuilder::MarkSimBone(
						int iBone);  // 405
			}
		}
		CUtlMap<char const::NextInorder(
				IndexType_t i);  // 390
		CUtlDict<CAttachment, int>::Next(
			int i);  // 393
	}
} /* size: 0 */

// <04BD463F> modellib/modelbuilder.cpp:388
// variables: 4
void CModelSkeletonBuilder::MarkBonesWithAttachmentsAsSimBones(const CRenderMesh* pMeshData)
{
	{
		int a; // 393
		{
			int i; // 396
			{
				const char* pInfluenceName; // 400
				int nBoneIndex; // 401
			}
		}
	}
} /* size: 0 */

// <04BE5DCD> modellib/modelbuilder.cpp:413
// variable: 1
void CModelSkeletonBuilder::AppendSkeleton(const CAnimationGroup* pAnimationData)
{
	const CAnimKeyData* pKey; // 419
} /* size: 0, variables: 1 */

// <04BE5682> modellib/modelbuilder.cpp:413
// variables: 6
// function calls: 26
void CModelSkeletonBuilder::AppendSkeleton(const CAnimationGroup* pAnimationData)
{
	const CAnimKeyData* pKey; // 419
	{
		int i; // 421
		CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::Count(); // 421
		{
			int nParentIndex; // 423
			const char* pBoneName; // 424
			const char* pParentName; // 425
			int nIndex; // 429
			CUtlMemory<CAnimBone, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
					int i);  // 423
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 52
			CAnimBone::GetName(); // 424
			CUtlMemory<CAnimBone, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
					int i);  // 427
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 52
			CAnimBone::GetName(); // 427
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 209
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 213
			CUtlStringToken::CUtlStringToken(); // 210
			CModelSkeletonBuilder::FindOrAddBone(
					const char* pBoneName,
					const char* pParentName,
					float flSphere,
					BoneFlags_t nFlags,
					const Vector& vBoneLocalPos,
					const Quaternion& vBoneLocalRot);  // 429
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 153
			operator|(BoneFlags_t a,
					BoneFlags_t b);  // 163
			operator|=(BoneFlags_t& a,
					BoneFlags_t b);  // 153
			CModelSkeletonBuilder::AddFlags(
				int nBone,
				BoneFlags_t nFlags);  // 430
		}
	}
} /* size: 0, variables: 1 */

// <04BD45C5> modellib/modelbuilder.cpp:413
// variables: 6
void CModelSkeletonBuilder::AppendSkeleton(const CAnimationGroup* pAnimationData)
{
	const CAnimKeyData* pKey; // 419
	{
		int i; // 421
		{
			int nParentIndex; // 423
			const char* pBoneName; // 424
			const char* pParentName; // 425
			int nIndex; // 429
		}
	}
} /* size: 0, variables: 1 */

// <04BD4051> modellib/modelbuilder.cpp:436
// variables: 2
// function calls: 19
void CModelSkeletonBuilder::AppendRetargetDst(const CAnimRetargetData* pRetarget)
{
	{
		int i; // 439
		{
			int nBoneIndex; // 441
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 441
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 220
			Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
				KeyArg_t k);  // 226
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
					int i);  // 204
			CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
			IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
					handle_t idx);  // 227
			CModelSkeletonBuilder::FindBoneIndexByHash(
						uint32 nHash);  // 221
			CModelSkeletonBuilder::FindBoneIndex(
					const char* pBoneName);  // 441
			CUtlMemory<bool, int>::operator[](
					int i);  // 588
			CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
					int i);  // 451
			CModelSkeletonBuilder::MarkSimBone(
					int iBone);  // 444
			CUtlMemory<CAnimRetargetElementData, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
					int i);  // 441
		}
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Count(); // 439
	}
} /* size: 0 */

// <04BE00EF> modellib/modelbuilder.cpp:449
// function calls: 2
void CModelSkeletonBuilder::MarkSimBone(int iBone)
{
	CUtlMemory<bool, int>::operator[](
			int i);  // 588
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
			int i);  // 451
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04BD4027> modellib/modelbuilder.cpp:449
void CModelSkeletonBuilder::MarkSimBone(int iBone)
{
} /* size: 0 */

// <04B9B255> modellib/modelbuilder.cpp:455
// member variables: 3
// struct size: 12
struct RetargetKey_t {
	int32 m_nGroupType; /* 0 4 */
	int32 m_nChainType; /* 4 4 */
	int32 m_nIndex; /* 8 4 */
};

// <04BDF70D> modellib/modelbuilder.cpp:462
// function call: 1
bool RetargetKeyLessFunc(const RetargetKey_t& k1, const RetargetKey_t& k2)
{
	RetargetKeyLessFunc(const RetargetKey_t& k1,
				const RetargetKey_t& k2);  // 462
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04BD3FFB> modellib/modelbuilder.cpp:462
bool RetargetKeyLessFunc(const RetargetKey_t& k1, const RetargetKey_t& k2)
{
} /* size: 0 */

// <04BD0103> modellib/modelbuilder.cpp:487
// variables: 39
// function calls: 268
void CModelSkeletonBuilder::AppendRetargetSrc(const CAnimationGroup* pAnimationData, const CAnimRetargetData* pDstRetarget, ResourceId_t nId)
{
	const CAnimRetargetData* pSrcRetarget; // 497
	CUtlString sBoneName; // 501
	CUtlString sParentName; // 502
	CUtlVector<int, CUtlMemory<int, int> > skeletonToSrcBone; // 504
	const CAnimKeyData* pDecodeKey; // 506
	const char   __FUNCTION__; // 28905
	{
		int i; // 507
		{
			int nParentIndex; // 511
			BoneFlags_t nBoneFlags; // 516
			int nSkeletonIndex; // 517
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 52
			CAnimBone::GetName(); // 509
			CUtlMemory<CAnimBone, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
					int i);  // 516
			CUtlString::CUtlString(
					const char* pString);  // 517
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 517
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 517
			CUtlString::~CUtlString(); // 517
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 153
			operator|(BoneFlags_t a,
					BoneFlags_t b);  // 163
			operator|=(BoneFlags_t& a,
					BoneFlags_t b);  // 153
			CModelSkeletonBuilder::AddFlags(
				int nBone,
				BoneFlags_t nFlags);  // 522
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 520
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 153
			operator|(BoneFlags_t a,
					BoneFlags_t b);  // 163
			operator|=(BoneFlags_t& a,
					BoneFlags_t b);  // 153
			CModelSkeletonBuilder::AddFlags(
				int nBone,
				BoneFlags_t nFlags);  // 523
			CUtlMemory<CAnimBone, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
					int i);  // 509
			ResourceId_t::GetRaw(); // 509
			CUtlMemory<CAnimBone, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
					int i);  // 511
			CUtlMemory<CAnimBone, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
					int i);  // 514
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 52
			CAnimBone::GetName(); // 514
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 517
		}
		CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::Count(); // 507
	}
	{
		CUtlVector<int, CUtlMemory<int, int> > skeletonToSrcElement; // 529
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (*)(const RetargetKey_t&, const RetargetKey_t&)> dstRetarget; // 547
		RetargetKey_t key; // 549
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (*)(const RetargetKey_t&, const RetargetKey_t&)> srcRetarget; // 561
		CUtlString sSrcBoneName; // 574
		CUtlString sSrcParentName; // 575
		CUtlString sDstBoneName; // 576
		CUtlString sDstParentName; // 577
		{
			int i; // 531
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
			CModelSkeletonBuilder::NumBones(); // 531
		}
		{
			int i; // 535
			{
				int nSkeletonIndex; // 538
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 537
				CUtlMemory<CAnimRetargetElementData, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
						int i);  // 537
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 538
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 542
			}
			CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Count(); // 535
		}
		{
			int i; // 550
			{
				const CAnimRetargetElementData* pElement; // 552
				CUtlMemory<CAnimRetargetElementData, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
						int i);  // 552
				Node_t::Node_t(
					const KeyType_t& k,
					const ElemType_t& e);  // 207
				CUtlMap<RetargetKey_t, int, short unsigned int, bool (::Insert(
					const KeyType_t& key,
					const ElemType_t& insert,
					ERBTreeInsertBehavior eInsertBehavior);  // 556
			}
			CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Count(); // 550
		}
		{
			int i; // 563
			{
				const CAnimRetargetElementData* pElement; // 565
				CUtlMemory<CAnimRetargetElementData, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
						int i);  // 565
				Node_t::Node_t(
					const KeyType_t& k,
					const ElemType_t& e);  // 207
				CUtlMap<RetargetKey_t, int, short unsigned int, bool (::Insert(
					const KeyType_t& key,
					const ElemType_t& insert,
					ERBTreeInsertBehavior eInsertBehavior);  // 569
			}
			CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Count(); // 563
		}
		{
			int i; // 578
			{
				int nDstSkeletonIndex; // 583
				{
					int nSrcSkeletonIndex; // 588
					{
						int nSrcBone; // 591
						int nSrcParentBone; // 592
						{
							int nSrcParentSkeletonIndex; // 596
							{
								const CAnimRetargetElementData* pSrcParentElement; // 601
								int nDstParentElement; // 606
								{
									int nDstParentSkeletonIndex; // 609
									BoneFlags_t nBoneFlags; // 611
									int nSkeletonIndex; // 612
									CUtlMemory<CAnimRetargetElementData, int>::operator[](
											int i);  // 595
									CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
											int i);  // 609
									CBufferString::ReadBuffer(); // 1374
									CBufferString::ReadBuffer(); // 781
									CBufferString::operator char const*(); // 609
									CUtlMemory<CUtlString, int>::operator[](
											int i);  // 588
									CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
											int i);  // 610
									V_strlen(const char* str); // 393
									CUtlString::Length(); // 161
									CUtlString::Get(); // 161
									CUtlString::operator=(
											const CUtlString& src);  // 610
									CUtlMemory<CAnimBone, int>::operator[](
											int i);  // 595
									CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
											int i);  // 611
									CUtlString::Get(); // 441
									CUtlString::operator char const*(); // 612
									CUtlString::Get(); // 441
									CUtlString::operator char const*(); // 612
									CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
											int i);  // 588
									CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
											int i);  // 153
									CModelSkeletonBuilder::AddFlags(
										int nBone,
										BoneFlags_t nFlags);  // 613
								}
								CUtlMemory<CAnimRetargetElementData, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
										int i);  // 601
								LeftChild(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
										short unsigned int i);  // 1913
								CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::operator[](
										short unsigned int i);  // 545
								Element(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
									short unsigned int i);  // 1912
								CKeyLess::operator(
										const KeyType_t& left,
										const Node_t& right);  // 1912
								CKeyLess::operator(
										const Node_t& left,
										const KeyType_t& right);  // 1914
								RightChild(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
										short unsigned int i);  // 1915
								FindAltKeyType<RetargetKey_t, CUtlMap<RetargetKey_t, int>::CKeyLess>(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
																const RetargetKey_t& search,
																const CKeyLess& altLess);  // 298
								FindAltKeyType<RetargetKey_t>(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
												const RetargetKey_t& search);  // 243
								CUtlMap<RetargetKey_t, int, short unsigned int, bool (::Find(
									const KeyType_t& key);  // 606
							}
							{
								BoneFlags_t nBoneFlags; // 622
								int nSkeletonIndex; // 623
								CUtlMemory<CAnimBone, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
										int i);  // 621
								CBufferString::ReadBuffer(); // 1374
								CBufferString::ReadBuffer(); // 771
								CBufferString::Get(); // 52
								CAnimBone::GetName(); // 621
								CUtlString::operator=(
										const char* src);  // 621
								CUtlMemory<CAnimBone, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
										int i);  // 622
								CUtlString::Get(); // 354
								CUtlString::CUtlString(
										const CUtlString& string);  // 623
								CUtlString::Get(); // 441
								CUtlString::operator char const*(); // 623
								CUtlString::Get(); // 441
								CUtlString::operator char const*(); // 623
								CUtlString::~CUtlString(); // 623
								CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
										int i);  // 153
								operator|(BoneFlags_t a,
										BoneFlags_t b);  // 163
								operator|=(BoneFlags_t& a,
										BoneFlags_t b);  // 153
								CModelSkeletonBuilder::AddFlags(
									int nBone,
									BoneFlags_t nFlags);  // 624
								CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
										int i);  // 153
								operator|(BoneFlags_t a,
										BoneFlags_t b);  // 163
								operator|=(BoneFlags_t& a,
										BoneFlags_t b);  // 153
								CModelSkeletonBuilder::AddFlags(
									int nBone,
									BoneFlags_t nFlags);  // 625
								Construct<int, int>(int* pMemory); // 1252
								CUtlMemory<int, int>::operator[](
										int i);  // 602
								CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
									int i);  // 1252
								CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
								CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
										int num);  // 1249
								CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
										int& src);  // 626
								CUtlMemory<int, int>::operator[](
										int i);  // 602
								CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
									int i);  // 1252
								Construct<int, int>(int* pMemory); // 1252
								CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
								CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
										int num);  // 1249
								CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
										int& src);  // 627
							}
							CUtlMemory<CAnimBone, int>::operator[](
									int i);  // 595
							CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
									int i);  // 595
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 52
							CAnimBone::GetName(); // 595
							CUtlString::Get(); // 441
							CUtlString::operator char const*(); // 596
							CUtlMemory<int, int>::operator[](
									int i);  // 588
							CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
									int i);  // 598
						}
						CUtlMemory<int, int>::operator[](
								int i);  // 588
						CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
								int i);  // 591
						CUtlMemory<CAnimBone, int>::operator[](
								int i);  // 595
						CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
								int i);  // 592
					}
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
							int i);  // 587
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 587
					CUtlString::Get(); // 441
					CUtlString::operator char const*(); // 588
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 589
				}
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 580
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 580
				CUtlString::operator=(
						const char* src);  // 580
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 583
			}
			CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 578
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
		CModelSkeletonBuilder::NumBones(); // 530
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 529
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 63
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 484
		InvalidIndex(void); // 486
		InvalidIndex(void); // 488
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 489
		ResetDbgInfo(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 491
		CUtlRBTree(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
				int growSize,
				int initSize,
				const LessFunc_t& lessfunc);  // 63
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (::CUtlMap(
			int growSize,
			int initSize,
			LessFunc_t lessfunc);  // 547
		SetLessFunc(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
				const LessFunc_t& func);  // 201
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 201
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (::SetLessFunc(
				LessFunc_t func);  // 548
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 63
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 484
		InvalidIndex(void); // 486
		InvalidIndex(void); // 488
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 489
		ResetDbgInfo(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 491
		CUtlRBTree(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
				int growSize,
				int initSize,
				const LessFunc_t& lessfunc);  // 63
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (::CUtlMap(
			int growSize,
			int initSize,
			LessFunc_t lessfunc);  // 561
		SetLessFunc(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
				const LessFunc_t& func);  // 201
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 201
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (::SetLessFunc(
				LessFunc_t func);  // 562
		CUtlString::CUtlString(); // 574
		CUtlString::CUtlString(); // 575
		CUtlString::CUtlString(); // 576
		CUtlString::CUtlString(); // 577
		CUtlString::~CUtlString(); // 633
		CUtlString::~CUtlString(); // 633
		CUtlString::~CUtlString(); // 633
		CUtlString::~CUtlString(); // 633
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 903
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 1287
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 1288
		Purge(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 509
		ValidateAlignment<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int> >(void); // 508
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 510
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
		~CUtlRBTree(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 47
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (::~CUtlMap()(const RetargetKey_t&, const RetargetKey_t&)>* this); // 633
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 903
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 1287
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 1288
		Purge(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 509
		ValidateAlignment<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int> >(void); // 508
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 510
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
		~CUtlRBTree(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 47
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (::~CUtlMap()(const RetargetKey_t&, const RetargetKey_t&)>* this); // 633
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 633
	}
	{
		int nSkeletonIndex; // 637
		{
			int nParentIndex; // 639
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 641
			}
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 639
			Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
				KeyArg_t k);  // 226
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
					int i);  // 204
			CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
			IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
					handle_t idx);  // 227
			CModelSkeletonBuilder::FindBoneIndexByHash(
						uint32 nHash);  // 639
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 642
			operator&(BoneFlags_t a,
					BoneFlags_t b);  // 642
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 153
			operator|(BoneFlags_t a,
					BoneFlags_t b);  // 163
			operator|=(BoneFlags_t& a,
					BoneFlags_t b);  // 153
			CModelSkeletonBuilder::AddFlags(
				int nBone,
				BoneFlags_t nFlags);  // 644
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
		CModelSkeletonBuilder::NumBones(); // 637
	}
	CUtlString::CUtlString(); // 501
	CUtlString::CUtlString(); // 502
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 504
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 526
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 649
	CUtlString::~CUtlString(); // 649
	CUtlString::~CUtlString(); // 649
} /* size: 0, variables: 6, inline expansions: 18 (0 bytes) */

// <01F14F71> modellib/modelbuilder.cpp:487
// variables: 39
// function calls: 268
void CModelSkeletonBuilder::AppendRetargetSrc(const CAnimationGroup* pAnimationData, const CAnimRetargetData* pDstRetarget, ResourceId_t nId)
{
	const CAnimRetargetData* pSrcRetarget; // 497
	CUtlString sBoneName; // 501
	CUtlString sParentName; // 502
	CUtlVector<int, CUtlMemory<int, int> > skeletonToSrcBone; // 504
	const CAnimKeyData* pDecodeKey; // 506
	const char   __FUNCTION__; // 36428
	{
		int i; // 507
		{
			int nParentIndex; // 511
			BoneFlags_t nBoneFlags; // 516
			int nSkeletonIndex; // 517
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 52
			CAnimBone::GetName(); // 509
			CUtlMemory<CAnimBone, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
					int i);  // 516
			CUtlString::CUtlString(
					const char* pString);  // 517
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 517
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 517
			CUtlString::~CUtlString(); // 517
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 153
			operator|(BoneFlags_t a,
					BoneFlags_t b);  // 163
			operator|=(BoneFlags_t& a,
					BoneFlags_t b);  // 153
			CModelSkeletonBuilder::AddFlags(
				int nBone,
				BoneFlags_t nFlags);  // 522
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 520
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 153
			operator|(BoneFlags_t a,
					BoneFlags_t b);  // 163
			operator|=(BoneFlags_t& a,
					BoneFlags_t b);  // 153
			CModelSkeletonBuilder::AddFlags(
				int nBone,
				BoneFlags_t nFlags);  // 523
			CUtlMemory<CAnimBone, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
					int i);  // 509
			ResourceId_t::GetRaw(); // 509
			CUtlMemory<CAnimBone, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
					int i);  // 511
			CUtlMemory<CAnimBone, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
					int i);  // 514
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 52
			CAnimBone::GetName(); // 514
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 517
		}
		CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::Count(); // 507
	}
	{
		CUtlVector<int, CUtlMemory<int, int> > skeletonToSrcElement; // 529
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (*)(const RetargetKey_t&, const RetargetKey_t&)> dstRetarget; // 547
		RetargetKey_t key; // 549
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (*)(const RetargetKey_t&, const RetargetKey_t&)> srcRetarget; // 561
		CUtlString sSrcBoneName; // 574
		CUtlString sSrcParentName; // 575
		CUtlString sDstBoneName; // 576
		CUtlString sDstParentName; // 577
		{
			int i; // 531
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
			CModelSkeletonBuilder::NumBones(); // 531
		}
		{
			int i; // 535
			{
				int nSkeletonIndex; // 538
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 537
				CUtlMemory<CAnimRetargetElementData, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
						int i);  // 537
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 538
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 542
			}
			CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Count(); // 535
		}
		{
			int i; // 550
			{
				const CAnimRetargetElementData* pElement; // 552
				CUtlMemory<CAnimRetargetElementData, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
						int i);  // 552
				Node_t::Node_t(
					const KeyType_t& k,
					const ElemType_t& e);  // 207
				CUtlMap<RetargetKey_t, int, short unsigned int, bool (::Insert(
					const KeyType_t& key,
					const ElemType_t& insert,
					ERBTreeInsertBehavior eInsertBehavior);  // 556
			}
			CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Count(); // 550
		}
		{
			int i; // 563
			{
				const CAnimRetargetElementData* pElement; // 565
				CUtlMemory<CAnimRetargetElementData, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
						int i);  // 565
				Node_t::Node_t(
					const KeyType_t& k,
					const ElemType_t& e);  // 207
				CUtlMap<RetargetKey_t, int, short unsigned int, bool (::Insert(
					const KeyType_t& key,
					const ElemType_t& insert,
					ERBTreeInsertBehavior eInsertBehavior);  // 569
			}
			CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Count(); // 563
		}
		{
			int i; // 578
			{
				int nDstSkeletonIndex; // 583
				{
					int nSrcSkeletonIndex; // 588
					{
						int nSrcBone; // 591
						int nSrcParentBone; // 592
						{
							int nSrcParentSkeletonIndex; // 596
							{
								const CAnimRetargetElementData* pSrcParentElement; // 601
								int nDstParentElement; // 606
								{
									int nDstParentSkeletonIndex; // 609
									BoneFlags_t nBoneFlags; // 611
									int nSkeletonIndex; // 612
									CUtlMemory<CAnimRetargetElementData, int>::operator[](
											int i);  // 595
									CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
											int i);  // 609
									CBufferString::ReadBuffer(); // 1374
									CBufferString::ReadBuffer(); // 781
									CBufferString::operator char const*(); // 609
									CUtlMemory<CUtlString, int>::operator[](
											int i);  // 588
									CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
											int i);  // 610
									V_strlen(const char* str); // 393
									CUtlString::Length(); // 161
									CUtlString::Get(); // 161
									CUtlString::operator=(
											const CUtlString& src);  // 610
									CUtlMemory<CAnimBone, int>::operator[](
											int i);  // 595
									CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
											int i);  // 611
									CUtlString::Get(); // 441
									CUtlString::operator char const*(); // 612
									CUtlString::Get(); // 441
									CUtlString::operator char const*(); // 612
									CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
											int i);  // 588
									CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
											int i);  // 153
									CModelSkeletonBuilder::AddFlags(
										int nBone,
										BoneFlags_t nFlags);  // 613
								}
								CUtlMemory<CAnimRetargetElementData, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
										int i);  // 601
								LeftChild(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
										short unsigned int i);  // 1913
								CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::operator[](
										short unsigned int i);  // 545
								Element(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
									short unsigned int i);  // 1912
								CKeyLess::operator(
										const KeyType_t& left,
										const Node_t& right);  // 1912
								CKeyLess::operator(
										const Node_t& left,
										const KeyType_t& right);  // 1914
								RightChild(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
										short unsigned int i);  // 1915
								FindAltKeyType<RetargetKey_t, CUtlMap<RetargetKey_t, int>::CKeyLess>(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
																const RetargetKey_t& search,
																const CKeyLess& altLess);  // 298
								FindAltKeyType<RetargetKey_t>(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
												const RetargetKey_t& search);  // 243
								CUtlMap<RetargetKey_t, int, short unsigned int, bool (::Find(
									const KeyType_t& key);  // 606
							}
							{
								BoneFlags_t nBoneFlags; // 622
								int nSkeletonIndex; // 623
								CUtlMemory<CAnimBone, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
										int i);  // 621
								CBufferString::ReadBuffer(); // 1374
								CBufferString::ReadBuffer(); // 771
								CBufferString::Get(); // 52
								CAnimBone::GetName(); // 621
								CUtlString::operator=(
										const char* src);  // 621
								CUtlMemory<CAnimBone, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
										int i);  // 622
								CUtlString::Get(); // 354
								CUtlString::CUtlString(
										const CUtlString& string);  // 623
								CUtlString::Get(); // 441
								CUtlString::operator char const*(); // 623
								CUtlString::Get(); // 441
								CUtlString::operator char const*(); // 623
								CUtlString::~CUtlString(); // 623
								CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
										int i);  // 153
								operator|(BoneFlags_t a,
										BoneFlags_t b);  // 163
								operator|=(BoneFlags_t& a,
										BoneFlags_t b);  // 153
								CModelSkeletonBuilder::AddFlags(
									int nBone,
									BoneFlags_t nFlags);  // 624
								CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
										int i);  // 153
								operator|(BoneFlags_t a,
										BoneFlags_t b);  // 163
								operator|=(BoneFlags_t& a,
										BoneFlags_t b);  // 153
								CModelSkeletonBuilder::AddFlags(
									int nBone,
									BoneFlags_t nFlags);  // 625
								Construct<int, int>(int* pMemory); // 1252
								CUtlMemory<int, int>::operator[](
										int i);  // 602
								CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
									int i);  // 1252
								CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
								CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
										int num);  // 1249
								CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
										int& src);  // 626
								CUtlMemory<int, int>::operator[](
										int i);  // 602
								CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
									int i);  // 1252
								Construct<int, int>(int* pMemory); // 1252
								CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
								CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
										int num);  // 1249
								CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
										int& src);  // 627
							}
							CUtlMemory<CAnimBone, int>::operator[](
									int i);  // 595
							CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
									int i);  // 595
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 52
							CAnimBone::GetName(); // 595
							CUtlString::Get(); // 441
							CUtlString::operator char const*(); // 596
							CUtlMemory<int, int>::operator[](
									int i);  // 588
							CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
									int i);  // 598
						}
						CUtlMemory<int, int>::operator[](
								int i);  // 588
						CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
								int i);  // 591
						CUtlMemory<CAnimBone, int>::operator[](
								int i);  // 595
						CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
								int i);  // 592
					}
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
							int i);  // 587
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 587
					CUtlString::Get(); // 441
					CUtlString::operator char const*(); // 588
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 589
				}
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 580
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 580
				CUtlString::operator=(
						const char* src);  // 580
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 583
			}
			CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 578
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
		CModelSkeletonBuilder::NumBones(); // 530
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 529
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 63
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 484
		InvalidIndex(void); // 486
		InvalidIndex(void); // 488
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 489
		ResetDbgInfo(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 491
		CUtlRBTree(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
				int growSize,
				int initSize,
				const LessFunc_t& lessfunc);  // 63
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (::CUtlMap(
			int growSize,
			int initSize,
			LessFunc_t lessfunc);  // 547
		SetLessFunc(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
				const LessFunc_t& func);  // 201
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 201
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (::SetLessFunc(
				LessFunc_t func);  // 548
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 63
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 484
		InvalidIndex(void); // 486
		InvalidIndex(void); // 488
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 489
		ResetDbgInfo(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 491
		CUtlRBTree(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
				int growSize,
				int initSize,
				const LessFunc_t& lessfunc);  // 63
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (::CUtlMap(
			int growSize,
			int initSize,
			LessFunc_t lessfunc);  // 561
		SetLessFunc(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
				const LessFunc_t& func);  // 201
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 201
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (::SetLessFunc(
				LessFunc_t func);  // 562
		CUtlString::CUtlString(); // 574
		CUtlString::CUtlString(); // 575
		CUtlString::CUtlString(); // 576
		CUtlString::CUtlString(); // 577
		CUtlString::~CUtlString(); // 633
		CUtlString::~CUtlString(); // 633
		CUtlString::~CUtlString(); // 633
		CUtlString::~CUtlString(); // 633
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 903
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 1287
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 1288
		Purge(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 509
		ValidateAlignment<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int> >(void); // 508
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 510
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
		~CUtlRBTree(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 47
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (::~CUtlMap()(const RetargetKey_t&, const RetargetKey_t&)>* this); // 633
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 903
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 1287
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 1288
		Purge(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 509
		ValidateAlignment<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int> >(void); // 508
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 510
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
		~CUtlRBTree(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 47
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (::~CUtlMap()(const RetargetKey_t&, const RetargetKey_t&)>* this); // 633
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 633
	}
	{
		int nSkeletonIndex; // 637
		{
			int nParentIndex; // 639
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 641
			}
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 639
			Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
				KeyArg_t k);  // 226
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
					int i);  // 204
			CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
			IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
					handle_t idx);  // 227
			CModelSkeletonBuilder::FindBoneIndexByHash(
						uint32 nHash);  // 639
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 642
			operator&(BoneFlags_t a,
					BoneFlags_t b);  // 642
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 153
			operator|(BoneFlags_t a,
					BoneFlags_t b);  // 163
			operator|=(BoneFlags_t& a,
					BoneFlags_t b);  // 153
			CModelSkeletonBuilder::AddFlags(
				int nBone,
				BoneFlags_t nFlags);  // 644
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
		CModelSkeletonBuilder::NumBones(); // 637
	}
	CUtlString::CUtlString(); // 501
	CUtlString::CUtlString(); // 502
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 504
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 526
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 649
	CUtlString::~CUtlString(); // 649
	CUtlString::~CUtlString(); // 649
} /* size: 0, variables: 6, inline expansions: 18 (0 bytes) */

// <00B4AF46> modellib/modelbuilder.cpp:487
// variables: 39
// function calls: 268
void CModelSkeletonBuilder::AppendRetargetSrc(const CAnimationGroup* pAnimationData, const CAnimRetargetData* pDstRetarget, ResourceId_t nId)
{
	const CAnimRetargetData* pSrcRetarget; // 497
	CUtlString sBoneName; // 501
	CUtlString sParentName; // 502
	CUtlVector<int, CUtlMemory<int, int> > skeletonToSrcBone; // 504
	const CAnimKeyData* pDecodeKey; // 506
	const char   __FUNCTION__; // 11153
	{
		int i; // 507
		{
			int nParentIndex; // 511
			BoneFlags_t nBoneFlags; // 516
			int nSkeletonIndex; // 517
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 52
			CAnimBone::GetName(); // 509
			CUtlMemory<CAnimBone, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
					int i);  // 516
			CUtlString::CUtlString(
					const char* pString);  // 517
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 517
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 517
			CUtlString::~CUtlString(); // 517
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 153
			operator|(BoneFlags_t a,
					BoneFlags_t b);  // 163
			operator|=(BoneFlags_t& a,
					BoneFlags_t b);  // 153
			CModelSkeletonBuilder::AddFlags(
				int nBone,
				BoneFlags_t nFlags);  // 522
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 520
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 153
			operator|(BoneFlags_t a,
					BoneFlags_t b);  // 163
			operator|=(BoneFlags_t& a,
					BoneFlags_t b);  // 153
			CModelSkeletonBuilder::AddFlags(
				int nBone,
				BoneFlags_t nFlags);  // 523
			CUtlMemory<CAnimBone, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
					int i);  // 509
			ResourceId_t::GetRaw(); // 509
			CUtlMemory<CAnimBone, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
					int i);  // 511
			CUtlMemory<CAnimBone, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
					int i);  // 514
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 52
			CAnimBone::GetName(); // 514
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 517
		}
		CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::Count(); // 507
	}
	{
		CUtlVector<int, CUtlMemory<int, int> > skeletonToSrcElement; // 529
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (*)(const RetargetKey_t&, const RetargetKey_t&)> dstRetarget; // 547
		RetargetKey_t key; // 549
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (*)(const RetargetKey_t&, const RetargetKey_t&)> srcRetarget; // 561
		CUtlString sSrcBoneName; // 574
		CUtlString sSrcParentName; // 575
		CUtlString sDstBoneName; // 576
		CUtlString sDstParentName; // 577
		{
			int i; // 531
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
			CModelSkeletonBuilder::NumBones(); // 531
		}
		{
			int i; // 535
			{
				int nSkeletonIndex; // 538
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 537
				CUtlMemory<CAnimRetargetElementData, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
						int i);  // 537
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 538
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 542
			}
			CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Count(); // 535
		}
		{
			int i; // 550
			{
				const CAnimRetargetElementData* pElement; // 552
				CUtlMemory<CAnimRetargetElementData, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
						int i);  // 552
				Node_t::Node_t(
					const KeyType_t& k,
					const ElemType_t& e);  // 207
				CUtlMap<RetargetKey_t, int, short unsigned int, bool (::Insert(
					const KeyType_t& key,
					const ElemType_t& insert,
					ERBTreeInsertBehavior eInsertBehavior);  // 556
			}
			CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Count(); // 550
		}
		{
			int i; // 563
			{
				const CAnimRetargetElementData* pElement; // 565
				CUtlMemory<CAnimRetargetElementData, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
						int i);  // 565
				Node_t::Node_t(
					const KeyType_t& k,
					const ElemType_t& e);  // 207
				CUtlMap<RetargetKey_t, int, short unsigned int, bool (::Insert(
					const KeyType_t& key,
					const ElemType_t& insert,
					ERBTreeInsertBehavior eInsertBehavior);  // 569
			}
			CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Count(); // 563
		}
		{
			int i; // 578
			{
				int nDstSkeletonIndex; // 583
				{
					int nSrcSkeletonIndex; // 588
					{
						int nSrcBone; // 591
						int nSrcParentBone; // 592
						{
							int nSrcParentSkeletonIndex; // 596
							{
								const CAnimRetargetElementData* pSrcParentElement; // 601
								int nDstParentElement; // 606
								{
									int nDstParentSkeletonIndex; // 609
									BoneFlags_t nBoneFlags; // 611
									int nSkeletonIndex; // 612
									CUtlMemory<CAnimRetargetElementData, int>::operator[](
											int i);  // 595
									CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
											int i);  // 609
									CBufferString::ReadBuffer(); // 1374
									CBufferString::ReadBuffer(); // 781
									CBufferString::operator char const*(); // 609
									CUtlMemory<CUtlString, int>::operator[](
											int i);  // 588
									CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
											int i);  // 610
									V_strlen(const char* str); // 393
									CUtlString::Length(); // 161
									CUtlString::Get(); // 161
									CUtlString::operator=(
											const CUtlString& src);  // 610
									CUtlMemory<CAnimBone, int>::operator[](
											int i);  // 595
									CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
											int i);  // 611
									CUtlString::Get(); // 441
									CUtlString::operator char const*(); // 612
									CUtlString::Get(); // 441
									CUtlString::operator char const*(); // 612
									CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
											int i);  // 588
									CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
											int i);  // 153
									CModelSkeletonBuilder::AddFlags(
										int nBone,
										BoneFlags_t nFlags);  // 613
								}
								CUtlMemory<CAnimRetargetElementData, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
										int i);  // 601
								LeftChild(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
										short unsigned int i);  // 1913
								CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::operator[](
										short unsigned int i);  // 545
								Element(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
									short unsigned int i);  // 1912
								CKeyLess::operator(
										const KeyType_t& left,
										const Node_t& right);  // 1912
								CKeyLess::operator(
										const Node_t& left,
										const KeyType_t& right);  // 1914
								RightChild(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
										short unsigned int i);  // 1915
								FindAltKeyType<RetargetKey_t, CUtlMap<RetargetKey_t, int>::CKeyLess>(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
																const RetargetKey_t& search,
																const CKeyLess& altLess);  // 298
								FindAltKeyType<RetargetKey_t>(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
												const RetargetKey_t& search);  // 243
								CUtlMap<RetargetKey_t, int, short unsigned int, bool (::Find(
									const KeyType_t& key);  // 606
							}
							{
								BoneFlags_t nBoneFlags; // 622
								int nSkeletonIndex; // 623
								CUtlMemory<CAnimBone, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
										int i);  // 621
								CBufferString::ReadBuffer(); // 1374
								CBufferString::ReadBuffer(); // 771
								CBufferString::Get(); // 52
								CAnimBone::GetName(); // 621
								CUtlString::operator=(
										const char* src);  // 621
								CUtlMemory<CAnimBone, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
										int i);  // 622
								CUtlString::Get(); // 354
								CUtlString::CUtlString(
										const CUtlString& string);  // 623
								CUtlString::Get(); // 441
								CUtlString::operator char const*(); // 623
								CUtlString::Get(); // 441
								CUtlString::operator char const*(); // 623
								CUtlString::~CUtlString(); // 623
								CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
										int i);  // 153
								operator|(BoneFlags_t a,
										BoneFlags_t b);  // 163
								operator|=(BoneFlags_t& a,
										BoneFlags_t b);  // 153
								CModelSkeletonBuilder::AddFlags(
									int nBone,
									BoneFlags_t nFlags);  // 624
								CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
										int i);  // 153
								operator|(BoneFlags_t a,
										BoneFlags_t b);  // 163
								operator|=(BoneFlags_t& a,
										BoneFlags_t b);  // 153
								CModelSkeletonBuilder::AddFlags(
									int nBone,
									BoneFlags_t nFlags);  // 625
								Construct<int, int>(int* pMemory); // 1252
								CUtlMemory<int, int>::operator[](
										int i);  // 602
								CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
									int i);  // 1252
								CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
								CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
										int num);  // 1249
								CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
										int& src);  // 626
								CUtlMemory<int, int>::operator[](
										int i);  // 602
								CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
									int i);  // 1252
								Construct<int, int>(int* pMemory); // 1252
								CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
								CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
										int num);  // 1249
								CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
										int& src);  // 627
							}
							CUtlMemory<CAnimBone, int>::operator[](
									int i);  // 595
							CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
									int i);  // 595
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 52
							CAnimBone::GetName(); // 595
							CUtlString::Get(); // 441
							CUtlString::operator char const*(); // 596
							CUtlMemory<int, int>::operator[](
									int i);  // 588
							CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
									int i);  // 598
						}
						CUtlMemory<int, int>::operator[](
								int i);  // 588
						CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
								int i);  // 591
						CUtlMemory<CAnimBone, int>::operator[](
								int i);  // 595
						CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
								int i);  // 592
					}
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
							int i);  // 587
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 587
					CUtlString::Get(); // 441
					CUtlString::operator char const*(); // 588
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 589
				}
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 580
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 580
				CUtlString::operator=(
						const char* src);  // 580
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 583
			}
			CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 578
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
		CModelSkeletonBuilder::NumBones(); // 530
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 529
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 63
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 484
		InvalidIndex(void); // 486
		InvalidIndex(void); // 488
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 489
		ResetDbgInfo(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 491
		CUtlRBTree(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
				int growSize,
				int initSize,
				const LessFunc_t& lessfunc);  // 63
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (::CUtlMap(
			int growSize,
			int initSize,
			LessFunc_t lessfunc);  // 547
		SetLessFunc(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
				const LessFunc_t& func);  // 201
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 201
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (::SetLessFunc(
				LessFunc_t func);  // 548
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 63
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 484
		InvalidIndex(void); // 486
		InvalidIndex(void); // 488
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 489
		ResetDbgInfo(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 491
		CUtlRBTree(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
				int growSize,
				int initSize,
				const LessFunc_t& lessfunc);  // 63
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (::CUtlMap(
			int growSize,
			int initSize,
			LessFunc_t lessfunc);  // 561
		SetLessFunc(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
				const LessFunc_t& func);  // 201
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 201
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (::SetLessFunc(
				LessFunc_t func);  // 562
		CUtlString::CUtlString(); // 574
		CUtlString::CUtlString(); // 575
		CUtlString::CUtlString(); // 576
		CUtlString::CUtlString(); // 577
		CUtlString::~CUtlString(); // 633
		CUtlString::~CUtlString(); // 633
		CUtlString::~CUtlString(); // 633
		CUtlString::~CUtlString(); // 633
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 903
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 1287
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 1288
		Purge(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 509
		ValidateAlignment<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int> >(void); // 508
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 510
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
		~CUtlRBTree(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 47
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (::~CUtlMap()(const RetargetKey_t&, const RetargetKey_t&)>* this); // 633
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 903
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 1287
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 1288
		Purge(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 509
		ValidateAlignment<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int> >(void); // 508
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 510
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
		~CUtlRBTree(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 47
		CUtlMap<RetargetKey_t, int, short unsigned int, bool (::~CUtlMap()(const RetargetKey_t&, const RetargetKey_t&)>* this); // 633
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 633
	}
	{
		int nSkeletonIndex; // 637
		{
			int nParentIndex; // 639
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 641
			}
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 639
			Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
				KeyArg_t k);  // 226
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
					int i);  // 204
			CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
			IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
					handle_t idx);  // 227
			CModelSkeletonBuilder::FindBoneIndexByHash(
						uint32 nHash);  // 639
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 642
			operator&(BoneFlags_t a,
					BoneFlags_t b);  // 642
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 153
			operator|(BoneFlags_t a,
					BoneFlags_t b);  // 163
			operator|=(BoneFlags_t& a,
					BoneFlags_t b);  // 153
			CModelSkeletonBuilder::AddFlags(
				int nBone,
				BoneFlags_t nFlags);  // 644
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
		CModelSkeletonBuilder::NumBones(); // 637
	}
	CUtlString::CUtlString(); // 501
	CUtlString::CUtlString(); // 502
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 504
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 526
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 649
	CUtlString::~CUtlString(); // 649
	CUtlString::~CUtlString(); // 649
} /* size: 0, variables: 6, inline expansions: 18 (0 bytes) */

// <04BE5629> modellib/modelbuilder.cpp:651
void CModelSkeletonBuilder::AppendSkeleton(const CPhysAggregateData* pData)
{
} /* size: 0 */

// <04BE4E55> modellib/modelbuilder.cpp:651
// variables: 6
// function calls: 28
void CModelSkeletonBuilder::AppendSkeleton(const CPhysAggregateData* pData)
{
	{
		int nBone; // 656
		{
			uint32 nBoneHash; // 658
			int nParentIndex; // 666
			uint32 nParentHash; // 667
			matrix3x4_t tmBindPose; // 668
			CTransform tmBind; // 679
			matrix3x4_t::matrix3x4_t(); // 753
			MatrixPosition(const matrix3x4_t& matrix,
					Vector& position);  // 757
			MatrixQuaternion(const matrix3x4_t& mat,
					Quaternion& q,
					Vector& o,
					float& flScale);  // 308
			Quaternion::Quaternion(); // 305
			Vector::Vector(); // 306
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 309
			CTransform::InitFromMatrix(
					const matrix3x4_t& xform);  // 530
			VectorAligned::VectorAligned(); // 31
			QuaternionAligned::QuaternionAligned(); // 31
			CTransform::CTransform(); // 529
			matrix3x4_t::ToCTransform(); // 679
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 666
			matrix3x4_t::matrix3x4_t(); // 668
			CUtlMemory<matrix3x4_t, int>::operator[](
					int i);  // 672
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 671
			matrix3x4_t::matrix3x4_t(); // 1027
			MatrixInvert(const matrix3x4_t& in); // 672
			CUtlMemory<matrix3x4_t, int>::operator[](
					int i);  // 672
			matrix3x4_t::matrix3x4_t(); // 977
			ConcatTransforms(const matrix3x4_t& in1,
					const matrix3x4_t& in2);  // 672
			CUtlVectorUltraConservative<char const::operator[](
					int i);  // 680
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 680
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 680
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 658
			CUtlMemory<short unsigned int, int>::Count(); // 666
		}
		CUtlMemory<unsigned int, int>::Count(); // 656
	}
} /* size: 547 */

// <04BD0087> modellib/modelbuilder.cpp:651
// variables: 6
void CModelSkeletonBuilder::AppendSkeleton(const CPhysAggregateData* pData)
{
	{
		int nBone; // 656
		{
			uint32 nBoneHash; // 658
			int nParentIndex; // 666
			uint32 nParentHash; // 667
			matrix3x4_t tmBindPose; // 668
			CTransform tmBind; // 679
		}
	}
} /* size: 0 */

// <04BCFD65> modellib/modelbuilder.cpp:684
// variables: 2
// function calls: 11
void CModelSkeletonBuilder::FixupFlagsAndParents()
{
	int nBones; // 686
	{
		int b; // 690
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 692
		Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
			KeyArg_t k);  // 226
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
				int i);  // 204
		CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
		IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
				handle_t idx);  // 227
		CModelSkeletonBuilder::FindBoneIndexByHash(
					uint32 nHash);  // 692
		CUtlMemory<short int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
				int i);  // 692
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 686
} /* size: 129, variables: 1, inline expansions: 1 (7 bytes) */

// <04BE5E2B> modellib/modelbuilder.cpp:696
void CModelSkeletonBuilder::Finalize(bool bSort)
{
} /* size: 0 */

// <04BCF3DF> modellib/modelbuilder.cpp:703
// variables: 2
// function calls: 33
void CModelSkeletonBuilder::FillInPermData(ModelSkeletonData_t* pPermData)
{
	int nBones; // 712
	{
		int b; // 720
		CUtlString::Get(); // 722
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 722
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 722
		CUtlString::operator=(
				const char* src);  // 722
		CUtlMemory<short int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
				int i);  // 723
		CUtlMemory<short int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
				int i);  // 723
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 724
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 724
		CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
				int i);  // 725
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 725
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 726
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 726
		Vector::operator=(
				const Vector& vOther);  // 726
		CUtlMemory<Quaternion, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
				int i);  // 727
		CUtlMemory<Quaternion, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
				int i);  // 727
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 108
	CModelSkeletonBuilder::GetNumParentIndices(); // 705
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 710
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 712
	CModelSkeletonBuilder::Finalize(
		bool bSort);  // 707
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <04BCEA73> modellib/modelbuilder.cpp:731
// variables: 2
// function calls: 33
void CModelSkeletonBuilder::FillInRuntimeData(CModelSkeleton* pData)
{
	int nBones; // 738
	{
		int b; // 746
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 748
		CUtlMemory<short int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
				int i);  // 749
		CUtlMemory<short int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
				int i);  // 749
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 750
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 750
		CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
				int i);  // 751
		CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
				int i);  // 751
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 752
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 752
		Vector::operator=(
				const Vector& vOther);  // 752
		CUtlMemory<Quaternion, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
				int i);  // 753
		CUtlMemory<Quaternion, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
				int i);  // 753
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 748
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 748
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 108
	CModelSkeletonBuilder::GetNumParentIndices(); // 733
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 738
	CModelSkeletonBuilder::Finalize(
		bool bSort);  // 735
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <04BCE3CD> modellib/modelbuilder.cpp:759
// variable: 1
// function calls: 31
void CModelSkeletonBuilder::CompileToPermDataPointer()
{
	ModelSkeletonData_t* pPermSkeletonData; // 761
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 29
	CUtlMemory<short int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short int, CUtlMemory<short int, int> >::CUtlVector(); // 29
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 29
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 29
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 29
	CUtlMemory<Quaternion, int>::ValidateGrowSize(); // 475
	CUtlMemory<Quaternion, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVector(); // 29
	ModelSkeletonData_t::ModelSkeletonData_t(); // 761
} /* size: 0, variables: 1, inline expansions: 31 (0 bytes) */

// <04BCD720> modellib/modelbuilder.cpp:766
// variable: 1
// function calls: 65
void CModelSkeletonBuilder::DestroyPermDataPointer(const ModelSkeletonData_t* pPermData)
{
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 1798
	CUtlMemory<Quaternion, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	ValidateAlignment<Quaternion>(void); // 508
	CUtlMemory<Quaternion, int>::Purge(); // 510
	CUtlMemory<Quaternion, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 29
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 29
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 29
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 29
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveAll(); // 1798
	CUtlMemory<short int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short int, int>::Purge(); // 903
	CUtlMemory<short int, int>::Purge(); // 1799
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
	ValidateAlignment<short int>(void); // 508
	CUtlMemory<short int, int>::Purge(); // 510
	CUtlMemory<short int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 29
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
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 29
	ModelSkeletonData_t::~ModelSkeletonData_t(); // 768
} /* size: 0, inline expansions: 61 (0 bytes) */

// <04BCCD6B> modellib/modelbuilder.cpp:774
// variable: 1
// function calls: 47
void CModelSkeletonBuilder::SortBoneList()
{
	CModelSkeletonSorter sorter; // 777
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 809
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 809
	CUtlMemory<bool, int>::ValidateGrowSize(); // 475
	CUtlMemory<bool, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<bool, CUtlMemory<bool, int> >::CUtlVector(); // 809
	CModelSkeletonSorter::CModelSkeletonSorter(
				CModelSkeletonBuilder& skeleton);  // 777
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveAll(); // 1798
	CUtlMemory<bool, int>::IsExternallyAllocated(); // 905
	CUtlMemory<bool, int>::Purge(); // 903
	CUtlMemory<bool, int>::Purge(); // 1799
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::Purge(); // 560
	ValidateAlignment<bool>(void); // 508
	CUtlMemory<bool, int>::Purge(); // 510
	CUtlMemory<bool, int>::~CUtlMemory(); // 562
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::~CUtlVectorBase(); // 410
	CUtlVector<bool, CUtlMemory<bool, int> >::~CUtlVector(); // 210
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 210
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 210
	CModelSkeletonSorter::~CModelSkeletonSorter(); // 779
} /* size: 245, variables: 1, inline expansions: 47 (773 bytes) */

// <04BCC46B> modellib/modelbuilder.cpp:785
// variables: 5
// function calls: 36
void CModelSkeletonBuilder::GetBoneToWorld(matrix3x4a_t& mBoneToWorld, int nIndex)
{
	CUtlVector<int, CUtlMemory<int, int> > inclusivePath; // 790
	matrix3x4a_t mLocal; // 797
	{
		int nTmpIndex; // 792
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 1198
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1201
		CopyConstruct<int>(int* pMemory,
					const int& src);  // 1201
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
				const int& src);  // 794
		Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
			KeyArg_t k);  // 226
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
				int i);  // 204
		CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
		IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
				handle_t idx);  // 227
		CModelSkeletonBuilder::FindBoneIndexByHash(
					uint32 nHash);  // 792
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 792
	}
	{
		int i; // 799
		{
			const int  nTmpBoneIndex; // 801
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 129
			CModelSkeletonBuilder::GetBonePos(
					int nBone);  // 802
			RadianEuler::RadianEuler(
					const Quaternion& q);  // 802
			CUtlMemory<Quaternion, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
					int i);  // 134
			CModelSkeletonBuilder::GetBoneRotation(
					int nBone);  // 802
		}
	}
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 790
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 797
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 806
} /* size: 543, variables: 2, inline expansions: 15 (259 bytes) */

// <04BCC12B> modellib/modelbuilder.cpp:809
// function calls: 15
void CModelSkeletonSorter::CModelSkeletonSorter(CModelSkeletonBuilder& skeleton)
{
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 809
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 809
	CUtlMemory<bool, int>::ValidateGrowSize(); // 475
	CUtlMemory<bool, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<bool, CUtlMemory<bool, int> >::CUtlVector(); // 809
} /* size: 0, inline expansions: 15 (0 bytes) */

// <04BCC101> modellib/modelbuilder.cpp:809
void CModelSkeletonSorter::CModelSkeletonSorter(CModelSkeletonBuilder& skeleton)
{
} /* size: 0 */

// <04BE0183> modellib/modelbuilder.cpp:814
// function calls: 2
void CModelSkeletonSorter::GetBoneCount()
{
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
	CModelSkeletonBuilder::NumBones(); // 816
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04BCC0E4> modellib/modelbuilder.cpp:814
void CModelSkeletonSorter::GetBoneCount()
{
} /* size: 0 */

// <04BE020D> modellib/modelbuilder.cpp:819
// variable: 1
// function calls: 3
void CModelSkeletonSorter::IsIdentity()
{
	{
		int i; // 821
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 821
		CUtlMemory<int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 823
	}
} /* size: 0 */

// <04BCC0BA> modellib/modelbuilder.cpp:819
// variable: 1
void CModelSkeletonSorter::IsIdentity()
{
	{
		int i; // 821
	}
} /* size: 0 */

// <04BCB456> modellib/modelbuilder.cpp:829
// variables: 12
// function calls: 47
void CModelSkeletonSorter::SortBones()
{
	bool bReordered; // 848
	const char   __FUNCTION__; // 28699
	{
		int i; // 838
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
		CModelSkeletonBuilder::NumBones(); // 816
		CModelSkeletonSorter::GetBoneCount(); // 838
		CUtlMemory<bool, int>::operator[](
				int i);  // 588
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
				int i);  // 840
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 841
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 866
	}
	{
		int nBoneIndex; // 867
		{
			int nParentIndex; // 871
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
			}
		}
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
	CModelSkeletonBuilder::NumBones(); // 816
	CModelSkeletonSorter::GetBoneCount(); // 831
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 834
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
	CModelSkeletonBuilder::NumBones(); // 816
	CModelSkeletonSorter::GetBoneCount(); // 835
	CUtlMemory<int, int>::IsGrowable(); // 881
	CUtlMemory<int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCapacity(
			int num);  // 835
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
	CModelSkeletonBuilder::NumBones(); // 816
	CModelSkeletonSorter::GetBoneCount(); // 836
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
	CModelSkeletonBuilder::NumBones(); // 816
	CModelSkeletonSorter::GetBoneCount(); // 837
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<bool, int>::NumAllocated(); // 782
	CUtlMemory<bool, int>::Base(); // 112
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::Base(); // 368
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::SetCount(
		int count);  // 837
	{
		int i; // 900
	}
	CModelSkeletonSorter::AddAllBones(); // 845
	{
		int i; // 821
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 821
		CUtlMemory<int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 823
	}
	CModelSkeletonSorter::IsIdentity(); // 849
	{
		int nNewBone; // 1105
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1105
		{
			int nOldReference; // 1107
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 1107
			{
				int nNewReference; // 1110
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 1110
			}
		}
	}
	CModelSkeletonSorter::RemapArray(
			CUtlVector<short int, CUtlMemory<short int, int> >& arr);  // 853
} /* size: 807, variables: 2, inline expansions: 32 (879 bytes) */

// <01F102C4> modellib/modelbuilder.cpp:829
// variables: 12
// function calls: 47
void CModelSkeletonSorter::SortBones()
{
	bool bReordered; // 848
	const char   __FUNCTION__; // 36222
	{
		int i; // 838
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
		CModelSkeletonBuilder::NumBones(); // 816
		CModelSkeletonSorter::GetBoneCount(); // 838
		CUtlMemory<bool, int>::operator[](
				int i);  // 588
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
				int i);  // 840
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 841
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 866
	}
	{
		int nBoneIndex; // 867
		{
			int nParentIndex; // 871
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
			}
		}
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
	CModelSkeletonBuilder::NumBones(); // 816
	CModelSkeletonSorter::GetBoneCount(); // 831
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 834
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
	CModelSkeletonBuilder::NumBones(); // 816
	CModelSkeletonSorter::GetBoneCount(); // 835
	CUtlMemory<int, int>::IsGrowable(); // 881
	CUtlMemory<int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCapacity(
			int num);  // 835
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
	CModelSkeletonBuilder::NumBones(); // 816
	CModelSkeletonSorter::GetBoneCount(); // 836
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
	CModelSkeletonBuilder::NumBones(); // 816
	CModelSkeletonSorter::GetBoneCount(); // 837
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<bool, int>::NumAllocated(); // 782
	CUtlMemory<bool, int>::Base(); // 112
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::Base(); // 368
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::SetCount(
		int count);  // 837
	{
		int i; // 900
	}
	CModelSkeletonSorter::AddAllBones(); // 845
	{
		int i; // 821
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 821
		CUtlMemory<int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 823
	}
	CModelSkeletonSorter::IsIdentity(); // 849
	{
		int nNewBone; // 1105
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1105
		{
			int nOldReference; // 1107
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 1107
			{
				int nNewReference; // 1110
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 1110
			}
		}
	}
	CModelSkeletonSorter::RemapArray(
			CUtlVector<short int, CUtlMemory<short int, int> >& arr);  // 853
} /* size: 0, variables: 2, inline expansions: 32 (0 bytes) */

// <00B46299> modellib/modelbuilder.cpp:829
// variables: 12
// function calls: 47
void CModelSkeletonSorter::SortBones()
{
	bool bReordered; // 848
	const char   __FUNCTION__; // 10947
	{
		int i; // 838
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
		CModelSkeletonBuilder::NumBones(); // 816
		CModelSkeletonSorter::GetBoneCount(); // 838
		CUtlMemory<bool, int>::operator[](
				int i);  // 588
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
				int i);  // 840
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 841
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 866
	}
	{
		int nBoneIndex; // 867
		{
			int nParentIndex; // 871
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
			}
		}
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
	CModelSkeletonBuilder::NumBones(); // 816
	CModelSkeletonSorter::GetBoneCount(); // 831
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 834
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
	CModelSkeletonBuilder::NumBones(); // 816
	CModelSkeletonSorter::GetBoneCount(); // 835
	CUtlMemory<int, int>::IsGrowable(); // 881
	CUtlMemory<int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCapacity(
			int num);  // 835
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
	CModelSkeletonBuilder::NumBones(); // 816
	CModelSkeletonSorter::GetBoneCount(); // 836
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
	CModelSkeletonBuilder::NumBones(); // 816
	CModelSkeletonSorter::GetBoneCount(); // 837
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<bool, int>::NumAllocated(); // 782
	CUtlMemory<bool, int>::Base(); // 112
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::Base(); // 368
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::SetCount(
		int count);  // 837
	{
		int i; // 900
	}
	CModelSkeletonSorter::AddAllBones(); // 845
	{
		int i; // 821
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 821
		CUtlMemory<int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 823
	}
	CModelSkeletonSorter::IsIdentity(); // 849
	{
		int nNewBone; // 1105
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1105
		{
			int nOldReference; // 1107
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 1107
			{
				int nNewReference; // 1110
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 1110
			}
		}
	}
	CModelSkeletonSorter::RemapArray(
			CUtlVector<short int, CUtlMemory<short int, int> >& arr);  // 853
} /* size: 807, variables: 2, inline expansions: 32 (879 bytes) */

// <04BE1BAA> modellib/modelbuilder.cpp:878
// variables: 2
// function calls: 3
void CModelSkeletonSorter::AddAllBones()
{
	int nBones; // 880
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
	CModelSkeletonBuilder::NumBones(); // 816
	CModelSkeletonSorter::GetBoneCount(); // 880
	{
		int i; // 900
	}
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <04BCB3CA> modellib/modelbuilder.cpp:878
// variables: 5
void CModelSkeletonSorter::AddAllBones()
{
	int nBones; // 880
	{
		int* pShuffle; // 886
		{
			int i; // 887
		}
		{
			int i; // 893
		}
	}
	{
		int i; // 900
	}
} /* size: 0, variables: 1 */

// <04BCB0AB> modellib/modelbuilder.cpp:948
// variables: 2
// function calls: 12
void CModelSkeletonSorter::ForceSimBonesToAllLods()
{
	{
		int b; // 952
		{
			int nOldBone; // 954
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 954
			CUtlMemory<bool, int>::operator[](
					int i);  // 588
			CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
					int i);  // 955
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 153
			operator|(BoneFlags_t a,
					BoneFlags_t b);  // 163
			operator|=(BoneFlags_t& a,
					BoneFlags_t b);  // 153
			CModelSkeletonBuilder::AddFlags(
				int nBone,
				BoneFlags_t nFlags);  // 957
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
		CModelSkeletonBuilder::NumBones(); // 816
		CModelSkeletonSorter::GetBoneCount(); // 952
	}
} /* size: 111 */

// <04BC9E1F> modellib/modelbuilder.cpp:967
// variables: 14
// function calls: 82
void CModelSkeletonSorter::PackLodBonesTogether()
{
	int nBones; // 972
	CUtlVector<int, CUtlMemory<int, int> > arrClustered; // 974
	CUtlVector<bool, CUtlMemory<bool, int> > arrAdded; // 975
	{
		int b; // 981
		{
			int nOldBone; // 983
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 983
			CUtlMemory<bool, int>::operator[](
					int i);  // 588
			CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
					int i);  // 984
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 986
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 986
		}
	}
	{
		int i; // 992
		{
			int b; // 994
			{
				int nOldBone; // 996
				BoneFlags_t nFlags; // 997
				BoneFlags_t nBoneFlag; // 999
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 996
				CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
						int i);  // 119
				CModelSkeletonBuilder::GetFlags(
					int nBone);  // 997
				operator&(BoneFlags_t a,
						BoneFlags_t b);  // 1000
				CUtlMemory<int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
					int i);  // 1201
				CopyConstruct<int>(int* pMemory,
							const int& src);  // 1201
				CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
						const int& src);  // 1002
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 1002
			}
		}
	}
	{
		int b; // 1009
		{
			int nOldBone; // 1011
			BoneFlags_t nFlags; // 1012
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1011
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 119
			CModelSkeletonBuilder::GetFlags(
				int nBone);  // 1012
			operator&(BoneFlags_t a,
					BoneFlags_t b);  // 1014
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 1016
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1016
		}
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 972
	CUtlMemory<bool, int>::ValidateGrowSize(); // 475
	CUtlMemory<bool, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<bool, CUtlMemory<bool, int> >::CUtlVector(); // 975
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCapacity(
			int num);  // 976
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 974
	{
		int i; // 1554
	}
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::FillWithValue(
			const bool& src);  // 978
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::EnsureCount(
			int num);  // 977
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 102
	CUtlVectorBase<int, CUtlMemory<int, int> >::begin(); // 1344
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 173
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 1344
	CUtlVectorBase<int, CUtlMemory<int, int> >::CopyArray(
			const int* pArray,
			int size);  // 1021
	CUtlMemory<bool, int>::Purge(); // 903
	CUtlMemory<bool, int>::Purge(); // 1799
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::Purge(); // 560
	ValidateAlignment<bool>(void); // 508
	CUtlMemory<bool, int>::Purge(); // 510
	CUtlMemory<bool, int>::~CUtlMemory(); // 562
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::~CUtlVectorBase(); // 410
	CUtlVector<bool, CUtlMemory<bool, int> >::~CUtlVector(); // 1022
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1022
} /* size: 1510, variables: 3, inline expansions: 42 (2067 bytes) */

// <04BC9850> modellib/modelbuilder.cpp:1027
// variables: 7
// function calls: 22
void CModelSkeletonSorter::ChainBoneFlagsToParents()
{
	BoneFlags_t nFlagsToChain; // 1029
	int nBones; // 1032
	{
		int b; // 1033
		{
			int nOldBone; // 1035
			int nOldParent; // 1037
			{
				BoneFlags_t nLocalFlags; // 1045
				{
					BoneFlags_t nParentFlags; // 1048
					CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
							int i);  // 1048
					operator&(BoneFlags_t a,
							BoneFlags_t b);  // 1048
					operator|(BoneFlags_t a,
							BoneFlags_t b);  // 163
					operator|=(BoneFlags_t& a,
							BoneFlags_t b);  // 1052
				}
				CUtlMemory<bool, int>::operator[](
						int i);  // 588
				CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
						int i);  // 1040
				CUtlMemory<bool, int>::operator[](
						int i);  // 588
				CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
						int i);  // 1042
				CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
						int i);  // 1045
				operator&(BoneFlags_t a,
						BoneFlags_t b);  // 1045
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1035
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 108
			CModelSkeletonBuilder::GetNumParentIndices(); // 113
			{
			}
			CUtlMemory<short int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 114
			CModelSkeletonBuilder::GetParent(
					int nBone);  // 1037
		}
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 103
	CModelSkeletonBuilder::NumBones(); // 816
	CModelSkeletonSorter::GetBoneCount(); // 1032
} /* size: 0, variables: 2, inline expansions: 3 (15 bytes) */

// <04BC902E> modellib/modelbuilder.cpp:1059
// variables: 6
// function calls: 32
void CModelSkeletonSorter::AddBoneAndItsParents(int nOldBone, BoneFlags_t nFlagMask, BoneFlags_t nFlagEq)
{
	const char   __FUNCTION__; // 28981
	{
		int nParent; // 1064
		int nAdded; // 1074
		{
			const char* pBoneName; // 1067
			const char* pParentName; // 1068
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1069
			}
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 119
			CModelSkeletonBuilder::GetFlags(
				int nBone);  // 1069
			operator&(BoneFlags_t a,
					BoneFlags_t b);  // 1069
		}
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 108
		CModelSkeletonBuilder::GetNumParentIndices(); // 113
		{
		}
		CUtlMemory<short int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
				int i);  // 114
		CModelSkeletonBuilder::GetParent(
				int nBone);  // 1064
		CUtlMemory<bool, int>::operator[](
				int i);  // 588
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
				int i);  // 1065
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
				const int& src);  // 1074
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 1075
		CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
				int i);  // 119
		CModelSkeletonBuilder::GetFlags(
			int nBone);  // 1077
		operator&(BoneFlags_t a,
				BoneFlags_t b);  // 1077
	}
	CUtlMemory<bool, int>::operator[](
			int i);  // 588
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
			int i);  // 1061
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
			int i);  // 119
	CModelSkeletonBuilder::GetFlags(
		int nBone);  // 1061
	operator&(BoneFlags_t a,
			BoneFlags_t b);  // 1061
} /* size: 0, variables: 1, inline expansions: 6 (43 bytes) */

// <01F0DE9C> modellib/modelbuilder.cpp:1059
// variables: 6
// function calls: 32
void CModelSkeletonSorter::AddBoneAndItsParents(int nOldBone, BoneFlags_t nFlagMask, BoneFlags_t nFlagEq)
{
	const char   __FUNCTION__; // 36504
	{
		int nParent; // 1064
		int nAdded; // 1074
		{
			const char* pBoneName; // 1067
			const char* pParentName; // 1068
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1069
			}
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 119
			CModelSkeletonBuilder::GetFlags(
				int nBone);  // 1069
			operator&(BoneFlags_t a,
					BoneFlags_t b);  // 1069
		}
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 108
		CModelSkeletonBuilder::GetNumParentIndices(); // 113
		{
		}
		CUtlMemory<short int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
				int i);  // 114
		CModelSkeletonBuilder::GetParent(
				int nBone);  // 1064
		CUtlMemory<bool, int>::operator[](
				int i);  // 588
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
				int i);  // 1065
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
				const int& src);  // 1074
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 1075
		CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
				int i);  // 119
		CModelSkeletonBuilder::GetFlags(
			int nBone);  // 1077
		operator&(BoneFlags_t a,
				BoneFlags_t b);  // 1077
	}
	CUtlMemory<bool, int>::operator[](
			int i);  // 588
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
			int i);  // 1061
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
			int i);  // 119
	CModelSkeletonBuilder::GetFlags(
		int nBone);  // 1061
	operator&(BoneFlags_t a,
			BoneFlags_t b);  // 1061
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <00B43E71> modellib/modelbuilder.cpp:1059
// variables: 6
// function calls: 32
void CModelSkeletonSorter::AddBoneAndItsParents(int nOldBone, BoneFlags_t nFlagMask, BoneFlags_t nFlagEq)
{
	const char   __FUNCTION__; // 11229
	{
		int nParent; // 1064
		int nAdded; // 1074
		{
			const char* pBoneName; // 1067
			const char* pParentName; // 1068
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1069
			}
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 119
			CModelSkeletonBuilder::GetFlags(
				int nBone);  // 1069
			operator&(BoneFlags_t a,
					BoneFlags_t b);  // 1069
		}
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 108
		CModelSkeletonBuilder::GetNumParentIndices(); // 113
		{
		}
		CUtlMemory<short int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
				int i);  // 114
		CModelSkeletonBuilder::GetParent(
				int nBone);  // 1064
		CUtlMemory<bool, int>::operator[](
				int i);  // 588
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
				int i);  // 1065
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
				const int& src);  // 1074
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 1075
		CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
				int i);  // 119
		CModelSkeletonBuilder::GetFlags(
			int nBone);  // 1077
		operator&(BoneFlags_t a,
				BoneFlags_t b);  // 1077
	}
	CUtlMemory<bool, int>::operator[](
			int i);  // 588
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
			int i);  // 1061
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
			int i);  // 119
	CModelSkeletonBuilder::GetFlags(
		int nBone);  // 1061
	operator&(BoneFlags_t a,
			BoneFlags_t b);  // 1061
} /* size: 0, variables: 1, inline expansions: 6 (43 bytes) */

// <04BB5658> modellib/modelbuilder.cpp:1082
// variables: 7
// function calls: 48
void CModelSkeletonSorter::ReorderArray<CUtlString>(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& arr)
{
	const char   __FUNCTION__; // 28780
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 1091
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1089
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 1091
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 1091
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<CUtlString*>(CUtlString *& x,
					CUtlString *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<CUtlString, int>::Swap(
		CUtlMemory<CUtlString, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<CUtlString*>(CUtlString *& __a,
				CUtlString *& __b);  // 19
	V_swap<CUtlString*>(CUtlString *& x,
				CUtlString *& y);  // 1354
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Swap(
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& vec);  // 1099
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
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 1100
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
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 1100
} /* size: 546, variables: 2, inline expansions: 28 (1020 bytes) */

// <04BB4E80> modellib/modelbuilder.cpp:1082
// variables: 5
// function calls: 32
void ReorderArray<short CModelSkeletonSorter::int>(CUtlVector<short int, CUtlMemory<short int, int> >& arr)
{
	const char   __FUNCTION__; // 28780
	CUtlVector<short int, CUtlMemory<short int, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 1089
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 1091
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<short int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short int, CUtlMemory<short int, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<short int, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<short int*>(short int *& x,
					short int *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<short int, int>::Swap(
		CUtlMemory<short int, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<short int*>(short int *& __a,
			short int *& __b);  // 19
	V_swap<short int*>(short int *& x,
				short int *& y);  // 1354
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Swap(
		CUtlVectorBase<short int, CUtlMemory<short int, int> >& vec);  // 1099
	CUtlMemory<short int, int>::Purge(); // 903
	CUtlMemory<short int, int>::Purge(); // 1799
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 1100
	CUtlMemory<short int, int>::Purge(); // 903
	CUtlMemory<short int, int>::Purge(); // 1799
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 1100
} /* size: 400, variables: 2, inline expansions: 26 (570 bytes) */

// <04BB46A8> modellib/modelbuilder.cpp:1082
// variables: 5
// function calls: 32
void ReorderArray<unsigned CModelSkeletonSorter::int>(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& arr)
{
	const char   __FUNCTION__; // 28780
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 1089
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 1091
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<unsigned int*>(unsigned int *& x,
						unsigned int *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<unsigned int, int>::Swap(
		CUtlMemory<unsigned int, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<unsigned int*>(unsigned int *& __a,
				unsigned int *& __b);  // 19
	V_swap<unsigned int*>(unsigned int *& x,
				unsigned int *& y);  // 1354
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Swap(
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& vec);  // 1099
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 1100
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 1100
} /* size: 400, variables: 2, inline expansions: 26 (578 bytes) */

// <04BB3ED0> modellib/modelbuilder.cpp:1082
// variables: 5
// function calls: 32
void CModelSkeletonSorter::ReorderArray<float>(CUtlVector<float, CUtlMemory<float, int> >& arr)
{
	const char   __FUNCTION__; // 28780
	CUtlVector<float, CUtlMemory<float, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1089
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 1091
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<float, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<float*>(float *& x,
					float *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<float, int>::Swap(
		CUtlMemory<float, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<float*>(float *& __a,
			float *& __b);  // 19
	V_swap<float*>(float *& x,
			float *& y);  // 1354
	CUtlVectorBase<float, CUtlMemory<float, int> >::Swap(
		CUtlVectorBase<float, CUtlMemory<float, int> >& vec);  // 1099
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 1100
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 1100
} /* size: 400, variables: 2, inline expansions: 26 (562 bytes) */

// <04BB36F2> modellib/modelbuilder.cpp:1082
// variables: 5
// function calls: 32
void CModelSkeletonSorter::ReorderArray<CModelSkeleton::BoneFlags_t>(CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >& arr)
{
	const char   __FUNCTION__; // 28780
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Count(); // 1089
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 1091
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<CModelSkeleton::BoneFlags_t*>(BoneFlags_t *& x,
								BoneFlags_t *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Swap(
		CUtlMemory<CModelSkeleton::BoneFlags_t, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<CModelSkeleton::BoneFlags_t*>(BoneFlags_t *& __a,
						BoneFlags_t *& __b);  // 19
	V_swap<CModelSkeleton::BoneFlags_t*>(BoneFlags_t *& x,
						BoneFlags_t *& y);  // 1354
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Swap(
		CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >& vec);  // 1099
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 903
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Purge(); // 560
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVector(); // 1100
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 903
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Purge(); // 560
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVector(); // 1100
} /* size: 400, variables: 2, inline expansions: 26 (578 bytes) */

// <04BB2EF2> modellib/modelbuilder.cpp:1082
// variables: 5
// function calls: 33
void CModelSkeletonSorter::ReorderArray<Vector>(CUtlVector<Vector, CUtlMemory<Vector, int> >& arr)
{
	const char   __FUNCTION__; // 28780
	CUtlVector<Vector, CUtlMemory<Vector, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1089
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 1091
			Vector::operator=(
					const Vector& vOther);  // 1091
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<Vector*>(Vector *& x,
					Vector *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<Vector, int>::Swap(
		CUtlMemory<Vector, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<Vector*>(Vector *& __a,
			Vector *& __b);  // 19
	V_swap<Vector*>(Vector *& x,
			Vector *& y);  // 1354
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Swap(
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& vec);  // 1099
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1100
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1100
} /* size: 416, variables: 2, inline expansions: 26 (562 bytes) */

// <04BB271A> modellib/modelbuilder.cpp:1082
// variables: 5
// function calls: 32
void CModelSkeletonSorter::ReorderArray<Quaternion>(CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& arr)
{
	const char   __FUNCTION__; // 28780
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 1089
			CUtlMemory<Quaternion, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
					int i);  // 1091
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<Quaternion, int>::ValidateGrowSize(); // 475
	CUtlMemory<Quaternion, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<Quaternion, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<Quaternion*>(Quaternion *& x,
					Quaternion *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<Quaternion, int>::Swap(
		CUtlMemory<Quaternion, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<Quaternion*>(Quaternion *& __a,
				Quaternion *& __b);  // 19
	V_swap<Quaternion*>(Quaternion *& x,
				Quaternion *& y);  // 1354
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Swap(
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >& vec);  // 1099
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 1100
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 1100
} /* size: 400, variables: 2, inline expansions: 26 (554 bytes) */

// <01EFA4C6> modellib/modelbuilder.cpp:1082
// variables: 7
// function calls: 48
void CModelSkeletonSorter::ReorderArray<CUtlString>(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& arr)
{
	const char   __FUNCTION__; // 36303
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 1091
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1089
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 1091
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 1091
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<CUtlString*>(CUtlString *& x,
					CUtlString *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<CUtlString, int>::Swap(
		CUtlMemory<CUtlString, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<CUtlString*>(CUtlString *& __a,
				CUtlString *& __b);  // 19
	V_swap<CUtlString*>(CUtlString *& x,
				CUtlString *& y);  // 1354
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Swap(
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& vec);  // 1099
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
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 1100
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
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 1100
} /* size: 0, variables: 2, inline expansions: 28 (0 bytes) */

// <01EF9CEE> modellib/modelbuilder.cpp:1082
// variables: 5
// function calls: 32
void ReorderArray<short CModelSkeletonSorter::int>(CUtlVector<short int, CUtlMemory<short int, int> >& arr)
{
	const char   __FUNCTION__; // 36303
	CUtlVector<short int, CUtlMemory<short int, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 1089
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 1091
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<short int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short int, CUtlMemory<short int, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<short int, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<short int*>(short int *& x,
					short int *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<short int, int>::Swap(
		CUtlMemory<short int, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<short int*>(short int *& __a,
			short int *& __b);  // 19
	V_swap<short int*>(short int *& x,
				short int *& y);  // 1354
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Swap(
		CUtlVectorBase<short int, CUtlMemory<short int, int> >& vec);  // 1099
	CUtlMemory<short int, int>::Purge(); // 903
	CUtlMemory<short int, int>::Purge(); // 1799
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 1100
	CUtlMemory<short int, int>::Purge(); // 903
	CUtlMemory<short int, int>::Purge(); // 1799
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 1100
} /* size: 0, variables: 2, inline expansions: 26 (0 bytes) */

// <01EF9516> modellib/modelbuilder.cpp:1082
// variables: 5
// function calls: 32
void ReorderArray<unsigned CModelSkeletonSorter::int>(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& arr)
{
	const char   __FUNCTION__; // 36303
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 1089
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 1091
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<unsigned int*>(unsigned int *& x,
						unsigned int *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<unsigned int, int>::Swap(
		CUtlMemory<unsigned int, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<unsigned int*>(unsigned int *& __a,
				unsigned int *& __b);  // 19
	V_swap<unsigned int*>(unsigned int *& x,
				unsigned int *& y);  // 1354
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Swap(
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& vec);  // 1099
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 1100
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 1100
} /* size: 0, variables: 2, inline expansions: 26 (0 bytes) */

// <01EF8D3E> modellib/modelbuilder.cpp:1082
// variables: 5
// function calls: 32
void CModelSkeletonSorter::ReorderArray<float>(CUtlVector<float, CUtlMemory<float, int> >& arr)
{
	const char   __FUNCTION__; // 36303
	CUtlVector<float, CUtlMemory<float, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1089
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 1091
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<float, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<float*>(float *& x,
					float *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<float, int>::Swap(
		CUtlMemory<float, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<float*>(float *& __a,
			float *& __b);  // 19
	V_swap<float*>(float *& x,
			float *& y);  // 1354
	CUtlVectorBase<float, CUtlMemory<float, int> >::Swap(
		CUtlVectorBase<float, CUtlMemory<float, int> >& vec);  // 1099
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 1100
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 1100
} /* size: 0, variables: 2, inline expansions: 26 (0 bytes) */

// <01EF8560> modellib/modelbuilder.cpp:1082
// variables: 5
// function calls: 32
void CModelSkeletonSorter::ReorderArray<CModelSkeleton::BoneFlags_t>(CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >& arr)
{
	const char   __FUNCTION__; // 36303
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Count(); // 1089
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 1091
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<CModelSkeleton::BoneFlags_t*>(BoneFlags_t *& x,
								BoneFlags_t *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Swap(
		CUtlMemory<CModelSkeleton::BoneFlags_t, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<CModelSkeleton::BoneFlags_t*>(BoneFlags_t *& __a,
						BoneFlags_t *& __b);  // 19
	V_swap<CModelSkeleton::BoneFlags_t*>(BoneFlags_t *& x,
						BoneFlags_t *& y);  // 1354
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Swap(
		CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >& vec);  // 1099
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 903
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Purge(); // 560
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVector(); // 1100
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 903
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Purge(); // 560
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVector(); // 1100
} /* size: 0, variables: 2, inline expansions: 26 (0 bytes) */

// <01EF7D60> modellib/modelbuilder.cpp:1082
// variables: 5
// function calls: 33
void CModelSkeletonSorter::ReorderArray<Vector>(CUtlVector<Vector, CUtlMemory<Vector, int> >& arr)
{
	const char   __FUNCTION__; // 36303
	CUtlVector<Vector, CUtlMemory<Vector, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1089
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 1091
			Vector::operator=(
					const Vector& vOther);  // 1091
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<Vector*>(Vector *& x,
					Vector *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<Vector, int>::Swap(
		CUtlMemory<Vector, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<Vector*>(Vector *& __a,
			Vector *& __b);  // 19
	V_swap<Vector*>(Vector *& x,
			Vector *& y);  // 1354
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Swap(
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& vec);  // 1099
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1100
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1100
} /* size: 0, variables: 2, inline expansions: 26 (0 bytes) */

// <01EF7588> modellib/modelbuilder.cpp:1082
// variables: 5
// function calls: 32
void CModelSkeletonSorter::ReorderArray<Quaternion>(CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& arr)
{
	const char   __FUNCTION__; // 36303
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 1089
			CUtlMemory<Quaternion, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
					int i);  // 1091
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<Quaternion, int>::ValidateGrowSize(); // 475
	CUtlMemory<Quaternion, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<Quaternion, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<Quaternion*>(Quaternion *& x,
					Quaternion *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<Quaternion, int>::Swap(
		CUtlMemory<Quaternion, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<Quaternion*>(Quaternion *& __a,
				Quaternion *& __b);  // 19
	V_swap<Quaternion*>(Quaternion *& x,
				Quaternion *& y);  // 1354
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Swap(
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >& vec);  // 1099
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 1100
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 1100
} /* size: 0, variables: 2, inline expansions: 26 (0 bytes) */

// <00B3049B> modellib/modelbuilder.cpp:1082
// variables: 7
// function calls: 48
void CModelSkeletonSorter::ReorderArray<CUtlString>(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& arr)
{
	const char   __FUNCTION__; // 11028
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 1091
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1089
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 1091
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 1091
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<CUtlString*>(CUtlString *& x,
					CUtlString *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<CUtlString, int>::Swap(
		CUtlMemory<CUtlString, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<CUtlString*>(CUtlString *& __a,
				CUtlString *& __b);  // 19
	V_swap<CUtlString*>(CUtlString *& x,
				CUtlString *& y);  // 1354
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Swap(
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& vec);  // 1099
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
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 1100
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
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 1100
} /* size: 546, variables: 2, inline expansions: 28 (1020 bytes) */

// <00B2FCC3> modellib/modelbuilder.cpp:1082
// variables: 5
// function calls: 32
void ReorderArray<short CModelSkeletonSorter::int>(CUtlVector<short int, CUtlMemory<short int, int> >& arr)
{
	const char   __FUNCTION__; // 11028
	CUtlVector<short int, CUtlMemory<short int, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 1089
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 1091
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<short int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short int, CUtlMemory<short int, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<short int, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<short int*>(short int *& x,
					short int *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<short int, int>::Swap(
		CUtlMemory<short int, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<short int*>(short int *& __a,
			short int *& __b);  // 19
	V_swap<short int*>(short int *& x,
				short int *& y);  // 1354
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Swap(
		CUtlVectorBase<short int, CUtlMemory<short int, int> >& vec);  // 1099
	CUtlMemory<short int, int>::Purge(); // 903
	CUtlMemory<short int, int>::Purge(); // 1799
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 1100
	CUtlMemory<short int, int>::Purge(); // 903
	CUtlMemory<short int, int>::Purge(); // 1799
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 1100
} /* size: 400, variables: 2, inline expansions: 26 (570 bytes) */

// <00B2F4EB> modellib/modelbuilder.cpp:1082
// variables: 5
// function calls: 32
void ReorderArray<unsigned CModelSkeletonSorter::int>(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& arr)
{
	const char   __FUNCTION__; // 11028
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 1089
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 1091
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<unsigned int*>(unsigned int *& x,
						unsigned int *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<unsigned int, int>::Swap(
		CUtlMemory<unsigned int, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<unsigned int*>(unsigned int *& __a,
				unsigned int *& __b);  // 19
	V_swap<unsigned int*>(unsigned int *& x,
				unsigned int *& y);  // 1354
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Swap(
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& vec);  // 1099
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 1100
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 1100
} /* size: 400, variables: 2, inline expansions: 26 (578 bytes) */

// <00B2ED13> modellib/modelbuilder.cpp:1082
// variables: 5
// function calls: 32
void CModelSkeletonSorter::ReorderArray<float>(CUtlVector<float, CUtlMemory<float, int> >& arr)
{
	const char   __FUNCTION__; // 11028
	CUtlVector<float, CUtlMemory<float, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1089
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 1091
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<float, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<float*>(float *& x,
					float *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<float, int>::Swap(
		CUtlMemory<float, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<float*>(float *& __a,
			float *& __b);  // 19
	V_swap<float*>(float *& x,
			float *& y);  // 1354
	CUtlVectorBase<float, CUtlMemory<float, int> >::Swap(
		CUtlVectorBase<float, CUtlMemory<float, int> >& vec);  // 1099
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 1100
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 1100
} /* size: 400, variables: 2, inline expansions: 26 (562 bytes) */

// <00B2E535> modellib/modelbuilder.cpp:1082
// variables: 5
// function calls: 32
void CModelSkeletonSorter::ReorderArray<CModelSkeleton::BoneFlags_t>(CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >& arr)
{
	const char   __FUNCTION__; // 11028
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Count(); // 1089
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 1091
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<CModelSkeleton::BoneFlags_t*>(BoneFlags_t *& x,
								BoneFlags_t *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Swap(
		CUtlMemory<CModelSkeleton::BoneFlags_t, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<CModelSkeleton::BoneFlags_t*>(BoneFlags_t *& __a,
						BoneFlags_t *& __b);  // 19
	V_swap<CModelSkeleton::BoneFlags_t*>(BoneFlags_t *& x,
						BoneFlags_t *& y);  // 1354
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Swap(
		CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >& vec);  // 1099
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 903
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Purge(); // 560
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVector(); // 1100
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 903
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Purge(); // 560
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVector(); // 1100
} /* size: 400, variables: 2, inline expansions: 26 (578 bytes) */

// <00B2DD35> modellib/modelbuilder.cpp:1082
// variables: 5
// function calls: 33
void CModelSkeletonSorter::ReorderArray<Vector>(CUtlVector<Vector, CUtlMemory<Vector, int> >& arr)
{
	const char   __FUNCTION__; // 11028
	CUtlVector<Vector, CUtlMemory<Vector, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1089
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 1091
			Vector::operator=(
					const Vector& vOther);  // 1091
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<Vector*>(Vector *& x,
					Vector *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<Vector, int>::Swap(
		CUtlMemory<Vector, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<Vector*>(Vector *& __a,
			Vector *& __b);  // 19
	V_swap<Vector*>(Vector *& x,
			Vector *& y);  // 1354
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Swap(
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& vec);  // 1099
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1100
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1100
} /* size: 416, variables: 2, inline expansions: 26 (562 bytes) */

// <00B2D55D> modellib/modelbuilder.cpp:1082
// variables: 5
// function calls: 32
void CModelSkeletonSorter::ReorderArray<Quaternion>(CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& arr)
{
	const char   __FUNCTION__; // 11028
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > mapped; // 1084
	{
		int nNewBone; // 1086
		{
			int nOldBone; // 1088
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1088
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 1089
			CUtlMemory<Quaternion, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
					int i);  // 1091
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1086
	}
	CUtlMemory<Quaternion, int>::ValidateGrowSize(); // 475
	CUtlMemory<Quaternion, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVector(); // 1084
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1085
	CUtlMemory<Quaternion, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<Quaternion*>(Quaternion *& x,
					Quaternion *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<Quaternion, int>::Swap(
		CUtlMemory<Quaternion, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<Quaternion*>(Quaternion *& __a,
				Quaternion *& __b);  // 19
	V_swap<Quaternion*>(Quaternion *& x,
				Quaternion *& y);  // 1354
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Swap(
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >& vec);  // 1099
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 1100
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 1100
} /* size: 400, variables: 2, inline expansions: 26 (554 bytes) */

// <04BE02FE> modellib/modelbuilder.cpp:1103
// variables: 3
// function calls: 5
void CModelSkeletonSorter::RemapArray(CUtlVector<short int, CUtlMemory<short int, int> >& arr)
{
	{
		int nNewBone; // 1105
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1105
		{
			int nOldReference; // 1107
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 1107
			{
				int nNewReference; // 1110
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 1110
			}
		}
	}
} /* size: 0 */

// <04BC8FD7> modellib/modelbuilder.cpp:1103
// variables: 3
void CModelSkeletonSorter::RemapArray(CUtlVector<short int, CUtlMemory<short int, int> >& arr)
{
	{
		int nNewBone; // 1105
		{
			int nOldReference; // 1107
			{
				int nNewReference; // 1110
			}
		}
	}
} /* size: 0 */

// <04BC8312> modellib/modelbuilder.cpp:1117
// variables: 9
// function calls: 52
void CModelSkeletonSorter::RemapBones(BoneDict_t& map)
{
	BoneDict_t mapped; // 1119
	const char   __FUNCTION__; // 28726
	{
		UtlHashHandle_t h; // 1120
		{
			uint16 nBoneIndex; // 1122
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1125
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1123
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<unsigned int, short unsigned int>::CUtlKeyValuePair<unsigned int, short unsigned int>(
										const unsigned int& k,
										const short unsigned int& v);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, short unsigned int>, unsigned int&, short unsigned int&>(CUtlKeyValuePair<unsigned int, short unsigned int>* pMemory); // 720
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
			Insert(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 1129
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1128
		}
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 915
			CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Base(); // 914
		NextHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this); // 1120
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
				int i);  // 204
		CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
		IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
				handle_t idx);  // 1120
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 915
			CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
				handle_t start);  // 1120
	}
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
			int minimumSize);  // 130
	BoneDict_t::BoneDict_t(); // 1119
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::IsExternallyAllocated(); // 535
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<CUtlHashtableEntry<unsigned int, short unsigned int>*>(CUtlHashtableEntry<unsigned int, short unsigned int> *& x,
											CUtlHashtableEntry<unsigned int, short unsigned int> *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Swap(
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>& mem);  // 314
	V_swap_through_temp<int>(int& x,
				int& y);  // 314
	Swap(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
		CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtl other);  // 1131
	{
		entry_t* table; // 896
		{
			int i; // 897
			CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, short unsigned int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, short unsigned int> >(CUtlKeyValuePair<unsigned int, short unsigned int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 188
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 510
	ValidateAlignment<CUtlHashtableEntry<unsigned int, short unsigned int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 127
	BoneDict_t::~BoneDict_t(); // 1132
	ValidateAlignment<CUtlHashtableEntry<unsigned int, short unsigned int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 127
	BoneDict_t::~BoneDict_t(); // 1132
} /* size: 0, variables: 2, inline expansions: 28 (1024 bytes) */

// <01F0D180> modellib/modelbuilder.cpp:1117
// variables: 9
// function calls: 52
void CModelSkeletonSorter::RemapBones(BoneDict_t& map)
{
	BoneDict_t mapped; // 1119
	const char   __FUNCTION__; // 36249
	{
		UtlHashHandle_t h; // 1120
		{
			uint16 nBoneIndex; // 1122
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1125
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1123
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<unsigned int, short unsigned int>::CUtlKeyValuePair<unsigned int, short unsigned int>(
										const unsigned int& k,
										const short unsigned int& v);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, short unsigned int>, unsigned int&, short unsigned int&>(CUtlKeyValuePair<unsigned int, short unsigned int>* pMemory); // 720
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
			Insert(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 1129
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1128
		}
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 915
			CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Base(); // 914
		NextHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this); // 1120
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
				int i);  // 204
		CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
		IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
				handle_t idx);  // 1120
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 915
			CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
				handle_t start);  // 1120
	}
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
			int minimumSize);  // 130
	BoneDict_t::BoneDict_t(); // 1119
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::IsExternallyAllocated(); // 535
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<CUtlHashtableEntry<unsigned int, short unsigned int>*>(CUtlHashtableEntry<unsigned int, short unsigned int> *& x,
											CUtlHashtableEntry<unsigned int, short unsigned int> *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Swap(
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>& mem);  // 314
	V_swap_through_temp<int>(int& x,
				int& y);  // 314
	Swap(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
		CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtl other);  // 1131
	{
		entry_t* table; // 896
		{
			int i; // 897
			CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, short unsigned int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, short unsigned int> >(CUtlKeyValuePair<unsigned int, short unsigned int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 188
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 510
	ValidateAlignment<CUtlHashtableEntry<unsigned int, short unsigned int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 127
	BoneDict_t::~BoneDict_t(); // 1132
	ValidateAlignment<CUtlHashtableEntry<unsigned int, short unsigned int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 127
	BoneDict_t::~BoneDict_t(); // 1132
} /* size: 0, variables: 2, inline expansions: 28 (0 bytes) */

// <00B43155> modellib/modelbuilder.cpp:1117
// variables: 9
// function calls: 52
void CModelSkeletonSorter::RemapBones(BoneDict_t& map)
{
	BoneDict_t mapped; // 1119
	const char   __FUNCTION__; // 10974
	{
		UtlHashHandle_t h; // 1120
		{
			uint16 nBoneIndex; // 1122
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1125
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1123
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<unsigned int, short unsigned int>::CUtlKeyValuePair<unsigned int, short unsigned int>(
										const unsigned int& k,
										const short unsigned int& v);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, short unsigned int>, unsigned int&, short unsigned int&>(CUtlKeyValuePair<unsigned int, short unsigned int>* pMemory); // 720
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
			Insert(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 1129
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1128
		}
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 915
			CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Base(); // 914
		NextHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this); // 1120
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
				int i);  // 204
		CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
		IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
				handle_t idx);  // 1120
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 915
			CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
				handle_t start);  // 1120
	}
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
			int minimumSize);  // 130
	BoneDict_t::BoneDict_t(); // 1119
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::IsExternallyAllocated(); // 535
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<CUtlHashtableEntry<unsigned int, short unsigned int>*>(CUtlHashtableEntry<unsigned int, short unsigned int> *& x,
											CUtlHashtableEntry<unsigned int, short unsigned int> *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Swap(
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>& mem);  // 314
	V_swap_through_temp<int>(int& x,
				int& y);  // 314
	Swap(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
		CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtl other);  // 1131
	{
		entry_t* table; // 896
		{
			int i; // 897
			CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, short unsigned int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, short unsigned int> >(CUtlKeyValuePair<unsigned int, short unsigned int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 188
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 510
	ValidateAlignment<CUtlHashtableEntry<unsigned int, short unsigned int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 127
	BoneDict_t::~BoneDict_t(); // 1132
	ValidateAlignment<CUtlHashtableEntry<unsigned int, short unsigned int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 127
	BoneDict_t::~BoneDict_t(); // 1132
} /* size: 0, variables: 2, inline expansions: 28 (1024 bytes) */

// <04BC6DD6> modellib/modelbuilder.cpp:1137
// function calls: 98
void CModelBuilder::CModelBuilder()
{
	CUtlString::CUtlString(); // 1137
	Vector::Vector(); // 37
	Vector::Vector(); // 37
	Vector::Vector(); // 37
	Vector::Vector(); // 37
	Vector::Vector(); // 37
	CUtlString::CUtlString(); // 37
	CUtlString::CUtlString(); // 37
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 40
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 41
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 42
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 43
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 45
	CBuilderModelInfo::CBuilderModelInfo(); // 1137
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 1137
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int> > this); // 1137
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::CUtlVector(); // 1137
	CUtlMemory<long long unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<long long unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVector(); // 1137
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 1137
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 1137
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 1137
	CUtlMemory<CBuilderMaterialGroup, int>::ValidateGrowSize(); // 475
	CUtlMemory<CBuilderMaterialGroup, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::CUtlVector(); // 1137
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap<int, CUtlSymbolTable>::CUtlStringMap(
			bool caseInsensitive,
			int growSize,
			int initSize);  // 1137
	CUtlMemory<const CFlexController::ValidateGrowSize(); // 475
	CUtlMemory<const CFlexController::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const CFlexController::ResetDbgInfo(); // 530
	CUtlVectorBase<const CFlexController::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const CFlexController::CUtlVector(); // 1137
	CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<short in this); // 1137
	CUtlMemory<BuilderModelBoneFlexDriver_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<BuilderModelBoneFlexDriver_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::CUtlVector(); // 1137
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>::CStrongHandle(); // 1137
	CPhysAggregateDataHandle::CPhysAggregateDataHandle(); // 1137
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 530
	CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 1137
	CUtlMemory<CAnimationGroupResource::ValidateGrowSize(); // 475
	CUtlMemory<CAnimationGroupResource::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimationGroupResource::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimationGroupResource::CUtlVector(); // 1137
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1137
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 1137
} /* size: 883, inline expansions: 98 (1526 bytes) */

// <04BC6DB9> modellib/modelbuilder.cpp:1137
void CModelBuilder::CModelBuilder()
{
} /* size: 0 */

// <04BC662E> modellib/modelbuilder.cpp:1141
// variable: 1
// function calls: 30
void CModelBuilder::SetModelInfo(const CBuilderModelInfo* pInfo)
{
	CBuilderModelInfo empty; // 1143
	CUtlString::CUtlString(); // 37
	Vector::Vector(); // 37
	Vector::Vector(); // 37
	Vector::Vector(); // 37
	Vector::Vector(); // 37
	Vector::Vector(); // 37
	CUtlString::CUtlString(); // 37
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 40
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 41
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 42
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 43
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 45
	CBuilderModelInfo::CBuilderModelInfo(); // 1143
	Vector::operator=(
			const Vector& vOther);  // 54
	Vector::operator=(
			const Vector& vOther);  // 54
	Vector::operator=(
			const Vector& vOther);  // 54
	Vector::operator=(
			const Vector& vOther);  // 54
	Vector::operator=(
			const Vector& vOther);  // 54
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 54
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 54
	CBuilderModelInfo::operator=(
			const CBuilderModelInfo  &);  // 1144
	CUtlString::~CUtlString(); // 54
	CUtlString::~CUtlString(); // 54
	CBuilderModelInfo::~CBuilderModelInfo(); // 1145
} /* size: 0, variables: 1, inline expansions: 30 (0 bytes) */

// <04BC6604> modellib/modelbuilder.cpp:1147
void CModelBuilder::SetName(const char* pName)
{
} /* size: 0 */

// <04BC6548> modellib/modelbuilder.cpp:1152
void CModelBuilder::AddRunTimeMesh(CRenderMesh* pMesh, MeshGroupMask_t nMeshGroupMask, LODGroupMask_t nLODGroupMask)
{
} /* size: 71 */

// <04BC5B48> modellib/modelbuilder.cpp:1158
// variable: 1
// function calls: 46
void CModelBuilder::AddSharedRunTimeMesh(CRenderMesh* pMesh, MeshGroupMask_t nMeshGroupMask, LODGroupMask_t nLODGroupMask)
{
	int nRefMesh; // 1162
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::NumAllocated(); // 1143
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this); // 824
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::IsGrowable(); // 823
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this,
			int num);  // 1145
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this,
		int i);  // 1148
	CSmartPtr<CRenderMesh, CRefCountAccessor>::CSmartPtr(); // 1479
	Construct<CSmartPtr<CRenderMesh> >(CSmartPtr<CRenderMesh, CRefCountAccessor>* pMemory); // 1148
	AddToTail(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this); // 1162
	CUtlMemory<long long unsigned int, int>::NumAllocated(); // 1143
	CUtlMemory<long long unsigned int, int>::Base(); // 112
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Base(); // 368
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::AddToTail(); // 1163
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1143
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddToTail(); // 1164
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this,
			int i);  // 1166
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CRenderMesh>(CRenderMesh* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CRenderMesh>(CRenderMesh* pObj); // 370
	CSmartPtr<CRenderMesh, CRefCountAccessor>::operator=(
			CRenderMesh* pObj);  // 1166
	CUtlMemory<long long unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
			int i);  // 1226
	CModelBuilder::SetMeshGroupMaskForMesh(
				int nMesh,
				MeshGroupMask_t nMask);  // 1167
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 588
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
			int i);  // 1231
	CModelBuilder::SetLODGroupMaskForMesh(
				int nMesh,
				LODGroupMask_t nMask);  // 1168
} /* size: 674, variables: 1, inline expansions: 46 (1658 bytes) */

// <04BC51E8> modellib/modelbuilder.cpp:1171
// variable: 1
// function calls: 42
void CModelBuilder::AddCompileTimeExtrefMesh(HRenderMesh_Internal hMesh)
{
	int nRefMesh; // 1175
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::NumAllocated(); // 1143
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::Element(
		int i);  // 1148
	CWeakHandle<InfoForResourceTypeCRenderMesh>::GetBinding(); // 476
	CStrongHandle<InfoForResourceTypeCRenderMesh>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCRenderMesh>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCRenderMesh>& src);  // 365
	CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 365
	CUtlString::CUtlString(); // 365
	CompileTimeMesh_t::CompileTimeMesh_t(); // 1479
	Construct<CModelBuilder::CompileTimeMesh_t>(CompileTimeMesh_t* pMemory); // 1148
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::Base(); // 112
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::Base(); // 368
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::AddToTail(); // 1175
	CUtlMemory<long long unsigned int, int>::NumAllocated(); // 1143
	CUtlMemory<long long unsigned int, int>::Base(); // 112
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Base(); // 368
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::AddToTail(); // 1176
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1143
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddToTail(); // 1177
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::operator[](
			int i);  // 1179
	CWeakHandle<InfoForResourceTypeCRenderMesh>::GetBinding(); // 673
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCRenderMesh>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCRenderMesh>::operator=(
			const CWeakHandle<InfoForResourceTypeCRenderMesh>& src);  // 1179
	CUtlMemory<long long unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
			int i);  // 1226
	CModelBuilder::SetMeshGroupMaskForMesh(
				int nMesh,
				MeshGroupMask_t nMask);  // 1180
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 588
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
			int i);  // 1231
	CModelBuilder::SetLODGroupMaskForMesh(
				int nMesh,
				LODGroupMask_t nMask);  // 1181
} /* size: 0, variables: 1, inline expansions: 42 (0 bytes) */

// <04BC4716> modellib/modelbuilder.cpp:1184
// variable: 1
// function calls: 46
void CModelBuilder::AddCompileTimeEmbeddedMesh(const char* pMeshName, const void* pEmbeddedDataBlock, int nEmbeddedDataBlockLength, const void* pEmbeddedMorphBlock, int nEmbeddedMorphBlockLength)
{
	int nRefMesh; // 1188
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::NumAllocated(); // 1143
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::Element(
		int i);  // 1148
	CWeakHandle<InfoForResourceTypeCRenderMesh>::GetBinding(); // 476
	CStrongHandle<InfoForResourceTypeCRenderMesh>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCRenderMesh>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCRenderMesh>& src);  // 365
	CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 365
	CUtlString::CUtlString(); // 365
	CompileTimeMesh_t::CompileTimeMesh_t(); // 1479
	Construct<CModelBuilder::CompileTimeMesh_t>(CompileTimeMesh_t* pMemory); // 1148
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::Base(); // 112
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::Base(); // 368
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::AddToTail(); // 1188
	CUtlMemory<long long unsigned int, int>::NumAllocated(); // 1143
	CUtlMemory<long long unsigned int, int>::Base(); // 112
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Base(); // 368
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::AddToTail(); // 1189
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1143
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddToTail(); // 1190
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::operator[](
			int i);  // 1192
	CUtlString::operator=(
			const char* src);  // 1192
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::operator[](
			int i);  // 1193
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::operator[](
			int i);  // 1194
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::operator[](
			int i);  // 1195
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::operator[](
			int i);  // 1196
	CUtlMemory<long long unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
			int i);  // 1226
	CModelBuilder::SetMeshGroupMaskForMesh(
				int nMesh,
				MeshGroupMask_t nMask);  // 1197
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 588
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
			int i);  // 1231
	CModelBuilder::SetLODGroupMaskForMesh(
				int nMesh,
				LODGroupMask_t nMask);  // 1198
} /* size: 0, variables: 1, inline expansions: 46 (0 bytes) */

// <04BC4683> modellib/modelbuilder.cpp:1203
// variables: 2
void CModelBuilder::AddCompileTimeEmbeddedAnimData(const CAnimationGroup* pAnimGroup)
{
	const char   __FUNCTION__; // 29211
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1205
	}
} /* size: 0, variables: 1 */

// <01F094F1> modellib/modelbuilder.cpp:1203
// variables: 2
void CModelBuilder::AddCompileTimeEmbeddedAnimData(const CAnimationGroup* pAnimGroup)
{
	const char   __FUNCTION__; // 36734
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1205
	}
} /* size: 0, variables: 1 */

// <00B3F4C6> modellib/modelbuilder.cpp:1203
// variables: 2
void CModelBuilder::AddCompileTimeEmbeddedAnimData(const CAnimationGroup* pAnimGroup)
{
	const char   __FUNCTION__; // 11459
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1205
	}
} /* size: 0, variables: 1 */

// <04BE04BC> modellib/modelbuilder.cpp:1209
// function call: 1
void CModelBuilder::GetRunTimeMeshCount()
{
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 1211
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04BC4666> modellib/modelbuilder.cpp:1209
void CModelBuilder::GetRunTimeMeshCount()
{
} /* size: 0 */

// <04BE0516> modellib/modelbuilder.cpp:1214
// function calls: 3
void CModelBuilder::GetRunTimeMesh(int nMesh)
{
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
			int i);  // 1216
	CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 1216
} /* size: 0, inline expansions: 3 (0 bytes) */

// <04BC463C> modellib/modelbuilder.cpp:1214
void CModelBuilder::GetRunTimeMesh(int nMesh)
{
} /* size: 0 */

// <04BC42F7> modellib/modelbuilder.cpp:1219
// function calls: 13
void CModelBuilder::AddHiddenBodyGroup(const char* pName)
{
	CUtlString::CUtlString(
			const char* pString);  // 1221
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1252
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1514
	Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
			CUtlString& src);  // 1221
	CUtlString::~CUtlString(); // 1221
} /* size: 0, inline expansions: 13 (0 bytes) */

// <04BE05DF> modellib/modelbuilder.cpp:1224
// function calls: 2
void CModelBuilder::SetMeshGroupMaskForMesh(int nMesh, MeshGroupMask_t nMask)
{
	CUtlMemory<long long unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
			int i);  // 1226
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04BC42C0> modellib/modelbuilder.cpp:1224
void CModelBuilder::SetMeshGroupMaskForMesh(int nMesh, MeshGroupMask_t nMask)
{
} /* size: 0 */

// <04BE067A> modellib/modelbuilder.cpp:1229
// function calls: 2
void CModelBuilder::SetLODGroupMaskForMesh(int nMesh, LODGroupMask_t nMask)
{
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 588
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
			int i);  // 1231
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04BC4289> modellib/modelbuilder.cpp:1229
void CModelBuilder::SetLODGroupMaskForMesh(int nMesh, LODGroupMask_t nMask)
{
} /* size: 0 */

// <04BC4245> modellib/modelbuilder.cpp:1234
void CModelBuilder::SetDefaultMeshGroupMask(MeshGroupMask_t nMask)
{
} /* size: 12 */

// <04BC4057> modellib/modelbuilder.cpp:1239
// variable: 1
// function calls: 6
void CModelBuilder::SetPhysicsBody_Runtime(const CPhysBodyDesc& physBodyDesc)
{
	CPhysAggregateDataHandle pAggData; // 1241
	CPhysAggregateDataHandle::Get(); // 1242
	CPhysAggregateDataHandle::Clear(); // 205
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 1247
	CModelBuilder::SetPhysics_Runtime(
				CPhysAggregateData* pPhys);  // 1242
	CPhysAggregateDataHandle::Clear(); // 115
	CPhysAggregateDataHandle::~CPhysAggregateDataHandle(); // 1243
} /* size: 173, variables: 1, inline expansions: 6 (226 bytes) */

// <04BE0715> modellib/modelbuilder.cpp:1245
// function calls: 2
void CModelBuilder::SetPhysics_Runtime(CPhysAggregateData* pPhys)
{
	CPhysAggregateDataHandle::Clear(); // 205
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 1247
} /* size: 101, inline expansions: 2 (106 bytes) */

// <04BC402D> modellib/modelbuilder.cpp:1245
void CModelBuilder::SetPhysics_Runtime(CPhysAggregateData* pPhys)
{
} /* size: 0 */

// <04BC3EC4> modellib/modelbuilder.cpp:1250
// function calls: 5
void CModelBuilder::SetPhysics_CompileTimeExternal(HPhysAggregateData_Internal hPhys)
{
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::GetBinding(); // 673
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>::operator=(
			const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& src);  // 1252
} /* size: 0, inline expansions: 5 (0 bytes) */

// <04BC3AFA> modellib/modelbuilder.cpp:1255
// variable: 1
// function calls: 17
void CModelBuilder::AddAnimationGroupRef(HAnimationGroup_Internal hAnimGroup)
{
	int nAnim; // 1257
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::NumAllocated(); // 1143
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
		int i);  // 1148
	CStrongHandle<InfoForResourceTypeCAnimationGroup>::CStrongHandle(); // 1479
	Construct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1148
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Base(); // 112
	Base(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 368
	ResetDbgInfo(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 824
	GrowMemory(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1257
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1258
	CWeakHandle<InfoForResourceTypeCAnimationGroup>::GetBinding(); // 673
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCAnimationGroup>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCAnimationGroup>::operator=(
			const CWeakHandle<InfoForResourceTypeCAnimationGroup>& src);  // 1258
} /* size: 0, variables: 1, inline expansions: 17 (0 bytes) */

// <04BE1CC7> modellib/modelbuilder.cpp:1261
// variable: 1
// function calls: 8
void CModelBuilder::AddAnimationGroupRuntime(CAnimationGroupResource* pAnimGroup)
{
	int nAnim; // 1263
	CUtlMemory<CAnimationGroupResource::NumAllocated(); // 1143
	CUtlMemory<CAnimationGroupResource::Base(); // 112
	CUtlVectorBase<CAnimationGroupResource::Base(); // 368
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 824
	CUtlVectorBase<CAnimationGroupResource::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CAnimationGroupResource::AddToTail(); // 1263
	CUtlMemory<CAnimationGroupResource::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationGroupResource::operator[](
			int i);  // 1264
} /* size: 131, variables: 1, inline expansions: 8 (189 bytes) */

// <04BC3AC3> modellib/modelbuilder.cpp:1261
// variable: 1
void CModelBuilder::AddAnimationGroupRuntime(CAnimationGroupResource* pAnimGroup)
{
	int nAnim; // 1263
} /* size: 0, variables: 1 */

// <04BC3766> modellib/modelbuilder.cpp:1267
// variables: 4
// function calls: 14
void CModelBuilder::AppendAnimationsFromModel(const CModel* pModel)
{
	{
		CAnimationGroupResource* pResource; // 1269
		const CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 64969
		const_iterator __for_begin; // 61522
		const_iterator __for_end; // 61522
		CUtlMemory<CAnimationGroupResource::Base(); // 113
		CUtlVectorBase<CAnimationGroupResource::Base(); // 103
		CUtlVectorBase<CAnimationGroupResource::begin(); // 1269
		CUtlVectorBase<CAnimationGroupResource::Count(); // 105
		CUtlVectorBase<CAnimationGroupResource::end(); // 1269
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 368
		CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 824
		CUtlVectorBase<CAnimationGroupResource::GrowMemory(
				int num);  // 1145
		CUtlMemory<CAnimationGroupResource::NumAllocated(); // 1143
		CUtlVectorBase<CAnimationGroupResource::AddToTail(); // 1263
		CUtlMemory<CAnimationGroupResource::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimationGroupResource::operator[](
				int i);  // 1264
		CModelBuilder::AddAnimationGroupRuntime(
					CAnimationGroupResource* pAnimGroup);  // 1271
	}
} /* size: 0 */

// <01F085D4> modellib/modelbuilder.cpp:1267
// variables: 4
// function calls: 14
void CModelBuilder::AppendAnimationsFromModel(const CModel* pModel)
{
	{
		CAnimationGroupResource* pResource; // 1269
		const CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 6956
		const_iterator __for_begin; // 3509
		const_iterator __for_end; // 3509
		CUtlMemory<CAnimationGroupResource::Base(); // 113
		CUtlVectorBase<CAnimationGroupResource::Base(); // 103
		CUtlVectorBase<CAnimationGroupResource::begin(); // 1269
		CUtlVectorBase<CAnimationGroupResource::Count(); // 105
		CUtlVectorBase<CAnimationGroupResource::end(); // 1269
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 368
		CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 824
		CUtlVectorBase<CAnimationGroupResource::GrowMemory(
				int num);  // 1145
		CUtlMemory<CAnimationGroupResource::NumAllocated(); // 1143
		CUtlVectorBase<CAnimationGroupResource::AddToTail(); // 1263
		CUtlMemory<CAnimationGroupResource::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimationGroupResource::operator[](
				int i);  // 1264
		CModelBuilder::AddAnimationGroupRuntime(
					CAnimationGroupResource* pAnimGroup);  // 1271
	}
} /* size: 0 */

// <00B3E5A9> modellib/modelbuilder.cpp:1267
// variables: 4
// function calls: 14
void CModelBuilder::AppendAnimationsFromModel(const CModel* pModel)
{
	{
		CAnimationGroupResource* pResource; // 1269
		const CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 47217
		const_iterator __for_begin; // 43770
		const_iterator __for_end; // 43770
		CUtlMemory<CAnimationGroupResource::Base(); // 113
		CUtlVectorBase<CAnimationGroupResource::Base(); // 103
		CUtlVectorBase<CAnimationGroupResource::begin(); // 1269
		CUtlVectorBase<CAnimationGroupResource::Count(); // 105
		CUtlVectorBase<CAnimationGroupResource::end(); // 1269
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 368
		CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 824
		CUtlVectorBase<CAnimationGroupResource::GrowMemory(
				int num);  // 1145
		CUtlMemory<CAnimationGroupResource::NumAllocated(); // 1143
		CUtlVectorBase<CAnimationGroupResource::AddToTail(); // 1263
		CUtlMemory<CAnimationGroupResource::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimationGroupResource::operator[](
				int i);  // 1264
		CModelBuilder::AddAnimationGroupRuntime(
					CAnimationGroupResource* pAnimGroup);  // 1271
	}
} /* size: 0 */

// <04BC32C0> modellib/modelbuilder.cpp:1275
// variables: 4
// function calls: 19
void CModelBuilder::ReplaceAnimationsFromModel(const CModel* pModel)
{
	{
		CAnimationGroupResource* pResource; // 1284
		const CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 64969
		const_iterator __for_begin; // 61522
		const_iterator __for_end; // 61522
		CUtlMemory<CAnimationGroupResource::Base(); // 113
		CUtlVectorBase<CAnimationGroupResource::Base(); // 103
		CUtlVectorBase<CAnimationGroupResource::begin(); // 1284
		CUtlVectorBase<CAnimationGroupResource::Count(); // 105
		CUtlVectorBase<CAnimationGroupResource::end(); // 1284
		CUtlMemory<CAnimationGroupResource::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimationGroupResource::operator[](
				int i);  // 1264
		CUtlMemory<CAnimationGroupResource::NumAllocated(); // 1143
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 368
		CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 824
		CUtlVectorBase<CAnimationGroupResource::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CAnimationGroupResource::AddToTail(); // 1263
		CModelBuilder::AddAnimationGroupRuntime(
					CAnimationGroupResource* pAnimGroup);  // 1287
		CUtlString::Get(); // 242
		CAnimationGroupResource::GetName(); // 1286
	}
	CUtlVectorBase<CAnimationGroupResource::Count(); // 135
	CUtlVectorBase<CAnimationGroupResource::IsEmpty(); // 1277
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1283
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01F0812E> modellib/modelbuilder.cpp:1275
// variables: 4
// function calls: 19
void CModelBuilder::ReplaceAnimationsFromModel(const CModel* pModel)
{
	{
		CAnimationGroupResource* pResource; // 1284
		const CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 6956
		const_iterator __for_begin; // 3509
		const_iterator __for_end; // 3509
		CUtlMemory<CAnimationGroupResource::Base(); // 113
		CUtlVectorBase<CAnimationGroupResource::Base(); // 103
		CUtlVectorBase<CAnimationGroupResource::begin(); // 1284
		CUtlVectorBase<CAnimationGroupResource::Count(); // 105
		CUtlVectorBase<CAnimationGroupResource::end(); // 1284
		CUtlMemory<CAnimationGroupResource::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimationGroupResource::operator[](
				int i);  // 1264
		CUtlMemory<CAnimationGroupResource::NumAllocated(); // 1143
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 368
		CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 824
		CUtlVectorBase<CAnimationGroupResource::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CAnimationGroupResource::AddToTail(); // 1263
		CModelBuilder::AddAnimationGroupRuntime(
					CAnimationGroupResource* pAnimGroup);  // 1287
		CUtlString::Get(); // 242
		CAnimationGroupResource::GetName(); // 1286
	}
	CUtlVectorBase<CAnimationGroupResource::Count(); // 135
	CUtlVectorBase<CAnimationGroupResource::IsEmpty(); // 1277
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1283
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00B3E103> modellib/modelbuilder.cpp:1275
// variables: 4
// function calls: 19
void CModelBuilder::ReplaceAnimationsFromModel(const CModel* pModel)
{
	{
		CAnimationGroupResource* pResource; // 1284
		const CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 47217
		const_iterator __for_begin; // 43770
		const_iterator __for_end; // 43770
		CUtlMemory<CAnimationGroupResource::Base(); // 113
		CUtlVectorBase<CAnimationGroupResource::Base(); // 103
		CUtlVectorBase<CAnimationGroupResource::begin(); // 1284
		CUtlVectorBase<CAnimationGroupResource::Count(); // 105
		CUtlVectorBase<CAnimationGroupResource::end(); // 1284
		CUtlMemory<CAnimationGroupResource::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimationGroupResource::operator[](
				int i);  // 1264
		CUtlMemory<CAnimationGroupResource::NumAllocated(); // 1143
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 368
		CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 824
		CUtlVectorBase<CAnimationGroupResource::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CAnimationGroupResource::AddToTail(); // 1263
		CModelBuilder::AddAnimationGroupRuntime(
					CAnimationGroupResource* pAnimGroup);  // 1287
		CUtlString::Get(); // 242
		CAnimationGroupResource::GetName(); // 1286
	}
	CUtlVectorBase<CAnimationGroupResource::Count(); // 135
	CUtlVectorBase<CAnimationGroupResource::IsEmpty(); // 1277
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1283
} /* size: 0, inline expansions: 3 (0 bytes) */

// <04BC2F6B> modellib/modelbuilder.cpp:1291
// function calls: 13
void CModelBuilder::AddMeshGroup(const char* pMeshGroup)
{
	CUtlString::CUtlString(
			const char* pString);  // 1293
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1252
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1514
	Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
			CUtlString& src);  // 1293
	CUtlString::~CUtlString(); // 1293
} /* size: 223, inline expansions: 13 (323 bytes) */

// <04BC2BFF> modellib/modelbuilder.cpp:1296
// variable: 1
// function calls: 18
void CModelBuilder::AddMaterialGroup()
{
	int nGroup; // 1298
	CUtlMemory<CBuilderMaterialGroup, int>::NumAllocated(); // 1143
	CUtlMemory<CBuilderMaterialGroup, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 24
	CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 530
	CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, i this); // 24
	CBuilderMaterialGroup::CBuilderMaterialGroup(); // 1479
	Construct<CBuilderMaterialGroup>(CBuilderMaterialGroup* pMemory); // 1148
	CUtlMemory<CBuilderMaterialGroup, int>::Base(); // 112
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::Base(); // 368
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::AddToTail(); // 1298
	CUtlMemory<CBuilderMaterialGroup, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
			int i);  // 1299
} /* size: 158, variables: 1, inline expansions: 18 (403 bytes) */

// <04BC2AEA> modellib/modelbuilder.cpp:1302
void CModelBuilder::FindOrAddBone(uint32 nBoneHash, uint32 nParentHash, float flSphere, BoneFlags_t nFlags, const Vector& vBoneLocalPos, const Quaternion& vBoneLocalRot, const char* pBoneName)
{
} /* size: 0 */

// <04BC26E9> modellib/modelbuilder.cpp:1307
// function calls: 8
void CModelBuilder::FindOrAddBone(const char* pBoneName, const char* pParentName, float flSphere, BoneFlags_t nFlags, const Vector& vBoneLocalPos, const Quaternion& vBoneLocalRot)
{
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 209
	CUtlStringToken::CUtlStringToken(); // 210
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 213
	CModelSkeletonBuilder::FindOrAddBone(
			const char* pBoneName,
			const char* pParentName,
			float flSphere,
			BoneFlags_t nFlags,
			const Vector& vBoneLocalPos,
			const Quaternion& vBoneLocalRot);  // 1309
} /* size: 0, inline expansions: 8 (1239 bytes) */

// <04BC2060> modellib/modelbuilder.cpp:1312
// variables: 3
// function calls: 26
void CModelBuilder::AddFlexController(const CFlexController* pFlexController)
{
	const char* pControllerName; // 1314
	UtlSymId_t nNameMapIndex; // 1316
	{
		int nControllerIndex; // 1320
		CUtlMemory<const CFlexController::NumAllocated(); // 1196
		CUtlMemory<const CFlexController::Base(); // 112
		CUtlVectorBase<const CFlexController::Base(); // 368
		CUtlVectorBase<const CFlexController::ResetDbgInfo(); // 824
		CUtlMemory<const CFlexController::IsGrowable(); // 823
		CUtlMemory<const CFlexController::IsExternallyAllocated(); // 859
		CUtlMemory<const CFlexController::IsExternallyAllocated(); // 861
		CUtlMemory<const CFlexController::Grow(
			int num);  // 806
		CUtlVectorBase<const CFlexController::GrowMemory(
				int num);  // 1198
		CUtlMemory<const CFlexController::operator[](
				int i);  // 602
		CUtlVectorBase<const CFlexController::Element(
			int i);  // 1201
		CopyConstruct<const CFlexController*>(const CFlexController ** pMemory,
							const CFlexController* const& src);  // 1201
		CUtlVectorBase<const CFlexController::AddToTail(
				const CFlexController* const& src);  // 1320
		CUtlSymbol::IsValid(); // 64
		CUtlSymbolTable::AddStringElement(
				const char* pString);  // 95
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 96
		CUtlStringMap<int, CUtlSymbolTable>::AddString(
				const char* pString);  // 1321
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 53
		{
		}
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 54
		CUtlStringMap<int, CUtlSymbolTable>::operator[](
				IndexType_t n);  // 1322
	}
	CUtlString::Get(); // 93
	CFlexController::pszName(); // 1314
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<int, CUtlSymbolTable>::Find(
		const char* pString);  // 1316
} /* size: 0, variables: 2, inline expansions: 5 (86 bytes) */

// <04BC19E2> modellib/modelbuilder.cpp:1326
// variables: 8
// function calls: 24
void CModelBuilder::CreateRemappingTableForMorphSetData(RemappingTable_t& remapTable, const CMorphSetData* pMorphSetData)
{
	{
		int nFlexControllers; // 1331
		int nIndex; // 1332
		int16* pRemapBase; // 1333
		{
			int f; // 1334
			{
				const CFlexController* pFlexController; // 1336
				const char* pControllerName; // 1337
				int nControllerIndex; // 1339
				UtlSymId_t nNameMapIndex; // 1341
				CUtlMemory<CFlexController, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
						int i);  // 1336
				CUtlString::Get(); // 93
				CFlexController::pszName(); // 1337
				CUtlSymbol::IsValid(); // 88
				CUtlSymbolTable::FindElement(
						const char* pString);  // 90
				CUtlStringMap<int, CUtlSymbolTable>::Find(
					const char* pString);  // 1341
				CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 53
				{
				}
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 54
				CUtlStringMap<int, CUtlSymbolTable>::operator[](
						IndexType_t n);  // 1349
				Plat_IsInDebugSession(void); // 1344
			}
		}
		CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::Count(); // 1331
		CUtlMemory<short int, int>::NumAllocated(); // 782
		CUtlMemory<short int, int>::Base(); // 112
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 368
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::AddMultipleToTail(
					int num);  // 1332
		CUtlMemory<short int, int>::Base(); // 112
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 1333
	}
} /* size: 0 */

// <04BC0870> modellib/modelbuilder.cpp:1358
// variables: 11
// function calls: 72
void CModelBuilder::CreateRemappingTableForMesh(int nMesh, const CRenderMesh* pMeshData, const CMorphSetData* pMorphSetData)
{
	RemappingTable_t& remapTable; // 1361
	const CRenderSkeleton* pRenderSkeleton; // 1364
	int nTotalHitBoxes; // 1379
	int nHitBoxSets; // 1380
	{
		int16* pRemapBase; // 1368
		{
			int b; // 1369
			Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
				KeyArg_t k);  // 226
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
					int i);  // 204
			CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
			IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
					handle_t idx);  // 227
			CModelSkeletonBuilder::FindBoneIndexByHash(
						uint32 nHash);  // 1371
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
					int i);  // 1371
		}
		CUtlMemory<short int, int>::NumAllocated(); // 782
		CUtlMemory<short int, int>::Base(); // 112
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 368
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::ShiftElementsRight(
					int elem,
					int num);  // 1446
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::AddMultipleToTail(
					int num);  // 1367
		CUtlMemory<short int, int>::Base(); // 112
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 1368
	}
	{
		int s; // 1381
		{
			int nHitBoxes; // 1383
			int nIndex; // 1385
			int16* pRemapBase; // 1386
			{
				int h; // 1388
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 545
				CUtlRBTree<CUtlMap<char const::Element(
					int i);  // 93
				CUtlMap<char const::operator[](
						IndexType_t i);  // 186
				CUtlDict<CHitBoxSet, int>::Element(
					int i);  // 213
				CUtlDict<CHitBoxSet, int>::operator[](
						int i);  // 1390
				CUtlMemory<CHitBox, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::operator[](
						int i);  // 1390
				Plat_IsInDebugSession(void); // 1392
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 545
				CUtlRBTree<CUtlMap<char const::Element(
					int i);  // 93
				CUtlMap<char const::operator[](
						IndexType_t i);  // 186
				CUtlDict<CHitBoxSet, int>::Element(
					int i);  // 213
				CUtlDict<CHitBoxSet, int>::operator[](
						int i);  // 1393
				CUtlMemory<CHitBox, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::operator[](
						int i);  // 1393
				CUtlString::Get(); // 1393
				CUtlString::Get(); // 1393
				CUtlMemory<CHitBox, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::operator[](
						int i);  // 1396
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 545
				CUtlRBTree<CUtlMap<char const::Element(
					int i);  // 93
				CUtlMap<char const::operator[](
						IndexType_t i);  // 186
				CUtlDict<CHitBoxSet, int>::Element(
					int i);  // 213
				CUtlDict<CHitBoxSet, int>::operator[](
						int i);  // 1396
				Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
					KeyArg_t k);  // 226
				CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 204
				CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
						int i);  // 204
				CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
				IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
						handle_t idx);  // 227
				CModelSkeletonBuilder::FindBoneIndexByHash(
							uint32 nHash);  // 1396
			}
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
					int i);  // 545
			CUtlRBTree<CUtlMap<char const::Element(
				int i);  // 93
			CUtlMap<char const::operator[](
					IndexType_t i);  // 186
			CUtlDict<CHitBoxSet, int>::Element(
				int i);  // 213
			CUtlDict<CHitBoxSet, int>::operator[](
					int i);  // 1383
			CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Count(); // 1383
			CUtlMemory<short int, int>::NumAllocated(); // 782
			CUtlMemory<short int, int>::Base(); // 112
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 368
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::AddMultipleToTail(
						int num);  // 1385
			CUtlMemory<short int, int>::Base(); // 112
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 1386
		}
	}
	CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
			int i);  // 1361
	CUtlRBTree<CUtlMap<char const::Count()(char const* const&, char const* const&)>::Node_t, i this); // 177
	CUtlMap<char const::Count()(char const* const&, char const* const&)>* this); // 232
	CUtlDict<CHitBoxSet, int>::Count(); // 1380
} /* size: 762, variables: 4, inline expansions: 5 (51 bytes) */

// <04BC07CD> modellib/modelbuilder.cpp:1402
void CModelBuilder::CreateRemappingTableForMeshFromOldData(int nMesh, const CRenderMesh* pMeshData, const CMorphSetData* pMorphSetData)
{
} /* size: 0 */

// <04BC0301> modellib/modelbuilder.cpp:1407
// variables: 2
// function calls: 21
void CModelBuilder::CreateEmptyRemappingTable(int nMesh)
{
	RemappingTable_t& remapTable; // 1410
	Count(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemor this); // 1069
	CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::NumAllocated(); // 782
	CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::Base(); // 112
	Base(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this); // 368
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this); // 824
	GrowMemory(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
			int i);  // 1453
		CUtlMemory<short int, int>::ValidateGrowSize(); // 475
		CUtlMemory<short int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<short int, CUtlMemory<short int, int> >::CUtlVector(); // 1479
		Construct<CUtlVector<short int> >(CUtlVector<short int, CUtlMemory<short int, int> >* pMemory); // 1453
	}
	InsertMultipleBefore(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
				int num);  // 1071
	EnsureCount(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
			int num);  // 1409
	CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
			int i);  // 1410
} /* size: 0, variables: 1, inline expansions: 13 (0 bytes) */

// <04BBF6C8> modellib/modelbuilder.cpp:1416
// variables: 15
// function calls: 38
void CModelBuilder::AppendSkeletonsFromChildResources(bool bSortBones)
{
	int nAnims; // 1419
	int nMeshes; // 1431
	{
		int a; // 1420
		{
			const CAnimationGroupResource* pAnimation; // 1422
			CUtlMemory<CAnimationGroupResource::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationGroupResource::operator[](
					int i);  // 1422
			CSmartPtr<CAnimationGroup, CRefCountAccessor>::Get(); // 234
			CAnimationGroupResource::GetData(); // 1425
			CModelSkeletonBuilder::AppendSkeleton(
					const CAnimationGroup* pAnimationData);  // 1425
		}
	}
	{
		int m; // 1432
		{
			const CRenderMesh* pMesh; // 1434
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
					int i);  // 1216
			CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 1216
			CModelBuilder::GetRunTimeMesh(
					int nMesh);  // 1434
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
					int i);  // 1437
			CModelSkeletonBuilder::AppendRenderMeshSkeleton(
						const CRenderSkeleton* pRenderSkeleton,
						LODGroupMask_t nLODGroupMask);  // 1437
			{
				const CMorphSet* pMorphSet; // 1501
				CRenderMesh::GetMorphSet(); // 1501
				CSmartPtr<CMorphSetData, CRefCountAccessor>::Get(); // 151
				CMorphSet::GetMorphSetData(); // 1507
				{
					int nFlexControllers; // 1488
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::Count(); // 1488
					{
						int f; // 1489
						{
							const CFlexController* pFlexController; // 1491
							CUtlMemory<CFlexController, int>::operator[](
									int i);  // 595
							CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
									int i);  // 1491
						}
					}
				}
				CModelBuilder::AppendFlexControllers(
							const CMorphSetData* pMorphSetData);  // 1507
			}
			CModelBuilder::AppendFlexControllers(
						const CRenderMesh* pMesh);  // 1439
		}
	}
	{
		const CPhysAggregateData* pPhysData; // 1448
		CPhysAggregateDataHandle::Get(); // 1448
		CModelSkeletonBuilder::AppendSkeleton(
				const CPhysAggregateData* pData);  // 1450
	}
	{
		int m; // 1454
		{
			const CRenderMesh* pMesh; // 1456
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
					int i);  // 1216
			CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 1216
			CModelBuilder::GetRunTimeMesh(
					int nMesh);  // 1456
			CUtlRBTree<CUtlMap<char const::Count()(char const* const&, char const* const&)>::Node_t, this); // 177
			CUtlMap<char const::Count()(char const* const&, char const* const&)>* this); // 232
			CUtlDict<CAttachment, int>::Count(); // 390
			CModelSkeletonBuilder::MarkBonesWithAttachmentsAsSimBones(
								const CRenderMesh* pMeshData);  // 1459
		}
	}
	{
		int m; // 1469
		{
			const CRenderMesh* pMesh; // 1471
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
					int i);  // 1216
			CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 1216
			CModelBuilder::GetRunTimeMesh(
					int nMesh);  // 1471
		}
	}
	CUtlVectorBase<CAnimationGroupResource::Count(); // 1419
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 1211
	CModelBuilder::GetRunTimeMeshCount(); // 1431
	CModelSkeletonBuilder::Finalize(
		bool bSort);  // 1466
} /* size: 725, variables: 2, inline expansions: 4 (85 bytes) */

// <04BE186B> modellib/modelbuilder.cpp:1484
// variables: 3
// function calls: 3
void CModelBuilder::AppendFlexControllers(const CMorphSetData* pMorphSetData)
{
	{
		int nFlexControllers; // 1488
		CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::Count(); // 1488
		{
			int f; // 1489
			{
				const CFlexController* pFlexController; // 1491
				CUtlMemory<CFlexController, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
						int i);  // 1491
			}
		}
	}
} /* size: 0 */

// <04BBF65F> modellib/modelbuilder.cpp:1484
// variables: 3
void CModelBuilder::AppendFlexControllers(const CMorphSetData* pMorphSetData)
{
	{
		int nFlexControllers; // 1488
		{
			int f; // 1489
			{
				const CFlexController* pFlexController; // 1491
			}
		}
	}
} /* size: 0 */

// <04BE1987> modellib/modelbuilder.cpp:1497
// variables: 4
// function calls: 7
void CModelBuilder::AppendFlexControllers(const CRenderMesh* pMesh)
{
	{
		const CMorphSet* pMorphSet; // 1501
		CRenderMesh::GetMorphSet(); // 1501
		CSmartPtr<CMorphSetData, CRefCountAccessor>::Get(); // 151
		CMorphSet::GetMorphSetData(); // 1507
		{
			int nFlexControllers; // 1488
			CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::Count(); // 1488
			{
				int f; // 1489
				{
					const CFlexController* pFlexController; // 1491
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 1491
				}
			}
		}
		CModelBuilder::AppendFlexControllers(
					const CMorphSetData* pMorphSetData);  // 1507
	}
} /* size: 0 */

// <04BBF626> modellib/modelbuilder.cpp:1497
// variable: 1
void CModelBuilder::AppendFlexControllers(const CRenderMesh* pMesh)
{
	{
		const CMorphSet* pMorphSet; // 1501
	}
} /* size: 0 */

// <04BBF4B0> modellib/modelbuilder.cpp:1511
// variables: 3
// function calls: 4
void CModelBuilder::AppendFlexControllersFromOldData(const CMorphSetData* pMorphSetData)
{
	{
		int nFlexControllers; // 1488
		CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::Count(); // 1488
		{
			int f; // 1489
			{
				const CFlexController* pFlexController; // 1491
				CUtlMemory<CFlexController, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
						int i);  // 1491
			}
		}
	}
	CModelBuilder::AppendFlexControllers(
				const CMorphSetData* pMorphSetData);  // 1513
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04BBEBBF> modellib/modelbuilder.cpp:1516
// variables: 4
// function calls: 40
void CModelBuilder::AddBoneFlexDriver(const char* pBoneName, int nControlCount, const BuilderModelBoneFlexDriverControl_t* pControls)
{
	int nIndex; // 1518
	BuilderModelBoneFlexDriver_t& driver; // 1519
	CUtlMemory<BuilderModelBoneFlexDriver_t, int>::NumAllocated(); // 1143
	CUtlMemory<BuilderModelBoneFlexDriver_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 253
	CUtlMemory<BuilderModelBoneFlexDriverControl_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<BuilderModelBoneFlexDriverControl_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::CUtlVector(); // 253
	BuilderModelBoneFlexDriver_t::BuilderModelBoneFlexDriver_t(); // 1479
	Construct<BuilderModelBoneFlexDriver_t>(BuilderModelBoneFlexDriver_t* pMemory); // 1148
	CUtlMemory<BuilderModelBoneFlexDriver_t, int>::Base(); // 112
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::Base(); // 368
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::AddToTail(); // 1518
	CUtlString::operator=(
			const char* src);  // 1520
	CUtlMemory<BuilderModelBoneFlexDriver_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::operator[](
			int i);  // 1519
	CUtlMemory<BuilderModelBoneFlexDriverControl_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::Element(
		int i);  // 1097
	CUtlMemory<BuilderModelBoneFlexDriverControl_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::Element(
		int i);  // 1097
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1097
	CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::ShiftElementsRight(
				int elem,
				int num);  // 1485
	{
		int i; // 1500
		CUtlMemory<BuilderModelBoneFlexDriverControl_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::Element(
			int i);  // 1502
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 245
		BuilderModelBoneFlexDriverControl_t::BuilderModelBoneFlexDriverControl_t(
							const BuilderModelBoneFlexDriverControl_t  &);  // 1520
		CopyConstruct<BuilderModelBoneFlexDriverControl_t>(BuilderModelBoneFlexDriverControl_t* pMemory,
									const BuilderModelBoneFlexDriverControl_t& src);  // 1502
	}
	{
		int i; // 1492
		CUtlMemory<BuilderModelBoneFlexDriverControl_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::Element(
			int i);  // 1494
		CUtlString::CUtlString(); // 245
		BuilderModelBoneFlexDriverControl_t::BuilderModelBoneFlexDriverControl_t(); // 1479
		Construct<BuilderModelBoneFlexDriverControl_t>(BuilderModelBoneFlexDriverControl_t* pMemory); // 1494
	}
	CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const BuilderModelBoneFlexDriverControl_t* pToInsert);  // 1476
	CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const BuilderModelBoneFlexDriverControl_t* pToInsert);  // 1303
	CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::AddMultipleToTail(
				int num,
				const BuilderModelBoneFlexDriverControl_t* pToCopy);  // 1521
} /* size: 0, variables: 2, inline expansions: 29 (0 bytes) */

// <04BBE9E7> modellib/modelbuilder.cpp:1524
// variables: 2
// function calls: 7
void CModelBuilder::AddBoneFlexDrivers(const BuilderModelBoneFlexDriverList_t* pList)
{
	int nCount; // 1529
	{
		int i; // 1530
		CUtlString::Get(); // 1532
		CUtlMemory<BuilderModelBoneFlexDriver_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::operator[](
				int i);  // 1532
		CUtlMemory<BuilderModelBoneFlexDriverControl_t, int>::Base(); // 113
		CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::Base(); // 1532
		CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::Count(); // 1532
	}
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::Count(); // 1529
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <04BBC3E5> modellib/modelbuilder.cpp:1536
// variables: 22
// function calls: 165
void CModelBuilder::InitFromModel(const CModel* pModel)
{
	int nMeshes; // 1552
	int nAnims; // 1563
	int nMeshGroups; // 1571
	int nMaterialGroups; // 1579
	int nBoneFlexDrivers; // 1606
	{
		int m; // 1554
	}
	{
		int a; // 1565
		CUtlMemory<CAnimationGroupResource::operator[](
				int i);  // 595
		CUtlVectorBase<CAnimationGroupResource::operator[](
				int i);  // 1567
		CUtlMemory<CAnimationGroupResource::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimationGroupResource::operator[](
				int i);  // 1567
	}
	{
		int g; // 1573
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 1575
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1575
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1575
	}
	{
		int g; // 1581
		{
			int nMaterials; // 1585
			{
				int m; // 1587
				CUtlMemory<CModelMaterialGroup, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::operator[](
						int i);  // 1589
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this,
						int i);  // 1589
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
				CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 1589
				CUtlMemory<CBuilderMaterialGroup, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
						int i);  // 1589
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
						int i);  // 1589
				CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
						const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1589
			}
			CUtlMemory<CModelMaterialGroup, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::operator[](
					int i);  // 1583
			CUtlMemory<CBuilderMaterialGroup, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
					int i);  // 1583
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 1583
			CUtlMemory<CModelMaterialGroup, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::operator[](
					int i);  // 1585
			Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 1585
			CUtlMemory<CBuilderMaterialGroup, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
					int i);  // 1586
			CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::NumAllocated(); // 782
			CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::Base(); // 112
			Base(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 368
			ResetDbgInfo(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 824
			GrowMemory(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
					int num);  // 784
			GrowVector(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
					int num);  // 1445
			{
				int i; // 1451
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
					int i);  // 1453
				CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 1479
				Construct<CStrongHandle<InfoForResourceTypeIMaterial2> >(CStrongHandle<InfoForResourceTypeIMaterial2>* pMemory); // 1453
			}
			InsertMultipleBefore(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
						int elem,
						int num);  // 1437
			InsertMultipleBefore(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
						int elem,
						int num);  // 1294
			AddMultipleToTail(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
						int num);  // 1586
		}
	}
	{
		int b; // 1608
		{
			int nControls; // 1612
			const CBoneFlexDriverControl* pSrcControls; // 1613
			int nIndex; // 1615
			BuilderModelBoneFlexDriverControl_t* pDestControls; // 1616
			{
				int c; // 1617
				V_strlen(const char* str); // 393
				CUtlString::Length(); // 161
				CUtlString::Get(); // 161
				CUtlString::operator=(
						const CUtlString& src);  // 1620
			}
			CUtlMemory<CBoneFlexDriver, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::operator[](
					int i);  // 1610
			CUtlMemory<BuilderModelBoneFlexDriver_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::operator[](
					int i);  // 1610
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 1610
			CUtlMemory<CBoneFlexDriver, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::operator[](
					int i);  // 1612
			CUtlVectorBase<CBoneFlexDriverControl, CUtlMemory<CBoneFlexDriverControl, int> >::Count(); // 1612
			CUtlMemory<CBoneFlexDriverControl, int>::Base(); // 113
			CUtlVectorBase<CBoneFlexDriverControl, CUtlMemory<CBoneFlexDriverControl, int> >::Base(); // 1613
			CUtlMemory<BuilderModelBoneFlexDriver_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::operator[](
					int i);  // 1615
			CUtlMemory<BuilderModelBoneFlexDriverControl_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::Element(
				int i);  // 1097
			CUtlMemory<BuilderModelBoneFlexDriverControl_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::Element(
				int i);  // 1097
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1097
			CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::ShiftElementsRight(
						int elem,
						int num);  // 1446
			{
				int i; // 1451
				CUtlMemory<BuilderModelBoneFlexDriverControl_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::Element(
					int i);  // 1453
				CUtlString::CUtlString(); // 245
				BuilderModelBoneFlexDriverControl_t::BuilderModelBoneFlexDriverControl_t(); // 1479
				Construct<BuilderModelBoneFlexDriverControl_t>(BuilderModelBoneFlexDriverControl_t* pMemory); // 1453
			}
			CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::AddMultipleToTail(
						int num);  // 1615
			CUtlMemory<BuilderModelBoneFlexDriver_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::operator[](
					int i);  // 1616
			CUtlMemory<BuilderModelBoneFlexDriverControl_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::operator[](
					int i);  // 1616
		}
	}
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 1540
	Vector::operator=(
			const Vector& vOther);  // 1542
	Vector::operator=(
			const Vector& vOther);  // 1543
	Vector::operator=(
			const Vector& vOther);  // 1544
	Vector::operator=(
			const Vector& vOther);  // 1545
	Vector::operator=(
			const Vector& vOther);  // 1547
	CPhysAggregateDataHandle::Get(); // 400
	CModel::GetPhysicsContainer(); // 1560
	CPhysAggregateDataHandle::Clear(); // 205
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 1560
	CUtlVectorBase<CAnimationGroupResource::Count(); // 1563
	CUtlMemory<CAnimationGroupResource::NumAllocated(); // 782
	CUtlMemory<CAnimationGroupResource::Base(); // 112
	CUtlVectorBase<CAnimationGroupResource::Base(); // 368
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 824
	CUtlVectorBase<CAnimationGroupResource::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CAnimationGroupResource::GrowVector(
			int num);  // 1445
	CUtlVectorBase<CAnimationGroupResource::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CAnimationGroupResource::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CAnimationGroupResource::AddMultipleToTail(
				int num);  // 1564
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1571
	CUtlMemory<CUtlString, int>::NumAllocated(); // 782
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1453
		CUtlString::CUtlString(); // 1479
		Construct<CUtlString>(CUtlString* pMemory); // 1453
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddMultipleToTail(
				int num);  // 1572
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::Count(); // 1579
	CUtlMemory<CBuilderMaterialGroup, int>::NumAllocated(); // 782
	CUtlMemory<CBuilderMaterialGroup, int>::Base(); // 112
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::Base(); // 368
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlString::CUtlString(); // 24
		CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::ValidateGrowSize(); // 475
		CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 530
		CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, i this); // 24
		CBuilderMaterialGroup::CBuilderMaterialGroup(); // 1479
		Construct<CBuilderMaterialGroup>(CBuilderMaterialGroup* pMemory); // 1453
		CUtlMemory<CBuilderMaterialGroup, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::Element(
			int i);  // 1453
	}
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::AddMultipleToTail(
				int num);  // 1580
	CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::Count(); // 1606
	CUtlMemory<BuilderModelBoneFlexDriver_t, int>::NumAllocated(); // 782
	CUtlMemory<BuilderModelBoneFlexDriver_t, int>::Base(); // 112
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::Base(); // 368
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlString::CUtlString(); // 253
		CUtlMemory<BuilderModelBoneFlexDriverControl_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<BuilderModelBoneFlexDriverControl_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::CUtlVector(); // 253
		BuilderModelBoneFlexDriver_t::BuilderModelBoneFlexDriver_t(); // 1479
		Construct<BuilderModelBoneFlexDriver_t>(BuilderModelBoneFlexDriver_t* pMemory); // 1453
		CUtlMemory<BuilderModelBoneFlexDriver_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::Element(
			int i);  // 1453
	}
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::AddMultipleToTail(
				int num);  // 1607
} /* size: 0, variables: 5, inline expansions: 53 (0 bytes) */

// <04BB9C24> modellib/modelbuilder.cpp:1627
// variables: 30
// function calls: 148
void CModelBuilder::FillInPermData(PermModelData_t* pPermData)
{
	int nMeshes; // 1636
	int nPhysDataCount; // 1648
	const char   __FUNCTION__; // 28829
	int nAnims; // 1662
	int nMeshGroups; // 1670
	int nMaterialGroups; // 1681
	int nTables; // 1702
	int nTotalIndices; // 1705
	int nIndex; // 1713
	int nBoneFlexDrivers; // 1730
	{
		int m; // 1640
		CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::operator[](
				int i);  // 1642
		CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMe this,
				int i);  // 1642
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 604
		CStrongHandle<InfoForResourceTypeCRenderMesh>::Init(
			const CStrongHandle<InfoForResourceTypeCRenderMesh>& src);  // 666
		CStrongHandle<InfoForResourceTypeCRenderMesh>::operator=(
				const CStrongHandle<InfoForResourceTypeCRenderMesh>& src);  // 1642
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
				int i);  // 1643
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
				int i);  // 1643
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
				int i);  // 1644
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
				int i);  // 1644
	}
	{
		int p; // 1651
		CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCP this,
				int i);  // 1653
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 604
		CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init(
			const CStrongHandle<InfoForResourceTypeCPhysAggregateData>& src);  // 666
		CStrongHandle<InfoForResourceTypeCPhysAggregateData>::operator=(
				const CStrongHandle<InfoForResourceTypeCPhysAggregateData>& src);  // 1653
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
				int i);  // 1654
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1661
	}
	{
		int a; // 1664
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
				int i);  // 1666
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
				int i);  // 1666
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 604
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::Init(
			const CStrongHandle<InfoForResourceTypeCAnimationGroup>& src);  // 666
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::operator=(
				const CStrongHandle<InfoForResourceTypeCAnimationGroup>& src);  // 1666
	}
	{
		int g; // 1672
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 1674
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1674
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1674
	}
	{
		int g; // 1683
		{
			int nMaterials; // 1687
			{
				int m; // 1689
				CUtlMemory<CBuilderMaterialGroup, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
						int i);  // 1691
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
						int i);  // 1691
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
						int i);  // 1691
				ThreadInterlockedIncrement(volatile int32* p); // 576
				CInterlockedIntT<int, 4>::operator++(); // 604
				CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
					const CStrongHandle<InfoForResourceTypeIMaterial2>& src);  // 666
				CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
						const CStrongHandle<InfoForResourceTypeIMaterial2>& src);  // 1691
				CUtlMemory<MaterialGroup_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::operator[](
						int i);  // 1691
			}
			CUtlMemory<CBuilderMaterialGroup, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
					int i);  // 1685
			CUtlMemory<MaterialGroup_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::operator[](
					int i);  // 1685
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 1685
			CUtlMemory<CBuilderMaterialGroup, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
					int i);  // 1687
			Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 1687
			CUtlMemory<MaterialGroup_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::operator[](
					int i);  // 1688
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1703
	}
	{
		int t; // 1706
		CUtlMemory<short unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
				int i);  // 1708
		CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
				int i);  // 1709
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 1709
	}
	{
		int t; // 1714
		{
			int i; // 1716
			CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
					int i);  // 1716
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 1716
			CUtlMemory<short int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Element(
				int i);  // 1718
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 1718
		}
	}
	{
		int i; // 1724
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1724
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 1726
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 1726
	}
	{
		int b; // 1732
		{
			const BuilderModelBoneFlexDriver_t* pSrcDriver; // 1734
			ModelBoneFlexDriver_t* pDstDriver; // 1735
			int nControls; // 1739
			{
				int c; // 1741
				{
					const BuilderModelBoneFlexDriverControl_t* pSrcControl; // 1743
					ModelBoneFlexDriverControl_t* pDstControl; // 1744
					CUtlMemory<BuilderModelBoneFlexDriverControl_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::operator[](
							int i);  // 1743
					CUtlMemory<ModelBoneFlexDriverControl_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<ModelBoneFlexDriverControl_t, CUtlMemory<ModelBoneFlexDriverControl_t, int> >::operator[](
							int i);  // 1744
					V_strlen(const char* str); // 393
					CUtlString::Length(); // 161
					CUtlString::Get(); // 161
					CUtlString::operator=(
							const CUtlString& src);  // 1747
					CUtlString::Get(); // 1748
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 1748
				}
			}
			CUtlString::Get(); // 161
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 1736
			CUtlMemory<BuilderModelBoneFlexDriver_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::operator[](
					int i);  // 1734
			CUtlMemory<ModelBoneFlexDriver_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ModelBoneFlexDriver_t, CUtlMemory<ModelBoneFlexDriver_t, int> >::operator[](
					int i);  // 1735
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 1737
			CUtlString::Get(); // 1737
			CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::Count(); // 1739
		}
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1631
	CUtlString::Get(); // 1633
	CUtlString::operator=(
			const char* src);  // 1633
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::Count(); // 1636
	CUtlMemory<unsigned char, int>::NumAllocated(); // 782
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::SetCount(
		int count);  // 1639
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>::HasHandle(); // 1648
	CUtlVectorBase<CAnimationGroupResource::Count(); // 1661
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTyp this); // 1662
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1670
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 574
	CUtlMemory<CUtlString, int>::Base(); // 113
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 209
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 200
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 574
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 1678
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::Count(); // 1681
	Count(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemor this); // 1702
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1723
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::Count(); // 1730
} /* size: 0, variables: 10, inline expansions: 41 (0 bytes) */

// <01EFEA92> modellib/modelbuilder.cpp:1627
// variables: 30
// function calls: 148
void CModelBuilder::FillInPermData(PermModelData_t* pPermData)
{
	int nMeshes; // 1636
	int nPhysDataCount; // 1648
	const char   __FUNCTION__; // 36352
	int nAnims; // 1662
	int nMeshGroups; // 1670
	int nMaterialGroups; // 1681
	int nTables; // 1702
	int nTotalIndices; // 1705
	int nIndex; // 1713
	int nBoneFlexDrivers; // 1730
	{
		int m; // 1640
		CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::operator[](
				int i);  // 1642
		CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMe this,
				int i);  // 1642
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 604
		CStrongHandle<InfoForResourceTypeCRenderMesh>::Init(
			const CStrongHandle<InfoForResourceTypeCRenderMesh>& src);  // 666
		CStrongHandle<InfoForResourceTypeCRenderMesh>::operator=(
				const CStrongHandle<InfoForResourceTypeCRenderMesh>& src);  // 1642
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
				int i);  // 1643
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
				int i);  // 1643
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
				int i);  // 1644
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
				int i);  // 1644
	}
	{
		int p; // 1651
		CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCP this,
				int i);  // 1653
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 604
		CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init(
			const CStrongHandle<InfoForResourceTypeCPhysAggregateData>& src);  // 666
		CStrongHandle<InfoForResourceTypeCPhysAggregateData>::operator=(
				const CStrongHandle<InfoForResourceTypeCPhysAggregateData>& src);  // 1653
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
				int i);  // 1654
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1661
	}
	{
		int a; // 1664
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
				int i);  // 1666
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
				int i);  // 1666
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 604
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::Init(
			const CStrongHandle<InfoForResourceTypeCAnimationGroup>& src);  // 666
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::operator=(
				const CStrongHandle<InfoForResourceTypeCAnimationGroup>& src);  // 1666
	}
	{
		int g; // 1672
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 1674
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1674
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1674
	}
	{
		int g; // 1683
		{
			int nMaterials; // 1687
			{
				int m; // 1689
				CUtlMemory<CBuilderMaterialGroup, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
						int i);  // 1691
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
						int i);  // 1691
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
						int i);  // 1691
				ThreadInterlockedIncrement(volatile int32* p); // 576
				CInterlockedIntT<int, 4>::operator++(); // 604
				CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
					const CStrongHandle<InfoForResourceTypeIMaterial2>& src);  // 666
				CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
						const CStrongHandle<InfoForResourceTypeIMaterial2>& src);  // 1691
				CUtlMemory<MaterialGroup_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::operator[](
						int i);  // 1691
			}
			CUtlMemory<CBuilderMaterialGroup, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
					int i);  // 1685
			CUtlMemory<MaterialGroup_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::operator[](
					int i);  // 1685
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 1685
			CUtlMemory<CBuilderMaterialGroup, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
					int i);  // 1687
			Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 1687
			CUtlMemory<MaterialGroup_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::operator[](
					int i);  // 1688
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1703
	}
	{
		int t; // 1706
		CUtlMemory<short unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
				int i);  // 1708
		CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
				int i);  // 1709
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 1709
	}
	{
		int t; // 1714
		{
			int i; // 1716
			CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
					int i);  // 1716
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 1716
			CUtlMemory<short int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Element(
				int i);  // 1718
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 1718
		}
	}
	{
		int i; // 1724
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1724
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 1726
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 1726
	}
	{
		int b; // 1732
		{
			const BuilderModelBoneFlexDriver_t* pSrcDriver; // 1734
			ModelBoneFlexDriver_t* pDstDriver; // 1735
			int nControls; // 1739
			{
				int c; // 1741
				{
					const BuilderModelBoneFlexDriverControl_t* pSrcControl; // 1743
					ModelBoneFlexDriverControl_t* pDstControl; // 1744
					CUtlMemory<BuilderModelBoneFlexDriverControl_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::operator[](
							int i);  // 1743
					CUtlMemory<ModelBoneFlexDriverControl_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<ModelBoneFlexDriverControl_t, CUtlMemory<ModelBoneFlexDriverControl_t, int> >::operator[](
							int i);  // 1744
					V_strlen(const char* str); // 393
					CUtlString::Length(); // 161
					CUtlString::Get(); // 161
					CUtlString::operator=(
							const CUtlString& src);  // 1747
					CUtlString::Get(); // 1748
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 1748
				}
			}
			CUtlString::Get(); // 161
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 1736
			CUtlMemory<BuilderModelBoneFlexDriver_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::operator[](
					int i);  // 1734
			CUtlMemory<ModelBoneFlexDriver_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ModelBoneFlexDriver_t, CUtlMemory<ModelBoneFlexDriver_t, int> >::operator[](
					int i);  // 1735
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 1737
			CUtlString::Get(); // 1737
			CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::Count(); // 1739
		}
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1631
	CUtlString::Get(); // 1633
	CUtlString::operator=(
			const char* src);  // 1633
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::Count(); // 1636
	CUtlMemory<unsigned char, int>::NumAllocated(); // 782
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::SetCount(
		int count);  // 1639
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>::HasHandle(); // 1648
	CUtlVectorBase<CAnimationGroupResource::Count(); // 1661
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTyp this); // 1662
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1670
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 574
	CUtlMemory<CUtlString, int>::Base(); // 113
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 209
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 200
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 574
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 1678
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::Count(); // 1681
	Count(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemor this); // 1702
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1723
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::Count(); // 1730
} /* size: 0, variables: 10, inline expansions: 41 (0 bytes) */

// <00B34A67> modellib/modelbuilder.cpp:1627
// variables: 30
// function calls: 148
void CModelBuilder::FillInPermData(PermModelData_t* pPermData)
{
	int nMeshes; // 1636
	int nPhysDataCount; // 1648
	const char   __FUNCTION__; // 11077
	int nAnims; // 1662
	int nMeshGroups; // 1670
	int nMaterialGroups; // 1681
	int nTables; // 1702
	int nTotalIndices; // 1705
	int nIndex; // 1713
	int nBoneFlexDrivers; // 1730
	{
		int m; // 1640
		CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::operator[](
				int i);  // 1642
		CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMe this,
				int i);  // 1642
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 604
		CStrongHandle<InfoForResourceTypeCRenderMesh>::Init(
			const CStrongHandle<InfoForResourceTypeCRenderMesh>& src);  // 666
		CStrongHandle<InfoForResourceTypeCRenderMesh>::operator=(
				const CStrongHandle<InfoForResourceTypeCRenderMesh>& src);  // 1642
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
				int i);  // 1643
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
				int i);  // 1643
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
				int i);  // 1644
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
				int i);  // 1644
	}
	{
		int p; // 1651
		CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCP this,
				int i);  // 1653
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 604
		CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init(
			const CStrongHandle<InfoForResourceTypeCPhysAggregateData>& src);  // 666
		CStrongHandle<InfoForResourceTypeCPhysAggregateData>::operator=(
				const CStrongHandle<InfoForResourceTypeCPhysAggregateData>& src);  // 1653
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
				int i);  // 1654
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1661
	}
	{
		int a; // 1664
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
				int i);  // 1666
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
				int i);  // 1666
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 604
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::Init(
			const CStrongHandle<InfoForResourceTypeCAnimationGroup>& src);  // 666
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::operator=(
				const CStrongHandle<InfoForResourceTypeCAnimationGroup>& src);  // 1666
	}
	{
		int g; // 1672
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 1674
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1674
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1674
	}
	{
		int g; // 1683
		{
			int nMaterials; // 1687
			{
				int m; // 1689
				CUtlMemory<CBuilderMaterialGroup, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
						int i);  // 1691
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
						int i);  // 1691
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
						int i);  // 1691
				ThreadInterlockedIncrement(volatile int32* p); // 576
				CInterlockedIntT<int, 4>::operator++(); // 604
				CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
					const CStrongHandle<InfoForResourceTypeIMaterial2>& src);  // 666
				CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
						const CStrongHandle<InfoForResourceTypeIMaterial2>& src);  // 1691
				CUtlMemory<MaterialGroup_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::operator[](
						int i);  // 1691
			}
			CUtlMemory<CBuilderMaterialGroup, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
					int i);  // 1685
			CUtlMemory<MaterialGroup_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::operator[](
					int i);  // 1685
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 1685
			CUtlMemory<CBuilderMaterialGroup, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
					int i);  // 1687
			Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 1687
			CUtlMemory<MaterialGroup_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::operator[](
					int i);  // 1688
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1703
	}
	{
		int t; // 1706
		CUtlMemory<short unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
				int i);  // 1708
		CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
				int i);  // 1709
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 1709
	}
	{
		int t; // 1714
		{
			int i; // 1716
			CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
					int i);  // 1716
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 1716
			CUtlMemory<short int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Element(
				int i);  // 1718
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 1718
		}
	}
	{
		int i; // 1724
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1724
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 1726
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 1726
	}
	{
		int b; // 1732
		{
			const BuilderModelBoneFlexDriver_t* pSrcDriver; // 1734
			ModelBoneFlexDriver_t* pDstDriver; // 1735
			int nControls; // 1739
			{
				int c; // 1741
				{
					const BuilderModelBoneFlexDriverControl_t* pSrcControl; // 1743
					ModelBoneFlexDriverControl_t* pDstControl; // 1744
					CUtlMemory<BuilderModelBoneFlexDriverControl_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::operator[](
							int i);  // 1743
					CUtlMemory<ModelBoneFlexDriverControl_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<ModelBoneFlexDriverControl_t, CUtlMemory<ModelBoneFlexDriverControl_t, int> >::operator[](
							int i);  // 1744
					V_strlen(const char* str); // 393
					CUtlString::Length(); // 161
					CUtlString::Get(); // 161
					CUtlString::operator=(
							const CUtlString& src);  // 1747
					CUtlString::Get(); // 1748
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 1748
				}
			}
			CUtlString::Get(); // 161
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 1736
			CUtlMemory<BuilderModelBoneFlexDriver_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::operator[](
					int i);  // 1734
			CUtlMemory<ModelBoneFlexDriver_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ModelBoneFlexDriver_t, CUtlMemory<ModelBoneFlexDriver_t, int> >::operator[](
					int i);  // 1735
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 1737
			CUtlString::Get(); // 1737
			CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::Count(); // 1739
		}
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1631
	CUtlString::Get(); // 1633
	CUtlString::operator=(
			const char* src);  // 1633
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::Count(); // 1636
	CUtlMemory<unsigned char, int>::NumAllocated(); // 782
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::SetCount(
		int count);  // 1639
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>::HasHandle(); // 1648
	CUtlVectorBase<CAnimationGroupResource::Count(); // 1661
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTyp this); // 1662
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1670
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 574
	CUtlMemory<CUtlString, int>::Base(); // 113
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 209
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 200
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 574
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 1678
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::Count(); // 1681
	Count(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemor this); // 1702
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1723
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::Count(); // 1730
} /* size: 0, variables: 10, inline expansions: 41 (0 bytes) */

// <04BB981A> modellib/modelbuilder.cpp:1755
// variables: 8
// function calls: 9
void CModelBuilder::ValidateBuilderType(EBuildertype_t nBuilderType)
{
	const char   __FUNCTION__; // 28954
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1759
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1760
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1761
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1762
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1766
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1767
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1768
	}
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTyp this); // 1760
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::Count(); // 1761
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1762
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>::operator==(
			const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& hResource);  // 1762
	CUtlVectorBase<CAnimationGroupResource::Count(); // 1766
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 1767
	CPhysAggregateDataHandle::IsValid(); // 1768
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <01EFE688> modellib/modelbuilder.cpp:1755
// variables: 8
// function calls: 9
void CModelBuilder::ValidateBuilderType(EBuildertype_t nBuilderType)
{
	const char   __FUNCTION__; // 36477
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1759
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1760
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1761
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1762
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1766
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1767
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1768
	}
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTyp this); // 1760
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::Count(); // 1761
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1762
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>::operator==(
			const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& hResource);  // 1762
	CUtlVectorBase<CAnimationGroupResource::Count(); // 1766
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 1767
	CPhysAggregateDataHandle::IsValid(); // 1768
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <00B3465D> modellib/modelbuilder.cpp:1755
// variables: 8
// function calls: 9
void CModelBuilder::ValidateBuilderType(EBuildertype_t nBuilderType)
{
	const char   __FUNCTION__; // 11202
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1759
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1760
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1761
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1762
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1766
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1767
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1768
	}
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTyp this); // 1760
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::Count(); // 1761
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1762
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>::operator==(
			const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& hResource);  // 1762
	CUtlVectorBase<CAnimationGroupResource::Count(); // 1766
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 1767
	CPhysAggregateDataHandle::IsValid(); // 1768
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <04BB9784> modellib/modelbuilder.cpp:1772
// variable: 1
void CModelBuilder::AllocateAndCompile()
{
	PermModelData_t* pPermRenderMeshData; // 1774
} /* size: 0, variables: 1 */

