
//
// public/tier0/utlreferencetracker.h
//
//	referenced by: libengine2.so
//
//	functions: 20
//	classes: 5
//	structs: 2
//

// <023B26B4> ../public/tier0/utlreferencetracker.h:20
inline void* __Stack_Matching_Diverges__(void)
{
} /* size: 0 */

// <0225C5EF> ../public/tier0/utlreferencetracker.h:43
// member function: 1
// class size: 1
class CUtlReferenceTrackerBase {
	/* ../public/tier0/utlreferencetracker.h:46 */
	enum RecordKeepingStyle {
		RKS_DEFAULT = 0,
		RKS_DISABLE_GROUP_CLEARING = 1,
		RKS_REQUIRE_EXACT_PAIRINGS = 2,
		RKS_KEEP_ALL_RECORDS = 3,
	};
	/* ../public/tier0/utlreferencetracker.h:54 */
	enum ErrorConditions {
		EC_MORE_RELEASES_THAN_ADDREFS_FOR_UNIQUE_ID = 0,
		EC_MORE_RELEASES_THAN_ADDREFS_FOR_GROUP = 1,
		EC_UNMATCHED_UNIQUE_RELEASE = 2,
	};
protected:
	/* ../public/tier0/utlreferencetracker.h:62 */
	bool IterateStackAnnotationCallback(const void* , int, const char* , void* );
};

// <023B25F4> ../public/tier0/utlreferencetracker.h:62
// variable: 1
void IterateStackAnnotationCallback(const void* pStackAddress, int nIndex, const char* szValue, void* pContext)
{
	CUtlBuffer* pWriteBuffer; // 64
} /* size: 50, variables: 1 */

// <0225C676> ../public/tier0/utlreferencetracker.h:77
// member functions: 2
// static member variables: 3
// class size: 1
class CUtlReferenceTracker_DefaultOptions {
	static const size_t STACK_CAPTURE_DEPTH = 32; /* 0 0 */
	static const bool CAPTURE_STACK_ANNOTATIONS = 1; /* 0 0 */
	static const bool ALLOW_UNMATCHED_UNIQUE_ID_RELEASES; /* 0 0 */
	/* ../public/tier0/utlreferencetracker.h:86 */
	LoggingChannelID_t GetErrorLoggingChannelID(void);
	/* ../public/tier0/utlreferencetracker.h:87 */
	RecordKeepingStyle GetRecordKeepingStyle(void);
};

// <023419EC> ../public/tier0/utlreferencetracker.h:98
// member variables: 4
// struct size: 536
struct CUtlReferenceTracker_ReferenceRecord_Base_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options> {
	void * CallStackCapture[64]; /* 0 512 */
	ResourceLeakTrackingGroup_t group; /* 512 4 */
	long long unsigned int id; /* 520 8 */
	uint64 nOperationOrder; /* 528 8 */
};

// <02324B81> ../public/tier0/utlreferencetracker.h:113
// member variables: 3
// struct size: 552
struct CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true> : public CUtlReferenceTracker_ReferenceRecord_Base_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options> {
public:
	/* struct CUtlReferenceTracker_ReferenceRecord_Base_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options> <ancestor>; */ /* 0 536 */
	uint8 * pAnnotationBuffer; /* 536 8 */
	uint32 nAnnotationBufferSize; /* 544 4 */
};

// <0235810E> ../public/tier0/utlreferencetracker.h:128
void CUtlReferenceTracker(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData: this)
{
} /* size: 0 */

// <023580F2> ../public/tier0/utlreferencetracker.h:128
inline void CUtlReferenceTracker(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData: this)
{
} /* size: 0 */

// <0225C7CD> ../public/tier0/utlreferencetracker.h:128
// member functions: 37
// member variables: 5
// class size: 96
class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options> : public CUtlReferenceTrackerBase {
public:
	/* class CUtlReferenceTrackerBase <ancestor>; */ /* 0 0 */
	/* ../public/tier0/utlreferencetracker.h:178 */
	void ~CUtlReferenceTracker(CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso);
	/* ../public/tier0/utlreferencetracker.h:204 */
	void AddRef(CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso, ResourceLeakTrackingGroup_t, long long unsigned int, const CCallStackCapture& );
	/* ../public/tier0/utlreferencetracker.h:249 */
	void Release(CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso, ResourceLeakTrackingGroup_t, long long unsigned int, const CCallStackCapture& );
	/* ../public/tier0/utlreferencetracker.h:145 */
	void IterateAllRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, ReferenceTrackerIterationStyle_t, PFN_IterationCallBack, void* );
	/* ../public/tier0/utlreferencetracker.h:142 */
	typedef bool (*PFN_IterationCallBack)(ResourceLeakTrackingGroup_t, long long unsigned int, uint64, bool, void* const* , size_t, const uint8* , size_t, void* );
	/* ../public/tier0/utlreferencetracker.h:146 */
	void IterateGroupRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, ResourceLeakTrackingGroup_t, ReferenceTrackerIterationStyle_t, PFN_IterationCallBack, void* );
	/* ../public/tier0/utlreferencetracker.h:149 */
	void IterateAllRecords_GroupMatchingStacks(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, int, ReferenceTrackerIterationStyle_t, PFN_IterationCallBack_GroupedMatchingStacks, void* );
	/* ../public/tier0/utlreferencetracker.h:143 */
	typedef bool (*PFN_IterationCallBack_GroupedMatchingStacks)(ResourceLeakTrackingGroup_t, uint, uint64* , bool, void* const* , size_t, void* );
	/* ../public/tier0/utlreferencetracker.h:150 */
	void IterateGroupRecords_GroupMatchingStacks(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, int, ResourceLeakTrackingGroup_t, ReferenceTrackerIterationStyle_t, PFN_IterationCallBack_GroupedMatchingStacks, void* );
	/* ../public/tier0/utlreferencetracker.h:153 */
	int GetTotalRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:);
	/* ../public/tier0/utlreferencetracker.h:154 */
	int GetGroupRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, ResourceLeakTrackingGroup_t);
	/* ../public/tier0/utlreferencetracker.h:156 */
	uint64 GetOperationCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:);
	/* ../public/tier0/utlreferencetracker.h:158 */
	bool AllowGroupClearing(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:);
	/* ../public/tier0/utlreferencetracker.h:159 */
	bool RequireExactPairing(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:);
	/* ../public/tier0/utlreferencetracker.h:160 */
	bool KeepAllRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:);
