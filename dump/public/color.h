
//
// public/color.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 24
//	classes: 2
//	struct: 1
//

// <000026E9> ../public/color.h:15
// member variables: 3
// struct size: 3
struct color24 {
	byte r; /* 0 1 */
	byte g; /* 1 1 */
	byte b; /* 2 1 */
};

// <0000271E> ../public/color.h:25
// member functions: 67
// member variable: 1
// vtable entries: 3
// class size: 4
class Color {
	/* ../public/color.h:30 */
	enum {
		RED = 0,
		GREEN = 1,
		BLUE = 2,
		ALPHA = 3,
	};
	/* ../public/color.h:38 */
	void Color(Color* );
	/* ../public/color.h:44 */
	void Color(Color* , int, int, int);
	/* ../public/color.h:48 */
	void Color(Color* , int, int, int, int);
	/* ../public/color.h:58 */
	void SetColor(Color* , int, int, int, int);
	/* ../public/color.h:67 */
	void Init(Color* , int, int, int, int);
	/* ../public/color.h:72 */
	void GetColor(const Color* , int& , int& , int& , int& );
	/* ../public/color.h:85 */
	void SetRawColor(Color* , int32);
	/* ../public/color.h:90 */
	int32 GetRawColor(const Color* );
	/* ../public/color.h:95 */
	uint32 AsUint32(const Color* );
	/* ../public/color.h:100 */
	void FromUint32(Color* , uint32);
	/* ../public/color.h:107 */
	uint8 SetRed(Color* , int);
	/* ../public/color.h:108 */
	uint8 SetGreen(Color* , int);
	/* ../public/color.h:109 */
	uint8 SetBlue(Color* , int);
	/* ../public/color.h:110 */
	uint8 SetAlpha(Color* , int);
	/* ../public/color.h:113 */
	uint8& operator[](Color* , int);
	/* ../public/color.h:119 */
	uint8& r(Color* );
	/* ../public/color.h:120 */
	uint8& g(Color* );
	/* ../public/color.h:121 */
	uint8& b(Color* );
	/* ../public/color.h:122 */
	uint8& a(Color* );
	/* ../public/color.h:124 */
	const uint8& operator[](const Color* , int);
	/* ../public/color.h:130 */
	const uint8& r(const Color* );
	/* ../public/color.h:131 */
	const uint8& g(const Color* );
	/* ../public/color.h:132 */
	const uint8& b(const Color* );
	/* ../public/color.h:133 */
	const uint8& a(const Color* );
	/* ../public/color.h:135 */
	bool operator==(const Color* , const Color& );
	/* ../public/color.h:140 */
	bool operator!=(const Color* , const Color& );
	/* ../public/color.h:145 */
	Color& operator=(Color* , const Color& );
	/* ../public/color.h:151 */
	Color Lerp(float, const Color& , const Color& );
	/* ../public/color.h:161 */
	color24 ToColor24(const Color* );
	/* ../public/color.h:170 */
	Color ScaleColor(const Color& , float);
private:
	uint8 _color[4]; /* 0 4 */
	void Color(class Color *); /* linkage=_ZN5ColorC4Ev */
	void Color(class Color *, int, int, int); /* linkage=_ZN5ColorC4Eiii */
	void Color(class Color *, int, int, int, int); /* linkage=_ZN5ColorC4Eiiii */
	void SetColor(class Color *, int, int, int, int); /* linkage=_ZN5Color8SetColorEiiii */
	void Init(class Color *, int, int, int, int); /* linkage=_ZN5Color4InitEiiii */
	void GetColor(const class Color  *, int &, int &, int &, int &); /* linkage=_ZNK5Color8GetColorERiS0_S0_S0_ */
	void SetRawColor(class Color *, int32); /* linkage=_ZN5Color11SetRawColorEi */
	int32 GetRawColor(const class Color  *); /* linkage=_ZNK5Color11GetRawColorEv */
	uint32 AsUint32(const class Color  *); /* linkage=_ZNK5Color8AsUint32Ev */
	void FromUint32(class Color *, uint32); /* linkage=_ZN5Color10FromUint32Ej */
	uint8 SetRed(class Color *, int); /* linkage=_ZN5Color6SetRedEi */
	uint8 SetGreen(class Color *, int); /* linkage=_ZN5Color8SetGreenEi */
	uint8 SetBlue(class Color *, int); /* linkage=_ZN5Color7SetBlueEi */
	uint8 SetAlpha(class Color *, int); /* linkage=_ZN5Color8SetAlphaEi */
	uint8 & operator[](class Color *, int); /* linkage=_ZN5ColorixEi */
	uint8 & r(class Color *); /* linkage=_ZN5Color1rEv */
	uint8 & g(class Color *); /* linkage=_ZN5Color1gEv */
	uint8 & b(class Color *); /* linkage=_ZN5Color1bEv */
	uint8 & a(class Color *); /* linkage=_ZN5Color1aEv */
	const uint8  & operator[](const class Color  *, int); /* linkage=_ZNK5ColorixEi */
	const uint8  & r(const class Color  *); /* linkage=_ZNK5Color1rEv */
	const uint8  & g(const class Color  *); /* linkage=_ZNK5Color1gEv */
	const uint8  & b(const class Color  *); /* linkage=_ZNK5Color1bEv */
	const uint8  & a(const class Color  *); /* linkage=_ZNK5Color1aEv */
	bool operator==(const class Color  *, const class Color  &); /* linkage=_ZNK5ColoreqERKS_ */
	bool operator!=(const class Color  *, const class Color  &); /* linkage=_ZNK5ColorneERKS_ */
	class Color & operator=(class Color *, const class Color  &); /* linkage=_ZN5ColoraSERKS_ */
	class Color Lerp(float, const class Color  &, const class Color  &); /* linkage=_ZN5Color4LerpEfRKS_S1_ */
	class color24 ToColor24(const class Color  *); /* linkage=_ZNK5Color9ToColor24Ev */
	class Color ScaleColor(const class Color  &, float); /* linkage=_ZN5Color10ScaleColorERKS_f */
	virtual const void  * CastToBase(const class Color  *, class ClassID); /* linkage=_ZNK9Attribute5Color10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class Color *, class ClassID); /* linkage=_ZN9Attribute5Color10CastToBaseEN10Reflection7ClassIDE */
	/* <1c2e0ea> reflection/commonattributes.cpp:14 */
	virtual const class CClassInfo  & GetTypeInfo(const class Color  *); /* linkage=_ZNK9Attribute5Color11GetTypeInfoEv */
	void Color(class Color *, class Color &); /* linkage=_ZN9Attribute5ColorC4EOS0_ */
	virtual void ~Color(class Color *); /* linkage=_ZN9Attribute5ColorD4Ev */
	void Color(class Color *, const class Color  &); /* linkage=_ZN9Attribute5ColorC4ERK5Color */
	const class ClassID  MyTypeID(void); /* linkage=_ZN9Attribute5Color8MyTypeIDEv */
};

