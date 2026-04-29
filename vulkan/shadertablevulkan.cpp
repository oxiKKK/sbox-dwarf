
//
// vulkan/shadertablevulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 15
//

// <00BC3DE3> vulkan/shadertablevulkan.cpp:26
// function calls: 31
void CShaderTableVulkan::CShaderTableVulkan()
{
	ConstructList(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this); // 454
	ValidateGrowSize(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this); // 475
	CUtlMemory(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this,
			int nGrowSize,
			int nInitAllocationCount);  // 448
	ResetDbgInfo(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this); // 455
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderF this); // 448
	CUtlLinkedList(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this,
			int growSize,
			int initSize);  // 1131
	CCustomLinkedList::CCustomLinkedList(); // 977
	ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_ this); // 475
	CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_ this,
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectInde this); // 178
	CUtlHashtable(const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectInde this,
			int minimumSize);  // 977
	CUtlStableHashtable(const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<long lon this); // 33
	ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModul this); // 475
	CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModul this,
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIn this); // 178
	CUtlHashtable(const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIn this,
			int minimumSize);  // 977
	ValidateGrowSize(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_ this); // 475
	CUtlMemory(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_ this,
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderM this); // 448
	ConstructList(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsign this); // 454
	ResetDbgInfo(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsign this); // 455
	CUtlLinkedList(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsign this,
			int growSize,
			int initSize);  // 1131
	CCustomLinkedList::CCustomLinkedList(); // 977
	CUtlStableHashtable(const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t, DefaultHashFunctor<long l this); // 33
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CShaderTableVulkan>::CConCommandMemberAccessor(
					CShaderTableVulkan* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 76
	CConCommandMemberAccessor<CShaderTableVulkan>::SetOwner(
		CShaderTableVulkan* pOwner);  // 76
	CCommandMemberInitializer_OnPrintStats::CCommandMemberInitializer_OnPrintStats(); // 33
} /* size: 429, inline expansions: 31 (759 bytes) */

// <00BC3DCA> vulkan/shadertablevulkan.cpp:26
void CShaderTableVulkan::CShaderTableVulkan()
{
} /* size: 0 */

// <00BC3451> vulkan/shadertablevulkan.cpp:38
// variables: 2
// function calls: 42
void CShaderTableVulkan::~CShaderTableVulkan()
{
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 41
	CConCommandMemberAccessor<CShaderTableVulkan>::~CConCommandMemberAccessor(); // 76
	CCommandMemberInitializer_OnPrintStats::~CCommandMemberInitializer_OnPrintStats(); // 41
	ValidateAlignment<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsigned int> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderM this); // 905
	Purge(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_ this); // 903
	Purge(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_ this); // 510
	~CUtlMemory(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_ this); // 462
	~CUtlLinkedList(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsign this); // 1131
	CCustomLinkedList::~CCustomLinkedList(); // 977
	{
		entry_t* table; // 896
		Base(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModul this); // 896
		{
			int i; // 897
			Count(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShade this); // 897
			IsValid(const CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>: this); // 899
			MarkInvalid(const CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::Indir this); // 901
			Destruct<CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex, empty_t> >(CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIn this); // 188
	ValidateAlignment<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex, empty_t> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShade this); // 905
	Purge(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModul this); // 903
	Purge(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModul this); // 510
	~CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModul this); // 188
	~CUtlHashtable(const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIn this); // 977
	~CUtlStableHashtable(const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t, DefaultHashFunctor<long l this); // 41
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 41
	ValidateAlignment<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned int> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderF this); // 905
	Purge(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this); // 903
	Purge(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this); // 510
	~CUtlMemory(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this); // 462
	~CUtlLinkedList(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this); // 1131
	CCustomLinkedList::~CCustomLinkedList(); // 977
	ValidateAlignment<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex, empty_t> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShade this); // 905
	Purge(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_ this); // 903
	Purge(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_ this); // 510
	~CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_ this); // 188
	~CUtlHashtable(const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectInde this); // 977
	~CUtlStableHashtable(const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<long lon this); // 41
} /* size: 481, inline expansions: 37 (1235 bytes) */

