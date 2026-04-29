
//
// scenesystem/sceneobjectclasses.cpp
//
//	referenced by: libengine2.so
//
//	functions: 8
//

// <036242FF> ../scenesystem/sceneobjectclasses.cpp:9
void CSceneSystem::FindOrCreateSceneObjectClass(const char* pName)
{
} /* size: 25 */

// <036219C1> ../scenesystem/sceneobjectclasses.cpp:16
// variables: 15
// function calls: 141
void CSceneSystem::ConShowClasses()
{
	int nAlternateColor; // 18
	UtlHashHandle_t handle; // 21
	{
		Color color; // 24
		int nClassID; // 26
		const char* pClassName; // 27
		uint8 nCurRenderingFlags; // 30
		int nDebugLevel; // 41
		{
			int nLvl; // 42
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 51
			LoggingMetaData_t::LoggingMetaData_t(
						uint64 TypeID,
						uint8* pData,
						size_t nDataSize,
						LoggingVerbosity_t verbosity);  // 171
			{
				int nLinkCommandLen; // 174
				V_strlen(const char* str); // 174
				DWordSwapC<unsigned int>(unsigned int dw); // 181
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 75
				V_memcpy(void* dest,
					const void* src,
					int count);  // 182
			}
			CLoggingMetaCommandLink::CLoggingMetaCommandLink(
						const char* pLinkCommand,
						LoggingVerbosity_t verbosity,
						CommandLinkFlags_e nFlags);  // 207
			CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(
							const char* pLinkCommand,
							LoggingVerbosity_t verbosity);  // 51
			CLoggingMetaCommandLink::~CLoggingMetaCommandLink(); // 203
			CLoggingMetaCommandLinkNoHistory::~CLoggingMetaCommandLinkNoHistory(); // 51
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 51
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 46
		}
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 24
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char,  this,
				int i);  // 406
		GetBucketIndex(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
				UtlHashHandle_t handle);  // 403
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this,
			int i);  // 406
		operator[](const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, this,
				UtlHashHandle_t handle);  // 127
		CUtlHashDict<unsigned char, true, true>::Element(
			UtlHashHandle_t handle);  // 26
		CUtlHashDict<unsigned char, true, true>::GetElementName(
				UtlHashHandle_t handle);  // 27
		Plat_IsInDebugSession(void); // 55
		Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned this); // 437
		GetBucketIndex(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
				UtlHashHandle_t handle);  // 434
		GetKeyDataIndex(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
				UtlHashHandle_t handle);  // 435
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned  this,
				int i);  // 440
		Count(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, this); // 440
		{
		}
		BuildHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
				int ndxBucket,
				int ndxKeyData);  // 441
		GetNextHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
				UtlHashHandle_t handle);  // 348
		CUtlHashDict<unsigned char, true, true>::Next(
			UtlHashHandle_t handle);  // 79
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 37
		LoggingMetaData_t::LoggingMetaData_t(
					uint64 TypeID,
					uint8* pData,
					size_t nDataSize,
					LoggingVerbosity_t verbosity);  // 171
		{
			int nLinkCommandLen; // 174
			V_strlen(const char* str); // 174
			DWordSwapC<unsigned int>(unsigned int dw); // 181
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 182
		}
		CLoggingMetaCommandLink::CLoggingMetaCommandLink(
					const char* pLinkCommand,
					LoggingVerbosity_t verbosity,
					CommandLinkFlags_e nFlags);  // 207
		CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(
						const char* pLinkCommand,
						LoggingVerbosity_t verbosity);  // 37
		CLoggingMetaCommandLink::~CLoggingMetaCommandLink(); // 203
		CLoggingMetaCommandLinkNoHistory::~CLoggingMetaCommandLinkNoHistory(); // 37
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 37
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 70
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 70
		LoggingMetaData_t::LoggingMetaData_t(
					uint64 TypeID,
					uint8* pData,
					size_t nDataSize,
					LoggingVerbosity_t verbosity);  // 171
		{
			int nLinkCommandLen; // 174
			V_strlen(const char* str); // 174
			DWordSwapC<unsigned int>(unsigned int dw); // 181
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 182
		}
		CLoggingMetaCommandLink::CLoggingMetaCommandLink(
					const char* pLinkCommand,
					LoggingVerbosity_t verbosity,
					CommandLinkFlags_e nFlags);  // 207
		CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(
						const char* pLinkCommand,
						LoggingVerbosity_t verbosity);  // 70
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 33
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 33
		LoggingMetaData_t::LoggingMetaData_t(
					uint64 TypeID,
					uint8* pData,
					size_t nDataSize,
					LoggingVerbosity_t verbosity);  // 171
		{
			int nLinkCommandLen; // 174
			V_strlen(const char* str); // 174
			DWordSwapC<unsigned int>(unsigned int dw); // 181
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 182
		}
		CLoggingMetaCommandLink::CLoggingMetaCommandLink(
					const char* pLinkCommand,
					LoggingVerbosity_t verbosity,
					CommandLinkFlags_e nFlags);  // 207
		CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(
						const char* pLinkCommand,
						LoggingVerbosity_t verbosity);  // 33
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 74
		LoggingMetaData_t::LoggingMetaData_t(
					uint64 TypeID,
					uint8* pData,
					size_t nDataSize,
					LoggingVerbosity_t verbosity);  // 171
		{
			int nLinkCommandLen; // 174
			V_strlen(const char* str); // 174
			DWordSwapC<unsigned int>(unsigned int dw); // 181
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 182
		}
		CLoggingMetaCommandLink::CLoggingMetaCommandLink(
					const char* pLinkCommand,
					LoggingVerbosity_t verbosity,
					CommandLinkFlags_e nFlags);  // 207
		CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(
						const char* pLinkCommand,
						LoggingVerbosity_t verbosity);  // 74
		CLoggingMetaCommandLink::~CLoggingMetaCommandLink(); // 203
		CLoggingMetaCommandLinkNoHistory::~CLoggingMetaCommandLinkNoHistory(); // 74
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 74
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 64
		LoggingMetaData_t::LoggingMetaData_t(
					uint64 TypeID,
					uint8* pData,
					size_t nDataSize,
					LoggingVerbosity_t verbosity);  // 171
		{
			int nLinkCommandLen; // 174
			V_strlen(const char* str); // 174
			DWordSwapC<unsigned int>(unsigned int dw); // 181
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 182
		}
		CLoggingMetaCommandLink::CLoggingMetaCommandLink(
					const char* pLinkCommand,
					LoggingVerbosity_t verbosity,
					CommandLinkFlags_e nFlags);  // 207
		CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(
						const char* pLinkCommand,
						LoggingVerbosity_t verbosity);  // 64
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 60
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 60
		LoggingMetaData_t::LoggingMetaData_t(
					uint64 TypeID,
					uint8* pData,
					size_t nDataSize,
					LoggingVerbosity_t verbosity);  // 171
		{
			int nLinkCommandLen; // 174
			V_strlen(const char* str); // 174
			DWordSwapC<unsigned int>(unsigned int dw); // 181
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 182
		}
		CLoggingMetaCommandLink::CLoggingMetaCommandLink(
					const char* pLinkCommand,
					LoggingVerbosity_t verbosity,
					CommandLinkFlags_e nFlags);  // 207
		CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(
						const char* pLinkCommand,
						LoggingVerbosity_t verbosity);  // 60
		CLoggingMetaCommandLink::~CLoggingMetaCommandLink(); // 203
		CLoggingMetaCommandLinkNoHistory::~CLoggingMetaCommandLinkNoHistory(); // 64
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 64
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 402
	CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::LockForRead(); // 20
	Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned this); // 437
	operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned  this,
			int i);  // 440
	Count(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, this); // 440
	{
	}
	BuildHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
			int ndxBucket,
			int ndxKeyData);  // 441
	GetNextHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
			UtlHashHandle_t handle);  // 426
	GetFirstHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this); // 342
	CUtlHashDict<unsigned char, true, true>::First(); // 21
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 404
	CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::UnlockRead(); // 81
} /* size: 0, variables: 2, inline expansions: 16 (1947 bytes) */

