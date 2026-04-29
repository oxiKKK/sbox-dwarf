
//
// tier0/stacktools.cpp
//
//	referenced by: libtier0.so
//
//	functions: 106
//	classes: 6
//

// <004928ED> tier0/stacktools.cpp:255
// variable: 1
inline int V_backtrace(void** pFrames, int nFramesCount, int nSkipCount)
{
	int nFrames; // 264
} /* size: 0, variables: 1 */

// <00487836> tier0/stacktools.cpp:288
// member function: 1
// member variable: 1
// class size: 40
class CStackTop_FriendFuncs : public CStackTop_Base {
public:
	/* class CStackTop_Base <ancestor>; */ /* 0 40 */
	/* tier0/stacktools.cpp:291 */
	CStackTop_FriendFuncs* Next(CStackTop_FriendFuncs* );
};

// <00492829> tier0/stacktools.cpp:299
// variable: 1
// function calls: 2
CStackTop_Base* GetCurrentStackTop(bool bRequireActive, CFiber* pCurrentFiber)
{
	{
		CStackTop_FriendFuncs* pIter; // 303
		CCallStackMarkerBase::IsEnabled(); // 307
	}
	CFiber::GetPrevFiberInSameThread(); // 301
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00492719> tier0/stacktools.cpp:337
// function call: 1
void CCallStackCapture::CCallStackCapture(FN_GetCallStack GetStackFunction, uint32 nSkipCalls, uint32 nMaxCapture)
{
	CCallStackCapture::CCallStackCapture(
				FN_GetCallStack GetStackFunction,
				uint32 nSkipCalls,
				uint32 nMaxCapture);  // 337
} /* size: 71, inline expansions: 1 (33 bytes) */

// <004926D5> tier0/stacktools.cpp:337
void CCallStackCapture::CCallStackCapture(FN_GetCallStack GetStackFunction, uint32 nSkipCalls, uint32 nMaxCapture)
{
} /* size: 0 */

// <00492622> tier0/stacktools.cpp:349
void CCallStackCapture::Capture(FN_GetCallStack GetStackFunction, uint32 nSkipCalls, uint32 nMaxCapture)
{
} /* size: 70 */

// <00492576> tier0/stacktools.cpp:362
// variables: 2
void CCallStackMarkerBase::TestMarkerAgainstCapturedStackIndex(const void* const* pCapturedStack, int nCapturedStackLength, int nTestIndex)
{
	{
		uint nTestRecursion; // 369
		{
			int i; // 370
		}
	}
} /* size: 132 */

// <00492498> tier0/stacktools.cpp:385
// variables: 2
// function calls: 2
void CCallStackMarker::CCallStackMarker(bool bEnableMarker)
{
	{
		void* pReturns; // 444
	}
	{
		void* pReturns; // 444
		V_backtrace(void** pFrames,
				int nFramesCount,
				int nSkipCount);  // 445
	}
	CCallStackMarker::CCallStackMarker(
			bool bEnableMarker);  // 385
} /* size: 33, inline expansions: 1 (0 bytes) */

// <0049244F> tier0/stacktools.cpp:385
// variable: 1
void CCallStackMarker::CCallStackMarker(bool bEnableMarker)
{
	{
		void* pReturns; // 444
	}
} /* size: 0 */

// <0049226E> tier0/stacktools.cpp:467
// variables: 6
// function calls: 3
void CRecursionCallStackMarker::CRecursionCallStackMarker(bool bEnableMarker)
{
	{
		void* CapturedStack; // 477
		int nCaptured; // 478
		{
			int i; // 482
		}
	}
	{
		void* CapturedStack; // 477
		int nCaptured; // 478
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 270
		V_backtrace(void** pFrames,
				int nFramesCount,
				int nSkipCount);  // 2533
		GetCallStack_Fast_NoModification(void** pReturnAddressesOut,
						int nArrayCount,
						int nSkipCount);  // 478
		{
			int i; // 482
		}
	}
} /* size: 256 */

// <0049220A> tier0/stacktools.cpp:467
// variables: 3
void CRecursionCallStackMarker::CRecursionCallStackMarker(bool bEnableMarker)
{
	{
		void* CapturedStack; // 477
		int nCaptured; // 478
		{
			int i; // 482
		}
	}
} /* size: 0 */

// <0049217B> tier0/stacktools.cpp:497
// variables: 3
void CDeferredCallStackMarker::Insert()
{
	CFiber* pCurrentFiber; // 500
	{
		Tier0FiberLocals_t& fiberLocals; // 503
		CCallStackMarkerBase* pIter; // 505
	}
} /* size: 113, variables: 1 */

// <004920EC> tier0/stacktools.cpp:527
// variables: 3
void CDeferredCallStackMarker::Remove()
{
	CFiber* pCurrentFiber; // 530
	{
		Tier0FiberLocals_t& fiberLocals; // 533
		CCallStackMarkerBase* pIter; // 535
	}
} /* size: 97, variables: 1 */

// <004920B7> tier0/stacktools.cpp:553
void CCallStackMarker_ThisLine::CCallStackMarker_ThisLine(bool bEnableMarker)
{
} /* size: 31 */

// <00491FF4> tier0/stacktools.cpp:622
// variables: 4
void CStackTop_Base::CStackTop_Base()
{
	{
		CFiber* pCurrentFiber; // 625
		{
			Tier0FiberLocals_t& fiberLocals; // 628
		}
	}
	{
		CFiber* pCurrentFiber; // 625
		{
			Tier0FiberLocals_t& fiberLocals; // 628
		}
	}
} /* size: 49 */

// <00491FB9> tier0/stacktools.cpp:622
// variables: 2
void CStackTop_Base::CStackTop_Base()
{
	{
		CFiber* pCurrentFiber; // 625
		{
			Tier0FiberLocals_t& fiberLocals; // 628
		}
	}
} /* size: 0 */

// <00491F1E> tier0/stacktools.cpp:635
// variables: 4
void CStackTop_Base::~CStackTop_Base()
{
	{
		CFiber* pCurrentFiber; // 638
		{
			Tier0FiberLocals_t& fiberLocals; // 641
		}
	}
	{
		CFiber* pCurrentFiber; // 638
		{
			Tier0FiberLocals_t& fiberLocals; // 641
		}
	}
} /* size: 66 */

// <00491EE3> tier0/stacktools.cpp:635
// variables: 2
void CStackTop_Base::~CStackTop_Base()
{
	{
		CFiber* pCurrentFiber; // 638
		{
			Tier0FiberLocals_t& fiberLocals; // 641
		}
	}
} /* size: 0 */

// <00491DE8> tier0/stacktools.cpp:653
// function calls: 2
void CStackTop_Base::ChangeMarker(const CCallStackMarkerBase& marker)
{
	CopyPossiblyDeferredCallStackMarker(CCallStackMarkerBase& dest,
						const CCallStackMarkerBase& source);  // 320
	CopyPossiblyDeferredCallStackMarker(CCallStackMarkerBase& dest,
						const CCallStackMarkerBase& source);  // 664
} /* size: 129, inline expansions: 2 (76 bytes) */

// <00491D3E> tier0/stacktools.cpp:668
// variables: 2
// function call: 1
void GetCurrentTop(bool bRequireActive)
{
	CFiber* pCurrentFiber; // 671
	{
		CStackTop_Base* pIter; // 674
		CCallStackMarkerBase::IsEnabled(); // 678
	}
} /* size: 69, variables: 1 */

// <00491BA0> tier0/stacktools.cpp:690
// function calls: 3
void CStackTop_CopyParentStack::CStackTop_CopyParentStack(const void* const* pParentStackTrace, int nParentStackTraceLength, const CCallStackMarkerBase& marker)
{
	{
		{
		}
	}
	{
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 705
		{
		}
		CopyPossiblyDeferredCallStackMarker(CCallStackMarkerBase& dest,
							const CCallStackMarkerBase& source);  // 320
		CopyPossiblyDeferredCallStackMarker(CCallStackMarkerBase& dest,
							const CCallStackMarkerBase& source);  // 708
	}
} /* size: 0 */

// <00491B38> tier0/stacktools.cpp:690
// variables: 2
void CStackTop_CopyParentStack::CStackTop_CopyParentStack(const void* const* pParentStackTrace, int nParentStackTraceLength, const CCallStackMarkerBase& marker)
{
	const char   __FUNCTION__; // 22547
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 707
	}
} /* size: 0, variables: 1 */

