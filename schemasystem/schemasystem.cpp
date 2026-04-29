
//
// schemasystem/schemasystem.cpp
//
//	referenced by: libschemasystem.so
//
//	functions: 127
//

// <0010198A> schemasystem/schemasystem.cpp:19
void* __CreateCSchemaSystemISchemaSystem_interface(void)
{
} /* size: 12 */

// <000FFEBB> schemasystem/schemasystem.cpp:43
// variables: 4
// function calls: 90
void CSchemaSystem::CSchemaSystem()
{
	IAppSystem::IAppSystem(); // 41
	ISchemaSystem::ISchemaSystem(); // 120
	CBaseAppSystem<ISchemaSystem>::CBaseAppSystem(); // 171
	CTier0AppSystem<ISchemaSystem, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<ISchemaSystem, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<ISchemaSystem, 0>::CTier2AppSystem(); // 48
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CSchemaSystem>::CConCommandMemberAccessor(
					CSchemaSystem* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 144
	CConCommandMemberAccessor<CSchemaSystem>::SetOwner(
		CSchemaSystem* pOwner);  // 144
	CCommandMemberInitializer_Cmd_schema_list_bindings::CCommandMemberInitializer_Cmd_schema_list_bindings(); // 48
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 48
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CSchemaSystem>::CConCommandMemberAccessor(
					CSchemaSystem* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 145
	CConCommandMemberAccessor<CSchemaSystem>::SetOwner(
		CSchemaSystem* pOwner);  // 145
	CCommandMemberInitializer_Cmd_schema_all_list_bindings::CCommandMemberInitializer_Cmd_schema_all_list_bindings(); // 48
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CSchemaSystem>::CConCommandMemberAccessor(
					CSchemaSystem* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 146
	CConCommandMemberAccessor<CSchemaSystem>::SetOwner(
		CSchemaSystem* pOwner);  // 146
	CCommandMemberInitializer_Cmd_schema_dump_binding::CCommandMemberInitializer_Cmd_schema_dump_binding(); // 48
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CSchemaSystem>::CConCommandMemberAccessor(
					CSchemaSystem* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 147
	CConCommandMemberAccessor<CSchemaSystem>::SetOwner(
		CSchemaSystem* pOwner);  // 147
	CCommandMemberInitializer_Cmd_schema_detailed_class_layout::CCommandMemberInitializer_Cmd_schema_detailed_class_layout(); // 48
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CSchemaSystem>::CConCommandMemberAccessor(
					CSchemaSystem* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 148
	CConCommandMemberAccessor<CSchemaSystem>::SetOwner(
		CSchemaSystem* pOwner);  // 148
	CCommandMemberInitializer_Cmd_schema_stats::CCommandMemberInitializer_Cmd_schema_stats(); // 48
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CSchemaSystem>::CConCommandMemberAccessor(
					CSchemaSystem* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 149
	CConCommandMemberAccessor<CSchemaSystem>::SetOwner(
		CSchemaSystem* pOwner);  // 149
	CCommandMemberInitializer_Cmd_schema_meta_stats::CCommandMemberInitializer_Cmd_schema_meta_stats(); // 48
	ValidateAlignment<CUtlTSHashBase<CSchemaClassInfoSynth*, 256, const CSchemaClassInfo*, CUtlTSHashGenericHashMethod<const CSchemaClassInfo*>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSchemaClassInfoSynth*> >(void); // 133
	CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfoSynth::CUtlMemoryPool(
			int numElements,
			MemoryPoolGrowType_t growMode,
			const char* pszAllocOwner);  // 318
	{
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 2282
		{
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 2291
	}
	CThreadSpinRWLock::CThreadSpinRWLock(
				const char* pLockName);  // 297
	HashBucket_t::HashBucket_t(); // 318
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 318
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 320
	{
		int i; // 322
		{
			HashBucket_t& bucket; // 324
		}
	}
	CUtlTSHashBase<CSchemaClassInfoSynth::CUtlTSHashBase(
			int nAllocationCount);  // 809
	CUtlTSHash<CSchemaClassInfoSynth::CUtlTSHash(
			int nAllocationCount);  // 44
	CUtlMemory<_PlatModule_t::ValidateGrowSize(); // 475
	CUtlMemory<_PlatModule_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<_PlatModule_t::ResetDbgInfo(); // 530
	CUtlVectorBase<_PlatModule_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<_PlatModule_t::CUtlVector(); // 48
	CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> > this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> >  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> >::CUtlVector(); // 48
	ValidateAlignment<CUtlTSHashBase<CSchemaEnumInfoSynth*, 256, const CSchemaEnumInfo*, CUtlTSHashGenericHashMethod<const CSchemaEnumInfo*>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSchemaEnumInfoSynth*> >(void); // 133
	CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfoSynth::CUtlMemoryPool(
			int numElements,
			MemoryPoolGrowType_t growMode,
			const char* pszAllocOwner);  // 318
	{
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 2282
		{
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 2291
	}
	CThreadSpinRWLock::CThreadSpinRWLock(
				const char* pLockName);  // 297
	HashBucket_t::HashBucket_t(); // 318
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 318
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 320
	{
		int i; // 322
		{
			HashBucket_t& bucket; // 324
		}
	}
	CUtlTSHashBase<CSchemaEnumInfoSynth::CUtlTSHashBase(
			int nAllocationCount);  // 809
	CUtlTSHash<CSchemaEnumInfoSynth::CUtlTSHash(
			int nAllocationCount);  // 45
	CUtlMemory<CSchemaSystemTypeScope::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CSchemaSystemTypeScope::ValidateGrowSize(); // 475
	CUtlMemory<CSchemaSystemTypeScope::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSchemaSystemTypeScope::ResetDbgInfo(); // 530
	CUtlVectorBase<CSchemaSystemTypeScope::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CSchemaSystemTypeScope::CUtlVector(
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap<CSchemaSystemTypeScope::CUtlStringMap(
			bool caseInsensitive,
			int growSize,
			int initSize);  // 47
	CUtlMemory<CSchemaSystem::BindingRange_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CSchemaSystem::BindingRange_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSchemaSystem::BindingRange_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap<CSchemaSystem::BindingRange_t, CUtlSymbolTable>::CUtlStringMap(
			bool caseInsensitive,
			int growSize,
			int initSize);  // 48
} /* size: 0, inline expansions: 84 (3869 bytes) */

// <000FFEA2> schemasystem/schemasystem.cpp:43
void CSchemaSystem::CSchemaSystem()
{
} /* size: 0 */

// <000FE781> schemasystem/schemasystem.cpp:65
// variables: 5
// function calls: 102
void CSchemaSystem::~CSchemaSystem()
{
	CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CSchemaSystem::BindingRange_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSchemaSystem::BindingRange_t, int>::Purge(); // 903
	CUtlMemory<CSchemaSystem::BindingRange_t, int>::Purge(); // 1799
	CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::Purge(); // 560
	ValidateAlignment<CSchemaSystem::BindingRange_t>(void); // 508
	CUtlMemory<CSchemaSystem::BindingRange_t, int>::Purge(); // 510
	CUtlMemory<CSchemaSystem::BindingRange_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::~CUtlVector(); // 15
	CUtlStringMap<CSchemaSystem::BindingRange_t, CUtlSymbolTable>::~CUtlStringMap(); // 67
	CUtlVectorBase<CSchemaSystemTypeScope::RemoveAll(); // 1798
	CUtlMemory<CSchemaSystemTypeScope::IsExternallyAllocated(); // 905
	CUtlMemory<CSchemaSystemTypeScope::Purge(); // 903
	CUtlMemory<CSchemaSystemTypeScope::Purge(); // 1799
	CUtlVectorBase<CSchemaSystemTypeScope::Purge(); // 560
	ValidateAlignment<CSchemaSystemTypeScope*>(void); // 508
	CUtlMemory<CSchemaSystemTypeScope::Purge(); // 510
	CUtlMemory<CSchemaSystemTypeScope::~CUtlMemory(); // 562
	CUtlVectorBase<CSchemaSystemTypeScope::~CUtlVectorBase(); // 410
	CUtlVector<CSchemaSystemTypeScope::~CUtlVector(); // 15
	CUtlStringMap<CSchemaSystemTypeScope::~CUtlStringMap(); // 67
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	{
		int i; // 683
		{
			HashBucket_t& bucket; // 685
			ThreadPause(void); // 3309
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 3305
			ThreadInterlockedAssignIf128(volatile int128* pDest,
							const int128& value,
							const int128& comparand);  // 3226
			CThreadSpinRWLock::AssignIf(
				const union LockInfo_t& newValue,
				const union LockInfo_t& comparand);  // 3257
			CThreadSpinRWLock::TryLockForWrite(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 3307
			CThreadSpinRWLock::LockForWrite(
					const char* pFileName,
					int nLineNumber);  // 687
		}
	}
	CUtlTSHashBase<CSchemaEnumInfoSynth::RemoveAll(); // 668
	CUtlTSHashBase<CSchemaEnumInfoSynth::RemoveAll(); // 352
	CUtlTSHashBase<CSchemaEnumInfoSynth::Purge(); // 343
	CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfoSynth::~CUtlMemoryPool(); // 344
	CUtlTSHashBase<CSchemaEnumInfoSynth::~CUtlTSHashBase(); // 803
	CUtlTSHash<CSchemaEnumInfoSynth::~CUtlTSHash(); // 67
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	{
		int i; // 683
		{
			HashBucket_t& bucket; // 685
			ThreadPause(void); // 3309
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 3305
			ThreadInterlockedAssignIf128(volatile int128* pDest,
							const int128& value,
							const int128& comparand);  // 3226
			CThreadSpinRWLock::AssignIf(
				const union LockInfo_t& newValue,
				const union LockInfo_t& comparand);  // 3257
			CThreadSpinRWLock::TryLockForWrite(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 3307
			CThreadSpinRWLock::LockForWrite(
					const char* pFileName,
					int nLineNumber);  // 687
		}
	}
	CUtlTSHashBase<CSchemaClassInfoSynth::RemoveAll(); // 668
	CUtlTSHashBase<CSchemaClassInfoSynth::RemoveAll(); // 352
	CUtlTSHashBase<CSchemaClassInfoSynth::Purge(); // 343
	CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfoSynth::~CUtlMemoryPool(); // 344
	CUtlTSHashBase<CSchemaClassInfoSynth::~CUtlTSHashBase(); // 803
	CUtlTSHash<CSchemaClassInfoSynth::~CUtlTSHash(); // 67
	{
		int i; // 1721
		CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> >  this,
			int i);  // 1723
		CUtlString::~CUtlString(); // 159
		CUtlString::~CUtlString(); // 159
		CUtlString::~CUtlString(); // 159
		CUtlString::~CUtlString(); // 159
		DetectedSchemaMismatch_t::~DetectedSchemaMismatch_t(); // 1526
		Destruct<CSchemaSystem::DetectedSchemaMismatch_t>(DetectedSchemaMismatch_t* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> > this); // 1798
	CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::Purge(); // 903
	CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> > this); // 560
	ValidateAlignment<CSchemaSystem::DetectedSchemaMismatch_t>(void); // 508
	CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::Purge(); // 510
	CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> > this); // 410
	CUtlVector<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> >::~CUtlVector(); // 67
	CUtlVectorBase<_PlatModule_t::RemoveAll(); // 1798
	CUtlMemory<_PlatModule_t::IsExternallyAllocated(); // 905
	CUtlMemory<_PlatModule_t::Purge(); // 903
	CUtlMemory<_PlatModule_t::Purge(); // 1799
	CUtlVectorBase<_PlatModule_t::Purge(); // 560
	ValidateAlignment<_PlatModule_t*>(void); // 508
	CUtlMemory<_PlatModule_t::Purge(); // 510
	CUtlMemory<_PlatModule_t::~CUtlMemory(); // 562
	CUtlVectorBase<_PlatModule_t::~CUtlVectorBase(); // 410
	CUtlVector<_PlatModule_t::~CUtlVector(); // 67
	CConCommandMemberAccessor<CSchemaSystem>::~CConCommandMemberAccessor(); // 149
	CCommandMemberInitializer_Cmd_schema_meta_stats::~CCommandMemberInitializer_Cmd_schema_meta_stats(); // 67
	CConCommandMemberAccessor<CSchemaSystem>::~CConCommandMemberAccessor(); // 148
	CCommandMemberInitializer_Cmd_schema_stats::~CCommandMemberInitializer_Cmd_schema_stats(); // 67
	CConCommandMemberAccessor<CSchemaSystem>::~CConCommandMemberAccessor(); // 147
	CCommandMemberInitializer_Cmd_schema_detailed_class_layout::~CCommandMemberInitializer_Cmd_schema_detailed_class_layout(); // 67
	CConCommandMemberAccessor<CSchemaSystem>::~CConCommandMemberAccessor(); // 146
	CCommandMemberInitializer_Cmd_schema_dump_binding::~CCommandMemberInitializer_Cmd_schema_dump_binding(); // 67
	CConCommandMemberAccessor<CSchemaSystem>::~CConCommandMemberAccessor(); // 145
	CCommandMemberInitializer_Cmd_schema_all_list_bindings::~CCommandMemberInitializer_Cmd_schema_all_list_bindings(); // 67
	CConCommandMemberAccessor<CSchemaSystem>::~CConCommandMemberAccessor(); // 144
	CCommandMemberInitializer_Cmd_schema_list_bindings::~CCommandMemberInitializer_Cmd_schema_list_bindings(); // 67
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<ISchemaSystem, 0>::~CTier2AppSystem(); // 67
} /* size: 1103, inline expansions: 78 (3907 bytes) */

// <000FE71A> schemasystem/schemasystem.cpp:65
void CSchemaSystem::~CSchemaSystem()
{
} /* size: 36 */

// <000FE6D3> schemasystem/schemasystem.cpp:77
void CSchemaSystem::GetDependencies()
{
} /* size: 12 */

// <000FE5D5> schemasystem/schemasystem.cpp:82
// function calls: 2
void CSchemaSystem::Connect(CreateInterfaceFn factory)
{
	CTier0AppSystem<ISchemaSystem, 0>::Connect(
		CreateInterfaceFn factory);  // 54
	CTier2AppSystem<ISchemaSystem, 0>::Connect(
		CreateInterfaceFn factory);  // 86
} /* size: 107, inline expansions: 2 (58 bytes) */

// <000FE513> schemasystem/schemasystem.cpp:92
// variable: 1
// function calls: 2
void CSchemaSystem::Init()
{
	InitReturnVal_t nRetVal; // 94
	CTier0AppSystem<ISchemaSystem, 0>::Init(); // 71
	CTier2AppSystem<ISchemaSystem, 0>::Init(); // 94
} /* size: 42, variables: 1, inline expansions: 2 (44 bytes) */

// <000FE369> schemasystem/schemasystem.cpp:103
// variable: 1
// function calls: 7
void CSchemaSystem::Shutdown()
{
	{
		int i; // 715
		CUtlVectorBase<_PlatModule_t::Count(); // 715
		CUtlMemory<_PlatModule_t::operator[](
				int i);  // 588
		CUtlVectorBase<_PlatModule_t::operator[](
				int i);  // 717
	}
	CUtlVectorBase<_PlatModule_t::RemoveAll(); // 720
	CSchemaSystem::UnloadModulesLoadedForSchemaData(); // 105
	CTier0AppSystem<ISchemaSystem, 0>::Shutdown(); // 85
	CTier2AppSystem<ISchemaSystem, 0>::Shutdown(); // 106
} /* size: 109, inline expansions: 4 (123 bytes) */

// <000FDBB9> schemasystem/schemasystem.cpp:111
// variable: 1
// function calls: 30
void CSchemaSystem::LogNotEqualMismatch(SchemaBaseBindingInfo_t& existingBinding, SchemaBaseBindingInfo_t& newBinding, const char* pDescription)
{
	DetectedSchemaMismatch_t& newError; // 113
	CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::NumAllocated(); // 1143
	CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> > this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> > this); // 824
	CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::IsGrowable(); // 823
	CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> >  this,
			int num);  // 1145
	CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> >  this,
		int i);  // 1148
	CUtlString::CUtlString(); // 159
	CUtlString::CUtlString(); // 159
	CUtlString::CUtlString(); // 159
	CUtlString::CUtlString(); // 159
	DetectedSchemaMismatch_t::DetectedSchemaMismatch_t(); // 1479
	Construct<CSchemaSystem::DetectedSchemaMismatch_t>(DetectedSchemaMismatch_t* pMemory); // 1148
	AddToTail(const CUtlVectorBase<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> > this); // 113
	CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> >  this,
			int i);  // 113
	CUtlString::operator=(
			const char* src);  // 114
	CUtlString::operator=(
			const char* src);  // 115
	CSchemaSystem::FindClassBindingProjectName(
					const CSchemaClassInfo* pBinding);  // 118
	CSchemaSystem::FindClassBindingBinaryName(
					const CSchemaClassInfo* pBinding);  // 118
	CSchemaSystem::FindClassBindingProjectName(
					const CSchemaClassInfo* pBinding);  // 119
	CSchemaSystem::FindClassBindingBinaryName(
					const CSchemaClassInfo* pBinding);  // 119
	CSchemaSystem::FindClassBindingBinaryName(
					const CSchemaClassInfo* pBinding);  // 124
	CSchemaSystem::FindEnumBindingProjectName(
					const CSchemaEnumInfo* pBinding);  // 123
	CSchemaSystem::FindClassBindingBinaryName(
					const CSchemaClassInfo* pBinding);  // 123
	CSchemaSystem::FindEnumBindingProjectName(
					const CSchemaEnumInfo* pBinding);  // 124
} /* size: 894, variables: 1, inline expansions: 30 (1000 bytes) */

// <000FDB41> schemasystem/schemasystem.cpp:145
bool CompareBindingData_Str(SchemaBaseBindingInfo_t& existingBinding, SchemaBaseBindingInfo_t& newBinding, int nMemberIndex, const char* pValueName, const char* pFirstValue, const char* pSecondValue, const char* pExistingMemberName, const char* pNewMemberName)
{
} /* size: 0 */

// <000D961F> schemasystem/schemasystem.cpp:159
bool CompareBindingData_Int<int>(SchemaBaseBindingInfo_t& existingBinding, SchemaBaseBindingInfo_t& newBinding, int nMemberIndex, const char* pValueName, int nFirstValue, int nSecondValue, const char* pExistingMemberName, const char* pNewMemberName)
{
} /* size: 0 */

// <000D959E> schemasystem/schemasystem.cpp:159
bool CompareBindingData_Int<long long int>(SchemaBaseBindingInfo_t& existingBinding, SchemaBaseBindingInfo_t& newBinding, int nMemberIndex, const char* pValueName, long long int nFirstValue, long long int nSecondValue, const char* pExistingMemberName, const char* pNewMemberName)
{
} /* size: 0 */

// <000D96A0> schemasystem/schemasystem.cpp:173
bool CompareMetaData_Int<int>(SchemaBaseBindingInfo_t& existingBinding, SchemaBaseBindingInfo_t& newBinding, const char* pValueName, int nFirstValue, int nSecondValue)
{
} /* size: 0 */

// <000FDAED> schemasystem/schemasystem.cpp:186
bool CompareMetaData_Str(SchemaBaseBindingInfo_t& existingBinding, SchemaBaseBindingInfo_t& newBinding, const char* pValueName, const char* pFirstValue, const char* pSecondValue)
{
} /* size: 0 */

// <000FDAA5> schemasystem/schemasystem.cpp:232
bool CompareMetaEntries(SchemaBaseBindingInfo_t& existingBinding, SchemaBaseBindingInfo_t& newBinding, const CSchemaMetadataEntry* pExistingEntry, const CSchemaMetadataEntry* pNewEntry)
{
} /* size: 0 */

// <000FD717> schemasystem/schemasystem.cpp:250
// variables: 2
// function calls: 10
void DetectMetadataMismatches(SchemaBaseBindingInfo_t& existingBinding, SchemaBaseBindingInfo_t& newBinding, const char* pExitingName, const char* pNewName, MetadataIntrospectionHandle_t pExistingMeta, MetadataIntrospectionHandle_t pNewMeta)
{
	int nNumStaticToTest; // 254
	{
		int iStatic; // 255
		CSchemaMetadataSet::GetEntryByIndex(
				int nIndex);  // 257
		CSchemaMetadataSet::GetEntryByIndex(
				int nIndex);  // 257
		CSchemaMetadataEntry::GetName(); // 234
		CSchemaMetadataEntry::GetName(); // 234
		V_strcmp(const char* s1,
			const char* s2);  // 188
		CompareMetaData_Str(SchemaBaseBindingInfo_t& existingBinding,
					SchemaBaseBindingInfo_t& newBinding,
					const char* pValueName,
					const char* pFirstValue,
					const char* pSecondValue);  // 234
		CompareMetaEntries(SchemaBaseBindingInfo_t& existingBinding,
					SchemaBaseBindingInfo_t& newBinding,
					const CSchemaMetadataEntry* pExistingEntry,
					const CSchemaMetadataEntry* pNewEntry);  // 257
	}
	CSchemaMetadataSet::GetEntryCount(); // 252
	CSchemaMetadataSet::GetEntryCount(); // 252
	CompareMetaData_Int<int>(SchemaBaseBindingInfo_t& existingBinding,
				SchemaBaseBindingInfo_t& newBinding,
				const char* pValueName,
				int nFirstValue,
				int nSecondValue);  // 252
} /* size: 189, variables: 1, inline expansions: 3 (15 bytes) */

// <000FC4B6> schemasystem/schemasystem.cpp:264
// variables: 8
// function calls: 66
void DetectClassBindingMismatches(CSchemaClassInfo* pExistingBinding, CSchemaClassInfo* pBinding)
{
	SchemaBaseBindingInfo_t existingBinding; // 266
	SchemaBaseBindingInfo_t newBinding; // 266
	int nNumFieldsToTest; // 278
	{
		int i; // 280
		{
			FieldIntrospectionHandle_t existingMember; // 282
			FieldIntrospectionHandle_t newMember; // 283
			const char* pNewMemberName; // 285
			const char* pExistingMemberName; // 286
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 163
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 163
			CompareBindingData_Int<int>(SchemaBaseBindingInfo_t& existingBinding,
							SchemaBaseBindingInfo_t& newBinding,
							int nMemberIndex,
							const char* pValueName,
							int nFirstValue,
							int nSecondValue,
							const char* pExistingMemberName,
							const char* pNewMemberName);  // 159
			CompareBindingData_Int<int>(SchemaBaseBindingInfo_t& existingBinding,
							SchemaBaseBindingInfo_t& newBinding,
							int nMemberIndex,
							const char* pValueName,
							int nFirstValue,
							int nSecondValue,
							const char* pExistingMemberName,
							const char* pNewMemberName);  // 291
			CSchemaMetadataSet::CSchemaMetadataSet(
						uint16 nNumEntries,
						const SchemaMetadataEntryData_t* pEntries);  // 39
			CSchemaClassField::GetMetadata(); // 292
			CSchemaMetadataSet::CSchemaMetadataSet(
						uint16 nNumEntries,
						const SchemaMetadataEntryData_t* pEntries);  // 39
			CSchemaClassField::GetMetadata(); // 292
			CSchemaClassField::GetName(); // 292
			CSchemaClassField::GetName(); // 292
			CSchemaClassInfo::GetField(
				int nIndex);  // 282
			CSchemaMetadataSet::CSchemaMetadataSet(
						uint16 nNumEntries,
						const SchemaMetadataEntryData_t* pEntries);  // 39
			CSchemaClassField::GetMetadata(); // 327
			SchemaMetaGetPtr2(FieldIntrospectionHandle_t fieldInfo,
						const char* pKey);  // 156
			TagName(void); // 156
			GetPtr(FieldIntrospectionHandle_t pObj); // 156
			GetValue(FieldIntrospectionHandle_t pObj,
				const char* defaultValue);  // 285
			CSchemaClassInfo::GetField(
				int nIndex);  // 283
			CSchemaClassField::GetName(); // 285
			CSchemaClassField::GetName(); // 286
			CSchemaMetadataSet::CSchemaMetadataSet(
						uint16 nNumEntries,
						const SchemaMetadataEntryData_t* pEntries);  // 39
			CSchemaClassField::GetMetadata(); // 327
			SchemaMetaGetPtr2(FieldIntrospectionHandle_t fieldInfo,
						const char* pKey);  // 156
			TagName(void); // 156
			GetPtr(FieldIntrospectionHandle_t pObj); // 156
			GetValue(FieldIntrospectionHandle_t pObj,
				const char* defaultValue);  // 286
			CSchemaClassField::GetName(); // 287
			V_strcmp(const char* s1,
				const char* s2);  // 147
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 149
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 149
			CompareBindingData_Str(SchemaBaseBindingInfo_t& existingBinding,
						SchemaBaseBindingInfo_t& newBinding,
						int nMemberIndex,
						const char* pValueName,
						const char* pFirstValue,
						const char* pSecondValue,
						const char* pExistingMemberName,
						const char* pNewMemberName);  // 145
			CompareBindingData_Str(SchemaBaseBindingInfo_t& existingBinding,
						SchemaBaseBindingInfo_t& newBinding,
						int nMemberIndex,
						const char* pValueName,
						const char* pFirstValue,
						const char* pSecondValue,
						const char* pExistingMemberName,
						const char* pNewMemberName);  // 287
			CSchemaClassField::GetName(); // 287
			CSchemaClassField::GetName(); // 291
			CSchemaClassField::GetName(); // 291
			CSchemaClassField::GetSingleInheritanceOffsetFromClass(); // 291
			CSchemaClassField::GetSingleInheritanceOffsetFromClass(); // 291
		}
	}
	CSchemaClassInfo::GetName(); // 271
	CSchemaClassInfo::GetName(); // 271
	V_strcmp(const char* s1,
		const char* s2);  // 271
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 272
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 272
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 273
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 273
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 274
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 274
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 275
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 275
	CSchemaClassInfo::GetFieldCount(); // 276
	CSchemaClassInfo::GetFieldCount(); // 276
	CSchemaClassInfo::GetSizeOf(); // 295
	CSchemaClassInfo::GetSizeOf(); // 295
	CSchemaMetadataSet::CSchemaMetadataSet(
				uint16 nNumEntries,
				const SchemaMetadataEntryData_t* pEntries);  // 138
	CSchemaClassInfo::GetMetadata(); // 297
	CSchemaMetadataSet::CSchemaMetadataSet(
				uint16 nNumEntries,
				const SchemaMetadataEntryData_t* pEntries);  // 138
	CSchemaClassInfo::GetMetadata(); // 297
} /* size: 1339, variables: 3, inline expansions: 19 (88 bytes) */

// <000FB807> schemasystem/schemasystem.cpp:302
// variables: 6
// function calls: 44
void DetectEnumBindingMismatches(CSchemaEnumInfo* pExistingBinding, CSchemaEnumInfo* pBinding)
{
	SchemaBaseBindingInfo_t existingBinding; // 304
	SchemaBaseBindingInfo_t newBinding; // 304
	int nNumToTest; // 313
	{
		int i; // 314
		{
			EnumeratorIntrospectionHandle_t existingMember; // 316
			EnumeratorIntrospectionHandle_t newMember; // 317
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 163
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 163
			CompareBindingData_Int<long long int>(SchemaBaseBindingInfo_t& existingBinding,
								SchemaBaseBindingInfo_t& newBinding,
								int nMemberIndex,
								const char* pValueName,
								long long int nFirstValue,
								long long int nSecondValue,
								const char* pExistingMemberName,
								const char* pNewMemberName);  // 159
			CompareBindingData_Int<long long int>(SchemaBaseBindingInfo_t& existingBinding,
								SchemaBaseBindingInfo_t& newBinding,
								int nMemberIndex,
								const char* pValueName,
								long long int nFirstValue,
								long long int nSecondValue,
								const char* pExistingMemberName,
								const char* pNewMemberName);  // 320
			CSchemaMetadataSet::CSchemaMetadataSet(
						uint16 nNumEntries,
						const SchemaMetadataEntryData_t* pEntries);  // 16
			CSchemaEnumeratorInfo::GetMetadata(); // 321
			CSchemaMetadataSet::CSchemaMetadataSet(
						uint16 nNumEntries,
						const SchemaMetadataEntryData_t* pEntries);  // 16
			CSchemaEnumeratorInfo::GetMetadata(); // 321
			CSchemaEnumInfo::GetEnumerator(
					int i);  // 316
			CSchemaEnumInfo::GetEnumerator(
					int i);  // 317
			CSchemaEnumeratorInfo::GetName(); // 319
			CSchemaEnumeratorInfo::GetName(); // 319
			V_strcmp(const char* s1,
				const char* s2);  // 147
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 149
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 149
			CompareBindingData_Str(SchemaBaseBindingInfo_t& existingBinding,
						SchemaBaseBindingInfo_t& newBinding,
						int nMemberIndex,
						const char* pValueName,
						const char* pFirstValue,
						const char* pSecondValue,
						const char* pExistingMemberName,
						const char* pNewMemberName);  // 145
			CompareBindingData_Str(SchemaBaseBindingInfo_t& existingBinding,
						SchemaBaseBindingInfo_t& newBinding,
						int nMemberIndex,
						const char* pValueName,
						const char* pFirstValue,
						const char* pSecondValue,
						const char* pExistingMemberName,
						const char* pNewMemberName);  // 319
			CSchemaEnumeratorInfo::GetName(); // 320
			CSchemaEnumeratorInfo::GetName(); // 320
			CSchemaEnumeratorInfo::GetValue(); // 320
			CSchemaEnumeratorInfo::GetValue(); // 320
			CSchemaEnumeratorInfo::GetName(); // 321
			CSchemaEnumeratorInfo::GetName(); // 321
		}
	}
	CSchemaEnumInfo::GetName(); // 309
	CSchemaEnumInfo::GetName(); // 309
	V_strcmp(const char* s1,
		const char* s2);  // 309
	CSchemaEnumInfo::GetEnumeratorCount(); // 310
	CSchemaEnumInfo::GetEnumeratorCount(); // 310
	CSchemaMetadataSet::CSchemaMetadataSet(
				uint16 nNumEntries,
				const SchemaMetadataEntryData_t* pEntries);  // 44
	CSchemaEnumInfo::GetMetadata(); // 311
	CSchemaMetadataSet::CSchemaMetadataSet(
				uint16 nNumEntries,
				const SchemaMetadataEntryData_t* pEntries);  // 44
	CSchemaEnumInfo::GetMetadata(); // 311
	CSchemaEnumInfo::GetEnumeratorCount(); // 313
	CSchemaEnumInfo::GetEnumeratorCount(); // 313
} /* size: 1019, variables: 3, inline expansions: 11 (109 bytes) */

// <000FAADF> schemasystem/schemasystem.cpp:328
// variables: 8
// function calls: 36
void CSchemaSystemTypeScope::InsertNewClassBinding(SchemaClassId_t nId, CSchemaClassInfo* pBinding, CSchemaClassInfo** pOutRegisteredBinding)
{
	CSchemaClassInfo* pExistingBinding; // 332
	UtlTSHashHandle_t i; // 334
	const char   __FUNCTION__; // 53085
	HashIntConventional(const int n); // 63
	Hash(const unsigned int& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	CUtlTSHashBase<CSchemaClassInfo::Find(
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	CUtlTSHashBase<CSchemaClassInfo::Find(
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	CUtlTSHashBase<CSchemaClassInfo::Find(
		unsigned int uiKey);  // 334
	CSchemaClassInfo::GetName(); // 349
	CSchemaClassInfo::GetName(); // 349
	V_strcmp(const char* s1,
		const char* s2);  // 349
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	CUtlTSHashBase<CSchemaClassInfo::Find(
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	CUtlTSHashBase<CSchemaClassInfo::Find(
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	CUtlTSHashBase<CSchemaClassInfo::Find(
		unsigned int uiKey);  // 469
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 3305
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 3307
	ThreadPause(void); // 3309
	CThreadSpinRWLock::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 474
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	CUtlTSHashBase<CSchemaClassInfo::Find(
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 476
	CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfo::Alloc(); // 438
	CUtlTSHashBase<CSchemaClassInfo::InsertUncommitted(
				unsigned int uiKey,
				HashBucket_t& bucket);  // 479
	CopyConstruct<CSchemaClassInfo*>(CSchemaClassInfo** pMemory,
					CSchemaClassInfo* const& src);  // 480
	CUtlTSHashBase<CSchemaClassInfo::Insert(
		unsigned int uiKey,
		CSchemaClassInfo* const& data,
		bool* pDidInsert);  // 365
	CSchemaClassInfo::GetName(); // 352
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 352
	CSchemaClassInfo::GetName(); // 352
} /* size: 1070, variables: 3, inline expansions: 31 (1661 bytes) */

// <000F9DB7> schemasystem/schemasystem.cpp:376
// variables: 8
// function calls: 36
void CSchemaSystemTypeScope::InsertNewEnumBinding(SchemaClassId_t nId, CSchemaEnumInfo* pBinding, CSchemaEnumInfo** pOutRegisteredBinding)
{
	CSchemaEnumInfo* pExistingBinding; // 380
	UtlTSHashHandle_t i; // 382
	const char   __FUNCTION__; // 53058
	HashIntConventional(const int n); // 63
	Hash(const unsigned int& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	CUtlTSHashBase<CSchemaEnumInfo::Find(
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	CUtlTSHashBase<CSchemaEnumInfo::Find(
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	CUtlTSHashBase<CSchemaEnumInfo::Find(
		unsigned int uiKey);  // 382
	CSchemaEnumInfo::GetName(); // 397
	CSchemaEnumInfo::GetName(); // 397
	V_strcmp(const char* s1,
		const char* s2);  // 397
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	CUtlTSHashBase<CSchemaEnumInfo::Find(
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	CUtlTSHashBase<CSchemaEnumInfo::Find(
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	CUtlTSHashBase<CSchemaEnumInfo::Find(
		unsigned int uiKey);  // 469
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 3305
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 3307
	ThreadPause(void); // 3309
	CThreadSpinRWLock::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 474
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	CUtlTSHashBase<CSchemaEnumInfo::Find(
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 476
	CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo::Alloc(); // 438
	CUtlTSHashBase<CSchemaEnumInfo::InsertUncommitted(
				unsigned int uiKey,
				HashBucket_t& bucket);  // 479
	CopyConstruct<CSchemaEnumInfo*>(CSchemaEnumInfo** pMemory,
					CSchemaEnumInfo* const& src);  // 480
	CUtlTSHashBase<CSchemaEnumInfo::Insert(
		unsigned int uiKey,
		CSchemaEnumInfo* const& data,
		bool* pDidInsert);  // 413
	CSchemaEnumInfo::GetName(); // 400
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 400
	CSchemaEnumInfo::GetName(); // 400
} /* size: 1070, variables: 3, inline expansions: 31 (1661 bytes) */

// <000F946D> schemasystem/schemasystem.cpp:426
// variables: 15
// function calls: 23
void CSchemaSystemTypeScope::InstallSchemaClassBinding(const char* pBinaryName, CSchemaClassInfo* pInfo)
{
	SchemaClassId_t nId; // 436
	CSchemaClassInfo* pRegisteredBinding; // 437
	CSchemaType_DeclaredClass* pClassType; // 449
	ClassIntrospectionHandle_t pIntrospection; // 450
	const char   __FUNCTION__; // 53188
	const CSchemaClassInfo* pInfo_N; // 459
	int nBaseClasses; // 460
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 451
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 452
	}
	{
		int i; // 461
		{
			const CSchemaClassInfo* pInitialBaseClass; // 463
			const CSchemaClassInfo* pRegisteredBaseBinding; // 467
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 464
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 468
			}
			{
				int* _pCrash; // 471
			}
			V_strlen(const char* str); // 19
			ComputeClassNameHash(const char* pClassName); // 15
			ComputeClassNameHash(const char* pClassName); // 520
			CSchemaSystemTypeScope::FindRawClassBinding(
						const char* pStructName);  // 467
			CSchemaBaseClassInfo::GetClass(); // 104
			CSchemaClassInfo::GetBaseClassInfo(
					int nIndex);  // 104
			CSchemaClassInfo::GetBaseClass(
					int nIndex);  // 463
			CSchemaClassInfo::HasFlag1(
				SchemaClassFlags1_t nFlag);  // 162
			CSchemaClassInfo::IsNoschemaClass(); // 464
			CSchemaClassInfo::GetName(); // 467
			CSchemaClassInfo::GetName(); // 471
			CSchemaClassInfo::GetName(); // 471
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 471
		}
	}
	CSchemaClassInfo::GetName(); // 436
	V_strlen(const char* str); // 19
	ComputeClassNameHash(const char* pClassName); // 15
	ComputeClassNameHash(const char* pClassName); // 436
	CSchemaSystem::ReportBindingRegistration<CSchemaClassInfo>(
							CSchemaClassInfo* pBinding,
							CSchemaClassInfo* pRegisteredBinding,
							const char* pBinaryName);  // 441
	CSchemaSystem::ReportBindingRegistration<CSchemaClassInfo>(
							CSchemaClassInfo* pBinding,
							CSchemaClassInfo* pRegisteredBinding,
							const char* pBinaryName);  // 445
	CSchemaClassInfo::GetName(); // 449
	CSchemaClassInfo::GetSizeOf(); // 451
	CSchemaClassInfo::GetAlignOf(); // 452
	CSchemaClassInfo::GetBaseClassCount(); // 460
} /* size: 0, variables: 7, inline expansions: 10 (212 bytes) */

// <000F8F77> schemasystem/schemasystem.cpp:491
// variables: 6
// function calls: 11
void CSchemaSystemTypeScope::InstallSchemaEnumBinding(const char* pBinaryName, CSchemaEnumInfo* pInfo)
{
	SchemaClassId_t nId; // 495
	CSchemaEnumInfo* pRegisteredBinding; // 496
	CSchemaType_DeclaredEnum* pSchmaType; // 506
	const char   __FUNCTION__; // 53161
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 507
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
	V_strlen(const char* str); // 19
	ComputeClassNameHash(const char* pClassName); // 15
	ComputeClassNameHash(const char* pClassName); // 495
	CSchemaEnumInfo::GetName(); // 495
	CSchemaSystem::ReportBindingRegistration<CSchemaEnumInfo>(
							CSchemaEnumInfo* pBinding,
							CSchemaEnumInfo* pRegisteredBinding,
							const char* pBinaryName);  // 500
	CSchemaSystem::ReportBindingRegistration<CSchemaEnumInfo>(
							CSchemaEnumInfo* pBinding,
							CSchemaEnumInfo* pRegisteredBinding,
							const char* pBinaryName);  // 505
	CSchemaEnumInfo::GetName(); // 506
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 125
	CSchemaType::As<CSchemaType_DeclaredEnum>(); // 506
	CSchemaSystemTypeScope::IsGlobalScope(); // 511
	{
	}
	CSchemaType_DeclaredEnum::SetEnum_Direct(
			EnumIntrospectionHandle_t pEnum);  // 513
} /* size: 0, variables: 4, inline expansions: 11 (326 bytes) */

// <001056F5> schemasystem/schemasystem.cpp:518
// variable: 1
// function calls: 3
void CSchemaSystemTypeScope::FindRawClassBinding(const char* pStructName)
{
	SchemaClassId_t nId; // 520
	V_strlen(const char* str); // 19
	ComputeClassNameHash(const char* pClassName); // 15
	ComputeClassNameHash(const char* pClassName); // 520
} /* size: 121, variables: 1, inline expansions: 3 (88 bytes) */

// <000F8F44> schemasystem/schemasystem.cpp:518
// variable: 1
void CSchemaSystemTypeScope::FindRawClassBinding(const char* pStructName)
{
	SchemaClassId_t nId; // 520
} /* size: 0, variables: 1 */

// <00105E54> schemasystem/schemasystem.cpp:524
// variables: 4
// function calls: 10
void CSchemaSystemTypeScope::FindRawClassBinding(SchemaClassId_t nId)
{
	UtlTSHashHandle_t i; // 528
	HashIntConventional(const int n); // 63
	Hash(const unsigned int& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	CUtlTSHashBase<CSchemaClassInfo::Find(
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	CUtlTSHashBase<CSchemaClassInfo::Find(
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	CUtlTSHashBase<CSchemaClassInfo::Find(
		unsigned int uiKey);  // 528
	{
		CSchemaClassInfo* pBinding; // 532
	}
	CSchemaSystemTypeScope::FindRawClassBinding(
				SchemaClassId_t nId);  // 524
} /* size: 372, variables: 1, inline expansions: 8 (569 bytes) */

// <000F8F04> schemasystem/schemasystem.cpp:524
// variables: 2
void CSchemaSystemTypeScope::FindRawClassBinding(SchemaClassId_t nId)
{
	UtlTSHashHandle_t i; // 528
	{
		CSchemaClassInfo* pBinding; // 532
	}
} /* size: 0, variables: 1 */

// <0010585C> schemasystem/schemasystem.cpp:548
// variable: 1
// function calls: 3
void CSchemaSystemTypeScope::FindRawEnumBinding(const char* pEnumName)
{
	SchemaClassId_t nId; // 550
	V_strlen(const char* str); // 19
	ComputeClassNameHash(const char* pClassName); // 15
	ComputeClassNameHash(const char* pClassName); // 550
} /* size: 121, variables: 1, inline expansions: 3 (88 bytes) */

// <000F8ED1> schemasystem/schemasystem.cpp:548
// variable: 1
void CSchemaSystemTypeScope::FindRawEnumBinding(const char* pEnumName)
{
	SchemaClassId_t nId; // 550
} /* size: 0, variables: 1 */

// <00106247> schemasystem/schemasystem.cpp:554
// variables: 4
// function calls: 10
void CSchemaSystemTypeScope::FindRawEnumBinding(SchemaClassId_t nId)
{
	UtlTSHashHandle_t i; // 558
	HashIntConventional(const int n); // 63
	Hash(const unsigned int& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	CUtlTSHashBase<CSchemaEnumInfo::Find(
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	CUtlTSHashBase<CSchemaEnumInfo::Find(
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	CUtlTSHashBase<CSchemaEnumInfo::Find(
		unsigned int uiKey);  // 558
	{
		CSchemaEnumInfo* pBinding; // 562
	}
	CSchemaSystemTypeScope::FindRawEnumBinding(
				SchemaClassId_t nId);  // 554
} /* size: 372, variables: 1, inline expansions: 8 (569 bytes) */

// <000F8E91> schemasystem/schemasystem.cpp:554
// variables: 2
void CSchemaSystemTypeScope::FindRawEnumBinding(SchemaClassId_t nId)
{
	UtlTSHashHandle_t i; // 558
	{
		CSchemaEnumInfo* pBinding; // 562
	}
} /* size: 0, variables: 1 */

// <000F8D9A> schemasystem/schemasystem.cpp:578
// function call: 1
void CSchemaSystem::RegisterAtomics(const char* pBinaryName, const char* pProjectName, CSchemaType** pTypeTable, int nTypeTableSize, SchemaAtomicTypeInfo_t* const* pToRegister)
{
	CSchemaSystem::RegisterAtomicType(
				AtomicTypeIntrospectionHandle_t pAtomicType);  // 586
} /* size: 121, inline expansions: 1 (12 bytes) */

// <000F8CDC> schemasystem/schemasystem.cpp:591
void CSchemaSystem::RegisterEnums(const char* pBinaryName, const char* pProjectName, CSchemaType** pTypeTable, int nTypeTableSize, SchemaEnumInfoData_t* const* pToRegister)
{
} /* size: 75 */

// <000F8BE6> schemasystem/schemasystem.cpp:606
// variable: 1
void CSchemaSystem::RegisterClasses(const char* pBinaryName, const char* pProjectName, CSchemaType** pTypeTable, int nTypeTableSize, SchemaClassInfoData_t* const* pToRegister, CBufferString* pFailureReason)
{
	bool bCompleted; // 613
} /* size: 135, variables: 1 */

// <000F8B8F> schemasystem/schemasystem.cpp:632
void CSchemaSystem::ValidateClasses(SchemaClassInfoData_t* const* pToValidate)
{
} /* size: 65 */

// <000F82EE> schemasystem/schemasystem.cpp:642
// variables: 10
// function calls: 29
void CSchemaSystem::LoadSchemaDataForModules(const char ** ppModuleNames, int nNumModules)
{
	CUtlVector<_PlatModule_t*, CUtlMemory<_PlatModule_t*, int> > loadedModules; // 650
	const char   __FUNCTION__; // 53161
	{
		int i; // 655
		{
			const char* pModuleName; // 657
			PlatModule_t hModule; // 658
			{
				int i; // 1531
				CUtlVectorBase<_PlatModule_t::Count(); // 1531
				CUtlMemory<_PlatModule_t::operator[](
						int i);  // 609
				CUtlVectorBase<_PlatModule_t::Element(
					int i);  // 1533
			}
			CUtlVectorBase<_PlatModule_t::Find(
				_PlatModule_t* const& src);  // 664
			CUtlMemory<_PlatModule_t::operator[](
					int i);  // 602
			CUtlVectorBase<_PlatModule_t::Element(
				int i);  // 1201
			CopyConstruct<_PlatModule_t*>(_PlatModule_t** pMemory,
							_PlatModule_t* const& src);  // 1201
			CUtlVectorBase<_PlatModule_t::ResetDbgInfo(); // 824
			CUtlVectorBase<_PlatModule_t::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<_PlatModule_t::AddToTail(
					_PlatModule_t* const& src);  // 674
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 677
	}
	{
		int i; // 682
		{
			PlatModule_t hModule; // 684
			InstallSchemaBindingsFunc_t pInstallSchemaBindingsFunc; // 689
			CUtlMemory<_PlatModule_t::NumAllocated(); // 1196
			CUtlMemory<_PlatModule_t::operator[](
					int i);  // 602
			CUtlVectorBase<_PlatModule_t::Element(
				int i);  // 1201
			CopyConstruct<_PlatModule_t*>(_PlatModule_t** pMemory,
							_PlatModule_t* const& src);  // 1201
			CUtlMemory<_PlatModule_t::Base(); // 112
			CUtlVectorBase<_PlatModule_t::Base(); // 368
			CUtlVectorBase<_PlatModule_t::ResetDbgInfo(); // 824
			CUtlVectorBase<_PlatModule_t::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<_PlatModule_t::AddToTail(
					_PlatModule_t* const& src);  // 701
		}
	}
	CUtlMemory<_PlatModule_t::ValidateGrowSize(); // 475
	CUtlMemory<_PlatModule_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<_PlatModule_t::ResetDbgInfo(); // 530
	CUtlVectorBase<_PlatModule_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<_PlatModule_t::CUtlVector(); // 650
	CUtlMemory<_PlatModule_t::Purge(); // 903
	CUtlMemory<_PlatModule_t::Purge(); // 1799
	CUtlVectorBase<_PlatModule_t::Purge(); // 560
	CUtlVectorBase<_PlatModule_t::~CUtlVectorBase(); // 410
	CUtlVector<_PlatModule_t::~CUtlVector(); // 711
} /* size: 0, variables: 2, inline expansions: 10 (377 bytes) */

// <001066FD> schemasystem/schemasystem.cpp:713
// variable: 1
// function calls: 4
void CSchemaSystem::UnloadModulesLoadedForSchemaData()
{
	{
		int i; // 715
		CUtlVectorBase<_PlatModule_t::Count(); // 715
		CUtlMemory<_PlatModule_t::operator[](
				int i);  // 588
		CUtlVectorBase<_PlatModule_t::operator[](
				int i);  // 717
	}
	CUtlVectorBase<_PlatModule_t::RemoveAll(); // 720
} /* size: 0, inline expansions: 1 (0 bytes) */

// <000F82BB> schemasystem/schemasystem.cpp:713
// variable: 1
void CSchemaSystem::UnloadModulesLoadedForSchemaData()
{
	{
		int i; // 715
	}
} /* size: 0 */

// <00106DF6> schemasystem/schemasystem.cpp:723
void CSchemaSystem::FindClassBindingBinaryName(const CSchemaClassInfo* pBinding)
{
} /* size: 9 */

// <00104A36> schemasystem/schemasystem.cpp:728
void CSchemaSystem::FindClassBindingProjectName(const CSchemaClassInfo* pBinding)
{
} /* size: 9 */

// <000F8249> schemasystem/schemasystem.cpp:735
void CSchemaSystem::FindEnumBindingBinaryName(const CSchemaEnumInfo* pBinding)
{
} /* size: 0 */

// <00104A67> schemasystem/schemasystem.cpp:740
void CSchemaSystem::FindEnumBindingProjectName(const CSchemaEnumInfo* pBinding)
{
} /* size: 9 */

// <000F7E5E> schemasystem/schemasystem.cpp:747
// variables: 7
// function calls: 7
void CSchemaSystemTypeScope::FindDescendentsOfClass_Start(ClassIntrospectionHandle_t pClass, SchemaSubclassTraversalDepth_t nDepth, CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> >* pOutResult)
{
	CSchemaClassInfo** pAllBindings; // 749
	int nCount; // 750
	bool bDeep; // 754
	bool bIncludeAbstract; // 755
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 365
	CUtlTSHashBase<CSchemaClassInfo::Count(); // 750
	{
		int i; // 408
		{
			const HashBucket_t& bucket; // 410
			CThreadSpinRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 411
			{
				HashFixedData_t* pElement; // 412
				CThreadSpinRWLock::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 420
			}
			CThreadSpinRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 424
		}
	}
	CUtlTSHashBase<CSchemaClassInfo::GetElementsData(
			int nFirstElement,
			int nCount,
			CSchemaClassInfo** pData);  // 752
} /* size: 378, variables: 4, inline expansions: 4 (229 bytes) */

// <000F7873> schemasystem/schemasystem.cpp:762
// variables: 3
// function calls: 21
void CSchemaSystemTypeScope::FindDescendentsOfClass_R(CSchemaClassInfo** pAllBindings, const int nCount, ClassIntrospectionHandle_t pParent, bool bDeep, bool bIncludeAbstract, CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> >* pOutResult)
{
	{
		int i; // 765
		{
			ClassIntrospectionHandle_t pClass; // 767
			{
				int i; // 1531
				CUtlVectorBase<const CSchemaClassInfo::Count(); // 1531
				CUtlMemory<const CSchemaClassInfo::operator[](
						int i);  // 609
				CUtlVectorBase<const CSchemaClassInfo::Element(
					int i);  // 1533
			}
			CUtlVectorBase<const CSchemaClassInfo::Find(
				const CSchemaClassInfo* const& src);  // 770
			CSchemaClassInfo::GetBaseClassCount(); // 100
			CSchemaClassInfo::GetBaseClassInfo(
					int nIndex);  // 104
			CSchemaBaseClassInfo::GetClass(); // 104
			CSchemaClassInfo::GetBaseClass(
					int nIndex);  // 100
			CSchemaClassInfo::GetSingleInheritanceBaseClass(); // 773
			CSchemaClassInfo::HasFlag1(
				SchemaClassFlags1_t nFlag);  // 775
			CUtlMemory<const CSchemaClassInfo::NumAllocated(); // 1196
			CUtlMemory<const CSchemaClassInfo::operator[](
					int i);  // 602
			CUtlVectorBase<const CSchemaClassInfo::Element(
				int i);  // 1201
			CopyConstruct<const CSchemaClassInfo*>(const CSchemaClassInfo ** pMemory,
								const CSchemaClassInfo* const& src);  // 1201
			CUtlMemory<const CSchemaClassInfo::IsGrowable(); // 823
			CUtlMemory<const CSchemaClassInfo::IsExternallyAllocated(); // 859
			CUtlMemory<const CSchemaClassInfo::IsExternallyAllocated(); // 861
			CUtlMemory<const CSchemaClassInfo::Grow(
				int num);  // 806
			CUtlVectorBase<const CSchemaClassInfo::ResetDbgInfo(); // 824
			CUtlVectorBase<const CSchemaClassInfo::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<const CSchemaClassInfo::AddToTail(
					const CSchemaClassInfo* const& src);  // 777
		}
	}
} /* size: 519 */

// <00104A98> schemasystem/schemasystem.cpp:801
void CSchemaSystem::GlobalTypeScope()
{
} /* size: 12 */

// <001053D6> schemasystem/schemasystem.cpp:809
// variable: 1
// function calls: 8
void CSchemaSystem::FindTypeScopeForModule(const char* pBinaryName)
{
	UtlSymId_t nId; // 811
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<CSchemaSystemTypeScope::Find(
		const char* pString);  // 811
	CUtlVectorBase<CSchemaSystemTypeScope::Count(); // 53
	{
	}
	CUtlMemory<CSchemaSystemTypeScope::operator[](
			int i);  // 588
	CUtlVectorBase<CSchemaSystemTypeScope::operator[](
			int i);  // 54
	CUtlStringMap<CSchemaSystemTypeScope::operator[](
			IndexType_t n);  // 818
	CSchemaSystem::FindTypeScopeForModule(
				const char* pBinaryName);  // 809
} /* size: 0, variables: 1, inline expansions: 8 (138 bytes) */

// <000F7827> schemasystem/schemasystem.cpp:809
// variable: 1
void CSchemaSystem::FindTypeScopeForModule(const char* pBinaryName)
{
	UtlSymId_t nId; // 811
} /* size: 0, variables: 1 */

// <000F719E> schemasystem/schemasystem.cpp:825
// variables: 2
// function calls: 22
void CSchemaSystem::FindOrCreateTypeScopeForModule(const char* pBinaryName)
{
	UtlSymId_t nId; // 827
	{
		CSchemaSystemTypeScope* pNewScope; // 830
		CUtlSymbol::IsValid(); // 64
		CUtlSymbolTable::AddStringElement(
				const char* pString);  // 109
		CUtlVectorBase<CSchemaSystemTypeScope::Count(); // 111
		CUtlMemory<CSchemaSystemTypeScope::NumAllocated(); // 1196
		CUtlMemory<CSchemaSystemTypeScope::operator[](
				int i);  // 602
		CUtlVectorBase<CSchemaSystemTypeScope::Element(
			int i);  // 1201
		CopyConstruct<CSchemaSystemTypeScope*>(CSchemaSystemTypeScope** pMemory,
							CSchemaSystemTypeScope* const& src);  // 1201
		CUtlMemory<CSchemaSystemTypeScope::Base(); // 112
		CUtlVectorBase<CSchemaSystemTypeScope::Base(); // 368
		CUtlVectorBase<CSchemaSystemTypeScope::ResetDbgInfo(); // 824
		CUtlVectorBase<CSchemaSystemTypeScope::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CSchemaSystemTypeScope::AddToTail(
				CSchemaSystemTypeScope* const& src);  // 118
		{
		}
		CUtlMemory<CSchemaSystemTypeScope::operator[](
				int i);  // 588
		CUtlVectorBase<CSchemaSystemTypeScope::operator[](
				int i);  // 126
		{
		}
		CUtlStringMap<CSchemaSystemTypeScope::Insert(
			const char* pString,
			CSchemaSystemTypeScope* const& item);  // 831
	}
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<CSchemaSystemTypeScope::Find(
		const char* pString);  // 827
	CUtlVectorBase<CSchemaSystemTypeScope::Count(); // 53
	{
	}
	CUtlMemory<CSchemaSystemTypeScope::operator[](
			int i);  // 588
	CUtlVectorBase<CSchemaSystemTypeScope::operator[](
			int i);  // 54
	CUtlStringMap<CSchemaSystemTypeScope::operator[](
			IndexType_t n);  // 834
} /* size: 0, variables: 1, inline expansions: 7 (185 bytes) */

// <00104DA1> schemasystem/schemasystem.cpp:840
// function call: 1
void CSchemaSystem::GetTypeScopeForBinding(SchemaTypeScope_t nTypeScope, const char* pModuleName)
{
	CSchemaSystem::GetTypeScopeForBinding(
				SchemaTypeScope_t nTypeScope,
				const char* pModuleName);  // 840
} /* size: 33, inline expansions: 1 (15 bytes) */

// <000F716B> schemasystem/schemasystem.cpp:840
void CSchemaSystem::GetTypeScopeForBinding(SchemaTypeScope_t nTypeScope, const char* pModuleName)
{
} /* size: 0 */

// <000F6F32> schemasystem/schemasystem.cpp:865
// variables: 5
// function calls: 3
void CSchemaSystem::FindClassByScopedName(const char* pName)
{
	const char* pSeparator; // 867
	{
		char pScopeName; // 874
		int nScopeNameLen; // 875
		const char* pPostSeparator; // 876
		ISchemaSystemTypeScope* pScope; // 879
		V_strncpy<int>(char* pDest,
				const char* pSrc,
				int maxLenInChars);  // 877
	}
	strstr(const char* __haystack,
		const char* __needle);  // 247
	V_strstr(const char* s1,
		const char* search);  // 867
} /* size: 255, variables: 1, inline expansions: 2 (30 bytes) */

// <0010512A> schemasystem/schemasystem.cpp:892
// function calls: 6
void CSchemaSystem::ScopedNameForClass(ClassIntrospectionHandle_t pClass, char* pOutName, int nBufLen)
{
	CSchemaClassInfo::GetTypeScope(); // 894
	CSchemaSystemTypeScope::IsGlobalScope(); // 894
	CSchemaSystemTypeScope::GetScopeName(); // 900
	CSchemaSystem::ScopedNameForClass(
				ClassIntrospectionHandle_t pClass,
				char* pOutName,
				int nBufLen);  // 892
	CSchemaClassInfo::GetName(); // 896
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 896
} /* size: 215, inline expansions: 6 (149 bytes) */

// <000F6EF2> schemasystem/schemasystem.cpp:892
void CSchemaSystem::ScopedNameForClass(ClassIntrospectionHandle_t pClass, char* pOutName, int nBufLen)
{
} /* size: 0 */

// <000F6CB9> schemasystem/schemasystem.cpp:907
// variables: 5
// function calls: 3
void CSchemaSystem::FindEnumByScopedName(const char* pName)
{
	const char* pSeparator; // 909
	{
		char pScopeName; // 916
		int nScopeNameLen; // 917
		const char* pPostSeparator; // 918
		ISchemaSystemTypeScope* pScope; // 921
		V_strncpy<int>(char* pDest,
				const char* pSrc,
				int maxLenInChars);  // 919
	}
	strstr(const char* __haystack,
		const char* __needle);  // 247
	V_strstr(const char* s1,
		const char* search);  // 909
} /* size: 255, variables: 1, inline expansions: 2 (30 bytes) */

// <00104F58> schemasystem/schemasystem.cpp:934
// function calls: 6
void CSchemaSystem::ScopedNameForEnum(EnumIntrospectionHandle_t pEnum, char* pOutName, int nBufLen)
{
	CSchemaEnumInfo::GetTypeScope(); // 936
	CSchemaSystemTypeScope::IsGlobalScope(); // 936
	CSchemaSystemTypeScope::GetScopeName(); // 942
	CSchemaSystem::ScopedNameForEnum(
				EnumIntrospectionHandle_t pEnum,
				char* pOutName,
				int nBufLen);  // 934
	CSchemaEnumInfo::GetName(); // 938
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 938
} /* size: 215, inline expansions: 6 (149 bytes) */

// <000F6C79> schemasystem/schemasystem.cpp:934
void CSchemaSystem::ScopedNameForEnum(EnumIntrospectionHandle_t pEnum, char* pOutName, int nBufLen)
{
} /* size: 0 */

// <0010681E> schemasystem/schemasystem.cpp:949
// variables: 2
// function calls: 17
void CSchemaSystem::FindDescendentsOfClass(ClassIntrospectionHandle_t pClass, SchemaSubclassTraversalDepth_t nDepth, CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> >* pOutResult)
{
	CSchemaSystemTypeScope* pScope; // 955
	CSchemaSystemTypeScope::IsGlobalScope(); // 960
	{
		short unsigned int nIter; // 962
		CUtlVectorBase<CSchemaSystemTypeScope::Count(); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		CUtlVectorBase<CSchemaSystemTypeScope::Count(); // 79
		CUtlStringMap<CSchemaSystemTypeScope::Count(); // 142
		CUtlStringMap<CSchemaSystemTypeScope::First(); // 962
		{
		}
		CUtlMemory<CSchemaSystemTypeScope::operator[](
				int i);  // 588
		CUtlVectorBase<CSchemaSystemTypeScope::operator[](
				int i);  // 54
		CUtlStringMap<CSchemaSystemTypeScope::operator[](
				IndexType_t n);  // 964
		CUtlVectorBase<CSchemaSystemTypeScope::Count(); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		CUtlVectorBase<CSchemaSystemTypeScope::Count(); // 79
		CUtlStringMap<CSchemaSystemTypeScope::Count(); // 155
		CUtlStringMap<CSchemaSystemTypeScope::Next(
			IndexType_t i);  // 962
	}
	CSchemaSystem::FindDescendentsOfClass(
				ClassIntrospectionHandle_t pClass,
				SchemaSubclassTraversalDepth_t nDepth,
				CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> >* pOutResult);  // 949
} /* size: 0, variables: 1, inline expansions: 2 (230 bytes) */

// <000F6C1D> schemasystem/schemasystem.cpp:949
// variables: 2
void CSchemaSystem::FindDescendentsOfClass(ClassIntrospectionHandle_t pClass, SchemaSubclassTraversalDepth_t nDepth, CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> >* pOutResult)
{
	CSchemaSystemTypeScope* pScope; // 955
	{
		short unsigned int nIter; // 962
	}
} /* size: 0, variables: 1 */

// <000F42E9> schemasystem/schemasystem.cpp:972
// variables: 4
// function calls: 164
void CSchemaSystemTypeScope::CSchemaSystemTypeScope(const char* pScopeName, CSchemaSystemTypeScope* pParentScope)
{
	{
		{
		}
	}
	{
		ISchemaSystemTypeScope::ISchemaSystemTypeScope(); // 974
		CUtlString::CUtlString(); // 169
		CSchemaType::CSchemaType(
				ISchemaSystemTypeScope* pTypeScope);  // 381
		CSchemaType_Builtin::CSchemaType_Builtin(); // 974
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 69
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSchemaType::ValidateGrowSize()(CSchemaType* const& this); // 475
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSchemaType::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 496
		InvalidIndex(void); // 498
		InvalidIndex(void); // 500
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSchemaType::InvalidIterator()(CSchemaType* this); // 501
		CUtlRBTree<CUtlMap<CSchemaType::ResetDbgInfo()(CSchemaType* const&, CSchemaType* c this); // 503
		CUtlRBTree<CUtlMap<CSchemaType::CUtlRBTree(
				const LessFunc_t& lessfunc);  // 69
		CUtlMap<CSchemaType::CUtlMap(
			LessFunc_t lessfunc);  // 225
		CThreadFastMutex::CThreadFastMutex(
				const char* pLockName);  // 225
		CSchemaPtrMap<CSchemaType::CSchemaPtrMap(); // 974
		ValidateAlignment<CUtlTSHashBase<CSchemaClassInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSchemaClassInfo*> >(void); // 133
		CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfo::CUtlMemoryPool(
				int numElements,
				MemoryPoolGrowType_t growMode,
				const char* pszAllocOwner);  // 318
		{
			CInterlockedIntT<int, 4>::CInterlockedIntT(); // 2282
			{
			}
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 2291
		}
		CThreadSpinRWLock::CThreadSpinRWLock(
					const char* pLockName);  // 297
		HashBucket_t::HashBucket_t(); // 318
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 318
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 320
		{
			int i; // 322
			{
				HashBucket_t& bucket; // 324
			}
		}
		CUtlTSHashBase<CSchemaClassInfo::CUtlTSHashBase(
				int nAllocationCount);  // 809
		CUtlTSHash<CSchemaClassInfo::CUtlTSHash(
				int nAllocationCount);  // 973
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 69
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic::ValidateGrowSize()(int const&, int const&)>: this); // 475
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 496
		InvalidIndex(void); // 498
		InvalidIndex(void); // 500
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic::InvalidIterator()(int const&, int con this); // 501
		CUtlRBTree<CUtlMap<int, CSchemaType_Atomic::ResetDbgInfo()(int const&, int const&)>::Node_t, short u this); // 503
		CUtlRBTree<CUtlMap<int, CSchemaType_Atomic::CUtlRBTree(
				const LessFunc_t& lessfunc);  // 69
		CUtlMap<int, CSchemaType_Atomic::CUtlMap(
			LessFunc_t lessfunc);  // 225
		CThreadFastMutex::CThreadFastMutex(
				const char* pLockName);  // 225
		CSchemaPtrMap<int, CSchemaType_Atomic::CSchemaPtrMap(); // 974
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::ValidateGrowSize()(const At this); // 475
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 496
		InvalidIndex(void); // 498
		InvalidIndex(void); // 500
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::InvalidIterator()(co this); // 501
		CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::ResetDbgInfo()(const AtomicTypeInfo_T_t this); // 503
		CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::CUtlRBTree(
				const LessFunc_t& lessfunc);  // 69
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 69
		CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::CUtlMap(
			LessFunc_t lessfunc);  // 225
		CThreadFastMutex::CThreadFastMutex(
				const char* pLockName);  // 225
		CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::CSchemaPtrMap(); // 974
		CThreadFastMutex::CThreadFastMutex(
				const char* pLockName);  // 225
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield::ValidateGrowSize()(int const&, int const&) this); // 475
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 496
		InvalidIndex(void); // 498
		InvalidIndex(void); // 500
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield::InvalidIterator()(int const&, int c this); // 501
		CUtlRBTree<CUtlMap<int, CSchemaType_Bitfield::ResetDbgInfo()(int const&, int const&)>::Node_t, short this); // 503
		CUtlRBTree<CUtlMap<int, CSchemaType_Bitfield::CUtlRBTree(
				const LessFunc_t& lessfunc);  // 69
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 69
		CUtlMap<int, CSchemaType_Bitfield::CUtlMap(
			LessFunc_t lessfunc);  // 225
		CSchemaPtrMap<int, CSchemaType_Bitfield::CSchemaPtrMap(); // 974
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::ValidateGrowSize(); // 475
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 496
		InvalidIndex(void); // 498
		InvalidIndex(void); // 500
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::InvalidIterator(); // 501
		CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::ResetDbgInfo()(const Atomic this); // 503
		CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::CUtlRBTree(
				const LessFunc_t& lessfunc);  // 69
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 69
		CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::CUtlMap(
			LessFunc_t lessfunc);  // 225
		CThreadFastMutex::CThreadFastMutex(
				const char* pLockName);  // 225
		CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::CSchemaPtrMap(); // 974
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::ValidateGrowSize()(const this); // 475
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 496
		InvalidIndex(void); // 498
		InvalidIndex(void); // 500
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::InvalidIterator()( this); // 501
		CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::ResetDbgInfo()(const AtomicTypeInfo_T this); // 503
		CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::CUtlRBTree(
				const LessFunc_t& lessfunc);  // 69
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 69
		CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::CUtlMap(
			LessFunc_t lessfunc);  // 225
		CThreadFastMutex::CThreadFastMutex(
				const char* pLockName);  // 225
		CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::CSchemaPtrMap(); // 974
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 69
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::ValidateGrowSize()(const At this); // 475
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 496
		InvalidIndex(void); // 498
		InvalidIndex(void); // 500
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::InvalidIterator()(co this); // 501
		CUtlRBTree<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::ResetDbgInfo()(const AtomicTypeInfo_I_t this); // 503
		CUtlRBTree<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::CUtlRBTree(
				const LessFunc_t& lessfunc);  // 69
		CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::CUtlMap(
			LessFunc_t lessfunc);  // 225
		CThreadFastMutex::CThreadFastMutex(
				const char* pLockName);  // 225
		CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::CSchemaPtrMap(); // 974
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 69
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::ValidateGrowSize()(unsigned this); // 475
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 496
		InvalidIndex(void); // 498
		InvalidIndex(void); // 500
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::InvalidIterator()(uns this); // 501
		CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::ResetDbgInfo()(unsigned int const&, unsi this); // 503
		CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::CUtlRBTree(
				const LessFunc_t& lessfunc);  // 69
		CUtlMap<unsigned int, CSchemaType_DeclaredClass::CUtlMap(
			LessFunc_t lessfunc);  // 225
		CThreadFastMutex::CThreadFastMutex(
				const char* pLockName);  // 225
		CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass::CSchemaPtrMap(); // 974
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 69
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::ValidateGrowSize()(unsigned i this); // 475
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 496
		InvalidIndex(void); // 498
		InvalidIndex(void); // 500
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::InvalidIterator()(unsi this); // 501
		CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::ResetDbgInfo()(unsigned int const&, unsig this); // 503
		CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::CUtlRBTree(
				const LessFunc_t& lessfunc);  // 69
		CUtlMap<unsigned int, CSchemaType_DeclaredEnum::CUtlMap(
			LessFunc_t lessfunc);  // 225
		CThreadFastMutex::CThreadFastMutex(
				const char* pLockName);  // 225
		CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum::CSchemaPtrMap(); // 974
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 69
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, const SchemaAtomicTypeInfo_t::ValidateGrowSize()(int const&, int this); // 475
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, const SchemaAtomicTypeInfo_t::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 496
		InvalidIndex(void); // 498
		InvalidIndex(void); // 500
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, const SchemaAtomicTypeInfo_t::InvalidIterator()(int const this); // 501
		CUtlRBTree<CUtlMap<int, const SchemaAtomicTypeInfo_t::ResetDbgInfo()(int const&, int const&)>::Node_ this); // 503
		CUtlRBTree<CUtlMap<int, const SchemaAtomicTypeInfo_t::CUtlRBTree(
				const LessFunc_t& lessfunc);  // 69
		CUtlMap<int, const SchemaAtomicTypeInfo_t::CUtlMap(
			LessFunc_t lessfunc);  // 225
		CThreadFastMutex::CThreadFastMutex(
				const char* pLockName);  // 225
		CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t::CSchemaPtrMap(); // 974
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::ValidateGrowSize()(const this); // 475
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 496
		InvalidIndex(void); // 498
		InvalidIndex(void); // 500
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::InvalidIterator()( this); // 501
		CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::ResetDbgInfo()(const TypeAndCountInfo this); // 503
		CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::CUtlRBTree(
				const LessFunc_t& lessfunc);  // 69
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 69
		CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::CUtlMap(
			LessFunc_t lessfunc);  // 225
		CThreadFastMutex::CThreadFastMutex(
				const char* pLockName);  // 225
		CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray::CSchemaPtrMap(); // 974
		CUtlString::CUtlString(); // 169
		CSchemaType::CSchemaType(
				ISchemaSystemTypeScope* pTypeScope);  // 418
		CSchemaType_NoschemaType::CSchemaType_NoschemaType(); // 974
		ValidateAlignment<CUtlTSHashBase<CSchemaEnumInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSchemaEnumInfo*> >(void); // 133
		CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo::CUtlMemoryPool(
				int numElements,
				MemoryPoolGrowType_t growMode,
				const char* pszAllocOwner);  // 318
		{
			CInterlockedIntT<int, 4>::CInterlockedIntT(); // 2282
			{
			}
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 2291
		}
		CThreadSpinRWLock::CThreadSpinRWLock(
					const char* pLockName);  // 297
		HashBucket_t::HashBucket_t(); // 318
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 318
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 320
		{
			int i; // 322
			{
				HashBucket_t& bucket; // 324
			}
		}
		CUtlTSHashBase<CSchemaEnumInfo::CUtlTSHashBase(
				int nAllocationCount);  // 809
		CUtlTSHash<CSchemaEnumInfo::CUtlTSHash(
				int nAllocationCount);  // 974
		{
		}
		V_strcpy_safe<256>(char& pDest,
					const char* pSrc);  // 978
	}
} /* size: 0 */

// <000F4292> schemasystem/schemasystem.cpp:972
// variables: 2
void CSchemaSystemTypeScope::CSchemaSystemTypeScope(const char* pScopeName, CSchemaSystemTypeScope* pParentScope)
{
	const char   __FUNCTION__; // 53112
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 976
	}
} /* size: 0, variables: 1 */

// <000F1940> schemasystem/schemasystem.cpp:982
// variables: 5
// function calls: 194
void CSchemaSystemTypeScope::~CSchemaSystemTypeScope()
{
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
			int nLineNumber);  // 313
	{
		short unsigned int i; // 1312
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::FirstInorder()(unsigned int const& this); // 1312
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::Element(
			short unsigned int i);  // 1314
	}
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::IsExternallyAllocated()(uns this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::Purge()(unsigned this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::Purge()(unsigned this); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::InvalidIterator()(uns this); // 1288
	CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::Purge()(unsigned int const&, unsi this); // 1316
	CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::PurgeAndDeleteElements()(unsigned int const&, unsi this); // 348
	CUtlMap<unsigned int, CSchemaType_DeclaredClass::PurgeAndDeleteElements()(unsigned int const&, unsigned int co this); // 314
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 315
	CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass::PurgeAndDeleteElements(); // 984
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	{
		int i; // 683
		{
			HashBucket_t& bucket; // 685
			ThreadPause(void); // 3309
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 3305
			ThreadInterlockedAssignIf128(volatile int128* pDest,
							const int128& value,
							const int128& comparand);  // 3226
			CThreadSpinRWLock::AssignIf(
				const union LockInfo_t& newValue,
				const union LockInfo_t& comparand);  // 3257
			CThreadSpinRWLock::TryLockForWrite(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 3307
			CThreadSpinRWLock::LockForWrite(
					const char* pFileName,
					int nLineNumber);  // 687
		}
	}
	CUtlTSHashBase<CSchemaEnumInfo::RemoveAll(); // 668
	CUtlTSHashBase<CSchemaEnumInfo::RemoveAll(); // 352
	CUtlTSHashBase<CSchemaEnumInfo::Purge(); // 343
	CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo::~CUtlMemoryPool(); // 344
	CUtlTSHashBase<CSchemaEnumInfo::~CUtlTSHashBase(); // 803
	CUtlTSHash<CSchemaEnumInfo::~CUtlTSHash(); // 985
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	{
		int i; // 683
		{
			HashBucket_t& bucket; // 685
			ThreadPause(void); // 3309
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 3305
			ThreadInterlockedAssignIf128(volatile int128* pDest,
							const int128& value,
							const int128& comparand);  // 3226
			CThreadSpinRWLock::AssignIf(
				const union LockInfo_t& newValue,
				const union LockInfo_t& comparand);  // 3257
			CThreadSpinRWLock::TryLockForWrite(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 3307
			CThreadSpinRWLock::LockForWrite(
					const char* pFileName,
					int nLineNumber);  // 687
		}
	}
	CUtlTSHashBase<CSchemaClassInfo::RemoveAll(); // 668
	CUtlTSHashBase<CSchemaClassInfo::RemoveAll(); // 352
	CUtlTSHashBase<CSchemaClassInfo::Purge(); // 343
	CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfo::~CUtlMemoryPool(); // 344
	CUtlTSHashBase<CSchemaClassInfo::~CUtlTSHashBase(); // 803
	CUtlTSHash<CSchemaClassInfo::~CUtlTSHash(); // 985
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 413
	CSchemaType_NoschemaType::~CSchemaType_NoschemaType(); // 985
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield::IsExternallyAllocated()(int const&, int c this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield::Purge()(int const&, int const&) this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield::Purge()(int const&, int const&) this); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield::InvalidIterator()(int const&, int c this); // 1288
	CUtlRBTree<CUtlMap<int, CSchemaType_Bitfield::Purge()(int const&, int const&)>::Node_t, short this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield*, short unsigned int, bool (*)(int const&, int const&)>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield::Purge()(int const&, int const&) this); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield::~CUtlMemory()(int const&, int const&) this); // 510
	CUtlRBTree<CUtlMap<int, CSchemaType_Bitfield::~CUtlRBTree()(int const&, int const&)>::Node_t, short this); // 47
	CUtlMap<int, CSchemaType_Bitfield::~CUtlMap()(int const&, int const&)>* this); // 222
	CSchemaPtrMap<int, CSchemaType_Bitfield::~CSchemaPtrMap(); // 985
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::IsExternallyAllocated()( this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Purge()(const this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Purge()(const this); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::InvalidIterator()( this); // 1288
	CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Purge()(const TypeAndCountInfo this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray*, short unsigned int, bool (*)(const TypeAndCountInfo_t&, const TypeAndCountInfo_t&)>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Purge()(const this); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::~CUtlMemory()(const this); // 510
	CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::~CUtlRBTree()(const TypeAndCountInfo this); // 47
	CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::~CUtlMap()(const TypeAndCountInfo_t&, const this); // 222
	CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray::~CSchemaPtrMap(); // 985
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, const SchemaAtomicTypeInfo_t::IsExternallyAllocated()(int const this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, const SchemaAtomicTypeInfo_t::Purge()(int const&, int this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, const SchemaAtomicTypeInfo_t::Purge()(int const&, int this); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, const SchemaAtomicTypeInfo_t::InvalidIterator()(int const this); // 1288
	CUtlRBTree<CUtlMap<int, const SchemaAtomicTypeInfo_t::Purge()(int const&, int const&)>::Node_ this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<int, const SchemaAtomicTypeInfo_t*, short unsigned int, bool (*)(int const&, int const&)>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, const SchemaAtomicTypeInfo_t::Purge()(int const&, int this); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, const SchemaAtomicTypeInfo_t::~CUtlMemory()(int const&, int this); // 510
	CUtlRBTree<CUtlMap<int, const SchemaAtomicTypeInfo_t::~CUtlRBTree()(int const&, int const&)>::Node_ this); // 47
	CUtlMap<int, const SchemaAtomicTypeInfo_t::~CUtlMap()(int const&, int const&)>* this); // 222
	CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t::~CSchemaPtrMap(); // 985
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::IsExternallyAllocated()(unsi this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Purge()(unsigned i this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Purge()(unsigned i this); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::InvalidIterator()(unsi this); // 1288
	CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Purge()(unsigned int const&, unsig this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Purge()(unsigned i this); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::~CUtlMemory()(unsigned i this); // 510
	CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::~CUtlRBTree()(unsigned int const&, unsig this); // 47
	CUtlMap<unsigned int, CSchemaType_DeclaredEnum::~CUtlMap()(unsigned int const&, unsigned int con this); // 222
	CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum::~CSchemaPtrMap(); // 985
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::IsExternallyAllocated()(uns this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::Purge()(unsigned this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::Purge()(unsigned this); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::InvalidIterator()(uns this); // 1288
	CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::Purge()(unsigned int const&, unsi this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::Purge()(unsigned this); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::~CUtlMemory()(unsigned this); // 510
	CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::~CUtlRBTree()(unsigned int const&, unsi this); // 47
	CUtlMap<unsigned int, CSchemaType_DeclaredClass::~CUtlMap()(unsigned int const&, unsigned int co this); // 222
	CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass::~CSchemaPtrMap(); // 985
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::IsExternallyAllocated()(co this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Purge()(const At this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Purge()(const At this); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::InvalidIterator()(co this); // 1288
	CUtlRBTree<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Purge()(const AtomicTypeInfo_I_t this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*, short unsigned int, bool (*)(const AtomicTypeInfo_I_t&, const AtomicTypeInfo_I_t&)>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Purge()(const At this); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::~CUtlMemory()(const At this); // 510
	CUtlRBTree<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::~CUtlRBTree()(const AtomicTypeInfo_I_t this); // 47
	CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::~CUtlMap()(const AtomicTypeInfo_I_t&, const At this); // 222
	CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::~CSchemaPtrMap(); // 985
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::IsExternallyAllocated()( this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Purge()(const this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Purge()(const this); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::InvalidIterator()( this); // 1288
	CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Purge()(const AtomicTypeInfo_T this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*, short unsigned int, bool (*)(const AtomicTypeInfo_TT_t&, const AtomicTypeInfo_TT_t&)>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Purge()(const this); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::~CUtlMemory()(const this); // 510
	CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::~CUtlRBTree()(const AtomicTypeInfo_T this); // 47
	CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::~CUtlMap()(const AtomicTypeInfo_TT_t&, const this); // 222
	CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::~CSchemaPtrMap(); // 985
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Purge()(const Atomic this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*, short unsigned int, bool (*)(const AtomicTypeInfo_T_t&, const AtomicTypeInfo_T_t&)>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::~CUtlMemory(); // 510
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::~CUtlRBTree()(const Atomic this); // 47
	CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::~CUtlMap()(const AtomicTypeInfo_T_ this); // 222
	CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::~CSchemaPtrMap(); // 985
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::IsExternallyAllocated()(co this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Purge()(const At this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Purge()(const At this); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::InvalidIterator()(co this); // 1288
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Purge()(const AtomicTypeInfo_T_t this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*, short unsigned int, bool (*)(const AtomicTypeInfo_T_t&, const AtomicTypeInfo_T_t&)>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Purge()(const At this); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::~CUtlMemory()(const At this); // 510
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::~CUtlRBTree()(const AtomicTypeInfo_T_t this); // 47
	CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::~CUtlMap()(const AtomicTypeInfo_T_t&, const At this); // 222
	CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::~CSchemaPtrMap(); // 985
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic::IsExternallyAllocated()(int const&, int con this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic::Purge()(int const&, int const&)>: this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic::Purge()(int const&, int const&)>: this); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic::InvalidIterator()(int const&, int con this); // 1288
	CUtlRBTree<CUtlMap<int, CSchemaType_Atomic::Purge()(int const&, int const&)>::Node_t, short u this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic*, short unsigned int, bool (*)(int const&, int const&)>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic::Purge()(int const&, int const&)>: this); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic::~CUtlMemory()(int const&, int const&)>: this); // 510
	CUtlRBTree<CUtlMap<int, CSchemaType_Atomic::~CUtlRBTree()(int const&, int const&)>::Node_t, short u this); // 47
	CUtlMap<int, CSchemaType_Atomic::~CUtlMap()(int const&, int const&)>* this); // 222
	CSchemaPtrMap<int, CSchemaType_Atomic::~CSchemaPtrMap(); // 985
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSchemaType::IsExternallyAllocated()(CSchemaType* this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSchemaType::Purge()(CSchemaType* const& this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSchemaType::Purge()(CSchemaType* const& this); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSchemaType::InvalidIterator()(CSchemaType* this); // 1288
	CUtlRBTree<CUtlMap<CSchemaType::Purge()(CSchemaType* const&, CSchemaType* c this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CSchemaType*, CSchemaType_Ptr*, short unsigned int, bool (*)(CSchemaType* const&, CSchemaType* const&)>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSchemaType::Purge()(CSchemaType* const& this); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSchemaType::~CUtlMemory()(CSchemaType* const& this); // 510
	CUtlRBTree<CUtlMap<CSchemaType::~CUtlRBTree()(CSchemaType* const&, CSchemaType* c this); // 47
	CUtlMap<CSchemaType::~CUtlMap()(CSchemaType* const&, CSchemaType* const&)>* this); // 222
	CSchemaPtrMap<CSchemaType::~CSchemaPtrMap(); // 985
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 376
	CSchemaType_Builtin::~CSchemaType_Builtin(); // 982
} /* size: 1498, inline expansions: 173 (6151 bytes) */

// <000F1927> schemasystem/schemasystem.cpp:982
void CSchemaSystemTypeScope::~CSchemaSystemTypeScope()
{
} /* size: 0 */

// <000F1426> schemasystem/schemasystem.cpp:996
// function calls: 14
void CSchemaSystemTypeScope::InitializeBuiltinTypes()
{
	CUtlString::operator=(
			const char* src);  // 1002
	CUtlString::operator=(
			const char* src);  // 1007
	CUtlString::operator=(
			const char* src);  // 1010
	CUtlString::operator=(
			const char* src);  // 1011
	CUtlString::operator=(
			const char* src);  // 1012
	CUtlString::operator=(
			const char* src);  // 1013
	CUtlString::operator=(
			const char* src);  // 1014
	CUtlString::operator=(
			const char* src);  // 1015
	CUtlString::operator=(
			const char* src);  // 1016
	CUtlString::operator=(
			const char* src);  // 1017
	CUtlString::operator=(
			const char* src);  // 1018
	CUtlString::operator=(
			const char* src);  // 1019
	CUtlString::operator=(
			const char* src);  // 1020
	CUtlString::operator=(
			const char* src);  // 1021
} /* size: 631, inline expansions: 14 (168 bytes) */

// <00104AC2> schemasystem/schemasystem.cpp:1027
void CSchemaSystemTypeScope::GetScopeName()
{
} /* size: 9 */

// <00104AEC> schemasystem/schemasystem.cpp:1035
void CSchemaSystemTypeScope::IsGlobalScope()
{
} /* size: 16 */

// <000F123C> schemasystem/schemasystem.cpp:1042
// variables: 3
// function calls: 4
void CSchemaSystemTypeScope::MarkClassAsRequiringGlobalPromotion(ClassIntrospectionHandle_t pClass)
{
	CSchemaType* pType; // 1044
	const char   __FUNCTION__; // 53433
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1045
	}
	CSchemaClassInfo::GetName(); // 1044
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 125
	CSchemaType::As<CSchemaType_DeclaredClass>(); // 1046
	CSchemaType_DeclaredClass::MarkAsRequiringGlobalPromotion(); // 1046
} /* size: 0, variables: 2, inline expansions: 4 (84 bytes) */

// <000F1084> schemasystem/schemasystem.cpp:1052
// variables: 3
// function calls: 4
void CSchemaSystemTypeScope::MarkEnumAsRequiringGlobalPromotion(EnumIntrospectionHandle_t pEnum)
{
	CSchemaType* pType; // 1054
	const char   __FUNCTION__; // 53406
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1055
	}
	CSchemaEnumInfo::GetName(); // 1054
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 125
	CSchemaType::As<CSchemaType_DeclaredEnum>(); // 1056
	CSchemaType_DeclaredEnum::MarkAsRequiringGlobalPromotion(); // 1056
} /* size: 0, variables: 2, inline expansions: 4 (84 bytes) */

// <00106D01> schemasystem/schemasystem.cpp:1069
// function call: 1
void CSchemaSystemTypeScope::Type_Builtin(SchemaBuiltinType_t nType)
{
	{
	}
	CSchemaSystemTypeScope::Type_Builtin(
			SchemaBuiltinType_t nType);  // 1069
} /* size: 0, inline expansions: 1 (104 bytes) */

// <000F103A> schemasystem/schemasystem.cpp:1069
// variables: 2
void CSchemaSystemTypeScope::Type_Builtin(SchemaBuiltinType_t nType)
{
	const char   __FUNCTION__; // 52852
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1083
	}
} /* size: 0, variables: 1 */

// <000F0FAE> schemasystem/schemasystem.cpp:1090
// variables: 4
inline void ValidateAtomicType(const char* pExpectedTypeName, CSchemaType_Atomic* pType)
{
	const char   __FUNCTION__; // 53009
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1092
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1093
	}
	{
		int* _pCrash; // 1099
	}
} /* size: 0, variables: 1 */

// <000F0175> schemasystem/schemasystem.cpp:1106
// variables: 4
// function calls: 53
void CSchemaSystemTypeScope::Type_Ptr(CSchemaType* pPointedTo)
{
	const char   __FUNCTION__; // 52749
	CFmtStr fullTypeName; // 1116
	CSchemaType_Ptr* pType; // 1117
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1110
	}
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 1116
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
			int nLineNumber);  // 231
	CUtlRBTree<CUtlMap<CSchemaType::FindAltKeyType<CSchemaType*>(
					CSchemaType* const& search);  // 243
	CUtlMap<CSchemaType::Find(
		const KeyType_t& key);  // 232
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSchemaType::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<CSchemaType::Element(
		short unsigned int i);  // 92
	CUtlMap<CSchemaType::operator[](
			IndexType_t i);  // 236
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
	CSchemaPtrMap<CSchemaType::Find(
		CSchemaType* const& key);  // 1117
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 1126
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 1122
	CUtlString::CUtlString(); // 169
	CSchemaType::CSchemaType(
			ISchemaSystemTypeScope* pTypeScope);  // 224
	CSchemaType_Ptr::CSchemaType_Ptr(
			ISchemaSystemTypeScope* pTypeScope);  // 1121
	CUtlString::operator=(
			const char* src);  // 1122
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
			int nLineNumber);  // 252
	CUtlRBTree<CUtlMap<CSchemaType::FindAltKeyType<CSchemaType*>(
					CSchemaType* const& search);  // 243
	CUtlMap<CSchemaType::Find(
		const KeyType_t& key);  // 253
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSchemaType::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<CSchemaType::Element(
		short unsigned int i);  // 92
	CUtlMap<CSchemaType::operator[](
			IndexType_t i);  // 263
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 265
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 256
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMap<CSchemaType::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 257
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSchemaType::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<CSchemaType::Element(
		short unsigned int i);  // 92
	CUtlMap<CSchemaType::operator[](
			IndexType_t i);  // 258
	CSchemaPtrMap<CSchemaType::InsertOrDelete(
			CSchemaType* const& key,
			CSchemaType_Ptr* const& value);  // 1125
} /* size: 0, variables: 3, inline expansions: 53 (2164 bytes) */

// <000EF7D5> schemasystem/schemasystem.cpp:1131
// variables: 8
// function calls: 30
void CSchemaSystemTypeScope::Type_FixedArray(CSchemaType* pArrayOf, int nArrayCount, uint16 nArrayStride, uint8 nAlignOf)
{
	const char   __FUNCTION__; // 52933
	CFmtStr fullTypeName; // 1174
	TypeAndCountInfo_t info; // 1176
	CSchemaType_FixedArray* pType; // 1177
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1133
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1137
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1189
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1191
	}
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 1174
	TypeAndCountInfo_t::TypeAndCountInfo_t(
				int nCount,
				CSchemaType* pParam);  // 1176
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
			int nLineNumber);  // 231
	CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::FindAltKeyType<TypeAndCountInfo_t>(
						const TypeAndCountInfo_t& search);  // 243
	CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Find(
		const KeyType_t& key);  // 232
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Element(
		short unsigned int i);  // 92
	CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::operator[](
			IndexType_t i);  // 236
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
	CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Find(
		const TypeAndCountInfo_t& key);  // 1177
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 1195
	CUtlString::CUtlString(); // 169
	CSchemaType::CSchemaType(
			ISchemaSystemTypeScope* pTypeScope);  // 294
	CSchemaType_FixedArray::CSchemaType_FixedArray(
				ISchemaSystemTypeScope* pTypeScope);  // 1183
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 1184
	CUtlString::operator=(
			const char* src);  // 1184
} /* size: 0, variables: 4, inline expansions: 30 (1295 bytes) */

// <000EEA2C> schemasystem/schemasystem.cpp:1200
// variables: 2
// function calls: 51
void CSchemaSystemTypeScope::Type_Bitfield(int nBitfieldCount)
{
	CFmtStr fullTypeName; // 1208
	CSchemaType_Bitfield* pType; // 1210
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
			int nLineNumber);  // 231
	CUtlRBTree<CUtlMap<int, CSchemaType_Bitfield::FindAltKeyType<int>(
				const int& search);  // 243
	CUtlMap<int, CSchemaType_Bitfield::Find(
		const KeyType_t& key);  // 232
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<int, CSchemaType_Bitfield::Element(
		short unsigned int i);  // 92
	CUtlMap<int, CSchemaType_Bitfield::operator[](
			IndexType_t i);  // 236
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
	CSchemaPtrMap<int, CSchemaType_Bitfield::Find(
		const int& key);  // 1210
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 1221
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 1217
	CUtlString::CUtlString(); // 169
	CSchemaType::CSchemaType(
			ISchemaSystemTypeScope* pTypeScope);  // 355
	CSchemaType_Bitfield::CSchemaType_Bitfield(
				ISchemaSystemTypeScope* pTypeScope);  // 1216
	CUtlString::operator=(
			const char* src);  // 1217
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
			int nLineNumber);  // 252
	CUtlRBTree<CUtlMap<int, CSchemaType_Bitfield::FindAltKeyType<int>(
				const int& search);  // 243
	CUtlMap<int, CSchemaType_Bitfield::Find(
		const KeyType_t& key);  // 253
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<int, CSchemaType_Bitfield::Element(
		short unsigned int i);  // 92
	CUtlMap<int, CSchemaType_Bitfield::operator[](
			IndexType_t i);  // 263
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 265
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 256
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMap<int, CSchemaType_Bitfield::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 257
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<int, CSchemaType_Bitfield::Element(
		short unsigned int i);  // 92
	CUtlMap<int, CSchemaType_Bitfield::operator[](
			IndexType_t i);  // 258
	CSchemaPtrMap<int, CSchemaType_Bitfield::InsertOrDelete(
			const int& key,
			CSchemaType_Bitfield* const& value);  // 1220
} /* size: 820, variables: 2, inline expansions: 51 (2192 bytes) */

// <00105D9E> schemasystem/schemasystem.cpp:1226
// function calls: 3
void CSchemaSystemTypeScope::Type_NoschemaType()
{
	CSchemaSystemTypeScope::Type_NoschemaType(); // 1231
	CSchemaSystemTypeScope::Type_NoschemaType(); // 1231
	CSchemaSystemTypeScope::Type_NoschemaType(); // 1231
} /* size: 170, inline expansions: 3 (195 bytes) */

// <000EEA13> schemasystem/schemasystem.cpp:1226
void CSchemaSystemTypeScope::Type_NoschemaType()
{
} /* size: 0 */

// <0010D0F3> schemasystem/schemasystem.cpp:1240
// variables: 3
// function calls: 55
void CSchemaSystemTypeScope::Type_Atomic(const char* pTypeName, uint16 nSizeOf, uint8 nAlignOf)
{
	SchemaClassId_t nBaseNameHash; // 1248
	CSchemaType_Atomic* pType; // 1249
	V_strlen(const char* str); // 19
	ComputeClassNameHash(const char* pClassName); // 15
	ComputeClassNameHash(const char* pClassName); // 1248
	CSchemaType_Atomic::GetSizeOf(); // 1092
	{
	}
	CSchemaType_Atomic::GetAlignOf(); // 1093
	{
	}
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 1095
	V_strcmp(const char* s1,
		const char* s2);  // 1095
	CSchemaType_Atomic::GetAtomicId(); // 1097
	Plat_IsInDebugSession(void); // 1098
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 1099
	CSchemaType_Atomic::GetAtomicId(); // 1099
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1099
	ValidateAtomicType(const char* pExpectedTypeName,
				CSchemaType_Atomic* pType);  // 1253
	CUtlString::operator=(
			const char* src);  // 1259
	CUtlString::CUtlString(); // 169
	CSchemaType::CSchemaType(
			ISchemaSystemTypeScope* pTypeScope);  // 439
	CSchemaType_Atomic::CSchemaType_Atomic(
				ISchemaSystemTypeScope* pTypeScope);  // 1258
	{
	}
	CSchemaType_Atomic::GetAlignOf(); // 1093
	{
	}
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 1095
	V_strcmp(const char* s1,
		const char* s2);  // 1095
	CSchemaType_Atomic::GetAtomicId(); // 1097
	Plat_IsInDebugSession(void); // 1098
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 1099
	CSchemaType_Atomic::GetAtomicId(); // 1099
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1099
	{
		int* _pCrash; // 1099
	}
	ValidateAtomicType(const char* pExpectedTypeName,
				CSchemaType_Atomic* pType);  // 1264
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
			int nLineNumber);  // 252
	CUtlRBTree<CUtlMap<int, CSchemaType_Atomic::FindAltKeyType<int>(
				const int& search);  // 243
	CUtlMap<int, CSchemaType_Atomic::Find(
		const KeyType_t& key);  // 253
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<int, CSchemaType_Atomic::Element(
		short unsigned int i);  // 92
	CUtlMap<int, CSchemaType_Atomic::operator[](
			IndexType_t i);  // 263
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 265
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 256
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMap<int, CSchemaType_Atomic::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 257
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<int, CSchemaType_Atomic::Element(
		short unsigned int i);  // 92
	CUtlMap<int, CSchemaType_Atomic::operator[](
			IndexType_t i);  // 258
	CSchemaPtrMap<int, CSchemaType_Atomic::InsertOrDelete(
			const int& key,
			CSchemaType_Atomic* const& value);  // 1266
	CSchemaSystemTypeScope::Type_Atomic(
			const char* pTypeName,
			uint16 nSizeOf,
			uint8 nAlignOf);  // 1240
} /* size: 0, variables: 2, inline expansions: 55 (3121 bytes) */

// <000EE9B9> schemasystem/schemasystem.cpp:1240
// variables: 2
void CSchemaSystemTypeScope::Type_Atomic(const char* pTypeName, uint16 nSizeOf, uint8 nAlignOf)
{
	SchemaClassId_t nBaseNameHash; // 1248
	CSchemaType_Atomic* pType; // 1249
} /* size: 0, variables: 2 */

// <000EE4B0> schemasystem/schemasystem.cpp:1272
// function calls: 17
void CSchemaSystemTypeScope::FindType_Atomic(SchemaClassId_t nBaseNameHash)
{
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
			int nLineNumber);  // 231
	CUtlRBTree<CUtlMap<int, CSchemaType_Atomic::FindAltKeyType<int>(
				const int& search);  // 243
	CUtlMap<int, CSchemaType_Atomic::Find(
		const KeyType_t& key);  // 232
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<int, CSchemaType_Atomic::Element(
		short unsigned int i);  // 92
	CUtlMap<int, CSchemaType_Atomic::operator[](
			IndexType_t i);  // 236
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
	CSchemaPtrMap<int, CSchemaType_Atomic::Find(
		const int& key);  // 1288
	CSchemaSystemTypeScope::FindType_Atomic_Internal(
				SchemaClassId_t nBaseNameHash);  // 1274
} /* size: 305, inline expansions: 17 (954 bytes) */

// <001078AC> schemasystem/schemasystem.cpp:1280
// variable: 1
// function calls: 16
void CSchemaSystemTypeScope::FindType_Atomic_Internal(SchemaClassId_t nBaseNameHash)
{
	CSchemaType_Atomic* pType; // 1288
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
			int nLineNumber);  // 231
	CUtlRBTree<CUtlMap<int, CSchemaType_Atomic::FindAltKeyType<int>(
				const int& search);  // 243
	CUtlMap<int, CSchemaType_Atomic::Find(
		const KeyType_t& key);  // 232
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<int, CSchemaType_Atomic::Element(
		short unsigned int i);  // 92
	CUtlMap<int, CSchemaType_Atomic::operator[](
			IndexType_t i);  // 236
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
	CSchemaPtrMap<int, CSchemaType_Atomic::Find(
		const int& key);  // 1288
} /* size: 305, variables: 1, inline expansions: 16 (723 bytes) */

// <000EE47D> schemasystem/schemasystem.cpp:1280
// variable: 1
void CSchemaSystemTypeScope::FindType_Atomic_Internal(SchemaClassId_t nBaseNameHash)
{
	CSchemaType_Atomic* pType; // 1288
} /* size: 0, variables: 1 */

// <000EE3FB> schemasystem/schemasystem.cpp:1295
void CSchemaSystemTypeScope::FindType_Atomic_T(SchemaClassId_t nBaseNameHash, CSchemaType* pParam1)
{
} /* size: 9 */

// <000EDE49> schemasystem/schemasystem.cpp:1303
// variables: 4
// function calls: 17
void CSchemaSystemTypeScope::FindType_Atomic_T_Internal(SchemaClassId_t nBaseNameHash, CSchemaType* pParam1)
{
	const char   __FUNCTION__; // 53215
	AtomicTypeInfo_T_t info; // 1312
	CSchemaType_Atomic_T* pType; // 1313
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1308
	}
	AtomicTypeInfo_T_t::AtomicTypeInfo_T_t(
				int nId,
				CSchemaType* pParam);  // 1312
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
			int nLineNumber);  // 231
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::FindAltKeyType<AtomicTypeInfo_T_t>(
						const AtomicTypeInfo_T_t& search);  // 243
	CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Find(
		const KeyType_t& key);  // 232
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Element(
		short unsigned int i);  // 92
	CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::operator[](
			IndexType_t i);  // 236
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
	CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Find(
		const AtomicTypeInfo_T_t& key);  // 1313
} /* size: 0, variables: 3, inline expansions: 17 (638 bytes) */

// <000EDA62> schemasystem/schemasystem.cpp:1320
// variables: 5
// function calls: 10
void CSchemaSystemTypeScope::Type_Atomic_T(const char* pTypeName, uint16 nSizeOf, uint8 nAlignOf, CSchemaType* pParam1)
{
	const char   __FUNCTION__; // 52879
	SchemaClassId_t nBaseNameHash; // 1329
	CSchemaType_Atomic_T* pType; // 1330
	AtomicTypeInfo_T_t info; // 1352
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1325
	}
	V_strlen(const char* str); // 19
	ComputeClassNameHash(const char* pClassName); // 15
	ComputeClassNameHash(const char* pClassName); // 1329
	CUtlString::CUtlString(); // 169
	CSchemaType::CSchemaType(
			ISchemaSystemTypeScope* pTypeScope);  // 439
	CSchemaType_Atomic::CSchemaType_Atomic(
				ISchemaSystemTypeScope* pTypeScope);  // 507
	CSchemaType_Atomic_T::CSchemaType_Atomic_T(
				ISchemaSystemTypeScope* pTypeScope);  // 1341
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 1342
	AtomicTypeInfo_T_t::AtomicTypeInfo_T_t(
				int nId,
				CSchemaType* pParam);  // 1352
} /* size: 0, variables: 4, inline expansions: 10 (297 bytes) */

// <000ED9E0> schemasystem/schemasystem.cpp:1359
void CSchemaSystemTypeScope::FindType_Atomic_CollectionOfT(SchemaClassId_t nBaseNameHash, CSchemaType* pParam1)
{
} /* size: 9 */

// <000ED42E> schemasystem/schemasystem.cpp:1367
// variables: 4
// function calls: 17
void CSchemaSystemTypeScope::FindType_Atomic_CollectionOfT_Internal(SchemaClassId_t nBaseNameHash, CSchemaType* pParam1)
{
	const char   __FUNCTION__; // 53509
	AtomicTypeInfo_T_t info; // 1376
	CSchemaType_Atomic_CollectionOfT* pType; // 1377
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1372
	}
	AtomicTypeInfo_T_t::AtomicTypeInfo_T_t(
				int nId,
				CSchemaType* pParam);  // 1376
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
			int nLineNumber);  // 231
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::FindAltKeyType<AtomicTypeInfo_T_t>(
						const AtomicTypeInfo_T_t& search);  // 243
	CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Find(
		const KeyType_t& key);  // 232
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Element(
		short unsigned int i);  // 92
	CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::operator[](
			IndexType_t i);  // 236
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
	CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Find(
		const AtomicTypeInfo_T_t& key);  // 1377
} /* size: 0, variables: 3, inline expansions: 17 (638 bytes) */

// <000ECFEC> schemasystem/schemasystem.cpp:1384
// variables: 5
// function calls: 11
void CSchemaSystemTypeScope::Type_Atomic_CollectionOfT(const char* pTypeName, uint16 nSizeOf, uint8 nAlignOf, uint16 nElementSize, CSchemaType* pParam1, ISchemaCollectionManipulator* pManipulator)
{
	const char   __FUNCTION__; // 53188
	SchemaClassId_t nBaseNameHash; // 1393
	CSchemaType_Atomic_CollectionOfT* pType; // 1394
	AtomicTypeInfo_T_t info; // 1418
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1389
	}
	V_strlen(const char* str); // 19
	ComputeClassNameHash(const char* pClassName); // 15
	ComputeClassNameHash(const char* pClassName); // 1393
	CUtlString::CUtlString(); // 169
	CSchemaType::CSchemaType(
			ISchemaSystemTypeScope* pTypeScope);  // 439
	CSchemaType_Atomic::CSchemaType_Atomic(
				ISchemaSystemTypeScope* pTypeScope);  // 507
	CSchemaType_Atomic_T::CSchemaType_Atomic_T(
				ISchemaSystemTypeScope* pTypeScope);  // 551
	CSchemaType_Atomic_CollectionOfT::CSchemaType_Atomic_CollectionOfT(
					ISchemaSystemTypeScope* pTypeScope);  // 1405
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 1406
	AtomicTypeInfo_T_t::AtomicTypeInfo_T_t(
				int nId,
				CSchemaType* pParam);  // 1418
} /* size: 0, variables: 4, inline expansions: 11 (331 bytes) */

// <000ECF4E> schemasystem/schemasystem.cpp:1425
void CSchemaSystemTypeScope::FindType_Atomic_TT(SchemaClassId_t nBaseNameHash, CSchemaType* pParam1, CSchemaType* pParam2)
{
} /* size: 9 */

// <000EC95E> schemasystem/schemasystem.cpp:1433
// variables: 5
// function calls: 17
void CSchemaSystemTypeScope::FindType_Atomic_TT_Internal(SchemaClassId_t nBaseNameHash, CSchemaType* pParam1, CSchemaType* pParam2)
{
	const char   __FUNCTION__; // 53242
	AtomicTypeInfo_TT_t info; // 1444
	CSchemaType_Atomic_TT* pType; // 1445
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1435
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1436
	}
	AtomicTypeInfo_TT_t::AtomicTypeInfo_TT_t(
				int nId,
				CSchemaType* pParam1,
				CSchemaType* pParam2);  // 1444
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
			int nLineNumber);  // 231
	CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::FindAltKeyType<AtomicTypeInfo_TT_t>(
						const AtomicTypeInfo_TT_t& search);  // 243
	CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Find(
		const KeyType_t& key);  // 232
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Element(
		short unsigned int i);  // 92
	CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::operator[](
			IndexType_t i);  // 236
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
	CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Find(
		const AtomicTypeInfo_TT_t& key);  // 1445
} /* size: 0, variables: 3, inline expansions: 17 (643 bytes) */

// <000EC4B2> schemasystem/schemasystem.cpp:1452
// variables: 6
// function calls: 13
void CSchemaSystemTypeScope::Type_Atomic_TT(const char* pTypeName, uint16 nSizeOf, uint8 nAlignOf, CSchemaType* pParam1, CSchemaType* pParam2)
{
	const char   __FUNCTION__; // 52906
	SchemaClassId_t nBaseNameHash; // 1463
	CSchemaType_Atomic_TT* pType; // 1464
	AtomicTypeInfo_TT_t key; // 1488
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1454
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1455
	}
	V_strlen(const char* str); // 19
	ComputeClassNameHash(const char* pClassName); // 15
	ComputeClassNameHash(const char* pClassName); // 1463
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 1477
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 1477
	CUtlString::CUtlString(); // 169
	CSchemaType::CSchemaType(
			ISchemaSystemTypeScope* pTypeScope);  // 439
	CSchemaType_Atomic::CSchemaType_Atomic(
				ISchemaSystemTypeScope* pTypeScope);  // 507
	CSchemaType_Atomic_T::CSchemaType_Atomic_T(
				ISchemaSystemTypeScope* pTypeScope);  // 584
	CSchemaType_Atomic_TT::CSchemaType_Atomic_TT(
				ISchemaSystemTypeScope* pTypeScope);  // 1476
	AtomicTypeInfo_TT_t::AtomicTypeInfo_TT_t(
				int nId,
				CSchemaType* pParam1,
				CSchemaType* pParam2);  // 1488
} /* size: 0, variables: 4, inline expansions: 13 (329 bytes) */

// <000EBF3C> schemasystem/schemasystem.cpp:1495
// function calls: 18
void CSchemaSystemTypeScope::FindType_Atomic_I(SchemaClassId_t nBaseNameHash, int nParam)
{
	AtomicTypeInfo_I_t::AtomicTypeInfo_I_t(
				int nId,
				int nParam);  // 1511
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
			int nLineNumber);  // 231
	CUtlRBTree<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::FindAltKeyType<AtomicTypeInfo_I_t>(
						const AtomicTypeInfo_I_t& search);  // 243
	CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Find(
		const KeyType_t& key);  // 232
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Element(
		short unsigned int i);  // 92
	CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::operator[](
			IndexType_t i);  // 236
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
	CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Find(
		const AtomicTypeInfo_I_t& key);  // 1512
	CSchemaSystemTypeScope::FindType_Atomic_I_Internal(
					SchemaClassId_t nBaseNameHash,
					int nParam);  // 1497
} /* size: 305, inline expansions: 18 (948 bytes) */

// <00107D76> schemasystem/schemasystem.cpp:1503
// variables: 2
// function calls: 17
void CSchemaSystemTypeScope::FindType_Atomic_I_Internal(SchemaClassId_t nBaseNameHash, int nParam)
{
	AtomicTypeInfo_I_t key; // 1511
	CSchemaType_Atomic_I* pType; // 1512
	AtomicTypeInfo_I_t::AtomicTypeInfo_I_t(
				int nId,
				int nParam);  // 1511
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
			int nLineNumber);  // 231
	CUtlRBTree<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::FindAltKeyType<AtomicTypeInfo_I_t>(
						const AtomicTypeInfo_I_t& search);  // 243
	CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Find(
		const KeyType_t& key);  // 232
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Element(
		short unsigned int i);  // 92
	CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::operator[](
			IndexType_t i);  // 236
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
	CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Find(
		const AtomicTypeInfo_I_t& key);  // 1512
} /* size: 305, variables: 2, inline expansions: 17 (717 bytes) */

// <000EBEEF> schemasystem/schemasystem.cpp:1503
// variables: 2
void CSchemaSystemTypeScope::FindType_Atomic_I_Internal(SchemaClassId_t nBaseNameHash, int nParam)
{
	AtomicTypeInfo_I_t key; // 1511
	CSchemaType_Atomic_I* pType; // 1512
} /* size: 0, variables: 2 */

// <0010F90F> schemasystem/schemasystem.cpp:1519
// variables: 3
// function calls: 33
void CSchemaSystemTypeScope::Type_Atomic_I(const char* pTypeName, uint16 nSizeOf, uint8 nAlignOf, int nParam)
{
	SchemaClassId_t nBaseNameHash; // 1527
	CSchemaType_Atomic_I* pType; // 1528
	AtomicTypeInfo_I_t key; // 1550
	V_strlen(const char* str); // 19
	ComputeClassNameHash(const char* pClassName); // 15
	ComputeClassNameHash(const char* pClassName); // 1527
	CUtlString::CUtlString(); // 169
	CSchemaType::CSchemaType(
			ISchemaSystemTypeScope* pTypeScope);  // 439
	CSchemaType_Atomic::CSchemaType_Atomic(
				ISchemaSystemTypeScope* pTypeScope);  // 614
	CSchemaType_Atomic_I::CSchemaType_Atomic_I(
				ISchemaSystemTypeScope* pTypeScope);  // 1539
	AtomicTypeInfo_I_t::AtomicTypeInfo_I_t(
				int nId,
				int nParam);  // 1550
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
			int nLineNumber);  // 252
	CUtlRBTree<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::FindAltKeyType<AtomicTypeInfo_I_t>(
						const AtomicTypeInfo_I_t& search);  // 243
	CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Find(
		const KeyType_t& key);  // 253
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Element(
		short unsigned int i);  // 92
	CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::operator[](
			IndexType_t i);  // 263
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 265
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 256
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 257
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Element(
		short unsigned int i);  // 92
	CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::operator[](
			IndexType_t i);  // 258
	CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::InsertOrDelete(
			const AtomicTypeInfo_I_t& key,
			CSchemaType_Atomic_I* const& value);  // 1551
	CSchemaSystemTypeScope::Type_Atomic_I(
			const char* pTypeName,
			uint16 nSizeOf,
			uint8 nAlignOf,
			int nParam);  // 1519
} /* size: 639, variables: 3, inline expansions: 33 (1556 bytes) */

// <000EBE7B> schemasystem/schemasystem.cpp:1519
// variables: 3
void CSchemaSystemTypeScope::Type_Atomic_I(const char* pTypeName, uint16 nSizeOf, uint8 nAlignOf, int nParam)
{
	SchemaClassId_t nBaseNameHash; // 1527
	CSchemaType_Atomic_I* pType; // 1528
	AtomicTypeInfo_I_t key; // 1550
} /* size: 0, variables: 3 */

// <00108298> schemasystem/schemasystem.cpp:1557
// variables: 2
// function calls: 20
void CSchemaSystemTypeScope::FindType_DeclaredClass(const char* pTypeName)
{
	SchemaClassId_t nId; // 1559
	CSchemaType_DeclaredClass* pType; // 1560
	V_strlen(const char* str); // 19
	ComputeClassNameHash(const char* pClassName); // 15
	ComputeClassNameHash(const char* pClassName); // 1559
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
			int nLineNumber);  // 231
	CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::FindAltKeyType<unsigned int>(
					const unsigned int& search);  // 243
	CUtlMap<unsigned int, CSchemaType_DeclaredClass::Find(
		const KeyType_t& key);  // 232
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::Element(
		short unsigned int i);  // 92
	CUtlMap<unsigned int, CSchemaType_DeclaredClass::operator[](
			IndexType_t i);  // 236
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
	CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass::Find(
		const unsigned int& key);  // 1560
	CSchemaSystemTypeScope::FindType_DeclaredClass(
				const char* pTypeName);  // 1557
} /* size: 406, variables: 2, inline expansions: 20 (896 bytes) */

// <000EBE3B> schemasystem/schemasystem.cpp:1557
// variables: 2
void CSchemaSystemTypeScope::FindType_DeclaredClass(const char* pTypeName)
{
	SchemaClassId_t nId; // 1559
	CSchemaType_DeclaredClass* pType; // 1560
} /* size: 0, variables: 2 */

// <000EB385> schemasystem/schemasystem.cpp:1577
// variables: 4
// function calls: 34
void CSchemaSystemTypeScope::Type_DeclaredClass(const char* pTypeName)
{
	const char   __FUNCTION__; // 53009
	CSchemaType_DeclaredClass* pType; // 1587
	SchemaClassId_t nId; // 1601
	{
		int* _pCrash; // 1592
	}
	CUtlString::Get(); // 1592
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1592
	CUtlString::operator=(
			const char* src);  // 1599
	CUtlString::CUtlString(); // 169
	CSchemaType::CSchemaType(
			ISchemaSystemTypeScope* pTypeScope);  // 633
	CSchemaType_DeclaredClass::CSchemaType_DeclaredClass(
					ISchemaSystemTypeScope* pTypeScope);  // 1598
	V_strlen(const char* str); // 19
	ComputeClassNameHash(const char* pClassName); // 15
	ComputeClassNameHash(const char* pClassName); // 1601
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
			int nLineNumber);  // 252
	CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::FindAltKeyType<unsigned int>(
					const unsigned int& search);  // 243
	CUtlMap<unsigned int, CSchemaType_DeclaredClass::Find(
		const KeyType_t& key);  // 253
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::Element(
		short unsigned int i);  // 92
	CUtlMap<unsigned int, CSchemaType_DeclaredClass::operator[](
			IndexType_t i);  // 263
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 265
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 256
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMap<unsigned int, CSchemaType_DeclaredClass::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 257
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::Element(
		short unsigned int i);  // 92
	CUtlMap<unsigned int, CSchemaType_DeclaredClass::operator[](
			IndexType_t i);  // 258
	CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass::InsertOrDelete(
			const unsigned int& key,
			CSchemaType_DeclaredClass* const& value);  // 1602
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1583
} /* size: 781, variables: 3, inline expansions: 34 (1086 bytes) */

// <00108867> schemasystem/schemasystem.cpp:1608
// variables: 2
// function calls: 20
void CSchemaSystemTypeScope::FindType_DeclaredEnum(const char* pTypeName)
{
	SchemaClassId_t nId; // 1612
	CSchemaType_DeclaredEnum* pType; // 1613
	V_strlen(const char* str); // 19
	ComputeClassNameHash(const char* pClassName); // 15
	ComputeClassNameHash(const char* pClassName); // 1612
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
			int nLineNumber);  // 231
	CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::FindAltKeyType<unsigned int>(
					const unsigned int& search);  // 243
	CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Find(
		const KeyType_t& key);  // 232
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Element(
		short unsigned int i);  // 92
	CUtlMap<unsigned int, CSchemaType_DeclaredEnum::operator[](
			IndexType_t i);  // 236
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
	CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum::Find(
		const unsigned int& key);  // 1613
	CSchemaSystemTypeScope::FindType_DeclaredEnum(
				const char* pTypeName);  // 1608
} /* size: 406, variables: 2, inline expansions: 20 (896 bytes) */

// <000EB345> schemasystem/schemasystem.cpp:1608
// variables: 2
void CSchemaSystemTypeScope::FindType_DeclaredEnum(const char* pTypeName)
{
	SchemaClassId_t nId; // 1612
	CSchemaType_DeclaredEnum* pType; // 1613
} /* size: 0, variables: 2 */

// <000EB317> schemasystem/schemasystem.cpp:1630
void SetTypeScope_Internal(CSchemaType* pType, ISchemaSystemTypeScope* pScope)
{
} /* size: 0 */

// <0010B496> schemasystem/schemasystem.cpp:1639
// variables: 11
// function calls: 112
void PromoteUnresolvedAndGlobalTypes<int, CSchemaType_Bitfield, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Bitfield*)> >(CSchemaPtrMap<int, CSchemaType_Bitfield*>& localTypeMap, CSchemaPtrMap<int, CSchemaType_Bitfield*>& parentTypeMap, ISchemaSystemTypeScope* pParentTypeScope, const extraWork)
{
	CUtlVector<int, CUtlMemory<int, int> > unresolvedKeys; // 1646
	CUtlVector<CSchemaType_Bitfield*, CUtlMemory<CSchemaType_Bitfield*, int> > unresolvedTypes; // 1647
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
			int nLineNumber);  // 285
	{
		IndexType_t i; // 286
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<int, CSchemaType_Bitfield::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<int, CSchemaType_Bitfield::FirstInorder()(int const&, int const&)>::Node_t, this); // 351
		CUtlMap<int, CSchemaType_Bitfield::FirstInorder()(int const&, int const&)>* this); // 286
		{
			CSchemaType_Bitfield* val; // 288
			{
				int key; // 291
				IndexType_t nRemoveIndex; // 295
				CUtlMemory<int, int>::Base(); // 112
				CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
				CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
						int num);  // 1198
				CUtlMemory<int, int>::NumAllocated(); // 1196
				CUtlMemory<int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
					int i);  // 1201
				CopyConstruct<int>(int* pMemory,
							const int& src);  // 1201
				CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
						const int& src);  // 292
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield::operator[](
						short unsigned int i);  // 539
				CUtlRBTree<CUtlMap<int, CSchemaType_Bitfield::Element(
					short unsigned int i);  // 94
				CUtlMap<int, CSchemaType_Bitfield::Key(
					IndexType_t i);  // 291
				CUtlMemory<CSchemaType_Bitfield::operator[](
						int i);  // 602
				CUtlVectorBase<CSchemaType_Bitfield::Element(
					int i);  // 1201
				CopyConstruct<CSchemaType_Bitfield*>(CSchemaType_Bitfield** pMemory,
									CSchemaType_Bitfield* const& src);  // 1201
				CUtlMemory<CSchemaType_Bitfield::Grow(
					int num);  // 806
				CUtlVectorBase<CSchemaType_Bitfield::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<CSchemaType_Bitfield::AddToTail(
						CSchemaType_Bitfield* const& src);  // 293
				CUtlMap<int, CSchemaType_Bitfield::NextInorder(
						IndexType_t i);  // 296
				CUtlMap<int, CSchemaType_Bitfield::RemoveAt(
					IndexType_t i);  // 297
			}
			CUtlMap<int, CSchemaType_Bitfield::NextInorder(
					IndexType_t i);  // 301
			CSchemaType::DependsOnlyOnUnresolvedOrGlobalTypes(
								ISchemaSystemTypeScope* pGlobalScope);  // 1651
			operator()(const class* __closure,
					CSchemaType_Bitfield* pType); // 289
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<int, CSchemaType_Bitfield::Element(
				short unsigned int i);  // 92
			CUtlMap<int, CSchemaType_Bitfield::operator[](
					IndexType_t i);  // 288
		}
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 304
	CSchemaPtrMap<int, CSchemaType_Bitfield::ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<int, CSchemaType_Bitfield, CSchemaSystemTypeScope::FinalizeTypeScope(
																CUtlVector<int, CUtlMemory<int, int> >* pOutMatchingKeys,
																CUtlVector<CSchemaType_Bitfield*, CUtlMemory<CSchemaType_Bitfield*, int> >* pOutMatchingValues,
																const   p);  // 1648
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1646
	CUtlMemory<CSchemaType_Bitfield::ValidateGrowSize(); // 475
	CUtlMemory<CSchemaType_Bitfield::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSchemaType_Bitfield::ResetDbgInfo(); // 530
	CUtlVectorBase<CSchemaType_Bitfield::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSchemaType_Bitfield::CUtlVector(); // 1647
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1654
	{
	}
	{
		int i; // 1655
		{
			int localKey; // 1657
			CSchemaType_Bitfield* pLocalType; // 1658
			CSchemaType_Bitfield* pExistingParentType; // 1663
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
					int nLineNumber);  // 231
			CUtlRBTree<CUtlMap<int, CSchemaType_Bitfield::FindAltKeyType<int>(
						const int& search);  // 243
			CUtlMap<int, CSchemaType_Bitfield::Find(
				const KeyType_t& key);  // 232
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<int, CSchemaType_Bitfield::Element(
				short unsigned int i);  // 92
			CUtlMap<int, CSchemaType_Bitfield::operator[](
					IndexType_t i);  // 236
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
			CSchemaPtrMap<int, CSchemaType_Bitfield::Find(
				const int& key);  // 1663
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1666
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 1666
			SetTypeScope_Internal(CSchemaType* pType,
						ISchemaSystemTypeScope* pScope);  // 1668
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
					int nLineNumber);  // 252
			CUtlRBTree<CUtlMap<int, CSchemaType_Bitfield::FindAltKeyType<int>(
						const int& search);  // 243
			CUtlMap<int, CSchemaType_Bitfield::Find(
				const KeyType_t& key);  // 253
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 265
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 256
			Node_t::Node_t(
				const KeyType_t& k,
				const ElemType_t& e);  // 207
			CUtlMap<int, CSchemaType_Bitfield::Insert(
				const KeyType_t& key,
				const ElemType_t& insert,
				ERBTreeInsertBehavior eInsertBehavior);  // 257
			CSchemaPtrMap<int, CSchemaType_Bitfield::InsertOrDelete(
					const int& key,
					CSchemaType_Bitfield* const& value);  // 1669
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1657
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1661
		}
	}
	CUtlMemory<CSchemaType_Bitfield::Purge(); // 903
	CUtlMemory<CSchemaType_Bitfield::Purge(); // 1799
	CUtlVectorBase<CSchemaType_Bitfield::Purge(); // 560
	ValidateAlignment<CSchemaType_Bitfield*>(void); // 508
	CUtlMemory<CSchemaType_Bitfield::Purge(); // 510
	CUtlMemory<CSchemaType_Bitfield::~CUtlMemory(); // 562
	CUtlVectorBase<CSchemaType_Bitfield::~CUtlVectorBase(); // 410
	CUtlVector<CSchemaType_Bitfield::~CUtlVector(); // 1672
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1672
} /* size: 0, variables: 2, inline expansions: 40 (1465 bytes) */

