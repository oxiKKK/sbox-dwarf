
//
// public/tier0/stacktools_tier1.h
//
//	referenced by: libengine2.so
//
//	functions: 13
//	classes: 4
//

// <02248324> ../public/tier0/stacktools_tier1.h:25
// member functions: 35
// member variables: 4
// class size: 1,096
class CAsyncCallStackTracker : public CCallStackCapture {
	/* ../public/tier0/stacktools_tier1.h:93 */
	class CStackTop_AsyncManipulator : public CStackTop_Base {
	public:
		/* class CStackTop_Base <ancestor>; */ /* 0 40 */
		/* ../public/tier0/stacktools_tier1.h:96 */
		bool TestRecursiveMatch(CStackTop_AsyncManipulator* , CAsyncCallStackTracker* );
		/* ../public/tier0/stacktools_tier1.h:104 */
		void BackupAndDisable(CStackTop_AsyncManipulator* , int& );
		/* ../public/tier0/stacktools_tier1.h:114 */
		void Restore(CStackTop_AsyncManipulator* , const int& );
		/* ../public/tier0/stacktools_tier1.h:123 */
		void Shift(CStackTop_AsyncManipulator* , int, CAsyncCallStackTracker* );
		/* ../public/tier0/stacktools_tier1.h:137 */
		void Unhook(CStackTop_AsyncManipulator* );
		/* ../public/tier0/stacktools_tier1.h:151 */
		CStackTop_AsyncManipulator* FindNextRecursiveTop(CStackTop_AsyncManipulator* , CAsyncCallStackTracker* , bool);
	private:
		/* ../public/tier0/stacktools_tier1.h:175 */
		void CStackTop_AsyncManipulator(CStackTop_AsyncManipulator* );
	};
public:
	/* class CCallStackCapture <ancestor>; */ /* 0 1032 */
	/* ../public/tier0/stacktools_tier1.h:28 */
	void CAsyncCallStackTracker(CAsyncCallStackTracker* );
	/* ../public/tier0/stacktools_tier1.h:29 */
	void ~CAsyncCallStackTracker(CAsyncCallStackTracker* );
	/* ../public/tier0/stacktools_tier1.h:32 */
	void Initialize(CAsyncCallStackTracker* , bool, FN_GetCallStack, uint32, uint32);
	/* ../public/tier0/stacktools_tier1.h:33 */
	void Initialize(CAsyncCallStackTracker* , const CCallStackCapture& , bool);
	/* ../public/tier0/stacktools_tier1.h:36 */
	void SynchronousSectionStart(CAsyncCallStackTracker* , CCallStackMarkerBase& );
	/* ../public/tier0/stacktools_tier1.h:37 */
	void SynchronousSectionStart(CAsyncCallStackTracker* , const CCallStackMarkerBase& );
	/* ../public/tier0/stacktools_tier1.h:40 */
	void SynchronousSectionEnd(CAsyncCallStackTracker* , bool, FN_GetCallStack, uint32);
	/* ../public/tier0/stacktools_tier1.h:43 */
	void SynchronousSectionSingleStep(CAsyncCallStackTracker* , const CCallStackMarker_SmallerScope& );
	/* ../public/tier0/stacktools_tier1.h:45 */
	void SynchronousSectionSingleStep(CAsyncCallStackTracker* , void* );
	/* ../public/tier0/stacktools_tier1.h:87 */
	const CCallStackCapture& Resolve(CAsyncCallStackTracker* , bool, FN_GetCallStack, uint32);
private:
	/* ../public/tier0/stacktools_tier1.h:89 */
	int AppendCurrentCapture(CAsyncCallStackTracker* , void* const* , int, bool);
	/* ../public/tier0/stacktools_tier1.h:90 */
	void ShiftCapture(CAsyncCallStackTracker* , int, int);
	/* ../public/tier0/stacktools_tier1.h:91 */
	void CaptureAnnotations(CAsyncCallStackTracker* , int);
	/* ../public/tier0/stacktools_tier1.h:178 */
	CStackTop_AsyncManipulator* GetRecursiveTop(CAsyncCallStackTracker* , bool);
	CDeferredCallStackMarkerProxyTarget m_SectionStartMarker; /* 1032 24 */
	uint32 m_nSectionStartOffset; /* 1056 4 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_AnnotationBuffer; /* 1064 32 */
	void CAsyncCallStackTracker(class CAsyncCallStackTracker *); /* linkage=_ZN22CAsyncCallStackTrackerC4Ev */
	void ~CAsyncCallStackTracker(class CAsyncCallStackTracker *); /* linkage=_ZN22CAsyncCallStackTrackerD4Ev */
	void Initialize(class CAsyncCallStackTracker *, bool, FN_GetCallStack, uint32, uint32); /* linkage=_ZN22CAsyncCallStackTracker10InitializeEbPFiPPviiEjj */
	void Initialize(class CAsyncCallStackTracker *, const class CCallStackCapture  &, bool); /* linkage=_ZN22CAsyncCallStackTracker10InitializeERK17CCallStackCaptureb */
	void SynchronousSectionStart(class CAsyncCallStackTracker *, class CCallStackMarkerBase &); /* linkage=_ZN22CAsyncCallStackTracker23SynchronousSectionStartER20CCallStackMarkerBase */
	void SynchronousSectionStart(class CAsyncCallStackTracker *, const class CCallStackMarkerBase  &); /* linkage=_ZN22CAsyncCallStackTracker23SynchronousSectionStartERK20CCallStackMarkerBase */
	void SynchronousSectionEnd(class CAsyncCallStackTracker *, bool, FN_GetCallStack, uint32); /* linkage=_ZN22CAsyncCallStackTracker21SynchronousSectionEndEbPFiPPviiEj */
	void SynchronousSectionSingleStep(class CAsyncCallStackTracker *, const class CCallStackMarker_SmallerScope  &); /* linkage=_ZN22CAsyncCallStackTracker28SynchronousSectionSingleStepERK29CCallStackMarker_SmallerScope */
	/* <445bb03> tier0_perproject/stacktools_tier1.cpp:172 */
	void SynchronousSectionSingleStep(class CAsyncCallStackTracker *, void *); /* linkage=_ZN22CAsyncCallStackTracker28SynchronousSectionSingleStepEPv */
	const class CCallStackCapture  & Resolve(class CAsyncCallStackTracker *, bool, FN_GetCallStack, uint32); /* linkage=_ZN22CAsyncCallStackTracker7ResolveEbPFiPPviiEj */
	int AppendCurrentCapture(class CAsyncCallStackTracker *, void * const *, int, bool); /* linkage=_ZN22CAsyncCallStackTracker20AppendCurrentCaptureEPKPvib */
	void ShiftCapture(class CAsyncCallStackTracker *, int, int); /* linkage=_ZN22CAsyncCallStackTracker12ShiftCaptureEii */
	void CaptureAnnotations(class CAsyncCallStackTracker *, int); /* linkage=_ZN22CAsyncCallStackTracker18CaptureAnnotationsEi */
	/* <445bb5d> tier0_perproject/stacktools_tier1.cpp:362 */
	class CStackTop_AsyncManipulator * GetRecursiveTop(class CAsyncCallStackTracker *, bool); /* linkage=_ZN22CAsyncCallStackTracker15GetRecursiveTopEb */
};