private:
	/* ../public/tier0/utlreferencetracker.h:410 */
	bool Internal_Release_TestGroupCounts(CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso, ResourceLeakTrackingGroup_t, bool);
	/* ../public/tier0/utlreferencetracker.h:484 */
	void Internal_IterateRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, ResourceLeakTrackingGroup_t* , ReferenceTrackerIterationStyle_t, PFN_IterationCallBack, void* );
	/* ../public/tier0/utlreferencetracker.h:567 */
	void Internal_IterateRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, ResourceLeakTrackingGroup_t* , int, ReferenceTrackerIterationStyle_t, PFN_IterationCallBack_GroupedMatchingStacks, void* );
	/* ../public/tier0/utlreferencetracker.h:698 */
	int Internal_GetRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, ResourceLeakTrackingGroup_t* );
	CUtlVector<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true>, CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true>, int> > m_AddRefs; /* 0 32 */
	CUtlVector<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true>, CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true>, int> > m_UnmatchedReleases; /* 32 32 */
	CInterlockedUInt64 m_nOperationOrderCounter __attribute__((__aligned__(8))); /* 64 8 */
	CThreadFastMutex m_Mutex; /* 72 24 */
	void ~CUtlReferenceTracker(class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso); /* linkage=_ZN20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEED4Ev */
	void AddRef(class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso, enum ResourceLeakTrackingGroup_t, long long unsigned int, const class CCallStackCapture  &); /* linkage=_ZN20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE6AddRefES0_yRK17CCallStackCapture */
	void Release(class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso, enum ResourceLeakTrackingGroup_t, long long unsigned int, const class CCallStackCapture  &); /* linkage=_ZN20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE7ReleaseES0_yRK17CCallStackCapture */
	void IterateAllRecords(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, enum ReferenceTrackerIterationStyle_t, PFN_IterationCallBack, void *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE17IterateAllRecordsE32ReferenceTrackerIterationStyle_tPFbS0_yybPKPvmPKhmS5_ES5_ */
	void IterateGroupRecords(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, enum ResourceLeakTrackingGroup_t, enum ReferenceTrackerIterationStyle_t, PFN_IterationCallBack, void *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE19IterateGroupRecordsES0_32ReferenceTrackerIterationStyle_tPFbS0_yybPKPvmPKhmS5_ES5_ */
	void IterateAllRecords_GroupMatchingStacks(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, int, enum ReferenceTrackerIterationStyle_t, PFN_IterationCallBack_GroupedMatchingStacks, void *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE37IterateAllRecords_GroupMatchingStacksEi32ReferenceTrackerIterationStyle_tPFbS0_jPybPKPvmS6_ES6_ */
	void IterateGroupRecords_GroupMatchingStacks(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, int, enum ResourceLeakTrackingGroup_t, enum ReferenceTrackerIterationStyle_t, PFN_IterationCallBack_GroupedMatchingStacks, void *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE39IterateGroupRecords_GroupMatchingStacksEiS0_32ReferenceTrackerIterationStyle_tPFbS0_jPybPKPvmS6_ES6_ */
	int GetTotalRefCount(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE16GetTotalRefCountEv */
	int GetGroupRefCount(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, enum ResourceLeakTrackingGroup_t); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE16GetGroupRefCountES0_ */
	uint64 GetOperationCount(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE17GetOperationCountEv */
	bool AllowGroupClearing(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE18AllowGroupClearingEv */
	bool RequireExactPairing(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE19RequireExactPairingEv */
	bool KeepAllRecords(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE14KeepAllRecordsEv */
	bool Internal_Release_TestGroupCounts(class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso, enum ResourceLeakTrackingGroup_t, bool); /* linkage=_ZN20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE32Internal_Release_TestGroupCountsES0_b */
	void Internal_IterateRecords(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, enum ResourceLeakTrackingGroup_t *, enum ReferenceTrackerIterationStyle_t, PFN_IterationCallBack, void *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE23Internal_IterateRecordsEPS0_32ReferenceTrackerIterationStyle_tPFbS0_yybPKPvmPKhmS6_ES6_ */
	void Internal_IterateRecords(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, enum ResourceLeakTrackingGroup_t *, int, enum ReferenceTrackerIterationStyle_t, PFN_IterationCallBack_GroupedMatchingStacks, void *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE23Internal_IterateRecordsEPS0_i32ReferenceTrackerIterationStyle_tPFbS0_jPybPKPvmS7_ES7_ */
	int Internal_GetRefCount(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, enum ResourceLeakTrackingGroup_t *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE20Internal_GetRefCountEPS0_ */
	void CUtlReferenceTracker(class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso); /* linkage=_ZN20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEEC4Ev */
} __attribute__((__aligned__(8)));

// <023240E5> ../public/tier0/utlreferencetracker.h:128
// member functions: 38
// member variables: 5
// class size: 96
class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options> : public CUtlReferenceTrackerBase {
public:
	/* class CUtlReferenceTrackerBase <ancestor>; */ /* 0 0 */
	/* ../public/tier0/utlreferencetracker.h:178 */
	void ~CUtlReferenceTracker(CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso);
	/* ../public/tier0/utlreferencetracker.h:204 */
	void AddRef(CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso, ResourceLeakTrackingGroup_t, long long unsigned int, const CCallStackCapture& );
	/* ../public/tier0/utlreferencetracker.h:249 */
	void Release(CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso, ResourceLeakTrackingGroup_t, long long unsigned int, const CCallStackCapture& );
	/* ../public/tier0/utlreferencetracker.h:145 */
	void IterateAllRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, ReferenceTrackerIterationStyle_t, PFN_IterationCallBack, void* );
	/* ../public/tier0/utlreferencetracker.h:142 */
	typedef bool (*PFN_IterationCallBack)(ResourceLeakTrackingGroup_t, long long unsigned int, uint64, bool, void* const* , size_t, const uint8* , size_t, void* );
	/* ../public/tier0/utlreferencetracker.h:146 */
	void IterateGroupRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, ResourceLeakTrackingGroup_t, ReferenceTrackerIterationStyle_t, PFN_IterationCallBack, void* );
	/* ../public/tier0/utlreferencetracker.h:149 */
	void IterateAllRecords_GroupMatchingStacks(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, int, ReferenceTrackerIterationStyle_t, PFN_IterationCallBack_GroupedMatchingStacks, void* );
	/* ../public/tier0/utlreferencetracker.h:143 */
	typedef bool (*PFN_IterationCallBack_GroupedMatchingStacks)(ResourceLeakTrackingGroup_t, uint, uint64* , bool, void* const* , size_t, void* );
	/* ../public/tier0/utlreferencetracker.h:150 */
	void IterateGroupRecords_GroupMatchingStacks(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, int, ResourceLeakTrackingGroup_t, ReferenceTrackerIterationStyle_t, PFN_IterationCallBack_GroupedMatchingStacks, void* );
	/* ../public/tier0/utlreferencetracker.h:153 */
	int GetTotalRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:);
	/* ../public/tier0/utlreferencetracker.h:154 */
	int GetGroupRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, ResourceLeakTrackingGroup_t);
	/* ../public/tier0/utlreferencetracker.h:156 */
	uint64 GetOperationCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:);
	/* ../public/tier0/utlreferencetracker.h:158 */
	bool AllowGroupClearing(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:);
	/* ../public/tier0/utlreferencetracker.h:159 */
	bool RequireExactPairing(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:);
	/* ../public/tier0/utlreferencetracker.h:160 */
	bool KeepAllRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:);
private:
	/* ../public/tier0/utlreferencetracker.h:410 */
	bool Internal_Release_TestGroupCounts(CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso, ResourceLeakTrackingGroup_t, bool);
	/* ../public/tier0/utlreferencetracker.h:484 */
	void Internal_IterateRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, ResourceLeakTrackingGroup_t* , ReferenceTrackerIterationStyle_t, PFN_IterationCallBack, void* );
	/* ../public/tier0/utlreferencetracker.h:567 */
	void Internal_IterateRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, ResourceLeakTrackingGroup_t* , int, ReferenceTrackerIterationStyle_t, PFN_IterationCallBack_GroupedMatchingStacks, void* );
	/* ../public/tier0/utlreferencetracker.h:698 */
	int Internal_GetRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, ResourceLeakTrackingGroup_t* );
	CUtlVector<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true>, CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true>, int> > m_AddRefs; /* 0 32 */
	CUtlVector<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true>, CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true>, int> > m_UnmatchedReleases; /* 32 32 */
	CInterlockedUInt64 m_nOperationOrderCounter __attribute__((__aligned__(8))); /* 64 8 */
	CThreadFastMutex m_Mutex; /* 72 24 */
	void CUtlReferenceTracker(CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso);
	void ~CUtlReferenceTracker(class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso); /* linkage=_ZN20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEED4Ev */
	void AddRef(class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso, enum ResourceLeakTrackingGroup_t, long long unsigned int, const class CCallStackCapture  &); /* linkage=_ZN20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE6AddRefES0_yRK17CCallStackCapture */
	void Release(class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso, enum ResourceLeakTrackingGroup_t, long long unsigned int, const class CCallStackCapture  &); /* linkage=_ZN20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE7ReleaseES0_yRK17CCallStackCapture */
	void IterateAllRecords(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, enum ReferenceTrackerIterationStyle_t, PFN_IterationCallBack, void *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE17IterateAllRecordsE32ReferenceTrackerIterationStyle_tPFbS0_yybPKPvmPKhmS5_ES5_ */
	void IterateGroupRecords(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, enum ResourceLeakTrackingGroup_t, enum ReferenceTrackerIterationStyle_t, PFN_IterationCallBack, void *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE19IterateGroupRecordsES0_32ReferenceTrackerIterationStyle_tPFbS0_yybPKPvmPKhmS5_ES5_ */
	void IterateAllRecords_GroupMatchingStacks(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, int, enum ReferenceTrackerIterationStyle_t, PFN_IterationCallBack_GroupedMatchingStacks, void *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE37IterateAllRecords_GroupMatchingStacksEi32ReferenceTrackerIterationStyle_tPFbS0_jPybPKPvmS6_ES6_ */
	void IterateGroupRecords_GroupMatchingStacks(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, int, enum ResourceLeakTrackingGroup_t, enum ReferenceTrackerIterationStyle_t, PFN_IterationCallBack_GroupedMatchingStacks, void *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE39IterateGroupRecords_GroupMatchingStacksEiS0_32ReferenceTrackerIterationStyle_tPFbS0_jPybPKPvmS6_ES6_ */
	int GetTotalRefCount(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE16GetTotalRefCountEv */
	int GetGroupRefCount(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, enum ResourceLeakTrackingGroup_t); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE16GetGroupRefCountES0_ */
	uint64 GetOperationCount(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE17GetOperationCountEv */
	bool AllowGroupClearing(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE18AllowGroupClearingEv */
	bool RequireExactPairing(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE19RequireExactPairingEv */
	bool KeepAllRecords(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE14KeepAllRecordsEv */
	bool Internal_Release_TestGroupCounts(class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso, enum ResourceLeakTrackingGroup_t, bool); /* linkage=_ZN20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE32Internal_Release_TestGroupCountsES0_b */
	void Internal_IterateRecords(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, enum ResourceLeakTrackingGroup_t *, enum ReferenceTrackerIterationStyle_t, PFN_IterationCallBack, void *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE23Internal_IterateRecordsEPS0_32ReferenceTrackerIterationStyle_tPFbS0_yybPKPvmPKhmS6_ES6_ */
	void Internal_IterateRecords(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, enum ResourceLeakTrackingGroup_t *, int, enum ReferenceTrackerIterationStyle_t, PFN_IterationCallBack_GroupedMatchingStacks, void *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE23Internal_IterateRecordsEPS0_i32ReferenceTrackerIterationStyle_tPFbS0_jPybPKPvmS7_ES7_ */
	int Internal_GetRefCount(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, enum ResourceLeakTrackingGroup_t *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE20Internal_GetRefCountEPS0_ */
	void CUtlReferenceTracker(class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso); /* linkage=_ZN20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEEC4Ev */
} __attribute__((__aligned__(8)));

// <023A3543> ../public/tier0/utlreferencetracker.h:128
// member functions: 37
// member variables: 5
// class size: 96
class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options> : public CUtlReferenceTrackerBase {
public:
	/* class CUtlReferenceTrackerBase <ancestor>; */ /* 0 0 */
	/* ../public/tier0/utlreferencetracker.h:178 */
	void ~CUtlReferenceTracker(CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso);
	/* ../public/tier0/utlreferencetracker.h:204 */
	void AddRef(CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso, ResourceLeakTrackingGroup_t, long long unsigned int, const CCallStackCapture& );
	/* ../public/tier0/utlreferencetracker.h:249 */
	void Release(CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso, ResourceLeakTrackingGroup_t, long long unsigned int, const CCallStackCapture& );
	/* ../public/tier0/utlreferencetracker.h:145 */
	void IterateAllRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, ReferenceTrackerIterationStyle_t, PFN_IterationCallBack, void* );
	/* ../public/tier0/utlreferencetracker.h:142 */
	typedef bool (*PFN_IterationCallBack)(ResourceLeakTrackingGroup_t, long long unsigned int, uint64, bool, void* const* , size_t, const uint8* , size_t, void* );
	/* ../public/tier0/utlreferencetracker.h:146 */
	void IterateGroupRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, ResourceLeakTrackingGroup_t, ReferenceTrackerIterationStyle_t, PFN_IterationCallBack, void* );
	/* ../public/tier0/utlreferencetracker.h:149 */
	void IterateAllRecords_GroupMatchingStacks(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, int, ReferenceTrackerIterationStyle_t, PFN_IterationCallBack_GroupedMatchingStacks, void* );
	/* ../public/tier0/utlreferencetracker.h:143 */
	typedef bool (*PFN_IterationCallBack_GroupedMatchingStacks)(ResourceLeakTrackingGroup_t, uint, uint64* , bool, void* const* , size_t, void* );
	/* ../public/tier0/utlreferencetracker.h:150 */
	void IterateGroupRecords_GroupMatchingStacks(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, int, ResourceLeakTrackingGroup_t, ReferenceTrackerIterationStyle_t, PFN_IterationCallBack_GroupedMatchingStacks, void* );
	/* ../public/tier0/utlreferencetracker.h:153 */
	int GetTotalRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:);
	/* ../public/tier0/utlreferencetracker.h:154 */
	int GetGroupRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, ResourceLeakTrackingGroup_t);
	/* ../public/tier0/utlreferencetracker.h:156 */
	uint64 GetOperationCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:);
	/* ../public/tier0/utlreferencetracker.h:158 */
	bool AllowGroupClearing(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:);
	/* ../public/tier0/utlreferencetracker.h:159 */
	bool RequireExactPairing(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:);
	/* ../public/tier0/utlreferencetracker.h:160 */
	bool KeepAllRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:);
private:
	/* ../public/tier0/utlreferencetracker.h:410 */
	bool Internal_Release_TestGroupCounts(CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso, ResourceLeakTrackingGroup_t, bool);
	/* ../public/tier0/utlreferencetracker.h:484 */
	void Internal_IterateRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, ResourceLeakTrackingGroup_t* , ReferenceTrackerIterationStyle_t, PFN_IterationCallBack, void* );
	/* ../public/tier0/utlreferencetracker.h:567 */
	void Internal_IterateRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, ResourceLeakTrackingGroup_t* , int, ReferenceTrackerIterationStyle_t, PFN_IterationCallBack_GroupedMatchingStacks, void* );
	/* ../public/tier0/utlreferencetracker.h:698 */
	int Internal_GetRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, ResourceLeakTrackingGroup_t* );
	CUtlVector<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true>, CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true>, int> > m_AddRefs; /* 0 32 */
	CUtlVector<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true>, CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true>, int> > m_UnmatchedReleases; /* 32 32 */
	CInterlockedUInt64 m_nOperationOrderCounter __attribute__((__aligned__(8))); /* 64 8 */
	CThreadFastMutex m_Mutex; /* 72 24 */
	/* ../public/tier0/utlreferencetracker.h:163 */
	typedef struct CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true> ReferenceRecord_t;
	/* tag__fprintf: const_type tag not supported! */;
	void ~CUtlReferenceTracker(class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso); /* linkage=_ZN20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEED4Ev */
	void AddRef(class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso, enum ResourceLeakTrackingGroup_t, long long unsigned int, const class CCallStackCapture  &); /* linkage=_ZN20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE6AddRefES0_yRK17CCallStackCapture */
	void Release(class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso, enum ResourceLeakTrackingGroup_t, long long unsigned int, const class CCallStackCapture  &); /* linkage=_ZN20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE7ReleaseES0_yRK17CCallStackCapture */
	void IterateAllRecords(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, enum ReferenceTrackerIterationStyle_t, PFN_IterationCallBack, void *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE17IterateAllRecordsE32ReferenceTrackerIterationStyle_tPFbS0_yybPKPvmPKhmS5_ES5_ */
	void IterateGroupRecords(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, enum ResourceLeakTrackingGroup_t, enum ReferenceTrackerIterationStyle_t, PFN_IterationCallBack, void *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE19IterateGroupRecordsES0_32ReferenceTrackerIterationStyle_tPFbS0_yybPKPvmPKhmS5_ES5_ */
	void IterateAllRecords_GroupMatchingStacks(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, int, enum ReferenceTrackerIterationStyle_t, PFN_IterationCallBack_GroupedMatchingStacks, void *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE37IterateAllRecords_GroupMatchingStacksEi32ReferenceTrackerIterationStyle_tPFbS0_jPybPKPvmS6_ES6_ */
	void IterateGroupRecords_GroupMatchingStacks(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, int, enum ResourceLeakTrackingGroup_t, enum ReferenceTrackerIterationStyle_t, PFN_IterationCallBack_GroupedMatchingStacks, void *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE39IterateGroupRecords_GroupMatchingStacksEiS0_32ReferenceTrackerIterationStyle_tPFbS0_jPybPKPvmS6_ES6_ */
	int GetTotalRefCount(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE16GetTotalRefCountEv */
	int GetGroupRefCount(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, enum ResourceLeakTrackingGroup_t); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE16GetGroupRefCountES0_ */
	uint64 GetOperationCount(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE17GetOperationCountEv */
	bool AllowGroupClearing(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE18AllowGroupClearingEv */
	bool RequireExactPairing(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE19RequireExactPairingEv */
	bool KeepAllRecords(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE14KeepAllRecordsEv */
	bool Internal_Release_TestGroupCounts(class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso, enum ResourceLeakTrackingGroup_t, bool); /* linkage=_ZN20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE32Internal_Release_TestGroupCountsES0_b */
	void Internal_IterateRecords(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, enum ResourceLeakTrackingGroup_t *, enum ReferenceTrackerIterationStyle_t, PFN_IterationCallBack, void *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE23Internal_IterateRecordsEPS0_32ReferenceTrackerIterationStyle_tPFbS0_yybPKPvmPKhmS6_ES6_ */
	void Internal_IterateRecords(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, enum ResourceLeakTrackingGroup_t *, int, enum ReferenceTrackerIterationStyle_t, PFN_IterationCallBack_GroupedMatchingStacks, void *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE23Internal_IterateRecordsEPS0_i32ReferenceTrackerIterationStyle_tPFbS0_jPybPKPvmS7_ES7_ */
	int Internal_GetRefCount(const class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData:, enum ResourceLeakTrackingGroup_t *); /* linkage=_ZNK20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEE20Internal_GetRefCountEPS0_ */
	void CUtlReferenceTracker(class CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso); /* linkage=_ZN20CUtlReferenceTrackerI27ResourceLeakTrackingGroup_tyLy0EN37CResourceBindingReferenceTrackingData34CResourceReferenceTracking_OptionsEEC4Ev */
} __attribute__((__aligned__(8)));

// <023AA793> ../public/tier0/utlreferencetracker.h:145
inline void IterateAllRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this, ReferenceTrackerIterationStyle_t iterationStyle, PFN_IterationCallBack pFN_CallBack, void* pCallBackContext)
{
} /* size: 0 */

// <023AA74A> ../public/tier0/utlreferencetracker.h:146
inline void IterateGroupRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this, ResourceLeakTrackingGroup_t group, ReferenceTrackerIterationStyle_t iterationStyle, PFN_IterationCallBack pFN_CallBack, void* pCallBackContext)
{
} /* size: 0 */

// <023AA6A4> ../public/tier0/utlreferencetracker.h:150
inline void IterateGroupRecords_GroupMatchingStacks(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this, int nMinimumMatchingStackFrames, ResourceLeakTrackingGroup_t group, ReferenceTrackerIterationStyle_t iterationStyle, PFN_IterationCallBack_GroupedMatchingStacks pFN_CallBack, void* pCallBackContext)
{
} /* size: 0 */

// <023AAA4F> ../public/tier0/utlreferencetracker.h:154
inline void GetGroupRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this, ResourceLeakTrackingGroup_t group)
{
} /* size: 0 */

// <023AAA36> ../public/tier0/utlreferencetracker.h:156
inline void GetOperationCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this)
{
} /* size: 0 */

// <023A6F0F> ../public/tier0/utlreferencetracker.h:158
inline void AllowGroupClearing(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this)
{
} /* size: 0 */

// <023AA2F2> ../public/tier0/utlreferencetracker.h:159
inline void RequireExactPairing(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this)
{
} /* size: 0 */

// <023AA7D0> ../public/tier0/utlreferencetracker.h:160
inline void KeepAllRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this)
{
} /* size: 0 */

// <0235381E> ../public/tier0/utlreferencetracker.h:178
// variables: 4
// function calls: 25
void ~CUtlReferenceTracker(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData: this)
{
	{
		int i; // 183
	}
	{
		int i; // 191
	}
	{
		int i; // 183
		Count(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this); // 183
		operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
				int i);  // 185
		operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
				int i);  // 187
	}
	{
		int i; // 191
		Count(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this); // 191
		operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
				int i);  // 193
		operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
				int i);  // 195
	}
	RemoveAll(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this); // 1798
	IsExternallyAllocated(const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long u this); // 905
	Purge(const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this); // 903
	Purge(const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this); // 1799
	Purge(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this); // 560
	ValidateAlignment<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true> >(void); // 508
	Purge(const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this); // 510
	~CUtlMemory(const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this); // 410
	~CUtlVector(const CUtlVector<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this); // 200
	RemoveAll(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this); // 1798
	IsExternallyAllocated(const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long u this); // 905
	Purge(const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this); // 903
	Purge(const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this); // 1799
	Purge(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this); // 410
	~CUtlVector(const CUtlVector<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this); // 200
} /* size: 275, inline expansions: 17 (335 bytes) */

// <023537E7> ../public/tier0/utlreferencetracker.h:178
// variables: 2
void ~CUtlReferenceTracker(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData: this)
{
	{
		int i; // 183
	}
	{
		int i; // 191
	}
} /* size: 0 */

// <023ABCB5> ../public/tier0/utlreferencetracker.h:204
// variables: 3
// function calls: 35
void AddRef(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData: this, ResourceLeakTrackingGroup_t group, long long unsigned int id, const CCallStackCapture& capturedCallStack)
{
	ReferenceRecord_t referenceRecord; // 206
	{
		uint8 tempBuffer; // 225
		CUtlBuffer captureAnnotations; // 226
		CUtlBuffer::TellPut(); // 230
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
		CUtlBuffer::~CUtlBuffer(); // 240
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 79
		V_memcpy(void* dest,
			const void* src,
			uint count);  // 234
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 234
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 210
	ThreadInterlockedIncrement64(volatile int64* p); // 579
	CInterlockedIntT<long long unsigned int, 8>::operator++(); // 582
	CInterlockedIntT<long long unsigned int, 8>::operator++(
			int);  // 220
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
		unsigned int nSpinSleepTime);  // 243
	NumAllocated(const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long u this); // 1196
	Base(const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this); // 112
	Base(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this); // 368
	ResetDbgInfo(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this); // 824
	GrowMemory(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
			int num);  // 1198
	operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this,
			int i);  // 602
	Element(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
		int i);  // 1201
	CopyConstruct<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true> >(CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResour pMemory,
																const CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, C src);  // 1201
	AddToTail(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
			const CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, C src);  // 244
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 245
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 214
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 215
} /* size: 624, variables: 1, inline expansions: 24 (489 bytes) */

// <023AAA74> ../public/tier0/utlreferencetracker.h:249
// variables: 22
// function calls: 61
void Release(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData: this, ResourceLeakTrackingGroup_t group, long long unsigned int id, const CCallStackCapture& capturedCallStack)
{
	const char   __FUNCTION__; // 24359
	uint64 nOperationOrder; // 251
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_253; // 253
	ReferenceRecord_t referenceRecord; // 316
	{
		int i; // 259
		{
			ReferenceRecord_t& addRefRecord; // 262
			operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this,
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
					int i);  // 262
		}
		{
			bool bRemoveI; // 272
			{
				int j; // 275
				{
					ReferenceRecord_t& addRefRecord; // 277
					operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this,
							int i);  // 588
					operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
							int i);  // 277
				}
			}
			GetRecordKeepingStyle(void); // 159
			RequireExactPairing(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this); // 273
			operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this,
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
					int i);  // 291
			Remove(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
				int elem);  // 296
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 305
		}
		Count(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this); // 260
	}
	{
		uint8 tempBuffer; // 335
		CUtlBuffer captureAnnotations; // 336
		CUtlBuffer::TellPut(); // 340
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
		CUtlBuffer::~CUtlBuffer(); // 350
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 79
		V_memcpy(void* dest,
			const void* src,
			uint count);  // 344
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 344
	}
	{
		uint nAddRefGroupCount; // 357
		uint nReleaseGroupCount; // 358
		uint nAddRefIDCount; // 359
		uint nReleaseIDCount; // 360
		int nAddRefVectorCount; // 362
		int nReleaseVectorCount; // 363
		{
			int i; // 365
			operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this,
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
					int i);  // 367
		}
		{
			int i; // 378
			operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this,
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
					int i);  // 380
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 395
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 403
		}
		Count(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this); // 362
		Count(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this); // 363
		ErrorConditionEncountered(ErrorConditions errorCondition,
						CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso pTracker);  // 401
	}
	ThreadInterlockedIncrement64(volatile int64* p); // 579
	CInterlockedIntT<long long unsigned int, 8>::operator++(); // 582
	CInterlockedIntT<long long unsigned int, 8>::operator++(
			int);  // 251
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
			int nLineNumber);  // 253
	GetRecordKeepingStyle(void); // 160
	KeepAllRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this); // 254
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 324
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 325
	NumAllocated(const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long u this); // 1196
	operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this,
			int i);  // 602
	Element(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
		int i);  // 1201
	CopyConstruct<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true> >(CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResour pMemory,
																const CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, C src);  // 1201
	Base(const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this); // 112
	Base(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this); // 368
	ResetDbgInfo(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this); // 824
	GrowMemory(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
			int num);  // 1198
	AddToTail(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
			const CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, C src);  // 353
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 407
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 320
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 407
} /* size: 1271, variables: 4, inline expansions: 33 (880 bytes) */