// <00109A76> schemasystem/schemasystem.cpp:1639
// variables: 11
// function calls: 79
void PromoteUnresolvedAndGlobalTypes<TypeAndCountInfo_t, CSchemaType_FixedArray, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_FixedArray*)> >(CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*>& localTypeMap, CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*>& parentTypeMap, ISchemaSystemTypeScope* pParentTypeScope, const extraWork)
{
	CUtlVector<TypeAndCountInfo_t, CUtlMemory<TypeAndCountInfo_t, int> > unresolvedKeys; // 1646
	CUtlVector<CSchemaType_FixedArray*, CUtlMemory<CSchemaType_FixedArray*, int> > unresolvedTypes; // 1647
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
			int nLineNumber);  // 285
	{
		IndexType_t i; // 286
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::FirstInorder()(const TypeAndCou this); // 351
		CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::FirstInorder()(const TypeAndCountInfo_t&, this); // 286
		{
			CSchemaType_FixedArray* val; // 288
			CSchemaType_FixedArray::DependsOnlyOnUnresolvedOrGlobalTypes(
								ISchemaSystemTypeScope* pGlobalScope);  // 1651
			operator()(const class* __closure,
					CSchemaType_FixedArray* pType); // 289
			CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::NextInorder(
					IndexType_t i);  // 301
			{
				TypeAndCountInfo_t key; // 291
				IndexType_t nRemoveIndex; // 295
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::operator[](
						short unsigned int i);  // 539
				CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Element(
					short unsigned int i);  // 94
				CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Key(
					IndexType_t i);  // 291
				CUtlMemory<TypeAndCountInfo_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<TypeAndCountInfo_t, CUtlMemory<TypeAndCountInfo_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<TypeAndCountInfo_t>(TypeAndCountInfo_t* pMemory,
									const TypeAndCountInfo_t& src);  // 1201
				CUtlMemory<TypeAndCountInfo_t, int>::Grow(
					int num);  // 806
				CUtlVectorBase<TypeAndCountInfo_t, CUtlMemory<TypeAndCountInfo_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<TypeAndCountInfo_t, CUtlMemory<TypeAndCountInfo_t, int> >::AddToTail(
						const TypeAndCountInfo_t& src);  // 292
				CUtlMemory<CSchemaType_FixedArray::operator[](
						int i);  // 602
				CUtlVectorBase<CSchemaType_FixedArray::Element(
					int i);  // 1201
				CopyConstruct<CSchemaType_FixedArray*>(CSchemaType_FixedArray** pMemory,
									CSchemaType_FixedArray* const& src);  // 1201
				CUtlMemory<CSchemaType_FixedArray::Grow(
					int num);  // 806
				CUtlVectorBase<CSchemaType_FixedArray::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<CSchemaType_FixedArray::AddToTail(
						CSchemaType_FixedArray* const& src);  // 293
				CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::NextInorder(
						IndexType_t i);  // 296
				CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::RemoveAt(
					IndexType_t i);  // 297
			}
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Element(
				short unsigned int i);  // 92
			CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::operator[](
					IndexType_t i);  // 288
		}
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 304
	CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray::ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<TypeAndCountInfo_t, CSchemaType_FixedArray, CSchemaSystemTypeScope::FinalizeTypeScope(
																CUtlVector<TypeAndCountInfo_t, CUtlMemory<TypeAndCountInfo_t, int> >* pOutMatchingKeys,
																CUtlVector<CSchemaType_FixedArray*, CUtlMemory<CSchemaType_FixedArray*, int> >* pOutMatchingValues,
																const   p);  // 1648
	{
		int i; // 1655
		{
			TypeAndCountInfo_t localKey; // 1657
			CSchemaType_FixedArray* pLocalType; // 1658
			CSchemaType_FixedArray* pExistingParentType; // 1663
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
					int nLineNumber);  // 231
			CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::FindAltKeyType<TypeAndCountInfo_t>(
								const TypeAndCountInfo_t& search);  // 243
			CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Find(
				const KeyType_t& key);  // 232
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Element(
				short unsigned int i);  // 92
			CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::operator[](
					IndexType_t i);  // 236
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
			CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Find(
				const TypeAndCountInfo_t& key);  // 1663
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1666
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 1666
			SetTypeScope_Internal(CSchemaType* pType,
						ISchemaSystemTypeScope* pScope);  // 1668
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1661
		}
	}
	CUtlMemory<CSchemaType_FixedArray::Purge(); // 903
	CUtlMemory<CSchemaType_FixedArray::Purge(); // 1799
	CUtlVectorBase<CSchemaType_FixedArray::Purge(); // 560
	ValidateAlignment<CSchemaType_FixedArray*>(void); // 508
	CUtlMemory<CSchemaType_FixedArray::Purge(); // 510
	CUtlMemory<CSchemaType_FixedArray::~CUtlMemory(); // 562
	CUtlVectorBase<CSchemaType_FixedArray::~CUtlVectorBase(); // 410
	CUtlVector<CSchemaType_FixedArray::~CUtlVector(); // 1672
	CUtlMemory<TypeAndCountInfo_t, int>::Purge(); // 903
	CUtlMemory<TypeAndCountInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<TypeAndCountInfo_t, CUtlMemory<TypeAndCountInfo_t, int> >::Purge(); // 560
	CUtlVectorBase<TypeAndCountInfo_t, CUtlMemory<TypeAndCountInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TypeAndCountInfo_t, CUtlMemory<TypeAndCountInfo_t, int> >::~CUtlVector(); // 1672
	CUtlMemory<CSchemaType_FixedArray::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSchemaType_FixedArray::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSchemaType_FixedArray::CUtlVector(); // 1647
	CUtlMemory<TypeAndCountInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TypeAndCountInfo_t, CUtlMemory<TypeAndCountInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TypeAndCountInfo_t, CUtlMemory<TypeAndCountInfo_t, int> >::CUtlVector(); // 1646
} /* size: 1499, variables: 2, inline expansions: 30 (1751 bytes) */