// <03621184> ../scenesystem/sceneobjectclasses.cpp:85
// variables: 2
// function calls: 29
void CSceneSystem::ConSetClassFlags(const CCommandContext& ctx, const CCommand& args)
{
	uint8 nId; // 93
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 88
	HashStringFastCaseless(const char* pszKey); // 96
	CHash<true>::operator(
			const Entry_t& entry);  // 239
	{
		int bucketCount; // 249
		Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned this); // 249
	}
	operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned  this,
			int i);  // 254
	Count(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, this); // 255
	CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::operator[](
			int i);  // 609
	Element(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, this,
		int i);  // 258
	CCompare<true>::operator(
			const Entry_t& entry1,
			const Entry_t& entry2);  // 258
	DoFind(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
		const Entry_t& src,
		unsigned int* pBucket,
		int* pIndex);  // 278
	{
	}
	{
	}
	BuildHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
			int ndxBucket,
			int ndxKeyData);  // 280
	Find(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
		const Entry_t& src);  // 330
	CUtlHashDict<unsigned char, true, true>::Find(
		const char* pName);  // 88
	GetKeyDataIndex(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
			UtlHashHandle_t handle);  // 156
	GetBucketIndex(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
			UtlHashHandle_t handle);  // 155
	Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned this); // 162
	operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned  this,
			int i);  // 164
	Count(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, this); // 164
	IsValidHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
			UtlHashHandle_t handle);  // 174
	CUtlHashDict<unsigned char, true, true>::IsValidHandle(
			UtlHashHandle_t handle);  // 88
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 90
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 93
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 94
} /* size: 0, variables: 1, inline expansions: 28 (1528 bytes) */

