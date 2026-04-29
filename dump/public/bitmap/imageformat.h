
//
// public/bitmap/imageformat.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 46
//	structs: 27
//

// <046DD6EC> ../public/bitmap/imageformat.h:67
// variable: 1
inline int ConvertFrom10Bit<8>(int x)
{
	int i; // 69
} /* size: 0, variables: 1 */

// <046AEC16> ../public/bitmap/imageformat.h:79
// member function: 1
// member variable: 1
// struct size: 4
struct R32F_t {
	float32 r; /* 0 4 */
	/* ../public/bitmap/imageformat.h:82 */
	void RFromFloat(R32F_t* , float);
};

// <046AEC5B> ../public/bitmap/imageformat.h:85
// member functions: 2
// member variables: 2
// struct size: 8
struct RG3232F_t {
	float32 r; /* 0 4 */
	float32 g; /* 4 4 */
	/* ../public/bitmap/imageformat.h:90 */
	void RFromFloat(RG3232F_t* , float);
	/* ../public/bitmap/imageformat.h:91 */
	void GFromFloat(RG3232F_t* , float);
};

// <046AECCA> ../public/bitmap/imageformat.h:94
// member functions: 3
// member variables: 3
// struct size: 12
struct RGB323232F_t {
	float32 r; /* 0 4 */
	float32 g; /* 4 4 */
	float32 b; /* 8 4 */
	/* ../public/bitmap/imageformat.h:100 */
	void RFromFloat(RGB323232F_t* , float);
	/* ../public/bitmap/imageformat.h:101 */
	void GFromFloat(RGB323232F_t* , float);
	/* ../public/bitmap/imageformat.h:102 */
	void BFromFloat(RGB323232F_t* , float);
};

// <0466D1CA> ../public/bitmap/imageformat.h:105
// member functions: 4
// member variables: 4
// struct size: 16
struct RGBA32323232F_t {
	float32 r; /* 0 4 */
	float32 g; /* 4 4 */
	float32 b; /* 8 4 */
	float32 a; /* 12 4 */
	/* ../public/bitmap/imageformat.h:112 */
	void RFromFloat(RGBA32323232F_t* , float);
	/* ../public/bitmap/imageformat.h:113 */
	void GFromFloat(RGBA32323232F_t* , float);
	/* ../public/bitmap/imageformat.h:114 */
	void BFromFloat(RGBA32323232F_t* , float);
	/* ../public/bitmap/imageformat.h:115 */
	void AFromFloat(RGBA32323232F_t* , float);
};

// <046AEE3F> ../public/bitmap/imageformat.h:118
// member variable: 1
// struct size: 2
struct R16F_t {
	float16_with_assign r; /* 0 2 */
};

// <046AEE5A> ../public/bitmap/imageformat.h:123
// member variables: 2
// struct size: 4
struct RG1616F_t {
	float16_with_assign r; /* 0 2 */
	float16_with_assign g; /* 2 2 */
};

// <046AEE82> ../public/bitmap/imageformat.h:136
// member variables: 4
// struct size: 8
struct RGBA16161616F_t {
	float16_with_assign r; /* 0 2 */
	float16_with_assign g; /* 2 2 */
	float16_with_assign b; /* 4 2 */
	float16_with_assign a; /* 6 2 */
};

// <00822808> ../public/bitmap/imageformat.h:195
// member functions: 17
// member variables: 4
// struct size: 4
struct BGRA8888_t {
	uint8 b; /* 0 1 */
	uint8 g; /* 1 1 */
	uint8 r; /* 2 1 */
	uint8 a; /* 3 1 */
	/* ../public/bitmap/imageformat.h:202 */
	BGRA8888_t& operator=(BGRA8888_t* , const BGRA8888_t& );
	/* ../public/bitmap/imageformat.h:208 */
	float RToFloat(const BGRA8888_t* );
	/* ../public/bitmap/imageformat.h:209 */
	float GToFloat(const BGRA8888_t* );
	/* ../public/bitmap/imageformat.h:210 */
	float BToFloat(const BGRA8888_t* );
	/* ../public/bitmap/imageformat.h:211 */
	float AToFloat(const BGRA8888_t* );
	/* ../public/bitmap/imageformat.h:213 */
	int RTo10Bit(const BGRA8888_t* );
	/* ../public/bitmap/imageformat.h:214 */
	int GTo10Bit(const BGRA8888_t* );
	/* ../public/bitmap/imageformat.h:215 */
	int BTo10Bit(const BGRA8888_t* );
	/* ../public/bitmap/imageformat.h:216 */
	int ATo10Bit(const BGRA8888_t* );
	/* ../public/bitmap/imageformat.h:218 */
	void RFrom10Bit(BGRA8888_t* , int);
	/* ../public/bitmap/imageformat.h:219 */
	void GFrom10Bit(BGRA8888_t* , int);
	/* ../public/bitmap/imageformat.h:220 */
	void BFrom10Bit(BGRA8888_t* , int);
	/* ../public/bitmap/imageformat.h:221 */
	void AFrom10Bit(BGRA8888_t* , int);
	/* ../public/bitmap/imageformat.h:223 */
	void RFromFloat(BGRA8888_t* , float);
	/* ../public/bitmap/imageformat.h:224 */
	void GFromFloat(BGRA8888_t* , float);
	/* ../public/bitmap/imageformat.h:225 */
	void BFromFloat(BGRA8888_t* , float);
	/* ../public/bitmap/imageformat.h:226 */
	void AFromFloat(BGRA8888_t* , float);
};