// <00BC33E9> vulkan/shadertablevulkan.cpp:38
void CShaderTableVulkan::~CShaderTableVulkan()
{
} /* size: 36 */

// <00BC2EAD> vulkan/shadertablevulkan.cpp:44
// variable: 1
// function calls: 24
void CShaderTableVulkan::Shutdown()
{
	{
		UtlHashHandle_t hShader; // 53
		Head(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short un this); // 1041
		ExtendInvalidHandle(uint16 x); // 1041
		FirstHandle(const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<lo this); // 53
		operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this,
				short unsigned int i);  // 494
		operator[](const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this,
				short unsigned int i);  // 1028
		operator[](const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<long lon this,
				UtlHashHandle_t idx);  // 55
		operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderF this,
				short unsigned int i);  // 368
		InternalElement(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short un this,
				short unsigned int i);  // 550
		Next(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short un this,
			short unsigned int i);  // 1042
		ExtendInvalidHandle(uint16 x); // 1042
		NextHandle(const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<lo this,
				UtlHashHandle_t h);  // 53
	}
	VulkanDevice(void); // 49
	IsExternallyAllocated(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShade this); // 905
	Purge(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_ this); // 903
	Purge(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_ this); // 284
	Purge(const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectInde this); // 1020
	IsExternallyAllocated(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderF this); // 905
	Purge(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this); // 903
	Purge(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this); // 643
	ResetDbgInfo(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this); // 650
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderF this); // 648
	Purge(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this); // 1020
	Purge(const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<long lon this); // 57
} /* size: 337, inline expansions: 13 (453 bytes) */

// <00BC1C63> vulkan/shadertablevulkan.cpp:63
// variables: 11
// function calls: 52
void CShaderTableVulkan::AcquireVfxShaderFile(IRenderShaderByteCode* pShaderBuffer, bool& bIsSPIRV)
{
	const char   __FUNCTION__; // 62001
	uint64 nHash; // 68
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_71; // 71
	UtlHashHandle_t hShader; // 84
	CUtlBuffer shaderBuf; // 94
	CVfxShaderFile* pShaderFile; // 97
	const uint32* pShaderBits; // 107
	RefCountedShaderFile_t shaderFile; // 137
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 65
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 66
	}
	{
		CVfxShaderFileVulkan* pVkShaderFile; // 125
	}
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 71
	CRenderDeviceVulkan::EXTValidationCacheEnabled(); // 73
	Mix64HashFunctor::operator(
			uint64 s);  // 1104
	HashProxy::operator(
			KeyArg_t k);  // 1166
	operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShade this,
			int i);  // 296
	operator[](const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::Indire this,
			handle_t idx);  // 1169
	DoFind<long long unsigned int>(const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<lo this,
					long long unsigned int k);  // 1014
	Find(const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<lo this,
		KeyArg_t k);  // 84
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this,
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this,
			short unsigned int i);  // 1028
	operator[](const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<long lon this,
			UtlHashHandle_t idx);  // 87
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this,
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this,
			short unsigned int i);  // 1028
	operator[](const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<long lon this,
			UtlHashHandle_t idx);  // 88
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 142
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 142
	operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_ this,
			int i);  // 297
	operator[](const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectInde this,
			handle_t idx);  // 1196
	IsIdxValid(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderF this,
			short unsigned int i);  // 588
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderF this,
			short unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short un this,
			short unsigned int i);  // 583
	IsIdxAfter(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderF this,
			short unsigned int i,
			const Iterator_t& it);  // 591
	IsValidIndex(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short un this,
			short unsigned int i);  // 977
	{
	}
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this,
			short unsigned int i);  // 367
	InternalElement(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this,
			short unsigned int i);  // 982
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this,
			short unsigned int i);  // 367
	InternalElement(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this,
			short unsigned int i);  // 1011
	LinkBefore(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this,
			short unsigned int before,
			short unsigned int elem);  // 1104
	LinkToTail(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this,
			short unsigned int elem);  // 1138
	CCustomLinkedList::AddToTailUnconstructed(); // 1198
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this,
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this,
			short unsigned int i);  // 1199
	operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_ this,
			int i);  // 737
	CUtlKeyValuePair(const CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectI this,
			const IndirectIndex& k,
			const empty_t  &);  // 1514
	Construct<CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex, empty_t>, CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex&, const empty_t&>(CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex, pMemory); // 737
	DoInsertNoCheck<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex>(const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectInde this,
																IndirectIndex k,
																Arg_t v,
																unsigned int h);  // 1200
	CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>(
												const long long unsigned int& k,
												const RefCountedShaderFile_t& v);  // 1514
	Construct<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, long long unsigned int&, const CShaderTableVulkan::RefCountedShaderFile_t&>(CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>* pMemory); // 1199
	IndirectIndex::IndirectIndex(
			IndexStorage_t i);  // 1200
	DoInsert<long long unsigned int, const CShaderTableVulkan::RefCountedShaderFile_t&>(const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<long lon this,
												long long unsigned int k,
												const RefCountedShaderFile_t& v);  // 1011
	Insert(const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<long lon this,
		KeyArg_t k,
		ValueArg_t v);  // 141
} /* size: 0, variables: 8, inline expansions: 52 (2984 bytes) */