// <03621070> ../scenesystem/sceneobjectclasses.cpp:101
// variable: 1
// function calls: 4
void CSceneSystem::SetObjectClass(CSceneObject* pObj, uint8 nClass)
{
	int nOldClass; // 103
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 105
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 106
} /* size: 38, variables: 1, inline expansions: 4 (36 bytes) */

// <0362100F> ../scenesystem/sceneobjectclasses.cpp:109
void CSceneSystem::ModifyObjectClassFlags(int nIndex, int nOrFlags, int nAndFlags)
{
} /* size: 27 */

// <036205F1> ../scenesystem/sceneobjectclasses.cpp:116
// variables: 3
// function calls: 35
void CSceneSystem::GetObjectClassName(uint8 nClassToName, char* pOutName, int nBufLen)
{
	UtlHashHandle_t handle; // 119
	{
		int nClassID; // 122
		{
			const char* pClassName; // 125
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3058
			CThreadRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 404
			CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::UnlockRead(); // 127
			CUtlHashDict<unsigned char, true, true>::GetElementName(
					UtlHashHandle_t handle);  // 125
			V_strncpy<int>(char* pDest,
					const char* pSrc,
					int maxLenInChars);  // 126
		}
		GetBucketIndex(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
				UtlHashHandle_t handle);  // 403
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char,  this,
				int i);  // 406
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this,
			int i);  // 406
		operator[](const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, this,
				UtlHashHandle_t handle);  // 127
		CUtlHashDict<unsigned char, true, true>::Element(
			UtlHashHandle_t handle);  // 122
		Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned this); // 437
		GetBucketIndex(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
				UtlHashHandle_t handle);  // 434
		GetKeyDataIndex(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
				UtlHashHandle_t handle);  // 435
		Count(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, this); // 440
		{
		}
		BuildHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
				int ndxBucket,
				int ndxKeyData);  // 441
		GetNextHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
				UtlHashHandle_t handle);  // 348
		CUtlHashDict<unsigned char, true, true>::Next(
			UtlHashHandle_t handle);  // 131
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 402
	CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::LockForRead(); // 118
	Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned this); // 437
	operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned  this,
			int i);  // 440
	Count(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, this); // 440
	{
	}
	BuildHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
			int ndxBucket,
			int ndxKeyData);  // 441
	GetNextHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
			UtlHashHandle_t handle);  // 426
	GetFirstHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this); // 342
	CUtlHashDict<unsigned char, true, true>::First(); // 119
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 404
	CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::UnlockRead(); // 135
} /* size: 0, variables: 1, inline expansions: 16 (1383 bytes) */

// <03620596> ../scenesystem/sceneobjectclasses.cpp:141
void sc_showclasses(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 16 */

// <0362052C> ../scenesystem/sceneobjectclasses.cpp:146
void sc_setclassflags(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 22 */