// <046914B9> ../public/bitmap/imageformat.h:202
inline void BGRA8888_t::operator=(const BGRA8888_t& in)
{
} /* size: 0 */

// <0470333F> ../public/bitmap/imageformat.h:208
inline void BGRA8888_t::RToFloat()
{
} /* size: 0 */

// <04703326> ../public/bitmap/imageformat.h:209
inline void BGRA8888_t::GToFloat()
{
} /* size: 0 */

// <0470330D> ../public/bitmap/imageformat.h:210
inline void BGRA8888_t::BToFloat()
{
} /* size: 0 */

// <047032F4> ../public/bitmap/imageformat.h:211
inline void BGRA8888_t::AToFloat()
{
} /* size: 0 */

// <047032D1> ../public/bitmap/imageformat.h:223
inline void BGRA8888_t::RFromFloat(float x)
{
} /* size: 0 */

// <047032AE> ../public/bitmap/imageformat.h:224
inline void BGRA8888_t::GFromFloat(float x)
{
} /* size: 0 */

// <0470328B> ../public/bitmap/imageformat.h:225
inline void BGRA8888_t::BFromFloat(float x)
{
} /* size: 0 */

// <04703268> ../public/bitmap/imageformat.h:226
inline void BGRA8888_t::AFromFloat(float x)
{
} /* size: 0 */

// <046AF16D> ../public/bitmap/imageformat.h:229
// member functions: 17
// member variables: 4
// struct size: 4
struct ABGR8888_t {
	uint8 a; /* 0 1 */
	uint8 b; /* 1 1 */
	uint8 g; /* 2 1 */
	uint8 r; /* 3 1 */
	/* ../public/bitmap/imageformat.h:236 */
	ABGR8888_t& operator=(ABGR8888_t* , const BGRA8888_t& );
	/* ../public/bitmap/imageformat.h:245 */
	float RToFloat(const ABGR8888_t* );
	/* ../public/bitmap/imageformat.h:246 */
	float GToFloat(const ABGR8888_t* );
	/* ../public/bitmap/imageformat.h:247 */
	float BToFloat(const ABGR8888_t* );
	/* ../public/bitmap/imageformat.h:248 */
	float AToFloat(const ABGR8888_t* );
	/* ../public/bitmap/imageformat.h:250 */
	int RTo10Bit(const ABGR8888_t* );
	/* ../public/bitmap/imageformat.h:251 */
	int GTo10Bit(const ABGR8888_t* );
	/* ../public/bitmap/imageformat.h:252 */
	int BTo10Bit(const ABGR8888_t* );
	/* ../public/bitmap/imageformat.h:253 */
	int ATo10Bit(const ABGR8888_t* );
	/* ../public/bitmap/imageformat.h:255 */
	void RFrom10Bit(ABGR8888_t* , int);
	/* ../public/bitmap/imageformat.h:256 */
	void GFrom10Bit(ABGR8888_t* , int);
	/* ../public/bitmap/imageformat.h:257 */
	void BFrom10Bit(ABGR8888_t* , int);
	/* ../public/bitmap/imageformat.h:258 */
	void AFrom10Bit(ABGR8888_t* , int);
	/* ../public/bitmap/imageformat.h:260 */
	void RFromFloat(ABGR8888_t* , float);
	/* ../public/bitmap/imageformat.h:261 */
	void GFromFloat(ABGR8888_t* , float);
	/* ../public/bitmap/imageformat.h:262 */
	void BFromFloat(ABGR8888_t* , float);
	/* ../public/bitmap/imageformat.h:263 */
	void AFromFloat(ABGR8888_t* , float);
};

