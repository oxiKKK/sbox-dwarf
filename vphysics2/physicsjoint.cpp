
//
// vphysics2/physicsjoint.cpp
//
//	referenced by: libengine2.so
//
//	functions: 123
//

// <00C659EC> vphysics2/physicsjoint.cpp:11
// function calls: 3
void CPhysicsJoint::CPhysicsJoint(b3JointId id)
{
	{
		{
		}
	}
	{
		IPhysicsJoint::IPhysicsJoint(); // 11
		CManagedHandle::CManagedHandle(); // 11
		CUtlString::CUtlString(); // 11
		{
		}
	}
} /* size: 0 */

// <00C659A3> vphysics2/physicsjoint.cpp:11
// variables: 2
void CPhysicsJoint::CPhysicsJoint(b3JointId id)
{
	const char   __FUNCTION__; // 47750
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 13
	}
} /* size: 0, variables: 1 */

// <00C658DE> vphysics2/physicsjoint.cpp:22
// function calls: 2
void CPhysicsJoint::~CPhysicsJoint()
{
	CUtlString::~CUtlString(); // 25
	CManagedHandle::~CManagedHandle(); // 25
} /* size: 63, inline expansions: 2 (21 bytes) */

// <00C65799> vphysics2/physicsjoint.cpp:22
// function calls: 4
void CPhysicsJoint::~CPhysicsJoint()
{
	CUtlString::~CUtlString(); // 25
	CManagedHandle::~CManagedHandle(); // 25
	IPhysicsJoint::~IPhysicsJoint(); // 25
	CPhysicsJoint::~CPhysicsJoint(); // 25
} /* size: 76, inline expansions: 4 (66 bytes) */

// <00C65780> vphysics2/physicsjoint.cpp:22
void CPhysicsJoint::~CPhysicsJoint()
{
} /* size: 0 */

// <00C655AE> vphysics2/physicsjoint.cpp:27
void CPhysicsJoint::InitManagedHandle()
{
} /* size: 433 */

// <00C6556C> vphysics2/physicsjoint.cpp:44
void CPhysicsJoint::GetType()
{
} /* size: 43 */

// <00C6551C> vphysics2/physicsjoint.cpp:60
void CPhysicsJoint::GetWorld()
{
} /* size: 25 */

// <00C654CC> vphysics2/physicsjoint.cpp:65
void CPhysicsJoint::GetBody1()
{
} /* size: 26 */

// <00C6547C> vphysics2/physicsjoint.cpp:70
void CPhysicsJoint::GetBody2()
{
} /* size: 26 */

// <00C6541A> vphysics2/physicsjoint.cpp:75
void CPhysicsJoint::SetEnableCollision(bool bEnabled)
{
} /* size: 17 */

// <00C653D8> vphysics2/physicsjoint.cpp:80
void CPhysicsJoint::IsCollisionEnabled()
{
} /* size: 13 */

// <00C6533F> vphysics2/physicsjoint.cpp:85
// function call: 1
void CPhysicsJoint::SetDebugName(const char* pName)
{
	CUtlString::operator=(
			const char* src);  // 87
} /* size: 13, inline expansions: 1 (5 bytes) */

// <00C652B1> vphysics2/physicsjoint.cpp:90
// function calls: 2
void CPhysicsJoint::GetDebugName()
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 92
} /* size: 23, inline expansions: 2 (36 bytes) */

// <00C651CD> vphysics2/physicsjoint.cpp:95
void CPhysicsJoint::SetLinearSpring(Vector vec)
{
} /* size: 166 */

// <00C7744A> vphysics2/physicsjoint.cpp:110
// function calls: 3
void CPhysicsJoint::GetLinearSpring()
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 118
	CPhysicsJoint::GetLinearSpring(); // 110
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 114
} /* size: 188, inline expansions: 3 (53 bytes) */

// <00C651B4> vphysics2/physicsjoint.cpp:110
void CPhysicsJoint::GetLinearSpring()
{
} /* size: 0 */

