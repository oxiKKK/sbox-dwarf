
//
// ./colorformatbase.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 5
//	classes: 2
//

// <00A54058> ./colorformatbase.h:22
void CColorFormatBase::~CColorFormatBase()
{
} /* size: 0 */

// <00A5403B> ./colorformatbase.h:22
inline void CColorFormatBase::~CColorFormatBase()
{
} /* size: 0 */

// <0045A344> ./colorformatbase.h:22
// member functions: 16
// member variables: 5
// static member variable: 1
// vtable entry: 1
// class size: 7,048
class CColorFormatBase {
	void ~CColorFormatBase(CColorFormatBase* );
	int ()(void) * * _vptr.CColorFormatBase; /* 0 8 */
	/* ./colorformatbase.h:25 */
	void CColorFormatBase(CColorFormatBase* );
	/* ./colorformatbase.h:68 */
	ImageFormat FindNearestSupportedBackBufferFormat(CColorFormatBase* , ImageFormat, bool);
	/* ./colorformatbase.h:54 */
	ImageFormat FindNearestSupportedFormat(CColorFormatBase* , ImageFormat, bool, bool, bool, int);
	/* ./colorformatbase.h:34 */
	ImageFormat FindNearestSupportedDepthFormat(CColorFormatBase* , ImageFormat, ImageFormat, ImageFormat);
protected:
	/* ./colorformatbase.h:38 */
	virtual bool IsDepthFormatCompatible(CColorFormatBase* , ImageFormat, ImageFormat, ImageFormat);
	/* ./colorformatbase.h:39 */
	void ConvertActualImageFormatIndicesToPointers(CColorFormatBase* );
	ImageFormat * m_pActualImageFormat[96][2][2][2]; /* 8 6144 */
	ImageFormat m_pActualBackBufferFormat[96][2]; /* 6152 768 */
	bool m_pIsDepthFormatSupported[96]; /* 6920 96 */
	CUtlVector<ImageFormat, CUtlMemory<ImageFormat, int> > m_ActualImageFormatMemory; /* 7016 32 */
	static enum ImageFormat s_ImageFormatUnknown; /* 0 0 */
	void CColorFormatBase(class CColorFormatBase *, class CColorFormatBase &); /* linkage=_ZN16CColorFormatBaseC4EOS_ */
	void CColorFormatBase(class CColorFormatBase *, const class CColorFormatBase  &); /* linkage=_ZN16CColorFormatBaseC4ERKS_ */
	void CColorFormatBase(class CColorFormatBase *); /* linkage=_ZN16CColorFormatBaseC4Ev */
	enum ImageFormat FindNearestSupportedBackBufferFormat(class CColorFormatBase *, enum ImageFormat, bool); /* linkage=_ZN16CColorFormatBase36FindNearestSupportedBackBufferFormatE11ImageFormatb */
	enum ImageFormat FindNearestSupportedFormat(class CColorFormatBase *, enum ImageFormat, bool, bool, bool, int); /* linkage=_ZN16CColorFormatBase26FindNearestSupportedFormatE11ImageFormatbbbi */
	enum ImageFormat FindNearestSupportedDepthFormat(class CColorFormatBase *, enum ImageFormat, enum ImageFormat, enum ImageFormat); /* linkage=_ZN16CColorFormatBase31FindNearestSupportedDepthFormatE11ImageFormatS0_S0_ */
	/* <d4c2> rendersystem/colorformatbase.h:38 */
	virtual bool IsDepthFormatCompatible(class CColorFormatBase *, enum ImageFormat, enum ImageFormat, enum ImageFormat); /* linkage=_ZN16CColorFormatBase23IsDepthFormatCompatibleE11ImageFormatS0_S0_ */
	void ConvertActualImageFormatIndicesToPointers(class CColorFormatBase *); /* linkage=_ZN16CColorFormatBase41ConvertActualImageFormatIndicesToPointersEv */
	void ~CColorFormatBase(class CColorFormatBase *); /* linkage=_ZN16CColorFormatBaseD4Ev */
};