// <000D509C> schemasystem/schemasystem.cpp:1639
// variables: 8
void PromoteUnresolvedAndGlobalTypes<CSchemaType*, CSchemaType_Ptr, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Ptr*)> >(CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*>& localTypeMap, CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*>& parentTypeMap, ISchemaSystemTypeScope* pParentTypeScope, const extraWork)
{
	const char   __FUNCTION__; // 53335
	CUtlVector<CSchemaType*, CUtlMemory<CSchemaType*, int> > unresolvedKeys; // 1646
	CUtlVector<CSchemaType_Ptr*, CUtlMemory<CSchemaType_Ptr*, int> > unresolvedTypes; // 1647
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1654
	}
	{
		int i; // 1655
		{
			CSchemaType* localKey; // 1657
			CSchemaType_Ptr* pLocalType; // 1658
			CSchemaType_Ptr* pExistingParentType; // 1663
		}
	}
} /* size: 0, variables: 3 */

// <000D4EE9> schemasystem/schemasystem.cpp:1639
// variables: 8
void PromoteUnresolvedAndGlobalTypes<int, CSchemaType_Atomic, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic*)> >(CSchemaPtrMap<int, CSchemaType_Atomic*>& localTypeMap, CSchemaPtrMap<int, CSchemaType_Atomic*>& parentTypeMap, ISchemaSystemTypeScope* pParentTypeScope, const extraWork)
{
	const char   __FUNCTION__; // 53335
	CUtlVector<int, CUtlMemory<int, int> > unresolvedKeys; // 1646
	CUtlVector<CSchemaType_Atomic*, CUtlMemory<CSchemaType_Atomic*, int> > unresolvedTypes; // 1647
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1654
	}
	{
		int i; // 1655
		{
			int localKey; // 1657
			CSchemaType_Atomic* pLocalType; // 1658
			CSchemaType_Atomic* pExistingParentType; // 1663
		}
	}
} /* size: 0, variables: 3 */