// <00C768F3> vphysics2/physicsjoint.cpp:124
// variables: 6
// function call: 1
void CPhysicsJoint::SetMinLength(float vec)
{
	{
		float min; // 128
		float max; // 129
	}
	{
		float min; // 134
		float max; // 135
	}
	{
		float min; // 149
		float max; // 150
	}
	CPhysicsJoint::SetMinLength(
			float vec);  // 124
} /* size: 397, inline expansions: 1 (257 bytes) */

// <00C65112> vphysics2/physicsjoint.cpp:124
// variables: 6
void CPhysicsJoint::SetMinLength(float vec)
{
	{
		float min; // 128
		float max; // 129
	}
	{
		float min; // 134
		float max; // 135
	}
	{
		float min; // 149
		float max; // 150
	}
} /* size: 0 */

// <00C76B56> vphysics2/physicsjoint.cpp:164
// function call: 1
void CPhysicsJoint::GetMinLength()
{
	CPhysicsJoint::GetMinLength(); // 164
} /* size: 118, inline expansions: 1 (19 bytes) */

// <00C650F9> vphysics2/physicsjoint.cpp:164
void CPhysicsJoint::GetMinLength()
{
} /* size: 0 */

// <00C76C00> vphysics2/physicsjoint.cpp:182
// variables: 6
// function call: 1
void CPhysicsJoint::SetMaxLength(float vec)
{
	{
		float min; // 186
		float max; // 187
	}
	{
		float min; // 192
		float max; // 193
	}
	{
		float min; // 207
		float max; // 208
	}
	CPhysicsJoint::SetMaxLength(
			float vec);  // 182
} /* size: 381, inline expansions: 1 (241 bytes) */

// <00C65057> vphysics2/physicsjoint.cpp:182
// variables: 6
void CPhysicsJoint::SetMaxLength(float vec)
{
	{
		float min; // 186
		float max; // 187
	}
	{
		float min; // 192
		float max; // 193
	}
	{
		float min; // 207
		float max; // 208
	}
} /* size: 0 */

// <00C76849> vphysics2/physicsjoint.cpp:222
// function call: 1
void CPhysicsJoint::GetMaxLength()
{
	CPhysicsJoint::GetMaxLength(); // 222
} /* size: 118, inline expansions: 1 (19 bytes) */

// <00C6503E> vphysics2/physicsjoint.cpp:222
void CPhysicsJoint::GetMaxLength()
{
} /* size: 0 */

// <00C76FE8> vphysics2/physicsjoint.cpp:240
// variables: 2
// function call: 1
void CPhysicsJoint::SetMinForce(float f)
{
	{
		float min; // 244
		float max; // 244
	}
	CPhysicsJoint::SetMinForce(
			float f);  // 240
} /* size: 123, inline expansions: 1 (36 bytes) */

// <00C65001> vphysics2/physicsjoint.cpp:240
// variables: 2
void CPhysicsJoint::SetMinForce(float f)
{
	{
		float min; // 244
		float max; // 244
	}
} /* size: 0 */

// <00C76E63> vphysics2/physicsjoint.cpp:250
// variables: 2
// function call: 1
void CPhysicsJoint::GetMinForce()
{
	{
		float min; // 254
		float max; // 254
	}
	CPhysicsJoint::GetMinForce(); // 250
} /* size: 101, inline expansions: 1 (24 bytes) */

// <00C64FCE> vphysics2/physicsjoint.cpp:250
// variables: 2
void CPhysicsJoint::GetMinForce()
{
	{
		float min; // 254
		float max; // 254
	}
} /* size: 0 */

// <00C770DD> vphysics2/physicsjoint.cpp:262
// variables: 2
// function call: 1
void CPhysicsJoint::SetMaxForce(float f)
{
	{
		float min; // 266
		float max; // 266
	}
	CPhysicsJoint::SetMaxForce(
			float f);  // 262
} /* size: 123, inline expansions: 1 (36 bytes) */

// <00C64F8E> vphysics2/physicsjoint.cpp:262
// variables: 2
void CPhysicsJoint::SetMaxForce(float f)
{
	{
		float min; // 266
		float max; // 266
	}
} /* size: 0 */

