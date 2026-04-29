
//
// sbox/steam/steamcallresult.h
//
//	referenced by: libengine2.so
//
//	functions: 30
//	classes: 3
//

// <01F4E72B> sbox/steam/steamcallresult.h:4
void ISteamCallResult::ISteamCallResult()
{
} /* size: 0 */

// <01F4E70F> sbox/steam/steamcallresult.h:4
inline void ISteamCallResult::ISteamCallResult()
{
} /* size: 0 */

// <01F44459> sbox/steam/steamcallresult.h:4
// member functions: 16
// member variable: 1
// vtable entries: 2
// class size: 8
class ISteamCallResult {
	void ISteamCallResult(ISteamCallResult* , ISteamCallResult& );
	void ISteamCallResult(ISteamCallResult* , const ISteamCallResult& );
	void ISteamCallResult(ISteamCallResult* );
	void ~ISteamCallResult(ISteamCallResult* );
	ISteamCallResult& operator=(ISteamCallResult* , ISteamCallResult& );
	ISteamCallResult& operator=(ISteamCallResult* , const ISteamCallResult& );
	int ()(void) * * _vptr.ISteamCallResult; /* 0 8 */
	/* sbox/steam/steamcallresult.h:8 */
	virtual bool IsWaiting(ISteamCallResult* );
	/* sbox/steam/steamcallresult.h:9 */
	virtual bool IsComplete(ISteamCallResult* );
	void ISteamCallResult(class ISteamCallResult *, class ISteamCallResult &); /* linkage=_ZN16ISteamCallResultC4EOS_ */
	void ISteamCallResult(class ISteamCallResult *, const class ISteamCallResult  &); /* linkage=_ZN16ISteamCallResultC4ERKS_ */
	void ISteamCallResult(class ISteamCallResult *); /* linkage=_ZN16ISteamCallResultC4Ev */
	void ~ISteamCallResult(class ISteamCallResult *); /* linkage=_ZN16ISteamCallResultD4Ev */
	class ISteamCallResult & operator=(class ISteamCallResult *, class ISteamCallResult &); /* linkage=_ZN16ISteamCallResultaSEOS_ */
	class ISteamCallResult & operator=(class ISteamCallResult *, const class ISteamCallResult  &); /* linkage=_ZN16ISteamCallResultaSERKS_ */
	virtual bool IsWaiting(class ISteamCallResult *); /* linkage=_ZN16ISteamCallResult9IsWaitingEv */
	virtual bool IsComplete(class ISteamCallResult *); /* linkage=_ZN16ISteamCallResult10IsCompleteEv */
};

