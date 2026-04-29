
//
// box3d/include/box3d/box3d.h
//
//	referenced by: libengine2.so
//
//	functions: 256
//

// <00B0B336> ../box3d/include/box3d/box3d.h:28
b3WorldId b3CreateWorld(const b3WorldDef *)
{
} /* size: 0 */

// <00B0B31C> ../box3d/include/box3d/box3d.h:40
bool b3World_IsValid(b3WorldId)
{
} /* size: 0 */

// <00B0A973> ../box3d/include/box3d/box3d.h:46
void b3World_Step(b3WorldId, float, int)
{
} /* size: 0 */

// <00B0AB4F> ../box3d/include/box3d/box3d.h:49
void b3World_Draw(b3WorldId, b3DebugDraw *, uint64_t)
{
} /* size: 0 */

// <00B0A92B> ../box3d/include/box3d/box3d.h:52
b3BodyEvents b3World_GetBodyEvents(b3WorldId)
{
} /* size: 0 */

// <00B0AA9B> ../box3d/include/box3d/box3d.h:55
b3SensorEvents b3World_GetSensorEvents(b3WorldId)
{
} /* size: 0 */

// <00B0AAB5> ../box3d/include/box3d/box3d.h:58
b3ContactEvents b3World_GetContactEvents(b3WorldId)
{
} /* size: 0 */

// <00B0A8F5> ../box3d/include/box3d/box3d.h:61
b3JointEvents b3World_GetJointEvents(b3WorldId)
{
} /* size: 0 */

// <00B0A79D> ../box3d/include/box3d/box3d.h:68
b3TreeStats b3World_OverlapShape(b3WorldId, const b3ShapeProxy *, b3QueryFilter, b3OverlapResultFcn *, void *)
{
} /* size: 0 */

// <00B0A861> ../box3d/include/box3d/box3d.h:81
b3TreeStats b3World_CastRay(b3WorldId, b3Vec3, b3Vec3, b3QueryFilter, b3CastResultFcn *, void *)
{
} /* size: 0 */

// <00B0A828> ../box3d/include/box3d/box3d.h:90
b3TreeStats b3World_CastShape(b3WorldId, const b3ShapeProxy *, b3Vec3, b3QueryFilter, b3CastResultFcn *, void *)
{
} /* size: 0 */

// <00B0A8DA> ../box3d/include/box3d/box3d.h:106
void b3World_EnableSleeping(b3WorldId, bool)
{
} /* size: 0 */

// <00B0A8C0> ../box3d/include/box3d/box3d.h:109
bool b3World_IsSleepingEnabled(b3WorldId)
{
} /* size: 0 */

// <00B0AAE9> ../box3d/include/box3d/box3d.h:115
void b3World_EnableContinuous(b3WorldId, bool)
{
} /* size: 0 */

// <00B0AACF> ../box3d/include/box3d/box3d.h:118
bool b3World_IsContinuousEnabled(b3WorldId)
{
} /* size: 0 */

// <00B0B2F6> ../box3d/include/box3d/box3d.h:137
void b3World_SetCustomFilterCallback(b3WorldId, b3CustomFilterFcn *, void *)
{
} /* size: 0 */

// <00B0B2D0> ../box3d/include/box3d/box3d.h:140
void b3World_SetPreSolveCallback(b3WorldId, b3PreSolveFcn *, void *)
{
} /* size: 0 */

// <00B0AC20> ../box3d/include/box3d/box3d.h:145
void b3World_SetGravity(b3WorldId, b3Vec3)
{
} /* size: 0 */

// <00B0AC06> ../box3d/include/box3d/box3d.h:148
b3Vec3 b3World_GetGravity(b3WorldId)
{
} /* size: 0 */

// <00B0A783> ../box3d/include/box3d/box3d.h:192
void* b3World_GetUserData(b3WorldId)
{
} /* size: 0 */

// <00B0AECD> ../box3d/include/box3d/box3d.h:230
b3BodyId b3CreateBody(b3WorldId, const b3BodyDef *)
{
} /* size: 0 */

// <00B0AF3D> ../box3d/include/box3d/box3d.h:234
void b3DestroyBody(b3BodyId)
{
} /* size: 0 */

// <00B0B086> ../box3d/include/box3d/box3d.h:238
bool b3Body_IsValid(b3BodyId)
{
} /* size: 0 */

// <00B9A021> ../box3d/include/box3d/box3d.h:241
b3BodyType b3Body_GetType(b3BodyId)
{
} /* size: 0 */

// <00B9A007> ../box3d/include/box3d/box3d.h:245
void b3Body_SetType(b3BodyId, b3BodyType)
{
} /* size: 0 */

// <00B0AF53> ../box3d/include/box3d/box3d.h:254
void b3Body_SetUserData(b3BodyId, void *)
{
} /* size: 0 */

// <00B9955D> ../box3d/include/box3d/box3d.h:257
void* b3Body_GetUserData(b3BodyId)
{
} /* size: 0 */

// <00B99DBF> ../box3d/include/box3d/box3d.h:260
b3Vec3 b3Body_GetPosition(b3BodyId)
{
} /* size: 0 */

// <00B99DF7> ../box3d/include/box3d/box3d.h:263
b3Quat b3Body_GetRotation(b3BodyId)
{
} /* size: 0 */

// <00B99D75> ../box3d/include/box3d/box3d.h:266
b3Transform b3Body_GetTransform(b3BodyId)
{
} /* size: 0 */

// <00B99A75> ../box3d/include/box3d/box3d.h:274
b3Vec3 b3Body_GetLocalPoint(b3BodyId, b3Vec3)
{
} /* size: 0 */