// <00C76F25> vphysics2/physicsjoint.cpp:272
// variables: 2
// function call: 1
void CPhysicsJoint::GetMaxForce()
{
	{
		float min; // 276
		float max; // 276
	}
	CPhysicsJoint::GetMaxForce(); // 272
} /* size: 101, inline expansions: 1 (24 bytes) */

// <00C64F59> vphysics2/physicsjoint.cpp:272
// variables: 2
void CPhysicsJoint::GetMaxForce()
{
	{
		float min; // 276
		float max; // 276
	}
} /* size: 0 */

// <00C64E47> vphysics2/physicsjoint.cpp:284
void CPhysicsJoint::SetAngularSpring(Vector vec)
{
} /* size: 197 */

// <00C771D3> vphysics2/physicsjoint.cpp:301
// function call: 1
void CPhysicsJoint::SetAngularMotor(float targetVelocity, float maxTorque)
{
	CPhysicsJoint::SetAngularMotor(
			float targetVelocity,
			float maxTorque);  // 301
} /* size: 117, inline expansions: 1 (53 bytes) */

// <00C64E14> vphysics2/physicsjoint.cpp:301
void CPhysicsJoint::SetAngularMotor(float targetVelocity, float maxTorque)
{
} /* size: 0 */

// <00C77A04> vphysics2/physicsjoint.cpp:312
// function calls: 4
void CPhysicsJoint::SetMotorVelocity(const Vector& velocity, float maxTorque)
{
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 318
	CPhysicsJoint::SetMotorVelocity(
			const Vector& velocity,
			float maxTorque);  // 312
} /* size: 127, inline expansions: 4 (61 bytes) */

// <00C64DE1> vphysics2/physicsjoint.cpp:312
void CPhysicsJoint::SetMotorVelocity(const Vector& velocity, float maxTorque)
{
} /* size: 0 */

// <00C77E29> vphysics2/physicsjoint.cpp:323
// function calls: 2
void CPhysicsJoint::SetTargetRotation(const Quaternion& rotation, float hertz, float damping)
{
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 329
	CPhysicsJoint::SetTargetRotation(
				const Quaternion& rotation,
				float hertz,
				float damping);  // 323
} /* size: 159, inline expansions: 2 (99 bytes) */

// <00C64DA1> vphysics2/physicsjoint.cpp:323
void CPhysicsJoint::SetTargetRotation(const Quaternion& rotation, float hertz, float damping)
{
} /* size: 0 */

// <00C7758C> vphysics2/physicsjoint.cpp:335
// function calls: 3
void CPhysicsJoint::GetAngularSpring()
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 343
	CPhysicsJoint::GetAngularSpring(); // 335
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 339
} /* size: 187, inline expansions: 3 (73 bytes) */

// <00C64D88> vphysics2/physicsjoint.cpp:335
void CPhysicsJoint::GetAngularSpring()
{
} /* size: 0 */

// <00C6457E> vphysics2/physicsjoint.cpp:349
// variables: 25
// function calls: 16
void CPhysicsJoint::SetFriction(float friction)
{
	{
		b3BodyId bodyId; // 353
		float mass; // 354
		float massInv; // 355
		b3Matrix3 inertia; // 356
		b3Vec3 massCenter; // 357
		b3Vec3 worldGravity; // 358
		float gravityScale; // 359
		b3Transform localFrameB; // 360
		float inertiaLever; // 362
		float jointLever; // 363
		float maxTorque; // 364
		b3Trace(b3Matrix3 m); // 362
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 363
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 363
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 364
	}
	{
		b3BodyId bodyId; // 373
		float mass; // 374
		b3Vec3 worldGravity; // 375
		float maxForce; // 376
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 376
	}
	{
		b3BodyId bodyId; // 385
		float mass; // 386
		float massInv; // 387
		b3Matrix3 inertia; // 388
		b3Vec3 massCenter; // 389
		b3Vec3 worldGravity; // 390
		b3Transform localFrameB; // 391
		float inertiaLever; // 393
		float jointLever; // 394
		float maxTorque; // 395
		b3Trace(b3Matrix3 m); // 393
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 394
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 394
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 395
	}
} /* size: 1102 */