// <023E40B8> ../public/tier0/stacktools_tier1.h:28
void CAsyncCallStackTracker::CAsyncCallStackTracker()
{
} /* size: 0 */

// <023E417D> ../public/tier0/stacktools_tier1.h:29
void CAsyncCallStackTracker::~CAsyncCallStackTracker()
{
} /* size: 0 */

// <0445B494> ../public/tier0/stacktools_tier1.h:96
inline void CStackTop_AsyncManipulator::TestRecursiveMatch(CAsyncCallStackTracker* pTracker)
{
} /* size: 0 */

// <0445B46F> ../public/tier0/stacktools_tier1.h:104
inline void CStackTop_AsyncManipulator::BackupAndDisable(int& nBackupStorage)
{
} /* size: 0 */

// <0445B44A> ../public/tier0/stacktools_tier1.h:114
inline void CStackTop_AsyncManipulator::Restore(const int& nBackupStorage)
{
} /* size: 0 */

// <0445B419> ../public/tier0/stacktools_tier1.h:123
inline void CStackTop_AsyncManipulator::Shift(int nShift, CAsyncCallStackTracker* pTracker)
{
} /* size: 0 */

// <0445B400> ../public/tier0/stacktools_tier1.h:137
inline void CStackTop_AsyncManipulator::Unhook()
{
} /* size: 0 */

