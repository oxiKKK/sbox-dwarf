
//
// public/tier0/fasttimer.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libtier0.so
//
//	functions: 22
//	classes: 3
//

// <00EB6FA4> ../public/tier0/fasttimer.h:21
// member functions: 38
// member variable: 1
// class size: 8
class CCycleCount {
	/* ../public/tier0/fasttimer.h:26 */
	void CCycleCount(CCycleCount* );
	/* ../public/tier0/fasttimer.h:27 */
	void CCycleCount(CCycleCount* , uint64);
	/* ../public/tier0/fasttimer.h:29 */
	void Sample(CCycleCount* );
	/* ../public/tier0/fasttimer.h:31 */
	void Init(CCycleCount* );
	/* ../public/tier0/fasttimer.h:32 */
	void Init(CCycleCount* , float);
	/* ../public/tier0/fasttimer.h:33 */
	void Init(CCycleCount* , double);
	/* ../public/tier0/fasttimer.h:34 */
	void Init(CCycleCount* , uint64);
	/* ../public/tier0/fasttimer.h:35 */
	bool IsLessThan(const CCycleCount* , const CCycleCount& );
	/* ../public/tier0/fasttimer.h:37 */
	uint64 GetCycles64(const CCycleCount* );
	/* ../public/tier0/fasttimer.h:41 */
	uint64 GetMicroseconds64(const CCycleCount* );
	/* ../public/tier0/fasttimer.h:42 */
	double GetMicrosecondsF(const CCycleCount* );
	/* ../public/tier0/fasttimer.h:43 */
	void SetMicroseconds(CCycleCount* , uint64);
	/* ../public/tier0/fasttimer.h:45 */
	uint64 GetMilliseconds64(const CCycleCount* );
	/* ../public/tier0/fasttimer.h:46 */
	double GetMillisecondsF(const CCycleCount* );
	/* ../public/tier0/fasttimer.h:48 */
	double GetSeconds(const CCycleCount* );
	/* ../public/tier0/fasttimer.h:50 */
	CCycleCount& operator+=(CCycleCount* , const CCycleCount& );
	/* ../public/tier0/fasttimer.h:53 */
	void Add(const CCycleCount& , const CCycleCount& , CCycleCount& );
	/* ../public/tier0/fasttimer.h:56 */
	void Sub(const CCycleCount& , const CCycleCount& , CCycleCount& );
	/* ../public/tier0/fasttimer.h:58 */
	uint64 GetTimestamp(void);
	uint64 m_Int64; /* 0 8 */
	void CCycleCount(class CCycleCount *); /* linkage=_ZN11CCycleCountC4Ev */
	void CCycleCount(class CCycleCount *, uint64); /* linkage=_ZN11CCycleCountC4Ey */
	void Sample(class CCycleCount *); /* linkage=_ZN11CCycleCount6SampleEv */
	void Init(class CCycleCount *); /* linkage=_ZN11CCycleCount4InitEv */
	void Init(class CCycleCount *, float); /* linkage=_ZN11CCycleCount4InitEf */
	void Init(class CCycleCount *, double); /* linkage=_ZN11CCycleCount4InitEd */
	void Init(class CCycleCount *, uint64); /* linkage=_ZN11CCycleCount4InitEy */
	bool IsLessThan(const class CCycleCount  *, const class CCycleCount  &); /* linkage=_ZNK11CCycleCount10IsLessThanERKS_ */
	uint64 GetCycles64(const class CCycleCount  *); /* linkage=_ZNK11CCycleCount11GetCycles64Ev */
	uint64 GetMicroseconds64(const class CCycleCount  *); /* linkage=_ZNK11CCycleCount17GetMicroseconds64Ev */
	double GetMicrosecondsF(const class CCycleCount  *); /* linkage=_ZNK11CCycleCount16GetMicrosecondsFEv */
	void SetMicroseconds(class CCycleCount *, uint64); /* linkage=_ZN11CCycleCount15SetMicrosecondsEy */
	uint64 GetMilliseconds64(const class CCycleCount  *); /* linkage=_ZNK11CCycleCount17GetMilliseconds64Ev */
	double GetMillisecondsF(const class CCycleCount  *); /* linkage=_ZNK11CCycleCount16GetMillisecondsFEv */
	double GetSeconds(const class CCycleCount  *); /* linkage=_ZNK11CCycleCount10GetSecondsEv */
	class CCycleCount & operator+=(class CCycleCount *, const class CCycleCount  &); /* linkage=_ZN11CCycleCountpLERKS_ */
	void Add(const class CCycleCount  &, const class CCycleCount  &, class CCycleCount &); /* linkage=_ZN11CCycleCount3AddERKS_S1_RS_ */
	void Sub(const class CCycleCount  &, const class CCycleCount  &, class CCycleCount &); /* linkage=_ZN11CCycleCount3SubERKS_S1_RS_ */
	uint64 GetTimestamp(void); /* linkage=_ZN11CCycleCount12GetTimestampEv */
};

// <04E48D9F> ../public/tier0/fasttimer.h:63
void CFastTimer::CFastTimer()
{
} /* size: 0 */

// <04E48D83> ../public/tier0/fasttimer.h:63
inline void CFastTimer::CFastTimer()
{
} /* size: 0 */

