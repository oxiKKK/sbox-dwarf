
//
// public/vphysics2/iphysicsjointdesc.h
//
//	referenced by: libengine2.so
//
//	classes: 7
//

// <00AE3D33> ../public/vphysics2/iphysicsjointdesc.h:17
// member functions: 34
// member variables: 11
// class size: 96
class PhysicsJointDesc_t {
	/* ../public/vphysics2/iphysicsjointdesc.h:20 */
	void PhysicsJointDesc_t(PhysicsJointDesc_t* , const PhysicsJointDesc_t& );
	const enum PhysicsJointType_t m_nType; /* 0 4 */
	const class IPhysicsBody * m_pBody1; /* 8 8 */
	const class IPhysicsBody * m_pBody2; /* 16 8 */
	Vector m_vLocalOrigin1; /* 24 12 */
	Quaternion m_qLocalBasis1; /* 36 16 */
	Vector m_vLocalOrigin2; /* 52 12 */
	Quaternion m_qLocalBasis2; /* 64 16 */
	bool m_bIsActive; /* 80 1 */
	bool m_bEnableCollision; /* 81 1 */
	float m_flLinearStrength; /* 84 4 */
	float m_flAngularStrength; /* 88 4 */
	/* ../public/vphysics2/iphysicsjointdesc.h:44 */
	bool IsBreakable(const PhysicsJointDesc_t* );
	/* ../public/vphysics2/iphysicsjointdesc.h:46 */
	Vector GetWorldOrigin1(const PhysicsJointDesc_t* );
	/* ../public/vphysics2/iphysicsjointdesc.h:47 */
	Vector GetWorldOrigin2(const PhysicsJointDesc_t* );
	/* ../public/vphysics2/iphysicsjointdesc.h:48 */
	Quaternion GetWorldBasis1(const PhysicsJointDesc_t* );
	/* ../public/vphysics2/iphysicsjointdesc.h:49 */
	Quaternion GetWorldBasis2(const PhysicsJointDesc_t* );
	/* ../public/vphysics2/iphysicsjointdesc.h:51 */
	void SetLocalFrame1(PhysicsJointDesc_t* , const CTransform& );
	/* ../public/vphysics2/iphysicsjointdesc.h:52 */
	CTransform GetLocalFrame1(const PhysicsJointDesc_t* );
	/* ../public/vphysics2/iphysicsjointdesc.h:53 */
	void SetWorldFrame1(PhysicsJointDesc_t* , const CTransform& );
	/* ../public/vphysics2/iphysicsjointdesc.h:54 */
	CTransform GetWorldFrame1(const PhysicsJointDesc_t* );
	/* ../public/vphysics2/iphysicsjointdesc.h:56 */
	void SetLocalFrame2(PhysicsJointDesc_t* , const CTransform& );
	/* ../public/vphysics2/iphysicsjointdesc.h:57 */
	CTransform GetLocalFrame2(const PhysicsJointDesc_t* );
	/* ../public/vphysics2/iphysicsjointdesc.h:58 */
	void SetWorldFrame2(PhysicsJointDesc_t* , const CTransform& );
	/* ../public/vphysics2/iphysicsjointdesc.h:59 */
	CTransform GetWorldFrame2(const PhysicsJointDesc_t* );
	/* ../public/vphysics2/iphysicsjointdesc.h:61 */
	Quaternion BuildBasis(const PhysicsJointDesc_t* , const Vector& );
	/* ../public/vphysics2/iphysicsjointdesc.h:63 */
	bool IsValid(const PhysicsJointDesc_t* );
protected:
	/* ../public/vphysics2/iphysicsjointdesc.h:66 */
	void PhysicsJointDesc_t(PhysicsJointDesc_t* , PhysicsJointType_t, IPhysicsBody* , IPhysicsBody* );
	void PhysicsJointDesc_t(class PhysicsJointDesc_t *, const class PhysicsJointDesc_t  &); /* linkage=_ZN18PhysicsJointDesc_tC4ERKS_ */
	bool IsBreakable(const class PhysicsJointDesc_t  *); /* linkage=_ZNK18PhysicsJointDesc_t11IsBreakableEv */
	class Vector GetWorldOrigin1(const class PhysicsJointDesc_t  *); /* linkage=_ZNK18PhysicsJointDesc_t15GetWorldOrigin1Ev */
	class Vector GetWorldOrigin2(const class PhysicsJointDesc_t  *); /* linkage=_ZNK18PhysicsJointDesc_t15GetWorldOrigin2Ev */
	class Quaternion GetWorldBasis1(const class PhysicsJointDesc_t  *); /* linkage=_ZNK18PhysicsJointDesc_t14GetWorldBasis1Ev */
	class Quaternion GetWorldBasis2(const class PhysicsJointDesc_t  *); /* linkage=_ZNK18PhysicsJointDesc_t14GetWorldBasis2Ev */
	void SetLocalFrame1(class PhysicsJointDesc_t *, const class CTransform  &); /* linkage=_ZN18PhysicsJointDesc_t14SetLocalFrame1ERK10CTransform */
	class CTransform GetLocalFrame1(const class PhysicsJointDesc_t  *); /* linkage=_ZNK18PhysicsJointDesc_t14GetLocalFrame1Ev */
	void SetWorldFrame1(class PhysicsJointDesc_t *, const class CTransform  &); /* linkage=_ZN18PhysicsJointDesc_t14SetWorldFrame1ERK10CTransform */
	class CTransform GetWorldFrame1(const class PhysicsJointDesc_t  *); /* linkage=_ZNK18PhysicsJointDesc_t14GetWorldFrame1Ev */
	void SetLocalFrame2(class PhysicsJointDesc_t *, const class CTransform  &); /* linkage=_ZN18PhysicsJointDesc_t14SetLocalFrame2ERK10CTransform */
	class CTransform GetLocalFrame2(const class PhysicsJointDesc_t  *); /* linkage=_ZNK18PhysicsJointDesc_t14GetLocalFrame2Ev */
	void SetWorldFrame2(class PhysicsJointDesc_t *, const class CTransform  &); /* linkage=_ZN18PhysicsJointDesc_t14SetWorldFrame2ERK10CTransform */
	class CTransform GetWorldFrame2(const class PhysicsJointDesc_t  *); /* linkage=_ZNK18PhysicsJointDesc_t14GetWorldFrame2Ev */
	class Quaternion BuildBasis(const class PhysicsJointDesc_t  *, const class Vector  &); /* linkage=_ZNK18PhysicsJointDesc_t10BuildBasisERK6Vector */
	bool IsValid(const class PhysicsJointDesc_t  *); /* linkage=_ZNK18PhysicsJointDesc_t7IsValidEv */
	void PhysicsJointDesc_t(class PhysicsJointDesc_t *, enum PhysicsJointType_t, class IPhysicsBody *, class IPhysicsBody *); /* linkage=_ZN18PhysicsJointDesc_tC4E18PhysicsJointType_tP12IPhysicsBodyS2_ */
};