// <057EA61C> ../../public/color.h:25
// member functions: 67
// member variable: 1
// vtable entries: 3
// class size: 4
class Color {
	/* ../../public/color.h:30 */
	enum {
		RED = 0,
		GREEN = 1,
		BLUE = 2,
		ALPHA = 3,
	};
	/* ../../public/color.h:38 */
	void Color(Color* );
	/* ../../public/color.h:44 */
	void Color(Color* , int, int, int);
	/* ../../public/color.h:48 */
	void Color(Color* , int, int, int, int);
	/* ../../public/color.h:58 */
	void SetColor(Color* , int, int, int, int);
	/* ../../public/color.h:67 */
	void Init(Color* , int, int, int, int);
	/* ../../public/color.h:72 */
	void GetColor(const Color* , int& , int& , int& , int& );
	/* ../../public/color.h:85 */
	void SetRawColor(Color* , int32);
	/* ../../public/color.h:90 */
	int32 GetRawColor(const Color* );
	/* ../../public/color.h:95 */
	uint32 AsUint32(const Color* );
	/* ../../public/color.h:100 */
	void FromUint32(Color* , uint32);
	/* ../../public/color.h:107 */
	uint8 SetRed(Color* , int);
	/* ../../public/color.h:108 */
	uint8 SetGreen(Color* , int);
	/* ../../public/color.h:109 */
	uint8 SetBlue(Color* , int);
	/* ../../public/color.h:110 */
	uint8 SetAlpha(Color* , int);
	/* ../../public/color.h:113 */
	uint8& operator[](Color* , int);
	/* ../../public/color.h:119 */
	uint8& r(Color* );
	/* ../../public/color.h:120 */
	uint8& g(Color* );
	/* ../../public/color.h:121 */
	uint8& b(Color* );
	/* ../../public/color.h:122 */
	uint8& a(Color* );
	/* ../../public/color.h:124 */
	const uint8& operator[](const Color* , int);
	/* ../../public/color.h:130 */
	const uint8& r(const Color* );
	/* ../../public/color.h:131 */
	const uint8& g(const Color* );
	/* ../../public/color.h:132 */
	const uint8& b(const Color* );
	/* ../../public/color.h:133 */
	const uint8& a(const Color* );
	/* ../../public/color.h:135 */
	bool operator==(const Color* , const Color& );
	/* ../../public/color.h:140 */
	bool operator!=(const Color* , const Color& );
	/* ../../public/color.h:145 */
	Color& operator=(Color* , const Color& );
	/* ../../public/color.h:151 */
	Color Lerp(float, const Color& , const Color& );
	/* ../../public/color.h:161 */
	color24 ToColor24(const Color* );
	/* ../../public/color.h:170 */
	Color ScaleColor(const Color& , float);
private:
	uint8 _color[4]; /* 0 4 */
	void Color(class Color *); /* linkage=_ZN5ColorC4Ev */
	void Color(class Color *, int, int, int); /* linkage=_ZN5ColorC4Eiii */
	void Color(class Color *, int, int, int, int); /* linkage=_ZN5ColorC4Eiiii */
	void SetColor(class Color *, int, int, int, int); /* linkage=_ZN5Color8SetColorEiiii */
	void Init(class Color *, int, int, int, int); /* linkage=_ZN5Color4InitEiiii */
	void GetColor(const class Color  *, int &, int &, int &, int &); /* linkage=_ZNK5Color8GetColorERiS0_S0_S0_ */
	void SetRawColor(class Color *, int32); /* linkage=_ZN5Color11SetRawColorEi */
	int32 GetRawColor(const class Color  *); /* linkage=_ZNK5Color11GetRawColorEv */
	uint32 AsUint32(const class Color  *); /* linkage=_ZNK5Color8AsUint32Ev */
	void FromUint32(class Color *, uint32); /* linkage=_ZN5Color10FromUint32Ej */
	uint8 SetRed(class Color *, int); /* linkage=_ZN5Color6SetRedEi */
	uint8 SetGreen(class Color *, int); /* linkage=_ZN5Color8SetGreenEi */
	uint8 SetBlue(class Color *, int); /* linkage=_ZN5Color7SetBlueEi */
	uint8 SetAlpha(class Color *, int); /* linkage=_ZN5Color8SetAlphaEi */
	uint8 & operator[](class Color *, int); /* linkage=_ZN5ColorixEi */
	uint8 & r(class Color *); /* linkage=_ZN5Color1rEv */
	uint8 & g(class Color *); /* linkage=_ZN5Color1gEv */
	uint8 & b(class Color *); /* linkage=_ZN5Color1bEv */
	uint8 & a(class Color *); /* linkage=_ZN5Color1aEv */
	const uint8  & operator[](const class Color  *, int); /* linkage=_ZNK5ColorixEi */
	const uint8  & r(const class Color  *); /* linkage=_ZNK5Color1rEv */
	const uint8  & g(const class Color  *); /* linkage=_ZNK5Color1gEv */
	const uint8  & b(const class Color  *); /* linkage=_ZNK5Color1bEv */
	const uint8  & a(const class Color  *); /* linkage=_ZNK5Color1aEv */
	bool operator==(const class Color  *, const class Color  &); /* linkage=_ZNK5ColoreqERKS_ */
	bool operator!=(const class Color  *, const class Color  &); /* linkage=_ZNK5ColorneERKS_ */
	class Color & operator=(class Color *, const class Color  &); /* linkage=_ZN5ColoraSERKS_ */
	class Color Lerp(float, const class Color  &, const class Color  &); /* linkage=_ZN5Color4LerpEfRKS_S1_ */
	class color24 ToColor24(const class Color  *); /* linkage=_ZNK5Color9ToColor24Ev */
	class Color ScaleColor(const class Color  &, float); /* linkage=_ZN5Color10ScaleColorERKS_f */
	virtual const void  * CastToBase(const class Color  *, class ClassID); /* linkage=_ZNK9Attribute5Color10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class Color *, class ClassID); /* linkage=_ZN9Attribute5Color10CastToBaseEN10Reflection7ClassIDE */
	/* <1c2e0ea> reflection/commonattributes.cpp:14 */
	virtual const class CClassInfo  & GetTypeInfo(const class Color  *); /* linkage=_ZNK9Attribute5Color11GetTypeInfoEv */
	void Color(class Color *, class Color &); /* linkage=_ZN9Attribute5ColorC4EOS0_ */
	virtual void ~Color(class Color *); /* linkage=_ZN9Attribute5ColorD4Ev */
	void Color(class Color *, const class Color  &); /* linkage=_ZN9Attribute5ColorC4ERK5Color */
	const class ClassID  MyTypeID(void); /* linkage=_ZN9Attribute5Color8MyTypeIDEv */
};

