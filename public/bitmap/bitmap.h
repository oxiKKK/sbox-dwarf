
//
// public/bitmap/bitmap.h
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 15
//	struct: 1
//

// <0086341B> ../public/bitmap/bitmap.h:29
// member functions: 26
// member variables: 7
// struct size: 32
struct Bitmap_t {
	/* ../public/bitmap/bitmap.h:31 */
	void Bitmap_t(Bitmap_t* );
	/* ../public/bitmap/bitmap.h:32 */
	void ~Bitmap_t(Bitmap_t* );
	/* ../public/bitmap/bitmap.h:37 */
	int Width(const Bitmap_t* );
	/* ../public/bitmap/bitmap.h:38 */
	int Height(const Bitmap_t* );
	/* ../public/bitmap/bitmap.h:39 */
	ImageFormat Format(const Bitmap_t* );
	/* ../public/bitmap/bitmap.h:40 */
	unsigned char* GetBits(const Bitmap_t* );
	/* ../public/bitmap/bitmap.h:41 */
	int Stride(const Bitmap_t* );
	/* ../public/bitmap/bitmap.h:42 */
	bool GetOwnsBuffer(const Bitmap_t* );
	/* ../public/bitmap/bitmap.h:45 */
	void Init(Bitmap_t* , int, int, ImageFormat, int);
	/* ../public/bitmap/bitmap.h:49 */
	void SetBuffer(Bitmap_t* , int, int, ImageFormat, unsigned char* , bool, int);
	/* ../public/bitmap/bitmap.h:53 */
	void SetOwnsBuffer(Bitmap_t* , bool);
	/* ../public/bitmap/bitmap.h:60 */
	void Clear(Bitmap_t* );
	/* ../public/bitmap/bitmap.h:63 */
	bool IsValid(const Bitmap_t* );
	/* ../public/bitmap/bitmap.h:66 */
	unsigned char* GetPixel(Bitmap_t* , int, int);
	/* ../public/bitmap/bitmap.h:67 */
	const unsigned char* GetPixel(const Bitmap_t* , int, int);
	/* ../public/bitmap/bitmap.h:70 */
	Color GetColor(const Bitmap_t* , int, int);
	/* ../public/bitmap/bitmap.h:73 */
	void SetColor(Bitmap_t* , int, int, Color);
	/* ../public/bitmap/bitmap.h:79 */
	void MakeLogicalCopyOf(Bitmap_t* , Bitmap_t& , bool);
	/* ../public/bitmap/bitmap.h:84 */
	void Crop(Bitmap_t* , int, int, int, int, const Bitmap_t* );
	/* ../public/bitmap/bitmap.h:87 */
	void SetPixelData(Bitmap_t* , const Bitmap_t& , int, int, int, int, int, int);
	/* ../public/bitmap/bitmap.h:91 */
	void SetPixelData(Bitmap_t* , const Bitmap_t& , int, int);
	/* ../public/bitmap/bitmap.h:93 */
	ImageFormat GetImageFormat(const Bitmap_t* );
	/* ../public/bitmap/bitmap.h:94 */
	int NumCols(const Bitmap_t* );
	/* ../public/bitmap/bitmap.h:95 */
	int NumRows(const Bitmap_t* );
	/* ../public/bitmap/bitmap.h:96 */
	int NumSlices(const Bitmap_t* );
private:
	/* ../public/bitmap/bitmap.h:99 */
	void Reset(Bitmap_t* );
	int m_nWidth; /* 0 4 */
	int m_nHeight; /* 4 4 */
	int m_nPixelSize; /* 8 4 */
	int m_nStride; /* 12 4 */
	bool m_bOwnsBuffer; /* 16 1 */
	ImageFormat m_ImageFormat; /* 20 4 */
	unsigned char * m_pBits; /* 24 8 */
};

// <04702B4D> ../public/bitmap/bitmap.h:31
void Bitmap_t::Bitmap_t()
{
} /* size: 0 */

// <04702B34> ../public/bitmap/bitmap.h:31
inline void Bitmap_t::Bitmap_t()
{
} /* size: 0 */

// <04702B1D> ../public/bitmap/bitmap.h:32
void Bitmap_t::~Bitmap_t()
{
} /* size: 0 */

// <04702B04> ../public/bitmap/bitmap.h:32
inline void Bitmap_t::~Bitmap_t()
{
} /* size: 0 */

// <0473B91F> ../public/bitmap/bitmap.h:37
inline void Bitmap_t::Width()
{
} /* size: 0 */

// <0473B906> ../public/bitmap/bitmap.h:38
inline void Bitmap_t::Height()
{
} /* size: 0 */

// <04702AB9> ../public/bitmap/bitmap.h:39
inline void Bitmap_t::Format()
{
} /* size: 0 */

// <0473B8ED> ../public/bitmap/bitmap.h:40
inline void Bitmap_t::GetBits()
{
} /* size: 0 */

// <04663AB3> ../public/bitmap/bitmap.h:41
inline void Bitmap_t::Stride()
{
} /* size: 0 */

// <00342E0C> ../public/bitmap/bitmap.h:93
inline void Bitmap_t::GetImageFormat()
{
} /* size: 0 */

// <04702A87> ../public/bitmap/bitmap.h:94
inline void Bitmap_t::NumCols()
{
} /* size: 0 */

// <04702A6E> ../public/bitmap/bitmap.h:95
inline void Bitmap_t::NumRows()
{
} /* size: 0 */

// <04702A52> ../public/bitmap/bitmap.h:122
inline void Bitmap_t::Reset()
{
} /* size: 0 */

// <04663A69> ../public/bitmap/bitmap.h:133
inline void Bitmap_t::GetPixel(int x, int y)
{
} /* size: 0 */

// <002F5C34> ../public/bitmap/bitmap.h:166
BitmapFileType_t LoadBitmapFile(CUtlBuffer &, Bitmap_t *)
{
} /* size: 0 */

