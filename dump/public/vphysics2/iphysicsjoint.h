
//
// public/vphysics2/iphysicsjoint.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	class: 1
//

// <00C65BAC> ../public/vphysics2/iphysicsjoint.h:14
void IPhysicsJoint::IPhysicsJoint()
{
} /* size: 0 */

// <00C65B90> ../public/vphysics2/iphysicsjoint.h:14
inline void IPhysicsJoint::IPhysicsJoint()
{
} /* size: 0 */

// <00AB4CD6> ../public/vphysics2/iphysicsjoint.h:14
// member functions: 206
// member variable: 1
// vtable entries: 100
// class size: 8
class IPhysicsJoint {
	void IPhysicsJoint(IPhysicsJoint* , const IPhysicsJoint& );
	void IPhysicsJoint(IPhysicsJoint* );
	int ()(void) * * _vptr.IPhysicsJoint; /* 0 8 */
	/* ../public/vphysics2/iphysicsjoint.h:18 */
	virtual void ~IPhysicsJoint(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:20 */
	virtual PhysicsJointType_t GetType(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:21 */
	virtual IPhysicsWorld* GetWorld(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:22 */
	virtual IPhysicsBody* GetBody1(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:23 */
	virtual IPhysicsBody* GetBody2(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:25 */
	virtual void GetLocalFrameA(const IPhysicsJoint* , Vector& , Quaternion& );
	/* ../public/vphysics2/iphysicsjoint.h:26 */
	virtual void GetLocalFrameB(const IPhysicsJoint* , Vector& , Quaternion& );
	/* ../public/vphysics2/iphysicsjoint.h:27 */
	virtual void SetLocalFrameA(IPhysicsJoint* , const Vector& , const Quaternion& );
	/* ../public/vphysics2/iphysicsjoint.h:28 */
	virtual void SetLocalFrameB(IPhysicsJoint* , const Vector& , const Quaternion& );
	/* ../public/vphysics2/iphysicsjoint.h:30 */
	virtual void SetEnableCollision(IPhysicsJoint* , bool);
	/* ../public/vphysics2/iphysicsjoint.h:31 */
	virtual bool IsCollisionEnabled(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:33 */
	virtual void SetDebugName(IPhysicsJoint* , const char* );
	/* ../public/vphysics2/iphysicsjoint.h:34 */
	virtual const char* GetDebugName(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:36 */
	virtual const CManagedHandle* GetManagedHandle(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:38 */
	virtual void SetLinearSpring(IPhysicsJoint* , Vector);
	/* ../public/vphysics2/iphysicsjoint.h:39 */
	virtual Vector GetLinearSpring(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:41 */
	virtual void SetAngularSpring(IPhysicsJoint* , Vector);
	/* ../public/vphysics2/iphysicsjoint.h:42 */
	virtual Vector GetAngularSpring(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:44 */
	virtual void SetAngularMotor(IPhysicsJoint* , float, float);
	/* ../public/vphysics2/iphysicsjoint.h:46 */
	virtual void SetMinLength(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:47 */
	virtual float GetMinLength(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:49 */
	virtual void SetMaxLength(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:50 */
	virtual float GetMaxLength(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:52 */
	virtual void SetMinForce(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:53 */
	virtual float GetMinForce(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:55 */
	virtual void SetMaxForce(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:56 */
	virtual float GetMaxForce(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:58 */
	virtual void SetFriction(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:60 */
	virtual void SetLimit(IPhysicsJoint* , const char* , Vector);
	/* ../public/vphysics2/iphysicsjoint.h:61 */
	virtual void SetLimitEnabled(IPhysicsJoint* , const char* , bool);
	/* ../public/vphysics2/iphysicsjoint.h:63 */
	virtual float GetAngle(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:65 */
	virtual float GetLinearImpulse(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:66 */
	virtual float GetAngularImpulse(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:68 */
	virtual float GetMaxLinearImpulse(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:69 */
	virtual float GetMaxAngularImpulse(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:70 */
	virtual void SetMaxLinearImpulse(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:71 */
	virtual void SetMaxAngularImpulse(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:73 */
	virtual void SetMotorVelocity(IPhysicsJoint* , const Vector& , float);
	/* ../public/vphysics2/iphysicsjoint.h:74 */
	virtual void SetTargetRotation(IPhysicsJoint* , const Quaternion& , float, float);
	/* ../public/vphysics2/iphysicsjoint.h:76 */
	virtual void Motor_SetLinearVelocity(IPhysicsJoint* , const Vector& );
	/* ../public/vphysics2/iphysicsjoint.h:77 */
	virtual void Motor_SetAngularVelocity(IPhysicsJoint* , const Vector& );
	/* ../public/vphysics2/iphysicsjoint.h:78 */
	virtual void Motor_SetMaxVelocityForce(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:79 */
	virtual void Motor_SetMaxVelocityTorque(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:80 */
	virtual void Motor_SetLinearHertz(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:81 */
	virtual void Motor_SetLinearDampingRatio(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:82 */
	virtual void Motor_SetAngularHertz(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:83 */
	virtual void Motor_SetAngularDampingRatio(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:84 */
	virtual void Motor_SetMaxSpringForce(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:85 */
	virtual void Motor_SetMaxSpringTorque(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:87 */
	virtual Vector Motor_GetLinearVelocity(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:88 */
	virtual Vector Motor_GetAngularVelocity(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:89 */
	virtual float Motor_GetMaxVelocityForce(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:90 */
	virtual float Motor_GetMaxVelocityTorque(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:91 */
	virtual float Motor_GetLinearHertz(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:92 */
	virtual float Motor_GetLinearDampingRatio(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:93 */
	virtual float Motor_GetAngularHertz(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:94 */
	virtual float Motor_GetAngularDampingRatio(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:95 */
	virtual float Motor_GetMaxSpringForce(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:96 */
	virtual float Motor_GetMaxSpringTorque(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:98 */
	virtual void Wheel_EnableSuspension(IPhysicsJoint* , bool);
	/* ../public/vphysics2/iphysicsjoint.h:99 */
	virtual bool Wheel_IsSuspensionEnabled(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:100 */
	virtual void Wheel_SetSuspensionHertz(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:101 */
	virtual float Wheel_GetSuspensionHertz(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:102 */
	virtual void Wheel_SetSuspensionDampingRatio(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:103 */
	virtual float Wheel_GetSuspensionDampingRatio(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:104 */
	virtual void Wheel_EnableSuspensionLimit(IPhysicsJoint* , bool);
	/* ../public/vphysics2/iphysicsjoint.h:105 */
	virtual bool Wheel_IsSuspensionLimitEnabled(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:106 */
	virtual float Wheel_GetLowerSuspensionLimit(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:107 */
	virtual float Wheel_GetUpperSuspensionLimit(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:108 */
	virtual void Wheel_SetSuspensionLimits(IPhysicsJoint* , float, float);
	/* ../public/vphysics2/iphysicsjoint.h:109 */
	virtual void Wheel_EnableSpinMotor(IPhysicsJoint* , bool);
	/* ../public/vphysics2/iphysicsjoint.h:110 */
	virtual bool Wheel_IsSpinMotorEnabled(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:111 */
	virtual void Wheel_SetSpinMotorSpeed(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:112 */
	virtual float Wheel_GetSpinMotorSpeed(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:113 */
	virtual void Wheel_SetMaxSpinTorque(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:114 */
	virtual float Wheel_GetMaxSpinTorque(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:115 */
	virtual void Wheel_EnableSteering(IPhysicsJoint* , bool);
	/* ../public/vphysics2/iphysicsjoint.h:116 */
	virtual bool Wheel_IsSteeringEnabled(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:117 */
	virtual void Wheel_SetSteeringHertz(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:118 */
	virtual float Wheel_GetSteeringHertz(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:119 */
	virtual void Wheel_SetSteeringDampingRatio(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:120 */
	virtual float Wheel_GetSteeringDampingRatio(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:121 */
	virtual void Wheel_SetMaxSteeringTorque(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:122 */
	virtual float Wheel_GetMaxSteeringTorque(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:123 */
	virtual void Wheel_EnableSteeringLimit(IPhysicsJoint* , bool);
	/* ../public/vphysics2/iphysicsjoint.h:124 */
	virtual bool Wheel_IsSteeringLimitEnabled(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:125 */
	virtual float Wheel_GetLowerSteeringLimit(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:126 */
	virtual float Wheel_GetUpperSteeringLimit(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:127 */
	virtual void Wheel_SetSteeringLimits(IPhysicsJoint* , float, float);
	/* ../public/vphysics2/iphysicsjoint.h:128 */
	virtual void Wheel_SetTargetSteeringAngle(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:129 */
	virtual float Wheel_GetTargetSteeringAngle(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:130 */
	virtual float Wheel_GetSpinSpeed(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:131 */
	virtual float Wheel_GetSpinTorque(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:132 */
	virtual float Wheel_GetSteeringAngle(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:133 */
	virtual float Wheel_GetSteeringTorque(IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:135 */
	virtual void Parallel_SetHertz(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:136 */
	virtual float Parallel_GetHertz(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:137 */
	virtual void Parallel_SetDampingRatio(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:138 */
	virtual float Parallel_GetDampingRatio(const IPhysicsJoint* );
	/* ../public/vphysics2/iphysicsjoint.h:139 */
	virtual void Parallel_SetMaxTorque(IPhysicsJoint* , float);
	/* ../public/vphysics2/iphysicsjoint.h:140 */
	virtual float Parallel_GetMaxTorque(const IPhysicsJoint* );
	void IPhysicsJoint(class IPhysicsJoint *, const class IPhysicsJoint  &); /* linkage=_ZN13IPhysicsJointC4ERKS_ */
	void IPhysicsJoint(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJointC4Ev */
	virtual void ~IPhysicsJoint(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJointD4Ev */
	virtual enum PhysicsJointType_t GetType(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint7GetTypeEv */
	virtual class IPhysicsWorld * GetWorld(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint8GetWorldEv */
	virtual class IPhysicsBody * GetBody1(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint8GetBody1Ev */
	virtual class IPhysicsBody * GetBody2(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint8GetBody2Ev */
	virtual void GetLocalFrameA(const class IPhysicsJoint  *, class Vector &, class Quaternion &); /* linkage=_ZNK13IPhysicsJoint14GetLocalFrameAER6VectorR10Quaternion */
	virtual void GetLocalFrameB(const class IPhysicsJoint  *, class Vector &, class Quaternion &); /* linkage=_ZNK13IPhysicsJoint14GetLocalFrameBER6VectorR10Quaternion */
	virtual void SetLocalFrameA(class IPhysicsJoint *, const class Vector  &, const class Quaternion  &); /* linkage=_ZN13IPhysicsJoint14SetLocalFrameAERK6VectorRK10Quaternion */
	virtual void SetLocalFrameB(class IPhysicsJoint *, const class Vector  &, const class Quaternion  &); /* linkage=_ZN13IPhysicsJoint14SetLocalFrameBERK6VectorRK10Quaternion */
	virtual void SetEnableCollision(class IPhysicsJoint *, bool); /* linkage=_ZN13IPhysicsJoint18SetEnableCollisionEb */
	virtual bool IsCollisionEnabled(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint18IsCollisionEnabledEv */
	virtual void SetDebugName(class IPhysicsJoint *, const char  *); /* linkage=_ZN13IPhysicsJoint12SetDebugNameEPKc */
	virtual const char  * GetDebugName(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint12GetDebugNameEv */
	virtual const class CManagedHandle  * GetManagedHandle(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint16GetManagedHandleEv */
	virtual void SetLinearSpring(class IPhysicsJoint *, class Vector); /* linkage=_ZN13IPhysicsJoint15SetLinearSpringE6Vector */
	virtual class Vector GetLinearSpring(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint15GetLinearSpringEv */
	virtual void SetAngularSpring(class IPhysicsJoint *, class Vector); /* linkage=_ZN13IPhysicsJoint16SetAngularSpringE6Vector */
	virtual class Vector GetAngularSpring(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint16GetAngularSpringEv */
	virtual void SetAngularMotor(class IPhysicsJoint *, float, float); /* linkage=_ZN13IPhysicsJoint15SetAngularMotorEff */
	virtual void SetMinLength(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint12SetMinLengthEf */
	virtual float GetMinLength(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint12GetMinLengthEv */
	virtual void SetMaxLength(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint12SetMaxLengthEf */
	virtual float GetMaxLength(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint12GetMaxLengthEv */
	virtual void SetMinForce(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint11SetMinForceEf */
	virtual float GetMinForce(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint11GetMinForceEv */
	virtual void SetMaxForce(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint11SetMaxForceEf */
	virtual float GetMaxForce(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint11GetMaxForceEv */
	virtual void SetFriction(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint11SetFrictionEf */
	virtual void SetLimit(class IPhysicsJoint *, const char  *, class Vector); /* linkage=_ZN13IPhysicsJoint8SetLimitEPKc6Vector */
	virtual void SetLimitEnabled(class IPhysicsJoint *, const char  *, bool); /* linkage=_ZN13IPhysicsJoint15SetLimitEnabledEPKcb */
	virtual float GetAngle(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint8GetAngleEv */
	virtual float GetLinearImpulse(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint16GetLinearImpulseEv */
	virtual float GetAngularImpulse(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint17GetAngularImpulseEv */
	virtual float GetMaxLinearImpulse(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint19GetMaxLinearImpulseEv */
	virtual float GetMaxAngularImpulse(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint20GetMaxAngularImpulseEv */
	virtual void SetMaxLinearImpulse(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint19SetMaxLinearImpulseEf */
	virtual void SetMaxAngularImpulse(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint20SetMaxAngularImpulseEf */
	virtual void SetMotorVelocity(class IPhysicsJoint *, const class Vector  &, float); /* linkage=_ZN13IPhysicsJoint16SetMotorVelocityERK6Vectorf */
	virtual void SetTargetRotation(class IPhysicsJoint *, const class Quaternion  &, float, float); /* linkage=_ZN13IPhysicsJoint17SetTargetRotationERK10Quaternionff */
	virtual void Motor_SetLinearVelocity(class IPhysicsJoint *, const class Vector  &); /* linkage=_ZN13IPhysicsJoint23Motor_SetLinearVelocityERK6Vector */
	virtual void Motor_SetAngularVelocity(class IPhysicsJoint *, const class Vector  &); /* linkage=_ZN13IPhysicsJoint24Motor_SetAngularVelocityERK6Vector */
	virtual void Motor_SetMaxVelocityForce(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint25Motor_SetMaxVelocityForceEf */
	virtual void Motor_SetMaxVelocityTorque(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint26Motor_SetMaxVelocityTorqueEf */
	virtual void Motor_SetLinearHertz(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint20Motor_SetLinearHertzEf */
	virtual void Motor_SetLinearDampingRatio(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint27Motor_SetLinearDampingRatioEf */
	virtual void Motor_SetAngularHertz(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint21Motor_SetAngularHertzEf */
	virtual void Motor_SetAngularDampingRatio(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint28Motor_SetAngularDampingRatioEf */
	virtual void Motor_SetMaxSpringForce(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint23Motor_SetMaxSpringForceEf */
	virtual void Motor_SetMaxSpringTorque(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint24Motor_SetMaxSpringTorqueEf */
	virtual class Vector Motor_GetLinearVelocity(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint23Motor_GetLinearVelocityEv */
	virtual class Vector Motor_GetAngularVelocity(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint24Motor_GetAngularVelocityEv */
	virtual float Motor_GetMaxVelocityForce(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint25Motor_GetMaxVelocityForceEv */
	virtual float Motor_GetMaxVelocityTorque(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint26Motor_GetMaxVelocityTorqueEv */
	virtual float Motor_GetLinearHertz(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint20Motor_GetLinearHertzEv */
	virtual float Motor_GetLinearDampingRatio(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint27Motor_GetLinearDampingRatioEv */
	virtual float Motor_GetAngularHertz(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint21Motor_GetAngularHertzEv */
	virtual float Motor_GetAngularDampingRatio(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint28Motor_GetAngularDampingRatioEv */
	virtual float Motor_GetMaxSpringForce(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint23Motor_GetMaxSpringForceEv */
	virtual float Motor_GetMaxSpringTorque(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint24Motor_GetMaxSpringTorqueEv */
	virtual void Wheel_EnableSuspension(class IPhysicsJoint *, bool); /* linkage=_ZN13IPhysicsJoint22Wheel_EnableSuspensionEb */
	virtual bool Wheel_IsSuspensionEnabled(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint25Wheel_IsSuspensionEnabledEv */
	virtual void Wheel_SetSuspensionHertz(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint24Wheel_SetSuspensionHertzEf */
	virtual float Wheel_GetSuspensionHertz(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint24Wheel_GetSuspensionHertzEv */
	virtual void Wheel_SetSuspensionDampingRatio(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint31Wheel_SetSuspensionDampingRatioEf */
	virtual float Wheel_GetSuspensionDampingRatio(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint31Wheel_GetSuspensionDampingRatioEv */
	virtual void Wheel_EnableSuspensionLimit(class IPhysicsJoint *, bool); /* linkage=_ZN13IPhysicsJoint27Wheel_EnableSuspensionLimitEb */
	virtual bool Wheel_IsSuspensionLimitEnabled(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint30Wheel_IsSuspensionLimitEnabledEv */
	virtual float Wheel_GetLowerSuspensionLimit(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint29Wheel_GetLowerSuspensionLimitEv */
	virtual float Wheel_GetUpperSuspensionLimit(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint29Wheel_GetUpperSuspensionLimitEv */
	virtual void Wheel_SetSuspensionLimits(class IPhysicsJoint *, float, float); /* linkage=_ZN13IPhysicsJoint25Wheel_SetSuspensionLimitsEff */
	virtual void Wheel_EnableSpinMotor(class IPhysicsJoint *, bool); /* linkage=_ZN13IPhysicsJoint21Wheel_EnableSpinMotorEb */
	virtual bool Wheel_IsSpinMotorEnabled(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint24Wheel_IsSpinMotorEnabledEv */
	virtual void Wheel_SetSpinMotorSpeed(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint23Wheel_SetSpinMotorSpeedEf */
	virtual float Wheel_GetSpinMotorSpeed(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint23Wheel_GetSpinMotorSpeedEv */
	virtual void Wheel_SetMaxSpinTorque(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint22Wheel_SetMaxSpinTorqueEf */
	virtual float Wheel_GetMaxSpinTorque(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint22Wheel_GetMaxSpinTorqueEv */
	virtual void Wheel_EnableSteering(class IPhysicsJoint *, bool); /* linkage=_ZN13IPhysicsJoint20Wheel_EnableSteeringEb */
	virtual bool Wheel_IsSteeringEnabled(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint23Wheel_IsSteeringEnabledEv */
	virtual void Wheel_SetSteeringHertz(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint22Wheel_SetSteeringHertzEf */
	virtual float Wheel_GetSteeringHertz(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint22Wheel_GetSteeringHertzEv */
	virtual void Wheel_SetSteeringDampingRatio(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint29Wheel_SetSteeringDampingRatioEf */
	virtual float Wheel_GetSteeringDampingRatio(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint29Wheel_GetSteeringDampingRatioEv */
	virtual void Wheel_SetMaxSteeringTorque(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint26Wheel_SetMaxSteeringTorqueEf */
	virtual float Wheel_GetMaxSteeringTorque(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint26Wheel_GetMaxSteeringTorqueEv */
	virtual void Wheel_EnableSteeringLimit(class IPhysicsJoint *, bool); /* linkage=_ZN13IPhysicsJoint25Wheel_EnableSteeringLimitEb */
	virtual bool Wheel_IsSteeringLimitEnabled(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint28Wheel_IsSteeringLimitEnabledEv */
	virtual float Wheel_GetLowerSteeringLimit(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint27Wheel_GetLowerSteeringLimitEv */
	virtual float Wheel_GetUpperSteeringLimit(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint27Wheel_GetUpperSteeringLimitEv */
	virtual void Wheel_SetSteeringLimits(class IPhysicsJoint *, float, float); /* linkage=_ZN13IPhysicsJoint23Wheel_SetSteeringLimitsEff */
	virtual void Wheel_SetTargetSteeringAngle(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint28Wheel_SetTargetSteeringAngleEf */
	virtual float Wheel_GetTargetSteeringAngle(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint28Wheel_GetTargetSteeringAngleEv */
	virtual float Wheel_GetSpinSpeed(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint18Wheel_GetSpinSpeedEv */
	virtual float Wheel_GetSpinTorque(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint19Wheel_GetSpinTorqueEv */
	virtual float Wheel_GetSteeringAngle(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint22Wheel_GetSteeringAngleEv */
	virtual float Wheel_GetSteeringTorque(class IPhysicsJoint *); /* linkage=_ZN13IPhysicsJoint23Wheel_GetSteeringTorqueEv */
	virtual void Parallel_SetHertz(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint17Parallel_SetHertzEf */
	virtual float Parallel_GetHertz(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint17Parallel_GetHertzEv */
	virtual void Parallel_SetDampingRatio(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint24Parallel_SetDampingRatioEf */
	virtual float Parallel_GetDampingRatio(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint24Parallel_GetDampingRatioEv */
	virtual void Parallel_SetMaxTorque(class IPhysicsJoint *, float); /* linkage=_ZN13IPhysicsJoint21Parallel_SetMaxTorqueEf */
	virtual float Parallel_GetMaxTorque(const class IPhysicsJoint  *); /* linkage=_ZNK13IPhysicsJoint21Parallel_GetMaxTorqueEv */
};

// <00C65B79> ../public/vphysics2/iphysicsjoint.h:18
void IPhysicsJoint::~IPhysicsJoint()
{
} /* size: 0 */

// <00C65B49> ../public/vphysics2/iphysicsjoint.h:18
inline void IPhysicsJoint::~IPhysicsJoint()
{
} /* size: 0 */

