
//
// public/bonesetup/bone_constraints.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	class: 1
//

// <053E19BB> ../public/bonesetup/bone_constraints.h:32
// member functions: 8
// class size: 1
class CConstraintBones {
	/* ../public/bonesetup/bone_constraints.h:35 */
	enum AimConstraintUpType_t {
		AC_UP_TYPE_OBJECT_ROTATION = 0,
		AC_UP_TYPE_VECTOR = 1,
		AC_UP_TYPE_OBJECT = 2,
		AC_UP_TYPE_PARENT_ROTATION = 3,
		AC_UP_TYPE_FIRST = 0,
		AC_UP_TYPE_LAST = 3,
	};
	/* ../public/bonesetup/bone_constraints.h:50 */
	float ComputeTargetPosition(Vector& , int, float* , Vector* , Vector* );
	/* ../public/bonesetup/bone_constraints.h:60 */
	float ComputeTargetOrientation(Quaternion& , int, float* , Quaternion* , Quaternion* );
	/* ../public/bonesetup/bone_constraints.h:70 */
	float ComputeTargetPositionOrientation(Vector& , Quaternion& , int, float* , Vector* , Vector* , Quaternion* , Quaternion* );
	/* ../public/bonesetup/bone_constraints.h:83 */
	float ComputeTargetPositionOrientation(Vector& , Quaternion& , int, float* , CTransform* , CTransform* );
	/* ../public/bonesetup/bone_constraints.h:91 */
	void ComputeAimConstraintOffset(Quaternion& , bool, const Vector& , const CTransform& , const Vector& , const Vector& , const Quaternion& , CTransform* , AimConstraintUpType_t);
	/* ../public/bonesetup/bone_constraints.h:106 */
	void ComputeAimConstraintAimAt(Quaternion& , const Vector& , const Vector& );
	/* ../public/bonesetup/bone_constraints.h:113 */
	void ComputeAimConstraint(Quaternion& , const Vector& , const CTransform& , const Vector& , const Vector& , const CTransform* , AimConstraintUpType_t);
	/* ../public/bonesetup/bone_constraints.h:126 */
	void ComputeWorldUpVector(Vector* , const CTransform& , const Vector& , const Vector& , const CTransform* , AimConstraintUpType_t);
};

