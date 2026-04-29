
//
// resourcesystem/resourcesystem_leaktracker.cpp
//
//	referenced by: libengine2.so
//
//	functions: 15
//

// <023B1899> resourcesystem/resourcesystem_leaktracker.cpp:32
// variables: 15
// function calls: 25
RecordKeepingStyle _ResourceLeakTracking_RecordKeepingStyle_EvaluateCommandLine(void)
{
	int nParmIndex; // 34
	const char* szNextParm; // 38
	const char* szAliases_RKS_DEFAULT; // 50
	const char* szAliases_RKS_DISABLE_GROUP_CLEARING; // 51
	const char* szAliases_RKS_REQUIRE_EXACT_PAIRINGS; // 52
	const char* szAliases_RKS_KEEP_ALL_RECORDS; // 53
	char szAvailableAliasMessage; // 79
	{
		int i; // 55
	}
	{
		int i; // 61
	}
	{
		int i; // 67
	}
	{
		int i; // 73
	}
	{
		int i; // 92
		V_strcat_safe<4096>(char& pDest,
					const char* pSrc,
					int nMaxCharsToCopy);  // 94
		V_strcat_safe<4096>(char& pDest,
					const char* pSrc,
					int nMaxCharsToCopy);  // 97
	}
	{
		int i; // 104
		V_strcat_safe<4096>(char& pDest,
					const char* pSrc,
					int nMaxCharsToCopy);  // 106
		V_strcat_safe<4096>(char& pDest,
					const char* pSrc,
					int nMaxCharsToCopy);  // 109
	}
	{
		int i; // 116
		V_strcat_safe<4096>(char& pDest,
					const char* pSrc,
					int nMaxCharsToCopy);  // 118
		V_strcat_safe<4096>(char& pDest,
					const char* pSrc,
					int nMaxCharsToCopy);  // 121
	}
	{
		int i; // 128
		V_strcat_safe<4096>(char& pDest,
					const char* pSrc,
					int nMaxCharsToCopy);  // 130
		V_strcat_safe<4096>(char& pDest,
					const char* pSrc,
					int nMaxCharsToCopy);  // 133
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 84
	CFmtStrN<256>::Access(); // 84
	V_strcat_safe<4096>(char& pDest,
				const char* pSrc,
				int nMaxCharsToCopy);  // 84
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 84
	V_strcat_safe<4096>(char& pDest,
				const char* pSrc,
				int nMaxCharsToCopy);  // 91
	V_strcat_safe<4096>(char& pDest,
				const char* pSrc,
				int nMaxCharsToCopy);  // 100
	V_strcat_safe<4096>(char& pDest,
				const char* pSrc,
				int nMaxCharsToCopy);  // 103
	V_strcat_safe<4096>(char& pDest,
				const char* pSrc,
				int nMaxCharsToCopy);  // 112
	V_strcat_safe<4096>(char& pDest,
				const char* pSrc,
				int nMaxCharsToCopy);  // 115
	V_strcat_safe<4096>(char& pDest,
				const char* pSrc,
				int nMaxCharsToCopy);  // 124
	V_strcat_safe<4096>(char& pDest,
				const char* pSrc,
				int nMaxCharsToCopy);  // 127
	V_strcat_safe<4096>(char& pDest,
				const char* pSrc,
				int nMaxCharsToCopy);  // 136
	V_strcat_safe<4096>(char& pDest,
				const char* pSrc,
				int nMaxCharsToCopy);  // 88
} /* size: 1447, variables: 7, inline expansions: 17 (389 bytes) */

// <023B1810> resourcesystem/resourcesystem_leaktracker.cpp:142
// variable: 1
RecordKeepingStyle ResourceLeakTracking_RecordKeepingStyle(void)
{
	RecordKeepingStyle s_recordKeepingStyle; // 144
} /* size: 95, variables: 1 */

// <023B0666> resourcesystem/resourcesystem_leaktracker.cpp:149
// variables: 51
// function calls: 45
void StandardizedReferenceReport(const char* pResourceName, CResourceBindingReferenceTrackingData* pTrackingData)
{
	CPathBufferString baseName; // 151
	{
		bool _Log_Meta_InternalMsg_ScopeVerify; // 154
		Logging_VarArgsResolver_t _Log_Meta_InternalMsg_VarArgs; // 154
		const int  _Log_Meta_InternalMsg_ChannelID; // 154
		const LoggingSeverity_t  _Log_Meta_InternalMsg_Severity; // 154
		LoggingVerbosity_t _Log_Meta_InternalMsg_MaximumVerbosity; // 154
		CLogging_MetaDataAllocator _Log_Meta_InternalMsg_MetaDataAllocator; // 154
		LoggingMetaData_t* _Log_Meta_InternalMsg_pMetaDataChain; // 154
		Logging_VarArgsResolver_t::Initialize(
				const Color* pColor,
				LoggingMetaData_t* pMetaData);  // 354
		Logging_VarArgsResolver_t::Logging_VarArgsResolver_t(
						float);  // 154
		CLogging_MetaDataAllocator::CLogging_MetaDataAllocator(
						LoggingVerbosity_t defaultVerbosity);  // 154
		_CMetaDataAllocatorProtectedAccessor::Resolve(
			LoggingMetaData_t *& pMetaDataLL);  // 156
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 156
		{
			LoggingMetaData_t* pIterate; // 274
			{
				LoggingMetaData_t* pNext; // 277
				bool breakNow; // 280
			}
		}
		CLogging_MetaDataAllocator::~CLogging_MetaDataAllocator(); // 156
	}
	{
		bool _Log_Meta_InternalMsg_ScopeVerify; // 158
		Logging_VarArgsResolver_t _Log_Meta_InternalMsg_VarArgs; // 158
		const int  _Log_Meta_InternalMsg_ChannelID; // 158
		const LoggingSeverity_t  _Log_Meta_InternalMsg_Severity; // 158
		LoggingVerbosity_t _Log_Meta_InternalMsg_MaximumVerbosity; // 158
		CLogging_MetaDataAllocator _Log_Meta_InternalMsg_MetaDataAllocator; // 158
		LoggingMetaData_t* _Log_Meta_InternalMsg_pMetaDataChain; // 158
		Logging_VarArgsResolver_t::Initialize(
				const Color* pColor,
				LoggingMetaData_t* pMetaData);  // 354
		Logging_VarArgsResolver_t::Logging_VarArgsResolver_t(
						float);  // 158
		CLogging_MetaDataAllocator::CLogging_MetaDataAllocator(
						LoggingVerbosity_t defaultVerbosity);  // 158
		_CMetaDataAllocatorProtectedAccessor::Resolve(
			LoggingMetaData_t *& pMetaDataLL);  // 160
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 160
		{
			LoggingMetaData_t* pIterate; // 274
			{
				LoggingMetaData_t* pNext; // 277
				bool breakNow; // 280
			}
		}
		CLogging_MetaDataAllocator::~CLogging_MetaDataAllocator(); // 160
	}
	{
		bool _Log_Meta_InternalMsg_ScopeVerify; // 162
		Logging_VarArgsResolver_t _Log_Meta_InternalMsg_VarArgs; // 162
		const int  _Log_Meta_InternalMsg_ChannelID; // 162
		const LoggingSeverity_t  _Log_Meta_InternalMsg_Severity; // 162
		LoggingVerbosity_t _Log_Meta_InternalMsg_MaximumVerbosity; // 162
		CLogging_MetaDataAllocator _Log_Meta_InternalMsg_MetaDataAllocator; // 162
		LoggingMetaData_t* _Log_Meta_InternalMsg_pMetaDataChain; // 162
		Logging_VarArgsResolver_t::Initialize(
				const Color* pColor,
				LoggingMetaData_t* pMetaData);  // 354
		Logging_VarArgsResolver_t::Logging_VarArgsResolver_t(
						float);  // 162
		CLogging_MetaDataAllocator::CLogging_MetaDataAllocator(
						LoggingVerbosity_t defaultVerbosity);  // 162
		_CMetaDataAllocatorProtectedAccessor::Resolve(
			LoggingMetaData_t *& pMetaDataLL);  // 164
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 164
		{
			LoggingMetaData_t* pIterate; // 274
			{
				LoggingMetaData_t* pNext; // 277
				bool breakNow; // 280
			}
		}
		CLogging_MetaDataAllocator::~CLogging_MetaDataAllocator(); // 164
	}
	{
		bool _Log_Meta_InternalMsg_ScopeVerify; // 166
		Logging_VarArgsResolver_t _Log_Meta_InternalMsg_VarArgs; // 166
		const int  _Log_Meta_InternalMsg_ChannelID; // 166
		const LoggingSeverity_t  _Log_Meta_InternalMsg_Severity; // 166
		LoggingVerbosity_t _Log_Meta_InternalMsg_MaximumVerbosity; // 166
		CLogging_MetaDataAllocator _Log_Meta_InternalMsg_MetaDataAllocator; // 166
		LoggingMetaData_t* _Log_Meta_InternalMsg_pMetaDataChain; // 166
		Logging_VarArgsResolver_t::Initialize(
				const Color* pColor,
				LoggingMetaData_t* pMetaData);  // 354
		Logging_VarArgsResolver_t::Logging_VarArgsResolver_t(
						float);  // 166
		CLogging_MetaDataAllocator::CLogging_MetaDataAllocator(
						LoggingVerbosity_t defaultVerbosity);  // 166
		_CMetaDataAllocatorProtectedAccessor::Resolve(
			LoggingMetaData_t *& pMetaDataLL);  // 168
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 168
		{
			LoggingMetaData_t* pIterate; // 274
			{
				LoggingMetaData_t* pNext; // 277
				bool breakNow; // 280
			}
		}
		CLogging_MetaDataAllocator::~CLogging_MetaDataAllocator(); // 168
	}
	{
		bool _Log_Meta_InternalMsg_ScopeVerify; // 170
		Logging_VarArgsResolver_t _Log_Meta_InternalMsg_VarArgs; // 170
		const int  _Log_Meta_InternalMsg_ChannelID; // 170
		const LoggingSeverity_t  _Log_Meta_InternalMsg_Severity; // 170
		LoggingVerbosity_t _Log_Meta_InternalMsg_MaximumVerbosity; // 170
		CLogging_MetaDataAllocator _Log_Meta_InternalMsg_MetaDataAllocator; // 170
		LoggingMetaData_t* _Log_Meta_InternalMsg_pMetaDataChain; // 170
		Logging_VarArgsResolver_t::Initialize(
				const Color* pColor,
				LoggingMetaData_t* pMetaData);  // 354
		Logging_VarArgsResolver_t::Logging_VarArgsResolver_t(
						float);  // 170
		CLogging_MetaDataAllocator::CLogging_MetaDataAllocator(
						LoggingVerbosity_t defaultVerbosity);  // 170
		_CMetaDataAllocatorProtectedAccessor::Resolve(
			LoggingMetaData_t *& pMetaDataLL);  // 172
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 172
		{
			LoggingMetaData_t* pIterate; // 274
			{
				LoggingMetaData_t* pNext; // 277
				bool breakNow; // 280
			}
		}
		CLogging_MetaDataAllocator::~CLogging_MetaDataAllocator(); // 172
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 151
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 173
} /* size: 1469, variables: 1, inline expansions: 5 (87 bytes) */

// <023B006E> resourcesystem/resourcesystem_leaktracker.cpp:178
// variables: 2
// function calls: 19
void CResourceSystemLeakTracker::ResourceReferenceLeakTracking_ReportReferences(ResourceHandle_t hResource)
{
	CResourceBindingReferenceTrackingData* pTrackingData; // 180
	{
		bool bShowResourceLeakTrackingMessageOnce; // 183
	}
	GetFromBinding(const ResourceBindingBase_t* pBinding); // 180
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 195
	CResourceName::Get(); // 195
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 195
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 193
	CResourceName::Get(); // 193
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 193
} /* size: 447, variables: 1, inline expansions: 19 (473 bytes) */

// <023B3A00> resourcesystem/resourcesystem_leaktracker.cpp:200
// variable: 1
// function calls: 2
void CResourceSystemLeakTracker::ResourceReferenceLeakTracking_AddRef(ResourceHandle_t hResource, ResourceLeakTrackingGroup_t trackingGroup, uintp nOptionalRefPairingUniqueID)
{
	CResourceBindingReferenceTrackingData* pTrackingData; // 202
	GetFromBinding(const ResourceBindingBase_t* pBinding); // 202
	{
	}
	CResourceSystemLeakTracker::ResourceReferenceLeakTracking_AddRef(
						ResourceHandle_t hResource,
						ResourceLeakTrackingGroup_t trackingGroup,
						uintp nOptionalRefPairingUniqueID);  // 200
} /* size: 0, variables: 1, inline expansions: 2 (49 bytes) */

// <023B0002> resourcesystem/resourcesystem_leaktracker.cpp:200
// variables: 3
void CResourceSystemLeakTracker::ResourceReferenceLeakTracking_AddRef(ResourceHandle_t hResource, ResourceLeakTrackingGroup_t trackingGroup, uintp nOptionalRefPairingUniqueID)
{
	CResourceBindingReferenceTrackingData* pTrackingData; // 202
	const char   __FUNCTION__; // 24506
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 203
	}
} /* size: 0, variables: 2 */

// <023B389A> resourcesystem/resourcesystem_leaktracker.cpp:213
// variable: 1
// function calls: 2
void CResourceSystemLeakTracker::ResourceReferenceLeakTracking_Release(ResourceHandle_t hResource, ResourceLeakTrackingGroup_t trackingGroup, uintp nOptionalRefPairingUniqueID)
{
	CResourceBindingReferenceTrackingData* pTrackingData; // 215
	GetFromBinding(const ResourceBindingBase_t* pBinding); // 215
	{
	}
	CResourceSystemLeakTracker::ResourceReferenceLeakTracking_Release(
						ResourceHandle_t hResource,
						ResourceLeakTrackingGroup_t trackingGroup,
						uintp nOptionalRefPairingUniqueID);  // 213
} /* size: 0, variables: 1, inline expansions: 2 (49 bytes) */

// <023AFF96> resourcesystem/resourcesystem_leaktracker.cpp:213
// variables: 3
void CResourceSystemLeakTracker::ResourceReferenceLeakTracking_Release(ResourceHandle_t hResource, ResourceLeakTrackingGroup_t trackingGroup, uintp nOptionalRefPairingUniqueID)
{
	CResourceBindingReferenceTrackingData* pTrackingData; // 215
	const char   __FUNCTION__; // 24527
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 216
	}
} /* size: 0, variables: 2 */