// <00B99A57> ../box3d/include/box3d/box3d.h:277
b3Vec3 b3Body_GetWorldPoint(b3BodyId, b3Vec3)
{
} /* size: 0 */

// <00B99D42> ../box3d/include/box3d/box3d.h:286
b3Vec3 b3Body_GetLinearVelocity(b3BodyId)
{
} /* size: 0 */

// <00B99CF1> ../box3d/include/box3d/box3d.h:289
b3Vec3 b3Body_GetAngularVelocity(b3BodyId)
{
} /* size: 0 */

// <00B99D5B> ../box3d/include/box3d/box3d.h:292
void b3Body_SetLinearVelocity(b3BodyId, b3Vec3)
{
} /* size: 0 */

// <00B99D0A> ../box3d/include/box3d/box3d.h:295
void b3Body_SetAngularVelocity(b3BodyId, b3Vec3)
{
} /* size: 0 */

// <00B9964A> ../box3d/include/box3d/box3d.h:301
void b3Body_SetTargetTransform(b3BodyId, b3Transform, float, bool)
{
} /* size: 0 */

// <00B99D24> ../box3d/include/box3d/box3d.h:307
b3Vec3 b3Body_GetWorldPointVelocity(b3BodyId, b3Vec3)
{
} /* size: 0 */

// <00B99BE6> ../box3d/include/box3d/box3d.h:316
void b3Body_ApplyForce(b3BodyId, b3Vec3, b3Vec3, bool)
{
} /* size: 0 */

// <00B99C0A> ../box3d/include/box3d/box3d.h:323
void b3Body_ApplyForceToCenter(b3BodyId, b3Vec3, bool)
{
} /* size: 0 */

// <00B99BC7> ../box3d/include/box3d/box3d.h:330
void b3Body_ApplyTorque(b3BodyId, b3Vec3, bool)
{
} /* size: 0 */

// <00B99C48> ../box3d/include/box3d/box3d.h:342
void b3Body_ApplyLinearImpulse(b3BodyId, b3Vec3, b3Vec3, bool)
{
} /* size: 0 */

// <00B99C6C> ../box3d/include/box3d/box3d.h:351
void b3Body_ApplyLinearImpulseToCenter(b3BodyId, b3Vec3, bool)
{
} /* size: 0 */

// <00B99C29> ../box3d/include/box3d/box3d.h:360
void b3Body_ApplyAngularImpulse(b3BodyId, b3Vec3, bool)
{
} /* size: 0 */

// <00B99F34> ../box3d/include/box3d/box3d.h:363
float b3Body_GetMass(b3BodyId)
{
} /* size: 0 */

// <00B99F1B> ../box3d/include/box3d/box3d.h:366
b3Matrix3 b3Body_GetLocalRotationalInertia(b3BodyId)
{
} /* size: 0 */

// <00C5C4D4> ../box3d/include/box3d/box3d.h:369
float b3Body_GetInverseMass(b3BodyId)
{
} /* size: 0 */

// <00B99E8A> ../box3d/include/box3d/box3d.h:375
b3Vec3 b3Body_GetLocalCenterOfMass(b3BodyId)
{
} /* size: 0 */

// <00B99EA3> ../box3d/include/box3d/box3d.h:378
b3Vec3 b3Body_GetWorldCenterOfMass(b3BodyId)
{
} /* size: 0 */

// <00B99E10> ../box3d/include/box3d/box3d.h:383
void b3Body_SetMassData(b3BodyId, b3MassData)
{
} /* size: 0 */

// <00B99E5C> ../box3d/include/box3d/box3d.h:386
b3MassData b3Body_GetMassData(b3BodyId)
{
} /* size: 0 */

// <00B99E75> ../box3d/include/box3d/box3d.h:393
void b3Body_ApplyMassFromShapes(b3BodyId)
{
} /* size: 0 */

// <00B99CD7> ../box3d/include/box3d/box3d.h:396
void b3Body_SetLinearDamping(b3BodyId, float)
{
} /* size: 0 */

// <00B99CBE> ../box3d/include/box3d/box3d.h:399
float b3Body_GetLinearDamping(b3BodyId)
{
} /* size: 0 */

// <00B99CA4> ../box3d/include/box3d/box3d.h:402
void b3Body_SetAngularDamping(b3BodyId, float)
{
} /* size: 0 */

// <00B99C8B> ../box3d/include/box3d/box3d.h:405
float b3Body_GetAngularDamping(b3BodyId)
{
} /* size: 0 */

// <00B99F4D> ../box3d/include/box3d/box3d.h:409
void b3Body_SetGravityScale(b3BodyId, float)
{
} /* size: 0 */

// <00C5C46C> ../box3d/include/box3d/box3d.h:412
float b3Body_GetGravityScale(b3BodyId)
{
} /* size: 0 */

// <00B99A93> ../box3d/include/box3d/box3d.h:415
bool b3Body_IsAwake(b3BodyId)
{
} /* size: 0 */

// <00B99B46> ../box3d/include/box3d/box3d.h:420
void b3Body_SetAwake(b3BodyId, bool)
{
} /* size: 0 */

// <00B99B79> ../box3d/include/box3d/box3d.h:423
void b3Body_EnableSleep(b3BodyId, bool)
{
} /* size: 0 */

// <00B99B60> ../box3d/include/box3d/box3d.h:426
bool b3Body_IsSleepEnabled(b3BodyId)
{
} /* size: 0 */

// <00B9966E> ../box3d/include/box3d/box3d.h:435
bool b3Body_IsEnabled(b3BodyId)
{
} /* size: 0 */

// <00B99687> ../box3d/include/box3d/box3d.h:438
void b3Body_Disable(b3BodyId)
{
} /* size: 0 */

// <00B9969C> ../box3d/include/box3d/box3d.h:441
void b3Body_Enable(b3BodyId)
{
} /* size: 0 */

