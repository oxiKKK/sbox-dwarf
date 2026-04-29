
//
// src/contact_solver.cpp
//
//	referenced by: libengine2.so
//
//	functions: 33
//	structs: 7
//

// <06D1046F> src/contact_solver.cpp:690
// member variables: 2
// struct size: 32
struct b3Vec2W {
	b3FloatW x; /* 0 16 */
	b3FloatW y; /* 16 16 */
};

// <06D1049A> src/contact_solver.cpp:696
// member variables: 3
// struct size: 48
struct b3Vec3W {
	b3FloatW X; /* 0 16 */
	b3FloatW Y; /* 16 16 */
	b3FloatW Z; /* 32 16 */
};

// <06D104D3> src/contact_solver.cpp:702
// member variables: 2
// struct size: 64
struct b3QuatW {
	b3Vec3W V; /* 0 48 */
	b3FloatW S; /* 48 16 */
};

// <06D104FE> src/contact_solver.cpp:709
// member variables: 3
// struct size: 48
struct b3SymMatrix2W {
	b3FloatW cxx; /* 0 16 */
	b3FloatW cxy; /* 16 16 */
	b3FloatW cyy; /* 32 16 */
};

// <06D1053D> src/contact_solver.cpp:715
// member variables: 6
// struct size: 96
struct b3SymMatrix3W {
	b3FloatW cxx; /* 0 16 */
	b3FloatW cxy; /* 16 16 */
	b3FloatW cxz; /* 32 16 */
	b3FloatW cyy; /* 48 16 */
	b3FloatW cyz; /* 64 16 */
	b3FloatW czz; /* 80 16 */
};

// <06D262ED> src/contact_solver.cpp:875
inline b3FloatW b3ZeroW(void)
{
} /* size: 0 */

// <06D262CD> src/contact_solver.cpp:880
inline b3FloatW b3SplatW(float scalar)
{
} /* size: 0 */

// <06D262A2> src/contact_solver.cpp:885
// variable: 1
inline b3FloatW b3NegW(b3FloatW a)
{
	__m128 mask; // 888
} /* size: 0, variables: 1 */

// <06D26263> src/contact_solver.cpp:894
inline b3FloatW b3SetW(float a, float b, float c, float d)
{
} /* size: 0 */

// <06D2623A> src/contact_solver.cpp:899
inline b3FloatW b3AddW(b3FloatW a, b3FloatW b)
{
} /* size: 0 */

// <06D26211> src/contact_solver.cpp:904
inline b3FloatW b3SubW(b3FloatW a, b3FloatW b)
{
} /* size: 0 */

// <06D261E8> src/contact_solver.cpp:909
inline b3FloatW b3MulW(b3FloatW a, b3FloatW b)
{
} /* size: 0 */

// <06D261BF> src/contact_solver.cpp:914
inline b3FloatW b3DivW(b3FloatW a, b3FloatW b)
{
} /* size: 0 */

// <06D261A1> src/contact_solver.cpp:919
inline b3FloatW b3SqrtW(b3FloatW a)
{
} /* size: 0 */

// <06D2616D> src/contact_solver.cpp:924
inline b3FloatW b3MulAddW(b3FloatW a, b3FloatW b, b3FloatW c)
{
} /* size: 0 */

// <06D26144> src/contact_solver.cpp:934
inline b3FloatW b3MinW(b3FloatW a, b3FloatW b)
{
} /* size: 0 */

// <06D2611B> src/contact_solver.cpp:939
inline b3FloatW b3MaxW(b3FloatW a, b3FloatW b)
{
} /* size: 0 */

// <06D260DB> src/contact_solver.cpp:945
// variables: 2
inline b3FloatW b3SymClampW(b3FloatW a, b3FloatW b)
{
	b3FloatW nb; // 947
	b3FloatW c; // 948
} /* size: 0, variables: 2 */

// <06D260B2> src/contact_solver.cpp:952
inline b3FloatW b3OrW(b3FloatW a, b3FloatW b)
{
} /* size: 0 */

// <06D26089> src/contact_solver.cpp:957
inline b3FloatW b3GreaterThanW(b3FloatW a, b3FloatW b)
{
} /* size: 0 */

// <06D26060> src/contact_solver.cpp:962
inline b3FloatW b3EqualsW(b3FloatW a, b3FloatW b)
{
} /* size: 0 */

// <06D2601B> src/contact_solver.cpp:967
// variables: 3
inline bool b3AllZeroW(b3FloatW a)
{
	b3FloatW zero; // 970
	b3FloatW cmp; // 971
	int mask; // 974
} /* size: 0, variables: 3 */

// <06D25FE5> src/contact_solver.cpp:981
inline b3FloatW b3BlendW(b3FloatW a, b3FloatW b, b3FloatW mask)
{
} /* size: 0 */