// <046AF411> ../public/bitmap/imageformat.h:266
// member functions: 17
// member variables: 4
// struct size: 4
struct ARGB8888_t {
	uint8 a; /* 0 1 */
	uint8 r; /* 1 1 */
	uint8 g; /* 2 1 */
	uint8 b; /* 3 1 */
	/* ../public/bitmap/imageformat.h:273 */
	ARGB8888_t& operator=(ARGB8888_t* , const BGRA8888_t& );
	/* ../public/bitmap/imageformat.h:282 */
	float RToFloat(const ARGB8888_t* );
	/* ../public/bitmap/imageformat.h:283 */
	float GToFloat(const ARGB8888_t* );
	/* ../public/bitmap/imageformat.h:284 */
	float BToFloat(const ARGB8888_t* );
	/* ../public/bitmap/imageformat.h:285 */
	float AToFloat(const ARGB8888_t* );
	/* ../public/bitmap/imageformat.h:287 */
	int RTo10Bit(const ARGB8888_t* );
	/* ../public/bitmap/imageformat.h:288 */
	int GTo10Bit(const ARGB8888_t* );
	/* ../public/bitmap/imageformat.h:289 */
	int BTo10Bit(const ARGB8888_t* );
	/* ../public/bitmap/imageformat.h:290 */
	int ATo10Bit(const ARGB8888_t* );
	/* ../public/bitmap/imageformat.h:292 */
	void RFrom10Bit(ARGB8888_t* , int);
	/* ../public/bitmap/imageformat.h:293 */
	void GFrom10Bit(ARGB8888_t* , int);
	/* ../public/bitmap/imageformat.h:294 */
	void BFrom10Bit(ARGB8888_t* , int);
	/* ../public/bitmap/imageformat.h:295 */
	void AFrom10Bit(ARGB8888_t* , int);
	/* ../public/bitmap/imageformat.h:297 */
	void RFromFloat(ARGB8888_t* , float);
	/* ../public/bitmap/imageformat.h:298 */
	void GFromFloat(ARGB8888_t* , float);
	/* ../public/bitmap/imageformat.h:299 */
	void BFromFloat(ARGB8888_t* , float);
	/* ../public/bitmap/imageformat.h:300 */
	void AFromFloat(ARGB8888_t* , float);
};

// <00822AA2> ../public/bitmap/imageformat.h:303
// member functions: 17
// member variables: 4
// struct size: 4
struct RGBA8888_t {
	uint8 r; /* 0 1 */
	uint8 g; /* 1 1 */
	uint8 b; /* 2 1 */
	uint8 a; /* 3 1 */
	/* ../public/bitmap/imageformat.h:310 */
	RGBA8888_t& operator=(RGBA8888_t* , const BGRA8888_t& );
	/* ../public/bitmap/imageformat.h:319 */
	float RToFloat(const RGBA8888_t* );
	/* ../public/bitmap/imageformat.h:320 */
	float GToFloat(const RGBA8888_t* );
	/* ../public/bitmap/imageformat.h:321 */
	float BToFloat(const RGBA8888_t* );
	/* ../public/bitmap/imageformat.h:322 */
	float AToFloat(const RGBA8888_t* );
	/* ../public/bitmap/imageformat.h:324 */
	int RTo10Bit(const RGBA8888_t* );
	/* ../public/bitmap/imageformat.h:325 */
	int GTo10Bit(const RGBA8888_t* );
	/* ../public/bitmap/imageformat.h:326 */
	int BTo10Bit(const RGBA8888_t* );
	/* ../public/bitmap/imageformat.h:327 */
	int ATo10Bit(const RGBA8888_t* );
	/* ../public/bitmap/imageformat.h:329 */
	void RFrom10Bit(RGBA8888_t* , int);
	/* ../public/bitmap/imageformat.h:330 */
	void GFrom10Bit(RGBA8888_t* , int);
	/* ../public/bitmap/imageformat.h:331 */
	void BFrom10Bit(RGBA8888_t* , int);
	/* ../public/bitmap/imageformat.h:332 */
	void AFrom10Bit(RGBA8888_t* , int);
	/* ../public/bitmap/imageformat.h:334 */
	void RFromFloat(RGBA8888_t* , float);
	/* ../public/bitmap/imageformat.h:335 */
	void GFromFloat(RGBA8888_t* , float);
	/* ../public/bitmap/imageformat.h:336 */
	void BFromFloat(RGBA8888_t* , float);
	/* ../public/bitmap/imageformat.h:337 */
	void AFromFloat(RGBA8888_t* , float);
};

// <04702FF6> ../public/bitmap/imageformat.h:332
inline void RGBA8888_t::AFrom10Bit(int a10)
{
} /* size: 0 */