// <00C643B1> vphysics2/physicsjoint.cpp:404
// variable: 1
// function calls: 5
void CPhysicsJoint::GetLocalFrameA(Vector& position, Quaternion& rotation)
{
	b3Transform transform; // 406
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 407
	Vector::operator=(
			const Vector& vOther);  // 407
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 21
	B3Cast<Quaternion, b3Quat>(const b3Quat& v); // 408
} /* size: 115, variables: 1, inline expansions: 5 (29 bytes) */

// <00C641E4> vphysics2/physicsjoint.cpp:411
// variable: 1
// function calls: 5
void CPhysicsJoint::GetLocalFrameB(Vector& position, Quaternion& rotation)
{
	b3Transform transform; // 413
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 414
	Vector::operator=(
			const Vector& vOther);  // 414
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 21
	B3Cast<Quaternion, b3Quat>(const b3Quat& v); // 415
} /* size: 115, variables: 1, inline expansions: 5 (29 bytes) */

// <00C6405B> vphysics2/physicsjoint.cpp:418
// function calls: 5
void CPhysicsJoint::SetLocalFrameA(const Vector& position, const Quaternion& rotation)
{
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 420
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 420
} /* size: 106, inline expansions: 5 (23 bytes) */

// <00C63ED2> vphysics2/physicsjoint.cpp:423
// function calls: 5
void CPhysicsJoint::SetLocalFrameB(const Vector& position, const Quaternion& rotation)
{
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 425
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 425
} /* size: 106, inline expansions: 5 (23 bytes) */

// <00C63D0D> vphysics2/physicsjoint.cpp:428
// function calls: 3
void CPhysicsJoint::SetLimit(const char* name, Vector limit)
{
	V_strcmp(const char* s1,
		const char* s2);  // 432
	V_strcmp(const char* s1,
		const char* s2);  // 439
	b3ClampFloat(float a,
			float lower,
			float upper);  // 434
} /* size: 208, inline expansions: 3 (44 bytes) */

// <00C772CD> vphysics2/physicsjoint.cpp:448
// function calls: 3
void CPhysicsJoint::SetLimitEnabled(const char* name, bool state)
{
	V_strcmp(const char* s1,
		const char* s2);  // 452
	V_strcmp(const char* s1,
		const char* s2);  // 459
	CPhysicsJoint::SetLimitEnabled(
			const char* name,
			bool state);  // 448
} /* size: 143, inline expansions: 3 (65 bytes) */

// <00C63CDA> vphysics2/physicsjoint.cpp:448
void CPhysicsJoint::SetLimitEnabled(const char* name, bool state)
{
} /* size: 0 */

// <00C63C8A> vphysics2/physicsjoint.cpp:468
void CPhysicsJoint::GetAngle()
{
} /* size: 62 */

// <00C63BF6> vphysics2/physicsjoint.cpp:478
// function calls: 2
void CPhysicsJoint::GetLinearImpulse()
{
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 220
	b3Length(b3Vec3 v); // 480
} /* size: 65, inline expansions: 2 (57 bytes) */

// <00C63B62> vphysics2/physicsjoint.cpp:483
// function calls: 2
void CPhysicsJoint::GetAngularImpulse()
{
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 220
	b3Length(b3Vec3 v); // 485
} /* size: 65, inline expansions: 2 (57 bytes) */

// <00C63B20> vphysics2/physicsjoint.cpp:488
void CPhysicsJoint::GetMaxLinearImpulse()
{
} /* size: 13 */

// <00C63ADE> vphysics2/physicsjoint.cpp:493
void CPhysicsJoint::GetMaxAngularImpulse()
{
} /* size: 13 */

// <00C63A58> vphysics2/physicsjoint.cpp:498
void CPhysicsJoint::SetMaxLinearImpulse(float flMaxLinearImpulse)
{
} /* size: 42 */

// <00C639D2> vphysics2/physicsjoint.cpp:503
void CPhysicsJoint::SetMaxAngularImpulse(float flMaxAngularImpulse)
{
} /* size: 42 */

