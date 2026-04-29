
//
// public/tier0/receipt.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 22
//	classes: 4
//

// <000F6C0B> ../public/tier0/receipt.h:12
// member functions: 5
// member variable: 1
// class size: 16
class CReceipt : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* ../public/tier0/receipt.h:15 */
	void CReceipt(CReceipt* );
	/* ../public/tier0/receipt.h:16 */
	virtual void ~CReceipt(CReceipt* );
	void CReceipt(class CReceipt *); /* linkage=_ZN8CReceiptC4Ev */
	virtual void ~CReceipt(class CReceipt *); /* linkage=_ZN8CReceiptD4Ev */
	void CReceipt(class CReceipt *, const class CReceipt  &); /* linkage=_ZN8CReceiptC4ERKS_ */
};

// <015CDFE6> ../public/tier0/receipt.h:15
void CReceipt::CReceipt()
{
} /* size: 0 */

// <015CDFCD> ../public/tier0/receipt.h:15
inline void CReceipt::CReceipt()
{
} /* size: 0 */

// <065817F0> ../public/tier0/receipt.h:16
void CReceipt::~CReceipt()
{
} /* size: 0 */

// <065817C0> ../public/tier0/receipt.h:16
inline void CReceipt::~CReceipt()
{
} /* size: 0 */