// <067E1AD2> ../public/color.h:38
void Color::Color()
{
} /* size: 0 */

// <067E1AB9> ../public/color.h:38
inline void Color::Color()
{
} /* size: 0 */

// <06583914> ../public/color.h:44
void Color::Color(int _r, int _g, int _b)
{
} /* size: 0 */

// <065838DA> ../public/color.h:44
inline void Color::Color(int _r, int _g, int _b)
{
} /* size: 0 */

// <06F38B7A> ../public/color.h:48
void Color::Color(int _r, int _g, int _b, int _a)
{
} /* size: 0 */

// <06F38B35> ../public/color.h:48
inline void Color::Color(int _r, int _g, int _b, int _a)
{
} /* size: 0 */

// <06F38AF0> ../public/color.h:58
inline void Color::SetColor(int _r, int _g, int _b, int _a)
{
} /* size: 0 */

// <05B4C417> ../public/color.h:67
inline void Color::Init(int _r, int _g, int _b, int _a)
{
} /* size: 0 */

// <05B4C3F2> ../public/color.h:85
inline void Color::SetRawColor(int32 Color)
{
} /* size: 0 */

// <05B4C3D9> ../public/color.h:90
inline void Color::GetRawColor()
{
} /* size: 0 */

// <067E19EB> ../public/color.h:95
inline void Color::AsUint32()
{
} /* size: 0 */