// <00C77BA5> vphysics2/physicsjoint.cpp:508
// function calls: 4
void CPhysicsJoint::Motor_SetLinearVelocity(const Vector& velocity)
{
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 512
	CPhysicsJoint::Motor_SetLinearVelocity(
				const Vector& velocity);  // 508
} /* size: 78, inline expansions: 4 (22 bytes) */

// <00C639AC> vphysics2/physicsjoint.cpp:508
void CPhysicsJoint::Motor_SetLinearVelocity(const Vector& velocity)
{
} /* size: 0 */

// <00C77CE7> vphysics2/physicsjoint.cpp:516
// function calls: 4
void CPhysicsJoint::Motor_SetAngularVelocity(const Vector& velocity)
{
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 520
	CPhysicsJoint::Motor_SetAngularVelocity(
				const Vector& velocity);  // 516
} /* size: 78, inline expansions: 4 (22 bytes) */

// <00C63986> vphysics2/physicsjoint.cpp:516
void CPhysicsJoint::Motor_SetAngularVelocity(const Vector& velocity)
{
} /* size: 0 */

// <00C63917> vphysics2/physicsjoint.cpp:524
void CPhysicsJoint::Motor_SetMaxVelocityForce(float maxForce)
{
} /* size: 66 */

// <00C638A8> vphysics2/physicsjoint.cpp:532
void CPhysicsJoint::Motor_SetMaxVelocityTorque(float maxTorque)
{
} /* size: 66 */

// <00C63839> vphysics2/physicsjoint.cpp:540
void CPhysicsJoint::Motor_SetLinearHertz(float hertz)
{
} /* size: 66 */

// <00C637CA> vphysics2/physicsjoint.cpp:548
void CPhysicsJoint::Motor_SetLinearDampingRatio(float damping)
{
} /* size: 66 */

// <00C6375B> vphysics2/physicsjoint.cpp:556
void CPhysicsJoint::Motor_SetAngularHertz(float hertz)
{
} /* size: 66 */

// <00C636EC> vphysics2/physicsjoint.cpp:564
void CPhysicsJoint::Motor_SetAngularDampingRatio(float damping)
{
} /* size: 66 */

// <00C6367D> vphysics2/physicsjoint.cpp:572
void CPhysicsJoint::Motor_SetMaxSpringForce(float maxForce)
{
} /* size: 66 */

// <00C6360E> vphysics2/physicsjoint.cpp:580
void CPhysicsJoint::Motor_SetMaxSpringTorque(float maxTorque)
{
} /* size: 66 */

// <00C777FC> vphysics2/physicsjoint.cpp:588
// function calls: 3
void CPhysicsJoint::Motor_GetLinearVelocity()
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 590
	CPhysicsJoint::Motor_GetLinearVelocity(); // 588
} /* size: 93, inline expansions: 3 (21 bytes) */

// <00C635F5> vphysics2/physicsjoint.cpp:588
void CPhysicsJoint::Motor_GetLinearVelocity()
{
} /* size: 0 */

// <00C77900> vphysics2/physicsjoint.cpp:593
// function calls: 3
void CPhysicsJoint::Motor_GetAngularVelocity()
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 595
	CPhysicsJoint::Motor_GetAngularVelocity(); // 593
} /* size: 93, inline expansions: 3 (21 bytes) */

// <00C635DC> vphysics2/physicsjoint.cpp:593
void CPhysicsJoint::Motor_GetAngularVelocity()
{
} /* size: 0 */

// <00C6358C> vphysics2/physicsjoint.cpp:598
void CPhysicsJoint::Motor_GetMaxVelocityForce()
{
} /* size: 62 */

// <00C6353C> vphysics2/physicsjoint.cpp:603
void CPhysicsJoint::Motor_GetMaxVelocityTorque()
{
} /* size: 62 */

// <00C634EC> vphysics2/physicsjoint.cpp:608
void CPhysicsJoint::Motor_GetLinearHertz()
{
} /* size: 62 */