// <00BC0B90> vulkan/shadertablevulkan.cpp:145
// variables: 5
// function calls: 62
void CShaderTableVulkan::ReleaseShaderFile(UtlHashHandle_t hShader)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_147; // 147
	int32 nRefCount; // 150
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 147
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this,
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this,
			short unsigned int i);  // 1028
	operator[](const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<long lon this,
			UtlHashHandle_t idx);  // 149
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this,
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this,
			short unsigned int i);  // 1028
	operator[](const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<long lon this,
			UtlHashHandle_t idx);  // 150
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this,
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this,
			short unsigned int i);  // 1028
	operator[](const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<long lon this,
			UtlHashHandle_t idx);  // 152
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 160
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this,
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this,
			short unsigned int i);  // 1028
	operator[](const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<long lon this,
			UtlHashHandle_t idx);  // 155
	IndirectIndex::IndirectIndex(
			IndexStorage_t i);  // 1051
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this,
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this,
			short unsigned int i);  // 1102
	Mix64HashFunctor::operator(
			uint64 s);  // 1102
	HashProxy::operator(
			IndirectIndex idx);  // 267
	Count(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShade this); // 747
	Base(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShade this); // 650
	IdealIndex(uint16_if16BitStorage h,
			uint32 m);  // 653
	IdealIndex(uint16_if16BitStorage h,
			uint32 m);  // 105
	IdealIndex(const CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::I this,
			uint32 slotmask);  // 656
	IdealIndex(uint16_if16BitStorage h,
			uint32 m);  // 105
	IdealIndex(const CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::I this,
			uint32 slotmask);  // 667
	EqualProxy::operator(
			IndirectIndex lhs,
			IndirectIndex rhs);  // 670
	DoLookup<const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex&>(const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::Indire this,
																const IndirectIndex& x,
																unsigned int h,
																handle_t* pPreviousInChain);  // 749
	operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_ this,
			int i);  // 769
	operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_ this,
			int i);  // 756
	IdealIndex(uint16_if16BitStorage h,
			uint32 m);  // 105
	IdealIndex(const CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::I this,
			uint32 slotmask);  // 757
	MarkInvalid(const CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::Indirec this); // 760
	operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_ this,
			int i);  // 761
	{
		unsigned int chainid; // 776
		unsigned int nextIdx; // 777
		operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_ this,
				int i);  // 781
		IdealIndex(uint16_if16BitStorage h,
				uint32 m);  // 105
		IdealIndex(const CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::I this,
				uint32 slotmask);  // 781
		operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_ this,
				int i);  // 789
		operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_ this,
				int i);  // 790
		operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_ this,
				int i);  // 790
		{
			int i; // 121
		}
		MoveDataFrom(const CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::Indirec this,
				CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex src);  // 790
		operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_ this,
				int i);  // 791
		MarkInvalid(const CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::Indirec this); // 791
	}
	DoRemove<const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex&>(const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectInde this,
																const IndirectIndex& x,
																unsigned int h);  // 267
	Remove(const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectInde this,
		KeyArg_t k);  // 1051
	IsIdxValid(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderF this,
			short unsigned int i);  // 588
	IsIdxAfter(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderF this,
			short unsigned int i,
			const Iterator_t& it);  // 591
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderF this,
			short unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short un this,
			short unsigned int i);  // 583
	IsValidIndex(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short un this,
			short unsigned int i);  // 749
	{
	}
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this,
			short unsigned int i);  // 367
	InternalElement(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this,
			short unsigned int i);  // 752
	Destruct<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> >(CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>* pMemory); // 753
	Free(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this,
		short unsigned int elem);  // 907
	Remove(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this,
		short unsigned int elem);  // 1052
	RemoveByHandle(const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<long lon this,
			UtlHashHandle_t h);  // 156
} /* size: 0, variables: 2, inline expansions: 53 (3321 bytes) */