// <00B99630> ../box3d/include/box3d/box3d.h:444
void b3Body_SetMotionLocks(b3BodyId, b3MotionLocks)
{
} /* size: 0 */

// <00B99576> ../box3d/include/box3d/box3d.h:451
void b3Body_SetBullet(b3BodyId, bool)
{
} /* size: 0 */

// <00B99FEE> ../box3d/include/box3d/box3d.h:461
b3WorldId b3Body_GetWorld(b3BodyId)
{
} /* size: 0 */

// <00B0AFD0> ../box3d/include/box3d/box3d.h:464
int b3Body_GetShapeCount(b3BodyId)
{
} /* size: 0 */

// <00B0AFA5> ../box3d/include/box3d/box3d.h:468
int b3Body_GetShapes(b3BodyId, b3ShapeId *, int)
{
} /* size: 0 */

// <00B0B06B> ../box3d/include/box3d/box3d.h:471
int b3Body_GetJointCount(b3BodyId)
{
} /* size: 0 */

// <00B0B040> ../box3d/include/box3d/box3d.h:475
int b3Body_GetJoints(b3BodyId, b3JointId *, int)
{
} /* size: 0 */

// <00B99B2D> ../box3d/include/box3d/box3d.h:478
int b3Body_GetContactCapacity(b3BodyId)
{
} /* size: 0 */

// <00B99B04> ../box3d/include/box3d/box3d.h:481
int b3Body_GetContactData(b3BodyId, b3ContactData *, int)
{
} /* size: 0 */

// <00CA6FDF> ../box3d/include/box3d/box3d.h:485
b3AABB b3Body_ComputeAABB(b3BodyId)
{
} /* size: 0 */

// <00B996B1> ../box3d/include/box3d/box3d.h:497
bool b3Body_OverlapShape(b3BodyId, const b3ShapeProxy *, b3QueryFilter, b3Transform)
{
} /* size: 0 */

// <00B999C0> ../box3d/include/box3d/box3d.h:515
b3ShapeId b3CreateSphereShape(b3BodyId, const b3ShapeDef *, const b3Sphere *)
{
} /* size: 0 */

// <00B99976> ../box3d/include/box3d/box3d.h:520
b3ShapeId b3CreateCapsuleShape(b3BodyId, const b3ShapeDef *, const b3Capsule *)
{
} /* size: 0 */

// <00B99935> ../box3d/include/box3d/box3d.h:525
b3ShapeId b3CreateHullShape(b3BodyId, const b3ShapeDef *, const b3Hull *)
{
} /* size: 0 */

// <00B9981A> ../box3d/include/box3d/box3d.h:536
b3ShapeId b3CreateMeshShape(b3BodyId, const b3ShapeDef *, const b3MeshData *, b3Vec3)
{
} /* size: 0 */

// <00B99775> ../box3d/include/box3d/box3d.h:542
b3ShapeId b3CreateHeightFieldShape(b3BodyId, const b3ShapeDef *, const b3HeightField *)
{
} /* size: 0 */

// <00B99F80> ../box3d/include/box3d/box3d.h:549
void b3DestroyShape(b3ShapeId, bool)
{
} /* size: 0 */

// <00B0AF8A> ../box3d/include/box3d/box3d.h:552
bool b3Shape_IsValid(b3ShapeId)
{
} /* size: 0 */

// <00B0AA2F> ../box3d/include/box3d/box3d.h:555
b3ShapeType b3Shape_GetType(b3ShapeId)
{
} /* size: 0 */

// <00B99AEB> ../box3d/include/box3d/box3d.h:558
b3BodyId b3Shape_GetBody(b3ShapeId)
{
} /* size: 0 */

// <00CA748E> ../box3d/include/box3d/box3d.h:564
bool b3Shape_IsSensor(b3ShapeId)
{
} /* size: 0 */

// <00B0AF6E> ../box3d/include/box3d/box3d.h:573
void b3Shape_SetUserData(b3ShapeId, void *)
{
} /* size: 0 */

// <00CA6F04> ../box3d/include/box3d/box3d.h:577
void* b3Shape_GetUserData(b3ShapeId)
{
} /* size: 0 */

// <00CA7456> ../box3d/include/box3d/box3d.h:582
void b3Shape_SetDensity(b3ShapeId, float, bool)
{
} /* size: 0 */

// <00B99A0F> ../box3d/include/box3d/box3d.h:585
float b3Shape_GetDensity(b3ShapeId)
{
} /* size: 0 */

// <00CA74A7> ../box3d/include/box3d/box3d.h:600
void b3Shape_SetSurfaceMaterial(b3ShapeId, b3SurfaceMaterial)
{
} /* size: 0 */

// <00CA6F53> ../box3d/include/box3d/box3d.h:603
b3SurfaceMaterial b3Shape_GetSurfaceMaterial(b3ShapeId)
{
} /* size: 0 */

// <00B0AA4A> ../box3d/include/box3d/box3d.h:606
int b3Shape_GetMeshMaterialCount(b3ShapeId)
{
} /* size: 0 */

// <00CA741E> ../box3d/include/box3d/box3d.h:609
void b3Shape_SetMeshMaterial(b3ShapeId, b3SurfaceMaterial, int)
{
} /* size: 0 */

// <00B0A9D0> ../box3d/include/box3d/box3d.h:612
b3SurfaceMaterial b3Shape_GetMeshSurfaceMaterial(b3ShapeId, int)
{
} /* size: 0 */

// <00CA73F8> ../box3d/include/box3d/box3d.h:633
void b3Shape_EnableContactEvents(b3ShapeId, bool)
{
} /* size: 0 */

