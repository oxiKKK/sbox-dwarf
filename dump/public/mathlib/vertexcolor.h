
//
// public/mathlib/vertexcolor.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//
//	functions: 19
//	struct: 1
//

// <00047008> ../public/mathlib/vertexcolor.h:21
// member functions: 20
// member variable: 1
// struct size: 4
struct VertexColor_t {
	/* ../public/mathlib/vertexcolor.h:78 */
	union {
		uint32 color; /* 0 4 */
		struct {
			uint8 r; /* 0 1 */
			uint8 g; /* 1 1 */
			uint8 b; /* 2 1 */
			uint8 a; /* 3 1 */
		}; /* 0 4 */
	};
	/* ../public/mathlib/vertexcolor.h:27 */
	void VertexColor_t(VertexColor_t* );
	/* ../public/mathlib/vertexcolor.h:28 */
	void VertexColor_t(VertexColor_t* , const VertexColor_t& );
	/* ../public/mathlib/vertexcolor.h:29 */
	void VertexColor_t(VertexColor_t* , uint8, uint8, uint8, uint8);
	/* ../public/mathlib/vertexcolor.h:30 */
	void VertexColor_t(VertexColor_t* , const Color& );
	/* ../public/mathlib/vertexcolor.h:33 */
	void VertexColor_t(VertexColor_t* , const Vector& );
	/* ../public/mathlib/vertexcolor.h:34 */
	void VertexColor_t(VertexColor_t* , const Vector4D& );
	/* ../public/mathlib/vertexcolor.h:35 */
	void VertexColor_t(VertexColor_t* , const Vector& , float);
	/* ../public/mathlib/vertexcolor.h:37 */
	void Init(VertexColor_t* , uint8, uint8, uint8, uint8);
	/* ../public/mathlib/vertexcolor.h:39 */
	void InitFromPackedARGB(VertexColor_t* , uint32);
	/* ../public/mathlib/vertexcolor.h:50 */
	uint32 AsUint32(const VertexColor_t* );
	/* ../public/mathlib/vertexcolor.h:51 */
	uint32* AsUint32Ptr(VertexColor_t* );
	/* ../public/mathlib/vertexcolor.h:52 */
	const uint32* AsUint32Ptr(const VertexColor_t* );
	/* ../public/mathlib/vertexcolor.h:54 */
	uint8& operator[](VertexColor_t* , int);
	/* ../public/mathlib/vertexcolor.h:55 */
	const uint8& operator[](const VertexColor_t* , int);
	/* ../public/mathlib/vertexcolor.h:58 */
	VertexColor_t& operator=(VertexColor_t* , const VertexColor_t& );
	/* ../public/mathlib/vertexcolor.h:59 */
	VertexColor_t& operator=(VertexColor_t* , const Color& );
	/* ../public/mathlib/vertexcolor.h:62 */
	bool operator==(const VertexColor_t* , const VertexColor_t& );
	/* ../public/mathlib/vertexcolor.h:63 */
	bool operator!=(const VertexColor_t* , const VertexColor_t& );
	/* ../public/mathlib/vertexcolor.h:66 */
	VertexColor_t operator*(const VertexColor_t* , float);
	/* ../public/mathlib/vertexcolor.h:69 */
	void ConvertToVector4D(const VertexColor_t* , Vector4D* );
	union {
		uint32 color; /* 0 4 */
		struct {
			uint8 r; /* 0 1 */
			uint8 g; /* 1 1 */
			uint8 b; /* 2 1 */
			uint8 a; /* 3 1 */
		}; /* 0 4 */
	}; /* 0 4 */
};

// <066B5A13> ../public/mathlib/vertexcolor.h:27
void VertexColor_t::VertexColor_t()
{
} /* size: 0 */

// <066B59FA> ../public/mathlib/vertexcolor.h:27
inline void VertexColor_t::VertexColor_t()
{
} /* size: 0 */

// <0658330E> ../public/mathlib/vertexcolor.h:91
void VertexColor_t::VertexColor_t(const VertexColor_t& src)
{
} /* size: 0 */

// <065832E6> ../public/mathlib/vertexcolor.h:91
inline void VertexColor_t::VertexColor_t(const VertexColor_t& src)
{
} /* size: 0 */

// <05F09178> ../public/mathlib/vertexcolor.h:96
void VertexColor_t::VertexColor_t(uint8 ir, uint8 ig, uint8 ib, uint8 ia)
{
} /* size: 0 */

// <05F09130> ../public/mathlib/vertexcolor.h:96
inline void VertexColor_t::VertexColor_t(uint8 ir, uint8 ig, uint8 ib, uint8 ia)
{
} /* size: 0 */

// <0186399A> ../public/mathlib/vertexcolor.h:104
void VertexColor_t::VertexColor_t(const Color& src)
{
} /* size: 0 */

// <01863973> ../public/mathlib/vertexcolor.h:104
inline void VertexColor_t::VertexColor_t(const Color& src)
{
} /* size: 0 */

// <0646B99C> ../public/mathlib/vertexcolor.h:113
inline void VertexColor_t::Init(uint8 ir, uint8 ig, uint8 ib, uint8 ia)
{
} /* size: 0 */

// <0402518C> ../public/mathlib/vertexcolor.h:122
void VertexColor_t::VertexColor_t(const Vector& vecColor)
{
} /* size: 0 */

// <04025164> ../public/mathlib/vertexcolor.h:122
inline void VertexColor_t::VertexColor_t(const Vector& vecColor)
{
} /* size: 0 */

// <018750C0> ../public/mathlib/vertexcolor.h:130
void VertexColor_t::VertexColor_t(const Vector4D& vecColor)
{
} /* size: 0 */

// <01875098> ../public/mathlib/vertexcolor.h:130
inline void VertexColor_t::VertexColor_t(const Vector4D& vecColor)
{
} /* size: 0 */

// <03180594> ../public/mathlib/vertexcolor.h:146
inline void VertexColor_t::operator[](int i)
{
} /* size: 0 */

// <066B59DF> ../public/mathlib/vertexcolor.h:182
inline void VertexColor_t::AsUint32()
{
} /* size: 0 */

// <066B59C4> ../public/mathlib/vertexcolor.h:187
inline void VertexColor_t::AsUint32Ptr()
{
} /* size: 0 */

// <066B599D> ../public/mathlib/vertexcolor.h:201
inline void VertexColor_t::operator=(const VertexColor_t& src)
{
} /* size: 0 */

// <0318050C> ../public/mathlib/vertexcolor.h:207
inline void VertexColor_t::operator=(const Color& src)
{
} /* size: 0 */

// <04D24DEE> ../public/mathlib/vertexcolor.h:233
inline void VertexColor_t::ConvertToVector4D(Vector4D* pOutVector4D)
{
} /* size: 0 */