// <000D4D36> schemasystem/schemasystem.cpp:1639
// variables: 8
void PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_T_t, CSchemaType_Atomic_T, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic_T*)> >(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*>& localTypeMap, CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*>& parentTypeMap, ISchemaSystemTypeScope* pParentTypeScope, const extraWork)
{
	const char   __FUNCTION__; // 53335
	CUtlVector<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> > unresolvedKeys; // 1646
	CUtlVector<CSchemaType_Atomic_T*, CUtlMemory<CSchemaType_Atomic_T*, int> > unresolvedTypes; // 1647
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1654
	}
	{
		int i; // 1655
		{
			AtomicTypeInfo_T_t localKey; // 1657
			CSchemaType_Atomic_T* pLocalType; // 1658
			CSchemaType_Atomic_T* pExistingParentType; // 1663
		}
	}
} /* size: 0, variables: 3 */

// <000D4BB7> schemasystem/schemasystem.cpp:1639
// variables: 8
void PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic_CollectionOfT*)> >(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*>& localTypeMap, CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*>& parentTypeMap, ISchemaSystemTypeScope* pParentTypeScope, const extraWork)
{
	const char   __FUNCTION__; // 53335
	CUtlVector<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> > unresolvedKeys; // 1646
	CUtlVector<CSchemaType_Atomic_CollectionOfT*, CUtlMemory<CSchemaType_Atomic_CollectionOfT*, int> > unresolvedTypes; // 1647
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1654
	}
	{
		int i; // 1655
		{
			AtomicTypeInfo_T_t localKey; // 1657
			CSchemaType_Atomic_CollectionOfT* pLocalType; // 1658
			CSchemaType_Atomic_CollectionOfT* pExistingParentType; // 1663
		}
	}
} /* size: 0, variables: 3 */

