
//
// public/tier0/interpolatedvar_wrapped.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 12
//	classes: 3
//

// <04105150> ../public/tier0/interpolatedvar_wrapped.h:37
// member functions: 4
// member variables: 4
// class size: 20
class CInterpolationTimeContext {
	/* ../public/tier0/interpolatedvar_wrapped.h:40 */
	void CInterpolationTimeContext(CInterpolationTimeContext* );
	/* ../public/tier0/interpolatedvar_wrapped.h:46 */
	void Init(CInterpolationTimeContext* , float, InterpolatedVarPhase_t, InterpolationTimeContextType_t);
	InterpolatedVarPhase_t m_nPhase; /* 0 4 */
	InterpolationTimeContextType_t m_nContextType; /* 4 4 */
	float m_flInterpolationTime[2]; /* 8 8 */
	bool m_bIngoreInterpolationAmount; /* 16 1 */
	void CInterpolationTimeContext(class CInterpolationTimeContext *); /* linkage=_ZN25CInterpolationTimeContextC4Ev */
	void Init(class CInterpolationTimeContext *, float, enum InterpolatedVarPhase_t, enum InterpolationTimeContextType_t); /* linkage=_ZN25CInterpolationTimeContext4InitEf22InterpolatedVarPhase_t30InterpolationTimeContextType_t */
};

// <058C57CA> ../../public/tier0/interpolatedvar_wrapped.h:37
// member functions: 4
// member variables: 4
// class size: 20
class CInterpolationTimeContext {
	/* ../../public/tier0/interpolatedvar_wrapped.h:40 */
	void CInterpolationTimeContext(CInterpolationTimeContext* );
	/* ../../public/tier0/interpolatedvar_wrapped.h:46 */
	void Init(CInterpolationTimeContext* , float, InterpolatedVarPhase_t, InterpolationTimeContextType_t);
	InterpolatedVarPhase_t m_nPhase; /* 0 4 */
	InterpolationTimeContextType_t m_nContextType; /* 4 4 */
	float m_flInterpolationTime[2]; /* 8 8 */
	bool m_bIngoreInterpolationAmount; /* 16 1 */
	void CInterpolationTimeContext(class CInterpolationTimeContext *); /* linkage=_ZN25CInterpolationTimeContextC4Ev */
	void Init(class CInterpolationTimeContext *, float, enum InterpolatedVarPhase_t, enum InterpolationTimeContextType_t); /* linkage=_ZN25CInterpolationTimeContext4InitEf22InterpolatedVarPhase_t30InterpolationTimeContextType_t */
};

