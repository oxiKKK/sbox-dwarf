
//
// public/tier0/bitvec.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 138
//	classes: 23
//

// <000A52ED> ../public/tier0/bitvec.h:16
// member functions: 6
// member variables: 2
// class size: 16
class CBitVecAccessor {
	/* ../public/tier0/bitvec.h:19 */
	void CBitVecAccessor(CBitVecAccessor* , uint32* , int);
	/* ../public/tier0/bitvec.h:21 */
	void operator=(CBitVecAccessor* , int);
	/* ../public/tier0/bitvec.h:22 */
	uint32 operator uint32(CBitVecAccessor* );
private:
	uint32 * m_pDWords; /* 0 8 */
	int m_iBit; /* 8 4 */
	void CBitVecAccessor(class CBitVecAccessor *, uint32 *, int); /* linkage=_ZN15CBitVecAccessorC4EPji */
	void operator=(class CBitVecAccessor *, int); /* linkage=_ZN15CBitVecAccessoraSEi */
	uint32 operator uint32(class CBitVecAccessor *); /* linkage=_ZN15CBitVecAccessorcvjEv */
};

// <06F1C425> ../../public/tier0/bitvec.h:16
// member functions: 6
// member variables: 2
// class size: 16
class CBitVecAccessor {
	/* ../../public/tier0/bitvec.h:19 */
	void CBitVecAccessor(CBitVecAccessor* , uint32* , int);
	/* ../../public/tier0/bitvec.h:21 */
	void operator=(CBitVecAccessor* , int);
	/* ../../public/tier0/bitvec.h:22 */
	uint32 operator uint32(CBitVecAccessor* );
private:
	uint32 * m_pDWords; /* 0 8 */
	int m_iBit; /* 8 4 */
	void CBitVecAccessor(class CBitVecAccessor *, uint32 *, int); /* linkage=_ZN15CBitVecAccessorC4EPji */
	void operator=(class CBitVecAccessor *, int); /* linkage=_ZN15CBitVecAccessoraSEi */
	uint32 operator uint32(class CBitVecAccessor *); /* linkage=_ZN15CBitVecAccessorcvjEv */
};

// <05419245> ../public/tier0/bitvec.h:43
inline int FirstBitInWordThatIsKnownToBeNonZero(uint elem, int offset)
{
} /* size: 0 */

// <05419216> ../public/tier0/bitvec.h:101
inline int FirstBitInWord(unsigned int elem, int offset)
{
} /* size: 0 */

// <054191D7> ../public/tier0/bitvec.h:112
// variable: 1
inline unsigned int GetStartBitMask(int startBit)
{
	unsigned int g_StartMask; // 114
} /* size: 0, variables: 1 */

// <023B2A32> ../public/tier0/bitvec.h:153
// variable: 1
inline unsigned int GetEndMask(int numBits)
{
	unsigned int bitStringEndMasks; // 155
} /* size: 0, variables: 1 */

// <044215EB> ../public/tier0/bitvec.h:195
// variable: 1
inline int GetBitForBitnum(int bitNum)
{
	int bitsForBitnum; // 197
} /* size: 0, variables: 1 */

// <023B2A0F> ../public/tier0/bitvec.h:253
inline int CalcNumIntsForBits(int numBits)
{
} /* size: 0 */

// <0557C973> ../public/tier0/bitvec.h:265
// variables: 2
inline uint PopulationCount(uint64 v)
{
	const uint64  w; // 267
	const uint64  x; // 268
} /* size: 0, variables: 2 */

// <026ABABD> ../public/tier0/bitvec.h:287
// variable: 1
inline uint32 ReverseBits(uint32 v, uint32 nBits)
{
	uint32 nShift; // 295
} /* size: 0, variables: 1 */

// <003DB51F> ../public/tier0/bitvec.h:304
// variable: 1
inline bool BitVec_IsBitSet(const uint32* pBase, int nBitNum)
{
	const uint32* pInt; // 306
} /* size: 0, variables: 1 */

// <023B2995> ../public/tier0/bitvec.h:310
// variable: 1
inline void Bitvec_Set(uint32* pBits, int nBitNum)
{
	uint32* pInt; // 312
} /* size: 0, variables: 1 */

// <049A4BFE> ../public/tier0/bitvec.h:316
// variable: 1
inline void Bitvec_Unset(uint32* pBits, int nBitNum)
{
	uint32* pInt; // 318
} /* size: 0, variables: 1 */

// <03B9BBF1> ../public/tier0/bitvec.h:340
inline void BitVec_ClearAll(uint32* pDst, int nDWords)
{
} /* size: 0 */

// <049A4B95> ../public/tier0/bitvec.h:345
inline void BitVec_SetAll(uint32* pDst, int nDWords, uint32 nEndMask)
{
} /* size: 0 */

// <00D23F15> ../public/tier0/bitvec.h:354
inline void BitVec_SetAll(uint32* pDst, int nDWords)
{
} /* size: 0 */

// <03B9BB9C> ../public/tier0/bitvec.h:369
// variable: 1
inline void BitVec_AndNot(uint32* pDst, const uint32* pSrc, const uint32* pAndNot, int nDWords)
{
	uint32* pEnd; // 371
} /* size: 0, variables: 1 */

// <03B9BB5D> ../public/tier0/bitvec.h:378
// variable: 1
inline bool BitVec_IsAnySet(const uint32* pDst, int nDWords)
{
	const uint32* pEnd; // 380
} /* size: 0, variables: 1 */

// <053ED491> ../public/tier0/bitvec.h:407
// variables: 5
inline int BitVec_FindNextSetBit<short unsigned int, false>(int startBit, short unsigned int numBits, short unsigned int numDWords, const uint32* pBase, uint32 nEndMask)
{
	{
		const uint32* pCurElem; // 413
		const uint32* pLastElem; // 414
		{
			unsigned int elem; // 418
		}
		{
			const uint32* pAlignedStartElem; // 436
			const uint32* pAlignedLastElem; // 438
		}
	}
} /* size: 0 */