// <00C6349C> vphysics2/physicsjoint.cpp:613
void CPhysicsJoint::Motor_GetLinearDampingRatio()
{
} /* size: 62 */

// <00C6344C> vphysics2/physicsjoint.cpp:618
void CPhysicsJoint::Motor_GetAngularHertz()
{
} /* size: 62 */

// <00C633FC> vphysics2/physicsjoint.cpp:623
void CPhysicsJoint::Motor_GetAngularDampingRatio()
{
} /* size: 62 */

// <00C633AC> vphysics2/physicsjoint.cpp:628
void CPhysicsJoint::Motor_GetMaxSpringForce()
{
} /* size: 62 */

// <00C632FA> vphysics2/physicsjoint.cpp:638
void CPhysicsJoint::Wheel_EnableSuspension(bool flag)
{
} /* size: 17 */

// <00C632B8> vphysics2/physicsjoint.cpp:643
void CPhysicsJoint::Wheel_IsSuspensionEnabled()
{
} /* size: 13 */

// <00C63257> vphysics2/physicsjoint.cpp:648
void CPhysicsJoint::Wheel_SetSuspensionHertz(float hertz)
{
} /* size: 13 */

// <00C63215> vphysics2/physicsjoint.cpp:653
void CPhysicsJoint::Wheel_GetSuspensionHertz()
{
} /* size: 13 */

// <00C631B4> vphysics2/physicsjoint.cpp:658
void CPhysicsJoint::Wheel_SetSuspensionDampingRatio(float dampingRatio)
{
} /* size: 13 */

// <00C63172> vphysics2/physicsjoint.cpp:663
void CPhysicsJoint::Wheel_GetSuspensionDampingRatio()
{
} /* size: 13 */

// <00C63110> vphysics2/physicsjoint.cpp:668
void CPhysicsJoint::Wheel_EnableSuspensionLimit(bool flag)
{
} /* size: 17 */

// <00C630CE> vphysics2/physicsjoint.cpp:673
void CPhysicsJoint::Wheel_IsSuspensionLimitEnabled()
{
} /* size: 13 */

// <00C6308C> vphysics2/physicsjoint.cpp:678
void CPhysicsJoint::Wheel_GetLowerSuspensionLimit()
{
} /* size: 13 */

// <00C6304A> vphysics2/physicsjoint.cpp:683
void CPhysicsJoint::Wheel_GetUpperSuspensionLimit()
{
} /* size: 13 */

// <00C62FCB> vphysics2/physicsjoint.cpp:688
void CPhysicsJoint::Wheel_SetSuspensionLimits(float lower, float upper)
{
} /* size: 13 */

// <00C62F69> vphysics2/physicsjoint.cpp:693
void CPhysicsJoint::Wheel_EnableSpinMotor(bool flag)
{
} /* size: 17 */

// <00C62F27> vphysics2/physicsjoint.cpp:698
void CPhysicsJoint::Wheel_IsSpinMotorEnabled()
{
} /* size: 13 */

// <00C62EC6> vphysics2/physicsjoint.cpp:703
void CPhysicsJoint::Wheel_SetSpinMotorSpeed(float speed)
{
} /* size: 13 */

// <00C62E84> vphysics2/physicsjoint.cpp:708
void CPhysicsJoint::Wheel_GetSpinMotorSpeed()
{
} /* size: 13 */

// <00C62E23> vphysics2/physicsjoint.cpp:713
void CPhysicsJoint::Wheel_SetMaxSpinTorque(float torque)
{
} /* size: 13 */

// <00C62DE1> vphysics2/physicsjoint.cpp:718
void CPhysicsJoint::Wheel_GetMaxSpinTorque()
{
} /* size: 13 */

// <00C62D7F> vphysics2/physicsjoint.cpp:723
void CPhysicsJoint::Wheel_EnableSteering(bool flag)
{
} /* size: 17 */

// <00C62D3D> vphysics2/physicsjoint.cpp:728
void CPhysicsJoint::Wheel_IsSteeringEnabled()
{
} /* size: 13 */