// <004919A4> tier0/stacktools.cpp:721
// function calls: 3
void CStackTop_CopyParentStack::CStackTop_CopyParentStack(const CCallStackCapture* pParentStack, const CCallStackMarkerBase& marker)
{
	{
		{
		}
	}
	{
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 737
		{
		}
		CopyPossiblyDeferredCallStackMarker(CCallStackMarkerBase& dest,
							const CCallStackMarkerBase& source);  // 320
		CopyPossiblyDeferredCallStackMarker(CCallStackMarkerBase& dest,
							const CCallStackMarkerBase& source);  // 740
	}
} /* size: 0 */

// <00491934> tier0/stacktools.cpp:721
// variables: 2
void CStackTop_CopyParentStack::CStackTop_CopyParentStack(const CCallStackCapture* pParentStack, const CCallStackMarkerBase& marker)
{
	const char   __FUNCTION__; // 22547
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 739
	}
} /* size: 0, variables: 1 */

// <004918DD> tier0/stacktools.cpp:753
void CStackTop_CopyParentStack::~CStackTop_CopyParentStack()
{
} /* size: 43 */

// <004917D6> tier0/stacktools.cpp:763
// function call: 1
void CStackTop_CopyParentStack::ChangeCopiedStack(const void* const* pParentStackTrace, int nParentStackTraceLength)
{
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 782
} /* size: 162, inline expansions: 1 (19 bytes) */

// <004916B2> tier0/stacktools.cpp:792
// function calls: 2
void CStackTop_ReferenceParentStack::CStackTop_ReferenceParentStack(const void* const* pParentStackTrace, int nParentStackTraceLength, const CCallStackMarkerBase& marker)
{
	{
		{
		}
	}
	{
		{
		}
		CopyPossiblyDeferredCallStackMarker(CCallStackMarkerBase& dest,
							const CCallStackMarkerBase& source);  // 320
		CopyPossiblyDeferredCallStackMarker(CCallStackMarkerBase& dest,
							const CCallStackMarkerBase& source);  // 810
	}
} /* size: 0 */

// <0049164A> tier0/stacktools.cpp:792
// variables: 2
void CStackTop_ReferenceParentStack::CStackTop_ReferenceParentStack(const void* const* pParentStackTrace, int nParentStackTraceLength, const CCallStackMarkerBase& marker)
{
	const char   __FUNCTION__; // 21410
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 809
	}
} /* size: 0, variables: 1 */

// <00491533> tier0/stacktools.cpp:823
// function calls: 2
void CStackTop_ReferenceParentStack::CStackTop_ReferenceParentStack(const CCallStackCapture* pParentStack, const CCallStackMarkerBase& marker)
{
	{
		{
		}
	}
	{
		{
		}
		CopyPossiblyDeferredCallStackMarker(CCallStackMarkerBase& dest,
							const CCallStackMarkerBase& source);  // 320
		CopyPossiblyDeferredCallStackMarker(CCallStackMarkerBase& dest,
							const CCallStackMarkerBase& source);  // 841
	}
} /* size: 0 */

// <004914C3> tier0/stacktools.cpp:823
// variables: 2
void CStackTop_ReferenceParentStack::CStackTop_ReferenceParentStack(const CCallStackCapture* pParentStack, const CCallStackMarkerBase& marker)
{
	const char   __FUNCTION__; // 21410
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 840
	}
} /* size: 0, variables: 1 */

// <00491460> tier0/stacktools.cpp:854
void CStackTop_ReferenceParentStack::~CStackTop_ReferenceParentStack()
{
} /* size: 31 */

// <00491410> tier0/stacktools.cpp:861
void CStackTop_ReferenceParentStack::ReleaseParentStackReferences()
{
} /* size: 20 */

// <00491395> tier0/stacktools.cpp:869
void CStackTop_ReferenceParentStack::ChangeReferencedStack(const void* const* pParentStackTrace, int nParentStackTraceLength)
{
} /* size: 48 */

// <0048958D> tier0/stacktools.cpp:885
// member functions: 8
// member variable: 1
// class size: 32
class CTier0_Stack_Annotation : public IStack_Annotation {
public:
	/* class IStack_Annotation <ancestor>; */ /* 0 32 */
	/* tier0/stacktools.cpp:888 */
	CTier0_Stack_Annotation* Next(CTier0_Stack_Annotation* );
	/* tier0/stacktools.cpp:889 */
	CCallStackMarkerBase& GetMarker(CTier0_Stack_Annotation* );
private:
	/* tier0/stacktools.cpp:891 */
	void CTier0_Stack_Annotation(CTier0_Stack_Annotation* );
	virtual void ~CTier0_Stack_Annotation(CTier0_Stack_Annotation* );
	class CTier0_Stack_Annotation * Next(class CTier0_Stack_Annotation *); /* linkage=_ZN23CTier0_Stack_Annotation4NextEv */
	class CCallStackMarkerBase & GetMarker(class CTier0_Stack_Annotation *); /* linkage=_ZN23CTier0_Stack_Annotation9GetMarkerEv */
	void CTier0_Stack_Annotation(class CTier0_Stack_Annotation *); /* linkage=_ZN23CTier0_Stack_AnnotationC4Ev */
	virtual void ~CTier0_Stack_Annotation(class CTier0_Stack_Annotation *); /* linkage=_ZN23CTier0_Stack_AnnotationD4Ev */
};

// <0049137C> tier0/stacktools.cpp:888
inline void CTier0_Stack_Annotation::Next()
{
} /* size: 0 */

// <00491363> tier0/stacktools.cpp:889
inline void CTier0_Stack_Annotation::GetMarker()
{
} /* size: 0 */

// <00491247> tier0/stacktools.cpp:896
// variables: 4
// function calls: 2
void IStack_Annotation::IStack_Annotation(const CCallStackMarkerBase& leafMarker)
{
	{
		CFiber* pCurrentFiber; // 899
		{
			Tier0FiberLocals_t& fiberLocals; // 902
		}
	}
	{
		CFiber* pCurrentFiber; // 899
		{
			Tier0FiberLocals_t& fiberLocals; // 902
			CopyPossiblyDeferredCallStackMarker(CCallStackMarkerBase& dest,
								const CCallStackMarkerBase& source);  // 320
			CopyPossiblyDeferredCallStackMarker(CCallStackMarkerBase& dest,
								const CCallStackMarkerBase& source);  // 904
		}
	}
} /* size: 119 */