// <0466D7E4> ../public/bitmap/imageformat.h:340
// member functions: 15
// member variables: 3
// struct size: 3
struct RGB888_t {
	uint8 r; /* 0 1 */
	uint8 g; /* 1 1 */
	uint8 b; /* 2 1 */
	/* ../public/bitmap/imageformat.h:346 */
	RGB888_t& operator=(RGB888_t* , const BGRA8888_t& );
	/* ../public/bitmap/imageformat.h:354 */
	bool operator==(const RGB888_t* , const RGB888_t& );
	/* ../public/bitmap/imageformat.h:359 */
	bool operator!=(const RGB888_t* , const RGB888_t& );
	/* ../public/bitmap/imageformat.h:364 */
	float RToFloat(const RGB888_t* );
	/* ../public/bitmap/imageformat.h:365 */
	float GToFloat(const RGB888_t* );
	/* ../public/bitmap/imageformat.h:366 */
	float BToFloat(const RGB888_t* );
	/* ../public/bitmap/imageformat.h:368 */
	int RTo10Bit(const RGB888_t* );
	/* ../public/bitmap/imageformat.h:369 */
	int GTo10Bit(const RGB888_t* );
	/* ../public/bitmap/imageformat.h:370 */
	int BTo10Bit(const RGB888_t* );
	/* ../public/bitmap/imageformat.h:372 */
	void RFrom10Bit(RGB888_t* , int);
	/* ../public/bitmap/imageformat.h:373 */
	void GFrom10Bit(RGB888_t* , int);
	/* ../public/bitmap/imageformat.h:374 */
	void BFrom10Bit(RGB888_t* , int);
	/* ../public/bitmap/imageformat.h:376 */
	void RFromFloat(RGB888_t* , float);
	/* ../public/bitmap/imageformat.h:377 */
	void GFromFloat(RGB888_t* , float);
	/* ../public/bitmap/imageformat.h:378 */
	void BFromFloat(RGB888_t* , float);
};

// <0469146F> ../public/bitmap/imageformat.h:346
inline void RGB888_t::operator=(const BGRA8888_t& in)
{
} /* size: 0 */

// <04702F4D> ../public/bitmap/imageformat.h:364
inline void RGB888_t::RToFloat()
{
} /* size: 0 */

// <04702F34> ../public/bitmap/imageformat.h:365
inline void RGB888_t::GToFloat()
{
} /* size: 0 */

// <04702F1B> ../public/bitmap/imageformat.h:366
inline void RGB888_t::BToFloat()
{
} /* size: 0 */

// <04702EF7> ../public/bitmap/imageformat.h:376
inline void RGB888_t::RFromFloat(float x)
{
} /* size: 0 */

// <04702ED3> ../public/bitmap/imageformat.h:377
inline void RGB888_t::GFromFloat(float x)
{
} /* size: 0 */

// <04702EAF> ../public/bitmap/imageformat.h:378
inline void RGB888_t::BFromFloat(float x)
{
} /* size: 0 */

// <0466DA4E> ../public/bitmap/imageformat.h:381
// member functions: 13
// member variables: 3
// struct size: 3
struct BGR888_t {
	uint8 b; /* 0 1 */
	uint8 g; /* 1 1 */
	uint8 r; /* 2 1 */
	/* ../public/bitmap/imageformat.h:387 */
	BGR888_t& operator=(BGR888_t* , const BGRA8888_t& );
	/* ../public/bitmap/imageformat.h:395 */
	float RToFloat(const BGR888_t* );
	/* ../public/bitmap/imageformat.h:396 */
	float GToFloat(const BGR888_t* );
	/* ../public/bitmap/imageformat.h:397 */
	float BToFloat(const BGR888_t* );
	/* ../public/bitmap/imageformat.h:399 */
	int RTo10Bit(const BGR888_t* );
	/* ../public/bitmap/imageformat.h:400 */
	int GTo10Bit(const BGR888_t* );
	/* ../public/bitmap/imageformat.h:401 */
	int BTo10Bit(const BGR888_t* );
	/* ../public/bitmap/imageformat.h:403 */
	void RFrom10Bit(BGR888_t* , int);
	/* ../public/bitmap/imageformat.h:404 */
	void GFrom10Bit(BGR888_t* , int);
	/* ../public/bitmap/imageformat.h:405 */
	void BFrom10Bit(BGR888_t* , int);
	/* ../public/bitmap/imageformat.h:407 */
	void RFromFloat(BGR888_t* , float);
	/* ../public/bitmap/imageformat.h:408 */
	void GFromFloat(BGR888_t* , float);
	/* ../public/bitmap/imageformat.h:409 */
	void BFromFloat(BGR888_t* , float);
};

// <046AFE01> ../public/bitmap/imageformat.h:412
// member functions: 13
// member variables: 4
// struct size: 4
struct BGRX8888_t {
	uint8 b; /* 0 1 */
	uint8 g; /* 1 1 */
	uint8 r; /* 2 1 */
	uint8 x; /* 3 1 */
	/* ../public/bitmap/imageformat.h:419 */
	BGRX8888_t& operator=(BGRX8888_t* , const BGRA8888_t& );
	/* ../public/bitmap/imageformat.h:428 */
	float RToFloat(const BGRX8888_t* );
	/* ../public/bitmap/imageformat.h:429 */
	float GToFloat(const BGRX8888_t* );
	/* ../public/bitmap/imageformat.h:430 */
	float BToFloat(const BGRX8888_t* );
	/* ../public/bitmap/imageformat.h:432 */
	int RTo10Bit(const BGRX8888_t* );
	/* ../public/bitmap/imageformat.h:433 */
	int GTo10Bit(const BGRX8888_t* );
	/* ../public/bitmap/imageformat.h:434 */
	int BTo10Bit(const BGRX8888_t* );
	/* ../public/bitmap/imageformat.h:436 */
	void RFrom10Bit(BGRX8888_t* , int);
	/* ../public/bitmap/imageformat.h:437 */
	void GFrom10Bit(BGRX8888_t* , int);
	/* ../public/bitmap/imageformat.h:438 */
	void BFrom10Bit(BGRX8888_t* , int);
	/* ../public/bitmap/imageformat.h:440 */
	void RFromFloat(BGRX8888_t* , float);
	/* ../public/bitmap/imageformat.h:441 */
	void GFromFloat(BGRX8888_t* , float);
	/* ../public/bitmap/imageformat.h:442 */
	void BFromFloat(BGRX8888_t* , float);
};