// <053F27B8> ../public/tier0/bitvec.h:480
// variables: 8
inline void BitVec_And<false>(uint32* pDest, const uint32* pOperand1, const uint32* pOperand2, int numDWords)
{
	int i; // 482
	{
		uintp nOperand1Align; // 486
		uintp nOperand2Align; // 487
		{
			const int  nDwordsPerSIMDUnit; // 492
			{
				int nUnalignedDWords; // 498
				{
					int j; // 501
				}
			}
			{
				int nUnalignedBytes; // 521
				{
					int j; // 524
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <003C85B9> ../public/tier0/bitvec.h:587
// variables: 8
inline void BitVec_Or<false>(uint32* pDest, const uint32* pOperand1, const uint32* pOperand2, int numDWords)
{
	int i; // 589
	{
		uintp nOperand1Align; // 593
		uintp nOperand2Align; // 594
		{
			const int  nDwordsPerSIMDUnit; // 599
			{
				int nUnalignedDWords; // 605
				{
					int j; // 608
				}
			}
			{
				int nUnalignedBytes; // 628
				{
					int j; // 631
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <06F2E8BD> ../../public/tier0/bitvec.h:914
void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT()
{
} /* size: 0 */

// <06F2E8A0> ../../public/tier0/bitvec.h:914
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT()
{
} /* size: 0 */

// <0280E1C2> ../public/tier0/bitvec.h:914
void CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::~CBitVecT()
{
} /* size: 0 */

// <0280E1A5> ../public/tier0/bitvec.h:914
inline void CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::~CBitVecT()
{
} /* size: 0 */

// <000A5739> ../public/tier0/bitvec.h:914
// member functions: 53
// member variable: 1
// class size: 24
class CBitVecT<CVarBitVecBase<short unsigned int, 32> > : public CVarBitVecBase<short unsigned int, 32> {
public:
	/* class CVarBitVecBase<short unsigned int, 32> <ancestor>; */ /* 0 24 */
	/* ../public/tier0/bitvec.h:917 */
	void CBitVecT(CBitVecT<CVarBitVecBase<short unsigned int, 32> >* );
	/* ../public/tier0/bitvec.h:918 */
	void CBitVecT(CBitVecT<CVarBitVecBase<short unsigned int, 32> >* , int);
	/* ../public/tier0/bitvec.h:920 */
	void Init(CBitVecT<CVarBitVecBase<short unsigned int, 32> >* , int);
	/* ../public/tier0/bitvec.h:923 */
	CBitVecAccessor operator[](CBitVecT<CVarBitVecBase<short unsigned int, 32> >* , int);
	/* ../public/tier0/bitvec.h:924 */
	uint32 operator[](const CBitVecT<CVarBitVecBase<short unsigned int, 32> >* , int);
	/* ../public/tier0/bitvec.h:944 */
	bool IsAllClear(const CBitVecT<CVarBitVecBase<short unsigned int, 32> >* );
	/* ../public/tier0/bitvec.h:945 */
	bool IsAllSet(const CBitVecT<CVarBitVecBase<short unsigned int, 32> >* );
	/* ../public/tier0/bitvec.h:947 */
	uint32 Get(const CBitVecT<CVarBitVecBase<short unsigned int, 32> >* , uint32);
	/* ../public/tier0/bitvec.h:948 */
	bool IsBitSet(const CBitVecT<CVarBitVecBase<short unsigned int, 32> >* , int);
	/* ../public/tier0/bitvec.h:949 */
	void Set(CBitVecT<CVarBitVecBase<short unsigned int, 32> >* , int);
	/* ../public/tier0/bitvec.h:950 */
	void Set(CBitVecT<CVarBitVecBase<short unsigned int, 32> >* , int, bool);
	/* ../public/tier0/bitvec.h:951 */
	void Clear(CBitVecT<CVarBitVecBase<short unsigned int, 32> >* , int);
	/* ../public/tier0/bitvec.h:953 */
	bool TestAndSet(CBitVecT<CVarBitVecBase<short unsigned int, 32> >* , int);
	/* ../public/tier0/bitvec.h:955 */
	void Set(CBitVecT<CVarBitVecBase<short unsigned int, 32> >* , uint32, uint32);
	/* ../public/tier0/bitvec.h:956 */
	void Clear(CBitVecT<CVarBitVecBase<short unsigned int, 32> >* , uint32, uint32);
	/* ../public/tier0/bitvec.h:957 */
	uint32 Get(CBitVecT<CVarBitVecBase<short unsigned int, 32> >* , uint32, uint32);
	/* ../public/tier0/bitvec.h:959 */
	void SetAll(CBitVecT<CVarBitVecBase<short unsigned int, 32> >* );
	/* ../public/tier0/bitvec.h:960 */
	void ClearAll(CBitVecT<CVarBitVecBase<short unsigned int, 32> >* );
	/* ../public/tier0/bitvec.h:962 */
	uint32 GetDWord(const CBitVecT<CVarBitVecBase<short unsigned int, 32> >* , int);
	/* ../public/tier0/bitvec.h:963 */
	void SetDWord(CBitVecT<CVarBitVecBase<short unsigned int, 32> >* , int, uint32);
	/* ../public/tier0/bitvec.h:964 */
	uint PopulationCount(const CBitVecT<CVarBitVecBase<short unsigned int, 32> >* );
	/* ../public/tier0/bitvec.h:966 */
	void PackBitsFromWords(CBitVecT<CVarBitVecBase<short unsigned int, 32> >* , const uint16* , int, int);
	/* ../public/tier0/bitvec.h:980 */
	void GetOffsetMaskForBit(uint32, uint32* , uint32* );
	/* ../public/tier0/bitvec.h:995 */
	void Ranged_Set(CBitVecT<CVarBitVecBase<short unsigned int, 32> >* , int, int);
	/* ../public/tier0/bitvec.h:996 */
	void Ranged_Clear(CBitVecT<CVarBitVecBase<short unsigned int, 32> >* , int, int);
	void CBitVecT(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEEC4Ev */
	void CBitVecT(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEEC4Ei */
	void Init(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE4InitEi */
	class CBitVecAccessor operator[](class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEEixEi */
	uint32 operator[](const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  *, int); /* linkage=_ZNK8CBitVecTI14CVarBitVecBaseItLt32EEEixEi */
	bool IsAllClear(const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  *); /* linkage=_ZNK8CBitVecTI14CVarBitVecBaseItLt32EEE10IsAllClearEv */
	bool IsAllSet(const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  *); /* linkage=_ZNK8CBitVecTI14CVarBitVecBaseItLt32EEE8IsAllSetEv */
	uint32 Get(const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  *, uint32); /* linkage=_ZNK8CBitVecTI14CVarBitVecBaseItLt32EEE3GetEj */
	bool IsBitSet(const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  *, int); /* linkage=_ZNK8CBitVecTI14CVarBitVecBaseItLt32EEE8IsBitSetEi */
	void Set(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE3SetEi */
	void Set(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int, bool); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE3SetEib */
	void Clear(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE5ClearEi */
	bool TestAndSet(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE10TestAndSetEi */
	void Set(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, uint32, uint32); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE3SetEjj */
	void Clear(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, uint32, uint32); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE5ClearEjj */
	uint32 Get(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, uint32, uint32); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE3GetEjj */
	void SetAll(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE6SetAllEv */
	void ClearAll(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE8ClearAllEv */
	uint32 GetDWord(const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  *, int); /* linkage=_ZNK8CBitVecTI14CVarBitVecBaseItLt32EEE8GetDWordEi */
	void SetDWord(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int, uint32); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE8SetDWordEij */
	uint PopulationCount(const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  *); /* linkage=_ZNK8CBitVecTI14CVarBitVecBaseItLt32EEE15PopulationCountEv */
	void PackBitsFromWords(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, const uint16  *, int, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE17PackBitsFromWordsEPKtii */
	void GetOffsetMaskForBit(uint32, uint32 *, uint32 *); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE19GetOffsetMaskForBitEjPjS3_ */
	void Ranged_Set(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE10Ranged_SetEii */
	void Ranged_Clear(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE12Ranged_ClearEii */
	void ~CBitVecT(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEED4Ev */
	void Copy<CVarBitVecBase<short unsigned int, 32> >(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  &, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE4CopyIS1_EEvRKS_IT_Ei */
	void CopyTo<CVarBitVecBase<short unsigned int, 32> >(const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  *, class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *); /* linkage=_ZNK8CBitVecTI14CVarBitVecBaseItLt32EEE6CopyToIS1_EEvPS_IT_E */
};

// <00B9D357> ../public/tier0/bitvec.h:914
// member functions: 53
// member variable: 1
// class size: 144
class CBitVecT<CVarBitVecBase<short unsigned int, 1024> > : public CVarBitVecBase<short unsigned int, 1024> {
public:
	/* class CVarBitVecBase<short unsigned int, 1024> <ancestor>; */ /* 0 144 */
	/* ../public/tier0/bitvec.h:1405 */
	void CBitVecT(CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* );
	/* ../public/tier0/bitvec.h:1418 */
	void CBitVecT(CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* , int);
	/* ../public/tier0/bitvec.h:1449 */
	void Init(CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* , int);
	/* ../public/tier0/bitvec.h:1433 */
	CBitVecAccessor operator[](CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* , int);
	/* ../public/tier0/bitvec.h:1440 */
	uint32 operator[](const CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* , int);
	/* ../public/tier0/bitvec.h:1870 */
	bool IsAllClear(const CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* );
	/* ../public/tier0/bitvec.h:1893 */
	bool IsAllSet(const CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* );
	/* ../public/tier0/bitvec.h:1458 */
	uint32 Get(const CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* , uint32);
	/* ../public/tier0/bitvec.h:1468 */
	bool IsBitSet(const CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* , int);
	/* ../public/tier0/bitvec.h:1477 */
	void Set(CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* , int);
	/* ../public/tier0/bitvec.h:1505 */
	void Set(CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* , int, bool);
	/* ../public/tier0/bitvec.h:1495 */
	void Clear(CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* , int);
	/* ../public/tier0/bitvec.h:1486 */
	bool TestAndSet(CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* , int);
	/* ../public/tier0/bitvec.h:1522 */
	void Set(CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* , uint32, uint32);
	/* ../public/tier0/bitvec.h:1531 */
	void Clear(CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* , uint32, uint32);
	/* ../public/tier0/bitvec.h:1540 */
	uint32 Get(CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* , uint32, uint32);
	/* ../public/tier0/bitvec.h:1916 */
	void SetAll(CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* );
	/* ../public/tier0/bitvec.h:1968 */
	void ClearAll(CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* );
	/* ../public/tier0/bitvec.h:2212 */
	uint32 GetDWord(const CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* , int);
	/* ../public/tier0/bitvec.h:2234 */
	void SetDWord(CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* , int, uint32);
	/* ../public/tier0/bitvec.h:2220 */
	uint32 PopulationCount(const CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* );
	/* ../public/tier0/bitvec.h:2241 */
	void PackBitsFromWords(CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* , const uint16* , int, int);
	/* ../public/tier0/bitvec.h:980 */
	void GetOffsetMaskForBit(uint32, uint32* , uint32* );
	/* ../public/tier0/bitvec.h:1922 */
	void Ranged_Set(CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* , int, int);
	/* ../public/tier0/bitvec.h:1974 */
	void Ranged_Clear(CBitVecT<CVarBitVecBase<short unsigned int, 1024> >* , int, int);
	void CBitVecT(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEEC4Ev */
	void CBitVecT(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEEC4Ei */
	void Init(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE4InitEi */
	class CBitVecAccessor operator[](class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEEixEi */
	uint32 operator[](const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  *, int); /* linkage=_ZNK8CBitVecTI14CVarBitVecBaseItLt32EEEixEi */
	bool IsAllClear(const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  *); /* linkage=_ZNK8CBitVecTI14CVarBitVecBaseItLt32EEE10IsAllClearEv */
	bool IsAllSet(const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  *); /* linkage=_ZNK8CBitVecTI14CVarBitVecBaseItLt32EEE8IsAllSetEv */
	uint32 Get(const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  *, uint32); /* linkage=_ZNK8CBitVecTI14CVarBitVecBaseItLt32EEE3GetEj */
	bool IsBitSet(const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  *, int); /* linkage=_ZNK8CBitVecTI14CVarBitVecBaseItLt32EEE8IsBitSetEi */
	void Set(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE3SetEi */
	void Set(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int, bool); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE3SetEib */
	void Clear(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE5ClearEi */
	bool TestAndSet(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE10TestAndSetEi */
	void Set(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, uint32, uint32); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE3SetEjj */
	void Clear(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, uint32, uint32); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE5ClearEjj */
	uint32 Get(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, uint32, uint32); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE3GetEjj */
	void SetAll(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE6SetAllEv */
	void ClearAll(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE8ClearAllEv */
	uint32 GetDWord(const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  *, int); /* linkage=_ZNK8CBitVecTI14CVarBitVecBaseItLt32EEE8GetDWordEi */
	void SetDWord(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int, uint32); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE8SetDWordEij */
	uint PopulationCount(const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  *); /* linkage=_ZNK8CBitVecTI14CVarBitVecBaseItLt32EEE15PopulationCountEv */
	void PackBitsFromWords(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, const uint16  *, int, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE17PackBitsFromWordsEPKtii */
	void GetOffsetMaskForBit(uint32, uint32 *, uint32 *); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE19GetOffsetMaskForBitEjPjS3_ */
	void Ranged_Set(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE10Ranged_SetEii */
	void Ranged_Clear(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, int, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE12Ranged_ClearEii */
	void ~CBitVecT(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEED4Ev */
	void Copy<CVarBitVecBase<short unsigned int, 32> >(class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *, const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  &, int); /* linkage=_ZN8CBitVecTI14CVarBitVecBaseItLt32EEE4CopyIS1_EEvRKS_IT_Ei */
	void CopyTo<CVarBitVecBase<short unsigned int, 32> >(const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  *, class CBitVecT<CVarBitVecBase<short unsigned int, 32> > *); /* linkage=_ZNK8CBitVecTI14CVarBitVecBaseItLt32EEE6CopyToIS1_EEvPS_IT_E */
};

// <000A538B> ../public/tier0/bitvec.h:1009
// member functions: 45
// member variables: 4
// class size: 24
class CVarBitVecBase<short unsigned int, 32> {
	/* ../public/tier0/bitvec.h:1012 */
	bool IsFixedSize(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1013 */
	int GetNumBits(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1014 */
	void Resize(CVarBitVecBase<short unsigned int, 32>* , int, bool);
	/* ../public/tier0/bitvec.h:1016 */
	int GetNumDWords(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1017 */
	uint32* Base(CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1018 */
	const uint32* Base(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1020 */
	void Attach(CVarBitVecBase<short unsigned int, 32>* , uint32* , int);
	/* ../public/tier0/bitvec.h:1021 */
	bool Detach(CVarBitVecBase<short unsigned int, 32>* , uint32** , int* );
	/* ../public/tier0/bitvec.h:1024 */
	int FindNextSetBit(const CVarBitVecBase<short unsigned int, 32>* , int);
	/* ../public/tier0/bitvec.h:1026 */
	int FindNextSetBit(const CVarBitVecBase<short unsigned int, 32>* , int, int);
	/* ../public/tier0/bitvec.h:1033 */
	typedef struct CBitVecConstIterator<CVarBitVecBase<short unsigned int, 32>, int> const_iterator;
	/* ../public/tier0/bitvec.h:1034 */
	const_iterator begin(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1035 */
	const_iterator end(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1037 */
	void Swap(CVarBitVecBase<short unsigned int, 32>* , CVarBitVecBase<short unsigned int, 32>& );
	/* ../public/tier0/bitvec.h:1067 */
	size_t AllocSize(const CVarBitVecBase<short unsigned int, 32>* );
protected:
	/* ../public/tier0/bitvec.h:1070 */
	void CVarBitVecBase(CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1071 */
	void CVarBitVecBase(CVarBitVecBase<short unsigned int, 32>* , int);
	/* ../public/tier0/bitvec.h:1073 */
	bool ShouldOptimizeForLargeCount(void);
	/* ../public/tier0/bitvec.h:1080 */
	void ~CVarBitVecBase(CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1087 */
	unsigned int GetEndMask(const CVarBitVecBase<short unsigned int, 32>* );
private:
	short unsigned int m_numBits; /* 0 2 */
	short unsigned int m_numInts; /* 2 2 */
	uint32 * m_pInt; /* 8 8 */
	uint32 m_FixedStorage[1]; /* 16 4 */
	/* ../public/tier0/bitvec.h:1101 */
	void AllocInts(CVarBitVecBase<short unsigned int, 32>* , int);
	/* ../public/tier0/bitvec.h:1102 */
	void ReallocInts(CVarBitVecBase<short unsigned int, 32>* , int);
	/* ../public/tier0/bitvec.h:1103 */
	void FreeInts(CVarBitVecBase<short unsigned int, 32>* );
	bool IsFixedSize(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE11IsFixedSizeEv */
	int GetNumBits(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE10GetNumBitsEv */
	void Resize(class CVarBitVecBase<short unsigned int, 32> *, int, bool); /* linkage=_ZN14CVarBitVecBaseItLt32EE6ResizeEib */
	int GetNumDWords(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE12GetNumDWordsEv */
	uint32 * Base(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EE4BaseEv */
	const uint32  * Base(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE4BaseEv */
	void Attach(class CVarBitVecBase<short unsigned int, 32> *, uint32 *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EE6AttachEPji */
	bool Detach(class CVarBitVecBase<short unsigned int, 32> *, uint32 * *, int *); /* linkage=_ZN14CVarBitVecBaseItLt32EE6DetachEPPjPi */
	int FindNextSetBit(const class CVarBitVecBase<short unsigned int, 32>  *, int); /* linkage=_ZNK14CVarBitVecBaseItLt32EE14FindNextSetBitEi */
	int FindNextSetBit(const class CVarBitVecBase<short unsigned int, 32>  *, int, int); /* linkage=_ZNK14CVarBitVecBaseItLt32EE14FindNextSetBitEii */
	const_iterator begin(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE5beginEv */
	const_iterator end(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE3endEv */
	void Swap(class CVarBitVecBase<short unsigned int, 32> *, class CVarBitVecBase<short unsigned int, 32> &); /* linkage=_ZN14CVarBitVecBaseItLt32EE4SwapERS0_ */
	size_t AllocSize(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE9AllocSizeEv */
	void CVarBitVecBase(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EEC4Ev */
	void CVarBitVecBase(class CVarBitVecBase<short unsigned int, 32> *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EEC4Ei */
	bool ShouldOptimizeForLargeCount(void); /* linkage=_ZN14CVarBitVecBaseItLt32EE27ShouldOptimizeForLargeCountEv */
	void ~CVarBitVecBase(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EED4Ev */
	unsigned int GetEndMask(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE10GetEndMaskEv */
	void AllocInts(class CVarBitVecBase<short unsigned int, 32> *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EE9AllocIntsEi */
	void ReallocInts(class CVarBitVecBase<short unsigned int, 32> *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EE11ReallocIntsEi */
	void FreeInts(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EE8FreeIntsEv */
	void ValidateOperand<CVarBitVecBase<short unsigned int, 32> >(const class CVarBitVecBase<short unsigned int, 32>  *, const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  &); /* linkage=_ZNK14CVarBitVecBaseItLt32EE15ValidateOperandIS0_EEvRK8CBitVecTIT_E */
};

// <0239FEA3> ../public/tier0/bitvec.h:1009
// member functions: 45
// member variables: 4
// class size: 24
class CVarBitVecBase<short unsigned int, 32> {
	/* ../public/tier0/bitvec.h:1092 */
	enum {
		FIXED_INT_SIZE = 1,
	};
	/* ../public/tier0/bitvec.h:1012 */
	bool IsFixedSize(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1013 */
	int GetNumBits(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1014 */
	void Resize(CVarBitVecBase<short unsigned int, 32>* , int, bool);
	/* ../public/tier0/bitvec.h:1016 */
	int GetNumDWords(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1017 */
	uint32* Base(CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1018 */
	const uint32* Base(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1020 */
	void Attach(CVarBitVecBase<short unsigned int, 32>* , uint32* , int);
	/* ../public/tier0/bitvec.h:1021 */
	bool Detach(CVarBitVecBase<short unsigned int, 32>* , uint32** , int* );
	/* ../public/tier0/bitvec.h:1024 */
	int FindNextSetBit(const CVarBitVecBase<short unsigned int, 32>* , int);
	/* ../public/tier0/bitvec.h:1026 */
	int FindNextSetBit(const CVarBitVecBase<short unsigned int, 32>* , int, int);
	/* ../public/tier0/bitvec.h:1033 */
	typedef struct CBitVecConstIterator<CVarBitVecBase<short unsigned int, 32>, int> const_iterator;
	/* ../public/tier0/bitvec.h:1034 */
	const_iterator begin(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1035 */
	const_iterator end(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1037 */
	void Swap(CVarBitVecBase<short unsigned int, 32>* , CVarBitVecBase<short unsigned int, 32>& );
	/* ../public/tier0/bitvec.h:1067 */
	size_t AllocSize(const CVarBitVecBase<short unsigned int, 32>* );
protected:
	/* ../public/tier0/bitvec.h:1070 */
	void CVarBitVecBase(CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1071 */
	void CVarBitVecBase(CVarBitVecBase<short unsigned int, 32>* , int);
	/* ../public/tier0/bitvec.h:1073 */
	bool ShouldOptimizeForLargeCount(void);
	/* ../public/tier0/bitvec.h:1080 */
	void ~CVarBitVecBase(CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1087 */
	unsigned int GetEndMask(const CVarBitVecBase<short unsigned int, 32>* );
private:
	short unsigned int m_numBits; /* 0 2 */
	short unsigned int m_numInts; /* 2 2 */
	uint32 * m_pInt; /* 8 8 */
	uint32 m_FixedStorage[1]; /* 16 4 */
	/* ../public/tier0/bitvec.h:1101 */
	void AllocInts(CVarBitVecBase<short unsigned int, 32>* , int);
	/* ../public/tier0/bitvec.h:1102 */
	void ReallocInts(CVarBitVecBase<short unsigned int, 32>* , int);
	/* ../public/tier0/bitvec.h:1103 */
	void FreeInts(CVarBitVecBase<short unsigned int, 32>* );
	bool IsFixedSize(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE11IsFixedSizeEv */
	int GetNumBits(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE10GetNumBitsEv */
	void Resize(class CVarBitVecBase<short unsigned int, 32> *, int, bool); /* linkage=_ZN14CVarBitVecBaseItLt32EE6ResizeEib */
	int GetNumDWords(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE12GetNumDWordsEv */
	uint32 * Base(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EE4BaseEv */
	const uint32  * Base(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE4BaseEv */
	void Attach(class CVarBitVecBase<short unsigned int, 32> *, uint32 *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EE6AttachEPji */
	bool Detach(class CVarBitVecBase<short unsigned int, 32> *, uint32 * *, int *); /* linkage=_ZN14CVarBitVecBaseItLt32EE6DetachEPPjPi */
	int FindNextSetBit(const class CVarBitVecBase<short unsigned int, 32>  *, int); /* linkage=_ZNK14CVarBitVecBaseItLt32EE14FindNextSetBitEi */
	int FindNextSetBit(const class CVarBitVecBase<short unsigned int, 32>  *, int, int); /* linkage=_ZNK14CVarBitVecBaseItLt32EE14FindNextSetBitEii */
	const_iterator begin(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE5beginEv */
	const_iterator end(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE3endEv */
	void Swap(class CVarBitVecBase<short unsigned int, 32> *, class CVarBitVecBase<short unsigned int, 32> &); /* linkage=_ZN14CVarBitVecBaseItLt32EE4SwapERS0_ */
	size_t AllocSize(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE9AllocSizeEv */
	void CVarBitVecBase(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EEC4Ev */
	void CVarBitVecBase(class CVarBitVecBase<short unsigned int, 32> *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EEC4Ei */
	bool ShouldOptimizeForLargeCount(void); /* linkage=_ZN14CVarBitVecBaseItLt32EE27ShouldOptimizeForLargeCountEv */
	void ~CVarBitVecBase(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EED4Ev */
	unsigned int GetEndMask(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE10GetEndMaskEv */
	void AllocInts(class CVarBitVecBase<short unsigned int, 32> *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EE9AllocIntsEi */
	void ReallocInts(class CVarBitVecBase<short unsigned int, 32> *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EE11ReallocIntsEi */
	void FreeInts(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EE8FreeIntsEv */
	void ValidateOperand<CVarBitVecBase<short unsigned int, 32> >(const class CVarBitVecBase<short unsigned int, 32>  *, const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  &); /* linkage=_ZNK14CVarBitVecBaseItLt32EE15ValidateOperandIS0_EEvRK8CBitVecTIT_E */
};

// <053CD46E> ../public/tier0/bitvec.h:1009
// member functions: 46
// member variables: 4
// class size: 24
class CVarBitVecBase<short unsigned int, 32> {
	/* ../public/tier0/bitvec.h:1092 */
	enum {
		FIXED_INT_SIZE = 1,
	};
	/* ../public/tier0/bitvec.h:1012 */
	bool IsFixedSize(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1013 */
	int GetNumBits(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1014 */
	void Resize(CVarBitVecBase<short unsigned int, 32>* , int, bool);
	/* ../public/tier0/bitvec.h:1016 */
	int GetNumDWords(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1017 */
	uint32* Base(CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1018 */
	const uint32* Base(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1020 */
	void Attach(CVarBitVecBase<short unsigned int, 32>* , uint32* , int);
	/* ../public/tier0/bitvec.h:1021 */
	bool Detach(CVarBitVecBase<short unsigned int, 32>* , uint32** , int* );
	/* ../public/tier0/bitvec.h:1024 */
	int FindNextSetBit(const CVarBitVecBase<short unsigned int, 32>* , int);
	/* ../public/tier0/bitvec.h:1026 */
	int FindNextSetBit(const CVarBitVecBase<short unsigned int, 32>* , int, int);
	/* ../public/tier0/bitvec.h:1033 */
	typedef struct CBitVecConstIterator<CVarBitVecBase<short unsigned int, 32>, int> const_iterator;
	/* ../public/tier0/bitvec.h:1034 */
	const_iterator begin(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1035 */
	const_iterator end(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1037 */
	void Swap(CVarBitVecBase<short unsigned int, 32>* , CVarBitVecBase<short unsigned int, 32>& );
	/* ../public/tier0/bitvec.h:1067 */
	size_t AllocSize(const CVarBitVecBase<short unsigned int, 32>* );
protected:
	/* ../public/tier0/bitvec.h:1070 */
	void CVarBitVecBase(CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1071 */
	void CVarBitVecBase(CVarBitVecBase<short unsigned int, 32>* , int);
	/* ../public/tier0/bitvec.h:1073 */
	bool ShouldOptimizeForLargeCount(void);
	/* ../public/tier0/bitvec.h:1080 */
	void ~CVarBitVecBase(CVarBitVecBase<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1087 */
	unsigned int GetEndMask(const CVarBitVecBase<short unsigned int, 32>* );
private:
	short unsigned int m_numBits; /* 0 2 */
	short unsigned int m_numInts; /* 2 2 */
	uint32 * m_pInt; /* 8 8 */
	uint32 m_FixedStorage[1]; /* 16 4 */
	/* ../public/tier0/bitvec.h:1101 */
	void AllocInts(CVarBitVecBase<short unsigned int, 32>* , int);
	/* ../public/tier0/bitvec.h:1102 */
	void ReallocInts(CVarBitVecBase<short unsigned int, 32>* , int);
	/* ../public/tier0/bitvec.h:1103 */
	void FreeInts(CVarBitVecBase<short unsigned int, 32>* );
protected:
	/* ../public/tier0/bitvec.h:1083 */
	void ValidateOperand<CVarBitVecBase<short unsigned int, 32> >(const CVarBitVecBase<short unsigned int, 32>* , const CBitVecT<CVarBitVecBase<short unsigned int, 32> >& );
	bool IsFixedSize(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE11IsFixedSizeEv */
	int GetNumBits(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE10GetNumBitsEv */
	void Resize(class CVarBitVecBase<short unsigned int, 32> *, int, bool); /* linkage=_ZN14CVarBitVecBaseItLt32EE6ResizeEib */
	int GetNumDWords(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE12GetNumDWordsEv */
	uint32 * Base(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EE4BaseEv */
	const uint32  * Base(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE4BaseEv */
	void Attach(class CVarBitVecBase<short unsigned int, 32> *, uint32 *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EE6AttachEPji */
	bool Detach(class CVarBitVecBase<short unsigned int, 32> *, uint32 * *, int *); /* linkage=_ZN14CVarBitVecBaseItLt32EE6DetachEPPjPi */
	int FindNextSetBit(const class CVarBitVecBase<short unsigned int, 32>  *, int); /* linkage=_ZNK14CVarBitVecBaseItLt32EE14FindNextSetBitEi */
	int FindNextSetBit(const class CVarBitVecBase<short unsigned int, 32>  *, int, int); /* linkage=_ZNK14CVarBitVecBaseItLt32EE14FindNextSetBitEii */
	const_iterator begin(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE5beginEv */
	const_iterator end(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE3endEv */
	void Swap(class CVarBitVecBase<short unsigned int, 32> *, class CVarBitVecBase<short unsigned int, 32> &); /* linkage=_ZN14CVarBitVecBaseItLt32EE4SwapERS0_ */
	size_t AllocSize(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE9AllocSizeEv */
	void CVarBitVecBase(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EEC4Ev */
	void CVarBitVecBase(class CVarBitVecBase<short unsigned int, 32> *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EEC4Ei */
	bool ShouldOptimizeForLargeCount(void); /* linkage=_ZN14CVarBitVecBaseItLt32EE27ShouldOptimizeForLargeCountEv */
	void ~CVarBitVecBase(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EED4Ev */
	unsigned int GetEndMask(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE10GetEndMaskEv */
	void AllocInts(class CVarBitVecBase<short unsigned int, 32> *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EE9AllocIntsEi */
	void ReallocInts(class CVarBitVecBase<short unsigned int, 32> *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EE11ReallocIntsEi */
	void FreeInts(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EE8FreeIntsEv */
	void ValidateOperand<CVarBitVecBase<short unsigned int, 32> >(const class CVarBitVecBase<short unsigned int, 32>  *, const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  &); /* linkage=_ZNK14CVarBitVecBaseItLt32EE15ValidateOperandIS0_EEvRK8CBitVecTIT_E */
};

// <06F1C4C9> ../../public/tier0/bitvec.h:1009
// member functions: 45
// member variables: 4
// class size: 24
class CVarBitVecBase<short unsigned int, 32> {
	/* ../../public/tier0/bitvec.h:1092 */
	enum {
		FIXED_INT_SIZE = 1,
	};
	/* ../../public/tier0/bitvec.h:1012 */
	bool IsFixedSize(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../../public/tier0/bitvec.h:1013 */
	int GetNumBits(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../../public/tier0/bitvec.h:1014 */
	void Resize(CVarBitVecBase<short unsigned int, 32>* , int, bool);
	/* ../../public/tier0/bitvec.h:1016 */
	int GetNumDWords(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../../public/tier0/bitvec.h:1017 */
	uint32* Base(CVarBitVecBase<short unsigned int, 32>* );
	/* ../../public/tier0/bitvec.h:1018 */
	const uint32* Base(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../../public/tier0/bitvec.h:1020 */
	void Attach(CVarBitVecBase<short unsigned int, 32>* , uint32* , int);
	/* ../../public/tier0/bitvec.h:1021 */
	bool Detach(CVarBitVecBase<short unsigned int, 32>* , uint32** , int* );
	/* ../../public/tier0/bitvec.h:1024 */
	int FindNextSetBit(const CVarBitVecBase<short unsigned int, 32>* , int);
	/* ../../public/tier0/bitvec.h:1026 */
	int FindNextSetBit(const CVarBitVecBase<short unsigned int, 32>* , int, int);
	/* ../../public/tier0/bitvec.h:1033 */
	typedef struct CBitVecConstIterator<CVarBitVecBase<short unsigned int, 32>, int> const_iterator;
	/* ../../public/tier0/bitvec.h:1034 */
	const_iterator begin(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../../public/tier0/bitvec.h:1035 */
	const_iterator end(const CVarBitVecBase<short unsigned int, 32>* );
	/* ../../public/tier0/bitvec.h:1037 */
	void Swap(CVarBitVecBase<short unsigned int, 32>* , CVarBitVecBase<short unsigned int, 32>& );
	/* ../../public/tier0/bitvec.h:1067 */
	size_t AllocSize(const CVarBitVecBase<short unsigned int, 32>* );
protected:
	/* ../../public/tier0/bitvec.h:1070 */
	void CVarBitVecBase(CVarBitVecBase<short unsigned int, 32>* );
	/* ../../public/tier0/bitvec.h:1071 */
	void CVarBitVecBase(CVarBitVecBase<short unsigned int, 32>* , int);
	/* ../../public/tier0/bitvec.h:1073 */
	bool ShouldOptimizeForLargeCount(void);
	/* ../../public/tier0/bitvec.h:1080 */
	void ~CVarBitVecBase(CVarBitVecBase<short unsigned int, 32>* );
	/* ../../public/tier0/bitvec.h:1087 */
	unsigned int GetEndMask(const CVarBitVecBase<short unsigned int, 32>* );
private:
	short unsigned int m_numBits; /* 0 2 */
	short unsigned int m_numInts; /* 2 2 */
	uint32 * m_pInt; /* 8 8 */
	uint32 m_FixedStorage[1]; /* 16 4 */
	/* ../../public/tier0/bitvec.h:1101 */
	void AllocInts(CVarBitVecBase<short unsigned int, 32>* , int);
	/* ../../public/tier0/bitvec.h:1102 */
	void ReallocInts(CVarBitVecBase<short unsigned int, 32>* , int);
	/* ../../public/tier0/bitvec.h:1103 */
	void FreeInts(CVarBitVecBase<short unsigned int, 32>* );
	bool IsFixedSize(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE11IsFixedSizeEv */
	int GetNumBits(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE10GetNumBitsEv */
	void Resize(class CVarBitVecBase<short unsigned int, 32> *, int, bool); /* linkage=_ZN14CVarBitVecBaseItLt32EE6ResizeEib */
	int GetNumDWords(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE12GetNumDWordsEv */
	uint32 * Base(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EE4BaseEv */
	const uint32  * Base(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE4BaseEv */
	void Attach(class CVarBitVecBase<short unsigned int, 32> *, uint32 *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EE6AttachEPji */
	bool Detach(class CVarBitVecBase<short unsigned int, 32> *, uint32 * *, int *); /* linkage=_ZN14CVarBitVecBaseItLt32EE6DetachEPPjPi */
	int FindNextSetBit(const class CVarBitVecBase<short unsigned int, 32>  *, int); /* linkage=_ZNK14CVarBitVecBaseItLt32EE14FindNextSetBitEi */
	int FindNextSetBit(const class CVarBitVecBase<short unsigned int, 32>  *, int, int); /* linkage=_ZNK14CVarBitVecBaseItLt32EE14FindNextSetBitEii */
	const_iterator begin(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE5beginEv */
	const_iterator end(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE3endEv */
	void Swap(class CVarBitVecBase<short unsigned int, 32> *, class CVarBitVecBase<short unsigned int, 32> &); /* linkage=_ZN14CVarBitVecBaseItLt32EE4SwapERS0_ */
	size_t AllocSize(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE9AllocSizeEv */
	void CVarBitVecBase(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EEC4Ev */
	void CVarBitVecBase(class CVarBitVecBase<short unsigned int, 32> *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EEC4Ei */
	bool ShouldOptimizeForLargeCount(void); /* linkage=_ZN14CVarBitVecBaseItLt32EE27ShouldOptimizeForLargeCountEv */
	void ~CVarBitVecBase(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EED4Ev */
	unsigned int GetEndMask(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE10GetEndMaskEv */
	void AllocInts(class CVarBitVecBase<short unsigned int, 32> *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EE9AllocIntsEi */
	void ReallocInts(class CVarBitVecBase<short unsigned int, 32> *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EE11ReallocIntsEi */
	void FreeInts(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EE8FreeIntsEv */
	void ValidateOperand<CVarBitVecBase<short unsigned int, 32> >(const class CVarBitVecBase<short unsigned int, 32>  *, const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  &); /* linkage=_ZNK14CVarBitVecBaseItLt32EE15ValidateOperandIS0_EEvRK8CBitVecTIT_E */
};

// <00B9CFB3> ../public/tier0/bitvec.h:1009
// member functions: 45
// member variables: 4
// class size: 144
class CVarBitVecBase<short unsigned int, 1024> {
	/* ../public/tier0/bitvec.h:1012 */
	bool IsFixedSize(const CVarBitVecBase<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:1013 */
	int GetNumBits(const CVarBitVecBase<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:2503 */
	void Resize(CVarBitVecBase<short unsigned int, 1024>* , int, bool);
	/* ../public/tier0/bitvec.h:1016 */
	int GetNumDWords(const CVarBitVecBase<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:1017 */
	uint32* Base(CVarBitVecBase<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:1018 */
	const uint32* Base(const CVarBitVecBase<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:1348 */
	void Attach(CVarBitVecBase<short unsigned int, 1024>* , uint32* , int);
	/* ../public/tier0/bitvec.h:1368 */
	bool Detach(CVarBitVecBase<short unsigned int, 1024>* , uint32** , int* );
	/* ../public/tier0/bitvec.h:1024 */
	int FindNextSetBit(const CVarBitVecBase<short unsigned int, 1024>* , int);
	/* ../public/tier0/bitvec.h:1026 */
	int FindNextSetBit(const CVarBitVecBase<short unsigned int, 1024>* , int, int);
	/* ../public/tier0/bitvec.h:1033 */
	typedef struct CBitVecConstIterator<CVarBitVecBase<short unsigned int, 1024>, int> const_iterator;
	/* ../public/tier0/bitvec.h:1034 */
	const_iterator begin(const CVarBitVecBase<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:1035 */
	const_iterator end(const CVarBitVecBase<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:1037 */
	void Swap(CVarBitVecBase<short unsigned int, 1024>* , CVarBitVecBase<short unsigned int, 1024>& );
	/* ../public/tier0/bitvec.h:1393 */
	size_t AllocSize(const CVarBitVecBase<short unsigned int, 1024>* );
protected:
	/* ../public/tier0/bitvec.h:1279 */
	void CVarBitVecBase(CVarBitVecBase<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:1287 */
	void CVarBitVecBase(CVarBitVecBase<short unsigned int, 1024>* , int);
	/* ../public/tier0/bitvec.h:1073 */
	bool ShouldOptimizeForLargeCount(void);
	/* ../public/tier0/bitvec.h:1340 */
	void ~CVarBitVecBase(CVarBitVecBase<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:1087 */
	unsigned int GetEndMask(const CVarBitVecBase<short unsigned int, 1024>* );
private:
	short unsigned int m_numBits; /* 0 2 */
	short unsigned int m_numInts; /* 2 2 */
	uint32 * m_pInt; /* 8 8 */
	uint32 m_FixedStorage[32]; /* 16 128 */
	/* ../public/tier0/bitvec.h:2546 */
	void AllocInts(CVarBitVecBase<short unsigned int, 1024>* , int);
	/* ../public/tier0/bitvec.h:2568 */
	void ReallocInts(CVarBitVecBase<short unsigned int, 1024>* , int);
	/* ../public/tier0/bitvec.h:2604 */
	void FreeInts(CVarBitVecBase<short unsigned int, 1024>* );
	bool IsFixedSize(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE11IsFixedSizeEv */
	int GetNumBits(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE10GetNumBitsEv */
	void Resize(class CVarBitVecBase<short unsigned int, 32> *, int, bool); /* linkage=_ZN14CVarBitVecBaseItLt32EE6ResizeEib */
	int GetNumDWords(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE12GetNumDWordsEv */
	uint32 * Base(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EE4BaseEv */
	const uint32  * Base(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE4BaseEv */
	void Attach(class CVarBitVecBase<short unsigned int, 32> *, uint32 *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EE6AttachEPji */
	bool Detach(class CVarBitVecBase<short unsigned int, 32> *, uint32 * *, int *); /* linkage=_ZN14CVarBitVecBaseItLt32EE6DetachEPPjPi */
	int FindNextSetBit(const class CVarBitVecBase<short unsigned int, 32>  *, int); /* linkage=_ZNK14CVarBitVecBaseItLt32EE14FindNextSetBitEi */
	int FindNextSetBit(const class CVarBitVecBase<short unsigned int, 32>  *, int, int); /* linkage=_ZNK14CVarBitVecBaseItLt32EE14FindNextSetBitEii */
	const_iterator begin(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE5beginEv */
	const_iterator end(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE3endEv */
	void Swap(class CVarBitVecBase<short unsigned int, 32> *, class CVarBitVecBase<short unsigned int, 32> &); /* linkage=_ZN14CVarBitVecBaseItLt32EE4SwapERS0_ */
	size_t AllocSize(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE9AllocSizeEv */
	void CVarBitVecBase(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EEC4Ev */
	void CVarBitVecBase(class CVarBitVecBase<short unsigned int, 32> *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EEC4Ei */
	bool ShouldOptimizeForLargeCount(void); /* linkage=_ZN14CVarBitVecBaseItLt32EE27ShouldOptimizeForLargeCountEv */
	void ~CVarBitVecBase(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EED4Ev */
	unsigned int GetEndMask(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE10GetEndMaskEv */
	void AllocInts(class CVarBitVecBase<short unsigned int, 32> *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EE9AllocIntsEi */
	void ReallocInts(class CVarBitVecBase<short unsigned int, 32> *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EE11ReallocIntsEi */
	void FreeInts(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EE8FreeIntsEv */
	void ValidateOperand<CVarBitVecBase<short unsigned int, 32> >(const class CVarBitVecBase<short unsigned int, 32>  *, const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  &); /* linkage=_ZNK14CVarBitVecBaseItLt32EE15ValidateOperandIS0_EEvRK8CBitVecTIT_E */
};

// <0256D738> ../public/tier0/bitvec.h:1009
// member functions: 45
// member variables: 4
// class size: 144
class CVarBitVecBase<short unsigned int, 1024> {
	/* ../public/tier0/bitvec.h:1092 */
	enum {
		FIXED_INT_SIZE = 32,
	};
	/* ../public/tier0/bitvec.h:1012 */
	bool IsFixedSize(const CVarBitVecBase<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:1013 */
	int GetNumBits(const CVarBitVecBase<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:2503 */
	void Resize(CVarBitVecBase<short unsigned int, 1024>* , int, bool);
	/* ../public/tier0/bitvec.h:1016 */
	int GetNumDWords(const CVarBitVecBase<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:1017 */
	uint32* Base(CVarBitVecBase<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:1018 */
	const uint32* Base(const CVarBitVecBase<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:1348 */
	void Attach(CVarBitVecBase<short unsigned int, 1024>* , uint32* , int);
	/* ../public/tier0/bitvec.h:1368 */
	bool Detach(CVarBitVecBase<short unsigned int, 1024>* , uint32** , int* );
	/* ../public/tier0/bitvec.h:1024 */
	int FindNextSetBit(const CVarBitVecBase<short unsigned int, 1024>* , int);
	/* ../public/tier0/bitvec.h:1026 */
	int FindNextSetBit(const CVarBitVecBase<short unsigned int, 1024>* , int, int);
	/* ../public/tier0/bitvec.h:1033 */
	typedef struct CBitVecConstIterator<CVarBitVecBase<short unsigned int, 1024>, int> const_iterator;
	/* ../public/tier0/bitvec.h:1034 */
	const_iterator begin(const CVarBitVecBase<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:1035 */
	const_iterator end(const CVarBitVecBase<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:1037 */
	void Swap(CVarBitVecBase<short unsigned int, 1024>* , CVarBitVecBase<short unsigned int, 1024>& );
	/* ../public/tier0/bitvec.h:1393 */
	size_t AllocSize(const CVarBitVecBase<short unsigned int, 1024>* );
protected:
	/* ../public/tier0/bitvec.h:1279 */
	void CVarBitVecBase(CVarBitVecBase<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:1287 */
	void CVarBitVecBase(CVarBitVecBase<short unsigned int, 1024>* , int);
	/* ../public/tier0/bitvec.h:1073 */
	bool ShouldOptimizeForLargeCount(void);
	/* ../public/tier0/bitvec.h:1340 */
	void ~CVarBitVecBase(CVarBitVecBase<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:1087 */
	unsigned int GetEndMask(const CVarBitVecBase<short unsigned int, 1024>* );
private:
	short unsigned int m_numBits; /* 0 2 */
	short unsigned int m_numInts; /* 2 2 */
	uint32 * m_pInt; /* 8 8 */
	uint32 m_FixedStorage[32]; /* 16 128 */
	/* ../public/tier0/bitvec.h:2546 */
	void AllocInts(CVarBitVecBase<short unsigned int, 1024>* , int);
	/* ../public/tier0/bitvec.h:2568 */
	void ReallocInts(CVarBitVecBase<short unsigned int, 1024>* , int);
	/* ../public/tier0/bitvec.h:2604 */
	void FreeInts(CVarBitVecBase<short unsigned int, 1024>* );
	bool IsFixedSize(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE11IsFixedSizeEv */
	int GetNumBits(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE10GetNumBitsEv */
	void Resize(class CVarBitVecBase<short unsigned int, 32> *, int, bool); /* linkage=_ZN14CVarBitVecBaseItLt32EE6ResizeEib */
	int GetNumDWords(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE12GetNumDWordsEv */
	uint32 * Base(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EE4BaseEv */
	const uint32  * Base(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE4BaseEv */
	void Attach(class CVarBitVecBase<short unsigned int, 32> *, uint32 *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EE6AttachEPji */
	bool Detach(class CVarBitVecBase<short unsigned int, 32> *, uint32 * *, int *); /* linkage=_ZN14CVarBitVecBaseItLt32EE6DetachEPPjPi */
	int FindNextSetBit(const class CVarBitVecBase<short unsigned int, 32>  *, int); /* linkage=_ZNK14CVarBitVecBaseItLt32EE14FindNextSetBitEi */
	int FindNextSetBit(const class CVarBitVecBase<short unsigned int, 32>  *, int, int); /* linkage=_ZNK14CVarBitVecBaseItLt32EE14FindNextSetBitEii */
	const_iterator begin(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE5beginEv */
	const_iterator end(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE3endEv */
	void Swap(class CVarBitVecBase<short unsigned int, 32> *, class CVarBitVecBase<short unsigned int, 32> &); /* linkage=_ZN14CVarBitVecBaseItLt32EE4SwapERS0_ */
	size_t AllocSize(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE9AllocSizeEv */
	void CVarBitVecBase(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EEC4Ev */
	void CVarBitVecBase(class CVarBitVecBase<short unsigned int, 32> *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EEC4Ei */
	bool ShouldOptimizeForLargeCount(void); /* linkage=_ZN14CVarBitVecBaseItLt32EE27ShouldOptimizeForLargeCountEv */
	void ~CVarBitVecBase(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EED4Ev */
	unsigned int GetEndMask(const class CVarBitVecBase<short unsigned int, 32>  *); /* linkage=_ZNK14CVarBitVecBaseItLt32EE10GetEndMaskEv */
	void AllocInts(class CVarBitVecBase<short unsigned int, 32> *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EE9AllocIntsEi */
	void ReallocInts(class CVarBitVecBase<short unsigned int, 32> *, int); /* linkage=_ZN14CVarBitVecBaseItLt32EE11ReallocIntsEi */
	void FreeInts(class CVarBitVecBase<short unsigned int, 32> *); /* linkage=_ZN14CVarBitVecBaseItLt32EE8FreeIntsEv */
	void ValidateOperand<CVarBitVecBase<short unsigned int, 32> >(const class CVarBitVecBase<short unsigned int, 32>  *, const class CBitVecT<CVarBitVecBase<short unsigned int, 32> >  &); /* linkage=_ZNK14CVarBitVecBaseItLt32EE15ValidateOperandIS0_EEvRK8CBitVecTIT_E */
};

// <06F1F39E> ../../public/tier0/bitvec.h:1013
inline void CVarBitVecBase<short unsigned int, 32>::GetNumBits()
{
} /* size: 0 */

// <027EEFBA> ../public/tier0/bitvec.h:1013
inline void CVarBitVecBase<short unsigned int, 1024>::GetNumBits()
{
} /* size: 0 */

// <06F1EC01> ../../public/tier0/bitvec.h:1016
inline void CVarBitVecBase<short unsigned int, 32>::GetNumDWords()
{
} /* size: 0 */

// <027EE728> ../public/tier0/bitvec.h:1016
inline void CVarBitVecBase<short unsigned int, 1024>::GetNumDWords()
{
} /* size: 0 */

// <06F1F385> ../../public/tier0/bitvec.h:1017
inline void CVarBitVecBase<short unsigned int, 32>::Base()
{
} /* size: 0 */

// <027EEFA1> ../public/tier0/bitvec.h:1017
inline void CVarBitVecBase<short unsigned int, 1024>::Base()
{
} /* size: 0 */

// <053F28D4> ../public/tier0/bitvec.h:1024
inline void CVarBitVecBase<short unsigned int, 32>::FindNextSetBit(int iStartBit)
{
} /* size: 0 */

// <053ED54E> ../public/tier0/bitvec.h:1083
// variables: 2
inline void ValidateOperand<CVarBitVecBase<short unsigned int, 32> CVarBitVecBase<short unsigned int, 32>::>(const CBitVecT<CVarBitVecBase<short unsigned int, 32> >& operand)
{
	const char   __FUNCTION__; // 32810
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1083
	}
} /* size: 0, variables: 1 */

// <022D71C6> ../public/tier0/bitvec.h:1083
// variables: 2
inline void ValidateOperand<CVarBitVecBase<short unsigned int, 32> CVarBitVecBase<short unsigned int, 32>::>(const CBitVecT<CVarBitVecBase<short unsigned int, 32> >& operand)
{
	const char   __FUNCTION__; // 60511
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1083
	}
} /* size: 0, variables: 1 */

// <020AB6C4> ../public/tier0/bitvec.h:1083
// variables: 2
inline void ValidateOperand<CVarBitVecBase<short unsigned int, 32> CVarBitVecBase<short unsigned int, 32>::>(const CBitVecT<CVarBitVecBase<short unsigned int, 32> >& operand)
{
	const char   __FUNCTION__; // 12437
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1083
	}
} /* size: 0, variables: 1 */

// <023A6453> ../public/tier0/bitvec.h:1087
inline void CVarBitVecBase<short unsigned int, 32>::GetEndMask()
{
} /* size: 0 */

// <0441A30D> ../public/tier0/bitvec.h:1149
// member functions: 14
// member variable: 1
// class size: 32
class CFixedBitVecBase<256> {
	/* ../public/tier0/bitvec.h:1193 */
	enum {
		NUM_INTS = 8,
	};
	/* ../public/tier0/bitvec.h:1152 */
	bool IsFixedSize(const CFixedBitVecBase<256>* );
	/* ../public/tier0/bitvec.h:1153 */
	int GetNumBits(const CFixedBitVecBase<256>* );
	/* ../public/tier0/bitvec.h:1154 */
	void Resize(CFixedBitVecBase<256>* , int, bool);
	/* ../public/tier0/bitvec.h:1156 */
	int GetNumDWords(const CFixedBitVecBase<256>* );
	/* ../public/tier0/bitvec.h:1157 */
	uint32* Base(CFixedBitVecBase<256>* );
	/* ../public/tier0/bitvec.h:1158 */
	const uint32* Base(const CFixedBitVecBase<256>* );
	/* ../public/tier0/bitvec.h:1160 */
	int FindNextSetBit(const CFixedBitVecBase<256>* , int);
	/* ../public/tier0/bitvec.h:1162 */
	int FindNextSetBit(const CFixedBitVecBase<256>* , int, int);
	/* ../public/tier0/bitvec.h:1169 */
	typedef struct CBitVecConstIterator<CFixedBitVecBase<256>, int> const_iterator;
	/* ../public/tier0/bitvec.h:1170 */
	const_iterator begin(const CFixedBitVecBase<256>* );
	/* ../public/tier0/bitvec.h:1171 */
	const_iterator end(const CFixedBitVecBase<256>* );
protected:
	/* ../public/tier0/bitvec.h:1174 */
	void CFixedBitVecBase(CFixedBitVecBase<256>* );
	/* ../public/tier0/bitvec.h:1175 */
	void CFixedBitVecBase(CFixedBitVecBase<256>* , int);
	/* ../public/tier0/bitvec.h:1177 */
	bool ShouldOptimizeForLargeCount(void);
	/* ../public/tier0/bitvec.h:1189 */
	unsigned int GetEndMask(const CFixedBitVecBase<256>* );
private:
	uint32 m_Ints[8]; /* 0 32 */
};

// <0441A566> ../public/tier0/bitvec.h:1149
// member functions: 14
// member variable: 1
// class size: 16
class CFixedBitVecBase<128> {
	/* ../public/tier0/bitvec.h:1193 */
	enum {
		NUM_INTS = 4,
	};
	/* ../public/tier0/bitvec.h:1152 */
	bool IsFixedSize(const CFixedBitVecBase<128>* );
	/* ../public/tier0/bitvec.h:1153 */
	int GetNumBits(const CFixedBitVecBase<128>* );
	/* ../public/tier0/bitvec.h:1154 */
	void Resize(CFixedBitVecBase<128>* , int, bool);
	/* ../public/tier0/bitvec.h:1156 */
	int GetNumDWords(const CFixedBitVecBase<128>* );
	/* ../public/tier0/bitvec.h:1157 */
	uint32* Base(CFixedBitVecBase<128>* );
	/* ../public/tier0/bitvec.h:1158 */
	const uint32* Base(const CFixedBitVecBase<128>* );
	/* ../public/tier0/bitvec.h:1160 */
	int FindNextSetBit(const CFixedBitVecBase<128>* , int);
	/* ../public/tier0/bitvec.h:1162 */
	int FindNextSetBit(const CFixedBitVecBase<128>* , int, int);
	/* ../public/tier0/bitvec.h:1169 */
	typedef struct CBitVecConstIterator<CFixedBitVecBase<128>, int> const_iterator;
	/* ../public/tier0/bitvec.h:1170 */
	const_iterator begin(const CFixedBitVecBase<128>* );
	/* ../public/tier0/bitvec.h:1171 */
	const_iterator end(const CFixedBitVecBase<128>* );
protected:
	/* ../public/tier0/bitvec.h:1174 */
	void CFixedBitVecBase(CFixedBitVecBase<128>* );
	/* ../public/tier0/bitvec.h:1175 */
	void CFixedBitVecBase(CFixedBitVecBase<128>* , int);
	/* ../public/tier0/bitvec.h:1177 */
	bool ShouldOptimizeForLargeCount(void);
	/* ../public/tier0/bitvec.h:1189 */
	unsigned int GetEndMask(const CFixedBitVecBase<128>* );
private:
	uint32 m_Ints[4]; /* 0 16 */
};

// <0441A7AD> ../public/tier0/bitvec.h:1149
// member functions: 14
// member variable: 1
// class size: 12
class CFixedBitVecBase<96> {
	/* ../public/tier0/bitvec.h:1193 */
	enum {
		NUM_INTS = 3,
	};
	/* ../public/tier0/bitvec.h:1152 */
	bool IsFixedSize(const CFixedBitVecBase<96>* );
	/* ../public/tier0/bitvec.h:1153 */
	int GetNumBits(const CFixedBitVecBase<96>* );
	/* ../public/tier0/bitvec.h:1154 */
	void Resize(CFixedBitVecBase<96>* , int, bool);
	/* ../public/tier0/bitvec.h:1156 */
	int GetNumDWords(const CFixedBitVecBase<96>* );
	/* ../public/tier0/bitvec.h:1157 */
	uint32* Base(CFixedBitVecBase<96>* );
	/* ../public/tier0/bitvec.h:1158 */
	const uint32* Base(const CFixedBitVecBase<96>* );
	/* ../public/tier0/bitvec.h:1160 */
	int FindNextSetBit(const CFixedBitVecBase<96>* , int);
	/* ../public/tier0/bitvec.h:1162 */
	int FindNextSetBit(const CFixedBitVecBase<96>* , int, int);
	/* ../public/tier0/bitvec.h:1169 */
	typedef struct CBitVecConstIterator<CFixedBitVecBase<96>, int> const_iterator;
	/* ../public/tier0/bitvec.h:1170 */
	const_iterator begin(const CFixedBitVecBase<96>* );
	/* ../public/tier0/bitvec.h:1171 */
	const_iterator end(const CFixedBitVecBase<96>* );
protected:
	/* ../public/tier0/bitvec.h:1174 */
	void CFixedBitVecBase(CFixedBitVecBase<96>* );
	/* ../public/tier0/bitvec.h:1175 */
	void CFixedBitVecBase(CFixedBitVecBase<96>* , int);
	/* ../public/tier0/bitvec.h:1177 */
	bool ShouldOptimizeForLargeCount(void);
	/* ../public/tier0/bitvec.h:1189 */
	unsigned int GetEndMask(const CFixedBitVecBase<96>* );
private:
	uint32 m_Ints[3]; /* 0 12 */
};

// <0441A9F4> ../public/tier0/bitvec.h:1149
// member functions: 14
// member variable: 1
// class size: 8
class CFixedBitVecBase<64> {
	/* ../public/tier0/bitvec.h:1193 */
	enum {
		NUM_INTS = 2,
	};
	/* ../public/tier0/bitvec.h:1152 */
	bool IsFixedSize(const CFixedBitVecBase<64>* );
	/* ../public/tier0/bitvec.h:1153 */
	int GetNumBits(const CFixedBitVecBase<64>* );
	/* ../public/tier0/bitvec.h:1154 */
	void Resize(CFixedBitVecBase<64>* , int, bool);
	/* ../public/tier0/bitvec.h:1156 */
	int GetNumDWords(const CFixedBitVecBase<64>* );
	/* ../public/tier0/bitvec.h:1157 */
	uint32* Base(CFixedBitVecBase<64>* );
	/* ../public/tier0/bitvec.h:1158 */
	const uint32* Base(const CFixedBitVecBase<64>* );
	/* ../public/tier0/bitvec.h:1160 */
	int FindNextSetBit(const CFixedBitVecBase<64>* , int);
	/* ../public/tier0/bitvec.h:1162 */
	int FindNextSetBit(const CFixedBitVecBase<64>* , int, int);
	/* ../public/tier0/bitvec.h:1169 */
	typedef struct CBitVecConstIterator<CFixedBitVecBase<64>, int> const_iterator;
	/* ../public/tier0/bitvec.h:1170 */
	const_iterator begin(const CFixedBitVecBase<64>* );
	/* ../public/tier0/bitvec.h:1171 */
	const_iterator end(const CFixedBitVecBase<64>* );
protected:
	/* ../public/tier0/bitvec.h:1174 */
	void CFixedBitVecBase(CFixedBitVecBase<64>* );
	/* ../public/tier0/bitvec.h:1175 */
	void CFixedBitVecBase(CFixedBitVecBase<64>* , int);
	/* ../public/tier0/bitvec.h:1177 */
	bool ShouldOptimizeForLargeCount(void);
	/* ../public/tier0/bitvec.h:1189 */
	unsigned int GetEndMask(const CFixedBitVecBase<64>* );
private:
	uint32 m_Ints[2]; /* 0 8 */
};

// <0441AC4B> ../public/tier0/bitvec.h:1149
// member functions: 14
// member variable: 1
// class size: 4
class CFixedBitVecBase<32> {
	/* ../public/tier0/bitvec.h:1193 */
	enum {
		NUM_INTS = 1,
	};
	/* ../public/tier0/bitvec.h:1152 */
	bool IsFixedSize(const CFixedBitVecBase<32>* );
	/* ../public/tier0/bitvec.h:1153 */
	int GetNumBits(const CFixedBitVecBase<32>* );
	/* ../public/tier0/bitvec.h:1154 */
	void Resize(CFixedBitVecBase<32>* , int, bool);
	/* ../public/tier0/bitvec.h:1156 */
	int GetNumDWords(const CFixedBitVecBase<32>* );
	/* ../public/tier0/bitvec.h:1157 */
	uint32* Base(CFixedBitVecBase<32>* );
	/* ../public/tier0/bitvec.h:1158 */
	const uint32* Base(const CFixedBitVecBase<32>* );
	/* ../public/tier0/bitvec.h:1160 */
	int FindNextSetBit(const CFixedBitVecBase<32>* , int);
	/* ../public/tier0/bitvec.h:1162 */
	int FindNextSetBit(const CFixedBitVecBase<32>* , int, int);
	/* ../public/tier0/bitvec.h:1169 */
	typedef struct CBitVecConstIterator<CFixedBitVecBase<32>, int> const_iterator;
	/* ../public/tier0/bitvec.h:1170 */
	const_iterator begin(const CFixedBitVecBase<32>* );
	/* ../public/tier0/bitvec.h:1171 */
	const_iterator end(const CFixedBitVecBase<32>* );
protected:
	/* ../public/tier0/bitvec.h:1174 */
	void CFixedBitVecBase(CFixedBitVecBase<32>* );
	/* ../public/tier0/bitvec.h:1175 */
	void CFixedBitVecBase(CFixedBitVecBase<32>* , int);
	/* ../public/tier0/bitvec.h:1177 */
	bool ShouldOptimizeForLargeCount(void);
	/* ../public/tier0/bitvec.h:1189 */
	unsigned int GetEndMask(const CFixedBitVecBase<32>* );
private:
	uint32 m_Ints[1]; /* 0 4 */
};

// <0023F286> ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1149
// member functions: 14
// member variable: 1
// class size: 32
class CFixedBitVecBase<256> {
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1193 */
	enum {
		NUM_INTS = 8,
	};
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1152 */
	bool IsFixedSize(const CFixedBitVecBase<256>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1153 */
	int GetNumBits(const CFixedBitVecBase<256>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1154 */
	void Resize(CFixedBitVecBase<256>* , int, bool);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1156 */
	int GetNumDWords(const CFixedBitVecBase<256>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1157 */
	uint32* Base(CFixedBitVecBase<256>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1158 */
	const uint32* Base(const CFixedBitVecBase<256>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1160 */
	int FindNextSetBit(const CFixedBitVecBase<256>* , int);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1162 */
	int FindNextSetBit(const CFixedBitVecBase<256>* , int, int);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1169 */
	typedef struct CBitVecConstIterator<CFixedBitVecBase<256>, int> const_iterator;
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1170 */
	const_iterator begin(const CFixedBitVecBase<256>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1171 */
	const_iterator end(const CFixedBitVecBase<256>* );
protected:
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1174 */
	void CFixedBitVecBase(CFixedBitVecBase<256>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1175 */
	void CFixedBitVecBase(CFixedBitVecBase<256>* , int);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1177 */
	bool ShouldOptimizeForLargeCount(void);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1189 */
	unsigned int GetEndMask(const CFixedBitVecBase<256>* );
private:
	uint32 m_Ints[8]; /* 0 32 */
};

// <0023F4DE> ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1149
// member functions: 14
// member variable: 1
// class size: 16
class CFixedBitVecBase<128> {
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1193 */
	enum {
		NUM_INTS = 4,
	};
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1152 */
	bool IsFixedSize(const CFixedBitVecBase<128>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1153 */
	int GetNumBits(const CFixedBitVecBase<128>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1154 */
	void Resize(CFixedBitVecBase<128>* , int, bool);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1156 */
	int GetNumDWords(const CFixedBitVecBase<128>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1157 */
	uint32* Base(CFixedBitVecBase<128>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1158 */
	const uint32* Base(const CFixedBitVecBase<128>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1160 */
	int FindNextSetBit(const CFixedBitVecBase<128>* , int);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1162 */
	int FindNextSetBit(const CFixedBitVecBase<128>* , int, int);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1169 */
	typedef struct CBitVecConstIterator<CFixedBitVecBase<128>, int> const_iterator;
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1170 */
	const_iterator begin(const CFixedBitVecBase<128>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1171 */
	const_iterator end(const CFixedBitVecBase<128>* );
protected:
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1174 */
	void CFixedBitVecBase(CFixedBitVecBase<128>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1175 */
	void CFixedBitVecBase(CFixedBitVecBase<128>* , int);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1177 */
	bool ShouldOptimizeForLargeCount(void);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1189 */
	unsigned int GetEndMask(const CFixedBitVecBase<128>* );
private:
	uint32 m_Ints[4]; /* 0 16 */
};

// <0023F725> ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1149
// member functions: 14
// member variable: 1
// class size: 12
class CFixedBitVecBase<96> {
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1193 */
	enum {
		NUM_INTS = 3,
	};
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1152 */
	bool IsFixedSize(const CFixedBitVecBase<96>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1153 */
	int GetNumBits(const CFixedBitVecBase<96>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1154 */
	void Resize(CFixedBitVecBase<96>* , int, bool);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1156 */
	int GetNumDWords(const CFixedBitVecBase<96>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1157 */
	uint32* Base(CFixedBitVecBase<96>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1158 */
	const uint32* Base(const CFixedBitVecBase<96>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1160 */
	int FindNextSetBit(const CFixedBitVecBase<96>* , int);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1162 */
	int FindNextSetBit(const CFixedBitVecBase<96>* , int, int);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1169 */
	typedef struct CBitVecConstIterator<CFixedBitVecBase<96>, int> const_iterator;
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1170 */
	const_iterator begin(const CFixedBitVecBase<96>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1171 */
	const_iterator end(const CFixedBitVecBase<96>* );
protected:
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1174 */
	void CFixedBitVecBase(CFixedBitVecBase<96>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1175 */
	void CFixedBitVecBase(CFixedBitVecBase<96>* , int);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1177 */
	bool ShouldOptimizeForLargeCount(void);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1189 */
	unsigned int GetEndMask(const CFixedBitVecBase<96>* );
private:
	uint32 m_Ints[3]; /* 0 12 */
};

// <0023F96C> ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1149
// member functions: 14
// member variable: 1
// class size: 8
class CFixedBitVecBase<64> {
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1193 */
	enum {
		NUM_INTS = 2,
	};
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1152 */
	bool IsFixedSize(const CFixedBitVecBase<64>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1153 */
	int GetNumBits(const CFixedBitVecBase<64>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1154 */
	void Resize(CFixedBitVecBase<64>* , int, bool);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1156 */
	int GetNumDWords(const CFixedBitVecBase<64>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1157 */
	uint32* Base(CFixedBitVecBase<64>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1158 */
	const uint32* Base(const CFixedBitVecBase<64>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1160 */
	int FindNextSetBit(const CFixedBitVecBase<64>* , int);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1162 */
	int FindNextSetBit(const CFixedBitVecBase<64>* , int, int);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1169 */
	typedef struct CBitVecConstIterator<CFixedBitVecBase<64>, int> const_iterator;
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1170 */
	const_iterator begin(const CFixedBitVecBase<64>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1171 */
	const_iterator end(const CFixedBitVecBase<64>* );
protected:
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1174 */
	void CFixedBitVecBase(CFixedBitVecBase<64>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1175 */
	void CFixedBitVecBase(CFixedBitVecBase<64>* , int);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1177 */
	bool ShouldOptimizeForLargeCount(void);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1189 */
	unsigned int GetEndMask(const CFixedBitVecBase<64>* );
private:
	uint32 m_Ints[2]; /* 0 8 */
};

// <0023FBC3> ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1149
// member functions: 14
// member variable: 1
// class size: 4
class CFixedBitVecBase<32> {
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1193 */
	enum {
		NUM_INTS = 1,
	};
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1152 */
	bool IsFixedSize(const CFixedBitVecBase<32>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1153 */
	int GetNumBits(const CFixedBitVecBase<32>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1154 */
	void Resize(CFixedBitVecBase<32>* , int, bool);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1156 */
	int GetNumDWords(const CFixedBitVecBase<32>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1157 */
	uint32* Base(CFixedBitVecBase<32>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1158 */
	const uint32* Base(const CFixedBitVecBase<32>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1160 */
	int FindNextSetBit(const CFixedBitVecBase<32>* , int);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1162 */
	int FindNextSetBit(const CFixedBitVecBase<32>* , int, int);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1169 */
	typedef struct CBitVecConstIterator<CFixedBitVecBase<32>, int> const_iterator;
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1170 */
	const_iterator begin(const CFixedBitVecBase<32>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1171 */
	const_iterator end(const CFixedBitVecBase<32>* );
protected:
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1174 */
	void CFixedBitVecBase(CFixedBitVecBase<32>* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1175 */
	void CFixedBitVecBase(CFixedBitVecBase<32>* , int);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1177 */
	bool ShouldOptimizeForLargeCount(void);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../public/tier0/bitvec.h:1189 */
	unsigned int GetEndMask(const CFixedBitVecBase<32>* );
private:
	uint32 m_Ints[1]; /* 0 4 */
};

// <06F2E889> ../../public/tier0/bitvec.h:1207
void CVarBitVecT<short unsigned int, 32>::~CVarBitVecT()
{
} /* size: 0 */

// <06F2E86C> ../../public/tier0/bitvec.h:1207
inline void CVarBitVecT<short unsigned int, 32>::~CVarBitVecT()
{
} /* size: 0 */

// <0280E18E> ../public/tier0/bitvec.h:1207
void CVarBitVecT<short unsigned int, 1024>::~CVarBitVecT()
{
} /* size: 0 */

// <0280E171> ../public/tier0/bitvec.h:1207
inline void CVarBitVecT<short unsigned int, 1024>::~CVarBitVecT()
{
} /* size: 0 */

// <000A5B17> ../public/tier0/bitvec.h:1207
// member functions: 5
// member variable: 1
// class size: 24
class CVarBitVecT<short unsigned int, 32> : public CBitVecT<CVarBitVecBase<short unsigned int, 32> > {
public:
	/* class CBitVecT<CVarBitVecBase<short unsigned int, 32> > <ancestor>; */ /* 0 24 */
	/* ../public/tier0/bitvec.h:1210 */
	void CVarBitVecT(CVarBitVecT<short unsigned int, 32>* );
	/* ../public/tier0/bitvec.h:1214 */
	void CVarBitVecT(CVarBitVecT<short unsigned int, 32>* , int);
	void CVarBitVecT(class CVarBitVecT<short unsigned int, 32> *); /* linkage=_ZN11CVarBitVecTItLt32EEC4Ev */
	void CVarBitVecT(class CVarBitVecT<short unsigned int, 32> *, int); /* linkage=_ZN11CVarBitVecTItLt32EEC4Ei */
	void ~CVarBitVecT(class CVarBitVecT<short unsigned int, 32> *); /* linkage=_ZN11CVarBitVecTItLt32EED4Ev */
};

// <00B9D72F> ../public/tier0/bitvec.h:1207
// member functions: 5
// member variable: 1
// class size: 144
class CVarBitVecT<short unsigned int, 1024> : public CBitVecT<CVarBitVecBase<short unsigned int, 1024> > {
public:
	/* class CBitVecT<CVarBitVecBase<short unsigned int, 1024> > <ancestor>; */ /* 0 144 */
	/* ../public/tier0/bitvec.h:1210 */
	void CVarBitVecT(CVarBitVecT<short unsigned int, 1024>* );
	/* ../public/tier0/bitvec.h:1214 */
	void CVarBitVecT(CVarBitVecT<short unsigned int, 1024>* , int);
	void CVarBitVecT(class CVarBitVecT<short unsigned int, 32> *); /* linkage=_ZN11CVarBitVecTItLt32EEC4Ev */
	void CVarBitVecT(class CVarBitVecT<short unsigned int, 32> *, int); /* linkage=_ZN11CVarBitVecTItLt32EEC4Ei */
	void ~CVarBitVecT(class CVarBitVecT<short unsigned int, 32> *); /* linkage=_ZN11CVarBitVecTItLt32EED4Ev */
};

// <053F3773> ../public/tier0/bitvec.h:1210
void CVarBitVecT<short unsigned int, 32>::CVarBitVecT()
{
} /* size: 0 */

// <053F375A> ../public/tier0/bitvec.h:1210
inline void CVarBitVecT<short unsigned int, 32>::CVarBitVecT()
{
} /* size: 0 */

// <06F20893> ../../public/tier0/bitvec.h:1214
void CVarBitVecT<short unsigned int, 32>::CVarBitVecT(int numBits)
{
} /* size: 0 */

// <06F2086D> ../../public/tier0/bitvec.h:1214
inline void CVarBitVecT<short unsigned int, 32>::CVarBitVecT(int numBits)
{
} /* size: 0 */

// <027F17E3> ../public/tier0/bitvec.h:1214
void CVarBitVecT<short unsigned int, 1024>::CVarBitVecT(int numBits)
{
} /* size: 0 */

// <027F17BD> ../public/tier0/bitvec.h:1214
inline void CVarBitVecT<short unsigned int, 1024>::CVarBitVecT(int numBits)
{
} /* size: 0 */

// <06F28DF9> ../../public/tier0/bitvec.h:1220
void CVarBitVec::~CVarBitVec()
{
} /* size: 0 */

// <06F28DDC> ../../public/tier0/bitvec.h:1220
inline void CVarBitVec::~CVarBitVec()
{
} /* size: 0 */

// <000A5B8B> ../public/tier0/bitvec.h:1220
// member functions: 5
// member variable: 1
// class size: 24
class CVarBitVec : public CVarBitVecT<short unsigned int, 32> {
public:
	/* class CVarBitVecT<short unsigned int, 32> <ancestor>; */ /* 0 24 */
	/* ../public/tier0/bitvec.h:1223 */
	void CVarBitVec(CVarBitVec* );
	/* ../public/tier0/bitvec.h:1224 */
	void CVarBitVec(CVarBitVec* , int);
	void CVarBitVec(class CVarBitVec *); /* linkage=_ZN10CVarBitVecC4Ev */
	void CVarBitVec(class CVarBitVec *, int); /* linkage=_ZN10CVarBitVecC4Ei */
	void ~CVarBitVec(class CVarBitVec *); /* linkage=_ZN10CVarBitVecD4Ev */
};

// <0541906C> ../public/tier0/bitvec.h:1223
void CVarBitVec::CVarBitVec()
{
} /* size: 0 */

// <05419053> ../public/tier0/bitvec.h:1223
inline void CVarBitVec::CVarBitVec()
{
} /* size: 0 */

// <06F2E850> ../../public/tier0/bitvec.h:1224
void CVarBitVec::CVarBitVec(int nBitCount)
{
} /* size: 0 */

// <06F2E82A> ../../public/tier0/bitvec.h:1224
inline void CVarBitVec::CVarBitVec(int nBitCount)
{
} /* size: 0 */

// <053EB689> ../public/tier0/bitvec.h:1279
void CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase()
{
} /* size: 0 */

// <053EB66D> ../public/tier0/bitvec.h:1279
inline void CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase()
{
} /* size: 0 */

// <06F1F27F> ../../public/tier0/bitvec.h:1287
void CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(int numBits)
{
} /* size: 0 */

// <06F1F256> ../../public/tier0/bitvec.h:1287
inline void CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(int numBits)
{
} /* size: 0 */

// <027ED205> ../public/tier0/bitvec.h:1287
void CVarBitVecBase<short unsigned int, 1024>::CVarBitVecBase(int numBits)
{
} /* size: 0 */

// <027ED1DF> ../public/tier0/bitvec.h:1287
inline void CVarBitVecBase<short unsigned int, 1024>::CVarBitVecBase(int numBits)
{
} /* size: 0 */

// <06F208CB> ../../public/tier0/bitvec.h:1340
void CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase()
{
} /* size: 0 */

// <06F208AF> ../../public/tier0/bitvec.h:1340
inline void CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase()
{
} /* size: 0 */

// <027F17A6> ../public/tier0/bitvec.h:1340
void CVarBitVecBase<short unsigned int, 1024>::~CVarBitVecBase()
{
} /* size: 0 */

// <027F178D> ../public/tier0/bitvec.h:1340
inline void CVarBitVecBase<short unsigned int, 1024>::~CVarBitVecBase()
{
} /* size: 0 */

// <053EDB7F> ../public/tier0/bitvec.h:1405
void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT()
{
} /* size: 0 */

// <053EDB63> ../public/tier0/bitvec.h:1405
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT()
{
} /* size: 0 */

// <06F1FB9B> ../../public/tier0/bitvec.h:1418
void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(int numBits)
{
} /* size: 0 */

// <06F1FB72> ../../public/tier0/bitvec.h:1418
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(int numBits)
{
} /* size: 0 */

// <027EF012> ../public/tier0/bitvec.h:1418
void CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::CBitVecT(int numBits)
{
} /* size: 0 */

// <027EEFEC> ../public/tier0/bitvec.h:1418
inline void CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::CBitVecT(int numBits)
{
} /* size: 0 */

// <05EEDCD5> ../public/tier0/bitvec.h:1433
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::operator[](int i)
{
	const char   __FUNCTION__; // 4466
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1435
	}
} /* size: 0, variables: 1 */

// <027F16E0> ../public/tier0/bitvec.h:1458
// variables: 3
inline void CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::Get(uint32 bitNum)
{
	const char   __FUNCTION__; // 21322
	const uint32* pInt; // 1461
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1460
	}
} /* size: 0, variables: 2 */

// <02786B4F> ../public/tier0/bitvec.h:1458
// variables: 3
inline void CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::Get(uint32 bitNum)
{
	const char   __FUNCTION__; // 48214
	const uint32* pInt; // 1461
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1460
	}
} /* size: 0, variables: 2 */

// <06F1FC7F> ../../public/tier0/bitvec.h:1468
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(int bitNum)
{
	const char   __FUNCTION__; // 26802
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1470
	}
} /* size: 0, variables: 1 */

// <05DE4B9E> ../public/tier0/bitvec.h:1468
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(int bitNum)
{
	const char   __FUNCTION__; // 8053
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1470
	}
} /* size: 0, variables: 1 */

// <05BB9994> ../public/tier0/bitvec.h:1468
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(int bitNum)
{
	const char   __FUNCTION__; // 39320
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1470
	}
} /* size: 0, variables: 1 */

// <053F340B> ../public/tier0/bitvec.h:1468
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(int bitNum)
{
	const char   __FUNCTION__; // 32631
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1470
	}
} /* size: 0, variables: 1 */

// <0499A57E> ../public/tier0/bitvec.h:1468
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(int bitNum)
{
	const char   __FUNCTION__; // 48085
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1470
	}
} /* size: 0, variables: 1 */

// <02CFAEDC> ../public/tier0/bitvec.h:1468
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(int bitNum)
{
	const char   __FUNCTION__; // 32213
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1470
	}
} /* size: 0, variables: 1 */

// <027F1BE2> ../public/tier0/bitvec.h:1468
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(int bitNum)
{
	const char   __FUNCTION__; // 21452
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1470
	}
} /* size: 0, variables: 1 */

// <0269C327> ../public/tier0/bitvec.h:1468
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::IsBitSet(int bitNum)
{
	const char   __FUNCTION__; // 51372
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1470
	}
} /* size: 0, variables: 1 */

// <01CDF3EC> ../public/tier0/bitvec.h:1468
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(int bitNum)
{
	const char   __FUNCTION__; // 55608
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1470
	}
} /* size: 0, variables: 1 */

// <00C849D4> ../public/tier0/bitvec.h:1468
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(int bitNum)
{
	const char   __FUNCTION__; // 21871
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1470
	}
} /* size: 0, variables: 1 */

// <014E4B14> ../public/tier0/bitvec.h:1468
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(int bitNum)
{
	const char   __FUNCTION__; // 22397
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1470
	}
} /* size: 0, variables: 1 */

// <00A3069F> ../public/tier0/bitvec.h:1468
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(int bitNum)
{
	const char   __FUNCTION__; // 17849
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1470
	}
} /* size: 0, variables: 1 */

// <009153C1> ../public/tier0/bitvec.h:1468
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(int bitNum)
{
	const char   __FUNCTION__; // 30333
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1470
	}
} /* size: 0, variables: 1 */

// <06F1FD1E> ../../public/tier0/bitvec.h:1477
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(int bitNum)
{
	const char   __FUNCTION__; // 26677
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1479
	}
} /* size: 0, variables: 1 */

// <05EEDC83> ../public/tier0/bitvec.h:1477
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(int bitNum)
{
	const char   __FUNCTION__; // 4287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1479
	}
} /* size: 0, variables: 1 */

// <05BB7FD2> ../public/tier0/bitvec.h:1477
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(int bitNum)
{
	const char   __FUNCTION__; // 39190
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1479
	}
} /* size: 0, variables: 1 */

// <053F1FF7> ../public/tier0/bitvec.h:1477
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(int bitNum)
{
	const char   __FUNCTION__; // 32501
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1479
	}
} /* size: 0, variables: 1 */

// <04AB4D3A> ../public/tier0/bitvec.h:1477
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(int bitNum)
{
	const char   __FUNCTION__; // 35476
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1479
	}
} /* size: 0, variables: 1 */

// <04999B6F> ../public/tier0/bitvec.h:1477
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(int bitNum)
{
	const char   __FUNCTION__; // 48043
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1479
	}
} /* size: 0, variables: 1 */

// <023A67F7> ../public/tier0/bitvec.h:1477
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(int bitNum)
{
	const char   __FUNCTION__; // 24338
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1479
	}
} /* size: 0, variables: 1 */

// <02CF951A> ../public/tier0/bitvec.h:1477
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(int bitNum)
{
	const char   __FUNCTION__; // 32083
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1479
	}
} /* size: 0, variables: 1 */

// <027F173D> ../public/tier0/bitvec.h:1477
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::Set(int bitNum)
{
	const char   __FUNCTION__; // 21322
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1479
	}
} /* size: 0, variables: 1 */

// <02786BAD> ../public/tier0/bitvec.h:1477
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::Set(int bitNum)
{
	const char   __FUNCTION__; // 48214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1479
	}
} /* size: 0, variables: 1 */

// <0269C892> ../public/tier0/bitvec.h:1477
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::Set(int bitNum)
{
	const char   __FUNCTION__; // 51242
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1479
	}
} /* size: 0, variables: 1 */

// <020B016D> ../public/tier0/bitvec.h:1477
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(int bitNum)
{
	const char   __FUNCTION__; // 12128
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1479
	}
} /* size: 0, variables: 1 */

// <01DF9BA8> ../public/tier0/bitvec.h:1477
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(int bitNum)
{
	const char   __FUNCTION__; // 42999
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1479
	}
} /* size: 0, variables: 1 */

// <01CDE9DD> ../public/tier0/bitvec.h:1477
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(int bitNum)
{
	const char   __FUNCTION__; // 55566
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1479
	}
} /* size: 0, variables: 1 */

// <00A2FB7D> ../public/tier0/bitvec.h:1477
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(int bitNum)
{
	const char   __FUNCTION__; // 17724
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1479
	}
} /* size: 0, variables: 1 */

// <009149B2> ../public/tier0/bitvec.h:1477
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(int bitNum)
{
	const char   __FUNCTION__; // 30291
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1479
	}
} /* size: 0, variables: 1 */

// <05DE298A> ../public/tier0/bitvec.h:1495
// variables: 3
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Clear(int bitNum)
{
	const char   __FUNCTION__; // 7977
	uint32* pInt; // 1498
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1497
	}
} /* size: 0, variables: 2 */

// <053F296F> ../public/tier0/bitvec.h:1495
// variables: 3
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Clear(int bitNum)
{
	const char   __FUNCTION__; // 32555
	uint32* pInt; // 1498
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1497
	}
} /* size: 0, variables: 2 */

// <020B0AE5> ../public/tier0/bitvec.h:1495
// variables: 3
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Clear(int bitNum)
{
	const char   __FUNCTION__; // 12182
	uint32* pInt; // 1498
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1497
	}
} /* size: 0, variables: 2 */

// <00C6F6F2> ../public/tier0/bitvec.h:1495
// variables: 3
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Clear(int bitNum)
{
	const char   __FUNCTION__; // 21790
	uint32* pInt; // 1498
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1497
	}
} /* size: 0, variables: 2 */

// <013155B0> ../public/tier0/bitvec.h:1495
// variables: 3
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Clear(int bitNum)
{
	const char   __FUNCTION__; // 47057
	uint32* pInt; // 1498
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1497
	}
} /* size: 0, variables: 2 */

// <022D7C76> ../public/tier0/bitvec.h:1854
// variables: 2
inline void CopyTo<CVarBitVecBase<short unsigned int, 32> CBitVecT<CVarBitVecBase<short unsigned int, 32> >::>(CBitVecT<CVarBitVecBase<short unsigned int, 32> >* out)
{
	const char   __FUNCTION__; // 60293
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1859
	}
} /* size: 0, variables: 1 */

// <053F29CE> ../public/tier0/bitvec.h:1870
// variable: 1
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsAllClear()
{
	{
		int i; // 1877
	}
} /* size: 0 */

// <05EEDC5A> ../public/tier0/bitvec.h:1893
// variable: 1
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsAllSet()
{
	{
		int i; // 1900
	}
} /* size: 0 */

// <022D80A8> ../public/tier0/bitvec.h:1916
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::SetAll()
{
} /* size: 0 */

// <05DE2A7F> ../public/tier0/bitvec.h:1922
// variables: 8
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Ranged_Set(int nStartBit, int nEndBit)
{
	const char   __FUNCTION__; // 8107
	uint32* pMem; // 1926
	int nFirstDWord; // 1928
	int nLastDWord; // 1929
	const uint32  nStartMask; // 1932
	const uint32  nEndMask; // 1933
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1924
	}
	{
		uint32 nCombinedMask; // 1937
	}
} /* size: 0, variables: 6 */

// <06F1F29B> ../../public/tier0/bitvec.h:1968
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll()
{
} /* size: 0 */

// <027EFA08> ../public/tier0/bitvec.h:1968
inline void CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::ClearAll()
{
} /* size: 0 */

// <053F28FA> ../public/tier0/bitvec.h:2016
// variables: 2
inline void Copy<CVarBitVecBase<short unsigned int, 32> CBitVecT<CVarBitVecBase<short unsigned int, 32> >::>(const CBitVecT<CVarBitVecBase<short unsigned int, 32> >& other, int nBits)
{
	const char   __FUNCTION__; // 32528
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2026
	}
} /* size: 0, variables: 1 */

// <020B0A70> ../public/tier0/bitvec.h:2016
// variables: 2
inline void Copy<CVarBitVecBase<short unsigned int, 32> CBitVecT<CVarBitVecBase<short unsigned int, 32> >::>(const CBitVecT<CVarBitVecBase<short unsigned int, 32> >& other, int nBits)
{
	const char   __FUNCTION__; // 12155
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2026
	}
} /* size: 0, variables: 1 */

// <0272D5E3> ../public/tier0/bitvec.h:2212
// variables: 2
inline void CBitVecT<CVarBitVecBase<short unsigned int, 32> >::GetDWord(int i)
{
	const char   __FUNCTION__; // 8687
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2214
	}
} /* size: 0, variables: 1 */

// <053F207B> ../public/tier0/bitvec.h:2503
// variable: 1
// function calls: 26
void CVarBitVecBase<short unsigned int, 32>::Resize(int resizeNumBits, bool bClearAll)
{
	int newIntCount; // 2505
	CalcNumIntsForBits(int numBits); // 2505
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 2506
	CVarBitVecBase<short unsigned int, 32>::Base(); // 2508
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 2573
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 2590
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 2582
	CVarBitVecBase<short unsigned int, 32>::ReallocInts(
			int numInts);  // 2510
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 2511
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 2527
	CVarBitVecBase<short unsigned int, 32>::Base(); // 2527
	GetEndMask(int numBits); // 1087
	CVarBitVecBase<short unsigned int, 32>::GetEndMask(); // 2529
	CVarBitVecBase<short unsigned int, 32>::Base(); // 2513
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 2534
	CVarBitVecBase<short unsigned int, 32>::AllocInts(
			int numInts);  // 2546
	CVarBitVecBase<short unsigned int, 32>::AllocInts(
			int numInts);  // 2520
	GetEndMask(int numBits); // 1087
	CVarBitVecBase<short unsigned int, 32>::GetEndMask(); // 2513
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 2513
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 2514
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 2514
	CVarBitVecBase<short unsigned int, 32>::Base(); // 2514
} /* size: 596, variables: 1, inline expansions: 26 (512 bytes) */

// <027EF9AC> ../public/tier0/bitvec.h:2503
// variable: 1
inline void CVarBitVecBase<short unsigned int, 32>::Resize(int resizeNumBits, bool bClearAll)
{
	int newIntCount; // 2505
} /* size: 0, variables: 1 */

// <06F1EBB8> ../../public/tier0/bitvec.h:2546
// variables: 2
inline void CVarBitVecBase<short unsigned int, 32>::AllocInts(int numInts)
{
	const char   __FUNCTION__; // 26829
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2548
	}
} /* size: 0, variables: 1 */

// <05EDEA39> ../public/tier0/bitvec.h:2546
// variables: 2
inline void CVarBitVecBase<short unsigned int, 32>::AllocInts(int numInts)
{
	const char   __FUNCTION__; // 4439
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2548
	}
} /* size: 0, variables: 1 */

// <05DC81E1> ../public/tier0/bitvec.h:2546
// variables: 2
inline void CVarBitVecBase<short unsigned int, 32>::AllocInts(int numInts)
{
	const char   __FUNCTION__; // 8080
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2548
	}
} /* size: 0, variables: 1 */

// <053ED29D> ../public/tier0/bitvec.h:2546
// variables: 2
inline void CVarBitVecBase<short unsigned int, 32>::AllocInts(int numInts)
{
	const char   __FUNCTION__; // 32658
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2548
	}
} /* size: 0, variables: 1 */

// <04998FA5> ../public/tier0/bitvec.h:2546
// variables: 2
inline void CVarBitVecBase<short unsigned int, 32>::AllocInts(int numInts)
{
	const char   __FUNCTION__; // 48106
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2548
	}
} /* size: 0, variables: 1 */

// <023A66CC> ../public/tier0/bitvec.h:2546
// variables: 2
inline void CVarBitVecBase<short unsigned int, 32>::AllocInts(int numInts)
{
	const char   __FUNCTION__; // 24401
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2548
	}
} /* size: 0, variables: 1 */

// <027EE670> ../public/tier0/bitvec.h:2546
// variables: 2
inline void CVarBitVecBase<short unsigned int, 32>::AllocInts(int numInts)
{
	const char   __FUNCTION__; // 21479
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2548
	}
} /* size: 0, variables: 1 */

// <027EC393> ../public/tier0/bitvec.h:2546
// variables: 2
inline void CVarBitVecBase<short unsigned int, 1024>::AllocInts(int numInts)
{
	const char   __FUNCTION__; // 21479
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2548
	}
} /* size: 0, variables: 1 */

// <027846E7> ../public/tier0/bitvec.h:2546
// variables: 2
inline void CVarBitVecBase<short unsigned int, 1024>::AllocInts(int numInts)
{
	const char   __FUNCTION__; // 48356
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2548
	}
} /* size: 0, variables: 1 */

// <02698246> ../public/tier0/bitvec.h:2546
// variables: 2
inline void CVarBitVecBase<short unsigned int, 1024>::AllocInts(int numInts)
{
	const char   __FUNCTION__; // 51399
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2548
	}
} /* size: 0, variables: 1 */

// <025B23D0> ../public/tier0/bitvec.h:2546
// variables: 2
inline void CVarBitVecBase<short unsigned int, 1024>::AllocInts(int numInts)
{
	const char   __FUNCTION__; // 20704
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2548
	}
} /* size: 0, variables: 1 */

// <020AB413> ../public/tier0/bitvec.h:2546
// variables: 2
inline void CVarBitVecBase<short unsigned int, 32>::AllocInts(int numInts)
{
	const char   __FUNCTION__; // 12285
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2548
	}
} /* size: 0, variables: 1 */

// <00C5CAEC> ../public/tier0/bitvec.h:2546
// variables: 2
inline void CVarBitVecBase<short unsigned int, 32>::AllocInts(int numInts)
{
	const char   __FUNCTION__; // 21898
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2548
	}
} /* size: 0, variables: 1 */

// <00913DE8> ../public/tier0/bitvec.h:2546
// variables: 2
inline void CVarBitVecBase<short unsigned int, 32>::AllocInts(int numInts)
{
	const char   __FUNCTION__; // 30354
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2548
	}
} /* size: 0, variables: 1 */

// <053ED2E6> ../public/tier0/bitvec.h:2568
// variables: 2
inline void CVarBitVecBase<short unsigned int, 32>::ReallocInts(int numInts)
{
	const char   __FUNCTION__; // 32712
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2570
	}
} /* size: 0, variables: 1 */

// <023A6485> ../public/tier0/bitvec.h:2568
// variables: 2
inline void CVarBitVecBase<short unsigned int, 32>::ReallocInts(int numInts)
{
	const char   __FUNCTION__; // 24422
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2570
	}
} /* size: 0, variables: 1 */

// <027EE6B9> ../public/tier0/bitvec.h:2568
// variables: 2
inline void CVarBitVecBase<short unsigned int, 32>::ReallocInts(int numInts)
{
	const char   __FUNCTION__; // 21528
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2570
	}
} /* size: 0, variables: 1 */

// <022D7324> ../public/tier0/bitvec.h:2568
// variables: 2
inline void CVarBitVecBase<short unsigned int, 32>::ReallocInts(int numInts)
{
	const char   __FUNCTION__; // 60418
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2570
	}
} /* size: 0, variables: 1 */

// <06F1FBB7> ../../public/tier0/bitvec.h:2604
inline void CVarBitVecBase<short unsigned int, 32>::FreeInts()
{
} /* size: 0 */

// <027EEFD3> ../public/tier0/bitvec.h:2604
inline void CVarBitVecBase<short unsigned int, 1024>::FreeInts()
{
} /* size: 0 */

// <05F09355> ../public/tier0/bitvec.h:2617
void CBitVecAccessor::CBitVecAccessor(uint32* pDWords, int iBit)
{
} /* size: 0 */

// <05F0931F> ../public/tier0/bitvec.h:2617
inline void CBitVecAccessor::CBitVecAccessor(uint32* pDWords, int iBit)
{
} /* size: 0 */

// <05F09303> ../public/tier0/bitvec.h:2632
inline void operator CBitVecAccessor::uint32()
{
} /* size: 0 */

