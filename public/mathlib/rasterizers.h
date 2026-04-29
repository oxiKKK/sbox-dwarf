
//
// public/mathlib/rasterizers.h
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 12
//	classes: 2
//

// <046B421C> ../public/mathlib/rasterizers.h:13
// member functions: 14
// member variables: 2
// class size: 8
class CRasterizer2D {
private:
	int m_nX; /* 0 4 */
	int m_nY; /* 4 4 */
	/* ../public/mathlib/rasterizers.h:19 */
	void MoveTo(CRasterizer2D* , int, int);
	/* ../public/mathlib/rasterizers.h:21 */
	void MoveUp(CRasterizer2D* );
	/* ../public/mathlib/rasterizers.h:22 */
	void MoveDown(CRasterizer2D* );
	/* ../public/mathlib/rasterizers.h:23 */
	void MoveLeft(CRasterizer2D* );
	/* ../public/mathlib/rasterizers.h:24 */
	void MoveRight(CRasterizer2D* );
	/* ../public/mathlib/rasterizers.h:26 */
	int X(const CRasterizer2D* );
	/* ../public/mathlib/rasterizers.h:27 */
	int Y(const CRasterizer2D* );
	void MoveTo(class CRasterizer2D *, int, int); /* linkage=_ZN13CRasterizer2D6MoveToEii */
	void MoveUp(class CRasterizer2D *); /* linkage=_ZN13CRasterizer2D6MoveUpEv */
	void MoveDown(class CRasterizer2D *); /* linkage=_ZN13CRasterizer2D8MoveDownEv */
	void MoveLeft(class CRasterizer2D *); /* linkage=_ZN13CRasterizer2D8MoveLeftEv */
	void MoveRight(class CRasterizer2D *); /* linkage=_ZN13CRasterizer2D9MoveRightEv */
	int X(const class CRasterizer2D  *); /* linkage=_ZNK13CRasterizer2D1XEv */
	int Y(const class CRasterizer2D  *); /* linkage=_ZNK13CRasterizer2D1YEv */
};

// <0470219C> ../public/mathlib/rasterizers.h:19
inline void CRasterizer2D::MoveTo(int nX, int nY)
{
} /* size: 0 */

// <04702183> ../public/mathlib/rasterizers.h:21
inline void CRasterizer2D::MoveUp()
{
} /* size: 0 */

// <0470216A> ../public/mathlib/rasterizers.h:22
inline void CRasterizer2D::MoveDown()
{
} /* size: 0 */

// <04702151> ../public/mathlib/rasterizers.h:24
inline void CRasterizer2D::MoveRight()
{
} /* size: 0 */

// <04702138> ../public/mathlib/rasterizers.h:26
inline void CRasterizer2D::X()
{
} /* size: 0 */

// <0470211F> ../public/mathlib/rasterizers.h:27
inline void CRasterizer2D::Y()
{
} /* size: 0 */

// <046B4347> ../public/mathlib/rasterizers.h:35
// member functions: 10
// member variables: 7
// class size: 28
class CLineRasterizer2DTemplate<CRasterizer2D> : public CRasterizer2D {
public:
	/* class CRasterizer2D <ancestor>; */ /* 0 8 */
private:
	int m_nX1; /* 8 4 */
	int m_nDeltaX; /* 12 4 */
	int m_nDeltaY; /* 16 4 */
	int m_nError; /* 20 4 */
	bool m_bStepUp; /* 24 1 */
	bool m_bSwapAxes; /* 25 1 */
	/* ../public/mathlib/rasterizers.h:47 */
	void CLineRasterizer2DTemplate(CLineRasterizer2DTemplate<CRasterizer2D>* , int, int, int, int);
	/* ../public/mathlib/rasterizers.h:69 */
	int X(const CLineRasterizer2DTemplate<CRasterizer2D>* );
	/* ../public/mathlib/rasterizers.h:71 */
	int Y(const CLineRasterizer2DTemplate<CRasterizer2D>* );
	/* ../public/mathlib/rasterizers.h:74 */
	void operator++(CLineRasterizer2DTemplate<CRasterizer2D>* );
	/* ../public/mathlib/rasterizers.h:93 */
	bool operator bool(const CLineRasterizer2DTemplate<CRasterizer2D>* );
	void CLineRasterizer2DTemplate(class CLineRasterizer2DTemplate<CRasterizer2D> *, int, int, int, int); /* linkage=_ZN25CLineRasterizer2DTemplateI13CRasterizer2DEC4Eiiii */
	int X(const class CLineRasterizer2DTemplate<CRasterizer2D>  *); /* linkage=_ZNK25CLineRasterizer2DTemplateI13CRasterizer2DE1XEv */
	int Y(const class CLineRasterizer2DTemplate<CRasterizer2D>  *); /* linkage=_ZNK25CLineRasterizer2DTemplateI13CRasterizer2DE1YEv */
	void operator++(class CLineRasterizer2DTemplate<CRasterizer2D> *); /* linkage=_ZN25CLineRasterizer2DTemplateI13CRasterizer2DEppEv */
	bool operator bool(const class CLineRasterizer2DTemplate<CRasterizer2D>  *); /* linkage=_ZNK25CLineRasterizer2DTemplateI13CRasterizer2DEcvbEv */
};

// <046CABC7> ../public/mathlib/rasterizers.h:47
void CLineRasterizer2DTemplate<CRasterizer2D>::CLineRasterizer2DTemplate(int nX0, int nY0, int nX1, int nY1)
{
} /* size: 0 */

// <046CAB7E> ../public/mathlib/rasterizers.h:47
inline void CLineRasterizer2DTemplate<CRasterizer2D>::CLineRasterizer2DTemplate(int nX0, int nY0, int nX1, int nY1)
{
} /* size: 0 */

// <046CAB33> ../public/mathlib/rasterizers.h:69
inline void CLineRasterizer2DTemplate<CRasterizer2D>::X()
{
} /* size: 0 */

// <046CAB1A> ../public/mathlib/rasterizers.h:71
inline void CLineRasterizer2DTemplate<CRasterizer2D>::Y()
{
} /* size: 0 */

// <00EC32BF> ../public/mathlib/rasterizers.h:74
inline void CLineRasterizer2DTemplate<CRasterizer2D>::operator++()
{
} /* size: 0 */

// <046CAB65> ../public/mathlib/rasterizers.h:93
inline void operator CLineRasterizer2DTemplate<CRasterizer2D>::bool()
{
} /* size: 0 */