// <00AE4066> ../public/vphysics2/iphysicsjointdesc.h:73
// member functions: 8
// member variables: 7
// class size: 136
class PhysicsSphericalJointDesc_t : public PhysicsJointDesc_t {
public:
	/* class PhysicsJointDesc_t <ancestor>; */ /* 0 96 */
	/* ../public/vphysics2/iphysicsjointdesc.h:76 */
	void PhysicsSphericalJointDesc_t(PhysicsSphericalJointDesc_t* , IPhysicsBody* , IPhysicsBody* );
	/* ../public/vphysics2/iphysicsjointdesc.h:77 */
	void PhysicsSphericalJointDesc_t(PhysicsSphericalJointDesc_t* , const PhysicsSphericalJointDesc_t& );
	/* ../public/vphysics2/iphysicsjointdesc.h:79 */
	void SetPivot(PhysicsSphericalJointDesc_t* , const Vector& );
	/* ../public/vphysics2/iphysicsjointdesc.h:80 */
	bool IsValid(const PhysicsSphericalJointDesc_t* );
	PhysicsJointMotorMode_t m_nMotorMode; /* 92 4 */
	Quaternion m_qMotorTargetOrientation; /* 96 16 */
	float m_flMotorFrequency; /* 112 4 */
	float m_flMotorDampingRatio; /* 116 4 */
	Vector m_vMotorTargetVelocity; /* 120 12 */
	float m_flMotorMaxTorque; /* 132 4 */
	void PhysicsSphericalJointDesc_t(class PhysicsSphericalJointDesc_t *, class IPhysicsBody *, class IPhysicsBody *); /* linkage=_ZN27PhysicsSphericalJointDesc_tC4EP12IPhysicsBodyS1_ */
	void PhysicsSphericalJointDesc_t(class PhysicsSphericalJointDesc_t *, const class PhysicsSphericalJointDesc_t  &); /* linkage=_ZN27PhysicsSphericalJointDesc_tC4ERKS_ */
	void SetPivot(class PhysicsSphericalJointDesc_t *, const class Vector  &); /* linkage=_ZN27PhysicsSphericalJointDesc_t8SetPivotERK6Vector */
	bool IsValid(const class PhysicsSphericalJointDesc_t  *); /* linkage=_ZNK27PhysicsSphericalJointDesc_t7IsValidEv */
};

