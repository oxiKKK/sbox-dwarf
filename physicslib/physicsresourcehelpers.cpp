
//
// physicslib/physicsresourcehelpers.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 17
//

// <064678ED> physicslib/physicsresourcehelpers.cpp:22
// variables: 6
// function calls: 66
void VPhysics2ShapeDef_t::GetBbox()
{
	AABB_t box; // 24
	{
		int i; // 26
		CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::Count(); // 26
		CUtlMemory<RnSphereDesc_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::operator[](
				int i);  // 28
		Vector::Vector(); // 24
		Vector::Vector(); // 24
		AABB_t::AABB_t(); // 1192
		RnSphere_t::GetBbox(); // 28
		VectorMin(const Vector& a,
				const Vector& b,
				Vector& result);  // 99
		VectorMax(const Vector& a,
				const Vector& b,
				Vector& result);  // 100
		AABB_t::AddAABBToBounds(
				const AABB_t& other);  // 94
		AABB_t::operator|=(
				const AABB_t& other);  // 28
	}
	{
		int i; // 30
		CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::Count(); // 30
		CUtlMemory<RnCapsuleDesc_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::operator[](
				int i);  // 32
		Vector::Vector(); // 24
		Vector::Vector(); // 24
		AABB_t::AABB_t(); // 1386
		Min<float>(const float& val1,
				const float& val2);  // 1387
		Min<float>(const float& val1,
				const float& val2);  // 1387
		Min<float>(const float& val1,
				const float& val2);  // 1387
		RnCapsule_t::GetBbox(); // 32
		VectorMin(const Vector& a,
				const Vector& b,
				Vector& result);  // 99
		VectorMax(const Vector& a,
				const Vector& b,
				Vector& result);  // 100
		AABB_t::AddAABBToBounds(
				const AABB_t& other);  // 94
		AABB_t::operator|=(
				const AABB_t& other);  // 32
	}
	{
		int i; // 34
		CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Count(); // 34
		VectorMax(const Vector& a,
				const Vector& b,
				Vector& result);  // 100
		VectorMin(const Vector& a,
				const Vector& b,
				Vector& result);  // 99
		AABB_t::AddAABBToBounds(
				const AABB_t& other);  // 94
		AABB_t::operator|=(
				const AABB_t& other);  // 36
		CUtlMemory<RnHullDesc_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::operator[](
				int i);  // 36
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 138
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 139
		AABB_t::MakeInvalid(); // 1710
		Vector::Vector(); // 24
		Vector::Vector(); // 24
		AABB_t::AABB_t(); // 1709
		{
			int nVert; // 1712
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1712
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 1714
			AABB_t::AddPointToBounds(
					const Vector& vPoint);  // 83
			AABB_t::operator|=(
					const Vector& vPoint);  // 1714
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1714
		}
		RnHull_t::GetBbox(
			float flScale);  // 36
	}
	{
		int i; // 38
		CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::Count(); // 38
		CUtlMemory<RnMeshDesc_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::operator[](
				int i);  // 40
		Vector::Vector(); // 24
		Vector::Vector(); // 24
		AABB_t::AABB_t(); // 1865
		Vector::operator=(
				const Vector& vOther);  // 1866
		Vector::operator=(
				const Vector& vOther);  // 1867
		RnMesh_t::GetBbox(); // 40
		VectorMin(const Vector& a,
				const Vector& b,
				Vector& result);  // 99
		VectorMax(const Vector& a,
				const Vector& b,
				Vector& result);  // 100
		AABB_t::AddAABBToBounds(
				const AABB_t& other);  // 94
		AABB_t::operator|=(
				const AABB_t& other);  // 40
	}
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 24
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 138
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 139
	AABB_t::MakeInvalid(); // 25
} /* size: 1264, variables: 1, inline expansions: 6 (50 bytes) */

