
//
// fontmanager/fontbase.h
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 11
//	classes: 2
//	struct: 1
//

// <004AC6C8> fontmanager/fontbase.h:13
// member functions: 23
// member variables: 16
// vtable entries: 2
// class size: 64
class CFontBase {
	int ()(void) * * _vptr.CFontBase; /* 0 8 */
	/* fontmanager/fontbase.h:16 */
	void CFontBase(CFontBase* );
	/* fontmanager/fontbase.h:33 */
	virtual void ~CFontBase(CFontBase* );
	/* fontmanager/fontbase.h:36 */
	virtual void GetCharABCWidths(CFontBase* , uchar32, int& , int& , int& );
	/* fontmanager/fontbase.h:39 */
	virtual void GetKernedCharWidth(CFontBase* , uchar32, uchar32, uchar32, float& , float& , float& );
	/* fontmanager/fontbase.h:42 */
	const char* GetName(CFontBase* );
	/* fontmanager/fontbase.h:45 */
	bool IsValid(CFontBase* );
	/* fontmanager/fontbase.h:48 */
	int GetHeight(CFontBase* );
	/* fontmanager/fontbase.h:51 */
	int GetMaxCharWidth(CFontBase* );
	/* fontmanager/fontbase.h:54 */
	int GetAscent(CFontBase* );
	/* fontmanager/fontbase.h:57 */
	int GetFlags(CFontBase* );
	/* fontmanager/fontbase.h:60 */
	bool GetUnderlined(CFontBase* );
protected:
	CUtlString m_name; /* 8 8 */
	int m_nTall; /* 16 4 */
	int m_nWeight; /* 20 4 */
	int m_nHeight; /* 24 4 */
	int m_nMaxCharWidth; /* 28 4 */
	int m_nAscent; /* 32 4 */
	int m_nFlags; /* 36 4 */
	int m_nScanLines; /* 40 4 */
	int m_nBlur; /* 44 4 */
	int m_nDropShadowOffset; /* 48 4 */
	int m_nOutlineSize; /* 52 4 */
	bool m_bUnderlined; /* 56 1 */
	bool m_bAdditive; /* 57 1 */
	bool m_bRotary; /* 58 1 */
	bool m_bAntiAliased; /* 59 1 */
	void CFontBase(class CFontBase *); /* linkage=_ZN9CFontBaseC4Ev */
	virtual void ~CFontBase(class CFontBase *); /* linkage=_ZN9CFontBaseD4Ev */
	virtual void GetCharABCWidths(class CFontBase *, uchar32, int &, int &, int &); /* linkage=_ZN9CFontBase16GetCharABCWidthsEwRiS0_S0_ */
	virtual void GetKernedCharWidth(class CFontBase *, uchar32, uchar32, uchar32, float &, float &, float &); /* linkage=_ZN9CFontBase18GetKernedCharWidthEwwwRfS0_S0_ */
	const char  * GetName(class CFontBase *); /* linkage=_ZN9CFontBase7GetNameEv */
	bool IsValid(class CFontBase *); /* linkage=_ZN9CFontBase7IsValidEv */
	int GetHeight(class CFontBase *); /* linkage=_ZN9CFontBase9GetHeightEv */
	int GetMaxCharWidth(class CFontBase *); /* linkage=_ZN9CFontBase15GetMaxCharWidthEv */
	int GetAscent(class CFontBase *); /* linkage=_ZN9CFontBase9GetAscentEv */
	int GetFlags(class CFontBase *); /* linkage=_ZN9CFontBase8GetFlagsEv */
	bool GetUnderlined(class CFontBase *); /* linkage=_ZN9CFontBase13GetUnderlinedEv */
	void CFontBase(class CFontBase *, const class CFontBase  &); /* linkage=_ZN9CFontBaseC4ERKS_ */
};