// <023B382B> resourcesystem/resourcesystem_leaktracker.cpp:226
// variables: 2
void ErrorConditionEncountered(ErrorConditions errorCondition, CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso pTracker)
{
	CResourceBindingReferenceTrackingData* pTrackingData; // 228
	ResourceNameInfo_t* pNameInfo; // 232
} /* size: 0, variables: 2 */

// <023B3725> resourcesystem/resourcesystem_leaktracker.cpp:226
// variables: 2
// function calls: 2
void ErrorConditionEncountered(CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso pTracker, ErrorConditions errorCondition)
{
	CResourceBindingReferenceTrackingData* pTrackingData; // 228
	ResourceNameInfo_t* pNameInfo; // 232
	CUtlSymbolLarge::String(); // 234
	CUtlSymbolLarge::String(); // 236
} /* size: 112, variables: 2, inline expansions: 2 (14 bytes) */

// <023AF8CA> resourcesystem/resourcesystem_leaktracker.cpp:241
// variables: 4
// function calls: 12
bool LeakTrackerIterationCallback_IndividualRecords(ResourceLeakTrackingGroup_t group, uintp id, uint64 nOperationOrder, bool bIsAddRef, void* const* pCallStack, size_t nCallStackArrayLength, const uint8* pCapturedAnnotations, size_t nCapturedAnnotationBufferSize, void* pContext)
{
	CLogging_MetaDataAllocator* pAllocator; // 243
	uint8 tempBuffer; // 245
	CUtlBuffer attachmentBuffer; // 246
	char szCaptureName; // 247
	CUtlBuffer::TellPut(); // 315
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 315
	CLogging_MetaDataAllocator::Allocate(
		uint64 TypeID,
		size_t nDataSize,
		uint nAlignment,
		LoggingVerbosity_t verbosity);  // 315
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 315
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 318
} /* size: 800, variables: 4, inline expansions: 12 (257 bytes) */

