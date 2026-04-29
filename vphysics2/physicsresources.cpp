
//
// vphysics2/physicsresources.cpp
//
//	referenced by: libengine2.so
//
//	functions: 22
//

// <00D74C73> vphysics2/physicsresources.cpp:8
// function calls: 7
void CPhysicsSurfacePropertyManager::CPhysicsSurfacePropertyManager()
{
	IPhysSurfacePropertyController::IPhysSurfacePropertyController(); // 8
	CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>::CUtlScalarHash(); // 8
	CUtlMemory<CPhysSurfaceProperties::ValidateGrowSize(); // 475
	CUtlMemory<CPhysSurfaceProperties::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CPhysSurfaceProperties::ResetDbgInfo(); // 530
	CUtlVectorBase<CPhysSurfaceProperties::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CPhysSurfaceProperties::CUtlVector(); // 8
} /* size: 71, inline expansions: 7 (80 bytes) */

// <00D74C5A> vphysics2/physicsresources.cpp:8
void CPhysicsSurfacePropertyManager::CPhysicsSurfacePropertyManager()
{
} /* size: 0 */

// <00D74A32> vphysics2/physicsresources.cpp:13
// function calls: 11
void CPhysicsSurfacePropertyManager::~CPhysicsSurfacePropertyManager()
{
	CUtlMemory<CPhysSurfaceProperties::IsExternallyAllocated(); // 905
	CUtlMemory<CPhysSurfaceProperties::Purge(); // 903
	CUtlMemory<CPhysSurfaceProperties::Purge(); // 1799
	CUtlVectorBase<CPhysSurfaceProperties::RemoveAll(); // 1798
	CUtlVectorBase<CPhysSurfaceProperties::Purge(); // 560
	ValidateAlignment<CPhysSurfaceProperties*>(void); // 508
	CUtlMemory<CPhysSurfaceProperties::Purge(); // 510
	CUtlMemory<CPhysSurfaceProperties::~CUtlMemory(); // 562
	CUtlVectorBase<CPhysSurfaceProperties::~CUtlVectorBase(); // 410
	CUtlVector<CPhysSurfaceProperties::~CUtlVector(); // 16
	CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>::~CUtlScalarHash(); // 16
} /* size: 105, inline expansions: 11 (186 bytes) */

// <00D749CA> vphysics2/physicsresources.cpp:13
void CPhysicsSurfacePropertyManager::~CPhysicsSurfacePropertyManager()
{
} /* size: 36 */

// <00D74953> vphysics2/physicsresources.cpp:18
// function call: 1
void CPhysicsSurfacePropertyManager::GetSurfacePropCount()
{
	CUtlVectorBase<CPhysSurfaceProperties::Count(); // 20
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00D74873> vphysics2/physicsresources.cpp:23
// function calls: 3
void CPhysicsSurfacePropertyManager::GetSurfaceProperty(int nIndex)
{
	CUtlVectorBase<CPhysSurfaceProperties::IsValidIndex(
			int i);  // 25
	CUtlMemory<CPhysSurfaceProperties::operator[](
			int i);  // 595
	CUtlVectorBase<CPhysSurfaceProperties::operator[](
			int i);  // 25
} /* size: 37, inline expansions: 3 (15 bytes) */

// <00D7475C> vphysics2/physicsresources.cpp:28
// variable: 1
// function calls: 2
void CPhysicsSurfacePropertyManager::FindSurfaceProperties(CUtlStringToken surfacePropName, bool* pFound)
{
	UtlHashFastHandle_t h; // 30
	CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>::FindByUniqueKey(
			unsigned int uiKey);  // 30
	{
	}
	CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>::Element(
		UtlHashFastHandle_t hHash);  // 37
} /* size: 0, variables: 1, inline expansions: 2 (90 bytes) */

// <00D7410D> vphysics2/physicsresources.cpp:47
// variables: 2
// function calls: 27
void CPhysicsSurfacePropertyManager::GetSurfacePropertiesNames(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pSurfacePropertiesList, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pSurfacePropertiesDescriptionsList, bool bIncludeHiddenProperties)
{
	const CUtlVector<CPhysSurfaceProperties*, CUtlMemory<CPhysSurfaceProperties*, int> >& surfacePropList; // 49
	{
		int nSurfProp; // 51
		CUtlVectorBase<CPhysSurfaceProperties::Count(); // 51
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1201
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1520
		CopyConstruct<CUtlString>(CUtlString* pMemory,
						const CUtlString& src);  // 1201
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				const CUtlString& src);  // 56
		CUtlMemory<CPhysSurfaceProperties::operator[](
				int i);  // 595
		CUtlVectorBase<CPhysSurfaceProperties::operator[](
				int i);  // 60
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1201
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1520
		CopyConstruct<CUtlString>(CUtlString* pMemory,
						const CUtlString& src);  // 1201
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				const CUtlString& src);  // 60
		CUtlMemory<CPhysSurfaceProperties::operator[](
				int i);  // 595
		CUtlVectorBase<CPhysSurfaceProperties::operator[](
				int i);  // 53
	}
} /* size: 346, variables: 1 */