// <04702DDF> ../public/bitmap/imageformat.h:428
inline void BGRX8888_t::RToFloat()
{
} /* size: 0 */

// <04702DC6> ../public/bitmap/imageformat.h:429
inline void BGRX8888_t::GToFloat()
{
} /* size: 0 */

// <04702DAD> ../public/bitmap/imageformat.h:430
inline void BGRX8888_t::BToFloat()
{
} /* size: 0 */

// <04702D89> ../public/bitmap/imageformat.h:440
inline void BGRX8888_t::RFromFloat(float f)
{
} /* size: 0 */

// <04702D65> ../public/bitmap/imageformat.h:441
inline void BGRX8888_t::GFromFloat(float f)
{
} /* size: 0 */

// <0466DC64> ../public/bitmap/imageformat.h:447
// member functions: 14
// member variables: 3
// struct size: 2
struct BGR565_t {
	uint16 b:5; /* 0: 0 2 */
	uint16 g:6; /* 0: 5 2 */
	uint16 r:5; /* 0:11 2 */
	/* ../public/bitmap/imageformat.h:453 */
	BGR565_t& operator=(BGR565_t* , const BGRA8888_t& );
	/* ../public/bitmap/imageformat.h:461 */
	BGR565_t& Set(BGR565_t* , int, int, int);
	/* ../public/bitmap/imageformat.h:469 */
	float RToFloat(const BGR565_t* );
	/* ../public/bitmap/imageformat.h:470 */
	float GToFloat(const BGR565_t* );
	/* ../public/bitmap/imageformat.h:471 */
	float BToFloat(const BGR565_t* );
	/* ../public/bitmap/imageformat.h:473 */
	int RTo10Bit(const BGR565_t* );
	/* ../public/bitmap/imageformat.h:474 */
	int GTo10Bit(const BGR565_t* );
	/* ../public/bitmap/imageformat.h:475 */
	int BTo10Bit(const BGR565_t* );
	/* ../public/bitmap/imageformat.h:477 */
	void RFrom10Bit(BGR565_t* , int);
	/* ../public/bitmap/imageformat.h:478 */
	void GFrom10Bit(BGR565_t* , int);
	/* ../public/bitmap/imageformat.h:479 */
	void BFrom10Bit(BGR565_t* , int);
	/* ../public/bitmap/imageformat.h:481 */
	void RFromFloat(BGR565_t* , float);
	/* ../public/bitmap/imageformat.h:482 */
	void GFromFloat(BGR565_t* , float);
	/* ../public/bitmap/imageformat.h:483 */
	void BFromFloat(BGR565_t* , float);
};

// <04691425> ../public/bitmap/imageformat.h:453
inline void BGR565_t::operator=(const BGRA8888_t& in)
{
} /* size: 0 */

// <0466DEB4> ../public/bitmap/imageformat.h:486
// member functions: 17
// member variables: 4
// struct size: 2
struct BGRA5551_t {
	uint16 b:5; /* 0: 0 2 */
	uint16 g:5; /* 0: 5 2 */
	uint16 r:5; /* 0:10 2 */
	uint16 a:1; /* 0:15 2 */
	/* ../public/bitmap/imageformat.h:493 */
	BGRA5551_t& operator=(BGRA5551_t* , const BGRA8888_t& );
	/* ../public/bitmap/imageformat.h:502 */
	float RToFloat(const BGRA5551_t* );
	/* ../public/bitmap/imageformat.h:503 */
	float GToFloat(const BGRA5551_t* );
	/* ../public/bitmap/imageformat.h:504 */
	float BToFloat(const BGRA5551_t* );
	/* ../public/bitmap/imageformat.h:505 */
	float AToFloat(const BGRA5551_t* );
	/* ../public/bitmap/imageformat.h:507 */
	int RTo10Bit(const BGRA5551_t* );
	/* ../public/bitmap/imageformat.h:508 */
	int GTo10Bit(const BGRA5551_t* );
	/* ../public/bitmap/imageformat.h:509 */
	int BTo10Bit(const BGRA5551_t* );
	/* ../public/bitmap/imageformat.h:510 */
	int ATo10Bit(const BGRA5551_t* );
	/* ../public/bitmap/imageformat.h:512 */
	void RFrom10Bit(BGRA5551_t* , int);
	/* ../public/bitmap/imageformat.h:513 */
	void GFrom10Bit(BGRA5551_t* , int);
	/* ../public/bitmap/imageformat.h:514 */
	void BFrom10Bit(BGRA5551_t* , int);
	/* ../public/bitmap/imageformat.h:515 */
	void AFrom10Bit(BGRA5551_t* , int);
	/* ../public/bitmap/imageformat.h:517 */
	void RFromFloat(BGRA5551_t* , float);
	/* ../public/bitmap/imageformat.h:518 */
	void GFromFloat(BGRA5551_t* , float);
	/* ../public/bitmap/imageformat.h:519 */
	void BFromFloat(BGRA5551_t* , float);
	/* ../public/bitmap/imageformat.h:520 */
	void AFromFloat(BGRA5551_t* , float);
};

