
//
// tier0/utlstringtokensystem.cpp
//
//	referenced by: libtier0.so
//
//	functions: 43
//	class: 1
//

// <005A3A2B> tier0/utlstringtokensystem.cpp:27
// variable: 1
// function calls: 24
void CUtlStringTokenSystem::~CUtlStringTokenSystem()
{
	CBufferString::~CBufferString(); // 27
	CBufferString::~CBufferString(); // 27
	~CUtlTSHash(const CUtlTSHash<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMethod<unsigned in this); // 27
	{
		int i; // 1721
		CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 56
		TokenPairing_t::~TokenPairing_t(); // 1526
		Destruct<CUtlStringTokenSystem::TokenPairing_t>(TokenPairing_t* pMemory); // 1723
	}
	CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::Purge(); // 903
	CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::Purge(); // 1799
	CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::Base(); // 112
	CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::Base(); // 368
	CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::Purge(); // 560
	CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::Purge(); // 903
	CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::Purge(); // 510
	ValidateAlignment<CUtlStringTokenSystem::TokenPairing_t>(void); // 508
	CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::~CUtlVector(); // 72
	AsyncWriteQueue_t::~AsyncWriteQueue_t(); // 27
} /* size: 262, inline expansions: 19 (836 bytes) */

// <005A3A0F> tier0/utlstringtokensystem.cpp:27
inline void CUtlStringTokenSystem::~CUtlStringTokenSystem()
{
} /* size: 0 */

