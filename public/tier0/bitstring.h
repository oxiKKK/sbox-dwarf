
//
// public/tier0/bitstring.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libtier0.so
//
//	functions: 34
//	classes: 5
//

// <0003AAA0> ../public/tier0/bitstring.h:38
inline unsigned int BitStringGetEndMask(int numBits)
{
} /* size: 0 */

// <0003AA7D> ../public/tier0/bitstring.h:40
inline int BitStringCalcNumIntsForBits(int numBits)
{
} /* size: 0 */

// <00B4A9D9> ../public/tier0/bitstring.h:61
void CBitStringT<CVariableBitStringBase>::~CBitStringT()
{
} /* size: 0 */

// <00B4A9BD> ../public/tier0/bitstring.h:61
inline void CBitStringT<CVariableBitStringBase>::~CBitStringT()
{
} /* size: 0 */

// <00046F72> ../public/tier0/bitstring.h:61
void CBitStringT<CVariableBitStringBase>::CBitStringT(CBitStringT<CVariableBitStringBase> &)
{
} /* size: 0 */

// <00046F51> ../public/tier0/bitstring.h:61
inline void CBitStringT<CVariableBitStringBase>::CBitStringT(CBitStringT<CVariableBitStringBase> &)
{
} /* size: 0 */

// <00046EF3> ../public/tier0/bitstring.h:61
inline void CBitStringT<CVariableBitStringBase>::operator=(CBitStringT<CVariableBitStringBase> &)
{
} /* size: 0 */