// <00AE418E> ../public/vphysics2/iphysicsjointdesc.h:97
// member functions: 10
// member variables: 11
// class size: 136
class PhysicsRevoluteJointDesc_t : public PhysicsJointDesc_t {
public:
	/* class PhysicsJointDesc_t <ancestor>; */ /* 0 96 */
	/* ../public/vphysics2/iphysicsjointdesc.h:100 */
	void PhysicsRevoluteJointDesc_t(PhysicsRevoluteJointDesc_t* , IPhysicsBody* , IPhysicsBody* );
	/* ../public/vphysics2/iphysicsjointdesc.h:101 */
	void PhysicsRevoluteJointDesc_t(PhysicsRevoluteJointDesc_t* , const PhysicsRevoluteJointDesc_t& );
	/* ../public/vphysics2/iphysicsjointdesc.h:103 */
	void SetPivot(PhysicsRevoluteJointDesc_t* , const Vector& );
	/* ../public/vphysics2/iphysicsjointdesc.h:104 */
	void SetAxis(PhysicsRevoluteJointDesc_t* , const Vector& );
	/* ../public/vphysics2/iphysicsjointdesc.h:105 */
	bool IsValid(const PhysicsRevoluteJointDesc_t* );
	bool m_bUseBlockSolver; /* 92 1 */
	PhysicsJointMotorMode_t m_nMotorMode; /* 96 4 */
	float m_flMotorTargetAngle; /* 100 4 */
	float m_flMotorFrequency; /* 104 4 */
	float m_flMotorDampingRatio; /* 108 4 */
	float m_flMotorTargetVelocity; /* 112 4 */
	float m_flMotorMaxTorque; /* 116 4 */
	bool m_bEnableLimit; /* 120 1 */
	float m_flMinAngle; /* 124 4 */
	float m_flMaxAngle; /* 128 4 */
	void PhysicsRevoluteJointDesc_t(class PhysicsRevoluteJointDesc_t *, class IPhysicsBody *, class IPhysicsBody *); /* linkage=_ZN26PhysicsRevoluteJointDesc_tC4EP12IPhysicsBodyS1_ */
	void PhysicsRevoluteJointDesc_t(class PhysicsRevoluteJointDesc_t *, const class PhysicsRevoluteJointDesc_t  &); /* linkage=_ZN26PhysicsRevoluteJointDesc_tC4ERKS_ */
	void SetPivot(class PhysicsRevoluteJointDesc_t *, const class Vector  &); /* linkage=_ZN26PhysicsRevoluteJointDesc_t8SetPivotERK6Vector */
	void SetAxis(class PhysicsRevoluteJointDesc_t *, const class Vector  &); /* linkage=_ZN26PhysicsRevoluteJointDesc_t7SetAxisERK6Vector */
	bool IsValid(const class PhysicsRevoluteJointDesc_t  *); /* linkage=_ZNK26PhysicsRevoluteJointDesc_t7IsValidEv */
};