// <00BBFC28> vulkan/shadertablevulkan.cpp:163
// variables: 7
// function calls: 51
void CShaderTableVulkan::AcquireShaderModule(VkShaderModuleCreateInfo* pShaderModuleCreateInfo, const char* pDebugName)
{
	uint64 nHash; // 165
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_169; // 169
	UtlHashHandle_t hShader; // 171
	VkShaderModuleValidationCacheCreateInfoEXT shaderModuleValidationCacheCreateInfo; // 179
	VkShaderModule pShaderModule; // 189
	RefCountedShaderModule_t shaderModule; // 217
	{
		VkDebugUtilsObjectNameInfoEXT objectNameInfo; // 200
		VulkanDevice(void); // 205
	}
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 169
	Mix64HashFunctor::operator(
			uint64 s);  // 1104
	HashProxy::operator(
			KeyArg_t k);  // 1166
	operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShade this,
			int i);  // 296
	operator[](const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::Indi this,
			handle_t idx);  // 1169
	DoFind<long long unsigned int>(const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t, DefaultHashFunctor< this,
					long long unsigned int k);  // 1014
	Find(const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t, DefaultHashFunctor< this,
		KeyArg_t k);  // 171
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_ this,
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsign this,
			short unsigned int i);  // 1028
	operator[](const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t, DefaultHashFunctor<long l this,
			UtlHashHandle_t idx);  // 174
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 222
	VulkanDevice(void); // 190
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 145
	_DOVK(VkResult result,
		const char* pCommand);  // 136
	_DOVK(VkResult result,
		const char* pCommand);  // 190
	CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 198
	operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModul this,
			int i);  // 297
	operator[](const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIn this,
			handle_t idx);  // 1196
	IsIdxValid(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderM this,
			short unsigned int i);  // 588
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderM this,
			short unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short  this,
			short unsigned int i);  // 583
	IsIdxAfter(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderM this,
			short unsigned int i,
			const Iterator_t& it);  // 591
	IsValidIndex(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short  this,
			short unsigned int i);  // 977
	{
	}
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_ this,
			short unsigned int i);  // 367
	InternalElement(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsign this,
			short unsigned int i);  // 982
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_ this,
			short unsigned int i);  // 367
	InternalElement(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsign this,
			short unsigned int i);  // 1011
	LinkBefore(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsign this,
			short unsigned int before,
			short unsigned int elem);  // 1104
	LinkToTail(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsign this,
			short unsigned int elem);  // 1138
	CCustomLinkedList::AddToTailUnconstructed(); // 1198
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_ this,
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsign this,
			short unsigned int i);  // 1199
	operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModul this,
			int i);  // 737
	CUtlKeyValuePair(const CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::Indirec this,
			const IndirectIndex& k,
			const empty_t  &);  // 1514
	Construct<CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex, empty_t>, CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex&, const empty_t&>(CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex pMemory); // 737
	DoInsertNoCheck<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex>(const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIn this,
																IndirectIndex k,
																Arg_t v,
																unsigned int h);  // 1200
	CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>(
												const long long unsigned int& k,
												const RefCountedShaderModule_t& v);  // 1514
	Construct<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, long long unsigned int&, const CShaderTableVulkan::RefCountedShaderModule_t&>(CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>* pMemory); // 1199
	IndirectIndex::IndirectIndex(
			IndexStorage_t i);  // 1200
	DoInsert<long long unsigned int, const CShaderTableVulkan::RefCountedShaderModule_t&>(const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t, DefaultHashFunctor<long l this,
												long long unsigned int k,
												const RefCountedShaderModule_t& v);  // 1011
	Insert(const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t, DefaultHashFunctor<long l this,
		KeyArg_t k,
		ValueArg_t v);  // 221
} /* size: 0, variables: 6, inline expansions: 50 (3650 bytes) */