// <04691400> ../public/bitmap/imageformat.h:493
inline void BGRA5551_t::operator=(const BGRA8888_t& in)
{
} /* size: 0 */

// <0466E16E> ../public/bitmap/imageformat.h:523
// member functions: 17
// member variables: 4
// struct size: 2
struct BGRA4444_t {
	uint16 b:4; /* 0: 0 2 */
	uint16 g:4; /* 0: 4 2 */
	uint16 r:4; /* 0: 8 2 */
	uint16 a:4; /* 0:12 2 */
	/* ../public/bitmap/imageformat.h:530 */
	BGRA4444_t& operator=(BGRA4444_t* , const BGRA8888_t& );
	/* ../public/bitmap/imageformat.h:539 */
	float RToFloat(const BGRA4444_t* );
	/* ../public/bitmap/imageformat.h:540 */
	float GToFloat(const BGRA4444_t* );
	/* ../public/bitmap/imageformat.h:541 */
	float BToFloat(const BGRA4444_t* );
	/* ../public/bitmap/imageformat.h:542 */
	float AToFloat(const BGRA4444_t* );
	/* ../public/bitmap/imageformat.h:544 */
	int RTo10Bit(const BGRA4444_t* );
	/* ../public/bitmap/imageformat.h:545 */
	int GTo10Bit(const BGRA4444_t* );
	/* ../public/bitmap/imageformat.h:546 */
	int BTo10Bit(const BGRA4444_t* );
	/* ../public/bitmap/imageformat.h:547 */
	int ATo10Bit(const BGRA4444_t* );
	/* ../public/bitmap/imageformat.h:549 */
	void RFrom10Bit(BGRA4444_t* , int);
	/* ../public/bitmap/imageformat.h:550 */
	void GFrom10Bit(BGRA4444_t* , int);
	/* ../public/bitmap/imageformat.h:551 */
	void BFrom10Bit(BGRA4444_t* , int);
	/* ../public/bitmap/imageformat.h:552 */
	void AFrom10Bit(BGRA4444_t* , int);
	/* ../public/bitmap/imageformat.h:554 */
	void RFromFloat(BGRA4444_t* , float);
	/* ../public/bitmap/imageformat.h:555 */
	void GFromFloat(BGRA4444_t* , float);
	/* ../public/bitmap/imageformat.h:556 */
	void BFromFloat(BGRA4444_t* , float);
	/* ../public/bitmap/imageformat.h:557 */
	void AFromFloat(BGRA4444_t* , float);
};

// <046B002A> ../public/bitmap/imageformat.h:588
// member variables: 2
// struct size: 2
struct UV88_t {
	int8 u; /* 0 1 */
	int8 v; /* 1 1 */
};

// <046B005A> ../public/bitmap/imageformat.h:594
// member variables: 4
// struct size: 4
struct UVWQ8888_t {
	int8 u; /* 0 1 */
	int8 v; /* 1 1 */
	int8 w; /* 2 1 */
	int8 q; /* 3 1 */
};

// <046B00A6> ../public/bitmap/imageformat.h:602
// member variables: 4
// struct size: 4
struct UVLX8888_t {
	int8 u; /* 0 1 */
	int8 v; /* 1 1 */
	uint8 l; /* 2 1 */
	uint8 x; /* 3 1 */
};

// <046B00F2> ../public/bitmap/imageformat.h:610
// member functions: 4
// member variable: 1
// struct size: 1
struct I8_t {
	uint8 i; /* 0 1 */
	/* ../public/bitmap/imageformat.h:613 */
	float IToFloat(const I8_t* );
	/* ../public/bitmap/imageformat.h:614 */
	int ITo10Bit(const I8_t* );
	/* ../public/bitmap/imageformat.h:615 */
	void IFrom10Bit(I8_t* , int);
	/* ../public/bitmap/imageformat.h:617 */
	void IFromFloat(I8_t* , float);
};

// <04702D28> ../public/bitmap/imageformat.h:613
inline void I8_t::IToFloat()
{
} /* size: 0 */