// <06D25FBC> src/contact_solver.cpp:1142
inline b3Vec3W b3MulSVW(b3FloatW s, b3Vec3W a)
{
} /* size: 0 */

// <06D25F88> src/contact_solver.cpp:1148
inline b3Vec3W b3MulSubSVW(b3Vec3W a, b3FloatW s, b3Vec3W b)
{
} /* size: 0 */

// <06D25F54> src/contact_solver.cpp:1154
inline b3Vec3W b3MulAddSVW(b3Vec3W a, b3FloatW s, b3Vec3W b)
{
} /* size: 0 */

// <06D25F2B> src/contact_solver.cpp:1160
inline b3Vec2W b3AddV2W(b3Vec2W a, b3Vec2W b)
{
} /* size: 0 */

// <06D25F02> src/contact_solver.cpp:1169
inline b3Vec3W b3SubVW(b3Vec3W a, b3Vec3W b)
{
} /* size: 0 */

// <06D25ED9> src/contact_solver.cpp:1179
inline b3Vec3W b3AddVW(b3Vec3W a, b3Vec3W b)
{
} /* size: 0 */

// <06D25EA5> src/contact_solver.cpp:1189
// variable: 1
inline b3Vec2W b3MulMV2W(b3SymMatrix2W m, b3Vec2W a)
{
	b3Vec2W b; // 1191
} /* size: 0, variables: 1 */

// <06D25E71> src/contact_solver.cpp:1200
// variable: 1
inline b3Vec3W b3MulMVW(b3SymMatrix3W m, b3Vec3W a)
{
	b3Vec3W b; // 1202
} /* size: 0, variables: 1 */

// <06D25E32> src/contact_solver.cpp:1212
// variable: 1
inline b3Vec3W b3MulSubMVW(b3Vec3W a, b3SymMatrix3W m, b3Vec3W b)
{
	b3Vec3W c; // 1214
} /* size: 0, variables: 1 */

// <06D25DF3> src/contact_solver.cpp:1224
// variable: 1
inline b3Vec3W b3MulAddMVW(b3Vec3W a, b3SymMatrix3W m, b3Vec3W b)
{
	b3Vec3W c; // 1226
} /* size: 0, variables: 1 */

// <06D25DCA> src/contact_solver.cpp:1235
inline b3FloatW b3DotW(b3Vec3W a, b3Vec3W b)
{
} /* size: 0 */

// <06D25D96> src/contact_solver.cpp:1240
// variable: 1
inline b3Vec3W b3CrossW(b3Vec3W a, b3Vec3W b)
{
	b3Vec3W c; // 1242
} /* size: 0, variables: 1 */

// <06D25D31> src/contact_solver.cpp:1249
// variables: 5
inline b3Vec3W b3RotateVectorW(b3QuatW q, b3Vec3W a)
{
	b3Vec3W t1; // 1251
	b3Vec3W t2; // 1252
	b3Vec3W t3; // 1256
	b3FloatW two; // 1257
	b3Vec3W b; // 1258
} /* size: 0, variables: 5 */

// <06D08008> src/contact_solver.cpp:1270
// member variables: 34
// struct size: 1,680
struct b3ContactConstraintSIMD {
	int indexBase1A[4]; /* 0 16 */
	int indexBase1B[4]; /* 16 16 */
	b3FloatW invMassA; /* 32 16 */
	b3FloatW invMassB; /* 48 16 */
	b3SymMatrix3W invIA; /* 64 96 */
	b3SymMatrix3W invIB; /* 160 96 */
	b3Vec3W normal; /* 256 48 */
	b3Vec3W tangent1; /* 304 48 */
	b3Vec3W tangent2; /* 352 48 */
	b3Vec3W originA; /* 400 48 */
	b3Vec3W originB; /* 448 48 */
	b3FloatW twistMass; /* 496 16 */
	b3FloatW twistImpulse; /* 512 16 */
	b3SymMatrix2W tangentMass; /* 528 48 */
	b3Vec2W frictionImpulse; /* 576 32 */
	b3SymMatrix3W rollingMass; /* 608 96 */
	b3Vec3W rollingImpulse; /* 704 48 */
	b3FloatW friction; /* 752 16 */
	b3FloatW rollingResistance; /* 768 16 */
	b3FloatW tangentVelocity1; /* 784 16 */
	b3FloatW tangentVelocity2; /* 800 16 */
	b3FloatW biasRate; /* 816 16 */
	b3FloatW massScale; /* 832 16 */
	b3FloatW impulseScale; /* 848 16 */
	b3Vec3W anchorAs[4]; /* 864 192 */
	b3Vec3W anchorBs[4]; /* 1056 192 */
	b3FloatW baseSeparations[4]; /* 1248 64 */
	b3FloatW normalImpulses[4]; /* 1312 64 */
	b3FloatW totalNormalImpulses[4]; /* 1376 64 */
	b3FloatW normalMasses[4]; /* 1440 64 */
	b3FloatW leverArms[4]; /* 1504 64 */
	b3FloatW restitution; /* 1568 16 */
	b3FloatW relativeVelocities[4]; /* 1584 64 */
	b3Manifold * manifolds[4]; /* 1648 32 */
};