// <00491203> tier0/stacktools.cpp:896
// variables: 2
void IStack_Annotation::IStack_Annotation(const CCallStackMarkerBase& leafMarker)
{
	{
		CFiber* pCurrentFiber; // 899
		{
			Tier0FiberLocals_t& fiberLocals; // 902
		}
	}
} /* size: 0 */

// <00491168> tier0/stacktools.cpp:915
// variables: 4
void IStack_Annotation::~IStack_Annotation()
{
	{
		CFiber* pCurrentFiber; // 918
		{
			Tier0FiberLocals_t& fiberLocals; // 921
		}
	}
	{
		CFiber* pCurrentFiber; // 918
		{
			Tier0FiberLocals_t& fiberLocals; // 921
		}
	}
} /* size: 82 */

// <00491103> tier0/stacktools.cpp:915
void IStack_Annotation::~IStack_Annotation()
{
} /* size: 36 */

// <004910CC> tier0/stacktools.cpp:915
// variables: 2
void IStack_Annotation::~IStack_Annotation()
{
	{
		CFiber* pCurrentFiber; // 918
		{
			Tier0FiberLocals_t& fiberLocals; // 921
		}
	}
} /* size: 0 */

// <00487873> tier0/stacktools.cpp:937
// member functions: 22
// member variables: 9
// vtable entries: 6
// class size: 56
class CAnnotationPackager : public IAnnotationPackager {
	/* tier0/stacktools.cpp:950 */
	struct OverrideContext_t {
		int nCallbackIndexArg; /* 0 4 */
		const void * pCallbackAddressArg; /* 8 8 */
	};
public:
	/* class IAnnotationPackager <ancestor>; */ /* 0 8 */
	void ~CAnnotationPackager(CAnnotationPackager* );
	void CAnnotationPackager(CAnnotationPackager* , CAnnotationPackager& );
	void CAnnotationPackager(CAnnotationPackager* , const CAnnotationPackager& );
	/* tier0/stacktools.cpp:940 */
	void CAnnotationPackager(CAnnotationPackager* , FN_IterateStackAnnotationCallback, void* , const void* const* , int);
	/* tier0/stacktools.cpp:956 */
	bool InternalString(CAnnotationPackager* , const char* , const void* , int);
	/* tier0/stacktools.cpp:971 */
	virtual void String(CAnnotationPackager* , const char* );
	/* tier0/stacktools.cpp:982 */
	virtual void String(CAnnotationPackager* , HAnnotationOverrideContext_t, const char* );
	/* tier0/stacktools.cpp:993 */
	virtual void FmtString(CAnnotationPackager* , const char* , ...);
	/* tier0/stacktools.cpp:1011 */
	virtual void FmtString(CAnnotationPackager* , HAnnotationOverrideContext_t, const char* , ...);
	/* tier0/stacktools.cpp:1029 */
	virtual size_t GetOverrideContextSize(CAnnotationPackager* );
	/* tier0/stacktools.cpp:1034 */
	virtual HAnnotationOverrideContext_t CreateOverrideContext(CAnnotationPackager* , void* , const void* , bool);
	FN_IterateStackAnnotationCallback m_pCallback; /* 8 8 */
	bool m_bStopIteration; /* 16 1 */
	int m_nCallbackIndexArg; /* 20 4 */
	const void * m_pCallbackAddressArg; /* 24 8 */
	void * m_pContextArg; /* 32 8 */
	const void * const * m_pEntireCapturedStack; /* 40 8 */
	int m_nEntireCapturedStackCount; /* 48 4 */
	int m_nLastResolvedIndex; /* 52 4 */
	void ~CAnnotationPackager(class CAnnotationPackager *); /* linkage=_ZN19CAnnotationPackagerD4Ev */
	void CAnnotationPackager(class CAnnotationPackager *, class CAnnotationPackager &); /* linkage=_ZN19CAnnotationPackagerC4EOS_ */
	void CAnnotationPackager(class CAnnotationPackager *, const class CAnnotationPackager  &); /* linkage=_ZN19CAnnotationPackagerC4ERKS_ */
	void CAnnotationPackager(class CAnnotationPackager *, FN_IterateStackAnnotationCallback, void *, const void  * const *, int); /* linkage=_ZN19CAnnotationPackagerC4EPFbPKviPKcPvES4_PKS1_i */
	bool InternalString(class CAnnotationPackager *, const char  *, const void  *, int); /* linkage=_ZN19CAnnotationPackager14InternalStringEPKcPKvi */
	/* <493785> tier0/stacktools.cpp:971 */
	virtual void String(class CAnnotationPackager *, const char  *); /* linkage=_ZN19CAnnotationPackager6StringEPKc */
	/* <49363e> tier0/stacktools.cpp:982 */
	virtual void String(class CAnnotationPackager *, HAnnotationOverrideContext_t, const char  *); /* linkage=_ZN19CAnnotationPackager6StringEP32HAnnotationOverrideContextGuts_tPKc */
	virtual void FmtString(class CAnnotationPackager *, const char  *, ...); /* linkage=_ZN19CAnnotationPackager9FmtStringEPKcz */
	virtual void FmtString(class CAnnotationPackager *, HAnnotationOverrideContext_t, const char  *, ...); /* linkage=_ZN19CAnnotationPackager9FmtStringEP32HAnnotationOverrideContextGuts_tPKcz */
	virtual size_t GetOverrideContextSize(class CAnnotationPackager *); /* linkage=_ZN19CAnnotationPackager22GetOverrideContextSizeEv */
	virtual HAnnotationOverrideContext_t CreateOverrideContext(class CAnnotationPackager *, void *, const void  *, bool); /* linkage=_ZN19CAnnotationPackager21CreateOverrideContextEPvPKvb */
};

// <0049106D> tier0/stacktools.cpp:940
void CAnnotationPackager::CAnnotationPackager(FN_IterateStackAnnotationCallback pCallback, void* pContext, const void* const* pEntireCapturedStack, int nEntireCapturedStackCount)
{
} /* size: 0 */

// <00491020> tier0/stacktools.cpp:940
inline void CAnnotationPackager::CAnnotationPackager(FN_IterateStackAnnotationCallback pCallback, void* pContext, const void* const* pEntireCapturedStack, int nEntireCapturedStackCount)
{
} /* size: 0 */

// <00490F80> tier0/stacktools.cpp:956
// variables: 3
inline void CAnnotationPackager::InternalString(const char* szValue, const void* pAddressArg, int nIndexArg)
{
	const char   __FUNCTION__; // 20111
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 958
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
} /* size: 0, variables: 1 */

// <00493785> tier0/stacktools.cpp:971
// function calls: 2
void CAnnotationPackager::String(const char* szValue)
{
	{
	}
	{
	}
	CAnnotationPackager::InternalString(
			const char* szValue,
			const void* pAddressArg,
			int nIndexArg);  // 975
	CAnnotationPackager::String(
		const char* szValue);  // 971
} /* size: 205, inline expansions: 2 (325 bytes) */

// <00490F5A> tier0/stacktools.cpp:971
inline void CAnnotationPackager::String(const char* szValue)
{
} /* size: 0 */

