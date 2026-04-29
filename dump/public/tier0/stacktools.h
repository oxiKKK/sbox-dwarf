
//
// public/tier0/stacktools.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libtier0.so
//
//	functions: 36
//	classes: 16
//	struct: 1
//

// <0283EC4C> ../public/tier0/stacktools.h:55
int Plat_GetRawCallStack(void* *, int, int)
{
} /* size: 0 */

// <0229AA9A> ../public/tier0/stacktools.h:173
int _GetCallStack_Fast(void* *, int, int)
{
} /* size: 0 */

// <000F14B9> ../public/tier0/stacktools.h:186
int _GetCallStack(void* *, int, int)
{
} /* size: 0 */

// <02247DE3> ../public/tier0/stacktools.h:216
// member variables: 2
// class size: 1,032
class CCallStackCapture_Base {
	uint32 nValidEntries; /* 0 4 */
	void * pStack[128]; /* 8 1024 */
};

// <02247E21> ../public/tier0/stacktools.h:224
// member functions: 12
// member variable: 1
// class size: 1,032
class CCallStackCapture : public CCallStackCapture_Base {
public:
	/* class CCallStackCapture_Base <ancestor>; */ /* 0 1032 */
	/* ../public/tier0/stacktools.h:227 */
	void CCallStackCapture(CCallStackCapture* , FN_GetCallStack, uint32, uint32);
	/* ../public/tier0/stacktools.h:228 */
	void Capture(CCallStackCapture* , FN_GetCallStack, uint32, uint32);
	/* ../public/tier0/stacktools.h:230 */
	void CCallStackCapture(CCallStackCapture* , const CCallStackCapture& );
	/* ../public/tier0/stacktools.h:239 */
	void CCallStackCapture(CCallStackCapture* , const CCallStackCapture* );
	/* ../public/tier0/stacktools.h:255 */
	CCallStackCapture& operator=(CCallStackCapture* , const CCallStackCapture& );
	/* ../public/tier0/stacktools.h:265 */
	void CCallStackCapture(CCallStackCapture* , const void* const* , uint32);
	void CCallStackCapture(class CCallStackCapture *, FN_GetCallStack, uint32, uint32); /* linkage=_ZN17CCallStackCaptureC4EPFiPPviiEjj */
	void Capture(class CCallStackCapture *, FN_GetCallStack, uint32, uint32); /* linkage=_ZN17CCallStackCapture7CaptureEPFiPPviiEjj */
	void CCallStackCapture(class CCallStackCapture *, const class CCallStackCapture  &); /* linkage=_ZN17CCallStackCaptureC4ERKS_ */
	void CCallStackCapture(class CCallStackCapture *, const class CCallStackCapture  *); /* linkage=_ZN17CCallStackCaptureC4EPKS_ */
	class CCallStackCapture & operator=(class CCallStackCapture *, const class CCallStackCapture  &); /* linkage=_ZN17CCallStackCaptureaSERKS_ */
	void CCallStackCapture(class CCallStackCapture *, const void  * const *, uint32); /* linkage=_ZN17CCallStackCaptureC4EPKPKvj */
};

// <044561B8> ../public/tier0/stacktools.h:227
void CCallStackCapture::CCallStackCapture(FN_GetCallStack GetStackFunction, uint32 nSkipCalls, uint32 nMaxCapture)
{
} /* size: 0 */

// <000FAA89> ../public/tier0/stacktools.h:283
// member functions: 6
// member variables: 2
// class size: 16
class CCallStackMarkerBase {
	/* ../public/tier0/stacktools.h:286 */
	bool TestMarkerAgainstCapturedStackIndex(const CCallStackMarkerBase* , const void* const* , int, int);
	/* ../public/tier0/stacktools.h:287 */
	bool IsEnabled(const CCallStackMarkerBase* );
	/* ../public/tier0/stacktools.h:288 */
	bool IsDeferred(const CCallStackMarkerBase* );
	void * m_pMarker; /* 0 8 */
	uintp m_nRecursionDepth; /* 8 8 */
	bool TestMarkerAgainstCapturedStackIndex(const class CCallStackMarkerBase  *, const void  * const *, int, int); /* linkage=_ZNK20CCallStackMarkerBase35TestMarkerAgainstCapturedStackIndexEPKPKvii */
	bool IsEnabled(const class CCallStackMarkerBase  *); /* linkage=_ZNK20CCallStackMarkerBase9IsEnabledEv */
	bool IsDeferred(const class CCallStackMarkerBase  *); /* linkage=_ZNK20CCallStackMarkerBase10IsDeferredEv */
};