// <01F43CC5> sbox/steam/steamcallresult.h:16
// member functions: 24
// member variables: 7
// vtable entries: 5
// class size: 56
class SteamCallResult<SteamInventoryRequestPricesResult_t> : CCallbackBase, public ISteamCallResult {
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
public:
	/* class ISteamCallResult <ancestor>; */ /* 16 8 */
	SteamCallResult<SteamInventoryRequestPricesResult_t>& operator=(SteamCallResult<SteamInventoryRequestPricesResult_t>* , const SteamCallResult<SteamInventoryRequestPricesResult_t>& );
	void SteamCallResult(SteamCallResult<SteamInventoryRequestPricesResult_t>* , const SteamCallResult<SteamInventoryRequestPricesResult_t>& );
private:
	SteamAPICall_t m_call; /* 24 8 */
	bool m_IsWaiting; /* 32 1 */
	bool m_IsComplete; /* 33 1 */
	SteamInventoryRequestPricesResult_t Result; /* 36 8 */
	/* sbox/steam/steamcallresult.h:26 */
	virtual bool IsWaiting(SteamCallResult<SteamInventoryRequestPricesResult_t>* );
	/* sbox/steam/steamcallresult.h:27 */
	virtual bool IsComplete(SteamCallResult<SteamInventoryRequestPricesResult_t>* );
	/* sbox/steam/steamcallresult.h:29 */
	void SteamCallResult(SteamCallResult<SteamInventoryRequestPricesResult_t>* );
	/* sbox/steam/steamcallresult.h:34 */
	void ~SteamCallResult(SteamCallResult<SteamInventoryRequestPricesResult_t>* );
	/* sbox/steam/steamcallresult.h:39 */
	void SetGameserverFlag(SteamCallResult<SteamInventoryRequestPricesResult_t>* );
	/* sbox/steam/steamcallresult.h:44 */
	SteamCallResult<SteamInventoryRequestPricesResult_t>& operator=(SteamCallResult<SteamInventoryRequestPricesResult_t>* , const SteamAPICall_t& );
	/* sbox/steam/steamcallresult.h:59 */
	void Reset(SteamCallResult<SteamInventoryRequestPricesResult_t>* );
	/* sbox/steam/steamcallresult.h:74 */
	virtual void Run(SteamCallResult<SteamInventoryRequestPricesResult_t>* , void* );
	/* sbox/steam/steamcallresult.h:79 */
	virtual void Run(SteamCallResult<SteamInventoryRequestPricesResult_t>* , void* , bool, SteamAPICall_t);
	/* sbox/steam/steamcallresult.h:91 */
	virtual int GetCallbackSizeBytes(SteamCallResult<SteamInventoryRequestPricesResult_t>* );
	SteamAPICall_t m_hAPICall; /* 48 8 */
	class SteamCallResult<SteamInventoryRequestPricesResult_t> & operator=(class SteamCallResult<SteamInventoryRequestPricesResult_t> *, const class SteamCallResult<SteamInventoryRequestPricesResult_t>  &); /* linkage=_ZN15SteamCallResultI35SteamInventoryRequestPricesResult_tEaSERKS1_ */
	void SteamCallResult(class SteamCallResult<SteamInventoryRequestPricesResult_t> *, const class SteamCallResult<SteamInventoryRequestPricesResult_t>  &); /* linkage=_ZN15SteamCallResultI35SteamInventoryRequestPricesResult_tEC4ERKS1_ */
	/* <1f626b3> sbox/steam/steamcallresult.h:26 */
	virtual bool IsWaiting(class SteamCallResult<SteamInventoryRequestPricesResult_t> *); /* linkage=_ZN15SteamCallResultI35SteamInventoryRequestPricesResult_tE9IsWaitingEv */
	/* <1f62635> sbox/steam/steamcallresult.h:27 */
	virtual bool IsComplete(class SteamCallResult<SteamInventoryRequestPricesResult_t> *); /* linkage=_ZN15SteamCallResultI35SteamInventoryRequestPricesResult_tE10IsCompleteEv */
	void SteamCallResult(class SteamCallResult<SteamInventoryRequestPricesResult_t> *); /* linkage=_ZN15SteamCallResultI35SteamInventoryRequestPricesResult_tEC4Ev */
	void ~SteamCallResult(class SteamCallResult<SteamInventoryRequestPricesResult_t> *); /* linkage=_ZN15SteamCallResultI35SteamInventoryRequestPricesResult_tED4Ev */
	void SetGameserverFlag(class SteamCallResult<SteamInventoryRequestPricesResult_t> *); /* linkage=_ZN15SteamCallResultI35SteamInventoryRequestPricesResult_tE17SetGameserverFlagEv */
	class SteamCallResult<SteamInventoryRequestPricesResult_t> & operator=(class SteamCallResult<SteamInventoryRequestPricesResult_t> *, const SteamAPICall_t  &); /* linkage=_ZN15SteamCallResultI35SteamInventoryRequestPricesResult_tEaSERKy */
	void Reset(class SteamCallResult<SteamInventoryRequestPricesResult_t> *); /* linkage=_ZN15SteamCallResultI35SteamInventoryRequestPricesResult_tE5ResetEv */
	virtual void Run(class SteamCallResult<SteamInventoryRequestPricesResult_t> *, void *); /* linkage=_ZN15SteamCallResultI35SteamInventoryRequestPricesResult_tE3RunEPv */
	/* <1f627f1> sbox/steam/steamcallresult.h:79 */
	virtual void Run(class SteamCallResult<SteamInventoryRequestPricesResult_t> *, void *, bool, SteamAPICall_t); /* linkage=_ZN15SteamCallResultI35SteamInventoryRequestPricesResult_tE3RunEPvby */
	virtual int GetCallbackSizeBytes(class SteamCallResult<SteamInventoryRequestPricesResult_t> *); /* linkage=_ZN15SteamCallResultI35SteamInventoryRequestPricesResult_tE20GetCallbackSizeBytesEv */
};

