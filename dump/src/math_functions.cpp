
//
// src/math_functions.cpp
//
//	referenced by: libengine2.so
//
//	functions: 9
//

// <06B9BD55> src/math_functions.cpp:99
// function calls: 9
bool b3IsSaneAABB(b3AABB a)
{
	isinf(float __x); // 36
	isinf(float __x); // 36
	isinf(float __x); // 36
	b3IsValidVec3(b3Vec3 a); // 71
	isinf(float __x); // 36
	isinf(float __x); // 36
	isinf(float __x); // 36
	b3IsValidVec3(b3Vec3 a); // 76
	b3IsValidAABB(b3AABB a); // 101
} /* size: 308, inline expansions: 9 (471 bytes) */

// <06B9BB7C> src/math_functions.cpp:119
// function calls: 9
bool b3IsValidPlane(b3Plane a)
{
	isinf(float __x); // 36
	isinf(float __x); // 36
	isinf(float __x); // 36
	b3IsValidVec3(b3Vec3 a); // 121
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 288
	b3AbsFloat(float a); // 289
	b3IsNormalized(b3Vec3 a); // 126
	isinf(float __x); // 21
	b3IsValidFloat(float a); // 131
} /* size: 0, inline expansions: 9 (0 bytes) */

// <06B9AC44> src/math_functions.cpp:311
// variables: 13
// function calls: 26
b3ClosestApproachResult b3ClosestApproachLines(b3Vec3 p1, b3Vec3 d1, b3Vec3 p2, b3Vec3 d2)
{
	b3ClosestApproachResult result; // 313
	float a11; // 316
	float a12; // 317
	float a21; // 318
	float a22; // 319
	b3Vec3 w; // 321
	float b1; // 322
	float b2; // 323
	float det; // 325
	float s1; // 340
	float s2; // 341
	{
		float s1; // 329
		float s2; // 330
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 329
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 329
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 332
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 332
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 334
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 334
	}
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 316
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 317
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 319
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 321
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 322
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 323
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 343
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 343
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 345
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 345
} /* size: 652, variables: 11, inline expansions: 15 (399 bytes) */

// <06B9A3FE> src/math_functions.cpp:351
// variables: 14
// function calls: 32
b3ClosestApproachResult b3ClosestApproachSegments(b3Vec3 p1, b3Vec3 q1, b3Vec3 p2, b3Vec3 q2)
{
	b3ClosestApproachResult result; // 353
	b3Vec3 d1; // 355
	b3Vec3 d2; // 356
	b3Vec3 r; // 357
	float a; // 359
	float b; // 360
	float c; // 361
	float e; // 362
	float f; // 363
	float denom; // 404
	float s1; // 405
	float s2; // 406
	{
		float s2; // 380
		b3ClampFloat(float a,
				float lower,
				float upper);  // 380
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 384
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 384
	}
	{
		float s1; // 393
		b3ClampFloat(float a,
				float lower,
				float upper);  // 393
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 395
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 395
	}
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 355
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 356
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 357
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 359
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 360
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 361
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 362
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 363
	b3ClampFloat(float a,
			float lower,
			float upper);  // 411
	b3ClampFloat(float a,
			float lower,
			float upper);  // 416
	b3ClampFloat(float a,
			float lower,
			float upper);  // 405
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 422
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 420
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 420
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 422
} /* size: 1123, variables: 12, inline expansions: 22 (709 bytes) */

// <06B9A161> src/math_functions.cpp:428
// variables: 4
// function calls: 10
b3Vec3 b3ClosestPointOnSegment(b3Vec3 a, b3Vec3 b, b3Vec3 q)
{
	b3Vec3 ab; // 430
	b3Vec3 aq; // 431
	float alpha; // 433
	{
		float denominator; // 442
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 442
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 452
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 452
	}
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 430
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 431
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 433
} /* size: 182, variables: 3, inline expansions: 5 (135 bytes) */