// <00CA73DE> ../box3d/include/box3d/box3d.h:648
void b3Shape_EnableHitEvents(b3ShapeId, bool)
{
} /* size: 0 */

// <00B0A7D7> ../box3d/include/box3d/box3d.h:657
b3Sphere b3Shape_GetSphere(b3ShapeId)
{
} /* size: 0 */

// <00B0A7F2> ../box3d/include/box3d/box3d.h:660
b3Capsule b3Shape_GetCapsule(b3ShapeId)
{
} /* size: 0 */

// <00B0A80D> ../box3d/include/box3d/box3d.h:663
const b3Hull* b3Shape_GetHull(b3ShapeId)
{
} /* size: 0 */

// <00B0AA14> ../box3d/include/box3d/box3d.h:666
b3Mesh b3Shape_GetMesh(b3ShapeId)
{
} /* size: 0 */

// <00B0A9B5> ../box3d/include/box3d/box3d.h:669
const b3HeightField* b3Shape_GetHeightField(b3ShapeId)
{
} /* size: 0 */

// <00CA7160> ../box3d/include/box3d/box3d.h:674
void b3Shape_SetSphere(b3ShapeId, const b3Sphere *)
{
} /* size: 0 */

// <00CA7146> ../box3d/include/box3d/box3d.h:679
void b3Shape_SetCapsule(b3ShapeId, const b3Capsule *)
{
} /* size: 0 */

// <00CA71DD> ../box3d/include/box3d/box3d.h:684
void b3Shape_SetHull(b3ShapeId, const b3Hull *)
{
} /* size: 0 */

// <00CA718F> ../box3d/include/box3d/box3d.h:689
void b3Shape_SetMesh(b3ShapeId, const b3MeshData *, b3Vec3)
{
} /* size: 0 */

// <00CA73A6> ../box3d/include/box3d/box3d.h:716
b3AABB b3Shape_GetAABB(b3ShapeId)
{
} /* size: 0 */

// <00B0AF03> ../box3d/include/box3d/box3d.h:744
void b3DestroyJoint(b3JointId, bool)
{
} /* size: 0 */

// <00B0B025> ../box3d/include/box3d/box3d.h:747
bool b3Joint_IsValid(b3JointId)
{
} /* size: 0 */

// <00C5CAA1> ../box3d/include/box3d/box3d.h:750
b3JointType b3Joint_GetType(b3JointId)
{
} /* size: 0 */

// <00C5CA49> ../box3d/include/box3d/box3d.h:753
b3BodyId b3Joint_GetBodyA(b3JointId)
{
} /* size: 0 */

// <00C5CA11> ../box3d/include/box3d/box3d.h:756
b3BodyId b3Joint_GetBodyB(b3JointId)
{
} /* size: 0 */

// <00C5CA87> ../box3d/include/box3d/box3d.h:759
b3WorldId b3Joint_GetWorld(b3JointId)
{
} /* size: 0 */

// <00C5C397> ../box3d/include/box3d/box3d.h:762
void b3Joint_SetLocalFrameA(b3JointId, b3Transform)
{
} /* size: 0 */

// <00C5C3B2> ../box3d/include/box3d/box3d.h:765
b3Transform b3Joint_GetLocalFrameA(b3JointId)
{
} /* size: 0 */

// <00C5C37C> ../box3d/include/box3d/box3d.h:768
void b3Joint_SetLocalFrameB(b3JointId, b3Transform)
{
} /* size: 0 */

// <00C5C452> ../box3d/include/box3d/box3d.h:771
b3Transform b3Joint_GetLocalFrameB(b3JointId)
{
} /* size: 0 */

// <00C5C9F6> ../box3d/include/box3d/box3d.h:774
void b3Joint_SetCollideConnected(b3JointId, bool)
{
} /* size: 0 */

// <00C5C9DC> ../box3d/include/box3d/box3d.h:777
bool b3Joint_GetCollideConnected(b3JointId)
{
} /* size: 0 */

// <00B0AFEB> ../box3d/include/box3d/box3d.h:780
void b3Joint_SetUserData(b3JointId, void *)
{
} /* size: 0 */

// <00C5BBA8> ../box3d/include/box3d/box3d.h:783
void* b3Joint_GetUserData(b3JointId)
{
} /* size: 0 */

// <00C5C2B8> ../box3d/include/box3d/box3d.h:789
b3Vec3 b3Joint_GetConstraintForce(b3JointId)
{
} /* size: 0 */

// <00C5C29E> ../box3d/include/box3d/box3d.h:792
b3Vec3 b3Joint_GetConstraintTorque(b3JointId)
{
} /* size: 0 */

// <00C5C24F> ../box3d/include/box3d/box3d.h:810
void b3Joint_SetForceThreshold(b3JointId, float)
{
} /* size: 0 */

// <00C5C284> ../box3d/include/box3d/box3d.h:813
float b3Joint_GetForceThreshold(b3JointId)
{
} /* size: 0 */

// <00C5C234> ../box3d/include/box3d/box3d.h:816
void b3Joint_SetTorqueThreshold(b3JointId, float)
{
} /* size: 0 */

// <00C5C26A> ../box3d/include/box3d/box3d.h:819
float b3Joint_GetTorqueThreshold(b3JointId)
{
} /* size: 0 */

// <00B0AC8C> ../box3d/include/box3d/box3d.h:829
b3JointId b3CreateParallelJoint(b3WorldId, const b3ParallelJointDef *)
{
} /* size: 0 */

// <00C5BC46> ../box3d/include/box3d/box3d.h:832
void b3ParallelJoint_SetSpringHertz(b3JointId, float)
{
} /* size: 0 */

// <00C5BC11> ../box3d/include/box3d/box3d.h:835
void b3ParallelJoint_SetSpringDampingRatio(b3JointId, float)
{
} /* size: 0 */