// <00AE4319> ../public/vphysics2/iphysicsjointdesc.h:128
// member functions: 10
// member variables: 11
// class size: 136
class PhysicsPrismaticJointDesc_t : public PhysicsJointDesc_t {
public:
	/* class PhysicsJointDesc_t <ancestor>; */ /* 0 96 */
	/* ../public/vphysics2/iphysicsjointdesc.h:131 */
	void PhysicsPrismaticJointDesc_t(PhysicsPrismaticJointDesc_t* , IPhysicsBody* , IPhysicsBody* );
	/* ../public/vphysics2/iphysicsjointdesc.h:132 */
	void PhysicsPrismaticJointDesc_t(PhysicsPrismaticJointDesc_t* , const PhysicsPrismaticJointDesc_t& );
	/* ../public/vphysics2/iphysicsjointdesc.h:134 */
	void SetPivot(PhysicsPrismaticJointDesc_t* , const Vector& );
	/* ../public/vphysics2/iphysicsjointdesc.h:135 */
	void SetAxis(PhysicsPrismaticJointDesc_t* , const Vector& );
	/* ../public/vphysics2/iphysicsjointdesc.h:136 */
	bool IsValid(const PhysicsPrismaticJointDesc_t* );
	bool m_bUseBlockSolver; /* 92 1 */
	PhysicsJointMotorMode_t m_nMotorMode; /* 96 4 */
	float m_flMotorTargetOffset; /* 100 4 */
	float m_flMotorFrequency; /* 104 4 */
	float m_flMotorDampingRatio; /* 108 4 */
	float m_flMotorTargetVelocity; /* 112 4 */
	float m_flMotorMaxForce; /* 116 4 */
	bool m_bEnableLimit; /* 120 1 */
	float m_flMinOffset; /* 124 4 */
	float m_flMaxOffset; /* 128 4 */
	void PhysicsPrismaticJointDesc_t(class PhysicsPrismaticJointDesc_t *, class IPhysicsBody *, class IPhysicsBody *); /* linkage=_ZN27PhysicsPrismaticJointDesc_tC4EP12IPhysicsBodyS1_ */
	void PhysicsPrismaticJointDesc_t(class PhysicsPrismaticJointDesc_t *, const class PhysicsPrismaticJointDesc_t  &); /* linkage=_ZN27PhysicsPrismaticJointDesc_tC4ERKS_ */
	void SetPivot(class PhysicsPrismaticJointDesc_t *, const class Vector  &); /* linkage=_ZN27PhysicsPrismaticJointDesc_t8SetPivotERK6Vector */
	void SetAxis(class PhysicsPrismaticJointDesc_t *, const class Vector  &); /* linkage=_ZN27PhysicsPrismaticJointDesc_t7SetAxisERK6Vector */
	bool IsValid(const class PhysicsPrismaticJointDesc_t  *); /* linkage=_ZNK27PhysicsPrismaticJointDesc_t7IsValidEv */
};

// <00AE44A4> ../public/vphysics2/iphysicsjointdesc.h:159
// member functions: 10
// member variables: 12
// class size: 160
class PhysicsConicalJointDesc_t : public PhysicsJointDesc_t {
public:
	/* class PhysicsJointDesc_t <ancestor>; */ /* 0 96 */
	/* ../public/vphysics2/iphysicsjointdesc.h:162 */
	void PhysicsConicalJointDesc_t(PhysicsConicalJointDesc_t* , IPhysicsBody* , IPhysicsBody* );
	/* ../public/vphysics2/iphysicsjointdesc.h:163 */
	void PhysicsConicalJointDesc_t(PhysicsConicalJointDesc_t* , const PhysicsConicalJointDesc_t& );
	/* ../public/vphysics2/iphysicsjointdesc.h:165 */
	void SetPivot(PhysicsConicalJointDesc_t* , const Vector& );
	/* ../public/vphysics2/iphysicsjointdesc.h:166 */
	void SetAxis(PhysicsConicalJointDesc_t* , const Vector& );
	/* ../public/vphysics2/iphysicsjointdesc.h:167 */
	bool IsValid(const PhysicsConicalJointDesc_t* );
	PhysicsJointMotorMode_t m_nMotorMode; /* 92 4 */
	Quaternion m_qMotorTargetOrientation; /* 96 16 */
	float m_flMotorFrequency; /* 112 4 */
	float m_flMotorDampingRatio; /* 116 4 */
	Vector m_vMotorTargetVelocity; /* 120 12 */
	float m_flMotorMaxTorque; /* 132 4 */
	bool m_bEnableSwingLimit; /* 136 1 */
	float m_flSwingLimit; /* 140 4 */
	bool m_bEnableTwistLimit; /* 144 1 */
	float m_flMinTwistAngle; /* 148 4 */
	float m_flMaxTwistAngle; /* 152 4 */
	void PhysicsConicalJointDesc_t(class PhysicsConicalJointDesc_t *, class IPhysicsBody *, class IPhysicsBody *); /* linkage=_ZN25PhysicsConicalJointDesc_tC4EP12IPhysicsBodyS1_ */
	void PhysicsConicalJointDesc_t(class PhysicsConicalJointDesc_t *, const class PhysicsConicalJointDesc_t  &); /* linkage=_ZN25PhysicsConicalJointDesc_tC4ERKS_ */
	void SetPivot(class PhysicsConicalJointDesc_t *, const class Vector  &); /* linkage=_ZN25PhysicsConicalJointDesc_t8SetPivotERK6Vector */
	void SetAxis(class PhysicsConicalJointDesc_t *, const class Vector  &); /* linkage=_ZN25PhysicsConicalJointDesc_t7SetAxisERK6Vector */
	bool IsValid(const class PhysicsConicalJointDesc_t  *); /* linkage=_ZNK25PhysicsConicalJointDesc_t7IsValidEv */
};