// <00987DAD> ../public/tier0/bitstring.h:61
// member functions: 38
// member variable: 1
// class size: 24
class CBitStringT<CVariableBitStringBase> : public CVariableBitStringBase {
public:
	/* class CVariableBitStringBase <ancestor>; */ /* 0 24 */
	/* ../public/tier0/bitstring.h:64 */
	void CBitStringT(CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:65 */
	void CBitStringT(CBitStringT<CVariableBitStringBase>* , int);
	/* ../public/tier0/bitstring.h:68 */
	void And(const CBitStringT<CVariableBitStringBase>* , const CBitStringT<CVariableBitStringBase>& , CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:69 */
	void Or(const CBitStringT<CVariableBitStringBase>* , const CBitStringT<CVariableBitStringBase>& , CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:70 */
	void Xor(const CBitStringT<CVariableBitStringBase>* , const CBitStringT<CVariableBitStringBase>& , CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:72 */
	void Not(const CBitStringT<CVariableBitStringBase>* , CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:74 */
	void Copy(const CBitStringT<CVariableBitStringBase>* , CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:76 */
	bool IsAllClear(const CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:77 */
	bool IsAllSet(const CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:79 */
	bool GetBit(const CBitStringT<CVariableBitStringBase>* , int);
	/* ../public/tier0/bitstring.h:80 */
	void SetBit(CBitStringT<CVariableBitStringBase>* , int);
	/* ../public/tier0/bitstring.h:81 */
	void ClearBit(CBitStringT<CVariableBitStringBase>* , int);
	/* ../public/tier0/bitstring.h:83 */
	void SetAllBits(CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:84 */
	void ClearAllBits(CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:86 */
	void DebugPrintBits(const CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:88 */
	void SaveBitString(const CBitStringT<CVariableBitStringBase>* , CUtlBuffer& );
	/* ../public/tier0/bitstring.h:89 */
	void LoadBitString(CBitStringT<CVariableBitStringBase>* , CUtlBuffer& );
	void ~CBitStringT(CBitStringT<CVariableBitStringBase>* );
	void CBitStringT(class CBitStringT<CVariableBitStringBase> *); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseEC4Ev */
	void CBitStringT(class CBitStringT<CVariableBitStringBase> *, int); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseEC4Ei */
	void And(const class CBitStringT<CVariableBitStringBase>  *, const class CBitStringT<CVariableBitStringBase>  &, class CBitStringT<CVariableBitStringBase> *); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE3AndERKS1_PS1_ */
	void Or(const class CBitStringT<CVariableBitStringBase>  *, const class CBitStringT<CVariableBitStringBase>  &, class CBitStringT<CVariableBitStringBase> *); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE2OrERKS1_PS1_ */
	void Xor(const class CBitStringT<CVariableBitStringBase>  *, const class CBitStringT<CVariableBitStringBase>  &, class CBitStringT<CVariableBitStringBase> *); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE3XorERKS1_PS1_ */
	void Not(const class CBitStringT<CVariableBitStringBase>  *, class CBitStringT<CVariableBitStringBase> *); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE3NotEPS1_ */
	void Copy(const class CBitStringT<CVariableBitStringBase>  *, class CBitStringT<CVariableBitStringBase> *); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE4CopyEPS1_ */
	bool IsAllClear(const class CBitStringT<CVariableBitStringBase>  *); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE10IsAllClearEv */
	bool IsAllSet(const class CBitStringT<CVariableBitStringBase>  *); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE8IsAllSetEv */
	bool GetBit(const class CBitStringT<CVariableBitStringBase>  *, int); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE6GetBitEi */
	void SetBit(class CBitStringT<CVariableBitStringBase> *, int); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseE6SetBitEi */
	void ClearBit(class CBitStringT<CVariableBitStringBase> *, int); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseE8ClearBitEi */
	void SetAllBits(class CBitStringT<CVariableBitStringBase> *); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseE10SetAllBitsEv */
	void ClearAllBits(class CBitStringT<CVariableBitStringBase> *); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseE12ClearAllBitsEv */
	void DebugPrintBits(const class CBitStringT<CVariableBitStringBase>  *); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE14DebugPrintBitsEv */
	void SaveBitString(const class CBitStringT<CVariableBitStringBase>  *, class CUtlBuffer &); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE13SaveBitStringER10CUtlBuffer */
	void LoadBitString(class CBitStringT<CVariableBitStringBase> *, class CUtlBuffer &); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseE13LoadBitStringER10CUtlBuffer */
	class CBitStringT<CVariableBitStringBase> & operator=(class CBitStringT<CVariableBitStringBase> *, class CBitStringT<CVariableBitStringBase> &); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseEaSEOS1_ */
	void CBitStringT(class CBitStringT<CVariableBitStringBase> *, class CBitStringT<CVariableBitStringBase> &); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseEC4EOS1_ */
	void ~CBitStringT(class CBitStringT<CVariableBitStringBase> *); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseED4Ev */
};

// <0002E6B8> ../public/tier0/bitstring.h:61
// member functions: 40
// member variable: 1
// class size: 24
class CBitStringT<CVariableBitStringBase> : public CVariableBitStringBase {
public:
	/* class CVariableBitStringBase <ancestor>; */ /* 0 24 */
	/* ../public/tier0/bitstring.h:64 */
	void CBitStringT(CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:65 */
	void CBitStringT(CBitStringT<CVariableBitStringBase>* , int);
	/* ../public/tier0/bitstring.h:68 */
	void And(const CBitStringT<CVariableBitStringBase>* , const CBitStringT<CVariableBitStringBase>& , CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:69 */
	void Or(const CBitStringT<CVariableBitStringBase>* , const CBitStringT<CVariableBitStringBase>& , CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:70 */
	void Xor(const CBitStringT<CVariableBitStringBase>* , const CBitStringT<CVariableBitStringBase>& , CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:72 */
	void Not(const CBitStringT<CVariableBitStringBase>* , CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:74 */
	void Copy(const CBitStringT<CVariableBitStringBase>* , CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:76 */
	bool IsAllClear(const CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:77 */
	bool IsAllSet(const CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:79 */
	bool GetBit(const CBitStringT<CVariableBitStringBase>* , int);
	/* ../public/tier0/bitstring.h:80 */
	void SetBit(CBitStringT<CVariableBitStringBase>* , int);
	/* ../public/tier0/bitstring.h:81 */
	void ClearBit(CBitStringT<CVariableBitStringBase>* , int);
	/* ../public/tier0/bitstring.h:83 */
	void SetAllBits(CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:84 */
	void ClearAllBits(CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:86 */
	void DebugPrintBits(const CBitStringT<CVariableBitStringBase>* );
	/* ../public/tier0/bitstring.h:88 */
	void SaveBitString(const CBitStringT<CVariableBitStringBase>* , CUtlBuffer& );
	/* ../public/tier0/bitstring.h:89 */
	void LoadBitString(CBitStringT<CVariableBitStringBase>* , CUtlBuffer& );
	CBitStringT<CVariableBitStringBase>& operator=(CBitStringT<CVariableBitStringBase>* , CBitStringT<CVariableBitStringBase>& );
	void CBitStringT(CBitStringT<CVariableBitStringBase>* , CBitStringT<CVariableBitStringBase>& );
	void ~CBitStringT(CBitStringT<CVariableBitStringBase>* );
	void CBitStringT(class CBitStringT<CVariableBitStringBase> *); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseEC4Ev */
	void CBitStringT(class CBitStringT<CVariableBitStringBase> *, int); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseEC4Ei */
	void And(const class CBitStringT<CVariableBitStringBase>  *, const class CBitStringT<CVariableBitStringBase>  &, class CBitStringT<CVariableBitStringBase> *); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE3AndERKS1_PS1_ */
	void Or(const class CBitStringT<CVariableBitStringBase>  *, const class CBitStringT<CVariableBitStringBase>  &, class CBitStringT<CVariableBitStringBase> *); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE2OrERKS1_PS1_ */
	void Xor(const class CBitStringT<CVariableBitStringBase>  *, const class CBitStringT<CVariableBitStringBase>  &, class CBitStringT<CVariableBitStringBase> *); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE3XorERKS1_PS1_ */
	void Not(const class CBitStringT<CVariableBitStringBase>  *, class CBitStringT<CVariableBitStringBase> *); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE3NotEPS1_ */
	void Copy(const class CBitStringT<CVariableBitStringBase>  *, class CBitStringT<CVariableBitStringBase> *); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE4CopyEPS1_ */
	bool IsAllClear(const class CBitStringT<CVariableBitStringBase>  *); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE10IsAllClearEv */
	bool IsAllSet(const class CBitStringT<CVariableBitStringBase>  *); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE8IsAllSetEv */
	bool GetBit(const class CBitStringT<CVariableBitStringBase>  *, int); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE6GetBitEi */
	void SetBit(class CBitStringT<CVariableBitStringBase> *, int); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseE6SetBitEi */
	void ClearBit(class CBitStringT<CVariableBitStringBase> *, int); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseE8ClearBitEi */
	void SetAllBits(class CBitStringT<CVariableBitStringBase> *); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseE10SetAllBitsEv */
	void ClearAllBits(class CBitStringT<CVariableBitStringBase> *); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseE12ClearAllBitsEv */
	void DebugPrintBits(const class CBitStringT<CVariableBitStringBase>  *); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE14DebugPrintBitsEv */
	void SaveBitString(const class CBitStringT<CVariableBitStringBase>  *, class CUtlBuffer &); /* linkage=_ZNK11CBitStringTI22CVariableBitStringBaseE13SaveBitStringER10CUtlBuffer */
	void LoadBitString(class CBitStringT<CVariableBitStringBase> *, class CUtlBuffer &); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseE13LoadBitStringER10CUtlBuffer */
	class CBitStringT<CVariableBitStringBase> & operator=(class CBitStringT<CVariableBitStringBase> *, class CBitStringT<CVariableBitStringBase> &); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseEaSEOS1_ */
	void CBitStringT(class CBitStringT<CVariableBitStringBase> *, class CBitStringT<CVariableBitStringBase> &); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseEC4EOS1_ */
	void ~CBitStringT(class CBitStringT<CVariableBitStringBase> *); /* linkage=_ZN11CBitStringTI22CVariableBitStringBaseED4Ev */
};

// <00987AF4> ../public/tier0/bitstring.h:98
// member functions: 34
// member variables: 4
// class size: 24
class CVariableBitStringBase {
	/* ../public/tier0/bitstring.h:101 */
	bool IsFixedSize(const CVariableBitStringBase* );
	/* ../public/tier0/bitstring.h:102 */
	int Size(const CVariableBitStringBase* );
	/* ../public/tier0/bitstring.h:103 */
	void Resize(CVariableBitStringBase* , int);
	/* ../public/tier0/bitstring.h:105 */
	int GetNumInts(const CVariableBitStringBase* );
	/* ../public/tier0/bitstring.h:106 */
	int* GetInts(CVariableBitStringBase* );
	/* ../public/tier0/bitstring.h:107 */
	const int* GetInts(const CVariableBitStringBase* );
	/* ../public/tier0/bitstring.h:109 */
	void Validate(CVariableBitStringBase* , CValidator& , const char* );
protected:
	/* ../public/tier0/bitstring.h:112 */
	void CVariableBitStringBase(CVariableBitStringBase* );
	/* ../public/tier0/bitstring.h:113 */
	void CVariableBitStringBase(CVariableBitStringBase* , int);
	/* ../public/tier0/bitstring.h:114 */
	void CVariableBitStringBase(CVariableBitStringBase* , const CVariableBitStringBase& );
	/* ../public/tier0/bitstring.h:115 */
	CVariableBitStringBase& operator=(CVariableBitStringBase* , const CVariableBitStringBase& );
	/* ../public/tier0/bitstring.h:116 */
	void ~CVariableBitStringBase(CVariableBitStringBase* );
	/* ../public/tier0/bitstring.h:118 */
	void ValidateOperand(const CVariableBitStringBase* , const CVariableBitStringBase& );
	/* ../public/tier0/bitstring.h:120 */
	unsigned int BitStringGetEndMask(const CVariableBitStringBase* );
private:
	int m_numBits; /* 0 4 */
	int m_numInts; /* 4 4 */
	int m_iBitStringStorage; /* 8 4 */
	int * m_pInt; /* 16 8 */
	/* ../public/tier0/bitstring.h:129 */
	void AllocInts(CVariableBitStringBase* , int);
	/* ../public/tier0/bitstring.h:130 */
	void ReallocInts(CVariableBitStringBase* , int);
	/* ../public/tier0/bitstring.h:131 */
	void FreeInts(CVariableBitStringBase* );
	bool IsFixedSize(const class CVariableBitStringBase  *); /* linkage=_ZNK22CVariableBitStringBase11IsFixedSizeEv */
	int Size(const class CVariableBitStringBase  *); /* linkage=_ZNK22CVariableBitStringBase4SizeEv */
	void Resize(class CVariableBitStringBase *, int); /* linkage=_ZN22CVariableBitStringBase6ResizeEi */
	int GetNumInts(const class CVariableBitStringBase  *); /* linkage=_ZNK22CVariableBitStringBase10GetNumIntsEv */
	int * GetInts(class CVariableBitStringBase *); /* linkage=_ZN22CVariableBitStringBase7GetIntsEv */
	const int  * GetInts(const class CVariableBitStringBase  *); /* linkage=_ZNK22CVariableBitStringBase7GetIntsEv */
	void Validate(class CVariableBitStringBase *, class CValidator &, const char  *); /* linkage=_ZN22CVariableBitStringBase8ValidateER10CValidatorPKc */
	void CVariableBitStringBase(class CVariableBitStringBase *); /* linkage=_ZN22CVariableBitStringBaseC4Ev */
	void CVariableBitStringBase(class CVariableBitStringBase *, int); /* linkage=_ZN22CVariableBitStringBaseC4Ei */
	void CVariableBitStringBase(class CVariableBitStringBase *, const class CVariableBitStringBase  &); /* linkage=_ZN22CVariableBitStringBaseC4ERKS_ */
	class CVariableBitStringBase & operator=(class CVariableBitStringBase *, const class CVariableBitStringBase  &); /* linkage=_ZN22CVariableBitStringBaseaSERKS_ */
	void ~CVariableBitStringBase(class CVariableBitStringBase *); /* linkage=_ZN22CVariableBitStringBaseD4Ev */
	void ValidateOperand(const class CVariableBitStringBase  *, const class CVariableBitStringBase  &); /* linkage=_ZNK22CVariableBitStringBase15ValidateOperandERKS_ */
	unsigned int BitStringGetEndMask(const class CVariableBitStringBase  *); /* linkage=_ZNK22CVariableBitStringBase19BitStringGetEndMaskEv */
	/* <3ae55> tier0/bitstring.cpp:163 */
	void AllocInts(class CVariableBitStringBase *, int); /* linkage=_ZN22CVariableBitStringBase9AllocIntsEi */
	void ReallocInts(class CVariableBitStringBase *, int); /* linkage=_ZN22CVariableBitStringBase11ReallocIntsEi */
	void FreeInts(class CVariableBitStringBase *); /* linkage=_ZN22CVariableBitStringBase8FreeIntsEv */
};

// <00DA2AE3> ../public/tier0/bitstring.h:102
inline void CVariableBitStringBase::Size()
{
} /* size: 0 */

// <00DA2ACA> ../public/tier0/bitstring.h:105
inline void CVariableBitStringBase::GetNumInts()
{
} /* size: 0 */

// <00DA2AB1> ../public/tier0/bitstring.h:106
inline void CVariableBitStringBase::GetInts()
{
} /* size: 0 */

// <0003AA19> ../public/tier0/bitstring.h:120
inline void CVariableBitStringBase::BitStringGetEndMask()
{
} /* size: 0 */

// <00B15B36> ../public/tier0/bitstring.h:212
void CBitString::~CBitString()
{
} /* size: 0 */

// <00B15B1A> ../public/tier0/bitstring.h:212
inline void CBitString::~CBitString()
{
} /* size: 0 */

// <00046F35> ../public/tier0/bitstring.h:212
void CBitString::CBitString(CBitString &)
{
} /* size: 0 */

// <00046F14> ../public/tier0/bitstring.h:212
inline void CBitString::CBitString(CBitString &)
{
} /* size: 0 */

// <00046EC6> ../public/tier0/bitstring.h:212
inline void CBitString::operator=(CBitString &)
{
} /* size: 0 */

// <00988046> ../public/tier0/bitstring.h:212
// member functions: 8
// member variable: 1
// class size: 24
class CBitString : public CBitStringT<CVariableBitStringBase> {
public:
	/* class CBitStringT<CVariableBitStringBase> <ancestor>; */ /* 0 24 */
	/* ../public/tier0/bitstring.h:215 */
	void CBitString(CBitString* );
	/* ../public/tier0/bitstring.h:219 */
	void CBitString(CBitString* , int);
	void ~CBitString(CBitString* );
	void CBitString(class CBitString *); /* linkage=_ZN10CBitStringC4Ev */
	void CBitString(class CBitString *, int); /* linkage=_ZN10CBitStringC4Ei */
	class CBitString & operator=(class CBitString *, class CBitString &); /* linkage=_ZN10CBitStringaSEOS_ */
	void CBitString(class CBitString *, class CBitString &); /* linkage=_ZN10CBitStringC4EOS_ */
	void ~CBitString(class CBitString *); /* linkage=_ZN10CBitStringD4Ev */
};

// <0002E99B> ../public/tier0/bitstring.h:212
// member functions: 10
// member variable: 1
// class size: 24
class CBitString : public CBitStringT<CVariableBitStringBase> {
public:
	/* class CBitStringT<CVariableBitStringBase> <ancestor>; */ /* 0 24 */
	/* ../public/tier0/bitstring.h:215 */
	void CBitString(CBitString* );
	/* ../public/tier0/bitstring.h:219 */
	void CBitString(CBitString* , int);
	CBitString& operator=(CBitString* , CBitString& );
	void CBitString(CBitString* , CBitString& );
	void ~CBitString(CBitString* );
	void CBitString(class CBitString *); /* linkage=_ZN10CBitStringC4Ev */
	void CBitString(class CBitString *, int); /* linkage=_ZN10CBitStringC4Ei */
	class CBitString & operator=(class CBitString *, class CBitString &); /* linkage=_ZN10CBitStringaSEOS_ */
	void CBitString(class CBitString *, class CBitString &); /* linkage=_ZN10CBitStringC4EOS_ */
	void ~CBitString(class CBitString *); /* linkage=_ZN10CBitStringD4Ev */
};

// <00DA2A81> ../public/tier0/bitstring.h:215
void CBitString::CBitString()
{
} /* size: 0 */

// <00DA2A68> ../public/tier0/bitstring.h:215
inline void CBitString::CBitString()
{
} /* size: 0 */

// <00DA2A51> ../public/tier0/bitstring.h:243
void CVariableBitStringBase::CVariableBitStringBase()
{
} /* size: 0 */

// <00DA2A35> ../public/tier0/bitstring.h:243
inline void CVariableBitStringBase::CVariableBitStringBase()
{
} /* size: 0 */

// <00070D8E> ../public/tier0/bitstring.h:263
void CVariableBitStringBase::CVariableBitStringBase(const CVariableBitStringBase& from)
{
} /* size: 0 */

// <00070D65> ../public/tier0/bitstring.h:263
inline void CVariableBitStringBase::CVariableBitStringBase(const CVariableBitStringBase& from)
{
} /* size: 0 */

// <00070D3C> ../public/tier0/bitstring.h:279
inline void CVariableBitStringBase::operator=(const CVariableBitStringBase& from)
{
} /* size: 0 */

// <00B4A9A6> ../public/tier0/bitstring.h:294
void CVariableBitStringBase::~CVariableBitStringBase()
{
} /* size: 0 */

// <00B4A98A> ../public/tier0/bitstring.h:294
inline void CVariableBitStringBase::~CVariableBitStringBase()
{
} /* size: 0 */

// <00D9D919> ../public/tier0/bitstring.h:302
void CBitStringT<CVariableBitStringBase>::CBitStringT()
{
} /* size: 0 */

// <00D9D8FD> ../public/tier0/bitstring.h:302
inline void CBitStringT<CVariableBitStringBase>::CBitStringT()
{
} /* size: 0 */

// <00D9A475> ../public/tier0/bitstring.h:330
// variables: 3
inline void CBitStringT<CVariableBitStringBase>::GetBit(int bitNum)
{
	const char   __FUNCTION__; // 16831
	const int* pInt; // 333
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 332
	}
} /* size: 0, variables: 2 */

// <01BA54F4> ../public/tier0/bitstring.h:330
// variables: 3
inline void CBitStringT<CVariableBitStringBase>::GetBit(int bitNum)
{
	const char   __FUNCTION__; // 18566
	const int* pInt; // 333
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 332
	}
} /* size: 0, variables: 2 */

// <00049203> ../public/tier0/bitstring.h:330
// variables: 3
inline void CBitStringT<CVariableBitStringBase>::GetBit(int bitNum)
{
	const char   __FUNCTION__; // 40595
	const int* pInt; // 333
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 332
	}
} /* size: 0, variables: 2 */

// <00D999C1> ../public/tier0/bitstring.h:340
// variables: 3
inline void CBitStringT<CVariableBitStringBase>::SetBit(int bitNum)
{
	const char   __FUNCTION__; // 16831
	int* pInt; // 343
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 342
	}
} /* size: 0, variables: 2 */

// <01BA35DE> ../public/tier0/bitstring.h:340
// variables: 3
inline void CBitStringT<CVariableBitStringBase>::SetBit(int bitNum)
{
	const char   __FUNCTION__; // 18566
	int* pInt; // 343
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 342
	}
} /* size: 0, variables: 2 */

// <00044809> ../public/tier0/bitstring.h:340
// variables: 3
inline void CBitStringT<CVariableBitStringBase>::SetBit(int bitNum)
{
	const char   __FUNCTION__; // 40595
	int* pInt; // 343
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 342
	}
} /* size: 0, variables: 2 */

// <00D9D43A> ../public/tier0/bitstring.h:514
inline void CBitStringT<CVariableBitStringBase>::ClearAllBits()
{
} /* size: 0 */