// <0445B6E3> ../public/tier0/stacktools.h:287
inline void CCallStackMarkerBase::IsEnabled()
{
} /* size: 0 */

// <0048556B> ../public/tier0/stacktools.h:294
// member functions: 2
// member variable: 1
// class size: 16
class CCallStackMarker : public CCallStackMarkerBase {
public:
	/* class CCallStackMarkerBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/stacktools.h:299 */
	void CCallStackMarker(CCallStackMarker* , bool);
	void CCallStackMarker(class CCallStackMarker *, bool); /* linkage=_ZN16CCallStackMarkerC4Eb */
};

// <004855AD> ../public/tier0/stacktools.h:303
// member functions: 2
// member variable: 1
// class size: 16
class CRecursionCallStackMarker : public CCallStackMarkerBase {
public:
	/* class CCallStackMarkerBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/stacktools.h:306 */
	void CRecursionCallStackMarker(CRecursionCallStackMarker* , bool);
	void CRecursionCallStackMarker(class CRecursionCallStackMarker *, bool); /* linkage=_ZN25CRecursionCallStackMarkerC4Eb */
};

// <02247FF3> ../public/tier0/stacktools.h:310
// member functions: 6
// member variable: 1
// class size: 16
class CDeferredCallStackMarker : public CCallStackMarkerBase {
public:
	/* class CCallStackMarkerBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/stacktools.h:313 */
	void CDeferredCallStackMarker(CDeferredCallStackMarker* );
	/* ../public/tier0/stacktools.h:319 */
	void Insert(CDeferredCallStackMarker* );
	/* ../public/tier0/stacktools.h:320 */
	void Remove(CDeferredCallStackMarker* );
	void CDeferredCallStackMarker(class CDeferredCallStackMarker *); /* linkage=_ZN24CDeferredCallStackMarkerC4Ev */
	void Insert(class CDeferredCallStackMarker *); /* linkage=_ZN24CDeferredCallStackMarker6InsertEv */
	void Remove(class CDeferredCallStackMarker *); /* linkage=_ZN24CDeferredCallStackMarker6RemoveEv */
};

// <0445B6CC> ../public/tier0/stacktools.h:313
void CDeferredCallStackMarker::CDeferredCallStackMarker()
{
} /* size: 0 */

// <0445B6B3> ../public/tier0/stacktools.h:313
inline void CDeferredCallStackMarker::CDeferredCallStackMarker()
{
} /* size: 0 */

// <0224806D> ../public/tier0/stacktools.h:329
// member functions: 6
// member variables: 2
// class size: 24
class CDeferredCallStackMarkerProxyTarget : public CCallStackMarkerBase {
public:
	/* class CCallStackMarkerBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/stacktools.h:332 */
	void CDeferredCallStackMarkerProxyTarget(CDeferredCallStackMarkerProxyTarget* );
	/* ../public/tier0/stacktools.h:333 */
	void ~CDeferredCallStackMarkerProxyTarget(CDeferredCallStackMarkerProxyTarget* );
	/* ../public/tier0/stacktools.h:338 */
	void Detach(CDeferredCallStackMarkerProxyTarget* );
private:
	CDeferredCallStackMarkerProxy * m_pAttachedSource; /* 16 8 */
	void CDeferredCallStackMarkerProxyTarget(class CDeferredCallStackMarkerProxyTarget *); /* linkage=_ZN35CDeferredCallStackMarkerProxyTargetC4Ev */
	void ~CDeferredCallStackMarkerProxyTarget(class CDeferredCallStackMarkerProxyTarget *); /* linkage=_ZN35CDeferredCallStackMarkerProxyTargetD4Ev */
	void Detach(class CDeferredCallStackMarkerProxyTarget *); /* linkage=_ZN35CDeferredCallStackMarkerProxyTarget6DetachEv */
};