// <00EB7253> ../public/tier0/fasttimer.h:63
// member functions: 12
// member variable: 1
// class size: 8
class CFastTimer {
	/* ../public/tier0/fasttimer.h:67 */
	void Start(CFastTimer* );
	/* ../public/tier0/fasttimer.h:68 */
	void End(CFastTimer* );
	/* ../public/tier0/fasttimer.h:70 */
	const CCycleCount& GetDuration(const CFastTimer* );
	/* ../public/tier0/fasttimer.h:71 */
	CCycleCount GetDurationInProgress(const CFastTimer* );
	/* ../public/tier0/fasttimer.h:74 */
	uint64 GetClockSpeed(void);
private:
	CCycleCount m_Duration; /* 0 8 */
	void CFastTimer(CFastTimer* );
	void Start(class CFastTimer *); /* linkage=_ZN10CFastTimer5StartEv */
	void End(class CFastTimer *); /* linkage=_ZN10CFastTimer3EndEv */
	const class CCycleCount  & GetDuration(const class CFastTimer  *); /* linkage=_ZNK10CFastTimer11GetDurationEv */
	class CCycleCount GetDurationInProgress(const class CFastTimer  *); /* linkage=_ZNK10CFastTimer21GetDurationInProgressEv */
	uint64 GetClockSpeed(void); /* linkage=_ZN10CFastTimer13GetClockSpeedEv */
	void CFastTimer(class CFastTimer *); /* linkage=_ZN10CFastTimerC4Ev */
};

// <02158C49> ../public/tier0/fasttimer.h:119
// member functions: 6
// member variables: 2
// class size: 16
class CTimeAdder {
	/* ../public/tier0/fasttimer.h:122 */
	void CTimeAdder(CTimeAdder* , CCycleCount* );
	/* ../public/tier0/fasttimer.h:123 */
	void ~CTimeAdder(CTimeAdder* );
	/* ../public/tier0/fasttimer.h:125 */
	void End(CTimeAdder* );
private:
	CCycleCount * m_pTotal; /* 0 8 */
	CFastTimer m_Timer; /* 8 8 */
	void CTimeAdder(class CTimeAdder *, class CCycleCount *); /* linkage=_ZN10CTimeAdderC4EP11CCycleCount */
	void ~CTimeAdder(class CTimeAdder *); /* linkage=_ZN10CTimeAdderD4Ev */
	void End(class CTimeAdder *); /* linkage=_ZN10CTimeAdder3EndEv */
};

// <02167DBF> ../public/tier0/fasttimer.h:132
void CTimeAdder::CTimeAdder(CCycleCount* pTotal)
{
} /* size: 0 */

// <02167D97> ../public/tier0/fasttimer.h:132
inline void CTimeAdder::CTimeAdder(CCycleCount* pTotal)
{
} /* size: 0 */

// <02167D80> ../public/tier0/fasttimer.h:138
void CTimeAdder::~CTimeAdder()
{
} /* size: 0 */

// <02167D64> ../public/tier0/fasttimer.h:138
inline void CTimeAdder::~CTimeAdder()
{
} /* size: 0 */

// <02167D48> ../public/tier0/fasttimer.h:143
inline void CTimeAdder::End()
{
} /* size: 0 */

// <04E48D6C> ../public/tier0/fasttimer.h:236
void CCycleCount::CCycleCount()
{
} /* size: 0 */

// <04E48D50> ../public/tier0/fasttimer.h:236
inline void CCycleCount::CCycleCount()
{
} /* size: 0 */

// <02F19532> ../public/tier0/fasttimer.h:241
void CCycleCount::CCycleCount(uint64 cycles)
{
} /* size: 0 */

// <02F1950A> ../public/tier0/fasttimer.h:241
inline void CCycleCount::CCycleCount(uint64 cycles)
{
} /* size: 0 */

// <04E48D27> ../public/tier0/fasttimer.h:256
inline void CCycleCount::Init(uint64 cycles)
{
} /* size: 0 */

// <04E48D0B> ../public/tier0/fasttimer.h:261
inline void CCycleCount::Sample()
{
} /* size: 0 */

// <00740A4B> ../public/tier0/fasttimer.h:294
inline void CCycleCount::GetCycles64()
{
} /* size: 0 */

// <022DF2BF> ../public/tier0/fasttimer.h:299
inline void CCycleCount::GetMicroseconds64()
{
} /* size: 0 */

// <02F194A9> ../public/tier0/fasttimer.h:314
inline void CCycleCount::GetMilliseconds64()
{
} /* size: 0 */

// <00F417DA> ../public/tier0/fasttimer.h:319
inline void CCycleCount::GetMillisecondsF()
{
} /* size: 0 */

// <04E48CEF> ../public/tier0/fasttimer.h:324
inline void CCycleCount::GetSeconds()
{
} /* size: 0 */

// <04E48CD3> ../public/tier0/fasttimer.h:333
inline void CFastTimer::Start()
{
} /* size: 0 */

// <04E48CAA> ../public/tier0/fasttimer.h:342
// variable: 1
inline void CFastTimer::End()
{
	CCycleCount cnt; // 344
} /* size: 0, variables: 1 */

// <02F1942E> ../public/tier0/fasttimer.h:354
// variables: 2
inline void CFastTimer::GetDurationInProgress()
{
	CCycleCount cnt; // 356
	CCycleCount result; // 359
} /* size: 0, variables: 2 */

// <04E48C8E> ../public/tier0/fasttimer.h:372
inline void CFastTimer::GetDuration()
{
} /* size: 0 */

