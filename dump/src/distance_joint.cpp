
//
// src/distance_joint.cpp
//
//	referenced by: libengine2.so
//
//	functions: 17
//

// <06B52DF6> src/distance_joint.cpp:38
// variables: 2
void b3DistanceJoint_EnableLimit(b3JointId jointId, bool enableLimit)
{
	b3JointSim* base; // 40
	b3DistanceJoint* joint; // 41
} /* size: 0, variables: 2 */

// <06B52D94> src/distance_joint.cpp:45
// variable: 1
bool b3DistanceJoint_IsLimitEnabled(b3JointId jointId)
{
	b3JointSim* joint; // 47
} /* size: 0, variables: 1 */

// <06B526E1> src/distance_joint.cpp:79
// variables: 8
// function calls: 17
float b3DistanceJoint_GetCurrentLength(b3JointId jointId)
{
	b3JointSim* base; // 81
	b3World* world; // 83
	b3Transform transformA; // 89
	b3Transform transformB; // 90
	b3Vec3 pA; // 92
	b3Vec3 pB; // 93
	b3Vec3 d; // 94
	float length; // 95
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 566
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 567
	b3TransformPoint(b3Transform t,
			b3Vec3 v);  // 92
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 566
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 567
	b3TransformPoint(b3Transform t,
			b3Vec3 v);  // 93
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 94
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 220
	b3Length(b3Vec3 v); // 95
} /* size: 0, variables: 8, inline expansions: 17 (0 bytes) */

// <06B5266F> src/distance_joint.cpp:99
// variable: 1
void b3DistanceJoint_EnableSpring(b3JointId jointId, bool enableSpring)
{
	b3JointSim* base; // 101
} /* size: 0, variables: 1 */

// <06B5260D> src/distance_joint.cpp:105
// variable: 1
bool b3DistanceJoint_IsSpringEnabled(b3JointId jointId)
{
	b3JointSim* base; // 107
} /* size: 0, variables: 1 */

// <06B52299> src/distance_joint.cpp:153
// variable: 1
void b3DistanceJoint_EnableMotor(b3JointId jointId, bool enableMotor)
{
	b3JointSim* joint; // 155
} /* size: 0, variables: 1 */

// <06B52237> src/distance_joint.cpp:163
// variable: 1
bool b3DistanceJoint_IsMotorEnabled(b3JointId jointId)
{
	b3JointSim* joint; // 165
} /* size: 0, variables: 1 */

// <06B521C5> src/distance_joint.cpp:169
// variable: 1
void b3DistanceJoint_SetMotorSpeed(b3JointId jointId, float motorSpeed)
{
	b3JointSim* joint; // 171
} /* size: 0, variables: 1 */

// <06B52163> src/distance_joint.cpp:175
// variable: 1
float b3DistanceJoint_GetMotorSpeed(b3JointId jointId)
{
	b3JointSim* joint; // 177
} /* size: 0, variables: 1 */

// <06B520E0> src/distance_joint.cpp:181
// variables: 2
float b3DistanceJoint_GetMotorForce(b3JointId jointId)
{
	b3World* world; // 183
	b3JointSim* base; // 184
} /* size: 0, variables: 2 */

// <06B5206E> src/distance_joint.cpp:188
// variable: 1
void b3DistanceJoint_SetMaxMotorForce(b3JointId jointId, float force)
{
	b3JointSim* joint; // 190
} /* size: 0, variables: 1 */

// <06B5200C> src/distance_joint.cpp:194
// variable: 1
float b3DistanceJoint_GetMaxMotorForce(b3JointId jointId)
{
	b3JointSim* joint; // 196
} /* size: 0, variables: 1 */

