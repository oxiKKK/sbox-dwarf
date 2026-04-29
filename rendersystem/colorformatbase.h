
//
// rendersystem/colorformatbase.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 2
//	class: 1
//

// <0000C7B3> rendersystem/colorformatbase.h:22
// member functions: 17
// member variables: 5
// static member variable: 1
// vtable entry: 1
// class size: 7,048
class CColorFormatBase {
	void CColorFormatBase(CColorFormatBase* , CColorFormatBase& );
	void CColorFormatBase(CColorFormatBase* , const CColorFormatBase& );
	int ()(void) * * _vptr.CColorFormatBase; /* 0 8 */
	/* rendersystem/colorformatbase.cpp:17 */
	void CColorFormatBase(CColorFormatBase* );
	/* rendersystem/colorformatbase.h:68 */
	ImageFormat FindNearestSupportedBackBufferFormat(CColorFormatBase* , ImageFormat, bool);
	/* rendersystem/colorformatbase.h:54 */
	ImageFormat FindNearestSupportedFormat(CColorFormatBase* , ImageFormat, bool, bool, bool, int);
	/* rendersystem/colorformatbase.cpp:40 */
	ImageFormat FindNearestSupportedDepthFormat(CColorFormatBase* , ImageFormat, ImageFormat, ImageFormat);
protected:
	/* rendersystem/colorformatbase.h:38 */
	virtual bool IsDepthFormatCompatible(CColorFormatBase* , ImageFormat, ImageFormat, ImageFormat);
	/* rendersystem/colorformatbase.cpp:99 */
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

// <0000D4C2> rendersystem/colorformatbase.h:38
void CColorFormatBase::IsDepthFormatCompatible(ImageFormat displayFormat, ImageFormat renderTargetFormat, ImageFormat depthFormat)
{
} /* size: 10 */

// <0000D346> rendersystem/colorformatbase.h:38
inline void CColorFormatBase::IsDepthFormatCompatible(ImageFormat displayFormat, ImageFormat renderTargetFormat, ImageFormat depthFormat)
{
} /* size: 0 */

