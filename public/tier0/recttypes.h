
//
// public/tier0/recttypes.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//
//	functions: 9
//	structs: 2
//

// <00041FED> ../public/tier0/recttypes.h:14
// member functions: 14
// member variables: 4
// struct size: 16
struct Rect_t {
	int x; /* 0 4 */
	int y; /* 4 4 */
	int width; /* 8 4 */
	int height; /* 12 4 */
	/* ../public/tier0/recttypes.h:19 */
	void Rect_t(Rect_t* , int, int, int, int);
	/* ../public/tier0/recttypes.h:27 */
	void Rect_t(Rect_t* );
	/* ../public/tier0/recttypes.h:29 */
	void Clear(Rect_t* );
	/* ../public/tier0/recttypes.h:37 */
	int Size(const Rect_t* );
	/* ../public/tier0/recttypes.h:42 */
	bool IsEmpty(const Rect_t* );
	/* ../public/tier0/recttypes.h:44 */
	int MaximumX(const Rect_t* );
	/* ../public/tier0/recttypes.h:45 */
	int MaximumY(const Rect_t* );
	/* ../public/tier0/recttypes.h:47 */
	bool Intersects(const Rect_t* , const Rect_t& );
	/* ../public/tier0/recttypes.h:55 */
	bool ContainsPoint(Rect_t* , int, int);
	/* ../public/tier0/recttypes.h:64 */
	bool operator==(const Rect_t* , const Rect_t& );
	/* ../public/tier0/recttypes.h:70 */
	bool operator!=(const Rect_t* , const Rect_t& );
	/* ../public/tier0/recttypes.h:75 */
	void SetFromMaxMins(Rect_t* , int, int, int, int);
	/* ../public/tier0/recttypes.h:83 */
	Rect_t& operator&=(Rect_t* , const Rect_t& );
	/* ../public/tier0/recttypes.h:89 */
	void Union(Rect_t* , const Rect_t& );
};

// <03A5A8E1> ../public/tier0/recttypes.h:19
void Rect_t::Rect_t(int nX, int nY, int nWidth, int nHeight)
{
} /* size: 0 */

// <03A5A89A> ../public/tier0/recttypes.h:19
inline void Rect_t::Rect_t(int nX, int nY, int nWidth, int nHeight)
{
} /* size: 0 */

// <00CA5976> ../public/tier0/recttypes.h:29
inline void Rect_t::Clear()
{
} /* size: 0 */

// <0135609A> ../public/tier0/recttypes.h:42
inline void Rect_t::IsEmpty()
{
} /* size: 0 */

// <0009740D> ../public/tier0/recttypes.h:103
// member functions: 8
// member variables: 6
// struct size: 24
struct Rect3D_t {
	int x; /* 0 4 */
	int y; /* 4 4 */
	int z; /* 8 4 */
	int width; /* 12 4 */
	int height; /* 16 4 */
	int depth; /* 20 4 */
	/* ../public/tier0/recttypes.h:108 */
	void Rect3D_t(Rect3D_t* , int, int, int, int, int, int);
	/* ../public/tier0/recttypes.h:113 */
	void Rect3D_t(Rect3D_t* );
	/* ../public/tier0/recttypes.h:115 */
	void Init(Rect3D_t* , int, int, int, int, int, int);
	/* ../public/tier0/recttypes.h:125 */
	void Clear(Rect3D_t* );
	/* ../public/tier0/recttypes.h:135 */
	int Size(const Rect3D_t* );
	/* ../public/tier0/recttypes.h:140 */
	bool Intersects(const Rect3D_t* , const Rect3D_t& );
	/* ../public/tier0/recttypes.h:149 */
	bool operator==(const Rect3D_t* , const Rect3D_t& );
	/* ../public/tier0/recttypes.h:156 */
	bool operator!=(const Rect3D_t* , const Rect3D_t& );
};

// <001AC89E> ../public/tier0/recttypes.h:108
void Rect3D_t::Rect3D_t(int nX, int nY, int nZ, int nWidth, int nHeight, int nDepth)
{
} /* size: 0 */

// <001AC840> ../public/tier0/recttypes.h:108
inline void Rect3D_t::Rect3D_t(int nX, int nY, int nZ, int nWidth, int nHeight, int nDepth)
{
} /* size: 0 */

// <001AC7E2> ../public/tier0/recttypes.h:115
inline void Rect3D_t::Init(int nX, int nY, int nZ, int nWidth, int nHeight, int nDepth)
{
} /* size: 0 */

// <001AC7C9> ../public/tier0/recttypes.h:135
inline void Rect3D_t::Size()
{
} /* size: 0 */

// <00535A36> ../public/tier0/recttypes.h:140
inline void Rect3D_t::Intersects(const Rect3D_t& other)
{
} /* size: 0 */