// <04702D02> ../public/bitmap/imageformat.h:615
inline void I8_t::IFrom10Bit(int i10)
{
} /* size: 0 */

// <046B01B0> ../public/bitmap/imageformat.h:620
// member functions: 8
// member variables: 2
// struct size: 2
struct IA88_t {
	uint8 i; /* 0 1 */
	uint8 a; /* 1 1 */
	/* ../public/bitmap/imageformat.h:625 */
	float IToFloat(const IA88_t* );
	/* ../public/bitmap/imageformat.h:626 */
	float AToFloat(const IA88_t* );
	/* ../public/bitmap/imageformat.h:628 */
	int ITo10Bit(const IA88_t* );
	/* ../public/bitmap/imageformat.h:629 */
	int ATo10Bit(const IA88_t* );
	/* ../public/bitmap/imageformat.h:631 */
	void IFrom10Bit(IA88_t* , int);
	/* ../public/bitmap/imageformat.h:632 */
	void AFrom10Bit(IA88_t* , int);
	/* ../public/bitmap/imageformat.h:634 */
	void IFromFloat(IA88_t* , float);
	/* ../public/bitmap/imageformat.h:635 */
	void AFromFloat(IA88_t* , float);
};

// <04702CE9> ../public/bitmap/imageformat.h:625
inline void IA88_t::IToFloat()
{
} /* size: 0 */

// <04702CD0> ../public/bitmap/imageformat.h:626
inline void IA88_t::AToFloat()
{
} /* size: 0 */

// <04702CAA> ../public/bitmap/imageformat.h:631
inline void IA88_t::IFrom10Bit(int i10)
{
} /* size: 0 */

// <04702C84> ../public/bitmap/imageformat.h:632
inline void IA88_t::AFrom10Bit(int a10)
{
} /* size: 0 */

// <00822D4C> ../public/bitmap/imageformat.h:638
// member functions: 17
// member variables: 4
// struct size: 8
struct RGBA16161616_t {
	uint16 r; /* 0 2 */
	uint16 g; /* 2 2 */
	uint16 b; /* 4 2 */
	uint16 a; /* 6 2 */
	/* ../public/bitmap/imageformat.h:645 */
	RGBA16161616_t& operator=(RGBA16161616_t* , const RGBA16161616_t& );
	/* ../public/bitmap/imageformat.h:654 */
	float RToFloat(const RGBA16161616_t* );
	/* ../public/bitmap/imageformat.h:655 */
	float GToFloat(const RGBA16161616_t* );
	/* ../public/bitmap/imageformat.h:656 */
	float BToFloat(const RGBA16161616_t* );
	/* ../public/bitmap/imageformat.h:657 */
	float AToFloat(const RGBA16161616_t* );
	/* ../public/bitmap/imageformat.h:659 */
	int RTo10Bit(const RGBA16161616_t* );
	/* ../public/bitmap/imageformat.h:660 */
	int GTo10Bit(const RGBA16161616_t* );
	/* ../public/bitmap/imageformat.h:661 */
	int BTo10Bit(const RGBA16161616_t* );
	/* ../public/bitmap/imageformat.h:662 */
	int ATo10Bit(const RGBA16161616_t* );
	/* ../public/bitmap/imageformat.h:664 */
	void RFrom10Bit(RGBA16161616_t* , int);
	/* ../public/bitmap/imageformat.h:665 */
	void GFrom10Bit(RGBA16161616_t* , int);
	/* ../public/bitmap/imageformat.h:666 */
	void BFrom10Bit(RGBA16161616_t* , int);
	/* ../public/bitmap/imageformat.h:667 */
	void AFrom10Bit(RGBA16161616_t* , int);
	/* ../public/bitmap/imageformat.h:669 */
	void RFromFloat(RGBA16161616_t* , float);
	/* ../public/bitmap/imageformat.h:670 */
	void GFromFloat(RGBA16161616_t* , float);
	/* ../public/bitmap/imageformat.h:671 */
	void BFromFloat(RGBA16161616_t* , float);
	/* ../public/bitmap/imageformat.h:672 */
	void AFromFloat(RGBA16161616_t* , float);
};

// <04702C6B> ../public/bitmap/imageformat.h:654
inline void RGBA16161616_t::RToFloat()
{
} /* size: 0 */

// <04702C52> ../public/bitmap/imageformat.h:655
inline void RGBA16161616_t::GToFloat()
{
} /* size: 0 */

// <04702C39> ../public/bitmap/imageformat.h:656
inline void RGBA16161616_t::BToFloat()
{
} /* size: 0 */

// <04702C20> ../public/bitmap/imageformat.h:657
inline void RGBA16161616_t::AToFloat()
{
} /* size: 0 */