// <023AE741> resourcesystem/resourcesystem_leaktracker.cpp:320
// variables: 11
// function calls: 47
void ResourceHandleLeak_MetaData_IndividualRecords(CLogging_MetaDataAllocator* pAllocator, const CResourceBindingReferenceTrackingData* pTrackingData)
{
	const char   __FUNCTION__; // 24569
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 322
	}
	{
		int nStrongHandleRefs; // 325
		CFmtStr strongHandleRefString; // 326
		int nManifestRefs; // 328
		CFmtStr manifestRefString; // 329
		int nGeneralRefs; // 331
		CFmtStr generalRefString; // 332
		int nSchemaRefs; // 334
		CFmtStr schemaRefString; // 335
		CLoggingMetaText textBreakdown; // 337
		GetGroupRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
				ResourceLeakTrackingGroup_t group);  // 325
		GetGroupRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
				ResourceLeakTrackingGroup_t group);  // 328
		GetGroupRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
				ResourceLeakTrackingGroup_t group);  // 331
		GetGroupRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
				ResourceLeakTrackingGroup_t group);  // 334
		CInterlockedIntT<long long unsigned int, 8>::operator long long unsigned int(); // 156
		GetOperationCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this); // 343
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 342
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 341
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 340
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 339
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 235
		CLogging_MetaDataAllocator::Duplicate(
				LoggingMetaData_t* pSource,
				LoggingVerbosity_t verbosity);  // 345
		GetRecordKeepingStyle(void); // 160
		KeepAllRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this); // 347
		IterateGroupRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
					ResourceLeakTrackingGroup_t group,
					ReferenceTrackerIterationStyle_t iterationStyle,
					PFN_IterationCallBack pFN_CallBack,
					void* pCallBackContext);  // 374
		IterateGroupRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
					ResourceLeakTrackingGroup_t group,
					ReferenceTrackerIterationStyle_t iterationStyle,
					PFN_IterationCallBack pFN_CallBack,
					void* pCallBackContext);  // 356
		IterateGroupRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
					ResourceLeakTrackingGroup_t group,
					ReferenceTrackerIterationStyle_t iterationStyle,
					PFN_IterationCallBack pFN_CallBack,
					void* pCallBackContext);  // 360
		IterateGroupRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
					ResourceLeakTrackingGroup_t group,
					ReferenceTrackerIterationStyle_t iterationStyle,
					PFN_IterationCallBack pFN_CallBack,
					void* pCallBackContext);  // 382
		IterateGroupRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
					ResourceLeakTrackingGroup_t group,
					ReferenceTrackerIterationStyle_t iterationStyle,
					PFN_IterationCallBack pFN_CallBack,
					void* pCallBackContext);  // 378
		IterateGroupRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
					ResourceLeakTrackingGroup_t group,
					ReferenceTrackerIterationStyle_t iterationStyle,
					PFN_IterationCallBack pFN_CallBack,
					void* pCallBackContext);  // 386
		IterateAllRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
					ReferenceTrackerIterationStyle_t iterationStyle,
					PFN_IterationCallBack pFN_CallBack,
					void* pCallBackContext);  // 349
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 389
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 389
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 389
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 389
		IterateGroupRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
					ResourceLeakTrackingGroup_t group,
					ReferenceTrackerIterationStyle_t iterationStyle,
					PFN_IterationCallBack pFN_CallBack,
					void* pCallBackContext);  // 364
		IterateGroupRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
					ResourceLeakTrackingGroup_t group,
					ReferenceTrackerIterationStyle_t iterationStyle,
					PFN_IterationCallBack pFN_CallBack,
					void* pCallBackContext);  // 368
	}
} /* size: 0, variables: 1 */