// <06B9980C> src/math_functions.cpp:457
// variables: 20
// function calls: 38
b3TrianglePoint b3ClosestPointOnTriangle(b3Vec3 a, b3Vec3 b, b3Vec3 c, b3Vec3 q)
{
	b3Vec3 ab; // 460
	b3Vec3 ac; // 461
	b3Vec3 aq; // 462
	float d1; // 464
	float d2; // 465
	b3Vec3 bq; // 472
	float d3; // 474
	float d4; // 475
	float vc; // 482
	b3Vec3 cq; // 490
	float d5; // 492
	float d6; // 493
	float vb; // 500
	float va; // 508
	float t1; // 518
	float t2; // 519
	{
		float t; // 485
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 486
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 486
	}
	{
		float t; // 503
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 504
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 504
	}
	{
		b3Vec3 bc; // 511
		float t; // 513
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 511
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 514
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 514
	}
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 460
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 461
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 462
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 464
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 465
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 472
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 474
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 475
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 490
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 492
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 493
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 521
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 521
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 521
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 521
} /* size: 1133, variables: 16, inline expansions: 24 (736 bytes) */

// <06B993BD> src/math_functions.cpp:524
// variables: 10
// function calls: 14
float b3IntersectSegmentTriangle(b3Vec3 p, b3Vec3 q, b3Vec3 a, b3Vec3 b, b3Vec3 c)
{
	b3Vec3 ab; // 526
	b3Vec3 ac; // 527
	b3Vec3 qp; // 528
	b3Vec3 n; // 529
	float d; // 531
	b3Vec3 ap; // 537
	float t; // 538
	b3Vec3 e; // 544
	float v; // 545
	float w; // 551
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 526
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 527
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 528
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 529
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 531
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 537
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 538
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 544
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 545
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 551
} /* size: 0, variables: 10, inline expansions: 14 (0 bytes) */

// <06B98DE3> src/math_functions.cpp:560
// variables: 19
// function calls: 16
b3MassData b3ComputeMassProperties(int triangleCount, const int* triangles, int vertexCount, const b3Vec3* vertices, float density)
{
	b3MassData out; // 563
	float volume; // 574
	b3Vec3 center; // 575
	float xx; // 577
	float xy; // 578
	float yy; // 579
	float xz; // 580
	float zz; // 581
	float yz; // 582
	b3Matrix3 inertia; // 615
	{
		int triangleIndex; // 584
		{
			int vertexIndex1; // 586
			int vertexIndex2; // 587
			int vertexIndex3; // 588
			b3Vec3 v1; // 590
			b3Vec3 v2; // 591
			b3Vec3 v3; // 592
			float det; // 595
			b3Vec3 v4; // 601
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 1016
			operator+(b3Vec3 a,
					b3Vec3 b);  // 601
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 1016
			operator+(b3Vec3 a,
					b3Vec3 b);  // 601
			b3ScalarTripleProduct(b3Vec3 a,
						b3Vec3 b,
						b3Vec3 c);  // 595
			b3MulSV(float s,
				b3Vec3 a);  // 1001
			operator*(float s,
					b3Vec3 a);  // 602
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 978
			operator+=(b3Vec3& a,
					b3Vec3 b);  // 602
		}
	}
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 627
	b3Steiner(float mass,
			b3Vec3 origin);  // 628
	b3MulSM(float s,
		b3Matrix3 a);  // 1052
	operator*(float s,
			b3Matrix3 a);  // 628
	b3SubMM(b3Matrix3 a,
		b3Matrix3 b);  // 1047
	operator-(b3Matrix3 a,
			b3Matrix3 b);  // 628
} /* size: 0, variables: 10, inline expansions: 7 (0 bytes) */

// <06B987CD> src/math_functions.cpp:682
// variables: 19
// function call: 1
void b3GeneralInverse(float* out, float* m, int n, int lda)
{
	float* prIn; // 684
	float* prOut; // 685
	{
		float* p; // 689
		{
			int k; // 692
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 690
	}
	{
		int i; // 701
		{
			float f; // 703
			float* rowToZero; // 723
			float* invertedRow; // 724
			{
				int s; // 708
				int t; // 715
			}
			{
				int row; // 726
				{
					float factor; // 731
					int k; // 738
				}
			}
		}
	}
	{
		int i; // 760
		{
			float* rowToZero; // 765
			float* invertedRow; // 766
			{
				int row; // 768
				{
					float factor; // 773
					int k; // 780
				}
			}
		}
	}
} /* size: 0, variables: 2 */