// <0445B69C> ../public/tier0/stacktools.h:332
void CDeferredCallStackMarkerProxyTarget::CDeferredCallStackMarkerProxyTarget()
{
} /* size: 0 */

// <0445B683> ../public/tier0/stacktools.h:332
inline void CDeferredCallStackMarkerProxyTarget::CDeferredCallStackMarkerProxyTarget()
{
} /* size: 0 */

// <0445B66C> ../public/tier0/stacktools.h:333
void CDeferredCallStackMarkerProxyTarget::~CDeferredCallStackMarkerProxyTarget()
{
} /* size: 0 */

// <0445B653> ../public/tier0/stacktools.h:333
inline void CDeferredCallStackMarkerProxyTarget::~CDeferredCallStackMarkerProxyTarget()
{
} /* size: 0 */

// <022480F6> ../public/tier0/stacktools.h:345
// member functions: 8
// member variables: 2
// class size: 24
class CDeferredCallStackMarkerProxy : public CCallStackMarkerBase {
public:
	/* class CCallStackMarkerBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/stacktools.h:348 */
	void CDeferredCallStackMarkerProxy(CDeferredCallStackMarkerProxy* );
	/* ../public/tier0/stacktools.h:355 */
	void ~CDeferredCallStackMarkerProxy(CDeferredCallStackMarkerProxy* );
	/* ../public/tier0/stacktools.h:363 */
	void Attach(CDeferredCallStackMarkerProxy* , CDeferredCallStackMarkerProxyTarget& );
	/* ../public/tier0/stacktools.h:376 */
	void Detach(CDeferredCallStackMarkerProxy* );
private:
	CDeferredCallStackMarkerProxyTarget * m_pAttachedDest; /* 16 8 */
	void CDeferredCallStackMarkerProxy(class CDeferredCallStackMarkerProxy *); /* linkage=_ZN29CDeferredCallStackMarkerProxyC4Ev */
	void ~CDeferredCallStackMarkerProxy(class CDeferredCallStackMarkerProxy *); /* linkage=_ZN29CDeferredCallStackMarkerProxyD4Ev */
	void Attach(class CDeferredCallStackMarkerProxy *, class CDeferredCallStackMarkerProxyTarget &); /* linkage=_ZN29CDeferredCallStackMarkerProxy6AttachER35CDeferredCallStackMarkerProxyTarget */
	void Detach(class CDeferredCallStackMarkerProxy *); /* linkage=_ZN29CDeferredCallStackMarkerProxy6DetachEv */
};

// <0445B63C> ../public/tier0/stacktools.h:348
void CDeferredCallStackMarkerProxy::CDeferredCallStackMarkerProxy()
{
} /* size: 0 */

// <0445B623> ../public/tier0/stacktools.h:348
inline void CDeferredCallStackMarkerProxy::CDeferredCallStackMarkerProxy()
{
} /* size: 0 */

// <022C0B4F> ../public/tier0/stacktools.h:355
void CDeferredCallStackMarkerProxy::~CDeferredCallStackMarkerProxy()
{
} /* size: 0 */

// <022C0B36> ../public/tier0/stacktools.h:355
inline void CDeferredCallStackMarkerProxy::~CDeferredCallStackMarkerProxy()
{
} /* size: 0 */

// <0445B5D3> ../public/tier0/stacktools.h:363
// variables: 2
inline void CDeferredCallStackMarkerProxy::Attach(CDeferredCallStackMarkerProxyTarget& destMarker)
{
	const char   __FUNCTION__; // 19946
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 365
	}
} /* size: 0, variables: 1 */

// <0445B57B> ../public/tier0/stacktools.h:376
// variables: 2
inline void CDeferredCallStackMarkerProxy::Detach()
{
	const char   __FUNCTION__; // 19946
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 378
	}
} /* size: 0, variables: 1 */