// <023A9D2A> ../public/tier0/utlreferencetracker.h:410
// variables: 10
// function calls: 15
void Internal_Release_TestGroupCounts(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData: this, ResourceLeakTrackingGroup_t group, bool bAssumeOneMoreRelease)
{
	const char   __FUNCTION__; // 24485
	uint nAddRefGroupCount; // 412
	uint nReleaseGroupCount; // 413
	const int  nAddRefVectorCount; // 415
	const int  nReleaseVectorCount; // 416
	{
		int i; // 418
		operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
				int i);  // 420
	}
	{
		int i; // 426
		operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
				int i);  // 428
	}
	{
		int i; // 441
		operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
				int i);  // 443
		Remove(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
			int elem);  // 451
	}
	{
		int i; // 455
		operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigne this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
				int i);  // 457
		Remove(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long uns this,
			int elem);  // 465
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 475
	}
	Count(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this); // 415
	Count(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this); // 416
	ErrorConditionEncountered(ErrorConditions errorCondition,
					CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso pTracker);  // 473
	GetRecordKeepingStyle(void); // 158
	AllowGroupClearing(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this); // 439
} /* size: 667, variables: 5, inline expansions: 5 (46 bytes) */

// <023A9044> ../public/tier0/utlreferencetracker.h:484
// variables: 10
// function calls: 22
void Internal_IterateRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this, ResourceLeakTrackingGroup_t* pGroup, ReferenceTrackerIterationStyle_t iterationStyle, PFN_IterationCallBack pFN_CallBack, void* pCallBackContext)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_486; // 486
	const int  nAddRefVectorCount; // 488
	const int  nReleaseVectorCount; // 489
	int nAddRefIndex; // 491
	int nReleaseIndex; // 492
	{
		const ReferenceRecord_t* pRecord; // 510
		bool bIsAddRef; // 511
		size_t nCallStackArrayLength; // 541
		const uint8* pAnnotationBuffer; // 551
		const size_t  nAnnotationBufferSize; // 552
		operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long u this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this,
				int i);  // 513
		operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long u this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this,
				int i);  // 513
		operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long u this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this,
				int i);  // 516
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
			int nLineNumber);  // 486
	Count(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this); // 489
	operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long u this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this,
			int i);  // 502
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 563
	Count(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this); // 488
	operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long u this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this,
			int i);  // 497
} /* size: 903, variables: 5, inline expansions: 16 (426 bytes) */