// <023ADF8E> resourcesystem/resourcesystem_leaktracker.cpp:394
// variables: 7
// function calls: 14
bool LeakTrackerIterationCallback_GroupedRecords(ResourceLeakTrackingGroup_t group, uint nCount, uint64* pOperationOrderArray, bool bIsAddRef, void* const* pCallStack, size_t nCallStackArrayLength, void* pContext)
{
	CLogging_MetaDataAllocator* pAllocator; // 396
	uint8 tempBuffer; // 398
	CUtlBuffer attachmentBuffer; // 399
	char szCaptureName; // 400
	char szOperationOrderArrayString; // 402
	{
		char szTemp; // 405
		{
			uint i; // 406
			V_strcat_safe<512>(char& pDest,
						const char* pSrc,
						int nMaxCharsToCopy);  // 409
		}
		V_strcat_safe<512>(char& pDest,
					const char* pSrc,
					int nMaxCharsToCopy);  // 412
	}
	CUtlBuffer::TellPut(); // 479
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 479
	CLogging_MetaDataAllocator::Allocate(
		uint64 TypeID,
		size_t nDataSize,
		uint nAlignment,
		LoggingVerbosity_t verbosity);  // 479
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 479
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 482
} /* size: 976, variables: 5, inline expansions: 12 (272 bytes) */

