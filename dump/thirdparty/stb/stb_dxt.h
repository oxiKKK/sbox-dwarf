
//
// thirdparty/stb/stb_dxt.h
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 16
//

// <046C2674> ../thirdparty/stb/stb_dxt.h:58
void stb_compress_dxt_block(unsigned char *, const unsigned char *, int, int)
{
} /* size: 0 */

// <0474AF1D> ../thirdparty/stb/stb_dxt.h:164
// variable: 1
int stb__Mul8Bit(int a, int b)
{
	int t; // 166
} /* size: 0, variables: 1 */

// <0474AED8> ../thirdparty/stb/stb_dxt.h:170
// variables: 3
void stb__From16Bit(unsigned char* out, short unsigned int v)
{
	int rv; // 172
	int gv; // 173
	int bv; // 174
} /* size: 0, variables: 3 */

// <0474AEA8> ../thirdparty/stb/stb_dxt.h:183
short unsigned int stb__As16Bit(int r, int g, int b)
{
} /* size: 0 */

// <0474AE82> ../thirdparty/stb/stb_dxt.h:189
int stb__Lerp13(int a, int b)
{
} /* size: 0 */

// <0474AE52> ../thirdparty/stb/stb_dxt.h:202
void stb__Lerp13RGB(unsigned char* out, unsigned char* p1, unsigned char* p2)
{
} /* size: 0 */

// <0474ABBE> ../thirdparty/stb/stb_dxt.h:211
// function calls: 10
void stb__EvalColors(unsigned char* color, short unsigned int c0, short unsigned int c1)
{
	stb__From16Bit(unsigned char* out,
			short unsigned int v);  // 213
	stb__From16Bit(unsigned char* out,
			short unsigned int v);  // 214
	stb__Lerp13(int a,
			int b);  // 204
	stb__Lerp13(int a,
			int b);  // 205
	stb__Lerp13(int a,
			int b);  // 206
	stb__Lerp13RGB(unsigned char* out,
			unsigned char* p1,
			unsigned char* p2);  // 215
	stb__Lerp13(int a,
			int b);  // 204
	stb__Lerp13(int a,
			int b);  // 205
	stb__Lerp13(int a,
			int b);  // 206
	stb__Lerp13RGB(unsigned char* out,
			unsigned char* p1,
			unsigned char* p2);  // 216
} /* size: 277, inline expansions: 10 (337 bytes) */

// <0474AA67> ../thirdparty/stb/stb_dxt.h:220
// variables: 11
unsigned int stb__MatchColorsBlock(unsigned char* block, unsigned char* color)
{
	unsigned int mask; // 222
	int dirr; // 223
	int dirg; // 224
	int dirb; // 225
	int dots; // 226
	int stops; // 227
	int i; // 228
	int c0Point; // 229
	int halfPoint; // 229
	int c3Point; // 229
	{
		int dot; // 250
	}
} /* size: 335, variables: 10 */

// <0474A86B> ../thirdparty/stb/stb_dxt.h:263
// variables: 31
void stb__OptimizeColorsBlock(unsigned char* block, short unsigned int* pmax16, short unsigned int* pmin16)
{
	int mind; // 265
	int maxd; // 265
	unsigned char* minp; // 266
	unsigned char* maxp; // 266
	double magn; // 267
	int v_r; // 268
	int v_g; // 268
	int v_b; // 268
	const int  nIterPower; // 269
	float covf; // 270
	float vfr; // 270
	float vfg; // 270
	float vfb; // 270
	int cov; // 273
	int mu; // 274
	int min; // 274
	int max; // 274
	int ch; // 275
	int i; // 275
	int iter; // 275
	{
		const unsigned char* bp; // 279
		int muv; // 280
		int minv; // 280
		int maxv; // 280
	}
	{
		int r; // 301
		int g; // 302
		int b; // 303
	}
	{
		float r; // 323
		float g; // 324
		float b; // 325
	}
	{
		int dot; // 352
	}
} /* size: 0, variables: 20 */

// <0474A842> ../thirdparty/stb/stb_dxt.h:381
// variable: 1
short unsigned int stb__Quantize5(float x)
{
	short unsigned int q; // 383
} /* size: 0, variables: 1 */

// <0474A819> ../thirdparty/stb/stb_dxt.h:390
// variable: 1
short unsigned int stb__Quantize6(float x)
{
	short unsigned int q; // 392
} /* size: 0, variables: 1 */

// <0474A651> ../thirdparty/stb/stb_dxt.h:402
// variables: 27
int stb__RefineBlock(unsigned char* block, short unsigned int* pmax16, short unsigned int* pmin16, unsigned int mask)
{
	const int   w1Tab; // 404
	const int   prods; // 405
	float f; // 409
	short unsigned int oldMin; // 410
	short unsigned int oldMax; // 410
	short unsigned int min16; // 410
	short unsigned int max16; // 410
	int i; // 411
	int akku; // 411
	int xx; // 411
	int xy; // 411
	int yy; // 411
	int At1_r; // 412
	int At1_g; // 412
	int At1_b; // 412
	int At2_r; // 413
	int At2_g; // 413
	int At2_b; // 413
	unsigned int cm; // 414
	{
		int r; // 423
		int g; // 423
		int b; // 423
	}
	{
		int step; // 438
		int w1; // 439
		int r; // 440
		int g; // 441
		int b; // 442
	}
} /* size: 0, variables: 19 */

// <0474A578> ../thirdparty/stb/stb_dxt.h:479
// variables: 11
void stb__CompressColorBlock(unsigned char* dest, unsigned char* block, int mode)
{
	unsigned int mask; // 481
	int i; // 482
	int refinecount; // 483
	short unsigned int max16; // 484
	short unsigned int min16; // 484
	unsigned char color; // 485
	{
		int r; // 495
		int g; // 495
		int b; // 495
	}
	{
		unsigned int lastmask; // 510
	}
	{
		short unsigned int t; // 530
	}
} /* size: 0, variables: 6 */

// <0474A41C> ../thirdparty/stb/stb_dxt.h:547
// variables: 12
void stb__CompressAlphaBlock(unsigned char* dest, unsigned char* src, int stride)
{
	int i; // 549
	int dist; // 549
	int bias; // 549
	int dist4; // 549
	int dist2; // 549
	int bits; // 549
	int mask; // 549
	int mn; // 552
	int mx; // 552
	{
		int a; // 577
		int ind; // 578
		int t; // 578
	}
} /* size: 334, variables: 9 */

// <047499F8> ../thirdparty/stb/stb_dxt.h:617
void stb_compress_bc4_block(unsigned char* dest, const unsigned char* src)
{
} /* size: 0 */

// <04749955> ../thirdparty/stb/stb_dxt.h:622
void stb_compress_bc5_block(unsigned char* dest, const unsigned char* src)
{
} /* size: 0 */