// <067E19C8> ../public/color.h:100
inline void Color::FromUint32(uint32 c)
{
} /* size: 0 */

// <0597A544> ../public/color.h:107
inline void Color::SetRed(int _r)
{
} /* size: 0 */

// <0597A520> ../public/color.h:108
inline void Color::SetGreen(int _g)
{
} /* size: 0 */

// <0597A4FC> ../public/color.h:109
inline void Color::SetBlue(int _b)
{
} /* size: 0 */

// <0597A4D8> ../public/color.h:110
inline void Color::SetAlpha(int _a)
{
} /* size: 0 */

// <0443D054> ../public/color.h:113
inline void Color::operator[](int index)
{
} /* size: 0 */

// <067E1964> ../public/color.h:122
inline void Color::a()
{
} /* size: 0 */

// <068354F3> ../public/color.h:130
inline void Color::r()
{
} /* size: 0 */

// <068354DA> ../public/color.h:131
inline void Color::g()
{
} /* size: 0 */

// <068354C1> ../public/color.h:132
inline void Color::b()
{
} /* size: 0 */

// <0028C84B> ../public/color.h:135
inline void Color::operator==(const Color& rhs)
{
} /* size: 0 */

// <0028C826> ../public/color.h:140
inline void Color::operator!=(const Color& rhs)
{
} /* size: 0 */

// <05B4C3B4> ../public/color.h:145
inline void Color::operator=(const Color& rhs)
{
} /* size: 0 */

