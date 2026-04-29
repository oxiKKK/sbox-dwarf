
//
// public/tier0/threadinterlocks.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 149
//	classes: 18
//

// <00005D3E> ../public/tier0/threadinterlocks.h:44
inline void ThreadPause(void)
{
} /* size: 0 */

// <007E0DAC> ../public/tier0/threadinterlocks.h:166
// variable: 1
inline int32 ThreadInterlockedExchange(volatile int32* p, int32 value)
{
	int32 nRet; // 171
} /* size: 0, variables: 1 */

// <00B530AE> ../public/tier0/threadinterlocks.h:198
inline int32 ThreadInterlockedExchangeAdd(volatile int32* p, int32 value)
{
} /* size: 0 */

// <02071CAF> ../public/tier0/threadinterlocks.h:203
inline int32 ThreadInterlockedCompareExchange(volatile int32* p, int32 value, int32 comparand)
{
} /* size: 0 */

// <01FB3173> ../public/tier0/threadinterlocks.h:208
inline bool ThreadInterlockedAssignIf(volatile int32* p, int32 value, int32 comparand)
{
} /* size: 0 */

// <023848CE> ../public/tier0/threadinterlocks.h:215
inline int64 ThreadInterlockedCompareExchange64(volatile int64* p, int64 value, int64 comparand)
{
} /* size: 0 */

// <023848AC> ../public/tier0/threadinterlocks.h:221
inline int64 ThreadInterlockedIncrement64(volatile int64* p)
{
} /* size: 0 */

// <0015E45B> ../public/tier0/threadinterlocks.h:233
// variable: 1
inline int64 ThreadInterlockedExchange64(volatile int64* p, int64 value)
{
	int64 nRet; // 238
} /* size: 0, variables: 1 */

// <0015E42A> ../public/tier0/threadinterlocks.h:265
inline int64 ThreadInterlockedExchangeAdd64(volatile int64* p, int64 value)
{
} /* size: 0 */

// <0015E3E4> ../public/tier0/threadinterlocks.h:271
inline bool ThreadInterlockedAssignIf64(volatile int64* pDest, int64 value, int64 comparand)
{
} /* size: 0 */

// <004E3DA3> ../public/tier0/threadinterlocks.h:278
// variables: 2
inline int128 ThreadInterlockedExchange128(volatile int128* pDest, int128 value)
{
	int128 nOldValue; // 280
	int128 comparand; // 281
} /* size: 0, variables: 2 */

// <01DD1B81> ../public/tier0/threadinterlocks.h:298
// variable: 1
inline bool ThreadInterlockedAssignIf128(volatile int128* pDest, const int128& value, const int128& comparand)
{
	int128 local_comparand; // 302
} /* size: 0, variables: 1 */

// <0015E3AD> ../public/tier0/threadinterlocks.h:415
inline void* ThreadInterlockedExchangePointer(volatile void** p, void* value)
{
} /* size: 0 */

// <02384792> ../public/tier0/threadinterlocks.h:416
inline void* ThreadInterlockedCompareExchangePointer(volatile void** p, void* value, void* comparand)
{
} /* size: 0 */

// <02F2E90B> ../public/tier0/threadinterlocks.h:417
inline bool ThreadInterlockedAssignPointerIf(volatile void** p, void* value, void* comparand)
{
} /* size: 0 */

// <00C51F14> ../public/tier0/threadinterlocks.h:422
inline bool ThreadInterlockedAssignPointerToConstIf(volatile const void** p, const void* value, const void* comparand)
{
} /* size: 0 */

// <00005C79> ../public/tier0/threadinterlocks.h:426
inline unsigned int ThreadInterlockedIncrement(volatile uint32* p)
{
} /* size: 0 */

// <00005C56> ../public/tier0/threadinterlocks.h:427
inline unsigned int ThreadInterlockedDecrement(volatile uint32* p)
{
} /* size: 0 */

// <00005C26> ../public/tier0/threadinterlocks.h:429
inline unsigned int ThreadInterlockedOr(volatile uint32* p, uint32 value)
{
} /* size: 0 */

// <00005BF0> ../public/tier0/threadinterlocks.h:430
inline unsigned int ThreadInterlockedAnd(volatile uint32* p, uint32 value)
{
} /* size: 0 */

// <025BAF64> ../public/tier0/threadinterlocks.h:441
inline bool InterlockedAssignIf<const ICompressorService**>(const ICompressorService *** p, const ICompressorService ** const& value, const ICompressorService ** const& comparand)
{
} /* size: 0 */

// <00409DC0> ../public/tier0/threadinterlocks.h:441
inline bool InterlockedAssignIf<int>(int* p, const int& value, const int& comparand)
{
} /* size: 0 */

// <002A2D4B> ../public/tier0/threadinterlocks.h:441
inline bool InterlockedAssignIf<ConstantBufferHandle_t__*>(ConstantBufferHandle_t__** p, ConstantBufferHandle_t__* const& value, ConstantBufferHandle_t__* const& comparand)
{
} /* size: 0 */

// <0017943D> ../public/tier0/threadinterlocks.h:441
inline bool InterlockedAssignIf<unsigned char*>(unsigned char** p, unsigned char* const& value, unsigned char* const& comparand)
{
} /* size: 0 */

// <01DD1B35> ../public/tier0/threadinterlocks.h:476
inline bool ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest, const InterlockedPointerX2SizedInt_t& value, const InterlockedPointerX2SizedInt_t& comperand)
{
} /* size: 0 */

