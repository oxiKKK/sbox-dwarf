
//
// public/mathlib/obb.h
//
//	referenced by: libengine2.so
//
//	struct: 1
//

// <003BEA87> ../public/mathlib/obb.h:13
// member functions: 15
// member variables: 3
// static member variable: 1
// struct size: 40
struct OBB_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/mathlib/obb.h:15 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/mathlib/obb.h:15 */
	OBB_t* Schema_MarkHelperFn(void);
	/* ../public/mathlib/obb.h:15 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/mathlib/obb.h:15 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/mathlib/obb.h:15 */
	void Schema_CompileTimeVerificationFunction(OBB_t* );
	/* ../public/mathlib/obb.h:15 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/mathlib/obb.h:15 */
	const char* Schema_StaticClassname(void);
	/* ../public/mathlib/obb.h:15 */
	const CSchemaClassInfo* Schema_DynamicBinding(const OBB_t* );
	Vector m_vCenter; /* 0 12 */
	Quaternion m_qOrientation; /* 12 16 */
	Vector m_vExtent; /* 28 12 */
	/* ../public/mathlib/obb.h:23 */
	void OBB_t(OBB_t* );
	/* ../public/mathlib/obb.h:24 */
	void OBB_t(OBB_t* , const Vector& , const Quaternion& , const Vector& );
	/* ../public/mathlib/obb.h:27 */
	bool OverlapsSegment(const OBB_t* , const Vector& , const Vector& );
	/* ../public/mathlib/obb.h:28 */
	bool OverlapsTriangle(const OBB_t* , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/obb.h:29 */
	bool OverlapsBounds(const OBB_t* , const AABB_t& );
	/* ../public/mathlib/obb.h:30 */
	bool OverlapsBox(const OBB_t* , const OBB_t& );
	/* ../public/mathlib/obb.h:32 */
	AABB_t ToAABB(const OBB_t* );
};