// <01F43F65> sbox/steam/steamcallresult.h:16
// member functions: 24
// member variables: 7
// vtable entries: 5
// class size: 64
class SteamCallResult<SteamInventoryStartPurchaseResult_t> : CCallbackBase, public ISteamCallResult {
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
public:
	/* class ISteamCallResult <ancestor>; */ /* 16 8 */
	SteamCallResult<SteamInventoryStartPurchaseResult_t>& operator=(SteamCallResult<SteamInventoryStartPurchaseResult_t>* , const SteamCallResult<SteamInventoryStartPurchaseResult_t>& );
	void SteamCallResult(SteamCallResult<SteamInventoryStartPurchaseResult_t>* , const SteamCallResult<SteamInventoryStartPurchaseResult_t>& );
private:
	SteamAPICall_t m_call; /* 24 8 */
	bool m_IsWaiting; /* 32 1 */
	bool m_IsComplete; /* 33 1 */
	SteamInventoryStartPurchaseResult_t Result; /* 36 20 */
	/* sbox/steam/steamcallresult.h:26 */
	virtual bool IsWaiting(SteamCallResult<SteamInventoryStartPurchaseResult_t>* );
	/* sbox/steam/steamcallresult.h:27 */
	virtual bool IsComplete(SteamCallResult<SteamInventoryStartPurchaseResult_t>* );
	/* sbox/steam/steamcallresult.h:29 */
	void SteamCallResult(SteamCallResult<SteamInventoryStartPurchaseResult_t>* );
	/* sbox/steam/steamcallresult.h:34 */
	void ~SteamCallResult(SteamCallResult<SteamInventoryStartPurchaseResult_t>* );
	/* sbox/steam/steamcallresult.h:39 */
	void SetGameserverFlag(SteamCallResult<SteamInventoryStartPurchaseResult_t>* );
	/* sbox/steam/steamcallresult.h:44 */
	SteamCallResult<SteamInventoryStartPurchaseResult_t>& operator=(SteamCallResult<SteamInventoryStartPurchaseResult_t>* , const SteamAPICall_t& );
	/* sbox/steam/steamcallresult.h:59 */
	void Reset(SteamCallResult<SteamInventoryStartPurchaseResult_t>* );
	/* sbox/steam/steamcallresult.h:74 */
	virtual void Run(SteamCallResult<SteamInventoryStartPurchaseResult_t>* , void* );
	/* sbox/steam/steamcallresult.h:79 */
	virtual void Run(SteamCallResult<SteamInventoryStartPurchaseResult_t>* , void* , bool, SteamAPICall_t);
	/* sbox/steam/steamcallresult.h:91 */
	virtual int GetCallbackSizeBytes(SteamCallResult<SteamInventoryStartPurchaseResult_t>* );
	SteamAPICall_t m_hAPICall; /* 56 8 */
	class SteamCallResult<SteamInventoryStartPurchaseResult_t> & operator=(class SteamCallResult<SteamInventoryStartPurchaseResult_t> *, const class SteamCallResult<SteamInventoryStartPurchaseResult_t>  &); /* linkage=_ZN15SteamCallResultI35SteamInventoryStartPurchaseResult_tEaSERKS1_ */
	void SteamCallResult(class SteamCallResult<SteamInventoryStartPurchaseResult_t> *, const class SteamCallResult<SteamInventoryStartPurchaseResult_t>  &); /* linkage=_ZN15SteamCallResultI35SteamInventoryStartPurchaseResult_tEC4ERKS1_ */
	/* <1f6265f> sbox/steam/steamcallresult.h:26 */
	virtual bool IsWaiting(class SteamCallResult<SteamInventoryStartPurchaseResult_t> *); /* linkage=_ZN15SteamCallResultI35SteamInventoryStartPurchaseResult_tE9IsWaitingEv */
	/* <1f62689> sbox/steam/steamcallresult.h:27 */
	virtual bool IsComplete(class SteamCallResult<SteamInventoryStartPurchaseResult_t> *); /* linkage=_ZN15SteamCallResultI35SteamInventoryStartPurchaseResult_tE10IsCompleteEv */
	void SteamCallResult(class SteamCallResult<SteamInventoryStartPurchaseResult_t> *); /* linkage=_ZN15SteamCallResultI35SteamInventoryStartPurchaseResult_tEC4Ev */
	void ~SteamCallResult(class SteamCallResult<SteamInventoryStartPurchaseResult_t> *); /* linkage=_ZN15SteamCallResultI35SteamInventoryStartPurchaseResult_tED4Ev */
	void SetGameserverFlag(class SteamCallResult<SteamInventoryStartPurchaseResult_t> *); /* linkage=_ZN15SteamCallResultI35SteamInventoryStartPurchaseResult_tE17SetGameserverFlagEv */
	class SteamCallResult<SteamInventoryStartPurchaseResult_t> & operator=(class SteamCallResult<SteamInventoryStartPurchaseResult_t> *, const SteamAPICall_t  &); /* linkage=_ZN15SteamCallResultI35SteamInventoryStartPurchaseResult_tEaSERKy */
	void Reset(class SteamCallResult<SteamInventoryStartPurchaseResult_t> *); /* linkage=_ZN15SteamCallResultI35SteamInventoryStartPurchaseResult_tE5ResetEv */
	virtual void Run(class SteamCallResult<SteamInventoryStartPurchaseResult_t> *, void *); /* linkage=_ZN15SteamCallResultI35SteamInventoryStartPurchaseResult_tE3RunEPv */
	/* <1f62749> sbox/steam/steamcallresult.h:79 */
	virtual void Run(class SteamCallResult<SteamInventoryStartPurchaseResult_t> *, void *, bool, SteamAPICall_t); /* linkage=_ZN15SteamCallResultI35SteamInventoryStartPurchaseResult_tE3RunEPvby */
	virtual int GetCallbackSizeBytes(class SteamCallResult<SteamInventoryStartPurchaseResult_t> *); /* linkage=_ZN15SteamCallResultI35SteamInventoryStartPurchaseResult_tE20GetCallbackSizeBytesEv */
};