// <022C0AF3> ../public/tier0/stacktools.h:376
// variables: 2
inline void CDeferredCallStackMarkerProxy::Detach()
{
	const char   __FUNCTION__; // 19001
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 378
	}
} /* size: 0, variables: 1 */

// <0445B55E> ../public/tier0/stacktools.h:396
inline void CDeferredCallStackMarkerProxyTarget::Detach()
{
} /* size: 0 */

// <022481AD> ../public/tier0/stacktools.h:405
// member variable: 1
// class size: 16
class CCallStackMarker_SmallerScope : public CCallStackMarkerBase {
public:
	/* class CCallStackMarkerBase <ancestor>; */ /* 0 16 */
};

// <00485680> ../public/tier0/stacktools.h:410
// member functions: 2
// member variable: 1
// class size: 16
class CCallStackMarker_ThisLine : public CCallStackMarker_SmallerScope {
public:
	/* class CCallStackMarker_SmallerScope <ancestor>; */ /* 0 16 */
	/* ../public/tier0/stacktools.h:413 */
	void CCallStackMarker_ThisLine(CCallStackMarker_ThisLine* , bool);
	void CCallStackMarker_ThisLine(class CCallStackMarker_ThisLine *, bool); /* linkage=_ZN25CCallStackMarker_ThisLineC4Eb */
};

// <044500C0> ../public/tier0/stacktools.h:416
// member functions: 2
// member variable: 1
// class size: 16
class CCallStackMarker_Manual : public CCallStackMarker_SmallerScope {
public:
	/* class CCallStackMarker_SmallerScope <ancestor>; */ /* 0 16 */
	/* ../public/tier0/stacktools.h:419 */
	void CCallStackMarker_Manual(CCallStackMarker_Manual* , void* , uintp);
	void CCallStackMarker_Manual(class CCallStackMarker_Manual *, void *, uintp); /* linkage=_ZN23CCallStackMarker_ManualC4EPvy */
};

// <0445B53D> ../public/tier0/stacktools.h:419
void CCallStackMarker_Manual::CCallStackMarker_Manual(void* pMarkedAddress, uintp nRecursionDepth)
{
} /* size: 0 */

// <0445B50A> ../public/tier0/stacktools.h:419
inline void CCallStackMarker_Manual::CCallStackMarker_Manual(void* pMarkedAddress, uintp nRecursionDepth)
{
} /* size: 0 */

// <022481CA> ../public/tier0/stacktools.h:427
// member functions: 10
// member variables: 4
// class size: 40
class CStackTop_Base {
	/* ../public/tier0/stacktools.h:430 */
	void ChangeMarker(CStackTop_Base* , const CCallStackMarkerBase& );
	/* ../public/tier0/stacktools.h:431 */
	const CCallStackMarkerBase& GetMarker(CStackTop_Base* );
	/* ../public/tier0/stacktools.h:440 */
	CStackTop_Base* GetCurrentTop(bool);
protected:
	/* ../public/tier0/stacktools.h:443 */
	void CStackTop_Base(CStackTop_Base* );
	/* ../public/tier0/stacktools.h:444 */
	void ~CStackTop_Base(CStackTop_Base* );
	CStackTop_Base * m_pPrevTop; /* 0 8 */
	CCallStackMarkerBase m_ReplacementMarker; /* 8 16 */
	const void * const * m_pParentStackTrace; /* 24 8 */
	int m_nParentStackTraceLength; /* 32 4 */
	void ChangeMarker(class CStackTop_Base *, const class CCallStackMarkerBase  &); /* linkage=_ZN14CStackTop_Base12ChangeMarkerERK20CCallStackMarkerBase */
	const class CCallStackMarkerBase  & GetMarker(class CStackTop_Base *); /* linkage=_ZN14CStackTop_Base9GetMarkerEv */
	class CStackTop_Base * GetCurrentTop(bool); /* linkage=_ZN14CStackTop_Base13GetCurrentTopEb */
	void CStackTop_Base(class CStackTop_Base *); /* linkage=_ZN14CStackTop_BaseC4Ev */
	void ~CStackTop_Base(class CStackTop_Base *); /* linkage=_ZN14CStackTop_BaseD4Ev */
};