// <00D74041> vphysics2/physicsresources.cpp:65
// function call: 1
void CPhysicsSurfacePropertyManager::InitializeRnMaterialFromSurfaceProperty(const CPhysSurfaceProperties* pSurfaceProperties, RnMaterial_t* pMaterial)
{
	RnMaterial_t::RnMaterial_t(); // 72
} /* size: 87, inline expansions: 1 (0 bytes) */

// <00D73538> vphysics2/physicsresources.cpp:75
// variables: 5
// function calls: 39
void CPhysicsSurfacePropertyManager::AddProperty(CUtlString name, CUtlString base, CUtlString description)
{
	bool found; // 77
	CPhysSurfaceProperties* prop; // 79
	CSurfacePropertiesPair data; // 95
	uint32 nKey; // 97
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 79
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 79
	CUtlString::CUtlString(); // 40
	CUtlString::CUtlString(); // 40
	CPhysSurfaceProperties::CPhysSurfaceProperties(); // 83
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 84
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 85
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 85
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 86
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 86
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 87
	{
		int i; // 143
		CUtlVectorBase<CPhysSurfaceProperties::Count(); // 143
		CUtlMemory<CPhysSurfaceProperties::operator[](
				int i);  // 588
		CUtlVectorBase<CPhysSurfaceProperties::operator[](
				int i);  // 145
	}
	CPhysicsSurfacePropertyManager::IndexOfHash(
			uint32 hash);  // 88
	CUtlMemory<CPhysSurfaceProperties::NumAllocated(); // 1196
	CUtlMemory<CPhysSurfaceProperties::operator[](
			int i);  // 602
	CUtlVectorBase<CPhysSurfaceProperties::Element(
		int i);  // 1201
	CopyConstruct<CPhysSurfaceProperties*>(CPhysSurfaceProperties** pMemory,
						CPhysSurfaceProperties* const& src);  // 1201
	CUtlMemory<CPhysSurfaceProperties::Base(); // 112
	CUtlVectorBase<CPhysSurfaceProperties::Base(); // 368
	CUtlVectorBase<CPhysSurfaceProperties::ResetDbgInfo(); // 824
	CUtlVectorBase<CPhysSurfaceProperties::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CPhysSurfaceProperties::AddToTail(
			CPhysSurfaceProperties* const& src);  // 93
} /* size: 0, variables: 4, inline expansions: 36 (1006 bytes) */

// <00D72F8E> vphysics2/physicsresources.cpp:103
// variables: 3
// function calls: 19
void CPhysicsSurfacePropertyManager::LoadSurfaceProperties()
{
	CPhysSurfaceProperties* defaultProp; // 108
	CSurfacePropertiesPair data; // 121
	{
		int i; // 1070
	}
	CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>::RemoveAll(); // 106
	CUtlVectorBase<CPhysSurfaceProperties::RemoveAll(); // 105
	CUtlString::operator=(
			const char* src);  // 109
	CUtlString::CUtlString(); // 40
	CUtlString::CUtlString(); // 40
	CPhysSurfaceProperties::CPhysSurfaceProperties(); // 108
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 110
	CUtlString::operator=(
			const char* src);  // 112
	CUtlMemory<CPhysSurfaceProperties::NumAllocated(); // 1196
	CUtlMemory<CPhysSurfaceProperties::operator[](
			int i);  // 602
	CUtlVectorBase<CPhysSurfaceProperties::Element(
		int i);  // 1201
	CopyConstruct<CPhysSurfaceProperties*>(CPhysSurfaceProperties** pMemory,
						CPhysSurfaceProperties* const& src);  // 1201
	CUtlMemory<CPhysSurfaceProperties::Base(); // 112
	CUtlVectorBase<CPhysSurfaceProperties::Base(); // 368
	CUtlVectorBase<CPhysSurfaceProperties::ResetDbgInfo(); // 824
	CUtlVectorBase<CPhysSurfaceProperties::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CPhysSurfaceProperties::AddToTail(
			CPhysSurfaceProperties* const& src);  // 119
} /* size: 0, variables: 2, inline expansions: 19 (392 bytes) */