// <01F626B3> sbox/steam/steamcallresult.h:26
void SteamCallResult<SteamInventoryRequestPricesResult_t>::IsWaiting()
{
} /* size: 9 */

// <01F6265F> sbox/steam/steamcallresult.h:26
void SteamCallResult<SteamInventoryStartPurchaseResult_t>::IsWaiting()
{
} /* size: 9 */

// <01F4E55C> sbox/steam/steamcallresult.h:26
inline void SteamCallResult<SteamInventoryStartPurchaseResult_t>::IsWaiting()
{
} /* size: 0 */

// <01F4A945> sbox/steam/steamcallresult.h:26
inline void SteamCallResult<SteamInventoryRequestPricesResult_t>::IsWaiting()
{
} /* size: 0 */

// <01F62689> sbox/steam/steamcallresult.h:27
void SteamCallResult<SteamInventoryStartPurchaseResult_t>::IsComplete()
{
} /* size: 9 */

// <01F62635> sbox/steam/steamcallresult.h:27
void SteamCallResult<SteamInventoryRequestPricesResult_t>::IsComplete()
{
} /* size: 9 */

// <01F4E6A1> sbox/steam/steamcallresult.h:27
inline void SteamCallResult<SteamInventoryRequestPricesResult_t>::IsComplete()
{
} /* size: 0 */

// <01F4AA3F> sbox/steam/steamcallresult.h:27
inline void SteamCallResult<SteamInventoryStartPurchaseResult_t>::IsComplete()
{
} /* size: 0 */

// <01F4E6F8> sbox/steam/steamcallresult.h:29
void SteamCallResult<SteamInventoryRequestPricesResult_t>::SteamCallResult()
{
} /* size: 0 */

// <01F4E6DF> sbox/steam/steamcallresult.h:29
inline void SteamCallResult<SteamInventoryRequestPricesResult_t>::SteamCallResult()
{
} /* size: 0 */

// <01F4E619> sbox/steam/steamcallresult.h:29
void SteamCallResult<SteamInventoryStartPurchaseResult_t>::SteamCallResult()
{
} /* size: 0 */

// <01F4E600> sbox/steam/steamcallresult.h:29
inline void SteamCallResult<SteamInventoryStartPurchaseResult_t>::SteamCallResult()
{
} /* size: 0 */

