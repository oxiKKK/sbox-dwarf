
//
// vphysics2/physicsinterface.cpp
//
//	referenced by: libengine2.so
//
//	functions: 69
//	structs: 3
//

// <00A07FB1> vphysics2/physicsinterface.cpp:20
void* __CreateCPhysicsSystemIPhysicsSystem_interface(void)
{
} /* size: 12 */

// <00A07A05> vphysics2/physicsinterface.cpp:27
// function calls: 18
void CPhysicsSystem::CPhysicsSystem()
{
	IAppSystem::IAppSystem(); // 154
	IPhysicsSystem::IPhysicsSystem(); // 120
	CBaseAppSystem<IPhysicsSystem>::CBaseAppSystem(); // 171
	CTier0AppSystem<IPhysicsSystem, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IPhysicsSystem, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<IPhysicsSystem, 0>::CTier2AppSystem(); // 27
	CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>::CTypesafeIntrospectedToKV3TypeManager(); // 56
	CPhysicsDataTypeManager::CPhysicsDataTypeManager(); // 27
	CUtlMemory<CPhysicsWorld::ValidateGrowSize(); // 475
	CUtlMemory<CPhysicsWorld::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CPhysicsWorld::ResetDbgInfo(); // 530
	CUtlVectorBase<CPhysicsWorld::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CPhysicsWorld::CUtlVector(); // 27
} /* size: 159, inline expansions: 18 (172 bytes) */

// <00A079EC> vphysics2/physicsinterface.cpp:27
void CPhysicsSystem::CPhysicsSystem()
{
} /* size: 0 */

// <00A079BE> vphysics2/physicsinterface.cpp:38
void CPhysicsSystem::GetDependencies()
{
} /* size: 12 */

// <00A07946> vphysics2/physicsinterface.cpp:43
void* AllocFcn(int32_t nBytes, int32_t nAlignment)
{
} /* size: 15 */

// <00A078F9> vphysics2/physicsinterface.cpp:48
void FreeFcn(void* pAddress)
{
} /* size: 9 */

// <00A1B9AD> vphysics2/physicsinterface.cpp:53
// function call: 1
int AssertFcn(const char* pExpressionString, const char* pFile, int nLine)
{
	AssertFcn(const char* pExpressionString,
			const char* pFile,
			int nLine);  // 53
} /* size: 0, inline expansions: 1 (57 bytes) */

// <00A078C2> vphysics2/physicsinterface.cpp:53
int AssertFcn(const char* pExpressionString, const char* pFile, int nLine)
{
} /* size: 0 */

// <00A1BA5C> vphysics2/physicsinterface.cpp:69
// function call: 1
void LogFcn(const char* message)
{
	LogFcn(const char* message); // 69
} /* size: 91, inline expansions: 1 (31 bytes) */

// <00A078A7> vphysics2/physicsinterface.cpp:69
void LogFcn(const char* message)
{
} /* size: 0 */