// <06B51B51> src/distance_joint.cpp:200
// variables: 10
// function calls: 17
b3Vec3 b3GetDistanceJointForce(b3World* world, b3JointSim* base)
{
	b3DistanceJoint* joint; // 202
	b3Transform transformA; // 204
	b3Transform transformB; // 205
	b3Vec3 pA; // 207
	b3Vec3 pB; // 208
	b3Vec3 d; // 209
	b3Vec3 axis; // 210
	float force; // 211
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 566
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 567
	b3TransformPoint(b3Transform t,
			b3Vec3 v);  // 207
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 566
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 567
	b3TransformPoint(b3Transform t,
			b3Vec3 v);  // 208
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 209
	{
		float s; // 247
		b3Vec3 u; // 248
	}
	b3Normalize(b3Vec3 a); // 210
	b3MulSV(float s,
		b3Vec3 a);  // 212
} /* size: 831, variables: 8, inline expansions: 17 (1630 bytes) */

// <06B51120> src/distance_joint.cpp:230
// variables: 25
// function calls: 30
void b3PrepareDistanceJoint(b3JointSim* base, b3StepContext* context)
{
	int idA; // 235
	int idB; // 236
	b3World* world; // 238
	b3Body* bodyA; // 239
	b3Body* bodyB; // 240
	b3SolverSet* setA; // 244
	b3SolverSet* setB; // 245
	int localIndexA; // 247
	int localIndexB; // 248
	b3BodySim* bodySimA; // 250
	b3BodySim* bodySimB; // 251
	float mA; // 253
	b3Matrix3 iA; // 254
	float mB; // 255
	b3Matrix3 iB; // 256
	b3DistanceJoint* joint; // 263
	b3Vec3 rA; // 273
	b3Vec3 rB; // 274
	b3Vec3 separation; // 275
	b3Vec3 axis; // 276
	b3Vec3 crA; // 279
	b3Vec3 crB; // 280
	float k; // 281
	b3Array<b3Body>::Get(
		int index);  // 239
	b3Array<b3Body>::Get(
		int index);  // 240
	b3Array<b3SolverSet>::Get(
		int index);  // 244
	b3Array<b3SolverSet>::Get(
		int index);  // 245
	b3Array<b3BodySim>::Get(
		int index);  // 250
	b3Array<b3BodySim>::Get(
		int index);  // 251
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 269
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 269
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 270
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 270
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 275
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 271
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 275
	{
		float s; // 247
		b3Vec3 u; // 248
	}
	b3Normalize(b3Vec3 a); // 276
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 279
	b3MulMV(b3Matrix3 m,
		b3Vec3 a);  // 281
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 280
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 281
	b3MulMV(b3Matrix3 m,
		b3Vec3 a);  // 281
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 281
	b3MakeSoft(float hertz,
			float zeta,
			float h);  // 176
	b3MakeSoft(float hertz,
			float zeta,
			float h);  // 284
} /* size: 0, variables: 23, inline expansions: 30 (2085 bytes) */

// <06B50978> src/distance_joint.cpp:295
// variables: 17
// function calls: 28
void b3WarmStartDistanceJoint(b3JointSim* base, b3StepContext* context)
{
	float mA; // 299
	float mB; // 300
	b3Matrix3 iA; // 301
	b3Matrix3 iB; // 302
	b3BodyState dummyState; // 305
	b3DistanceJoint* joint; // 307
	b3BodyState* stateA; // 308
	b3BodyState* stateB; // 309
	b3Vec3 rA; // 311
	b3Vec3 rB; // 312
	b3Vec3 ds; // 314
	b3Vec3 separation; // 315
	b3Vec3 axis; // 316
	float axialImpulse; // 318
	b3Vec3 P; // 319
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 311
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 312
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 314
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 314
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 314
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 315
	{
		float s; // 247
		b3Vec3 u; // 248
	}
	b3Normalize(b3Vec3 a); // 316
	b3MulSV(float s,
		b3Vec3 a);  // 319
	b3MulSub(b3Vec3 a,
		float s,
		b3Vec3 b);  // 323
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 324
	b3MulMV(b3Matrix3 m,
		b3Vec3 a);  // 1026
	operator*(b3Matrix3 m,
			b3Vec3 v);  // 324
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 984
	operator-=(b3Vec3& a,
			b3Vec3 b);  // 324
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 329
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 330
	b3MulMV(b3Matrix3 m,
		b3Vec3 a);  // 1026
	operator*(b3Matrix3 m,
			b3Vec3 v);  // 330
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 978
	operator+=(b3Vec3& a,
			b3Vec3 b);  // 330
} /* size: 0, variables: 15, inline expansions: 28 (1677 bytes) */