// <01F4A4BB> sbox/steam/steamcallresult.h:34
// function call: 1
void SteamCallResult<SteamInventoryRequestPricesResult_t>::~SteamCallResult()
{
	SteamCallResult<SteamInventoryRequestPricesResult_t>::Reset(); // 36
} /* size: 37, inline expansions: 1 (14 bytes) */

// <01F4A4A2> sbox/steam/steamcallresult.h:34
inline void SteamCallResult<SteamInventoryRequestPricesResult_t>::~SteamCallResult()
{
} /* size: 0 */

// <01F4A43B> sbox/steam/steamcallresult.h:34
// function call: 1
void SteamCallResult<SteamInventoryStartPurchaseResult_t>::~SteamCallResult()
{
	SteamCallResult<SteamInventoryStartPurchaseResult_t>::Reset(); // 36
} /* size: 37, inline expansions: 1 (14 bytes) */

// <01F4A422> sbox/steam/steamcallresult.h:34
inline void SteamCallResult<SteamInventoryStartPurchaseResult_t>::~SteamCallResult()
{
} /* size: 0 */

// <01F4E6BA> sbox/steam/steamcallresult.h:44
inline void SteamCallResult<SteamInventoryRequestPricesResult_t>::operator=(const SteamAPICall_t& rhs)
{
} /* size: 0 */

// <01F4E575> sbox/steam/steamcallresult.h:44
inline void SteamCallResult<SteamInventoryStartPurchaseResult_t>::operator=(const SteamAPICall_t& rhs)
{
} /* size: 0 */

// <01F4E688> sbox/steam/steamcallresult.h:59
inline void SteamCallResult<SteamInventoryRequestPricesResult_t>::Reset()
{
} /* size: 0 */

// <01F4D073> sbox/steam/steamcallresult.h:59
inline void SteamCallResult<SteamInventoryStartPurchaseResult_t>::Reset()
{
} /* size: 0 */

// <01F4AAD5> sbox/steam/steamcallresult.h:74
void SteamCallResult<SteamInventoryStartPurchaseResult_t>::Run(void* pvParam)
{
} /* size: 18 */

// <01F4A9DB> sbox/steam/steamcallresult.h:74
void SteamCallResult<SteamInventoryRequestPricesResult_t>::Run(void* pvParam)
{
} /* size: 18 */

// <01F627F1> sbox/steam/steamcallresult.h:79
// variable: 1
// function call: 1
void SteamCallResult<SteamInventoryRequestPricesResult_t>::Run(void* pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall)
{
	SteamInventoryRequestPricesResult_t* param; // 85
	SteamCallResult<SteamInventoryRequestPricesResult_t>::Run(
		void* pvParam,
		bool bIOFailure,
		SteamAPICall_t hSteamAPICall);  // 79
} /* size: 35, variables: 1, inline expansions: 1 (24 bytes) */

// <01F62749> sbox/steam/steamcallresult.h:79
// variable: 1
// function call: 1
void SteamCallResult<SteamInventoryStartPurchaseResult_t>::Run(void* pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall)
{
	SteamInventoryStartPurchaseResult_t* param; // 85
	SteamCallResult<SteamInventoryStartPurchaseResult_t>::Run(
		void* pvParam,
		bool bIOFailure,
		SteamAPICall_t hSteamAPICall);  // 79
} /* size: 49, variables: 1, inline expansions: 1 (38 bytes) */

// <01F4AA86> sbox/steam/steamcallresult.h:79
// variable: 1
inline void SteamCallResult<SteamInventoryStartPurchaseResult_t>::Run(void* pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall)
{
	SteamInventoryStartPurchaseResult_t* param; // 85
} /* size: 0, variables: 1 */

// <01F4A98C> sbox/steam/steamcallresult.h:79
// variable: 1
inline void SteamCallResult<SteamInventoryRequestPricesResult_t>::Run(void* pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall)
{
	SteamInventoryRequestPricesResult_t* param; // 85
} /* size: 0, variables: 1 */

// <01F4AA58> sbox/steam/steamcallresult.h:91
void SteamCallResult<SteamInventoryStartPurchaseResult_t>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <01F4A95E> sbox/steam/steamcallresult.h:91
void SteamCallResult<SteamInventoryRequestPricesResult_t>::GetCallbackSizeBytes()
{
} /* size: 10 */