// <00C5BC2C> ../box3d/include/box3d/box3d.h:838
float b3ParallelJoint_GetSpringHertz(b3JointId)
{
} /* size: 0 */

// <00C5BBF7> ../box3d/include/box3d/box3d.h:841
float b3ParallelJoint_GetSpringDampingRatio(b3JointId)
{
} /* size: 0 */

// <00C5BBDC> ../box3d/include/box3d/box3d.h:844
void b3ParallelJoint_SetMaxTorque(b3JointId, float)
{
} /* size: 0 */

// <00C5BBC2> ../box3d/include/box3d/box3d.h:847
float b3ParallelJoint_GetMaxTorque(b3JointId)
{
} /* size: 0 */

// <00B0AD31> ../box3d/include/box3d/box3d.h:858
b3JointId b3CreateDistanceJoint(b3WorldId, const b3DistanceJointDef *)
{
} /* size: 0 */

// <00C5C98B> ../box3d/include/box3d/box3d.h:863
void b3DistanceJoint_SetLength(b3JointId, float)
{
} /* size: 0 */

// <00C5C93B> ../box3d/include/box3d/box3d.h:866
float b3DistanceJoint_GetLength(b3JointId)
{
} /* size: 0 */

// <00C5C73A> ../box3d/include/box3d/box3d.h:875
void b3DistanceJoint_SetSpringForceRange(b3JointId, float, float)
{
} /* size: 0 */

// <00C5C75A> ../box3d/include/box3d/box3d.h:878
void b3DistanceJoint_GetSpringForceRange(b3JointId, float *, float *)
{
} /* size: 0 */

// <00C5C9C1> ../box3d/include/box3d/box3d.h:881
void b3DistanceJoint_SetSpringHertz(b3JointId, float)
{
} /* size: 0 */

// <00C5C9A6> ../box3d/include/box3d/box3d.h:884
void b3DistanceJoint_SetSpringDampingRatio(b3JointId, float)
{
} /* size: 0 */

// <00C5C907> ../box3d/include/box3d/box3d.h:887
float b3DistanceJoint_GetSpringHertz(b3JointId)
{
} /* size: 0 */

// <00C5C921> ../box3d/include/box3d/box3d.h:890
float b3DistanceJoint_GetSpringDampingRatio(b3JointId)
{
} /* size: 0 */

// <00C5C899> ../box3d/include/box3d/box3d.h:900
void b3DistanceJoint_SetLengthRange(b3JointId, float, float)
{
} /* size: 0 */

// <00C5C7AE> ../box3d/include/box3d/box3d.h:903
float b3DistanceJoint_GetMinLength(b3JointId)
{
} /* size: 0 */

// <00C5C8B9> ../box3d/include/box3d/box3d.h:906
float b3DistanceJoint_GetMaxLength(b3JointId)
{
} /* size: 0 */

// <00B0ACFA> ../box3d/include/box3d/box3d.h:947
b3JointId b3CreateMotorJoint(b3WorldId, const b3MotorJointDef *)
{
} /* size: 0 */

// <00C5C219> ../box3d/include/box3d/box3d.h:950
void b3MotorJoint_SetLinearVelocity(b3JointId, b3Vec3)
{
} /* size: 0 */

// <00C5C10C> ../box3d/include/box3d/box3d.h:953
b3Vec3 b3MotorJoint_GetLinearVelocity(b3JointId)
{
} /* size: 0 */

// <00C5C1FE> ../box3d/include/box3d/box3d.h:956
void b3MotorJoint_SetAngularVelocity(b3JointId, b3Vec3)
{
} /* size: 0 */

// <00C5C0F2> ../box3d/include/box3d/box3d.h:959
b3Vec3 b3MotorJoint_GetAngularVelocity(b3JointId)
{
} /* size: 0 */

// <00C5C1E3> ../box3d/include/box3d/box3d.h:962
void b3MotorJoint_SetMaxVelocityForce(b3JointId, float)
{
} /* size: 0 */

// <00C5C0D8> ../box3d/include/box3d/box3d.h:965
float b3MotorJoint_GetMaxVelocityForce(b3JointId)
{
} /* size: 0 */

// <00C5C1C8> ../box3d/include/box3d/box3d.h:968
void b3MotorJoint_SetMaxVelocityTorque(b3JointId, float)
{
} /* size: 0 */

// <00C5C0BE> ../box3d/include/box3d/box3d.h:971
float b3MotorJoint_GetMaxVelocityTorque(b3JointId)
{
} /* size: 0 */

// <00C5C1AD> ../box3d/include/box3d/box3d.h:974
void b3MotorJoint_SetLinearHertz(b3JointId, float)
{
} /* size: 0 */

// <00C5C0A4> ../box3d/include/box3d/box3d.h:977
float b3MotorJoint_GetLinearHertz(b3JointId)
{
} /* size: 0 */

// <00C5C192> ../box3d/include/box3d/box3d.h:980
void b3MotorJoint_SetLinearDampingRatio(b3JointId, float)
{
} /* size: 0 */

// <00C5C08A> ../box3d/include/box3d/box3d.h:983
float b3MotorJoint_GetLinearDampingRatio(b3JointId)
{
} /* size: 0 */

// <00C5C177> ../box3d/include/box3d/box3d.h:986
void b3MotorJoint_SetAngularHertz(b3JointId, float)
{
} /* size: 0 */

// <00C5C070> ../box3d/include/box3d/box3d.h:989
float b3MotorJoint_GetAngularHertz(b3JointId)
{
} /* size: 0 */

// <00C5C15C> ../box3d/include/box3d/box3d.h:992
void b3MotorJoint_SetAngularDampingRatio(b3JointId, float)
{
} /* size: 0 */

