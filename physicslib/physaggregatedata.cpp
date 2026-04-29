
//
// physicslib/physaggregatedata.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 71
//	struct: 1
//

// <064DE648> physicslib/physaggregatedata.cpp:21
// function calls: 26
void CPhysAggregateData::CPhysAggregateData(uint16 nFlags)
{
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 21
	CUtlVectorUltraConservative<char const::CUtlVectorUltraConservative(); // 21
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 21
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 21
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 21
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 21
	CUtlMemory<matrix3x4_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<matrix3x4_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 21
	ValidateAlignment<const VPhysXBodyPart_t*>(void); // 347
	CUtlMemoryConservative<const VPhysXBodyPart_t::CUtlMemoryConservative(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<const VPhysXBodyPart_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const VPhysXBodyPart_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 515
	CUtlVectorConservative<const VPhysXBodyPart_t::CUtlVectorConservative(
				int growSize,
				int initCapacity);  // 21
	CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::CUtlVectorUltraConservative(); // 21
	CUtlVectorUltraConservative<const VPhysXJoint_t::CUtlVectorUltraConservative(); // 21
	CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::CUtlVectorUltraConservative(); // 21
	CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::CUtlVectorUltraConservative(); // 21
	CUtlVectorUltraConservative<const CPhysAggregateData::CUtlVectorUltraConservative(); // 21
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<unsigned int, 4>::operator=(
			unsigned int newValue);  // 30
	CPhysAggregateData::Init(); // 23
	CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::CUtlVectorUltraConservative(); // 21
} /* size: 192, inline expansions: 26 (259 bytes) */

// <064DE620> physicslib/physaggregatedata.cpp:21
void CPhysAggregateData::CPhysAggregateData(uint16 nFlags)
{
} /* size: 0 */

// <064E869D> physicslib/physaggregatedata.cpp:28
// function calls: 2
void CPhysAggregateData::Init()
{
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<unsigned int, 4>::operator=(
			unsigned int newValue);  // 30
} /* size: 0, inline expansions: 2 (0 bytes) */

// <064DE604> physicslib/physaggregatedata.cpp:28
void CPhysAggregateData::Init()
{
} /* size: 0 */

// <064DD773> physicslib/physaggregatedata.cpp:40
// variables: 7
// function calls: 68
void CPhysAggregateData::~CPhysAggregateData()
{
	{
		int i; // 42
	}
	{
		int i; // 55
	}
	{
		int i; // 42
		CUtlVectorUltraConservative<const CPhysAggregateData::Count(); // 42
		CUtlVectorUltraConservative<const CPhysAggregateData::operator[](
				int i);  // 44
	}
	CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::operator[](
			int i);  // 51
	{
		int i; // 55
		CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::Count(); // 55
		CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::operator[](
				int i);  // 57
	}
	CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::Count(); // 230
	{
		int i; // 232
		{
			int nRefCount; // 633
		}
		{
			int nRefCount; // 633
			ThreadInterlockedDecrement(volatile int32* p); // 586
			CInterlockedIntT<int, 4>::operator--(); // 633
			CInterlockedIntT<int, 4>::operator==(
					int rhs);  // 643
		}
		CStrongHandle<ResourceBindingVoid_t>::Shutdown(); // 609
		CStrongHandle<ResourceBindingVoid_t>::Shutdown(); // 482
		CStrongHandle<ResourceBindingVoid_t>::~CStrongHandle(); // 262
		CStrongHandleVoid::~CStrongHandleVoid(); // 1526
		Destruct<CStrongHandleVoid>(CStrongHandleVoid* pMemory); // 234
	}
	Free(void* pMem); // 239
	CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::RemoveAll(); // 63
	CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::~CUtlVectorUltraConservative(); // 64
	Free(void* pMem); // 239
	CUtlVectorUltraConservative<const CPhysAggregateData::RemoveAll(); // 63
	CUtlVectorUltraConservative<const CPhysAggregateData::~CUtlVectorUltraConservative(); // 64
	CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::Count(); // 230
	Free(void* pMem); // 239
	CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::RemoveAll(); // 63
	CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::~CUtlVectorUltraConservative(); // 64
	CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::Count(); // 230
	Free(void* pMem); // 239
	CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::RemoveAll(); // 63
	CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::~CUtlVectorUltraConservative(); // 64
	Free(void* pMem); // 239
	CUtlVectorUltraConservative<const VPhysXJoint_t::RemoveAll(); // 63
	CUtlVectorUltraConservative<const VPhysXJoint_t::~CUtlVectorUltraConservative(); // 64
	Free(void* pMem); // 239
	CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::RemoveAll(); // 63
	CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::~CUtlVectorUltraConservative(); // 64
	CUtlVectorBase<const VPhysXBodyPart_t::RemoveAll(); // 1798
	CUtlMemoryConservative<const VPhysXBodyPart_t::Purge(); // 1799
	CUtlVectorBase<const VPhysXBodyPart_t::Purge(); // 560
	CUtlMemoryConservative<const VPhysXBodyPart_t::~CUtlMemoryConservative(); // 562
	CUtlVectorBase<const VPhysXBodyPart_t::~CUtlVectorBase(); // 509
	CUtlVectorConservative<const VPhysXBodyPart_t::~CUtlVectorConservative(); // 64
	ValidateAlignment<matrix3x4_t>(void); // 508
	CUtlMemory<matrix3x4_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4_t, int>::Purge(); // 510
	CUtlMemory<matrix3x4_t, int>::~CUtlMemory(); // 64
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 64
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 64
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 64
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 64
	Free(void* pMem); // 239
	CUtlVectorUltraConservative<char const::RemoveAll(); // 63
	CUtlVectorUltraConservative<char const::~CUtlVectorUltraConservative(); // 64
} /* size: 735, inline expansions: 56 (1049 bytes) */

// <064DD73B> physicslib/physaggregatedata.cpp:40
// variables: 2
void CPhysAggregateData::~CPhysAggregateData()
{
	{
		int i; // 42
	}
	{
		int i; // 55
	}
} /* size: 0 */

// <064E8748> physicslib/physaggregatedata.cpp:66
// variable: 1
// function calls: 2
void CPhysAggregateData::AddRef()
{
	uint32 nNewRefCounter; // 68
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 68
} /* size: 9, variables: 1, inline expansions: 2 (8 bytes) */

// <064DD713> physicslib/physaggregatedata.cpp:66
// variable: 1
void CPhysAggregateData::AddRef()
{
	uint32 nNewRefCounter; // 68
} /* size: 0, variables: 1 */

// <064E8A6B> physicslib/physaggregatedata.cpp:73
// variable: 1
// function calls: 3
void CPhysAggregateData::Release()
{
	uint32 nNewRefCounter; // 75
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 75
	CPhysAggregateData::Release(); // 73
} /* size: 76, variables: 1, inline expansions: 3 (27 bytes) */

// <064DD6EB> physicslib/physaggregatedata.cpp:73
// variable: 1
void CPhysAggregateData::Release()
{
	uint32 nNewRefCounter; // 75
} /* size: 0, variables: 1 */

// <064CDDF9> physicslib/physaggregatedata.cpp:96
// variables: 4
// function calls: 14
void ShallowCopy<CUtlVectorUltraConservative<char const*> >(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>& dst, const CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>& src)
{
	{
		int i; // 100
		CUtlVectorUltraConservative<char const::Count(); // 100
		CUtlVectorUltraConservative<char const::operator[](
				int i);  // 102
		CUtlVectorUltraConservative<char const::operator[](
				int i);  // 102
	}
	CUtlVectorUltraConservative<char const::Count(); // 98
	{
		int nCurCount; // 186
		CUtlVectorUltraConservative<char const::Count(); // 159
		{
			size_t nNeeded; // 172
			size_t nHave; // 173
			GetSize(void* pMem); // 173
			Realloc(void* pMem,
				size_t nSize);  // 177
		}
		Alloc(size_t nSize); // 166
		CUtlVectorUltraConservative<char const::EnsureCapacity(
				int num);  // 152
		CUtlVectorUltraConservative<char const::EnsureCapacity(
				int num);  // 187
	}
	CUtlVectorUltraConservative<char const::EnsureCount(
			int num);  // 182
	Free(void* pMem); // 239
	CUtlVectorUltraConservative<char const::RemoveAll(); // 201
	CUtlVectorUltraConservative<char const::EnsureCount(
			int num);  // 98
} /* size: 0, inline expansions: 5 (0 bytes) */

// <064CD887> physicslib/physaggregatedata.cpp:96
// variable: 1
// function calls: 22
void ShallowCopy<CUtlVectorConservative<const VPhysXBodyPart_t*> >(CUtlVectorConservative<const VPhysXBodyPart_t*>& dst, const CUtlVectorConservative<const VPhysXBodyPart_t*>& src)
{
	{
		int i; // 100
		CUtlVectorBase<const VPhysXBodyPart_t::Count(); // 100
		CUtlMemoryConservative<const VPhysXBodyPart_t::Base(); // 366
		CUtlMemoryConservative<const VPhysXBodyPart_t::operator[](
				int i);  // 595
		CUtlVectorBase<const VPhysXBodyPart_t::operator[](
				int i);  // 102
		CUtlMemoryConservative<const VPhysXBodyPart_t::Base(); // 365
		CUtlMemoryConservative<const VPhysXBodyPart_t::operator[](
				int i);  // 588
		CUtlVectorBase<const VPhysXBodyPart_t::operator[](
				int i);  // 102
	}
	CUtlVectorBase<const VPhysXBodyPart_t::Count(); // 98
	CUtlVectorBase<const VPhysXBodyPart_t::Count(); // 1069
	CUtlMemoryConservative<const VPhysXBodyPart_t::AllocSize(); // 392
	CUtlMemoryConservative<const VPhysXBodyPart_t::NumAllocated(); // 782
	CUtlMemoryConservative<const VPhysXBodyPart_t::RememberAllocSize(
				size_t sz);  // 403
	CUtlMemoryConservative<const VPhysXBodyPart_t::ReAlloc(
		size_t sz);  // 409
	CUtlMemoryConservative<const VPhysXBodyPart_t::Grow(
		int num);  // 806
	CUtlVectorBase<const VPhysXBodyPart_t::ResetDbgInfo(); // 824
	CUtlVectorBase<const VPhysXBodyPart_t::GrowMemory(
			int num);  // 784
	CUtlVectorBase<const VPhysXBodyPart_t::GrowVector(
			int num);  // 1445
	CUtlVectorBase<const VPhysXBodyPart_t::ShiftElementsRight(
				int elem,
				int num);  // 1446
	CUtlVectorBase<const VPhysXBodyPart_t::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<const VPhysXBodyPart_t::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<const VPhysXBodyPart_t::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<const VPhysXBodyPart_t::EnsureCount(
			int num);  // 98
} /* size: 0, inline expansions: 15 (0 bytes) */

// <064CD3D1> physicslib/physaggregatedata.cpp:96
// variables: 4
// function calls: 19
void ShallowCopy<CUtlVectorUltraConservative<RnCollisionAttr_t> >(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>& dst, const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>& src)
{
	{
		int i; // 100
		CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::Count(); // 100
		CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::operator[](
				int i);  // 102
		CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::operator[](
				int i);  // 102
	}
	CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::Count(); // 98
	{
		int nCurCount; // 186
		CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::Count(); // 186
		{
			size_t nNeeded; // 172
			size_t nHave; // 173
			GetSize(void* pMem); // 173
			Realloc(void* pMem,
				size_t nSize);  // 177
		}
		Alloc(size_t nSize); // 166
		CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::EnsureCapacity(
				int num);  // 152
		CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::EnsureCapacity(
				int num);  // 187
		CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::Element(
			int i);  // 195
		memset(void* __dest,
			int __ch,
			size_t __len);  // 165
		RnCollisionAttr_t::ComputeHash(); // 167
		RnCollisionAttr_t::RnCollisionAttr_t(); // 1479
		Construct<RnCollisionAttr_t>(RnCollisionAttr_t* pMemory); // 195
	}
	CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::EnsureCount(
			int num);  // 182
	Free(void* pMem); // 239
	CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::RemoveAll(); // 201
	CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::EnsureCount(
			int num);  // 98
} /* size: 0, inline expansions: 5 (0 bytes) */

// <064CCFC4> physicslib/physaggregatedata.cpp:96
// variables: 4
// function calls: 17
void ShallowCopy<CUtlVectorUltraConservative<CUtlStringToken> >(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>& dst, const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>& src)
{
	{
		int i; // 100
		CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::Count(); // 100
		CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::operator[](
				int i);  // 102
		CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::operator[](
				int i);  // 102
	}
	CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::Count(); // 98
	{
		int nCurCount; // 186
		CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::Count(); // 186
		{
			size_t nNeeded; // 172
			size_t nHave; // 173
			GetSize(void* pMem); // 173
			Realloc(void* pMem,
				size_t nSize);  // 177
		}
		Alloc(size_t nSize); // 166
		CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::EnsureCapacity(
				int num);  // 152
		CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::EnsureCapacity(
				int num);  // 187
		CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::Element(
			int i);  // 195
		CUtlStringToken::CUtlStringToken(); // 1479
		Construct<CUtlStringToken>(CUtlStringToken* pMemory); // 195
	}
	CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::EnsureCount(
			int num);  // 182
	Free(void* pMem); // 239
	CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::RemoveAll(); // 201
	CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::EnsureCount(
			int num);  // 98
} /* size: 0, inline expansions: 5 (0 bytes) */

// <064DA983> physicslib/physaggregatedata.cpp:106
// variables: 91
// function calls: 182
void CPhysAggregateData::CPhysAggregateData(const CPhysAggregateData ** ppAggregateData, uint nAggregateShapeCount)
{
	{
		uint nAggregatesWithParts; // 116
		uint nAggregateWithConstraints; // 116
		uint nBoneCount; // 117
		uint nRigidCount; // 118
		uint nConstraintCount; // 119
		uint nPartCount; // 120
		uint nCollisionAttributeCount; // 122
		uint nSurfacePropertyCount; // 122
		const CPhysAggregateData* pPartsAgg; // 124
		const CPhysAggregateData* pConstrAgg; // 124
		{
			uint i; // 110
		}
		{
			uint i; // 126
			{
				const CPhysAggregateData* pAggregateData; // 128
			}
		}
		{
			uint16 nBasePart; // 176
			uint16 nBaseConstraint; // 176
			{
				uint i; // 177
				{
					const CPhysAggregateData* pAggregateData; // 179
					{
						int nConstraint; // 180
						{
							CPhysConstraintData& constraint; // 182
							const CPhysConstraintData& srcConstraint; // 183
						}
					}
				}
			}
		}
		{
			int nSurfacePropertyIndex; // 208
			int nCollisionAttributeIndex; // 210
			uint16 nBasePart; // 213
			{
				uint i; // 214
				{
					const CPhysAggregateData* pAggregateData; // 216
					uint16 nMergeLeft; // 229
					uint16 nMergeA; // 229
					uint16 nMergeB; // 229
					{
						int nSurfacePropertyPartIndex; // 219
					}
					{
						int nCollAttrPartIndex; // 223
					}
					{
						uint16 j; // 233
					}
					{
						uint16 j; // 237
					}
					{
						uint16 j; // 241
					}
					{
						uint nPart; // 245
					}
					{
						uint j; // 256
					}
					{
						uint16 nIndexA; // 264
						uint16 nIndexB; // 264
					}
					{
						int nPart; // 286
					}
				}
			}
		}
	}
	CUtlVectorUltraConservative<char const::CUtlVectorUltraConservative(); // 106
	{
		uint nAggregatesWithParts; // 116
		uint nAggregateWithConstraints; // 116
		uint nBoneCount; // 117
		uint nRigidCount; // 118
		uint nConstraintCount; // 119
		uint nPartCount; // 120
		uint nCollisionAttributeCount; // 122
		uint nSurfacePropertyCount; // 122
		const CPhysAggregateData* pPartsAgg; // 124
		const CPhysAggregateData* pConstrAgg; // 124
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<unsigned int, 4>::operator=(
				unsigned int newValue);  // 30
		CPhysAggregateData::Init(); // 108
		Free(void* pMem); // 239
		CUtlVectorUltraConservative<const CPhysAggregateData::RemoveAll(); // 201
		{
			int nCurCount; // 186
			CUtlVectorUltraConservative<const CPhysAggregateData::Count(); // 159
			{
				size_t nNeeded; // 172
				size_t nHave; // 173
				GetSize(void* pMem); // 173
				Realloc(void* pMem,
					size_t nSize);  // 177
			}
			Alloc(size_t nSize); // 166
			CUtlVectorUltraConservative<const CPhysAggregateData::EnsureCapacity(
					int num);  // 152
			CUtlVectorUltraConservative<const CPhysAggregateData::EnsureCapacity(
					int num);  // 187
		}
		CUtlVectorUltraConservative<const CPhysAggregateData::EnsureCount(
				int num);  // 182
		CUtlVectorUltraConservative<const CPhysAggregateData::EnsureCount(
				int num);  // 109
		{
			uint i; // 110
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<unsigned int, 4>::operator++(); // 68
			CPhysAggregateData::AddRef(); // 112
			CUtlVectorUltraConservative<const CPhysAggregateData::operator[](
					int i);  // 113
		}
		{
			uint i; // 126
			{
				const CPhysAggregateData* pAggregateData; // 128
				CPhysAggregateData::GetPartCount(); // 137
				CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::Count(); // 144
				CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::Count(); // 145
				CPhysAggregateData::GetPartCount(); // 147
				CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::Count(); // 149
				CUtlVectorBase<const VPhysXBodyPart_t::Count(); // 241
				CPhysAggregateData::GetPartCount(); // 129
				CUtlMemory<unsigned int, int>::Count(); // 227
				CPhysAggregateData::GetBoneCount(); // 134
				CPhysAggregateData::GetBoneCount(); // 141
			}
		}
		{
			uint16 nBasePart; // 176
			uint16 nBaseConstraint; // 176
			Free(void* pMem); // 239
			CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::RemoveAll(); // 201
			{
				int nCurCount; // 186
				CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::Count(); // 159
				{
					size_t nNeeded; // 172
					size_t nHave; // 173
					GetSize(void* pMem); // 173
					Realloc(void* pMem,
						size_t nSize);  // 177
				}
				Alloc(size_t nSize); // 166
				CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::EnsureCapacity(
						int num);  // 152
				CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::EnsureCapacity(
						int num);  // 187
			}
			CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::EnsureCount(
					int num);  // 182
			CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::EnsureCount(
					int num);  // 174
			{
				uint i; // 177
				{
					const CPhysAggregateData* pAggregateData; // 179
					{
						int nConstraint; // 180
						CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::Count(); // 180
						{
							CPhysConstraintData& constraint; // 182
							const CPhysConstraintData& srcConstraint; // 183
							CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::operator[](
									int i);  // 182
							CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::operator[](
									int i);  // 183
						}
					}
					CUtlVectorBase<const VPhysXBodyPart_t::Count(); // 241
					CPhysAggregateData::GetPartCount(); // 189
				}
			}
		}
		CUtlMemory<matrix3x4_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<matrix3x4_t, int>::Purge(); // 903
		CUtlMemory<matrix3x4_t, int>::Purge(); // 632
		CUtlMemory<matrix3x4_t, int>::SetExternalBuffer(
					const matrix3x4_t* pMemory,
					int numElements);  // 108
		CUtlMemory<matrix3x4_t, int>::SetExternalBuffer(
					const CUtlMemory<matrix3x4_t, int>& buffer);  // 306
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 632
		CUtlMemory<unsigned int, int>::SetExternalBuffer(
					const unsigned int* pMemory,
					int numElements);  // 108
		CUtlMemory<unsigned int, int>::SetExternalBuffer(
					const CUtlMemory<unsigned int, int>& buffer);  // 309
		CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<short unsigned int, int>::Purge(); // 903
		CUtlMemory<short unsigned int, int>::Purge(); // 632
		CUtlMemory<short unsigned int, int>::SetExternalBuffer(
					const short unsigned int* pMemory,
					int numElements);  // 108
		CUtlMemory<short unsigned int, int>::SetExternalBuffer(
					const CUtlMemory<short unsigned int, int>& buffer);  // 310
		CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<short unsigned int, int>::Purge(); // 903
		CUtlMemory<short unsigned int, int>::Purge(); // 632
		CUtlMemory<short unsigned int, int>::SetExternalBuffer(
					const short unsigned int* pMemory,
					int numElements);  // 108
		CUtlMemory<short unsigned int, int>::SetExternalBuffer(
					const CUtlMemory<short unsigned int, int>& buffer);  // 311
		{
			int nSurfacePropertyIndex; // 208
			int nCollisionAttributeIndex; // 210
			uint16 nBasePart; // 213
			CUtlMemory<matrix3x4_t, int>::IsGrowable(); // 881
			CUtlMemory<matrix3x4_t, int>::IsExternallyAllocated(); // 888
			CUtlMemory<matrix3x4_t, int>::EnsureCapacity(
					int num);  // 201
			Free(void* pMem); // 239
			CUtlVectorUltraConservative<char const::RemoveAll(); // 201
			{
				int nCurCount; // 186
				CUtlVectorUltraConservative<char const::Count(); // 159
				{
					size_t nNeeded; // 172
					size_t nHave; // 173
					GetSize(void* pMem); // 173
					Realloc(void* pMem,
						size_t nSize);  // 177
				}
				Alloc(size_t nSize); // 166
				CUtlVectorUltraConservative<char const::EnsureCapacity(
						int num);  // 152
				CUtlVectorUltraConservative<char const::EnsureCapacity(
						int num);  // 187
			}
			CUtlVectorUltraConservative<char const::EnsureCount(
					int num);  // 182
			CUtlVectorUltraConservative<char const::EnsureCount(
					int num);  // 203
			CUtlMemory<unsigned int, int>::IsGrowable(); // 881
			CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 888
			CUtlMemory<unsigned int, int>::EnsureCapacity(
					int num);  // 204
			CUtlMemory<short unsigned int, int>::IsGrowable(); // 881
			CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 888
			CUtlMemory<short unsigned int, int>::EnsureCapacity(
					int num);  // 205
			CUtlMemory<short unsigned int, int>::IsGrowable(); // 881
			CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 888
			CUtlMemory<short unsigned int, int>::EnsureCapacity(
					int num);  // 206
			Free(void* pMem); // 239
			CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::RemoveAll(); // 201
			{
				int nCurCount; // 186
				CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::Count(); // 186
				{
					size_t nNeeded; // 172
					size_t nHave; // 173
					GetSize(void* pMem); // 173
					Realloc(void* pMem,
						size_t nSize);  // 177
				}
				Alloc(size_t nSize); // 166
				CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::EnsureCapacity(
						int num);  // 152
				CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::EnsureCapacity(
						int num);  // 187
				CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::Element(
					int i);  // 195
				CUtlStringToken::CUtlStringToken(); // 1479
				Construct<CUtlStringToken>(CUtlStringToken* pMemory); // 195
			}
			CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::EnsureCount(
					int num);  // 182
			CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::EnsureCount(
					int num);  // 209
			Free(void* pMem); // 239
			CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::RemoveAll(); // 201
			{
				int nCurCount; // 186
				CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::Count(); // 186
				{
					size_t nNeeded; // 172
					size_t nHave; // 173
					GetSize(void* pMem); // 173
					Realloc(void* pMem,
						size_t nSize);  // 177
				}
				Alloc(size_t nSize); // 166
				CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::EnsureCapacity(
						int num);  // 152
				CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::EnsureCapacity(
						int num);  // 187
				CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::Element(
					int i);  // 195
				memset(void* __dest,
					int __ch,
					size_t __len);  // 165
				RnCollisionAttr_t::ComputeHash(); // 167
				RnCollisionAttr_t::RnCollisionAttr_t(); // 1479
				Construct<RnCollisionAttr_t>(RnCollisionAttr_t* pMemory); // 195
			}
			CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::EnsureCount(
					int num);  // 182
			CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::EnsureCount(
					int num);  // 211
			{
				uint i; // 214
				{
					const CPhysAggregateData* pAggregateData; // 216
					uint16 nMergeLeft; // 229
					uint16 nMergeA; // 229
					uint16 nMergeB; // 229
					{
						int nSurfacePropertyPartIndex; // 219
						CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::Count(); // 219
						CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::operator[](
								int i);  // 221
						CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::operator[](
								int i);  // 221
					}
					{
						int nCollAttrPartIndex; // 223
						CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::Count(); // 223
						CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::operator[](
								int i);  // 225
						CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::operator[](
								int i);  // 225
					}
					CUtlVectorBase<const VPhysXBodyPart_t::Count(); // 241
					CPhysAggregateData::GetPartCount(); // 229
					CUtlMemory<unsigned int, int>::Count(); // 227
					CPhysAggregateData::GetBoneCount(); // 229
					{
						uint j; // 256
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 258
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 258
					}
					{
						uint16 nIndexA; // 264
						uint16 nIndexB; // 264
						CUtlMemory<short unsigned int, int>::operator[](
								int i);  // 268
						CUtlMemory<short unsigned int, int>::operator[](
								int i);  // 264
						CUtlMemory<short unsigned int, int>::operator[](
								int i);  // 264
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 266
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 266
						CUtlMemory<short unsigned int, int>::operator[](
								int i);  // 273
					}
					CUtlMemory<short unsigned int, int>::operator[](
							int i);  // 283
					CUtlMemory<short unsigned int, int>::operator[](
							int i);  // 283
					{
						int nPart; // 286
						CUtlMemory<unsigned int, int>::Count(); // 227
						CPhysAggregateData::GetBoneCount(); // 286
						CUtlMemory<matrix3x4_t, int>::operator[](
								int i);  // 288
						CUtlMemory<matrix3x4_t, int>::operator[](
								int i);  // 288
						CUtlMemoryConservative<const VPhysXBodyPart_t::Base(); // 366
						CUtlMemoryConservative<const VPhysXBodyPart_t::operator[](
								int i);  // 595
						CUtlVectorBase<const VPhysXBodyPart_t::operator[](
								int i);  // 289
						CUtlMemoryConservative<const VPhysXBodyPart_t::Base(); // 365
						CUtlMemoryConservative<const VPhysXBodyPart_t::operator[](
								int i);  // 588
						CUtlVectorBase<const VPhysXBodyPart_t::operator[](
								int i);  // 289
						CUtlVectorUltraConservative<char const::operator[](
								int i);  // 290
						CUtlVectorUltraConservative<char const::operator[](
								int i);  // 290
						CUtlMemory<short unsigned int, int>::operator[](
								int i);  // 291
						CUtlMemory<short unsigned int, int>::operator[](
								int i);  // 291
					}
					{
						uint16 j; // 233
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 235
					}
					{
						uint16 j; // 237
						CUtlMemory<short unsigned int, int>::operator[](
								int i);  // 239
						CUtlMemory<short unsigned int, int>::operator[](
								int i);  // 239
					}
					{
						uint16 j; // 241
						CUtlMemory<short unsigned int, int>::operator[](
								int i);  // 243
					}
					{
						uint nPart; // 245
						CUtlMemory<matrix3x4_t, int>::operator[](
								int i);  // 247
						CUtlMemoryConservative<const VPhysXBodyPart_t::Base(); // 366
						CUtlMemoryConservative<const VPhysXBodyPart_t::operator[](
								int i);  // 595
						CUtlVectorBase<const VPhysXBodyPart_t::operator[](
								int i);  // 248
						CUtlMemoryConservative<const VPhysXBodyPart_t::Base(); // 365
						CUtlMemoryConservative<const VPhysXBodyPart_t::operator[](
								int i);  // 588
						CUtlVectorBase<const VPhysXBodyPart_t::operator[](
								int i);  // 248
						CUtlVectorUltraConservative<char const::operator[](
								int i);  // 249
						CUtlMemory<short unsigned int, int>::operator[](
								int i);  // 250
					}
				}
			}
		}
	}
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 106
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 106
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 106
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 106
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 106
	CUtlMemory<matrix3x4_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<matrix3x4_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 106
	ValidateAlignment<const VPhysXBodyPart_t*>(void); // 347
	CUtlMemoryConservative<const VPhysXBodyPart_t::CUtlMemoryConservative(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<const VPhysXBodyPart_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const VPhysXBodyPart_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 515
	CUtlVectorConservative<const VPhysXBodyPart_t::CUtlVectorConservative(
				int growSize,
				int initCapacity);  // 106
	CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::CUtlVectorUltraConservative(); // 106
	CUtlVectorUltraConservative<const VPhysXJoint_t::CUtlVectorUltraConservative(); // 106
	CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::CUtlVectorUltraConservative(); // 106
	CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::CUtlVectorUltraConservative(); // 106
	CUtlVectorUltraConservative<const CPhysAggregateData::CUtlVectorUltraConservative(); // 106
	CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::CUtlVectorUltraConservative(); // 106
} /* size: 0, inline expansions: 23 (0 bytes) */

// <064DA73D> physicslib/physaggregatedata.cpp:106
// variables: 38
void CPhysAggregateData::CPhysAggregateData(const CPhysAggregateData ** ppAggregateData, uint nAggregateShapeCount)
{
	{
		uint nAggregatesWithParts; // 116
		uint nAggregateWithConstraints; // 116
		uint nBoneCount; // 117
		uint nRigidCount; // 118
		uint nConstraintCount; // 119
		uint nPartCount; // 120
		uint nCollisionAttributeCount; // 122
		uint nSurfacePropertyCount; // 122
		const CPhysAggregateData* pPartsAgg; // 124
		const CPhysAggregateData* pConstrAgg; // 124
		{
			uint i; // 110
		}
		{
			uint i; // 126
			{
				const CPhysAggregateData* pAggregateData; // 128
			}
		}
		{
			uint16 nBasePart; // 176
			uint16 nBaseConstraint; // 176
			{
				uint i; // 177
				{
					const CPhysAggregateData* pAggregateData; // 179
					{
						int nConstraint; // 180
						{
							CPhysConstraintData& constraint; // 182
							const CPhysConstraintData& srcConstraint; // 183
						}
					}
				}
			}
		}
		{
			int nSurfacePropertyIndex; // 208
			int nCollisionAttributeIndex; // 210
			uint16 nBasePart; // 213
			{
				uint i; // 214
				{
					const CPhysAggregateData* pAggregateData; // 216
					uint16 nMergeLeft; // 229
					uint16 nMergeA; // 229
					uint16 nMergeB; // 229
					{
						int nSurfacePropertyPartIndex; // 219
					}
					{
						int nCollAttrPartIndex; // 223
					}
					{
						uint16 j; // 233
					}
					{
						uint16 j; // 237
					}
					{
						uint16 j; // 241
					}
					{
						uint nPart; // 245
					}
					{
						uint j; // 256
					}
					{
						uint16 nIndexA; // 264
						uint16 nIndexB; // 264
					}
					{
						int nPart; // 286
					}
				}
			}
		}
	}
} /* size: 0 */

// <064E87D9> physicslib/physaggregatedata.cpp:320
void CPhysAggregateData::GetUsedGroupMask()
{
} /* size: 0 */

// <064DA703> physicslib/physaggregatedata.cpp:326
void CPhysAggregateData::GetUsedLayerMask()
{
} /* size: 0 */

// <064DA645> physicslib/physaggregatedata.cpp:332
// function calls: 2
void CPhysAggregateData::GetSurfaceProperties(int nIndex)
{
	CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::Count(); // 334
	CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::operator[](
			int i);  // 336
} /* size: 111, inline expansions: 2 (16 bytes) */

// <064DA137> physicslib/physaggregatedata.cpp:345
// variables: 6
// function calls: 18
void InitSurfaceProperties(const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& surfacePropertyHashes, CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>& surfaceProperties)
{
	{
		const IPhysSurfacePropertyController* pSurfaceProp; // 350
		{
			int i; // 352
			{
				CUtlStringToken token; // 354
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
						int i);  // 354
				CUtlStringToken::CUtlStringToken(); // 114
				StringTokenFromHashCode(uint32 nHashCode); // 354
				CUtlVectorUltraConservative<const CPhysSurfaceProperties::operator[](
						int i);  // 355
			}
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 352
		}
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 347
	{
		int nCurCount; // 186
		CUtlVectorUltraConservative<const CPhysSurfaceProperties::Count(); // 159
		{
			size_t nNeeded; // 172
			size_t nHave; // 173
			GetSize(void* pMem); // 173
			Realloc(void* pMem,
				size_t nSize);  // 177
		}
		Alloc(size_t nSize); // 166
		CUtlVectorUltraConservative<const CPhysSurfaceProperties::EnsureCapacity(
				int num);  // 152
		CUtlVectorUltraConservative<const CPhysSurfaceProperties::EnsureCapacity(
				int num);  // 187
	}
	CUtlVectorUltraConservative<const CPhysSurfaceProperties::EnsureCount(
			int num);  // 182
	Free(void* pMem); // 239
	CUtlVectorUltraConservative<const CPhysSurfaceProperties::RemoveAll(); // 201
	CUtlVectorUltraConservative<const CPhysSurfaceProperties::EnsureCount(
			int num);  // 347
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 348
} /* size: 0, inline expansions: 6 (0 bytes) */

// <064D9F04> physicslib/physaggregatedata.cpp:363
// variable: 1
// function calls: 6
CPhysAggregateDataHandle CombineAggregateData(const CPhysAggregateData ** ppAggregateData, uint nAggregateShapeCount)
{
	{
		CPhysAggregateData* pNewData; // 375
		CPhysAggregateDataHandle::Set(
			CPhysAggregateData* pData);  // 110
		CPhysAggregateDataHandle::CPhysAggregateDataHandle(
					CPhysAggregateData* pData);  // 378
	}
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 110
	CPhysAggregateDataHandle::CPhysAggregateDataHandle(
				CPhysAggregateData* pData);  // 371
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 110
	CPhysAggregateDataHandle::CPhysAggregateDataHandle(
				CPhysAggregateData* pData);  // 368
} /* size: 0, inline expansions: 4 (0 bytes) */

// <064D9B67> physicslib/physaggregatedata.cpp:384
// variable: 1
// function calls: 15
void CPhysicsDataCombiner::Add(const CModel* pModel)
{
	{
		const CPhysAggregateData* pData; // 386
		CPhysAggregateDataHandle::Get(); // 400
		CModel::GetPhysicsContainer(); // 386
		CUtlMemory<const CPhysAggregateData::NumAllocated(); // 1247
		CUtlMemory<const CPhysAggregateData::Base(); // 112
		CUtlVectorBase<const CPhysAggregateData::Base(); // 368
		CUtlVectorBase<const CPhysAggregateData::ResetDbgInfo(); // 824
		CUtlMemory<const CPhysAggregateData::IsGrowable(); // 823
		CUtlMemory<const CPhysAggregateData::IsExternallyAllocated(); // 859
		CUtlMemory<const CPhysAggregateData::IsExternallyAllocated(); // 861
		CUtlMemory<const CPhysAggregateData::Grow(
			int num);  // 806
		CUtlVectorBase<const CPhysAggregateData::GrowMemory(
				int num);  // 1249
		CUtlMemory<const CPhysAggregateData::operator[](
				int i);  // 602
		CUtlVectorBase<const CPhysAggregateData::Element(
			int i);  // 1252
		Construct<const CPhysAggregateData*, const CPhysAggregateData*>(const CPhysAggregateData ** pMemory); // 1252
		CUtlVectorBase<const CPhysAggregateData::AddToTail(
				const CPhysAggregateData  *& src);  // 388
	}
} /* size: 0 */

// <064D94C0> physicslib/physaggregatedata.cpp:399
// function calls: 28
void CPhysBodyDesc::CPhysBodyDesc(bool bOwnsShapes)
{
	CUtlString::CUtlString(); // 399
	matrix3x4_t::matrix3x4_t(); // 399
	CUtlStringToken::CUtlStringToken(); // 399
	CUtlMemory<CUtlStringToken, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlStringToken, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVector(); // 399
	CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::CUtlVector(); // 399
	CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::CUtlVector(); // 399
	CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::CUtlVector(); // 399
	CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::CUtlVector(); // 399
} /* size: 287, inline expansions: 28 (303 bytes) */

// <064D9496> physicslib/physaggregatedata.cpp:399
void CPhysBodyDesc::CPhysBodyDesc(bool bOwnsShapes)
{
} /* size: 0 */

// <064D8909> physicslib/physaggregatedata.cpp:409
// variables: 4
// function calls: 57
void CPhysBodyDesc::~CPhysBodyDesc()
{
	{
		int i; // 413
	}
	{
		int i; // 417
	}
	{
		int i; // 413
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::Count(); // 413
		CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::operator[](
				int i);  // 415
	}
	{
		int i; // 417
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::Count(); // 417
		CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::operator[](
				int i);  // 419
	}
	CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::Purge(); // 903
	CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::Purge(); // 1799
	CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::Purge(); // 560
	ValidateAlignment<CPhysBodyDesc::MeshAndAttr_t>(void); // 508
	CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::Purge(); // 510
	CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::~CUtlVector(); // 422
	CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::Purge(); // 903
	CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::Purge(); // 1799
	CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::Purge(); // 560
	ValidateAlignment<CPhysBodyDesc::HullAndAttr_t>(void); // 508
	CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::Purge(); // 510
	CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::~CUtlVector(); // 422
	CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::Purge(); // 903
	CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::Purge(); // 1799
	CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::Purge(); // 560
	ValidateAlignment<CPhysBodyDesc::CapsuleAndAttr_t>(void); // 508
	CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::Purge(); // 510
	CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::~CUtlVector(); // 422
	CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::Purge(); // 903
	CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::Purge(); // 1799
	CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::Purge(); // 560
	ValidateAlignment<CPhysBodyDesc::SphereAndAttr_t>(void); // 508
	CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::Purge(); // 510
	CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::~CUtlVector(); // 422
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlStringToken, int>::Purge(); // 903
	CUtlMemory<CUtlStringToken, int>::Purge(); // 1799
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Purge(); // 560
	ValidateAlignment<CUtlStringToken>(void); // 508
	CUtlMemory<CUtlStringToken, int>::Purge(); // 510
	CUtlMemory<CUtlStringToken, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVector(); // 422
	CUtlString::~CUtlString(); // 422
} /* size: 395, inline expansions: 51 (828 bytes) */

// <064D88CE> physicslib/physaggregatedata.cpp:409
// variables: 2
void CPhysBodyDesc::~CPhysBodyDesc()
{
	{
		int i; // 413
	}
	{
		int i; // 417
	}
} /* size: 0 */

// <064D83A5> physicslib/physaggregatedata.cpp:426
// variable: 1
// function calls: 20
void CPhysBodyDesc::AddSphere(const RnSphere_t& rSphere, const RnCollisionAttr_t& rAttributes)
{
	SphereAndAttr_t sphereAndAttr; // 428
	RnCollisionAttr_t::ComputeHash(); // 167
	memset(void* __dest,
		int __ch,
		size_t __len);  // 165
	RnCollisionAttr_t::RnCollisionAttr_t(); // 157
	RnSphere_t::RnSphere_t(
			float flRadius);  // 157
	SphereAndAttr_t::SphereAndAttr_t(); // 428
	Vector::operator=(
			const Vector& vOther);  // 72
	RnSphere_t::operator=(
			const RnSphere_t  &);  // 429
	CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::NumAllocated(); // 1196
	CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::Base(); // 112
	CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::Base(); // 368
	CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::IsGrowable(); // 823
	CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::GrowMemory(
			int num);  // 1198
	CopyConstruct<CPhysBodyDesc::SphereAndAttr_t>(SphereAndAttr_t* pMemory,
							const SphereAndAttr_t& src);  // 1201
	CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::Element(
		int i);  // 1201
	CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::AddToTail(
			const SphereAndAttr_t& src);  // 431
} /* size: 611, variables: 1, inline expansions: 20 (1257 bytes) */

// <064D7E08> physicslib/physaggregatedata.cpp:436
// variable: 1
// function calls: 22
void CPhysBodyDesc::AddCapsule(const RnCapsule_t& rCapsule, const RnCollisionAttr_t& rAttributes)
{
	CapsuleAndAttr_t capsuleAndAttr; // 438
	memset(void* __dest,
		int __ch,
		size_t __len);  // 165
	RnCollisionAttr_t::ComputeHash(); // 167
	RnCollisionAttr_t::RnCollisionAttr_t(); // 158
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 130
	RnCapsule_t::RnCapsule_t(); // 158
	CapsuleAndAttr_t::CapsuleAndAttr_t(); // 438
	Vector::operator=(
			const Vector& vOther);  // 123
	RnCapsule_t::operator=(
			const RnCapsule_t  &);  // 439
	CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::NumAllocated(); // 1196
	CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::Base(); // 112
	CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::Base(); // 368
	CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::IsGrowable(); // 823
	CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::GrowMemory(
			int num);  // 1198
	CopyConstruct<CPhysBodyDesc::CapsuleAndAttr_t>(CapsuleAndAttr_t* pMemory,
							const CapsuleAndAttr_t& src);  // 1201
	CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::Element(
		int i);  // 1201
	CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::AddToTail(
			const CapsuleAndAttr_t& src);  // 441
} /* size: 675, variables: 1, inline expansions: 22 (1425 bytes) */

// <064D797D> physicslib/physaggregatedata.cpp:446
// variable: 1
// function calls: 17
void CPhysBodyDesc::AddHull(RnHull_t* pHull, const RnCollisionAttr_t& rAttributes)
{
	HullAndAttr_t hullAndAttr; // 448
	memset(void* __dest,
		int __ch,
		size_t __len);  // 165
	RnCollisionAttr_t::ComputeHash(); // 167
	RnCollisionAttr_t::RnCollisionAttr_t(); // 159
	HullAndAttr_t::HullAndAttr_t(); // 448
	CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::NumAllocated(); // 1196
	CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::Base(); // 112
	CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::Base(); // 368
	CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::IsGrowable(); // 823
	CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::Element(
		int i);  // 1201
	CopyConstruct<CPhysBodyDesc::HullAndAttr_t>(HullAndAttr_t* pMemory,
							const HullAndAttr_t& src);  // 1201
	CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::AddToTail(
			const HullAndAttr_t& src);  // 451
} /* size: 611, variables: 1, inline expansions: 17 (1245 bytes) */

// <064D74F2> physicslib/physaggregatedata.cpp:456
// variable: 1
// function calls: 17
void CPhysBodyDesc::AddMesh(RnMesh_t* pMesh, const RnCollisionAttr_t& rAttributes)
{
	MeshAndAttr_t meshAndAttr; // 458
	memset(void* __dest,
		int __ch,
		size_t __len);  // 165
	RnCollisionAttr_t::ComputeHash(); // 167
	RnCollisionAttr_t::RnCollisionAttr_t(); // 160
	MeshAndAttr_t::MeshAndAttr_t(); // 458
	CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::NumAllocated(); // 1196
	CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::Base(); // 112
	CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::Base(); // 368
	CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::IsGrowable(); // 823
	CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::Element(
		int i);  // 1201
	CopyConstruct<CPhysBodyDesc::MeshAndAttr_t>(MeshAndAttr_t* pMemory,
							const MeshAndAttr_t& src);  // 1201
	CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::AddToTail(
			const MeshAndAttr_t& src);  // 461
} /* size: 611, variables: 1, inline expansions: 17 (1245 bytes) */

// <064BFED3> physicslib/physaggregatedata.cpp:466
// member functions: 2
// member variables: 6
// struct size: 24
struct AggDataSizes_t {
	uint nSize4; /* 0 4 */
	uint nSize2; /* 4 4 */
	uint nSize1; /* 8 4 */
	uint numHulls; /* 12 4 */
	uint numMeshes; /* 16 4 */
	uint numCollAttr; /* 20 4 */
	/* physicslib/physaggregatedata.cpp:474 */
	uint GetExtraDataSize(const AggDataSizes_t* );
	/* physicslib/physaggregatedata.cpp:478 */
	void Align(AggDataSizes_t* , uint);
};

// <064D74CC> physicslib/physaggregatedata.cpp:478
inline void AggDataSizes_t::Align(uint nAlignment)
{
} /* size: 0 */

// <064D6D05> physicslib/physaggregatedata.cpp:487
// variables: 13
// function calls: 36
AggDataSizes_t GetAggDataSizes(const CPhysBodyDesc* pDesc, const int nPartCount)
{
	AggDataSizes_t out; // 489
	bool bHasBones; // 531
	{
		int nPart; // 496
		{
			const CPhysBodyDesc& rBodyDesc; // 500
			{
				const HullAndAttr_t& hull; // 508
				const CUtlVector<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >& __for_range; // 17853
				const_iterator __for_begin; // 14406
				const_iterator __for_end; // 14406
				CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::end(); // 508
				CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::Base(); // 113
				CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::Base(); // 103
				CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::begin(); // 508
				AggDataSizes_t::Align(
					uint nAlignment);  // 510
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 745
				GetRuntimeSizeOf<CUtlVector<Vector> >(const CUtlVector<Vector, CUtlMemory<Vector, int> >& arr); // 767
				CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Count(); // 745
				GetRuntimeSizeOf<CUtlVector<RnPlane_t> >(const CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> >& arr); // 768
				CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Count(); // 745
				GetRuntimeSizeOf<CUtlVector<RnHalfEdge_t> >(const CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >& arr); // 769
				CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Count(); // 745
				GetRuntimeSizeOf<CUtlVector<RnFace_t> >(const CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> >& arr); // 770
				GetExtraDataSize(const RnHull_t* pHull); // 513
			}
			{
				const MeshAndAttr_t& mesh; // 520
				const CUtlVector<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >& __for_range; // 23781
				const_iterator __for_begin; // 20334
				const_iterator __for_end; // 20334
				CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::Base(); // 113
				CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::Base(); // 103
				CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::begin(); // 520
				CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::end(); // 520
				AggDataSizes_t::Align(
					uint nAlignment);  // 522
				CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Count(); // 745
				GetRuntimeSizeOf<CUtlVector<RnNode_t> >(const CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >& arr); // 784
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 745
				GetRuntimeSizeOf<CUtlVector<Vector> >(const CUtlVector<Vector, CUtlMemory<Vector, int> >& arr); // 785
				CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 745
				GetRuntimeSizeOf<CUtlVector<RnTriangle_t> >(const CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& arr); // 786
				CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 745
				GetRuntimeSizeOf<CUtlVector<unsigned char> >(const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& arr); // 787
				GetExtraDataSize(const RnMesh_t* pMesh); // 525
			}
			AggDataSizes_t::Align(
				uint nAlignment);  // 498
			CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::Count(); // 501
			CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::Count(); // 503
			CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::Count(); // 505
			CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::Count(); // 517
		}
	}
	{
		int i; // 543
		V_strlen(const char* str); // 548
	}
	AggDataSizes_t::Align(
		uint nAlignment);  // 535
	AggDataSizes_t::Align(
		uint nAlignment);  // 553
} /* size: 557, variables: 2, inline expansions: 2 (16 bytes) */

// <030FB81A> physicslib/physaggregatedata.cpp:487
// variables: 13
// function calls: 36
AggDataSizes_t GetAggDataSizes(const CPhysBodyDesc* pDesc, const int nPartCount)
{
	AggDataSizes_t out; // 489
	bool bHasBones; // 531
	{
		int nPart; // 496
		{
			const CPhysBodyDesc& rBodyDesc; // 500
			{
				const HullAndAttr_t& hull; // 508
				const CUtlVector<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >& __for_range; // 24519
				const_iterator __for_begin; // 21072
				const_iterator __for_end; // 21072
				CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::end(); // 508
				CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::Base(); // 113
				CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::Base(); // 103
				CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::begin(); // 508
				AggDataSizes_t::Align(
					uint nAlignment);  // 510
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 745
				GetRuntimeSizeOf<CUtlVector<Vector> >(const CUtlVector<Vector, CUtlMemory<Vector, int> >& arr); // 767
				CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Count(); // 745
				GetRuntimeSizeOf<CUtlVector<RnPlane_t> >(const CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> >& arr); // 768
				CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Count(); // 745
				GetRuntimeSizeOf<CUtlVector<RnHalfEdge_t> >(const CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >& arr); // 769
				CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Count(); // 745
				GetRuntimeSizeOf<CUtlVector<RnFace_t> >(const CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> >& arr); // 770
				GetExtraDataSize(const RnHull_t* pHull); // 513
			}
			{
				const MeshAndAttr_t& mesh; // 520
				const CUtlVector<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >& __for_range; // 30447
				const_iterator __for_begin; // 27000
				const_iterator __for_end; // 27000
				CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::Base(); // 113
				CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::Base(); // 103
				CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::begin(); // 520
				CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::end(); // 520
				AggDataSizes_t::Align(
					uint nAlignment);  // 522
				CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Count(); // 745
				GetRuntimeSizeOf<CUtlVector<RnNode_t> >(const CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >& arr); // 784
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 745
				GetRuntimeSizeOf<CUtlVector<Vector> >(const CUtlVector<Vector, CUtlMemory<Vector, int> >& arr); // 785
				CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 745
				GetRuntimeSizeOf<CUtlVector<RnTriangle_t> >(const CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& arr); // 786
				CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 745
				GetRuntimeSizeOf<CUtlVector<unsigned char> >(const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& arr); // 787
				GetExtraDataSize(const RnMesh_t* pMesh); // 525
			}
			AggDataSizes_t::Align(
				uint nAlignment);  // 498
			CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::Count(); // 501
			CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::Count(); // 503
			CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::Count(); // 505
			CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::Count(); // 517
		}
	}
	{
		int i; // 543
		V_strlen(const char* str); // 548
	}
	AggDataSizes_t::Align(
		uint nAlignment);  // 535
	AggDataSizes_t::Align(
		uint nAlignment);  // 553
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <064C9F34> physicslib/physaggregatedata.cpp:719
int GetRuntimeSizeOfArray<CUtlVectorUltraConservative<char const*> >(const CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>& array)
{
} /* size: 0 */

// <064C9EEF> physicslib/physaggregatedata.cpp:719
int GetRuntimeSizeOfArray<CUtlMemory<unsigned int, int> >(const CUtlMemory<unsigned int, int>& array)
{
} /* size: 0 */

// <064C9EAA> physicslib/physaggregatedata.cpp:719
int GetRuntimeSizeOfArray<CUtlMemory<short unsigned int, int> >(const CUtlMemory<short unsigned int, int>& array)
{
} /* size: 0 */

// <064C9E65> physicslib/physaggregatedata.cpp:719
int GetRuntimeSizeOfArray<CUtlMemory<matrix3x4_t> >(const CUtlMemory<matrix3x4_t, int>& array)
{
} /* size: 0 */

// <064C9E39> physicslib/physaggregatedata.cpp:719
int GetRuntimeSizeOfArray<CUtlVectorConservative<const VPhysXBodyPart_t*> >(const CUtlVectorConservative<const VPhysXBodyPart_t*>& array)
{
} /* size: 0 */

// <064C9E0D> physicslib/physaggregatedata.cpp:719
int GetRuntimeSizeOfArray<CUtlVectorUltraConservative<CPhysConstraintData> >(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>& array)
{
} /* size: 0 */

// <064C9DE1> physicslib/physaggregatedata.cpp:719
int GetRuntimeSizeOfArray<CUtlVectorUltraConservative<RnCollisionAttr_t> >(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>& array)
{
} /* size: 0 */

// <064C9DB5> physicslib/physaggregatedata.cpp:719
int GetRuntimeSizeOfArray<CUtlVectorUltraConservative<CUtlStringToken> >(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>& array)
{
} /* size: 0 */

// <064C9D89> physicslib/physaggregatedata.cpp:719
int GetRuntimeSizeOfArray<CUtlVectorUltraConservative<const CPhysAggregateData*> >(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>& array)
{
} /* size: 0 */

// <064D169D> physicslib/physaggregatedata.cpp:726
// variable: 1
// function calls: 25
void CPhysAggregateData::GetRuntimeSize()
{
	uintp nSizeOf; // 728
	CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::Count(); // 731
	CUtlVectorUltraConservative<char const::Count(); // 721
	GetRuntimeSizeOfArray<CUtlVectorUltraConservative<char const*> >(const CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>& array); // 733
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 734
	CUtlMemory<unsigned int, int>::Count(); // 721
	GetRuntimeSizeOfArray<CUtlMemory<unsigned int, int> >(const CUtlMemory<unsigned int, int>& array); // 736
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 738
	CUtlMemory<short unsigned int, int>::Count(); // 721
	GetRuntimeSizeOfArray<CUtlMemory<short unsigned int, int> >(const CUtlMemory<short unsigned int, int>& array); // 740
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 742
	CUtlMemory<short unsigned int, int>::Count(); // 721
	GetRuntimeSizeOfArray<CUtlMemory<short unsigned int, int> >(const CUtlMemory<short unsigned int, int>& array); // 744
	CUtlMemory<matrix3x4_t, int>::IsExternallyAllocated(); // 746
	CUtlMemory<matrix3x4_t, int>::Count(); // 721
	GetRuntimeSizeOfArray<CUtlMemory<matrix3x4_t> >(const CUtlMemory<matrix3x4_t, int>& array); // 748
	CUtlVectorBase<const VPhysXBodyPart_t::Count(); // 721
	GetRuntimeSizeOfArray<CUtlVectorConservative<const VPhysXBodyPart_t*> >(const CUtlVectorConservative<const VPhysXBodyPart_t*>& array); // 750
	CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::Count(); // 721
	GetRuntimeSizeOfArray<CUtlVectorUltraConservative<CPhysConstraintData> >(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>& array); // 751
	CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::Count(); // 721
	GetRuntimeSizeOfArray<CUtlVectorUltraConservative<RnCollisionAttr_t> >(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>& array); // 752
	CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::Count(); // 721
	GetRuntimeSizeOfArray<CUtlVectorUltraConservative<CUtlStringToken> >(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>& array); // 753
	CUtlVectorUltraConservative<const CPhysAggregateData::Count(); // 721
	GetRuntimeSizeOfArray<CUtlVectorUltraConservative<const CPhysAggregateData*> >(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>& array); // 754
} /* size: 0, variables: 1, inline expansions: 25 (0 bytes) */

// <064C9BE1> physicslib/physaggregatedata.cpp:762
void Checksum_Process<RnShapeDesc_t>(XXH_NAMESPACEXXH3_state_t* pState, const RnShapeDesc_t& data)
{
} /* size: 0 */

// <064C9BAC> physicslib/physaggregatedata.cpp:762
void Checksum_Process<CUtlVector<RnSphereDesc_t> >(XXH_NAMESPACEXXH3_state_t* pState, const CUtlVector<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >& data)
{
} /* size: 0 */

// <064C9B77> physicslib/physaggregatedata.cpp:762
void Checksum_Process<CUtlVector<RnCapsuleDesc_t> >(XXH_NAMESPACEXXH3_state_t* pState, const CUtlVector<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >& data)
{
} /* size: 0 */

// <064C9B42> physicslib/physaggregatedata.cpp:762
void Checksum_Process<CUtlVector<RnHullDesc_t> >(XXH_NAMESPACEXXH3_state_t* pState, const CUtlVector<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >& data)
{
} /* size: 0 */

// <064C9B0D> physicslib/physaggregatedata.cpp:762
void Checksum_Process<CUtlVector<RnMeshDesc_t> >(XXH_NAMESPACEXXH3_state_t* pState, const CUtlVector<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >& data)
{
} /* size: 0 */

// <064C9AA3> physicslib/physaggregatedata.cpp:762
void Checksum_Process<short unsigned int>(XXH_NAMESPACEXXH3_state_t* pState, const short unsigned int& data)
{
} /* size: 0 */

// <064C9A6E> physicslib/physaggregatedata.cpp:762
void Checksum_Process<unsigned int>(XXH_NAMESPACEXXH3_state_t* pState, const unsigned int& data)
{
} /* size: 0 */

// <064C718C> physicslib/physaggregatedata.cpp:762
void Checksum_Process<VPhysXBodyPart_t>(XXH_NAMESPACEXXH3_state_t* pState, const VPhysXBodyPart_t& data)
{
} /* size: 0 */

// <064C711A> physicslib/physaggregatedata.cpp:762
void Checksum_Process<VPhysXConstraint2_t>(XXH_NAMESPACEXXH3_state_t* pState, const VPhysXConstraint2_t& data)
{
} /* size: 0 */

// <064C9D54> physicslib/physaggregatedata.cpp:770
void Checksum_ProcessPlainArray<CUtlVector<Vector> >(XXH_NAMESPACEXXH3_state_t* pState, const CUtlVector<Vector, CUtlMemory<Vector, int> >& array)
{
} /* size: 0 */

// <064C9D1F> physicslib/physaggregatedata.cpp:770
void Checksum_ProcessPlainArray<CUtlVector<RnPlane_t> >(XXH_NAMESPACEXXH3_state_t* pState, const CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> >& array)
{
} /* size: 0 */

// <064C9CEA> physicslib/physaggregatedata.cpp:770
void Checksum_ProcessPlainArray<CUtlVector<RnHalfEdge_t> >(XXH_NAMESPACEXXH3_state_t* pState, const CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >& array)
{
} /* size: 0 */

// <064C9CB5> physicslib/physaggregatedata.cpp:770
void Checksum_ProcessPlainArray<CUtlVector<RnFace_t> >(XXH_NAMESPACEXXH3_state_t* pState, const CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> >& array)
{
} /* size: 0 */

// <064C9C80> physicslib/physaggregatedata.cpp:770
void Checksum_ProcessPlainArray<CUtlVector<RnNode_t> >(XXH_NAMESPACEXXH3_state_t* pState, const CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >& array)
{
} /* size: 0 */

// <064C9C4B> physicslib/physaggregatedata.cpp:770
void Checksum_ProcessPlainArray<CUtlVector<RnTriangle_t> >(XXH_NAMESPACEXXH3_state_t* pState, const CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& array)
{
} /* size: 0 */

// <064C9C16> physicslib/physaggregatedata.cpp:770
void Checksum_ProcessPlainArray<CUtlVector<unsigned char> >(XXH_NAMESPACEXXH3_state_t* pState, const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& array)
{
} /* size: 0 */

// <064C9AD8> physicslib/physaggregatedata.cpp:770
void Checksum_ProcessPlainArray<CUtlVector<short unsigned int> >(XXH_NAMESPACEXXH3_state_t* pState, const CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >& array)
{
} /* size: 0 */

// <064D112B> physicslib/physaggregatedata.cpp:778
// function calls: 21
void Checksum_Process<RnHull_t>(XXH_NAMESPACEXXH3_state_t* pState, const RnHull_t& data)
{
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 780
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 772
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 772
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 772
	Checksum_ProcessPlainArray<CUtlVector<Vector> >(XXH_NAMESPACEXXH3_state_t* pState,
							const CUtlVector<Vector, CUtlMemory<Vector, int> >& array);  // 781
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Count(); // 772
	CUtlMemory<RnPlane_t, int>::Base(); // 113
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Base(); // 772
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 772
	Checksum_ProcessPlainArray<CUtlVector<RnPlane_t> >(XXH_NAMESPACEXXH3_state_t* pState,
								const CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> >& array);  // 782
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Count(); // 772
	CUtlMemory<RnHalfEdge_t, int>::Base(); // 113
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Base(); // 772
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 772
	Checksum_ProcessPlainArray<CUtlVector<RnHalfEdge_t> >(XXH_NAMESPACEXXH3_state_t* pState,
								const CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >& array);  // 783
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Count(); // 772
	CUtlMemory<RnFace_t, int>::Base(); // 113
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Base(); // 772
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 772
	Checksum_ProcessPlainArray<CUtlVector<RnFace_t> >(XXH_NAMESPACEXXH3_state_t* pState,
								const CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> >& array);  // 784
} /* size: 0, inline expansions: 21 (0 bytes) */

// <064D0BBA> physicslib/physaggregatedata.cpp:790
// function calls: 21
void Checksum_Process<RnMesh_t>(XXH_NAMESPACEXXH3_state_t* pState, const RnMesh_t& data)
{
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 792
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 772
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 772
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 772
	Checksum_ProcessPlainArray<CUtlVector<Vector> >(XXH_NAMESPACEXXH3_state_t* pState,
							const CUtlVector<Vector, CUtlMemory<Vector, int> >& array);  // 793
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Count(); // 772
	CUtlMemory<RnNode_t, int>::Base(); // 113
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Base(); // 772
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 772
	Checksum_ProcessPlainArray<CUtlVector<RnNode_t> >(XXH_NAMESPACEXXH3_state_t* pState,
								const CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >& array);  // 794
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 772
	CUtlMemory<RnTriangle_t, int>::Base(); // 113
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Base(); // 772
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 772
	Checksum_ProcessPlainArray<CUtlVector<RnTriangle_t> >(XXH_NAMESPACEXXH3_state_t* pState,
								const CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& array);  // 795
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 772
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 772
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 772
	Checksum_ProcessPlainArray<CUtlVector<unsigned char> >(XXH_NAMESPACEXXH3_state_t* pState,
								const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& array);  // 796
} /* size: 0, inline expansions: 21 (0 bytes) */

// <064D0AAC> physicslib/physaggregatedata.cpp:802
// function calls: 2
void Checksum_Process<RnHullDesc_t>(XXH_NAMESPACEXXH3_state_t* pState, const RnHullDesc_t& data)
{
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 764
	Checksum_Process<RnShapeDesc_t>(XXH_NAMESPACEXXH3_state_t* pState,
					const RnShapeDesc_t& data);  // 804
} /* size: 0, inline expansions: 2 (0 bytes) */

// <064D06D5> physicslib/physaggregatedata.cpp:811
// function calls: 13
void Checksum_Process<VPhysics2ShapeDef_t>(XXH_NAMESPACEXXH3_state_t* pState, const VPhysics2ShapeDef_t& data)
{
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 764
	Checksum_Process<CUtlVector<RnSphereDesc_t> >(XXH_NAMESPACEXXH3_state_t* pState,
							const CUtlVector<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >& data);  // 813
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 764
	Checksum_Process<CUtlVector<RnCapsuleDesc_t> >(XXH_NAMESPACEXXH3_state_t* pState,
							const CUtlVector<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >& data);  // 814
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 764
	Checksum_Process<CUtlVector<RnHullDesc_t> >(XXH_NAMESPACEXXH3_state_t* pState,
							const CUtlVector<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >& data);  // 815
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 764
	Checksum_Process<CUtlVector<RnMeshDesc_t> >(XXH_NAMESPACEXXH3_state_t* pState,
							const CUtlVector<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >& data);  // 816
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 772
	CUtlMemory<short unsigned int, int>::Base(); // 113
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 772
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 772
	Checksum_ProcessPlainArray<CUtlVector<short unsigned int> >(XXH_NAMESPACEXXH3_state_t* pState,
									const CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >& array);  // 817
} /* size: 0, inline expansions: 13 (0 bytes) */

// <064D06A0> physicslib/physaggregatedata.cpp:823
void Checksum_Process<CPhysConstraintData>(XXH_NAMESPACEXXH3_state_t* pState, const CPhysConstraintData& data)
{
} /* size: 0 */

// <064C9A2A> physicslib/physaggregatedata.cpp:834
// variable: 1
void Checksum_ProcessArray<CUtlVector<VPhysXBodyPart_t> >(XXH_NAMESPACEXXH3_state_t* pState, const CUtlVector<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >& data)
{
	{
		int i; // 836
	}
} /* size: 0 */

// <064C99E6> physicslib/physaggregatedata.cpp:834
// variable: 1
void Checksum_ProcessArray<CUtlVector<VPhysXConstraint2_t> >(XXH_NAMESPACEXXH3_state_t* pState, const CUtlVector<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> >& data)
{
	{
		int i; // 836
	}
} /* size: 0 */

// <064C9958> physicslib/physaggregatedata.cpp:834
// variable: 1
void Checksum_ProcessArray<CUtlVectorUltraConservative<CPhysConstraintData> >(XXH_NAMESPACEXXH3_state_t* pState, const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>& data)
{
	{
		int i; // 836
	}
} /* size: 0 */

// <064C999C> physicslib/physaggregatedata.cpp:845
// variable: 1
void Checksum_ProcessArrayOfPtrs<CUtlVectorConservative<const VPhysXBodyPart_t*> >(XXH_NAMESPACEXXH3_state_t* pState, const CUtlVectorConservative<const VPhysXBodyPart_t*>& data)
{
	{
		int i; // 847
	}
} /* size: 0 */

// <064D0242> physicslib/physaggregatedata.cpp:855
// variables: 3
// function calls: 16
void VPhysXAggregateData_t::GetChecksum()
{
	XXH_NAMESPACEXXH3_state_t state; // 857
	memset(void* __dest,
		int __ch,
		size_t __len);  // 6602
	XXH3_reset_internal(XXH_NAMESPACEXXH3_state_t* statePtr,
				XXH64_hash_t seed,
				const void* secret,
				size_t secretSize);  // 6624
	XXH_INLINE_XXH3_64bits_reset(XXH_NAMESPACEXXH3_state_t* statePtr); // 6621
	XXH_INLINE_XXH3_64bits_reset(XXH_NAMESPACEXXH3_state_t* statePtr); // 858
	{
		int i; // 836
		CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::Count(); // 836
		CUtlMemory<VPhysXBodyPart_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::operator[](
				int i);  // 838
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 764
		Checksum_Process<VPhysXBodyPart_t>(XXH_NAMESPACEXXH3_state_t* pState,
							const VPhysXBodyPart_t& data);  // 838
	}
	Checksum_ProcessArray<CUtlVector<VPhysXBodyPart_t> >(XXH_NAMESPACEXXH3_state_t* pState,
								const CUtlVector<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >& data);  // 859
	{
		int i; // 836
		CUtlVectorBase<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> >::Count(); // 836
		CUtlMemory<VPhysXConstraint2_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> >::operator[](
				int i);  // 838
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 764
		Checksum_Process<VPhysXConstraint2_t>(XXH_NAMESPACEXXH3_state_t* pState,
							const VPhysXConstraint2_t& data);  // 838
	}
	Checksum_ProcessArray<CUtlVector<VPhysXConstraint2_t> >(XXH_NAMESPACEXXH3_state_t* pState,
								const CUtlVector<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> >& data);  // 860
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <064CFC7C> physicslib/physaggregatedata.cpp:866
// variables: 3
// function calls: 21
void CPhysAggregateData::GetChecksum()
{
	XXH_NAMESPACEXXH3_state_t state; // 868
	memset(void* __dest,
		int __ch,
		size_t __len);  // 6602
	XXH3_reset_internal(XXH_NAMESPACEXXH3_state_t* statePtr,
				XXH64_hash_t seed,
				const void* secret,
				size_t secretSize);  // 6624
	XXH_INLINE_XXH3_64bits_reset(XXH_NAMESPACEXXH3_state_t* statePtr); // 6621
	XXH_INLINE_XXH3_64bits_reset(XXH_NAMESPACEXXH3_state_t* statePtr); // 869
	{
		int i; // 847
		CUtlVectorBase<const VPhysXBodyPart_t::Count(); // 847
		CUtlMemoryConservative<const VPhysXBodyPart_t::Base(); // 366
		CUtlMemoryConservative<const VPhysXBodyPart_t::operator[](
				int i);  // 595
		CUtlVectorBase<const VPhysXBodyPart_t::operator[](
				int i);  // 849
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 764
		Checksum_Process<VPhysXBodyPart_t>(XXH_NAMESPACEXXH3_state_t* pState,
							const VPhysXBodyPart_t& data);  // 849
	}
	Checksum_ProcessArrayOfPtrs<CUtlVectorConservative<const VPhysXBodyPart_t*> >(XXH_NAMESPACEXXH3_state_t* pState,
											const CUtlVectorConservative<const VPhysXBodyPart_t*>& data);  // 870
	{
		int i; // 836
		CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::Count(); // 836
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 764
		Checksum_Process<short unsigned int>(XXH_NAMESPACEXXH3_state_t* pState,
							const short unsigned int& data);  // 825
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 764
		Checksum_Process<short unsigned int>(XXH_NAMESPACEXXH3_state_t* pState,
							const short unsigned int& data);  // 826
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 764
		Checksum_Process<unsigned int>(XXH_NAMESPACEXXH3_state_t* pState,
						const unsigned int& data);  // 827
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 828
		Checksum_Process<CPhysConstraintData>(XXH_NAMESPACEXXH3_state_t* pState,
							const CPhysConstraintData& data);  // 838
	}
	Checksum_ProcessArray<CUtlVectorUltraConservative<CPhysConstraintData> >(XXH_NAMESPACEXXH3_state_t* pState,
										const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>& data);  // 871
} /* size: 397, variables: 1, inline expansions: 6 (594 bytes) */