// <0049363E> tier0/stacktools.cpp:982
// function calls: 2
void CAnnotationPackager::String(HAnnotationOverrideContext_t hOverrideContext, const char* szValue)
{
	{
	}
	{
	}
	CAnnotationPackager::InternalString(
			const char* szValue,
			const void* pAddressArg,
			int nIndexArg);  // 986
	CAnnotationPackager::String(
		HAnnotationOverrideContext_t hOverrideContext,
		const char* szValue);  // 982
} /* size: 180, inline expansions: 2 (277 bytes) */

// <00490F27> tier0/stacktools.cpp:982
inline void CAnnotationPackager::String(HAnnotationOverrideContext_t hOverrideContext, const char* szValue)
{
} /* size: 0 */

// <00490DA2> tier0/stacktools.cpp:993
// variables: 2
// function call: 1
void CAnnotationPackager::FmtString(const char* pMessageFormat, ...)
{
	{
		char formattedMessage; // 997
		va_list args; // 999
		{
		}
		{
		}
		CAnnotationPackager::InternalString(
				const char* szValue,
				const void* pAddressArg,
				int nIndexArg);  // 1004
	}
} /* size: 400 */

// <00490BF7> tier0/stacktools.cpp:1011
// variables: 2
// function call: 1
void CAnnotationPackager::FmtString(HAnnotationOverrideContext_t hOverrideContext, const char* pMessageFormat, ...)
{
	{
		char formattedMessage; // 1015
		va_list args; // 1017
		{
		}
		{
		}
		CAnnotationPackager::InternalString(
				const char* szValue,
				const void* pAddressArg,
				int nIndexArg);  // 1022
	}
} /* size: 371 */

// <00490BC9> tier0/stacktools.cpp:1029
void CAnnotationPackager::GetOverrideContextSize()
{
} /* size: 10 */

// <00490B20> tier0/stacktools.cpp:1034
// variables: 2
void CAnnotationPackager::CreateOverrideContext(void* pOutputBuffer, const void* pOverrideTargetAddress, bool bTargetIsReturnAddress)
{
	{
		int i; // 1036
	}
	{
		int i; // 1052
	}
} /* size: 163 */

// <00490797> tier0/stacktools.cpp:1085
// variables: 7
// function calls: 10
void IterateCapturedStackAnnotations(const void* const* pCapturedStack, int nCapturedCount, FN_IterateStackAnnotationCallback pCallback, void* pContext)
{
	CFiber* pCurrentFiber; // 1088
	int nCaptureIndex; // 1092
	CTier0_Stack_Annotation* pIterator; // 1093
	CFiber* pIterFiber; // 1095
	{
		CAnnotationPackager packager; // 1113
		const CCallStackMarkerBase* pAnnotationMarker; // 1114
		{
			const CCallStackMarkerBase* pNextAnnotationMarker; // 1152
			CCallStackMarkerBase::IsEnabled(); // 1133
			CTier0_Stack_Annotation::GetMarker(); // 1152
			CTier0_Stack_Annotation::Next(); // 1129
			CFiber::GetPrevFiberInSameThread(); // 1141
		}
		IAnnotationPackager::IAnnotationPackager(); // 946
		CAnnotationPackager::CAnnotationPackager(
					FN_IterateStackAnnotationCallback pCallback,
					void* pContext,
					const void* const* pEntireCapturedStack,
					int nEntireCapturedStackCount);  // 1113
		CTier0_Stack_Annotation::GetMarker(); // 1114
	}
	CTier0_Stack_Annotation::Next(); // 1102
	CCallStackMarkerBase::IsEnabled(); // 1100
	CFiber::GetPrevFiberInSameThread(); // 1108
} /* size: 412, variables: 4, inline expansions: 3 (11 bytes) */

// <004894A7> tier0/stacktools.cpp:1171
// member functions: 4
// member variable: 1
// class size: 32
class CTier0_Stack_VM_Segment_Marker : public IStack_VM_Segment_Marker {
public:
	/* class IStack_VM_Segment_Marker <ancestor>; */ /* 0 0 */
	/* tier0/stacktools.cpp:1174 */
	CTier0_Stack_VM_Segment_Marker* Next(CTier0_Stack_VM_Segment_Marker* );
	/* tier0/stacktools.cpp:1175 */
	CCallStackMarkerBase& GetMarker(CTier0_Stack_VM_Segment_Marker* );
private:
	/* tier0/stacktools.cpp:1177 */
	void CTier0_Stack_VM_Segment_Marker(CTier0_Stack_VM_Segment_Marker* );
	virtual void ~CTier0_Stack_VM_Segment_Marker(CTier0_Stack_VM_Segment_Marker* );
};

// <0049077E> tier0/stacktools.cpp:1174
inline void CTier0_Stack_VM_Segment_Marker::Next()
{
} /* size: 0 */

// <0049007F> tier0/stacktools.cpp:1194
// function call: 1
void CStackTranslationHelper_Local::~CStackTranslationHelper_Local()
{
	CStackTranslationHelper_Dwarf_Local::~CStackTranslationHelper_Dwarf_Local(); // 1194
} /* size: 41, inline expansions: 1 (9 bytes) */

// <00490062> tier0/stacktools.cpp:1194
inline void CStackTranslationHelper_Local::~CStackTranslationHelper_Local()
{
} /* size: 0 */