// <041055F4> ../public/tier0/interpolatedvar_wrapped.h:68
// member functions: 25
// static member variables: 2
// class size: 1
class IWrappedInterpolatedVar {
	/* ../public/tier0/interpolatedvar_wrapped.h:71 */
	struct CWrappedIVHashElement_t {
		/* ../public/tier0/interpolatedvar_wrapped.h:73 */
		void CWrappedIVHashElement_t(CWrappedIVHashElement_t* , IWrappedInterpolatedVarLatch* , const LastChangeTickDelegate_t& , IInterpolatedVar* );
		/* ../public/tier0/interpolatedvar_wrapped.h:75 */
		void CWrappedIVHashElement_t(CWrappedIVHashElement_t* );
		IWrappedInterpolatedVarLatch * m_pLatch; /* 0 8 */
		LastChangeTickDelegate_t m_ChangeTick; /* 8 24 */
		IInterpolatedVar * m_pVar; /* 32 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/interpolatedvar_wrapped.h:81 */
	class CWrappedInterpolatedVarArrayBaseHashFuncs {
		/* ../public/tier0/interpolatedvar_wrapped.h:84 */
		void CWrappedInterpolatedVarArrayBaseHashFuncs(CWrappedInterpolatedVarArrayBaseHashFuncs* , int);
		/* ../public/tier0/interpolatedvar_wrapped.h:86 */
		bool operator()(const CWrappedInterpolatedVarArrayBaseHashFuncs* , const CWrappedIVHashElement_t& , const CWrappedIVHashElement_t& );
		/* ../public/tier0/interpolatedvar_wrapped.h:91 */
		unsigned int operator()(const CWrappedInterpolatedVarArrayBaseHashFuncs* , const CWrappedIVHashElement_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/interpolatedvar_wrapped.h:97 */
	class InterpolatedVarLatchList_t : public CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs> {
	public:
		/* class CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs> <ancestor>; */ /* 0 40 */
		/* ../public/tier0/interpolatedvar_wrapped.h:101 */
		void InterpolatedVarLatchList_t(InterpolatedVarLatchList_t* );
		void ~InterpolatedVarLatchList_t(InterpolatedVarLatchList_t* );
	};
	/* ../public/tier0/interpolatedvar_wrapped.h:107 */
	struct State_t {
		/* ../public/tier0/interpolatedvar_wrapped.h:109 */
		void State_t(State_t* );
		/* ../public/tier0/interpolatedvar_wrapped.h:113 */
		void PushInterpolationContext(State_t* , const CInterpolationTimeContext& );
		/* ../public/tier0/interpolatedvar_wrapped.h:118 */
		void PopInterpolationContext(State_t* );
		/* ../public/tier0/interpolatedvar_wrapped.h:123 */
		const CInterpolationTimeContext& GetInterpolationContext(const State_t* );
		CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > m_InterpolationTimeStack; /* 0 32 */
		void ~State_t(State_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/interpolatedvar_wrapped.h:174 */
	struct WorkItem_t {
		CWrappedIVHashElement_t * m_pElement; /* 0 8 */
		InterpolatedVarPhase_t m_nPhase; /* 8 4 */
	};
	/* ../public/tier0/interpolatedvar_wrapped.h:140 */
	void AddToLatchList(IWrappedInterpolatedVarLatch* , const LastChangeTickDelegate_t& , IInterpolatedVar& , InterpolatedVarPhase_t);
	/* ../public/tier0/interpolatedvar_wrapped.h:155 */
	void RemoveFromLatchList(IInterpolatedVar& , InterpolatedVarPhase_t);
	/* ../public/tier0/interpolatedvar_wrapped.h:180 */
	void ProcessWorkItem(WorkItem_t& );
	/* ../public/tier0/interpolatedvar_wrapped.h:189 */
	void LatchVariables(InterpolatedVarPhase_t, InterpolatedVarInterpolationTimeType_t, bool);
	/* ../public/tier0/interpolatedvar_wrapped.h:249 */
	InterpolatedVarPhase_t GetInterpolationPhase(void);
	/* ../public/tier0/interpolatedvar_wrapped.h:257 */
	bool IsLookingAtHistoricalSamples(void);
	/* ../public/tier0/interpolatedvar_wrapped.h:265 */
	InterpolatedVarPhase_t GetHistoryWrittenToForPhase(IInterpolatedVar& );
	/* ../public/tier0/interpolatedvar_wrapped.h:275 */
	InterpolatedVarPhase_t GetHistoryInterpolatedFromForPhase(IInterpolatedVar& );
	/* ../public/tier0/interpolatedvar_wrapped.h:292 */
	void SetInterpolationContext(CInterpolationTimeContext* );
	/* ../public/tier0/interpolatedvar_wrapped.h:318 */
	void PushInterpolationContext(const CInterpolationTimeContext& );
	/* ../public/tier0/interpolatedvar_wrapped.h:323 */
	void PopInterpolationContext(void);
	/* ../public/tier0/interpolatedvar_wrapped.h:328 */
	float GetInterpolationTime(InterpolatedVarInterpolationTimeType_t);
	/* ../public/tier0/interpolatedvar_wrapped.h:336 */
	bool ShouldIgnoreInterpolationAmount(void);
	static class InterpolatedVarLatchList_t s_LatchList[2][2]; /* 0 0 */
	static struct State_t s_WrappedInterpolatedVarState; /* 0 0 */
};

// <06E2A361> ../../public/tier0/interpolatedvar_wrapped.h:75
void CWrappedIVHashElement_t::CWrappedIVHashElement_t()
{
} /* size: 0 */

// <06E2A348> ../../public/tier0/interpolatedvar_wrapped.h:75
inline void CWrappedIVHashElement_t::CWrappedIVHashElement_t()
{
} /* size: 0 */

// <06E2A32C> ../../public/tier0/interpolatedvar_wrapped.h:84
void CWrappedInterpolatedVarArrayBaseHashFuncs::CWrappedInterpolatedVarArrayBaseHashFuncs(int)
{
} /* size: 0 */

// <06E2A30E> ../../public/tier0/interpolatedvar_wrapped.h:84
inline void CWrappedInterpolatedVarArrayBaseHashFuncs::CWrappedInterpolatedVarArrayBaseHashFuncs(int)
{
} /* size: 0 */

// <06E2465E> ../../public/tier0/interpolatedvar_wrapped.h:97
void InterpolatedVarLatchList_t::~InterpolatedVarLatchList_t()
{
} /* size: 0 */

// <06E24642> ../../public/tier0/interpolatedvar_wrapped.h:97
inline void InterpolatedVarLatchList_t::~InterpolatedVarLatchList_t()
{
} /* size: 0 */

// <06E2A2F7> ../../public/tier0/interpolatedvar_wrapped.h:101
void InterpolatedVarLatchList_t::InterpolatedVarLatchList_t()
{
} /* size: 0 */

// <06E2A2DE> ../../public/tier0/interpolatedvar_wrapped.h:101
inline void InterpolatedVarLatchList_t::InterpolatedVarLatchList_t()
{
} /* size: 0 */

// <06E24691> ../../public/tier0/interpolatedvar_wrapped.h:107
// function calls: 6
void State_t::~State_t()
{
	CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >::Clear(); // 324
	CUtlMemory<CInterpolationTimeContext, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CInterpolationTimeContext, int>::Purge(); // 903
	CUtlMemory<CInterpolationTimeContext, int>::Purge(); // 325
	CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >::Purge(); // 114
	CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >::~CUtlStack(); // 107
} /* size: 41, inline expansions: 6 (128 bytes) */

// <06E24675> ../../public/tier0/interpolatedvar_wrapped.h:107
inline void State_t::~State_t()
{
} /* size: 0 */

// <06E2A2C7> ../../public/tier0/interpolatedvar_wrapped.h:109
void State_t::State_t()
{
} /* size: 0 */

// <06E2A2AE> ../../public/tier0/interpolatedvar_wrapped.h:109
inline void State_t::State_t()
{
} /* size: 0 */