// <000D4A0E> schemasystem/schemasystem.cpp:1639
// variables: 8
void PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic_TT*)> >(CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*>& localTypeMap, CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*>& parentTypeMap, ISchemaSystemTypeScope* pParentTypeScope, const extraWork)
{
	const char   __FUNCTION__; // 53335
	CUtlVector<AtomicTypeInfo_TT_t, CUtlMemory<AtomicTypeInfo_TT_t, int> > unresolvedKeys; // 1646
	CUtlVector<CSchemaType_Atomic_TT*, CUtlMemory<CSchemaType_Atomic_TT*, int> > unresolvedTypes; // 1647
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1654
	}
	{
		int i; // 1655
		{
			AtomicTypeInfo_TT_t localKey; // 1657
			CSchemaType_Atomic_TT* pLocalType; // 1658
			CSchemaType_Atomic_TT* pExistingParentType; // 1663
		}
	}
} /* size: 0, variables: 3 */

// <000D4865> schemasystem/schemasystem.cpp:1639
// variables: 8
void PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_I_t, CSchemaType_Atomic_I, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic_I*)> >(CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*>& localTypeMap, CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*>& parentTypeMap, ISchemaSystemTypeScope* pParentTypeScope, const extraWork)
{
	const char   __FUNCTION__; // 53335
	CUtlVector<AtomicTypeInfo_I_t, CUtlMemory<AtomicTypeInfo_I_t, int> > unresolvedKeys; // 1646
	CUtlVector<CSchemaType_Atomic_I*, CUtlMemory<CSchemaType_Atomic_I*, int> > unresolvedTypes; // 1647
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1654
	}
	{
		int i; // 1655
		{
			AtomicTypeInfo_I_t localKey; // 1657
			CSchemaType_Atomic_I* pLocalType; // 1658
			CSchemaType_Atomic_I* pExistingParentType; // 1663
		}
	}
} /* size: 0, variables: 3 */