// <00488A1C> tier0/stacktools.cpp:1194
// member functions: 44
// member variables: 2
// vtable entries: 18
// class size: 40
class CStackTranslationHelper_Local : public CStackTranslationHelper {
public:
	/* class CStackTranslationHelper <ancestor>; */ /* 0 8 */
	void ~CStackTranslationHelper_Local(CStackTranslationHelper_Local* );
	void CStackTranslationHelper_Local(CStackTranslationHelper_Local* , CStackTranslationHelper_Local& );
	void CStackTranslationHelper_Local(CStackTranslationHelper_Local* , const CStackTranslationHelper_Local& );
	/* tier0/stacktools.cpp:1198 */
	virtual void AddRef(CStackTranslationHelper_Local* );
	/* tier0/stacktools.cpp:1199 */
	virtual void Release(CStackTranslationHelper_Local* );
	/* tier0/stacktools.cpp:1200 */
	virtual void ReturnToMapping(CStackTranslationHelper_Local* , StackTranslation_ModuleMappingMarker_t);
	/* tier0/stacktools.cpp:1201 */
	virtual StackTranslation_ModuleMappingMarker_t GetCurrentMappingMarker(CStackTranslationHelper_Local* );
	/* tier0/stacktools.cpp:1202 */
	virtual StackTranslation_ModuleMappingMarker_t GetNewestMappingMarker(CStackTranslationHelper_Local* );
	/* tier0/stacktools.cpp:1203 */
	virtual void SyncToNewestMappings(CStackTranslationHelper_Local* );
	/* tier0/stacktools.cpp:1204 */
	virtual void UnloadSymbolFiles(CStackTranslationHelper_Local* );
	/* tier0/stacktools.cpp:1206 */
	void CStackTranslationHelper_Local(CStackTranslationHelper_Local* );
	/* tier0/stacktools.cpp:1211 */
	virtual void SetSymbolSearchPath(CStackTranslationHelper_Local* , const char* );
	/* tier0/stacktools.cpp:1218 */
	virtual void SetSymbolSearchPath(CStackTranslationHelper_Local* , const wchar_t* );
	/* tier0/stacktools.cpp:1225 */
	virtual bool CanTranslatePointer(CStackTranslationHelper_Local* , uint64);
	/* tier0/stacktools.cpp:1237 */
	virtual void SetLoadingModuleState(CStackTranslationHelper_Local* , bool);
	/* tier0/stacktools.cpp:1244 */
	virtual void LoadedModule(CStackTranslationHelper_Local* , const char* , PlatModule_t, void* , uint32);
	/* tier0/stacktools.cpp:1251 */
	virtual void UnloadedModule(CStackTranslationHelper_Local* , PlatModule_t);
	/* tier0/stacktools.cpp:1258 */
	virtual void VerifyLoadedModuleMappings(CStackTranslationHelper_Local* );
	/* tier0/stacktools.cpp:1265 */
	virtual bool ProcessModuleMapping(CStackTranslationHelper_Local* , StackTranslation_LoadedModuleInfo_t* );
	/* tier0/stacktools.cpp:1278 */
	virtual bool ProcessVirtualMachineUpdate(CStackTranslationHelper_Local* , StackTranslation_VirtualMachineUpdate_t* );
	/* tier0/stacktools.cpp:1283 */
	virtual uint GetTranslationData(CStackTranslationHelper_Local* , uint64, char* , uint, char* , uint, char* , uint, uint* , uint* , uint* );
	/* tier0/stacktools.cpp:1295 */
	virtual uint GetTranslationData(CStackTranslationHelper_Local* , uint64, wchar_t* , uint, wchar_t* , uint, wchar_t* , uint, uint* , uint* , uint* );
	CStackTranslationHelper_Dwarf_Local s_PlatformTranslationHelper; /* 8 32 */
	void ~CStackTranslationHelper_Local(class CStackTranslationHelper_Local *); /* linkage=_ZN29CStackTranslationHelper_LocalD4Ev */
	void CStackTranslationHelper_Local(class CStackTranslationHelper_Local *, class CStackTranslationHelper_Local &); /* linkage=_ZN29CStackTranslationHelper_LocalC4EOS_ */
	void CStackTranslationHelper_Local(class CStackTranslationHelper_Local *, const class CStackTranslationHelper_Local  &); /* linkage=_ZN29CStackTranslationHelper_LocalC4ERKS_ */
	virtual void AddRef(class CStackTranslationHelper_Local *); /* linkage=_ZN29CStackTranslationHelper_Local6AddRefEv */
	virtual void Release(class CStackTranslationHelper_Local *); /* linkage=_ZN29CStackTranslationHelper_Local7ReleaseEv */
	virtual void ReturnToMapping(class CStackTranslationHelper_Local *, StackTranslation_ModuleMappingMarker_t); /* linkage=_ZN29CStackTranslationHelper_Local15ReturnToMappingEj */
	virtual StackTranslation_ModuleMappingMarker_t GetCurrentMappingMarker(class CStackTranslationHelper_Local *); /* linkage=_ZN29CStackTranslationHelper_Local23GetCurrentMappingMarkerEv */
	virtual StackTranslation_ModuleMappingMarker_t GetNewestMappingMarker(class CStackTranslationHelper_Local *); /* linkage=_ZN29CStackTranslationHelper_Local22GetNewestMappingMarkerEv */
	virtual void SyncToNewestMappings(class CStackTranslationHelper_Local *); /* linkage=_ZN29CStackTranslationHelper_Local20SyncToNewestMappingsEv */
	virtual void UnloadSymbolFiles(class CStackTranslationHelper_Local *); /* linkage=_ZN29CStackTranslationHelper_Local17UnloadSymbolFilesEv */
	void CStackTranslationHelper_Local(class CStackTranslationHelper_Local *); /* linkage=_ZN29CStackTranslationHelper_LocalC4Ev */
	/* <4930f8> tier0/stacktools.cpp:1211 */
	virtual void SetSymbolSearchPath(class CStackTranslationHelper_Local *, const char  *); /* linkage=_ZN29CStackTranslationHelper_Local19SetSymbolSearchPathEPKc */
	virtual void SetSymbolSearchPath(class CStackTranslationHelper_Local *, const wchar_t  *); /* linkage=_ZN29CStackTranslationHelper_Local19SetSymbolSearchPathEPKw */
	virtual bool CanTranslatePointer(class CStackTranslationHelper_Local *, uint64); /* linkage=_ZN29CStackTranslationHelper_Local19CanTranslatePointerEy */
	/* <4933d9> tier0/stacktools.cpp:1237 */
	virtual void SetLoadingModuleState(class CStackTranslationHelper_Local *, bool); /* linkage=_ZN29CStackTranslationHelper_Local21SetLoadingModuleStateEb */
	/* <493342> tier0/stacktools.cpp:1244 */
	virtual void LoadedModule(class CStackTranslationHelper_Local *, const char  *, PlatModule_t, void *, uint32); /* linkage=_ZN29CStackTranslationHelper_Local12LoadedModuleEPKcP13_PlatModule_tPvj */
	/* <4932e7> tier0/stacktools.cpp:1251 */
	virtual void UnloadedModule(class CStackTranslationHelper_Local *, PlatModule_t); /* linkage=_ZN29CStackTranslationHelper_Local14UnloadedModuleEP13_PlatModule_t */
	/* <4932a0> tier0/stacktools.cpp:1258 */
	virtual void VerifyLoadedModuleMappings(class CStackTranslationHelper_Local *); /* linkage=_ZN29CStackTranslationHelper_Local26VerifyLoadedModuleMappingsEv */
	virtual bool ProcessModuleMapping(class CStackTranslationHelper_Local *, class StackTranslation_LoadedModuleInfo_t *); /* linkage=_ZN29CStackTranslationHelper_Local20ProcessModuleMappingEP35StackTranslation_LoadedModuleInfo_t */
	virtual bool ProcessVirtualMachineUpdate(class CStackTranslationHelper_Local *, class StackTranslation_VirtualMachineUpdate_t *); /* linkage=_ZN29CStackTranslationHelper_Local27ProcessVirtualMachineUpdateEP39StackTranslation_VirtualMachineUpdate_t */
	/* <493153> tier0/stacktools.cpp:1283 */
	virtual uint GetTranslationData(class CStackTranslationHelper_Local *, uint64, char *, uint, char *, uint, char *, uint, uint *, uint *, uint *); /* linkage=_ZN29CStackTranslationHelper_Local18GetTranslationDataEyPcjS0_jS0_jPjS1_S1_ */
	virtual uint GetTranslationData(class CStackTranslationHelper_Local *, uint64, wchar_t *, uint, wchar_t *, uint, wchar_t *, uint, uint *, uint *, uint *); /* linkage=_ZN29CStackTranslationHelper_Local18GetTranslationDataEyPwjS0_jS0_jPjS1_S1_ */
};

// <00490750> tier0/stacktools.cpp:1198
void CStackTranslationHelper_Local::AddRef()
{
} /* size: 5 */

// <00490722> tier0/stacktools.cpp:1199
void CStackTranslationHelper_Local::Release()
{
} /* size: 5 */

// <004906E4> tier0/stacktools.cpp:1200
void CStackTranslationHelper_Local::ReturnToMapping(StackTranslation_ModuleMappingMarker_t mappingMarker)
{
} /* size: 5 */

// <004906B6> tier0/stacktools.cpp:1201
void CStackTranslationHelper_Local::GetCurrentMappingMarker()
{
} /* size: 7 */

// <00490688> tier0/stacktools.cpp:1202
void CStackTranslationHelper_Local::GetNewestMappingMarker()
{
} /* size: 7 */