// <06B4EDFA> src/distance_joint.cpp:334
// variables: 61
// function calls: 114
void b3SolveDistanceJoint(b3JointSim* base, b3StepContext* context, bool useBias)
{
	float mA; // 338
	float mB; // 339
	b3Matrix3 iA; // 340
	b3Matrix3 iB; // 341
	b3BodyState dummyState; // 344
	b3DistanceJoint* joint; // 346
	b3BodyState* stateA; // 347
	b3BodyState* stateB; // 348
	b3Vec3 vA; // 350
	b3Vec3 wA; // 351
	b3Vec3 vB; // 352
	b3Vec3 wB; // 353
	b3Vec3 rA; // 356
	b3Vec3 rB; // 357
	b3Vec3 ds; // 360
	b3Vec3 separation; // 361
	float length; // 363
	b3Vec3 axis; // 364
	{
		b3Vec3 vr; // 375
		float Cdot; // 376
		float C; // 377
		float bias; // 378
		float m; // 380
		float oldImpulse; // 381
		float impulse; // 382
		float h; // 383
		b3Vec3 P; // 387
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 375
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 375
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 375
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 375
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 375
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 376
		b3ClampFloat(float a,
				float lower,
				float upper);  // 384
		b3MulSV(float s,
			b3Vec3 a);  // 387
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 389
		b3MulSub(b3Vec3 a,
			float s,
			b3Vec3 b);  // 388
		b3MulMV(b3Matrix3 m,
			b3Vec3 a);  // 1026
		operator*(b3Matrix3 m,
				b3Vec3 v);  // 389
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 984
		operator-=(b3Vec3& a,
				b3Vec3 b);  // 389
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 391
		b3MulMV(b3Matrix3 m,
			b3Vec3 a);  // 1026
		operator*(b3Matrix3 m,
				b3Vec3 v);  // 391
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 390
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 978
		operator+=(b3Vec3& a,
				b3Vec3 b);  // 391
	}
	{
		b3Vec3 vr; // 398
		float Cdot; // 399
		float C; // 401
		float bias; // 403
		float massCoeff; // 404
		float impulseCoeff; // 405
		float impulse; // 418
		float newImpulse; // 419
		b3Vec3 P; // 423
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 398
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 398
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 398
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 398
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 398
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 399
		b3MulSV(float s,
			b3Vec3 a);  // 423
		b3MulMV(b3Matrix3 m,
			b3Vec3 a);  // 1026
		operator*(b3Matrix3 m,
				b3Vec3 v);  // 425
		b3MulSub(b3Vec3 a,
			float s,
			b3Vec3 b);  // 424
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 425
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 427
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 984
		operator-=(b3Vec3& a,
				b3Vec3 b);  // 425
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 426
		b3MulMV(b3Matrix3 m,
			b3Vec3 a);  // 1026
		operator*(b3Matrix3 m,
				b3Vec3 v);  // 427
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 978
		operator+=(b3Vec3& a,
				b3Vec3 b);  // 427
	}
	{
		b3Vec3 vr; // 432
		float Cdot; // 433
		float C; // 435
		float bias; // 437
		float massScale; // 438
		float impulseScale; // 439
		float impulse; // 452
		float newImpulse; // 453
		b3Vec3 P; // 457
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 432
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 432
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 432
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 432
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 432
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 433
		b3MulSub(b3Vec3 a,
			float s,
			b3Vec3 b);  // 458
		b3MulSV(float s,
			b3Vec3 a);  // 457
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 459
		b3MulMV(b3Matrix3 m,
			b3Vec3 a);  // 1026
		operator*(b3Matrix3 m,
				b3Vec3 v);  // 459
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 461
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 984
		operator-=(b3Vec3& a,
				b3Vec3 b);  // 459
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 460
		b3MulMV(b3Matrix3 m,
			b3Vec3 a);  // 1026
		operator*(b3Matrix3 m,
				b3Vec3 v);  // 461
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 978
		operator+=(b3Vec3& a,
				b3Vec3 b);  // 461
	}
	{
		b3Vec3 vr; // 467
		float Cdot; // 468
		float impulse; // 469
		float oldImpulse; // 470
		float maxImpulse; // 471
		b3Vec3 P; // 475
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 467
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 467
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 467
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 467
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 467
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 468
		b3ClampFloat(float a,
				float lower,
				float upper);  // 472
		b3MulSV(float s,
			b3Vec3 a);  // 475
		b3MulMV(b3Matrix3 m,
			b3Vec3 a);  // 1026
		operator*(b3Matrix3 m,
				b3Vec3 v);  // 477
		b3MulSub(b3Vec3 a,
			float s,
			b3Vec3 b);  // 476
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 477
		b3MulMV(b3Matrix3 m,
			b3Vec3 a);  // 1026
		operator*(b3Matrix3 m,
				b3Vec3 v);  // 479
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 984
		operator-=(b3Vec3& a,
				b3Vec3 b);  // 477
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 478
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 479
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 978
		operator+=(b3Vec3& a,
				b3Vec3 b);  // 479
	}
	{
		b3Vec3 vr; // 485
		float Cdot; // 486
		float C; // 488
		float bias; // 490
		float massScale; // 491
		float impulseScale; // 492
		float impulse; // 500
		b3Vec3 P; // 503
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 485
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 485
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 485
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 485
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 485
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 486
		b3MulMV(b3Matrix3 m,
			b3Vec3 a);  // 1026
		operator*(b3Matrix3 m,
				b3Vec3 v);  // 505
		b3MulSV(float s,
			b3Vec3 a);  // 503
		b3MulSub(b3Vec3 a,
			float s,
			b3Vec3 b);  // 504
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 505
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 984
		operator-=(b3Vec3& a,
				b3Vec3 b);  // 505
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 507
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 506
		b3MulMV(b3Matrix3 m,
			b3Vec3 a);  // 1026
		operator*(b3Matrix3 m,
				b3Vec3 v);  // 507
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 978
		operator+=(b3Vec3& a,
				b3Vec3 b);  // 507
	}
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 356
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 357
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 360
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 360
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 360
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 361
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 220
	b3Length(b3Vec3 v); // 363
	{
		float s; // 247
		b3Vec3 u; // 248
	}
	b3Normalize(b3Vec3 a); // 364
} /* size: 0, variables: 18, inline expansions: 17 (1125 bytes) */

// <06B4E7D1> src/distance_joint.cpp:544
// variables: 9
// function calls: 19
void b3DrawDistanceJoint(b3DebugDraw* draw, b3JointSim* base, b3Transform transformA, b3Transform transformB)
{
	b3DistanceJoint* joint; // 548
	b3Vec3 pA; // 550
	b3Vec3 pB; // 551
	b3Vec3 axis; // 553
	{
		b3Vec3 pMin; // 557
		b3Vec3 pMax; // 558
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 557
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 558
	}
	{
		b3Vec3 pRest; // 582
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 582
	}
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 566
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 567
	b3TransformPoint(b3Transform t,
			b3Vec3 v);  // 550
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 566
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 567
	b3TransformPoint(b3Transform t,
			b3Vec3 v);  // 551
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 553
	{
		float s; // 247
		b3Vec3 u; // 248
	}
	b3Normalize(b3Vec3 a); // 553
} /* size: 0, variables: 4, inline expansions: 16 (1661 bytes) */