// <000D29D9> schemasystem/schemasystem.cpp:1639
// variables: 14
// function calls: 115
void PromoteUnresolvedAndGlobalTypes<unsigned int, CSchemaType_DeclaredClass, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_DeclaredClass*)> >(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*>& localTypeMap, CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*>& parentTypeMap, ISchemaSystemTypeScope* pParentTypeScope, const extraWork)
{
	const char   __FUNCTION__; // 53335
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > unresolvedKeys; // 1646
	CUtlVector<CSchemaType_DeclaredClass*, CUtlMemory<CSchemaType_DeclaredClass*, int> > unresolvedTypes; // 1647
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1654
	}
	{
		int i; // 1655
		{
			unsigned int localKey; // 1657
			CSchemaType_DeclaredClass* pLocalType; // 1658
			CSchemaType_DeclaredClass* pExistingParentType; // 1663
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
					int nLineNumber);  // 231
			CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::FindAltKeyType<unsigned int>(
							const unsigned int& search);  // 243
			CUtlMap<unsigned int, CSchemaType_DeclaredClass::Find(
				const KeyType_t& key);  // 232
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::Element(
				short unsigned int i);  // 92
			CUtlMap<unsigned int, CSchemaType_DeclaredClass::operator[](
					IndexType_t i);  // 236
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
			CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass::Find(
				const unsigned int& key);  // 1663
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1666
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 1666
			SetTypeScope_Internal(CSchemaType* pType,
						ISchemaSystemTypeScope* pScope);  // 1668
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
					int nLineNumber);  // 252
			CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::FindAltKeyType<unsigned int>(
							const unsigned int& search);  // 243
			CUtlMap<unsigned int, CSchemaType_DeclaredClass::Find(
				const KeyType_t& key);  // 253
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 265
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 256
			Node_t::Node_t(
				const KeyType_t& k,
				const ElemType_t& e);  // 207
			CUtlMap<unsigned int, CSchemaType_DeclaredClass::Insert(
				const KeyType_t& key,
				const ElemType_t& insert,
				ERBTreeInsertBehavior eInsertBehavior);  // 257
			CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass::InsertOrDelete(
					const unsigned int& key,
					CSchemaType_DeclaredClass* const& value);  // 1669
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1717
			operator()(const class* __closure,
					CSchemaType_DeclaredClass* pType); // 1670
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 1657
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1661
		}
	}
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
			int nLineNumber);  // 285
	{
		IndexType_t i; // 286
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::FirstInorder()(unsigned int const& this); // 351
		CUtlMap<unsigned int, CSchemaType_DeclaredClass::FirstInorder()(unsigned int const&, unsigned this); // 286
		{
			CSchemaType_DeclaredClass* val; // 288
			{
				unsigned int key; // 291
				IndexType_t nRemoveIndex; // 295
				CUtlMemory<unsigned int, int>::Base(); // 112
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
						int num);  // 1198
				CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
					int i);  // 1201
				CopyConstruct<unsigned int>(unsigned int* pMemory,
								const unsigned int& src);  // 1201
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
						const unsigned int& src);  // 292
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::operator[](
						short unsigned int i);  // 539
				CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::Element(
					short unsigned int i);  // 94
				CUtlMap<unsigned int, CSchemaType_DeclaredClass::Key(
					IndexType_t i);  // 291
				CUtlMemory<CSchemaType_DeclaredClass::operator[](
						int i);  // 602
				CUtlVectorBase<CSchemaType_DeclaredClass::Element(
					int i);  // 1201
				CopyConstruct<CSchemaType_DeclaredClass*>(CSchemaType_DeclaredClass** pMemory,
										CSchemaType_DeclaredClass* const& src);  // 1201
				CUtlMemory<CSchemaType_DeclaredClass::Grow(
					int num);  // 806
				CUtlVectorBase<CSchemaType_DeclaredClass::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<CSchemaType_DeclaredClass::AddToTail(
						CSchemaType_DeclaredClass* const& src);  // 293
				CUtlMap<unsigned int, CSchemaType_DeclaredClass::NextInorder(
						IndexType_t i);  // 296
				CUtlMap<unsigned int, CSchemaType_DeclaredClass::RemoveAt(
					IndexType_t i);  // 297
			}
			CSchemaType_DeclaredClass::DependsOnlyOnUnresolvedOrGlobalTypes(
								ISchemaSystemTypeScope* pGlobalScope);  // 1651
			operator()(const class* __closure,
					CSchemaType_DeclaredClass* pType); // 289
			CUtlMap<unsigned int, CSchemaType_DeclaredClass::NextInorder(
					IndexType_t i);  // 301
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::Element(
				short unsigned int i);  // 92
			CUtlMap<unsigned int, CSchemaType_DeclaredClass::operator[](
					IndexType_t i);  // 288
		}
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 304
	CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass::ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<unsigned int, CSchemaType_DeclaredClass, CSchemaSystemTypeScope::FinalizeTypeScope(
																CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pOutMatchingKeys,
																CUtlVector<CSchemaType_DeclaredClass*, CUtlMemory<CSchemaType_DeclaredClass*, int> >* pOutMatchingValues,
																const   p);  // 1648
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 1646
	CUtlMemory<CSchemaType_DeclaredClass::ValidateGrowSize(); // 475
	CUtlMemory<CSchemaType_DeclaredClass::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSchemaType_DeclaredClass::ResetDbgInfo(); // 530
	CUtlVectorBase<CSchemaType_DeclaredClass::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSchemaType_DeclaredClass::CUtlVector(); // 1647
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 1654
	CUtlMemory<CSchemaType_DeclaredClass::Purge(); // 903
	CUtlMemory<CSchemaType_DeclaredClass::Purge(); // 1799
	CUtlVectorBase<CSchemaType_DeclaredClass::Purge(); // 560
	ValidateAlignment<CSchemaType_DeclaredClass*>(void); // 508
	CUtlMemory<CSchemaType_DeclaredClass::Purge(); // 510
	CUtlMemory<CSchemaType_DeclaredClass::~CUtlMemory(); // 562
	CUtlVectorBase<CSchemaType_DeclaredClass::~CUtlVectorBase(); // 410
	CUtlVector<CSchemaType_DeclaredClass::~CUtlVector(); // 1672
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 1672
} /* size: 0, variables: 3, inline expansions: 40 (1501 bytes) */

// <000D0B81> schemasystem/schemasystem.cpp:1639
// variables: 14
// function calls: 115
void PromoteUnresolvedAndGlobalTypes<unsigned int, CSchemaType_DeclaredEnum, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_DeclaredEnum*)> >(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*>& localTypeMap, CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*>& parentTypeMap, ISchemaSystemTypeScope* pParentTypeScope, const extraWork)
{
	const char   __FUNCTION__; // 53335
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > unresolvedKeys; // 1646
	CUtlVector<CSchemaType_DeclaredEnum*, CUtlMemory<CSchemaType_DeclaredEnum*, int> > unresolvedTypes; // 1647
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1654
	}
	{
		int i; // 1655
		{
			unsigned int localKey; // 1657
			CSchemaType_DeclaredEnum* pLocalType; // 1658
			CSchemaType_DeclaredEnum* pExistingParentType; // 1663
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
					int nLineNumber);  // 231
			CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::FindAltKeyType<unsigned int>(
							const unsigned int& search);  // 243
			CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Find(
				const KeyType_t& key);  // 232
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Element(
				short unsigned int i);  // 92
			CUtlMap<unsigned int, CSchemaType_DeclaredEnum::operator[](
					IndexType_t i);  // 236
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
			CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum::Find(
				const unsigned int& key);  // 1663
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1666
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 1666
			SetTypeScope_Internal(CSchemaType* pType,
						ISchemaSystemTypeScope* pScope);  // 1668
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
					int nLineNumber);  // 252
			CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::FindAltKeyType<unsigned int>(
							const unsigned int& search);  // 243
			CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Find(
				const KeyType_t& key);  // 253
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 265
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 256
			Node_t::Node_t(
				const KeyType_t& k,
				const ElemType_t& e);  // 207
			CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Insert(
				const KeyType_t& key,
				const ElemType_t& insert,
				ERBTreeInsertBehavior eInsertBehavior);  // 257
			CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum::InsertOrDelete(
					const unsigned int& key,
					CSchemaType_DeclaredEnum* const& value);  // 1669
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1723
			operator()(const class* __closure,
					CSchemaType_DeclaredEnum* pType); // 1670
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 1657
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1661
		}
	}
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
			int nLineNumber);  // 285
	{
		IndexType_t i; // 286
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::FirstInorder()(unsigned int const&, this); // 351
		CUtlMap<unsigned int, CSchemaType_DeclaredEnum::FirstInorder()(unsigned int const&, unsigned i this); // 286
		{
			CSchemaType_DeclaredEnum* val; // 288
			{
				unsigned int key; // 291
				IndexType_t nRemoveIndex; // 295
				CUtlMemory<unsigned int, int>::Base(); // 112
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
						int num);  // 1198
				CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
					int i);  // 1201
				CopyConstruct<unsigned int>(unsigned int* pMemory,
								const unsigned int& src);  // 1201
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
						const unsigned int& src);  // 292
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::operator[](
						short unsigned int i);  // 539
				CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Element(
					short unsigned int i);  // 94
				CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Key(
					IndexType_t i);  // 291
				CUtlMemory<CSchemaType_DeclaredEnum::operator[](
						int i);  // 602
				CUtlVectorBase<CSchemaType_DeclaredEnum::Element(
					int i);  // 1201
				CopyConstruct<CSchemaType_DeclaredEnum*>(CSchemaType_DeclaredEnum** pMemory,
									CSchemaType_DeclaredEnum* const& src);  // 1201
				CUtlMemory<CSchemaType_DeclaredEnum::Grow(
					int num);  // 806
				CUtlVectorBase<CSchemaType_DeclaredEnum::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<CSchemaType_DeclaredEnum::AddToTail(
						CSchemaType_DeclaredEnum* const& src);  // 293
				CUtlMap<unsigned int, CSchemaType_DeclaredEnum::NextInorder(
						IndexType_t i);  // 296
				CUtlMap<unsigned int, CSchemaType_DeclaredEnum::RemoveAt(
					IndexType_t i);  // 297
			}
			CSchemaType_DeclaredEnum::DependsOnlyOnUnresolvedOrGlobalTypes(
								ISchemaSystemTypeScope* pGlobalScope);  // 1651
			operator()(const class* __closure,
					CSchemaType_DeclaredEnum* pType); // 289
			CUtlMap<unsigned int, CSchemaType_DeclaredEnum::NextInorder(
					IndexType_t i);  // 301
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Element(
				short unsigned int i);  // 92
			CUtlMap<unsigned int, CSchemaType_DeclaredEnum::operator[](
					IndexType_t i);  // 288
		}
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 304
	CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum::ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<unsigned int, CSchemaType_DeclaredEnum, CSchemaSystemTypeScope::FinalizeTypeScope(
																CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pOutMatchingKeys,
																CUtlVector<CSchemaType_DeclaredEnum*, CUtlMemory<CSchemaType_DeclaredEnum*, int> >* pOutMatchingValues,
																const   p);  // 1648
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 1646
	CUtlMemory<CSchemaType_DeclaredEnum::ValidateGrowSize(); // 475
	CUtlMemory<CSchemaType_DeclaredEnum::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSchemaType_DeclaredEnum::ResetDbgInfo(); // 530
	CUtlVectorBase<CSchemaType_DeclaredEnum::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSchemaType_DeclaredEnum::CUtlVector(); // 1647
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 1654
	CUtlMemory<CSchemaType_DeclaredEnum::Purge(); // 903
	CUtlMemory<CSchemaType_DeclaredEnum::Purge(); // 1799
	CUtlVectorBase<CSchemaType_DeclaredEnum::Purge(); // 560
	ValidateAlignment<CSchemaType_DeclaredEnum*>(void); // 508
	CUtlMemory<CSchemaType_DeclaredEnum::Purge(); // 510
	CUtlMemory<CSchemaType_DeclaredEnum::~CUtlMemory(); // 562
	CUtlVectorBase<CSchemaType_DeclaredEnum::~CUtlVectorBase(); // 410
	CUtlVector<CSchemaType_DeclaredEnum::~CUtlVector(); // 1672
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 1672
} /* size: 0, variables: 3, inline expansions: 40 (1501 bytes) */

// <000D09BF> schemasystem/schemasystem.cpp:1639
// variables: 8
void PromoteUnresolvedAndGlobalTypes<TypeAndCountInfo_t, CSchemaType_FixedArray, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_FixedArray*)> >(CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*>& localTypeMap, CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*>& parentTypeMap, ISchemaSystemTypeScope* pParentTypeScope, const extraWork)
{
	const char   __FUNCTION__; // 53335
	CUtlVector<TypeAndCountInfo_t, CUtlMemory<TypeAndCountInfo_t, int> > unresolvedKeys; // 1646
	CUtlVector<CSchemaType_FixedArray*, CUtlMemory<CSchemaType_FixedArray*, int> > unresolvedTypes; // 1647
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1654
	}
	{
		int i; // 1655
		{
			TypeAndCountInfo_t localKey; // 1657
			CSchemaType_FixedArray* pLocalType; // 1658
			CSchemaType_FixedArray* pExistingParentType; // 1663
		}
	}
} /* size: 0, variables: 3 */

// <000D0840> schemasystem/schemasystem.cpp:1639
// variables: 8
void PromoteUnresolvedAndGlobalTypes<int, CSchemaType_Bitfield, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Bitfield*)> >(CSchemaPtrMap<int, CSchemaType_Bitfield*>& localTypeMap, CSchemaPtrMap<int, CSchemaType_Bitfield*>& parentTypeMap, ISchemaSystemTypeScope* pParentTypeScope, const extraWork)
{
	const char   __FUNCTION__; // 53335
	CUtlVector<int, CUtlMemory<int, int> > unresolvedKeys; // 1646
	CUtlVector<CSchemaType_Bitfield*, CUtlMemory<CSchemaType_Bitfield*, int> > unresolvedTypes; // 1647
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1654
	}
	{
		int i; // 1655
		{
			int localKey; // 1657
			CSchemaType_Bitfield* pLocalType; // 1658
			CSchemaType_Bitfield* pExistingParentType; // 1663
		}
	}
} /* size: 0, variables: 3 */

