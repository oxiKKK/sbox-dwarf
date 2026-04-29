
//
// public/engine2/iprerequisite.h
//
//	referenced by: libengine2.so
//
//	functions: 39
//	classes: 6
//

// <001A2A1F> ../public/engine2/iprerequisite.h:30
// member functions: 5
// member variables: 2
// class size: 40
class CPrerequisiteDescriptionHelper {
	/* ../public/engine2/iprerequisite.h:58 */
	struct Analysis_t {
		int m_nCount; /* 0 4 */
		CUtlString m_sFirstEntry; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/engine2/iprerequisite.h:113 */
	struct Entry_t {
		int m_nLevel; /* 0 4 */
		CUtlString m_sStateName; /* 8 8 */
		CUtlString m_sDescription; /* 16 8 */
		void Entry_t(Entry_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/engine2/iprerequisite.h:33 */
	void Append(CPrerequisiteDescriptionHelper* , int, const char* , const char* , ...);
	/* ../public/engine2/iprerequisite.h:45 */
	void Spew(const CPrerequisiteDescriptionHelper* , int, const char* );
	/* ../public/engine2/iprerequisite.h:66 */
	void AnalyzeFileListByExtension(const CPrerequisiteDescriptionHelper* , const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , FilesByExtension_t& );
	/* ../public/engine2/iprerequisite.h:64 */
	typedef struct CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int> FilesByExtension_t;
protected:
	/* ../public/engine2/iprerequisite.h:93 */
	const char* GetDots(const CPrerequisiteDescriptionHelper* , int);
	CUtlVector<CPrerequisiteDescriptionHelper::Entry_t, CUtlMemory<CPrerequisiteDescriptionHelper::Entry_t, int> > m_Entries; /* 0 32 */
	int m_nLongestStateName; /* 32 4 */
};

// <0024BB73> ../public/engine2/iprerequisite.h:33
// variables: 2
void CPrerequisiteDescriptionHelper::Append(int level, const char* pStateName, const char* fmt, ...)
{
	Entry_t* p; // 35
	va_list argptr; // 39
} /* size: 0, variables: 2 */

// <0022FE51> ../public/engine2/iprerequisite.h:113
void Entry_t::Entry_t()
{
} /* size: 0 */

// <0022FE35> ../public/engine2/iprerequisite.h:113
inline void Entry_t::Entry_t()
{
} /* size: 0 */

// <001A71D1> ../public/engine2/iprerequisite.h:125
// member functions: 16
// member variables: 2
// vtable entries: 5
// class size: 16
class IPrerequisite {
	void IPrerequisite(IPrerequisite* , const IPrerequisite& );
	void IPrerequisite(IPrerequisite* );
	int ()(void) * * _vptr.IPrerequisite; /* 0 8 */
	/* ../public/engine2/iprerequisite.h:128 */
	virtual void ~IPrerequisite(IPrerequisite* );
	/* ../public/engine2/iprerequisite.h:130 */
	virtual void AddRef(IPrerequisite* );
	/* ../public/engine2/iprerequisite.h:135 */
	virtual void Release(IPrerequisite* );
	/* ../public/engine2/iprerequisite.h:145 */
	virtual PrerequisiteStatus_t GetPrerequisiteStatus(IPrerequisite* , float64);
	/* ../public/engine2/iprerequisite.h:147 */
	virtual const char* GetName(const IPrerequisite* );
	/* ../public/engine2/iprerequisite.h:149 */
	virtual void Describe(const IPrerequisite* , int, CPrerequisiteDescriptionHelper& );
private:
	int m_nRefCount; /* 8 4 */
	void IPrerequisite(class IPrerequisite *, const class IPrerequisite  &); /* linkage=_ZN13IPrerequisiteC4ERKS_ */
	void IPrerequisite(class IPrerequisite *); /* linkage=_ZN13IPrerequisiteC4Ev */
	virtual void ~IPrerequisite(class IPrerequisite *); /* linkage=_ZN13IPrerequisiteD4Ev */
	/* <24dbe2> ../public/engine2/iprerequisite.h:130 */
	virtual void AddRef(class IPrerequisite *); /* linkage=_ZN13IPrerequisite6AddRefEv */
	/* <24e03b> ../public/engine2/iprerequisite.h:135 */
	virtual void Release(class IPrerequisite *); /* linkage=_ZN13IPrerequisite7ReleaseEv */
	virtual enum PrerequisiteStatus_t GetPrerequisiteStatus(class IPrerequisite *, float64); /* linkage=_ZN13IPrerequisite21GetPrerequisiteStatusEd */
	virtual const char  * GetName(const class IPrerequisite  *); /* linkage=_ZNK13IPrerequisite7GetNameEv */
	virtual void Describe(const class IPrerequisite  *, int, class CPrerequisiteDescriptionHelper &); /* linkage=_ZNK13IPrerequisite8DescribeEiR30CPrerequisiteDescriptionHelper */
};

// <0024BB5C> ../public/engine2/iprerequisite.h:128
void IPrerequisite::~IPrerequisite()
{
} /* size: 0 */

// <0024BB2C> ../public/engine2/iprerequisite.h:128
inline void IPrerequisite::~IPrerequisite()
{
} /* size: 0 */

// <0024DBE2> ../public/engine2/iprerequisite.h:130
void IPrerequisite::AddRef()
{
} /* size: 9 */

// <0024BB13> ../public/engine2/iprerequisite.h:130
inline void IPrerequisite::AddRef()
{
} /* size: 0 */

// <0024E03B> ../public/engine2/iprerequisite.h:135
// function call: 1
void IPrerequisite::Release()
{
	{
	}
	IPrerequisite::Release(); // 135
} /* size: 102, inline expansions: 1 (21 bytes) */

// <0024BAB6> ../public/engine2/iprerequisite.h:135
// variables: 2
inline void IPrerequisite::Release()
{
	const char   __FUNCTION__; // 19706
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 137
	}
} /* size: 0, variables: 1 */

// <0024BA86> ../public/engine2/iprerequisite.h:149
void IPrerequisite::Describe(int level, CPrerequisiteDescriptionHelper& helper)
{
} /* size: 0 */

// <00225AF0> ../public/engine2/iprerequisite.h:165
// member functions: 16
// member variables: 4
// vtable entries: 6
// class size: 88
class CParallelPrerequisite : public IPrerequisite, public IPrerequisiteRegistry {
public:
	/* class IPrerequisite <ancestor>; */ /* 0 16 */
	/* class IPrerequisiteRegistry <ancestor>; */ /* 16 8 */
	/* ../public/engine2/iprerequisite.h:168 */
	void CParallelPrerequisite(CParallelPrerequisite* );
	/* ../public/engine2/iprerequisite.h:170 */
	virtual void ~CParallelPrerequisite(CParallelPrerequisite* );
	/* ../public/engine2/iprerequisite.h:183 */
	virtual const char* GetName(const CParallelPrerequisite* );
	/* ../public/engine2/iprerequisite.h:188 */
	virtual PrerequisiteStatus_t GetPrerequisiteStatus(CParallelPrerequisite* , float64);
	/* ../public/engine2/iprerequisite.h:234 */
	virtual void AddPrerequisite(CParallelPrerequisite* , IPrerequisite* );
	/* ../public/engine2/iprerequisite.h:240 */
	virtual void RemovePrerequisite(CParallelPrerequisite* , IPrerequisite* );
	/* ../public/engine2/iprerequisite.h:248 */
	virtual void OnStatusFinished(CParallelPrerequisite* , PrerequisiteStatus_t);
	/* ../public/engine2/iprerequisite.h:252 */
	virtual void Describe(const CParallelPrerequisite* , int, CPrerequisiteDescriptionHelper& );
private:
	CUtlVector<IPrerequisite*, CUtlMemory<IPrerequisite*, int> > m_WorkList; /* 24 32 */
	CUtlVector<IPrerequisite*, CUtlMemory<IPrerequisite*, int> > m_WorkListCompleted; /* 56 32 */
	void CParallelPrerequisite(class CParallelPrerequisite *); /* linkage=_ZN21CParallelPrerequisiteC4Ev */
	virtual void ~CParallelPrerequisite(class CParallelPrerequisite *); /* linkage=_ZN21CParallelPrerequisiteD4Ev */
	virtual const char  * GetName(const class CParallelPrerequisite  *); /* linkage=_ZNK21CParallelPrerequisite7GetNameEv */
	virtual enum PrerequisiteStatus_t GetPrerequisiteStatus(class CParallelPrerequisite *, float64); /* linkage=_ZN21CParallelPrerequisite21GetPrerequisiteStatusEd */
	virtual void AddPrerequisite(class CParallelPrerequisite *, class IPrerequisite *); /* linkage=_ZN21CParallelPrerequisite15AddPrerequisiteEP13IPrerequisite */
	virtual void RemovePrerequisite(class CParallelPrerequisite *, class IPrerequisite *); /* linkage=_ZN21CParallelPrerequisite18RemovePrerequisiteEP13IPrerequisite */
	virtual void OnStatusFinished(class CParallelPrerequisite *, enum PrerequisiteStatus_t); /* linkage=_ZN21CParallelPrerequisite16OnStatusFinishedE20PrerequisiteStatus_t */
	virtual void Describe(const class CParallelPrerequisite  *, int, class CPrerequisiteDescriptionHelper &); /* linkage=_ZNK21CParallelPrerequisite8DescribeEiR30CPrerequisiteDescriptionHelper */
};

// <0024B9CE> ../public/engine2/iprerequisite.h:170
// variables: 8
void CParallelPrerequisite::~CParallelPrerequisite()
{
	{
		IPrerequisite *& prereq; // 173
		CUtlVector<IPrerequisite*, CUtlMemory<IPrerequisite*, int> >& __for_range; // 20871
		iterator __for_begin; // 20881
		iterator __for_end; // 20891
	}
	{
		IPrerequisite *& prereq; // 177
		CUtlVector<IPrerequisite*, CUtlMemory<IPrerequisite*, int> >& __for_range; // 20915
		iterator __for_begin; // 20925
		iterator __for_end; // 20935
	}
} /* size: 0 */

// <0024B9B7> ../public/engine2/iprerequisite.h:170
void CParallelPrerequisite::~CParallelPrerequisite()
{
} /* size: 0 */

// <0024B941> ../public/engine2/iprerequisite.h:170
// variables: 8
inline void CParallelPrerequisite::~CParallelPrerequisite()
{
	{
		IPrerequisite *& prereq; // 173
		CUtlVector<IPrerequisite*, CUtlMemory<IPrerequisite*, int> >& __for_range; // 20799
		iterator __for_begin; // 3490
		iterator __for_end; // 3490
	}
	{
		IPrerequisite *& prereq; // 177
		CUtlVector<IPrerequisite*, CUtlMemory<IPrerequisite*, int> >& __for_range; // 20799
		iterator __for_begin; // 3490
		iterator __for_end; // 3490
	}
} /* size: 0 */

// <0024B929> ../public/engine2/iprerequisite.h:183
void CParallelPrerequisite::GetName()
{
} /* size: 0 */

// <0024B869> ../public/engine2/iprerequisite.h:188
// variables: 11
void CParallelPrerequisite::GetPrerequisiteStatus(float64 flTimeoutTime)
{
	PrerequisiteStatus_t status; // 190
	int nCount; // 192
	const char   __FUNCTION__; // 20074
	{
		int i; // 193
		{
			IPrerequisite* pWorkItem; // 198
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
			}
			{
				int* _pCrash; // 204
			}
			{
				IPrerequisite *& prereq; // 217
				CUtlVector<IPrerequisite*, CUtlMemory<IPrerequisite*, int> >& __for_range; // 20799
				iterator __for_begin; // 3490
				iterator __for_end; // 3490
			}
		}
	}
} /* size: 0, variables: 3 */

// <0024B845> ../public/engine2/iprerequisite.h:234
void CParallelPrerequisite::AddPrerequisite(IPrerequisite* pPrerequisite)
{
} /* size: 0 */

// <0024B821> ../public/engine2/iprerequisite.h:240
void CParallelPrerequisite::RemovePrerequisite(IPrerequisite* pPrerequisite)
{
} /* size: 0 */

// <0024B7FD> ../public/engine2/iprerequisite.h:248
void CParallelPrerequisite::OnStatusFinished(PrerequisiteStatus_t finalStatus)
{
} /* size: 0 */

// <0024B7AE> ../public/engine2/iprerequisite.h:252
// variables: 2
void CParallelPrerequisite::Describe(int level, CPrerequisiteDescriptionHelper& helper)
{
	{
		int i; // 255
	}
	{
		int i; // 260
	}
} /* size: 0 */

// <002258AC> ../public/engine2/iprerequisite.h:282
// member functions: 20
// member variables: 7
// vtable entries: 7
// class size: 120
class CSequentialPrerequisite : public IPrerequisite, public IPrerequisiteRegistry {
public:
	/* class IPrerequisite <ancestor>; */ /* 0 16 */
	/* class IPrerequisiteRegistry <ancestor>; */ /* 16 8 */
	/* ../public/engine2/iprerequisite.h:285 */
	void CSequentialPrerequisite(CSequentialPrerequisite* );
	/* ../public/engine2/iprerequisite.h:292 */
	virtual void ~CSequentialPrerequisite(CSequentialPrerequisite* );
	/* ../public/engine2/iprerequisite.h:305 */
	virtual const char* GetName(const CSequentialPrerequisite* );
	/* ../public/engine2/iprerequisite.h:310 */
	virtual PrerequisiteStatus_t GetPrerequisiteStatus(CSequentialPrerequisite* , float64);
	/* ../public/engine2/iprerequisite.h:373 */
	virtual void AddPrerequisite(CSequentialPrerequisite* , IPrerequisite* );
	/* ../public/engine2/iprerequisite.h:383 */
	virtual void RemovePrerequisite(CSequentialPrerequisite* , IPrerequisite* );
	/* ../public/engine2/iprerequisite.h:396 */
	virtual void OnStatusFinished(CSequentialPrerequisite* , PrerequisiteStatus_t);
	/* ../public/engine2/iprerequisite.h:400 */
	virtual void Describe(const CSequentialPrerequisite* , int, CPrerequisiteDescriptionHelper& );
private:
	CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisite*, short unsigned int>, short unsigned int> > m_SequentialWorkList; /* 24 40 */
	CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisite*, short unsigned int>, short unsigned int> > m_SequentialWorkListCompleted; /* 64 40 */
protected:
	/* ../public/engine2/iprerequisite.h:426 */
	void SetDebug(CSequentialPrerequisite* , bool, int, const char* );
	/* ../public/engine2/iprerequisite.h:433 */
	virtual void Log(CSequentialPrerequisite* , const char* , ...);
	bool m_bDebug; /* 104 1 */
	int m_nLogChannel; /* 108 4 */
	CUtlString m_sLogChannelPrefix; /* 112 8 */
	void CSequentialPrerequisite(class CSequentialPrerequisite *); /* linkage=_ZN23CSequentialPrerequisiteC4Ev */
	virtual void ~CSequentialPrerequisite(class CSequentialPrerequisite *); /* linkage=_ZN23CSequentialPrerequisiteD4Ev */
	virtual const char  * GetName(const class CSequentialPrerequisite  *); /* linkage=_ZNK23CSequentialPrerequisite7GetNameEv */
	virtual enum PrerequisiteStatus_t GetPrerequisiteStatus(class CSequentialPrerequisite *, float64); /* linkage=_ZN23CSequentialPrerequisite21GetPrerequisiteStatusEd */
	virtual void AddPrerequisite(class CSequentialPrerequisite *, class IPrerequisite *); /* linkage=_ZN23CSequentialPrerequisite15AddPrerequisiteEP13IPrerequisite */
	virtual void RemovePrerequisite(class CSequentialPrerequisite *, class IPrerequisite *); /* linkage=_ZN23CSequentialPrerequisite18RemovePrerequisiteEP13IPrerequisite */
	virtual void OnStatusFinished(class CSequentialPrerequisite *, enum PrerequisiteStatus_t); /* linkage=_ZN23CSequentialPrerequisite16OnStatusFinishedE20PrerequisiteStatus_t */
	virtual void Describe(const class CSequentialPrerequisite  *, int, class CPrerequisiteDescriptionHelper &); /* linkage=_ZNK23CSequentialPrerequisite8DescribeEiR30CPrerequisiteDescriptionHelper */
	void SetDebug(class CSequentialPrerequisite *, bool, int, const char  *); /* linkage=_ZN23CSequentialPrerequisite8SetDebugEbiPKc */
	virtual void Log(class CSequentialPrerequisite *, const char  *, ...); /* linkage=_ZN23CSequentialPrerequisite3LogEPKcz */
};

// <0024B75D> ../public/engine2/iprerequisite.h:292
// variables: 8
void CSequentialPrerequisite::~CSequentialPrerequisite()
{
	{
		IPrerequisite *& prereq; // 295
		CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisite*, short unsigned int>, short unsigned int> >& __for_range; // 20245
		iterator __for_begin; // 20255
		iterator __for_end; // 20265
	}
	{
		IPrerequisite *& prereq; // 299
		CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisite*, short unsigned int>, short unsigned int> >& __for_range; // 20290
		iterator __for_begin; // 20300
		iterator __for_end; // 20310
	}
} /* size: 0 */

// <0024B746> ../public/engine2/iprerequisite.h:292
void CSequentialPrerequisite::~CSequentialPrerequisite()
{
} /* size: 0 */

// <0024B6CE> ../public/engine2/iprerequisite.h:292
// variables: 8
inline void CSequentialPrerequisite::~CSequentialPrerequisite()
{
	{
		IPrerequisite *& prereq; // 295
		CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisite*, short unsigned int>, short unsigned int> >& __for_range; // 20172
		iterator __for_begin; // 8932
		iterator __for_end; // 8932
	}
	{
		IPrerequisite *& prereq; // 299
		CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisite*, short unsigned int>, short unsigned int> >& __for_range; // 20172
		iterator __for_begin; // 8932
		iterator __for_end; // 8932
	}
} /* size: 0 */

// <0024B6B6> ../public/engine2/iprerequisite.h:305
void CSequentialPrerequisite::GetName()
{
} /* size: 0 */

// <0024B5E2> ../public/engine2/iprerequisite.h:310
// variables: 12
void CSequentialPrerequisite::GetPrerequisiteStatus(float64 flTimeoutTime)
{
	PrerequisiteStatus_t returnStatus; // 312
	bool bContinueProcessing; // 314
	const char   __FUNCTION__; // 20074
	{
		short unsigned int head; // 317
		IPrerequisite* pWorkItem; // 332
		PrerequisiteStatus_t status; // 334
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 333
		}
		{
			int* _pCrash; // 338
		}
		{
			IPrerequisite *& prereq; // 358
			CUtlLinkedList<IPrerequisite*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<IPrerequisite*, short unsigned int>, short unsigned int> >& __for_range; // 20172
			iterator __for_begin; // 8932
			iterator __for_end; // 8932
		}
	}
} /* size: 0, variables: 3 */