// <0059E186> tier0/utlstringtokensystem.cpp:27
// member functions: 44
// member variables: 12
// vtable entries: 6
// class size: 24,832
class CUtlStringTokenSystem : public CTier0AppSystem<IUtlStringTokenSystem, 0> {
	/* tier0/utlstringtokensystem.cpp:56 */
	struct TokenPairing_t {
		CUtlString tokenString; /* 0 8 */
		uint32 nHash; /* 8 4 */
		/* tier0/utlstringtokensystem.cpp:61 */
		int SortCompare(const TokenPairing_t* , const TokenPairing_t* );
		TokenPairing_t& operator=(TokenPairing_t* , TokenPairing_t& );
		void TokenPairing_t(TokenPairing_t* , TokenPairing_t& );
		void ~TokenPairing_t(TokenPairing_t* );
		void TokenPairing_t(TokenPairing_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tier0/utlstringtokensystem.cpp:72 */
	struct AsyncWriteQueue_t {
		CUtlVector<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> > pairs; /* 0 32 */
		CThreadFastMutex mutex; /* 32 24 */
		void ~AsyncWriteQueue_t(AsyncWriteQueue_t* );
		void AsyncWriteQueue_t(AsyncWriteQueue_t* );
	};
	/* tier0/utlstringtokensystem.cpp:82 */
	class CTokenStringAndSource {
		/* tier0/utlstringtokensystem.cpp:85 */
		void CTokenStringAndSource(CTokenStringAndSource* );
		/* tier0/utlstringtokensystem.cpp:91 */
		void CTokenStringAndSource(CTokenStringAndSource* , const char* , int);
		CUtlString m_OriginatingString; /* 0 8 */
		int m_nSource; /* 8 4 */
		void ~CTokenStringAndSource(CTokenStringAndSource* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CTier0AppSystem<IUtlStringTokenSystem, 0> <ancestor>; */ /* 0 8 */
	void CUtlStringTokenSystem(CUtlStringTokenSystem* , CUtlStringTokenSystem& );
	void CUtlStringTokenSystem(CUtlStringTokenSystem* , const CUtlStringTokenSystem& );
	/* tier0/utlstringtokensystem.cpp:169 */
	void CUtlStringTokenSystem(CUtlStringTokenSystem* );
	/* tier0/utlstringtokensystem.cpp:192 */
	virtual const AppSystemInfo_t* GetDependencies(CUtlStringTokenSystem* );
	/* tier0/utlstringtokensystem.cpp:202 */
	virtual bool Connect(CUtlStringTokenSystem* , CreateInterfaceFn);
	/* tier0/utlstringtokensystem.cpp:214 */
	virtual void Reconnect(CUtlStringTokenSystem* , CreateInterfaceFn, const char* );
	/* tier0/utlstringtokensystem.cpp:224 */
	virtual void PreShutdown(CUtlStringTokenSystem* );
	/* tier0/utlstringtokensystem.cpp:323 */
	void RegisterStringToken(CUtlStringTokenSystem* , uint32, const char* , bool);
	/* tier0/utlstringtokensystem.cpp:365 */
	virtual const char* GetLikelyStringTokenName(CUtlStringTokenSystem* , uint32);
	/* tier0/utlstringtokensystem.cpp:230 */
	virtual void OnAppSearchPathsKnown(CUtlStringTokenSystem* );
private:
	/* tier0/utlstringtokensystem.cpp:409 */
	void LoadDatabaseFile(CUtlStringTokenSystem* );
	/* tier0/utlstringtokensystem.cpp:577 */
	void WriteDatabaseFileUpdates(CUtlStringTokenSystem* );
	/* tier0/utlstringtokensystem.cpp:236 */
	void ResolveDatabasePaths(CUtlStringTokenSystem* );
	/* tier0/utlstringtokensystem.cpp:387 */
	void WriteToDatabase(CUtlStringTokenSystem* , uint32, const char* );
	AsyncWriteQueue_t m_DBWriteQueue[2]; /* 8 112 */
	CUtlTSHash<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMethod<unsigned int> > m_stringTokenMap __attribute__((__aligned__(16))); /* 128 24656 */
	bool m_bCheckForCollisions; /* 24784 1 */
	bool m_bUpdateDatabase; /* 24785 1 */
	bool m_bForceWriteToTrimCrossDatabaseDupes; /* 24786 1 */
	bool m_bConnected; /* 24787 1 */
	bool m_bResolvedPathsWithFileSystemAvailable; /* 24788 1 */
	bool m_bDataBaseLoaded; /* 24789 1 */
	CBufferString m_databaseWritePath; /* 24792 16 */
	CBufferString m_databaseSearchPaths; /* 24808 16 */
	int m_nWritePathOffsetWithinReadPaths; /* 24824 4 */
	/* tier0/utlstringtokensystem.cpp:105 */
	class CStringConstructor : public ITSHashConstructor<CUtlStringTokenSystem::CTokenStringAndSource> {
	public:
		/* class ITSHashConstructor<CUtlStringTokenSystem::CTokenStringAndSource> <ancestor>; */ /* 0 8 */
		void ~CStringConstructor(CStringConstructor* );
		void CStringConstructor(CStringConstructor* , CStringConstructor& );
		void CStringConstructor(CStringConstructor* , const CStringConstructor& );
		/* tier0/utlstringtokensystem.cpp:108 */
		void CStringConstructor(CStringConstructor* , const char* , int);
		/* tier0/utlstringtokensystem.cpp:115 */
		virtual void Construct(CStringConstructor* , CTokenStringAndSource* );
	private:
		const char * m_pString; /* 8 8 */
		int m_nSource; /* 16 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	void ~CUtlStringTokenSystem(CUtlStringTokenSystem* );
	void CUtlStringTokenSystem(class CUtlStringTokenSystem *, class CUtlStringTokenSystem &); /* linkage=_ZN21CUtlStringTokenSystemC4EOS_ */
	void CUtlStringTokenSystem(class CUtlStringTokenSystem *, const class CUtlStringTokenSystem  &); /* linkage=_ZN21CUtlStringTokenSystemC4ERKS_ */
	void CUtlStringTokenSystem(class CUtlStringTokenSystem *); /* linkage=_ZN21CUtlStringTokenSystemC4Ev */
	virtual const class AppSystemInfo_t  * GetDependencies(class CUtlStringTokenSystem *); /* linkage=_ZN21CUtlStringTokenSystem15GetDependenciesEv */
	virtual bool Connect(class CUtlStringTokenSystem *, CreateInterfaceFn); /* linkage=_ZN21CUtlStringTokenSystem7ConnectEPFPvPKcPiE */
	virtual void Reconnect(class CUtlStringTokenSystem *, CreateInterfaceFn, const char  *); /* linkage=_ZN21CUtlStringTokenSystem9ReconnectEPFPvPKcPiES2_ */
	virtual void PreShutdown(class CUtlStringTokenSystem *); /* linkage=_ZN21CUtlStringTokenSystem11PreShutdownEv */
	void RegisterStringToken(class CUtlStringTokenSystem *, uint32, const char  *, bool); /* linkage=_ZN21CUtlStringTokenSystem19RegisterStringTokenEjPKcb */
	/* <5aab64> tier0/utlstringtokensystem.cpp:365 */
	virtual const char  * GetLikelyStringTokenName(class CUtlStringTokenSystem *, uint32); /* linkage=_ZN21CUtlStringTokenSystem24GetLikelyStringTokenNameEj */
	virtual void OnAppSearchPathsKnown(class CUtlStringTokenSystem *); /* linkage=_ZN21CUtlStringTokenSystem21OnAppSearchPathsKnownEv */
	/* <5aa988> tier0/utlstringtokensystem.cpp:409 */
	void LoadDatabaseFile(class CUtlStringTokenSystem *); /* linkage=_ZN21CUtlStringTokenSystem16LoadDatabaseFileEv */
	/* <5aea14> tier0/utlstringtokensystem.cpp:577 */
	void WriteDatabaseFileUpdates(class CUtlStringTokenSystem *); /* linkage=_ZN21CUtlStringTokenSystem24WriteDatabaseFileUpdatesEv */
	void ResolveDatabasePaths(class CUtlStringTokenSystem *); /* linkage=_ZN21CUtlStringTokenSystem20ResolveDatabasePathsEv */
	/* <5aa90b> tier0/utlstringtokensystem.cpp:387 */
	void WriteToDatabase(class CUtlStringTokenSystem *, uint32, const char  *); /* linkage=_ZN21CUtlStringTokenSystem15WriteToDatabaseEjPKc */
} __attribute__((__aligned__(16)));

// <005A4426> tier0/utlstringtokensystem.cpp:56
void TokenPairing_t::TokenPairing_t()
{
} /* size: 0 */

// <005A440A> tier0/utlstringtokensystem.cpp:56
inline void TokenPairing_t::TokenPairing_t()
{
} /* size: 0 */

// <005A43A2> tier0/utlstringtokensystem.cpp:56
void TokenPairing_t::~TokenPairing_t()
{
} /* size: 0 */

// <005A4386> tier0/utlstringtokensystem.cpp:56
inline void TokenPairing_t::~TokenPairing_t()
{
} /* size: 0 */

// <005A40C8> tier0/utlstringtokensystem.cpp:56
void TokenPairing_t::TokenPairing_t(TokenPairing_t &)
{
} /* size: 0 */

// <005A40A7> tier0/utlstringtokensystem.cpp:56
inline void TokenPairing_t::TokenPairing_t(TokenPairing_t &)
{
} /* size: 0 */

// <005A4086> tier0/utlstringtokensystem.cpp:56
inline void TokenPairing_t::operator=(TokenPairing_t &)
{
} /* size: 0 */

// <005A77F5> tier0/utlstringtokensystem.cpp:61
void SortCompare(const TokenPairing_t* pLeft, const TokenPairing_t* pRight)
{
} /* size: 24 */

// <005A740E> tier0/utlstringtokensystem.cpp:72
void AsyncWriteQueue_t::AsyncWriteQueue_t()
{
} /* size: 0 */

// <005A73F2> tier0/utlstringtokensystem.cpp:72
inline void AsyncWriteQueue_t::AsyncWriteQueue_t()
{
} /* size: 0 */

// <005A73DB> tier0/utlstringtokensystem.cpp:72
void AsyncWriteQueue_t::~AsyncWriteQueue_t()
{
} /* size: 0 */

// <005A73BF> tier0/utlstringtokensystem.cpp:72
inline void AsyncWriteQueue_t::~AsyncWriteQueue_t()
{
} /* size: 0 */

// <005A3FC5> tier0/utlstringtokensystem.cpp:82
void CTokenStringAndSource::~CTokenStringAndSource()
{
} /* size: 0 */

// <005A3FA9> tier0/utlstringtokensystem.cpp:82
inline void CTokenStringAndSource::~CTokenStringAndSource()
{
} /* size: 0 */

// <005A77D4> tier0/utlstringtokensystem.cpp:91
void CTokenStringAndSource::CTokenStringAndSource(const char* szString, int nSource)
{
} /* size: 0 */

// <005A77A3> tier0/utlstringtokensystem.cpp:91
inline void CTokenStringAndSource::CTokenStringAndSource(const char* szString, int nSource)
{
} /* size: 0 */

// <005A774F> tier0/utlstringtokensystem.cpp:108
void CStringConstructor::CStringConstructor(const char* pString, int nSource)
{
} /* size: 0 */

// <005A771E> tier0/utlstringtokensystem.cpp:108
inline void CStringConstructor::CStringConstructor(const char* pString, int nSource)
{
} /* size: 0 */

// <005A8798> tier0/utlstringtokensystem.cpp:115
// function calls: 3
void CStringConstructor::Construct(CTokenStringAndSource* pElement)
{
	CUtlString::CUtlString(
			const char* pString);  // 92
	CTokenStringAndSource::CTokenStringAndSource(
				const char* szString,
				int nSource);  // 1514
	Construct<CUtlStringTokenSystem::CTokenStringAndSource, char const*&, int&>(CTokenStringAndSource* pMemory); // 117
} /* size: 0, inline expansions: 3 (0 bytes) */

// <005A76F9> tier0/utlstringtokensystem.cpp:115
inline void CStringConstructor::Construct(CTokenStringAndSource* pElement)
{
} /* size: 0 */

// <005A76D8> tier0/utlstringtokensystem.cpp:147
void* __CreateCUtlStringTokenSystemIUtlStringTokenSystem_interface(void)
{
} /* size: 12 */

// <005A7526> tier0/utlstringtokensystem.cpp:150
// variables: 2
// function calls: 2
void RegisterStringToken(uint32 tokenHashCode, const char* pTokenString, const char* pTokenStringEnd, bool bWriteToDatabase)
{
	{
		size_t nStringLength; // 158
		char* szStringCopy; // 159
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 160
	}
} /* size: 237 */

// <005A7011> tier0/utlstringtokensystem.cpp:169
// function calls: 16
void CUtlStringTokenSystem::CUtlStringTokenSystem()
{
	IAppSystem::IAppSystem(); // 21
	IUtlStringTokenSystem::IUtlStringTokenSystem(); // 120
	CBaseAppSystem<IUtlStringTokenSystem>::CBaseAppSystem(); // 171
	CTier0AppSystem<IUtlStringTokenSystem, 0>::CTier0AppSystem(); // 177
	CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::CUtlVector(); // 72
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 72
	AsyncWriteQueue_t::AsyncWriteQueue_t(); // 177
	CUtlTSHash(const CUtlTSHash<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMethod<unsigned in this,
			int nAllocationCount);  // 170
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 177
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 177
} /* size: 270, inline expansions: 16 (290 bytes) */

// <005A6FF8> tier0/utlstringtokensystem.cpp:169
void CUtlStringTokenSystem::CUtlStringTokenSystem()
{
} /* size: 0 */

// <005A6ED1> tier0/utlstringtokensystem.cpp:192
// variable: 1
// function calls: 2
void CUtlStringTokenSystem::GetDependencies()
{
	AppSystemInfo_t s_UpdateDatabaseDependencies; // 194
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 197
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 197
} /* size: 132, variables: 1, inline expansions: 2 (42 bytes) */

// <005A6DE0> tier0/utlstringtokensystem.cpp:202
// function call: 1
void CUtlStringTokenSystem::Connect(CreateInterfaceFn factory)
{
	CTier0AppSystem<IUtlStringTokenSystem, 0>::Connect(
		CreateInterfaceFn factory);  // 204
} /* size: 120, inline expansions: 1 (18 bytes) */

// <005A6D16> tier0/utlstringtokensystem.cpp:214
// function call: 1
void CUtlStringTokenSystem::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
	CBaseAppSystem<IUtlStringTokenSystem>::Reconnect(
			CreateInterfaceFn factory,
			const char* pInterfaceName);  // 216
} /* size: 77, inline expansions: 1 (11 bytes) */

// <005A6C92> tier0/utlstringtokensystem.cpp:224
// function call: 1
void CUtlStringTokenSystem::PreShutdown()
{
	CUtlStringTokenSystem::WriteDatabaseFileUpdates(); // 226
} /* size: 25, inline expansions: 1 (20 bytes) */

// <005A6C48> tier0/utlstringtokensystem.cpp:230
void CUtlStringTokenSystem::OnAppSearchPathsKnown()
{
} /* size: 9 */

// <005A601F> tier0/utlstringtokensystem.cpp:236
// variables: 7
// function calls: 42
void CUtlStringTokenSystem::ResolveDatabasePaths()
{
	{
		CPathBufferString defaultWritePath; // 244
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 244
		CFileSystemPassThru::GetSearchPath(
				const char* pathID,
				GetSearchPathTypes_t nPathTypes,
				CBufferString* pPath,
				int nMaxElements);  // 164
		CFileSystemPassThru::GetSearchPath(
				const char* pathID,
				GetSearchPathTypes_t nPathTypes,
				CBufferString* pPath,
				int nMaxElements);  // 499
		IFileSystem::GetSearchPath(
				const char* pathID,
				CBufferString* pPath,
				int nMaxElements);  // 245
		CBufferString::IsEmpty(); // 246
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 251
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 249
	}
	{
		const char* pVGame; // 256
	}
	{
		const char* pPathsEnd; // 285
		{
			const char* pPathStart; // 286
			const char* pNextPath; // 286
			{
				CPathBufferString databaseFileName; // 310
				{
					bool bContinue; // 290
				}
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 310
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 311
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 314
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 314
				V_strcmp(const char* s1,
					const char* s2);  // 314
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 310
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 316
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 317
			}
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 285
		CBufferString::Length(); // 285
	}
	CBufferString::IsEmpty(); // 254
	CFileSystemPassThru::GetSearchPath(
			const char* pathID,
			GetSearchPathTypes_t nPathTypes,
			CBufferString* pPath,
			int nMaxElements);  // 164
	CFileSystemPassThru::GetSearchPath(
			const char* pathID,
			GetSearchPathTypes_t nPathTypes,
			CBufferString* pPath,
			int nMaxElements);  // 164
	CFileSystemPassThru::GetSearchPath(
			const char* pathID,
			GetSearchPathTypes_t nPathTypes,
			CBufferString* pPath,
			int nMaxElements);  // 270
	CBufferString::IsEmpty(); // 273
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 276
} /* size: 1225, inline expansions: 8 (343 bytes) */

// <005A5F7D> tier0/utlstringtokensystem.cpp:323
// variables: 5
void CUtlStringTokenSystem::RegisterStringToken(uint32 tokenHashCode, const char* pTokenString, bool bWriteToDatabase)
{
	const char   __FUNCTION__; // 52303
	bool bDidInsert; // 337
	CStringConstructor c; // 338
	UtlTSHashHandle_t h; // 339
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 325
	}
} /* size: 0, variables: 4 */

// <005AAB64> tier0/utlstringtokensystem.cpp:365
// variables: 3
// function calls: 11
void CUtlStringTokenSystem::GetLikelyStringTokenName(uint32 tokenHashCode)
{
	UtlTSHashHandle_t h; // 381
	HashIntConventional(const int n); // 63
	Hash(const unsigned int& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMethod<u this,
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
	Find(const CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMethod<u this,
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	Find(const CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMethod<u this,
		unsigned int uiKey);  // 381
	CUtlString::Get(); // 384
	CUtlStringTokenSystem::GetLikelyStringTokenName(
				uint32 tokenHashCode);  // 365
} /* size: 489, variables: 1, inline expansions: 9 (953 bytes) */

// <005A5F35> tier0/utlstringtokensystem.cpp:365
// variables: 2
void CUtlStringTokenSystem::GetLikelyStringTokenName(uint32 tokenHashCode)
{
	bool bDatabaseLoadingIsAcceptable; // 373
	UtlTSHashHandle_t h; // 381
} /* size: 0, variables: 2 */

// <005AA90B> tier0/utlstringtokensystem.cpp:387
// variables: 3
void CUtlStringTokenSystem::WriteToDatabase(uint32 nHash, const char* pTokenString)
{
	uint32 nWriteQueue; // 392
	AsyncWriteQueue_t& writeQueue; // 398
	TokenPairing_t& pairing; // 400
} /* size: 0, variables: 3 */

// <005A88BC> tier0/utlstringtokensystem.cpp:387
// variables: 3
// function calls: 23
void CUtlStringTokenSystem::WriteToDatabase(uint32 nHash, const char* pTokenString)
{
	uint32 nWriteQueue; // 392
	AsyncWriteQueue_t& writeQueue; // 398
	TokenPairing_t& pairing; // 400
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 827
	CThreadFastMutex::TryLock(
		const char* pFileName,
		int nLineNumber);  // 393
	CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::NumAllocated(); // 1143
	CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 56
	TokenPairing_t::TokenPairing_t(); // 1479
	Construct<CUtlStringTokenSystem::TokenPairing_t>(TokenPairing_t* pMemory); // 1148
	CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::IsGrowable(); // 823
	CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::Grow(
		int num);  // 806
	CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::Base(); // 112
	CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::Base(); // 368
	CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::AddToTail(); // 400
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 404
	CUtlString::operator=(
			const char* src);  // 401
	CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::operator[](
			int i);  // 400
} /* size: 531, variables: 3, inline expansions: 23 (1150 bytes) */

// <005AA988> tier0/utlstringtokensystem.cpp:409
// variables: 2
// function calls: 4
void CUtlStringTokenSystem::LoadDatabaseFile()
{
	const char* pPathsEnd; // 423
	{
		int nQueue; // 418
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
			unsigned int nSpinSleepTime);  // 420
	}
} /* size: 179, variables: 1 */

// <005A90B6> tier0/utlstringtokensystem.cpp:409
// variables: 28
// function calls: 88
void CUtlStringTokenSystem::LoadDatabaseFile()
{
	const char* pPathsEnd; // 423
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 423
	CBufferString::Length(); // 423
	{
		const char* pPathStart; // 424
		const char* pNextPath; // 424
		{
			bool bIsWritePath; // 448
			CPathBufferString databaseFileName; // 450
			CRelativeTickTimer waitTimer; // 457
			FILE* pFile; // 459
			size_t nFileSize; // 476
			{
				bool bContinue; // 428
			}
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 448
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 451
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 450
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 454
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 455
			CRelativeTickCount::Init(); // 547
			CRelativeTickCount::CRelativeTickCount(); // 613
			CRelativeTickTimer::CRelativeTickTimer(); // 457
			CRelativeTickCount::Sample(); // 618
			CRelativeTickTimer::Start(); // 458
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 462
			CRelativeTickCount::Init(
				uint64 nVal);  // 551
			CRelativeTickCount::CRelativeTickCount(
						uint64 nVal);  // 631
			CRelativeTickTimer::GetDurationInProgress(); // 471
			CRelativeTickCount::GetSeconds(); // 471
			{
				uint8* pFileContents; // 483
				{
					uint8* pParse; // 488
					uint8* pDataEnd; // 489
					uint8* pCompareStop; // 490
					{
						char szTemp; // 495
						int nExpectedNewlines; // 548
						{
							uint32 tokenHashCode; // 498
							bool bDidInsert; // 500
							CStringConstructor c; // 501
							UtlTSHashHandle_t h; // 502
							CThreadSpinRWLock::LockForRead(
									const char* pFileName,
									int nLineNumber);  // 743
							HashIntConventional(const int n); // 63
							Hash(const unsigned int& key,
								int nBucketMask);  // 734
							{
								HashFixedData_t* pElement; // 719
								Compare(const unsigned int& lhs,
									const unsigned int& rhs);  // 721
							}
							Find(const CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMethod<u this,
								unsigned int uiKey,
								HashFixedData_t* pFirstElement,
								HashFixedData_t* pLastElement);  // 736
							{
								HashFixedData_t* pElement; // 719
								Compare(const unsigned int& lhs,
									const unsigned int& rhs);  // 721
							}
							Find(const CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMethod<u this,
								unsigned int uiKey,
								HashFixedData_t* pFirstElement,
								HashFixedData_t* pLastElement);  // 744
							CThreadSpinRWLock::UnlockRead(
									const char* pFileName,
									int nLineNumber);  // 745
							Find(const CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMethod<u this,
								unsigned int uiKey);  // 507
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
									int nLineNumber);  // 514
							{
								HashFixedData_t* pElement; // 719
								Compare(const unsigned int& lhs,
									const unsigned int& rhs);  // 721
							}
							Find(const CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMethod<u this,
								unsigned int uiKey,
								HashFixedData_t* pFirstElement,
								HashFixedData_t* pLastElement);  // 516
							Alloc(const CUtlMemoryPool<CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHas this); // 438
							InsertUncommitted(const CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMethod<unsigne this,
										unsigned int uiKey,
										HashBucket_t& bucket);  // 521
							CUtlString::CUtlString(
									const char* pString);  // 92
							CTokenStringAndSource::CTokenStringAndSource(
										const char* szString,
										int nSource);  // 1514
							Construct<CUtlStringTokenSystem::CTokenStringAndSource, char const*&, int&>(CTokenStringAndSource* pMemory); // 117
							CStringConstructor::Construct(
									CTokenStringAndSource* pElement);  // 522
							Insert(const CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMethod<unsigne this,
								unsigned int uiKey,
								ITSHashConstructor<CUtlStringTokenSystem::CTokenStringAndSource>* pConstructor,
								bool* pDidInsert);  // 502
							StringTokenDataBaseFormatToHash(uint8* pData); // 498
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 776
							CBufferString::String(); // 501
							ITSHashConstructor<CUtlStringTokenSystem::CTokenStringAndSource>::ITSHashConstructor(); // 110
							CStringConstructor::CStringConstructor(
										const char* pString,
										int nSource);  // 501
							{
								CTokenStringAndSource& elem; // 516
								CUtlString::Get(); // 508
								CUtlString::Get(); // 510
								{
									int nQueue; // 532
									{
										int j; // 534
										Count(const CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> this); // 534
										{
											TokenPairing_t& pairEntry; // 536
											CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::operator[](
													int i);  // 588
											CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::operator[](
													int i);  // 536
											CUtlString::~CUtlString(); // 56
											TokenPairing_t::~TokenPairing_t(); // 1526
											Destruct<CUtlStringTokenSystem::TokenPairing_t>(TokenPairing_t* pMemory); // 1575
											{
												const bool  bNotLast; // 1578
												CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::operator[](
														int i);  // 602
												CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::Element(
													int i);  // 1584
												CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::operator[](
														int i);  // 602
												CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::Element(
													int i);  // 1584
												memcpy(void* __dest,
													const void* __src,
													size_t __len);  // 91
												V_memcpy(void* dest,
													const void* src,
													size_t count);  // 1584
											}
											CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::FastRemove(
													int elem);  // 539
										}
									}
								}
								CBufferString::ReadBuffer(); // 1374
								CBufferString::ReadBuffer(); // 776
								CBufferString::String(); // 519
								CBufferString::ReadBuffer(); // 1374
								CBufferString::ReadBuffer(); // 776
								CBufferString::String(); // 523
							}
						}
						{
						}
						StringTokenDataBaseFormatExpectedNewlines(const uint8* pData); // 94
						GetStringFromDatabase(const uint8* pData,
									const uint8* pReadStop,
									char* pResultBuffer,
									size_t nResultMaxSize);  // 496
						StringTokenDataBaseFormatExpectedNewlines(const uint8* pData); // 548
					}
				}
			}
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 450
		}
	}
	{
		int nQueue; // 570
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 572
	}
} /* size: 0, variables: 1, inline expansions: 4 (147 bytes) */

// <005A5D28> tier0/utlstringtokensystem.cpp:409
// variables: 25
void CUtlStringTokenSystem::LoadDatabaseFile()
{
	const char* pPathsEnd; // 423
	{
		int nQueue; // 418
	}
	{
		const char* pPathStart; // 424
		const char* pNextPath; // 424
		{
			bool bIsWritePath; // 448
			CPathBufferString databaseFileName; // 450
			CRelativeTickTimer waitTimer; // 457
			FILE* pFile; // 459
			size_t nFileSize; // 476
			{
				bool bContinue; // 428
			}
			{
				uint8* pFileContents; // 483
				{
					uint8* pParse; // 488
					uint8* pDataEnd; // 489
					uint8* pCompareStop; // 490
					{
						char szTemp; // 495
						int nExpectedNewlines; // 548
						{
							uint32 tokenHashCode; // 498
							bool bDidInsert; // 500
							CStringConstructor c; // 501
							UtlTSHashHandle_t h; // 502
							{
								CTokenStringAndSource& elem; // 516
								{
									int nQueue; // 532
									{
										int j; // 534
										{
											TokenPairing_t& pairEntry; // 536
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	{
		int nQueue; // 570
	}
} /* size: 0, variables: 1 */

// <005AEA14> tier0/utlstringtokensystem.cpp:577
// variables: 2
void CUtlStringTokenSystem::WriteDatabaseFileUpdates()
{
	bool bForceZeroPairUpdate; // 582
	bool bDidWork; // 644
} /* size: 0, variables: 2 */

// <005ABAE9> tier0/utlstringtokensystem.cpp:577
// variables: 65
// function calls: 155
void CUtlStringTokenSystem::WriteDatabaseFileUpdates()
{
	bool bForceZeroPairUpdate; // 582
	bool bDidWork; // 644
	{
		bool bWorkToDo; // 587
		{
			int nQueue; // 588
			Count(const CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> this); // 590
		}
	}
	CBufferString::IsEmpty(); // 602
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 621
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 621
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 623
	{
		int nQueue; // 626
		Count(const CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> this); // 628
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 827
		CThreadFastMutex::TryLock(
			const char* pFileName,
			int nLineNumber);  // 628
		{
			int i; // 1721
			CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::Element(
				int i);  // 1723
			CUtlString::~CUtlString(); // 56
			TokenPairing_t::~TokenPairing_t(); // 1526
			Destruct<CUtlStringTokenSystem::TokenPairing_t>(TokenPairing_t* pMemory); // 1723
		}
		CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::RemoveAll(); // 630
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 631
	}
	{
		int nQueue; // 648
		{
			AsyncWriteQueue_t& readQueue; // 654
			size_t nDataSetSize; // 659
			bool bIsNewFile; // 666
			CRelativeTickTimer waitTimer; // 667
			FILE* pFile; // 669
			size_t nFileSize; // 705
			size_t nStartingFileSize; // 706
			uint8* pFileContents; // 707
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
				unsigned int nSpinSleepTime);  // 655
			Count(const CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> this); // 659
			{
				int i; // 661
				CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::operator[](
						int i);  // 663
				V_strlen(const char* str); // 393
				CUtlString::Length(); // 663
			}
			CRelativeTickCount::Init(); // 547
			CRelativeTickCount::CRelativeTickCount(); // 613
			CRelativeTickTimer::CRelativeTickTimer(); // 667
			CRelativeTickCount::Sample(); // 618
			CRelativeTickTimer::Start(); // 668
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 679
			CRelativeTickCount::Init(
				uint64 nVal);  // 551
			CRelativeTickCount::CRelativeTickCount(
						uint64 nVal);  // 631
			CRelativeTickTimer::GetDurationInProgress(); // 694
			CRelativeTickCount::GetSeconds(); // 694
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 676
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 684
			{
				uint8* pWrite; // 1043
				{
					int i; // 1045
					Count(const CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> this); // 1045
					CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::operator[](
							int i);  // 1048
					CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::operator[](
							int i);  // 1050
					V_strlen(const char* str); // 393
					CUtlString::Length(); // 1050
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 75
					V_memcpy(void* dest,
						const void* src,
						int count);  // 1050
					CUtlString::Get(); // 1050
					{
						int nNewLines; // 1054
						char* pSubWrite; // 1055
					}
					CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::operator[](
							int i);  // 1075
					V_strlen(const char* str); // 393
					CUtlString::Length(); // 1075
				}
				{
				}
				{
				}
			}
			{
				bool bWrite; // 1002
				{
					uint8* pParse; // 746
					uint8* pDataEnd; // 747
					uint8* pCompareStop; // 748
					{
						int i; // 749
						Count(const CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> this); // 749
						{
							CUtlStringTokenHash_DatabaseFormat databaseHash; // 751
							size_t nEntrySize; // 753
							bool bInsert; // 771
							CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::operator[](
									int i);  // 588
							CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::operator[](
									int i);  // 751
							CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::operator[](
									int i);  // 588
							CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::operator[](
									int i);  // 753
							V_strlen(const char* str); // 393
							CUtlString::Length(); // 753
							{
								int i; // 62
							}
							CUtlStringTokenHash_DatabaseFormat::Compare(
								const uint8* pCompare);  // 756
							{
								int i; // 62
							}
							CUtlStringTokenHash_DatabaseFormat::Compare(
								const uint8* pCompare);  // 772
							{
								uint8* pSubParse; // 780
								{
									int nExpectedNewlines; // 796
									{
										char szTemp; // 786
										{
										}
										StringTokenDataBaseFormatExpectedNewlines(const uint8* pData); // 94
										GetStringFromDatabase(const uint8* pData,
													const uint8* pReadStop,
													char* pResultBuffer,
													size_t nResultMaxSize);  // 787
										CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::operator[](
												int i);  // 588
										CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::operator[](
												int i);  // 788
										CUtlString::Get(); // 788
									}
									StringTokenDataBaseFormatExpectedNewlines(const uint8* pData); // 796
									{
										int i; // 62
									}
									CUtlStringTokenHash_DatabaseFormat::Compare(
										const uint8* pCompare);  // 810
								}
							}
							memmove(void* __dest,
								const void* __src,
								size_t __len);  // 109
							V_memmove(void* dest,
									const void* src,
									ptrdiff_t count);  // 828
							V_strlen(const char* str); // 393
							CUtlString::Length(); // 837
							CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::operator[](
									int i);  // 588
							CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::operator[](
									int i);  // 837
							memcpy(void* __dest,
								const void* __src,
								size_t __len);  // 75
							V_memcpy(void* dest,
								const void* src,
								int count);  // 837
							CUtlString::Get(); // 837
							{
								int nNewLines; // 841
								char* pSubParse; // 842
							}
							{
								int nExpectedNewlines; // 758
								StringTokenDataBaseFormatExpectedNewlines(const uint8* pData); // 758
							}
						}
					}
				}
				{
					uint8* pParse; // 875
					uint8* pDataEnd; // 876
					uint8* pCompareStop; // 877
					uint8* pLastValidHash; // 879
					uint32 nLastValidHash; // 880
					{
						bool bRemove; // 883
						bool bCorrupt; // 884
						const char* szRemoveReason; // 885
						char szTemp; // 887
						uint8* pStart; // 942
						int nExpectedNewlines; // 943
						{
						}
						StringTokenDataBaseFormatExpectedNewlines(const uint8* pData); // 94
						GetStringFromDatabase(const uint8* pData,
									const uint8* pReadStop,
									char* pResultBuffer,
									size_t nResultMaxSize);  // 888
						{
							uint32 nHash; // 890
							CUtlStringToken regenerated; // 891
							StringTokenDataBaseFormatToHash(uint8* pData); // 890
							CUtlStringToken::CUtlStringToken(); // 121
							{
							}
							MakeStringToken(const char* pString,
									bool bWriteToDatabase);  // 119
							MakeStringToken(const char* pString,
									bool bWriteToDatabase);  // 891
							{
								UtlTSHashHandle_t h; // 922
								HashIntConventional(const int n); // 63
								Hash(const unsigned int& key,
									int nBucketMask);  // 734
								{
									HashFixedData_t* pElement; // 719
									Compare(const unsigned int& lhs,
										const unsigned int& rhs);  // 721
								}
								Find(const CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMethod<u this,
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
								Find(const CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMethod<u this,
									unsigned int uiKey,
									HashFixedData_t* pFirstElement,
									HashFixedData_t* pLastElement);  // 744
								CThreadSpinRWLock::UnlockRead(
										const char* pFileName,
										int nLineNumber);  // 745
								Find(const CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMethod<u this,
									unsigned int uiKey);  // 922
								{
									CTokenStringAndSource& elem; // 925
									CUtlString::Get(); // 927
								}
							}
							{
								char szLastValid; // 904
								{
								}
								StringTokenDataBaseFormatExpectedNewlines(const uint8* pData); // 94
								GetStringFromDatabase(const uint8* pData,
											const uint8* pReadStop,
											char* pResultBuffer,
											size_t nResultMaxSize);  // 905
							}
						}
						StringTokenDataBaseFormatExpectedNewlines(const uint8* pData); // 943
						{
						}
						StringTokenDataBaseFormatExpectedNewlines(const uint8* pData); // 94
						GetStringFromDatabase(const uint8* pData,
									const uint8* pReadStop,
									char* pResultBuffer,
									size_t nResultMaxSize);  // 957
						{
							uint32 nHash; // 959
							CUtlStringToken regenerated; // 960
							StringTokenDataBaseFormatToHash(uint8* pData); // 959
							CUtlStringToken::CUtlStringToken(); // 121
							{
							}
							MakeStringToken(const char* pString,
									bool bWriteToDatabase);  // 119
							MakeStringToken(const char* pString,
									bool bWriteToDatabase);  // 960
						}
						{
							size_t nEntrySize; // 983
							{
								size_t nParseSize; // 973
								size_t nMsgSize; // 974
								memcpy(void* __dest,
									const void* __src,
									size_t __len);  // 91
								V_memcpy(void* dest,
									const void* src,
									size_t count);  // 977
							}
							memmove(void* __dest,
								const void* __src,
								size_t __len);  // 109
							V_memmove(void* dest,
									const void* src,
									ptrdiff_t count);  // 988
						}
					}
				}
				{
				}
				{
				}
				{
					FILE* pNewFileHandle; // 1006
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 1006
				}
			}
			{
				int i; // 1721
				CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 56
				TokenPairing_t::~TokenPairing_t(); // 1526
				Destruct<CUtlStringTokenSystem::TokenPairing_t>(TokenPairing_t* pMemory); // 1723
			}
			CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::RemoveAll(); // 1086
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 1087
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 699
			{
				int i; // 1721
				CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 56
				TokenPairing_t::~TokenPairing_t(); // 1526
				Destruct<CUtlStringTokenSystem::TokenPairing_t>(TokenPairing_t* pMemory); // 1723
			}
			CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::RemoveAll(); // 700
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 701
		}
		Count(const CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> this); // 650
	}
	CBufferString::IsEmpty(); // 607
	{
		int nQueue; // 610
		Count(const CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> this); // 612
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 827
		CThreadFastMutex::TryLock(
			const char* pFileName,
			int nLineNumber);  // 612
		{
			int i; // 1721
			CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::Element(
				int i);  // 1723
			CUtlString::~CUtlString(); // 56
			TokenPairing_t::~TokenPairing_t(); // 1526
			Destruct<CUtlStringTokenSystem::TokenPairing_t>(TokenPairing_t* pMemory); // 1723
		}
		CUtlVectorBase<CUtlStringTokenSystem::TokenPairing_t, CUtlMemory<CUtlStringTokenSystem::TokenPairing_t, int> >::RemoveAll(); // 614
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 615
	}
} /* size: 0, variables: 2, inline expansions: 11 (447 bytes) */

// <005A591A> tier0/utlstringtokensystem.cpp:577
// variables: 61
void CUtlStringTokenSystem::WriteDatabaseFileUpdates()
{
	bool bForceZeroPairUpdate; // 582
	bool bDidWork; // 644
	const char   __FUNCTION__; // 52423
	{
		bool bWorkToDo; // 587
		{
			int nQueue; // 588
		}
	}
	{
		int nQueue; // 610
	}
	{
		int nQueue; // 626
	}
	{
		int nQueue; // 648
		{
			AsyncWriteQueue_t& readQueue; // 654
			size_t nDataSetSize; // 659
			bool bIsNewFile; // 666
			CRelativeTickTimer waitTimer; // 667
			FILE* pFile; // 669
			size_t nFileSize; // 705
			size_t nStartingFileSize; // 706
			uint8* pFileContents; // 707
			{
				int i; // 661
			}
			{
				bool bWrite; // 1002
				{
					uint8* pParse; // 746
					uint8* pDataEnd; // 747
					uint8* pCompareStop; // 748
					{
						int i; // 749
						{
							CUtlStringTokenHash_DatabaseFormat databaseHash; // 751
							size_t nEntrySize; // 753
							bool bInsert; // 771
							{
								int nExpectedNewlines; // 758
							}
							{
								uint8* pSubParse; // 780
								{
									int nExpectedNewlines; // 796
									{
										char szTemp; // 786
									}
								}
							}
							{
								int nNewLines; // 841
								char* pSubParse; // 842
							}
						}
					}
				}
				{
					uint8* pParse; // 875
					uint8* pDataEnd; // 876
					uint8* pCompareStop; // 877
					uint8* pLastValidHash; // 879
					uint32 nLastValidHash; // 880
					{
						bool bRemove; // 883
						bool bCorrupt; // 884
						const char* szRemoveReason; // 885
						char szTemp; // 887
						uint8* pStart; // 942
						int nExpectedNewlines; // 943
						{
							uint32 nHash; // 890
							CUtlStringToken regenerated; // 891
							{
								char szLastValid; // 904
							}
							{
								UtlTSHashHandle_t h; // 922
								{
									CTokenStringAndSource& elem; // 925
								}
							}
						}
						{
							uint32 nHash; // 959
							CUtlStringToken regenerated; // 960
						}
						{
							size_t nEntrySize; // 983
							{
								size_t nParseSize; // 973
								size_t nMsgSize; // 974
							}
						}
					}
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 999
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
				}
				{
					FILE* pNewFileHandle; // 1006
				}
			}
			{
				uint8* pWrite; // 1043
				{
					int i; // 1045
					{
						int nNewLines; // 1054
						char* pSubWrite; // 1055
					}
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1078
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1079
				}
			}
		}
	}
} /* size: 0, variables: 3 */