// <04456074> ../public/tier0/stacktools.h:443
void CStackTop_Base::CStackTop_Base()
{
} /* size: 0 */

// <04456036> ../public/tier0/stacktools.h:444
void CStackTop_Base::~CStackTop_Base()
{
} /* size: 0 */

// <004857C6> ../public/tier0/stacktools.h:487
// member functions: 8
// member variable: 1
// class size: 40
class CStackTop_CopyParentStack : public CStackTop_Base {
public:
	/* class CStackTop_Base <ancestor>; */ /* 0 40 */
	/* ../public/tier0/stacktools.h:491 */
	void CStackTop_CopyParentStack(CStackTop_CopyParentStack* , const void* const* , int, const CCallStackMarkerBase& );
	/* ../public/tier0/stacktools.h:492 */
	void CStackTop_CopyParentStack(CStackTop_CopyParentStack* , const CCallStackCapture* , const CCallStackMarkerBase& );
	/* ../public/tier0/stacktools.h:493 */
	void ~CStackTop_CopyParentStack(CStackTop_CopyParentStack* );
	/* ../public/tier0/stacktools.h:494 */
	void ChangeCopiedStack(CStackTop_CopyParentStack* , const void* const* , int);
	void CStackTop_CopyParentStack(class CStackTop_CopyParentStack *, const void  * const *, int, const class CCallStackMarkerBase  &); /* linkage=_ZN25CStackTop_CopyParentStackC4EPKPKviRK20CCallStackMarkerBase */
	void CStackTop_CopyParentStack(class CStackTop_CopyParentStack *, const class CCallStackCapture  *, const class CCallStackMarkerBase  &); /* linkage=_ZN25CStackTop_CopyParentStackC4EPK17CCallStackCaptureRK20CCallStackMarkerBase */
	void ~CStackTop_CopyParentStack(class CStackTop_CopyParentStack *); /* linkage=_ZN25CStackTop_CopyParentStackD4Ev */
	void ChangeCopiedStack(class CStackTop_CopyParentStack *, const void  * const *, int); /* linkage=_ZN25CStackTop_CopyParentStack17ChangeCopiedStackEPKPKvi */
};

// <00485880> ../public/tier0/stacktools.h:498
// member functions: 10
// member variable: 1
// class size: 40
class CStackTop_ReferenceParentStack : public CStackTop_Base {
public:
	/* class CStackTop_Base <ancestor>; */ /* 0 40 */
	/* ../public/tier0/stacktools.h:502 */
	void CStackTop_ReferenceParentStack(CStackTop_ReferenceParentStack* , const void* const* , int, const CCallStackMarkerBase& );
	/* ../public/tier0/stacktools.h:503 */
	void CStackTop_ReferenceParentStack(CStackTop_ReferenceParentStack* , const CCallStackCapture* , const CCallStackMarkerBase& );
	/* ../public/tier0/stacktools.h:504 */
	void ~CStackTop_ReferenceParentStack(CStackTop_ReferenceParentStack* );
	/* ../public/tier0/stacktools.h:506 */
	void ReleaseParentStackReferences(CStackTop_ReferenceParentStack* );
	/* ../public/tier0/stacktools.h:507 */
	void ChangeReferencedStack(CStackTop_ReferenceParentStack* , const void* const* , int);
	void CStackTop_ReferenceParentStack(class CStackTop_ReferenceParentStack *, const void  * const *, int, const class CCallStackMarkerBase  &); /* linkage=_ZN30CStackTop_ReferenceParentStackC4EPKPKviRK20CCallStackMarkerBase */
	void CStackTop_ReferenceParentStack(class CStackTop_ReferenceParentStack *, const class CCallStackCapture  *, const class CCallStackMarkerBase  &); /* linkage=_ZN30CStackTop_ReferenceParentStackC4EPK17CCallStackCaptureRK20CCallStackMarkerBase */
	void ~CStackTop_ReferenceParentStack(class CStackTop_ReferenceParentStack *); /* linkage=_ZN30CStackTop_ReferenceParentStackD4Ev */
	void ReleaseParentStackReferences(class CStackTop_ReferenceParentStack *); /* linkage=_ZN30CStackTop_ReferenceParentStack28ReleaseParentStackReferencesEv */
	void ChangeReferencedStack(class CStackTop_ReferenceParentStack *, const void  * const *, int); /* linkage=_ZN30CStackTop_ReferenceParentStack21ChangeReferencedStackEPKPKvi */
};