// <004D891B> fontmanager/fontbase.h:13
// member functions: 24
// member variables: 16
// vtable entries: 2
// class size: 64
class CFontBase {
	void CFontBase(CFontBase* , const CFontBase& );
	int ()(void) * * _vptr.CFontBase; /* 0 8 */
	/* fontmanager/fontbase.h:16 */
	void CFontBase(CFontBase* );
	/* fontmanager/fontbase.h:33 */
	virtual void ~CFontBase(CFontBase* );
	/* fontmanager/fontbase.h:36 */
	virtual void GetCharABCWidths(CFontBase* , uchar32, int& , int& , int& );
	/* fontmanager/fontbase.h:39 */
	virtual void GetKernedCharWidth(CFontBase* , uchar32, uchar32, uchar32, float& , float& , float& );
	/* fontmanager/fontbase.h:42 */
	const char* GetName(CFontBase* );
	/* fontmanager/fontbase.h:45 */
	bool IsValid(CFontBase* );
	/* fontmanager/fontbase.h:48 */
	int GetHeight(CFontBase* );
	/* fontmanager/fontbase.h:51 */
	int GetMaxCharWidth(CFontBase* );
	/* fontmanager/fontbase.h:54 */
	int GetAscent(CFontBase* );
	/* fontmanager/fontbase.h:57 */
	int GetFlags(CFontBase* );
	/* fontmanager/fontbase.h:60 */
	bool GetUnderlined(CFontBase* );
protected:
	CUtlString m_name; /* 8 8 */
	int m_nTall; /* 16 4 */
	int m_nWeight; /* 20 4 */
	int m_nHeight; /* 24 4 */
	int m_nMaxCharWidth; /* 28 4 */
	int m_nAscent; /* 32 4 */
	int m_nFlags; /* 36 4 */
	int m_nScanLines; /* 40 4 */
	int m_nBlur; /* 44 4 */
	int m_nDropShadowOffset; /* 48 4 */
	int m_nOutlineSize; /* 52 4 */
	bool m_bUnderlined; /* 56 1 */
	bool m_bAdditive; /* 57 1 */
	bool m_bRotary; /* 58 1 */
	bool m_bAntiAliased; /* 59 1 */
	void CFontBase(class CFontBase *); /* linkage=_ZN9CFontBaseC4Ev */
	virtual void ~CFontBase(class CFontBase *); /* linkage=_ZN9CFontBaseD4Ev */
	virtual void GetCharABCWidths(class CFontBase *, uchar32, int &, int &, int &); /* linkage=_ZN9CFontBase16GetCharABCWidthsEwRiS0_S0_ */
	virtual void GetKernedCharWidth(class CFontBase *, uchar32, uchar32, uchar32, float &, float &, float &); /* linkage=_ZN9CFontBase18GetKernedCharWidthEwwwRfS0_S0_ */
	const char  * GetName(class CFontBase *); /* linkage=_ZN9CFontBase7GetNameEv */
	bool IsValid(class CFontBase *); /* linkage=_ZN9CFontBase7IsValidEv */
	int GetHeight(class CFontBase *); /* linkage=_ZN9CFontBase9GetHeightEv */
	int GetMaxCharWidth(class CFontBase *); /* linkage=_ZN9CFontBase15GetMaxCharWidthEv */
	int GetAscent(class CFontBase *); /* linkage=_ZN9CFontBase9GetAscentEv */
	int GetFlags(class CFontBase *); /* linkage=_ZN9CFontBase8GetFlagsEv */
	bool GetUnderlined(class CFontBase *); /* linkage=_ZN9CFontBase13GetUnderlinedEv */
	void CFontBase(class CFontBase *, const class CFontBase  &); /* linkage=_ZN9CFontBaseC4ERKS_ */
};

// <005B30F0> fontmanager/fontbase.h:16
void CFontBase::CFontBase()
{
} /* size: 0 */

// <005B30D7> fontmanager/fontbase.h:16
inline void CFontBase::CFontBase()
{
} /* size: 0 */

// <005B30C0> fontmanager/fontbase.h:33
void CFontBase::~CFontBase()
{
} /* size: 0 */

// <005B3090> fontmanager/fontbase.h:33
inline void CFontBase::~CFontBase()
{
} /* size: 0 */

// <0053BCB3> fontmanager/fontbase.h:42
inline void CFontBase::GetName()
{
} /* size: 0 */

// <004B3C7E> fontmanager/fontbase.h:45
inline void CFontBase::IsValid()
{
} /* size: 0 */

// <0053BC9A> fontmanager/fontbase.h:48
inline void CFontBase::GetHeight()
{
} /* size: 0 */

// <004B3C4C> fontmanager/fontbase.h:51
inline void CFontBase::GetMaxCharWidth()
{
} /* size: 0 */

// <00509796> fontmanager/fontbase.h:54
inline void CFontBase::GetAscent()
{
} /* size: 0 */

// <004B3C33> fontmanager/fontbase.h:57
inline void CFontBase::GetFlags()
{
} /* size: 0 */

// <0053BC81> fontmanager/fontbase.h:60
inline void CFontBase::GetUnderlined()
{
} /* size: 0 */

// <004AC679> fontmanager/fontbase.h:81
// member variables: 4
// struct size: 24
struct SFontSpan {
	CFontBase * pFont; /* 0 8 */
	int nChars; /* 8 4 */
	int nWidth; /* 12 4 */
	int nHeight; /* 16 4 */
};

