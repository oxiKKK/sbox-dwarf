
//
// resourcesystem/resourcesystem_leaktracker.h
//
//	referenced by: libengine2.so
//
//	functions: 12
//	classes: 4
//

// <023A3305> resourcesystem/resourcesystem_leaktracker.h:38
// member functions: 7
// member variable: 1
// vtable entries: 3
// class size: 8
class CResourceSystemLeakTracker : public IResourceSystemLeakTracker {
public:
	/* class IResourceSystemLeakTracker <ancestor>; */ /* 0 8 */
	void ~CResourceSystemLeakTracker(CResourceSystemLeakTracker* );
	void CResourceSystemLeakTracker(CResourceSystemLeakTracker* , CResourceSystemLeakTracker& );
	void CResourceSystemLeakTracker(CResourceSystemLeakTracker* , const CResourceSystemLeakTracker& );
	void CResourceSystemLeakTracker(CResourceSystemLeakTracker* );
	/* resourcesystem/resourcesystem_leaktracker.cpp:200 */
	virtual void ResourceReferenceLeakTracking_AddRef(CResourceSystemLeakTracker* , ResourceHandle_t, ResourceLeakTrackingGroup_t, uintp);
	/* resourcesystem/resourcesystem_leaktracker.cpp:213 */
	virtual void ResourceReferenceLeakTracking_Release(CResourceSystemLeakTracker* , ResourceHandle_t, ResourceLeakTrackingGroup_t, uintp);
	/* resourcesystem/resourcesystem_leaktracker.cpp:178 */
	virtual void ResourceReferenceLeakTracking_ReportReferences(CResourceSystemLeakTracker* , ResourceHandle_t);
};

// <02345BF1> resourcesystem/resourcesystem_leaktracker.h:54
bool ResourceLeakTrackingEnabled(void)
{
} /* size: 0 */

// <023580DB> resourcesystem/resourcesystem_leaktracker.h:60
void CResourceBindingReferenceTrackingData::CResourceBindingReferenceTrackingData()
{
} /* size: 0 */

// <023580BF> resourcesystem/resourcesystem_leaktracker.h:60
inline void CResourceBindingReferenceTrackingData::CResourceBindingReferenceTrackingData()
{
} /* size: 0 */

// <0235807C> resourcesystem/resourcesystem_leaktracker.h:60
void CResourceBindingReferenceTrackingData::~CResourceBindingReferenceTrackingData()
{
} /* size: 0 */

// <02358060> resourcesystem/resourcesystem_leaktracker.h:60
inline void CResourceBindingReferenceTrackingData::~CResourceBindingReferenceTrackingData()
{
} /* size: 0 */

// <0225C6D8> resourcesystem/resourcesystem_leaktracker.h:60
// member functions: 9
// member variables: 2
// class size: 1,192
class CResourceBindingReferenceTrackingData {
	/* resourcesystem/resourcesystem_leaktracker.h:63 */
	class CResourceReferenceTracking_Options : public CUtlReferenceTracker_DefaultOptions {
	public:
		/* class CUtlReferenceTracker_DefaultOptions <ancestor>; */ /* 0 0 */
		static const size_t STACK_CAPTURE_DEPTH = 64; /* 0 0 */
		static const bool CAPTURE_STACK_ANNOTATIONS = 1; /* 0 0 */
		static const bool ALLOW_UNMATCHED_UNIQUE_ID_RELEASES = 1; /* 0 0 */
		/* resourcesystem/resourcesystem_leaktracker.h:70 */
		LoggingChannelID_t GetErrorLoggingChannelID(void);
		/* resourcesystem/resourcesystem_leaktracker.h:71 */
		RecordKeepingStyle GetRecordKeepingStyle(void);
		/* resourcesystem/resourcesystem_leaktracker.h:72 */
		bool ErrorConditionEncountered(ErrorConditions, CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso);
	};
	CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options> m_ReferenceTracker __attribute__((__aligned__(8))); /* 0 96 */
	CAsyncCallStackTracker m_AsyncLoadTracker; /* 96 1096 */
	/* resourcesystem/resourcesystem_leaktracker.h:78 */
	CResourceBindingReferenceTrackingData* GetFromBinding(const ResourceBindingBase_t* );
	/* resourcesystem/resourcesystem_leaktracker.h:88 */
	ResourceNameInfo_t* GetNameInfoFromTrackingData(CResourceBindingReferenceTrackingData* );
	class CResourceBindingReferenceTrackingData * GetFromBinding(const class ResourceBindingBase_t  *); /* linkage=_ZN37CResourceBindingReferenceTrackingData14GetFromBindingEPK21ResourceBindingBase_t */
	class ResourceNameInfo_t * GetNameInfoFromTrackingData(class CResourceBindingReferenceTrackingData *); /* linkage=_ZN37CResourceBindingReferenceTrackingData27GetNameInfoFromTrackingDataEPS_ */
	void ~CResourceBindingReferenceTrackingData(class CResourceBindingReferenceTrackingData *); /* linkage=_ZN37CResourceBindingReferenceTrackingDataD4Ev */
	void CResourceBindingReferenceTrackingData(class CResourceBindingReferenceTrackingData *); /* linkage=_ZN37CResourceBindingReferenceTrackingDataC4Ev */
} __attribute__((__aligned__(8)));