// <00BBED91> vulkan/shadertablevulkan.cpp:225
// variables: 6
// function calls: 54
void CShaderTableVulkan::ReleaseShaderModule(UtlHashHandle_t hShaderModule)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_227; // 227
	RefCountedShaderModule_t& shaderModule; // 229
	int32 nRefCount; // 231
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 227
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_ this,
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsign this,
			short unsigned int i);  // 1028
	operator[](const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t, DefaultHashFunctor<long l this,
			UtlHashHandle_t idx);  // 229
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 241
	CRenderDeviceVulkan::PipelineManager(); // 236
	IndirectIndex::IndirectIndex(
			IndexStorage_t i);  // 1051
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_ this,
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsign this,
			short unsigned int i);  // 1102
	Mix64HashFunctor::operator(
			uint64 s);  // 1102
	HashProxy::operator(
			IndirectIndex idx);  // 267
	Count(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShade this); // 747
	Base(const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShade this); // 650
	IdealIndex(uint16_if16BitStorage h,
			uint32 m);  // 653
	IdealIndex(uint16_if16BitStorage h,
			uint32 m);  // 105
	IdealIndex(const CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>: this,
			uint32 slotmask);  // 656
	IdealIndex(uint16_if16BitStorage h,
			uint32 m);  // 105
	IdealIndex(const CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>: this,
			uint32 slotmask);  // 667
	EqualProxy::operator(
			IndirectIndex lhs,
			IndirectIndex rhs);  // 670
	DoLookup<const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex&>(const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::Indi this,
																const IndirectIndex& x,
																unsigned int h,
																handle_t* pPreviousInChain);  // 749
	operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModul this,
			int i);  // 769
	operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModul this,
			int i);  // 756
	IdealIndex(uint16_if16BitStorage h,
			uint32 m);  // 105
	IdealIndex(const CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>: this,
			uint32 slotmask);  // 757
	MarkInvalid(const CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::Indir this); // 760
	operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModul this,
			int i);  // 761
	{
		unsigned int chainid; // 776
		unsigned int nextIdx; // 777
		operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModul this,
				int i);  // 781
		IdealIndex(uint16_if16BitStorage h,
				uint32 m);  // 105
		IdealIndex(const CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>: this,
				uint32 slotmask);  // 781
		operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModul this,
				int i);  // 789
		operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModul this,
				int i);  // 790
		operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModul this,
				int i);  // 790
		{
			int i; // 121
		}
		MoveDataFrom(const CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::Indir this,
				CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectInd src);  // 790
		operator[](const CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModul this,
				int i);  // 791
		MarkInvalid(const CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::Indir this); // 791
	}
	DoRemove<const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex&>(const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIn this,
																const IndirectIndex& x,
																unsigned int h);  // 267
	Remove(const CUtlHashtable<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIn this,
		KeyArg_t k);  // 1051
	IsIdxValid(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderM this,
			short unsigned int i);  // 588
	IsIdxAfter(const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderM this,
			short unsigned int i,
			const Iterator_t& it);  // 591
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderM this,
			short unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short  this,
			short unsigned int i);  // 583
	IsValidIndex(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short  this,
			short unsigned int i);  // 749
	{
	}
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_ this,
			short unsigned int i);  // 367
	InternalElement(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsign this,
			short unsigned int i);  // 752
	Destruct<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t> >(CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>* pMemory); // 753
	Free(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsign this,
		short unsigned int elem);  // 907
	Remove(const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsign this,
		short unsigned int elem);  // 1052
	RemoveByHandle(const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t, DefaultHashFunctor<long l this,
			UtlHashHandle_t h);  // 237
} /* size: 0, variables: 3, inline expansions: 45 (3568 bytes) */