// <0024B5BD> ../public/engine2/iprerequisite.h:373
void CSequentialPrerequisite::AddPrerequisite(IPrerequisite* pPrerequisite)
{
} /* size: 0 */

// <0024B598> ../public/engine2/iprerequisite.h:383
void CSequentialPrerequisite::RemovePrerequisite(IPrerequisite* pPrerequisite)
{
} /* size: 0 */

// <0024B573> ../public/engine2/iprerequisite.h:396
void CSequentialPrerequisite::OnStatusFinished(PrerequisiteStatus_t finalStatus)
{
} /* size: 0 */

// <0024B515> ../public/engine2/iprerequisite.h:400
// variables: 3
void CSequentialPrerequisite::Describe(int level, CPrerequisiteDescriptionHelper& helper)
{
	int slot; // 403
	{
		short unsigned int i; // 404
	}
	{
		short unsigned int i; // 411
	}
} /* size: 0, variables: 1 */

// <0024B4C8> ../public/engine2/iprerequisite.h:433
// variables: 3
void CSequentialPrerequisite::Log(const char* pFmt, ...)
{
	int nLogChannel; // 435
	va_list argptr; // 441
	CFmtStrN<1024> outstr; // 444
} /* size: 0, variables: 3 */

// <0022577E> ../public/engine2/iprerequisite.h:466
// member functions: 10
// member variables: 4
// vtable entries: 2
// class size: 32
class CAsyncJobPrerequisite : public IPrerequisite {
public:
	/* class IPrerequisite <ancestor>; */ /* 0 16 */
	/* ../public/engine2/iprerequisite.h:469 */
	void CAsyncJobPrerequisite(CAsyncJobPrerequisite* );
	/* ../public/engine2/iprerequisite.h:476 */
	virtual const char* GetName(const CAsyncJobPrerequisite* );
	/* ../public/engine2/iprerequisite.h:481 */
	void Init(CAsyncJobPrerequisite* , CThreadedJob* , AsyncJobPrerequisiteStart_t);
	/* ../public/engine2/iprerequisite.h:493 */
	virtual void ~CAsyncJobPrerequisite(CAsyncJobPrerequisite* );
	/* ../public/engine2/iprerequisite.h:505 */
	virtual PrerequisiteStatus_t GetPrerequisiteStatus(CAsyncJobPrerequisite* , float64);
private:
	CThreadedJob * m_pAsyncJob; /* 16 8 */
	AsyncJobPrerequisiteStart_t m_StartType; /* 24 4 */
	PrerequisiteStatus_t m_ResultStatus; /* 28 4 */
	void CAsyncJobPrerequisite(class CAsyncJobPrerequisite *); /* linkage=_ZN21CAsyncJobPrerequisiteC4Ev */
	virtual const char  * GetName(const class CAsyncJobPrerequisite  *); /* linkage=_ZNK21CAsyncJobPrerequisite7GetNameEv */
	void Init(class CAsyncJobPrerequisite *, class CThreadedJob *, enum AsyncJobPrerequisiteStart_t); /* linkage=_ZN21CAsyncJobPrerequisite4InitEP12CThreadedJob27AsyncJobPrerequisiteStart_t */
	virtual void ~CAsyncJobPrerequisite(class CAsyncJobPrerequisite *); /* linkage=_ZN21CAsyncJobPrerequisiteD4Ev */
	virtual enum PrerequisiteStatus_t GetPrerequisiteStatus(class CAsyncJobPrerequisite *, float64); /* linkage=_ZN21CAsyncJobPrerequisite21GetPrerequisiteStatusEd */
};