// <00AE4644> ../public/vphysics2/iphysicsjointdesc.h:191
// member functions: 10
// member variables: 6
// class size: 112
class PhysicsWeldJointDesc_t : public PhysicsJointDesc_t {
public:
	/* class PhysicsJointDesc_t <ancestor>; */ /* 0 96 */
	/* ../public/vphysics2/iphysicsjointdesc.h:194 */
	void PhysicsWeldJointDesc_t(PhysicsWeldJointDesc_t* , IPhysicsBody* , IPhysicsBody* );
	/* ../public/vphysics2/iphysicsjointdesc.h:195 */
	void PhysicsWeldJointDesc_t(PhysicsWeldJointDesc_t* , const PhysicsWeldJointDesc_t& );
	/* ../public/vphysics2/iphysicsjointdesc.h:197 */
	void SetPivot(PhysicsWeldJointDesc_t* , const Vector& );
	/* ../public/vphysics2/iphysicsjointdesc.h:198 */
	void SetBasis(PhysicsWeldJointDesc_t* , const Quaternion& );
	/* ../public/vphysics2/iphysicsjointdesc.h:199 */
	bool IsValid(const PhysicsWeldJointDesc_t* );
	bool m_bUseBlockSolver; /* 92 1 */
	float m_flLinearFrequency; /* 96 4 */
	float m_flLinearDampingRatio; /* 100 4 */
	float m_flAngularFrequency; /* 104 4 */
	float m_flAngularDampingRatio; /* 108 4 */
	void PhysicsWeldJointDesc_t(class PhysicsWeldJointDesc_t *, class IPhysicsBody *, class IPhysicsBody *); /* linkage=_ZN22PhysicsWeldJointDesc_tC4EP12IPhysicsBodyS1_ */
	void PhysicsWeldJointDesc_t(class PhysicsWeldJointDesc_t *, const class PhysicsWeldJointDesc_t  &); /* linkage=_ZN22PhysicsWeldJointDesc_tC4ERKS_ */
	void SetPivot(class PhysicsWeldJointDesc_t *, const class Vector  &); /* linkage=_ZN22PhysicsWeldJointDesc_t8SetPivotERK6Vector */
	void SetBasis(class PhysicsWeldJointDesc_t *, const class Quaternion  &); /* linkage=_ZN22PhysicsWeldJointDesc_t8SetBasisERK10Quaternion */
	bool IsValid(const class PhysicsWeldJointDesc_t  *); /* linkage=_ZNK22PhysicsWeldJointDesc_t7IsValidEv */
};

// <00AE477E> ../public/vphysics2/iphysicsjointdesc.h:217
// member functions: 2
// member variables: 4
// class size: 104
class PhysicsMouseJointDesc_t : public PhysicsJointDesc_t {
public:
	/* class PhysicsJointDesc_t <ancestor>; */ /* 0 96 */
	/* ../public/vphysics2/iphysicsjointdesc.h:220 */
	void PhysicsMouseJointDesc_t(PhysicsMouseJointDesc_t* , IPhysicsBody* , IPhysicsBody* );
	/* ../public/vphysics2/iphysicsjointdesc.h:221 */
	void PhysicsMouseJointDesc_t(PhysicsMouseJointDesc_t* , const PhysicsMouseJointDesc_t& );
	float m_flLinearFrequency; /* 92 4 */
	float m_flLinearDampingRatio; /* 96 4 */
	float m_flMaxForce; /* 100 4 */
};