// <0646767B> physicslib/physicsresourcehelpers.cpp:47
// variables: 5
// function calls: 7
void PrintList(char* pBuffer, int nBufferSize, const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& interactAsStrings)
{
	char* pBufferEnd; // 49
	char* pRunning; // 49
	{
		int i; // 51
		{
			const char* pStr; // 53
			int nLen; // 55
			V_strlen(const char* str); // 55
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 65
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 53
			CUtlString::Get(); // 53
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 51
	}
} /* size: 0, variables: 2 */

// <06466893> physicslib/physicsresourcehelpers.cpp:73
// variables: 4
// function calls: 56
void ParseInteractionLayerList(const char* pList, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& out)
{
	{
		CUtlTokenizer tokenizer; // 77
		CUtlTokenReference token; // 79
		CUtlString::CUtlString(
				const char* pString);  // 85
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
				CUtlString& src);  // 85
		CUtlString::~CUtlString(); // 85
		{
			int i; // 1721
			CUtlMemory<TokenWarning_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::Element(
				int i);  // 1723
			CUtlString::~CUtlString(); // 171
			TokenWarning_t::~TokenWarning_t(); // 1526
			Destruct<TokenWarning_t>(TokenWarning_t* pMemory); // 1723
		}
		CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::RemoveAll(); // 1798
		CUtlMemory<TokenWarning_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<TokenWarning_t, int>::Purge(); // 903
		CUtlMemory<TokenWarning_t, int>::Purge(); // 1799
		CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::Purge(); // 560
		ValidateAlignment<TokenWarning_t>(void); // 508
		CUtlMemory<TokenWarning_t, int>::Purge(); // 510
		CUtlMemory<TokenWarning_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::~CUtlVector(); // 180
		CUtlString::~CUtlString(); // 180
		{
			int i; // 1721
			CUtlMemory<CUtlTokenReference, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Element(
				int i);  // 1723
			Destruct<CUtlTokenReference>(CUtlTokenReference* pMemory); // 1723
		}
		CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::RemoveAll(); // 1798
		AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8>::Base(); // 237
		CUtlMemory<CUtlTokenReference, int>::IsExternallyAllocated(); // 577
		CUtlMemory<CUtlTokenReference, int>::ConvertToExternalMemory(
					CUtlTokenReference* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<CUtlTokenReference, int>::Purge_FixedGrowable(
					CUtlTokenReference* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<CUtlTokenReference, int>::Purge_FixedGrowable(
					CUtlTokenReference* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<CUtlTokenReference, int>::Base(); // 112
		CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Base(); // 368
		CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Purge(); // 560
		ValidateAlignment<CUtlTokenReference>(void); // 508
		CUtlMemory<CUtlTokenReference, int>::Purge(); // 903
		CUtlMemory<CUtlTokenReference, int>::Purge(); // 510
		CUtlMemory<CUtlTokenReference, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<CUtlTokenReference, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<CUtlTokenReference, 8>::~CUtlVectorFixedGrowable(); // 180
		CUtlTokenizer::~CUtlTokenizer(); // 87
	}
} /* size: 0 */

// <06465436> physicslib/physicsresourcehelpers.cpp:92
// variables: 2
// function calls: 81
CPhysAggregateDataHandle CreateSphereAggregateData(float flRadius)
{
	VPhysXAggregateData_t* pBackingData; // 94
	CPhysAggregateData* pData; // 101
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 95
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 305
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 305
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(); // 305
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(); // 305
	CUtlMemory<matrix3x4a_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<matrix3x4a_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::CUtlVector(); // 305
	CUtlMemory<VPhysXBodyPart_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VPhysXBodyPart_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::CUtlVector(); // 305
	CUtlMemory<VPhysXConstraint2_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VPhysXConstraint2_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> >::CUtlVector(); // 305
	CUtlMemory<VPhysXJoint_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VPhysXJoint_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::CUtlVector(); // 305
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(); // 305
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 305
	CUtlMemory<VPhysXCollisionAttributes_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VPhysXCollisionAttributes_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> >::CUtlVector(); // 305
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 305
	CUtlString::CUtlString(); // 305
	VPhysXAggregateData_t::VPhysXAggregateData_t(); // 94
	CUtlMemory<VPhysXBodyPart_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::operator[](
			int i);  // 97
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 97
	CUtlMemory<VPhysXBodyPart_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::operator[](
			int i);  // 98
	CUtlMemory<VPhysXBodyPart_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::operator[](
			int i);  // 99
	CUtlMemory<RnSphereDesc_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::operator[](
			int i);  // 99
	CUtlMemory<VPhysXBodyPart_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::operator[](
			int i);  // 104
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 110
	CPhysAggregateDataHandle::CPhysAggregateDataHandle(
				CPhysAggregateData* pData);  // 105
	CUtlMemoryConservative<const VPhysXBodyPart_t::Base(); // 365
	CUtlMemoryConservative<const VPhysXBodyPart_t::operator[](
			int i);  // 588
	CUtlVectorBase<const VPhysXBodyPart_t::operator[](
			int i);  // 104
} /* size: 0, variables: 2, inline expansions: 81 (0 bytes) */

// <06462BE0> physicslib/physicsresourcehelpers.cpp:110
// variables: 4
// function calls: 188
CPhysAggregateDataHandle CreateBoxAggregateData(const Vector& vExtents)
{
	VPhysXAggregateData_t* pBackingData; // 112
	CPhysAggregateData* pData; // 119
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 113
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 305
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 305
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(); // 305
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(); // 305
	CUtlMemory<matrix3x4a_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<matrix3x4a_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::CUtlVector(); // 305
	CUtlMemory<VPhysXBodyPart_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VPhysXBodyPart_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::CUtlVector(); // 305
	CUtlMemory<VPhysXConstraint2_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VPhysXConstraint2_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> >::CUtlVector(); // 305
	CUtlMemory<VPhysXJoint_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VPhysXJoint_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::CUtlVector(); // 305
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(); // 305
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 305
	CUtlMemory<VPhysXCollisionAttributes_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VPhysXCollisionAttributes_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> >::CUtlVector(); // 305
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 305
	CUtlString::CUtlString(); // 305
	VPhysXAggregateData_t::VPhysXAggregateData_t(); // 112
	CUtlMemory<VPhysXBodyPart_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::operator[](
			int i);  // 115
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 115
	CUtlMemory<VPhysXBodyPart_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::operator[](
			int i);  // 116
	CUtlMemory<RnHullDesc_t, int>::NumAllocated(); // 782
	CUtlMemory<RnHullDesc_t, int>::IsGrowable(); // 823
	CUtlMemory<RnHullDesc_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<RnHullDesc_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<RnHullDesc_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<RnHullDesc_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Element(
			int i);  // 1453
		CUtlString::CUtlString(); // 698
		RnShapeDesc_t::RnShapeDesc_t(); // 724
		CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
		CUtlMemory<Vector, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 298
		CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::ResetDbgInfo(); // 530
		CUtlMemory<RnPlane_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<RnPlane_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> >::CUtlVector(); // 298
		CUtlMemory<RnHalfEdge_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<RnHalfEdge_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::CUtlVector(); // 298
		CUtlMemory<RnFace_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<RnFace_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> >::CUtlVector(); // 298
		CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 298
		Vector::operator=(
				const Vector& vOther);  // 28
		Vector::Vector(); // 27
		Vector::Vector(); // 27
		Vector::operator=(
				const Vector& vOther);  // 29
		AABB_t::AABB_t(
			const Vector& vMins,
			const Vector& vMaxs);  // 298
		RnHull_t::RnHull_t(); // 724
		RnHullDesc_t::RnHullDesc_t(); // 1479
		Construct<RnHullDesc_t>(RnHullDesc_t* pMemory); // 1453
	}
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::AddMultipleToTail(
				int num);  // 1319
	{
		int i; // 1696
		CUtlMemory<RnHullDesc_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Element(
			int i);  // 1697
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 1799
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 298
		CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::RemoveAll(); // 1798
		CUtlMemory<RnFace_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<RnFace_t, int>::Purge(); // 903
		CUtlMemory<RnFace_t, int>::Purge(); // 1799
		CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Purge(); // 560
		ValidateAlignment<RnFace_t>(void); // 508
		CUtlMemory<RnFace_t, int>::Purge(); // 510
		CUtlMemory<RnFace_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> >::~CUtlVector(); // 298
		CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::RemoveAll(); // 1798
		CUtlMemory<RnHalfEdge_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<RnHalfEdge_t, int>::Purge(); // 903
		CUtlMemory<RnHalfEdge_t, int>::Purge(); // 1799
		CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Purge(); // 560
		ValidateAlignment<RnHalfEdge_t>(void); // 508
		CUtlMemory<RnHalfEdge_t, int>::Purge(); // 510
		CUtlMemory<RnHalfEdge_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::~CUtlVector(); // 298
		CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::RemoveAll(); // 1798
		CUtlMemory<RnPlane_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<RnPlane_t, int>::Purge(); // 903
		CUtlMemory<RnPlane_t, int>::Purge(); // 1799
		CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Purge(); // 560
		ValidateAlignment<RnPlane_t>(void); // 508
		CUtlMemory<RnPlane_t, int>::Purge(); // 510
		CUtlMemory<RnPlane_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> >::~CUtlVector(); // 298
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
		CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
		CUtlMemory<Vector, int>::Purge(); // 903
		CUtlMemory<Vector, int>::Purge(); // 1799
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
		ValidateAlignment<Vector>(void); // 508
		CUtlMemory<Vector, int>::Purge(); // 510
		CUtlMemory<Vector, int>::~CUtlMemory(); // 562
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
		CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 298
		RnHull_t::~RnHull_t(); // 724
		CUtlString::~CUtlString(); // 698
		RnShapeDesc_t::~RnShapeDesc_t(); // 724
		RnHullDesc_t::~RnHullDesc_t(); // 1526
		Destruct<RnHullDesc_t>(RnHullDesc_t* pMemory); // 1697
	}
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::SetCount(
		int count);  // 116
	CUtlMemory<VPhysXBodyPart_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::operator[](
			int i);  // 117
	CUtlMemory<RnHullDesc_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::operator[](
			int i);  // 117
	CUtlMemory<VPhysXBodyPart_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::operator[](
			int i);  // 122
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 110
	CPhysAggregateDataHandle::CPhysAggregateDataHandle(
				CPhysAggregateData* pData);  // 123
	CUtlMemoryConservative<const VPhysXBodyPart_t::Base(); // 365
	CUtlMemoryConservative<const VPhysXBodyPart_t::operator[](
			int i);  // 588
	CUtlVectorBase<const VPhysXBodyPart_t::operator[](
			int i);  // 122
} /* size: 0, variables: 2, inline expansions: 94 (0 bytes) */

// <030865E1> physicslib/physicsresourcehelpers.cpp:150
// variables: 4
int FindBodyPartByHash(uint nHashKey, int nEnd, const uint32* pBonesHash, const uint16* pIndexHash)
{
	int nBegin; // 152
	{
		int nMiddle; // 161
		uint nMiddleIndex; // 162
		uint nMiddleHash; // 163
	}
} /* size: 0, variables: 1 */

// <06460E20> physicslib/physicsresourcehelpers.cpp:190
// variables: 8
// function calls: 54
bool CleanupTriangulation(CUtlVector<Vector, CUtlMemory<Vector, int> >& arrVertices, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& arrIndices)
{
	int nUsedVerts; // 192
	CUtlVector<int, CUtlMemory<int, int> > mapVerts; // 193
	CUtlVector<Vector, CUtlMemory<Vector, int> > newVertices; // 212
	{
		int i; // 196
		{
			uint nIndex; // 198
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 198
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 200
		}
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 196
	}
	{
		int i; // 214
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 214
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 218
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 218
		Vector::operator=(
				const Vector& vOther);  // 218
	}
	{
		int i; // 221
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 221
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 223
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 223
	}
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 193
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 194
	{
		int i; // 1554
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 195
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 207
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 212
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
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& vec);  // 225
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 228
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 228
} /* size: 0, variables: 3, inline expansions: 38 (0 bytes) */

// <0645EB1B> physicslib/physicsresourcehelpers.cpp:270
// variables: 12
// function calls: 111
void FillTriangles(int nTriangleCount, const uint32* pIndexBase, const VertexPositionColor_t* pVertexBase, AABB_t& bbox, CVertexData<VertexUVPosColorNormalAndTangent_t>& vb, CIndexData<unsigned int>& ib)
{
	{
		int i; // 272
		{
			int nIndex1; // 274
			int nIndex2; // 275
			int nIndex3; // 276
			Vector vertex1; // 282
			Vector vertex2; // 283
			Vector vertex3; // 284
			Vector edge1; // 286
			Vector edge2; // 287
			Vector normal; // 288
			Vector tangent; // 289
			Vector cotangent; // 290
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 604
			DotProduct(const Vector& a,
					const Vector& b);  // 604
			Vector::operator=(
					const Vector& vOther);  // 603
			VertexUVPosColorNormalAndTangent_t::TangentBasis(
					Vector vecTangentU,
					Vector vecTangentV);  // 300
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 604
			DotProduct(const Vector& a,
					const Vector& b);  // 604
			Vector::operator=(
					const Vector& vOther);  // 603
			VertexUVPosColorNormalAndTangent_t::TangentBasis(
					Vector vecTangentU,
					Vector vecTangentV);  // 316
			VertexUVPos_t::TexCoord(
				int nStage,
				const Vector4D& vecUV);  // 287
			Vector4D::Vector4D(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 287
			VertexUVPos_t::TexCoord2f(
					int nStage,
					float s,
					float t);  // 129
			CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::TexCoord2f<int, float, float>(
							int Arg1,
							float Arg2,
							float Arg3);  // 317
			Vector::operator=(
					const Vector& vOther);  // 103
			VertexPos_t::operator=(
					const VertexPos_t  &);  // 257
			Vector2D::operator=(
					const Vector2D& vOther);  // 257
			VertexUVPos_t::operator=(
					const VertexUVPos_t  &);  // 372
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 372
			VertexColorUVPos_t::operator=(
					const VertexColorUVPos_t  &);  // 572
			Vector::operator=(
					const Vector& vOther);  // 572
			Vector4D::operator=(
					const Vector4D& vOther);  // 572
			VertexUVPosColorNormalAndTangent_t::operator=(
					const VertexUVPosColorNormalAndTangent_t  &);  // 355
			CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 320
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 378
			VertexColorUVPos_t::Color(
				const VertexColor_t& vertexColor);  // 318
			VertexUVPos_t::SetUV0(
				float flU,
				float flV);  // 319
			CIndexDataBase<unsigned int>::Index(
				unsigned int nIndex);  // 278
			CIndexDataBase<unsigned int>::Index(
				unsigned int nIndex);  // 279
			CIndexDataBase<unsigned int>::Index(
				unsigned int nIndex);  // 280
			Vector::Normalized(); // 289
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 286
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 287
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 288
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 290
			Vector::NormalizeInPlace(); // 292
			AABB_t::AddPointToBounds(
					const Vector& vPoint);  // 83
			AABB_t::operator|=(
					const Vector& vPoint);  // 294
			AABB_t::AddPointToBounds(
					const Vector& vPoint);  // 83
			AABB_t::operator|=(
					const Vector& vPoint);  // 295
			AABB_t::AddPointToBounds(
					const Vector& vPoint);  // 83
			AABB_t::operator|=(
					const Vector& vPoint);  // 296
			VertexUVPos_t::TexCoord(
				int nStage,
				const Vector4D& vecUV);  // 287
			Vector4D::Vector4D(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 287
			VertexUVPos_t::TexCoord2f(
					int nStage,
					float s,
					float t);  // 129
			CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::TexCoord2f<int, float, float>(
							int Arg1,
							float Arg2,
							float Arg3);  // 301
			Vector::operator=(
					const Vector& vOther);  // 111
			VertexPos_t::Position(
				const Vector& vecPos);  // 127
			CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Position<Vector>(
					Vector Arg1);  // 298
			Vector::operator=(
					const Vector& vOther);  // 579
			VertexUVPosColorNormalAndTangent_t::Normal(
				const Vector& vecNormal);  // 128
			CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Normal<Vector>(
					Vector Arg1);  // 299
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 378
			VertexColorUVPos_t::Color(
				const VertexColor_t& vertexColor);  // 302
			Vector::operator=(
					const Vector& vOther);  // 103
			VertexPos_t::operator=(
					const VertexPos_t  &);  // 257
			Vector2D::operator=(
					const Vector2D& vOther);  // 257
			VertexUVPos_t::operator=(
					const VertexUVPos_t  &);  // 372
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 372
			VertexColorUVPos_t::operator=(
					const VertexColorUVPos_t  &);  // 572
			Vector::operator=(
					const Vector& vOther);  // 572
			Vector4D::operator=(
					const Vector4D& vOther);  // 572
			VertexUVPosColorNormalAndTangent_t::operator=(
					const VertexUVPosColorNormalAndTangent_t  &);  // 355
			CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 304
			VertexUVPos_t::SetUV0(
				float flU,
				float flV);  // 303
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 604
			DotProduct(const Vector& a,
					const Vector& b);  // 604
			Vector::operator=(
					const Vector& vOther);  // 603
			VertexUVPosColorNormalAndTangent_t::TangentBasis(
					Vector vecTangentU,
					Vector vecTangentV);  // 308
			Vector::operator=(
					const Vector& vOther);  // 103
			VertexPos_t::operator=(
					const VertexPos_t  &);  // 257
			Vector2D::operator=(
					const Vector2D& vOther);  // 257
			VertexUVPos_t::operator=(
					const VertexUVPos_t  &);  // 372
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 372
			VertexColorUVPos_t::operator=(
					const VertexColorUVPos_t  &);  // 572
			Vector::operator=(
					const Vector& vOther);  // 572
			Vector4D::operator=(
					const Vector4D& vOther);  // 572
			VertexUVPosColorNormalAndTangent_t::operator=(
					const VertexUVPosColorNormalAndTangent_t  &);  // 355
			CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 312
			Vector::operator=(
					const Vector& vOther);  // 111
			VertexPos_t::Position(
				const Vector& vecPos);  // 127
			CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Position<Vector>(
					Vector Arg1);  // 306
			Vector::operator=(
					const Vector& vOther);  // 579
			VertexUVPosColorNormalAndTangent_t::Normal(
				const Vector& vecNormal);  // 128
			CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Normal<Vector>(
					Vector Arg1);  // 307
			VertexUVPos_t::TexCoord(
				int nStage,
				const Vector4D& vecUV);  // 287
			Vector4D::Vector4D(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 287
			VertexUVPos_t::TexCoord2f(
					int nStage,
					float s,
					float t);  // 129
			CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::TexCoord2f<int, float, float>(
							int Arg1,
							float Arg2,
							float Arg3);  // 309
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 378
			VertexColorUVPos_t::Color(
				const VertexColor_t& vertexColor);  // 310
			VertexUVPos_t::SetUV0(
				float flU,
				float flV);  // 311
			Vector::operator=(
					const Vector& vOther);  // 111
			VertexPos_t::Position(
				const Vector& vecPos);  // 127
			CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Position<Vector>(
					Vector Arg1);  // 314
			Vector::operator=(
					const Vector& vOther);  // 579
			VertexUVPosColorNormalAndTangent_t::Normal(
				const Vector& vecNormal);  // 128
			CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Normal<Vector>(
					Vector Arg1);  // 315
		}
	}
} /* size: 0 */

// <03082029> physicslib/physicsresourcehelpers.cpp:326
// variables: 16
// function calls: 83
PhysicsSceneObject_t CreatePhysicsBodySceneObject(ISceneWorld* pSceneWorld, HMaterial hMaterial, int nTriangleCount, const uint32* pIndexBase, CStridedArray<RnVertex_t> pVertexBase, bool bDynamicVb)
{
	PhysicsSceneObject_t out; // 328
	{
		CRenderContextPtr pRenderContext; // 331
		AABB_t bbox; // 334
		CVertexData<VertexUVPosColorNormalAndTangent_t> vb; // 337
		CIndexData<unsigned int> ib; // 338
		{
			int i; // 340
			CIndexDataBase<unsigned int>::Index(
				unsigned int nIndex);  // 342
		}
		{
			uint i; // 344
			{
				const Vector& vPosition; // 346
				CStridedArray<RnVertex_t>::operator[](
						int i);  // 346
				AABB_t::AddPointToBounds(
						const Vector& vPoint);  // 83
				AABB_t::operator|=(
						const Vector& vPoint);  // 347
				Vector::operator=(
						const Vector& vOther);  // 111
				VertexPos_t::Position(
					const Vector& vecPos);  // 348
				Vector::operator=(
						const Vector& vOther);  // 579
				VertexUVPosColorNormalAndTangent_t::Normal(
					const Vector& vecNormal);  // 349
				Vector::operator=(
						const Vector& vOther);  // 103
				VertexPos_t::operator=(
						const VertexPos_t  &);  // 257
				Vector2D::operator=(
						const Vector2D& vOther);  // 257
				VertexUVPos_t::operator=(
						const VertexUVPos_t  &);  // 372
				VertexColor_t::AsUint32(); // 203
				VertexColor_t::operator=(
						const VertexColor_t& src);  // 372
				VertexColorUVPos_t::operator=(
						const VertexColorUVPos_t  &);  // 572
				Vector::operator=(
						const Vector& vOther);  // 572
				Vector4D::operator=(
						const Vector4D& vOther);  // 572
				VertexUVPosColorNormalAndTangent_t::operator=(
						const VertexUVPosColorNormalAndTangent_t  &);  // 355
				CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 351
			}
		}
		CRenderContextPtr::CRenderContextPtr<>(
					IRenderDevice* pDevice,
					const char* pDebugStringFmt);  // 331
		Vector::Vector(); // 24
		Vector::Vector(); // 24
		AABB_t::AABB_t(); // 334
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 138
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 139
		AABB_t::MakeInvalid(); // 335
		{
			BufferDesc_t vertexDesc; // 444
			CThreadSyncValue<bool>::Load(); // 34
			CTSInputLayoutCreator::IsInitialized(); // 623
			CTSInputLayoutCreator::GetLayout(); // 638
			{
				RenderInputLayoutField_t posColorUVNormalTangentLayout; // 625
				ThreadInterlockedAssignIf64(volatile int64* pDest,
								int64 value,
								int64 comparand);  // 800
				CThreadFastMutex::TryLockInline(
						const char* pFileName,
						int nLineNumber,
						const ThreadId_t  threadId);  // 837
				ThreadPause(void); // 839
				CThreadFastMutex::Lock(
					const char* pFileName,
					int nLineNumber,
					unsigned int nSpinSleepTime);  // 943
				Lock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
						const CThreadFastMutex& lock,
						const char* pFilename,
						int nLineNumber);  // 39
				CThreadSyncValue<bool>::Load(); // 34
				CTSInputLayoutCreator::IsInitialized(); // 40
				CThreadSyncValue<bool>::Store(
					bool value);  // 43
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 46
				CTSInputLayoutCreator::CreateLayout(
						const char* pLayoutName,
						int nFieldCount,
						const RenderInputLayoutField_t* pFieldDescs);  // 634
			}
			CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
			CTSInputLayoutCreator::CTSInputLayoutCreator(); // 621
			GetLayout(void); // 449
			{
				LockDesc_t desc; // 557
				bool bOk; // 558
			}
			CVertexData<VertexUVPosColorNormalAndTangent_t>::Lock(
				int nMaxVertexCount);  // 455
			CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::ClearVertexFields(); // 454
		}
		Vector::Vector(); // 103
		VertexPos_t::VertexPos_t(); // 257
		Vector2D::Vector2D(); // 257
		VertexUVPos_t::VertexUVPos_t(); // 372
		VertexColor_t::VertexColor_t(); // 372
		VertexColorUVPos_t::VertexColorUVPos_t(); // 572
		Vector::Vector(); // 572
		Vector4D::Vector4D(); // 572
		VertexUVPosColorNormalAndTangent_t::VertexUVPosColorNormalAndTangent_t(); // 165
		CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::ClearVertexFields(); // 171
		CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::CVertexDataBase(); // 440
		CVertexData<VertexUVPosColorNormalAndTangent_t>::CVertexData(
				IRenderContext* pRenderContext,
				RenderBufferType_t nType,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 337
		CRenderContextPtr::operator IRenderContext*(); // 337
		CStridedArray<RnVertex_t>::Count(); // 337
		CIndexData<unsigned int>::Init(
			IRenderContext* pRenderContext,
			RenderBufferType_t nType,
			int nIndexCount,
			const char* pDebugName,
			const char* pBudgetGroup);  // 335
		CIndexDataBase<unsigned int>::ClearIndexFields(); // 89
		CIndexDataBase<unsigned int>::CIndexDataBase(); // 332
		{
			LockDesc_t desc; // 459
			bool bOk; // 460
		}
		CIndexData<unsigned int>::Lock(
			int nMaxIndexCount);  // 336
		CIndexData<unsigned int>::CIndexData(
				IRenderContext* pRenderContext,
				RenderBufferType_t nType,
				int nIndexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 338
		{
			LockDesc_t desc; // 588
		}
		CVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 354
		{
			LockDesc_t desc; // 492
		}
		CIndexData<unsigned int>::Unlock(); // 480
		CIndexData<unsigned int>::Unlock(); // 355
		CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 358
		CIndexData<unsigned int>::TakeOwnership(); // 358
		CSceneObjectClassTypeDeclarator::CalcClassID(); // 3028
		CSceneObjectClassTypeDeclarator::operator int(); // 360
		CSceneObject::SetObjectClass(
				uint8 nClass);  // 360
		CIndexDataBase<unsigned int>::~CIndexDataBase(); // 343
		CIndexData<unsigned int>::~CIndexData(); // 361
		CVertexData<VertexUVPosColorNormalAndTangent_t>::Release(); // 461
		CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
		CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 361
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 361
	}
} /* size: 0, variables: 1 */

// <0645D0DF> physicslib/physicsresourcehelpers.cpp:365
// variables: 5
// function calls: 12
void UpdatePhysicsBodySceneObject(VertexBufferHandle_t vb, CStridedArray<RnVertex_t> pVertexBase)
{
	{
		CRenderContextPtr pRenderContext; // 369
		LockDesc_t lockDesc; // 371
		{
			VertexUVPosColorNormalAndTangent_t* pVerts; // 374
			{
				uint i; // 375
				{
					const RnVertex_t& vtx; // 377
					CStridedArray<RnVertex_t>::operator[](
							int i);  // 377
					Vector::operator=(
							const Vector& vOther);  // 111
					VertexPos_t::Position(
						const Vector& vecPos);  // 378
					Vector::operator=(
							const Vector& vOther);  // 579
					VertexUVPosColorNormalAndTangent_t::Normal(
						const Vector& vecNormal);  // 379
					VertexColor_t::Init(
						uint8 ir,
						uint8 ig,
						uint8 ib,
						uint8 ia);  // 381
					Vector2D::Init(
						vec_t ix,
						vec_t iy);  // 382
				}
			}
		}
		CRenderContextPtr::CRenderContextPtr<>(
					IRenderDevice* pDevice,
					const char* pDebugStringFmt);  // 369
		CRenderContextPtr::operator->(); // 372
		CStridedArray<RnVertex_t>::Count(); // 372
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 386
	}
} /* size: 0 */

// <0308068F> physicslib/physicsresourcehelpers.cpp:389
// variables: 15
// function calls: 79
PhysicsSceneObject_t CreatePhysicsEdgeSceneObject(ISceneWorld* pSceneWorld, HMaterial hMaterial, int nEdgeCount, const uint32* pIndexBase, CStridedArray<Vector> pVertexBase, bool bDynamicVb)
{
	PhysicsSceneObject_t out; // 391
	{
		CRenderContextPtr pRenderContext; // 394
		AABB_t bbox; // 400
		CVertexData<VertexColorPos_t> vb; // 403
		CIndexData<unsigned int> ib; // 404
		{
			uint i; // 406
			Vector::operator=(
					const Vector& vOther);  // 103
			VertexPos_t::operator=(
					const VertexPos_t  &);  // 160
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 160
			VertexColorPos_t::operator=(
					const VertexColorPos_t  &);  // 355
			CVertexDataBase<VertexColorPos_t>::AdvanceVertex(); // 411
			CStridedArray<Vector>::operator[](
					int i);  // 408
			AABB_t::AddPointToBounds(
					const Vector& vPoint);  // 83
			AABB_t::operator|=(
					const Vector& vPoint);  // 408
			Vector::operator=(
					const Vector& vOther);  // 111
			VertexPos_t::Position(
				const Vector& vecPos);  // 127
			CVertexDataBase<VertexColorPos_t>::Position<Vector>(
					Vector Arg1);  // 409
		}
		{
			int i; // 414
			CIndexDataBase<unsigned int>::Index(
				unsigned int nIndex);  // 417
			CIndexDataBase<unsigned int>::Index(
				unsigned int nIndex);  // 418
		}
		CRenderContextPtr::CRenderContextPtr<>(
					IRenderDevice* pDevice,
					const char* pDebugStringFmt);  // 394
		Vector::Vector(); // 24
		Vector::Vector(); // 24
		AABB_t::AABB_t(); // 400
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 138
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 139
		AABB_t::MakeInvalid(); // 401
		{
			BufferDesc_t vertexDesc; // 444
			CThreadSyncValue<bool>::Load(); // 34
			CTSInputLayoutCreator::IsInitialized(); // 236
			CTSInputLayoutCreator::GetLayout(); // 248
			CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
			CTSInputLayoutCreator::CTSInputLayoutCreator(); // 234
			{
				RenderInputLayoutField_t colorPositionLayout; // 238
				ThreadInterlockedAssignIf64(volatile int64* pDest,
								int64 value,
								int64 comparand);  // 800
				CThreadFastMutex::TryLockInline(
						const char* pFileName,
						int nLineNumber,
						const ThreadId_t  threadId);  // 837
				ThreadPause(void); // 839
				CThreadFastMutex::Lock(
					const char* pFileName,
					int nLineNumber,
					unsigned int nSpinSleepTime);  // 943
				Lock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
						const CThreadFastMutex& lock,
						const char* pFilename,
						int nLineNumber);  // 39
				CThreadSyncValue<bool>::Load(); // 34
				CTSInputLayoutCreator::IsInitialized(); // 40
				CThreadSyncValue<bool>::Store(
					bool value);  // 43
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 46
				CTSInputLayoutCreator::CreateLayout(
						const char* pLayoutName,
						int nFieldCount,
						const RenderInputLayoutField_t* pFieldDescs);  // 244
			}
			GetLayout(void); // 232
			GetLayout(void); // 449
			{
				LockDesc_t desc; // 557
				bool bOk; // 558
			}
			CVertexData<VertexColorPos_t>::Lock(
				int nMaxVertexCount);  // 455
			CVertexDataBase<VertexColorPos_t>::ClearVertexFields(); // 454
		}
		Vector::Vector(); // 103
		VertexPos_t::VertexPos_t(); // 160
		VertexColor_t::VertexColor_t(); // 160
		VertexColorPos_t::VertexColorPos_t(); // 165
		CVertexDataBase<VertexColorPos_t>::ClearVertexFields(); // 171
		CVertexDataBase<VertexColorPos_t>::CVertexDataBase(); // 440
		CVertexData<VertexColorPos_t>::CVertexData(
				IRenderContext* pRenderContext,
				RenderBufferType_t nType,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 403
		CStridedArray<Vector>::Count(); // 403
		CRenderContextPtr::operator IRenderContext*(); // 403
		CIndexData<unsigned int>::Init(
			IRenderContext* pRenderContext,
			RenderBufferType_t nType,
			int nIndexCount,
			const char* pDebugName,
			const char* pBudgetGroup);  // 335
		CIndexDataBase<unsigned int>::ClearIndexFields(); // 89
		CIndexDataBase<unsigned int>::CIndexDataBase(); // 332
		{
			LockDesc_t desc; // 459
			bool bOk; // 460
		}
		CIndexData<unsigned int>::Lock(
			int nMaxIndexCount);  // 336
		CIndexData<unsigned int>::CIndexData(
				IRenderContext* pRenderContext,
				RenderBufferType_t nType,
				int nIndexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 404
		{
			LockDesc_t desc; // 588
		}
		CVertexData<VertexColorPos_t>::Unlock(); // 421
		{
			LockDesc_t desc; // 492
		}
		CIndexData<unsigned int>::Unlock(); // 480
		CIndexData<unsigned int>::Unlock(); // 422
		CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 424
		CIndexData<unsigned int>::TakeOwnership(); // 424
		CSceneObject::EnsureExtraData(); // 2289
		CSceneObject::EnsureExtraData(); // 2326
		CSceneObject::RenderAttributes(); // 425
		CSceneObject::EnsureExtraData(); // 2289
		CSceneObject::EnsureExtraData(); // 2326
		CSceneObject::RenderAttributes(); // 426
		CSceneObjectClassTypeDeclarator::CalcClassID(); // 3028
		CSceneObjectClassTypeDeclarator::operator int(); // 428
		CSceneObject::SetObjectClass(
				uint8 nClass);  // 428
		CIndexDataBase<unsigned int>::~CIndexDataBase(); // 343
		CIndexData<unsigned int>::~CIndexData(); // 429
		CVertexData<VertexColorPos_t>::Release(); // 461
		CVertexDataBase<VertexColorPos_t>::~CVertexDataBase(); // 462
		CVertexData<VertexColorPos_t>::~CVertexData(); // 429
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 429
	}
} /* size: 0, variables: 1 */

// <0645B3AA> physicslib/physicsresourcehelpers.cpp:453
// variables: 4
// function calls: 11
void UpdatePhysicsEdgeSceneObject(VertexBufferHandle_t vb, CStridedArray<VertexColorPos_t> pVertexBase)
{
	{
		CRenderContextPtr pRenderContext; // 457
		LockDesc_t lockDesc; // 459
		{
			VertexColorPos_t* pVerts; // 462
			{
				uint i; // 463
				CStridedArray<VertexColorPos_t>::operator[](
						int i);  // 465
				Vector::operator=(
						const Vector& vOther);  // 103
				VertexPos_t::operator=(
						const VertexPos_t  &);  // 160
				VertexColor_t::AsUint32(); // 203
				VertexColor_t::operator=(
						const VertexColor_t& src);  // 160
				VertexColorPos_t::operator=(
						const VertexColorPos_t  &);  // 465
			}
		}
		CRenderContextPtr::CRenderContextPtr<>(
					IRenderDevice* pDevice,
					const char* pDebugStringFmt);  // 457
		CRenderContextPtr::operator->(); // 460
		CStridedArray<VertexColorPos_t>::Count(); // 460
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 469
	}
} /* size: 0 */

// <0645ABBA> physicslib/physicsresourcehelpers.cpp:472
// variables: 6
// function calls: 35
void CRnHullSeparator::CRnHullSeparator(const matrix3x4_t& xform, CMesh* pMesh)
{
	{
		CUtlVector<Vector, CUtlMemory<Vector, int> > vertices; // 474
		CUtlVector<int, CUtlMemory<int, int> > vertToIsland; // 475
		int nIslandCount; // 479
	}
	CUtlMemory<RnHull_t::ValidateGrowSize(); // 475
	CUtlMemory<RnHull_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<RnHull_t::ResetDbgInfo(); // 530
	CUtlVectorBase<RnHull_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<RnHull_t::CUtlVector(); // 472
	{
		CUtlVector<Vector, CUtlMemory<Vector, int> > vertices; // 474
		CUtlVector<int, CUtlMemory<int, int> > vertToIsland; // 475
		int nIslandCount; // 479
		CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
		CUtlMemory<Vector, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 474
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 475
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 481
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
		CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
		CUtlMemory<Vector, int>::Purge(); // 903
		CUtlMemory<Vector, int>::Purge(); // 1799
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
		ValidateAlignment<Vector>(void); // 508
		CUtlMemory<Vector, int>::Purge(); // 510
		CUtlMemory<Vector, int>::~CUtlMemory(); // 562
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
		CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 481
	}
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0645AB5A> physicslib/physicsresourcehelpers.cpp:472
// variables: 3
void CRnHullSeparator::CRnHullSeparator(const matrix3x4_t& xform, CMesh* pMesh)
{
	{
		CUtlVector<Vector, CUtlMemory<Vector, int> > vertices; // 474
		CUtlVector<int, CUtlMemory<int, int> > vertToIsland; // 475
		int nIslandCount; // 479
	}
} /* size: 0 */

// <064596D1> physicslib/physicsresourcehelpers.cpp:483
// variables: 12
// function calls: 87
void CRnHullSeparator::Init(const CUtlVector<Vector, CUtlMemory<Vector, int> >& vertices, const CUtlVector<int, CUtlMemory<int, int> >& vertToIsland, int nIslandCount)
{
	CUtlVector<int, CUtlMemory<int, int> > islandToVertCount; // 485
	CUtlVector<int, CUtlMemory<int, int> > islandRunningIndex; // 485
	CUtlVector<int, CUtlMemory<int, int> > islandRunningIndexEnd; // 485
	int nIslandVertCount; // 494
	CUtlVector<Vector, CUtlMemory<Vector, int> > islandVertices; // 504
	{
		int v; // 490
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 490
		CUtlMemory<int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 491
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 491
	}
	{
		int nIsland; // 496
	}
	{
		int v; // 507
		{
			int nRunning; // 509
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 509
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 509
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 510
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 510
			Vector::operator=(
					const Vector& vOther);  // 510
		}
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 507
	}
	{
		int nIsland; // 514
		{
			RnHull_t* pHull; // 516
			CUtlMemory<RnHull_t::NumAllocated(); // 1196
			CUtlMemory<RnHull_t::Base(); // 112
			CUtlVectorBase<RnHull_t::Base(); // 368
			CUtlVectorBase<RnHull_t::ResetDbgInfo(); // 824
			CUtlMemory<RnHull_t::IsGrowable(); // 823
			CUtlMemory<RnHull_t::IsExternallyAllocated(); // 859
			CUtlMemory<RnHull_t::IsExternallyAllocated(); // 861
			CUtlMemory<RnHull_t::Grow(
				int num);  // 806
			CUtlVectorBase<RnHull_t::GrowMemory(
					int num);  // 1198
			CUtlMemory<RnHull_t::operator[](
					int i);  // 602
			CUtlVectorBase<RnHull_t::Element(
				int i);  // 1201
			CopyConstruct<RnHull_t*>(RnHull_t** pMemory,
						RnHull_t* const& src);  // 1201
			CUtlVectorBase<RnHull_t::AddToTail(
					RnHull_t* const& src);  // 518
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
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 485
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 485
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 485
	{
		int i; // 1554
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 489
	CUtlVectorBase<int, CUtlMemory<int, int> >::end(); // 574
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
				int* pTo);  // 574
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator=(
			const CUtlVectorBase<int, CUtlMemory<int, int> >& other);  // 565
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator=(
			const CUtlVectorBase<int, CUtlMemory<int, int> >& other);  // 452
	CUtlVector<int, CUtlMemory<int, int> >::operator=(
			const CUtlVector<int, CUtlMemory<int, int> >& src);  // 501
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 505
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 504
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 521
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 521
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 521
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 521
} /* size: 0, variables: 5, inline expansions: 59 (0 bytes) */

// <064595A4> physicslib/physicsresourcehelpers.cpp:523
// variable: 1
// function calls: 4
void CRnHullSeparator::DestroyHulls()
{
	{
		int i; // 525
		CUtlVectorBase<RnHull_t::Count(); // 525
		CUtlMemory<RnHull_t::operator[](
				int i);  // 588
		CUtlVectorBase<RnHull_t::operator[](
				int i);  // 527
	}
	CUtlVectorBase<RnHull_t::RemoveAll(); // 529
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06458CA0> physicslib/physicsresourcehelpers.cpp:534
// variables: 8
// function calls: 35
void GetTriangulation(const CMesh* pMesh, CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& vertices, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& indices)
{
	int nVertBase; // 536
	int nIndexBase; // 537
	int nTris; // 538
	{
		int t; // 541
		{
			Vector v; // 543
			Vector n; // 546
			{
				int iv; // 544
				CMesh::GetVertex(
						int nIndex);  // 187
				CMesh::GetVertexPosition(
							int nIndex);  // 545
				Vector::operator=(
						const Vector& vOther);  // 545
			}
			{
				int iv; // 547
				RnVertex_t::RnVertex_t(
						const Vector& vPos,
						const Vector& vNormal);  // 549
				CUtlMemory<RnVertex_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::operator[](
						int i);  // 549
				Vector::operator=(
						const Vector& vOther);  // 15
				Vector::operator=(
						const Vector& vOther);  // 15
				RnVertex_t::operator=(
						RnVertex_t &);  // 549
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
						int i);  // 550
			}
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 546
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 546
			Vector::NormalizedSafe(
					const Vector& vFallback);  // 546
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 546
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 546
		}
	}
	CMesh::TriangleCount(); // 538
	CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::Count(); // 536
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 537
	CUtlMemory<unsigned int, int>::NumAllocated(); // 782
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount(
		int count);  // 539
} /* size: 0, variables: 3, inline expansions: 14 (0 bytes) */