// <0445B3C3> ../public/tier0/stacktools_tier1.h:151
// variable: 1
inline void CStackTop_AsyncManipulator::FindNextRecursiveTop(CAsyncCallStackTracker* pTracker, bool bRequireActive)
{
	CStackTop_AsyncManipulator* pIter; // 154
} /* size: 0, variables: 1 */

// <022486D3> ../public/tier0/stacktools_tier1.h:199
// member functions: 10
// member variables: 3
// class size: 48
class CAsyncStackTop : public CStackTop_Base {
	/* ../public/tier0/stacktools_tier1.h:213 */
	union AnnotationMemoryOrStackMarker_t {
		CStackAnnotation_SimpleString * pAnnotations; /* 0 8 */
		void * pStackMarker; /* 0 8 */
	};
public:
	/* class CStackTop_Base <ancestor>; */ /* 0 40 */
	/* ../public/tier0/stacktools_tier1.h:202 */
	void CAsyncStackTop(CAsyncStackTop* , CAsyncCallStackTracker* , AsyncStackTopResolveFlag_t, const CCallStackMarkerBase& );
	/* ../public/tier0/stacktools_tier1.h:203 */
	void ~CAsyncStackTop(CAsyncStackTop* );
	/* ../public/tier0/stacktools_tier1.h:205 */
	void ChangeTrackedStack(CAsyncStackTop* , CAsyncCallStackTracker* , AsyncStackTopResolveFlag_t);
protected:
	/* ../public/tier0/stacktools_tier1.h:208 */
	void ExposeAnnotations(CAsyncStackTop* , CAsyncCallStackTracker* );
	/* ../public/tier0/stacktools_tier1.h:209 */
	void ClearExposedAnnotations(CAsyncStackTop* );
	uint m_nAnnotations; /* 36 4 */
	union AnnotationMemoryOrStackMarker_t m_AnnotiationOrStackMarker; /* 40 8 */
	void CAsyncStackTop(class CAsyncStackTop *, class CAsyncCallStackTracker *, enum AsyncStackTopResolveFlag_t, const class CCallStackMarkerBase  &); /* linkage=_ZN14CAsyncStackTopC4EP22CAsyncCallStackTracker26AsyncStackTopResolveFlag_tRK20CCallStackMarkerBase */
	void ~CAsyncStackTop(class CAsyncStackTop *); /* linkage=_ZN14CAsyncStackTopD4Ev */
	void ChangeTrackedStack(class CAsyncStackTop *, class CAsyncCallStackTracker *, enum AsyncStackTopResolveFlag_t); /* linkage=_ZN14CAsyncStackTop18ChangeTrackedStackEP22CAsyncCallStackTracker26AsyncStackTopResolveFlag_t */
	void ExposeAnnotations(class CAsyncStackTop *, class CAsyncCallStackTracker *); /* linkage=_ZN14CAsyncStackTop17ExposeAnnotationsEP22CAsyncCallStackTracker */
	/* <445bc01> tier0_perproject/stacktools_tier1.cpp:539 */
	void ClearExposedAnnotations(class CAsyncStackTop *); /* linkage=_ZN14CAsyncStackTop23ClearExposedAnnotationsEv */
};

// <023E403D> ../public/tier0/stacktools_tier1.h:202
void CAsyncStackTop::CAsyncStackTop(CAsyncCallStackTracker* pAsyncTracker, AsyncStackTopResolveFlag_t resolveNow, const CCallStackMarkerBase& marker)
{
} /* size: 0 */

// <023E3FFF> ../public/tier0/stacktools_tier1.h:203
void CAsyncStackTop::~CAsyncStackTop()
{
} /* size: 0 */

// <022ADF04> ../public/tier0/stacktools_tier1.h:224
void CAsyncStackResume::~CAsyncStackResume()
{
} /* size: 0 */

// <022ADEE7> ../public/tier0/stacktools_tier1.h:224
inline void CAsyncStackResume::~CAsyncStackResume()
{
} /* size: 0 */