// <00822FFC> ../public/bitmap/imageformat.h:675
// member functions: 4
// member variable: 1
// struct size: 2
struct R16_t {
	uint16 r; /* 0 2 */
	/* ../public/bitmap/imageformat.h:678 */
	float IToFloat(const R16_t* );
	/* ../public/bitmap/imageformat.h:679 */
	int ITo10Bit(const R16_t* );
	/* ../public/bitmap/imageformat.h:680 */
	void IFrom10Bit(R16_t* , int);
	/* ../public/bitmap/imageformat.h:682 */
	void IFromFloat(R16_t* , float);
};

// <04702C07> ../public/bitmap/imageformat.h:678
inline void R16_t::IToFloat()
{
} /* size: 0 */

// <008230B1> ../public/bitmap/imageformat.h:685
// member functions: 8
// member variables: 2
// struct size: 4
struct RG1616_t {
	uint16 r; /* 0 2 */
	uint16 g; /* 2 2 */
	/* ../public/bitmap/imageformat.h:690 */
	float IToFloat(const RG1616_t* );
	/* ../public/bitmap/imageformat.h:691 */
	float AToFloat(const RG1616_t* );
	/* ../public/bitmap/imageformat.h:693 */
	int ITo10Bit(const RG1616_t* );
	/* ../public/bitmap/imageformat.h:694 */
	int ATo10Bit(const RG1616_t* );
	/* ../public/bitmap/imageformat.h:696 */
	void IFrom10Bit(RG1616_t* , int);
	/* ../public/bitmap/imageformat.h:697 */
	void AFrom10Bit(RG1616_t* , int);
	/* ../public/bitmap/imageformat.h:699 */
	void IFromFloat(RG1616_t* , float);
	/* ../public/bitmap/imageformat.h:700 */
	void AFromFloat(RG1616_t* , float);
};

// <04702BEE> ../public/bitmap/imageformat.h:690
inline void RG1616_t::IToFloat()
{
} /* size: 0 */

// <04702BD5> ../public/bitmap/imageformat.h:691
inline void RG1616_t::AToFloat()
{
} /* size: 0 */

// <01D1703D> ../public/bitmap/imageformat.h:712
// member variables: 17
// struct size: 32
struct ImageFormatInfo_t {
	const char * m_pName; /* 0 8 */
	uint8 m_nNumBytes; /* 8 1 */
	uint8 m_nNumRedBits; /* 9 1 */
	uint8 m_nNumGreenBits; /* 10 1 */
	uint8 m_nNumBlueBits; /* 11 1 */
	uint8 m_nNumAlphaBits; /* 12 1 */
	uint8 m_nNumDepthBits; /* 13 1 */
	uint8 m_nNumStencilBits; /* 14 1 */
	uint8 m_nBytesPerCompressedBlock; /* 15 1 */
	bool m_bIsCompressed:1; /* 16: 0 1 */
	bool m_bIsFloat:1; /* 16: 1 1 */
	bool m_bIsDepthFormat:1; /* 16: 2 1 */
	bool m_bIsLegalRenderTargetFormat:1; /* 16: 3 1 */
	bool m_bRenderTargetSupportsSrgbWrite:1; /* 16: 4 1 */
	ImageFormat m_nEDRamFormat; /* 20 4 */
	ImageFormat m_nNonEDRamFormat; /* 24 4 */
	ImageFormat m_nBaseFormat; /* 28 4 */
};

// <046B08FC> ../public/bitmap/imageformat.h:737
// member variables: 6
// struct size: 32
struct KernelInfo_t {
	float * m_pKernel; /* 0 8 */
	float * m_pInvKernel; /* 8 8 */
	int m_nWidth; /* 16 4 */
	int m_nHeight; /* 20 4 */
	int m_nDepth; /* 24 4 */
	int m_nDiameter; /* 28 4 */
};

// <04746C81> ../public/bitmap/imageformat.h:798
void ResampleInfo_t::ResampleInfo_t()
{
} /* size: 0 */

// <04746C68> ../public/bitmap/imageformat.h:798
inline void ResampleInfo_t::ResampleInfo_t()
{
} /* size: 0 */

// <04766373> ../public/bitmap/imageformat.h:906
inline void SizeInBytes(ImageFormat fmt)
{
} /* size: 0 */

// <04702BBD> ../public/bitmap/imageformat.h:914
inline void IsTransparent(ImageFormat fmt)
{
} /* size: 0 */

// <046913AB> ../public/bitmap/imageformat.h:923
inline void IsCompressed(ImageFormat fmt)
{
} /* size: 0 */

// <033D078D> ../public/bitmap/imageformat.h:932
inline void IsDepthFormat(ImageFormat fmt)
{
} /* size: 0 */

// <01DCE9D8> ../public/bitmap/imageformat.h:974
inline void IsFloatFormat(ImageFormat fmt)
{
} /* size: 0 */

// <0476631A> ../public/bitmap/imageformat.h:993
inline void GetMemRequired(int width, int height, int depth, ImageFormat imageFormat, bool mipmap, int* pAdjustedHeight)
{
} /* size: 0 */

