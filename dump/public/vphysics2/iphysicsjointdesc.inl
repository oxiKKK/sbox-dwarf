
//
// public/vphysics2/iphysicsjointdesc.inl
//
//	referenced by: libengine2.so
//
//	functions: 23
//

// <00B469D7> ../public/vphysics2/iphysicsjointdesc.inl:7
inline void PhysicsJointDesc_t::IsBreakable()
{
} /* size: 0 */

// <00D1BE19> ../public/vphysics2/iphysicsjointdesc.inl:36
inline void PhysicsJointDesc_t::SetLocalFrame1(const CTransform& xform1)
{
} /* size: 0 */

// <00B469BB> ../public/vphysics2/iphysicsjointdesc.inl:42
inline void PhysicsJointDesc_t::GetLocalFrame1()
{
} /* size: 0 */

// <00D1BDF0> ../public/vphysics2/iphysicsjointdesc.inl:59
inline void PhysicsJointDesc_t::SetLocalFrame2(const CTransform& xform2)
{
} /* size: 0 */

// <00B4699F> ../public/vphysics2/iphysicsjointdesc.inl:65
inline void PhysicsJointDesc_t::GetLocalFrame2()
{
} /* size: 0 */

// <00B46184> ../public/vphysics2/iphysicsjointdesc.inl:90
// variables: 3
// function calls: 36
void PhysicsJointDesc_t::IsValid()
{
	const char   __FUNCTION__; // 61373
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 103
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 110
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 99
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 99
	Quaternion::Length(); // 2122
	QuaternionLength(const Quaternion& q); // 103
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 106
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 106
	Quaternion::Length(); // 2122
	QuaternionLength(const Quaternion& q); // 110
} /* size: 513, variables: 1, inline expansions: 36 (448 bytes) */

// <00D1BDCA> ../public/vphysics2/iphysicsjointdesc.inl:115
void PhysicsJointDesc_t::PhysicsJointDesc_t(PhysicsJointType_t nType, IPhysicsBody* pBody1, IPhysicsBody* pBody2)
{
} /* size: 0 */

// <00D1BD89> ../public/vphysics2/iphysicsjointdesc.inl:115
inline void PhysicsJointDesc_t::PhysicsJointDesc_t(PhysicsJointType_t nType, IPhysicsBody* pBody1, IPhysicsBody* pBody2)
{
} /* size: 0 */

// <00D1BD68> ../public/vphysics2/iphysicsjointdesc.inl:130
void PhysicsSphericalJointDesc_t::PhysicsSphericalJointDesc_t(IPhysicsBody* pBody1, IPhysicsBody* pBody2)
{
} /* size: 0 */

// <00D1BD33> ../public/vphysics2/iphysicsjointdesc.inl:130
inline void PhysicsSphericalJointDesc_t::PhysicsSphericalJointDesc_t(IPhysicsBody* pBody1, IPhysicsBody* pBody2)
{
} /* size: 0 */

// <00B46168> ../public/vphysics2/iphysicsjointdesc.inl:150
inline void PhysicsSphericalJointDesc_t::IsValid()
{
} /* size: 0 */

// <00D1BD12> ../public/vphysics2/iphysicsjointdesc.inl:170
void PhysicsRevoluteJointDesc_t::PhysicsRevoluteJointDesc_t(IPhysicsBody* pBody1, IPhysicsBody* pBody2)
{
} /* size: 0 */

// <00D1BCDD> ../public/vphysics2/iphysicsjointdesc.inl:170
inline void PhysicsRevoluteJointDesc_t::PhysicsRevoluteJointDesc_t(IPhysicsBody* pBody1, IPhysicsBody* pBody2)
{
} /* size: 0 */

// <00B4614C> ../public/vphysics2/iphysicsjointdesc.inl:208
inline void PhysicsRevoluteJointDesc_t::IsValid()
{
} /* size: 0 */

// <00D1BCBC> ../public/vphysics2/iphysicsjointdesc.inl:252
void PhysicsPrismaticJointDesc_t::PhysicsPrismaticJointDesc_t(IPhysicsBody* pBody1, IPhysicsBody* pBody2)
{
} /* size: 0 */

// <00D1BC87> ../public/vphysics2/iphysicsjointdesc.inl:252
inline void PhysicsPrismaticJointDesc_t::PhysicsPrismaticJointDesc_t(IPhysicsBody* pBody1, IPhysicsBody* pBody2)
{
} /* size: 0 */

// <00B4612F> ../public/vphysics2/iphysicsjointdesc.inl:292
inline void PhysicsPrismaticJointDesc_t::IsValid()
{
} /* size: 0 */

// <00D1BC66> ../public/vphysics2/iphysicsjointdesc.inl:331
void PhysicsConicalJointDesc_t::PhysicsConicalJointDesc_t(IPhysicsBody* pBody1, IPhysicsBody* pBody2)
{
} /* size: 0 */

// <00D1BC2E> ../public/vphysics2/iphysicsjointdesc.inl:331
inline void PhysicsConicalJointDesc_t::PhysicsConicalJointDesc_t(IPhysicsBody* pBody1, IPhysicsBody* pBody2)
{
} /* size: 0 */

// <00B46112> ../public/vphysics2/iphysicsjointdesc.inl:372
inline void PhysicsConicalJointDesc_t::IsValid()
{
} /* size: 0 */

// <00D1BC0D> ../public/vphysics2/iphysicsjointdesc.inl:407
void PhysicsWeldJointDesc_t::PhysicsWeldJointDesc_t(IPhysicsBody* pBody1, IPhysicsBody* pBody2)
{
} /* size: 0 */

// <00D1BBD5> ../public/vphysics2/iphysicsjointdesc.inl:407
inline void PhysicsWeldJointDesc_t::PhysicsWeldJointDesc_t(IPhysicsBody* pBody1, IPhysicsBody* pBody2)
{
} /* size: 0 */

// <00B460F5> ../public/vphysics2/iphysicsjointdesc.inl:441
inline void PhysicsWeldJointDesc_t::IsValid()
{
} /* size: 0 */