// <00BBEA14> vulkan/shadertablevulkan.cpp:244
// variable: 1
// function calls: 13
void CShaderTableVulkan::GetShaderModule(UtlHashHandle_t hShaderModule)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_246; // 246
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 246
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_ this,
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsign this,
			short unsigned int i);  // 1028
	operator[](const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t, DefaultHashFunctor<long l this,
			UtlHashHandle_t idx);  // 247
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 248
} /* size: 158, variables: 1, inline expansions: 13 (381 bytes) */

// <00BBE697> vulkan/shadertablevulkan.cpp:251
// variable: 1
// function calls: 13
void CShaderTableVulkan::GetShaderModuleInstructionCount(UtlHashHandle_t hShaderModule)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_253; // 253
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 253
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderM this,
			short unsigned int i);  // 500
	operator[](const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short  this,
			short unsigned int i);  // 1027
	operator[](const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t, DefaultHashFunctor< this,
			UtlHashHandle_t idx);  // 254
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 255
} /* size: 0, variables: 1, inline expansions: 13 (0 bytes) */

// <00BBDF8A> vulkan/shadertablevulkan.cpp:260
// variables: 7
// function calls: 26
void CShaderTableVulkan::InitializeValidationCache()
{
	CPathBufferString shaderCachePathName; // 264
	CUtlString validationCacheFilePath; // 266
	CUtlBuffer validationCacheFile; // 269
	bool bLoadedCache; // 270
	VkValidationCacheCreateInfoEXT validationCacheCreateInfo; // 276
	VkResult nResult; // 284
	{
		CUtlString strError; // 287
		CUtlString::CUtlString(); // 287
		CUtlString::Get(); // 290
		CUtlString::~CUtlString(); // 292
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 264
	CUtlString::CUtlString(); // 266
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 267
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 270
	CUtlBuffer::TellMaxPut(); // 280
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 281
	VulkanDevice(void); // 284
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 295
	CUtlString::~CUtlString(); // 295
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 295
	CUtlString::Get(); // 273
} /* size: 786, variables: 6, inline expansions: 23 (386 bytes) */

// <00BBD9F0> vulkan/shadertablevulkan.cpp:300
// variables: 5
// function calls: 17
void CShaderTableVulkan::FlushValidationCacheToDisk(bool bForce)
{
	size_t nDataSize; // 309
	{
		CPathBufferString shaderCachePathName; // 317
		CUtlString validationCacheFilePath; // 319
		CUtlStreamBuffer validationCacheFile; // 322
		uint8* pValidationCacheData; // 329
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 317
		CUtlString::CUtlString(); // 319
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 320
		CUtlString::Get(); // 322
		VulkanDevice(void); // 330
		CUtlString::~CUtlString(); // 336
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 336
		CUtlString::Get(); // 325
		CUtlString::~CUtlString(); // 336
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 336
	}
	VulkanDevice(void); // 310
} /* size: 683, variables: 1, inline expansions: 1 (10 bytes) */

// <00BBD66D> vulkan/shadertablevulkan.cpp:342
// variable: 1
// function calls: 13
void CShaderTableVulkan::GetShaderFile(UtlHashHandle_t hShader)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_344; // 344
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 344
	operator[](const CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> this,
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned this,
			short unsigned int i);  // 1028
	operator[](const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<long lon this,
			UtlHashHandle_t idx);  // 345
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 346
} /* size: 150, variables: 1, inline expansions: 13 (381 bytes) */

// <00BBD4DF> vulkan/shadertablevulkan.cpp:349
void CShaderTableVulkan::OnPrintStats(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 558 */