// <02323FB5> resourcesystem/resourcesystem_leaktracker.h:60
// member functions: 11
// member variables: 2
// class size: 1,192
class CResourceBindingReferenceTrackingData {
	/* resourcesystem/resourcesystem_leaktracker.h:63 */
	class CResourceReferenceTracking_Options : public CUtlReferenceTracker_DefaultOptions {
	public:
		/* class CUtlReferenceTracker_DefaultOptions <ancestor>; */ /* 0 0 */
		static const size_t STACK_CAPTURE_DEPTH = 64; /* 0 0 */
		static const bool CAPTURE_STACK_ANNOTATIONS = 1; /* 0 0 */
		static const bool ALLOW_UNMATCHED_UNIQUE_ID_RELEASES = 1; /* 0 0 */
		/* resourcesystem/resourcesystem_leaktracker.h:70 */
		LoggingChannelID_t GetErrorLoggingChannelID(void);
		/* resourcesystem/resourcesystem_leaktracker.h:71 */
		RecordKeepingStyle GetRecordKeepingStyle(void);
		/* resourcesystem/resourcesystem_leaktracker.h:72 */
		bool ErrorConditionEncountered(ErrorConditions, CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CReso);
	};
	CUtlReferenceTracker<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options> m_ReferenceTracker __attribute__((__aligned__(8))); /* 0 96 */
	CAsyncCallStackTracker m_AsyncLoadTracker; /* 96 1096 */
	/* resourcesystem/resourcesystem_leaktracker.h:78 */
	CResourceBindingReferenceTrackingData* GetFromBinding(const ResourceBindingBase_t* );
	/* resourcesystem/resourcesystem_leaktracker.h:88 */
	ResourceNameInfo_t* GetNameInfoFromTrackingData(CResourceBindingReferenceTrackingData* );
	void ~CResourceBindingReferenceTrackingData(CResourceBindingReferenceTrackingData* );
	void CResourceBindingReferenceTrackingData(CResourceBindingReferenceTrackingData* );
	class CResourceBindingReferenceTrackingData * GetFromBinding(const class ResourceBindingBase_t  *); /* linkage=_ZN37CResourceBindingReferenceTrackingData14GetFromBindingEPK21ResourceBindingBase_t */
	class ResourceNameInfo_t * GetNameInfoFromTrackingData(class CResourceBindingReferenceTrackingData *); /* linkage=_ZN37CResourceBindingReferenceTrackingData27GetNameInfoFromTrackingDataEPS_ */
	void ~CResourceBindingReferenceTrackingData(class CResourceBindingReferenceTrackingData *); /* linkage=_ZN37CResourceBindingReferenceTrackingDataD4Ev */
	void CResourceBindingReferenceTrackingData(class CResourceBindingReferenceTrackingData *); /* linkage=_ZN37CResourceBindingReferenceTrackingDataC4Ev */
} __attribute__((__aligned__(8)));

// <023B25ED> resourcesystem/resourcesystem_leaktracker.h:71
inline void GetRecordKeepingStyle(void)
{
} /* size: 0 */

// <023B25D5> resourcesystem/resourcesystem_leaktracker.h:78
inline void GetFromBinding(const ResourceBindingBase_t* pBinding)
{
} /* size: 0 */

// <023B25BD> resourcesystem/resourcesystem_leaktracker.h:88
inline void GetNameInfoFromTrackingData(CResourceBindingReferenceTrackingData* pTrackingData)
{
} /* size: 0 */

// <022C07DF> resourcesystem/resourcesystem_leaktracker.h:97
// variable: 1
inline CAsyncCallStackTracker* GetAsyncTrackerForResource(ResourceHandle_t hResource)
{
	CResourceBindingReferenceTrackingData* pReferenceTracking; // 99
} /* size: 0, variables: 1 */

// <0225E272> resourcesystem/resourcesystem_leaktracker.h:108
// member functions: 4
// member variable: 1
// class size: 8
class CStackAnnotationVariableHandler<const ResourceNameInfo_t*> {
	/* resourcesystem/resourcesystem_leaktracker.h:112 */
	void CStackAnnotationVariableHandler(CStackAnnotationVariableHandler<const ResourceNameInfo_t*>* , ResourceNameHandle_t);
	/* resourcesystem/resourcesystem_leaktracker.h:111 */
	typedef const ResourceNameHandle_t ConstructorVarType;
	/* resourcesystem/resourcesystem_leaktracker.h:113 */
	void ResolveVar(const CStackAnnotationVariableHandler<const ResourceNameInfo_t*>* , IAnnotationPackager* , const char* );
	const ResourceNameHandle_t m_VarStorage; /* 0 8 */
	void CStackAnnotationVariableHandler(class CStackAnnotationVariableHandler<const ResourceNameInfo_t*> *, ResourceNameHandle_t); /* linkage=_ZN31CStackAnnotationVariableHandlerIPK18ResourceNameInfo_tEC4ES2_ */
	void ResolveVar(const class CStackAnnotationVariableHandler<const ResourceNameInfo_t*>  *, class IAnnotationPackager *, const char  *); /* linkage=_ZNK31CStackAnnotationVariableHandlerIPK18ResourceNameInfo_tE10ResolveVarEP19IAnnotationPackagerPKc */
};

// <02381E5D> resourcesystem/resourcesystem_leaktracker.h:112
void CStackAnnotationVariableHandler<const ResourceNameInfo_t::CStackAnnotationVariableHandler(ConstructorVarType var)
{
} /* size: 0 */

// <02381E38> resourcesystem/resourcesystem_leaktracker.h:112
inline void CStackAnnotationVariableHandler<const ResourceNameInfo_t::CStackAnnotationVariableHandler(ConstructorVarType var)
{
} /* size: 0 */

// <02381DFB> resourcesystem/resourcesystem_leaktracker.h:113
// variable: 1
inline void CStackAnnotationVariableHandler<const ResourceNameInfo_t::ResolveVar(IAnnotationPackager* pPackager, const char* pVarName)
{
	CPathBufferString resourceName; // 115
} /* size: 0, variables: 1 */