// <009A2DDC> ./colorformatbase.h:22
// member functions: 18
// member variables: 5
// static member variable: 1
// vtable entry: 1
// class size: 7,048
class CColorFormatBase {
	void CColorFormatBase(CColorFormatBase* , CColorFormatBase& );
	void CColorFormatBase(CColorFormatBase* , const CColorFormatBase& );
	void ~CColorFormatBase(CColorFormatBase* );
	int ()(void) * * _vptr.CColorFormatBase; /* 0 8 */
	/* ./colorformatbase.h:25 */
	void CColorFormatBase(CColorFormatBase* );
	/* ./colorformatbase.h:68 */
	ImageFormat FindNearestSupportedBackBufferFormat(CColorFormatBase* , ImageFormat, bool);
	/* ./colorformatbase.h:54 */
	ImageFormat FindNearestSupportedFormat(CColorFormatBase* , ImageFormat, bool, bool, bool, int);
	/* ./colorformatbase.h:34 */
	ImageFormat FindNearestSupportedDepthFormat(CColorFormatBase* , ImageFormat, ImageFormat, ImageFormat);
protected:
	/* ./colorformatbase.h:38 */
	virtual bool IsDepthFormatCompatible(CColorFormatBase* , ImageFormat, ImageFormat, ImageFormat);
	/* ./colorformatbase.h:39 */
	void ConvertActualImageFormatIndicesToPointers(CColorFormatBase* );
	ImageFormat * m_pActualImageFormat[96][2][2][2]; /* 8 6144 */
	ImageFormat m_pActualBackBufferFormat[96][2]; /* 6152 768 */
	bool m_pIsDepthFormatSupported[96]; /* 6920 96 */
	CUtlVector<ImageFormat, CUtlMemory<ImageFormat, int> > m_ActualImageFormatMemory; /* 7016 32 */
	static enum ImageFormat s_ImageFormatUnknown; /* 0 0 */
	void CColorFormatBase(class CColorFormatBase *, class CColorFormatBase &); /* linkage=_ZN16CColorFormatBaseC4EOS_ */
	void CColorFormatBase(class CColorFormatBase *, const class CColorFormatBase  &); /* linkage=_ZN16CColorFormatBaseC4ERKS_ */
	void CColorFormatBase(class CColorFormatBase *); /* linkage=_ZN16CColorFormatBaseC4Ev */
	enum ImageFormat FindNearestSupportedBackBufferFormat(class CColorFormatBase *, enum ImageFormat, bool); /* linkage=_ZN16CColorFormatBase36FindNearestSupportedBackBufferFormatE11ImageFormatb */
	enum ImageFormat FindNearestSupportedFormat(class CColorFormatBase *, enum ImageFormat, bool, bool, bool, int); /* linkage=_ZN16CColorFormatBase26FindNearestSupportedFormatE11ImageFormatbbbi */
	enum ImageFormat FindNearestSupportedDepthFormat(class CColorFormatBase *, enum ImageFormat, enum ImageFormat, enum ImageFormat); /* linkage=_ZN16CColorFormatBase31FindNearestSupportedDepthFormatE11ImageFormatS0_S0_ */
	/* <d4c2> rendersystem/colorformatbase.h:38 */
	virtual bool IsDepthFormatCompatible(class CColorFormatBase *, enum ImageFormat, enum ImageFormat, enum ImageFormat); /* linkage=_ZN16CColorFormatBase23IsDepthFormatCompatibleE11ImageFormatS0_S0_ */
	void ConvertActualImageFormatIndicesToPointers(class CColorFormatBase *); /* linkage=_ZN16CColorFormatBase41ConvertActualImageFormatIndicesToPointersEv */
	void ~CColorFormatBase(class CColorFormatBase *); /* linkage=_ZN16CColorFormatBaseD4Ev */
};

// <009A6ADC> ./colorformatbase.h:25
void CColorFormatBase::CColorFormatBase()
{
} /* size: 0 */

// <00A560B0> ./colorformatbase.h:38
void CColorFormatBase::IsDepthFormatCompatible(ImageFormat displayFormat, ImageFormat renderTargetFormat, ImageFormat depthFormat)
{
} /* size: 10 */

// <00C4ECD5> ./colorformatbase.h:54
inline void CColorFormatBase::FindNearestSupportedFormat(ImageFormat format, bool bIsVertexTexture, bool bIsRenderTarget, bool bFilterableRequired, int nAlternateFormatIter)
{
} /* size: 0 */