// <0049065A> tier0/stacktools.cpp:1203
void CStackTranslationHelper_Local::SyncToNewestMappings()
{
} /* size: 5 */

// <0049062C> tier0/stacktools.cpp:1204
void CStackTranslationHelper_Local::UnloadSymbolFiles()
{
} /* size: 5 */

// <004905AD> tier0/stacktools.cpp:1206
void CStackTranslationHelper_Local::CStackTranslationHelper_Local()
{
} /* size: 0 */

// <00490594> tier0/stacktools.cpp:1206
inline void CStackTranslationHelper_Local::CStackTranslationHelper_Local()
{
} /* size: 0 */

// <004930F8> tier0/stacktools.cpp:1211
void CStackTranslationHelper_Local::SetSymbolSearchPath(const char* szSemicolonSeparatedList)
{
} /* size: 13 */

// <0049056E> tier0/stacktools.cpp:1211
inline void CStackTranslationHelper_Local::SetSymbolSearchPath(const char* szSemicolonSeparatedList)
{
} /* size: 0 */

// <00490506> tier0/stacktools.cpp:1218
void CStackTranslationHelper_Local::SetSymbolSearchPath(const wchar_t* szSemicolonSeparatedList)
{
} /* size: 13 */

// <00490485> tier0/stacktools.cpp:1225
void CStackTranslationHelper_Local::CanTranslatePointer(uint64 pAddress)
{
} /* size: 57 */

// <004933D9> tier0/stacktools.cpp:1237
void CStackTranslationHelper_Local::SetLoadingModuleState(bool bLoading)
{
} /* size: 17 */

// <0049045F> tier0/stacktools.cpp:1237
inline void CStackTranslationHelper_Local::SetLoadingModuleState(bool bLoading)
{
} /* size: 0 */

// <00493342> tier0/stacktools.cpp:1244
void CStackTranslationHelper_Local::LoadedModule(const char* szModuleName, PlatModule_t hModule, void* pBaseAddress, uint32 nSize)
{
} /* size: 13 */

// <00490412> tier0/stacktools.cpp:1244
inline void CStackTranslationHelper_Local::LoadedModule(const char* szModuleName, PlatModule_t hModule, void* pBaseAddress, uint32 nSize)
{
} /* size: 0 */

// <004932E7> tier0/stacktools.cpp:1251
void CStackTranslationHelper_Local::UnloadedModule(PlatModule_t hModule)
{
} /* size: 13 */

// <004903EC> tier0/stacktools.cpp:1251
inline void CStackTranslationHelper_Local::UnloadedModule(PlatModule_t hModule)
{
} /* size: 0 */

// <004932A0> tier0/stacktools.cpp:1258
void CStackTranslationHelper_Local::VerifyLoadedModuleMappings()
{
} /* size: 13 */

// <004903D3> tier0/stacktools.cpp:1258
inline void CStackTranslationHelper_Local::VerifyLoadedModuleMappings()
{
} /* size: 0 */

// <0049036B> tier0/stacktools.cpp:1265
void CStackTranslationHelper_Local::ProcessModuleMapping(StackTranslation_LoadedModuleInfo_t* pModuleInfo)
{
} /* size: 30 */

// <0049032D> tier0/stacktools.cpp:1278
void CStackTranslationHelper_Local::ProcessVirtualMachineUpdate(StackTranslation_VirtualMachineUpdate_t* pVMUpdate)
{
} /* size: 7 */

// <00493153> tier0/stacktools.cpp:1283
void CStackTranslationHelper_Local::GetTranslationData(uint64 pAddress, char* pModuleNameOut, uint nMaxModuleNameLength, char* pSymbolNameOut, uint nMaxSymbolNameLength, char* pFileNameOut, uint nMaxFileNameLength, uint* pLineNumberOut, uint* pSymbolDisplacementOut, uint* pLineDisplacementOut)
{
} /* size: 202 */

// <00490292> tier0/stacktools.cpp:1283
inline void CStackTranslationHelper_Local::GetTranslationData(uint64 pAddress, char* pModuleNameOut, uint nMaxModuleNameLength, char* pSymbolNameOut, uint nMaxSymbolNameLength, char* pFileNameOut, uint nMaxFileNameLength, uint* pLineNumberOut, uint* pSymbolDisplacementOut, uint* pLineDisplacementOut)
{
} /* size: 0 */

// <004900EF> tier0/stacktools.cpp:1295
void CStackTranslationHelper_Local::GetTranslationData(uint64 pAddress, wchar_t* pModuleNameOut, uint nMaxModuleNameLength, wchar_t* pSymbolNameOut, uint nMaxSymbolNameLength, wchar_t* pFileNameOut, uint nMaxFileNameLength, uint* pLineNumberOut, uint* pSymbolDisplacementOut, uint* pLineDisplacementOut)
{
} /* size: 202 */

// <00493437> tier0/stacktools.cpp:1315
// function calls: 4
CStackTranslationHelper_Local* GetLocalTranslationHelper(void)
{
	CStackTranslationHelper::CStackTranslationHelper(); // 1207
	CStackTranslationHelper_Dwarf_Local::CStackTranslationHelper_Dwarf_Local(); // 1207
	CStackTranslationHelper_Local::CStackTranslationHelper_Local(); // 1317
	GetLocalTranslationHelper(void); // 1315
} /* size: 162, inline expansions: 4 (163 bytes) */

// <00490037> tier0/stacktools.cpp:1315
// variable: 1
CStackTranslationHelper_Local* GetLocalTranslationHelper(void)
{
	CStackTranslationHelper_Local s_LocalTranslationHelper; // 1317
} /* size: 0, variables: 1 */

// <0048FF6E> tier0/stacktools.cpp:1322
// function call: 1
void StackToolsNotify_SetSymbolSearchPath(const char* szSemicolonSeparatedList)
{
	CStackTranslationHelper_Local::SetSymbolSearchPath(
				const char* szSemicolonSeparatedList);  // 1332
} /* size: 93, inline expansions: 1 (20 bytes) */