// <004CB399> ../public/tier0/stacktools.h:502
void CStackTop_ReferenceParentStack::CStackTop_ReferenceParentStack(const void* const* pParentStackTrace, int nParentStackTraceLength, const CCallStackMarkerBase& marker)
{
} /* size: 0 */

// <004CB37D> ../public/tier0/stacktools.h:504
void CStackTop_ReferenceParentStack::~CStackTop_ReferenceParentStack()
{
} /* size: 0 */

// <0045ECEA> ../public/tier0/stacktools.h:553
// member functions: 10
// member variables: 3
// vtable entry: 1
// class size: 32
class IStack_VM_Segment_Marker {
	void IStack_VM_Segment_Marker(IStack_VM_Segment_Marker* , const IStack_VM_Segment_Marker& );
	int ()(void) * * _vptr.IStack_VM_Segment_Marker; /* 0 8 */
	/* tier0/stackhelpers_virtualmachine_capture.cpp:91 */
	void IStack_VM_Segment_Marker(IStack_VM_Segment_Marker* , const CCallStackMarkerBase& );
	/* tier0/stackhelpers_virtualmachine_capture.cpp:111 */
	virtual void ~IStack_VM_Segment_Marker(IStack_VM_Segment_Marker* );
	/* ../public/tier0/stacktools.h:560 */
	const CCallStackMarkerBase& GetStackMarker(const IStack_VM_Segment_Marker* );
	/* ../public/tier0/stacktools.h:561 */
	virtual int StitchVMSegment(IStack_VM_Segment_Marker* , void** , int, int, int);
private:
	IStack_VM_Segment_Marker * m_pPrevSegment; /* 8 8 */
	CCallStackMarkerBase m_StitchMarker; /* 16 16 */
	void IStack_VM_Segment_Marker(class IStack_VM_Segment_Marker *, const class IStack_VM_Segment_Marker  &); /* linkage=_ZN24IStack_VM_Segment_MarkerC4ERKS_ */
	void IStack_VM_Segment_Marker(class IStack_VM_Segment_Marker *, const class CCallStackMarkerBase  &); /* linkage=_ZN24IStack_VM_Segment_MarkerC4ERK20CCallStackMarkerBase */
	virtual void ~IStack_VM_Segment_Marker(class IStack_VM_Segment_Marker *); /* linkage=_ZN24IStack_VM_Segment_MarkerD4Ev */
	const class CCallStackMarkerBase  & GetStackMarker(const class IStack_VM_Segment_Marker  *); /* linkage=_ZNK24IStack_VM_Segment_Marker14GetStackMarkerEv */
	virtual int StitchVMSegment(class IStack_VM_Segment_Marker *, void * *, int, int, int); /* linkage=_ZN24IStack_VM_Segment_Marker15StitchVMSegmentEPPviii */
};

// <00492B93> ../public/tier0/stacktools.h:560
inline void IStack_VM_Segment_Marker::GetStackMarker()
{
} /* size: 0 */