// <00C62CDC> vphysics2/physicsjoint.cpp:733
void CPhysicsJoint::Wheel_SetSteeringHertz(float hertz)
{
} /* size: 13 */

// <00C62C9A> vphysics2/physicsjoint.cpp:738
void CPhysicsJoint::Wheel_GetSteeringHertz()
{
} /* size: 13 */

// <00C62C39> vphysics2/physicsjoint.cpp:743
void CPhysicsJoint::Wheel_SetSteeringDampingRatio(float dampingRatio)
{
} /* size: 13 */

// <00C62BF7> vphysics2/physicsjoint.cpp:748
void CPhysicsJoint::Wheel_GetSteeringDampingRatio()
{
} /* size: 13 */

// <00C62B96> vphysics2/physicsjoint.cpp:753
void CPhysicsJoint::Wheel_SetMaxSteeringTorque(float torque)
{
} /* size: 13 */

// <00C62B54> vphysics2/physicsjoint.cpp:758
void CPhysicsJoint::Wheel_GetMaxSteeringTorque()
{
} /* size: 13 */

// <00C62AF2> vphysics2/physicsjoint.cpp:763
void CPhysicsJoint::Wheel_EnableSteeringLimit(bool flag)
{
} /* size: 17 */

// <00C62AB0> vphysics2/physicsjoint.cpp:768
void CPhysicsJoint::Wheel_IsSteeringLimitEnabled()
{
} /* size: 13 */

// <00C62A6E> vphysics2/physicsjoint.cpp:773
void CPhysicsJoint::Wheel_GetLowerSteeringLimit()
{
} /* size: 13 */

// <00C62A2C> vphysics2/physicsjoint.cpp:778
void CPhysicsJoint::Wheel_GetUpperSteeringLimit()
{
} /* size: 13 */

// <00C629AD> vphysics2/physicsjoint.cpp:783
void CPhysicsJoint::Wheel_SetSteeringLimits(float lowerRadians, float upperRadians)
{
} /* size: 13 */

// <00C6294C> vphysics2/physicsjoint.cpp:788
void CPhysicsJoint::Wheel_SetTargetSteeringAngle(float radians)
{
} /* size: 13 */

// <00C6290A> vphysics2/physicsjoint.cpp:793
void CPhysicsJoint::Wheel_GetTargetSteeringAngle()
{
} /* size: 13 */

// <00C628C8> vphysics2/physicsjoint.cpp:798
void CPhysicsJoint::Wheel_GetSpinSpeed()
{
} /* size: 13 */

// <00C62886> vphysics2/physicsjoint.cpp:803
void CPhysicsJoint::Wheel_GetSpinTorque()
{
} /* size: 13 */

// <00C62844> vphysics2/physicsjoint.cpp:808
void CPhysicsJoint::Wheel_GetSteeringAngle()
{
} /* size: 13 */

// <00C62802> vphysics2/physicsjoint.cpp:813
void CPhysicsJoint::Wheel_GetSteeringTorque()
{
} /* size: 13 */

// <00C62793> vphysics2/physicsjoint.cpp:818
void CPhysicsJoint::Parallel_SetHertz(float hertz)
{
} /* size: 58 */

// <00C62743> vphysics2/physicsjoint.cpp:824
void CPhysicsJoint::Parallel_GetHertz()
{
} /* size: 62 */

// <00C626D4> vphysics2/physicsjoint.cpp:829
void CPhysicsJoint::Parallel_SetDampingRatio(float dampingRatio)
{
} /* size: 58 */

// <00C62684> vphysics2/physicsjoint.cpp:835
void CPhysicsJoint::Parallel_GetDampingRatio()
{
} /* size: 62 */

// <00C62615> vphysics2/physicsjoint.cpp:840
void CPhysicsJoint::Parallel_SetMaxTorque(float maxTorque)
{
} /* size: 58 */

// <00C625C5> vphysics2/physicsjoint.cpp:846
void CPhysicsJoint::Parallel_GetMaxTorque()
{
} /* size: 62 */

// <00C62597> vphysics2/physicsjoint.cpp:851
void CPhysicsJoint::GetManagedHandle()
{
} /* size: 9 */