// <00488330> tier0/stacktools.cpp:1456
// member functions: 18
// member variables: 6
// class size: 56
class CModuleMappingListenerManager {
	/* tier0/stacktools.cpp:1540 */
	struct ModuleMappingHistory_t {
		uint64 nBaseAddress; /* 0 8 */
		uint32 nSize; /* 8 4 */
		StackTranslation_LoadedModuleInfo_t * pModule; /* 16 8 */
	};
	/* tier0/stacktools.cpp:1547 */
	struct StackTranslation_LoadedModuleInfo_LinkedList_t {
		StackTranslation_LoadedModuleInfo_LinkedList_t * pNext; /* 0 8 */
		StackTranslation_LoadedModuleInfo_t info; /* 8 4120 */
	};
	/* tier0/stacktools.cpp:1646 */
	struct MaximumSizedLoadedModuleInfo_t : public StackTranslation_LoadedModuleInfo_t {
	public:
		/* struct StackTranslation_LoadedModuleInfo_t <ancestor>; */ /* 0 4120 */
		uint8 MoreBuffer[4096]; /* 4120 4096 */
	};
	/* tier0/stacktools.cpp:1687 */
	struct ModuleMappingListenerLL_t {
		ModuleMappingListenerLL_t * pNext; /* 0 8 */
		IModuleMappingListener * pListener; /* 8 8 */
	};
	/* tier0/stacktools.cpp:1459 */
	void CModuleMappingListenerManager(CModuleMappingListenerManager* );
	/* tier0/stacktools.cpp:1468 */
	void ~CModuleMappingListenerManager(CModuleMappingListenerManager* );
	/* tier0/stacktools.cpp:1497 */
	void InstallModuleMappingListener(CModuleMappingListenerManager* , IModuleMappingListener* );
	/* tier0/stacktools.cpp:1507 */
	void RemoveModuleMappingListener(CModuleMappingListenerManager* , IModuleMappingListener* );
	/* tier0/stacktools.cpp:1554 */
	void ReportChangeToListeners(CModuleMappingListenerManager* , StackTranslation_LoadedModuleInfo_t* , bool);
	/* tier0/stacktools.cpp:1624 */
	void ReportVirtualMachineEncodingChange(CModuleMappingListenerManager* , uint64, uint64, uint, uint64, uint, uint64, bool);
	/* tier0/stacktools.cpp:1634 */
	void ReportVirtualMachineIndexAdded(CModuleMappingListenerManager* , uint64, uint32, const char* , const char* , uint32);
	/* tier0/stacktools.cpp:1651 */
	uint32 EnumerateKnownLoadedModules(CModuleMappingListenerManager* , bool (*)(const StackTranslation_LoadedModuleInfo_t* , uint32, void* ), void* );
	/* tier0/stacktools.cpp:1680 */
	CModuleMappingListenerManager* Get(void);
	ModuleMappingListenerLL_t * m_pModuleMappingListeners; /* 0 8 */
	CThreadFastMutex m_Mutex; /* 8 24 */
	ModuleMappingHistory_t * m_pMappingHistory; /* 32 8 */
	uint32 m_nAllocatedMappingHistory; /* 40 4 */
	uint32 m_nMappingHistoryCounter; /* 44 4 */
	StackTranslation_LoadedModuleInfo_LinkedList_t * m_pLoadedModuleInfoCopies; /* 48 8 */
	void CModuleMappingListenerManager(class CModuleMappingListenerManager *); /* linkage=_ZN29CModuleMappingListenerManagerC4Ev */
	void ~CModuleMappingListenerManager(class CModuleMappingListenerManager *); /* linkage=_ZN29CModuleMappingListenerManagerD4Ev */
	void InstallModuleMappingListener(class CModuleMappingListenerManager *, class IModuleMappingListener *); /* linkage=_ZN29CModuleMappingListenerManager28InstallModuleMappingListenerEP22IModuleMappingListener */
	void RemoveModuleMappingListener(class CModuleMappingListenerManager *, class IModuleMappingListener *); /* linkage=_ZN29CModuleMappingListenerManager27RemoveModuleMappingListenerEP22IModuleMappingListener */
	void ReportChangeToListeners(class CModuleMappingListenerManager *, class StackTranslation_LoadedModuleInfo_t *, bool); /* linkage=_ZN29CModuleMappingListenerManager23ReportChangeToListenersEP35StackTranslation_LoadedModuleInfo_tb */
	void ReportVirtualMachineEncodingChange(class CModuleMappingListenerManager *, uint64, uint64, uint, uint64, uint, uint64, bool); /* linkage=_ZN29CModuleMappingListenerManager34ReportVirtualMachineEncodingChangeEyyjyjyb */
	void ReportVirtualMachineIndexAdded(class CModuleMappingListenerManager *, uint64, uint32, const char  *, const char  *, uint32); /* linkage=_ZN29CModuleMappingListenerManager30ReportVirtualMachineIndexAddedEyjPKcS1_j */
	uint32 EnumerateKnownLoadedModules(class CModuleMappingListenerManager *, bool (*)(const class StackTranslation_LoadedModuleInfo_t  *, uint32, void *), void *); /* linkage=_ZN29CModuleMappingListenerManager27EnumerateKnownLoadedModulesEPFbPK35StackTranslation_LoadedModuleInfo_tjPvES3_ */
	class CModuleMappingListenerManager * Get(void); /* linkage=_ZN29CModuleMappingListenerManager3GetEv */
};

// <0048F532> tier0/stacktools.cpp:1459
void CModuleMappingListenerManager::CModuleMappingListenerManager()
{
} /* size: 0 */

// <0048F519> tier0/stacktools.cpp:1459
inline void CModuleMappingListenerManager::CModuleMappingListenerManager()
{
} /* size: 0 */

// <0048F44B> tier0/stacktools.cpp:1468
// variables: 4
void CModuleMappingListenerManager::~CModuleMappingListenerManager()
{
	{
		ModuleMappingListenerLL_t* pDelete; // 1472
	}
	{
		StackTranslation_LoadedModuleInfo_LinkedList_t* pDelete; // 1480
	}
	{
		ModuleMappingListenerLL_t* pDelete; // 1472
	}
	{
		StackTranslation_LoadedModuleInfo_LinkedList_t* pDelete; // 1480
	}
} /* size: 118 */

// <0048F410> tier0/stacktools.cpp:1468
// variables: 2
inline void CModuleMappingListenerManager::~CModuleMappingListenerManager()
{
	{
		ModuleMappingListenerLL_t* pDelete; // 1472
	}
	{
		StackTranslation_LoadedModuleInfo_LinkedList_t* pDelete; // 1480
	}
} /* size: 0 */

// <0048F3D0> tier0/stacktools.cpp:1497
// variables: 2
inline void CModuleMappingListenerManager::InstallModuleMappingListener(IModuleMappingListener* pListener)
{
	ModuleMappingListenerLL_t* pNew; // 1499
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1502; // 1502
} /* size: 0, variables: 2 */

// <0048F381> tier0/stacktools.cpp:1507
// variables: 3
inline void CModuleMappingListenerManager::RemoveModuleMappingListener(IModuleMappingListener* pListener)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1509; // 1509
	ModuleMappingListenerLL_t* pDelete; // 1513
	{
		ModuleMappingListenerLL_t* pIterate; // 1521
	}
} /* size: 0, variables: 2 */

// <0048EE9B> tier0/stacktools.cpp:1554
// variables: 4
// function calls: 12
void CModuleMappingListenerManager::ReportChangeToListeners(StackTranslation_LoadedModuleInfo_t* pModuleInfo, bool bModuleInfoPointerLivesForever)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1556; // 1556
	{
		StackTranslation_LoadedModuleInfo_LinkedList_t* pIterator; // 1561
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1580
	}
	{
		ModuleMappingHistory_t* pNewArray; // 1600
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1603
	}
	{
		ModuleMappingListenerLL_t* pIterator; // 1615
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
			int nLineNumber);  // 1556
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1622
} /* size: 633, variables: 1, inline expansions: 10 (367 bytes) */

// <0048EE1A> tier0/stacktools.cpp:1624
// variable: 1
inline void CModuleMappingListenerManager::ReportVirtualMachineEncodingChange(uint64 nVMID, uint64 nIndexBitMask, uint nIndexBitShift, uint64 nLineOffsetBitMask, uint nLineOffsetBitShift, uint64 nLineOffsetPostShiftedSignBitMask, bool bIndicesReset)
{
	ModuleMappingListenerLL_t* pIterator; // 1626
} /* size: 0, variables: 1 */

// <0048EDB3> tier0/stacktools.cpp:1634
// variable: 1
inline void CModuleMappingListenerManager::ReportVirtualMachineIndexAdded(uint64 nVMID, uint32 nIndex, const char* szFunctionName, const char* szFileName, uint32 nLineNumber)
{
	ModuleMappingListenerLL_t* pIterator; // 1636
} /* size: 0, variables: 1 */