// <0045E849> ../public/tier0/stacktools.h:591
// member functions: 30
// member variables: 2
// class size: 16
class CVirtualMachineCallStackTranslationEncoder {
	/* ../public/tier0/stacktools.h:594 */
	void CVirtualMachineCallStackTranslationEncoder(CVirtualMachineCallStackTranslationEncoder* , const char* );
	/* ../public/tier0/stacktools.h:595 */
	void ~CVirtualMachineCallStackTranslationEncoder(CVirtualMachineCallStackTranslationEncoder* );
	/* ../public/tier0/stacktools.h:598 */
	void* EncodeAsNativePointer(CVirtualMachineCallStackTranslationEncoder* , const char* , const char* , uint32);
	/* ../public/tier0/stacktools.h:601 */
	uint DecodeFromNativePointer(CVirtualMachineCallStackTranslationEncoder* , const void* , char* , uint, char* , uint, int* );
	/* ../public/tier0/stacktools.h:604 */
	uint64 GetVMID(CVirtualMachineCallStackTranslationEncoder* );
	/* ../public/tier0/stacktools.h:605 */
	const char* GetName(CVirtualMachineCallStackTranslationEncoder* );
	/* ../public/tier0/stacktools.h:606 */
	uint64 GetMappingBaseAddress(CVirtualMachineCallStackTranslationEncoder* );
	/* ../public/tier0/stacktools.h:607 */
	uint32 GetMappingSize(CVirtualMachineCallStackTranslationEncoder* );
	/* ../public/tier0/stacktools.h:608 */
	uint GetCurrentIndexCount(CVirtualMachineCallStackTranslationEncoder* );
	/* ../public/tier0/stacktools.h:609 */
	uint64 GetIndexBitMask(CVirtualMachineCallStackTranslationEncoder* );
	/* ../public/tier0/stacktools.h:610 */
	uint GetIndexBitShift(CVirtualMachineCallStackTranslationEncoder* );
	/* ../public/tier0/stacktools.h:611 */
	uint64 GetLineOffsetBitMask(CVirtualMachineCallStackTranslationEncoder* );
	/* ../public/tier0/stacktools.h:612 */
	uint GetLineOffsetBitShift(CVirtualMachineCallStackTranslationEncoder* );
	/* ../public/tier0/stacktools.h:613 */
	uint64 GetLineOffsetPostShiftedSignBitMask(CVirtualMachineCallStackTranslationEncoder* );
	/* ../public/tier0/stacktools.h:615 */
	void EnumerateEncodingIndices(CVirtualMachineCallStackTranslationEncoder* , FN_VMEncodingIndexEnumerationCallback, void* );
private:
	CVirtualMachineCallStackTranslationEncoder * m_pNext; /* 0 8 */
	VirtualMachineCallStackTranslationEncoderInternalData_t * m_pInternalData; /* 8 8 */
	void CVirtualMachineCallStackTranslationEncoder(class CVirtualMachineCallStackTranslationEncoder *, const char  *); /* linkage=_ZN42CVirtualMachineCallStackTranslationEncoderC4EPKc */
	void ~CVirtualMachineCallStackTranslationEncoder(class CVirtualMachineCallStackTranslationEncoder *); /* linkage=_ZN42CVirtualMachineCallStackTranslationEncoderD4Ev */
	void * EncodeAsNativePointer(class CVirtualMachineCallStackTranslationEncoder *, const char  *, const char  *, uint32); /* linkage=_ZN42CVirtualMachineCallStackTranslationEncoder21EncodeAsNativePointerEPKcS1_j */
	uint DecodeFromNativePointer(class CVirtualMachineCallStackTranslationEncoder *, const void  *, char *, uint, char *, uint, int *); /* linkage=_ZN42CVirtualMachineCallStackTranslationEncoder23DecodeFromNativePointerEPKvPcjS2_jPi */
	uint64 GetVMID(class CVirtualMachineCallStackTranslationEncoder *); /* linkage=_ZN42CVirtualMachineCallStackTranslationEncoder7GetVMIDEv */
	const char  * GetName(class CVirtualMachineCallStackTranslationEncoder *); /* linkage=_ZN42CVirtualMachineCallStackTranslationEncoder7GetNameEv */
	uint64 GetMappingBaseAddress(class CVirtualMachineCallStackTranslationEncoder *); /* linkage=_ZN42CVirtualMachineCallStackTranslationEncoder21GetMappingBaseAddressEv */
	uint32 GetMappingSize(class CVirtualMachineCallStackTranslationEncoder *); /* linkage=_ZN42CVirtualMachineCallStackTranslationEncoder14GetMappingSizeEv */
	uint GetCurrentIndexCount(class CVirtualMachineCallStackTranslationEncoder *); /* linkage=_ZN42CVirtualMachineCallStackTranslationEncoder20GetCurrentIndexCountEv */
	uint64 GetIndexBitMask(class CVirtualMachineCallStackTranslationEncoder *); /* linkage=_ZN42CVirtualMachineCallStackTranslationEncoder15GetIndexBitMaskEv */
	uint GetIndexBitShift(class CVirtualMachineCallStackTranslationEncoder *); /* linkage=_ZN42CVirtualMachineCallStackTranslationEncoder16GetIndexBitShiftEv */
	uint64 GetLineOffsetBitMask(class CVirtualMachineCallStackTranslationEncoder *); /* linkage=_ZN42CVirtualMachineCallStackTranslationEncoder20GetLineOffsetBitMaskEv */
	uint GetLineOffsetBitShift(class CVirtualMachineCallStackTranslationEncoder *); /* linkage=_ZN42CVirtualMachineCallStackTranslationEncoder21GetLineOffsetBitShiftEv */
	uint64 GetLineOffsetPostShiftedSignBitMask(class CVirtualMachineCallStackTranslationEncoder *); /* linkage=_ZN42CVirtualMachineCallStackTranslationEncoder35GetLineOffsetPostShiftedSignBitMaskEv */
	void EnumerateEncodingIndices(class CVirtualMachineCallStackTranslationEncoder *, FN_VMEncodingIndexEnumerationCallback, void *); /* linkage=_ZN42CVirtualMachineCallStackTranslationEncoder24EnumerateEncodingIndicesEPFbPS_jPKcS2_jPvES3_ */
};