// <02248890> ../public/tier0/stacktools_tier1.h:224
// member functions: 8
// member variables: 2
// class size: 72
class CAsyncStackResume : public CAsyncStackTop {
public:
	/* class CAsyncStackTop <ancestor>; */ /* 0 48 */
	/* ../public/tier0/stacktools_tier1.h:227 */
	void CAsyncStackResume(CAsyncStackResume* , CAsyncCallStackTracker* , const CCallStackMarkerBase& );
	/* ../public/tier0/stacktools_tier1.h:228 */
	void CAsyncStackResume(CAsyncStackResume* , CAsyncCallStackTracker* , CCallStackMarkerBase& );
private:
	/* ../public/tier0/stacktools_tier1.h:231 */
	void ChangeTrackedStack(CAsyncStackResume* , CAsyncCallStackTracker* , AsyncStackTopResolveFlag_t);
	CDeferredCallStackMarkerProxy m_SynchronousSectionProxyMarker; /* 48 24 */
	void ~CAsyncStackResume(CAsyncStackResume* );
	void CAsyncStackResume(class CAsyncStackResume *, class CAsyncCallStackTracker *, const class CCallStackMarkerBase  &); /* linkage=_ZN17CAsyncStackResumeC4EP22CAsyncCallStackTrackerRK20CCallStackMarkerBase */
	void CAsyncStackResume(class CAsyncStackResume *, class CAsyncCallStackTracker *, class CCallStackMarkerBase &); /* linkage=_ZN17CAsyncStackResumeC4EP22CAsyncCallStackTrackerR20CCallStackMarkerBase */
	void ChangeTrackedStack(class CAsyncStackResume *, class CAsyncCallStackTracker *, enum AsyncStackTopResolveFlag_t); /* linkage=_ZN17CAsyncStackResume18ChangeTrackedStackEP22CAsyncCallStackTracker26AsyncStackTopResolveFlag_t */
	void ~CAsyncStackResume(class CAsyncStackResume *); /* linkage=_ZN17CAsyncStackResumeD4Ev */
};

// <0445342A> ../public/tier0/stacktools_tier1.h:224
// member functions: 7
// member variables: 2
// class size: 72
class CAsyncStackResume : public CAsyncStackTop {
public:
	/* class CAsyncStackTop <ancestor>; */ /* 0 48 */
	/* ../public/tier0/stacktools_tier1.h:227 */
	void CAsyncStackResume(CAsyncStackResume* , CAsyncCallStackTracker* , const CCallStackMarkerBase& );
	/* ../public/tier0/stacktools_tier1.h:228 */
	void CAsyncStackResume(CAsyncStackResume* , CAsyncCallStackTracker* , CCallStackMarkerBase& );
private:
	/* ../public/tier0/stacktools_tier1.h:231 */
	void ChangeTrackedStack(CAsyncStackResume* , CAsyncCallStackTracker* , AsyncStackTopResolveFlag_t);
	CDeferredCallStackMarkerProxy m_SynchronousSectionProxyMarker; /* 48 24 */
	void CAsyncStackResume(class CAsyncStackResume *, class CAsyncCallStackTracker *, const class CCallStackMarkerBase  &); /* linkage=_ZN17CAsyncStackResumeC4EP22CAsyncCallStackTrackerRK20CCallStackMarkerBase */
	void CAsyncStackResume(class CAsyncStackResume *, class CAsyncCallStackTracker *, class CCallStackMarkerBase &); /* linkage=_ZN17CAsyncStackResumeC4EP22CAsyncCallStackTrackerR20CCallStackMarkerBase */
	void ChangeTrackedStack(class CAsyncStackResume *, class CAsyncCallStackTracker *, enum AsyncStackTopResolveFlag_t); /* linkage=_ZN17CAsyncStackResume18ChangeTrackedStackEP22CAsyncCallStackTracker26AsyncStackTopResolveFlag_t */
	void ~CAsyncStackResume(class CAsyncStackResume *); /* linkage=_ZN17CAsyncStackResumeD4Ev */
};

// <0229AA66> ../public/tier0/stacktools_tier1.h:227
void CAsyncStackResume::CAsyncStackResume(CAsyncCallStackTracker* pAsyncTracker, const CCallStackMarkerBase& marker)
{
} /* size: 0 */