// <023A7513> ../public/tier0/utlreferencetracker.h:567
// variables: 13
// function calls: 109
void Internal_IterateRecords(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this, ResourceLeakTrackingGroup_t* pGroup, int nMinimumMatchingStackFrames, ReferenceTrackerIterationStyle_t iterationStyle, PFN_IterationCallBack_GroupedMatchingStacks pFN_CallBack, void* pCallBackContext)
{
	size_t nMemCompareLengthForMatchingCallStackFrames; // 569
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_579; // 579
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> > groupedEntries; // 581
	IterationHelper_t addRefHelper; // 591
	IterationHelper_t releaseHelper; // 592
	{
		IterationHelper_t* pIterationHelper; // 614
		bool bIsAddRef; // 616
		const ReferenceRecord_t* pRecord; // 629
		void* groupedStackFrames; // 633
		size_t nGroupedStackFrames; // 634
		{
			int j; // 647
			{
				const ReferenceRecord_t* pMatchRecord; // 654
				{
					size_t k; // 663
					__Stack_Matching_Diverges__(void); // 668
				}
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
				BitVec_IsBitSet(const uint32* pBase,
						int nBitNum);  // 1471
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
					int bitNum);  // 651
				operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long u this,
						int i);  // 609
				Element(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this,
					int i);  // 654
				V_memcmp(const void* m1,
					const void* m2,
					size_t count);  // 656
				CUtlMemory<long long unsigned int, int>::NumAllocated(); // 1196
				CUtlMemory<long long unsigned int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Element(
					int i);  // 1201
				CopyConstruct<long long unsigned int>(long long unsigned int* pMemory,
									const long long unsigned int& src);  // 1201
				CUtlMemory<long long unsigned int, int>::Base(); // 112
				CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Base(); // 368
				CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::AddToTail(
						const long long unsigned int& src);  // 659
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
				Bitvec_Set(uint32* pBits,
						int nBitNum);  // 1480
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
					int bitNum);  // 660
			}
		}
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::RemoveAll(); // 612
		operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long u this,
				int i);  // 609
		Element(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this,
			int i);  // 629
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
		{
		}
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
		Bitvec_Set(uint32* pBits,
				int nBitNum);  // 1480
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
			int bitNum);  // 630
		CUtlMemory<long long unsigned int, int>::NumAllocated(); // 1196
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Element(
			int i);  // 1201
		CopyConstruct<long long unsigned int>(long long unsigned int* pMemory,
							const long long unsigned int& src);  // 1201
		CUtlMemory<long long unsigned int, int>::Base(); // 112
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Base(); // 368
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::AddToTail(
				const long long unsigned int& src);  // 643
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 644
		CUtlMemory<long long unsigned int, int>::Base(); // 112
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Base(); // 689
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Count(); // 689
		operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long u this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this,
				int i);  // 618
		operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long u this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this,
				int i);  // 618
		operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long u this,
				int i);  // 609
		Element(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this,
			int i);  // 682
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
		{
		}
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 1471
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
			int bitNum);  // 687
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
			int nLineNumber);  // 579
	CUtlMemory<long long unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<long long unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVector(); // 581
	Count(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this); // 591
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1281
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(); // 1405
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1413
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(); // 1211
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(); // 1223
	CVarBitVec::CVarBitVec(); // 591
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1281
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(); // 1405
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1413
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(); // 1211
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(); // 1223
	CVarBitVec::CVarBitVec(); // 592
	operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long u this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this,
			int i);  // 599
	operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long u this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this,
			int i);  // 604
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
	CVarBitVec::~CVarBitVec(); // 583
	IterationHelper_t::~IterationHelper_t(); // 694
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
	CVarBitVec::~CVarBitVec(); // 583
	IterationHelper_t::~IterationHelper_t(); // 694
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<long long unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<long long unsigned int, int>::Purge(); // 903
	CUtlMemory<long long unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Purge(); // 560
	ValidateAlignment<long long unsigned int>(void); // 508
	CUtlMemory<long long unsigned int, int>::Purge(); // 510
	CUtlMemory<long long unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVector(); // 694
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 694
	Count(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this); // 592
} /* size: 2411, variables: 5, inline expansions: 57 (1263 bytes) */

// <023A96E5> ../public/tier0/utlreferencetracker.h:698
// variables: 7
// function calls: 19
void Internal_GetRefCount(const CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackin this, ResourceLeakTrackingGroup_t* pGroup)
{
	{
		int nRetVal; // 703
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
			unsigned int nSpinSleepTime);  // 702
		Count(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this); // 703
		Count(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this); // 703
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 704
	}
	{
		const int  nAddRefVectorCount; // 710
		const int  nReleaseVectorCount; // 711
		int nAddRefGroupCount; // 713
		int nReleaseGroupCount; // 714
		{
			int i; // 716
			operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long u this,
					int i);  // 595
			operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this,
					int i);  // 718
		}
		{
			int i; // 724
			operator[](const CUtlMemory<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long u this,
					int i);  // 595
			operator[](const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this,
					int i);  // 726
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
			unsigned int nSpinSleepTime);  // 709
		Count(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this); // 710
		Count(const CUtlVectorBase<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long lo this); // 711
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 731
	}
} /* size: 391 */