// <00A07069> vphysics2/physicsinterface.cpp:77
// variables: 9
// function calls: 31
b3CastOutput ShapeCastFcn(const b3ShapeCastPairInput* input)
{
	CTraceRay traceRay; // 79
	CTraceWorldspaceCloud obstacle; // 82
	CTraceWorldspaceCloud sweepobject; // 83
	CTraceSolver solver; // 84
	b3CastOutput output; // 86
	CShapeCastResult result; // 89
	{
		b3SimplexCache cache; // 99
		b3DistanceInput distanceInput; // 100
		b3DistanceOutput distanceOutput; // 107
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 105
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 105
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 108
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 108
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 79
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 79
	ITraceObject::ITraceObject(); // 93
	CTraceWorldspaceCloud::CTraceWorldspaceCloud(
				int nVertexCount,
				const Vector* pVertexBase);  // 82
	ITraceObject::ITraceObject(); // 93
	CTraceWorldspaceCloud::CTraceWorldspaceCloud(
				int nVertexCount,
				const Vector* pVertexBase);  // 83
	CShapeCastResult::DidHit(); // 90
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 95
	Vector::operator=(
			const Vector& vOther);  // 80
	Vector::Vector(); // 77
	Vector::Vector(); // 77
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 79
	Vector::operator=(
			const Vector& vOther);  // 79
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 80
	CShapeCastResult::CShapeCastResult(); // 89
	ITraceObject::~ITraceObject(); // 90
	CTraceWorldspaceCloud::~CTraceWorldspaceCloud(); // 113
	ITraceObject::~ITraceObject(); // 90
	CTraceWorldspaceCloud::~CTraceWorldspaceCloud(); // 113
} /* size: 772, variables: 6, inline expansions: 23 (181 bytes) */

// <00A06E4D> vphysics2/physicsinterface.cpp:115
// variable: 1
// function calls: 4
void CPhysicsSystem::Init()
{
	InitReturnVal_t ok; // 117
	CTier0AppSystem<IPhysicsSystem, 0>::Init(); // 71
	CTier2AppSystem<IPhysicsSystem, 0>::Init(); // 117
	ResourceTypeName(void); // 673
	IResourceSystem::InstallTypeManager<495958126710>(
					IResourceTypeManager* pTypeManager,
					const char* pErrorManifestName);  // 127
} /* size: 203, variables: 1, inline expansions: 4 (70 bytes) */

// <00A06E1F> vphysics2/physicsinterface.cpp:136
void CPhysicsSystem::PreShutdown()
{
} /* size: 5 */

// <00A06D64> vphysics2/physicsinterface.cpp:141
// function calls: 2
void CPhysicsSystem::Shutdown()
{
	CTier0AppSystem<IPhysicsSystem, 0>::Shutdown(); // 85
	CTier2AppSystem<IPhysicsSystem, 0>::Shutdown(); // 151
} /* size: 102, inline expansions: 2 (54 bytes) */

// <00A069F6> vphysics2/physicsinterface.cpp:154
// variable: 1
// function calls: 13
void CPhysicsSystem::CreateWorld()
{
	CPhysicsWorld* pWorld; // 156
	CUtlMemory<CPhysicsWorld::NumAllocated(); // 1196
	CUtlMemory<CPhysicsWorld::Base(); // 112
	CUtlVectorBase<CPhysicsWorld::Base(); // 368
	CUtlVectorBase<CPhysicsWorld::ResetDbgInfo(); // 824
	CUtlMemory<CPhysicsWorld::IsGrowable(); // 823
	CUtlMemory<CPhysicsWorld::IsExternallyAllocated(); // 859
	CUtlMemory<CPhysicsWorld::IsExternallyAllocated(); // 861
	CUtlMemory<CPhysicsWorld::Grow(
		int num);  // 806
	CUtlVectorBase<CPhysicsWorld::GrowMemory(
			int num);  // 1198
	CUtlMemory<CPhysicsWorld::operator[](
			int i);  // 602
	CUtlVectorBase<CPhysicsWorld::Element(
		int i);  // 1201
	CopyConstruct<CPhysicsWorld*>(CPhysicsWorld** pMemory,
					CPhysicsWorld* const& src);  // 1201
	CUtlVectorBase<CPhysicsWorld::AddToTail(
			CPhysicsWorld* const& src);  // 157
} /* size: 315, variables: 1, inline expansions: 13 (784 bytes) */

// <00A066BF> vphysics2/physicsinterface.cpp:161
// variables: 3
// function calls: 13
void CPhysicsSystem::DestroyWorld(IPhysicsWorld* pIWorld)
{
	CPhysicsWorld* pWorld; // 163
	{
		int i; // 1531
		CUtlVectorBase<CPhysicsWorld::Count(); // 1531
		CUtlMemory<CPhysicsWorld::operator[](
				int i);  // 609
		CUtlVectorBase<CPhysicsWorld::Element(
			int i);  // 1533
	}
	CUtlVectorBase<CPhysicsWorld::Find(
		CPhysicsWorld* const& src);  // 1629
	CUtlMemory<CPhysicsWorld::operator[](
			int i);  // 602
	CUtlVectorBase<CPhysicsWorld::Element(
		int i);  // 1575
	Destruct<CPhysicsWorld*>(CPhysicsWorld** pMemory); // 1575
	{
		const bool  bNotLast; // 1578
		CUtlMemory<CPhysicsWorld::operator[](
				int i);  // 602
		CUtlVectorBase<CPhysicsWorld::Element(
			int i);  // 1584
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1584
	}
	CUtlVectorBase<CPhysicsWorld::FastRemove(
			int elem);  // 1632
	CUtlVectorBase<CPhysicsWorld::FindAndFastRemove(
				CPhysicsWorld* const& src);  // 164
} /* size: 108, variables: 1, inline expansions: 6 (154 bytes) */

// <00A06661> vphysics2/physicsinterface.cpp:168
// function call: 1
void CPhysicsSystem::NumWorlds()
{
	CUtlVectorBase<CPhysicsWorld::Count(); // 170
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00A065C1> vphysics2/physicsinterface.cpp:173
// function calls: 2
void CPhysicsSystem::GetWorld(int nWorld)
{
	CUtlMemory<CPhysicsWorld::operator[](
			int i);  // 588
	CUtlVectorBase<CPhysicsWorld::operator[](
			int i);  // 175
} /* size: 16, inline expansions: 2 (6 bytes) */

// <00A1B783> vphysics2/physicsinterface.cpp:178
void CPhysicsSystem::GetSurfacePropertyController()
{
} /* size: 9 */

// <00A1B898> vphysics2/physicsinterface.cpp:183
void CPhysicsSystem::AddDataReference(CPhysAggregateData* pData)
{
} /* size: 12 */

// <00A1B8EC> vphysics2/physicsinterface.cpp:188
void CPhysicsSystem::ReleaseDataReference(CPhysAggregateData* pData)
{
} /* size: 12 */

// <00A06331> vphysics2/physicsinterface.cpp:193
// variable: 1
// function calls: 5
void CPhysicsSystem::CreateAggregateDataFromDiskData(VPhysXAggregateData_t* pDiskDataRoot)
{
	CPhysAggregateData* pNewAggData; // 195
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 110
	CPhysAggregateDataHandle::CPhysAggregateDataHandle(
				CPhysAggregateData* pData);  // 199
	CPhysicsSystem::AddDataReference(
			CPhysAggregateData* pData);  // 209
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 110
	CPhysAggregateDataHandle::CPhysAggregateDataHandle(
				CPhysAggregateData* pData);  // 202
} /* size: 195, variables: 1, inline expansions: 5 (114 bytes) */

// <00A05543> vphysics2/physicsinterface.cpp:205
// variables: 11
// function calls: 52
void GatherExtrefsFromPhysicsLegacyKeys(CPhysAggregateData* pAggData, ResourceHandle_t hReferencingResource, IRD_RegisterResourceDataUtils* pRegisterUtils)
{
	KeyValues3 modelKV3; // 210
	CUtlSymbolTable resourceNames; // 213
	{
		CKeyValues3Iterator it; // 214
		{
			const char* pResourceName; // 218
			CKeyValues3Iterator::operator->(); // 218
		}
		CKeyValues3Iterator::operator->(); // 216
		KeyValues3::GetAllFlags(); // 892
		KeyValues3::HasFlag(
			KeyValues3Flag_t nFlag);  // 216
		RemoveAll(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 1798
		AlignedByteArrayExplicit_t<4, CKeyValues3Iterator::StackEntry_t, 8>::Base(); // 237
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::IsExternallyAllocated(); // 577
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::ConvertToExternalMemory(
					StackEntry_t* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<CKeyValues3Iterator::StackEntry_t, int>::Purge_FixedGrowable(
					StackEntry_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<CKeyValues3Iterator::StackEntry_t, int>::Purge_FixedGrowable(
					StackEntry_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
		ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 1800
		Purge(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 560
		ValidateAlignment<CKeyValues3Iterator::StackEntry_t>(void); // 508
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Purge(); // 903
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Purge(); // 510
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<CKeyValues3Iterator::StackEntry_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int>::~CUtlMemoryFixedGrowable(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 478
		CUtlVectorFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4>::~CUtlVectorFixedGrowable(); // 284
		CKeyValues3Iterator::~CKeyValues3Iterator(); // 221
	}
	{
		UtlSymId_t iResource; // 225
		{
			const char* pResourceName; // 227
			CStrongHandleVoid* pHandle; // 228
			CUtlSymbol::CUtlSymbol(
					UtlSymId_t id);  // 227
			CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::operator[](
					int i);  // 228
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 229
		}
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 225
	}
	V_isempty(const char* pszString); // 207
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 223
	{
		int nCurCount; // 186
		CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::Count(); // 186
		{
			size_t nNeeded; // 172
			size_t nHave; // 173
			GetSize(void* pMem); // 173
			Realloc(void* pMem,
				size_t nSize);  // 177
		}
		Alloc(size_t nSize); // 166
		CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::EnsureCapacity(
				int num);  // 152
		CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::EnsureCapacity(
				int num);  // 187
		CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::Element(
			int i);  // 195
		CStrongHandle<ResourceBindingVoid_t>::CStrongHandle(); // 266
		CStrongHandleVoid::CStrongHandleVoid(); // 1479
		Construct<CStrongHandleVoid>(CStrongHandleVoid* pMemory); // 195
	}
	CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::EnsureCount(
			int num);  // 182
	CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::Count(); // 230
	{
		int i; // 232
		CStrongHandle<ResourceBindingVoid_t>::~CStrongHandle(); // 262
		CStrongHandleVoid::~CStrongHandleVoid(); // 1526
		Destruct<CStrongHandleVoid>(CStrongHandleVoid* pMemory); // 234
	}
	Free(void* pMem); // 239
	CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::RemoveAll(); // 201
	CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::EnsureCount(
			int num);  // 223
} /* size: 1037, variables: 2, inline expansions: 8 (805 bytes) */

// <00A04360> vphysics2/physicsinterface.cpp:233
// variables: 4
// function calls: 76
void CPhysicsSystem::CreateAggregateDataFromEmbeddedDiskData(const EmbeddedPhysicsInfo_t& embeddedPhysicsInfo)
{
	VPhysXAggregateData_t* pDiskData; // 240
	CPhysAggregateDataHandle pNewAggData; // 241
	{
	}
	{
		CKV3TransferLoadContext loadCtx; // 271
		CKV3Transfer_ResourceLoadInterface resourceLoadInterface; // 272
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
		VPhysXAggregateData_t::VPhysXAggregateData_t(); // 269
		IKV3TransferInterface_ResourceLoad::IKV3TransferInterface_ResourceLoad(); // 19
		ResourceId_t::ResourceId_t(); // 19
		CKV3Transfer_ResourceLoadInterface::CKV3Transfer_ResourceLoadInterface(
							IRD_RegisterResourceDataUtils* pDataUtils,
							ResourceHandle_t hOriginatingResource,
							ResourceId_t nOriginatingResourceId);  // 272
		CKV3TransferContextBase::AddInterface<CKV3Transfer_ResourceLoadInterface>(
								CKV3Transfer_ResourceLoadInterface* pInterface);  // 273
		CUtlStack<const KeyValues3::Count(); // 413
		CKV3TransferLoadContext::LoadClassInstance<VPhysXAggregateData_t>(
							VPhysXAggregateData_t* pClassInstance,
							const KeyValues3* pNestedValue);  // 275
	}
	CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>::PerformKV3Transfer(
				ResourceHandle_t hParentResource,
				ResourceId_t nParentResourceId,
				IRD_RegisterResourceDataUtils* pUtils);  // 235
	{
	}
	CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>::TakeControlOfData(); // 240
	CPhysAggregateDataHandle::Get(); // 243
	CPhysAggregateDataHandle::CPhysAggregateDataHandle(
				CPhysAggregateDataHandle& rhs);  // 245
	CPhysAggregateDataHandle::Clear(); // 115
	CPhysAggregateDataHandle::~CPhysAggregateDataHandle(); // 246
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 110
	CPhysAggregateDataHandle::CPhysAggregateDataHandle(
				CPhysAggregateData* pData);  // 237
} /* size: 0, variables: 2, inline expansions: 8 (973 bytes) */

// <00A0428B> vphysics2/physicsinterface.cpp:248
// variables: 2
void CPhysicsSystem::StepSimulation(IPhysicsWorld** ppWorlds, int nWorldCount, float flSubstepTime, int nSubsteps)
{
	{
		int nWorld; // 250
		{
			CPhysicsWorld* pWorld; // 252
		}
	}
} /* size: 81 */

// <00A21755> vphysics2/physicsinterface.cpp:257
// variable: 1
// function calls: 3
void CPhysicsSystem::CreatePhysicsMaterial(const CPhysSurfaceProperties* pSurface)
{
	RnMaterial_t material; // 264
	RnMaterial_t::RnMaterial_t(); // 264
	CPhysicsSystem::GetSurfacePropertyController(); // 261
	CPhysicsSurfacePropertyManager::GetDefaultSurfaceProperties(); // 261
} /* size: 178, variables: 1, inline expansions: 3 (17 bytes) */

// <00A04228> vphysics2/physicsinterface.cpp:257
// variable: 1
void CPhysicsSystem::CreatePhysicsMaterial(const CPhysSurfaceProperties* pSurface)
{
	RnMaterial_t material; // 264
} /* size: 0, variables: 1 */

// <00A040F5> vphysics2/physicsinterface.cpp:275
// variables: 2
// function calls: 3
void CPhysicsSystem::GetPhysicsMaterial(CUtlStringToken materialIndex, RnMaterial_t& material)
{
	const IPhysSurfacePropertyController* pSurfaceController; // 277
	const CPhysSurfaceProperties* pSurfaceProperty; // 278
	CPhysicsSystem::GetSurfacePropertyController(); // 277
	RnMaterial_t::RnMaterial_t(); // 264
	CPhysicsSystem::CreatePhysicsMaterial(
				const CPhysSurfaceProperties* pSurface);  // 284
} /* size: 157, variables: 2, inline expansions: 3 (22 bytes) */

// <00A03987> vphysics2/physicsinterface.cpp:288
// variable: 1
// function calls: 27
void CPhysicsSystem::HullCreateBox(const Vector& vExtent, const Vector& vCenter, RnHull_t* pPreallocatedHull)
{
	Vector pvVertexBase; // 290
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 291
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 291
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 295
	Vector::operator=(
			const Vector& vOther);  // 291
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 292
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 292
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 293
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 293
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 294
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 294
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 295
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 296
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 296
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 297
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 297
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 298
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 298
} /* size: 297, variables: 1, inline expansions: 27 (222 bytes) */

// <00A03964> vphysics2/physicsinterface.cpp:302
inline Vector AsVector(const qhVector3& V)
{
} /* size: 0 */

// <00A038E0> vphysics2/physicsinterface.cpp:307
// variables: 6
void EdgeSort(CUtlVectorFixedGrowable<const qhHalfEdge*, 128>& halfEdges)
{
	const char   __FUNCTION__; // 57510
	{
		int nEdge; // 309
		{
			const qhHalfEdge* pEdge; // 311
			{
				int nTwin; // 312
				{
					const qhHalfEdge* pTwin; // 314
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 317
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <00A03857> vphysics2/physicsinterface.cpp:326
// variables: 7
matrix3x4_t Steiner(float flMass, const Vector& vOrigin)
{
	float Ixx; // 328
	float Iyy; // 329
	float Izz; // 330
	float Ixy; // 331
	float Ixz; // 332
	float Iyz; // 333
	matrix3x4_t out; // 335
} /* size: 0, variables: 7 */

// <00A03640> vphysics2/physicsinterface.cpp:343
// variables: 40
void BuildInertia(RnHull_t* pHull)
{
	float vol; // 345
	float cx; // 346
	float cy; // 346
	float cz; // 346
	float xx; // 348
	float xy; // 348
	float xz; // 348
	float yy; // 349
	float yz; // 349
	float zz; // 349
	const Vector  c0; // 351
	const float  inv4V; // 400
	float mass; // 401
	const Vector  relCenter; // 403
	const Vector  worldCenter; // 404
	const float  s; // 406
	matrix3x4_t inertia; // 408
	{
		int f; // 353
		{
			const RnHalfEdge_t* e1; // 355
			const RnHalfEdge_t* e2; // 356
			const RnHalfEdge_t* e3; // 357
			const Vector  v1; // 359
			const float  v1x; // 360
			const float  v1y; // 360
			const float  v1z; // 360
			{
				const Vector  v2; // 364
				const Vector  v3; // 365
				const float  v2x; // 367
				const float  v2y; // 367
				const float  v2z; // 367
				const float  v3x; // 368
				const float  v3y; // 368
				const float  v3z; // 368
				const float  cxp; // 370
				const float  cyp; // 371
				const float  czp; // 372
				const float  det; // 374
				const float  v4x; // 378
				const float  v4y; // 379
				const float  v4z; // 380
			}
		}
	}
} /* size: 0, variables: 17 */

// <009FED93> vphysics2/physicsinterface.cpp:430
// variables: 56
// function calls: 311
RnHull_t* HullFinalCreate(const qhConvex* pConvex, RnHull_t* pPreallocatedHull)
{
	CUtlVectorFixedGrowable<const qhVertex*, 32> vertices; // 432
	CUtlVectorFixedGrowable<const qhFace*, 32> faces; // 438
	CUtlVectorFixedGrowable<const qhHalfEdge*, 128> halfEdges; // 439
	RnHull_t* pHull; // 455
	Vector vCentroid; // 463
	AABB_t bounds; // 464
	float flMaxRadius; // 465
	float flMaxEdgeCosAngle; // 484
	float flMinMotionThickness; // 502
	{
		const qhVertex* v; // 433
		qhList<qhVertex>::End(); // 433
		qhList<qhVertex>::Begin(); // 433
		CUtlMemory<const qhVertex::Base(); // 112
		CUtlVectorBase<const qhVertex::Base(); // 368
		CUtlVectorBase<const qhVertex::ResetDbgInfo(); // 824
		CUtlMemory<const qhVertex::IsGrowable(); // 823
		CUtlMemory<const qhVertex::IsExternallyAllocated(); // 859
		CUtlMemory<const qhVertex::IsExternallyAllocated(); // 861
		CUtlMemory<const qhVertex::Grow(
			int num);  // 806
		CUtlVectorBase<const qhVertex::GrowMemory(
				int num);  // 1198
		CUtlMemory<const qhVertex::operator[](
				int i);  // 602
		CUtlVectorBase<const qhVertex::Element(
			int i);  // 1201
		CopyConstruct<const qhVertex*>(const qhVertex ** pMemory,
						const qhVertex* const& src);  // 1201
		CUtlVectorBase<const qhVertex::AddToTail(
				const qhVertex* const& src);  // 434
	}
	{
		const qhFace* f; // 440
		{
			const qhHalfEdge* e; // 443
			CUtlMemory<const qhHalfEdge::Base(); // 112
			CUtlVectorBase<const qhHalfEdge::Base(); // 368
			CUtlVectorBase<const qhHalfEdge::ResetDbgInfo(); // 824
			CUtlMemory<const qhHalfEdge::IsGrowable(); // 823
			CUtlMemory<const qhHalfEdge::IsExternallyAllocated(); // 859
			CUtlMemory<const qhHalfEdge::IsExternallyAllocated(); // 861
			CUtlMemory<const qhHalfEdge::Grow(
				int num);  // 806
			CUtlVectorBase<const qhHalfEdge::GrowMemory(
					int num);  // 1198
			CUtlMemory<const qhHalfEdge::operator[](
					int i);  // 602
			CUtlVectorBase<const qhHalfEdge::Element(
				int i);  // 1201
			CopyConstruct<const qhHalfEdge*>(const qhHalfEdge ** pMemory,
							const qhHalfEdge* const& src);  // 1201
			CUtlMemory<const qhHalfEdge::NumAllocated(); // 1196
			CUtlVectorBase<const qhHalfEdge::AddToTail(
					const qhHalfEdge* const& src);  // 445
		}
		qhList<qhFace>::Begin(); // 440
		qhList<qhFace>::End(); // 440
		CUtlMemory<const qhFace::NumAllocated(); // 1196
		CUtlMemory<const qhFace::Base(); // 112
		CUtlVectorBase<const qhFace::Base(); // 368
		CUtlVectorBase<const qhFace::ResetDbgInfo(); // 824
		CUtlMemory<const qhFace::IsGrowable(); // 823
		CUtlMemory<const qhFace::IsExternallyAllocated(); // 859
		CUtlMemory<const qhFace::IsExternallyAllocated(); // 861
		CUtlMemory<const qhFace::Grow(
			int num);  // 806
		CUtlVectorBase<const qhFace::GrowMemory(
				int num);  // 1198
		CUtlMemory<const qhFace::operator[](
				int i);  // 602
		CUtlVectorBase<const qhFace::Element(
			int i);  // 1201
		CopyConstruct<const qhFace*>(const qhFace ** pMemory,
						const qhFace* const& src);  // 1201
		CUtlVectorBase<const qhFace::AddToTail(
				const qhFace* const& src);  // 442
	}
	{
		int i; // 467
		{
			Vector v; // 469
			CUtlMemory<const qhVertex::operator[](
					int i);  // 588
			CUtlVectorBase<const qhVertex::operator[](
					int i);  // 469
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 470
			AABB_t::AddPointToBounds(
					const Vector& vPoint);  // 83
			AABB_t::operator|=(
					const Vector& vPoint);  // 472
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 304
			AsVector(const qhVector3& V); // 469
			Vector::operator=(
					const Vector& vOther);  // 470
			Vector::operator+=(
					const Vector& v);  // 471
		}
		CUtlVectorBase<const qhVertex::Count(); // 467
	}
	{
		int i; // 478
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 479
		Vector::Vector(); // 1305
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 479
	}
	{
		int i; // 485
		{
			const qhHalfEdge* e; // 487
			CUtlMemory<const qhHalfEdge::operator[](
					int i);  // 588
			CUtlVectorBase<const qhHalfEdge::operator[](
					int i);  // 487
			{
				int i; // 1531
			}
			CUtlVectorBase<const qhHalfEdge::Find(
				const qhHalfEdge* const& src);  // 488
			CUtlMemory<RnHalfEdge_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator[](
					int i);  // 488
			{
				int i; // 1531
				CUtlVectorBase<const qhHalfEdge::Count(); // 1531
				CUtlMemory<const qhHalfEdge::operator[](
						int i);  // 609
				CUtlVectorBase<const qhHalfEdge::Element(
					int i);  // 1533
			}
			CUtlVectorBase<const qhHalfEdge::Find(
				const qhHalfEdge* const& src);  // 489
			CUtlMemory<RnHalfEdge_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator[](
					int i);  // 489
			{
				int i; // 1531
				CUtlVectorBase<const qhVertex::Count(); // 1531
				CUtlMemory<const qhVertex::operator[](
						int i);  // 609
				CUtlVectorBase<const qhVertex::Element(
					int i);  // 1533
			}
			CUtlVectorBase<const qhVertex::Find(
				const qhVertex* const& src);  // 490
			CUtlMemory<RnHalfEdge_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator[](
					int i);  // 490
			{
				int i; // 1531
				CUtlVectorBase<const qhFace::Count(); // 1531
				CUtlMemory<const qhFace::operator[](
						int i);  // 609
				CUtlVectorBase<const qhFace::Element(
					int i);  // 1533
			}
			CUtlVectorBase<const qhFace::Find(
				const qhFace* const& src);  // 491
			CUtlMemory<RnHalfEdge_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator[](
					int i);  // 491
		}
		CUtlVectorBase<const qhHalfEdge::Count(); // 485
	}
	{
		int i; // 496
		{
			const RnHalfEdge_t& e; // 498
			CUtlMemory<RnHalfEdge_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator[](
					int i);  // 498
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
					int i);  // 499
		}
		CUtlVectorBase<const qhHalfEdge::Count(); // 496
	}
	{
		int i; // 503
		{
			const qhFace* f; // 505
			RnPlane_t plane; // 506
			CUtlMemory<const qhFace::operator[](
					int i);  // 588
			CUtlVectorBase<const qhFace::operator[](
					int i);  // 505
			Vector::operator=(
					const Vector& vOther);  // 209
			RnPlane_t::operator=(
					const RnPlane_t  &);  // 507
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 304
			AsVector(const qhVector3& V); // 506
			{
				int i; // 1531
				CUtlVectorBase<const qhHalfEdge::Count(); // 1531
				CUtlMemory<const qhHalfEdge::operator[](
						int i);  // 609
				CUtlVectorBase<const qhHalfEdge::Element(
					int i);  // 1533
			}
			CUtlVectorBase<const qhHalfEdge::Find(
				const qhHalfEdge* const& src);  // 508
			Vector::Vector(); // 219
			Vector::operator=(
					const Vector& vOther);  // 219
			RnPlane_t::RnPlane_t(
					const Vector& n,
					float d);  // 506
			CUtlMemory<RnPlane_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::operator[](
					int i);  // 507
			CUtlMemory<RnFace_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::operator[](
					int i);  // 508
			DotProduct(const Vector& a,
					const Vector& b);  // 223
			RnPlane_t::Distance(
				const Vector& vPoint);  // 509
		}
		CUtlVectorBase<const qhFace::Count(); // 503
	}
	CUtlMemory<const qhVertex::CUtlMemory(
			const qhVertex ** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<const qhVertex::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<const qhVertex::CUtlMemoryFixedGrowable_Base(
					const qhVertex ** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, const qhVertex::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, const qhVertex::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, const qhVertex::Base(); // 231
	CUtlMemoryFixedGrowable<const qhVertex::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<const qhVertex::ResetDbgInfo(); // 530
	CUtlVectorBase<const qhVertex::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<const qhVertex::CUtlVectorFixedGrowable(
				int growSize);  // 432
	CUtlVectorBase<const qhVertex::Count(); // 435
	CUtlMemory<const qhVertex::IsExternallyAllocated(); // 577
	CUtlMemory<const qhVertex::ConvertToExternalMemory(
				const qhVertex ** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<const qhVertex::Purge_FixedGrowable(
				const qhVertex ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<const qhVertex::Purge_FixedGrowable(
				const qhVertex ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<32, const qhVertex::Base(); // 237
	CUtlMemoryFixedGrowable<const qhVertex::Purge(
		int numElements);  // 1799
	CUtlVectorBase<const qhVertex::RemoveAll(); // 1798
	CUtlMemory<const qhVertex::Base(); // 112
	CUtlVectorBase<const qhVertex::Base(); // 368
	CUtlVectorBase<const qhVertex::ResetDbgInfo(); // 1800
	CUtlVectorBase<const qhVertex::Purge(); // 560
	ValidateAlignment<const qhVertex*>(void); // 508
	CUtlMemory<const qhVertex::Purge(); // 903
	CUtlMemory<const qhVertex::Purge(); // 510
	CUtlMemory<const qhVertex::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<const qhVertex::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<const qhVertex::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<const qhVertex::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<const qhVertex::~CUtlVectorFixedGrowable(); // 516
	CUtlMemory<const qhFace::CUtlMemory(
			const qhFace ** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<const qhFace::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<const qhFace::CUtlMemoryFixedGrowable_Base(
					const qhFace ** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, const qhFace::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, const qhFace::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, const qhFace::Base(); // 231
	CUtlMemoryFixedGrowable<const qhFace::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<const qhFace::ResetDbgInfo(); // 530
	CUtlVectorBase<const qhFace::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<const qhFace::CUtlVectorFixedGrowable(
				int growSize);  // 438
	CUtlMemory<const qhHalfEdge::CUtlMemory(
			const qhHalfEdge ** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<const qhHalfEdge::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<const qhHalfEdge::CUtlMemoryFixedGrowable_Base(
					const qhHalfEdge ** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, const qhHalfEdge::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, const qhHalfEdge::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, const qhHalfEdge::Base(); // 231
	CUtlMemoryFixedGrowable<const qhHalfEdge::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<const qhHalfEdge::ResetDbgInfo(); // 530
	CUtlVectorBase<const qhHalfEdge::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<const qhHalfEdge::CUtlVectorFixedGrowable(
				int growSize);  // 439
	CUtlVectorBase<const qhFace::Count(); // 450
	CUtlVectorBase<const qhHalfEdge::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<128, const qhHalfEdge::Base(); // 237
	CUtlMemory<const qhHalfEdge::IsExternallyAllocated(); // 577
	CUtlMemory<const qhHalfEdge::ConvertToExternalMemory(
				const qhHalfEdge ** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<const qhHalfEdge::Purge_FixedGrowable(
				const qhHalfEdge ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<const qhHalfEdge::Purge_FixedGrowable(
				const qhHalfEdge ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<const qhHalfEdge::Purge(
		int numElements);  // 1799
	CUtlMemory<const qhHalfEdge::Base(); // 112
	CUtlVectorBase<const qhHalfEdge::Base(); // 368
	CUtlVectorBase<const qhHalfEdge::ResetDbgInfo(); // 1800
	CUtlVectorBase<const qhHalfEdge::Purge(); // 560
	ValidateAlignment<const qhHalfEdge*>(void); // 508
	CUtlMemory<const qhHalfEdge::Purge(); // 903
	CUtlMemory<const qhHalfEdge::Purge(); // 510
	CUtlMemory<const qhHalfEdge::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<const qhHalfEdge::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<const qhHalfEdge::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<const qhHalfEdge::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<const qhHalfEdge::~CUtlVectorFixedGrowable(); // 516
	CUtlVectorBase<const qhFace::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<32, const qhFace::Base(); // 237
	CUtlMemory<const qhFace::IsExternallyAllocated(); // 577
	CUtlMemory<const qhFace::ConvertToExternalMemory(
				const qhFace ** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<const qhFace::Purge_FixedGrowable(
				const qhFace ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<const qhFace::Purge_FixedGrowable(
				const qhFace ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<const qhFace::Purge(
		int numElements);  // 1799
	CUtlMemory<const qhFace::Base(); // 112
	CUtlVectorBase<const qhFace::Base(); // 368
	CUtlVectorBase<const qhFace::ResetDbgInfo(); // 1800
	CUtlVectorBase<const qhFace::Purge(); // 560
	ValidateAlignment<const qhFace*>(void); // 508
	CUtlMemory<const qhFace::Purge(); // 903
	CUtlMemory<const qhFace::Purge(); // 510
	CUtlMemory<const qhFace::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<const qhFace::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<const qhFace::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<const qhFace::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<const qhFace::~CUtlVectorFixedGrowable(); // 516
	CUtlVectorBase<const qhHalfEdge::Count(); // 450
	{
		int nEdge; // 309
		CUtlVectorBase<const qhHalfEdge::Count(); // 309
		{
			const qhHalfEdge* pEdge; // 311
			CUtlMemory<const qhHalfEdge::operator[](
					int i);  // 588
			CUtlVectorBase<const qhHalfEdge::operator[](
					int i);  // 311
			{
				int nTwin; // 312
				{
					const qhHalfEdge* pTwin; // 314
					{
					}
					CUtlMemory<const qhHalfEdge::operator[](
							int i);  // 588
					CUtlVectorBase<const qhHalfEdge::operator[](
							int i);  // 318
					CUtlMemory<const qhHalfEdge::operator[](
							int i);  // 588
					CUtlVectorBase<const qhHalfEdge::operator[](
							int i);  // 318
					Swap<const qhHalfEdge*>(const qhHalfEdge  *& a,
								const qhHalfEdge  *& b);  // 318
					CUtlMemory<const qhHalfEdge::operator[](
							int i);  // 588
					CUtlVectorBase<const qhHalfEdge::operator[](
							int i);  // 314
				}
			}
		}
	}
	EdgeSort(CUtlVectorFixedGrowable<const qhHalfEdge*, 128>& halfEdges); // 453
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 456
	Vector::operator=(
			const Vector& vOther);  // 457
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 457
	CUtlVectorBase<const qhVertex::Count(); // 458
	CUtlVectorBase<const qhFace::Count(); // 459
	CUtlVectorBase<const qhHalfEdge::Count(); // 460
	CUtlVectorBase<const qhFace::Count(); // 461
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 139
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 138
	AABB_t::MakeInvalid(); // 464
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 464
	Vector::operator/=(
			float fl);  // 474
	Vector::operator=(
			const Vector& vOther);  // 475
	Vector::operator=(
			const Vector& vOther);  // 17
	Vector::operator=(
			const Vector& vOther);  // 17
	AABB_t::operator=(
			const AABB_t  &);  // 476
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 494
	{
		int f; // 353
		CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Count(); // 327
		RnHull_t::GetFaceCount(); // 353
		{
			const RnHalfEdge_t* e1; // 355
			const RnHalfEdge_t* e2; // 356
			const RnHalfEdge_t* e3; // 357
			const Vector  v1; // 359
			const float  v1x; // 360
			const float  v1y; // 360
			const float  v1z; // 360
			CUtlMemory<RnHalfEdge_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator[](
					int i);  // 326
			RnHull_t::GetEdge(
				int nEdge);  // 355
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 321
			RnHull_t::GetVertex(
					int nVertex);  // 359
			CUtlMemory<RnFace_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::operator[](
					int i);  // 328
			RnHull_t::GetFace(
				int nFace);  // 355
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 359
			CUtlMemory<RnHalfEdge_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator[](
					int i);  // 326
			RnHull_t::GetEdge(
				int nEdge);  // 356
			CUtlMemory<RnHalfEdge_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator[](
					int i);  // 326
			RnHull_t::GetEdge(
				int nEdge);  // 357
			{
				const Vector  v2; // 364
				const Vector  v3; // 365
				const float  v2x; // 367
				const float  v2y; // 367
				const float  v2z; // 367
				const float  v3x; // 368
				const float  v3y; // 368
				const float  v3z; // 368
				const float  cxp; // 370
				const float  cyp; // 371
				const float  czp; // 372
				const float  det; // 374
				const float  v4x; // 378
				const float  v4y; // 379
				const float  v4z; // 380
				CUtlMemory<Vector, int>::operator[](
						int i);  // 595
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
						int i);  // 321
				RnHull_t::GetVertex(
						int nVertex);  // 364
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 364
				CUtlMemory<Vector, int>::operator[](
						int i);  // 595
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
						int i);  // 321
				RnHull_t::GetVertex(
						int nVertex);  // 365
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 365
				CUtlMemory<RnHalfEdge_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator[](
						int i);  // 326
				RnHull_t::GetEdge(
					int nEdge);  // 395
			}
		}
	}
	matrix3x4_t::matrix3x4_t(); // 335
	Steiner(float flMass,
		const Vector& vOrigin);  // 423
	matrix3x4_t::SetToZero(); // 409
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 404
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 403
	matrix3x4_t::matrix3x4_t(); // 408
	{
		int nRow; // 213
		{
			int nCol; // 215
		}
	}
	matrix3x4_t::operator-=(
			const matrix3x4_t& other);  // 423
	matrix3x4_t::SetOrigin(
			const Vector& p);  // 424
	BuildInertia(RnHull_t* pHull); // 513
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 298
	CUtlMemory<RnPlane_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<RnPlane_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::ResetDbgInfo(); // 530
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
	RnHull_t::RnHull_t(); // 455
} /* size: 0, variables: 9, inline expansions: 153 (6809 bytes) */

// <009FEA5D> vphysics2/physicsinterface.cpp:518
// variables: 3
// function calls: 9
void CPhysicsSystem::HullCreate(int nVertexCount, const Vector* pvVertexBase, RnHull_t* pPreallocatedHull, RnHullSimplificationParams_t* pSimplificationParams)
{
	HullSimplificationParams_t params; // 520
	CQuickHullBuilder hullBuilder; // 523
	const qhConvex* pConvex; // 527
	RnHullSimplificationParams_t::RnHullSimplificationParams_t(
					HullSimplificationAlgorithm_t nAlgo);  // 30
	HullSimplificationParams_t::HullSimplificationParams_t(); // 520
	CUtlMemory<qhConvex::ValidateGrowSize(); // 475
	CUtlMemory<qhConvex::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<qhConvex::ResetDbgInfo(); // 530
	CUtlVectorBase<qhConvex::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<qhConvex::CUtlVector(); // 101
	CQuickHullBuilder::CQuickHullBuilder(); // 523
	RnHullSimplificationParams_t::RnHullSimplificationParams_t(
					HullSimplificationAlgorithm_t nAlgo);  // 521
} /* size: 242, variables: 3, inline expansions: 9 (131 bytes) */

// <00A1F2E5> vphysics2/physicsinterface.cpp:534
// function calls: 52
void CPhysicsSystem::HullDestroy(RnHull_t* pHull)
{
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
	RnHull_t::~RnHull_t(); // 538
	CPhysicsSystem::HullDestroy(
			RnHull_t* pHull);  // 534
} /* size: 209, inline expansions: 52 (1080 bytes) */

// <009FEA03> vphysics2/physicsinterface.cpp:534
void CPhysicsSystem::HullDestroy(RnHull_t* pHull)
{
} /* size: 0 */

// <009FD996> vphysics2/physicsinterface.cpp:542
// function calls: 78
void CPhysicsSystem::HullClone(RnHull_t* pTarget, const RnHull_t& source)
{
	Vector::operator=(
			const Vector& vOther);  // 544
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 573
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 574
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
			const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 546
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 573
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 574
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 574
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 565
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 547
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Count(); // 573
	CUtlMemory<RnPlane_t, int>::Base(); // 112
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Base(); // 102
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::begin(); // 574
	CUtlMemory<RnPlane_t, int>::Base(); // 113
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Base(); // 105
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Count(); // 105
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	RnPlane_t::operator=(
			const RnPlane_t  &);  // 209
	UtlTraitsCopyRange<RnPlane_t>(const RnPlane_t* pFrom,
					const RnPlane_t* pFromEnd,
					RnPlane_t* pTo);  // 200
	UtlTraitsCopyRange<RnPlane_t>(const RnPlane_t* pFrom,
					const RnPlane_t* pFromEnd,
					RnPlane_t* pTo);  // 574
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::operator=(
			const CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >& other);  // 565
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::operator=(
			const CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >& other);  // 452
	CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> >::operator=(
			const CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> >& src);  // 548
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Count(); // 573
	CUtlMemory<RnHalfEdge_t, int>::Base(); // 112
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Base(); // 102
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::begin(); // 574
	CUtlMemory<RnHalfEdge_t, int>::Base(); // 113
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Base(); // 105
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Count(); // 105
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 173
	UtlTraitsCopyRange<RnHalfEdge_t>(const RnHalfEdge_t* pFrom,
					const RnHalfEdge_t* pFromEnd,
					RnHalfEdge_t* pTo);  // 574
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator=(
			const CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >& other);  // 565
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator=(
			const CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >& other);  // 452
	CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator=(
			const CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >& src);  // 549
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Count(); // 573
	CUtlMemory<RnFace_t, int>::Base(); // 112
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Base(); // 102
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::begin(); // 574
	CUtlMemory<RnFace_t, int>::Base(); // 113
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Base(); // 105
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Count(); // 105
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 173
	UtlTraitsCopyRange<RnFace_t>(const RnFace_t* pFrom,
					const RnFace_t* pFromEnd,
					RnFace_t* pTo);  // 574
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::operator=(
			const CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >& other);  // 565
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::operator=(
			const CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >& other);  // 452
	CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> >::operator=(
			const CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> >& src);  // 550
	Vector::operator=(
			const Vector& vOther);  // 17
	Vector::operator=(
			const Vector& vOther);  // 17
	AABB_t::operator=(
			const AABB_t  &);  // 555
} /* size: 867, inline expansions: 78 (2882 bytes) */

// <00A1FCD9> vphysics2/physicsinterface.cpp:559
// function calls: 52
void CPhysicsSystem::MeshDestroy(RnMesh_t* pMesh)
{
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 632
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 632
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnTriangle_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnTriangle_t, int>::Purge(); // 903
	CUtlMemory<RnTriangle_t, int>::Purge(); // 1799
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Purge(); // 560
	ValidateAlignment<RnTriangle_t>(void); // 508
	CUtlMemory<RnTriangle_t, int>::Purge(); // 510
	CUtlMemory<RnTriangle_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::~CUtlVector(); // 632
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 632
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnNode_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnNode_t, int>::Purge(); // 903
	CUtlMemory<RnNode_t, int>::Purge(); // 1799
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Purge(); // 560
	ValidateAlignment<RnNode_t>(void); // 508
	CUtlMemory<RnNode_t, int>::Purge(); // 510
	CUtlMemory<RnNode_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >::~CUtlVector(); // 632
	RnMesh_t::~RnMesh_t(); // 563
	CPhysicsSystem::MeshDestroy(
			RnMesh_t* pMesh);  // 559
} /* size: 217, inline expansions: 52 (1103 bytes) */

// <009FD8D4> vphysics2/physicsinterface.cpp:559
void CPhysicsSystem::MeshDestroy(RnMesh_t* pMesh)
{
} /* size: 0 */

// <009FC8CF> vphysics2/physicsinterface.cpp:567
// variables: 5
// function calls: 63
void CPhysicsSystem::MeshCreate(int nTriangleCount, const uint* pIndexBase, const uint8* pMaterialBase, int nVertexCount, const Vector* pVertexBase, RnMesh_t* pPreallocatedMesh, float flSimplifyMeshMaxError)
{
	b3MeshDef def; // 569
	b3MeshData* meshData; // 578
	RnMesh_t* pMesh; // 582
	{
		int i; // 601
		{
			const b3MeshNode& node; // 603
			b3GetMeshNodes(const b3MeshData* mesh); // 603
			CUtlMemory<RnNode_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::operator[](
					int i);  // 604
		}
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 583
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 585
	Vector::operator=(
			const Vector& vOther);  // 585
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 586
	Vector::operator=(
			const Vector& vOther);  // 586
	b3GetMeshNodes(const b3MeshData* mesh); // 587
	CUtlMemory<RnNode_t, int>::Base(); // 112
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Base(); // 102
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::begin(); // 1344
	UtlTraitsCopyRange<RnNode_t>(const RnNode_t* pFrom,
					const RnNode_t* pFromEnd,
					RnNode_t* pTo);  // 1344
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::CopyArray(
			const RnNode_t* pArray,
			int size);  // 587
	b3GetMeshVertices(const b3MeshData* mesh); // 588
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 1344
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 1344
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CopyArray(
			const Vector* pArray,
			int size);  // 588
	b3GetMeshTriangles(const b3MeshData* mesh); // 589
	CUtlMemory<RnTriangle_t, int>::Base(); // 112
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Base(); // 102
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::begin(); // 1344
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 173
	UtlTraitsCopyRange<RnTriangle_t>(const RnTriangle_t* pFrom,
					const RnTriangle_t* pFromEnd,
					RnTriangle_t* pTo);  // 1344
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::CopyArray(
			const RnTriangle_t* pArray,
			int size);  // 589
	b3GetMeshFlags(const b3MeshData* mesh); // 590
	b3GetMeshMaterialIndices(const b3MeshData* mesh); // 594
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 598
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<RnNode_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<RnNode_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >::CUtlVector(); // 632
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 632
	CUtlMemory<RnTriangle_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<RnTriangle_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::CUtlVector(); // 632
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 632
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 632
	RnMesh_t::RnMesh_t(); // 582
} /* size: 1024, variables: 3, inline expansions: 60 (1567 bytes) */

// <009FBC5C> vphysics2/physicsinterface.cpp:612
// function calls: 58
void CPhysicsSystem::MeshClone(RnMesh_t* pTarget, const RnMesh_t& source)
{
	Vector::operator=(
			const Vector& vOther);  // 614
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Count(); // 573
	CUtlMemory<RnNode_t, int>::Base(); // 112
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Base(); // 102
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::begin(); // 574
	CUtlMemory<RnNode_t, int>::Base(); // 113
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Base(); // 105
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Count(); // 105
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::end(); // 574
	UtlTraitsCopyRange<RnNode_t>(const RnNode_t* pFrom,
					const RnNode_t* pFromEnd,
					RnNode_t* pTo);  // 574
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::operator=(
			const CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >& other);  // 565
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::operator=(
			const CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >& other);  // 452
	CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >::operator=(
			const CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >& src);  // 616
	Vector::operator=(
			const Vector& vOther);  // 615
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 573
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 574
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
			const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 617
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 573
	CUtlMemory<RnTriangle_t, int>::Base(); // 112
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Base(); // 102
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::begin(); // 574
	CUtlMemory<RnTriangle_t, int>::Base(); // 113
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Base(); // 105
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 105
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 173
	UtlTraitsCopyRange<RnTriangle_t>(const RnTriangle_t* pFrom,
					const RnTriangle_t* pFromEnd,
					RnTriangle_t* pTo);  // 574
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::operator=(
			const CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& other);  // 565
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::operator=(
			const CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& other);  // 452
	CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::operator=(
			const CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& src);  // 618
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 573
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 574
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 574
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 565
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 619
} /* size: 410, inline expansions: 58 (1435 bytes) */

// <009FB9A2> vphysics2/physicsinterface.cpp:622
// variables: 4
// function calls: 9
void CPhysicsSystem::ComputeMass(const RnSphere_t* pSphere, const RnMaterial_t& material)
{
	float flDensity; // 624
	float flMass; // 625
	float Ixx; // 631
	RnMassProperties_t out; // 633
	matrix3x4_t::matrix3x4_t(); // 129
	Vector::Vector(); // 129
	matrix3x4_t::SetToIdentity(); // 130
	Vector::operator=(
			const Vector& vOther);  // 131
	RnMassProperties_t::RnMassProperties_t(); // 633
	Vector::operator=(
			const Vector& vOther);  // 635
	matrix3x4_t::SetToIdentity(); // 2664
	matrix3x4_t::InitFromDiagonal(
			const Vector& vDiagonal);  // 636
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 636
} /* size: 170, variables: 4, inline expansions: 9 (84 bytes) */

// <009FB96D> vphysics2/physicsinterface.cpp:640
// variable: 1
Vector SphereInertia(float m, float r)
{
	float I; // 642
} /* size: 0, variables: 1 */

// <009FB91E> vphysics2/physicsinterface.cpp:646
// variables: 2
Vector CylinderInertia(float m, float r, float h)
{
	float Ixx; // 648
	float Izz; // 649
} /* size: 0, variables: 2 */

// <009FAAD4> vphysics2/physicsinterface.cpp:654
// variables: 17
// function calls: 56
void CPhysicsSystem::ComputeMass(const RnCapsule_t* pCapsule, const RnMaterial_t& material)
{
	Vector vCenter1; // 656
	Vector vCenter2; // 657
	float flHeight; // 658
	float flDensity; // 659
	float flSphereMass; // 660
	float flCylinderMass; // 661
	float flMass; // 670
	Vector I; // 672
	float flSteiner; // 674
	matrix3x4_t xRotation; // 678
	Vector vCenter; // 681
	matrix3x4_t inertia; // 690
	RnMassProperties_t mass; // 693
	{
		float flSphereVolume; // 664
		float flCylinderVolume; // 665
	}
	{
		Vector vAxis; // 685
		Quaternion qRotation; // 686
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 685
		Vector::Normalized(); // 685
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 1880
		Quaternion::Quaternion(); // 1878
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 1880
		Vector::LengthSqr(); // 1881
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 1883
		DotProduct(const Vector& a,
				const Vector& b);  // 1884
		Vector::operator=(
				const Vector& vOther);  // 1883
		ShortestArc(const Vector& v1,
				const Vector& v2);  // 686
		matrix3x4_t::InitFromQuaternion(
					const Quaternion& orientation,
					const Vector& vPosition);  // 2671
		matrix3x4_t::InitFromQuaternion(
					const Quaternion& orientation);  // 687
	}
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 681
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 643
	SphereInertia(float m,
			float r);  // 672
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 681
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
		const Vector& vOther);  // 658
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 651
	CylinderInertia(float m,
			float r,
			float h);  // 672
	matrix3x4_t::SetToIdentity(); // 679
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 672
	matrix3x4_t::matrix3x4_t(); // 678
	matrix3x4_t::matrix3x4_t(); // 690
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 691
	matrix3x4_t::SetToIdentity(); // 2664
	matrix3x4_t::InitFromDiagonal(
			const Vector& vDiagonal);  // 691
	matrix3x4_t::SetToIdentity(); // 130
	matrix3x4_t::matrix3x4_t(); // 129
	Vector::Vector(); // 129
	Vector::operator=(
			const Vector& vOther);  // 131
	RnMassProperties_t::RnMassProperties_t(); // 693
	RotateInertiaInPlace(const matrix3x4_t& R,
				matrix3x4_t& I);  // 696
	Vector::operator=(
			const Vector& vOther);  // 699
} /* size: 1797, variables: 13, inline expansions: 36 (1326 bytes) */

// <009FA5FA> vphysics2/physicsinterface.cpp:704
// variables: 2
// function calls: 19
void CPhysicsSystem::ComputeMass(int nVertices, const Vector* pVertices, const RnMaterial_t& material)
{
	b3Hull* pHull; // 706
	RnMassProperties_t out; // 711
	matrix3x4_t::SetToIdentity(); // 130
	matrix3x4_t::matrix3x4_t(); // 129
	Vector::Vector(); // 129
	Vector::operator=(
			const Vector& vOther);  // 131
	RnMassProperties_t::RnMassProperties_t(); // 711
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 713
	Vector::operator=(
			const Vector& vOther);  // 713
	b3MulSM(float s,
		b3Matrix3 a);  // 1052
	operator*(float s,
			b3Matrix3 a);  // 714
	b3AddMM(b3Matrix3 a,
		b3Matrix3 b);  // 1042
	operator+(b3Matrix3 a,
			b3Matrix3 b);  // 714
	matrix3x4_t::matrix3x4_t(); // 98
	B3Cast<matrix3x4_t, b3Matrix3>(const b3Matrix3& v); // 714
	matrix3x4_t::matrix3x4_t(); // 129
	Vector::Vector(); // 129
	matrix3x4_t::SetToIdentity(); // 130
	Vector::operator=(
			const Vector& vOther);  // 131
	RnMassProperties_t::RnMassProperties_t(); // 709
} /* size: 539, variables: 2, inline expansions: 19 (476 bytes) */

// <009FA223> vphysics2/physicsinterface.cpp:719
// variables: 2
// function calls: 12
void CPhysicsSystem::CastShapeAgainstShape(PhysicsTrace_t& out, const Vector& vStart, const Vector& vDelta, const Vector* pPointsA, int nPointsA, float flRadiusA, const Vector* pPointsB, int nPointsB, float flRadiusB)
{
	b3ShapeCastPairInput pairInput; // 721
	b3CastOutput output; // 730
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 726
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 725
	Vector::operator=(
			const Vector& vOther);  // 735
	Vector::operator=(
			const Vector& vOther);  // 736
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 735
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 736
} /* size: 274, variables: 2, inline expansions: 12 (75 bytes) */

// <009F9DDF> vphysics2/physicsinterface.cpp:739
// variables: 8
// function calls: 13
void CPhysicsSystem::CastHeightField(Vector& vOut, const Vector& vRayStart, const Vector& vRayEnd, uint16_t* Heights, int SizeX, int SizeY, float SizeScale, float HeightScale)
{
	b3HeightField heightField; // 741
	float lowerHeightBound; // 750
	float upperHeightBound; // 751
	b3Vec3 start; // 763
	b3Vec3 end; // 764
	b3RayCastInput input; // 768
	b3CastOutput output; // 772
	{
		int i; // 753
	}
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 770
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 763
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 764
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 773
	Vector::operator=(
			const Vector& vOther);  // 773
} /* size: 429, variables: 7, inline expansions: 13 (94 bytes) */

// <009F9C50> vphysics2/physicsinterface.cpp:779
// variables: 4
// function calls: 5
void CPhysicsSystem::UpdateSurfaceProperties(const CPhysSurfaceProperties* pSurfaceProperties)
{
	{
		CPhysicsWorld* pWorld; // 781
		CUtlVector<CPhysicsWorld*, CUtlMemory<CPhysicsWorld*, int> >& __for_range; // 13813
		iterator __for_begin; // 48920
		iterator __for_end; // 48920
		CUtlMemory<CPhysicsWorld::Base(); // 112
		CUtlVectorBase<CPhysicsWorld::Base(); // 102
		CUtlVectorBase<CPhysicsWorld::begin(); // 781
		CUtlVectorBase<CPhysicsWorld::Count(); // 104
		CUtlVectorBase<CPhysicsWorld::end(); // 781
	}
} /* size: 71 */

// <009EF81A> vphysics2/physicsinterface.cpp:787
void DebugMeshInfo_t::DebugMeshInfo_t()
{
} /* size: 0 */

// <009EF7FD> vphysics2/physicsinterface.cpp:787
inline void DebugMeshInfo_t::DebugMeshInfo_t()
{
} /* size: 0 */

// <009D0FAF> vphysics2/physicsinterface.cpp:787
// member function: 1
// member variables: 5
// struct size: 112
struct DebugMeshInfo_t {
	matrix3x4_t m_BindPose; /* 0 48 */
	matrix3x4_t m_SortTransform; /* 48 48 */
	int m_nRenderBone; /* 96 4 */
	int m_nBodyPart; /* 100 4 */
	const class CPhysAggregateData * m_pAggregateShape; /* 104 8 */
	void DebugMeshInfo_t(DebugMeshInfo_t* );
};

// <009F9C26> vphysics2/physicsinterface.cpp:796
const VertexColor_t  ScaleColor(const VertexColor_t a, const VertexColor_t b)
{
} /* size: 0 */

// <009F8403> vphysics2/physicsinterface.cpp:806
void DebugMeshInfoList_t::DebugMeshInfoList_t()
{
} /* size: 0 */

// <009F83E6> vphysics2/physicsinterface.cpp:806
inline void DebugMeshInfoList_t::DebugMeshInfoList_t()
{
} /* size: 0 */

// <009F83CF> vphysics2/physicsinterface.cpp:806
void DebugMeshInfoList_t::~DebugMeshInfoList_t()
{
} /* size: 0 */

// <009F83B2> vphysics2/physicsinterface.cpp:806
inline void DebugMeshInfoList_t::~DebugMeshInfoList_t()
{
} /* size: 0 */

// <009D28B2> vphysics2/physicsinterface.cpp:806
// member functions: 4
// member variable: 1
// struct size: 7,200
struct DebugMeshInfoList_t : public CUtlVectorFixedGrowable<DebugMeshInfo_t, 64> {
public:
	/* class CUtlVectorFixedGrowable<DebugMeshInfo_t, 64> <ancestor>; */ /* 0 7200 */
	/* vphysics2/physicsinterface.cpp:808 */
	void AppendDebugMeshInfo(DebugMeshInfoList_t* , uint, const CModelSkeleton* , const CPhysAggregateData* , uint, const CTransform* );
	/* vphysics2/physicsinterface.cpp:809 */
	void Sort(DebugMeshInfoList_t* , const Vector& );
	void ~DebugMeshInfoList_t(DebugMeshInfoList_t* );
	void DebugMeshInfoList_t(DebugMeshInfoList_t* );
} __attribute__((__aligned__(8)));

// <009F9BBF> vphysics2/physicsinterface.cpp:812
void DebugMeshInfoPred_t::DebugMeshInfoPred_t()
{
} /* size: 0 */

// <009F9BA2> vphysics2/physicsinterface.cpp:812
inline void DebugMeshInfoPred_t::DebugMeshInfoPred_t()
{
} /* size: 0 */

// <009D2965> vphysics2/physicsinterface.cpp:812
// member functions: 2
// member variable: 1
// struct size: 12
struct DebugMeshInfoPred_t {
	Vector m_vecDir; /* 0 12 */
	/* vphysics2/physicsinterface.cpp:815 */
	bool operator()(DebugMeshInfoPred_t* , const DebugMeshInfo_t& , const DebugMeshInfo_t& );
	void DebugMeshInfoPred_t(DebugMeshInfoPred_t* );
};

// <00A2183B> vphysics2/physicsinterface.cpp:818
// variables: 2
// function calls: 8
void DebugMeshInfoPred_t::operator(const DebugMeshInfo_t& left, const DebugMeshInfo_t& right)
{
	Vector vecLeftOrigin; // 820
	Vector vecRightOrigin; // 821
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 820
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 821
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 822
	DotProduct(const Vector& a,
			const Vector& b);  // 822
} /* size: 0, variables: 2, inline expansions: 8 (0 bytes) */

// <009F9BD6> vphysics2/physicsinterface.cpp:818
// variables: 2
void DebugMeshInfoPred_t::operator(const DebugMeshInfo_t& left, const DebugMeshInfo_t& right)
{
	Vector vecLeftOrigin; // 820
	Vector vecRightOrigin; // 821
} /* size: 0, variables: 2 */

// <009F94F4> vphysics2/physicsinterface.cpp:825
// variables: 2
// function calls: 28
void DebugMeshInfoList_t::Sort(const Vector& vecDir)
{
	DebugMeshInfoPred_t pred; // 827
	Vector::Vector(); // 812
	DebugMeshInfoPred_t::DebugMeshInfoPred_t(); // 827
	Vector::operator=(
			const Vector& vOther);  // 828
	CUtlMemory<DebugMeshInfo_t, int>::Base(); // 112
	CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::Base(); // 829
	CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::Count(); // 829
	_Iter_comp_iter<DebugMeshInfoPred_t>::_Iter_comp_iter(
			DebugMeshInfoPred_t __comp);  // 165
	__iter_comp_iter<DebugMeshInfoPred_t>(DebugMeshInfoPred_t __comp); // 4874
	__countl_zero<long unsigned int>(long unsigned int __x); // 388
	__bit_width<long unsigned int>(long unsigned int __x); // 1555
	__lg<long int>(long int __n); // 1907
	{
		DebugMeshInfo_t* __i; // 1798
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 822
		DotProduct(const Vector& a,
				const Vector& b);  // 822
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 820
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 821
		DebugMeshInfoPred_t::operator(
				const DebugMeshInfo_t& left,
				const DebugMeshInfo_t& right);  // 240
		_Val_comp_iter<DebugMeshInfoPred_t>::operator(
								DebugMeshInfo_t& __val,
								DebugMeshInfo_t* __it);  // 1758
		__unguarded_linear_insert<DebugMeshInfo_t*, __gnu_cxx::__ops::_Val_comp_iter<DebugMeshInfoPred_t> >(DebugMeshInfo_t* __last,
															_Val_comp_iter<DebugMeshInfoPred_t> __comp);  // 1799
		_Val_comp_iter<DebugMeshInfoPred_t>::_Val_comp_iter(
				_Iter_comp_iter<DebugMeshInfoPred_t>& __comp);  // 253
		__val_comp_iter<DebugMeshInfoPred_t>(_Iter_comp_iter<DebugMeshInfoPred_t> __comp); // 1799
	}
	__unguarded_insertion_sort<DebugMeshInfo_t*, __gnu_cxx::__ops::_Iter_comp_iter<DebugMeshInfoPred_t> >(DebugMeshInfo_t* __first,
														DebugMeshInfo_t* __last,
														_Iter_comp_iter<DebugMeshInfoPred_t> __comp);  // 1819
	__final_insertion_sort<DebugMeshInfo_t*, __gnu_cxx::__ops::_Iter_comp_iter<DebugMeshInfoPred_t> >(DebugMeshInfo_t* __first,
														DebugMeshInfo_t* __last,
														_Iter_comp_iter<DebugMeshInfoPred_t> __comp);  // 1909
	__sort<DebugMeshInfo_t*, __gnu_cxx::__ops::_Iter_comp_iter<DebugMeshInfoPred_t> >(DebugMeshInfo_t* __first,
												DebugMeshInfo_t* __last,
												_Iter_comp_iter<DebugMeshInfoPred_t> __comp);  // 4874
	sort<DebugMeshInfo_t*, DebugMeshInfoPred_t>(DebugMeshInfo_t* __first,
							DebugMeshInfo_t* __last,
							DebugMeshInfoPred_t __comp);  // 829
} /* size: 760, variables: 1, inline expansions: 15 (2551 bytes) */

// <009F8BA3> vphysics2/physicsinterface.cpp:832
// variables: 8
// function calls: 37
void DebugMeshInfoList_t::AppendDebugMeshInfo(uint nDebugSceneObjectFlags, const CModelSkeleton* pMasterSkeleton, const CPhysAggregateData* pPhysCollisionMeshData, uint nSortPoseCount, const CTransform* pSortPose)
{
	int nPartCount; // 834
	{
		int nPart; // 836
		{
			int nRenderBoneIndex; // 838
			int nIndex; // 858
			DebugMeshInfo_t& info; // 859
			{
				uint32 nBoneHash; // 842
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 842
			}
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 98
			CTransform::GetScale(); // 362
			{
				int i; // 325
				{
					int j; // 327
				}
			}
			matrix3x4_t::ScaleUpper3x3Matrix(
						float flScale);  // 365
			CTransform::ToMatrix(); // 236
			TransformMatrix(const CTransform& in); // 873
			CUtlMemory<short unsigned int, int>::Count(); // 225
			CUtlMemory<unsigned int, int>::Count(); // 225
			CUtlMemory<matrix3x4_t, int>::Count(); // 225
			{
			}
			CUtlMemory<unsigned int, int>::Count(); // 227
			CPhysAggregateData::GetBoneCount(); // 840
			CUtlMemory<DebugMeshInfo_t, int>::NumAllocated(); // 1143
			CUtlMemory<DebugMeshInfo_t, int>::Base(); // 112
			CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::Base(); // 368
			CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::ResetDbgInfo(); // 824
			CUtlMemory<DebugMeshInfo_t, int>::IsGrowable(); // 823
			CUtlMemory<DebugMeshInfo_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<DebugMeshInfo_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<DebugMeshInfo_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::GrowMemory(
					int num);  // 1145
			matrix3x4_t::matrix3x4_t(); // 787
			matrix3x4_t::matrix3x4_t(); // 787
			DebugMeshInfo_t::DebugMeshInfo_t(); // 1479
			Construct<DebugMeshInfo_t>(DebugMeshInfo_t* pMemory); // 1148
			CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::AddToTail(); // 858
			CUtlMemory<DebugMeshInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::operator[](
					int i);  // 859
			CUtlMemory<short unsigned int, int>::Count(); // 225
			CUtlMemory<unsigned int, int>::Count(); // 225
			CUtlMemory<matrix3x4_t, int>::Count(); // 225
			{
			}
			CUtlMemory<unsigned int, int>::Count(); // 227
			CPhysAggregateData::GetBoneCount(); // 863
			CUtlMemory<matrix3x4_t, int>::operator[](
					int i);  // 865
			CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::Count(); // 854
		}
	}
	CUtlVectorBase<const VPhysXBodyPart_t::Count(); // 241
	CPhysAggregateData::GetPartCount(); // 834
} /* size: 0, variables: 1, inline expansions: 2 (14 bytes) */

// <009F8B71> vphysics2/physicsinterface.cpp:889
float AdjustSwing(int nMode, float flLimit)
{
} /* size: 0 */

// <009F87D9> vphysics2/physicsinterface.cpp:903
// variables: 54
void AddConstraintGizmo(uint8 nAlpha, const CPhysConstraintData& constraint, int nSide, int nMasterSkeletonRenderBone, float flScale, PhysicsDebugMeshBuffers_t* pOut)
{
	matrix3x4_t tmConstraint; // 908
	VertexColor_t axisColors; // 909
	{
		int nAxis; // 916
		{
			Vector vTip; // 918
			Vector vNormal; // 922
			int nBaseIndex; // 925
			{
				int j; // 926
				{
					PhysicsDebugVertex_t vert; // 928
				}
			}
		}
	}
	{
		int nModeSwingY; // 976
		int nModeSwingZ; // 976
		float flSwingRadius; // 977
		float flSwingY; // 978
		float flSwingZ; // 978
		bool bDrawCone; // 979
		{
			float high; // 944
			float low; // 944
			int nSubdivs; // 945
			int nVertexTwist; // 946
			{
				int i; // 947
				{
					float angle; // 949
					float radius; // 949
					Vector vLocal; // 955
					PhysicsDebugVertex_t vert; // 961
				}
			}
			{
				int i; // 970
			}
		}
		{
			int nSubdivs; // 984
			int nVertexSwingOrigin; // 986
			PhysicsDebugVertex_t vert; // 987
			int nVertexSwing; // 997
			{
				int i; // 998
				{
					float angle; // 1000
					Vector vLocal; // 1001
					Vector vLocalNormal; // 1002
					int next; // 1013
					{
						int sign; // 1003
					}
				}
			}
		}
		{
			int nSubdivs; // 1027
			int nVertexSwingOrigin; // 1029
			PhysicsDebugVertex_t vert; // 1030
			int nVertexSwing; // 1037
			{
				int i; // 1038
				{
					float angle; // 1040
					Vector vLocal; // 1041
					Vector vLocalNormal; // 1042
					int next; // 1053
					{
						int sign; // 1043
					}
				}
			}
		}
		{
			int nSubdivs; // 1066
			int nVertexSwingOrigin; // 1068
			PhysicsDebugVertex_t vert; // 1069
			int nVertexSwing; // 1076
			{
				int i; // 1077
				{
					float angle; // 1079
					float angley; // 1080
					float anglez; // 1080
					Vector vLocal; // 1082
					Vector vLocalNormal; // 1083
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <009F844E> vphysics2/physicsinterface.cpp:1097
// variables: 8
// function calls: 7
void AddConstraintGizmos(const DebugMeshParams_t& params, PhysicsDebugMeshBuffers_t* pOut)
{
	const CPhysAggregateData* pAggregateData; // 1099
	{
		int i; // 1101
		{
			const CPhysConstraintData& constraint; // 1103
			bool isSel; // 1104
			float flScale; // 1105
			int nAlpha; // 1106
			uint nChildBone; // 1107
			uint nParentBone; // 1107
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 1110
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 1111
			AddConstraintGizmo(uint8 nAlpha,
						const CPhysConstraintData& constraint,
						int nSide,
						int nMasterSkeletonRenderBone,
						float flScale,
						PhysicsDebugMeshBuffers_t* pOut);  // 1113
			CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::operator[](
					int i);  // 1103
			AddConstraintGizmo(uint8 nAlpha,
						const CPhysConstraintData& constraint,
						int nSide,
						int nMasterSkeletonRenderBone,
						float flScale,
						PhysicsDebugMeshBuffers_t* pOut);  // 1114
		}
		CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::Count(); // 1101
	}
	CPhysAggregateDataHandle::Get(); // 1099
} /* size: 319, variables: 1, inline expansions: 1 (4 bytes) */

// <009E3ACB> vphysics2/physicsinterface.cpp:1119
// variables: 51
// function calls: 315
void CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t& params, SceneObjectBuffers_t* pOut)
{
	DebugMeshInfoList_t list; // 1121
	Vector vecBoundMin; // 1133
	Vector vecBoundMax; // 1134
	VertexBufferHandle_t hDebugVertexBuffer; // 1135
	IndexBufferHandle_t hDebugIndexBuffer; // 1136
	int nFinalVertexCount; // 1137
	int nFinalIndexCount; // 1138
	RenderInputLayoutField_t vertexDecl; // 1140
	CRenderContextPtr pRenderContext; // 1150
	CUtlVector<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t*)::Part_t, CUtlMemory<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t*)::Part_t, int> > outParts; // 1158
	bool bShowOnlyAcousticGeometry; // 1161
	CUtlVector<bool, CUtlMemory<bool, int> > isAcousticGeometry; // 1163
	int nTotalVerts; // 1166
	int nTotalIndices; // 1166
	PhysicsDebugMeshBuffers_t constraintBuffers; // 1192
	BufferDesc_t vertexDesc; // 1197
	BufferDesc_t indexDesc; // 1203
	RenderPrimitiveType_t nRenderPrimType; // 1222
	CVertexData<PhysicsDebugVertex_t> vb; // 1224
	CIndexData<unsigned int> ib; // 1225
	const char   __FUNCTION__; // 57868
	{
		int nBodyPart; // 1167
		{
			Part_t& buf; // 1169
			const VPhysXBodyPart_t* pPart; // 1170
			{
				int v; // 1181
				{
					Vector vecBindPoseVert; // 1183
					CUtlMemory<RnVertex_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::operator[](
							int i);  // 1183
					CUtlMemory<DebugMeshInfo_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::operator[](
							int i);  // 1183
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 1307
					Vector::Vector(); // 1306
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2);  // 1183
					VectorMin(const Vector& a,
							const Vector& b,
							Vector& result);  // 1184
					VectorMax(const Vector& a,
							const Vector& b,
							Vector& result);  // 1185
				}
				CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::Count(); // 1181
			}
			CUtlMemory<DebugMeshInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::operator[](
					int i);  // 1170
			CUtlMemoryConservative<const VPhysXBodyPart_t::Base(); // 366
			CUtlMemoryConservative<const VPhysXBodyPart_t::operator[](
					int i);  // 595
			CUtlVectorBase<const VPhysXBodyPart_t::operator[](
					int i);  // 1170
			CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::Count(); // 1178
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 1179
		}
		CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::Count(); // 1167
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1240
	}
	{
		int m; // 1242
		{
			Part_t& buf; // 1247
			const DebugMeshInfo_t& info; // 1248
			VertexColor_t color; // 1249
			bool xformIdentity; // 1255
			matrix3x4_t xformVertex; // 1256
			matrix3x4_t xformNormal; // 1256
			AABB_t bboxBodyPart; // 1264
			const int  nVertexOffset; // 1266
			{
				int nVertIndex; // 1268
				{
					const RnVertex_t& v; // 1270
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 1307
					Vector::Vector(); // 1306
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2);  // 1278
					Vector::operator=(
							const Vector& vOther);  // 1273
					Vector::operator=(
							const Vector& vOther);  // 1274
					VertexColor_t::operator=(
							const VertexColor_t& src);  // 1285
					Vector::operator=(
							const Vector& vOther);  // 1286
					{
					}
					Vector::operator=(
							const Vector& vOther);  // 12
					Vector::operator=(
							const Vector& vOther);  // 12
					VertexColor_t::AsUint32(); // 203
					VertexColor_t::operator=(
							const VertexColor_t& src);  // 12
					Vector::operator=(
							const Vector& vOther);  // 12
					VertexColor_t::AsUint32(); // 203
					VertexColor_t::operator=(
							const VertexColor_t& src);  // 12
					PhysicsDebugVertex_t::operator=(
							const PhysicsDebugVertex_t  &);  // 355
					{
					}
					CVertexDataBase<PhysicsDebugVertex_t>::AdvanceVertex(); // 270
					CVertexDataBase<PhysicsDebugVertex_t>::AdvanceVertex(); // 1289
					VertexColor_t::Init(
						uint8 ir,
						uint8 ig,
						uint8 ib,
						uint8 ia);  // 1288
					CUtlMemory<RnVertex_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::operator[](
							int i);  // 1270
					VectorRotate(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 1315
					Vector::Vector(); // 1314
					VectorRotate(const Vector& in1,
							const matrix3x4_t& in2);  // 1279
					Vector::operator=(
							const Vector& vOther);  // 1278
					Vector::operator=(
							const Vector& vOther);  // 1279
				}
				CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::Count(); // 1268
			}
			{
				int nIndexIndex; // 1292
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 1292
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
						int i);  // 1294
				{
				}
				CIndexDataBase<unsigned int>::Index(
					unsigned int nIndex);  // 1294
			}
			{
				const char* pBoneName; // 1301
			}
			CUtlMemory<DebugMeshInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::operator[](
					int i);  // 1248
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 1249
			CUtlMemoryConservative<const VPhysXBodyPart_t::Base(); // 366
			CUtlMemoryConservative<const VPhysXBodyPart_t::operator[](
					int i);  // 595
			CUtlVectorBase<const VPhysXBodyPart_t::operator[](
					int i);  // 1250
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 1252
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 1252
			VertexColor_t::VertexColor_t(
					uint8 ir,
					uint8 ig,
					uint8 ib,
					uint8 ia);  // 803
			ScaleColor(const VertexColor_t  a,
					const VertexColor_t  b);  // 1252
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 1252
			Vector::Vector(); // 24
			Vector::Vector(); // 24
			AABB_t::AABB_t(); // 1264
			CVertexDataBase<PhysicsDebugVertex_t>::VertexCount(); // 1266
			matrix3x4_t::matrix3x4_t(); // 2793
			matrix3x4_t::InverseTR(); // 1260
			matrix3x4_t::matrix3x4_t(); // 1019
			operator*(const matrix3x4_t& in1,
					const matrix3x4_t& in2);  // 1260
			matrix3x4_t::matrix3x4_t(); // 2793
			matrix3x4_t::InverseTR(); // 1261
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 2893
			InverseVector(const Vector& v); // 1261
			matrix3x4_t::matrix3x4_t(); // 1019
			operator*(const matrix3x4_t& in1,
					const matrix3x4_t& in2);  // 1261
		}
		CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::Count(); // 1242
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1319
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1320
	}
	CUtlMemory<DebugMeshInfo_t, int>::CUtlMemory(
			DebugMeshInfo_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<DebugMeshInfo_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<DebugMeshInfo_t, int>::CUtlMemoryFixedGrowable_Base(
					DebugMeshInfo_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<64, DebugMeshInfo_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, DebugMeshInfo_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<64, DebugMeshInfo_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<DebugMeshInfo_t, 64>::CUtlVectorFixedGrowable(
				int growSize);  // 806
	DebugMeshInfoList_t::DebugMeshInfoList_t(); // 1121
	CPhysAggregateDataHandle::Get(); // 1123
	CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::Count(); // 135
	CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::IsEmpty(); // 1125
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1133
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1134
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 1150
	CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::Count(); // 1159
	{
		int i; // 1696
		CUtlMemory<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::operator[](
				int i);  // 602
		CUtlVectorBase<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::Element(
			int i);  // 1697
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 1152
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::RemoveAll(); // 1798
		CUtlMemory<RnVertex_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<RnVertex_t, int>::Purge(); // 903
		CUtlMemory<RnVertex_t, int>::Purge(); // 1799
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::Purge(); // 560
		ValidateAlignment<RnVertex_t>(void); // 508
		CUtlMemory<RnVertex_t, int>::Purge(); // 510
		CUtlMemory<RnVertex_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >::~CUtlVector(); // 1152
		Part_t::~Part_t(); // 1526
		Destruct<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t*)::Part_t>(Part_t* pMemory); // 1697
	}
	CUtlVectorBase<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::Grow(
		int num);  // 806
	CUtlVectorBase<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::operator[](
				int i);  // 602
		CUtlVectorBase<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::Element(
			int i);  // 1453
		CUtlMemory<RnVertex_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<RnVertex_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >::CUtlVector(); // 1152
		CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 1152
		Part_t::Part_t(); // 1479
		Construct<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t*)::Part_t>(Part_t* pMemory); // 1453
	}
	CUtlVectorBase<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::SetCount(
		int count);  // 1159
	CUtlMemory<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::ValidateGrowSize()::Part_t, this); // 475
	CUtlMemory<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::ResetDbgInfo()::Part this); // 530
	CUtlVectorBase<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::CUtlVector()::Part_t, this); // 1158
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 1334
	CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<64, DebugMeshInfo_t, 8>::Base(); // 237
	CUtlMemory<DebugMeshInfo_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<DebugMeshInfo_t, int>::ConvertToExternalMemory(
				DebugMeshInfo_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<DebugMeshInfo_t, int>::Purge_FixedGrowable(
				DebugMeshInfo_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<DebugMeshInfo_t, int>::Purge_FixedGrowable(
				DebugMeshInfo_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<DebugMeshInfo_t, int>::Base(); // 112
	CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::Base(); // 368
	CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::Purge(); // 560
	ValidateAlignment<DebugMeshInfo_t>(void); // 508
	CUtlMemory<DebugMeshInfo_t, int>::Purge(); // 903
	CUtlMemory<DebugMeshInfo_t, int>::Purge(); // 510
	CUtlMemory<DebugMeshInfo_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<DebugMeshInfo_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<DebugMeshInfo_t, 64>::~CUtlVectorFixedGrowable(); // 806
	DebugMeshInfoList_t::~DebugMeshInfoList_t(); // 1334
	CUtlVectorBase<DebugMeshInfo_t, CUtlMemoryFixedGrowable<DebugMeshInfo_t, 64, int> >::Count(); // 1164
	CUtlMemory<bool, int>::ValidateGrowSize(); // 475
	CUtlMemory<bool, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<bool, CUtlMemory<bool, int> >::CUtlVector(); // 1163
	CUtlMemory<bool, int>::Grow(
		int num);  // 806
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
		int count);  // 1164
	{
		int i; // 1721
		CUtlMemory<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::operator[](
				int i);  // 602
		CUtlVectorBase<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::Element(
			int i);  // 1723
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 1152
		CUtlMemory<RnVertex_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<RnVertex_t, int>::Purge(); // 903
		CUtlMemory<RnVertex_t, int>::Purge(); // 1799
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::RemoveAll(); // 1798
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::Purge(); // 560
		ValidateAlignment<RnVertex_t>(void); // 508
		CUtlMemory<RnVertex_t, int>::Purge(); // 510
		CUtlMemory<RnVertex_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >::~CUtlVector(); // 1152
		Part_t::~Part_t(); // 1526
		Destruct<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t*)::Part_t>(Part_t* pMemory); // 1723
	}
	CUtlVectorBase<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::RemoveAll()::Part this); // 1798
	CUtlMemory<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::Purge()::Part_t, this); // 903
	CUtlMemory<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::Purge()::Part_t, this); // 1799
	CUtlVectorBase<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::Purge()::Part this); // 560
	ValidateAlignment<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t*)::Part_t>(void); // 508
	CUtlMemory<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::Purge()::Part_t, this); // 510
	CUtlMemory<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::~CUtlMemory()::Part_t, this); // 562
	CUtlVectorBase<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::~CUtlVectorBase()::Part this); // 410
	CUtlVector<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t::~CUtlVector()::Part_t, this); // 1334
	CUtlMemory<PhysicsDebugVertex_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<PhysicsDebugVertex_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::CUtlVector(); // 22
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 22
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 22
	PhysicsDebugMeshBuffers_t::PhysicsDebugMeshBuffers_t(); // 1192
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 1194
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::Count(); // 1195
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<PhysicsDebugVertex_t>::ClearVertexFields(); // 495
	CVertexData<PhysicsDebugVertex_t>::Init(
		IRenderContext* pRenderContext,
		VertexBufferHandle_t hVertexBuffer);  // 436
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<PhysicsDebugVertex_t>::ClearVertexFields(); // 171
	Vector::Vector(); // 12
	Vector::Vector(); // 12
	VertexColor_t::VertexColor_t(); // 12
	Vector::Vector(); // 12
	VertexColor_t::VertexColor_t(); // 12
	PhysicsDebugVertex_t::PhysicsDebugVertex_t(); // 165
	CVertexDataBase<PhysicsDebugVertex_t>::CVertexDataBase(); // 433
	CVertexData<PhysicsDebugVertex_t>::CVertexData(
			IRenderContext* pRenderContext,
			VertexBufferHandle_t hVertexBuffer);  // 1224
	CIndexData<unsigned int>::Init(
		IRenderContext* pRenderContext,
		IndexBufferHandle_t hIndexBuffer);  // 328
	CIndexDataBase<unsigned int>::ClearIndexFields(); // 89
	CIndexDataBase<unsigned int>::CIndexDataBase(); // 325
	CIndexData<unsigned int>::CIndexData(
			IRenderContext* pRenderContext,
			IndexBufferHandle_t hIndexBuffer);  // 1225
	{
		LockDesc_t desc; // 459
		bool bOk; // 460
	}
	CIndexData<unsigned int>::Lock(
		int nMaxIndexCount);  // 1227
	{
		LockDesc_t desc; // 557
		bool bOk; // 558
	}
	{
	}
	{
	}
	CVertexData<PhysicsDebugVertex_t>::Lock(
		int nMaxVertexCount);  // 1233
	{
	}
	{
		LockDesc_t desc; // 492
	}
	CIndexData<unsigned int>::Unlock(); // 1236
	CIndexData<unsigned int>::Release(); // 402
	CIndexData<unsigned int>::Release(); // 342
	{
	}
	{
	}
	CIndexDataBase<unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<unsigned int>::~CIndexDataBase(); // 343
	CIndexData<unsigned int>::~CIndexData(); // 1334
	CUtlMemory<bool, int>::Purge(); // 903
	CUtlMemory<bool, int>::Purge(); // 1799
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::Purge(); // 560
	ValidateAlignment<bool>(void); // 508
	CUtlMemory<bool, int>::Purge(); // 510
	CUtlMemory<bool, int>::~CUtlMemory(); // 562
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::~CUtlVectorBase(); // 410
	CUtlVector<bool, CUtlMemory<bool, int> >::~CUtlVector(); // 1334
	CVertexData<PhysicsDebugVertex_t>::Release(); // 502
	CVertexData<PhysicsDebugVertex_t>::Release(); // 461
	{
	}
	{
	}
	CVertexDataBase<PhysicsDebugVertex_t>::~CVertexDataBase(); // 194
	CVertexDataBase<PhysicsDebugVertex_t>::~CVertexDataBase(); // 462
	CVertexData<PhysicsDebugVertex_t>::~CVertexData(); // 1334
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 22
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 22
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::RemoveAll(); // 1798
	CUtlMemory<PhysicsDebugVertex_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<PhysicsDebugVertex_t, int>::Purge(); // 903
	CUtlMemory<PhysicsDebugVertex_t, int>::Purge(); // 1799
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::Purge(); // 560
	ValidateAlignment<PhysicsDebugVertex_t>(void); // 508
	CUtlMemory<PhysicsDebugVertex_t, int>::Purge(); // 510
	CUtlMemory<PhysicsDebugVertex_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::~CUtlVector(); // 22
	PhysicsDebugMeshBuffers_t::~PhysicsDebugMeshBuffers_t(); // 1334
	CIndexDataBase<unsigned int>::IndexCount(); // 1240
	CIndexDataBase<unsigned int>::IndexCount(); // 1317
	CVertexDataBase<PhysicsDebugVertex_t>::VertexCount(); // 1318
	{
	}
	{
		LockDesc_t desc; // 588
	}
	CVertexData<PhysicsDebugVertex_t>::Unlock(); // 1330
	Vector::operator=(
			const Vector& vOther);  // 1324
	Vector::operator=(
			const Vector& vOther);  // 1325
	{
	}
	{
		LockDesc_t desc; // 492
	}
	CIndexData<unsigned int>::Unlock(); // 1331
} /* size: 0, variables: 21, inline expansions: 170 (7496 bytes) */

// <009F7FC6> vphysics2/physicsinterface.cpp:1336
// variables: 3
// function calls: 10
void CPhysicsSystem::DestroyDebugSceneObject(CSceneAnimatableObject* pSceneObject)
{
	const char   __FUNCTION__; // 57895
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1347
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1348
	}
	CSceneObject::GetMeshInstanceData(); // 1341
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 72
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid(); // 287
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 292
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
			int i);  // 305
	CMeshInstance::GetSceneObjectData(); // 322
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 325
	CMeshInstance::GetNumDrawCalls(); // 1348
} /* size: 0, variables: 1, inline expansions: 10 (430 bytes) */

// <009F7E4E> vphysics2/physicsinterface.cpp:1353
// function calls: 2
void CPhysicsSystem::CreateIntersectionController()
{
	IPhysIntersectionController::IPhysIntersectionController(); // 15
	CIntersectionController::CIntersectionController(); // 1355
} /* size: 80, inline expansions: 2 (30 bytes) */