// <023ACF5F> resourcesystem/resourcesystem_leaktracker.cpp:484
// variables: 11
// function calls: 44
void ResourceHandleLeak_MetaData_GroupedRecords(CLogging_MetaDataAllocator* pAllocator, const CResourceBindingReferenceTrackingData* pTrackingData, int nMinimumMatchingFrames)
{
	const char   __FUNCTION__; // 24548
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 486
	}
	{
		int nStrongHandleRefs; // 489
		CFmtStr strongHandleRefString; // 490
		int nManifestRefs; // 492
		CFmtStr manifestRefString; // 493
		int nGeneralRefs; // 495
		CFmtStr generalRefString; // 496
		int nSchemaRefs; // 498
		CFmtStr schemaRefString; // 499
		CLoggingMetaText textBreakdown; // 501
		GetGroupRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
				ResourceLeakTrackingGroup_t group);  // 489
		GetGroupRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
				ResourceLeakTrackingGroup_t group);  // 492
		GetGroupRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
				ResourceLeakTrackingGroup_t group);  // 495
		GetGroupRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
				ResourceLeakTrackingGroup_t group);  // 498
		CInterlockedIntT<long long unsigned int, 8>::operator long long unsigned int(); // 156
		GetOperationCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this); // 507
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 506
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 505
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 504
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 503
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 235
		CLogging_MetaDataAllocator::Duplicate(
				LoggingMetaData_t* pSource,
				LoggingVerbosity_t verbosity);  // 509
		IterateGroupRecords_GroupMatchingStacks(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
							int nMinimumMatchingStackFrames,
							ResourceLeakTrackingGroup_t group,
							ReferenceTrackerIterationStyle_t iterationStyle,
							PFN_IterationCallBack_GroupedMatchingStacks pFN_CallBack,
							void* pCallBackContext);  // 511
		IterateGroupRecords_GroupMatchingStacks(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
							int nMinimumMatchingStackFrames,
							ResourceLeakTrackingGroup_t group,
							ReferenceTrackerIterationStyle_t iterationStyle,
							PFN_IterationCallBack_GroupedMatchingStacks pFN_CallBack,
							void* pCallBackContext);  // 512
		IterateGroupRecords_GroupMatchingStacks(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
							int nMinimumMatchingStackFrames,
							ResourceLeakTrackingGroup_t group,
							ReferenceTrackerIterationStyle_t iterationStyle,
							PFN_IterationCallBack_GroupedMatchingStacks pFN_CallBack,
							void* pCallBackContext);  // 513
		IterateGroupRecords_GroupMatchingStacks(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
							int nMinimumMatchingStackFrames,
							ResourceLeakTrackingGroup_t group,
							ReferenceTrackerIterationStyle_t iterationStyle,
							PFN_IterationCallBack_GroupedMatchingStacks pFN_CallBack,
							void* pCallBackContext);  // 514
		IterateGroupRecords_GroupMatchingStacks(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
							int nMinimumMatchingStackFrames,
							ResourceLeakTrackingGroup_t group,
							ReferenceTrackerIterationStyle_t iterationStyle,
							PFN_IterationCallBack_GroupedMatchingStacks pFN_CallBack,
							void* pCallBackContext);  // 515
		IterateGroupRecords_GroupMatchingStacks(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
							int nMinimumMatchingStackFrames,
							ResourceLeakTrackingGroup_t group,
							ReferenceTrackerIterationStyle_t iterationStyle,
							PFN_IterationCallBack_GroupedMatchingStacks pFN_CallBack,
							void* pCallBackContext);  // 516
		IterateGroupRecords_GroupMatchingStacks(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
							int nMinimumMatchingStackFrames,
							ResourceLeakTrackingGroup_t group,
							ReferenceTrackerIterationStyle_t iterationStyle,
							PFN_IterationCallBack_GroupedMatchingStacks pFN_CallBack,
							void* pCallBackContext);  // 517
		IterateGroupRecords_GroupMatchingStacks(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this,
							int nMinimumMatchingStackFrames,
							ResourceLeakTrackingGroup_t group,
							ReferenceTrackerIterationStyle_t iterationStyle,
							PFN_IterationCallBack_GroupedMatchingStacks pFN_CallBack,
							void* pCallBackContext);  // 518
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 519
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 519
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 519
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 519
	}
} /* size: 0, variables: 1 */

// <023ACBD1> resourcesystem/resourcesystem_leaktracker.cpp:522
// variables: 3
// function calls: 9
void resource_leaks(const CCommandContext& ctx, const CCommand& args)
{
	const char* pResourceName; // 530
	CResourceName resourceName; // 531
	ResourceHandle_t hResource; // 538
	CCommand::ArgC(); // 524
	CCommand::Arg(
		int nIndex);  // 530
	IResourceSystem::FindExistingResourceByName(
					const CResourceName& resourceName);  // 538
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 546
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 546
} /* size: 332, variables: 3, inline expansions: 9 (139 bytes) */