// <0283EC1F> ../public/tier0/stacktools.h:635
int TranslateStackInfo(const void* const *, int, char *, int, const char *)
{
} /* size: 0 */

// <004758CE> ../public/tier0/stacktools.h:640
bool GetFileAndLineFromAddress(const void *, char *, uint32, uint32 &, uint32 *)
{
} /* size: 0 */

// <00475901> ../public/tier0/stacktools.h:641
bool GetSymbolNameFromAddress(const void *, char *, uint32, uint32 *)
{
} /* size: 0 */

// <00475929> ../public/tier0/stacktools.h:642
bool GetModuleNameFromAddress(const void *, char *, uint32)
{
} /* size: 0 */

// <0000D1F6> ../public/tier0/stacktools.h:655
void StackToolsNotify_LoadedModule(const char *, PlatModule_t, void *, uint32)
{
} /* size: 0 */

// <003807E2> ../public/tier0/stacktools.h:656
void StackToolsNotify_UnloadedModule(PlatModule_t)
{
} /* size: 0 */

// <00380928> ../public/tier0/stacktools.h:658
void StackToolsNotify_BeginLoadingModule(void)
{
} /* size: 0 */

// <0038091C> ../public/tier0/stacktools.h:659
void StackToolsNotify_EndLoadingModule(void)
{
} /* size: 0 */

// <00475773> ../public/tier0/stacktools.h:662
void StackTools_VerifyLoadedModuleMappings(void)
{
} /* size: 0 */

// <00475755> ../public/tier0/stacktools.h:674
uint32 StackTools_EnumerateKnownLoadedModules(FN_ModuleEnumerationCallback, void *)
{
} /* size: 0 */

// <004859FB> ../public/tier0/stacktools.h:702
// member function: 1
// member variables: 4
// struct size: 32
struct StackMarkupState_t {
	CStackTop_Base * pStackTop; /* 0 8 */
	CCallStackMarkerBase * pDeferredMarkers; /* 8 8 */
	IStack_Annotation * pStackAnnotation; /* 16 8 */
	IStack_VM_Segment_Marker * pStackVMSegmentMarker; /* 24 8 */
	/* ../public/tier0/stacktools.h:715 */
	void Clear(StackMarkupState_t* );
};