// <00024331> ../public/tier0/threadinterlocks.h:559
// member functions: 80
// member variable: 1
// class size: 4
class CInterlockedIntT<int, 4> {
	/* ../public/tier0/threadinterlocks.h:562 */
	void CInterlockedIntT(CInterlockedIntT<int, 4>* );
	/* ../public/tier0/threadinterlocks.h:563 */
	void CInterlockedIntT(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:565 */
	int GetRaw(const CInterlockedIntT<int, 4>* );
	/* ../public/tier0/threadinterlocks.h:567 */
	int operator()(const CInterlockedIntT<int, 4>* );
	/* ../public/tier0/threadinterlocks.h:568 */
	int operator int(const CInterlockedIntT<int, 4>* );
	/* ../public/tier0/threadinterlocks.h:570 */
	bool operator!(const CInterlockedIntT<int, 4>* );
	/* ../public/tier0/threadinterlocks.h:571 */
	bool operator==(const CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:572 */
	bool operator!=(const CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:574 */
	int operator++(CInterlockedIntT<int, 4>* );
	/* ../public/tier0/threadinterlocks.h:582 */
	int operator++(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:584 */
	int operator--(CInterlockedIntT<int, 4>* );
	/* ../public/tier0/threadinterlocks.h:592 */
	int operator--(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:594 */
	bool AssignIf(CInterlockedIntT<int, 4>* , int, int);
	/* ../public/tier0/threadinterlocks.h:605 */
	int AtomicSet(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:614 */
	int InterlockedExchange(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:616 */
	int InterlockedOr(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:625 */
	void operator|=(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:627 */
	int InterlockedAnd(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:636 */
	void operator&=(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:638 */
	int operator=(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:652 */
	void SetRaw(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:658 */
	int AtomicAdd(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:667 */
	void operator+=(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:675 */
	void operator-=(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:677 */
	void operator*=(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:678 */
	void operator/=(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:679 */
	void operator^=(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:680 */
	void operator>>=(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:681 */
	void operator<<=(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:682 */
	void operator%=(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:684 */
	int operator+(const CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:685 */
	int operator-(const CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:686 */
	int operator*(const CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:687 */
	int operator/(const CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:688 */
	int operator|(const CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:689 */
	int operator&(const CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:690 */
	int operator^(const CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:691 */
	int operator%(const CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:693 */
	void Maximize(CInterlockedIntT<int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:694 */
	void Minimize(CInterlockedIntT<int, 4>* , int);
private:
	volatile int m_value; /* 0 4 */
	void CInterlockedIntT(class CInterlockedIntT<int, 4> *); /* linkage=_ZN16CInterlockedIntTIiLm4EEC4Ev */
	void CInterlockedIntT(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEC4Ei */
	int GetRaw(const class CInterlockedIntT<int, 4>  *); /* linkage=_ZNK16CInterlockedIntTIiLm4EE6GetRawEv */
	int operator()(const class CInterlockedIntT<int, 4>  *); /* linkage=_ZNK16CInterlockedIntTIiLm4EEclEv */
	int operator int(const class CInterlockedIntT<int, 4>  *); /* linkage=_ZNK16CInterlockedIntTIiLm4EEcviEv */
	bool operator!(const class CInterlockedIntT<int, 4>  *); /* linkage=_ZNK16CInterlockedIntTIiLm4EEntEv */
	bool operator==(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EEeqEi */
	bool operator!=(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EEneEi */
	int operator++(class CInterlockedIntT<int, 4> *); /* linkage=_ZN16CInterlockedIntTIiLm4EEppEv */
	int operator++(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEppEi */
	int operator--(class CInterlockedIntT<int, 4> *); /* linkage=_ZN16CInterlockedIntTIiLm4EEmmEv */
	int operator--(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEmmEi */
	bool AssignIf(class CInterlockedIntT<int, 4> *, int, int); /* linkage=_ZN16CInterlockedIntTIiLm4EE8AssignIfEii */
	int AtomicSet(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EE9AtomicSetEi */
	int InterlockedExchange(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EE19InterlockedExchangeEi */
	int InterlockedOr(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EE13InterlockedOrEi */
	void operator|=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEoREi */
	int InterlockedAnd(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EE14InterlockedAndEi */
	void operator&=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEaNEi */
	int operator=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEaSEi */
	void SetRaw(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EE6SetRawEi */
	int AtomicAdd(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EE9AtomicAddEi */
	void operator+=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEpLEi */
	void operator-=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEmIEi */
	void operator*=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEmLEi */
	void operator/=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEdVEi */
	void operator^=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEeOEi */
	void operator>>=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EErSEi */
	void operator<<=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EElSEi */
	void operator%=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EErMEi */
	int operator+(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EEplEi */
	int operator-(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EEmiEi */
	int operator*(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EEmlEi */
	int operator/(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EEdvEi */
	int operator|(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EEorEi */
	int operator&(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EEanEi */
	int operator^(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EEeoEi */
	int operator%(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EErmEi */
	void Maximize(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EE8MaximizeEi */
	void Minimize(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EE8MinimizeEi */
} __attribute__((__aligned__(4)));

// <0006D534> ../public/tier0/threadinterlocks.h:559
// member functions: 80
// member variable: 1
// class size: 4
class CInterlockedIntT<unsigned int, 4> {
	/* ../public/tier0/threadinterlocks.h:562 */
	void CInterlockedIntT(CInterlockedIntT<unsigned int, 4>* );
	/* ../public/tier0/threadinterlocks.h:563 */
	void CInterlockedIntT(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:565 */
	unsigned int GetRaw(const CInterlockedIntT<unsigned int, 4>* );
	/* ../public/tier0/threadinterlocks.h:567 */
	unsigned int operator()(const CInterlockedIntT<unsigned int, 4>* );
	/* ../public/tier0/threadinterlocks.h:568 */
	unsigned int operator unsigned int(const CInterlockedIntT<unsigned int, 4>* );
	/* ../public/tier0/threadinterlocks.h:570 */
	bool operator!(const CInterlockedIntT<unsigned int, 4>* );
	/* ../public/tier0/threadinterlocks.h:571 */
	bool operator==(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:572 */
	bool operator!=(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:574 */
	unsigned int operator++(CInterlockedIntT<unsigned int, 4>* );
	/* ../public/tier0/threadinterlocks.h:582 */
	unsigned int operator++(CInterlockedIntT<unsigned int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:584 */
	unsigned int operator--(CInterlockedIntT<unsigned int, 4>* );
	/* ../public/tier0/threadinterlocks.h:592 */
	unsigned int operator--(CInterlockedIntT<unsigned int, 4>* , int);
	/* ../public/tier0/threadinterlocks.h:594 */
	bool AssignIf(CInterlockedIntT<unsigned int, 4>* , unsigned int, unsigned int);
	/* ../public/tier0/threadinterlocks.h:605 */
	unsigned int AtomicSet(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:614 */
	unsigned int InterlockedExchange(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:616 */
	unsigned int InterlockedOr(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:625 */
	void operator|=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:627 */
	unsigned int InterlockedAnd(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:636 */
	void operator&=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:638 */
	unsigned int operator=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:652 */
	void SetRaw(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:658 */
	unsigned int AtomicAdd(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:667 */
	void operator+=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:675 */
	void operator-=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:677 */
	void operator*=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:678 */
	void operator/=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:679 */
	void operator^=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:680 */
	void operator>>=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:681 */
	void operator<<=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:682 */
	void operator%=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:684 */
	unsigned int operator+(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:685 */
	unsigned int operator-(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:686 */
	unsigned int operator*(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:687 */
	unsigned int operator/(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:688 */
	unsigned int operator|(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:689 */
	unsigned int operator&(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:690 */
	unsigned int operator^(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:691 */
	unsigned int operator%(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:693 */
	void Maximize(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:694 */
	void Minimize(CInterlockedIntT<unsigned int, 4>* , unsigned int);
private:
	volatile unsigned int m_value; /* 0 4 */
	void CInterlockedIntT(class CInterlockedIntT<unsigned int, 4> *); /* linkage=_ZN16CInterlockedIntTIjLm4EEC4Ev */
	void CInterlockedIntT(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EEC4Ej */
	unsigned int GetRaw(const class CInterlockedIntT<unsigned int, 4>  *); /* linkage=_ZNK16CInterlockedIntTIjLm4EE6GetRawEv */
	unsigned int operator()(const class CInterlockedIntT<unsigned int, 4>  *); /* linkage=_ZNK16CInterlockedIntTIjLm4EEclEv */
	unsigned int operator unsigned int(const class CInterlockedIntT<unsigned int, 4>  *); /* linkage=_ZNK16CInterlockedIntTIjLm4EEcvjEv */
	bool operator!(const class CInterlockedIntT<unsigned int, 4>  *); /* linkage=_ZNK16CInterlockedIntTIjLm4EEntEv */
	bool operator==(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EEeqEj */
	bool operator!=(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EEneEj */
	unsigned int operator++(class CInterlockedIntT<unsigned int, 4> *); /* linkage=_ZN16CInterlockedIntTIjLm4EEppEv */
	unsigned int operator++(class CInterlockedIntT<unsigned int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIjLm4EEppEi */
	unsigned int operator--(class CInterlockedIntT<unsigned int, 4> *); /* linkage=_ZN16CInterlockedIntTIjLm4EEmmEv */
	unsigned int operator--(class CInterlockedIntT<unsigned int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIjLm4EEmmEi */
	bool AssignIf(class CInterlockedIntT<unsigned int, 4> *, unsigned int, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EE8AssignIfEjj */
	unsigned int AtomicSet(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EE9AtomicSetEj */
	unsigned int InterlockedExchange(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EE19InterlockedExchangeEj */
	unsigned int InterlockedOr(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EE13InterlockedOrEj */
	void operator|=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EEoREj */
	unsigned int InterlockedAnd(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EE14InterlockedAndEj */
	void operator&=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EEaNEj */
	unsigned int operator=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EEaSEj */
	void SetRaw(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EE6SetRawEj */
	unsigned int AtomicAdd(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EE9AtomicAddEj */
	void operator+=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EEpLEj */
	void operator-=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EEmIEj */
	void operator*=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EEmLEj */
	void operator/=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EEdVEj */
	void operator^=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EEeOEj */
	void operator>>=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EErSEj */
	void operator<<=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EElSEj */
	void operator%=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EErMEj */
	unsigned int operator+(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EEplEj */
	unsigned int operator-(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EEmiEj */
	unsigned int operator*(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EEmlEj */
	unsigned int operator/(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EEdvEj */
	unsigned int operator|(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EEorEj */
	unsigned int operator&(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EEanEj */
	unsigned int operator^(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EEeoEj */
	unsigned int operator%(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EErmEj */
	void Maximize(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EE8MaximizeEj */
	void Minimize(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EE8MinimizeEj */
} __attribute__((__aligned__(4)));

// <01F98D54> ../public/tier0/threadinterlocks.h:559
// member functions: 120
// member variable: 1
// class size: 8
class CInterlockedIntT<long long int, 8> {
	/* ../public/tier0/threadinterlocks.h:562 */
	void CInterlockedIntT(CInterlockedIntT<long long int, 8>* );
	/* ../public/tier0/threadinterlocks.h:563 */
	void CInterlockedIntT(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:565 */
	long long int GetRaw(const CInterlockedIntT<long long int, 8>* );
	/* ../public/tier0/threadinterlocks.h:567 */
	long long int operator()(const CInterlockedIntT<long long int, 8>* );
	/* ../public/tier0/threadinterlocks.h:568 */
	long long int operator long long int(const CInterlockedIntT<long long int, 8>* );
	/* ../public/tier0/threadinterlocks.h:570 */
	bool operator!(const CInterlockedIntT<long long int, 8>* );
	/* ../public/tier0/threadinterlocks.h:571 */
	bool operator==(const CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:572 */
	bool operator!=(const CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:574 */
	long long int operator++(CInterlockedIntT<long long int, 8>* );
	/* ../public/tier0/threadinterlocks.h:582 */
	long long int operator++(CInterlockedIntT<long long int, 8>* , int);
	/* ../public/tier0/threadinterlocks.h:584 */
	long long int operator--(CInterlockedIntT<long long int, 8>* );
	/* ../public/tier0/threadinterlocks.h:592 */
	long long int operator--(CInterlockedIntT<long long int, 8>* , int);
	/* ../public/tier0/threadinterlocks.h:594 */
	bool AssignIf(CInterlockedIntT<long long int, 8>* , long long int, long long int);
	/* ../public/tier0/threadinterlocks.h:605 */
	long long int AtomicSet(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:614 */
	long long int InterlockedExchange(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:616 */
	long long int InterlockedOr(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:625 */
	void operator|=(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:627 */
	long long int InterlockedAnd(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:636 */
	void operator&=(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:638 */
	long long int operator=(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:652 */
	void SetRaw(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:658 */
	long long int AtomicAdd(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:667 */
	void operator+=(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:675 */
	void operator-=(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:677 */
	void operator*=(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:678 */
	void operator/=(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:679 */
	void operator^=(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:680 */
	void operator>>=(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:681 */
	void operator<<=(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:682 */
	void operator%=(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:684 */
	long long int operator+(const CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:685 */
	long long int operator-(const CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:686 */
	long long int operator*(const CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:687 */
	long long int operator/(const CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:688 */
	long long int operator|(const CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:689 */
	long long int operator&(const CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:690 */
	long long int operator^(const CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:691 */
	long long int operator%(const CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:693 */
	void Maximize(CInterlockedIntT<long long int, 8>* , long long int);
	/* ../public/tier0/threadinterlocks.h:694 */
	void Minimize(CInterlockedIntT<long long int, 8>* , long long int);
private:
	volatile long long int m_value; /* 0 8 */
	void CInterlockedIntT(class CInterlockedIntT<long long unsigned int, 8> *); /* linkage=_ZN16CInterlockedIntTIyLm8EEC4Ev */
	void CInterlockedIntT(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EEC4Ey */
	long long unsigned int GetRaw(const class CInterlockedIntT<long long unsigned int, 8>  *); /* linkage=_ZNK16CInterlockedIntTIyLm8EE6GetRawEv */
	long long unsigned int operator()(const class CInterlockedIntT<long long unsigned int, 8>  *); /* linkage=_ZNK16CInterlockedIntTIyLm8EEclEv */
	long long unsigned int operator long long unsigned int(const class CInterlockedIntT<long long unsigned int, 8>  *); /* linkage=_ZNK16CInterlockedIntTIyLm8EEcvyEv */
	bool operator!(const class CInterlockedIntT<long long unsigned int, 8>  *); /* linkage=_ZNK16CInterlockedIntTIyLm8EEntEv */
	bool operator==(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EEeqEy */
	bool operator!=(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EEneEy */
	long long unsigned int operator++(class CInterlockedIntT<long long unsigned int, 8> *); /* linkage=_ZN16CInterlockedIntTIyLm8EEppEv */
	long long unsigned int operator++(class CInterlockedIntT<long long unsigned int, 8> *, int); /* linkage=_ZN16CInterlockedIntTIyLm8EEppEi */
	long long unsigned int operator--(class CInterlockedIntT<long long unsigned int, 8> *); /* linkage=_ZN16CInterlockedIntTIyLm8EEmmEv */
	long long unsigned int operator--(class CInterlockedIntT<long long unsigned int, 8> *, int); /* linkage=_ZN16CInterlockedIntTIyLm8EEmmEi */
	bool AssignIf(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EE8AssignIfEyy */
	long long unsigned int AtomicSet(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EE9AtomicSetEy */
	long long unsigned int InterlockedExchange(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EE19InterlockedExchangeEy */
	long long unsigned int InterlockedOr(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EE13InterlockedOrEy */
	void operator|=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EEoREy */
	long long unsigned int InterlockedAnd(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EE14InterlockedAndEy */
	void operator&=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EEaNEy */
	long long unsigned int operator=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EEaSEy */
	void SetRaw(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EE6SetRawEy */
	long long unsigned int AtomicAdd(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EE9AtomicAddEy */
	void operator+=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EEpLEy */
	void operator-=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EEmIEy */
	void operator*=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EEmLEy */
	void operator/=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EEdVEy */
	void operator^=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EEeOEy */
	void operator>>=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EErSEy */
	void operator<<=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EElSEy */
	void operator%=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EErMEy */
	long long unsigned int operator+(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EEplEy */
	long long unsigned int operator-(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EEmiEy */
	long long unsigned int operator*(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EEmlEy */
	long long unsigned int operator/(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EEdvEy */
	long long unsigned int operator|(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EEorEy */
	long long unsigned int operator&(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EEanEy */
	long long unsigned int operator^(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EEeoEy */
	long long unsigned int operator%(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EErmEy */
	void Maximize(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EE8MaximizeEy */
	void Minimize(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EE8MinimizeEy */
	void CInterlockedIntT(class CInterlockedIntT<long long int, 8> *); /* linkage=_ZN16CInterlockedIntTIxLm8EEC4Ev */
	void CInterlockedIntT(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EEC4Ex */
	long long int GetRaw(const class CInterlockedIntT<long long int, 8>  *); /* linkage=_ZNK16CInterlockedIntTIxLm8EE6GetRawEv */
	long long int operator()(const class CInterlockedIntT<long long int, 8>  *); /* linkage=_ZNK16CInterlockedIntTIxLm8EEclEv */
	long long int operator long long int(const class CInterlockedIntT<long long int, 8>  *); /* linkage=_ZNK16CInterlockedIntTIxLm8EEcvxEv */
	bool operator!(const class CInterlockedIntT<long long int, 8>  *); /* linkage=_ZNK16CInterlockedIntTIxLm8EEntEv */
	bool operator==(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EEeqEx */
	bool operator!=(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EEneEx */
	long long int operator++(class CInterlockedIntT<long long int, 8> *); /* linkage=_ZN16CInterlockedIntTIxLm8EEppEv */
	long long int operator++(class CInterlockedIntT<long long int, 8> *, int); /* linkage=_ZN16CInterlockedIntTIxLm8EEppEi */
	long long int operator--(class CInterlockedIntT<long long int, 8> *); /* linkage=_ZN16CInterlockedIntTIxLm8EEmmEv */
	long long int operator--(class CInterlockedIntT<long long int, 8> *, int); /* linkage=_ZN16CInterlockedIntTIxLm8EEmmEi */
	bool AssignIf(class CInterlockedIntT<long long int, 8> *, long long int, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EE8AssignIfExx */
	long long int AtomicSet(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EE9AtomicSetEx */
	long long int InterlockedExchange(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EE19InterlockedExchangeEx */
	long long int InterlockedOr(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EE13InterlockedOrEx */
	void operator|=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EEoREx */
	long long int InterlockedAnd(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EE14InterlockedAndEx */
	void operator&=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EEaNEx */
	long long int operator=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EEaSEx */
	void SetRaw(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EE6SetRawEx */
	long long int AtomicAdd(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EE9AtomicAddEx */
	void operator+=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EEpLEx */
	void operator-=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EEmIEx */
	void operator*=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EEmLEx */
	void operator/=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EEdVEx */
	void operator^=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EEeOEx */
	void operator>>=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EErSEx */
	void operator<<=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EElSEx */
	void operator%=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EErMEx */
	long long int operator+(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EEplEx */
	long long int operator-(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EEmiEx */
	long long int operator*(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EEmlEx */
	long long int operator/(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EEdvEx */
	long long int operator|(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EEorEx */
	long long int operator&(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EEanEx */
	long long int operator^(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EEeoEx */
	long long int operator%(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EErmEx */
	void Maximize(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EE8MaximizeEx */
	void Minimize(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EE8MinimizeEx */
} __attribute__((__aligned__(8)));

// <021DE52E> ../public/tier0/threadinterlocks.h:559
// member functions: 120
// member variable: 1
// class size: 8
class CInterlockedIntT<long long unsigned int, 8> {
	/* ../public/tier0/threadinterlocks.h:562 */
	void CInterlockedIntT(CInterlockedIntT<long long unsigned int, 8>* );
	/* ../public/tier0/threadinterlocks.h:563 */
	void CInterlockedIntT(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:565 */
	long long unsigned int GetRaw(const CInterlockedIntT<long long unsigned int, 8>* );
	/* ../public/tier0/threadinterlocks.h:567 */
	long long unsigned int operator()(const CInterlockedIntT<long long unsigned int, 8>* );
	/* ../public/tier0/threadinterlocks.h:568 */
	long long unsigned int operator long long unsigned int(const CInterlockedIntT<long long unsigned int, 8>* );
	/* ../public/tier0/threadinterlocks.h:570 */
	bool operator!(const CInterlockedIntT<long long unsigned int, 8>* );
	/* ../public/tier0/threadinterlocks.h:571 */
	bool operator==(const CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:572 */
	bool operator!=(const CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:574 */
	long long unsigned int operator++(CInterlockedIntT<long long unsigned int, 8>* );
	/* ../public/tier0/threadinterlocks.h:582 */
	long long unsigned int operator++(CInterlockedIntT<long long unsigned int, 8>* , int);
	/* ../public/tier0/threadinterlocks.h:584 */
	long long unsigned int operator--(CInterlockedIntT<long long unsigned int, 8>* );
	/* ../public/tier0/threadinterlocks.h:592 */
	long long unsigned int operator--(CInterlockedIntT<long long unsigned int, 8>* , int);
	/* ../public/tier0/threadinterlocks.h:594 */
	bool AssignIf(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int, long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:605 */
	long long unsigned int AtomicSet(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:614 */
	long long unsigned int InterlockedExchange(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:616 */
	long long unsigned int InterlockedOr(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:625 */
	void operator|=(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:627 */
	long long unsigned int InterlockedAnd(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:636 */
	void operator&=(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:638 */
	long long unsigned int operator=(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:652 */
	void SetRaw(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:658 */
	long long unsigned int AtomicAdd(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:667 */
	void operator+=(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:675 */
	void operator-=(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:677 */
	void operator*=(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:678 */
	void operator/=(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:679 */
	void operator^=(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:680 */
	void operator>>=(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:681 */
	void operator<<=(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:682 */
	void operator%=(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:684 */
	long long unsigned int operator+(const CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:685 */
	long long unsigned int operator-(const CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:686 */
	long long unsigned int operator*(const CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:687 */
	long long unsigned int operator/(const CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:688 */
	long long unsigned int operator|(const CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:689 */
	long long unsigned int operator&(const CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:690 */
	long long unsigned int operator^(const CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:691 */
	long long unsigned int operator%(const CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:693 */
	void Maximize(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
	/* ../public/tier0/threadinterlocks.h:694 */
	void Minimize(CInterlockedIntT<long long unsigned int, 8>* , long long unsigned int);
private:
	volatile long long unsigned int m_value; /* 0 8 */
	void CInterlockedIntT(class CInterlockedIntT<long long unsigned int, 8> *); /* linkage=_ZN16CInterlockedIntTIyLm8EEC4Ev */
	void CInterlockedIntT(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EEC4Ey */
	long long unsigned int GetRaw(const class CInterlockedIntT<long long unsigned int, 8>  *); /* linkage=_ZNK16CInterlockedIntTIyLm8EE6GetRawEv */
	long long unsigned int operator()(const class CInterlockedIntT<long long unsigned int, 8>  *); /* linkage=_ZNK16CInterlockedIntTIyLm8EEclEv */
	long long unsigned int operator long long unsigned int(const class CInterlockedIntT<long long unsigned int, 8>  *); /* linkage=_ZNK16CInterlockedIntTIyLm8EEcvyEv */
	bool operator!(const class CInterlockedIntT<long long unsigned int, 8>  *); /* linkage=_ZNK16CInterlockedIntTIyLm8EEntEv */
	bool operator==(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EEeqEy */
	bool operator!=(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EEneEy */
	long long unsigned int operator++(class CInterlockedIntT<long long unsigned int, 8> *); /* linkage=_ZN16CInterlockedIntTIyLm8EEppEv */
	long long unsigned int operator++(class CInterlockedIntT<long long unsigned int, 8> *, int); /* linkage=_ZN16CInterlockedIntTIyLm8EEppEi */
	long long unsigned int operator--(class CInterlockedIntT<long long unsigned int, 8> *); /* linkage=_ZN16CInterlockedIntTIyLm8EEmmEv */
	long long unsigned int operator--(class CInterlockedIntT<long long unsigned int, 8> *, int); /* linkage=_ZN16CInterlockedIntTIyLm8EEmmEi */
	bool AssignIf(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EE8AssignIfEyy */
	long long unsigned int AtomicSet(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EE9AtomicSetEy */
	long long unsigned int InterlockedExchange(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EE19InterlockedExchangeEy */
	long long unsigned int InterlockedOr(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EE13InterlockedOrEy */
	void operator|=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EEoREy */
	long long unsigned int InterlockedAnd(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EE14InterlockedAndEy */
	void operator&=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EEaNEy */
	long long unsigned int operator=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EEaSEy */
	void SetRaw(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EE6SetRawEy */
	long long unsigned int AtomicAdd(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EE9AtomicAddEy */
	void operator+=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EEpLEy */
	void operator-=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EEmIEy */
	void operator*=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EEmLEy */
	void operator/=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EEdVEy */
	void operator^=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EEeOEy */
	void operator>>=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EErSEy */
	void operator<<=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EElSEy */
	void operator%=(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EErMEy */
	long long unsigned int operator+(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EEplEy */
	long long unsigned int operator-(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EEmiEy */
	long long unsigned int operator*(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EEmlEy */
	long long unsigned int operator/(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EEdvEy */
	long long unsigned int operator|(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EEorEy */
	long long unsigned int operator&(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EEanEy */
	long long unsigned int operator^(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EEeoEy */
	long long unsigned int operator%(const class CInterlockedIntT<long long unsigned int, 8>  *, long long unsigned int); /* linkage=_ZNK16CInterlockedIntTIyLm8EErmEy */
	void Maximize(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EE8MaximizeEy */
	void Minimize(class CInterlockedIntT<long long unsigned int, 8> *, long long unsigned int); /* linkage=_ZN16CInterlockedIntTIyLm8EE8MinimizeEy */
	void CInterlockedIntT(class CInterlockedIntT<long long int, 8> *); /* linkage=_ZN16CInterlockedIntTIxLm8EEC4Ev */
	void CInterlockedIntT(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EEC4Ex */
	long long int GetRaw(const class CInterlockedIntT<long long int, 8>  *); /* linkage=_ZNK16CInterlockedIntTIxLm8EE6GetRawEv */
	long long int operator()(const class CInterlockedIntT<long long int, 8>  *); /* linkage=_ZNK16CInterlockedIntTIxLm8EEclEv */
	long long int operator long long int(const class CInterlockedIntT<long long int, 8>  *); /* linkage=_ZNK16CInterlockedIntTIxLm8EEcvxEv */
	bool operator!(const class CInterlockedIntT<long long int, 8>  *); /* linkage=_ZNK16CInterlockedIntTIxLm8EEntEv */
	bool operator==(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EEeqEx */
	bool operator!=(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EEneEx */
	long long int operator++(class CInterlockedIntT<long long int, 8> *); /* linkage=_ZN16CInterlockedIntTIxLm8EEppEv */
	long long int operator++(class CInterlockedIntT<long long int, 8> *, int); /* linkage=_ZN16CInterlockedIntTIxLm8EEppEi */
	long long int operator--(class CInterlockedIntT<long long int, 8> *); /* linkage=_ZN16CInterlockedIntTIxLm8EEmmEv */
	long long int operator--(class CInterlockedIntT<long long int, 8> *, int); /* linkage=_ZN16CInterlockedIntTIxLm8EEmmEi */
	bool AssignIf(class CInterlockedIntT<long long int, 8> *, long long int, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EE8AssignIfExx */
	long long int AtomicSet(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EE9AtomicSetEx */
	long long int InterlockedExchange(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EE19InterlockedExchangeEx */
	long long int InterlockedOr(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EE13InterlockedOrEx */
	void operator|=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EEoREx */
	long long int InterlockedAnd(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EE14InterlockedAndEx */
	void operator&=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EEaNEx */
	long long int operator=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EEaSEx */
	void SetRaw(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EE6SetRawEx */
	long long int AtomicAdd(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EE9AtomicAddEx */
	void operator+=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EEpLEx */
	void operator-=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EEmIEx */
	void operator*=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EEmLEx */
	void operator/=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EEdVEx */
	void operator^=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EEeOEx */
	void operator>>=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EErSEx */
	void operator<<=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EElSEx */
	void operator%=(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EErMEx */
	long long int operator+(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EEplEx */
	long long int operator-(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EEmiEx */
	long long int operator*(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EEmlEx */
	long long int operator/(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EEdvEx */
	long long int operator|(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EEorEx */
	long long int operator&(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EEanEx */
	long long int operator^(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EEeoEx */
	long long int operator%(const class CInterlockedIntT<long long int, 8>  *, long long int); /* linkage=_ZNK16CInterlockedIntTIxLm8EErmEx */
	void Maximize(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EE8MaximizeEx */
	void Minimize(class CInterlockedIntT<long long int, 8> *, long long int); /* linkage=_ZN16CInterlockedIntTIxLm8EE8MinimizeEx */
} __attribute__((__aligned__(8)));

// <0582E3B7> ../../public/tier0/threadinterlocks.h:559
// member functions: 80
// member variable: 1
// class size: 4
class CInterlockedIntT<int, 4> {
	/* ../../public/tier0/threadinterlocks.h:562 */
	void CInterlockedIntT(CInterlockedIntT<int, 4>* );
	/* ../../public/tier0/threadinterlocks.h:563 */
	void CInterlockedIntT(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:565 */
	int GetRaw(const CInterlockedIntT<int, 4>* );
	/* ../../public/tier0/threadinterlocks.h:567 */
	int operator()(const CInterlockedIntT<int, 4>* );
	/* ../../public/tier0/threadinterlocks.h:568 */
	int operator int(const CInterlockedIntT<int, 4>* );
	/* ../../public/tier0/threadinterlocks.h:570 */
	bool operator!(const CInterlockedIntT<int, 4>* );
	/* ../../public/tier0/threadinterlocks.h:571 */
	bool operator==(const CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:572 */
	bool operator!=(const CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:574 */
	int operator++(CInterlockedIntT<int, 4>* );
	/* ../../public/tier0/threadinterlocks.h:582 */
	int operator++(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:584 */
	int operator--(CInterlockedIntT<int, 4>* );
	/* ../../public/tier0/threadinterlocks.h:592 */
	int operator--(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:594 */
	bool AssignIf(CInterlockedIntT<int, 4>* , int, int);
	/* ../../public/tier0/threadinterlocks.h:605 */
	int AtomicSet(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:614 */
	int InterlockedExchange(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:616 */
	int InterlockedOr(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:625 */
	void operator|=(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:627 */
	int InterlockedAnd(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:636 */
	void operator&=(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:638 */
	int operator=(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:652 */
	void SetRaw(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:658 */
	int AtomicAdd(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:667 */
	void operator+=(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:675 */
	void operator-=(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:677 */
	void operator*=(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:678 */
	void operator/=(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:679 */
	void operator^=(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:680 */
	void operator>>=(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:681 */
	void operator<<=(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:682 */
	void operator%=(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:684 */
	int operator+(const CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:685 */
	int operator-(const CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:686 */
	int operator*(const CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:687 */
	int operator/(const CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:688 */
	int operator|(const CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:689 */
	int operator&(const CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:690 */
	int operator^(const CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:691 */
	int operator%(const CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:693 */
	void Maximize(CInterlockedIntT<int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:694 */
	void Minimize(CInterlockedIntT<int, 4>* , int);
private:
	volatile int m_value; /* 0 4 */
	void CInterlockedIntT(class CInterlockedIntT<int, 4> *); /* linkage=_ZN16CInterlockedIntTIiLm4EEC4Ev */
	void CInterlockedIntT(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEC4Ei */
	int GetRaw(const class CInterlockedIntT<int, 4>  *); /* linkage=_ZNK16CInterlockedIntTIiLm4EE6GetRawEv */
	int operator()(const class CInterlockedIntT<int, 4>  *); /* linkage=_ZNK16CInterlockedIntTIiLm4EEclEv */
	int operator int(const class CInterlockedIntT<int, 4>  *); /* linkage=_ZNK16CInterlockedIntTIiLm4EEcviEv */
	bool operator!(const class CInterlockedIntT<int, 4>  *); /* linkage=_ZNK16CInterlockedIntTIiLm4EEntEv */
	bool operator==(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EEeqEi */
	bool operator!=(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EEneEi */
	int operator++(class CInterlockedIntT<int, 4> *); /* linkage=_ZN16CInterlockedIntTIiLm4EEppEv */
	int operator++(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEppEi */
	int operator--(class CInterlockedIntT<int, 4> *); /* linkage=_ZN16CInterlockedIntTIiLm4EEmmEv */
	int operator--(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEmmEi */
	bool AssignIf(class CInterlockedIntT<int, 4> *, int, int); /* linkage=_ZN16CInterlockedIntTIiLm4EE8AssignIfEii */
	int AtomicSet(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EE9AtomicSetEi */
	int InterlockedExchange(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EE19InterlockedExchangeEi */
	int InterlockedOr(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EE13InterlockedOrEi */
	void operator|=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEoREi */
	int InterlockedAnd(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EE14InterlockedAndEi */
	void operator&=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEaNEi */
	int operator=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEaSEi */
	void SetRaw(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EE6SetRawEi */
	int AtomicAdd(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EE9AtomicAddEi */
	void operator+=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEpLEi */
	void operator-=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEmIEi */
	void operator*=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEmLEi */
	void operator/=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEdVEi */
	void operator^=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EEeOEi */
	void operator>>=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EErSEi */
	void operator<<=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EElSEi */
	void operator%=(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EErMEi */
	int operator+(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EEplEi */
	int operator-(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EEmiEi */
	int operator*(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EEmlEi */
	int operator/(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EEdvEi */
	int operator|(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EEorEi */
	int operator&(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EEanEi */
	int operator^(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EEeoEi */
	int operator%(const class CInterlockedIntT<int, 4>  *, int); /* linkage=_ZNK16CInterlockedIntTIiLm4EErmEi */
	void Maximize(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EE8MaximizeEi */
	void Minimize(class CInterlockedIntT<int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIiLm4EE8MinimizeEi */
} __attribute__((__aligned__(4)));

// <06D5805E> ../../public/tier0/threadinterlocks.h:559
// member functions: 80
// member variable: 1
// class size: 4
class CInterlockedIntT<unsigned int, 4> {
	/* ../../public/tier0/threadinterlocks.h:562 */
	void CInterlockedIntT(CInterlockedIntT<unsigned int, 4>* );
	/* ../../public/tier0/threadinterlocks.h:563 */
	void CInterlockedIntT(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:565 */
	unsigned int GetRaw(const CInterlockedIntT<unsigned int, 4>* );
	/* ../../public/tier0/threadinterlocks.h:567 */
	unsigned int operator()(const CInterlockedIntT<unsigned int, 4>* );
	/* ../../public/tier0/threadinterlocks.h:568 */
	unsigned int operator unsigned int(const CInterlockedIntT<unsigned int, 4>* );
	/* ../../public/tier0/threadinterlocks.h:570 */
	bool operator!(const CInterlockedIntT<unsigned int, 4>* );
	/* ../../public/tier0/threadinterlocks.h:571 */
	bool operator==(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:572 */
	bool operator!=(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:574 */
	unsigned int operator++(CInterlockedIntT<unsigned int, 4>* );
	/* ../../public/tier0/threadinterlocks.h:582 */
	unsigned int operator++(CInterlockedIntT<unsigned int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:584 */
	unsigned int operator--(CInterlockedIntT<unsigned int, 4>* );
	/* ../../public/tier0/threadinterlocks.h:592 */
	unsigned int operator--(CInterlockedIntT<unsigned int, 4>* , int);
	/* ../../public/tier0/threadinterlocks.h:594 */
	bool AssignIf(CInterlockedIntT<unsigned int, 4>* , unsigned int, unsigned int);
	/* ../../public/tier0/threadinterlocks.h:605 */
	unsigned int AtomicSet(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:614 */
	unsigned int InterlockedExchange(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:616 */
	unsigned int InterlockedOr(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:625 */
	void operator|=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:627 */
	unsigned int InterlockedAnd(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:636 */
	void operator&=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:638 */
	unsigned int operator=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:652 */
	void SetRaw(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:658 */
	unsigned int AtomicAdd(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:667 */
	void operator+=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:675 */
	void operator-=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:677 */
	void operator*=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:678 */
	void operator/=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:679 */
	void operator^=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:680 */
	void operator>>=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:681 */
	void operator<<=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:682 */
	void operator%=(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:684 */
	unsigned int operator+(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:685 */
	unsigned int operator-(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:686 */
	unsigned int operator*(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:687 */
	unsigned int operator/(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:688 */
	unsigned int operator|(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:689 */
	unsigned int operator&(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:690 */
	unsigned int operator^(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:691 */
	unsigned int operator%(const CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:693 */
	void Maximize(CInterlockedIntT<unsigned int, 4>* , unsigned int);
	/* ../../public/tier0/threadinterlocks.h:694 */
	void Minimize(CInterlockedIntT<unsigned int, 4>* , unsigned int);
private:
	volatile unsigned int m_value; /* 0 4 */
	void CInterlockedIntT(class CInterlockedIntT<unsigned int, 4> *); /* linkage=_ZN16CInterlockedIntTIjLm4EEC4Ev */
	void CInterlockedIntT(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EEC4Ej */
	unsigned int GetRaw(const class CInterlockedIntT<unsigned int, 4>  *); /* linkage=_ZNK16CInterlockedIntTIjLm4EE6GetRawEv */
	unsigned int operator()(const class CInterlockedIntT<unsigned int, 4>  *); /* linkage=_ZNK16CInterlockedIntTIjLm4EEclEv */
	unsigned int operator unsigned int(const class CInterlockedIntT<unsigned int, 4>  *); /* linkage=_ZNK16CInterlockedIntTIjLm4EEcvjEv */
	bool operator!(const class CInterlockedIntT<unsigned int, 4>  *); /* linkage=_ZNK16CInterlockedIntTIjLm4EEntEv */
	bool operator==(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EEeqEj */
	bool operator!=(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EEneEj */
	unsigned int operator++(class CInterlockedIntT<unsigned int, 4> *); /* linkage=_ZN16CInterlockedIntTIjLm4EEppEv */
	unsigned int operator++(class CInterlockedIntT<unsigned int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIjLm4EEppEi */
	unsigned int operator--(class CInterlockedIntT<unsigned int, 4> *); /* linkage=_ZN16CInterlockedIntTIjLm4EEmmEv */
	unsigned int operator--(class CInterlockedIntT<unsigned int, 4> *, int); /* linkage=_ZN16CInterlockedIntTIjLm4EEmmEi */
	bool AssignIf(class CInterlockedIntT<unsigned int, 4> *, unsigned int, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EE8AssignIfEjj */
	unsigned int AtomicSet(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EE9AtomicSetEj */
	unsigned int InterlockedExchange(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EE19InterlockedExchangeEj */
	unsigned int InterlockedOr(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EE13InterlockedOrEj */
	void operator|=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EEoREj */
	unsigned int InterlockedAnd(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EE14InterlockedAndEj */
	void operator&=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EEaNEj */
	unsigned int operator=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EEaSEj */
	void SetRaw(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EE6SetRawEj */
	unsigned int AtomicAdd(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EE9AtomicAddEj */
	void operator+=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EEpLEj */
	void operator-=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EEmIEj */
	void operator*=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EEmLEj */
	void operator/=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EEdVEj */
	void operator^=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EEeOEj */
	void operator>>=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EErSEj */
	void operator<<=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EElSEj */
	void operator%=(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EErMEj */
	unsigned int operator+(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EEplEj */
	unsigned int operator-(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EEmiEj */
	unsigned int operator*(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EEmlEj */
	unsigned int operator/(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EEdvEj */
	unsigned int operator|(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EEorEj */
	unsigned int operator&(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EEanEj */
	unsigned int operator^(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EEeoEj */
	unsigned int operator%(const class CInterlockedIntT<unsigned int, 4>  *, unsigned int); /* linkage=_ZNK16CInterlockedIntTIjLm4EErmEj */
	void Maximize(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EE8MaximizeEj */
	void Minimize(class CInterlockedIntT<unsigned int, 4> *, unsigned int); /* linkage=_ZN16CInterlockedIntTIjLm4EE8MinimizeEj */
} __attribute__((__aligned__(4)));

// <068FD943> ../public/tier0/threadinterlocks.h:562
void CInterlockedIntT<int, 4>::CInterlockedIntT()
{
} /* size: 0 */

// <068FD92A> ../public/tier0/threadinterlocks.h:562
inline void CInterlockedIntT<int, 4>::CInterlockedIntT()
{
} /* size: 0 */

// <064CED31> ../public/tier0/threadinterlocks.h:562
void CInterlockedIntT<unsigned int, 4>::CInterlockedIntT()
{
} /* size: 0 */

// <064CED18> ../public/tier0/threadinterlocks.h:562
inline void CInterlockedIntT<unsigned int, 4>::CInterlockedIntT()
{
} /* size: 0 */

// <044A6427> ../public/tier0/threadinterlocks.h:562
void CInterlockedIntT<long long unsigned int, 8>::CInterlockedIntT()
{
} /* size: 0 */

// <044A640E> ../public/tier0/threadinterlocks.h:562
inline void CInterlockedIntT<long long unsigned int, 8>::CInterlockedIntT()
{
} /* size: 0 */

// <01FA8E74> ../public/tier0/threadinterlocks.h:562
void CInterlockedIntT<long long int, 8>::CInterlockedIntT()
{
} /* size: 0 */

// <01FA8E5B> ../public/tier0/threadinterlocks.h:562
inline void CInterlockedIntT<long long int, 8>::CInterlockedIntT()
{
} /* size: 0 */

// <06D5D17E> ../../public/tier0/threadinterlocks.h:563
void CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(unsigned int value)
{
} /* size: 0 */

// <06D5D158> ../../public/tier0/threadinterlocks.h:563
inline void CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(unsigned int value)
{
} /* size: 0 */

// <06D5D13C> ../../public/tier0/threadinterlocks.h:563
void CInterlockedIntT<int, 4>::CInterlockedIntT(int value)
{
} /* size: 0 */

// <06D5D116> ../../public/tier0/threadinterlocks.h:563
inline void CInterlockedIntT<int, 4>::CInterlockedIntT(int value)
{
} /* size: 0 */

// <00306474> ../public/tier0/threadinterlocks.h:563
void CInterlockedIntT<long long int, 8>::CInterlockedIntT(long long int value)
{
} /* size: 0 */

// <0030644E> ../public/tier0/threadinterlocks.h:563
inline void CInterlockedIntT<long long int, 8>::CInterlockedIntT(long long int value)
{
} /* size: 0 */

// <06D5D1D7> ../../public/tier0/threadinterlocks.h:565
inline void CInterlockedIntT<unsigned int, 4>::GetRaw()
{
} /* size: 0 */

// <0572E2FB> ../public/tier0/threadinterlocks.h:565
inline void CInterlockedIntT<int, 4>::GetRaw()
{
} /* size: 0 */

// <009E5B89> ../public/tier0/threadinterlocks.h:567
inline void CInterlockedIntT<int, 4>::operator()(const CInterlockedIntT<int, 4>* this)
{
} /* size: 0 */

// <000F9CDC> ../public/tier0/threadinterlocks.h:567
inline void CInterlockedIntT<unsigned int, 4>::operator()(const CInterlockedIntT<unsigned int, 4>* this)
{
} /* size: 0 */

// <06D5D1F0> ../../public/tier0/threadinterlocks.h:568
inline void operator unsigned CInterlockedIntT<unsigned int, 4>::int()
{
} /* size: 0 */

// <068FD103> ../public/tier0/threadinterlocks.h:568
inline void operator CInterlockedIntT<int, 4>::int()
{
} /* size: 0 */

// <023A96CC> ../public/tier0/threadinterlocks.h:568
inline void operator long long unsigned CInterlockedIntT<long long unsigned int, 8>::int()
{
} /* size: 0 */

// <01FA8EEB> ../public/tier0/threadinterlocks.h:568
inline void operator long long CInterlockedIntT<long long int, 8>::int()
{
} /* size: 0 */

// <02064FE8> ../public/tier0/threadinterlocks.h:570
inline void CInterlockedIntT<int, 4>::operator!()
{
} /* size: 0 */

// <02612CE8> ../public/tier0/threadinterlocks.h:571
inline void CInterlockedIntT<int, 4>::operator==(int rhs)
{
} /* size: 0 */

// <044DB34D> ../public/tier0/threadinterlocks.h:572
inline void CInterlockedIntT<int, 4>::operator!=(int rhs)
{
} /* size: 0 */

// <0128118C> ../public/tier0/threadinterlocks.h:574
inline void CInterlockedIntT<int, 4>::operator++()
{
} /* size: 0 */

// <00C8605E> ../public/tier0/threadinterlocks.h:574
inline void CInterlockedIntT<unsigned int, 4>::operator++()
{
} /* size: 0 */

// <00305702> ../public/tier0/threadinterlocks.h:574
inline void CInterlockedIntT<long long int, 8>::operator++()
{
} /* size: 0 */

// <01B36AA3> ../public/tier0/threadinterlocks.h:582
inline void CInterlockedIntT<int, 4>::operator++(int)
{
} /* size: 0 */

// <0058EDA0> ../public/tier0/threadinterlocks.h:582
inline void CInterlockedIntT<unsigned int, 4>::operator++(int)
{
} /* size: 0 */

// <00176859> ../public/tier0/threadinterlocks.h:582
inline void CInterlockedIntT<long long int, 8>::operator++(int)
{
} /* size: 0 */

// <06E27E20> ../../public/tier0/threadinterlocks.h:584
inline void CInterlockedIntT<int, 4>::operator--()
{
} /* size: 0 */

// <064CFC31> ../public/tier0/threadinterlocks.h:584
inline void CInterlockedIntT<unsigned int, 4>::operator--()
{
} /* size: 0 */

// <068FD8BC> ../public/tier0/threadinterlocks.h:592
inline void CInterlockedIntT<int, 4>::operator--(int)
{
} /* size: 0 */

// <01FA912E> ../public/tier0/threadinterlocks.h:594
inline void CInterlockedIntT<int, 4>::AssignIf(int conditionValue, int newValue)
{
} /* size: 0 */

// <004D27F9> ../public/tier0/threadinterlocks.h:594
inline void CInterlockedIntT<unsigned int, 4>::AssignIf(unsigned int conditionValue, unsigned int newValue)
{
} /* size: 0 */

// <00026C56> ../public/tier0/threadinterlocks.h:594
inline void CInterlockedIntT<long long unsigned int, 8>::AssignIf(long long unsigned int conditionValue, long long unsigned int newValue)
{
} /* size: 0 */

// <06D5CAF9> ../../public/tier0/threadinterlocks.h:605
inline void CInterlockedIntT<int, 4>::AtomicSet(int newValue)
{
} /* size: 0 */

// <06D5CC6A> ../../public/tier0/threadinterlocks.h:614
inline void CInterlockedIntT<int, 4>::InterlockedExchange(int newValue)
{
} /* size: 0 */

// <009D3DA1> ../public/tier0/threadinterlocks.h:616
inline void CInterlockedIntT<unsigned int, 4>::InterlockedOr(unsigned int newValue)
{
} /* size: 0 */

// <003A0E37> ../public/tier0/threadinterlocks.h:616
inline void CInterlockedIntT<int, 4>::InterlockedOr(int newValue)
{
} /* size: 0 */

// <00174E2B> ../public/tier0/threadinterlocks.h:627
inline void CInterlockedIntT<unsigned int, 4>::InterlockedAnd(unsigned int newValue)
{
} /* size: 0 */

// <003A0E11> ../public/tier0/threadinterlocks.h:627
inline void CInterlockedIntT<int, 4>::InterlockedAnd(int newValue)
{
} /* size: 0 */

// <00178727> ../public/tier0/threadinterlocks.h:636
inline void CInterlockedIntT<unsigned int, 4>::operator&=(unsigned int mask)
{
} /* size: 0 */

// <068FB988> ../public/tier0/threadinterlocks.h:638
inline void CInterlockedIntT<int, 4>::operator=(int newValue)
{
} /* size: 0 */

// <064CE842> ../public/tier0/threadinterlocks.h:638
inline void CInterlockedIntT<unsigned int, 4>::operator=(unsigned int newValue)
{
} /* size: 0 */

// <02358BB5> ../public/tier0/threadinterlocks.h:638
inline void CInterlockedIntT<long long unsigned int, 8>::operator=(long long unsigned int newValue)
{
} /* size: 0 */

// <01FA8F04> ../public/tier0/threadinterlocks.h:638
inline void CInterlockedIntT<long long int, 8>::operator=(long long int newValue)
{
} /* size: 0 */

// <044D95C6> ../public/tier0/threadinterlocks.h:652
inline void CInterlockedIntT<long long unsigned int, 8>::SetRaw(long long unsigned int newValue)
{
} /* size: 0 */

// <06315C38> ../public/tier0/threadinterlocks.h:658
inline void CInterlockedIntT<int, 4>::AtomicAdd(int add)
{
} /* size: 0 */

// <0572E2D5> ../public/tier0/threadinterlocks.h:658
inline void CInterlockedIntT<unsigned int, 4>::AtomicAdd(unsigned int add)
{
} /* size: 0 */

// <044D957A> ../public/tier0/threadinterlocks.h:658
inline void CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(long long unsigned int add)
{
} /* size: 0 */

// <0058EC35> ../public/tier0/threadinterlocks.h:667
inline void CInterlockedIntT<unsigned int, 4>::operator+=(unsigned int add)
{
} /* size: 0 */

// <003C44D1> ../public/tier0/threadinterlocks.h:667
inline void CInterlockedIntT<int, 4>::operator+=(int add)
{
} /* size: 0 */

// <0016A193> ../public/tier0/threadinterlocks.h:667
inline void CInterlockedIntT<long long unsigned int, 8>::operator+=(long long unsigned int add)
{
} /* size: 0 */

// <003C44AB> ../public/tier0/threadinterlocks.h:675
inline void CInterlockedIntT<int, 4>::operator-=(int subtract)
{
} /* size: 0 */

// <0002692F> ../public/tier0/threadinterlocks.h:688
inline void CInterlockedIntT<int, 4>::operator|(int operand)
{
} /* size: 0 */

// <0015869F> ../public/tier0/threadinterlocks.h:689
inline void CInterlockedIntT<unsigned int, 4>::operator&(unsigned int operand)
{
} /* size: 0 */

// <00306C5C> ../public/tier0/threadinterlocks.h:693
// variables: 2
inline void CInterlockedIntT<int, 4>::Maximize(int operand)
{
	int original; // 693
	int result; // 693
} /* size: 0, variables: 2 */

// <0011594F> ../public/tier0/threadinterlocks.h:707
// member functions: 36
// member variable: 1
// class size: 4
class CInterlockedFloat {
	/* ../public/tier0/threadinterlocks.h:712 */
	void CInterlockedFloat(CInterlockedFloat* );
	/* ../public/tier0/threadinterlocks.h:715 */
	void CInterlockedFloat(CInterlockedFloat* , float);
	/* ../public/tier0/threadinterlocks.h:719 */
	float operator()(const CInterlockedFloat* );
	/* ../public/tier0/threadinterlocks.h:723 */
	float operator float(const CInterlockedFloat* );
	/* ../public/tier0/threadinterlocks.h:728 */
	bool operator==(const CInterlockedFloat* , float);
	/* ../public/tier0/threadinterlocks.h:732 */
	bool operator!=(const CInterlockedFloat* , float);
	/* ../public/tier0/threadinterlocks.h:737 */
	bool AssignIf(CInterlockedFloat* , float, float);
	/* ../public/tier0/threadinterlocks.h:742 */
	float operator=(CInterlockedFloat* , float);
	/* ../public/tier0/threadinterlocks.h:748 */
	void operator+=(CInterlockedFloat* , T);
	/* ../public/tier0/threadinterlocks.h:711 */
	typedef float T;
	/* ../public/tier0/threadinterlocks.h:749 */
	void operator-=(CInterlockedFloat* , T);
	/* ../public/tier0/threadinterlocks.h:750 */
	void operator*=(CInterlockedFloat* , T);
	/* ../public/tier0/threadinterlocks.h:751 */
	void operator/=(CInterlockedFloat* , T);
	/* ../public/tier0/threadinterlocks.h:752 */
	T operator+(const CInterlockedFloat* , T);
	/* ../public/tier0/threadinterlocks.h:753 */
	T operator-(const CInterlockedFloat* , T);
	/* ../public/tier0/threadinterlocks.h:754 */
	T operator*(const CInterlockedFloat* , T);
	/* ../public/tier0/threadinterlocks.h:755 */
	T operator/(const CInterlockedFloat* , T);
	/* ../public/tier0/threadinterlocks.h:757 */
	void Maximize(CInterlockedFloat* , T);
	/* ../public/tier0/threadinterlocks.h:758 */
	void Minimize(CInterlockedFloat* , T);
private:
	volatile float m_value; /* 0 4 */
	void CInterlockedFloat(class CInterlockedFloat *); /* linkage=_ZN17CInterlockedFloatC4Ev */
	void CInterlockedFloat(class CInterlockedFloat *, float); /* linkage=_ZN17CInterlockedFloatC4Ef */
	float operator()(const class CInterlockedFloat  *); /* linkage=_ZNK17CInterlockedFloatclEv */
	float operator float(const class CInterlockedFloat  *); /* linkage=_ZNK17CInterlockedFloatcvfEv */
	bool operator==(const class CInterlockedFloat  *, float); /* linkage=_ZNK17CInterlockedFloateqEf */
	bool operator!=(const class CInterlockedFloat  *, float); /* linkage=_ZNK17CInterlockedFloatneEf */
	bool AssignIf(class CInterlockedFloat *, float, float); /* linkage=_ZN17CInterlockedFloat8AssignIfEff */
	float operator=(class CInterlockedFloat *, float); /* linkage=_ZN17CInterlockedFloataSEf */
	void operator+=(class CInterlockedFloat *, T); /* linkage=_ZN17CInterlockedFloatpLEf */
	void operator-=(class CInterlockedFloat *, T); /* linkage=_ZN17CInterlockedFloatmIEf */
	void operator*=(class CInterlockedFloat *, T); /* linkage=_ZN17CInterlockedFloatmLEf */
	void operator/=(class CInterlockedFloat *, T); /* linkage=_ZN17CInterlockedFloatdVEf */
	T operator+(const class CInterlockedFloat  *, T); /* linkage=_ZNK17CInterlockedFloatplEf */
	T operator-(const class CInterlockedFloat  *, T); /* linkage=_ZNK17CInterlockedFloatmiEf */
	T operator*(const class CInterlockedFloat  *, T); /* linkage=_ZNK17CInterlockedFloatmlEf */
	T operator/(const class CInterlockedFloat  *, T); /* linkage=_ZNK17CInterlockedFloatdvEf */
	void Maximize(class CInterlockedFloat *, T); /* linkage=_ZN17CInterlockedFloat8MaximizeEf */
	void Minimize(class CInterlockedFloat *, T); /* linkage=_ZN17CInterlockedFloat8MinimizeEf */
};

// <001AE00D> ../public/tier0/threadinterlocks.h:715
void CInterlockedFloat::CInterlockedFloat(float value)
{
} /* size: 0 */

// <001ADFE7> ../public/tier0/threadinterlocks.h:715
inline void CInterlockedFloat::CInterlockedFloat(float value)
{
} /* size: 0 */

// <001ADFCE> ../public/tier0/threadinterlocks.h:723
inline void operator CInterlockedFloat::float()
{
} /* size: 0 */

// <001ADFA8> ../public/tier0/threadinterlocks.h:742
inline void CInterlockedFloat::operator=(float newValue)
{
} /* size: 0 */

// <0011E2E5> ../public/tier0/threadinterlocks.h:769
// member functions: 48
// member variable: 1
// class size: 8
class CInterlockedPtr<CrashItem_t> {
	/* ../public/tier0/threadinterlocks.h:772 */
	void CInterlockedPtr(CInterlockedPtr<CrashItem_t>* );
	/* ../public/tier0/threadinterlocks.h:782 */
	void CInterlockedPtr(CInterlockedPtr<CrashItem_t>* , CrashItem_t* );
	/* ../public/tier0/threadinterlocks.h:784 */
	CrashItem_t* GetRaw(const CInterlockedPtr<CrashItem_t>* );
	/* ../public/tier0/threadinterlocks.h:786 */
	CrashItem_t* operator CrashItem_t*(const CInterlockedPtr<CrashItem_t>* );
	/* ../public/tier0/threadinterlocks.h:788 */
	bool operator!(const CInterlockedPtr<CrashItem_t>* );
	/* ../public/tier0/threadinterlocks.h:789 */
	bool operator==(const CInterlockedPtr<CrashItem_t>* , CrashItem_t* );
	/* ../public/tier0/threadinterlocks.h:790 */
	bool operator!=(const CInterlockedPtr<CrashItem_t>* , CrashItem_t* );
	/* ../public/tier0/threadinterlocks.h:792 */
	CrashItem_t* operator++(CInterlockedPtr<CrashItem_t>* );
	/* ../public/tier0/threadinterlocks.h:793 */
	CrashItem_t* operator++(CInterlockedPtr<CrashItem_t>* , int);
	/* ../public/tier0/threadinterlocks.h:795 */
	CrashItem_t* operator--(CInterlockedPtr<CrashItem_t>* );
	/* ../public/tier0/threadinterlocks.h:796 */
	CrashItem_t* operator--(CInterlockedPtr<CrashItem_t>* , int);
	/* ../public/tier0/threadinterlocks.h:798 */
	bool AssignIf(CInterlockedPtr<CrashItem_t>* , CrashItem_t* , CrashItem_t* );
	/* ../public/tier0/threadinterlocks.h:800 */
	CrashItem_t* operator=(CInterlockedPtr<CrashItem_t>* , CrashItem_t* );
	/* ../public/tier0/threadinterlocks.h:803 */
	CrashItem_t* AtomicSet(CInterlockedPtr<CrashItem_t>* , CrashItem_t* );
	/* ../public/tier0/threadinterlocks.h:804 */
	CrashItem_t* InterlockedExchange(CInterlockedPtr<CrashItem_t>* , CrashItem_t* );
	/* ../public/tier0/threadinterlocks.h:806 */
	void operator+=(CInterlockedPtr<CrashItem_t>* , int);
	/* ../public/tier0/threadinterlocks.h:807 */
	void operator-=(CInterlockedPtr<CrashItem_t>* , int);
	/* ../public/tier0/threadinterlocks.h:810 */
	CrashItem_t* AtomicAdd(CInterlockedPtr<CrashItem_t>* , int);
	/* ../public/tier0/threadinterlocks.h:812 */
	CrashItem_t* operator+(const CInterlockedPtr<CrashItem_t>* , int);
	/* ../public/tier0/threadinterlocks.h:813 */
	CrashItem_t* operator-(const CInterlockedPtr<CrashItem_t>* , int);
	/* ../public/tier0/threadinterlocks.h:814 */
	CrashItem_t* operator+(const CInterlockedPtr<CrashItem_t>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:815 */
	CrashItem_t* operator-(const CInterlockedPtr<CrashItem_t>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:816 */
	size_t operator-(const CInterlockedPtr<CrashItem_t>* , CrashItem_t* );
	/* ../public/tier0/threadinterlocks.h:817 */
	size_t operator-(const CInterlockedPtr<CrashItem_t>* , const CInterlockedPtr<CrashItem_t>& );
private:
	volatile class CrashItem_t * m_value; /* 0 8 */
	void CInterlockedPtr(class CInterlockedPtr<CrashItem_t> *); /* linkage=_ZN15CInterlockedPtrI11CrashItem_tEC4Ev */
	void CInterlockedPtr(class CInterlockedPtr<CrashItem_t> *, class CrashItem_t *); /* linkage=_ZN15CInterlockedPtrI11CrashItem_tEC4EPS0_ */
	class CrashItem_t * GetRaw(const class CInterlockedPtr<CrashItem_t>  *); /* linkage=_ZNK15CInterlockedPtrI11CrashItem_tE6GetRawEv */
	class CrashItem_t * operator CrashItem_t*(const class CInterlockedPtr<CrashItem_t>  *); /* linkage=_ZNK15CInterlockedPtrI11CrashItem_tEcvPS0_Ev */
	bool operator!(const class CInterlockedPtr<CrashItem_t>  *); /* linkage=_ZNK15CInterlockedPtrI11CrashItem_tEntEv */
	bool operator==(const class CInterlockedPtr<CrashItem_t>  *, class CrashItem_t *); /* linkage=_ZNK15CInterlockedPtrI11CrashItem_tEeqEPS0_ */
	bool operator!=(const class CInterlockedPtr<CrashItem_t>  *, class CrashItem_t *); /* linkage=_ZNK15CInterlockedPtrI11CrashItem_tEneEPS0_ */
	class CrashItem_t * operator++(class CInterlockedPtr<CrashItem_t> *); /* linkage=_ZN15CInterlockedPtrI11CrashItem_tEppEv */
	class CrashItem_t * operator++(class CInterlockedPtr<CrashItem_t> *, int); /* linkage=_ZN15CInterlockedPtrI11CrashItem_tEppEi */
	class CrashItem_t * operator--(class CInterlockedPtr<CrashItem_t> *); /* linkage=_ZN15CInterlockedPtrI11CrashItem_tEmmEv */
	class CrashItem_t * operator--(class CInterlockedPtr<CrashItem_t> *, int); /* linkage=_ZN15CInterlockedPtrI11CrashItem_tEmmEi */
	bool AssignIf(class CInterlockedPtr<CrashItem_t> *, class CrashItem_t *, class CrashItem_t *); /* linkage=_ZN15CInterlockedPtrI11CrashItem_tE8AssignIfEPS0_S2_ */
	class CrashItem_t * operator=(class CInterlockedPtr<CrashItem_t> *, class CrashItem_t *); /* linkage=_ZN15CInterlockedPtrI11CrashItem_tEaSEPS0_ */
	class CrashItem_t * AtomicSet(class CInterlockedPtr<CrashItem_t> *, class CrashItem_t *); /* linkage=_ZN15CInterlockedPtrI11CrashItem_tE9AtomicSetEPS0_ */
	class CrashItem_t * InterlockedExchange(class CInterlockedPtr<CrashItem_t> *, class CrashItem_t *); /* linkage=_ZN15CInterlockedPtrI11CrashItem_tE19InterlockedExchangeEPS0_ */
	void operator+=(class CInterlockedPtr<CrashItem_t> *, int); /* linkage=_ZN15CInterlockedPtrI11CrashItem_tEpLEi */
	void operator-=(class CInterlockedPtr<CrashItem_t> *, int); /* linkage=_ZN15CInterlockedPtrI11CrashItem_tEmIEi */
	class CrashItem_t * AtomicAdd(class CInterlockedPtr<CrashItem_t> *, int); /* linkage=_ZN15CInterlockedPtrI11CrashItem_tE9AtomicAddEi */
	class CrashItem_t * operator+(const class CInterlockedPtr<CrashItem_t>  *, int); /* linkage=_ZNK15CInterlockedPtrI11CrashItem_tEplEi */
	class CrashItem_t * operator-(const class CInterlockedPtr<CrashItem_t>  *, int); /* linkage=_ZNK15CInterlockedPtrI11CrashItem_tEmiEi */
	class CrashItem_t * operator+(const class CInterlockedPtr<CrashItem_t>  *, unsigned int); /* linkage=_ZNK15CInterlockedPtrI11CrashItem_tEplEj */
	class CrashItem_t * operator-(const class CInterlockedPtr<CrashItem_t>  *, unsigned int); /* linkage=_ZNK15CInterlockedPtrI11CrashItem_tEmiEj */
	size_t operator-(const class CInterlockedPtr<CrashItem_t>  *, class CrashItem_t *); /* linkage=_ZNK15CInterlockedPtrI11CrashItem_tEmiEPS0_ */
	size_t operator-(const class CInterlockedPtr<CrashItem_t>  *, const class CInterlockedPtr<CrashItem_t>  &); /* linkage=_ZNK15CInterlockedPtrI11CrashItem_tEmiERKS1_ */
};

// <02E058D1> ../public/tier0/threadinterlocks.h:769
// member functions: 48
// member variable: 1
// class size: 8
class CInterlockedPtr<CSceneObject*> {
	/* ../public/tier0/threadinterlocks.h:772 */
	void CInterlockedPtr(CInterlockedPtr<CSceneObject*>* );
	/* ../public/tier0/threadinterlocks.h:782 */
	void CInterlockedPtr(CInterlockedPtr<CSceneObject*>* , CSceneObject** );
	/* ../public/tier0/threadinterlocks.h:784 */
	CSceneObject** GetRaw(const CInterlockedPtr<CSceneObject*>* );
	/* ../public/tier0/threadinterlocks.h:786 */
	CSceneObject** operator CSceneObject**(const CInterlockedPtr<CSceneObject*>* );
	/* ../public/tier0/threadinterlocks.h:788 */
	bool operator!(const CInterlockedPtr<CSceneObject*>* );
	/* ../public/tier0/threadinterlocks.h:789 */
	bool operator==(const CInterlockedPtr<CSceneObject*>* , CSceneObject** );
	/* ../public/tier0/threadinterlocks.h:790 */
	bool operator!=(const CInterlockedPtr<CSceneObject*>* , CSceneObject** );
	/* ../public/tier0/threadinterlocks.h:792 */
	CSceneObject** operator++(CInterlockedPtr<CSceneObject*>* );
	/* ../public/tier0/threadinterlocks.h:793 */
	CSceneObject** operator++(CInterlockedPtr<CSceneObject*>* , int);
	/* ../public/tier0/threadinterlocks.h:795 */
	CSceneObject** operator--(CInterlockedPtr<CSceneObject*>* );
	/* ../public/tier0/threadinterlocks.h:796 */
	CSceneObject** operator--(CInterlockedPtr<CSceneObject*>* , int);
	/* ../public/tier0/threadinterlocks.h:798 */
	bool AssignIf(CInterlockedPtr<CSceneObject*>* , CSceneObject** , CSceneObject** );
	/* ../public/tier0/threadinterlocks.h:800 */
	CSceneObject** operator=(CInterlockedPtr<CSceneObject*>* , CSceneObject** );
	/* ../public/tier0/threadinterlocks.h:803 */
	CSceneObject** AtomicSet(CInterlockedPtr<CSceneObject*>* , CSceneObject** );
	/* ../public/tier0/threadinterlocks.h:804 */
	CSceneObject** InterlockedExchange(CInterlockedPtr<CSceneObject*>* , CSceneObject** );
	/* ../public/tier0/threadinterlocks.h:806 */
	void operator+=(CInterlockedPtr<CSceneObject*>* , int);
	/* ../public/tier0/threadinterlocks.h:807 */
	void operator-=(CInterlockedPtr<CSceneObject*>* , int);
	/* ../public/tier0/threadinterlocks.h:810 */
	CSceneObject** AtomicAdd(CInterlockedPtr<CSceneObject*>* , int);
	/* ../public/tier0/threadinterlocks.h:812 */
	CSceneObject** operator+(const CInterlockedPtr<CSceneObject*>* , int);
	/* ../public/tier0/threadinterlocks.h:813 */
	CSceneObject** operator-(const CInterlockedPtr<CSceneObject*>* , int);
	/* ../public/tier0/threadinterlocks.h:814 */
	CSceneObject** operator+(const CInterlockedPtr<CSceneObject*>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:815 */
	CSceneObject** operator-(const CInterlockedPtr<CSceneObject*>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:816 */
	size_t operator-(const CInterlockedPtr<CSceneObject*>* , CSceneObject** );
	/* ../public/tier0/threadinterlocks.h:817 */
	size_t operator-(const CInterlockedPtr<CSceneObject*>* , const CInterlockedPtr<CSceneObject*>& );
private:
	volatile class CSceneObject * * m_value; /* 0 8 */
	void CInterlockedPtr(class CInterlockedPtr<CSceneObject*> *); /* linkage=_ZN15CInterlockedPtrIP12CSceneObjectEC4Ev */
	void CInterlockedPtr(class CInterlockedPtr<CSceneObject*> *, class CSceneObject * *); /* linkage=_ZN15CInterlockedPtrIP12CSceneObjectEC4EPS1_ */
	class CSceneObject * * GetRaw(const class CInterlockedPtr<CSceneObject*>  *); /* linkage=_ZNK15CInterlockedPtrIP12CSceneObjectE6GetRawEv */
	class CSceneObject * * operator CSceneObject**(const class CInterlockedPtr<CSceneObject*>  *); /* linkage=_ZNK15CInterlockedPtrIP12CSceneObjectEcvPS1_Ev */
	bool operator!(const class CInterlockedPtr<CSceneObject*>  *); /* linkage=_ZNK15CInterlockedPtrIP12CSceneObjectEntEv */
	bool operator==(const class CInterlockedPtr<CSceneObject*>  *, class CSceneObject * *); /* linkage=_ZNK15CInterlockedPtrIP12CSceneObjectEeqEPS1_ */
	bool operator!=(const class CInterlockedPtr<CSceneObject*>  *, class CSceneObject * *); /* linkage=_ZNK15CInterlockedPtrIP12CSceneObjectEneEPS1_ */
	class CSceneObject * * operator++(class CInterlockedPtr<CSceneObject*> *); /* linkage=_ZN15CInterlockedPtrIP12CSceneObjectEppEv */
	class CSceneObject * * operator++(class CInterlockedPtr<CSceneObject*> *, int); /* linkage=_ZN15CInterlockedPtrIP12CSceneObjectEppEi */
	class CSceneObject * * operator--(class CInterlockedPtr<CSceneObject*> *); /* linkage=_ZN15CInterlockedPtrIP12CSceneObjectEmmEv */
	class CSceneObject * * operator--(class CInterlockedPtr<CSceneObject*> *, int); /* linkage=_ZN15CInterlockedPtrIP12CSceneObjectEmmEi */
	bool AssignIf(class CInterlockedPtr<CSceneObject*> *, class CSceneObject * *, class CSceneObject * *); /* linkage=_ZN15CInterlockedPtrIP12CSceneObjectE8AssignIfEPS1_S3_ */
	class CSceneObject * * operator=(class CInterlockedPtr<CSceneObject*> *, class CSceneObject * *); /* linkage=_ZN15CInterlockedPtrIP12CSceneObjectEaSEPS1_ */
	class CSceneObject * * AtomicSet(class CInterlockedPtr<CSceneObject*> *, class CSceneObject * *); /* linkage=_ZN15CInterlockedPtrIP12CSceneObjectE9AtomicSetEPS1_ */
	class CSceneObject * * InterlockedExchange(class CInterlockedPtr<CSceneObject*> *, class CSceneObject * *); /* linkage=_ZN15CInterlockedPtrIP12CSceneObjectE19InterlockedExchangeEPS1_ */
	void operator+=(class CInterlockedPtr<CSceneObject*> *, int); /* linkage=_ZN15CInterlockedPtrIP12CSceneObjectEpLEi */
	void operator-=(class CInterlockedPtr<CSceneObject*> *, int); /* linkage=_ZN15CInterlockedPtrIP12CSceneObjectEmIEi */
	class CSceneObject * * AtomicAdd(class CInterlockedPtr<CSceneObject*> *, int); /* linkage=_ZN15CInterlockedPtrIP12CSceneObjectE9AtomicAddEi */
	class CSceneObject * * operator+(const class CInterlockedPtr<CSceneObject*>  *, int); /* linkage=_ZNK15CInterlockedPtrIP12CSceneObjectEplEi */
	class CSceneObject * * operator-(const class CInterlockedPtr<CSceneObject*>  *, int); /* linkage=_ZNK15CInterlockedPtrIP12CSceneObjectEmiEi */
	class CSceneObject * * operator+(const class CInterlockedPtr<CSceneObject*>  *, unsigned int); /* linkage=_ZNK15CInterlockedPtrIP12CSceneObjectEplEj */
	class CSceneObject * * operator-(const class CInterlockedPtr<CSceneObject*>  *, unsigned int); /* linkage=_ZNK15CInterlockedPtrIP12CSceneObjectEmiEj */
	size_t operator-(const class CInterlockedPtr<CSceneObject*>  *, class CSceneObject * *); /* linkage=_ZNK15CInterlockedPtrIP12CSceneObjectEmiEPS1_ */
	size_t operator-(const class CInterlockedPtr<CSceneObject*>  *, const class CInterlockedPtr<CSceneObject*>  &); /* linkage=_ZNK15CInterlockedPtrIP12CSceneObjectEmiERKS2_ */
};

// <044880F3> ../public/tier0/threadinterlocks.h:769
// member functions: 48
// member variable: 1
// class size: 8
class CInterlockedPtr<KMeansQuantizationWorkUnit> {
	/* ../public/tier0/threadinterlocks.h:772 */
	void CInterlockedPtr(CInterlockedPtr<KMeansQuantizationWorkUnit>* );
	/* ../public/tier0/threadinterlocks.h:782 */
	void CInterlockedPtr(CInterlockedPtr<KMeansQuantizationWorkUnit>* , KMeansQuantizationWorkUnit* );
	/* ../public/tier0/threadinterlocks.h:784 */
	KMeansQuantizationWorkUnit* GetRaw(const CInterlockedPtr<KMeansQuantizationWorkUnit>* );
	/* ../public/tier0/threadinterlocks.h:786 */
	KMeansQuantizationWorkUnit* operator KMeansQuantizationWorkUnit*(const CInterlockedPtr<KMeansQuantizationWorkUnit>* );
	/* ../public/tier0/threadinterlocks.h:788 */
	bool operator!(const CInterlockedPtr<KMeansQuantizationWorkUnit>* );
	/* ../public/tier0/threadinterlocks.h:789 */
	bool operator==(const CInterlockedPtr<KMeansQuantizationWorkUnit>* , KMeansQuantizationWorkUnit* );
	/* ../public/tier0/threadinterlocks.h:790 */
	bool operator!=(const CInterlockedPtr<KMeansQuantizationWorkUnit>* , KMeansQuantizationWorkUnit* );
	/* ../public/tier0/threadinterlocks.h:792 */
	KMeansQuantizationWorkUnit* operator++(CInterlockedPtr<KMeansQuantizationWorkUnit>* );
	/* ../public/tier0/threadinterlocks.h:793 */
	KMeansQuantizationWorkUnit* operator++(CInterlockedPtr<KMeansQuantizationWorkUnit>* , int);
	/* ../public/tier0/threadinterlocks.h:795 */
	KMeansQuantizationWorkUnit* operator--(CInterlockedPtr<KMeansQuantizationWorkUnit>* );
	/* ../public/tier0/threadinterlocks.h:796 */
	KMeansQuantizationWorkUnit* operator--(CInterlockedPtr<KMeansQuantizationWorkUnit>* , int);
	/* ../public/tier0/threadinterlocks.h:798 */
	bool AssignIf(CInterlockedPtr<KMeansQuantizationWorkUnit>* , KMeansQuantizationWorkUnit* , KMeansQuantizationWorkUnit* );
	/* ../public/tier0/threadinterlocks.h:800 */
	KMeansQuantizationWorkUnit* operator=(CInterlockedPtr<KMeansQuantizationWorkUnit>* , KMeansQuantizationWorkUnit* );
	/* ../public/tier0/threadinterlocks.h:803 */
	KMeansQuantizationWorkUnit* AtomicSet(CInterlockedPtr<KMeansQuantizationWorkUnit>* , KMeansQuantizationWorkUnit* );
	/* ../public/tier0/threadinterlocks.h:804 */
	KMeansQuantizationWorkUnit* InterlockedExchange(CInterlockedPtr<KMeansQuantizationWorkUnit>* , KMeansQuantizationWorkUnit* );
	/* ../public/tier0/threadinterlocks.h:806 */
	void operator+=(CInterlockedPtr<KMeansQuantizationWorkUnit>* , int);
	/* ../public/tier0/threadinterlocks.h:807 */
	void operator-=(CInterlockedPtr<KMeansQuantizationWorkUnit>* , int);
	/* ../public/tier0/threadinterlocks.h:810 */
	KMeansQuantizationWorkUnit* AtomicAdd(CInterlockedPtr<KMeansQuantizationWorkUnit>* , int);
	/* ../public/tier0/threadinterlocks.h:812 */
	KMeansQuantizationWorkUnit* operator+(const CInterlockedPtr<KMeansQuantizationWorkUnit>* , int);
	/* ../public/tier0/threadinterlocks.h:813 */
	KMeansQuantizationWorkUnit* operator-(const CInterlockedPtr<KMeansQuantizationWorkUnit>* , int);
	/* ../public/tier0/threadinterlocks.h:814 */
	KMeansQuantizationWorkUnit* operator+(const CInterlockedPtr<KMeansQuantizationWorkUnit>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:815 */
	KMeansQuantizationWorkUnit* operator-(const CInterlockedPtr<KMeansQuantizationWorkUnit>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:816 */
	size_t operator-(const CInterlockedPtr<KMeansQuantizationWorkUnit>* , KMeansQuantizationWorkUnit* );
	/* ../public/tier0/threadinterlocks.h:817 */
	size_t operator-(const CInterlockedPtr<KMeansQuantizationWorkUnit>* , const CInterlockedPtr<KMeansQuantizationWorkUnit>& );
private:
	volatile class KMeansQuantizationWorkUnit * m_value; /* 0 8 */
	void CInterlockedPtr(class CInterlockedPtr<KMeansQuantizationWorkUnit> *); /* linkage=_ZN15CInterlockedPtrI26KMeansQuantizationWorkUnitEC4Ev */
	void CInterlockedPtr(class CInterlockedPtr<KMeansQuantizationWorkUnit> *, class KMeansQuantizationWorkUnit *); /* linkage=_ZN15CInterlockedPtrI26KMeansQuantizationWorkUnitEC4EPS0_ */
	class KMeansQuantizationWorkUnit * GetRaw(const class CInterlockedPtr<KMeansQuantizationWorkUnit>  *); /* linkage=_ZNK15CInterlockedPtrI26KMeansQuantizationWorkUnitE6GetRawEv */
	class KMeansQuantizationWorkUnit * operator KMeansQuantizationWorkUnit*(const class CInterlockedPtr<KMeansQuantizationWorkUnit>  *); /* linkage=_ZNK15CInterlockedPtrI26KMeansQuantizationWorkUnitEcvPS0_Ev */
	bool operator!(const class CInterlockedPtr<KMeansQuantizationWorkUnit>  *); /* linkage=_ZNK15CInterlockedPtrI26KMeansQuantizationWorkUnitEntEv */
	bool operator==(const class CInterlockedPtr<KMeansQuantizationWorkUnit>  *, class KMeansQuantizationWorkUnit *); /* linkage=_ZNK15CInterlockedPtrI26KMeansQuantizationWorkUnitEeqEPS0_ */
	bool operator!=(const class CInterlockedPtr<KMeansQuantizationWorkUnit>  *, class KMeansQuantizationWorkUnit *); /* linkage=_ZNK15CInterlockedPtrI26KMeansQuantizationWorkUnitEneEPS0_ */
	class KMeansQuantizationWorkUnit * operator++(class CInterlockedPtr<KMeansQuantizationWorkUnit> *); /* linkage=_ZN15CInterlockedPtrI26KMeansQuantizationWorkUnitEppEv */
	class KMeansQuantizationWorkUnit * operator++(class CInterlockedPtr<KMeansQuantizationWorkUnit> *, int); /* linkage=_ZN15CInterlockedPtrI26KMeansQuantizationWorkUnitEppEi */
	class KMeansQuantizationWorkUnit * operator--(class CInterlockedPtr<KMeansQuantizationWorkUnit> *); /* linkage=_ZN15CInterlockedPtrI26KMeansQuantizationWorkUnitEmmEv */
	class KMeansQuantizationWorkUnit * operator--(class CInterlockedPtr<KMeansQuantizationWorkUnit> *, int); /* linkage=_ZN15CInterlockedPtrI26KMeansQuantizationWorkUnitEmmEi */
	bool AssignIf(class CInterlockedPtr<KMeansQuantizationWorkUnit> *, class KMeansQuantizationWorkUnit *, class KMeansQuantizationWorkUnit *); /* linkage=_ZN15CInterlockedPtrI26KMeansQuantizationWorkUnitE8AssignIfEPS0_S2_ */
	class KMeansQuantizationWorkUnit * operator=(class CInterlockedPtr<KMeansQuantizationWorkUnit> *, class KMeansQuantizationWorkUnit *); /* linkage=_ZN15CInterlockedPtrI26KMeansQuantizationWorkUnitEaSEPS0_ */
	class KMeansQuantizationWorkUnit * AtomicSet(class CInterlockedPtr<KMeansQuantizationWorkUnit> *, class KMeansQuantizationWorkUnit *); /* linkage=_ZN15CInterlockedPtrI26KMeansQuantizationWorkUnitE9AtomicSetEPS0_ */
	class KMeansQuantizationWorkUnit * InterlockedExchange(class CInterlockedPtr<KMeansQuantizationWorkUnit> *, class KMeansQuantizationWorkUnit *); /* linkage=_ZN15CInterlockedPtrI26KMeansQuantizationWorkUnitE19InterlockedExchangeEPS0_ */
	void operator+=(class CInterlockedPtr<KMeansQuantizationWorkUnit> *, int); /* linkage=_ZN15CInterlockedPtrI26KMeansQuantizationWorkUnitEpLEi */
	void operator-=(class CInterlockedPtr<KMeansQuantizationWorkUnit> *, int); /* linkage=_ZN15CInterlockedPtrI26KMeansQuantizationWorkUnitEmIEi */
	class KMeansQuantizationWorkUnit * AtomicAdd(class CInterlockedPtr<KMeansQuantizationWorkUnit> *, int); /* linkage=_ZN15CInterlockedPtrI26KMeansQuantizationWorkUnitE9AtomicAddEi */
	class KMeansQuantizationWorkUnit * operator+(const class CInterlockedPtr<KMeansQuantizationWorkUnit>  *, int); /* linkage=_ZNK15CInterlockedPtrI26KMeansQuantizationWorkUnitEplEi */
	class KMeansQuantizationWorkUnit * operator-(const class CInterlockedPtr<KMeansQuantizationWorkUnit>  *, int); /* linkage=_ZNK15CInterlockedPtrI26KMeansQuantizationWorkUnitEmiEi */
	class KMeansQuantizationWorkUnit * operator+(const class CInterlockedPtr<KMeansQuantizationWorkUnit>  *, unsigned int); /* linkage=_ZNK15CInterlockedPtrI26KMeansQuantizationWorkUnitEplEj */
	class KMeansQuantizationWorkUnit * operator-(const class CInterlockedPtr<KMeansQuantizationWorkUnit>  *, unsigned int); /* linkage=_ZNK15CInterlockedPtrI26KMeansQuantizationWorkUnitEmiEj */
	size_t operator-(const class CInterlockedPtr<KMeansQuantizationWorkUnit>  *, class KMeansQuantizationWorkUnit *); /* linkage=_ZNK15CInterlockedPtrI26KMeansQuantizationWorkUnitEmiEPS0_ */
	size_t operator-(const class CInterlockedPtr<KMeansQuantizationWorkUnit>  *, const class CInterlockedPtr<KMeansQuantizationWorkUnit>  &); /* linkage=_ZNK15CInterlockedPtrI26KMeansQuantizationWorkUnitEmiERKS1_ */
};

// <046BBCE2> ../public/tier0/threadinterlocks.h:769
// member functions: 48
// member variable: 1
// class size: 8
class CInterlockedPtr<int> {
	/* ../public/tier0/threadinterlocks.h:772 */
	void CInterlockedPtr(CInterlockedPtr<int>* );
	/* ../public/tier0/threadinterlocks.h:782 */
	void CInterlockedPtr(CInterlockedPtr<int>* , int* );
	/* ../public/tier0/threadinterlocks.h:784 */
	int* GetRaw(const CInterlockedPtr<int>* );
	/* ../public/tier0/threadinterlocks.h:786 */
	int* operator int*(const CInterlockedPtr<int>* );
	/* ../public/tier0/threadinterlocks.h:788 */
	bool operator!(const CInterlockedPtr<int>* );
	/* ../public/tier0/threadinterlocks.h:789 */
	bool operator==(const CInterlockedPtr<int>* , int* );
	/* ../public/tier0/threadinterlocks.h:790 */
	bool operator!=(const CInterlockedPtr<int>* , int* );
	/* ../public/tier0/threadinterlocks.h:792 */
	int* operator++(CInterlockedPtr<int>* );
	/* ../public/tier0/threadinterlocks.h:793 */
	int* operator++(CInterlockedPtr<int>* , int);
	/* ../public/tier0/threadinterlocks.h:795 */
	int* operator--(CInterlockedPtr<int>* );
	/* ../public/tier0/threadinterlocks.h:796 */
	int* operator--(CInterlockedPtr<int>* , int);
	/* ../public/tier0/threadinterlocks.h:798 */
	bool AssignIf(CInterlockedPtr<int>* , int* , int* );
	/* ../public/tier0/threadinterlocks.h:800 */
	int* operator=(CInterlockedPtr<int>* , int* );
	/* ../public/tier0/threadinterlocks.h:803 */
	int* AtomicSet(CInterlockedPtr<int>* , int* );
	/* ../public/tier0/threadinterlocks.h:804 */
	int* InterlockedExchange(CInterlockedPtr<int>* , int* );
	/* ../public/tier0/threadinterlocks.h:806 */
	void operator+=(CInterlockedPtr<int>* , int);
	/* ../public/tier0/threadinterlocks.h:807 */
	void operator-=(CInterlockedPtr<int>* , int);
	/* ../public/tier0/threadinterlocks.h:810 */
	int* AtomicAdd(CInterlockedPtr<int>* , int);
	/* ../public/tier0/threadinterlocks.h:812 */
	int* operator+(const CInterlockedPtr<int>* , int);
	/* ../public/tier0/threadinterlocks.h:813 */
	int* operator-(const CInterlockedPtr<int>* , int);
	/* ../public/tier0/threadinterlocks.h:814 */
	int* operator+(const CInterlockedPtr<int>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:815 */
	int* operator-(const CInterlockedPtr<int>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:816 */
	size_t operator-(const CInterlockedPtr<int>* , int* );
	/* ../public/tier0/threadinterlocks.h:817 */
	size_t operator-(const CInterlockedPtr<int>* , const CInterlockedPtr<int>& );
private:
	volatile int * m_value; /* 0 8 */
	void CInterlockedPtr(class CInterlockedPtr<int> *); /* linkage=_ZN15CInterlockedPtrIiEC4Ev */
	void CInterlockedPtr(class CInterlockedPtr<int> *, int *); /* linkage=_ZN15CInterlockedPtrIiEC4EPi */
	int * GetRaw(const class CInterlockedPtr<int>  *); /* linkage=_ZNK15CInterlockedPtrIiE6GetRawEv */
	int * operator int*(const class CInterlockedPtr<int>  *); /* linkage=_ZNK15CInterlockedPtrIiEcvPiEv */
	bool operator!(const class CInterlockedPtr<int>  *); /* linkage=_ZNK15CInterlockedPtrIiEntEv */
	bool operator==(const class CInterlockedPtr<int>  *, int *); /* linkage=_ZNK15CInterlockedPtrIiEeqEPi */
	bool operator!=(const class CInterlockedPtr<int>  *, int *); /* linkage=_ZNK15CInterlockedPtrIiEneEPi */
	int * operator++(class CInterlockedPtr<int> *); /* linkage=_ZN15CInterlockedPtrIiEppEv */
	int * operator++(class CInterlockedPtr<int> *, int); /* linkage=_ZN15CInterlockedPtrIiEppEi */
	int * operator--(class CInterlockedPtr<int> *); /* linkage=_ZN15CInterlockedPtrIiEmmEv */
	int * operator--(class CInterlockedPtr<int> *, int); /* linkage=_ZN15CInterlockedPtrIiEmmEi */
	bool AssignIf(class CInterlockedPtr<int> *, int *, int *); /* linkage=_ZN15CInterlockedPtrIiE8AssignIfEPiS1_ */
	int * operator=(class CInterlockedPtr<int> *, int *); /* linkage=_ZN15CInterlockedPtrIiEaSEPi */
	int * AtomicSet(class CInterlockedPtr<int> *, int *); /* linkage=_ZN15CInterlockedPtrIiE9AtomicSetEPi */
	int * InterlockedExchange(class CInterlockedPtr<int> *, int *); /* linkage=_ZN15CInterlockedPtrIiE19InterlockedExchangeEPi */
	void operator+=(class CInterlockedPtr<int> *, int); /* linkage=_ZN15CInterlockedPtrIiEpLEi */
	void operator-=(class CInterlockedPtr<int> *, int); /* linkage=_ZN15CInterlockedPtrIiEmIEi */
	int * AtomicAdd(class CInterlockedPtr<int> *, int); /* linkage=_ZN15CInterlockedPtrIiE9AtomicAddEi */
	int * operator+(const class CInterlockedPtr<int>  *, int); /* linkage=_ZNK15CInterlockedPtrIiEplEi */
	int * operator-(const class CInterlockedPtr<int>  *, int); /* linkage=_ZNK15CInterlockedPtrIiEmiEi */
	int * operator+(const class CInterlockedPtr<int>  *, unsigned int); /* linkage=_ZNK15CInterlockedPtrIiEplEj */
	int * operator-(const class CInterlockedPtr<int>  *, unsigned int); /* linkage=_ZNK15CInterlockedPtrIiEmiEj */
	size_t operator-(const class CInterlockedPtr<int>  *, int *); /* linkage=_ZNK15CInterlockedPtrIiEmiEPi */
	size_t operator-(const class CInterlockedPtr<int>  *, const class CInterlockedPtr<int>  &); /* linkage=_ZNK15CInterlockedPtrIiEmiERKS0_ */
};

// <0618E58C> ../public/tier0/threadinterlocks.h:769
// member functions: 48
// member variable: 1
// class size: 8
class CInterlockedPtr<BentNormalComputationJob_t> {
	/* ../public/tier0/threadinterlocks.h:772 */
	void CInterlockedPtr(CInterlockedPtr<BentNormalComputationJob_t>* );
	/* ../public/tier0/threadinterlocks.h:782 */
	void CInterlockedPtr(CInterlockedPtr<BentNormalComputationJob_t>* , BentNormalComputationJob_t* );
	/* ../public/tier0/threadinterlocks.h:784 */
	BentNormalComputationJob_t* GetRaw(const CInterlockedPtr<BentNormalComputationJob_t>* );
	/* ../public/tier0/threadinterlocks.h:786 */
	BentNormalComputationJob_t* operator BentNormalComputationJob_t*(const CInterlockedPtr<BentNormalComputationJob_t>* );
	/* ../public/tier0/threadinterlocks.h:788 */
	bool operator!(const CInterlockedPtr<BentNormalComputationJob_t>* );
	/* ../public/tier0/threadinterlocks.h:789 */
	bool operator==(const CInterlockedPtr<BentNormalComputationJob_t>* , BentNormalComputationJob_t* );
	/* ../public/tier0/threadinterlocks.h:790 */
	bool operator!=(const CInterlockedPtr<BentNormalComputationJob_t>* , BentNormalComputationJob_t* );
	/* ../public/tier0/threadinterlocks.h:792 */
	BentNormalComputationJob_t* operator++(CInterlockedPtr<BentNormalComputationJob_t>* );
	/* ../public/tier0/threadinterlocks.h:793 */
	BentNormalComputationJob_t* operator++(CInterlockedPtr<BentNormalComputationJob_t>* , int);
	/* ../public/tier0/threadinterlocks.h:795 */
	BentNormalComputationJob_t* operator--(CInterlockedPtr<BentNormalComputationJob_t>* );
	/* ../public/tier0/threadinterlocks.h:796 */
	BentNormalComputationJob_t* operator--(CInterlockedPtr<BentNormalComputationJob_t>* , int);
	/* ../public/tier0/threadinterlocks.h:798 */
	bool AssignIf(CInterlockedPtr<BentNormalComputationJob_t>* , BentNormalComputationJob_t* , BentNormalComputationJob_t* );
	/* ../public/tier0/threadinterlocks.h:800 */
	BentNormalComputationJob_t* operator=(CInterlockedPtr<BentNormalComputationJob_t>* , BentNormalComputationJob_t* );
	/* ../public/tier0/threadinterlocks.h:803 */
	BentNormalComputationJob_t* AtomicSet(CInterlockedPtr<BentNormalComputationJob_t>* , BentNormalComputationJob_t* );
	/* ../public/tier0/threadinterlocks.h:804 */
	BentNormalComputationJob_t* InterlockedExchange(CInterlockedPtr<BentNormalComputationJob_t>* , BentNormalComputationJob_t* );
	/* ../public/tier0/threadinterlocks.h:806 */
	void operator+=(CInterlockedPtr<BentNormalComputationJob_t>* , int);
	/* ../public/tier0/threadinterlocks.h:807 */
	void operator-=(CInterlockedPtr<BentNormalComputationJob_t>* , int);
	/* ../public/tier0/threadinterlocks.h:810 */
	BentNormalComputationJob_t* AtomicAdd(CInterlockedPtr<BentNormalComputationJob_t>* , int);
	/* ../public/tier0/threadinterlocks.h:812 */
	BentNormalComputationJob_t* operator+(const CInterlockedPtr<BentNormalComputationJob_t>* , int);
	/* ../public/tier0/threadinterlocks.h:813 */
	BentNormalComputationJob_t* operator-(const CInterlockedPtr<BentNormalComputationJob_t>* , int);
	/* ../public/tier0/threadinterlocks.h:814 */
	BentNormalComputationJob_t* operator+(const CInterlockedPtr<BentNormalComputationJob_t>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:815 */
	BentNormalComputationJob_t* operator-(const CInterlockedPtr<BentNormalComputationJob_t>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:816 */
	size_t operator-(const CInterlockedPtr<BentNormalComputationJob_t>* , BentNormalComputationJob_t* );
	/* ../public/tier0/threadinterlocks.h:817 */
	size_t operator-(const CInterlockedPtr<BentNormalComputationJob_t>* , const CInterlockedPtr<BentNormalComputationJob_t>& );
private:
	volatile class BentNormalComputationJob_t * m_value; /* 0 8 */
	void CInterlockedPtr(class CInterlockedPtr<BentNormalComputationJob_t> *); /* linkage=_ZN15CInterlockedPtrI26BentNormalComputationJob_tEC4Ev */
	void CInterlockedPtr(class CInterlockedPtr<BentNormalComputationJob_t> *, class BentNormalComputationJob_t *); /* linkage=_ZN15CInterlockedPtrI26BentNormalComputationJob_tEC4EPS0_ */
	class BentNormalComputationJob_t * GetRaw(const class CInterlockedPtr<BentNormalComputationJob_t>  *); /* linkage=_ZNK15CInterlockedPtrI26BentNormalComputationJob_tE6GetRawEv */
	class BentNormalComputationJob_t * operator BentNormalComputationJob_t*(const class CInterlockedPtr<BentNormalComputationJob_t>  *); /* linkage=_ZNK15CInterlockedPtrI26BentNormalComputationJob_tEcvPS0_Ev */
	bool operator!(const class CInterlockedPtr<BentNormalComputationJob_t>  *); /* linkage=_ZNK15CInterlockedPtrI26BentNormalComputationJob_tEntEv */
	bool operator==(const class CInterlockedPtr<BentNormalComputationJob_t>  *, class BentNormalComputationJob_t *); /* linkage=_ZNK15CInterlockedPtrI26BentNormalComputationJob_tEeqEPS0_ */
	bool operator!=(const class CInterlockedPtr<BentNormalComputationJob_t>  *, class BentNormalComputationJob_t *); /* linkage=_ZNK15CInterlockedPtrI26BentNormalComputationJob_tEneEPS0_ */
	class BentNormalComputationJob_t * operator++(class CInterlockedPtr<BentNormalComputationJob_t> *); /* linkage=_ZN15CInterlockedPtrI26BentNormalComputationJob_tEppEv */
	class BentNormalComputationJob_t * operator++(class CInterlockedPtr<BentNormalComputationJob_t> *, int); /* linkage=_ZN15CInterlockedPtrI26BentNormalComputationJob_tEppEi */
	class BentNormalComputationJob_t * operator--(class CInterlockedPtr<BentNormalComputationJob_t> *); /* linkage=_ZN15CInterlockedPtrI26BentNormalComputationJob_tEmmEv */
	class BentNormalComputationJob_t * operator--(class CInterlockedPtr<BentNormalComputationJob_t> *, int); /* linkage=_ZN15CInterlockedPtrI26BentNormalComputationJob_tEmmEi */
	bool AssignIf(class CInterlockedPtr<BentNormalComputationJob_t> *, class BentNormalComputationJob_t *, class BentNormalComputationJob_t *); /* linkage=_ZN15CInterlockedPtrI26BentNormalComputationJob_tE8AssignIfEPS0_S2_ */
	class BentNormalComputationJob_t * operator=(class CInterlockedPtr<BentNormalComputationJob_t> *, class BentNormalComputationJob_t *); /* linkage=_ZN15CInterlockedPtrI26BentNormalComputationJob_tEaSEPS0_ */
	class BentNormalComputationJob_t * AtomicSet(class CInterlockedPtr<BentNormalComputationJob_t> *, class BentNormalComputationJob_t *); /* linkage=_ZN15CInterlockedPtrI26BentNormalComputationJob_tE9AtomicSetEPS0_ */
	class BentNormalComputationJob_t * InterlockedExchange(class CInterlockedPtr<BentNormalComputationJob_t> *, class BentNormalComputationJob_t *); /* linkage=_ZN15CInterlockedPtrI26BentNormalComputationJob_tE19InterlockedExchangeEPS0_ */
	void operator+=(class CInterlockedPtr<BentNormalComputationJob_t> *, int); /* linkage=_ZN15CInterlockedPtrI26BentNormalComputationJob_tEpLEi */
	void operator-=(class CInterlockedPtr<BentNormalComputationJob_t> *, int); /* linkage=_ZN15CInterlockedPtrI26BentNormalComputationJob_tEmIEi */
	class BentNormalComputationJob_t * AtomicAdd(class CInterlockedPtr<BentNormalComputationJob_t> *, int); /* linkage=_ZN15CInterlockedPtrI26BentNormalComputationJob_tE9AtomicAddEi */
	class BentNormalComputationJob_t * operator+(const class CInterlockedPtr<BentNormalComputationJob_t>  *, int); /* linkage=_ZNK15CInterlockedPtrI26BentNormalComputationJob_tEplEi */
	class BentNormalComputationJob_t * operator-(const class CInterlockedPtr<BentNormalComputationJob_t>  *, int); /* linkage=_ZNK15CInterlockedPtrI26BentNormalComputationJob_tEmiEi */
	class BentNormalComputationJob_t * operator+(const class CInterlockedPtr<BentNormalComputationJob_t>  *, unsigned int); /* linkage=_ZNK15CInterlockedPtrI26BentNormalComputationJob_tEplEj */
	class BentNormalComputationJob_t * operator-(const class CInterlockedPtr<BentNormalComputationJob_t>  *, unsigned int); /* linkage=_ZNK15CInterlockedPtrI26BentNormalComputationJob_tEmiEj */
	size_t operator-(const class CInterlockedPtr<BentNormalComputationJob_t>  *, class BentNormalComputationJob_t *); /* linkage=_ZNK15CInterlockedPtrI26BentNormalComputationJob_tEmiEPS0_ */
	size_t operator-(const class CInterlockedPtr<BentNormalComputationJob_t>  *, const class CInterlockedPtr<BentNormalComputationJob_t>  &); /* linkage=_ZNK15CInterlockedPtrI26BentNormalComputationJob_tEmiERKS1_ */
};

// <068D7C39> ../public/tier0/threadinterlocks.h:769
// member functions: 48
// member variable: 1
// class size: 8
class CInterlockedPtr<SerializeStaticCombosWorkUnit_t> {
	/* ../public/tier0/threadinterlocks.h:772 */
	void CInterlockedPtr(CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* );
	/* ../public/tier0/threadinterlocks.h:782 */
	void CInterlockedPtr(CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* , SerializeStaticCombosWorkUnit_t* );
	/* ../public/tier0/threadinterlocks.h:784 */
	SerializeStaticCombosWorkUnit_t* GetRaw(const CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* );
	/* ../public/tier0/threadinterlocks.h:786 */
	SerializeStaticCombosWorkUnit_t* operator SerializeStaticCombosWorkUnit_t*(const CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* );
	/* ../public/tier0/threadinterlocks.h:788 */
	bool operator!(const CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* );
	/* ../public/tier0/threadinterlocks.h:789 */
	bool operator==(const CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* , SerializeStaticCombosWorkUnit_t* );
	/* ../public/tier0/threadinterlocks.h:790 */
	bool operator!=(const CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* , SerializeStaticCombosWorkUnit_t* );
	/* ../public/tier0/threadinterlocks.h:792 */
	SerializeStaticCombosWorkUnit_t* operator++(CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* );
	/* ../public/tier0/threadinterlocks.h:793 */
	SerializeStaticCombosWorkUnit_t* operator++(CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* , int);
	/* ../public/tier0/threadinterlocks.h:795 */
	SerializeStaticCombosWorkUnit_t* operator--(CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* );
	/* ../public/tier0/threadinterlocks.h:796 */
	SerializeStaticCombosWorkUnit_t* operator--(CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* , int);
	/* ../public/tier0/threadinterlocks.h:798 */
	bool AssignIf(CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* , SerializeStaticCombosWorkUnit_t* , SerializeStaticCombosWorkUnit_t* );
	/* ../public/tier0/threadinterlocks.h:800 */
	SerializeStaticCombosWorkUnit_t* operator=(CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* , SerializeStaticCombosWorkUnit_t* );
	/* ../public/tier0/threadinterlocks.h:803 */
	SerializeStaticCombosWorkUnit_t* AtomicSet(CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* , SerializeStaticCombosWorkUnit_t* );
	/* ../public/tier0/threadinterlocks.h:804 */
	SerializeStaticCombosWorkUnit_t* InterlockedExchange(CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* , SerializeStaticCombosWorkUnit_t* );
	/* ../public/tier0/threadinterlocks.h:806 */
	void operator+=(CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* , int);
	/* ../public/tier0/threadinterlocks.h:807 */
	void operator-=(CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* , int);
	/* ../public/tier0/threadinterlocks.h:810 */
	SerializeStaticCombosWorkUnit_t* AtomicAdd(CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* , int);
	/* ../public/tier0/threadinterlocks.h:812 */
	SerializeStaticCombosWorkUnit_t* operator+(const CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* , int);
	/* ../public/tier0/threadinterlocks.h:813 */
	SerializeStaticCombosWorkUnit_t* operator-(const CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* , int);
	/* ../public/tier0/threadinterlocks.h:814 */
	SerializeStaticCombosWorkUnit_t* operator+(const CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:815 */
	SerializeStaticCombosWorkUnit_t* operator-(const CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:816 */
	size_t operator-(const CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* , SerializeStaticCombosWorkUnit_t* );
	/* ../public/tier0/threadinterlocks.h:817 */
	size_t operator-(const CInterlockedPtr<SerializeStaticCombosWorkUnit_t>* , const CInterlockedPtr<SerializeStaticCombosWorkUnit_t>& );
private:
	volatile class SerializeStaticCombosWorkUnit_t * m_value; /* 0 8 */
	void CInterlockedPtr(class CInterlockedPtr<SerializeStaticCombosWorkUnit_t> *); /* linkage=_ZN15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEC4Ev */
	void CInterlockedPtr(class CInterlockedPtr<SerializeStaticCombosWorkUnit_t> *, class SerializeStaticCombosWorkUnit_t *); /* linkage=_ZN15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEC4EPS0_ */
	class SerializeStaticCombosWorkUnit_t * GetRaw(const class CInterlockedPtr<SerializeStaticCombosWorkUnit_t>  *); /* linkage=_ZNK15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tE6GetRawEv */
	class SerializeStaticCombosWorkUnit_t * operator SerializeStaticCombosWorkUnit_t*(const class CInterlockedPtr<SerializeStaticCombosWorkUnit_t>  *); /* linkage=_ZNK15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEcvPS0_Ev */
	bool operator!(const class CInterlockedPtr<SerializeStaticCombosWorkUnit_t>  *); /* linkage=_ZNK15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEntEv */
	bool operator==(const class CInterlockedPtr<SerializeStaticCombosWorkUnit_t>  *, class SerializeStaticCombosWorkUnit_t *); /* linkage=_ZNK15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEeqEPS0_ */
	bool operator!=(const class CInterlockedPtr<SerializeStaticCombosWorkUnit_t>  *, class SerializeStaticCombosWorkUnit_t *); /* linkage=_ZNK15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEneEPS0_ */
	class SerializeStaticCombosWorkUnit_t * operator++(class CInterlockedPtr<SerializeStaticCombosWorkUnit_t> *); /* linkage=_ZN15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEppEv */
	class SerializeStaticCombosWorkUnit_t * operator++(class CInterlockedPtr<SerializeStaticCombosWorkUnit_t> *, int); /* linkage=_ZN15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEppEi */
	class SerializeStaticCombosWorkUnit_t * operator--(class CInterlockedPtr<SerializeStaticCombosWorkUnit_t> *); /* linkage=_ZN15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEmmEv */
	class SerializeStaticCombosWorkUnit_t * operator--(class CInterlockedPtr<SerializeStaticCombosWorkUnit_t> *, int); /* linkage=_ZN15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEmmEi */
	bool AssignIf(class CInterlockedPtr<SerializeStaticCombosWorkUnit_t> *, class SerializeStaticCombosWorkUnit_t *, class SerializeStaticCombosWorkUnit_t *); /* linkage=_ZN15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tE8AssignIfEPS0_S2_ */
	class SerializeStaticCombosWorkUnit_t * operator=(class CInterlockedPtr<SerializeStaticCombosWorkUnit_t> *, class SerializeStaticCombosWorkUnit_t *); /* linkage=_ZN15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEaSEPS0_ */
	class SerializeStaticCombosWorkUnit_t * AtomicSet(class CInterlockedPtr<SerializeStaticCombosWorkUnit_t> *, class SerializeStaticCombosWorkUnit_t *); /* linkage=_ZN15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tE9AtomicSetEPS0_ */
	class SerializeStaticCombosWorkUnit_t * InterlockedExchange(class CInterlockedPtr<SerializeStaticCombosWorkUnit_t> *, class SerializeStaticCombosWorkUnit_t *); /* linkage=_ZN15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tE19InterlockedExchangeEPS0_ */
	void operator+=(class CInterlockedPtr<SerializeStaticCombosWorkUnit_t> *, int); /* linkage=_ZN15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEpLEi */
	void operator-=(class CInterlockedPtr<SerializeStaticCombosWorkUnit_t> *, int); /* linkage=_ZN15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEmIEi */
	class SerializeStaticCombosWorkUnit_t * AtomicAdd(class CInterlockedPtr<SerializeStaticCombosWorkUnit_t> *, int); /* linkage=_ZN15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tE9AtomicAddEi */
	class SerializeStaticCombosWorkUnit_t * operator+(const class CInterlockedPtr<SerializeStaticCombosWorkUnit_t>  *, int); /* linkage=_ZNK15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEplEi */
	class SerializeStaticCombosWorkUnit_t * operator-(const class CInterlockedPtr<SerializeStaticCombosWorkUnit_t>  *, int); /* linkage=_ZNK15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEmiEi */
	class SerializeStaticCombosWorkUnit_t * operator+(const class CInterlockedPtr<SerializeStaticCombosWorkUnit_t>  *, unsigned int); /* linkage=_ZNK15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEplEj */
	class SerializeStaticCombosWorkUnit_t * operator-(const class CInterlockedPtr<SerializeStaticCombosWorkUnit_t>  *, unsigned int); /* linkage=_ZNK15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEmiEj */
	size_t operator-(const class CInterlockedPtr<SerializeStaticCombosWorkUnit_t>  *, class SerializeStaticCombosWorkUnit_t *); /* linkage=_ZNK15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEmiEPS0_ */
	size_t operator-(const class CInterlockedPtr<SerializeStaticCombosWorkUnit_t>  *, const class CInterlockedPtr<SerializeStaticCombosWorkUnit_t>  &); /* linkage=_ZNK15CInterlockedPtrI31SerializeStaticCombosWorkUnit_tEmiERKS1_ */
};

// <0015499F> ../public/tier0/threadinterlocks.h:769
// member functions: 48
// member variable: 1
// class size: 8
class CInterlockedPtr<void> {
	/* ../public/tier0/threadinterlocks.h:772 */
	void CInterlockedPtr(CInterlockedPtr<void>* );
	/* ../public/tier0/threadinterlocks.h:782 */
	void CInterlockedPtr(CInterlockedPtr<void>* , void* );
	/* ../public/tier0/threadinterlocks.h:784 */
	void* GetRaw(const CInterlockedPtr<void>* );
	/* ../public/tier0/threadinterlocks.h:786 */
	void* operator void*(const CInterlockedPtr<void>* );
	/* ../public/tier0/threadinterlocks.h:788 */
	bool operator!(const CInterlockedPtr<void>* );
	/* ../public/tier0/threadinterlocks.h:789 */
	bool operator==(const CInterlockedPtr<void>* , void* );
	/* ../public/tier0/threadinterlocks.h:790 */
	bool operator!=(const CInterlockedPtr<void>* , void* );
	/* ../public/tier0/threadinterlocks.h:792 */
	void* operator++(CInterlockedPtr<void>* );
	/* ../public/tier0/threadinterlocks.h:793 */
	void* operator++(CInterlockedPtr<void>* , int);
	/* ../public/tier0/threadinterlocks.h:795 */
	void* operator--(CInterlockedPtr<void>* );
	/* ../public/tier0/threadinterlocks.h:796 */
	void* operator--(CInterlockedPtr<void>* , int);
	/* ../public/tier0/threadinterlocks.h:798 */
	bool AssignIf(CInterlockedPtr<void>* , void* , void* );
	/* ../public/tier0/threadinterlocks.h:800 */
	void* operator=(CInterlockedPtr<void>* , void* );
	/* ../public/tier0/threadinterlocks.h:803 */
	void* AtomicSet(CInterlockedPtr<void>* , void* );
	/* ../public/tier0/threadinterlocks.h:804 */
	void* InterlockedExchange(CInterlockedPtr<void>* , void* );
	/* ../public/tier0/threadinterlocks.h:806 */
	void operator+=(CInterlockedPtr<void>* , int);
	/* ../public/tier0/threadinterlocks.h:807 */
	void operator-=(CInterlockedPtr<void>* , int);
	/* ../public/tier0/threadinterlocks.h:810 */
	void* AtomicAdd(CInterlockedPtr<void>* , int);
	/* ../public/tier0/threadinterlocks.h:812 */
	void* operator+(const CInterlockedPtr<void>* , int);
	/* ../public/tier0/threadinterlocks.h:813 */
	void* operator-(const CInterlockedPtr<void>* , int);
	/* ../public/tier0/threadinterlocks.h:814 */
	void* operator+(const CInterlockedPtr<void>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:815 */
	void* operator-(const CInterlockedPtr<void>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:816 */
	size_t operator-(const CInterlockedPtr<void>* , void* );
	/* ../public/tier0/threadinterlocks.h:817 */
	size_t operator-(const CInterlockedPtr<void>* , const CInterlockedPtr<void>& );
private:
	volatile void * m_value; /* 0 8 */
	void CInterlockedPtr(class CInterlockedPtr<void> *); /* linkage=_ZN15CInterlockedPtrIvEC4Ev */
	void CInterlockedPtr(class CInterlockedPtr<void> *, void *); /* linkage=_ZN15CInterlockedPtrIvEC4EPv */
	void * GetRaw(const class CInterlockedPtr<void>  *); /* linkage=_ZNK15CInterlockedPtrIvE6GetRawEv */
	void * operator void*(const class CInterlockedPtr<void>  *); /* linkage=_ZNK15CInterlockedPtrIvEcvPvEv */
	bool operator!(const class CInterlockedPtr<void>  *); /* linkage=_ZNK15CInterlockedPtrIvEntEv */
	bool operator==(const class CInterlockedPtr<void>  *, void *); /* linkage=_ZNK15CInterlockedPtrIvEeqEPv */
	bool operator!=(const class CInterlockedPtr<void>  *, void *); /* linkage=_ZNK15CInterlockedPtrIvEneEPv */
	void * operator++(class CInterlockedPtr<void> *); /* linkage=_ZN15CInterlockedPtrIvEppEv */
	void * operator++(class CInterlockedPtr<void> *, int); /* linkage=_ZN15CInterlockedPtrIvEppEi */
	void * operator--(class CInterlockedPtr<void> *); /* linkage=_ZN15CInterlockedPtrIvEmmEv */
	void * operator--(class CInterlockedPtr<void> *, int); /* linkage=_ZN15CInterlockedPtrIvEmmEi */
	bool AssignIf(class CInterlockedPtr<void> *, void *, void *); /* linkage=_ZN15CInterlockedPtrIvE8AssignIfEPvS1_ */
	void * operator=(class CInterlockedPtr<void> *, void *); /* linkage=_ZN15CInterlockedPtrIvEaSEPv */
	void * AtomicSet(class CInterlockedPtr<void> *, void *); /* linkage=_ZN15CInterlockedPtrIvE9AtomicSetEPv */
	void * InterlockedExchange(class CInterlockedPtr<void> *, void *); /* linkage=_ZN15CInterlockedPtrIvE19InterlockedExchangeEPv */
	void operator+=(class CInterlockedPtr<void> *, int); /* linkage=_ZN15CInterlockedPtrIvEpLEi */
	void operator-=(class CInterlockedPtr<void> *, int); /* linkage=_ZN15CInterlockedPtrIvEmIEi */
	void * AtomicAdd(class CInterlockedPtr<void> *, int); /* linkage=_ZN15CInterlockedPtrIvE9AtomicAddEi */
	void * operator+(const class CInterlockedPtr<void>  *, int); /* linkage=_ZNK15CInterlockedPtrIvEplEi */
	void * operator-(const class CInterlockedPtr<void>  *, int); /* linkage=_ZNK15CInterlockedPtrIvEmiEi */
	void * operator+(const class CInterlockedPtr<void>  *, unsigned int); /* linkage=_ZNK15CInterlockedPtrIvEplEj */
	void * operator-(const class CInterlockedPtr<void>  *, unsigned int); /* linkage=_ZNK15CInterlockedPtrIvEmiEj */
	size_t operator-(const class CInterlockedPtr<void>  *, void *); /* linkage=_ZNK15CInterlockedPtrIvEmiEPv */
	size_t operator-(const class CInterlockedPtr<void>  *, const class CInterlockedPtr<void>  &); /* linkage=_ZNK15CInterlockedPtrIvEmiERKS0_ */
};

// <006357D2> ../public/tier0/threadinterlocks.h:769
// member functions: 24
// member variable: 1
// class size: 8
class CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t> {
	/* ../public/tier0/threadinterlocks.h:772 */
	void CInterlockedPtr(CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* );
	/* ../public/tier0/threadinterlocks.h:782 */
	void CInterlockedPtr(CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* , PipelineWorkItem_t* );
	/* ../public/tier0/threadinterlocks.h:784 */
	PipelineWorkItem_t* GetRaw(const CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* );
	/* ../public/tier0/threadinterlocks.h:786 */
	PipelineWorkItem_t* operator CFossilizeStateCreator::PipelineWorkItem_t*(const CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* );
	/* ../public/tier0/threadinterlocks.h:788 */
	bool operator!(const CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* );
	/* ../public/tier0/threadinterlocks.h:789 */
	bool operator==(const CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* , PipelineWorkItem_t* );
	/* ../public/tier0/threadinterlocks.h:790 */
	bool operator!=(const CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* , PipelineWorkItem_t* );
	/* ../public/tier0/threadinterlocks.h:792 */
	PipelineWorkItem_t* operator++(CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* );
	/* ../public/tier0/threadinterlocks.h:793 */
	PipelineWorkItem_t* operator++(CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* , int);
	/* ../public/tier0/threadinterlocks.h:795 */
	PipelineWorkItem_t* operator--(CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* );
	/* ../public/tier0/threadinterlocks.h:796 */
	PipelineWorkItem_t* operator--(CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* , int);
	/* ../public/tier0/threadinterlocks.h:798 */
	bool AssignIf(CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* , PipelineWorkItem_t* , PipelineWorkItem_t* );
	/* ../public/tier0/threadinterlocks.h:800 */
	PipelineWorkItem_t* operator=(CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* , PipelineWorkItem_t* );
	/* ../public/tier0/threadinterlocks.h:803 */
	PipelineWorkItem_t* AtomicSet(CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* , PipelineWorkItem_t* );
	/* ../public/tier0/threadinterlocks.h:804 */
	PipelineWorkItem_t* InterlockedExchange(CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* , PipelineWorkItem_t* );
	/* ../public/tier0/threadinterlocks.h:806 */
	void operator+=(CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* , int);
	/* ../public/tier0/threadinterlocks.h:807 */
	void operator-=(CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* , int);
	/* ../public/tier0/threadinterlocks.h:810 */
	PipelineWorkItem_t* AtomicAdd(CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* , int);
	/* ../public/tier0/threadinterlocks.h:812 */
	PipelineWorkItem_t* operator+(const CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* , int);
	/* ../public/tier0/threadinterlocks.h:813 */
	PipelineWorkItem_t* operator-(const CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* , int);
	/* ../public/tier0/threadinterlocks.h:814 */
	PipelineWorkItem_t* operator+(const CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:815 */
	PipelineWorkItem_t* operator-(const CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:816 */
	size_t operator-(const CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* , PipelineWorkItem_t* );
	/* ../public/tier0/threadinterlocks.h:817 */
	size_t operator-(const CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>* , const CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>& );
private:
	volatile class PipelineWorkItem_t * m_value; /* 0 8 */
};

// <004C842E> ../public/tier0/threadinterlocks.h:769
// member functions: 24
// member variable: 1
// class size: 8
class CInterlockedPtr<unsigned char> {
	/* ../public/tier0/threadinterlocks.h:772 */
	void CInterlockedPtr(CInterlockedPtr<unsigned char>* );
	/* ../public/tier0/threadinterlocks.h:782 */
	void CInterlockedPtr(CInterlockedPtr<unsigned char>* , unsigned char* );
	/* ../public/tier0/threadinterlocks.h:784 */
	unsigned char* GetRaw(const CInterlockedPtr<unsigned char>* );
	/* ../public/tier0/threadinterlocks.h:786 */
	unsigned char* operator unsigned char*(const CInterlockedPtr<unsigned char>* );
	/* ../public/tier0/threadinterlocks.h:788 */
	bool operator!(const CInterlockedPtr<unsigned char>* );
	/* ../public/tier0/threadinterlocks.h:789 */
	bool operator==(const CInterlockedPtr<unsigned char>* , unsigned char* );
	/* ../public/tier0/threadinterlocks.h:790 */
	bool operator!=(const CInterlockedPtr<unsigned char>* , unsigned char* );
	/* ../public/tier0/threadinterlocks.h:792 */
	unsigned char* operator++(CInterlockedPtr<unsigned char>* );
	/* ../public/tier0/threadinterlocks.h:793 */
	unsigned char* operator++(CInterlockedPtr<unsigned char>* , int);
	/* ../public/tier0/threadinterlocks.h:795 */
	unsigned char* operator--(CInterlockedPtr<unsigned char>* );
	/* ../public/tier0/threadinterlocks.h:796 */
	unsigned char* operator--(CInterlockedPtr<unsigned char>* , int);
	/* ../public/tier0/threadinterlocks.h:798 */
	bool AssignIf(CInterlockedPtr<unsigned char>* , unsigned char* , unsigned char* );
	/* ../public/tier0/threadinterlocks.h:800 */
	unsigned char* operator=(CInterlockedPtr<unsigned char>* , unsigned char* );
	/* ../public/tier0/threadinterlocks.h:803 */
	unsigned char* AtomicSet(CInterlockedPtr<unsigned char>* , unsigned char* );
	/* ../public/tier0/threadinterlocks.h:804 */
	unsigned char* InterlockedExchange(CInterlockedPtr<unsigned char>* , unsigned char* );
	/* ../public/tier0/threadinterlocks.h:806 */
	void operator+=(CInterlockedPtr<unsigned char>* , int);
	/* ../public/tier0/threadinterlocks.h:807 */
	void operator-=(CInterlockedPtr<unsigned char>* , int);
	/* ../public/tier0/threadinterlocks.h:810 */
	unsigned char* AtomicAdd(CInterlockedPtr<unsigned char>* , int);
	/* ../public/tier0/threadinterlocks.h:812 */
	unsigned char* operator+(const CInterlockedPtr<unsigned char>* , int);
	/* ../public/tier0/threadinterlocks.h:813 */
	unsigned char* operator-(const CInterlockedPtr<unsigned char>* , int);
	/* ../public/tier0/threadinterlocks.h:814 */
	unsigned char* operator+(const CInterlockedPtr<unsigned char>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:815 */
	unsigned char* operator-(const CInterlockedPtr<unsigned char>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:816 */
	size_t operator-(const CInterlockedPtr<unsigned char>* , unsigned char* );
	/* ../public/tier0/threadinterlocks.h:817 */
	size_t operator-(const CInterlockedPtr<unsigned char>* , const CInterlockedPtr<unsigned char>& );
private:
	volatile unsigned char * m_value; /* 0 8 */
};

// <004C8800> ../public/tier0/threadinterlocks.h:769
// member functions: 24
// member variable: 1
// class size: 8
class CInterlockedPtr<CThreadLocalScope> {
	/* ../public/tier0/threadinterlocks.h:772 */
	void CInterlockedPtr(CInterlockedPtr<CThreadLocalScope>* );
	/* ../public/tier0/threadinterlocks.h:782 */
	void CInterlockedPtr(CInterlockedPtr<CThreadLocalScope>* , CThreadLocalScope* );
	/* ../public/tier0/threadinterlocks.h:784 */
	CThreadLocalScope* GetRaw(const CInterlockedPtr<CThreadLocalScope>* );
	/* ../public/tier0/threadinterlocks.h:786 */
	CThreadLocalScope* operator CThreadLocalScope*(const CInterlockedPtr<CThreadLocalScope>* );
	/* ../public/tier0/threadinterlocks.h:788 */
	bool operator!(const CInterlockedPtr<CThreadLocalScope>* );
	/* ../public/tier0/threadinterlocks.h:789 */
	bool operator==(const CInterlockedPtr<CThreadLocalScope>* , CThreadLocalScope* );
	/* ../public/tier0/threadinterlocks.h:790 */
	bool operator!=(const CInterlockedPtr<CThreadLocalScope>* , CThreadLocalScope* );
	/* ../public/tier0/threadinterlocks.h:792 */
	CThreadLocalScope* operator++(CInterlockedPtr<CThreadLocalScope>* );
	/* ../public/tier0/threadinterlocks.h:793 */
	CThreadLocalScope* operator++(CInterlockedPtr<CThreadLocalScope>* , int);
	/* ../public/tier0/threadinterlocks.h:795 */
	CThreadLocalScope* operator--(CInterlockedPtr<CThreadLocalScope>* );
	/* ../public/tier0/threadinterlocks.h:796 */
	CThreadLocalScope* operator--(CInterlockedPtr<CThreadLocalScope>* , int);
	/* ../public/tier0/threadinterlocks.h:798 */
	bool AssignIf(CInterlockedPtr<CThreadLocalScope>* , CThreadLocalScope* , CThreadLocalScope* );
	/* ../public/tier0/threadinterlocks.h:800 */
	CThreadLocalScope* operator=(CInterlockedPtr<CThreadLocalScope>* , CThreadLocalScope* );
	/* ../public/tier0/threadinterlocks.h:803 */
	CThreadLocalScope* AtomicSet(CInterlockedPtr<CThreadLocalScope>* , CThreadLocalScope* );
	/* ../public/tier0/threadinterlocks.h:804 */
	CThreadLocalScope* InterlockedExchange(CInterlockedPtr<CThreadLocalScope>* , CThreadLocalScope* );
	/* ../public/tier0/threadinterlocks.h:806 */
	void operator+=(CInterlockedPtr<CThreadLocalScope>* , int);
	/* ../public/tier0/threadinterlocks.h:807 */
	void operator-=(CInterlockedPtr<CThreadLocalScope>* , int);
	/* ../public/tier0/threadinterlocks.h:810 */
	CThreadLocalScope* AtomicAdd(CInterlockedPtr<CThreadLocalScope>* , int);
	/* ../public/tier0/threadinterlocks.h:812 */
	CThreadLocalScope* operator+(const CInterlockedPtr<CThreadLocalScope>* , int);
	/* ../public/tier0/threadinterlocks.h:813 */
	CThreadLocalScope* operator-(const CInterlockedPtr<CThreadLocalScope>* , int);
	/* ../public/tier0/threadinterlocks.h:814 */
	CThreadLocalScope* operator+(const CInterlockedPtr<CThreadLocalScope>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:815 */
	CThreadLocalScope* operator-(const CInterlockedPtr<CThreadLocalScope>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:816 */
	size_t operator-(const CInterlockedPtr<CThreadLocalScope>* , CThreadLocalScope* );
	/* ../public/tier0/threadinterlocks.h:817 */
	size_t operator-(const CInterlockedPtr<CThreadLocalScope>* , const CInterlockedPtr<CThreadLocalScope>& );
private:
	volatile class CThreadLocalScope * m_value; /* 0 8 */
};

// <004C8BC2> ../public/tier0/threadinterlocks.h:769
// member functions: 48
// member variable: 1
// class size: 8
class CInterlockedPtr<CFiber> {
	/* ../public/tier0/threadinterlocks.h:772 */
	void CInterlockedPtr(CInterlockedPtr<CFiber>* );
	/* ../public/tier0/threadinterlocks.h:782 */
	void CInterlockedPtr(CInterlockedPtr<CFiber>* , CFiber* );
	/* ../public/tier0/threadinterlocks.h:784 */
	CFiber* GetRaw(const CInterlockedPtr<CFiber>* );
	/* ../public/tier0/threadinterlocks.h:786 */
	CFiber* operator CFiber*(const CInterlockedPtr<CFiber>* );
	/* ../public/tier0/threadinterlocks.h:788 */
	bool operator!(const CInterlockedPtr<CFiber>* );
	/* ../public/tier0/threadinterlocks.h:789 */
	bool operator==(const CInterlockedPtr<CFiber>* , CFiber* );
	/* ../public/tier0/threadinterlocks.h:790 */
	bool operator!=(const CInterlockedPtr<CFiber>* , CFiber* );
	/* ../public/tier0/threadinterlocks.h:792 */
	CFiber* operator++(CInterlockedPtr<CFiber>* );
	/* ../public/tier0/threadinterlocks.h:793 */
	CFiber* operator++(CInterlockedPtr<CFiber>* , int);
	/* ../public/tier0/threadinterlocks.h:795 */
	CFiber* operator--(CInterlockedPtr<CFiber>* );
	/* ../public/tier0/threadinterlocks.h:796 */
	CFiber* operator--(CInterlockedPtr<CFiber>* , int);
	/* ../public/tier0/threadinterlocks.h:798 */
	bool AssignIf(CInterlockedPtr<CFiber>* , CFiber* , CFiber* );
	/* ../public/tier0/threadinterlocks.h:800 */
	CFiber* operator=(CInterlockedPtr<CFiber>* , CFiber* );
	/* ../public/tier0/threadinterlocks.h:803 */
	CFiber* AtomicSet(CInterlockedPtr<CFiber>* , CFiber* );
	/* ../public/tier0/threadinterlocks.h:804 */
	CFiber* InterlockedExchange(CInterlockedPtr<CFiber>* , CFiber* );
	/* ../public/tier0/threadinterlocks.h:806 */
	void operator+=(CInterlockedPtr<CFiber>* , int);
	/* ../public/tier0/threadinterlocks.h:807 */
	void operator-=(CInterlockedPtr<CFiber>* , int);
	/* ../public/tier0/threadinterlocks.h:810 */
	CFiber* AtomicAdd(CInterlockedPtr<CFiber>* , int);
	/* ../public/tier0/threadinterlocks.h:812 */
	CFiber* operator+(const CInterlockedPtr<CFiber>* , int);
	/* ../public/tier0/threadinterlocks.h:813 */
	CFiber* operator-(const CInterlockedPtr<CFiber>* , int);
	/* ../public/tier0/threadinterlocks.h:814 */
	CFiber* operator+(const CInterlockedPtr<CFiber>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:815 */
	CFiber* operator-(const CInterlockedPtr<CFiber>* , unsigned int);
	/* ../public/tier0/threadinterlocks.h:816 */
	size_t operator-(const CInterlockedPtr<CFiber>* , CFiber* );
	/* ../public/tier0/threadinterlocks.h:817 */
	size_t operator-(const CInterlockedPtr<CFiber>* , const CInterlockedPtr<CFiber>& );
private:
	volatile class CFiber * m_value; /* 0 8 */
	void CInterlockedPtr(class CInterlockedPtr<CFiber> *); /* linkage=_ZN15CInterlockedPtrI6CFiberEC4Ev */
	void CInterlockedPtr(class CInterlockedPtr<CFiber> *, class CFiber *); /* linkage=_ZN15CInterlockedPtrI6CFiberEC4EPS0_ */
	class CFiber * GetRaw(const class CInterlockedPtr<CFiber>  *); /* linkage=_ZNK15CInterlockedPtrI6CFiberE6GetRawEv */
	class CFiber * operator CFiber*(const class CInterlockedPtr<CFiber>  *); /* linkage=_ZNK15CInterlockedPtrI6CFiberEcvPS0_Ev */
	bool operator!(const class CInterlockedPtr<CFiber>  *); /* linkage=_ZNK15CInterlockedPtrI6CFiberEntEv */
	bool operator==(const class CInterlockedPtr<CFiber>  *, class CFiber *); /* linkage=_ZNK15CInterlockedPtrI6CFiberEeqEPS0_ */
	bool operator!=(const class CInterlockedPtr<CFiber>  *, class CFiber *); /* linkage=_ZNK15CInterlockedPtrI6CFiberEneEPS0_ */
	class CFiber * operator++(class CInterlockedPtr<CFiber> *); /* linkage=_ZN15CInterlockedPtrI6CFiberEppEv */
	class CFiber * operator++(class CInterlockedPtr<CFiber> *, int); /* linkage=_ZN15CInterlockedPtrI6CFiberEppEi */
	class CFiber * operator--(class CInterlockedPtr<CFiber> *); /* linkage=_ZN15CInterlockedPtrI6CFiberEmmEv */
	class CFiber * operator--(class CInterlockedPtr<CFiber> *, int); /* linkage=_ZN15CInterlockedPtrI6CFiberEmmEi */
	bool AssignIf(class CInterlockedPtr<CFiber> *, class CFiber *, class CFiber *); /* linkage=_ZN15CInterlockedPtrI6CFiberE8AssignIfEPS0_S2_ */
	class CFiber * operator=(class CInterlockedPtr<CFiber> *, class CFiber *); /* linkage=_ZN15CInterlockedPtrI6CFiberEaSEPS0_ */
	class CFiber * AtomicSet(class CInterlockedPtr<CFiber> *, class CFiber *); /* linkage=_ZN15CInterlockedPtrI6CFiberE9AtomicSetEPS0_ */
	class CFiber * InterlockedExchange(class CInterlockedPtr<CFiber> *, class CFiber *); /* linkage=_ZN15CInterlockedPtrI6CFiberE19InterlockedExchangeEPS0_ */
	void operator+=(class CInterlockedPtr<CFiber> *, int); /* linkage=_ZN15CInterlockedPtrI6CFiberEpLEi */
	void operator-=(class CInterlockedPtr<CFiber> *, int); /* linkage=_ZN15CInterlockedPtrI6CFiberEmIEi */
	class CFiber * AtomicAdd(class CInterlockedPtr<CFiber> *, int); /* linkage=_ZN15CInterlockedPtrI6CFiberE9AtomicAddEi */
	class CFiber * operator+(const class CInterlockedPtr<CFiber>  *, int); /* linkage=_ZNK15CInterlockedPtrI6CFiberEplEi */
	class CFiber * operator-(const class CInterlockedPtr<CFiber>  *, int); /* linkage=_ZNK15CInterlockedPtrI6CFiberEmiEi */
	class CFiber * operator+(const class CInterlockedPtr<CFiber>  *, unsigned int); /* linkage=_ZNK15CInterlockedPtrI6CFiberEplEj */
	class CFiber * operator-(const class CInterlockedPtr<CFiber>  *, unsigned int); /* linkage=_ZNK15CInterlockedPtrI6CFiberEmiEj */
	size_t operator-(const class CInterlockedPtr<CFiber>  *, class CFiber *); /* linkage=_ZNK15CInterlockedPtrI6CFiberEmiEPS0_ */
	size_t operator-(const class CInterlockedPtr<CFiber>  *, const class CInterlockedPtr<CFiber>  &); /* linkage=_ZNK15CInterlockedPtrI6CFiberEmiERKS1_ */
};

// <068E9DCF> ../public/tier0/threadinterlocks.h:772
void CInterlockedPtr<SerializeStaticCombosWorkUnit_t>::CInterlockedPtr()
{
} /* size: 0 */

// <068E9DB6> ../public/tier0/threadinterlocks.h:772
inline void CInterlockedPtr<SerializeStaticCombosWorkUnit_t>::CInterlockedPtr()
{
} /* size: 0 */

// <061909DC> ../public/tier0/threadinterlocks.h:772
void CInterlockedPtr<BentNormalComputationJob_t>::CInterlockedPtr()
{
} /* size: 0 */

// <061909C3> ../public/tier0/threadinterlocks.h:772
inline void CInterlockedPtr<BentNormalComputationJob_t>::CInterlockedPtr()
{
} /* size: 0 */

// <046CA63A> ../public/tier0/threadinterlocks.h:772
void CInterlockedPtr<int>::CInterlockedPtr()
{
} /* size: 0 */

// <046CA621> ../public/tier0/threadinterlocks.h:772
inline void CInterlockedPtr<int>::CInterlockedPtr()
{
} /* size: 0 */

// <044ABE68> ../public/tier0/threadinterlocks.h:772
void CInterlockedPtr<KMeansQuantizationWorkUnit>::CInterlockedPtr()
{
} /* size: 0 */

// <044ABE4F> ../public/tier0/threadinterlocks.h:772
inline void CInterlockedPtr<KMeansQuantizationWorkUnit>::CInterlockedPtr()
{
} /* size: 0 */

// <02E23F51> ../public/tier0/threadinterlocks.h:772
void CInterlockedPtr<CSceneObject::CInterlockedPtr()
{
} /* size: 0 */

// <02E23F38> ../public/tier0/threadinterlocks.h:772
inline void CInterlockedPtr<CSceneObject::CInterlockedPtr()
{
} /* size: 0 */

// <0012FB7D> ../public/tier0/threadinterlocks.h:772
void CInterlockedPtr<CrashItem_t>::CInterlockedPtr()
{
} /* size: 0 */

// <0012FB64> ../public/tier0/threadinterlocks.h:772
inline void CInterlockedPtr<CrashItem_t>::CInterlockedPtr()
{
} /* size: 0 */

// <006554DF> ../public/tier0/threadinterlocks.h:772
void CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>::CInterlockedPtr()
{
} /* size: 0 */

// <006554C6> ../public/tier0/threadinterlocks.h:772
inline void CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>::CInterlockedPtr()
{
} /* size: 0 */

// <003053C3> ../public/tier0/threadinterlocks.h:772
void CInterlockedPtr<void>::CInterlockedPtr()
{
} /* size: 0 */

// <003053AA> ../public/tier0/threadinterlocks.h:772
inline void CInterlockedPtr<void>::CInterlockedPtr()
{
} /* size: 0 */

// <004D2115> ../public/tier0/threadinterlocks.h:772
void CInterlockedPtr<unsigned char>::CInterlockedPtr()
{
} /* size: 0 */

// <004D20FC> ../public/tier0/threadinterlocks.h:772
inline void CInterlockedPtr<unsigned char>::CInterlockedPtr()
{
} /* size: 0 */

// <004D20E5> ../public/tier0/threadinterlocks.h:772
void CInterlockedPtr<CThreadLocalScope>::CInterlockedPtr()
{
} /* size: 0 */

// <004D20CC> ../public/tier0/threadinterlocks.h:772
inline void CInterlockedPtr<CThreadLocalScope>::CInterlockedPtr()
{
} /* size: 0 */

// <004D20B5> ../public/tier0/threadinterlocks.h:772
void CInterlockedPtr<CFiber>::CInterlockedPtr()
{
} /* size: 0 */

// <004D209C> ../public/tier0/threadinterlocks.h:772
inline void CInterlockedPtr<CFiber>::CInterlockedPtr()
{
} /* size: 0 */

// <068E1885> ../public/tier0/threadinterlocks.h:784
inline void CInterlockedPtr<SerializeStaticCombosWorkUnit_t>::GetRaw()
{
} /* size: 0 */

// <0619020B> ../public/tier0/threadinterlocks.h:784
inline void CInterlockedPtr<BentNormalComputationJob_t>::GetRaw()
{
} /* size: 0 */

// <046C42F7> ../public/tier0/threadinterlocks.h:784
inline void CInterlockedPtr<int>::GetRaw()
{
} /* size: 0 */

// <04490484> ../public/tier0/threadinterlocks.h:784
inline void CInterlockedPtr<KMeansQuantizationWorkUnit>::GetRaw()
{
} /* size: 0 */

// <02E19869> ../public/tier0/threadinterlocks.h:784
inline void CInterlockedPtr<CSceneObject::GetRaw()
{
} /* size: 0 */

// <0012CFCE> ../public/tier0/threadinterlocks.h:784
inline void CInterlockedPtr<CrashItem_t>::GetRaw()
{
} /* size: 0 */

// <00641638> ../public/tier0/threadinterlocks.h:784
inline void CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>::GetRaw()
{
} /* size: 0 */

// <004D2178> ../public/tier0/threadinterlocks.h:784
inline void CInterlockedPtr<unsigned char>::GetRaw()
{
} /* size: 0 */

// <004D202A> ../public/tier0/threadinterlocks.h:784
inline void CInterlockedPtr<CFiber>::GetRaw()
{
} /* size: 0 */

// <068DC342> ../public/tier0/threadinterlocks.h:786
inline void operator CInterlockedPtr<SerializeStaticCombosWorkUnit_t>::SerializeStaticCombosWorkUnit_t*()
{
} /* size: 0 */

// <0618FCC5> ../public/tier0/threadinterlocks.h:786
inline void operator CInterlockedPtr<BentNormalComputationJob_t>::BentNormalComputationJob_t*()
{
} /* size: 0 */

// <046C2E20> ../public/tier0/threadinterlocks.h:786
inline void operator CInterlockedPtr<int>::int*()
{
} /* size: 0 */

// <0448BF1C> ../public/tier0/threadinterlocks.h:786
inline void operator CInterlockedPtr<KMeansQuantizationWorkUnit>::KMeansQuantizationWorkUnit*()
{
} /* size: 0 */

// <02E1230A> ../public/tier0/threadinterlocks.h:786
inline void operator CInterlockedPtr<CSceneObject::CSceneObject**()
{
} /* size: 0 */

// <0012A564> ../public/tier0/threadinterlocks.h:786
inline void operator CInterlockedPtr<CrashItem_t>::CrashItem_t*()
{
} /* size: 0 */

// <00C30828> ../public/tier0/threadinterlocks.h:786
inline void* operator CInterlockedPtr<void>::void*()
{
} /* size: 0 */

// <00637BD6> ../public/tier0/threadinterlocks.h:786
inline void operator CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>::CFossilizeStateCreator::PipelineWorkItem_t*()
{
} /* size: 0 */

// <00C307CA> ../public/tier0/threadinterlocks.h:798
inline void CInterlockedPtr<void>::AssignIf(void* conditionValue, void* newValue)
{
} /* size: 0 */

// <004D2043> ../public/tier0/threadinterlocks.h:798
inline void CInterlockedPtr<unsigned char>::AssignIf(unsigned char* conditionValue, unsigned char* newValue)
{
} /* size: 0 */

// <068E9D90> ../public/tier0/threadinterlocks.h:800
inline void CInterlockedPtr<SerializeStaticCombosWorkUnit_t>::operator=(SerializeStaticCombosWorkUnit_t* newValue)
{
} /* size: 0 */

// <0619099D> ../public/tier0/threadinterlocks.h:800
inline void CInterlockedPtr<BentNormalComputationJob_t>::operator=(BentNormalComputationJob_t* newValue)
{
} /* size: 0 */

// <046CA117> ../public/tier0/threadinterlocks.h:800
inline void CInterlockedPtr<int>::operator=(int* newValue)
{
} /* size: 0 */

// <044ABE29> ../public/tier0/threadinterlocks.h:800
inline void CInterlockedPtr<KMeansQuantizationWorkUnit>::operator=(KMeansQuantizationWorkUnit* newValue)
{
} /* size: 0 */

// <02E23F12> ../public/tier0/threadinterlocks.h:800
inline void CInterlockedPtr<CSceneObject::operator=(CSceneObject** newValue)
{
} /* size: 0 */

// <0012FB3E> ../public/tier0/threadinterlocks.h:800
inline void CInterlockedPtr<CrashItem_t>::operator=(CrashItem_t* newValue)
{
} /* size: 0 */

// <00C307FD> ../public/tier0/threadinterlocks.h:800
inline void* CInterlockedPtr<void>::operator=(void* newValue)
{
} /* size: 0 */

// <006554A0> ../public/tier0/threadinterlocks.h:800
inline void CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>::operator=(PipelineWorkItem_t* newValue)
{
} /* size: 0 */

// <004D21DD> ../public/tier0/threadinterlocks.h:800
inline void CInterlockedPtr<unsigned char>::operator=(unsigned char* newValue)
{
} /* size: 0 */

// <004D21B7> ../public/tier0/threadinterlocks.h:800
inline void CInterlockedPtr<CThreadLocalScope>::operator=(CThreadLocalScope* newValue)
{
} /* size: 0 */

// <004D2191> ../public/tier0/threadinterlocks.h:800
inline void CInterlockedPtr<CFiber>::operator=(CFiber* newValue)
{
} /* size: 0 */

// <004D2152> ../public/tier0/threadinterlocks.h:803
inline void CInterlockedPtr<CThreadLocalScope>::AtomicSet(CThreadLocalScope* newValue)
{
} /* size: 0 */

// <004D212C> ../public/tier0/threadinterlocks.h:803
inline void CInterlockedPtr<CFiber>::AtomicSet(CFiber* newValue)
{
} /* size: 0 */

// <068DC31C> ../public/tier0/threadinterlocks.h:810
inline void CInterlockedPtr<SerializeStaticCombosWorkUnit_t>::AtomicAdd(int add)
{
} /* size: 0 */

// <0618FC9F> ../public/tier0/threadinterlocks.h:810
inline void CInterlockedPtr<BentNormalComputationJob_t>::AtomicAdd(int add)
{
} /* size: 0 */

// <046C2DFA> ../public/tier0/threadinterlocks.h:810
inline void CInterlockedPtr<int>::AtomicAdd(int add)
{
} /* size: 0 */

// <0448BEF6> ../public/tier0/threadinterlocks.h:810
inline void CInterlockedPtr<KMeansQuantizationWorkUnit>::AtomicAdd(int add)
{
} /* size: 0 */

// <02E122E4> ../public/tier0/threadinterlocks.h:810
inline void CInterlockedPtr<CSceneObject::AtomicAdd(int add)
{
} /* size: 0 */

// <0012A53E> ../public/tier0/threadinterlocks.h:810
inline void CInterlockedPtr<CrashItem_t>::AtomicAdd(int add)
{
} /* size: 0 */

// <00637BB0> ../public/tier0/threadinterlocks.h:810
inline void CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>::AtomicAdd(int add)
{
} /* size: 0 */