// <000DDF1A> schemasystem/schemasystem.cpp:1677
// variables: 85
// function calls: 747
void CSchemaSystemTypeScope::FinalizeTypeScope()
{
	const char   __FUNCTION__; // 52982
	 PromoteClassBinding; // 1681
	 PromoteEnumBinding; // 1694
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1679
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1726
	}
	{
		CUtlVectorFixedGrowable<CSchemaClassInfo*, 128> allBindings; // 1736
		int nCount; // 1737
		{
			int i; // 1741
			{
				CSchemaClassInfo* pBinding; // 1743
				SchemaClassId_t nId; // 1744
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
						int nLineNumber);  // 231
				CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::FindAltKeyType<unsigned int>(
								const unsigned int& search);  // 243
				CUtlMap<unsigned int, CSchemaType_DeclaredClass::Find(
					const KeyType_t& key);  // 232
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass::operator[](
						short unsigned int i);  // 539
				CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredClass::Element(
					short unsigned int i);  // 92
				CUtlMap<unsigned int, CSchemaType_DeclaredClass::operator[](
						IndexType_t i);  // 236
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
				CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass::Find(
					const unsigned int& key);  // 1746
				CUtlMemory<CSchemaClassInfo::operator[](
						int i);  // 588
				CUtlVectorBase<CSchemaClassInfo::operator[](
						int i);  // 1743
				CSchemaClassInfo::GetName(); // 1744
				V_strlen(const char* str); // 19
				ComputeClassNameHash(const char* pClassName); // 15
				ComputeClassNameHash(const char* pClassName); // 1744
				CSchemaClassInfo::GetName(); // 1748
			}
		}
		CUtlMemory<CSchemaClassInfo::CUtlMemory(
				CSchemaClassInfo** pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<CSchemaClassInfo::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<CSchemaClassInfo::CUtlMemoryFixedGrowable_Base(
						CSchemaClassInfo** pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<128, CSchemaClassInfo::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<128, CSchemaClassInfo::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<128, CSchemaClassInfo::Base(); // 231
		CUtlMemoryFixedGrowable<CSchemaClassInfo::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<CSchemaClassInfo::ResetDbgInfo(); // 530
		CUtlVectorBase<CSchemaClassInfo::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<CSchemaClassInfo::CUtlVectorFixedGrowable(
					int growSize);  // 1736
		CInterlockedIntT<int, 4>::operator int(); // 68
		CUtlMemoryPoolBase::Count(); // 365
		CUtlTSHashBase<CSchemaClassInfo::Count(); // 1737
		CUtlMemory<CSchemaClassInfo::IsExternallyAllocated(); // 859
		CUtlMemory<CSchemaClassInfo::IsExternallyAllocated(); // 861
		CUtlMemory<CSchemaClassInfo::Grow(
			int num);  // 806
		CUtlVectorBase<CSchemaClassInfo::ResetDbgInfo(); // 824
		CUtlVectorBase<CSchemaClassInfo::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CSchemaClassInfo::GrowVector(
				int num);  // 1445
		CUtlVectorBase<CSchemaClassInfo::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<CSchemaClassInfo::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<CSchemaClassInfo::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<CSchemaClassInfo::SetCount(
			int count);  // 1738
		CUtlMemory<CSchemaClassInfo::Base(); // 112
		CUtlVectorBase<CSchemaClassInfo::Base(); // 1739
		{
			int i; // 408
			{
				const HashBucket_t& bucket; // 410
				CThreadSpinRWLock::LockForRead(
						const char* pFileName,
						int nLineNumber);  // 411
				{
					HashFixedData_t* pElement; // 412
					CThreadSpinRWLock::UnlockRead(
							const char* pFileName,
							int nLineNumber);  // 420
				}
				CThreadSpinRWLock::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 424
			}
		}
		CUtlTSHashBase<CSchemaClassInfo::GetElementsData(
				int nFirstElement,
				int nCount,
				CSchemaClassInfo** pData);  // 1739
		CUtlMemory<CSchemaClassInfo::IsExternallyAllocated(); // 577
		CUtlMemory<CSchemaClassInfo::ConvertToExternalMemory(
					CSchemaClassInfo** pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<CSchemaClassInfo::Purge_FixedGrowable(
					CSchemaClassInfo** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<CSchemaClassInfo::Purge_FixedGrowable(
					CSchemaClassInfo** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		AlignedByteArrayExplicit_t<128, CSchemaClassInfo::Base(); // 237
		CUtlMemoryFixedGrowable<CSchemaClassInfo::Purge(
			int numElements);  // 1799
		CUtlVectorBase<CSchemaClassInfo::RemoveAll(); // 1798
		CUtlMemory<CSchemaClassInfo::Base(); // 112
		CUtlVectorBase<CSchemaClassInfo::Base(); // 368
		CUtlVectorBase<CSchemaClassInfo::ResetDbgInfo(); // 1800
		CUtlVectorBase<CSchemaClassInfo::Purge(); // 560
		CUtlMemory<CSchemaClassInfo::Purge(); // 903
		CUtlMemory<CSchemaClassInfo::Purge(); // 510
		ValidateAlignment<CSchemaClassInfo*>(void); // 508
		CUtlMemory<CSchemaClassInfo::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<CSchemaClassInfo::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<CSchemaClassInfo::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<CSchemaClassInfo::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<CSchemaClassInfo::~CUtlVectorFixedGrowable(); // 1751
	}
	{
		CUtlVectorFixedGrowable<CSchemaEnumInfo*, 128> allBindings; // 1754
		int nCount; // 1755
		{
			int i; // 1759
			{
				CSchemaEnumInfo* pBinding; // 1761
				SchemaClassId_t nId; // 1762
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
						int nLineNumber);  // 231
				CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::FindAltKeyType<unsigned int>(
								const unsigned int& search);  // 243
				CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Find(
					const KeyType_t& key);  // 232
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::operator[](
						short unsigned int i);  // 539
				CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Element(
					short unsigned int i);  // 92
				CUtlMap<unsigned int, CSchemaType_DeclaredEnum::operator[](
						IndexType_t i);  // 236
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
				CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum::Find(
					const unsigned int& key);  // 1764
				CUtlMemory<CSchemaEnumInfo::operator[](
						int i);  // 588
				CUtlVectorBase<CSchemaEnumInfo::operator[](
						int i);  // 1761
				CSchemaEnumInfo::GetName(); // 1762
				V_strlen(const char* str); // 19
				ComputeClassNameHash(const char* pClassName); // 15
				ComputeClassNameHash(const char* pClassName); // 1762
				CSchemaEnumInfo::GetName(); // 1766
			}
		}
		CUtlMemory<CSchemaEnumInfo::CUtlMemory(
				CSchemaEnumInfo** pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<CSchemaEnumInfo::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<CSchemaEnumInfo::CUtlMemoryFixedGrowable_Base(
						CSchemaEnumInfo** pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<128, CSchemaEnumInfo::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<128, CSchemaEnumInfo::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<128, CSchemaEnumInfo::Base(); // 231
		CUtlMemoryFixedGrowable<CSchemaEnumInfo::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<CSchemaEnumInfo::ResetDbgInfo(); // 530
		CUtlVectorBase<CSchemaEnumInfo::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<CSchemaEnumInfo::CUtlVectorFixedGrowable(
					int growSize);  // 1754
		CInterlockedIntT<int, 4>::operator int(); // 68
		CUtlMemoryPoolBase::Count(); // 365
		CUtlTSHashBase<CSchemaEnumInfo::Count(); // 1755
		CUtlMemory<CSchemaEnumInfo::IsExternallyAllocated(); // 859
		CUtlMemory<CSchemaEnumInfo::IsExternallyAllocated(); // 861
		CUtlMemory<CSchemaEnumInfo::Grow(
			int num);  // 806
		CUtlVectorBase<CSchemaEnumInfo::ResetDbgInfo(); // 824
		CUtlVectorBase<CSchemaEnumInfo::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CSchemaEnumInfo::GrowVector(
				int num);  // 1445
		CUtlVectorBase<CSchemaEnumInfo::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<CSchemaEnumInfo::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<CSchemaEnumInfo::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<CSchemaEnumInfo::SetCount(
			int count);  // 1756
		CUtlMemory<CSchemaEnumInfo::Base(); // 112
		CUtlVectorBase<CSchemaEnumInfo::Base(); // 1757
		{
			int i; // 408
			{
				const HashBucket_t& bucket; // 410
				CThreadSpinRWLock::LockForRead(
						const char* pFileName,
						int nLineNumber);  // 411
				{
					HashFixedData_t* pElement; // 412
					CThreadSpinRWLock::UnlockRead(
							const char* pFileName,
							int nLineNumber);  // 420
				}
				CThreadSpinRWLock::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 424
			}
		}
		CUtlTSHashBase<CSchemaEnumInfo::GetElementsData(
				int nFirstElement,
				int nCount,
				CSchemaEnumInfo** pData);  // 1757
		CUtlMemory<CSchemaEnumInfo::IsExternallyAllocated(); // 577
		CUtlMemory<CSchemaEnumInfo::ConvertToExternalMemory(
					CSchemaEnumInfo** pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<CSchemaEnumInfo::Purge_FixedGrowable(
					CSchemaEnumInfo** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<CSchemaEnumInfo::Purge_FixedGrowable(
					CSchemaEnumInfo** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		AlignedByteArrayExplicit_t<128, CSchemaEnumInfo::Base(); // 237
		CUtlMemoryFixedGrowable<CSchemaEnumInfo::Purge(
			int numElements);  // 1799
		CUtlVectorBase<CSchemaEnumInfo::RemoveAll(); // 1798
		CUtlMemory<CSchemaEnumInfo::Base(); // 112
		CUtlVectorBase<CSchemaEnumInfo::Base(); // 368
		CUtlVectorBase<CSchemaEnumInfo::ResetDbgInfo(); // 1800
		CUtlVectorBase<CSchemaEnumInfo::Purge(); // 560
		ValidateAlignment<CSchemaEnumInfo*>(void); // 508
		CUtlMemory<CSchemaEnumInfo::Purge(); // 903
		CUtlMemory<CSchemaEnumInfo::Purge(); // 510
		CUtlMemory<CSchemaEnumInfo::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<CSchemaEnumInfo::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<CSchemaEnumInfo::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<CSchemaEnumInfo::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<CSchemaEnumInfo::~CUtlVectorFixedGrowable(); // 1769
	}
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
			int nLineNumber);  // 285
	{
		IndexType_t i; // 286
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSchemaType::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<CSchemaType::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<CSchemaType::FirstInorder()(CSchemaType* const&, CSchemaT this); // 351
		CUtlMap<CSchemaType::FirstInorder()(CSchemaType* const&, CSchemaType* const& this); // 286
		{
			CSchemaType_Ptr* val; // 288
			CSchemaType_Ptr::DependsOnlyOnUnresolvedOrGlobalTypes(
								ISchemaSystemTypeScope* pGlobalScope);  // 1651
			operator()(const class* __closure,
					CSchemaType_Ptr* pType); // 289
			CUtlMap<CSchemaType::NextInorder(
					IndexType_t i);  // 301
			{
				CSchemaType* key; // 291
				IndexType_t nRemoveIndex; // 295
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSchemaType::operator[](
						short unsigned int i);  // 539
				CUtlRBTree<CUtlMap<CSchemaType::Element(
					short unsigned int i);  // 94
				CUtlMap<CSchemaType::Key(
					IndexType_t i);  // 291
				CUtlMemory<CSchemaType::operator[](
						int i);  // 602
				CUtlVectorBase<CSchemaType::Element(
					int i);  // 1201
				CopyConstruct<CSchemaType*>(CSchemaType** pMemory,
								CSchemaType* const& src);  // 1201
				CUtlMemory<CSchemaType::Grow(
					int num);  // 806
				CUtlVectorBase<CSchemaType::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<CSchemaType::AddToTail(
						CSchemaType* const& src);  // 292
				CUtlMemory<CSchemaType_Ptr::operator[](
						int i);  // 602
				CUtlVectorBase<CSchemaType_Ptr::Element(
					int i);  // 1201
				CopyConstruct<CSchemaType_Ptr*>(CSchemaType_Ptr** pMemory,
								CSchemaType_Ptr* const& src);  // 1201
				CUtlMemory<CSchemaType_Ptr::Grow(
					int num);  // 806
				CUtlVectorBase<CSchemaType_Ptr::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<CSchemaType_Ptr::AddToTail(
						CSchemaType_Ptr* const& src);  // 293
				CUtlMap<CSchemaType::NextInorder(
						IndexType_t i);  // 296
				CUtlMap<CSchemaType::RemoveAt(
					IndexType_t i);  // 297
			}
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSchemaType::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<CSchemaType::Element(
				short unsigned int i);  // 92
			CUtlMap<CSchemaType::operator[](
					IndexType_t i);  // 288
		}
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 304
	CSchemaPtrMap<CSchemaType::ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<CSchemaType*, CSchemaType_Ptr, CSchemaSystemTypeScope::FinalizeTypeScope(
																CUtlVector<CSchemaType*, CUtlMemory<CSchemaType*, int> >* pOutMatchingKeys,
																CUtlVector<CSchemaType_Ptr*, CUtlMemory<CSchemaType_Ptr*, int> >* pOutMatchingValues,
																const   p);  // 1648
	CUtlMemory<CSchemaType::ValidateGrowSize(); // 475
	CUtlMemory<CSchemaType::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSchemaType::ResetDbgInfo(); // 530
	CUtlVectorBase<CSchemaType::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSchemaType::CUtlVector(); // 1646
	CUtlMemory<CSchemaType_Ptr::ValidateGrowSize(); // 475
	CUtlMemory<CSchemaType_Ptr::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSchemaType_Ptr::ResetDbgInfo(); // 530
	CUtlVectorBase<CSchemaType_Ptr::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSchemaType_Ptr::CUtlVector(); // 1647
	{
		int i; // 1655
		{
			CSchemaType* localKey; // 1657
			CSchemaType_Ptr* pLocalType; // 1658
			CSchemaType_Ptr* pExistingParentType; // 1663
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
					int nLineNumber);  // 231
			CUtlRBTree<CUtlMap<CSchemaType::FindAltKeyType<CSchemaType*>(
							CSchemaType* const& search);  // 243
			CUtlMap<CSchemaType::Find(
				const KeyType_t& key);  // 232
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSchemaType::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<CSchemaType::Element(
				short unsigned int i);  // 92
			CUtlMap<CSchemaType::operator[](
					IndexType_t i);  // 236
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
			CSchemaPtrMap<CSchemaType::Find(
				CSchemaType* const& key);  // 1663
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1666
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 1666
			SetTypeScope_Internal(CSchemaType* pType,
						ISchemaSystemTypeScope* pScope);  // 1668
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
					int nLineNumber);  // 252
			CUtlRBTree<CUtlMap<CSchemaType::FindAltKeyType<CSchemaType*>(
							CSchemaType* const& search);  // 243
			CUtlMap<CSchemaType::Find(
				const KeyType_t& key);  // 253
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 265
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 256
			Node_t::Node_t(
				const KeyType_t& k,
				const ElemType_t& e);  // 207
			CUtlMap<CSchemaType::Insert(
				const KeyType_t& key,
				const ElemType_t& insert,
				ERBTreeInsertBehavior eInsertBehavior);  // 257
			CSchemaPtrMap<CSchemaType::InsertOrDelete(
					CSchemaType* const& key,
					CSchemaType_Ptr* const& value);  // 1669
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1661
		}
	}
	CUtlMemory<CSchemaType_Ptr::Purge(); // 903
	CUtlMemory<CSchemaType_Ptr::Purge(); // 1799
	CUtlVectorBase<CSchemaType_Ptr::Purge(); // 560
	ValidateAlignment<CSchemaType_Ptr*>(void); // 508
	CUtlMemory<CSchemaType_Ptr::Purge(); // 510
	CUtlMemory<CSchemaType_Ptr::~CUtlMemory(); // 562
	CUtlVectorBase<CSchemaType_Ptr::~CUtlVectorBase(); // 410
	CUtlVector<CSchemaType_Ptr::~CUtlVector(); // 1672
	CUtlMemory<CSchemaType::Purge(); // 903
	CUtlMemory<CSchemaType::Purge(); // 1799
	CUtlVectorBase<CSchemaType::Purge(); // 560
	ValidateAlignment<CSchemaType*>(void); // 508
	CUtlMemory<CSchemaType::Purge(); // 510
	CUtlMemory<CSchemaType::~CUtlMemory(); // 562
	CUtlVectorBase<CSchemaType::~CUtlVectorBase(); // 410
	CUtlVector<CSchemaType::~CUtlVector(); // 1672
	PromoteUnresolvedAndGlobalTypes<CSchemaType*, CSchemaType_Ptr, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Ptr*)> >(CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*>& localTypeMap,
																CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*>& parentTypeMap,
																ISchemaSystemTypeScope* pParentTypeScope,
																const   extraWork); // 1707
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1646
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
			int nLineNumber);  // 285
	{
		IndexType_t i; // 286
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<int, CSchemaType_Atomic::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<int, CSchemaType_Atomic::FirstInorder()(int const&, int const&)>::Node_t, s this); // 351
		CUtlMap<int, CSchemaType_Atomic::FirstInorder()(int const&, int const&)>* this); // 286
		{
			CSchemaType_Atomic* val; // 288
			{
				int key; // 291
				IndexType_t nRemoveIndex; // 295
				CUtlMemory<int, int>::Base(); // 112
				CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
				CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
						int num);  // 1198
				CUtlMemory<int, int>::NumAllocated(); // 1196
				CUtlMemory<int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
					int i);  // 1201
				CopyConstruct<int>(int* pMemory,
							const int& src);  // 1201
				CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
						const int& src);  // 292
				CUtlMap<int, CSchemaType_Atomic::NextInorder(
						IndexType_t i);  // 296
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic::operator[](
						short unsigned int i);  // 539
				CUtlRBTree<CUtlMap<int, CSchemaType_Atomic::Element(
					short unsigned int i);  // 94
				CUtlMap<int, CSchemaType_Atomic::Key(
					IndexType_t i);  // 291
				CopyConstruct<CSchemaType_Atomic*>(CSchemaType_Atomic** pMemory,
									CSchemaType_Atomic* const& src);  // 1201
				CUtlMemory<CSchemaType_Atomic::operator[](
						int i);  // 602
				CUtlVectorBase<CSchemaType_Atomic::Element(
					int i);  // 1201
				CUtlMemory<CSchemaType_Atomic::Grow(
					int num);  // 806
				CUtlVectorBase<CSchemaType_Atomic::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<CSchemaType_Atomic::AddToTail(
						CSchemaType_Atomic* const& src);  // 293
				CUtlMap<int, CSchemaType_Atomic::RemoveAt(
					IndexType_t i);  // 297
			}
			CUtlMap<int, CSchemaType_Atomic::NextInorder(
					IndexType_t i);  // 301
			operator()(const class* __closure,
					CSchemaType_Atomic* pType); // 289
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<int, CSchemaType_Atomic::Element(
				short unsigned int i);  // 92
			CUtlMap<int, CSchemaType_Atomic::operator[](
					IndexType_t i);  // 288
		}
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 304
	CSchemaPtrMap<int, CSchemaType_Atomic::ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<int, CSchemaType_Atomic, CSchemaSystemTypeScope::FinalizeTypeScope(
																CUtlVector<int, CUtlMemory<int, int> >* pOutMatchingKeys,
																CUtlVector<CSchemaType_Atomic*, CUtlMemory<CSchemaType_Atomic*, int> >* pOutMatchingValues,
																const   p);  // 1648
	CUtlMemory<CSchemaType_Atomic::ValidateGrowSize(); // 475
	CUtlMemory<CSchemaType_Atomic::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSchemaType_Atomic::ResetDbgInfo(); // 530
	CUtlVectorBase<CSchemaType_Atomic::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSchemaType_Atomic::CUtlVector(); // 1647
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1654
	{
	}
	{
		int i; // 1655
		{
			int localKey; // 1657
			CSchemaType_Atomic* pLocalType; // 1658
			CSchemaType_Atomic* pExistingParentType; // 1663
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
					int nLineNumber);  // 231
			CUtlRBTree<CUtlMap<int, CSchemaType_Atomic::FindAltKeyType<int>(
						const int& search);  // 243
			CUtlMap<int, CSchemaType_Atomic::Find(
				const KeyType_t& key);  // 232
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<int, CSchemaType_Atomic::Element(
				short unsigned int i);  // 92
			CUtlMap<int, CSchemaType_Atomic::operator[](
					IndexType_t i);  // 236
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
			CSchemaPtrMap<int, CSchemaType_Atomic::Find(
				const int& key);  // 1663
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1666
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 1666
			SetTypeScope_Internal(CSchemaType* pType,
						ISchemaSystemTypeScope* pScope);  // 1668
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
					int nLineNumber);  // 252
			CUtlRBTree<CUtlMap<int, CSchemaType_Atomic::FindAltKeyType<int>(
						const int& search);  // 243
			CUtlMap<int, CSchemaType_Atomic::Find(
				const KeyType_t& key);  // 253
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 265
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 256
			Node_t::Node_t(
				const KeyType_t& k,
				const ElemType_t& e);  // 207
			CUtlMap<int, CSchemaType_Atomic::Insert(
				const KeyType_t& key,
				const ElemType_t& insert,
				ERBTreeInsertBehavior eInsertBehavior);  // 257
			CSchemaPtrMap<int, CSchemaType_Atomic::InsertOrDelete(
					const int& key,
					CSchemaType_Atomic* const& value);  // 1669
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1657
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1661
		}
	}
	CUtlMemory<CSchemaType_Atomic::Purge(); // 903
	CUtlMemory<CSchemaType_Atomic::Purge(); // 1799
	CUtlVectorBase<CSchemaType_Atomic::Purge(); // 560
	ValidateAlignment<CSchemaType_Atomic*>(void); // 508
	CUtlMemory<CSchemaType_Atomic::Purge(); // 510
	CUtlMemory<CSchemaType_Atomic::~CUtlMemory(); // 562
	CUtlVectorBase<CSchemaType_Atomic::~CUtlVectorBase(); // 410
	CUtlVector<CSchemaType_Atomic::~CUtlVector(); // 1672
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1672
	PromoteUnresolvedAndGlobalTypes<int, CSchemaType_Atomic, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic*)> >(CSchemaPtrMap<int, CSchemaType_Atomic*>& localTypeMap,
																CSchemaPtrMap<int, CSchemaType_Atomic*>& parentTypeMap,
																ISchemaSystemTypeScope* pParentTypeScope,
																const   extraWork); // 1708
	CUtlMemory<AtomicTypeInfo_T_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<AtomicTypeInfo_T_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::CUtlVector(); // 1646
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
			int nLineNumber);  // 285
	{
		IndexType_t i; // 286
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::FirstInorder()(const AtomicTypeIn this); // 351
		CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::FirstInorder()(const AtomicTypeInfo_T_t&, co this); // 286
		{
			CSchemaType_Atomic_T* val; // 288
			{
				AtomicTypeInfo_T_t key; // 291
				IndexType_t nRemoveIndex; // 295
				CUtlMemory<AtomicTypeInfo_T_t, int>::Base(); // 112
				CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::Base(); // 368
				CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlMemory<AtomicTypeInfo_T_t, int>::NumAllocated(); // 1196
				CUtlMemory<AtomicTypeInfo_T_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<AtomicTypeInfo_T_t>(AtomicTypeInfo_T_t* pMemory,
									const AtomicTypeInfo_T_t& src);  // 1201
				CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::AddToTail(
						const AtomicTypeInfo_T_t& src);  // 292
				CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::NextInorder(
						IndexType_t i);  // 296
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::operator[](
						short unsigned int i);  // 539
				CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Element(
					short unsigned int i);  // 94
				CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Key(
					IndexType_t i);  // 291
				CUtlMemory<CSchemaType_Atomic_T::operator[](
						int i);  // 602
				CUtlVectorBase<CSchemaType_Atomic_T::Element(
					int i);  // 1201
				CopyConstruct<CSchemaType_Atomic_T*>(CSchemaType_Atomic_T** pMemory,
									CSchemaType_Atomic_T* const& src);  // 1201
				CUtlMemory<CSchemaType_Atomic_T::Grow(
					int num);  // 806
				CUtlVectorBase<CSchemaType_Atomic_T::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<CSchemaType_Atomic_T::AddToTail(
						CSchemaType_Atomic_T* const& src);  // 293
				CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::RemoveAt(
					IndexType_t i);  // 297
			}
			CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::NextInorder(
					IndexType_t i);  // 301
			operator()(const class* __closure,
					CSchemaType_Atomic_T* pType); // 289
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Element(
				short unsigned int i);  // 92
			CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::operator[](
					IndexType_t i);  // 288
		}
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 304
	CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_T_t, CSchemaType_Atomic_T, CSchemaSystemTypeScope::FinalizeTypeScope(
																CUtlVector<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >* pOutMatchingKeys,
																CUtlVector<CSchemaType_Atomic_T*, CUtlMemory<CSchemaType_Atomic_T*, int> >* pOutMatchingValues,
																const   p);  // 1648
	CUtlMemory<CSchemaType_Atomic_T::ValidateGrowSize(); // 475
	CUtlMemory<CSchemaType_Atomic_T::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSchemaType_Atomic_T::ResetDbgInfo(); // 530
	CUtlVectorBase<CSchemaType_Atomic_T::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSchemaType_Atomic_T::CUtlVector(); // 1647
	CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::Count(); // 1654
	{
	}
	{
		int i; // 1655
		{
			AtomicTypeInfo_T_t localKey; // 1657
			CSchemaType_Atomic_T* pLocalType; // 1658
			CSchemaType_Atomic_T* pExistingParentType; // 1663
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
					int nLineNumber);  // 231
			CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::FindAltKeyType<AtomicTypeInfo_T_t>(
								const AtomicTypeInfo_T_t& search);  // 243
			CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Find(
				const KeyType_t& key);  // 232
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Element(
				short unsigned int i);  // 92
			CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::operator[](
					IndexType_t i);  // 236
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
			CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Find(
				const AtomicTypeInfo_T_t& key);  // 1663
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1666
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 1666
			SetTypeScope_Internal(CSchemaType* pType,
						ISchemaSystemTypeScope* pScope);  // 1668
			CUtlMemory<AtomicTypeInfo_T_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::operator[](
					int i);  // 1657
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1661
		}
	}
	CUtlMemory<CSchemaType_Atomic_T::Purge(); // 903
	CUtlMemory<CSchemaType_Atomic_T::Purge(); // 1799
	CUtlVectorBase<CSchemaType_Atomic_T::Purge(); // 560
	ValidateAlignment<CSchemaType_Atomic_T*>(void); // 508
	CUtlMemory<CSchemaType_Atomic_T::Purge(); // 510
	CUtlMemory<CSchemaType_Atomic_T::~CUtlMemory(); // 562
	CUtlVectorBase<CSchemaType_Atomic_T::~CUtlVectorBase(); // 410
	CUtlVector<CSchemaType_Atomic_T::~CUtlVector(); // 1672
	CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::RemoveAll(); // 1798
	CUtlMemory<AtomicTypeInfo_T_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AtomicTypeInfo_T_t, int>::Purge(); // 903
	CUtlMemory<AtomicTypeInfo_T_t, int>::Purge(); // 1799
	CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::Purge(); // 560
	ValidateAlignment<AtomicTypeInfo_T_t>(void); // 508
	CUtlMemory<AtomicTypeInfo_T_t, int>::Purge(); // 510
	CUtlMemory<AtomicTypeInfo_T_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::~CUtlVector(); // 1672
	PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_T_t, CSchemaType_Atomic_T, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic_T*)> >(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*>& localTypeMap,
																CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*>& parentTypeMap,
																ISchemaSystemTypeScope* pParentTypeScope,
																const   extraWork); // 1709
	CUtlMemory<AtomicTypeInfo_T_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<AtomicTypeInfo_T_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::CUtlVector(); // 1646
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
			int nLineNumber);  // 285
	{
		IndexType_t i; // 286
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::FirstInorder()(const this); // 351
		CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::FirstInorder()(const AtomicTypeI this); // 286
		{
			CSchemaType_Atomic_CollectionOfT* val; // 288
			{
				AtomicTypeInfo_T_t key; // 291
				IndexType_t nRemoveIndex; // 295
				CUtlMemory<AtomicTypeInfo_T_t, int>::Base(); // 112
				CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::Base(); // 368
				CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlMemory<AtomicTypeInfo_T_t, int>::NumAllocated(); // 1196
				CUtlMemory<AtomicTypeInfo_T_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<AtomicTypeInfo_T_t>(AtomicTypeInfo_T_t* pMemory,
									const AtomicTypeInfo_T_t& src);  // 1201
				CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::AddToTail(
						const AtomicTypeInfo_T_t& src);  // 292
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::operator[](
						short unsigned int i);  // 539
				CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Element(
					short unsigned int i);  // 94
				CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Key(
					IndexType_t i);  // 291
				CUtlMemory<CSchemaType_Atomic_CollectionOfT::operator[](
						int i);  // 602
				CUtlVectorBase<CSchemaType_Atomic_CollectionOfT::Element(
					int i);  // 1201
				CopyConstruct<CSchemaType_Atomic_CollectionOfT*>(CSchemaType_Atomic_CollectionOfT** pMemory,
										CSchemaType_Atomic_CollectionOfT* const& src);  // 1201
				CUtlMemory<CSchemaType_Atomic_CollectionOfT::Grow(
					int num);  // 806
				CUtlVectorBase<CSchemaType_Atomic_CollectionOfT::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<CSchemaType_Atomic_CollectionOfT::AddToTail(
						CSchemaType_Atomic_CollectionOfT* const& src);  // 293
				CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::NextInorder(
						IndexType_t i);  // 296
				CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::RemoveAt(
					IndexType_t i);  // 297
			}
			CSchemaType_Atomic_T::DependsOnlyOnUnresolvedOrGlobalTypes(
								ISchemaSystemTypeScope* pGlobalScope);  // 1651
			operator()(const class* __closure,
					CSchemaType_Atomic_CollectionOfT* pType); // 289
			CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::NextInorder(
					IndexType_t i);  // 301
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Element(
				short unsigned int i);  // 92
			CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::operator[](
					IndexType_t i);  // 288
		}
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 304
	CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT, CSchemaSystemTypeScope::FinalizeTypeScope(
																CUtlVector<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >* pOutMatchingKeys,
																CUtlVector<CSchemaType_Atomic_CollectionOfT*, CUtlMemory<CSchemaType_Atomic_CollectionOfT*, int> >* pOutMatchingValues,
																const   p);  // 1648
	CUtlMemory<CSchemaType_Atomic_CollectionOfT::ValidateGrowSize(); // 475
	CUtlMemory<CSchemaType_Atomic_CollectionOfT::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSchemaType_Atomic_CollectionOfT::ResetDbgInfo(); // 530
	CUtlVectorBase<CSchemaType_Atomic_CollectionOfT::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSchemaType_Atomic_CollectionOfT::CUtlVector(); // 1647
	CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::Count(); // 1654
	{
	}
	{
		int i; // 1655
		{
			AtomicTypeInfo_T_t localKey; // 1657
			CSchemaType_Atomic_CollectionOfT* pLocalType; // 1658
			CSchemaType_Atomic_CollectionOfT* pExistingParentType; // 1663
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
					int nLineNumber);  // 231
			CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::FindAltKeyType<AtomicTypeInfo_T_t>(
								const AtomicTypeInfo_T_t& search);  // 243
			CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Find(
				const KeyType_t& key);  // 232
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Element(
				short unsigned int i);  // 92
			CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::operator[](
					IndexType_t i);  // 236
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
			CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Find(
				const AtomicTypeInfo_T_t& key);  // 1663
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1666
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 1666
			SetTypeScope_Internal(CSchemaType* pType,
						ISchemaSystemTypeScope* pScope);  // 1668
			CUtlMemory<AtomicTypeInfo_T_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::operator[](
					int i);  // 1657
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1661
		}
	}
	CUtlMemory<CSchemaType_Atomic_CollectionOfT::Purge(); // 903
	CUtlMemory<CSchemaType_Atomic_CollectionOfT::Purge(); // 1799
	CUtlVectorBase<CSchemaType_Atomic_CollectionOfT::Purge(); // 560
	ValidateAlignment<CSchemaType_Atomic_CollectionOfT*>(void); // 508
	CUtlMemory<CSchemaType_Atomic_CollectionOfT::Purge(); // 510
	CUtlMemory<CSchemaType_Atomic_CollectionOfT::~CUtlMemory(); // 562
	CUtlVectorBase<CSchemaType_Atomic_CollectionOfT::~CUtlVectorBase(); // 410
	CUtlVector<CSchemaType_Atomic_CollectionOfT::~CUtlVector(); // 1672
	CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::RemoveAll(); // 1798
	CUtlMemory<AtomicTypeInfo_T_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AtomicTypeInfo_T_t, int>::Purge(); // 903
	CUtlMemory<AtomicTypeInfo_T_t, int>::Purge(); // 1799
	CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::Purge(); // 560
	ValidateAlignment<AtomicTypeInfo_T_t>(void); // 508
	CUtlMemory<AtomicTypeInfo_T_t, int>::Purge(); // 510
	CUtlMemory<AtomicTypeInfo_T_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >::~CUtlVector(); // 1672
	PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic_CollectionOfT*)> >(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*>& localTypeMap,
																CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*>& parentTypeMap,
																ISchemaSystemTypeScope* pParentTypeScope,
																const   extraWork); // 1710
	CUtlMemory<AtomicTypeInfo_TT_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<AtomicTypeInfo_TT_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AtomicTypeInfo_TT_t, CUtlMemory<AtomicTypeInfo_TT_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AtomicTypeInfo_TT_t, CUtlMemory<AtomicTypeInfo_TT_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AtomicTypeInfo_TT_t, CUtlMemory<AtomicTypeInfo_TT_t, int> >::CUtlVector(); // 1646
	CUtlMemory<CSchemaType_Atomic_TT::ValidateGrowSize(); // 475
	CUtlMemory<CSchemaType_Atomic_TT::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSchemaType_Atomic_TT::ResetDbgInfo(); // 530
	CUtlVectorBase<CSchemaType_Atomic_TT::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSchemaType_Atomic_TT::CUtlVector(); // 1647
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
			int nLineNumber);  // 285
	{
		IndexType_t i; // 286
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::FirstInorder()(const AtomicType this); // 351
		CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::FirstInorder()(const AtomicTypeInfo_TT_t&, this); // 286
		{
			CSchemaType_Atomic_TT* val; // 288
			CSchemaType_Atomic_TT::DependsOnlyOnUnresolvedOrGlobalTypes(
								ISchemaSystemTypeScope* pGlobalScope);  // 1651
			operator()(const class* __closure,
					CSchemaType_Atomic_TT* pType); // 289
			{
				AtomicTypeInfo_TT_t key; // 291
				IndexType_t nRemoveIndex; // 295
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::operator[](
						short unsigned int i);  // 539
				CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Element(
					short unsigned int i);  // 94
				CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Key(
					IndexType_t i);  // 291
				CUtlMemory<AtomicTypeInfo_TT_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<AtomicTypeInfo_TT_t, CUtlMemory<AtomicTypeInfo_TT_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<AtomicTypeInfo_TT_t>(AtomicTypeInfo_TT_t* pMemory,
									const AtomicTypeInfo_TT_t& src);  // 1201
				CUtlMemory<AtomicTypeInfo_TT_t, int>::Grow(
					int num);  // 806
				CUtlVectorBase<AtomicTypeInfo_TT_t, CUtlMemory<AtomicTypeInfo_TT_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<AtomicTypeInfo_TT_t, CUtlMemory<AtomicTypeInfo_TT_t, int> >::AddToTail(
						const AtomicTypeInfo_TT_t& src);  // 292
				CopyConstruct<CSchemaType_Atomic_TT*>(CSchemaType_Atomic_TT** pMemory,
									CSchemaType_Atomic_TT* const& src);  // 1201
				CUtlMemory<CSchemaType_Atomic_TT::operator[](
						int i);  // 602
				CUtlVectorBase<CSchemaType_Atomic_TT::Element(
					int i);  // 1201
				CUtlMemory<CSchemaType_Atomic_TT::Grow(
					int num);  // 806
				CUtlVectorBase<CSchemaType_Atomic_TT::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<CSchemaType_Atomic_TT::AddToTail(
						CSchemaType_Atomic_TT* const& src);  // 293
				CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::NextInorder(
						IndexType_t i);  // 296
				CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::RemoveAt(
					IndexType_t i);  // 297
			}
			CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::NextInorder(
					IndexType_t i);  // 301
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Element(
				short unsigned int i);  // 92
			CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::operator[](
					IndexType_t i);  // 288
		}
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 304
	CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT, CSchemaSystemTypeScope::FinalizeTypeScope(
																CUtlVector<AtomicTypeInfo_TT_t, CUtlMemory<AtomicTypeInfo_TT_t, int> >* pOutMatchingKeys,
																CUtlVector<CSchemaType_Atomic_TT*, CUtlMemory<CSchemaType_Atomic_TT*, int> >* pOutMatchingValues,
																const   p);  // 1648
	{
		int i; // 1655
		{
			AtomicTypeInfo_TT_t localKey; // 1657
			CSchemaType_Atomic_TT* pLocalType; // 1658
			CSchemaType_Atomic_TT* pExistingParentType; // 1663
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
					int nLineNumber);  // 231
			CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::FindAltKeyType<AtomicTypeInfo_TT_t>(
								const AtomicTypeInfo_TT_t& search);  // 243
			CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Find(
				const KeyType_t& key);  // 232
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Element(
				short unsigned int i);  // 92
			CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::operator[](
					IndexType_t i);  // 236
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
			CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Find(
				const AtomicTypeInfo_TT_t& key);  // 1663
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1666
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 1666
			SetTypeScope_Internal(CSchemaType* pType,
						ISchemaSystemTypeScope* pScope);  // 1668
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1661
		}
	}
	CUtlMemory<CSchemaType_Atomic_TT::Purge(); // 903
	CUtlMemory<CSchemaType_Atomic_TT::Purge(); // 1799
	CUtlVectorBase<CSchemaType_Atomic_TT::Purge(); // 560
	ValidateAlignment<CSchemaType_Atomic_TT*>(void); // 508
	CUtlMemory<CSchemaType_Atomic_TT::Purge(); // 510
	CUtlMemory<CSchemaType_Atomic_TT::~CUtlMemory(); // 562
	CUtlVectorBase<CSchemaType_Atomic_TT::~CUtlVectorBase(); // 410
	CUtlVector<CSchemaType_Atomic_TT::~CUtlVector(); // 1672
	CUtlMemory<AtomicTypeInfo_TT_t, int>::Purge(); // 903
	CUtlMemory<AtomicTypeInfo_TT_t, int>::Purge(); // 1799
	CUtlVectorBase<AtomicTypeInfo_TT_t, CUtlMemory<AtomicTypeInfo_TT_t, int> >::Purge(); // 560
	ValidateAlignment<AtomicTypeInfo_TT_t>(void); // 508
	CUtlMemory<AtomicTypeInfo_TT_t, int>::Purge(); // 510
	CUtlMemory<AtomicTypeInfo_TT_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AtomicTypeInfo_TT_t, CUtlMemory<AtomicTypeInfo_TT_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AtomicTypeInfo_TT_t, CUtlMemory<AtomicTypeInfo_TT_t, int> >::~CUtlVector(); // 1672
	PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic_TT*)> >(CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*>& localTypeMap,
																CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*>& parentTypeMap,
																ISchemaSystemTypeScope* pParentTypeScope,
																const   extraWork); // 1711
	CUtlMemory<AtomicTypeInfo_I_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<AtomicTypeInfo_I_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AtomicTypeInfo_I_t, CUtlMemory<AtomicTypeInfo_I_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AtomicTypeInfo_I_t, CUtlMemory<AtomicTypeInfo_I_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AtomicTypeInfo_I_t, CUtlMemory<AtomicTypeInfo_I_t, int> >::CUtlVector(); // 1646
	CUtlMemory<CSchemaType_Atomic_I::ValidateGrowSize(); // 475
	CUtlMemory<CSchemaType_Atomic_I::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSchemaType_Atomic_I::ResetDbgInfo(); // 530
	CUtlVectorBase<CSchemaType_Atomic_I::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSchemaType_Atomic_I::CUtlVector(); // 1647
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
			int nLineNumber);  // 285
	{
		IndexType_t i; // 286
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::FirstInorder()(const AtomicTypeIn this); // 351
		CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::FirstInorder()(const AtomicTypeInfo_I_t&, co this); // 286
		{
			CSchemaType_Atomic_I* val; // 288
			CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::NextInorder(
					IndexType_t i);  // 301
			CSchemaType::DependsOnlyOnUnresolvedOrGlobalTypes(
								ISchemaSystemTypeScope* pGlobalScope);  // 1651
			operator()(const class* __closure,
					CSchemaType_Atomic_I* pType); // 289
			{
				AtomicTypeInfo_I_t key; // 291
				IndexType_t nRemoveIndex; // 295
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::operator[](
						short unsigned int i);  // 539
				CUtlRBTree<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Element(
					short unsigned int i);  // 94
				CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Key(
					IndexType_t i);  // 291
				CopyConstruct<AtomicTypeInfo_I_t>(AtomicTypeInfo_I_t* pMemory,
									const AtomicTypeInfo_I_t& src);  // 1201
				CUtlMemory<AtomicTypeInfo_I_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<AtomicTypeInfo_I_t, CUtlMemory<AtomicTypeInfo_I_t, int> >::Element(
					int i);  // 1201
				CUtlMemory<AtomicTypeInfo_I_t, int>::Grow(
					int num);  // 806
				CUtlVectorBase<AtomicTypeInfo_I_t, CUtlMemory<AtomicTypeInfo_I_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<AtomicTypeInfo_I_t, CUtlMemory<AtomicTypeInfo_I_t, int> >::AddToTail(
						const AtomicTypeInfo_I_t& src);  // 292
				CUtlMemory<CSchemaType_Atomic_I::operator[](
						int i);  // 602
				CUtlVectorBase<CSchemaType_Atomic_I::Element(
					int i);  // 1201
				CopyConstruct<CSchemaType_Atomic_I*>(CSchemaType_Atomic_I** pMemory,
									CSchemaType_Atomic_I* const& src);  // 1201
				CUtlMemory<CSchemaType_Atomic_I::Grow(
					int num);  // 806
				CUtlVectorBase<CSchemaType_Atomic_I::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<CSchemaType_Atomic_I::AddToTail(
						CSchemaType_Atomic_I* const& src);  // 293
				CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::NextInorder(
						IndexType_t i);  // 296
				CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::RemoveAt(
					IndexType_t i);  // 297
			}
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Element(
				short unsigned int i);  // 92
			CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::operator[](
					IndexType_t i);  // 288
		}
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 304
	CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_I_t, CSchemaType_Atomic_I, CSchemaSystemTypeScope::FinalizeTypeScope(
																CUtlVector<AtomicTypeInfo_I_t, CUtlMemory<AtomicTypeInfo_I_t, int> >* pOutMatchingKeys,
																CUtlVector<CSchemaType_Atomic_I*, CUtlMemory<CSchemaType_Atomic_I*, int> >* pOutMatchingValues,
																const   p);  // 1648
	{
		int i; // 1655
		{
			AtomicTypeInfo_I_t localKey; // 1657
			CSchemaType_Atomic_I* pLocalType; // 1658
			CSchemaType_Atomic_I* pExistingParentType; // 1663
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
					int nLineNumber);  // 231
			CUtlRBTree<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::FindAltKeyType<AtomicTypeInfo_I_t>(
								const AtomicTypeInfo_I_t& search);  // 243
			CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Find(
				const KeyType_t& key);  // 232
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Element(
				short unsigned int i);  // 92
			CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::operator[](
					IndexType_t i);  // 236
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
			CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Find(
				const AtomicTypeInfo_I_t& key);  // 1663
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1666
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 1666
			SetTypeScope_Internal(CSchemaType* pType,
						ISchemaSystemTypeScope* pScope);  // 1668
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
					int nLineNumber);  // 252
			CUtlRBTree<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::FindAltKeyType<AtomicTypeInfo_I_t>(
								const AtomicTypeInfo_I_t& search);  // 243
			CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Find(
				const KeyType_t& key);  // 253
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 265
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 256
			Node_t::Node_t(
				const KeyType_t& k,
				const ElemType_t& e);  // 207
			CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Insert(
				const KeyType_t& key,
				const ElemType_t& insert,
				ERBTreeInsertBehavior eInsertBehavior);  // 257
			CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::InsertOrDelete(
					const AtomicTypeInfo_I_t& key,
					CSchemaType_Atomic_I* const& value);  // 1669
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 1661
		}
	}
	CUtlMemory<CSchemaType_Atomic_I::Purge(); // 903
	CUtlMemory<CSchemaType_Atomic_I::Purge(); // 1799
	CUtlVectorBase<CSchemaType_Atomic_I::Purge(); // 560
	ValidateAlignment<CSchemaType_Atomic_I*>(void); // 508
	CUtlMemory<CSchemaType_Atomic_I::Purge(); // 510
	CUtlMemory<CSchemaType_Atomic_I::~CUtlMemory(); // 562
	CUtlVectorBase<CSchemaType_Atomic_I::~CUtlVectorBase(); // 410
	CUtlVector<CSchemaType_Atomic_I::~CUtlVector(); // 1672
	CUtlMemory<AtomicTypeInfo_I_t, int>::Purge(); // 903
	CUtlMemory<AtomicTypeInfo_I_t, int>::Purge(); // 1799
	CUtlVectorBase<AtomicTypeInfo_I_t, CUtlMemory<AtomicTypeInfo_I_t, int> >::Purge(); // 560
	ValidateAlignment<AtomicTypeInfo_I_t>(void); // 508
	CUtlMemory<AtomicTypeInfo_I_t, int>::Purge(); // 510
	CUtlMemory<AtomicTypeInfo_I_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AtomicTypeInfo_I_t, CUtlMemory<AtomicTypeInfo_I_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AtomicTypeInfo_I_t, CUtlMemory<AtomicTypeInfo_I_t, int> >::~CUtlVector(); // 1672
	PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_I_t, CSchemaType_Atomic_I, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic_I*)> >(CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*>& localTypeMap,
																CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*>& parentTypeMap,
																ISchemaSystemTypeScope* pParentTypeScope,
																const   extraWork); // 1712
	CUtlRBTree<CUtlMap<int, const SchemaAtomicTypeInfo_t::Count()(int const&, int const&)>: this); // 177
	CUtlMap<int, const SchemaAtomicTypeInfo_t::Count()(int const&, int const&)>* this); // 308
	CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t::IsEmpty(); // 1726
	{
		int i; // 591
		{
			HashBucket_t& bucket; // 593
		}
	}
	CUtlTSHashBase<CSchemaClassInfo::Commit(); // 579
	CUtlTSHashBase<CSchemaClassInfo::Commit(); // 1773
	{
		int i; // 591
		{
			HashBucket_t& bucket; // 593
		}
	}
	CUtlTSHashBase<CSchemaEnumInfo::Commit(); // 579
	CUtlTSHashBase<CSchemaEnumInfo::Commit(); // 1774
} /* size: 0, variables: 3, inline expansions: 244 (22635 bytes) */

