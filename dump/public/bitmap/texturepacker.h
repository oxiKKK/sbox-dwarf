
//
// public/bitmap/texturepacker.h
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 3
//	class: 1
//

// <005238A8> ../public/bitmap/texturepacker.h:22
// member functions: 24
// member variables: 4
// class size: 56
class CTexturePacker {
	/* ../public/bitmap/texturepacker.h:25 */
	struct TreeEntry_t {
		Rect_t rc; /* 0 16 */
		bool bInUse; /* 16 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/bitmap/texturepacker.h:31 */
	void CTexturePacker(CTexturePacker* , int, int, int);
	/* ../public/bitmap/texturepacker.h:32 */
	void ~CTexturePacker(CTexturePacker* );
	/* ../public/bitmap/texturepacker.h:35 */
	int InsertRect(CTexturePacker* , const Rect_t& , int);
	/* ../public/bitmap/texturepacker.h:36 */
	bool RemoveRect(CTexturePacker* , int);
	/* ../public/bitmap/texturepacker.h:37 */
	const TreeEntry_t& GetEntry(CTexturePacker* , int);
	/* ../public/bitmap/texturepacker.h:41 */
	int GetPageWidth(CTexturePacker* );
	/* ../public/bitmap/texturepacker.h:45 */
	int GetPageHeight(CTexturePacker* );
	/* ../public/bitmap/texturepacker.h:49 */
	bool GetInUseBoundingRect(CTexturePacker* , Rect_t* , int);
	/* ../public/bitmap/texturepacker.h:52 */
	void Clear(CTexturePacker* );
private:
	/* ../public/bitmap/texturepacker.h:55 */
	bool IsLeaf(CTexturePacker* , int);
	/* ../public/bitmap/texturepacker.h:56 */
	bool IsLeftChild(CTexturePacker* , int, int);
	/* ../public/bitmap/texturepacker.h:57 */
	bool IsRightChild(CTexturePacker* , int, int);
	int m_PixelGap; /* 0 4 */
	int m_PageWidth; /* 4 4 */
	int m_PageHeight; /* 8 4 */
	CUtlNTree<CTexturePacker::TreeEntry_t, int> m_Tree; /* 16 40 */
	void CTexturePacker(class CTexturePacker *, int, int, int); /* linkage=_ZN14CTexturePackerC4Eiii */
	void ~CTexturePacker(class CTexturePacker *); /* linkage=_ZN14CTexturePackerD4Ev */
	int InsertRect(class CTexturePacker *, const class Rect_t  &, int); /* linkage=_ZN14CTexturePacker10InsertRectERK6Rect_ti */
	bool RemoveRect(class CTexturePacker *, int); /* linkage=_ZN14CTexturePacker10RemoveRectEi */
	const class TreeEntry_t  & GetEntry(class CTexturePacker *, int); /* linkage=_ZN14CTexturePacker8GetEntryEi */
	int GetPageWidth(class CTexturePacker *); /* linkage=_ZN14CTexturePacker12GetPageWidthEv */
	int GetPageHeight(class CTexturePacker *); /* linkage=_ZN14CTexturePacker13GetPageHeightEv */
	bool GetInUseBoundingRect(class CTexturePacker *, class Rect_t *, int); /* linkage=_ZN14CTexturePacker20GetInUseBoundingRectEP6Rect_ti */
	/* <ca5c6a> bitmap/texturepacker.cpp:33 */
	void Clear(class CTexturePacker *); /* linkage=_ZN14CTexturePacker5ClearEv */
	bool IsLeaf(class CTexturePacker *, int); /* linkage=_ZN14CTexturePacker6IsLeafEi */
	/* <ca5ad0> bitmap/texturepacker.cpp:70 */
	bool IsLeftChild(class CTexturePacker *, int, int); /* linkage=_ZN14CTexturePacker11IsLeftChildEii */
	bool IsRightChild(class CTexturePacker *, int, int); /* linkage=_ZN14CTexturePacker12IsRightChildEii */
};

// <0052AB95> ../public/bitmap/texturepacker.h:31
void CTexturePacker::CTexturePacker(int texWidth, int texHeight, int pixelGap)
{
} /* size: 0 */

// <0052ACB0> ../public/bitmap/texturepacker.h:32
void CTexturePacker::~CTexturePacker()
{
} /* size: 0 */

// <0053BCCC> ../public/bitmap/texturepacker.h:37
inline void CTexturePacker::GetEntry(int i)
{
} /* size: 0 */