// <00C5C056> ../box3d/include/box3d/box3d.h:995
float b3MotorJoint_GetAngularDampingRatio(b3JointId)
{
} /* size: 0 */

// <00C5C141> ../box3d/include/box3d/box3d.h:998
void b3MotorJoint_SetMaxSpringForce(b3JointId, float)
{
} /* size: 0 */

// <00C5C03C> ../box3d/include/box3d/box3d.h:1001
float b3MotorJoint_GetMaxSpringForce(b3JointId)
{
} /* size: 0 */

// <00C5C126> ../box3d/include/box3d/box3d.h:1004
void b3MotorJoint_SetMaxSpringTorque(b3JointId, float)
{
} /* size: 0 */

// <00B0AC55> ../box3d/include/box3d/box3d.h:1023
b3JointId b3CreateFilterJoint(b3WorldId, const b3FilterJointDef *)
{
} /* size: 0 */

// <00B0AD9F> ../box3d/include/box3d/box3d.h:1038
b3JointId b3CreatePrismaticJoint(b3WorldId, const b3PrismaticJointDef *)
{
} /* size: 0 */

// <00C5C41D> ../box3d/include/box3d/box3d.h:1041
void b3PrismaticJoint_EnableSpring(b3JointId, bool)
{
} /* size: 0 */

// <00C5C83D> ../box3d/include/box3d/box3d.h:1067
void b3PrismaticJoint_EnableLimit(b3JointId, bool)
{
} /* size: 0 */

// <00C5C794> ../box3d/include/box3d/box3d.h:1073
float b3PrismaticJoint_GetLowerLimit(b3JointId)
{
} /* size: 0 */

// <00C5C87F> ../box3d/include/box3d/box3d.h:1076
float b3PrismaticJoint_GetUpperLimit(b3JointId)
{
} /* size: 0 */

// <00C5C81D> ../box3d/include/box3d/box3d.h:1079
void b3PrismaticJoint_SetLimits(b3JointId, float, float)
{
} /* size: 0 */

// <00C5C402> ../box3d/include/box3d/box3d.h:1082
void b3PrismaticJoint_EnableMotor(b3JointId, bool)
{
} /* size: 0 */

// <00C5C3E7> ../box3d/include/box3d/box3d.h:1088
void b3PrismaticJoint_SetMotorSpeed(b3JointId, float)
{
} /* size: 0 */

// <00C5C3CC> ../box3d/include/box3d/box3d.h:1094
void b3PrismaticJoint_SetMaxMotorForce(b3JointId, float)
{
} /* size: 0 */

// <00B0ADD6> ../box3d/include/box3d/box3d.h:1121
b3JointId b3CreateRevoluteJoint(b3WorldId, const b3RevoluteJointDef *)
{
} /* size: 0 */

// <00C5C6CE> ../box3d/include/box3d/box3d.h:1124
void b3RevoluteJoint_EnableSpring(b3JointId, bool)
{
} /* size: 0 */

// <00C5C698> ../box3d/include/box3d/box3d.h:1130
void b3RevoluteJoint_SetSpringHertz(b3JointId, float)
{
} /* size: 0 */

// <00C5C522> ../box3d/include/box3d/box3d.h:1133
float b3RevoluteJoint_GetSpringHertz(b3JointId)
{
} /* size: 0 */

// <00C5C67D> ../box3d/include/box3d/box3d.h:1136
void b3RevoluteJoint_SetSpringDampingRatio(b3JointId, float)
{
} /* size: 0 */

// <00C5C53C> ../box3d/include/box3d/box3d.h:1139
float b3RevoluteJoint_GetSpringDampingRatio(b3JointId)
{
} /* size: 0 */

// <00C5C6B3> ../box3d/include/box3d/box3d.h:1142
void b3RevoluteJoint_SetTargetAngle(b3JointId, float)
{
} /* size: 0 */

// <00C5C508> ../box3d/include/box3d/box3d.h:1145
float b3RevoluteJoint_GetTargetAngle(b3JointId)
{
} /* size: 0 */

// <00C5C2D2> ../box3d/include/box3d/box3d.h:1149
float b3RevoluteJoint_GetAngle(b3JointId)
{
} /* size: 0 */

// <00C5C7E8> ../box3d/include/box3d/box3d.h:1152
void b3RevoluteJoint_EnableLimit(b3JointId, bool)
{
} /* size: 0 */

// <00C5C77A> ../box3d/include/box3d/box3d.h:1158
float b3RevoluteJoint_GetLowerLimit(b3JointId)
{
} /* size: 0 */

// <00C5C803> ../box3d/include/box3d/box3d.h:1161
float b3RevoluteJoint_GetUpperLimit(b3JointId)
{
} /* size: 0 */

// <00C5C7C8> ../box3d/include/box3d/box3d.h:1164
void b3RevoluteJoint_SetLimits(b3JointId, float, float)
{
} /* size: 0 */

// <00C5C6E9> ../box3d/include/box3d/box3d.h:1167
void b3RevoluteJoint_EnableMotor(b3JointId, bool)
{
} /* size: 0 */

// <00C5C662> ../box3d/include/box3d/box3d.h:1173
void b3RevoluteJoint_SetMotorSpeed(b3JointId, float)
{
} /* size: 0 */

// <00C5C647> ../box3d/include/box3d/box3d.h:1182
void b3RevoluteJoint_SetMaxMotorTorque(b3JointId, float)
{
} /* size: 0 */

// <00B0AD68> ../box3d/include/box3d/box3d.h:1199
b3JointId b3CreateSphericalJoint(b3WorldId, const b3SphericalJointDef *)
{
} /* size: 0 */