// <0048E926> tier0/stacktools.cpp:1651
// variables: 6
// function calls: 11
void CModuleMappingListenerManager::EnumerateKnownLoadedModules(bool (*pCallBack)(const StackTranslation_LoadedModuleInfo_t *, uint32, void *), void* pContext)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1653; // 1653
	MaximumSizedLoadedModuleInfo_t tempModuleInfo; // 1655
	const char   __FUNCTION__; // 5439
	{
		uint32 i; // 1657
		{
			ModuleMappingHistory_t& HistoryEntry; // 1660
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1662
			}
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 1666
		}
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
			int nLineNumber);  // 1653
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1678
} /* size: 431, variables: 3, inline expansions: 10 (411 bytes) */

// <0048E8FF> tier0/stacktools.cpp:1680
// variable: 1
inline void Get(void)
{
	CModuleMappingListenerManager singleton; // 1682
} /* size: 0, variables: 1 */

// <0048E495> tier0/stacktools.cpp:1703
// function calls: 15
void StackTools_InstallModuleMappingListener(IModuleMappingListener* pListener)
{
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 1460
	CModuleMappingListenerManager::CModuleMappingListenerManager(); // 1682
	Get(void); // 1680
	Get(void); // 1706
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
			int nLineNumber);  // 1502
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1505
	CModuleMappingListenerManager::InstallModuleMappingListener(
					IModuleMappingListener* pListener);  // 1706
} /* size: 329, inline expansions: 15 (964 bytes) */

// <0048DF0D> tier0/stacktools.cpp:1710
// variable: 1
// function calls: 19
void StackTools_RemoveModuleMappingListener(IModuleMappingListener* pListener)
{
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 1460
	CModuleMappingListenerManager::CModuleMappingListenerManager(); // 1682
	Get(void); // 1680
	Get(void); // 1713
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
			int nLineNumber);  // 1509
	{
		ModuleMappingListenerLL_t* pIterate; // 1521
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1538
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1538
	CModuleMappingListenerManager::RemoveModuleMappingListener(
					IModuleMappingListener* pListener);  // 1713
} /* size: 444, inline expansions: 19 (1201 bytes) */

// <0048D258> tier0/stacktools.cpp:1755
// variables: 14
// function calls: 8
int StackTrace_ModificationPass(void** pReturnAddressesOut, int nArrayCount, int nAlreadyFilled, CFiber* pTopFiber)
{
	const char   __FUNCTION__; // 5439
	{
		CStackTop_FriendFuncs* pReplacementTop; // 1765
		CFiber* pIterFiber; // 1766
		{
			int i; // 1784
			{
				int nCopy; // 1809
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1806
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 1810
			}
		}
		CCallStackMarkerBase::IsEnabled(); // 1771
		CFiber::GetPrevFiberInSameThread(); // 1779
	}
	{
		CTier0_Stack_VM_Segment_Marker* pVMSegmentIterator; // 1818
		int nFibersOnStack; // 1819
		CTier0_Stack_VM_Segment_Marker** pFiberTopMarkers; // 1820
		int nCurrentFiberIndex; // 1821
		{
			CFiber* pIterFiber; // 1824
			CFiber::GetPrevFiberInSameThread(); // 1828
			CFiber::GetPrevFiberInSameThread(); // 1840
		}
		{
			const CCallStackMarkerBase& SegmentMarker; // 1854
			int i; // 1857
			IStack_VM_Segment_Marker::GetStackMarker(); // 1854
			CTier0_Stack_VM_Segment_Marker::Next(); // 1872
		}
		{
			CFiber* pIterFiber; // 1889
			CFiber::GetPrevFiberInSameThread(); // 1894
		}
	}
} /* size: 1072, variables: 1 */

// <0048D0ED> tier0/stacktools.cpp:2113
int _GetCallStackForThread(ThreadId_t threadId, void** pReturnAddressesOut, int nArrayCount, int nSkipCount)
{
} /* size: 86 */

// <0048CF0A> tier0/stacktools.cpp:2172
// variables: 3
// function calls: 3
int _GetCallStack_Fast(void** pReturnAddressesOut, int nArrayCount, int nSkipCount)
{
	{
		CFiber* pTopFiber; // 2179
		StackContext_StartData_t* pStackContextList; // 2180
		{
			int nFrames; // 2359
			Min<int>(const int& val1,
				const int& val2);  // 264
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 270
			V_backtrace(void** pFrames,
					int nFramesCount,
					int nSkipCount);  // 2359
		}
	}
} /* size: 148 */

// <0048CEC1> tier0/stacktools.cpp:2380
int _GetCallStackForThread_Fast(ThreadId_t threadId, void** pReturnAddressesOut, int nArrayCount, int nSkipCount)
{
} /* size: 0 */

// <0048CE9D> tier0/stacktools.cpp:2406
void* GetInstructionPointer(void)
{
} /* size: 14 */

// <0048CE5E> tier0/stacktools.cpp:2435
int GetCallStack_Fast_NoModification(void** pReturnAddressesOut, int nArrayCount, int nSkipCount)
{
} /* size: 0 */

// <0048CA9B> tier0/stacktools.cpp:2579
// function calls: 2
uint GetAddressTranslationData(const void* pAddress, char* pModuleNameOut, uint nMaxModuleNameLength, char* pSymbolNameOut, uint nMaxSymbolNameLength, char* pFileNameOut, uint nMaxFileNameLength, uint* pLineNumberOut, uint* pSymbolDisplacementOut, uint* pLineDisplacementOut)
{
	CastPtrToUint64(const void* p); // 2582
	CStackTranslationHelper_Local::GetTranslationData(
				uint64 pAddress,
				char* pModuleNameOut,
				uint nMaxModuleNameLength,
				char* pSymbolNameOut,
				uint nMaxSymbolNameLength,
				char* pFileNameOut,
				uint nMaxFileNameLength,
				uint* pLineNumberOut,
				uint* pSymbolDisplacementOut,
				uint* pLineDisplacementOut);  // 2582
} /* size: 298, inline expansions: 2 (119 bytes) */

// <0048C3DC> tier0/stacktools.cpp:2649
// variables: 2
void StackMarkup_SaveState(StackMarkupState_t& saveDest)
{
	CFiber* pCurrentFiber; // 2652
	{
		Tier0FiberLocals_t& fiberLocals; // 2657
	}
} /* size: 75, variables: 1 */

// <0048C34A> tier0/stacktools.cpp:2679
// variables: 2
void StackMarkup_RestoreState(const StackMarkupState_t& restoreSource)
{
	CFiber* pCurrentFiber; // 2682
	{
		Tier0FiberLocals_t& fiberLocals; // 2685
	}
} /* size: 75, variables: 1 */

// <0048BFA8> tier0/stacktools.cpp:2716
// variables: 2
// function calls: 3
int Plat_GetRawCallStack(void** pReturnAddressesOut, int nArrayCount, int nSkipCount)
{
	const char   __FUNCTION__; // 65487
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2718
	}
	Min<int>(const int& val1,
		const int& val2);  // 264
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 270
	V_backtrace(void** pFrames,
			int nFramesCount,
			int nSkipCount);  // 2724
} /* size: 0, variables: 1, inline expansions: 3 (104 bytes) */