// <000DD514> schemasystem/schemasystem.cpp:1780
// variables: 4
// function calls: 33
void CSchemaSystemTypeScope::Type_DeclaredEnum(const char* pTypeName)
{
	CSchemaType_DeclaredEnum* pType; // 1782
	const char   __FUNCTION__; // 52982
	SchemaClassId_t nId; // 1796
	{
		int* _pCrash; // 1787
	}
	CUtlString::Get(); // 1787
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1787
	CUtlString::operator=(
			const char* src);  // 1794
	CUtlString::CUtlString(); // 169
	CSchemaType::CSchemaType(
			ISchemaSystemTypeScope* pTypeScope);  // 695
	CSchemaType_DeclaredEnum::CSchemaType_DeclaredEnum(
				ISchemaSystemTypeScope* pTypeScope);  // 1793
	V_strlen(const char* str); // 19
	ComputeClassNameHash(const char* pClassName); // 15
	ComputeClassNameHash(const char* pClassName); // 1796
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
			int nLineNumber);  // 252
	CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::FindAltKeyType<unsigned int>(
					const unsigned int& search);  // 243
	CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Find(
		const KeyType_t& key);  // 253
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Element(
		short unsigned int i);  // 92
	CUtlMap<unsigned int, CSchemaType_DeclaredEnum::operator[](
			IndexType_t i);  // 263
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 265
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 256
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 257
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<unsigned int, CSchemaType_DeclaredEnum::Element(
		short unsigned int i);  // 92
	CUtlMap<unsigned int, CSchemaType_DeclaredEnum::operator[](
			IndexType_t i);  // 258
	CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum::InsertOrDelete(
			const unsigned int& key,
			CSchemaType_DeclaredEnum* const& value);  // 1797
} /* size: 643, variables: 3, inline expansions: 33 (1017 bytes) */

// <000DD38E> schemasystem/schemasystem.cpp:1803
// variable: 1
// function calls: 4
void CSchemaSystemTypeScope::FindDeclaredClass(const char* pName)
{
	const CSchemaClassInfo* pClass; // 1805
	V_strlen(const char* str); // 19
	ComputeClassNameHash(const char* pClassName); // 15
	ComputeClassNameHash(const char* pClassName); // 520
	CSchemaSystemTypeScope::FindRawClassBinding(
				const char* pStructName);  // 1805
} /* size: 130, variables: 1, inline expansions: 4 (174 bytes) */

// <000DD208> schemasystem/schemasystem.cpp:1817
// variable: 1
// function calls: 4
void CSchemaSystemTypeScope::FindDeclaredEnum(const char* pName)
{
	const CSchemaEnumInfo* pEnum; // 1819
	V_strlen(const char* str); // 19
	ComputeClassNameHash(const char* pClassName); // 15
	ComputeClassNameHash(const char* pClassName); // 550
	CSchemaSystemTypeScope::FindRawEnumBinding(
				const char* pEnumName);  // 1819
} /* size: 130, variables: 1, inline expansions: 4 (174 bytes) */

// <00111593> schemasystem/schemasystem.cpp:1831
void CSchemaSystem::RegisterAtomicType(AtomicTypeIntrospectionHandle_t pAtomicType)
{
} /* size: 16 */

// <000DCF96> schemasystem/schemasystem.cpp:1839
// variables: 2
// function calls: 7
void CSchemaSystem::CompleteModuleRegistration(const char* pModuleName)
{
	CSchemaSystemTypeScope* pTypeScope; // 1841
	UtlSymId_t nId; // 1842
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<CSchemaSystemTypeScope::Find(
		const char* pString);  // 1842
	CUtlVectorBase<CSchemaSystemTypeScope::Count(); // 53
	{
	}
	CUtlMemory<CSchemaSystemTypeScope::operator[](
			int i);  // 588
	CUtlVectorBase<CSchemaSystemTypeScope::operator[](
			int i);  // 54
	CUtlStringMap<CSchemaSystemTypeScope::operator[](
			IndexType_t n);  // 1845
} /* size: 0, variables: 2, inline expansions: 7 (105 bytes) */

// <000DC41D> schemasystem/schemasystem.cpp:1853
// variables: 8
// function calls: 34
void CSchemaSystemTypeScope::RegisterAtomicType(AtomicTypeIntrospectionHandle_t pAtomicType)
{
	SchemaAtomicId_t nNameHash; // 1862
	const char   __FUNCTION__; // 53009
	AtomicTypeIntrospectionHandle_t pExisting; // 1868
	{
		int* _pCrash; // 1865
	}
	{
		SchemaAtomicId_t nExistingNameHash; // 1874
		{
			int* _pCrash; // 1875
		}
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 1875
	}
	V_strlen(const char* str); // 19
	ComputeClassNameHash(const char* pClassName); // 15
	ComputeClassNameHash(const char* pClassName); // 1862
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1865
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
			int nLineNumber);  // 269
	CUtlRBTree<CUtlMap<int, const SchemaAtomicTypeInfo_t::FindAltKeyType<int>(
				const int& search);  // 243
	CUtlMap<int, const SchemaAtomicTypeInfo_t::Find(
		const KeyType_t& key);  // 270
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, const SchemaAtomicTypeInfo_t::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<int, const SchemaAtomicTypeInfo_t::Element(
		short unsigned int i);  // 92
	CUtlMap<int, const SchemaAtomicTypeInfo_t::operator[](
			IndexType_t i);  // 278
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 280
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, const SchemaAtomicTypeInfo_t::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<CUtlMap<int, const SchemaAtomicTypeInfo_t::LeftChild(
			short unsigned int i);  // 1667
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, const SchemaAtomicTypeInfo_t::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<int, const SchemaAtomicTypeInfo_t::Element(
		short unsigned int i);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1669
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, const SchemaAtomicTypeInfo_t::operator[](
			short unsigned int i);  // 617
	CUtlRBTree<CUtlMap<int, const SchemaAtomicTypeInfo_t::RightChild(
			short unsigned int i);  // 1677
	CUtlRBTree<CUtlMap<int, const SchemaAtomicTypeInfo_t::FindInsertionPosition(
				const Node_t& insert,
				bool bCheckForDuplicates,
				short unsigned int& parent,
				bool& leftchild,
				bool& isDuplicate);  // 1693
	{
		short unsigned int newNode; // 1709
		{
		}
	}
	{
		short unsigned int newNode; // 1696
	}
	CUtlRBTree<CUtlMap<int, const SchemaAtomicTypeInfo_t::Insert(
		const Node_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 207
	CUtlMap<int, const SchemaAtomicTypeInfo_t::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 273
	CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t::InsertOrIgnore(
			const int& key,
			const SchemaAtomicTypeInfo_t* const& value);  // 1868
	V_strcmp(const char* s1,
		const char* s2);  // 1872
} /* size: 0, variables: 3, inline expansions: 33 (1800 bytes) */

// <000DBBD9> schemasystem/schemasystem.cpp:1883
// variables: 4
// function calls: 26
void CSchemaSystemTypeScope::ResolveAtomicInfoThreadsafe(AtomicTypeIntrospectionHandle_t* pOutTargetInfo, const char* pTypeName, SchemaClassId_t nBaseNameHash)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1891; // 1891
	const char   __FUNCTION__; // 53242
	{
		AtomicTypeIntrospectionHandle_t pInfo; // 1900
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1901
		}
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
				int nLineNumber);  // 231
		CUtlRBTree<CUtlMap<int, const SchemaAtomicTypeInfo_t::FindAltKeyType<int>(
					const int& search);  // 243
		CUtlMap<int, const SchemaAtomicTypeInfo_t::Find(
			const KeyType_t& key);  // 232
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, const SchemaAtomicTypeInfo_t::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<int, const SchemaAtomicTypeInfo_t::Element(
			short unsigned int i);  // 92
		CUtlMap<int, const SchemaAtomicTypeInfo_t::operator[](
				IndexType_t i);  // 236
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 237
		CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t::Find(
			const int& key);  // 1900
	}
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
			int nLineNumber);  // 1891
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1904
} /* size: 0, variables: 2, inline expansions: 10 (510 bytes) */

// <000DB805> schemasystem/schemasystem.cpp:1909
// variables: 4
// function calls: 10
void CSchemaSystemTypeScope::ResolveEnumInfoThreadsafe(EnumIntrospectionHandle_t* pOutTargetInfo, const char* pEnumName)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1911; // 1911
	const char   __FUNCTION__; // 53188
	{
		EnumIntrospectionHandle_t pFoundEnum; // 1920
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1921
		}
	}
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
			int nLineNumber);  // 1911
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1924
} /* size: 0, variables: 2, inline expansions: 10 (472 bytes) */

// <000DB431> schemasystem/schemasystem.cpp:1929
// variables: 4
// function calls: 10
void CSchemaSystemTypeScope::ResolveClassInfoThreadsafe(ClassIntrospectionHandle_t* pOutTargetInfo, const char* pClassName)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1931; // 1931
	const char   __FUNCTION__; // 53215
	{
		ClassIntrospectionHandle_t pFoundClass; // 1940
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1941
		}
	}
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
			int nLineNumber);  // 1931
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1944
} /* size: 0, variables: 2, inline expansions: 10 (472 bytes) */

// <000DB18E> schemasystem/schemasystem.cpp:1949
// variables: 7
// function calls: 5
int StripTrailingFixedLength(const char* pTypeName, char* pOutTypeWithoutFixedArray, int nBufSize)
{
	int nStrlLen; // 1951
	int i; // 1952
	const char   __FUNCTION__; // 53161
	int nNumLen; // 1981
	char* pNumStr; // 1982
	int nArrayLength; // 1985
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1973
	}
	V_strlen(const char* str); // 1951
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 1977
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 1983
} /* size: 0, variables: 6, inline expansions: 5 (0 bytes) */

// <000DB08B> schemasystem/schemasystem.cpp:1990
// variable: 1
// function calls: 3
void CSchemaSystemTypeScope::FindBuiltinTypeByName(const char* pTypeName)
{
	{
		int i; // 2001
		CUtlString::Get(); // 72
		CSchemaType::GetName(); // 2003
		V_strcmp(const char* s1,
			const char* s2);  // 2003
	}
} /* size: 142 */

// <000DA94A> schemasystem/schemasystem.cpp:2013
// variables: 3
// function calls: 30
void CSchemaSystem::TrackBindingInBinary(uintp pBinding, const char* pBinaryName)
{
	UtlSymId_t nId; // 2015
	BindingRange_t& range; // 2021
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<CSchemaSystem::BindingRange_t, CUtlSymbolTable>::Find(
		const char* pString);  // 2015
	CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::Count(); // 53
	{
	}
	CUtlMemory<CSchemaSystem::BindingRange_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::operator[](
			int i);  // 54
	CUtlStringMap<CSchemaSystem::BindingRange_t, CUtlSymbolTable>::operator[](
			IndexType_t n);  // 2021
	BindingRange_t::Add(
		uintp pBinding);  // 2022
	CUtlSymbol::IsValid(); // 64
	CUtlSymbolTable::AddStringElement(
			const char* pString);  // 95
	CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::Count(); // 96
	CUtlMemory<CSchemaSystem::BindingRange_t, int>::NumAllocated(); // 782
	CUtlMemory<CSchemaSystem::BindingRange_t, int>::IsGrowable(); // 823
	CUtlMemory<CSchemaSystem::BindingRange_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CSchemaSystem::BindingRange_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CSchemaSystem::BindingRange_t, int>::Grow(
		int num);  // 806
	CUtlMemory<CSchemaSystem::BindingRange_t, int>::Base(); // 112
	CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::Base(); // 368
	CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CSchemaSystem::BindingRange_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::Element(
			int i);  // 1453
		BindingRange_t::BindingRange_t(); // 1479
		Construct<CSchemaSystem::BindingRange_t>(BindingRange_t* pMemory); // 1453
	}
	CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::EnsureCount(
			int num);  // 98
	CUtlStringMap<CSchemaSystem::BindingRange_t, CUtlSymbolTable>::AddString(
			const char* pString);  // 2018
} /* size: 0, variables: 2, inline expansions: 26 (2441 bytes) */

// <000DA302> schemasystem/schemasystem.cpp:2028
// variables: 2
// function calls: 26
void CSchemaSystem::FindBindingBinary(uintp pBinding)
{
	{
		UtlSymId_t nId; // 2030
		{
			BindingRange_t& range; // 2032
			{
			}
			CUtlMemory<CSchemaSystem::BindingRange_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::operator[](
					int i);  // 54
			CUtlStringMap<CSchemaSystem::BindingRange_t, CUtlSymbolTable>::operator[](
					IndexType_t n);  // 2032
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 609
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 110
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
					blockpooloffset_t nIndex);  // 186
			CUtlSymbolTable::StringFromIndex(
					const blockpooloffset_t& index);  // 110
			CUtlSymbolTable::GetElementString(
					int nElement);  // 182
			CUtlStringMap<CSchemaSystem::BindingRange_t, CUtlSymbolTable>::String(
				int n);  // 2036
		}
		CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::Count(); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::Count(); // 79
		CUtlStringMap<CSchemaSystem::BindingRange_t, CUtlSymbolTable>::Count(); // 142
		CUtlStringMap<CSchemaSystem::BindingRange_t, CUtlSymbolTable>::First(); // 2030
		CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::Count(); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		CUtlVectorBase<CSchemaSystem::BindingRange_t, CUtlMemory<CSchemaSystem::BindingRange_t, int> >::Count(); // 79
		CUtlStringMap<CSchemaSystem::BindingRange_t, CUtlSymbolTable>::Count(); // 155
		CUtlStringMap<CSchemaSystem::BindingRange_t, CUtlSymbolTable>::Next(
			IndexType_t i);  // 2030
	}
} /* size: 0 */

// <000DA2BD> schemasystem/schemasystem.cpp:2046
// variable: 1
void CSchemaSystem::GetNoSchemaClassInfo()
{
	SchemaClassInfoData_t s_NoSchemaClassInfo; // 2048
} /* size: 12, variables: 1 */

