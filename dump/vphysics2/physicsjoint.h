
//
// vphysics2/physicsjoint.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	class: 1
//

// <00C559AB> vphysics2/physicsjoint.h:9
// member functions: 208
// member variables: 4
// vtable entries: 100
// class size: 32
class CPhysicsJoint : public IPhysicsJoint {
public:
	/* class IPhysicsJoint <ancestor>; */ /* 0 8 */
	void CPhysicsJoint(CPhysicsJoint* , const CPhysicsJoint& );
	/* vphysics2/physicsjoint.cpp:11 */
	void CPhysicsJoint(CPhysicsJoint* , b3JointId);
	/* vphysics2/physicsjoint.cpp:22 */
	virtual void ~CPhysicsJoint(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:44 */
	virtual PhysicsJointType_t GetType(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:60 */
	virtual IPhysicsWorld* GetWorld(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:65 */
	virtual IPhysicsBody* GetBody1(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:70 */
	virtual IPhysicsBody* GetBody2(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:404 */
	virtual void GetLocalFrameA(const CPhysicsJoint* , Vector& , Quaternion& );
	/* vphysics2/physicsjoint.cpp:411 */
	virtual void GetLocalFrameB(const CPhysicsJoint* , Vector& , Quaternion& );
	/* vphysics2/physicsjoint.cpp:418 */
	virtual void SetLocalFrameA(CPhysicsJoint* , const Vector& , const Quaternion& );
	/* vphysics2/physicsjoint.cpp:423 */
	virtual void SetLocalFrameB(CPhysicsJoint* , const Vector& , const Quaternion& );
	/* vphysics2/physicsjoint.cpp:75 */
	virtual void SetEnableCollision(CPhysicsJoint* , bool);
	/* vphysics2/physicsjoint.cpp:80 */
	virtual bool IsCollisionEnabled(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:85 */
	virtual void SetDebugName(CPhysicsJoint* , const char* );
	/* vphysics2/physicsjoint.cpp:90 */
	virtual const char* GetDebugName(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:95 */
	virtual void SetLinearSpring(CPhysicsJoint* , Vector);
	/* vphysics2/physicsjoint.cpp:110 */
	virtual Vector GetLinearSpring(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:284 */
	virtual void SetAngularSpring(CPhysicsJoint* , Vector);
	/* vphysics2/physicsjoint.cpp:335 */
	virtual Vector GetAngularSpring(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:301 */
	virtual void SetAngularMotor(CPhysicsJoint* , float, float);
	/* vphysics2/physicsjoint.cpp:312 */
	virtual void SetMotorVelocity(CPhysicsJoint* , const Vector& , float);
	/* vphysics2/physicsjoint.cpp:323 */
	virtual void SetTargetRotation(CPhysicsJoint* , const Quaternion& , float, float);
	/* vphysics2/physicsjoint.cpp:124 */
	virtual void SetMinLength(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:164 */
	virtual float GetMinLength(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:182 */
	virtual void SetMaxLength(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:222 */
	virtual float GetMaxLength(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:240 */
	virtual void SetMinForce(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:250 */
	virtual float GetMinForce(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:262 */
	virtual void SetMaxForce(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:272 */
	virtual float GetMaxForce(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:349 */
	virtual void SetFriction(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:851 */
	virtual const CManagedHandle* GetManagedHandle(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:428 */
	virtual void SetLimit(CPhysicsJoint* , const char* , Vector);
	/* vphysics2/physicsjoint.cpp:448 */
	virtual void SetLimitEnabled(CPhysicsJoint* , const char* , bool);
	/* vphysics2/physicsjoint.cpp:468 */
	virtual float GetAngle(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:478 */
	virtual float GetLinearImpulse(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:483 */
	virtual float GetAngularImpulse(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:488 */
	virtual float GetMaxLinearImpulse(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:493 */
	virtual float GetMaxAngularImpulse(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:498 */
	virtual void SetMaxLinearImpulse(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:503 */
	virtual void SetMaxAngularImpulse(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:508 */
	virtual void Motor_SetLinearVelocity(CPhysicsJoint* , const Vector& );
	/* vphysics2/physicsjoint.cpp:516 */
	virtual void Motor_SetAngularVelocity(CPhysicsJoint* , const Vector& );
	/* vphysics2/physicsjoint.cpp:524 */
	virtual void Motor_SetMaxVelocityForce(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:532 */
	virtual void Motor_SetMaxVelocityTorque(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:540 */
	virtual void Motor_SetLinearHertz(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:548 */
	virtual void Motor_SetLinearDampingRatio(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:556 */
	virtual void Motor_SetAngularHertz(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:564 */
	virtual void Motor_SetAngularDampingRatio(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:572 */
	virtual void Motor_SetMaxSpringForce(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:580 */
	virtual void Motor_SetMaxSpringTorque(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:588 */
	virtual Vector Motor_GetLinearVelocity(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:593 */
	virtual Vector Motor_GetAngularVelocity(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:598 */
	virtual float Motor_GetMaxVelocityForce(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:603 */
	virtual float Motor_GetMaxVelocityTorque(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:608 */
	virtual float Motor_GetLinearHertz(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:613 */
	virtual float Motor_GetLinearDampingRatio(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:618 */
	virtual float Motor_GetAngularHertz(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:623 */
	virtual float Motor_GetAngularDampingRatio(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:628 */
	virtual float Motor_GetMaxSpringForce(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:633 */
	virtual float Motor_GetMaxSpringTorque(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:638 */
	virtual void Wheel_EnableSuspension(CPhysicsJoint* , bool);
	/* vphysics2/physicsjoint.cpp:643 */
	virtual bool Wheel_IsSuspensionEnabled(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:648 */
	virtual void Wheel_SetSuspensionHertz(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:653 */
	virtual float Wheel_GetSuspensionHertz(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:658 */
	virtual void Wheel_SetSuspensionDampingRatio(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:663 */
	virtual float Wheel_GetSuspensionDampingRatio(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:668 */
	virtual void Wheel_EnableSuspensionLimit(CPhysicsJoint* , bool);
	/* vphysics2/physicsjoint.cpp:673 */
	virtual bool Wheel_IsSuspensionLimitEnabled(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:678 */
	virtual float Wheel_GetLowerSuspensionLimit(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:683 */
	virtual float Wheel_GetUpperSuspensionLimit(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:688 */
	virtual void Wheel_SetSuspensionLimits(CPhysicsJoint* , float, float);
	/* vphysics2/physicsjoint.cpp:693 */
	virtual void Wheel_EnableSpinMotor(CPhysicsJoint* , bool);
	/* vphysics2/physicsjoint.cpp:698 */
	virtual bool Wheel_IsSpinMotorEnabled(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:703 */
	virtual void Wheel_SetSpinMotorSpeed(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:708 */
	virtual float Wheel_GetSpinMotorSpeed(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:713 */
	virtual void Wheel_SetMaxSpinTorque(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:718 */
	virtual float Wheel_GetMaxSpinTorque(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:723 */
	virtual void Wheel_EnableSteering(CPhysicsJoint* , bool);
	/* vphysics2/physicsjoint.cpp:728 */
	virtual bool Wheel_IsSteeringEnabled(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:733 */
	virtual void Wheel_SetSteeringHertz(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:738 */
	virtual float Wheel_GetSteeringHertz(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:743 */
	virtual void Wheel_SetSteeringDampingRatio(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:748 */
	virtual float Wheel_GetSteeringDampingRatio(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:753 */
	virtual void Wheel_SetMaxSteeringTorque(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:758 */
	virtual float Wheel_GetMaxSteeringTorque(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:763 */
	virtual void Wheel_EnableSteeringLimit(CPhysicsJoint* , bool);
	/* vphysics2/physicsjoint.cpp:768 */
	virtual bool Wheel_IsSteeringLimitEnabled(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:773 */
	virtual float Wheel_GetLowerSteeringLimit(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:778 */
	virtual float Wheel_GetUpperSteeringLimit(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:783 */
	virtual void Wheel_SetSteeringLimits(CPhysicsJoint* , float, float);
	/* vphysics2/physicsjoint.cpp:788 */
	virtual void Wheel_SetTargetSteeringAngle(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:793 */
	virtual float Wheel_GetTargetSteeringAngle(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:798 */
	virtual float Wheel_GetSpinSpeed(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:803 */
	virtual float Wheel_GetSpinTorque(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:808 */
	virtual float Wheel_GetSteeringAngle(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:813 */
	virtual float Wheel_GetSteeringTorque(CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:818 */
	virtual void Parallel_SetHertz(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:824 */
	virtual float Parallel_GetHertz(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:829 */
	virtual void Parallel_SetDampingRatio(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:835 */
	virtual float Parallel_GetDampingRatio(const CPhysicsJoint* );
	/* vphysics2/physicsjoint.cpp:840 */
	virtual void Parallel_SetMaxTorque(CPhysicsJoint* , float);
	/* vphysics2/physicsjoint.cpp:846 */
	virtual float Parallel_GetMaxTorque(const CPhysicsJoint* );
private:
	/* vphysics2/physicsjoint.cpp:27 */
	void InitManagedHandle(CPhysicsJoint* );
	b3JointId m_id; /* 8 8 */
	CManagedHandle m_ManagedHandle; /* 16 4 */
	CUtlString m_debugName; /* 24 8 */
	void CPhysicsJoint(class CPhysicsJoint *, const class CPhysicsJoint  &); /* linkage=_ZN13CPhysicsJointC4ERKS_ */
	void CPhysicsJoint(class CPhysicsJoint *, b3JointId); /* linkage=_ZN13CPhysicsJointC4E9b3JointId */
	virtual void ~CPhysicsJoint(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJointD4Ev */
	virtual enum PhysicsJointType_t GetType(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint7GetTypeEv */
	virtual class IPhysicsWorld * GetWorld(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint8GetWorldEv */
	virtual class IPhysicsBody * GetBody1(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint8GetBody1Ev */
	virtual class IPhysicsBody * GetBody2(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint8GetBody2Ev */
	virtual void GetLocalFrameA(const class CPhysicsJoint  *, class Vector &, class Quaternion &); /* linkage=_ZNK13CPhysicsJoint14GetLocalFrameAER6VectorR10Quaternion */
	virtual void GetLocalFrameB(const class CPhysicsJoint  *, class Vector &, class Quaternion &); /* linkage=_ZNK13CPhysicsJoint14GetLocalFrameBER6VectorR10Quaternion */
	virtual void SetLocalFrameA(class CPhysicsJoint *, const class Vector  &, const class Quaternion  &); /* linkage=_ZN13CPhysicsJoint14SetLocalFrameAERK6VectorRK10Quaternion */
	virtual void SetLocalFrameB(class CPhysicsJoint *, const class Vector  &, const class Quaternion  &); /* linkage=_ZN13CPhysicsJoint14SetLocalFrameBERK6VectorRK10Quaternion */
	virtual void SetEnableCollision(class CPhysicsJoint *, bool); /* linkage=_ZN13CPhysicsJoint18SetEnableCollisionEb */
	virtual bool IsCollisionEnabled(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint18IsCollisionEnabledEv */
	virtual void SetDebugName(class CPhysicsJoint *, const char  *); /* linkage=_ZN13CPhysicsJoint12SetDebugNameEPKc */
	virtual const char  * GetDebugName(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint12GetDebugNameEv */
	virtual void SetLinearSpring(class CPhysicsJoint *, class Vector); /* linkage=_ZN13CPhysicsJoint15SetLinearSpringE6Vector */
	/* <c7744a> vphysics2/physicsjoint.cpp:110 */
	virtual class Vector GetLinearSpring(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint15GetLinearSpringEv */
	virtual void SetAngularSpring(class CPhysicsJoint *, class Vector); /* linkage=_ZN13CPhysicsJoint16SetAngularSpringE6Vector */
	/* <c7758c> vphysics2/physicsjoint.cpp:335 */
	virtual class Vector GetAngularSpring(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint16GetAngularSpringEv */
	/* <c771d3> vphysics2/physicsjoint.cpp:301 */
	virtual void SetAngularMotor(class CPhysicsJoint *, float, float); /* linkage=_ZN13CPhysicsJoint15SetAngularMotorEff */
	/* <c77a04> vphysics2/physicsjoint.cpp:312 */
	virtual void SetMotorVelocity(class CPhysicsJoint *, const class Vector  &, float); /* linkage=_ZN13CPhysicsJoint16SetMotorVelocityERK6Vectorf */
	/* <c77e29> vphysics2/physicsjoint.cpp:323 */
	virtual void SetTargetRotation(class CPhysicsJoint *, const class Quaternion  &, float, float); /* linkage=_ZN13CPhysicsJoint17SetTargetRotationERK10Quaternionff */
	/* <c768f3> vphysics2/physicsjoint.cpp:124 */
	virtual void SetMinLength(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint12SetMinLengthEf */
	/* <c76b56> vphysics2/physicsjoint.cpp:164 */
	virtual float GetMinLength(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint12GetMinLengthEv */
	/* <c76c00> vphysics2/physicsjoint.cpp:182 */
	virtual void SetMaxLength(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint12SetMaxLengthEf */
	/* <c76849> vphysics2/physicsjoint.cpp:222 */
	virtual float GetMaxLength(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint12GetMaxLengthEv */
	/* <c76fe8> vphysics2/physicsjoint.cpp:240 */
	virtual void SetMinForce(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint11SetMinForceEf */
	/* <c76e63> vphysics2/physicsjoint.cpp:250 */
	virtual float GetMinForce(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint11GetMinForceEv */
	/* <c770dd> vphysics2/physicsjoint.cpp:262 */
	virtual void SetMaxForce(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint11SetMaxForceEf */
	/* <c76f25> vphysics2/physicsjoint.cpp:272 */
	virtual float GetMaxForce(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint11GetMaxForceEv */
	virtual void SetFriction(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint11SetFrictionEf */
	virtual const class CManagedHandle  * GetManagedHandle(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint16GetManagedHandleEv */
	virtual void SetLimit(class CPhysicsJoint *, const char  *, class Vector); /* linkage=_ZN13CPhysicsJoint8SetLimitEPKc6Vector */
	/* <c772cd> vphysics2/physicsjoint.cpp:448 */
	virtual void SetLimitEnabled(class CPhysicsJoint *, const char  *, bool); /* linkage=_ZN13CPhysicsJoint15SetLimitEnabledEPKcb */
	virtual float GetAngle(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint8GetAngleEv */
	virtual float GetLinearImpulse(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint16GetLinearImpulseEv */
	virtual float GetAngularImpulse(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint17GetAngularImpulseEv */
	virtual float GetMaxLinearImpulse(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint19GetMaxLinearImpulseEv */
	virtual float GetMaxAngularImpulse(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint20GetMaxAngularImpulseEv */
	virtual void SetMaxLinearImpulse(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint19SetMaxLinearImpulseEf */
	virtual void SetMaxAngularImpulse(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint20SetMaxAngularImpulseEf */
	/* <c77ba5> vphysics2/physicsjoint.cpp:508 */
	virtual void Motor_SetLinearVelocity(class CPhysicsJoint *, const class Vector  &); /* linkage=_ZN13CPhysicsJoint23Motor_SetLinearVelocityERK6Vector */
	/* <c77ce7> vphysics2/physicsjoint.cpp:516 */
	virtual void Motor_SetAngularVelocity(class CPhysicsJoint *, const class Vector  &); /* linkage=_ZN13CPhysicsJoint24Motor_SetAngularVelocityERK6Vector */
	virtual void Motor_SetMaxVelocityForce(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint25Motor_SetMaxVelocityForceEf */
	virtual void Motor_SetMaxVelocityTorque(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint26Motor_SetMaxVelocityTorqueEf */
	virtual void Motor_SetLinearHertz(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint20Motor_SetLinearHertzEf */
	virtual void Motor_SetLinearDampingRatio(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint27Motor_SetLinearDampingRatioEf */
	virtual void Motor_SetAngularHertz(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint21Motor_SetAngularHertzEf */
	virtual void Motor_SetAngularDampingRatio(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint28Motor_SetAngularDampingRatioEf */
	virtual void Motor_SetMaxSpringForce(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint23Motor_SetMaxSpringForceEf */
	virtual void Motor_SetMaxSpringTorque(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint24Motor_SetMaxSpringTorqueEf */
	/* <c777fc> vphysics2/physicsjoint.cpp:588 */
	virtual class Vector Motor_GetLinearVelocity(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint23Motor_GetLinearVelocityEv */
	/* <c77900> vphysics2/physicsjoint.cpp:593 */
	virtual class Vector Motor_GetAngularVelocity(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint24Motor_GetAngularVelocityEv */
	virtual float Motor_GetMaxVelocityForce(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint25Motor_GetMaxVelocityForceEv */
	virtual float Motor_GetMaxVelocityTorque(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint26Motor_GetMaxVelocityTorqueEv */
	virtual float Motor_GetLinearHertz(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint20Motor_GetLinearHertzEv */
	virtual float Motor_GetLinearDampingRatio(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint27Motor_GetLinearDampingRatioEv */
	virtual float Motor_GetAngularHertz(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint21Motor_GetAngularHertzEv */
	virtual float Motor_GetAngularDampingRatio(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint28Motor_GetAngularDampingRatioEv */
	virtual float Motor_GetMaxSpringForce(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint23Motor_GetMaxSpringForceEv */
	virtual float Motor_GetMaxSpringTorque(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint24Motor_GetMaxSpringTorqueEv */
	virtual void Wheel_EnableSuspension(class CPhysicsJoint *, bool); /* linkage=_ZN13CPhysicsJoint22Wheel_EnableSuspensionEb */
	virtual bool Wheel_IsSuspensionEnabled(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint25Wheel_IsSuspensionEnabledEv */
	virtual void Wheel_SetSuspensionHertz(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint24Wheel_SetSuspensionHertzEf */
	virtual float Wheel_GetSuspensionHertz(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint24Wheel_GetSuspensionHertzEv */
	virtual void Wheel_SetSuspensionDampingRatio(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint31Wheel_SetSuspensionDampingRatioEf */
	virtual float Wheel_GetSuspensionDampingRatio(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint31Wheel_GetSuspensionDampingRatioEv */
	virtual void Wheel_EnableSuspensionLimit(class CPhysicsJoint *, bool); /* linkage=_ZN13CPhysicsJoint27Wheel_EnableSuspensionLimitEb */
	virtual bool Wheel_IsSuspensionLimitEnabled(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint30Wheel_IsSuspensionLimitEnabledEv */
	virtual float Wheel_GetLowerSuspensionLimit(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint29Wheel_GetLowerSuspensionLimitEv */
	virtual float Wheel_GetUpperSuspensionLimit(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint29Wheel_GetUpperSuspensionLimitEv */
	virtual void Wheel_SetSuspensionLimits(class CPhysicsJoint *, float, float); /* linkage=_ZN13CPhysicsJoint25Wheel_SetSuspensionLimitsEff */
	virtual void Wheel_EnableSpinMotor(class CPhysicsJoint *, bool); /* linkage=_ZN13CPhysicsJoint21Wheel_EnableSpinMotorEb */
	virtual bool Wheel_IsSpinMotorEnabled(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint24Wheel_IsSpinMotorEnabledEv */
	virtual void Wheel_SetSpinMotorSpeed(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint23Wheel_SetSpinMotorSpeedEf */
	virtual float Wheel_GetSpinMotorSpeed(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint23Wheel_GetSpinMotorSpeedEv */
	virtual void Wheel_SetMaxSpinTorque(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint22Wheel_SetMaxSpinTorqueEf */
	virtual float Wheel_GetMaxSpinTorque(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint22Wheel_GetMaxSpinTorqueEv */
	virtual void Wheel_EnableSteering(class CPhysicsJoint *, bool); /* linkage=_ZN13CPhysicsJoint20Wheel_EnableSteeringEb */
	virtual bool Wheel_IsSteeringEnabled(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint23Wheel_IsSteeringEnabledEv */
	virtual void Wheel_SetSteeringHertz(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint22Wheel_SetSteeringHertzEf */
	virtual float Wheel_GetSteeringHertz(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint22Wheel_GetSteeringHertzEv */
	virtual void Wheel_SetSteeringDampingRatio(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint29Wheel_SetSteeringDampingRatioEf */
	virtual float Wheel_GetSteeringDampingRatio(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint29Wheel_GetSteeringDampingRatioEv */
	virtual void Wheel_SetMaxSteeringTorque(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint26Wheel_SetMaxSteeringTorqueEf */
	virtual float Wheel_GetMaxSteeringTorque(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint26Wheel_GetMaxSteeringTorqueEv */
	virtual void Wheel_EnableSteeringLimit(class CPhysicsJoint *, bool); /* linkage=_ZN13CPhysicsJoint25Wheel_EnableSteeringLimitEb */
	virtual bool Wheel_IsSteeringLimitEnabled(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint28Wheel_IsSteeringLimitEnabledEv */
	virtual float Wheel_GetLowerSteeringLimit(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint27Wheel_GetLowerSteeringLimitEv */
	virtual float Wheel_GetUpperSteeringLimit(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint27Wheel_GetUpperSteeringLimitEv */
	virtual void Wheel_SetSteeringLimits(class CPhysicsJoint *, float, float); /* linkage=_ZN13CPhysicsJoint23Wheel_SetSteeringLimitsEff */
	virtual void Wheel_SetTargetSteeringAngle(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint28Wheel_SetTargetSteeringAngleEf */
	virtual float Wheel_GetTargetSteeringAngle(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint28Wheel_GetTargetSteeringAngleEv */
	virtual float Wheel_GetSpinSpeed(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint18Wheel_GetSpinSpeedEv */
	virtual float Wheel_GetSpinTorque(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint19Wheel_GetSpinTorqueEv */
	virtual float Wheel_GetSteeringAngle(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint22Wheel_GetSteeringAngleEv */
	virtual float Wheel_GetSteeringTorque(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint23Wheel_GetSteeringTorqueEv */
	virtual void Parallel_SetHertz(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint17Parallel_SetHertzEf */
	virtual float Parallel_GetHertz(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint17Parallel_GetHertzEv */
	virtual void Parallel_SetDampingRatio(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint24Parallel_SetDampingRatioEf */
	virtual float Parallel_GetDampingRatio(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint24Parallel_GetDampingRatioEv */
	virtual void Parallel_SetMaxTorque(class CPhysicsJoint *, float); /* linkage=_ZN13CPhysicsJoint21Parallel_SetMaxTorqueEf */
	virtual float Parallel_GetMaxTorque(const class CPhysicsJoint  *); /* linkage=_ZNK13CPhysicsJoint21Parallel_GetMaxTorqueEv */
	void InitManagedHandle(class CPhysicsJoint *); /* linkage=_ZN13CPhysicsJoint17InitManagedHandleEv */
};

// <00B0AE46> vphysics2/physicsjoint.h:13
void CPhysicsJoint::CPhysicsJoint(b3JointId id)
{
} /* size: 0 */

// <00B0AF1F> vphysics2/physicsjoint.h:147
b3JointId AsJoint(const IPhysicsJoint *)
{
} /* size: 0 */