// <06D105FE> src/contact_solver.cpp:1320
// member variables: 4
// struct size: 208
struct b3BodyStateW {
	b3Vec3W v; /* 0 48 */
	b3Vec3W w; /* 48 48 */
	b3Vec3W dp; /* 96 48 */
	b3QuatW dq; /* 144 64 */
};

// <06D257C2> src/contact_solver.cpp:1330
// variables: 6
// function calls: 26
b3BodyStateW b3GatherBodies(const b3BodyState* states, int* indices)
{
	b3BodyState dummy; // 1332
	b3BodyState b1; // 1336
	b3BodyState b2; // 1337
	b3BodyState b3; // 1338
	b3BodyState b4; // 1339
	b3BodyStateW s; // 1341
	_mm_setr_ps(float __Z,
			float __Y,
			float __X,
			float __W);  // 896
	b3SetW(float a,
		float b,
		float c,
		float d);  // 1342
	_mm_setr_ps(float __Z,
			float __Y,
			float __X,
			float __W);  // 896
	b3SetW(float a,
		float b,
		float c,
		float d);  // 1354
	_mm_setr_ps(float __Z,
			float __Y,
			float __X,
			float __W);  // 896
	b3SetW(float a,
		float b,
		float c,
		float d);  // 1355
	_mm_setr_ps(float __Z,
			float __Y,
			float __X,
			float __W);  // 896
	b3SetW(float a,
		float b,
		float c,
		float d);  // 1343
	_mm_setr_ps(float __Z,
			float __Y,
			float __X,
			float __W);  // 896
	b3SetW(float a,
		float b,
		float c,
		float d);  // 1344
	_mm_setr_ps(float __Z,
			float __Y,
			float __X,
			float __W);  // 896
	b3SetW(float a,
		float b,
		float c,
		float d);  // 1346
	_mm_setr_ps(float __Z,
			float __Y,
			float __X,
			float __W);  // 896
	b3SetW(float a,
		float b,
		float c,
		float d);  // 1347
	_mm_setr_ps(float __Z,
			float __Y,
			float __X,
			float __W);  // 896
	b3SetW(float a,
		float b,
		float c,
		float d);  // 1348
	_mm_setr_ps(float __Z,
			float __Y,
			float __X,
			float __W);  // 896
	b3SetW(float a,
		float b,
		float c,
		float d);  // 1350
	_mm_setr_ps(float __Z,
			float __Y,
			float __X,
			float __W);  // 896
	b3SetW(float a,
		float b,
		float c,
		float d);  // 1356
	_mm_setr_ps(float __Z,
			float __Y,
			float __X,
			float __W);  // 896
	b3SetW(float a,
		float b,
		float c,
		float d);  // 1351
	_mm_setr_ps(float __Z,
			float __Y,
			float __X,
			float __W);  // 896
	b3SetW(float a,
		float b,
		float c,
		float d);  // 1352
	_mm_setr_ps(float __Z,
			float __Y,
			float __X,
			float __W);  // 896
	b3SetW(float a,
		float b,
		float c,
		float d);  // 1357
} /* size: 1298, variables: 6, inline expansions: 26 (676 bytes) */

// <06D25563> src/contact_solver.cpp:1362
// variables: 22
void b3ScatterBodies(b3BodyState* states, int* indices, const b3BodyStateW* simdBody)
{
	const float* vx; // 1364
	const float* vy; // 1365
	const float* vz; // 1366
	const float* wx; // 1367
	const float* wy; // 1368
	const float* wz; // 1369
	{
		b3BodyState* s; // 1378
		b3Vec3 v; // 1380
		b3Vec3 w; // 1381
		uint32_t flags; // 1383
	}
	{
		b3BodyState* s; // 1400
		b3Vec3 v; // 1402
		b3Vec3 w; // 1403
		uint32_t flags; // 1405
	}
	{
		b3BodyState* s; // 1422
		b3Vec3 v; // 1424
		b3Vec3 w; // 1425
		uint32_t flags; // 1427
	}
	{
		b3BodyState* s; // 1444
		b3Vec3 v; // 1446
		b3Vec3 w; // 1447
		uint32_t flags; // 1449
	}
} /* size: 577, variables: 6 */