// <00DF0F59> ../public/tier0/receipt.h:27
// member functions: 6
// member variables: 4
// class size: 48
class CUnregisterReceipt<CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>, void (CAnimationGraphInstance::*)(IAnimGraphSequenceFinishedListener*), IAnimGraphSequenceFinishedListener*> : public CReceipt {
public:
	/* class CReceipt <ancestor>; */ /* 0 16 */
	void CUnregisterReceipt(CUnregisterReceipt<CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>, void (CAnimationGraphInstance::*)(IAnimGraphSeq, const CUnregisterReceipt<CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>, void (CAnimationGraphInstance::*)(IAnimGr);
	/* ../public/tier0/receipt.h:30 */
	void CUnregisterReceipt(CUnregisterReceipt<CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>, void (CAnimationGraphInstance::*)(IAnimGraphSeq, CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>, void ()(CAnimationGraphInstance* , IAnimGraphSequenceFinishedListener* ) CAnimationGraphInstance::*, IAnimGraphSequenceFinishedListener* );
	/* ../public/tier0/receipt.h:32 */
	virtual void ~CUnregisterReceipt(CUnregisterReceipt<CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>, void (CAnimationGraphInstance::*)(IAnimGraphSeq);
private:
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor> m_obj; /* 16 8 */
	void ()(class CAnimationGraphInstance *, class IAnimGraphSequenceFinishedListener *) CAnimationGraphInstance::* m_func; /* 24 8 */
	IAnimGraphSequenceFinishedListener * m_param; /* 40 8 */
	void CUnregisterReceipt(class CUnregisterReceipt<CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>, void (CAnimationGraphInstance::*)(IAnimGraphSeq, const class CUnregisterReceipt<CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>, void (CAnimationGraphInstance::*)(IAnimGr); /* linkage=_ZN18CUnregisterReceiptI9CSmartPtrI23CAnimationGraphInstance17CRefCountAccessorEMS1_FvP34IAnimGraphSequenceFinishedListenerES5_EC4ERKS8_ */
	void CUnregisterReceipt(class CUnregisterReceipt<CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>, void (CAnimationGraphInstance::*)(IAnimGraphSeq, class CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>, void ()(class CAnimationGraphInstance *, class IAnimGraphSequenceFinishedListener *) CAnimationGraphInstance::*, class IAnimGraphSequenceFinishedListener *); /* linkage=_ZN18CUnregisterReceiptI9CSmartPtrI23CAnimationGraphInstance17CRefCountAccessorEMS1_FvP34IAnimGraphSequenceFinishedListenerES5_EC4ES3_S7_S5_ */
	virtual void ~CUnregisterReceipt(class CUnregisterReceipt<CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>, void (CAnimationGraphInstance::*)(IAnimGraphSeq); /* linkage=_ZN18CUnregisterReceiptI9CSmartPtrI23CAnimationGraphInstance17CRefCountAccessorEMS1_FvP34IAnimGraphSequenceFinishedListenerES5_ED4Ev */
};

// <01564650> ../public/tier0/receipt.h:27
// member functions: 3
// member variables: 4
// class size: 48
class CUnregisterReceipt<CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>, void (CAnimGraphDebugReplay::*)(IAnimReplayListener*), IAnimReplayListener*> : public CReceipt {
public:
	/* class CReceipt <ancestor>; */ /* 0 16 */
	void CUnregisterReceipt(CUnregisterReceipt<CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>, void (CAnimGraphDebugReplay::*)(IAnimReplayListen, const CUnregisterReceipt<CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>, void (CAnimGraphDebugReplay::*)(IAnimReplay);
	/* ../public/tier0/receipt.h:30 */
	void CUnregisterReceipt(CUnregisterReceipt<CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>, void (CAnimGraphDebugReplay::*)(IAnimReplayListen, CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>, void ()(CAnimGraphDebugReplay* , IAnimReplayListener* ) CAnimGraphDebugReplay::*, IAnimReplayListener* );
	/* ../public/tier0/receipt.h:32 */
	virtual void ~CUnregisterReceipt(CUnregisterReceipt<CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>, void (CAnimGraphDebugReplay::*)(IAnimReplayListen);
private:
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor> m_obj; /* 16 8 */
	void ()(class CAnimGraphDebugReplay *, class IAnimReplayListener *) CAnimGraphDebugReplay::* m_func; /* 24 8 */
	IAnimReplayListener * m_param; /* 40 8 */
};

// <0157FBE1> ../public/tier0/receipt.h:30
void CUnregisterReceipt<CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>, void (CAnimGraphDebugReplay::::CUnregisterReceipt(CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor> obj, void ()(CAnimGraphDebugReplay *, IAnimReplayListener *) CAnimGraphDebugReplay::* func, IAnimReplayListener* param)
{
} /* size: 0 */

// <0157FBA4> ../public/tier0/receipt.h:30
inline void CUnregisterReceipt<CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>, void (CAnimGraphDebugReplay::::CUnregisterReceipt(CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor> obj, void ()(CAnimGraphDebugReplay *, IAnimReplayListener *) CAnimGraphDebugReplay::* func, IAnimReplayListener* param)
{
} /* size: 0 */

// <00E1027D> ../public/tier0/receipt.h:30
void CUnregisterReceipt<CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>, void (CAnimationGraphInstance::::CUnregisterReceipt(CSmartPtr<CAnimationGraphInstance, CRefCountAccessor> obj, void ()(CAnimationGraphInstance *, IAnimGraphSequenceFinishedListener *) CAnimationGraphInstance::* func, IAnimGraphSequenceFinishedListener* param)
{
} /* size: 0 */

// <00E10240> ../public/tier0/receipt.h:30
inline void CUnregisterReceipt<CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>, void (CAnimationGraphInstance::::CUnregisterReceipt(CSmartPtr<CAnimationGraphInstance, CRefCountAccessor> obj, void ()(CAnimationGraphInstance *, IAnimGraphSequenceFinishedListener *) CAnimationGraphInstance::* func, IAnimGraphSequenceFinishedListener* param)
{
} /* size: 0 */

// <015674F2> ../public/tier0/receipt.h:32
// function calls: 9
void CUnregisterReceipt<CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>, void (CAnimGraphDebugReplay::::~CUnregisterReceipt()(IAnimReplay this)
{
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator!=(
			const CAnimGraphDebugReplay* pOther);  // 34
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator*(); // 36
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphDebugReplay>(CAnimGraphDebugReplay* pObj); // 344
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::~CSmartPtr(); // 38
} /* size: 129, inline expansions: 9 (141 bytes) */

// <0156720D> ../public/tier0/receipt.h:32
// function calls: 13
void CUnregisterReceipt<CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>, void (CAnimGraphDebugReplay::::~CUnregisterReceipt()(IAnimReplay this)
{
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator!=(
			const CAnimGraphDebugReplay* pOther);  // 34
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator*(); // 36
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphDebugReplay>(CAnimGraphDebugReplay* pObj); // 344
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::~CSmartPtr(); // 38
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 16
	CReceipt::~CReceipt(); // 38
	CUnregisterReceipt<CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>, void (CAnimGraphDebugReplay::::~CUnregisterReceipt()(IAnimReplay this); // 38
} /* size: 106, inline expansions: 13 (150 bytes) */

// <015671F4> ../public/tier0/receipt.h:32
inline void CUnregisterReceipt<CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>, void (CAnimGraphDebugReplay::::~CUnregisterReceipt()(IAnimReplay this)
{
} /* size: 0 */

// <00DF6BB6> ../public/tier0/receipt.h:32
// function calls: 9
void CUnregisterReceipt<CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>, void (CAnimationGraphInstance::::~CUnregisterReceipt()(IAnimGr this)
{
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::operator!=(
			const CAnimationGraphInstance* pOther);  // 34
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::operator*(); // 36
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimationGraphInstance>(CAnimationGraphInstance* pObj); // 344
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::~CSmartPtr(); // 38
} /* size: 129, inline expansions: 9 (133 bytes) */

// <00DF68DD> ../public/tier0/receipt.h:32
// function calls: 13
void CUnregisterReceipt<CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>, void (CAnimationGraphInstance::::~CUnregisterReceipt()(IAnimGr this)
{
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::operator!=(
			const CAnimationGraphInstance* pOther);  // 34
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::operator*(); // 36
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimationGraphInstance>(CAnimationGraphInstance* pObj); // 344
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::~CSmartPtr(); // 38
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 16
	CReceipt::~CReceipt(); // 38
	CUnregisterReceipt<CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>, void (CAnimationGraphInstance::::~CUnregisterReceipt()(IAnimGr this); // 38
} /* size: 114, inline expansions: 13 (172 bytes) */

// <00DF68C4> ../public/tier0/receipt.h:32
inline void CUnregisterReceipt<CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>, void (CAnimationGraphInstance::::~CUnregisterReceipt()(IAnimGr this)
{
} /* size: 0 */

// <012FC81B> ../public/tier0/receipt.h:49
// member functions: 6
// member variables: 5
// class size: 64
class CUnregisterReceipt2<CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>, void (CAnimTagManagerInstance::*)(Reflection::ClassID, IAnimTagListener*), Reflection::ClassID, IAnimTagListener*> : public CReceipt {
public:
	/* class CReceipt <ancestor>; */ /* 0 16 */
	void CUnregisterReceipt2(CUnregisterReceipt2<CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>, void (CAnimTagManagerInstance::*)(Reflection::, const CUnregisterReceipt2<CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>, void (CAnimTagManagerInstance::*)(Reflec);
	/* ../public/tier0/receipt.h:52 */
	void CUnregisterReceipt2(CUnregisterReceipt2<CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>, void (CAnimTagManagerInstance::*)(Reflection::, CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>, void ()(CAnimTagManagerInstance* , ClassID, IAnimTagListener* ) CAnimTagManagerInstance::*, ClassID, IAnimTagListener* );
	/* ../public/tier0/receipt.h:54 */
	virtual void ~CUnregisterReceipt2(CUnregisterReceipt2<CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>, void (CAnimTagManagerInstance::*)(Reflection::);
private:
	CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor> m_obj; /* 16 8 */
	void ()(class CAnimTagManagerInstance *, class ClassID, class IAnimTagListener *) CAnimTagManagerInstance::* m_func; /* 24 8 */
	ClassID m_param1; /* 40 16 */
	IAnimTagListener * m_param2; /* 56 8 */
	void CUnregisterReceipt2(class CUnregisterReceipt2<CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>, void (CAnimTagManagerInstance::*)(Reflection::, const class CUnregisterReceipt2<CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>, void (CAnimTagManagerInstance::*)(Reflec); /* linkage=_ZN19CUnregisterReceipt2I9CSmartPtrI23CAnimTagManagerInstance17CRefCountAccessorEMS1_FvN10Reflection7ClassIDEP16IAnimTagListenerES5_S7_EC4ERKSA_ */
	void CUnregisterReceipt2(class CUnregisterReceipt2<CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>, void (CAnimTagManagerInstance::*)(Reflection::, class CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>, void ()(class CAnimTagManagerInstance *, class ClassID, class IAnimTagListener *) CAnimTagManagerInstance::*, class ClassID, class IAnimTagListener *); /* linkage=_ZN19CUnregisterReceipt2I9CSmartPtrI23CAnimTagManagerInstance17CRefCountAccessorEMS1_FvN10Reflection7ClassIDEP16IAnimTagListenerES5_S7_EC4ES3_S9_S5_S7_ */
	virtual void ~CUnregisterReceipt2(class CUnregisterReceipt2<CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>, void (CAnimTagManagerInstance::*)(Reflection::); /* linkage=_ZN19CUnregisterReceipt2I9CSmartPtrI23CAnimTagManagerInstance17CRefCountAccessorEMS1_FvN10Reflection7ClassIDEP16IAnimTagListenerES5_S7_ED4Ev */
};

// <0130A967> ../public/tier0/receipt.h:52
void CUnregisterReceipt2<CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>, void (CAnimTagManagerInstance::::CUnregisterReceipt2(CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor> obj, void ()(CAnimTagManagerInstance *, ClassID, IAnimTagListener *) CAnimTagManagerInstance::* func, ClassID param1, IAnimTagListener* param2)
{
} /* size: 0 */

// <0130A91E> ../public/tier0/receipt.h:52
inline void CUnregisterReceipt2<CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>, void (CAnimTagManagerInstance::::CUnregisterReceipt2(CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor> obj, void ()(CAnimTagManagerInstance *, ClassID, IAnimTagListener *) CAnimTagManagerInstance::* func, ClassID param1, IAnimTagListener* param2)
{
} /* size: 0 */

// <012FF845> ../public/tier0/receipt.h:54
// function calls: 9
void CUnregisterReceipt2<CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>, void (CAnimTagManagerInstance::::~CUnregisterReceipt2()(Reflec this)
{
	CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::operator!=(
			const CAnimTagManagerInstance* pOther);  // 56
	CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::operator*(); // 58
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimTagManagerInstance>(CAnimTagManagerInstance* pObj); // 344
	CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::~CSmartPtr(); // 60
} /* size: 129, inline expansions: 9 (128 bytes) */

// <012FF56C> ../public/tier0/receipt.h:54
// function calls: 13
void CUnregisterReceipt2<CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>, void (CAnimTagManagerInstance::::~CUnregisterReceipt2()(Reflec this)
{
	CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::operator!=(
			const CAnimTagManagerInstance* pOther);  // 56
	CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::operator*(); // 58
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimTagManagerInstance>(CAnimTagManagerInstance* pObj); // 344
	CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::~CSmartPtr(); // 60
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 16
	CReceipt::~CReceipt(); // 60
	CUnregisterReceipt2<CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>, void (CAnimTagManagerInstance::::~CUnregisterReceipt2()(Reflec this); // 60
} /* size: 122, inline expansions: 13 (179 bytes) */

// <012FF553> ../public/tier0/receipt.h:54
inline void CUnregisterReceipt2<CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>, void (CAnimTagManagerInstance::::~CUnregisterReceipt2()(Reflec this)
{
} /* size: 0 */

// <0158447C> ../public/tier0/receipt.h:72
CReceiptPtr MakeUnregisterReceipt<CSmartPtr<CAnimGraphDebugReplay>, void (CAnimGraphDebugReplay::*)(IAnimReplayListener*), IAnimReplayListener*>(CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor> obj, void ()(CAnimGraphDebugReplay *, IAnimReplayListener *) CAnimGraphDebugReplay::* func, IAnimReplayListener* param)
{
} /* size: 0 */

// <00E27E80> ../public/tier0/receipt.h:72
CReceiptPtr MakeUnregisterReceipt<CSmartPtr<CAnimationGraphInstance>, void (CAnimationGraphInstance::*)(IAnimGraphSequenceFinishedListener*), IAnimGraphSequenceFinishedListener*>(CSmartPtr<CAnimationGraphInstance, CRefCountAccessor> obj, void ()(CAnimationGraphInstance *, IAnimGraphSequenceFinishedListener *) CAnimationGraphInstance::* func, IAnimGraphSequenceFinishedListener* param)
{
} /* size: 0 */

// <0130C4AE> ../public/tier0/receipt.h:79
CReceiptPtr MakeUnregisterReceipt<CSmartPtr<CAnimTagManagerInstance>, void (CAnimTagManagerInstance::*)(Reflection::ClassID, IAnimTagListener*), Reflection::ClassID, IAnimTagListener*>(CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor> obj, void ()(CAnimTagManagerInstance *, ClassID, IAnimTagListener *) CAnimTagManagerInstance::* func, ClassID param1, IAnimTagListener* param2)
{
} /* size: 0 */