// <00C5C307> ../box3d/include/box3d/box3d.h:1202
void b3SphericalJoint_EnableConeLimit(b3JointId, bool)
{
} /* size: 0 */

// <00C5C361> ../box3d/include/box3d/box3d.h:1211
void b3SphericalJoint_SetConeLimit(b3JointId, float)
{
} /* size: 0 */

// <00C5C2EC> ../box3d/include/box3d/box3d.h:1217
void b3SphericalJoint_EnableTwistLimit(b3JointId, bool)
{
} /* size: 0 */

// <00C5C341> ../box3d/include/box3d/box3d.h:1229
void b3SphericalJoint_SetTwistLimits(b3JointId, float, float)
{
} /* size: 0 */

// <00C5C62C> ../box3d/include/box3d/box3d.h:1235
void b3SphericalJoint_EnableSpring(b3JointId, bool)
{
} /* size: 0 */

// <00C5C5A5> ../box3d/include/box3d/box3d.h:1241
void b3SphericalJoint_SetSpringHertz(b3JointId, float)
{
} /* size: 0 */

// <00C5C58A> ../box3d/include/box3d/box3d.h:1247
void b3SphericalJoint_SetSpringDampingRatio(b3JointId, float)
{
} /* size: 0 */

// <00C5C5C0> ../box3d/include/box3d/box3d.h:1253
void b3SphericalJoint_SetTargetRotation(b3JointId, b3Quat)
{
} /* size: 0 */

// <00C5C611> ../box3d/include/box3d/box3d.h:1259
void b3SphericalJoint_EnableMotor(b3JointId, bool)
{
} /* size: 0 */

// <00C5C5F6> ../box3d/include/box3d/box3d.h:1265
void b3SphericalJoint_SetMotorVelocity(b3JointId, b3Vec3)
{
} /* size: 0 */

// <00C5C5DB> ../box3d/include/box3d/box3d.h:1274
void b3SphericalJoint_SetMaxMotorTorque(b3JointId, float)
{
} /* size: 0 */

// <00B0AE6F> ../box3d/include/box3d/box3d.h:1294
b3JointId b3CreateWeldJoint(b3WorldId, const b3WeldJointDef *)
{
} /* size: 0 */

// <00C5C970> ../box3d/include/box3d/box3d.h:1297
void b3WeldJoint_SetLinearHertz(b3JointId, float)
{
} /* size: 0 */

// <00C5C8D3> ../box3d/include/box3d/box3d.h:1300
float b3WeldJoint_GetLinearHertz(b3JointId)
{
} /* size: 0 */

// <00C5C955> ../box3d/include/box3d/box3d.h:1303
void b3WeldJoint_SetLinearDampingRatio(b3JointId, float)
{
} /* size: 0 */

// <00C5C8ED> ../box3d/include/box3d/box3d.h:1306
float b3WeldJoint_GetLinearDampingRatio(b3JointId)
{
} /* size: 0 */

// <00C5C71F> ../box3d/include/box3d/box3d.h:1309
void b3WeldJoint_SetAngularHertz(b3JointId, float)
{
} /* size: 0 */

// <00C5C556> ../box3d/include/box3d/box3d.h:1312
float b3WeldJoint_GetAngularHertz(b3JointId)
{
} /* size: 0 */

// <00C5C704> ../box3d/include/box3d/box3d.h:1315
void b3WeldJoint_SetAngularDampingRatio(b3JointId, float)
{
} /* size: 0 */

// <00C5C570> ../box3d/include/box3d/box3d.h:1318
float b3WeldJoint_GetAngularDampingRatio(b3JointId)
{
} /* size: 0 */

// <00B0ACC3> ../box3d/include/box3d/box3d.h:1334
b3JointId b3CreateWheelJoint(b3WorldId, const b3WheelJointDef *)
{
} /* size: 0 */

// <00C5C007> ../box3d/include/box3d/box3d.h:1337
void b3WheelJoint_EnableSuspension(b3JointId, bool)
{
} /* size: 0 */

// <00C5BFED> ../box3d/include/box3d/box3d.h:1340
bool b3WheelJoint_IsSuspensionEnabled(b3JointId)
{
} /* size: 0 */

// <00C5BFD2> ../box3d/include/box3d/box3d.h:1343
void b3WheelJoint_SetSuspensionHertz(b3JointId, float)
{
} /* size: 0 */

// <00C5BFB8> ../box3d/include/box3d/box3d.h:1346
float b3WheelJoint_GetSuspensionHertz(b3JointId)
{
} /* size: 0 */

// <00C5BF9D> ../box3d/include/box3d/box3d.h:1349
void b3WheelJoint_SetSuspensionDampingRatio(b3JointId, float)
{
} /* size: 0 */

// <00C5BF83> ../box3d/include/box3d/box3d.h:1352
float b3WheelJoint_GetSuspensionDampingRatio(b3JointId)
{
} /* size: 0 */

// <00C5BF68> ../box3d/include/box3d/box3d.h:1355
void b3WheelJoint_EnableSuspensionLimit(b3JointId, bool)
{
} /* size: 0 */

// <00C5BF4E> ../box3d/include/box3d/box3d.h:1358
bool b3WheelJoint_IsSuspensionLimitEnabled(b3JointId)
{
} /* size: 0 */

// <00C5BF34> ../box3d/include/box3d/box3d.h:1361
float b3WheelJoint_GetLowerSuspensionLimit(b3JointId)
{
} /* size: 0 */

// <00C5BF1A> ../box3d/include/box3d/box3d.h:1364
float b3WheelJoint_GetUpperSuspensionLimit(b3JointId)
{
} /* size: 0 */

