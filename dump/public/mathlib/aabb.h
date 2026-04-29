
//
// public/mathlib/aabb.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 49
//	classes: 3
//	structs: 9
//

// <06F28E50> ../../public/mathlib/aabb.h:17
inline void AABB_t::operator=(AABB_t &)
{
} /* size: 0 */

// <0668B880> ../public/mathlib/aabb.h:17
inline void AABB_t::operator=(const AABB_t &)
{
} /* size: 0 */

// <00045728> ../public/mathlib/aabb.h:17
// member functions: 41
// member variables: 2
// static member variable: 1
// struct size: 24
struct AABB_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/mathlib/aabb.h:19 */
	AABB_t* Schema_MarkHelperFn(void);
	/* ../public/mathlib/aabb.h:19 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/mathlib/aabb.h:19 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/mathlib/aabb.h:19 */
	void Schema_CompileTimeVerificationFunction(AABB_t* );
	/* ../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/mathlib/aabb.h:19 */
	const char* Schema_StaticClassname(void);
	/* ../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AABB_t* );
	Vector m_vMinBounds; /* 0 12 */
	Vector m_vMaxBounds; /* 12 12 */
	/* ../public/mathlib/aabb.h:24 */
	void AABB_t(AABB_t* );
	/* ../public/mathlib/aabb.h:26 */
	void AABB_t(AABB_t* , const Vector& , const Vector& );
	/* ../public/mathlib/aabb.h:32 */
	Vector GetCenter(const AABB_t* );
	/* ../public/mathlib/aabb.h:35 */
	float GetBoundingRadius(const AABB_t* );
	/* ../public/mathlib/aabb.h:41 */
	float GetSurfaceArea(const AABB_t* );
	/* ../public/mathlib/aabb.h:46 */
	float GetVolume(const AABB_t* );
	/* ../public/mathlib/aabb.h:49 */
	float GetMinDistToPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:54 */
	float GetMinAxialDistanceToPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:62 */
	float DistanceTo(const AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:78 */
	Vector ClosestPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:81 */
	void operator|=(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:86 */
	void AddPointToBounds(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:92 */
	void operator|=(AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:97 */
	void AddAABBToBounds(AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:105 */
	void operator&=(AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:111 */
	void CreatePlanesFrom(const AABB_t* , Vector4D* );
	/* ../public/mathlib/aabb.h:126 */
	Vector Corner(const AABB_t* , int);
	/* ../public/mathlib/aabb.h:136 */
	void MakeInvalid(AABB_t* );
	/* ../public/mathlib/aabb.h:144 */
	bool IsInvalid(const AABB_t* );
	/* ../public/mathlib/aabb.h:153 */
	bool IsEmpty(const AABB_t* );
	/* ../public/mathlib/aabb.h:163 */
	bool Overlaps(const AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:174 */
	bool ContainsPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:187 */
	bool Contains(const AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:200 */
	void SetToPoint(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:206 */
	float LengthOfSmallestDimension(const AABB_t* );
	/* ../public/mathlib/aabb.h:212 */
	float LengthOfLargestDimension(const AABB_t* );
	/* ../public/mathlib/aabb.h:218 */
	const Vector GetSize(const AABB_t* );
	/* ../public/mathlib/aabb.h:223 */
	void EnsureMinSize(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:230 */
	void Move(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:236 */
	void Expand(AABB_t* , float);
	/* ../public/mathlib/aabb.h:242 */
	AABB_t Invalid(void);
	/* ../public/mathlib/aabb.h:252 */
	void KV3TransferSave(const AABB_t* , CKV3TransferSaveContext* );
	/* ../public/mathlib/aabb.h:257 */
	void KV3TransferLoad(AABB_t* , CKV3TransferLoadContext* );
};

// <003A3309> ../public/mathlib/aabb.h:17
// member functions: 42
// member variables: 2
// static member variable: 1
// struct size: 24
struct AABB_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/mathlib/aabb.h:19 */
	AABB_t* Schema_MarkHelperFn(void);
	/* ../public/mathlib/aabb.h:19 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/mathlib/aabb.h:19 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/mathlib/aabb.h:19 */
	void Schema_CompileTimeVerificationFunction(AABB_t* );
	/* ../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/mathlib/aabb.h:19 */
	const char* Schema_StaticClassname(void);
	/* ../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AABB_t* );
	Vector m_vMinBounds; /* 0 12 */
	Vector m_vMaxBounds; /* 12 12 */
	/* ../public/mathlib/aabb.h:24 */
	void AABB_t(AABB_t* );
	/* ../public/mathlib/aabb.h:26 */
	void AABB_t(AABB_t* , const Vector& , const Vector& );
	/* ../public/mathlib/aabb.h:32 */
	Vector GetCenter(const AABB_t* );
	/* ../public/mathlib/aabb.h:35 */
	float GetBoundingRadius(const AABB_t* );
	/* ../public/mathlib/aabb.h:41 */
	float GetSurfaceArea(const AABB_t* );
	/* ../public/mathlib/aabb.h:46 */
	float GetVolume(const AABB_t* );
	/* ../public/mathlib/aabb.h:49 */
	float GetMinDistToPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:54 */
	float GetMinAxialDistanceToPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:62 */
	float DistanceTo(const AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:78 */
	Vector ClosestPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:81 */
	void operator|=(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:86 */
	void AddPointToBounds(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:92 */
	void operator|=(AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:97 */
	void AddAABBToBounds(AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:105 */
	void operator&=(AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:111 */
	void CreatePlanesFrom(const AABB_t* , Vector4D* );
	/* ../public/mathlib/aabb.h:126 */
	Vector Corner(const AABB_t* , int);
	/* ../public/mathlib/aabb.h:136 */
	void MakeInvalid(AABB_t* );
	/* ../public/mathlib/aabb.h:144 */
	bool IsInvalid(const AABB_t* );
	/* ../public/mathlib/aabb.h:153 */
	bool IsEmpty(const AABB_t* );
	/* ../public/mathlib/aabb.h:163 */
	bool Overlaps(const AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:174 */
	bool ContainsPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:187 */
	bool Contains(const AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:200 */
	void SetToPoint(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:206 */
	float LengthOfSmallestDimension(const AABB_t* );
	/* ../public/mathlib/aabb.h:212 */
	float LengthOfLargestDimension(const AABB_t* );
	/* ../public/mathlib/aabb.h:218 */
	const Vector GetSize(const AABB_t* );
	/* ../public/mathlib/aabb.h:223 */
	void EnsureMinSize(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:230 */
	void Move(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:236 */
	void Expand(AABB_t* , float);
	/* ../public/mathlib/aabb.h:242 */
	AABB_t Invalid(void);
	/* ../public/mathlib/aabb.h:252 */
	void KV3TransferSave(const AABB_t* , CKV3TransferSaveContext* );
	/* ../public/mathlib/aabb.h:257 */
	void KV3TransferLoad(AABB_t* , CKV3TransferLoadContext* );
	AABB_t& operator=(AABB_t* , const AABB_t& );
};

// <00A5D9A9> ../public/mathlib/aabb.h:17
// member functions: 42
// member variables: 2
// static member variable: 1
// struct size: 24
struct AABB_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/mathlib/aabb.h:19 */
	AABB_t* Schema_MarkHelperFn(void);
	/* ../public/mathlib/aabb.h:19 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/mathlib/aabb.h:19 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/mathlib/aabb.h:19 */
	void Schema_CompileTimeVerificationFunction(AABB_t* );
	/* ../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/mathlib/aabb.h:19 */
	const char* Schema_StaticClassname(void);
	/* ../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AABB_t* );
	Vector m_vMinBounds; /* 0 12 */
	Vector m_vMaxBounds; /* 12 12 */
	/* ../public/mathlib/aabb.h:24 */
	void AABB_t(AABB_t* );
	/* ../public/mathlib/aabb.h:26 */
	void AABB_t(AABB_t* , const Vector& , const Vector& );
	/* ../public/mathlib/aabb.h:32 */
	Vector GetCenter(const AABB_t* );
	/* ../public/mathlib/aabb.h:35 */
	float GetBoundingRadius(const AABB_t* );
	/* ../public/mathlib/aabb.h:41 */
	float GetSurfaceArea(const AABB_t* );
	/* ../public/mathlib/aabb.h:46 */
	float GetVolume(const AABB_t* );
	/* ../public/mathlib/aabb.h:49 */
	float GetMinDistToPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:54 */
	float GetMinAxialDistanceToPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:62 */
	float DistanceTo(const AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:78 */
	Vector ClosestPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:81 */
	void operator|=(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:86 */
	void AddPointToBounds(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:92 */
	void operator|=(AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:97 */
	void AddAABBToBounds(AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:105 */
	void operator&=(AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:111 */
	void CreatePlanesFrom(const AABB_t* , Vector4D* );
	/* ../public/mathlib/aabb.h:126 */
	Vector Corner(const AABB_t* , int);
	/* ../public/mathlib/aabb.h:136 */
	void MakeInvalid(AABB_t* );
	/* ../public/mathlib/aabb.h:144 */
	bool IsInvalid(const AABB_t* );
	/* ../public/mathlib/aabb.h:153 */
	bool IsEmpty(const AABB_t* );
	/* ../public/mathlib/aabb.h:163 */
	bool Overlaps(const AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:174 */
	bool ContainsPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:187 */
	bool Contains(const AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:200 */
	void SetToPoint(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:206 */
	float LengthOfSmallestDimension(const AABB_t* );
	/* ../public/mathlib/aabb.h:212 */
	float LengthOfLargestDimension(const AABB_t* );
	/* ../public/mathlib/aabb.h:218 */
	const Vector GetSize(const AABB_t* );
	/* ../public/mathlib/aabb.h:223 */
	void EnsureMinSize(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:230 */
	void Move(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:236 */
	void Expand(AABB_t* , float);
	/* ../public/mathlib/aabb.h:242 */
	AABB_t Invalid(void);
	/* ../public/mathlib/aabb.h:252 */
	void KV3TransferSave(const AABB_t* , CKV3TransferSaveContext* );
	/* ../public/mathlib/aabb.h:257 */
	void KV3TransferLoad(AABB_t* , CKV3TransferLoadContext* );
	AABB_t& operator=(AABB_t* , AABB_t& );
};

// <01141683> ../public/mathlib/aabb.h:17
// member functions: 43
// member variables: 2
// static member variable: 1
// struct size: 24
struct AABB_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/mathlib/aabb.h:19 */
	AABB_t* Schema_MarkHelperFn(void);
	/* ../public/mathlib/aabb.h:19 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/mathlib/aabb.h:19 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/mathlib/aabb.h:19 */
	void Schema_CompileTimeVerificationFunction(AABB_t* );
	/* ../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/mathlib/aabb.h:19 */
	const char* Schema_StaticClassname(void);
	/* ../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AABB_t* );
	Vector m_vMinBounds; /* 0 12 */
	Vector m_vMaxBounds; /* 12 12 */
	/* ../public/mathlib/aabb.h:24 */
	void AABB_t(AABB_t* );
	/* ../public/mathlib/aabb.h:26 */
	void AABB_t(AABB_t* , const Vector& , const Vector& );
	/* ../public/mathlib/aabb.h:32 */
	Vector GetCenter(const AABB_t* );
	/* ../public/mathlib/aabb.h:35 */
	float GetBoundingRadius(const AABB_t* );
	/* ../public/mathlib/aabb.h:41 */
	float GetSurfaceArea(const AABB_t* );
	/* ../public/mathlib/aabb.h:46 */
	float GetVolume(const AABB_t* );
	/* ../public/mathlib/aabb.h:49 */
	float GetMinDistToPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:54 */
	float GetMinAxialDistanceToPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:62 */
	float DistanceTo(const AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:78 */
	Vector ClosestPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:81 */
	void operator|=(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:86 */
	void AddPointToBounds(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:92 */
	void operator|=(AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:97 */
	void AddAABBToBounds(AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:105 */
	void operator&=(AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:111 */
	void CreatePlanesFrom(const AABB_t* , Vector4D* );
	/* ../public/mathlib/aabb.h:126 */
	Vector Corner(const AABB_t* , int);
	/* ../public/mathlib/aabb.h:136 */
	void MakeInvalid(AABB_t* );
	/* ../public/mathlib/aabb.h:144 */
	bool IsInvalid(const AABB_t* );
	/* ../public/mathlib/aabb.h:153 */
	bool IsEmpty(const AABB_t* );
	/* ../public/mathlib/aabb.h:163 */
	bool Overlaps(const AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:174 */
	bool ContainsPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:187 */
	bool Contains(const AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:200 */
	void SetToPoint(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:206 */
	float LengthOfSmallestDimension(const AABB_t* );
	/* ../public/mathlib/aabb.h:212 */
	float LengthOfLargestDimension(const AABB_t* );
	/* ../public/mathlib/aabb.h:218 */
	const Vector GetSize(const AABB_t* );
	/* ../public/mathlib/aabb.h:223 */
	void EnsureMinSize(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:230 */
	void Move(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:236 */
	void Expand(AABB_t* , float);
	/* ../public/mathlib/aabb.h:242 */
	AABB_t Invalid(void);
	/* ../public/mathlib/aabb.h:252 */
	void KV3TransferSave(const AABB_t* , CKV3TransferSaveContext* );
	/* ../public/mathlib/aabb.h:257 */
	void KV3TransferLoad(AABB_t* , CKV3TransferLoadContext* );
	AABB_t& operator=(AABB_t* , AABB_t& );
	AABB_t& operator=(AABB_t* , const AABB_t& );
};

// <041EF237> ../public/mathlib/aabb.h:17
// member functions: 42
// member variables: 2
// static member variable: 1
// struct size: 24
struct AABB_t {
	/* ../public/mathlib/aabb.h:250 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/mathlib/aabb.h:19 */
	AABB_t* Schema_MarkHelperFn(void);
	/* ../public/mathlib/aabb.h:19 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/mathlib/aabb.h:19 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/mathlib/aabb.h:19 */
	void Schema_CompileTimeVerificationFunction(AABB_t* );
	/* ../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/mathlib/aabb.h:19 */
	const char* Schema_StaticClassname(void);
	/* ../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AABB_t* );
	Vector m_vMinBounds; /* 0 12 */
	Vector m_vMaxBounds; /* 12 12 */
	/* ../public/mathlib/aabb.h:24 */
	void AABB_t(AABB_t* );
	/* ../public/mathlib/aabb.h:26 */
	void AABB_t(AABB_t* , const Vector& , const Vector& );
	/* ../public/mathlib/aabb.h:32 */
	Vector GetCenter(const AABB_t* );
	/* ../public/mathlib/aabb.h:35 */
	float GetBoundingRadius(const AABB_t* );
	/* ../public/mathlib/aabb.h:41 */
	float GetSurfaceArea(const AABB_t* );
	/* ../public/mathlib/aabb.h:46 */
	float GetVolume(const AABB_t* );
	/* ../public/mathlib/aabb.h:49 */
	float GetMinDistToPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:54 */
	float GetMinAxialDistanceToPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:62 */
	float DistanceTo(const AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:78 */
	Vector ClosestPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:81 */
	void operator|=(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:86 */
	void AddPointToBounds(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:92 */
	void operator|=(AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:97 */
	void AddAABBToBounds(AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:105 */
	void operator&=(AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:111 */
	void CreatePlanesFrom(const AABB_t* , Vector4D* );
	/* ../public/mathlib/aabb.h:126 */
	Vector Corner(const AABB_t* , int);
	/* ../public/mathlib/aabb.h:136 */
	void MakeInvalid(AABB_t* );
	/* ../public/mathlib/aabb.h:144 */
	bool IsInvalid(const AABB_t* );
	/* ../public/mathlib/aabb.h:153 */
	bool IsEmpty(const AABB_t* );
	/* ../public/mathlib/aabb.h:163 */
	bool Overlaps(const AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:174 */
	bool ContainsPoint(const AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:187 */
	bool Contains(const AABB_t* , const AABB_t& );
	/* ../public/mathlib/aabb.h:200 */
	void SetToPoint(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:206 */
	float LengthOfSmallestDimension(const AABB_t* );
	/* ../public/mathlib/aabb.h:212 */
	float LengthOfLargestDimension(const AABB_t* );
	/* ../public/mathlib/aabb.h:218 */
	const Vector GetSize(const AABB_t* );
	/* ../public/mathlib/aabb.h:223 */
	void EnsureMinSize(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:230 */
	void Move(AABB_t* , const Vector& );
	/* ../public/mathlib/aabb.h:236 */
	void Expand(AABB_t* , float);
	/* ../public/mathlib/aabb.h:242 */
	AABB_t Invalid(void);
	/* ../public/mathlib/aabb.h:252 */
	void KV3TransferSave(const AABB_t* , CKV3TransferSaveContext* );
	/* ../public/mathlib/aabb.h:257 */
	void KV3TransferLoad(AABB_t* , CKV3TransferLoadContext* );
	AABB_t& operator=(AABB_t* , const AABB_t& );
};

// <057FFCBC> ../../public/mathlib/aabb.h:17
// member functions: 41
// member variables: 2
// static member variable: 1
// struct size: 24
struct AABB_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../public/mathlib/aabb.h:19 */
	AABB_t* Schema_MarkHelperFn(void);
	/* ../../public/mathlib/aabb.h:19 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../public/mathlib/aabb.h:19 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../public/mathlib/aabb.h:19 */
	void Schema_CompileTimeVerificationFunction(AABB_t* );
	/* ../../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../public/mathlib/aabb.h:19 */
	const char* Schema_StaticClassname(void);
	/* ../../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AABB_t* );
	Vector m_vMinBounds; /* 0 12 */
	Vector m_vMaxBounds; /* 12 12 */
	/* ../../public/mathlib/aabb.h:24 */
	void AABB_t(AABB_t* );
	/* ../../public/mathlib/aabb.h:26 */
	void AABB_t(AABB_t* , const Vector& , const Vector& );
	/* ../../public/mathlib/aabb.h:32 */
	Vector GetCenter(const AABB_t* );
	/* ../../public/mathlib/aabb.h:35 */
	float GetBoundingRadius(const AABB_t* );
	/* ../../public/mathlib/aabb.h:41 */
	float GetSurfaceArea(const AABB_t* );
	/* ../../public/mathlib/aabb.h:46 */
	float GetVolume(const AABB_t* );
	/* ../../public/mathlib/aabb.h:49 */
	float GetMinDistToPoint(const AABB_t* , const Vector& );
	/* ../../public/mathlib/aabb.h:54 */
	float GetMinAxialDistanceToPoint(const AABB_t* , const Vector& );
	/* ../../public/mathlib/aabb.h:62 */
	float DistanceTo(const AABB_t* , const AABB_t& );
	/* ../../public/mathlib/aabb.h:78 */
	Vector ClosestPoint(const AABB_t* , const Vector& );
	/* ../../public/mathlib/aabb.h:81 */
	void operator|=(AABB_t* , const Vector& );
	/* ../../public/mathlib/aabb.h:86 */
	void AddPointToBounds(AABB_t* , const Vector& );
	/* ../../public/mathlib/aabb.h:92 */
	void operator|=(AABB_t* , const AABB_t& );
	/* ../../public/mathlib/aabb.h:97 */
	void AddAABBToBounds(AABB_t* , const AABB_t& );
	/* ../../public/mathlib/aabb.h:105 */
	void operator&=(AABB_t* , const AABB_t& );
	/* ../../public/mathlib/aabb.h:111 */
	void CreatePlanesFrom(const AABB_t* , Vector4D* );
	/* ../../public/mathlib/aabb.h:126 */
	Vector Corner(const AABB_t* , int);
	/* ../../public/mathlib/aabb.h:136 */
	void MakeInvalid(AABB_t* );
	/* ../../public/mathlib/aabb.h:144 */
	bool IsInvalid(const AABB_t* );
	/* ../../public/mathlib/aabb.h:153 */
	bool IsEmpty(const AABB_t* );
	/* ../../public/mathlib/aabb.h:163 */
	bool Overlaps(const AABB_t* , const AABB_t& );
	/* ../../public/mathlib/aabb.h:174 */
	bool ContainsPoint(const AABB_t* , const Vector& );
	/* ../../public/mathlib/aabb.h:187 */
	bool Contains(const AABB_t* , const AABB_t& );
	/* ../../public/mathlib/aabb.h:200 */
	void SetToPoint(AABB_t* , const Vector& );
	/* ../../public/mathlib/aabb.h:206 */
	float LengthOfSmallestDimension(const AABB_t* );
	/* ../../public/mathlib/aabb.h:212 */
	float LengthOfLargestDimension(const AABB_t* );
	/* ../../public/mathlib/aabb.h:218 */
	const Vector GetSize(const AABB_t* );
	/* ../../public/mathlib/aabb.h:223 */
	void EnsureMinSize(AABB_t* , const Vector& );
	/* ../../public/mathlib/aabb.h:230 */
	void Move(AABB_t* , const Vector& );
	/* ../../public/mathlib/aabb.h:236 */
	void Expand(AABB_t* , float);
	/* ../../public/mathlib/aabb.h:242 */
	AABB_t Invalid(void);
	/* ../../public/mathlib/aabb.h:252 */
	void KV3TransferSave(const AABB_t* , CKV3TransferSaveContext* );
	/* ../../public/mathlib/aabb.h:257 */
	void KV3TransferLoad(AABB_t* , CKV3TransferLoadContext* );
};

// <05925F97> ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:17
// member functions: 42
// member variables: 2
// static member variable: 1
// struct size: 24
struct AABB_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:19 */
	AABB_t* Schema_MarkHelperFn(void);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:19 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:19 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:19 */
	void Schema_CompileTimeVerificationFunction(AABB_t* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:19 */
	const char* Schema_StaticClassname(void);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AABB_t* );
	Vector m_vMinBounds; /* 0 12 */
	Vector m_vMaxBounds; /* 12 12 */
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:24 */
	void AABB_t(AABB_t* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:26 */
	void AABB_t(AABB_t* , const Vector& , const Vector& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:32 */
	Vector GetCenter(const AABB_t* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:35 */
	float GetBoundingRadius(const AABB_t* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:41 */
	float GetSurfaceArea(const AABB_t* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:46 */
	float GetVolume(const AABB_t* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:49 */
	float GetMinDistToPoint(const AABB_t* , const Vector& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:54 */
	float GetMinAxialDistanceToPoint(const AABB_t* , const Vector& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:62 */
	float DistanceTo(const AABB_t* , const AABB_t& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:78 */
	Vector ClosestPoint(const AABB_t* , const Vector& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:81 */
	void operator|=(AABB_t* , const Vector& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:86 */
	void AddPointToBounds(AABB_t* , const Vector& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:92 */
	void operator|=(AABB_t* , const AABB_t& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:97 */
	void AddAABBToBounds(AABB_t* , const AABB_t& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:105 */
	void operator&=(AABB_t* , const AABB_t& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:111 */
	void CreatePlanesFrom(const AABB_t* , Vector4D* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:126 */
	Vector Corner(const AABB_t* , int);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:136 */
	void MakeInvalid(AABB_t* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:144 */
	bool IsInvalid(const AABB_t* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:153 */
	bool IsEmpty(const AABB_t* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:163 */
	bool Overlaps(const AABB_t* , const AABB_t& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:174 */
	bool ContainsPoint(const AABB_t* , const Vector& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:187 */
	bool Contains(const AABB_t* , const AABB_t& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:200 */
	void SetToPoint(AABB_t* , const Vector& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:206 */
	float LengthOfSmallestDimension(const AABB_t* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:212 */
	float LengthOfLargestDimension(const AABB_t* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:218 */
	const Vector GetSize(const AABB_t* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:223 */
	void EnsureMinSize(AABB_t* , const Vector& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:230 */
	void Move(AABB_t* , const Vector& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:236 */
	void Expand(AABB_t* , float);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:242 */
	AABB_t Invalid(void);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:252 */
	void KV3TransferSave(const AABB_t* , CKV3TransferSaveContext* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:257 */
	void KV3TransferLoad(AABB_t* , CKV3TransferLoadContext* );
	AABB_t& operator=(AABB_t* , const AABB_t& );
};

// <06F18776> ../../public/mathlib/aabb.h:17
// member functions: 42
// member variables: 2
// static member variable: 1
// struct size: 24
struct AABB_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../public/mathlib/aabb.h:19 */
	AABB_t* Schema_MarkHelperFn(void);
	/* ../../public/mathlib/aabb.h:19 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../public/mathlib/aabb.h:19 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../public/mathlib/aabb.h:19 */
	void Schema_CompileTimeVerificationFunction(AABB_t* );
	/* ../../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../public/mathlib/aabb.h:19 */
	const char* Schema_StaticClassname(void);
	/* ../../public/mathlib/aabb.h:19 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AABB_t* );
	Vector m_vMinBounds; /* 0 12 */
	Vector m_vMaxBounds; /* 12 12 */
	/* ../../public/mathlib/aabb.h:24 */
	void AABB_t(AABB_t* );
	/* ../../public/mathlib/aabb.h:26 */
	void AABB_t(AABB_t* , const Vector& , const Vector& );
	/* ../../public/mathlib/aabb.h:32 */
	Vector GetCenter(const AABB_t* );
	/* ../../public/mathlib/aabb.h:35 */
	float GetBoundingRadius(const AABB_t* );
	/* ../../public/mathlib/aabb.h:41 */
	float GetSurfaceArea(const AABB_t* );
	/* ../../public/mathlib/aabb.h:46 */
	float GetVolume(const AABB_t* );
	/* ../../public/mathlib/aabb.h:49 */
	float GetMinDistToPoint(const AABB_t* , const Vector& );
	/* ../../public/mathlib/aabb.h:54 */
	float GetMinAxialDistanceToPoint(const AABB_t* , const Vector& );
	/* ../../public/mathlib/aabb.h:62 */
	float DistanceTo(const AABB_t* , const AABB_t& );
	/* ../../public/mathlib/aabb.h:78 */
	Vector ClosestPoint(const AABB_t* , const Vector& );
	/* ../../public/mathlib/aabb.h:81 */
	void operator|=(AABB_t* , const Vector& );
	/* ../../public/mathlib/aabb.h:86 */
	void AddPointToBounds(AABB_t* , const Vector& );
	/* ../../public/mathlib/aabb.h:92 */
	void operator|=(AABB_t* , const AABB_t& );
	/* ../../public/mathlib/aabb.h:97 */
	void AddAABBToBounds(AABB_t* , const AABB_t& );
	/* ../../public/mathlib/aabb.h:105 */
	void operator&=(AABB_t* , const AABB_t& );
	/* ../../public/mathlib/aabb.h:111 */
	void CreatePlanesFrom(const AABB_t* , Vector4D* );
	/* ../../public/mathlib/aabb.h:126 */
	Vector Corner(const AABB_t* , int);
	/* ../../public/mathlib/aabb.h:136 */
	void MakeInvalid(AABB_t* );
	/* ../../public/mathlib/aabb.h:144 */
	bool IsInvalid(const AABB_t* );
	/* ../../public/mathlib/aabb.h:153 */
	bool IsEmpty(const AABB_t* );
	/* ../../public/mathlib/aabb.h:163 */
	bool Overlaps(const AABB_t* , const AABB_t& );
	/* ../../public/mathlib/aabb.h:174 */
	bool ContainsPoint(const AABB_t* , const Vector& );
	/* ../../public/mathlib/aabb.h:187 */
	bool Contains(const AABB_t* , const AABB_t& );
	/* ../../public/mathlib/aabb.h:200 */
	void SetToPoint(AABB_t* , const Vector& );
	/* ../../public/mathlib/aabb.h:206 */
	float LengthOfSmallestDimension(const AABB_t* );
	/* ../../public/mathlib/aabb.h:212 */
	float LengthOfLargestDimension(const AABB_t* );
	/* ../../public/mathlib/aabb.h:218 */
	const Vector GetSize(const AABB_t* );
	/* ../../public/mathlib/aabb.h:223 */
	void EnsureMinSize(AABB_t* , const Vector& );
	/* ../../public/mathlib/aabb.h:230 */
	void Move(AABB_t* , const Vector& );
	/* ../../public/mathlib/aabb.h:236 */
	void Expand(AABB_t* , float);
	/* ../../public/mathlib/aabb.h:242 */
	AABB_t Invalid(void);
	/* ../../public/mathlib/aabb.h:252 */
	void KV3TransferSave(const AABB_t* , CKV3TransferSaveContext* );
	/* ../../public/mathlib/aabb.h:257 */
	void KV3TransferLoad(AABB_t* , CKV3TransferLoadContext* );
	AABB_t& operator=(AABB_t* , AABB_t& );
};

// <0661BFDB> ../public/mathlib/aabb.h:19
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <05926D6A> ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:19
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <05926D4B> ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/aabb.h:19
inline void AABB_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <06F2EB35> ../../public/mathlib/aabb.h:24
void AABB_t::AABB_t()
{
} /* size: 0 */

// <06F2EB1C> ../../public/mathlib/aabb.h:24
inline void AABB_t::AABB_t()
{
} /* size: 0 */

// <06F2EAFB> ../../public/mathlib/aabb.h:26
void AABB_t::AABB_t(const Vector& vMins, const Vector& vMaxs)
{
} /* size: 0 */

// <06F2EACA> ../../public/mathlib/aabb.h:26
inline void AABB_t::AABB_t(const Vector& vMins, const Vector& vMaxs)
{
} /* size: 0 */

// <0635290D> ../public/mathlib/aabb.h:32
inline void AABB_t::GetCenter()
{
} /* size: 0 */

// <010221A0> ../public/mathlib/aabb.h:49
inline void AABB_t::GetMinDistToPoint(const Vector& vPoint)
{
} /* size: 0 */

// <01022157> ../public/mathlib/aabb.h:54
// variables: 3
inline void AABB_t::GetMinAxialDistanceToPoint(const Vector& vPoint)
{
	float flXInterval; // 56
	float flYInterval; // 57
	float flZInterval; // 58
} /* size: 0, variables: 3 */

// <0646FFF9> ../public/mathlib/aabb.h:97
inline void AABB_t::AddAABBToBounds(const AABB_t& other)
{
} /* size: 0 */

// <05B4AE91> ../public/mathlib/aabb.h:126
// variable: 1
inline void AABB_t::Corner(int nCorner)
{
	Vector vResult; // 128
} /* size: 0, variables: 1 */

// <0646FFE0> ../public/mathlib/aabb.h:136
inline void AABB_t::MakeInvalid()
{
} /* size: 0 */

// <04AE3A9A> ../public/mathlib/aabb.h:144
inline void AABB_t::IsInvalid()
{
} /* size: 0 */

// <0587D6A5> ../../public/mathlib/aabb.h:163
inline void AABB_t::Overlaps(const AABB_t& bBox)
{
} /* size: 0 */

// <0587D680> ../../public/mathlib/aabb.h:174
inline void AABB_t::ContainsPoint(const Vector& vPnt)
{
} /* size: 0 */

// <003DB399> ../public/mathlib/aabb.h:187
inline void AABB_t::Contains(const AABB_t& box)
{
} /* size: 0 */

// <05DFEADF> ../public/mathlib/aabb.h:200
inline void AABB_t::SetToPoint(const Vector& vPnt)
{
} /* size: 0 */

// <06F2EAB1> ../../public/mathlib/aabb.h:218
inline void AABB_t::GetSize()
{
} /* size: 0 */

// <0587D642> ../../public/mathlib/aabb.h:230
inline void AABB_t::Move(const Vector& vDelta)
{
} /* size: 0 */

// <036AE5B8> ../public/mathlib/aabb.h:242
// variable: 1
inline void Invalid(void)
{
	AABB_t aabb; // 244
} /* size: 0, variables: 1 */

// <0668BBBC> ../public/mathlib/aabb.h:252
inline void AABB_t::KV3TransferSave(CKV3TransferSaveContext* pContext)
{
} /* size: 0 */

// <0668BB96> ../public/mathlib/aabb.h:257
inline void AABB_t::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
} /* size: 0 */

// <05A0FF77> ../public/mathlib/aabb.h:283
// variables: 2
inline AABB_t GetAabb(const VectorAligned* pPos, int nCount)
{
	AABB_t aabb; // 285
	{
		int i; // 287
	}
} /* size: 0, variables: 1 */

// <00825163> ../public/mathlib/aabb.h:295
// member functions: 11
// member variables: 2
// struct size: 24
struct GenericBoundingBox_t<IntVector3D, 3> {
	IntVector3D m_minBounds; /* 0 12 */
	IntVector3D m_maxBounds; /* 12 12 */
	/* ../public/mathlib/aabb.h:301 */
	void GenericBoundingBox_t(GenericBoundingBox_t<IntVector3D, 3>* );
	/* ../public/mathlib/aabb.h:303 */
	void GenericBoundingBox_t(GenericBoundingBox_t<IntVector3D, 3>* , const IntVector3D& , const IntVector3D& );
	/* ../public/mathlib/aabb.h:309 */
	IntVector3D GetCenter(const GenericBoundingBox_t<IntVector3D, 3>* );
	/* ../public/mathlib/aabb.h:320 */
	void AddPointToBounds(GenericBoundingBox_t<IntVector3D, 3>* , const IntVector3D& );
	/* ../public/mathlib/aabb.h:330 */
	void operator|=(GenericBoundingBox_t<IntVector3D, 3>* , const GenericBoundingBox_t<IntVector3D, 3>& );
	/* ../public/mathlib/aabb.h:340 */
	void operator&=(GenericBoundingBox_t<IntVector3D, 3>* , const GenericBoundingBox_t<IntVector3D, 3>& );
	/* ../public/mathlib/aabb.h:351 */
	bool IsInvalid(const GenericBoundingBox_t<IntVector3D, 3>* );
	/* ../public/mathlib/aabb.h:363 */
	bool IsEmpty(const GenericBoundingBox_t<IntVector3D, 3>* );
	/* ../public/mathlib/aabb.h:374 */
	bool Overlaps(const GenericBoundingBox_t<IntVector3D, 3>* , GenericBoundingBox_t<IntVector3D, 3>);
	/* ../public/mathlib/aabb.h:380 */
	bool ContainsPoint(const GenericBoundingBox_t<IntVector3D, 3>* , const IntVector3D& );
	/* ../public/mathlib/aabb.h:393 */
	void SetToPoint(GenericBoundingBox_t<IntVector3D, 3>* , const IntVector3D& );
};

// <044DA970> ../public/mathlib/aabb.h:301
void GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t()
{
} /* size: 0 */

// <044DA957> ../public/mathlib/aabb.h:301
inline void GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t()
{
} /* size: 0 */

// <044DA9BA> ../public/mathlib/aabb.h:303
void GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(const IntVector3D& mins, const IntVector3D& maxes)
{
} /* size: 0 */

// <044DA987> ../public/mathlib/aabb.h:303
inline void GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(const IntVector3D& mins, const IntVector3D& maxes)
{
} /* size: 0 */

// <00825342> ../public/mathlib/aabb.h:426
// member functions: 20
// member variable: 1
// class size: 24
class IntAABB_t : public GenericBoundingBox_t<IntVector3D, 3> {
public:
	/* struct GenericBoundingBox_t<IntVector3D, 3> <ancestor>; */ /* 0 24 */
	/* ../public/mathlib/aabb.h:430 */
	void IntAABB_t(IntAABB_t* , IntVector3D, IntVector3D);
	/* ../public/mathlib/aabb.h:434 */
	void IntAABB_t(IntAABB_t* );
	/* ../public/mathlib/aabb.h:436 */
	void MakeInvalid(IntAABB_t* );
	/* ../public/mathlib/aabb.h:438 */
	int Height(const IntAABB_t* );
	/* ../public/mathlib/aabb.h:442 */
	int Width(const IntAABB_t* );
	/* ../public/mathlib/aabb.h:446 */
	int Depth(const IntAABB_t* );
	/* ../public/mathlib/aabb.h:451 */
	int NumberOfCells(const IntAABB_t* );
	/* ../public/mathlib/aabb.h:457 */
	IntVector3D Size(const IntAABB_t* );
	/* ../public/mathlib/aabb.h:463 */
	IntAABB_CellRangeReference Indices(const IntAABB_t* );
	/* ../public/mathlib/aabb.h:466 */
	IntAABB_CellRangeReference IndicesNonInclusive(const IntAABB_t* );
	void IntAABB_t(class IntAABB_t *, class IntVector3D, class IntVector3D); /* linkage=_ZN9IntAABB_tC4E11IntVector3DS0_ */
	void IntAABB_t(class IntAABB_t *); /* linkage=_ZN9IntAABB_tC4Ev */
	void MakeInvalid(class IntAABB_t *); /* linkage=_ZN9IntAABB_t11MakeInvalidEv */
	int Height(const class IntAABB_t  *); /* linkage=_ZNK9IntAABB_t6HeightEv */
	int Width(const class IntAABB_t  *); /* linkage=_ZNK9IntAABB_t5WidthEv */
	int Depth(const class IntAABB_t  *); /* linkage=_ZNK9IntAABB_t5DepthEv */
	int NumberOfCells(const class IntAABB_t  *); /* linkage=_ZNK9IntAABB_t13NumberOfCellsEv */
	class IntVector3D Size(const class IntAABB_t  *); /* linkage=_ZNK9IntAABB_t4SizeEv */
	class IntAABB_CellRangeReference Indices(const class IntAABB_t  *); /* linkage=_ZNK9IntAABB_t7IndicesEv */
	class IntAABB_CellRangeReference IndicesNonInclusive(const class IntAABB_t  *); /* linkage=_ZNK9IntAABB_t19IndicesNonInclusiveEv */
};

// <04500070> ../public/mathlib/aabb.h:430
void IntAABB_t::IntAABB_t(IntVector3D a, IntVector3D b)
{
} /* size: 0 */

// <04500041> ../public/mathlib/aabb.h:430
inline void IntAABB_t::IntAABB_t(IntVector3D a, IntVector3D b)
{
} /* size: 0 */

// <0450002A> ../public/mathlib/aabb.h:434
void IntAABB_t::IntAABB_t()
{
} /* size: 0 */

// <04500011> ../public/mathlib/aabb.h:434
inline void IntAABB_t::IntAABB_t()
{
} /* size: 0 */

// <044FFFF8> ../public/mathlib/aabb.h:438
inline void IntAABB_t::Height()
{
} /* size: 0 */

// <044FFFDF> ../public/mathlib/aabb.h:442
inline void IntAABB_t::Width()
{
} /* size: 0 */

// <044FFFC6> ../public/mathlib/aabb.h:446
inline void IntAABB_t::Depth()
{
} /* size: 0 */

// <044FFFAD> ../public/mathlib/aabb.h:451
inline void IntAABB_t::NumberOfCells()
{
} /* size: 0 */

// <044FFF94> ../public/mathlib/aabb.h:457
inline void IntAABB_t::Size()
{
} /* size: 0 */

// <044FFE49> ../public/mathlib/aabb.h:470
void IntAABB_CellRangeReference::IntAABB_CellRangeReference()
{
} /* size: 0 */

// <044FFE2C> ../public/mathlib/aabb.h:470
inline void IntAABB_CellRangeReference::IntAABB_CellRangeReference()
{
} /* size: 0 */

// <008254B9> ../public/mathlib/aabb.h:470
// member functions: 5
// member variable: 1
// class size: 24
class IntAABB_CellRangeReference : public IntAABB_t {
public:
	/* class IntAABB_t <ancestor>; */ /* 0 24 */
	/* ../public/mathlib/aabb.h:475 */
	IntAABBIterator begin(const IntAABB_CellRangeReference* );
	/* ../public/mathlib/aabb.h:476 */
	IntAABBIterator end(const IntAABB_CellRangeReference* );
	class IntAABBIterator begin(const class IntAABB_CellRangeReference  *); /* linkage=_ZNK26IntAABB_CellRangeReference5beginEv */
	class IntAABBIterator end(const class IntAABB_CellRangeReference  *); /* linkage=_ZNK26IntAABB_CellRangeReference3endEv */
	void IntAABB_CellRangeReference(class IntAABB_CellRangeReference *); /* linkage=_ZN26IntAABB_CellRangeReferenceC4Ev */
};

// <044FFF78> ../public/mathlib/aabb.h:479
inline void IntAABB_t::Indices()
{
} /* size: 0 */

// <00825517> ../public/mathlib/aabb.h:484
// member functions: 8
// member variables: 2
// class size: 28
class IntAABBIterator {
	int m_nIndex; /* 0 4 */
	IntAABB_t m_bounds; /* 4 24 */
	/* ../public/mathlib/aabb.h:490 */
	void IntAABBIterator(IntAABBIterator* , const IntAABB_t& , int);
	/* ../public/mathlib/aabb.h:496 */
	void operator++(IntAABBIterator* );
	/* ../public/mathlib/aabb.h:501 */
	bool operator!=(IntAABBIterator* , const IntAABBIterator& );
	/* ../public/mathlib/aabb.h:503 */
	IntVector3D operator*(const IntAABBIterator* );
	void IntAABBIterator(class IntAABBIterator *, const class IntAABB_t  &, int); /* linkage=_ZN15IntAABBIteratorC4ERK9IntAABB_ti */
	void operator++(class IntAABBIterator *); /* linkage=_ZN15IntAABBIteratorppEv */
	bool operator!=(class IntAABBIterator *, const class IntAABBIterator  &); /* linkage=_ZN15IntAABBIteratorneERKS_ */
	class IntVector3D operator*(const class IntAABBIterator  *); /* linkage=_ZNK15IntAABBIteratordeEv */
};

// <044FFF57> ../public/mathlib/aabb.h:490
void IntAABBIterator::IntAABBIterator(const IntAABB_t& domain, int nStartingIndex)
{
} /* size: 0 */

// <044FFF24> ../public/mathlib/aabb.h:490
inline void IntAABBIterator::IntAABBIterator(const IntAABB_t& domain, int nStartingIndex)
{
} /* size: 0 */

// <01B5B61D> ../public/mathlib/aabb.h:496
inline void IntAABBIterator::operator++()
{
} /* size: 0 */

// <044FFEE5> ../public/mathlib/aabb.h:501
inline void IntAABBIterator::operator!=(const IntAABBIterator& other)
{
} /* size: 0 */

// <044FFE7C> ../public/mathlib/aabb.h:518
inline void IntAABB_CellRangeReference::begin()
{
} /* size: 0 */

// <044FFE60> ../public/mathlib/aabb.h:523
inline void IntAABB_CellRangeReference::end()
{
} /* size: 0 */

// <044FFDF8> ../public/mathlib/aabb.h:528
// variable: 1
inline void IntAABB_t::IndicesNonInclusive()
{
	IntAABB_CellRangeReference ret; // 530
} /* size: 0, variables: 1 */