// <00D72ECD> vphysics2/physicsresources.cpp:127
// variables: 2
// function calls: 2
void CPhysicsSurfacePropertyManager::UnloadSurfaceProperties()
{
	UtlHashFastHandle_t h; // 131
	{
		int i; // 1070
	}
	CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>::RemoveAll(); // 138
	CUtlVectorBase<CPhysSurfaceProperties::RemoveAll(); // 137
} /* size: 92, variables: 1, inline expansions: 2 (79 bytes) */

// <00D762D2> vphysics2/physicsresources.cpp:141
// variable: 1
// function calls: 3
void CPhysicsSurfacePropertyManager::IndexOfHash(uint32 hash)
{
	{
		int i; // 143
		CUtlVectorBase<CPhysSurfaceProperties::Count(); // 143
		CUtlMemory<CPhysSurfaceProperties::operator[](
				int i);  // 588
		CUtlVectorBase<CPhysSurfaceProperties::operator[](
				int i);  // 145
	}
} /* size: 0 */

// <00D72E9C> vphysics2/physicsresources.cpp:141
// variable: 1
void CPhysicsSurfacePropertyManager::IndexOfHash(uint32 hash)
{
	{
		int i; // 143
	}
} /* size: 0 */

// <00D76577> vphysics2/physicsresources.cpp:152
// variable: 1
// function calls: 5
void CPhysicsDataTypeManager::AllocateTypesafe(VPhysXAggregateData_t* pDiskData, IKV3ResourceAllocatorUtils* pUtils)
{
	CPhysAggregateDataHandle pNewAggData; // 154
	CPhysAggregateDataHandle::Get(); // 138
	CPhysAggregateDataHandle::operator->(); // 155
	CPhysAggregateDataHandle::Get(); // 157
	CPhysAggregateDataHandle::Clear(); // 115
	CPhysAggregateDataHandle::~CPhysAggregateDataHandle(); // 158
} /* size: 114, variables: 1, inline expansions: 5 (74 bytes) */

// <00D72E5F> vphysics2/physicsresources.cpp:152
// variable: 1
void CPhysicsDataTypeManager::AllocateTypesafe(VPhysXAggregateData_t* pDiskData, IKV3ResourceAllocatorUtils* pUtils)
{
	CPhysAggregateDataHandle pNewAggData; // 154
} /* size: 0, variables: 1 */

// <00D76210> vphysics2/physicsresources.cpp:160
// function calls: 2
void CPhysicsDataTypeManager::DeallocateTypesafe(CPhysAggregateData* pAggData, IKV3ResourceDeallocatorUtils* pUtils)
{
	CDeallocatorUtils::GetDeallocUtils(); // 162
	CResourceDeallocatorUtils::GetDeallocationType(); // 162
} /* size: 129, inline expansions: 2 (7 bytes) */

// <00D72E2E> vphysics2/physicsresources.cpp:160
void CPhysicsDataTypeManager::DeallocateTypesafe(CPhysAggregateData* pAggData, IKV3ResourceDeallocatorUtils* pUtils)
{
} /* size: 0 */

// <00D72DE4> vphysics2/physicsresources.cpp:170
void CPhysicsDataTypeManager::OnReallocateTypesafe(const CPhysAggregateData* pOldAggData, CPhysAggregateData* pNewAggData)
{
} /* size: 5 */