// <00C5BEFA> ../box3d/include/box3d/box3d.h:1367
void b3WheelJoint_SetSuspensionLimits(b3JointId, float, float)
{
} /* size: 0 */

// <00C5BEDF> ../box3d/include/box3d/box3d.h:1370
void b3WheelJoint_EnableSpinMotor(b3JointId, bool)
{
} /* size: 0 */

// <00C5BEC5> ../box3d/include/box3d/box3d.h:1373
bool b3WheelJoint_IsSpinMotorEnabled(b3JointId)
{
} /* size: 0 */

// <00C5BEAA> ../box3d/include/box3d/box3d.h:1376
void b3WheelJoint_SetSpinMotorSpeed(b3JointId, float)
{
} /* size: 0 */

// <00C5BE90> ../box3d/include/box3d/box3d.h:1379
float b3WheelJoint_GetSpinMotorSpeed(b3JointId)
{
} /* size: 0 */

// <00C5BE75> ../box3d/include/box3d/box3d.h:1382
void b3WheelJoint_SetMaxSpinTorque(b3JointId, float)
{
} /* size: 0 */

// <00C5BE5B> ../box3d/include/box3d/box3d.h:1385
float b3WheelJoint_GetMaxSpinTorque(b3JointId)
{
} /* size: 0 */

// <00C5BE40> ../box3d/include/box3d/box3d.h:1391
void b3WheelJoint_EnableSteering(b3JointId, bool)
{
} /* size: 0 */

// <00C5BE26> ../box3d/include/box3d/box3d.h:1394
bool b3WheelJoint_IsSteeringEnabled(b3JointId)
{
} /* size: 0 */

// <00C5BE0B> ../box3d/include/box3d/box3d.h:1397
void b3WheelJoint_SetSteeringHertz(b3JointId, float)
{
} /* size: 0 */

// <00C5BDF1> ../box3d/include/box3d/box3d.h:1400
float b3WheelJoint_GetSteeringHertz(b3JointId)
{
} /* size: 0 */

// <00C5BDD6> ../box3d/include/box3d/box3d.h:1403
void b3WheelJoint_SetSteeringDampingRatio(b3JointId, float)
{
} /* size: 0 */

// <00C5BDBC> ../box3d/include/box3d/box3d.h:1406
float b3WheelJoint_GetSteeringDampingRatio(b3JointId)
{
} /* size: 0 */

// <00C5BD87> ../box3d/include/box3d/box3d.h:1412
float b3WheelJoint_GetMaxSteeringTorque(b3JointId)
{
} /* size: 0 */

// <00C5BD6C> ../box3d/include/box3d/box3d.h:1415
void b3WheelJoint_EnableSteeringLimit(b3JointId, bool)
{
} /* size: 0 */

// <00C5BD52> ../box3d/include/box3d/box3d.h:1418
bool b3WheelJoint_IsSteeringLimitEnabled(b3JointId)
{
} /* size: 0 */

// <00C5BD38> ../box3d/include/box3d/box3d.h:1421
float b3WheelJoint_GetLowerSteeringLimit(b3JointId)
{
} /* size: 0 */

// <00C5BD1E> ../box3d/include/box3d/box3d.h:1424
float b3WheelJoint_GetUpperSteeringLimit(b3JointId)
{
} /* size: 0 */

// <00C5BCFE> ../box3d/include/box3d/box3d.h:1427
void b3WheelJoint_SetSteeringLimits(b3JointId, float, float)
{
} /* size: 0 */

// <00C5BCE3> ../box3d/include/box3d/box3d.h:1430
void b3WheelJoint_SetTargetSteeringAngle(b3JointId, float)
{
} /* size: 0 */

// <00C5BCC9> ../box3d/include/box3d/box3d.h:1433
float b3WheelJoint_GetTargetSteeringAngle(b3JointId)
{
} /* size: 0 */

// <00C5BCAF> ../box3d/include/box3d/box3d.h:1436
float b3WheelJoint_GetSpinSpeed(b3JointId)
{
} /* size: 0 */

// <00C5BC7B> ../box3d/include/box3d/box3d.h:1442
float b3WheelJoint_GetSteeringAngle(b3JointId)
{
} /* size: 0 */

// <00C5BC61> ../box3d/include/box3d/box3d.h:1445
float b3WheelJoint_GetSteeringTorque(b3JointId)
{
} /* size: 0 */

// <00B0AA80> ../box3d/include/box3d/box3d.h:1458
bool b3Contact_IsValid(b3ContactId)
{
} /* size: 0 */

// <00B0AA65> ../box3d/include/box3d/box3d.h:1461
b3ContactData b3Contact_GetData(b3ContactId)
{
} /* size: 0 */

// <00CA73BF> ../box3d/include/box3d/box3d.h:1468
void b3Shape_ResetProxy(b3ShapeId, bool, bool)
{
} /* size: 0 */

// <00CA717A> ../box3d/include/box3d/box3d.h:1469
void b3Shape_UpdateHeightField(b3ShapeId)
{
} /* size: 0 */

// <00B995F9> ../box3d/include/box3d/box3d.h:1470
bool b3Shape_IsOverlappingSensor(b3ShapeId, b3ShapeId)
{
} /* size: 0 */

// <00B99BAD> ../box3d/include/box3d/box3d.h:1472
void b3Body_ClearForce(b3BodyId, bool)
{
} /* size: 0 */

// <00B99B93> ../box3d/include/box3d/box3d.h:1473
void b3Body_ClearTorque(b3BodyId, bool)
{
} /* size: 0 */

// <00B99590> ../box3d/include/box3d/box3d.h:1476
bool b3Body_ApplyBuoyancyImpulse(b3BodyId, float, float, b3Vec3, float, float, float, b3Vec3, b3Vec3, float)
{
} /* size: 0 */