// <0024B4B0> ../public/engine2/iprerequisite.h:476
void CAsyncJobPrerequisite::GetName()
{
} /* size: 0 */

// <0024B499> ../public/engine2/iprerequisite.h:493
void CAsyncJobPrerequisite::~CAsyncJobPrerequisite()
{
} /* size: 0 */

// <0024B469> ../public/engine2/iprerequisite.h:493
inline void CAsyncJobPrerequisite::~CAsyncJobPrerequisite()
{
} /* size: 0 */

// <0024B423> ../public/engine2/iprerequisite.h:505
// variables: 2
inline void CAsyncJobPrerequisite::GetPrerequisiteStatus(float64 flTimeoutTime)
{
	const char   __FUNCTION__; // 20074
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <001A9CBB> ../public/engine2/iprerequisite.h:539
// member functions: 20
// member variables: 7
// vtable entries: 3
// class size: 88
class CAsyncFileLoadPrerequisite : public IPrerequisite {
public:
	/* class IPrerequisite <ancestor>; */ /* 0 16 */
	/* ../public/engine2/iprerequisite.h:542 */
	void CAsyncFileLoadPrerequisite(CAsyncFileLoadPrerequisite* );
	/* ../public/engine2/iprerequisite.h:546 */
	virtual void ~CAsyncFileLoadPrerequisite(CAsyncFileLoadPrerequisite* );
	/* ../public/engine2/iprerequisite.h:551 */
	virtual const char* GetName(const CAsyncFileLoadPrerequisite* );
	/* ../public/engine2/iprerequisite.h:556 */
	void Init(CAsyncFileLoadPrerequisite* , const char* , const char* );
	/* ../public/engine2/iprerequisite.h:571 */
	virtual PrerequisiteStatus_t GetPrerequisiteStatus(CAsyncFileLoadPrerequisite* , float64);
	/* ../public/engine2/iprerequisite.h:576 */
	void* GetResultBuffer(const CAsyncFileLoadPrerequisite* );
	/* ../public/engine2/iprerequisite.h:581 */
	size_t GetResultBufferSize(const CAsyncFileLoadPrerequisite* );
	/* ../public/engine2/iprerequisite.h:586 */
	AsyncRequestStatus_t GetResultStatus(const CAsyncFileLoadPrerequisite* );
protected:
	shared_ptr<IAsyncReadRequest2> m_pRequest; /* 16 16 */
	AsyncRequestStatus_t m_AsyncRequestStatus; /* 32 4 */
	void * m_pFileData; /* 40 8 */
	size_t m_nFileDataSize; /* 48 8 */
	PrerequisiteStatus_t m_ResultStatus; /* 56 4 */
	CThreadFastMutex m_Lock; /* 64 24 */
	/* ../public/engine2/iprerequisite.h:599 */
	void Reset(CAsyncFileLoadPrerequisite* );
	/* ../public/engine2/iprerequisite.h:618 */
	virtual void OnFileLoaded(CAsyncFileLoadPrerequisite* , IAsyncReadRequest2* , AsyncRequestStatus_t);
	void CAsyncFileLoadPrerequisite(class CAsyncFileLoadPrerequisite *); /* linkage=_ZN26CAsyncFileLoadPrerequisiteC4Ev */
	virtual void ~CAsyncFileLoadPrerequisite(class CAsyncFileLoadPrerequisite *); /* linkage=_ZN26CAsyncFileLoadPrerequisiteD4Ev */
	virtual const char  * GetName(const class CAsyncFileLoadPrerequisite  *); /* linkage=_ZNK26CAsyncFileLoadPrerequisite7GetNameEv */
	void Init(class CAsyncFileLoadPrerequisite *, const char  *, const char  *); /* linkage=_ZN26CAsyncFileLoadPrerequisite4InitEPKcS1_ */
	virtual enum PrerequisiteStatus_t GetPrerequisiteStatus(class CAsyncFileLoadPrerequisite *, float64); /* linkage=_ZN26CAsyncFileLoadPrerequisite21GetPrerequisiteStatusEd */
	void * GetResultBuffer(const class CAsyncFileLoadPrerequisite  *); /* linkage=_ZNK26CAsyncFileLoadPrerequisite15GetResultBufferEv */
	size_t GetResultBufferSize(const class CAsyncFileLoadPrerequisite  *); /* linkage=_ZNK26CAsyncFileLoadPrerequisite19GetResultBufferSizeEv */
	enum AsyncRequestStatus_t GetResultStatus(const class CAsyncFileLoadPrerequisite  *); /* linkage=_ZNK26CAsyncFileLoadPrerequisite15GetResultStatusEv */
	void Reset(class CAsyncFileLoadPrerequisite *); /* linkage=_ZN26CAsyncFileLoadPrerequisite5ResetEv */
	virtual void OnFileLoaded(class CAsyncFileLoadPrerequisite *, class IAsyncReadRequest2 *, enum AsyncRequestStatus_t); /* linkage=_ZN26CAsyncFileLoadPrerequisite12OnFileLoadedEP18IAsyncReadRequest220AsyncRequestStatus_t */
};

// <0024B3A9> ../public/engine2/iprerequisite.h:546
void CAsyncFileLoadPrerequisite::~CAsyncFileLoadPrerequisite()
{
} /* size: 0 */

// <0024B379> ../public/engine2/iprerequisite.h:546
inline void CAsyncFileLoadPrerequisite::~CAsyncFileLoadPrerequisite()
{
} /* size: 0 */

// <0024B361> ../public/engine2/iprerequisite.h:551
void CAsyncFileLoadPrerequisite::GetName()
{
} /* size: 0 */

// <0024B33C> ../public/engine2/iprerequisite.h:571
void CAsyncFileLoadPrerequisite::GetPrerequisiteStatus(float64 flTimeoutTime)
{
} /* size: 0 */

// <0024B2E7> ../public/engine2/iprerequisite.h:599
// variable: 1
void CAsyncFileLoadPrerequisite::Reset()
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_601; // 601
} /* size: 0, variables: 1 */

// <0024B2B5> ../public/engine2/iprerequisite.h:618
void CAsyncFileLoadPrerequisite::OnFileLoaded(IAsyncReadRequest2* pRequest, AsyncRequestStatus_t status)
{
} /* size: 0 */