// <00D72C1C> vphysics2/physicsresources.cpp:201
// variable: 1
void ComputePointCloudBbox(AABB_t& bbox, int nVertexCountIn, const Vector* pVertexBaseIn)
{
	{
		int i; // 204
	}
} /* size: 0 */

// <00D72647> vphysics2/physicsresources.cpp:208
// variables: 4
// function calls: 23
bool CanFitAABox(int nVertexCountIn, const Vector* pVertexBaseIn)
{
	AABB_t bbox; // 210
	Vector vExtents; // 212
	Vector vCenter; // 212
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 138
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 139
	AABB_t::MakeInvalid(); // 203
	{
		int i; // 204
		AABB_t::AddPointToBounds(
				const Vector& vPoint);  // 83
		AABB_t::operator|=(
				const Vector& vPoint);  // 205
	}
	ComputePointCloudBbox(AABB_t& bbox,
				int nVertexCountIn,
				const Vector* pVertexBaseIn);  // 211
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 210
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 32
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 32
	AABB_t::GetCenter(); // 212
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 220
	AABB_t::GetSize(); // 212
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 212
} /* size: 347, variables: 3, inline expansions: 21 (436 bytes) */

// <00D6FF32> vphysics2/physicsresources.cpp:216
// variables: 41
// function calls: 161
void CPhysAggregateData::InitFromDiskData(VPhysXAggregateData_t* pDiskDataRoot)
{
	const char   __FUNCTION__; // 4673
	int nPartCount; // 232
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 218
	}
	{
		int iBone; // 222
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 222
		CUtlString::Get(); // 224
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 224
		CUtlVectorUltraConservative<char const::operator[](
				int i);  // 224
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 234
	}
	{
		int nPart; // 237
		{
			const VPhysXBodyPart_t* pPart; // 239
			{
				const RnHullDesc_t& hull; // 242
				const CUtlVector<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >& __for_range; // 11628
				const_iterator __for_begin; // 8218
				const_iterator __for_end; // 8218
				CUtlMemory<RnHullDesc_t, int>::Base(); // 113
				CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Base(); // 103
				CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::begin(); // 242
				CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Count(); // 105
				CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::end(); // 242
				CUtlMemory<Vector, int>::Base(); // 113
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 246
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 246
			}
			CUtlMemory<VPhysXBodyPart_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::operator[](
					int i);  // 239
			CUtlMemoryConservative<const VPhysXBodyPart_t::Base(); // 365
			CUtlMemoryConservative<const VPhysXBodyPart_t::operator[](
					int i);  // 588
			CUtlVectorBase<const VPhysXBodyPart_t::operator[](
					int i);  // 240
		}
	}
	{
		int nConstraintCount; // 258
		{
			int nConstraint; // 261
			{
				const VPhysXConstraint2_t& constraint; // 263
				CPhysConstraintData& newConstraint; // 264
				CUtlMemory<VPhysXConstraint2_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> >::operator[](
						int i);  // 263
				CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::operator[](
						int i);  // 264
			}
		}
		CUtlVectorBase<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> >::Count(); // 258
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
				int num);  // 260
	}
	{
		int nJointCount; // 272
		{
			int nJoint; // 275
			CUtlMemory<VPhysXJoint_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::operator[](
					int i);  // 277
			CUtlVectorUltraConservative<const VPhysXJoint_t::operator[](
					int i);  // 277
		}
		CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::Count(); // 272
		{
			int nCurCount; // 186
			CUtlVectorUltraConservative<const VPhysXJoint_t::Count(); // 159
			{
				size_t nNeeded; // 172
				size_t nHave; // 173
				GetSize(void* pMem); // 173
				Realloc(void* pMem,
					size_t nSize);  // 177
			}
			Alloc(size_t nSize); // 166
			CUtlVectorUltraConservative<const VPhysXJoint_t::EnsureCapacity(
					int num);  // 152
			CUtlVectorUltraConservative<const VPhysXJoint_t::EnsureCapacity(
					int num);  // 187
		}
		CUtlVectorUltraConservative<const VPhysXJoint_t::EnsureCount(
				int num);  // 182
		CUtlVectorUltraConservative<const VPhysXJoint_t::EnsureCount(
				int num);  // 274
	}
	{
		int nSurfCount; // 281
		{
			int nSurfacePropIdx; // 285
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 287
			CUtlStringToken::CUtlStringToken(); // 114
			StringTokenFromHashCode(uint32 nHashCode); // 287
			CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::operator[](
					int i);  // 287
		}
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 281
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
				int num);  // 283
	}
	{
		int nCollCount; // 291
		{
			int nColl; // 294
			{
				const VPhysXCollisionAttributes_t& attr; // 296
				CUtlMemory<VPhysXCollisionAttributes_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> >::operator[](
						int i);  // 296
				memset(void* __dest,
					int __ch,
					size_t __len);  // 165
				RnCollisionAttr_t::ComputeHash(); // 167
				RnCollisionAttr_t::RnCollisionAttr_t(); // 107
				{
					int i; // 109
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 109
					{
						CUtlStringToken token; // 111
						CUtlMemory<CUtlString, int>::operator[](
								int i);  // 595
						CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
								int i);  // 111
						CUtlString::Get(); // 441
						CUtlString::operator char const*(); // 111
						CUtlStringToken::CUtlStringToken(); // 121
						{
						}
						MakeStringToken(const char* pString,
								bool bWriteToDatabase);  // 119
						MakeStringToken(const char* pString,
								bool bWriteToDatabase);  // 111
						{
							int i; // 84
						}
						RnCollisionAttr_t::HasTag(
							uint32 tagToken);  // 116
						{
							int i; // 119
							RnCollisionAttr_t::ComputeHash(); // 211
							RnCollisionAttr_t::RebuildHash(); // 124
						}
						RnCollisionAttr_t::AddTag(
							uint32 tagToken);  // 114
						RnCollisionAttr_t::AddTag(
							uint32 tagToken);  // 111
						RnCollisionAttr_t::AddTag(
							CUtlStringToken tagToken);  // 112
					}
				}
				VPhysXCollisionAttributes_t::Get(); // 297
				CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::operator[](
						int i);  // 297
			}
		}
		CUtlVectorBase<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> >::Count(); // 291
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
				int num);  // 293
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 221
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
			int num);  // 221
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 227
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 619
	CUtlMemory<unsigned int, int>::SetExternalBuffer(
				unsigned int* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 227
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 227
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 619
	CUtlMemory<short unsigned int, int>::SetExternalBuffer(
				short unsigned int* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 228
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 228
	CUtlMemory<short unsigned int, int>::Base(); // 112
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 228
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 619
	CUtlMemory<short unsigned int, int>::SetExternalBuffer(
				short unsigned int* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 229
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 229
	CUtlMemory<short unsigned int, int>::Base(); // 112
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 229
	CUtlMemory<matrix3x4_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4_t, int>::Purge(); // 619
	CUtlMemory<matrix3x4_t, int>::SetExternalBuffer(
				matrix3x4_t* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 230
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 230
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 230
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 619
	CUtlMemory<short unsigned int, int>::SetExternalBuffer(
				short unsigned int* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 231
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 231
	CUtlMemory<short unsigned int, int>::Base(); // 112
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 231
	CUtlVectorUltraConservative<char const::Count(); // 234
	CUtlMemory<unsigned int, int>::Count(); // 234
	CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::Count(); // 232
	CUtlVectorBase<const VPhysXBodyPart_t::Count(); // 1069
	{
	}
	CUtlMemoryConservative<const VPhysXBodyPart_t::RememberAllocSize(
				size_t sz);  // 403
	CUtlMemoryConservative<const VPhysXBodyPart_t::ReAlloc(
		size_t sz);  // 409
	CUtlMemoryConservative<const VPhysXBodyPart_t::Grow(
		int num);  // 806
	CUtlVectorBase<const VPhysXBodyPart_t::ResetDbgInfo(); // 824
	CUtlVectorBase<const VPhysXBodyPart_t::GrowMemory(
			int num);  // 784
	CUtlMemoryConservative<const VPhysXBodyPart_t::AllocSize(); // 392
	CUtlMemoryConservative<const VPhysXBodyPart_t::NumAllocated(); // 782
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
			int num);  // 236
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 301
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 303
	CUtlString::Get(); // 306
} /* size: 0, variables: 2, inline expansions: 61 (2497 bytes) */

