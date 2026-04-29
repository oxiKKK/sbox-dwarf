
//
// public/physicslib/serialize.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 155
//	structs: 68
//

// <0646FDCC> ../public/physicslib/serialize.h:15
inline void RnVertex_t::operator=(RnVertex_t &)
{
} /* size: 0 */

// <0096212C> ../public/physicslib/serialize.h:15
// member functions: 2
// member variables: 2
// struct size: 24
struct RnVertex_t {
	/* ../public/physicslib/serialize.h:17 */
	void RnVertex_t(RnVertex_t* );
	/* ../public/physicslib/serialize.h:18 */
	void RnVertex_t(RnVertex_t* , const Vector& , const Vector& );
	Vector vPosition; /* 0 12 */
	Vector vNormal; /* 12 12 */
};

// <00A908D3> ../public/physicslib/serialize.h:15
// member functions: 3
// member variables: 2
// struct size: 24
struct RnVertex_t {
	/* ../public/physicslib/serialize.h:17 */
	void RnVertex_t(RnVertex_t* );
	/* ../public/physicslib/serialize.h:18 */
	void RnVertex_t(RnVertex_t* , const Vector& , const Vector& );
	Vector vPosition; /* 0 12 */
	Vector vNormal; /* 12 12 */
	RnVertex_t& operator=(RnVertex_t* , RnVertex_t& );
};

// <0663A21F> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:15
// member functions: 2
// member variables: 2
// struct size: 24
struct RnVertex_t {
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:17 */
	void RnVertex_t(RnVertex_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:18 */
	void RnVertex_t(RnVertex_t* , const Vector& , const Vector& );
	Vector vPosition; /* 0 12 */
	Vector vNormal; /* 12 12 */
};

// <0646FFC9> ../public/physicslib/serialize.h:17
void RnVertex_t::RnVertex_t()
{
} /* size: 0 */

// <0646FFB0> ../public/physicslib/serialize.h:17
inline void RnVertex_t::RnVertex_t()
{
} /* size: 0 */

// <0646FF8F> ../public/physicslib/serialize.h:18
void RnVertex_t::RnVertex_t(const Vector& vPos, const Vector& vNormal)
{
} /* size: 0 */

// <0646FF5E> ../public/physicslib/serialize.h:18
inline void RnVertex_t::RnVertex_t(const Vector& vPos, const Vector& vNormal)
{
} /* size: 0 */

// <06687633> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:72
inline void RnSphere_t::operator=(const RnSphere_t &)
{
} /* size: 0 */

// <009621A7> ../public/physicslib/serialize.h:72
// member functions: 25
// member variables: 2
// static member variable: 1
// struct size: 16
struct RnSphere_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:74 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:74 */
	RnSphere_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:74 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:74 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:74 */
	void Schema_CompileTimeVerificationFunction(RnSphere_t* );
	/* ../public/physicslib/serialize.h:74 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:74 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:74 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnSphere_t* );
	/* ../public/physicslib/serialize.h:75 */
	RnSphere_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:75 */
	void KV3TransferSave(const RnSphere_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:75 */
	void KV3TransferLoad(RnSphere_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:75 */
	void KV3TransferSave_RnSphere_t(const RnSphere_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:75 */
	void KV3TransferLoad_RnSphere_t(RnSphere_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:77 */
	void RnSphere_t(RnSphere_t* , float);
	/* ../public/physicslib/serialize.h:78 */
	void RnSphere_t(RnSphere_t* , const Vector& , float);
	/* ../public/physicslib/serialize.h:79 */
	AABB_t GetBbox(const RnSphere_t* );
	/* ../public/physicslib/serialize.h:80 */
	AABB_t GetBbox(const RnSphere_t* , const CTransform& );
	/* ../public/physicslib/serialize.h:83 */
	void GetTriangulation(const RnSphere_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , int, int);
	/* ../public/physicslib/serialize.h:84 */
	void GetTriangulation(const RnSphere_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , int, int);
	/* ../public/physicslib/serialize.h:85 */
	void GetOutline(const RnSphere_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , uint);
	/* ../public/physicslib/serialize.h:87 */
	float GetVolume(const RnSphere_t* );
	/* ../public/physicslib/serialize.h:88 */
	float GetSurfaceArea(const RnSphere_t* );
	/* ../public/physicslib/serialize.h:90 */
	const Vector& GetCenter(const RnSphere_t* );
	/* ../public/physicslib/serialize.h:91 */
	float GetRadius(const RnSphere_t* );
	/* ../public/physicslib/serialize.h:92 */
	Vector ClosestPoint(const RnSphere_t* , const Vector& );
	Vector m_vCenter; /* 0 12 */
	float32 m_flRadius; /* 12 4 */
};

// <0118D828> ../public/physicslib/serialize.h:72
// member functions: 26
// member variables: 2
// static member variable: 1
// struct size: 16
struct RnSphere_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:74 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:74 */
	RnSphere_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:74 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:74 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:74 */
	void Schema_CompileTimeVerificationFunction(RnSphere_t* );
	/* ../public/physicslib/serialize.h:74 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:74 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:74 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnSphere_t* );
	/* ../public/physicslib/serialize.h:75 */
	RnSphere_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:75 */
	void KV3TransferSave(const RnSphere_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:75 */
	void KV3TransferLoad(RnSphere_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:75 */
	void KV3TransferSave_RnSphere_t(const RnSphere_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:75 */
	void KV3TransferLoad_RnSphere_t(RnSphere_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:77 */
	void RnSphere_t(RnSphere_t* , float);
	/* ../public/physicslib/serialize.h:78 */
	void RnSphere_t(RnSphere_t* , const Vector& , float);
	/* ../public/physicslib/serialize.h:79 */
	AABB_t GetBbox(const RnSphere_t* );
	/* ../public/physicslib/serialize.h:80 */
	AABB_t GetBbox(const RnSphere_t* , const CTransform& );
	/* ../public/physicslib/serialize.h:83 */
	void GetTriangulation(const RnSphere_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , int, int);
	/* ../public/physicslib/serialize.h:84 */
	void GetTriangulation(const RnSphere_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , int, int);
	/* ../public/physicslib/serialize.h:85 */
	void GetOutline(const RnSphere_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , uint);
	/* ../public/physicslib/serialize.h:87 */
	float GetVolume(const RnSphere_t* );
	/* ../public/physicslib/serialize.h:88 */
	float GetSurfaceArea(const RnSphere_t* );
	/* ../public/physicslib/serialize.h:90 */
	const Vector& GetCenter(const RnSphere_t* );
	/* ../public/physicslib/serialize.h:91 */
	float GetRadius(const RnSphere_t* );
	/* ../public/physicslib/serialize.h:92 */
	Vector ClosestPoint(const RnSphere_t* , const Vector& );
	Vector m_vCenter; /* 0 12 */
	float32 m_flRadius; /* 12 4 */
	RnSphere_t& operator=(RnSphere_t* , const RnSphere_t& );
};

// <0663A2EA> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:72
// member functions: 26
// member variables: 2
// static member variable: 1
// struct size: 16
struct RnSphere_t {
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:75 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:74 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:74 */
	RnSphere_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:74 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:74 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:74 */
	void Schema_CompileTimeVerificationFunction(RnSphere_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:74 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:74 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:74 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnSphere_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:75 */
	RnSphere_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:75 */
	void KV3TransferSave(const RnSphere_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:75 */
	void KV3TransferLoad(RnSphere_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:75 */
	void KV3TransferSave_RnSphere_t(const RnSphere_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:75 */
	void KV3TransferLoad_RnSphere_t(RnSphere_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:77 */
	void RnSphere_t(RnSphere_t* , float);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:78 */
	void RnSphere_t(RnSphere_t* , const Vector& , float);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:79 */
	AABB_t GetBbox(const RnSphere_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:80 */
	AABB_t GetBbox(const RnSphere_t* , const CTransform& );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:83 */
	void GetTriangulation(const RnSphere_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , int, int);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:84 */
	void GetTriangulation(const RnSphere_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , int, int);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:85 */
	void GetOutline(const RnSphere_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , uint);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:87 */
	float GetVolume(const RnSphere_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:88 */
	float GetSurfaceArea(const RnSphere_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:90 */
	const Vector& GetCenter(const RnSphere_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:91 */
	float GetRadius(const RnSphere_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:92 */
	Vector ClosestPoint(const RnSphere_t* , const Vector& );
	Vector m_vCenter; /* 0 12 */
	float32 m_flRadius; /* 12 4 */
	RnSphere_t& operator=(RnSphere_t* , const RnSphere_t& );
};

// <0668BB90> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:74
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0668BB77> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:74
inline void RnSphere_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0661BFD4> ../public/physicslib/serialize.h:74
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <0668BB5B> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:77
void RnSphere_t::RnSphere_t(float flRadius)
{
} /* size: 0 */

// <0668BB36> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:77
inline void RnSphere_t::RnSphere_t(float flRadius)
{
} /* size: 0 */

// <01874A01> ../public/physicslib/serialize.h:78
inline void RnSphere_t::RnSphere_t(const Vector& vCenter, float flRadius)
{
} /* size: 0 */

// <0668735E> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:123
inline void RnCapsule_t::operator=(const RnCapsule_t &)
{
} /* size: 0 */

// <0096280D> ../public/physicslib/serialize.h:123
// member functions: 27
// member variables: 2
// static member variable: 1
// struct size: 28
struct RnCapsule_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:125 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:125 */
	RnCapsule_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:125 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:125 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:125 */
	void Schema_CompileTimeVerificationFunction(RnCapsule_t* );
	/* ../public/physicslib/serialize.h:125 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:125 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:125 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnCapsule_t* );
	/* ../public/physicslib/serialize.h:126 */
	RnCapsule_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:126 */
	void KV3TransferSave(const RnCapsule_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:126 */
	void KV3TransferLoad(RnCapsule_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:126 */
	void KV3TransferSave_RnCapsule_t(const RnCapsule_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:126 */
	void KV3TransferLoad_RnCapsule_t(RnCapsule_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:128 */
	void RnCapsule_t(RnCapsule_t* );
	/* ../public/physicslib/serialize.h:132 */
	void RnCapsule_t(RnCapsule_t* , const Vector& , const Vector& , float);
	/* ../public/physicslib/serialize.h:134 */
	AABB_t GetBbox(const RnCapsule_t* );
	/* ../public/physicslib/serialize.h:135 */
	AABB_t GetBbox(const RnCapsule_t* , const CTransform& );
	/* ../public/physicslib/serialize.h:138 */
	void GetTriangulation(const RnCapsule_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& );
	/* ../public/physicslib/serialize.h:139 */
	void GetTriangulation(const RnCapsule_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& );
	/* ../public/physicslib/serialize.h:140 */
	void GetTriangulation(const RnCapsule_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , int, int);
	/* ../public/physicslib/serialize.h:141 */
	void GetOutline(const RnCapsule_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , uint);
	/* ../public/physicslib/serialize.h:143 */
	float GetVolume(const RnCapsule_t* );
	/* ../public/physicslib/serialize.h:144 */
	float GetSurfaceArea(const RnCapsule_t* );
	/* ../public/physicslib/serialize.h:146 */
	const Vector& GetCenter1(const RnCapsule_t* );
	/* ../public/physicslib/serialize.h:147 */
	const Vector& GetCenter2(const RnCapsule_t* );
	/* ../public/physicslib/serialize.h:149 */
	float GetRadius(const RnCapsule_t* );
	/* ../public/physicslib/serialize.h:150 */
	Vector ClosestPoint(const RnCapsule_t* , const Vector& );
	Vector m_vCenter[2]; /* 0 24 */
	float32 m_flRadius; /* 24 4 */
};

// <0118DE99> ../public/physicslib/serialize.h:123
// member functions: 28
// member variables: 2
// static member variable: 1
// struct size: 28
struct RnCapsule_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:125 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:125 */
	RnCapsule_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:125 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:125 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:125 */
	void Schema_CompileTimeVerificationFunction(RnCapsule_t* );
	/* ../public/physicslib/serialize.h:125 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:125 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:125 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnCapsule_t* );
	/* ../public/physicslib/serialize.h:126 */
	RnCapsule_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:126 */
	void KV3TransferSave(const RnCapsule_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:126 */
	void KV3TransferLoad(RnCapsule_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:126 */
	void KV3TransferSave_RnCapsule_t(const RnCapsule_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:126 */
	void KV3TransferLoad_RnCapsule_t(RnCapsule_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:128 */
	void RnCapsule_t(RnCapsule_t* );
	/* ../public/physicslib/serialize.h:132 */
	void RnCapsule_t(RnCapsule_t* , const Vector& , const Vector& , float);
	/* ../public/physicslib/serialize.h:134 */
	AABB_t GetBbox(const RnCapsule_t* );
	/* ../public/physicslib/serialize.h:135 */
	AABB_t GetBbox(const RnCapsule_t* , const CTransform& );
	/* ../public/physicslib/serialize.h:138 */
	void GetTriangulation(const RnCapsule_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& );
	/* ../public/physicslib/serialize.h:139 */
	void GetTriangulation(const RnCapsule_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& );
	/* ../public/physicslib/serialize.h:140 */
	void GetTriangulation(const RnCapsule_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , int, int);
	/* ../public/physicslib/serialize.h:141 */
	void GetOutline(const RnCapsule_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , uint);
	/* ../public/physicslib/serialize.h:143 */
	float GetVolume(const RnCapsule_t* );
	/* ../public/physicslib/serialize.h:144 */
	float GetSurfaceArea(const RnCapsule_t* );
	/* ../public/physicslib/serialize.h:146 */
	const Vector& GetCenter1(const RnCapsule_t* );
	/* ../public/physicslib/serialize.h:147 */
	const Vector& GetCenter2(const RnCapsule_t* );
	/* ../public/physicslib/serialize.h:149 */
	float GetRadius(const RnCapsule_t* );
	/* ../public/physicslib/serialize.h:150 */
	Vector ClosestPoint(const RnCapsule_t* , const Vector& );
	Vector m_vCenter[2]; /* 0 24 */
	float32 m_flRadius; /* 24 4 */
	RnCapsule_t& operator=(RnCapsule_t* , const RnCapsule_t& );
};

// <0663AAC9> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:123
// member functions: 28
// member variables: 2
// static member variable: 1
// struct size: 28
struct RnCapsule_t {
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:126 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:125 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:125 */
	RnCapsule_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:125 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:125 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:125 */
	void Schema_CompileTimeVerificationFunction(RnCapsule_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:125 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:125 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:125 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnCapsule_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:126 */
	RnCapsule_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:126 */
	void KV3TransferSave(const RnCapsule_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:126 */
	void KV3TransferLoad(RnCapsule_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:126 */
	void KV3TransferSave_RnCapsule_t(const RnCapsule_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:126 */
	void KV3TransferLoad_RnCapsule_t(RnCapsule_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:128 */
	void RnCapsule_t(RnCapsule_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:132 */
	void RnCapsule_t(RnCapsule_t* , const Vector& , const Vector& , float);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:134 */
	AABB_t GetBbox(const RnCapsule_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:135 */
	AABB_t GetBbox(const RnCapsule_t* , const CTransform& );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:138 */
	void GetTriangulation(const RnCapsule_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:139 */
	void GetTriangulation(const RnCapsule_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:140 */
	void GetTriangulation(const RnCapsule_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , int, int);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:141 */
	void GetOutline(const RnCapsule_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , uint);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:143 */
	float GetVolume(const RnCapsule_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:144 */
	float GetSurfaceArea(const RnCapsule_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:146 */
	const Vector& GetCenter1(const RnCapsule_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:147 */
	const Vector& GetCenter2(const RnCapsule_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:149 */
	float GetRadius(const RnCapsule_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:150 */
	Vector ClosestPoint(const RnCapsule_t* , const Vector& );
	Vector m_vCenter[2]; /* 0 24 */
	float32 m_flRadius; /* 24 4 */
	RnCapsule_t& operator=(RnCapsule_t* , const RnCapsule_t& );
};

// <0668BB17> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:125
inline void RnCapsule_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0668BB00> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:128
void RnCapsule_t::RnCapsule_t()
{
} /* size: 0 */

// <0668BAE7> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:128
inline void RnCapsule_t::RnCapsule_t()
{
} /* size: 0 */

// <018749DB> ../public/physicslib/serialize.h:132
void RnCapsule_t::RnCapsule_t(const Vector& vCenter0, const Vector& vCenter1, float flRadius)
{
} /* size: 0 */

// <0187499E> ../public/physicslib/serialize.h:132
inline void RnCapsule_t::RnCapsule_t(const Vector& vCenter0, const Vector& vCenter1, float flRadius)
{
} /* size: 0 */

// <06685792> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:209
inline void RnPlane_t::operator=(const RnPlane_t &)
{
} /* size: 0 */

// <05F08F07> ../public/physicslib/serialize.h:209
inline void RnPlane_t::operator=(RnPlane_t &)
{
} /* size: 0 */

// <00962BD1> ../public/physicslib/serialize.h:209
// member functions: 20
// member variables: 2
// static member variable: 1
// struct size: 16
struct RnPlane_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:211 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:211 */
	RnPlane_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:211 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:211 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:211 */
	void Schema_CompileTimeVerificationFunction(RnPlane_t* );
	/* ../public/physicslib/serialize.h:211 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:211 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:211 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnPlane_t* );
	/* ../public/physicslib/serialize.h:212 */
	RnPlane_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:212 */
	void KV3TransferSave(const RnPlane_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:212 */
	void KV3TransferLoad(RnPlane_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:212 */
	void KV3TransferSave_RnPlane_t(const RnPlane_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:212 */
	void KV3TransferLoad_RnPlane_t(RnPlane_t* , CKV3TransferLoadContext* );
	Vector m_vNormal; /* 0 12 */
	float32 m_flOffset; /* 12 4 */
	/* ../public/physicslib/serialize.h:218 */
	void RnPlane_t(RnPlane_t* );
	/* ../public/physicslib/serialize.h:219 */
	void RnPlane_t(RnPlane_t* , const Vector& , float);
	/* ../public/physicslib/serialize.h:220 */
	void RnPlane_t(RnPlane_t* , const Vector& , const Vector& );
	/* ../public/physicslib/serialize.h:223 */
	float Distance(const RnPlane_t* , const Vector& );
	/* ../public/physicslib/serialize.h:224 */
	bool IsValid(const RnPlane_t* );
	/* ../public/physicslib/serialize.h:228 */
	bool operator==(const RnPlane_t* , const RnPlane_t& );
	RnPlane_t& operator=(RnPlane_t* , const RnPlane_t& );
};

// <00A913B2> ../public/physicslib/serialize.h:209
// member functions: 19
// member variables: 2
// static member variable: 1
// struct size: 16
struct RnPlane_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:211 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:211 */
	RnPlane_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:211 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:211 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:211 */
	void Schema_CompileTimeVerificationFunction(RnPlane_t* );
	/* ../public/physicslib/serialize.h:211 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:211 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:211 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnPlane_t* );
	/* ../public/physicslib/serialize.h:212 */
	RnPlane_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:212 */
	void KV3TransferSave(const RnPlane_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:212 */
	void KV3TransferLoad(RnPlane_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:212 */
	void KV3TransferSave_RnPlane_t(const RnPlane_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:212 */
	void KV3TransferLoad_RnPlane_t(RnPlane_t* , CKV3TransferLoadContext* );
	Vector m_vNormal; /* 0 12 */
	float32 m_flOffset; /* 12 4 */
	/* ../public/physicslib/serialize.h:218 */
	void RnPlane_t(RnPlane_t* );
	/* ../public/physicslib/serialize.h:219 */
	void RnPlane_t(RnPlane_t* , const Vector& , float);
	/* ../public/physicslib/serialize.h:220 */
	void RnPlane_t(RnPlane_t* , const Vector& , const Vector& );
	/* ../public/physicslib/serialize.h:223 */
	float Distance(const RnPlane_t* , const Vector& );
	/* ../public/physicslib/serialize.h:224 */
	bool IsValid(const RnPlane_t* );
	/* ../public/physicslib/serialize.h:228 */
	bool operator==(const RnPlane_t* , const RnPlane_t& );
};

// <05EB2114> ../public/physicslib/serialize.h:209
// member functions: 21
// member variables: 2
// static member variable: 1
// struct size: 16
struct RnPlane_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:211 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:211 */
	RnPlane_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:211 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:211 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:211 */
	void Schema_CompileTimeVerificationFunction(RnPlane_t* );
	/* ../public/physicslib/serialize.h:211 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:211 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:211 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnPlane_t* );
	/* ../public/physicslib/serialize.h:212 */
	RnPlane_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:212 */
	void KV3TransferSave(const RnPlane_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:212 */
	void KV3TransferLoad(RnPlane_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:212 */
	void KV3TransferSave_RnPlane_t(const RnPlane_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:212 */
	void KV3TransferLoad_RnPlane_t(RnPlane_t* , CKV3TransferLoadContext* );
	Vector m_vNormal; /* 0 12 */
	float32 m_flOffset; /* 12 4 */
	/* ../public/physicslib/serialize.h:218 */
	void RnPlane_t(RnPlane_t* );
	/* ../public/physicslib/serialize.h:219 */
	void RnPlane_t(RnPlane_t* , const Vector& , float);
	/* ../public/physicslib/serialize.h:220 */
	void RnPlane_t(RnPlane_t* , const Vector& , const Vector& );
	/* ../public/physicslib/serialize.h:223 */
	float Distance(const RnPlane_t* , const Vector& );
	/* ../public/physicslib/serialize.h:224 */
	bool IsValid(const RnPlane_t* );
	/* ../public/physicslib/serialize.h:228 */
	bool operator==(const RnPlane_t* , const RnPlane_t& );
	RnPlane_t& operator=(RnPlane_t* , const RnPlane_t& );
	RnPlane_t& operator=(RnPlane_t* , RnPlane_t& );
};

// <0663AECD> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:209
// member functions: 20
// member variables: 2
// static member variable: 1
// struct size: 16
struct RnPlane_t {
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:212 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:211 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:211 */
	RnPlane_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:211 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:211 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:211 */
	void Schema_CompileTimeVerificationFunction(RnPlane_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:211 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:211 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:211 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnPlane_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:212 */
	RnPlane_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:212 */
	void KV3TransferSave(const RnPlane_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:212 */
	void KV3TransferLoad(RnPlane_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:212 */
	void KV3TransferSave_RnPlane_t(const RnPlane_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:212 */
	void KV3TransferLoad_RnPlane_t(RnPlane_t* , CKV3TransferLoadContext* );
	Vector m_vNormal; /* 0 12 */
	float32 m_flOffset; /* 12 4 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:218 */
	void RnPlane_t(RnPlane_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:219 */
	void RnPlane_t(RnPlane_t* , const Vector& , float);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:220 */
	void RnPlane_t(RnPlane_t* , const Vector& , const Vector& );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:223 */
	float Distance(const RnPlane_t* , const Vector& );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:224 */
	bool IsValid(const RnPlane_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:228 */
	bool operator==(const RnPlane_t* , const RnPlane_t& );
	RnPlane_t& operator=(RnPlane_t* , const RnPlane_t& );
};

// <0668BAC8> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:211
inline void RnPlane_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0668577B> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:218
void RnPlane_t::RnPlane_t()
{
} /* size: 0 */

// <06685762> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:218
inline void RnPlane_t::RnPlane_t()
{
} /* size: 0 */

// <00A189C9> ../public/physicslib/serialize.h:219
void RnPlane_t::RnPlane_t(const Vector& n, float d)
{
} /* size: 0 */

// <00A1899C> ../public/physicslib/serialize.h:219
inline void RnPlane_t::RnPlane_t(const Vector& n, float d)
{
} /* size: 0 */

// <05F0906E> ../public/physicslib/serialize.h:220
void RnPlane_t::RnPlane_t(const Vector& n, const Vector& p)
{
} /* size: 0 */

// <05F09041> ../public/physicslib/serialize.h:220
inline void RnPlane_t::RnPlane_t(const Vector& n, const Vector& p)
{
} /* size: 0 */

// <00A18977> ../public/physicslib/serialize.h:223
inline void RnPlane_t::Distance(const Vector& vPoint)
{
} /* size: 0 */

// <05F08FB4> ../public/physicslib/serialize.h:241
// variable: 1
inline bool ArePlanesSame(const RnPlane_t& a, const RnPlane_t& b, float flTolerance)
{
	float flOffsetScale; // 243
} /* size: 0, variables: 1 */

// <05F08F85> ../public/physicslib/serialize.h:247
inline Vector ProjectPointOnPlane(const Vector& vPoint, const RnPlane_t& plane)
{
} /* size: 0 */

// <05F08F28> ../public/physicslib/serialize.h:252
// variables: 2
inline bool IntersectLineWithPlane(const Vector& vOrigin, const Vector& vDir, const RnPlane_t& plane, Vector& vOut)
{
	float flDot; // 254
	float d; // 254
} /* size: 0, variables: 2 */

// <00962E8A> ../public/physicslib/serialize.h:264
// member functions: 13
// member variables: 4
// static member variable: 1
// struct size: 4
struct RnHalfEdge_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:266 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:266 */
	RnHalfEdge_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:266 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:266 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:266 */
	void Schema_CompileTimeVerificationFunction(RnHalfEdge_t* );
	/* ../public/physicslib/serialize.h:266 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:266 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:266 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnHalfEdge_t* );
	/* ../public/physicslib/serialize.h:267 */
	RnHalfEdge_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:267 */
	void KV3TransferSave(const RnHalfEdge_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:267 */
	void KV3TransferLoad(RnHalfEdge_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:267 */
	void KV3TransferSave_RnHalfEdge_t(const RnHalfEdge_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:267 */
	void KV3TransferLoad_RnHalfEdge_t(RnHalfEdge_t* , CKV3TransferLoadContext* );
	uint8 m_nNext; /* 0 1 */
	uint8 m_nTwin; /* 1 1 */
	uint8 m_nOrigin; /* 2 1 */
	uint8 m_nFace; /* 3 1 */
};

// <0663B19B> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:264
// member functions: 13
// member variables: 4
// static member variable: 1
// struct size: 4
struct RnHalfEdge_t {
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:267 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:266 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:266 */
	RnHalfEdge_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:266 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:266 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:266 */
	void Schema_CompileTimeVerificationFunction(RnHalfEdge_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:266 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:266 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:266 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnHalfEdge_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:267 */
	RnHalfEdge_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:267 */
	void KV3TransferSave(const RnHalfEdge_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:267 */
	void KV3TransferLoad(RnHalfEdge_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:267 */
	void KV3TransferSave_RnHalfEdge_t(const RnHalfEdge_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:267 */
	void KV3TransferLoad_RnHalfEdge_t(RnHalfEdge_t* , CKV3TransferLoadContext* );
	uint8 m_nNext; /* 0 1 */
	uint8 m_nTwin; /* 1 1 */
	uint8 m_nOrigin; /* 2 1 */
	uint8 m_nFace; /* 3 1 */
};

// <0668BAA9> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:266
inline void RnHalfEdge_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <00963069> ../public/physicslib/serialize.h:275
// member functions: 13
// member variable: 1
// static member variable: 1
// struct size: 1
struct RnFace_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:277 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:277 */
	RnFace_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:277 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:277 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:277 */
	void Schema_CompileTimeVerificationFunction(RnFace_t* );
	/* ../public/physicslib/serialize.h:277 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:277 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:277 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnFace_t* );
	/* ../public/physicslib/serialize.h:278 */
	RnFace_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:278 */
	void KV3TransferSave(const RnFace_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:278 */
	void KV3TransferLoad(RnFace_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:278 */
	void KV3TransferSave_RnFace_t(const RnFace_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:278 */
	void KV3TransferLoad_RnFace_t(RnFace_t* , CKV3TransferLoadContext* );
	uint8 m_nEdge; /* 0 1 */
};

// <0663B398> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:275
// member functions: 13
// member variable: 1
// static member variable: 1
// struct size: 1
struct RnFace_t {
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:278 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:277 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:277 */
	RnFace_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:277 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:277 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:277 */
	void Schema_CompileTimeVerificationFunction(RnFace_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:277 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:277 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:277 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnFace_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:278 */
	RnFace_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:278 */
	void KV3TransferSave(const RnFace_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:278 */
	void KV3TransferLoad(RnFace_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:278 */
	void KV3TransferSave_RnFace_t(const RnFace_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:278 */
	void KV3TransferLoad_RnFace_t(RnFace_t* , CKV3TransferLoadContext* );
	uint8 m_nEdge; /* 0 1 */
};

// <0668BA8A> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:277
inline void RnFace_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <06695865> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:298
// function calls: 79
void RnHull_t::operator=(const RnHull_t &)
{
	Vector::operator=(
			const Vector& vOther);  // 298
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 573
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 574
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 574
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 565
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 452
	CUtlVector<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 298
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Count(); // 573
	CUtlMemory<RnPlane_t, int>::Base(); // 112
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Base(); // 102
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::begin(); // 574
	CUtlMemory<RnPlane_t, int>::Base(); // 113
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Base(); // 105
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Count(); // 105
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	RnPlane_t::operator=(
			const RnPlane_t  &);  // 209
	UtlTraitsCopyRange<RnPlane_t>(const RnPlane_t* pFrom,
					const RnPlane_t* pFromEnd,
					RnPlane_t* pTo);  // 200
	UtlTraitsCopyRange<RnPlane_t>(const RnPlane_t* pFrom,
					const RnPlane_t* pFromEnd,
					RnPlane_t* pTo);  // 574
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::operator=(
			const CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >& other);  // 565
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::operator=(
			const CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >& other);  // 452
	CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> >::operator=(
			const CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> >& src);  // 298
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Count(); // 573
	CUtlMemory<RnHalfEdge_t, int>::Base(); // 112
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Base(); // 102
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::begin(); // 574
	CUtlMemory<RnHalfEdge_t, int>::Base(); // 113
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Base(); // 105
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Count(); // 105
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<RnHalfEdge_t>(const RnHalfEdge_t* pFrom,
					const RnHalfEdge_t* pFromEnd,
					RnHalfEdge_t* pTo);  // 173
	UtlTraitsCopyRange<RnHalfEdge_t>(const RnHalfEdge_t* pFrom,
					const RnHalfEdge_t* pFromEnd,
					RnHalfEdge_t* pTo);  // 574
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator=(
			const CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >& other);  // 565
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator=(
			const CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >& other);  // 452
	CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator=(
			const CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >& src);  // 298
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Count(); // 573
	CUtlMemory<RnFace_t, int>::Base(); // 112
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Base(); // 102
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::begin(); // 574
	CUtlMemory<RnFace_t, int>::Base(); // 113
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Base(); // 105
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Count(); // 105
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<RnHalfEdge_t>(const RnHalfEdge_t* pFrom,
					const RnHalfEdge_t* pFromEnd,
					RnHalfEdge_t* pTo);  // 173
	UtlTraitsCopyRange<RnFace_t>(const RnFace_t* pFrom,
					const RnFace_t* pFromEnd,
					RnFace_t* pTo);  // 574
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::operator=(
			const CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >& other);  // 565
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::operator=(
			const CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >& other);  // 452
	CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> >::operator=(
			const CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> >& src);  // 298
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 573
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 574
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<RnHalfEdge_t>(const RnHalfEdge_t* pFrom,
					const RnHalfEdge_t* pFromEnd,
					RnHalfEdge_t* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 574
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 565
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 298
	Vector::operator=(
			const Vector& vOther);  // 298
	Vector::operator=(
			const Vector& vOther);  // 17
	Vector::operator=(
			const Vector& vOther);  // 17
	AABB_t::operator=(
			const AABB_t  &);  // 298
} /* size: 915, inline expansions: 79 (2935 bytes) */

// <06682923> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:298
inline void RnHull_t::operator=(const RnHull_t &)
{
} /* size: 0 */

// <06682808> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:298
void RnHull_t::RnHull_t()
{
} /* size: 0 */

// <066827EB> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:298
inline void RnHull_t::RnHull_t()
{
} /* size: 0 */

// <06681F2D> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:298
// function calls: 47
void RnHull_t::~RnHull_t()
{
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 298
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnFace_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnFace_t, int>::Purge(); // 903
	CUtlMemory<RnFace_t, int>::Purge(); // 1799
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Purge(); // 560
	ValidateAlignment<RnFace_t>(void); // 508
	CUtlMemory<RnFace_t, int>::Purge(); // 510
	CUtlMemory<RnFace_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> >::~CUtlVector(); // 298
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnHalfEdge_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnHalfEdge_t, int>::Purge(); // 903
	CUtlMemory<RnHalfEdge_t, int>::Purge(); // 1799
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Purge(); // 560
	ValidateAlignment<RnHalfEdge_t>(void); // 508
	CUtlMemory<RnHalfEdge_t, int>::Purge(); // 510
	CUtlMemory<RnHalfEdge_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::~CUtlVector(); // 298
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnPlane_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnPlane_t, int>::Purge(); // 903
	CUtlMemory<RnPlane_t, int>::Purge(); // 1799
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Purge(); // 560
	ValidateAlignment<RnPlane_t>(void); // 508
	CUtlMemory<RnPlane_t, int>::Purge(); // 510
	CUtlMemory<RnPlane_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> >::~CUtlVector(); // 298
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 298
} /* size: 198, inline expansions: 47 (766 bytes) */

// <06681F10> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:298
inline void RnHull_t::~RnHull_t()
{
} /* size: 0 */

// <064C4349> ../public/physicslib/serialize.h:298
void RnHull_t::~RnHull_t()
{
} /* size: 0 */

// <0502ABDC> ../public/physicslib/serialize.h:298
// function calls: 79
void RnHull_t::operator=(const RnHull_t &)
{
	Vector::operator=(
			const Vector& vOther);  // 298
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 573
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 574
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 574
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 565
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 452
	CUtlVector<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 298
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Count(); // 573
	CUtlMemory<RnPlane_t, int>::Base(); // 112
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Base(); // 102
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::begin(); // 574
	CUtlMemory<RnPlane_t, int>::Base(); // 113
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Base(); // 105
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Count(); // 105
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	RnPlane_t::operator=(
			const RnPlane_t  &);  // 209
	UtlTraitsCopyRange<RnPlane_t>(const RnPlane_t* pFrom,
					const RnPlane_t* pFromEnd,
					RnPlane_t* pTo);  // 200
	UtlTraitsCopyRange<RnPlane_t>(const RnPlane_t* pFrom,
					const RnPlane_t* pFromEnd,
					RnPlane_t* pTo);  // 574
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::operator=(
			const CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >& other);  // 565
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::operator=(
			const CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >& other);  // 452
	CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> >::operator=(
			const CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> >& src);  // 298
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Count(); // 573
	CUtlMemory<RnHalfEdge_t, int>::Base(); // 112
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Base(); // 102
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::begin(); // 574
	CUtlMemory<RnHalfEdge_t, int>::Base(); // 113
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Base(); // 105
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Count(); // 105
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CFingerSource>(const CFingerSource* pFrom,
						const CFingerSource* pFromEnd,
						CFingerSource* pTo);  // 173
	UtlTraitsCopyRange<RnHalfEdge_t>(const RnHalfEdge_t* pFrom,
					const RnHalfEdge_t* pFromEnd,
					RnHalfEdge_t* pTo);  // 574
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator=(
			const CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >& other);  // 565
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator=(
			const CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >& other);  // 452
	CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator=(
			const CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >& src);  // 298
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Count(); // 573
	CUtlMemory<RnFace_t, int>::Base(); // 112
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Base(); // 102
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::begin(); // 574
	CUtlMemory<RnFace_t, int>::Base(); // 113
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Base(); // 105
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Count(); // 105
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CFingerSource>(const CFingerSource* pFrom,
						const CFingerSource* pFromEnd,
						CFingerSource* pTo);  // 173
	UtlTraitsCopyRange<RnFace_t>(const RnFace_t* pFrom,
					const RnFace_t* pFromEnd,
					RnFace_t* pTo);  // 574
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::operator=(
			const CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >& other);  // 565
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::operator=(
			const CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >& other);  // 452
	CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> >::operator=(
			const CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> >& src);  // 298
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 573
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 574
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CFingerSource>(const CFingerSource* pFrom,
						const CFingerSource* pFromEnd,
						CFingerSource* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 574
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 565
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 298
	Vector::operator=(
			const Vector& vOther);  // 298
	Vector::operator=(
			const Vector& vOther);  // 17
	Vector::operator=(
			const Vector& vOther);  // 17
	AABB_t::operator=(
			const AABB_t  &);  // 298
} /* size: 915, inline expansions: 79 (2935 bytes) */

// <00963218> ../public/physicslib/serialize.h:298
// member functions: 44
// member variables: 14
// static member variable: 1
// struct size: 280
struct RnHull_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:300 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:300 */
	RnHull_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:300 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:300 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:300 */
	void Schema_CompileTimeVerificationFunction(RnHull_t* );
	/* ../public/physicslib/serialize.h:300 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:300 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:300 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnHull_t* );
	/* ../public/physicslib/serialize.h:301 */
	RnHull_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:301 */
	void KV3TransferSave(const RnHull_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:301 */
	void KV3TransferLoad(RnHull_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:301 */
	void KV3TransferSave_RnHull_t(const RnHull_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:301 */
	void KV3TransferLoad_RnHull_t(RnHull_t* , CKV3TransferLoadContext* );
	Vector m_vCentroid; /* 0 12 */
	float m_flMaxAngularRadius; /* 12 4 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_Vertices; /* 16 32 */
	CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> > m_Planes; /* 48 32 */
	CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> > m_Edges; /* 80 32 */
	CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> > m_Faces; /* 112 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_EdgeOrigins; /* 144 32 */
	Vector m_vOrthographicAreas; /* 176 12 */
	matrix3x4_t m_MassProperties; /* 188 48 */
	float m_flVolume; /* 236 4 */
	float m_flMaxMotionRadius; /* 240 4 */
	float m_flMinMotionThickness; /* 244 4 */
	AABB_t m_Bounds; /* 248 24 */
	uint32 m_nFlags; /* 272 4 */
	/* ../public/physicslib/serialize.h:320 */
	int GetVertexCount(const RnHull_t* );
	/* ../public/physicslib/serialize.h:321 */
	const Vector GetVertex(const RnHull_t* , int);
	/* ../public/physicslib/serialize.h:322 */
	int GetPlaneCount(const RnHull_t* );
	/* ../public/physicslib/serialize.h:323 */
	const RnPlane_t& GetPlane(const RnHull_t* , int);
	/* ../public/physicslib/serialize.h:324 */
	const Vector& GetPlaneNormal(const RnHull_t* , int);
	/* ../public/physicslib/serialize.h:325 */
	int GetEdgeCount(const RnHull_t* );
	/* ../public/physicslib/serialize.h:326 */
	const RnHalfEdge_t* GetEdge(const RnHull_t* , int);
	/* ../public/physicslib/serialize.h:327 */
	int GetFaceCount(const RnHull_t* );
	/* ../public/physicslib/serialize.h:328 */
	const RnFace_t* GetFace(const RnHull_t* , int);
	/* ../public/physicslib/serialize.h:329 */
	float GetVolume(const RnHull_t* );
	/* ../public/physicslib/serialize.h:330 */
	Vector GetMassCenter(const RnHull_t* );
	/* ../public/physicslib/serialize.h:331 */
	matrix3x4_t GetInertia(const RnHull_t* );
	/* ../public/physicslib/serialize.h:332 */
	Vector GetCentroid(const RnHull_t* );
	/* ../public/physicslib/serialize.h:334 */
	int GetEdgeIndex(const RnHull_t* , const RnHalfEdge_t* );
	/* ../public/physicslib/serialize.h:335 */
	int GetFaceIndex(const RnHull_t* , const RnFace_t* );
	/* ../public/physicslib/serialize.h:337 */
	Vector ComputeFaceCentroid(const RnHull_t* , int);
	/* ../public/physicslib/serialize.h:338 */
	void Transform(RnHull_t* , const matrix3x4a_t& );
	/* ../public/physicslib/serialize.h:340 */
	AABB_t GetBbox(const RnHull_t* , float);
	/* ../public/physicslib/serialize.h:341 */
	AABB_t GetBbox(const RnHull_t* , const CTransform& , float);
	/* ../public/physicslib/serialize.h:344 */
	void GetTriangulation(const RnHull_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , float);
	/* ../public/physicslib/serialize.h:345 */
	void GetTriangulation(const RnHull_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , float);
	/* ../public/physicslib/serialize.h:347 */
	float GetSurfaceArea(const RnHull_t* );
	/* ../public/physicslib/serialize.h:349 */
	int GetMemory(const RnHull_t* );
	/* ../public/physicslib/serialize.h:350 */
	uintp GetRuntimeSize(const RnHull_t* );
	/* ../public/physicslib/serialize.h:351 */
	void Validate(const RnHull_t* );
	/* ../public/physicslib/serialize.h:353 */
	int FindSupportVertex(const RnHull_t* , const Vector& );
	/* ../public/physicslib/serialize.h:354 */
	int FindSupportFace(const RnHull_t* , const Vector& );
protected:
	/* ../public/physicslib/serialize.h:357 */
	void KV3TransferPostSaveFn(const RnHull_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:358 */
	void KV3TransferPostLoadFn(RnHull_t* , CKV3TransferLoadContext* );
	void ~RnHull_t(RnHull_t* );
	void RnHull_t(RnHull_t* );
};

// <00A919CA> ../public/physicslib/serialize.h:298
// member functions: 42
// member variables: 14
// static member variable: 1
// struct size: 280
struct RnHull_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:300 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:300 */
	RnHull_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:300 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:300 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:300 */
	void Schema_CompileTimeVerificationFunction(RnHull_t* );
	/* ../public/physicslib/serialize.h:300 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:300 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:300 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnHull_t* );
	/* ../public/physicslib/serialize.h:301 */
	RnHull_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:301 */
	void KV3TransferSave(const RnHull_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:301 */
	void KV3TransferLoad(RnHull_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:301 */
	void KV3TransferSave_RnHull_t(const RnHull_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:301 */
	void KV3TransferLoad_RnHull_t(RnHull_t* , CKV3TransferLoadContext* );
	Vector m_vCentroid; /* 0 12 */
	float m_flMaxAngularRadius; /* 12 4 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_Vertices; /* 16 32 */
	CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> > m_Planes; /* 48 32 */
	CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> > m_Edges; /* 80 32 */
	CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> > m_Faces; /* 112 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_EdgeOrigins; /* 144 32 */
	Vector m_vOrthographicAreas; /* 176 12 */
	matrix3x4_t m_MassProperties; /* 188 48 */
	float m_flVolume; /* 236 4 */
	float m_flMaxMotionRadius; /* 240 4 */
	float m_flMinMotionThickness; /* 244 4 */
	AABB_t m_Bounds; /* 248 24 */
	uint32 m_nFlags; /* 272 4 */
	/* ../public/physicslib/serialize.h:320 */
	int GetVertexCount(const RnHull_t* );
	/* ../public/physicslib/serialize.h:321 */
	const Vector GetVertex(const RnHull_t* , int);
	/* ../public/physicslib/serialize.h:322 */
	int GetPlaneCount(const RnHull_t* );
	/* ../public/physicslib/serialize.h:323 */
	const RnPlane_t& GetPlane(const RnHull_t* , int);
	/* ../public/physicslib/serialize.h:324 */
	const Vector& GetPlaneNormal(const RnHull_t* , int);
	/* ../public/physicslib/serialize.h:325 */
	int GetEdgeCount(const RnHull_t* );
	/* ../public/physicslib/serialize.h:326 */
	const RnHalfEdge_t* GetEdge(const RnHull_t* , int);
	/* ../public/physicslib/serialize.h:327 */
	int GetFaceCount(const RnHull_t* );
	/* ../public/physicslib/serialize.h:328 */
	const RnFace_t* GetFace(const RnHull_t* , int);
	/* ../public/physicslib/serialize.h:329 */
	float GetVolume(const RnHull_t* );
	/* ../public/physicslib/serialize.h:330 */
	Vector GetMassCenter(const RnHull_t* );
	/* ../public/physicslib/serialize.h:331 */
	matrix3x4_t GetInertia(const RnHull_t* );
	/* ../public/physicslib/serialize.h:332 */
	Vector GetCentroid(const RnHull_t* );
	/* ../public/physicslib/serialize.h:334 */
	int GetEdgeIndex(const RnHull_t* , const RnHalfEdge_t* );
	/* ../public/physicslib/serialize.h:335 */
	int GetFaceIndex(const RnHull_t* , const RnFace_t* );
	/* ../public/physicslib/serialize.h:337 */
	Vector ComputeFaceCentroid(const RnHull_t* , int);
	/* ../public/physicslib/serialize.h:338 */
	void Transform(RnHull_t* , const matrix3x4a_t& );
	/* ../public/physicslib/serialize.h:340 */
	AABB_t GetBbox(const RnHull_t* , float);
	/* ../public/physicslib/serialize.h:341 */
	AABB_t GetBbox(const RnHull_t* , const CTransform& , float);
	/* ../public/physicslib/serialize.h:344 */
	void GetTriangulation(const RnHull_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , float);
	/* ../public/physicslib/serialize.h:345 */
	void GetTriangulation(const RnHull_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , float);
	/* ../public/physicslib/serialize.h:347 */
	float GetSurfaceArea(const RnHull_t* );
	/* ../public/physicslib/serialize.h:349 */
	int GetMemory(const RnHull_t* );
	/* ../public/physicslib/serialize.h:350 */
	uintp GetRuntimeSize(const RnHull_t* );
	/* ../public/physicslib/serialize.h:351 */
	void Validate(const RnHull_t* );
	/* ../public/physicslib/serialize.h:353 */
	int FindSupportVertex(const RnHull_t* , const Vector& );
	/* ../public/physicslib/serialize.h:354 */
	int FindSupportFace(const RnHull_t* , const Vector& );
protected:
	/* ../public/physicslib/serialize.h:357 */
	void KV3TransferPostSaveFn(const RnHull_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:358 */
	void KV3TransferPostLoadFn(RnHull_t* , CKV3TransferLoadContext* );
};

// <04EF3285> ../public/physicslib/serialize.h:298
// member functions: 45
// member variables: 14
// static member variable: 1
// struct size: 280
struct RnHull_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:300 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:300 */
	RnHull_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:300 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:300 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:300 */
	void Schema_CompileTimeVerificationFunction(RnHull_t* );
	/* ../public/physicslib/serialize.h:300 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:300 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:300 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnHull_t* );
	/* ../public/physicslib/serialize.h:301 */
	RnHull_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:301 */
	void KV3TransferSave(const RnHull_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:301 */
	void KV3TransferLoad(RnHull_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:301 */
	void KV3TransferSave_RnHull_t(const RnHull_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:301 */
	void KV3TransferLoad_RnHull_t(RnHull_t* , CKV3TransferLoadContext* );
	Vector m_vCentroid; /* 0 12 */
	float m_flMaxAngularRadius; /* 12 4 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_Vertices; /* 16 32 */
	CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> > m_Planes; /* 48 32 */
	CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> > m_Edges; /* 80 32 */
	CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> > m_Faces; /* 112 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_EdgeOrigins; /* 144 32 */
	Vector m_vOrthographicAreas; /* 176 12 */
	matrix3x4_t m_MassProperties; /* 188 48 */
	float m_flVolume; /* 236 4 */
	float m_flMaxMotionRadius; /* 240 4 */
	float m_flMinMotionThickness; /* 244 4 */
	AABB_t m_Bounds; /* 248 24 */
	uint32 m_nFlags; /* 272 4 */
	/* ../public/physicslib/serialize.h:320 */
	int GetVertexCount(const RnHull_t* );
	/* ../public/physicslib/serialize.h:321 */
	const Vector GetVertex(const RnHull_t* , int);
	/* ../public/physicslib/serialize.h:322 */
	int GetPlaneCount(const RnHull_t* );
	/* ../public/physicslib/serialize.h:323 */
	const RnPlane_t& GetPlane(const RnHull_t* , int);
	/* ../public/physicslib/serialize.h:324 */
	const Vector& GetPlaneNormal(const RnHull_t* , int);
	/* ../public/physicslib/serialize.h:325 */
	int GetEdgeCount(const RnHull_t* );
	/* ../public/physicslib/serialize.h:326 */
	const RnHalfEdge_t* GetEdge(const RnHull_t* , int);
	/* ../public/physicslib/serialize.h:327 */
	int GetFaceCount(const RnHull_t* );
	/* ../public/physicslib/serialize.h:328 */
	const RnFace_t* GetFace(const RnHull_t* , int);
	/* ../public/physicslib/serialize.h:329 */
	float GetVolume(const RnHull_t* );
	/* ../public/physicslib/serialize.h:330 */
	Vector GetMassCenter(const RnHull_t* );
	/* ../public/physicslib/serialize.h:331 */
	matrix3x4_t GetInertia(const RnHull_t* );
	/* ../public/physicslib/serialize.h:332 */
	Vector GetCentroid(const RnHull_t* );
	/* ../public/physicslib/serialize.h:334 */
	int GetEdgeIndex(const RnHull_t* , const RnHalfEdge_t* );
	/* ../public/physicslib/serialize.h:335 */
	int GetFaceIndex(const RnHull_t* , const RnFace_t* );
	/* ../public/physicslib/serialize.h:337 */
	Vector ComputeFaceCentroid(const RnHull_t* , int);
	/* ../public/physicslib/serialize.h:338 */
	void Transform(RnHull_t* , const matrix3x4a_t& );
	/* ../public/physicslib/serialize.h:340 */
	AABB_t GetBbox(const RnHull_t* , float);
	/* ../public/physicslib/serialize.h:341 */
	AABB_t GetBbox(const RnHull_t* , const CTransform& , float);
	/* ../public/physicslib/serialize.h:344 */
	void GetTriangulation(const RnHull_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , float);
	/* ../public/physicslib/serialize.h:345 */
	void GetTriangulation(const RnHull_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , float);
	/* ../public/physicslib/serialize.h:347 */
	float GetSurfaceArea(const RnHull_t* );
	/* ../public/physicslib/serialize.h:349 */
	int GetMemory(const RnHull_t* );
	/* ../public/physicslib/serialize.h:350 */
	uintp GetRuntimeSize(const RnHull_t* );
	/* ../public/physicslib/serialize.h:351 */
	void Validate(const RnHull_t* );
	/* ../public/physicslib/serialize.h:353 */
	int FindSupportVertex(const RnHull_t* , const Vector& );
	/* ../public/physicslib/serialize.h:354 */
	int FindSupportFace(const RnHull_t* , const Vector& );
protected:
	/* ../public/physicslib/serialize.h:357 */
	void KV3TransferPostSaveFn(const RnHull_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:358 */
	void KV3TransferPostLoadFn(RnHull_t* , CKV3TransferLoadContext* );
	RnHull_t& operator=(RnHull_t* , const RnHull_t& );
	void RnHull_t(RnHull_t* );
	void ~RnHull_t(RnHull_t* );
};

// <0663B593> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:298
// member functions: 45
// member variables: 14
// static member variable: 1
// struct size: 280
struct RnHull_t {
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:301 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:300 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:300 */
	RnHull_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:300 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:300 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:300 */
	void Schema_CompileTimeVerificationFunction(RnHull_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:300 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:300 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:300 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnHull_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:301 */
	RnHull_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:301 */
	void KV3TransferSave(const RnHull_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:301 */
	void KV3TransferLoad(RnHull_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:301 */
	void KV3TransferSave_RnHull_t(const RnHull_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:301 */
	void KV3TransferLoad_RnHull_t(RnHull_t* , CKV3TransferLoadContext* );
	Vector m_vCentroid; /* 0 12 */
	float m_flMaxAngularRadius; /* 12 4 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_Vertices; /* 16 32 */
	CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> > m_Planes; /* 48 32 */
	CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> > m_Edges; /* 80 32 */
	CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> > m_Faces; /* 112 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_EdgeOrigins; /* 144 32 */
	Vector m_vOrthographicAreas; /* 176 12 */
	matrix3x4_t m_MassProperties; /* 188 48 */
	float m_flVolume; /* 236 4 */
	float m_flMaxMotionRadius; /* 240 4 */
	float m_flMinMotionThickness; /* 244 4 */
	AABB_t m_Bounds; /* 248 24 */
	uint32 m_nFlags; /* 272 4 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:320 */
	int GetVertexCount(const RnHull_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:321 */
	const Vector GetVertex(const RnHull_t* , int);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:322 */
	int GetPlaneCount(const RnHull_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:323 */
	const RnPlane_t& GetPlane(const RnHull_t* , int);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:324 */
	const Vector& GetPlaneNormal(const RnHull_t* , int);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:325 */
	int GetEdgeCount(const RnHull_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:326 */
	const RnHalfEdge_t* GetEdge(const RnHull_t* , int);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:327 */
	int GetFaceCount(const RnHull_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:328 */
	const RnFace_t* GetFace(const RnHull_t* , int);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:329 */
	float GetVolume(const RnHull_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:330 */
	Vector GetMassCenter(const RnHull_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:331 */
	matrix3x4_t GetInertia(const RnHull_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:332 */
	Vector GetCentroid(const RnHull_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:334 */
	int GetEdgeIndex(const RnHull_t* , const RnHalfEdge_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:335 */
	int GetFaceIndex(const RnHull_t* , const RnFace_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:337 */
	Vector ComputeFaceCentroid(const RnHull_t* , int);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:338 */
	void Transform(RnHull_t* , const matrix3x4a_t& );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:340 */
	AABB_t GetBbox(const RnHull_t* , float);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:341 */
	AABB_t GetBbox(const RnHull_t* , const CTransform& , float);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:344 */
	void GetTriangulation(const RnHull_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , float);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:345 */
	void GetTriangulation(const RnHull_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , float);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:347 */
	float GetSurfaceArea(const RnHull_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:349 */
	int GetMemory(const RnHull_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:350 */
	uintp GetRuntimeSize(const RnHull_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:351 */
	void Validate(const RnHull_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:353 */
	int FindSupportVertex(const RnHull_t* , const Vector& );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:354 */
	int FindSupportFace(const RnHull_t* , const Vector& );
protected:
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:357 */
	void KV3TransferPostSaveFn(const RnHull_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:358 */
	void KV3TransferPostLoadFn(RnHull_t* , CKV3TransferLoadContext* );
	void ~RnHull_t(RnHull_t* );
	void RnHull_t(RnHull_t* );
	RnHull_t& operator=(RnHull_t* , const RnHull_t& );
};

// <0668BA6B> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:300
inline void RnHull_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0134B1FA> ../public/physicslib/serialize.h:320
inline void RnHull_t::GetVertexCount()
{
} /* size: 0 */

// <0646FEF7> ../public/physicslib/serialize.h:321
inline void RnHull_t::GetVertex(int nVertex)
{
} /* size: 0 */

// <0134B1BB> ../public/physicslib/serialize.h:325
inline void RnHull_t::GetEdgeCount()
{
} /* size: 0 */

// <0668BA45> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:326
inline void RnHull_t::GetEdge(int nEdge)
{
} /* size: 0 */

// <0646FEB8> ../public/physicslib/serialize.h:327
inline void RnHull_t::GetFaceCount()
{
} /* size: 0 */

// <0646FE92> ../public/physicslib/serialize.h:328
inline void RnHull_t::GetFace(int nFace)
{
} /* size: 0 */

// <0134B13D> ../public/physicslib/serialize.h:329
inline void RnHull_t::GetVolume()
{
} /* size: 0 */

// <0134B124> ../public/physicslib/serialize.h:330
inline void RnHull_t::GetMassCenter()
{
} /* size: 0 */

// <0134B10B> ../public/physicslib/serialize.h:332
inline void RnHull_t::GetCentroid()
{
} /* size: 0 */

// <00967E5F> ../public/physicslib/serialize.h:522
// member functions: 14
// member variable: 1
// static member variable: 1
// struct size: 12
struct RnTriangle_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:524 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:524 */
	RnTriangle_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:524 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:524 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:524 */
	void Schema_CompileTimeVerificationFunction(RnTriangle_t* );
	/* ../public/physicslib/serialize.h:524 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:524 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:524 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnTriangle_t* );
	/* ../public/physicslib/serialize.h:525 */
	RnTriangle_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:525 */
	void KV3TransferSave(const RnTriangle_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:525 */
	void KV3TransferLoad(RnTriangle_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:525 */
	void KV3TransferSave_RnTriangle_t(const RnTriangle_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:525 */
	void KV3TransferLoad_RnTriangle_t(RnTriangle_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:527 */
	void RnTriangle_t(RnTriangle_t* );
	int32 m_nIndex[3]; /* 0 12 */
};

// <06642775> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:522
// member functions: 14
// member variable: 1
// static member variable: 1
// struct size: 12
struct RnTriangle_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:524 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:524 */
	RnTriangle_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:524 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:524 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:524 */
	void Schema_CompileTimeVerificationFunction(RnTriangle_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:524 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:524 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:524 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnTriangle_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:525 */
	RnTriangle_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:525 */
	void KV3TransferSave(const RnTriangle_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:525 */
	void KV3TransferLoad(RnTriangle_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:525 */
	void KV3TransferSave_RnTriangle_t(const RnTriangle_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:525 */
	void KV3TransferLoad_RnTriangle_t(RnTriangle_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:527 */
	void RnTriangle_t(RnTriangle_t* );
	int32 m_nIndex[3]; /* 0 12 */
};

// <0668BA26> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:524
inline void RnTriangle_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0668BA0F> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:527
void RnTriangle_t::RnTriangle_t()
{
} /* size: 0 */

// <0668B9F6> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:527
inline void RnTriangle_t::RnTriangle_t()
{
} /* size: 0 */

// <06675127> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:536
inline void RnNode_t::operator=(const RnNode_t &)
{
} /* size: 0 */

// <06675110> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:536
void RnNode_t::RnNode_t()
{
} /* size: 0 */

// <066750F3> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:536
inline void RnNode_t::RnNode_t()
{
} /* size: 0 */

// <00968041> ../public/physicslib/serialize.h:536
// member functions: 29
// member variables: 4
// static member variable: 1
// struct size: 32
struct RnNode_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:538 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:538 */
	RnNode_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:538 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:538 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:538 */
	void Schema_CompileTimeVerificationFunction(RnNode_t* );
	/* ../public/physicslib/serialize.h:538 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:538 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:538 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnNode_t* );
	/* ../public/physicslib/serialize.h:539 */
	RnNode_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:539 */
	void KV3TransferSave(const RnNode_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:539 */
	void KV3TransferLoad(RnNode_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:539 */
	void KV3TransferSave_RnNode_t(const RnNode_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:539 */
	void KV3TransferLoad_RnNode_t(RnNode_t* , CKV3TransferLoadContext* );
	Vector m_vMin; /* 0 12 */
	uint32 m_nChildren; /* 12 4 */
	Vector m_vMax; /* 16 12 */
	uint32 m_nTriangleOffset; /* 28 4 */
	/* ../public/physicslib/serialize.h:547 */
	bool IsLeaf(const RnNode_t* );
	/* ../public/physicslib/serialize.h:548 */
	RnNode_t* GetLeftChild(RnNode_t* );
	/* ../public/physicslib/serialize.h:549 */
	const RnNode_t* GetLeftChild(const RnNode_t* );
	/* ../public/physicslib/serialize.h:550 */
	RnNode_t* GetRightChild(RnNode_t* );
	/* ../public/physicslib/serialize.h:551 */
	const RnNode_t* GetRightChild(const RnNode_t* );
	/* ../public/physicslib/serialize.h:552 */
	uint GetAxis(const RnNode_t* );
	/* ../public/physicslib/serialize.h:553 */
	uint GetChildOffset(const RnNode_t* );
	/* ../public/physicslib/serialize.h:554 */
	uint GetType(const RnNode_t* );
	/* ../public/physicslib/serialize.h:555 */
	uint GetTriangleCount(const RnNode_t* );
	/* ../public/physicslib/serialize.h:556 */
	uint GetTriangleOffset(const RnNode_t* );
	/* ../public/physicslib/serialize.h:557 */
	void SetTriangleOffset(RnNode_t* , uint32);
	/* ../public/physicslib/serialize.h:560 */
	void SetLeaf(RnNode_t* , uint, uint);
	/* ../public/physicslib/serialize.h:566 */
	void SetNode(RnNode_t* , uint, uint);
	/* ../public/physicslib/serialize.h:573 */
	int GetHeight(const RnNode_t* );
	void RnNode_t(RnNode_t* );
	RnNode_t& operator=(RnNode_t* , const RnNode_t& );
} __attribute__((__aligned__(16)));

// <00A9665B> ../public/physicslib/serialize.h:536
// member functions: 27
// member variables: 4
// static member variable: 1
// struct size: 32
struct RnNode_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:538 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:538 */
	RnNode_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:538 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:538 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:538 */
	void Schema_CompileTimeVerificationFunction(RnNode_t* );
	/* ../public/physicslib/serialize.h:538 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:538 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:538 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnNode_t* );
	/* ../public/physicslib/serialize.h:539 */
	RnNode_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:539 */
	void KV3TransferSave(const RnNode_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:539 */
	void KV3TransferLoad(RnNode_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:539 */
	void KV3TransferSave_RnNode_t(const RnNode_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:539 */
	void KV3TransferLoad_RnNode_t(RnNode_t* , CKV3TransferLoadContext* );
	Vector m_vMin; /* 0 12 */
	uint32 m_nChildren; /* 12 4 */
	Vector m_vMax; /* 16 12 */
	uint32 m_nTriangleOffset; /* 28 4 */
	/* ../public/physicslib/serialize.h:547 */
	bool IsLeaf(const RnNode_t* );
	/* ../public/physicslib/serialize.h:548 */
	RnNode_t* GetLeftChild(RnNode_t* );
	/* ../public/physicslib/serialize.h:549 */
	const RnNode_t* GetLeftChild(const RnNode_t* );
	/* ../public/physicslib/serialize.h:550 */
	RnNode_t* GetRightChild(RnNode_t* );
	/* ../public/physicslib/serialize.h:551 */
	const RnNode_t* GetRightChild(const RnNode_t* );
	/* ../public/physicslib/serialize.h:552 */
	uint GetAxis(const RnNode_t* );
	/* ../public/physicslib/serialize.h:553 */
	uint GetChildOffset(const RnNode_t* );
	/* ../public/physicslib/serialize.h:554 */
	uint GetType(const RnNode_t* );
	/* ../public/physicslib/serialize.h:555 */
	uint GetTriangleCount(const RnNode_t* );
	/* ../public/physicslib/serialize.h:556 */
	uint GetTriangleOffset(const RnNode_t* );
	/* ../public/physicslib/serialize.h:557 */
	void SetTriangleOffset(RnNode_t* , uint32);
	/* ../public/physicslib/serialize.h:560 */
	void SetLeaf(RnNode_t* , uint, uint);
	/* ../public/physicslib/serialize.h:566 */
	void SetNode(RnNode_t* , uint, uint);
	/* ../public/physicslib/serialize.h:573 */
	int GetHeight(const RnNode_t* );
} __attribute__((__aligned__(16)));

// <06642959> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:536
// member functions: 29
// member variables: 4
// static member variable: 1
// struct size: 32
struct RnNode_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:538 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:538 */
	RnNode_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:538 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:538 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:538 */
	void Schema_CompileTimeVerificationFunction(RnNode_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:538 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:538 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:538 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnNode_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:539 */
	RnNode_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:539 */
	void KV3TransferSave(const RnNode_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:539 */
	void KV3TransferLoad(RnNode_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:539 */
	void KV3TransferSave_RnNode_t(const RnNode_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:539 */
	void KV3TransferLoad_RnNode_t(RnNode_t* , CKV3TransferLoadContext* );
	Vector m_vMin; /* 0 12 */
	uint32 m_nChildren; /* 12 4 */
	Vector m_vMax; /* 16 12 */
	uint32 m_nTriangleOffset; /* 28 4 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:547 */
	bool IsLeaf(const RnNode_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:548 */
	RnNode_t* GetLeftChild(RnNode_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:549 */
	const RnNode_t* GetLeftChild(const RnNode_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:550 */
	RnNode_t* GetRightChild(RnNode_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:551 */
	const RnNode_t* GetRightChild(const RnNode_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:552 */
	uint GetAxis(const RnNode_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:553 */
	uint GetChildOffset(const RnNode_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:554 */
	uint GetType(const RnNode_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:555 */
	uint GetTriangleCount(const RnNode_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:556 */
	uint GetTriangleOffset(const RnNode_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:557 */
	void SetTriangleOffset(RnNode_t* , uint32);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:560 */
	void SetLeaf(RnNode_t* , uint, uint);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:566 */
	void SetNode(RnNode_t* , uint, uint);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:573 */
	int GetHeight(const RnNode_t* );
	void RnNode_t(RnNode_t* );
	RnNode_t& operator=(RnNode_t* , const RnNode_t& );
} __attribute__((__aligned__(16)));

// <0668B9D7> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:538
inline void RnNode_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0134B0F2> ../public/physicslib/serialize.h:547
inline void RnNode_t::IsLeaf()
{
} /* size: 0 */

// <0134B0D9> ../public/physicslib/serialize.h:549
inline void RnNode_t::GetLeftChild()
{
} /* size: 0 */

// <0134B0C0> ../public/physicslib/serialize.h:551
inline void RnNode_t::GetRightChild()
{
} /* size: 0 */

// <0134B0A7> ../public/physicslib/serialize.h:553
inline void RnNode_t::GetChildOffset()
{
} /* size: 0 */

// <0134B08E> ../public/physicslib/serialize.h:554
inline void RnNode_t::GetType()
{
} /* size: 0 */

// <06693782> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:632
// function calls: 78
void RnMesh_t::operator=(const RnMesh_t &)
{
	Vector::operator=(
			const Vector& vOther);  // 632
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Count(); // 573
	CUtlMemory<RnNode_t, int>::Base(); // 112
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Base(); // 102
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::begin(); // 574
	CUtlMemory<RnNode_t, int>::Base(); // 113
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Base(); // 105
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Count(); // 105
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 536
	Vector::operator=(
			const Vector& vOther);  // 536
	RnNode_t::operator=(
			const RnNode_t  &);  // 209
	UtlTraitsCopyRange<RnNode_t>(const RnNode_t* pFrom,
					const RnNode_t* pFromEnd,
					RnNode_t* pTo);  // 200
	UtlTraitsCopyRange<RnNode_t>(const RnNode_t* pFrom,
					const RnNode_t* pFromEnd,
					RnNode_t* pTo);  // 574
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::operator=(
			const CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >& other);  // 565
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::operator=(
			const CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >& other);  // 452
	CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >::operator=(
			const CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >& src);  // 632
	Vector::operator=(
			const Vector& vOther);  // 632
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 573
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 574
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 574
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 565
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 452
	CUtlVector<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 632
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 573
	CUtlMemory<RnTriangle_t, int>::Base(); // 112
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Base(); // 102
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::begin(); // 574
	CUtlMemory<RnTriangle_t, int>::Base(); // 113
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Base(); // 105
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 105
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<RnHalfEdge_t>(const RnHalfEdge_t* pFrom,
					const RnHalfEdge_t* pFromEnd,
					RnHalfEdge_t* pTo);  // 173
	UtlTraitsCopyRange<RnTriangle_t>(const RnTriangle_t* pFrom,
					const RnTriangle_t* pFromEnd,
					RnTriangle_t* pTo);  // 574
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::operator=(
			const CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& other);  // 565
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::operator=(
			const CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& other);  // 452
	CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::operator=(
			const CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& src);  // 632
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 573
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 574
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<RnHalfEdge_t>(const RnHalfEdge_t* pFrom,
					const RnHalfEdge_t* pFromEnd,
					RnHalfEdge_t* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 574
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 565
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 632
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 573
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 574
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<RnHalfEdge_t>(const RnHalfEdge_t* pFrom,
					const RnHalfEdge_t* pFromEnd,
					RnHalfEdge_t* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 574
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 565
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 632
	Vector::operator=(
			const Vector& vOther);  // 632
} /* size: 707, inline expansions: 78 (2943 bytes) */

// <066729E3> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:632
inline void RnMesh_t::operator=(const RnMesh_t &)
{
} /* size: 0 */

// <06672964> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:632
void RnMesh_t::RnMesh_t()
{
} /* size: 0 */

// <06672947> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:632
inline void RnMesh_t::RnMesh_t()
{
} /* size: 0 */

// <06672089> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:632
// function calls: 47
void RnMesh_t::~RnMesh_t()
{
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 632
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 632
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnTriangle_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnTriangle_t, int>::Purge(); // 903
	CUtlMemory<RnTriangle_t, int>::Purge(); // 1799
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Purge(); // 560
	ValidateAlignment<RnTriangle_t>(void); // 508
	CUtlMemory<RnTriangle_t, int>::Purge(); // 510
	CUtlMemory<RnTriangle_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::~CUtlVector(); // 632
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 632
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnNode_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnNode_t, int>::Purge(); // 903
	CUtlMemory<RnNode_t, int>::Purge(); // 1799
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Purge(); // 560
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >::~CUtlVector(); // 632
} /* size: 198, inline expansions: 47 (763 bytes) */

// <0667206C> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:632
inline void RnMesh_t::~RnMesh_t()
{
} /* size: 0 */

// <064C3807> ../public/physicslib/serialize.h:632
void RnMesh_t::~RnMesh_t()
{
} /* size: 0 */

// <0096844C> ../public/physicslib/serialize.h:632
// member functions: 39
// member variables: 8
// static member variable: 1
// struct size: 200
struct RnMesh_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:634 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:634 */
	RnMesh_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:634 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:634 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:634 */
	void Schema_CompileTimeVerificationFunction(RnMesh_t* );
	/* ../public/physicslib/serialize.h:634 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:634 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:634 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:635 */
	RnMesh_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:635 */
	void KV3TransferSave(const RnMesh_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:635 */
	void KV3TransferLoad(RnMesh_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:635 */
	void KV3TransferSave_RnMesh_t(const RnMesh_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:635 */
	void KV3TransferLoad_RnMesh_t(RnMesh_t* , CKV3TransferLoadContext* );
	Vector m_vMin; /* 0 12 */
	Vector m_vMax; /* 12 12 */
	CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> > m_Nodes; /* 24 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_Vertices; /* 56 32 */
	CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> > m_Triangles; /* 88 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_TriangleFlags; /* 120 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_Materials; /* 152 32 */
	Vector m_vOrthographicAreas; /* 184 12 */
	/* ../public/physicslib/serialize.h:648 */
	RnNode_t* GetRoot(RnMesh_t* );
	/* ../public/physicslib/serialize.h:649 */
	const RnNode_t* GetRoot(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:650 */
	int GetVertexCount(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:651 */
	Vector GetVertex(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:652 */
	int GetTriangleCount(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:653 */
	const RnTriangle_t* GetTriangle(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:654 */
	int GetMaterialCount(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:655 */
	uint8 GetMaterial(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:657 */
	const Vector ComputeTriangleUnitNormal(const RnMesh_t* , const Vector& , int);
	/* ../public/physicslib/serialize.h:658 */
	const Vector ComputeTriangleCentroid(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:659 */
	const Vector ComputeTriangleIncenter(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:662 */
	int GetHeight(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:663 */
	int GetMemory(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:665 */
	AABB_t GetBbox(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:667 */
	void GetTriangulation(const RnMesh_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , const Vector& );
	/* ../public/physicslib/serialize.h:668 */
	void GetTriangulation(const RnMesh_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , const Vector& );
	/* ../public/physicslib/serialize.h:669 */
	void GetPartialTriangulation(const RnMesh_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , const CVarBitVec& , const Vector& );
	/* ../public/physicslib/serialize.h:670 */
	float GetVolume(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:671 */
	float GetSurfaceArea(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:673 */
	uintp GetRuntimeSize(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:675 */
	void Validate(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:680 */
	void GetVertices(const RnMesh_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& );
protected:
	/* ../public/physicslib/serialize.h:690 */
	void KV3TransferPostSaveFn(const RnMesh_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:691 */
	void KV3TransferPostLoadFn(RnMesh_t* , CKV3TransferLoadContext* );
	void RnMesh_t(RnMesh_t* );
	void ~RnMesh_t(RnMesh_t* );
};

// <00A96A22> ../public/physicslib/serialize.h:632
// member functions: 37
// member variables: 8
// static member variable: 1
// struct size: 200
struct RnMesh_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:634 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:634 */
	RnMesh_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:634 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:634 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:634 */
	void Schema_CompileTimeVerificationFunction(RnMesh_t* );
	/* ../public/physicslib/serialize.h:634 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:634 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:634 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:635 */
	RnMesh_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:635 */
	void KV3TransferSave(const RnMesh_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:635 */
	void KV3TransferLoad(RnMesh_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:635 */
	void KV3TransferSave_RnMesh_t(const RnMesh_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:635 */
	void KV3TransferLoad_RnMesh_t(RnMesh_t* , CKV3TransferLoadContext* );
	Vector m_vMin; /* 0 12 */
	Vector m_vMax; /* 12 12 */
	CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> > m_Nodes; /* 24 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_Vertices; /* 56 32 */
	CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> > m_Triangles; /* 88 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_TriangleFlags; /* 120 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_Materials; /* 152 32 */
	Vector m_vOrthographicAreas; /* 184 12 */
	/* ../public/physicslib/serialize.h:648 */
	RnNode_t* GetRoot(RnMesh_t* );
	/* ../public/physicslib/serialize.h:649 */
	const RnNode_t* GetRoot(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:650 */
	int GetVertexCount(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:651 */
	Vector GetVertex(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:652 */
	int GetTriangleCount(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:653 */
	const RnTriangle_t* GetTriangle(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:654 */
	int GetMaterialCount(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:655 */
	uint8 GetMaterial(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:657 */
	const Vector ComputeTriangleUnitNormal(const RnMesh_t* , const Vector& , int);
	/* ../public/physicslib/serialize.h:658 */
	const Vector ComputeTriangleCentroid(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:659 */
	const Vector ComputeTriangleIncenter(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:662 */
	int GetHeight(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:663 */
	int GetMemory(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:665 */
	AABB_t GetBbox(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:667 */
	void GetTriangulation(const RnMesh_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , const Vector& );
	/* ../public/physicslib/serialize.h:668 */
	void GetTriangulation(const RnMesh_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , const Vector& );
	/* ../public/physicslib/serialize.h:669 */
	void GetPartialTriangulation(const RnMesh_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , const CVarBitVec& , const Vector& );
	/* ../public/physicslib/serialize.h:670 */
	float GetVolume(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:671 */
	float GetSurfaceArea(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:673 */
	uintp GetRuntimeSize(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:675 */
	void Validate(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:680 */
	void GetVertices(const RnMesh_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& );
protected:
	/* ../public/physicslib/serialize.h:690 */
	void KV3TransferPostSaveFn(const RnMesh_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:691 */
	void KV3TransferPostLoadFn(RnMesh_t* , CKV3TransferLoadContext* );
};

// <04EFAA45> ../public/physicslib/serialize.h:632
// member functions: 40
// member variables: 8
// static member variable: 1
// struct size: 200
struct RnMesh_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:634 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:634 */
	RnMesh_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:634 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:634 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:634 */
	void Schema_CompileTimeVerificationFunction(RnMesh_t* );
	/* ../public/physicslib/serialize.h:634 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:634 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:634 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:635 */
	RnMesh_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:635 */
	void KV3TransferSave(const RnMesh_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:635 */
	void KV3TransferLoad(RnMesh_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:635 */
	void KV3TransferSave_RnMesh_t(const RnMesh_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:635 */
	void KV3TransferLoad_RnMesh_t(RnMesh_t* , CKV3TransferLoadContext* );
	Vector m_vMin; /* 0 12 */
	Vector m_vMax; /* 12 12 */
	CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> > m_Nodes; /* 24 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_Vertices; /* 56 32 */
	CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> > m_Triangles; /* 88 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_TriangleFlags; /* 120 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_Materials; /* 152 32 */
	Vector m_vOrthographicAreas; /* 184 12 */
	/* ../public/physicslib/serialize.h:648 */
	RnNode_t* GetRoot(RnMesh_t* );
	/* ../public/physicslib/serialize.h:649 */
	const RnNode_t* GetRoot(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:650 */
	int GetVertexCount(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:651 */
	Vector GetVertex(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:652 */
	int GetTriangleCount(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:653 */
	const RnTriangle_t* GetTriangle(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:654 */
	int GetMaterialCount(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:655 */
	uint8 GetMaterial(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:657 */
	const Vector ComputeTriangleUnitNormal(const RnMesh_t* , const Vector& , int);
	/* ../public/physicslib/serialize.h:658 */
	const Vector ComputeTriangleCentroid(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:659 */
	const Vector ComputeTriangleIncenter(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:662 */
	int GetHeight(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:663 */
	int GetMemory(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:665 */
	AABB_t GetBbox(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:667 */
	void GetTriangulation(const RnMesh_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , const Vector& );
	/* ../public/physicslib/serialize.h:668 */
	void GetTriangulation(const RnMesh_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , const Vector& );
	/* ../public/physicslib/serialize.h:669 */
	void GetPartialTriangulation(const RnMesh_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , const CVarBitVec& , const Vector& );
	/* ../public/physicslib/serialize.h:670 */
	float GetVolume(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:671 */
	float GetSurfaceArea(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:673 */
	uintp GetRuntimeSize(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:675 */
	void Validate(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:680 */
	void GetVertices(const RnMesh_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& );
protected:
	/* ../public/physicslib/serialize.h:690 */
	void KV3TransferPostSaveFn(const RnMesh_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:691 */
	void KV3TransferPostLoadFn(RnMesh_t* , CKV3TransferLoadContext* );
	RnMesh_t& operator=(RnMesh_t* , const RnMesh_t& );
	void RnMesh_t(RnMesh_t* );
	void ~RnMesh_t(RnMesh_t* );
};

// <063D0D0A> ../public/physicslib/serialize.h:632
// member functions: 38
// member variables: 8
// static member variable: 1
// struct size: 200
struct RnMesh_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:634 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:634 */
	RnMesh_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:634 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:634 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:634 */
	void Schema_CompileTimeVerificationFunction(RnMesh_t* );
	/* ../public/physicslib/serialize.h:634 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:634 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:634 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:635 */
	RnMesh_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:635 */
	void KV3TransferSave(const RnMesh_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:635 */
	void KV3TransferLoad(RnMesh_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:635 */
	void KV3TransferSave_RnMesh_t(const RnMesh_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:635 */
	void KV3TransferLoad_RnMesh_t(RnMesh_t* , CKV3TransferLoadContext* );
	Vector m_vMin; /* 0 12 */
	Vector m_vMax; /* 12 12 */
	CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> > m_Nodes; /* 24 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_Vertices; /* 56 32 */
	CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> > m_Triangles; /* 88 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_TriangleFlags; /* 120 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_Materials; /* 152 32 */
	Vector m_vOrthographicAreas; /* 184 12 */
	/* ../public/physicslib/serialize.h:648 */
	RnNode_t* GetRoot(RnMesh_t* );
	/* ../public/physicslib/serialize.h:649 */
	const RnNode_t* GetRoot(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:650 */
	int GetVertexCount(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:651 */
	Vector GetVertex(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:652 */
	int GetTriangleCount(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:653 */
	const RnTriangle_t* GetTriangle(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:654 */
	int GetMaterialCount(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:655 */
	uint8 GetMaterial(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:657 */
	const Vector ComputeTriangleUnitNormal(const RnMesh_t* , const Vector& , int);
	/* ../public/physicslib/serialize.h:658 */
	const Vector ComputeTriangleCentroid(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:659 */
	const Vector ComputeTriangleIncenter(const RnMesh_t* , int);
	/* ../public/physicslib/serialize.h:662 */
	int GetHeight(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:663 */
	int GetMemory(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:665 */
	AABB_t GetBbox(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:667 */
	void GetTriangulation(const RnMesh_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , const Vector& );
	/* ../public/physicslib/serialize.h:668 */
	void GetTriangulation(const RnMesh_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , const Vector& );
	/* ../public/physicslib/serialize.h:669 */
	void GetPartialTriangulation(const RnMesh_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , const CVarBitVec& , const Vector& );
	/* ../public/physicslib/serialize.h:670 */
	float GetVolume(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:671 */
	float GetSurfaceArea(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:673 */
	uintp GetRuntimeSize(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:675 */
	void Validate(const RnMesh_t* );
	/* ../public/physicslib/serialize.h:680 */
	void GetVertices(const RnMesh_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& );
protected:
	/* ../public/physicslib/serialize.h:690 */
	void KV3TransferPostSaveFn(const RnMesh_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:691 */
	void KV3TransferPostLoadFn(RnMesh_t* , CKV3TransferLoadContext* );
	void ~RnMesh_t(RnMesh_t* );
};

// <06642D65> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:632
// member functions: 40
// member variables: 8
// static member variable: 1
// struct size: 200
struct RnMesh_t {
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:635 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:634 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:634 */
	RnMesh_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:634 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:634 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:634 */
	void Schema_CompileTimeVerificationFunction(RnMesh_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:634 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:634 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:634 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnMesh_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:635 */
	RnMesh_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:635 */
	void KV3TransferSave(const RnMesh_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:635 */
	void KV3TransferLoad(RnMesh_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:635 */
	void KV3TransferSave_RnMesh_t(const RnMesh_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:635 */
	void KV3TransferLoad_RnMesh_t(RnMesh_t* , CKV3TransferLoadContext* );
	Vector m_vMin; /* 0 12 */
	Vector m_vMax; /* 12 12 */
	CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> > m_Nodes; /* 24 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_Vertices; /* 56 32 */
	CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> > m_Triangles; /* 88 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_TriangleFlags; /* 120 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_Materials; /* 152 32 */
	Vector m_vOrthographicAreas; /* 184 12 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:648 */
	RnNode_t* GetRoot(RnMesh_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:649 */
	const RnNode_t* GetRoot(const RnMesh_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:650 */
	int GetVertexCount(const RnMesh_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:651 */
	Vector GetVertex(const RnMesh_t* , int);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:652 */
	int GetTriangleCount(const RnMesh_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:653 */
	const RnTriangle_t* GetTriangle(const RnMesh_t* , int);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:654 */
	int GetMaterialCount(const RnMesh_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:655 */
	uint8 GetMaterial(const RnMesh_t* , int);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:657 */
	const Vector ComputeTriangleUnitNormal(const RnMesh_t* , const Vector& , int);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:658 */
	const Vector ComputeTriangleCentroid(const RnMesh_t* , int);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:659 */
	const Vector ComputeTriangleIncenter(const RnMesh_t* , int);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:662 */
	int GetHeight(const RnMesh_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:663 */
	int GetMemory(const RnMesh_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:665 */
	AABB_t GetBbox(const RnMesh_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:667 */
	void GetTriangulation(const RnMesh_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , const Vector& );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:668 */
	void GetTriangulation(const RnMesh_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , const Vector& );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:669 */
	void GetPartialTriangulation(const RnMesh_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& , const CVarBitVec& , const Vector& );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:670 */
	float GetVolume(const RnMesh_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:671 */
	float GetSurfaceArea(const RnMesh_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:673 */
	uintp GetRuntimeSize(const RnMesh_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:675 */
	void Validate(const RnMesh_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:680 */
	void GetVertices(const RnMesh_t* , CUtlVector<Vector, CUtlMemory<Vector, int> >& );
protected:
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:690 */
	void KV3TransferPostSaveFn(const RnMesh_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:691 */
	void KV3TransferPostLoadFn(RnMesh_t* , CKV3TransferLoadContext* );
	void ~RnMesh_t(RnMesh_t* );
	void RnMesh_t(RnMesh_t* );
	RnMesh_t& operator=(RnMesh_t* , const RnMesh_t& );
};

// <0668B9B8> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:634
inline void RnMesh_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0134B075> ../public/physicslib/serialize.h:649
inline void RnMesh_t::GetRoot()
{
} /* size: 0 */

// <0646FE79> ../public/physicslib/serialize.h:650
inline void RnMesh_t::GetVertexCount()
{
} /* size: 0 */

// <0646FE53> ../public/physicslib/serialize.h:651
inline void RnMesh_t::GetVertex(int nVertex)
{
} /* size: 0 */

// <0134B036> ../public/physicslib/serialize.h:652
inline void RnMesh_t::GetTriangleCount()
{
} /* size: 0 */

// <0646FE14> ../public/physicslib/serialize.h:653
inline void RnMesh_t::GetTriangle(int nTriangle)
{
} /* size: 0 */

// <0134AFF7> ../public/physicslib/serialize.h:654
inline void RnMesh_t::GetMaterialCount()
{
} /* size: 0 */

// <0666BDB7> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:698
inline void RnShapeDesc_t::operator=(const RnShapeDesc_t &)
{
} /* size: 0 */

// <0666BD94> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:698
void RnShapeDesc_t::RnShapeDesc_t()
{
} /* size: 0 */

// <0666BD77> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:698
inline void RnShapeDesc_t::RnShapeDesc_t()
{
} /* size: 0 */

// <0666BD60> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:698
void RnShapeDesc_t::~RnShapeDesc_t()
{
} /* size: 0 */

// <0666BD43> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:698
inline void RnShapeDesc_t::~RnShapeDesc_t()
{
} /* size: 0 */

// <0096B853> ../public/physicslib/serialize.h:698
// member functions: 13
// member variables: 3
// static member variable: 1
// struct size: 16
struct RnShapeDesc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:700 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:700 */
	RnShapeDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:700 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:700 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:700 */
	void Schema_CompileTimeVerificationFunction(RnShapeDesc_t* );
	/* ../public/physicslib/serialize.h:700 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:700 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:700 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnShapeDesc_t* );
	/* ../public/physicslib/serialize.h:701 */
	RnShapeDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:701 */
	void KV3TransferSave(const RnShapeDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:701 */
	void KV3TransferLoad(RnShapeDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:701 */
	void KV3TransferSave_RnShapeDesc_t(const RnShapeDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:701 */
	void KV3TransferLoad_RnShapeDesc_t(RnShapeDesc_t* , CKV3TransferLoadContext* );
	uint32 m_nCollisionAttributeIndex; /* 0 4 */
	uint32 m_nSurfacePropertyIndex; /* 4 4 */
	CUtlString m_UserFriendlyName; /* 8 8 */
};

// <04EFDE6F> ../public/physicslib/serialize.h:698
// member functions: 16
// member variables: 3
// static member variable: 1
// struct size: 16
struct RnShapeDesc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:700 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:700 */
	RnShapeDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:700 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:700 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:700 */
	void Schema_CompileTimeVerificationFunction(RnShapeDesc_t* );
	/* ../public/physicslib/serialize.h:700 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:700 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:700 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnShapeDesc_t* );
	/* ../public/physicslib/serialize.h:701 */
	RnShapeDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:701 */
	void KV3TransferSave(const RnShapeDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:701 */
	void KV3TransferLoad(RnShapeDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:701 */
	void KV3TransferSave_RnShapeDesc_t(const RnShapeDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:701 */
	void KV3TransferLoad_RnShapeDesc_t(RnShapeDesc_t* , CKV3TransferLoadContext* );
	uint32 m_nCollisionAttributeIndex; /* 0 4 */
	uint32 m_nSurfacePropertyIndex; /* 4 4 */
	CUtlString m_UserFriendlyName; /* 8 8 */
	void RnShapeDesc_t(RnShapeDesc_t* );
	void ~RnShapeDesc_t(RnShapeDesc_t* );
	RnShapeDesc_t& operator=(RnShapeDesc_t* , const RnShapeDesc_t& );
};

// <063D40F6> ../public/physicslib/serialize.h:698
// member functions: 15
// member variables: 3
// static member variable: 1
// struct size: 16
struct RnShapeDesc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:700 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:700 */
	RnShapeDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:700 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:700 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:700 */
	void Schema_CompileTimeVerificationFunction(RnShapeDesc_t* );
	/* ../public/physicslib/serialize.h:700 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:700 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:700 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnShapeDesc_t* );
	/* ../public/physicslib/serialize.h:701 */
	RnShapeDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:701 */
	void KV3TransferSave(const RnShapeDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:701 */
	void KV3TransferLoad(RnShapeDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:701 */
	void KV3TransferSave_RnShapeDesc_t(const RnShapeDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:701 */
	void KV3TransferLoad_RnShapeDesc_t(RnShapeDesc_t* , CKV3TransferLoadContext* );
	uint32 m_nCollisionAttributeIndex; /* 0 4 */
	uint32 m_nSurfacePropertyIndex; /* 4 4 */
	CUtlString m_UserFriendlyName; /* 8 8 */
	void RnShapeDesc_t(RnShapeDesc_t* );
	void ~RnShapeDesc_t(RnShapeDesc_t* );
};

// <066461AA> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:698
// member functions: 16
// member variables: 3
// static member variable: 1
// struct size: 16
struct RnShapeDesc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:700 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:700 */
	RnShapeDesc_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:700 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:700 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:700 */
	void Schema_CompileTimeVerificationFunction(RnShapeDesc_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:700 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:700 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:700 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnShapeDesc_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:701 */
	RnShapeDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:701 */
	void KV3TransferSave(const RnShapeDesc_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:701 */
	void KV3TransferLoad(RnShapeDesc_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:701 */
	void KV3TransferSave_RnShapeDesc_t(const RnShapeDesc_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:701 */
	void KV3TransferLoad_RnShapeDesc_t(RnShapeDesc_t* , CKV3TransferLoadContext* );
	uint32 m_nCollisionAttributeIndex; /* 0 4 */
	uint32 m_nSurfacePropertyIndex; /* 4 4 */
	CUtlString m_UserFriendlyName; /* 8 8 */
	void ~RnShapeDesc_t(RnShapeDesc_t* );
	void RnShapeDesc_t(RnShapeDesc_t* );
	RnShapeDesc_t& operator=(RnShapeDesc_t* , const RnShapeDesc_t& );
};

// <0668B999> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:700
inline void RnShapeDesc_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <06669CCC> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:708
inline void RnSphereDesc_t::operator=(const RnSphereDesc_t &)
{
} /* size: 0 */

// <06669CA9> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:708
void RnSphereDesc_t::RnSphereDesc_t()
{
} /* size: 0 */

// <06669C8C> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:708
inline void RnSphereDesc_t::RnSphereDesc_t()
{
} /* size: 0 */

// <06669C75> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:708
void RnSphereDesc_t::~RnSphereDesc_t()
{
} /* size: 0 */

// <06669C58> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:708
inline void RnSphereDesc_t::~RnSphereDesc_t()
{
} /* size: 0 */

// <0096BA22> ../public/physicslib/serialize.h:708
// member functions: 13
// member variables: 2
// static member variable: 1
// struct size: 32
struct RnSphereDesc_t : public RnShapeDesc_t {
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:710 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:710 */
	RnSphereDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:710 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:710 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:710 */
	void Schema_CompileTimeVerificationFunction(RnSphereDesc_t* );
	/* ../public/physicslib/serialize.h:710 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:710 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:710 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnSphereDesc_t* );
	/* ../public/physicslib/serialize.h:711 */
	RnSphereDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:711 */
	void KV3TransferSave(const RnSphereDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:711 */
	void KV3TransferLoad(RnSphereDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:711 */
	void KV3TransferSave_RnSphereDesc_t(const RnSphereDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:711 */
	void KV3TransferLoad_RnSphereDesc_t(RnSphereDesc_t* , CKV3TransferLoadContext* );
	RnSphere_t m_Sphere; /* 16 16 */
};

// <04EFE09A> ../public/physicslib/serialize.h:708
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 32
struct RnSphereDesc_t : public RnShapeDesc_t {
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:710 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:710 */
	RnSphereDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:710 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:710 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:710 */
	void Schema_CompileTimeVerificationFunction(RnSphereDesc_t* );
	/* ../public/physicslib/serialize.h:710 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:710 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:710 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnSphereDesc_t* );
	/* ../public/physicslib/serialize.h:711 */
	RnSphereDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:711 */
	void KV3TransferSave(const RnSphereDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:711 */
	void KV3TransferLoad(RnSphereDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:711 */
	void KV3TransferSave_RnSphereDesc_t(const RnSphereDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:711 */
	void KV3TransferLoad_RnSphereDesc_t(RnSphereDesc_t* , CKV3TransferLoadContext* );
	RnSphere_t m_Sphere; /* 16 16 */
	RnSphereDesc_t& operator=(RnSphereDesc_t* , const RnSphereDesc_t& );
	void RnSphereDesc_t(RnSphereDesc_t* );
	void ~RnSphereDesc_t(RnSphereDesc_t* );
};

// <050595B8> ../public/physicslib/serialize.h:708
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 32
struct RnSphereDesc_t : public RnShapeDesc_t {
	/* ../public/physicslib/serialize.h:711 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:710 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:710 */
	RnSphereDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:710 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:710 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:710 */
	void Schema_CompileTimeVerificationFunction(RnSphereDesc_t* );
	/* ../public/physicslib/serialize.h:710 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:710 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:710 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnSphereDesc_t* );
	/* ../public/physicslib/serialize.h:711 */
	RnSphereDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:711 */
	void KV3TransferSave(const RnSphereDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:711 */
	void KV3TransferLoad(RnSphereDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:711 */
	void KV3TransferSave_RnSphereDesc_t(const RnSphereDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:711 */
	void KV3TransferLoad_RnSphereDesc_t(RnSphereDesc_t* , CKV3TransferLoadContext* );
	RnSphere_t m_Sphere; /* 16 16 */
	void RnSphereDesc_t(RnSphereDesc_t* );
	void ~RnSphereDesc_t(RnSphereDesc_t* );
	RnSphereDesc_t& operator=(RnSphereDesc_t* , const RnSphereDesc_t& );
};

// <063D42FD> ../public/physicslib/serialize.h:708
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 32
struct RnSphereDesc_t : public RnShapeDesc_t {
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:710 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:710 */
	RnSphereDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:710 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:710 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:710 */
	void Schema_CompileTimeVerificationFunction(RnSphereDesc_t* );
	/* ../public/physicslib/serialize.h:710 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:710 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:710 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnSphereDesc_t* );
	/* ../public/physicslib/serialize.h:711 */
	RnSphereDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:711 */
	void KV3TransferSave(const RnSphereDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:711 */
	void KV3TransferLoad(RnSphereDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:711 */
	void KV3TransferSave_RnSphereDesc_t(const RnSphereDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:711 */
	void KV3TransferLoad_RnSphereDesc_t(RnSphereDesc_t* , CKV3TransferLoadContext* );
	RnSphere_t m_Sphere; /* 16 16 */
	void RnSphereDesc_t(RnSphereDesc_t* );
	void ~RnSphereDesc_t(RnSphereDesc_t* );
};

// <066463D6> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:708
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 32
struct RnSphereDesc_t : public RnShapeDesc_t {
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:710 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:710 */
	RnSphereDesc_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:710 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:710 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:710 */
	void Schema_CompileTimeVerificationFunction(RnSphereDesc_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:710 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:710 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:710 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnSphereDesc_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:711 */
	RnSphereDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:711 */
	void KV3TransferSave(const RnSphereDesc_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:711 */
	void KV3TransferLoad(RnSphereDesc_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:711 */
	void KV3TransferSave_RnSphereDesc_t(const RnSphereDesc_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:711 */
	void KV3TransferLoad_RnSphereDesc_t(RnSphereDesc_t* , CKV3TransferLoadContext* );
	RnSphere_t m_Sphere; /* 16 16 */
	void ~RnSphereDesc_t(RnSphereDesc_t* );
	void RnSphereDesc_t(RnSphereDesc_t* );
	RnSphereDesc_t& operator=(RnSphereDesc_t* , const RnSphereDesc_t& );
};

// <0668B97A> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:710
inline void RnSphereDesc_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <06668BB0> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:716
inline void RnCapsuleDesc_t::operator=(const RnCapsuleDesc_t &)
{
} /* size: 0 */

// <06668B8D> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:716
void RnCapsuleDesc_t::RnCapsuleDesc_t()
{
} /* size: 0 */

// <06668B70> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:716
inline void RnCapsuleDesc_t::RnCapsuleDesc_t()
{
} /* size: 0 */

// <06668B59> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:716
void RnCapsuleDesc_t::~RnCapsuleDesc_t()
{
} /* size: 0 */

// <06668B3C> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:716
inline void RnCapsuleDesc_t::~RnCapsuleDesc_t()
{
} /* size: 0 */

// <0096BBDA> ../public/physicslib/serialize.h:716
// member functions: 13
// member variables: 2
// static member variable: 1
// struct size: 48
struct RnCapsuleDesc_t : public RnShapeDesc_t {
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:718 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:718 */
	RnCapsuleDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:718 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:718 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:718 */
	void Schema_CompileTimeVerificationFunction(RnCapsuleDesc_t* );
	/* ../public/physicslib/serialize.h:718 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:718 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:718 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnCapsuleDesc_t* );
	/* ../public/physicslib/serialize.h:719 */
	RnCapsuleDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferSave(const RnCapsuleDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferLoad(RnCapsuleDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferSave_RnCapsuleDesc_t(const RnCapsuleDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferLoad_RnCapsuleDesc_t(RnCapsuleDesc_t* , CKV3TransferLoadContext* );
	RnCapsule_t m_Capsule; /* 16 28 */
};

// <04EFE2AD> ../public/physicslib/serialize.h:716
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 48
struct RnCapsuleDesc_t : public RnShapeDesc_t {
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:718 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:718 */
	RnCapsuleDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:718 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:718 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:718 */
	void Schema_CompileTimeVerificationFunction(RnCapsuleDesc_t* );
	/* ../public/physicslib/serialize.h:718 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:718 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:718 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnCapsuleDesc_t* );
	/* ../public/physicslib/serialize.h:719 */
	RnCapsuleDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferSave(const RnCapsuleDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferLoad(RnCapsuleDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferSave_RnCapsuleDesc_t(const RnCapsuleDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferLoad_RnCapsuleDesc_t(RnCapsuleDesc_t* , CKV3TransferLoadContext* );
	RnCapsule_t m_Capsule; /* 16 28 */
	RnCapsuleDesc_t& operator=(RnCapsuleDesc_t* , const RnCapsuleDesc_t& );
	void RnCapsuleDesc_t(RnCapsuleDesc_t* );
	void ~RnCapsuleDesc_t(RnCapsuleDesc_t* );
};

// <050597E4> ../public/physicslib/serialize.h:716
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 48
struct RnCapsuleDesc_t : public RnShapeDesc_t {
	/* ../public/physicslib/serialize.h:719 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:718 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:718 */
	RnCapsuleDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:718 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:718 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:718 */
	void Schema_CompileTimeVerificationFunction(RnCapsuleDesc_t* );
	/* ../public/physicslib/serialize.h:718 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:718 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:718 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnCapsuleDesc_t* );
	/* ../public/physicslib/serialize.h:719 */
	RnCapsuleDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferSave(const RnCapsuleDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferLoad(RnCapsuleDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferSave_RnCapsuleDesc_t(const RnCapsuleDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferLoad_RnCapsuleDesc_t(RnCapsuleDesc_t* , CKV3TransferLoadContext* );
	RnCapsule_t m_Capsule; /* 16 28 */
	void RnCapsuleDesc_t(RnCapsuleDesc_t* );
	void ~RnCapsuleDesc_t(RnCapsuleDesc_t* );
	RnCapsuleDesc_t& operator=(RnCapsuleDesc_t* , const RnCapsuleDesc_t& );
};

// <063D44ED> ../public/physicslib/serialize.h:716
// member functions: 14
// member variables: 2
// static member variable: 1
// struct size: 48
struct RnCapsuleDesc_t : public RnShapeDesc_t {
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:718 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:718 */
	RnCapsuleDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:718 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:718 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:718 */
	void Schema_CompileTimeVerificationFunction(RnCapsuleDesc_t* );
	/* ../public/physicslib/serialize.h:718 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:718 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:718 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnCapsuleDesc_t* );
	/* ../public/physicslib/serialize.h:719 */
	RnCapsuleDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferSave(const RnCapsuleDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferLoad(RnCapsuleDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferSave_RnCapsuleDesc_t(const RnCapsuleDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferLoad_RnCapsuleDesc_t(RnCapsuleDesc_t* , CKV3TransferLoadContext* );
	RnCapsule_t m_Capsule; /* 16 28 */
	void ~RnCapsuleDesc_t(RnCapsuleDesc_t* );
};

// <0649EF41> ../public/physicslib/serialize.h:716
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 48
struct RnCapsuleDesc_t : public RnShapeDesc_t {
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:718 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:718 */
	RnCapsuleDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:718 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:718 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:718 */
	void Schema_CompileTimeVerificationFunction(RnCapsuleDesc_t* );
	/* ../public/physicslib/serialize.h:718 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:718 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:718 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnCapsuleDesc_t* );
	/* ../public/physicslib/serialize.h:719 */
	RnCapsuleDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferSave(const RnCapsuleDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferLoad(RnCapsuleDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferSave_RnCapsuleDesc_t(const RnCapsuleDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:719 */
	void KV3TransferLoad_RnCapsuleDesc_t(RnCapsuleDesc_t* , CKV3TransferLoadContext* );
	RnCapsule_t m_Capsule; /* 16 28 */
	void RnCapsuleDesc_t(RnCapsuleDesc_t* );
	void ~RnCapsuleDesc_t(RnCapsuleDesc_t* );
};

// <066465EB> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:716
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 48
struct RnCapsuleDesc_t : public RnShapeDesc_t {
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:718 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:718 */
	RnCapsuleDesc_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:718 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:718 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:718 */
	void Schema_CompileTimeVerificationFunction(RnCapsuleDesc_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:718 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:718 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:718 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnCapsuleDesc_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:719 */
	RnCapsuleDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:719 */
	void KV3TransferSave(const RnCapsuleDesc_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:719 */
	void KV3TransferLoad(RnCapsuleDesc_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:719 */
	void KV3TransferSave_RnCapsuleDesc_t(const RnCapsuleDesc_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:719 */
	void KV3TransferLoad_RnCapsuleDesc_t(RnCapsuleDesc_t* , CKV3TransferLoadContext* );
	RnCapsule_t m_Capsule; /* 16 28 */
	void ~RnCapsuleDesc_t(RnCapsuleDesc_t* );
	void RnCapsuleDesc_t(RnCapsuleDesc_t* );
	RnCapsuleDesc_t& operator=(RnCapsuleDesc_t* , const RnCapsuleDesc_t& );
};

// <0668B95B> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:718
inline void RnCapsuleDesc_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <06667962> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:724
inline void RnHullDesc_t::operator=(const RnHullDesc_t &)
{
} /* size: 0 */

// <0666793F> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:724
void RnHullDesc_t::RnHullDesc_t()
{
} /* size: 0 */

// <06667922> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:724
inline void RnHullDesc_t::RnHullDesc_t()
{
} /* size: 0 */

// <0666790B> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:724
void RnHullDesc_t::~RnHullDesc_t()
{
} /* size: 0 */

// <066678EE> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:724
inline void RnHullDesc_t::~RnHullDesc_t()
{
} /* size: 0 */

// <064C392F> ../public/physicslib/serialize.h:724
// function calls: 53
void RnHullDesc_t::~RnHullDesc_t()
{
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 298
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnFace_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnFace_t, int>::Purge(); // 903
	CUtlMemory<RnFace_t, int>::Purge(); // 1799
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Purge(); // 560
	ValidateAlignment<RnFace_t>(void); // 508
	CUtlMemory<RnFace_t, int>::Purge(); // 510
	CUtlMemory<RnFace_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> >::~CUtlVector(); // 298
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnHalfEdge_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnHalfEdge_t, int>::Purge(); // 903
	CUtlMemory<RnHalfEdge_t, int>::Purge(); // 1799
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Purge(); // 560
	ValidateAlignment<RnHalfEdge_t>(void); // 508
	CUtlMemory<RnHalfEdge_t, int>::Purge(); // 510
	CUtlMemory<RnHalfEdge_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::~CUtlVector(); // 298
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnPlane_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnPlane_t, int>::Purge(); // 903
	CUtlMemory<RnPlane_t, int>::Purge(); // 1799
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Purge(); // 560
	ValidateAlignment<RnPlane_t>(void); // 508
	CUtlMemory<RnPlane_t, int>::Purge(); // 510
	CUtlMemory<RnPlane_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> >::~CUtlVector(); // 298
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 298
	RnHull_t::~RnHull_t(); // 724
	CUtlString::~CUtlString(); // 698
	RnShapeDesc_t::~RnShapeDesc_t(); // 724
} /* size: 214, inline expansions: 53 (950 bytes) */

// <0096BD92> ../public/physicslib/serialize.h:724
// member functions: 13
// member variables: 2
// static member variable: 1
// struct size: 296
struct RnHullDesc_t : public RnShapeDesc_t {
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:726 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:726 */
	RnHullDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:726 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:726 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:726 */
	void Schema_CompileTimeVerificationFunction(RnHullDesc_t* );
	/* ../public/physicslib/serialize.h:726 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:726 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:726 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnHullDesc_t* );
	/* ../public/physicslib/serialize.h:727 */
	RnHullDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:727 */
	void KV3TransferSave(const RnHullDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:727 */
	void KV3TransferLoad(RnHullDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:727 */
	void KV3TransferSave_RnHullDesc_t(const RnHullDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:727 */
	void KV3TransferLoad_RnHullDesc_t(RnHullDesc_t* , CKV3TransferLoadContext* );
	RnHull_t m_Hull; /* 16 280 */
};

// <04EFE4C0> ../public/physicslib/serialize.h:724
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 296
struct RnHullDesc_t : public RnShapeDesc_t {
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:726 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:726 */
	RnHullDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:726 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:726 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:726 */
	void Schema_CompileTimeVerificationFunction(RnHullDesc_t* );
	/* ../public/physicslib/serialize.h:726 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:726 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:726 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnHullDesc_t* );
	/* ../public/physicslib/serialize.h:727 */
	RnHullDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:727 */
	void KV3TransferSave(const RnHullDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:727 */
	void KV3TransferLoad(RnHullDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:727 */
	void KV3TransferSave_RnHullDesc_t(const RnHullDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:727 */
	void KV3TransferLoad_RnHullDesc_t(RnHullDesc_t* , CKV3TransferLoadContext* );
	RnHull_t m_Hull; /* 16 280 */
	RnHullDesc_t& operator=(RnHullDesc_t* , const RnHullDesc_t& );
	void RnHullDesc_t(RnHullDesc_t* );
	void ~RnHullDesc_t(RnHullDesc_t* );
};

// <05059A10> ../public/physicslib/serialize.h:724
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 296
struct RnHullDesc_t : public RnShapeDesc_t {
	/* ../public/physicslib/serialize.h:727 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:726 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:726 */
	RnHullDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:726 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:726 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:726 */
	void Schema_CompileTimeVerificationFunction(RnHullDesc_t* );
	/* ../public/physicslib/serialize.h:726 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:726 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:726 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnHullDesc_t* );
	/* ../public/physicslib/serialize.h:727 */
	RnHullDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:727 */
	void KV3TransferSave(const RnHullDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:727 */
	void KV3TransferLoad(RnHullDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:727 */
	void KV3TransferSave_RnHullDesc_t(const RnHullDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:727 */
	void KV3TransferLoad_RnHullDesc_t(RnHullDesc_t* , CKV3TransferLoadContext* );
	RnHull_t m_Hull; /* 16 280 */
	void RnHullDesc_t(RnHullDesc_t* );
	void ~RnHullDesc_t(RnHullDesc_t* );
	RnHullDesc_t& operator=(RnHullDesc_t* , const RnHullDesc_t& );
};

// <063D46C2> ../public/physicslib/serialize.h:724
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 296
struct RnHullDesc_t : public RnShapeDesc_t {
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:726 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:726 */
	RnHullDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:726 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:726 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:726 */
	void Schema_CompileTimeVerificationFunction(RnHullDesc_t* );
	/* ../public/physicslib/serialize.h:726 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:726 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:726 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnHullDesc_t* );
	/* ../public/physicslib/serialize.h:727 */
	RnHullDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:727 */
	void KV3TransferSave(const RnHullDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:727 */
	void KV3TransferLoad(RnHullDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:727 */
	void KV3TransferSave_RnHullDesc_t(const RnHullDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:727 */
	void KV3TransferLoad_RnHullDesc_t(RnHullDesc_t* , CKV3TransferLoadContext* );
	RnHull_t m_Hull; /* 16 280 */
	void RnHullDesc_t(RnHullDesc_t* );
	void ~RnHullDesc_t(RnHullDesc_t* );
};

// <06646800> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:724
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 296
struct RnHullDesc_t : public RnShapeDesc_t {
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:726 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:726 */
	RnHullDesc_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:726 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:726 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:726 */
	void Schema_CompileTimeVerificationFunction(RnHullDesc_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:726 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:726 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:726 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnHullDesc_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:727 */
	RnHullDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:727 */
	void KV3TransferSave(const RnHullDesc_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:727 */
	void KV3TransferLoad(RnHullDesc_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:727 */
	void KV3TransferSave_RnHullDesc_t(const RnHullDesc_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:727 */
	void KV3TransferLoad_RnHullDesc_t(RnHullDesc_t* , CKV3TransferLoadContext* );
	RnHull_t m_Hull; /* 16 280 */
	void ~RnHullDesc_t(RnHullDesc_t* );
	void RnHullDesc_t(RnHullDesc_t* );
	RnHullDesc_t& operator=(RnHullDesc_t* , const RnHullDesc_t& );
};

// <0668B93C> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:726
inline void RnHullDesc_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <06665C9B> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:732
inline void RnMeshDesc_t::operator=(const RnMeshDesc_t &)
{
} /* size: 0 */

// <06665C78> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:732
void RnMeshDesc_t::RnMeshDesc_t()
{
} /* size: 0 */

// <06665C5B> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:732
inline void RnMeshDesc_t::RnMeshDesc_t()
{
} /* size: 0 */

// <06665C44> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:732
void RnMeshDesc_t::~RnMeshDesc_t()
{
} /* size: 0 */

// <06665C27> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:732
inline void RnMeshDesc_t::~RnMeshDesc_t()
{
} /* size: 0 */

// <05029198> ../public/physicslib/serialize.h:732
// function calls: 80
void RnMeshDesc_t::operator=(const RnMeshDesc_t &)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 698
	RnShapeDesc_t::operator=(
			const RnShapeDesc_t  &);  // 732
	Vector::operator=(
			const Vector& vOther);  // 632
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Count(); // 573
	CUtlMemory<RnNode_t, int>::Base(); // 112
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Base(); // 102
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::begin(); // 574
	CUtlMemory<RnNode_t, int>::Base(); // 113
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Base(); // 105
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Count(); // 105
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::end(); // 574
	UtlTraitsCopyRange<RnNode_t>(const RnNode_t* pFrom,
					const RnNode_t* pFromEnd,
					RnNode_t* pTo);  // 574
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::operator=(
			const CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >& other);  // 565
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::operator=(
			const CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >& other);  // 452
	CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >::operator=(
			const CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >& src);  // 632
	Vector::operator=(
			const Vector& vOther);  // 632
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 573
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 574
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 574
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 565
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 452
	CUtlVector<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 632
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 573
	CUtlMemory<RnTriangle_t, int>::Base(); // 112
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Base(); // 102
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::begin(); // 574
	CUtlMemory<RnTriangle_t, int>::Base(); // 113
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Base(); // 105
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 105
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CFingerSource>(const CFingerSource* pFrom,
						const CFingerSource* pFromEnd,
						CFingerSource* pTo);  // 173
	UtlTraitsCopyRange<RnTriangle_t>(const RnTriangle_t* pFrom,
					const RnTriangle_t* pFromEnd,
					RnTriangle_t* pTo);  // 574
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::operator=(
			const CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& other);  // 565
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::operator=(
			const CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& other);  // 452
	CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::operator=(
			const CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& src);  // 632
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 573
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 574
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CFingerSource>(const CFingerSource* pFrom,
						const CFingerSource* pFromEnd,
						CFingerSource* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 574
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 565
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 632
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 573
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 574
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CFingerSource>(const CFingerSource* pFrom,
						const CFingerSource* pFromEnd,
						CFingerSource* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 574
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 565
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 632
	Vector::operator=(
			const Vector& vOther);  // 632
	RnMesh_t::operator=(
			const RnMesh_t  &);  // 732
} /* size: 667, inline expansions: 80 (2820 bytes) */

// <0500A5B9> ../public/physicslib/serialize.h:732
// function calls: 53
void RnMeshDesc_t::~RnMeshDesc_t()
{
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 632
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 632
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnTriangle_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnTriangle_t, int>::Purge(); // 903
	CUtlMemory<RnTriangle_t, int>::Purge(); // 1799
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Purge(); // 560
	ValidateAlignment<RnTriangle_t>(void); // 508
	CUtlMemory<RnTriangle_t, int>::Purge(); // 510
	CUtlMemory<RnTriangle_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::~CUtlVector(); // 632
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 632
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnNode_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnNode_t, int>::Purge(); // 903
	CUtlMemory<RnNode_t, int>::Purge(); // 1799
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Purge(); // 560
	ValidateAlignment<RnNode_t>(void); // 508
	CUtlMemory<RnNode_t, int>::Purge(); // 510
	CUtlMemory<RnNode_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >::~CUtlVector(); // 632
	RnMesh_t::~RnMesh_t(); // 732
	CUtlString::~CUtlString(); // 698
	RnShapeDesc_t::~RnShapeDesc_t(); // 732
} /* size: 214, inline expansions: 53 (959 bytes) */

// <0096BF4C> ../public/physicslib/serialize.h:732
// member functions: 13
// member variables: 2
// static member variable: 1
// struct size: 216
struct RnMeshDesc_t : public RnShapeDesc_t {
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:734 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:734 */
	RnMeshDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:734 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:734 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:734 */
	void Schema_CompileTimeVerificationFunction(RnMeshDesc_t* );
	/* ../public/physicslib/serialize.h:734 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:734 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:734 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnMeshDesc_t* );
	/* ../public/physicslib/serialize.h:735 */
	RnMeshDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferSave(const RnMeshDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferLoad(RnMeshDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferSave_RnMeshDesc_t(const RnMeshDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferLoad_RnMeshDesc_t(RnMeshDesc_t* , CKV3TransferLoadContext* );
	RnMesh_t m_Mesh; /* 16 200 */
};

// <04EFE6D5> ../public/physicslib/serialize.h:732
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 216
struct RnMeshDesc_t : public RnShapeDesc_t {
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:734 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:734 */
	RnMeshDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:734 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:734 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:734 */
	void Schema_CompileTimeVerificationFunction(RnMeshDesc_t* );
	/* ../public/physicslib/serialize.h:734 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:734 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:734 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnMeshDesc_t* );
	/* ../public/physicslib/serialize.h:735 */
	RnMeshDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferSave(const RnMeshDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferLoad(RnMeshDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferSave_RnMeshDesc_t(const RnMeshDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferLoad_RnMeshDesc_t(RnMeshDesc_t* , CKV3TransferLoadContext* );
	RnMesh_t m_Mesh; /* 16 200 */
	RnMeshDesc_t& operator=(RnMeshDesc_t* , const RnMeshDesc_t& );
	void RnMeshDesc_t(RnMeshDesc_t* );
	void ~RnMeshDesc_t(RnMeshDesc_t* );
};

// <05059C3E> ../public/physicslib/serialize.h:732
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 216
struct RnMeshDesc_t : public RnShapeDesc_t {
	/* ../public/physicslib/serialize.h:735 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:734 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:734 */
	RnMeshDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:734 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:734 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:734 */
	void Schema_CompileTimeVerificationFunction(RnMeshDesc_t* );
	/* ../public/physicslib/serialize.h:734 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:734 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:734 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnMeshDesc_t* );
	/* ../public/physicslib/serialize.h:735 */
	RnMeshDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferSave(const RnMeshDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferLoad(RnMeshDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferSave_RnMeshDesc_t(const RnMeshDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferLoad_RnMeshDesc_t(RnMeshDesc_t* , CKV3TransferLoadContext* );
	RnMesh_t m_Mesh; /* 16 200 */
	void RnMeshDesc_t(RnMeshDesc_t* );
	void ~RnMeshDesc_t(RnMeshDesc_t* );
	RnMeshDesc_t& operator=(RnMeshDesc_t* , const RnMeshDesc_t& );
};

// <063D48B4> ../public/physicslib/serialize.h:732
// member functions: 14
// member variables: 2
// static member variable: 1
// struct size: 216
struct RnMeshDesc_t : public RnShapeDesc_t {
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:734 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:734 */
	RnMeshDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:734 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:734 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:734 */
	void Schema_CompileTimeVerificationFunction(RnMeshDesc_t* );
	/* ../public/physicslib/serialize.h:734 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:734 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:734 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnMeshDesc_t* );
	/* ../public/physicslib/serialize.h:735 */
	RnMeshDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferSave(const RnMeshDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferLoad(RnMeshDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferSave_RnMeshDesc_t(const RnMeshDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferLoad_RnMeshDesc_t(RnMeshDesc_t* , CKV3TransferLoadContext* );
	RnMesh_t m_Mesh; /* 16 200 */
	void ~RnMeshDesc_t(RnMeshDesc_t* );
};

// <0649F31B> ../public/physicslib/serialize.h:732
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 216
struct RnMeshDesc_t : public RnShapeDesc_t {
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:734 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:734 */
	RnMeshDesc_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:734 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:734 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:734 */
	void Schema_CompileTimeVerificationFunction(RnMeshDesc_t* );
	/* ../public/physicslib/serialize.h:734 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:734 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:734 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnMeshDesc_t* );
	/* ../public/physicslib/serialize.h:735 */
	RnMeshDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferSave(const RnMeshDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferLoad(RnMeshDesc_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferSave_RnMeshDesc_t(const RnMeshDesc_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:735 */
	void KV3TransferLoad_RnMeshDesc_t(RnMeshDesc_t* , CKV3TransferLoadContext* );
	RnMesh_t m_Mesh; /* 16 200 */
	void RnMeshDesc_t(RnMeshDesc_t* );
	void ~RnMeshDesc_t(RnMeshDesc_t* );
};

// <06646A17> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:732
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 216
struct RnMeshDesc_t : public RnShapeDesc_t {
public:
	/* struct RnShapeDesc_t <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:734 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:734 */
	RnMeshDesc_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:734 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:734 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:734 */
	void Schema_CompileTimeVerificationFunction(RnMeshDesc_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:734 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:734 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:734 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnMeshDesc_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:735 */
	RnMeshDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:735 */
	void KV3TransferSave(const RnMeshDesc_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:735 */
	void KV3TransferLoad(RnMeshDesc_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:735 */
	void KV3TransferSave_RnMeshDesc_t(const RnMeshDesc_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:735 */
	void KV3TransferLoad_RnMeshDesc_t(RnMeshDesc_t* , CKV3TransferLoadContext* );
	RnMesh_t m_Mesh; /* 16 200 */
	void ~RnMeshDesc_t(RnMeshDesc_t* );
	void RnMeshDesc_t(RnMeshDesc_t* );
	RnMeshDesc_t& operator=(RnMeshDesc_t* , const RnMeshDesc_t& );
};

// <0668B91D> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:734
inline void RnMeshDesc_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <064CF9E3> ../public/physicslib/serialize.h:743
inline uintp GetRuntimeSizeOf<CUtlVector<Vector> >(const CUtlVector<Vector, CUtlMemory<Vector, int> >& arr)
{
} /* size: 0 */

// <064CF9B5> ../public/physicslib/serialize.h:743
inline uintp GetRuntimeSizeOf<CUtlVector<RnPlane_t> >(const CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> >& arr)
{
} /* size: 0 */

// <064CF987> ../public/physicslib/serialize.h:743
inline uintp GetRuntimeSizeOf<CUtlVector<RnHalfEdge_t> >(const CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >& arr)
{
} /* size: 0 */

// <064CF959> ../public/physicslib/serialize.h:743
inline uintp GetRuntimeSizeOf<CUtlVector<RnFace_t> >(const CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> >& arr)
{
} /* size: 0 */

// <064CF92B> ../public/physicslib/serialize.h:743
inline uintp GetRuntimeSizeOf<CUtlVector<RnNode_t> >(const CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >& arr)
{
} /* size: 0 */

// <064CF8FD> ../public/physicslib/serialize.h:743
inline uintp GetRuntimeSizeOf<CUtlVector<RnTriangle_t> >(const CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& arr)
{
} /* size: 0 */

// <064CF8CF> ../public/physicslib/serialize.h:743
inline uintp GetRuntimeSizeOf<CUtlVector<unsigned char> >(const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& arr)
{
} /* size: 0 */

// <064E0EC7> ../public/physicslib/serialize.h:781
inline uintp GetExtraDataSize(const RnMesh_t* pMesh)
{
} /* size: 0 */

// <04EFE8E8> ../public/physicslib/serialize.h:922
// member functions: 13
// member variable: 1
// static member variable: 1
// struct size: 4
struct RnSoftbodyParticle_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:924 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:924 */
	RnSoftbodyParticle_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:924 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:924 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:924 */
	void Schema_CompileTimeVerificationFunction(RnSoftbodyParticle_t* );
	/* ../public/physicslib/serialize.h:924 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:924 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:924 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnSoftbodyParticle_t* );
	/* ../public/physicslib/serialize.h:925 */
	RnSoftbodyParticle_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:925 */
	void KV3TransferSave(const RnSoftbodyParticle_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:925 */
	void KV3TransferLoad(RnSoftbodyParticle_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:925 */
	void KV3TransferSave_RnSoftbodyParticle_t(const RnSoftbodyParticle_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:925 */
	void KV3TransferLoad_RnSoftbodyParticle_t(RnSoftbodyParticle_t* , CKV3TransferLoadContext* );
	float32 m_flMassInv; /* 0 4 */
};

// <05059E6A> ../public/physicslib/serialize.h:922
// member functions: 13
// member variable: 1
// static member variable: 1
// struct size: 4
struct RnSoftbodyParticle_t {
	/* ../public/physicslib/serialize.h:925 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:924 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:924 */
	RnSoftbodyParticle_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:924 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:924 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:924 */
	void Schema_CompileTimeVerificationFunction(RnSoftbodyParticle_t* );
	/* ../public/physicslib/serialize.h:924 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:924 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:924 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnSoftbodyParticle_t* );
	/* ../public/physicslib/serialize.h:925 */
	RnSoftbodyParticle_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:925 */
	void KV3TransferSave(const RnSoftbodyParticle_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:925 */
	void KV3TransferLoad(RnSoftbodyParticle_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:925 */
	void KV3TransferSave_RnSoftbodyParticle_t(const RnSoftbodyParticle_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:925 */
	void KV3TransferLoad_RnSoftbodyParticle_t(RnSoftbodyParticle_t* , CKV3TransferLoadContext* );
	float32 m_flMassInv; /* 0 4 */
};

// <06646C2C> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:922
// member functions: 13
// member variable: 1
// static member variable: 1
// struct size: 4
struct RnSoftbodyParticle_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:924 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:924 */
	RnSoftbodyParticle_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:924 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:924 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:924 */
	void Schema_CompileTimeVerificationFunction(RnSoftbodyParticle_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:924 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:924 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:924 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnSoftbodyParticle_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:925 */
	RnSoftbodyParticle_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:925 */
	void KV3TransferSave(const RnSoftbodyParticle_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:925 */
	void KV3TransferLoad(RnSoftbodyParticle_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:925 */
	void KV3TransferSave_RnSoftbodyParticle_t(const RnSoftbodyParticle_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:925 */
	void KV3TransferLoad_RnSoftbodyParticle_t(RnSoftbodyParticle_t* , CKV3TransferLoadContext* );
	float32 m_flMassInv; /* 0 4 */
};

// <0668B8FE> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:924
inline void RnSoftbodyParticle_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <04EFEA97> ../public/physicslib/serialize.h:929
// member functions: 13
// member variables: 2
// static member variable: 1
// struct size: 8
struct RnSoftbodySpring_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:931 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:931 */
	RnSoftbodySpring_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:931 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:931 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:931 */
	void Schema_CompileTimeVerificationFunction(RnSoftbodySpring_t* );
	/* ../public/physicslib/serialize.h:931 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:931 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:931 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnSoftbodySpring_t* );
	/* ../public/physicslib/serialize.h:932 */
	RnSoftbodySpring_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:932 */
	void KV3TransferSave(const RnSoftbodySpring_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:932 */
	void KV3TransferLoad(RnSoftbodySpring_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:932 */
	void KV3TransferSave_RnSoftbodySpring_t(const RnSoftbodySpring_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:932 */
	void KV3TransferLoad_RnSoftbodySpring_t(RnSoftbodySpring_t* , CKV3TransferLoadContext* );
	uint16 m_nParticle[2]; /* 0 4 */
	float32 m_flLength; /* 4 4 */
};

// <0505A032> ../public/physicslib/serialize.h:929
// member functions: 13
// member variables: 2
// static member variable: 1
// struct size: 8
struct RnSoftbodySpring_t {
	/* ../public/physicslib/serialize.h:932 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:931 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:931 */
	RnSoftbodySpring_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:931 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:931 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:931 */
	void Schema_CompileTimeVerificationFunction(RnSoftbodySpring_t* );
	/* ../public/physicslib/serialize.h:931 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:931 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:931 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnSoftbodySpring_t* );
	/* ../public/physicslib/serialize.h:932 */
	RnSoftbodySpring_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:932 */
	void KV3TransferSave(const RnSoftbodySpring_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:932 */
	void KV3TransferLoad(RnSoftbodySpring_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:932 */
	void KV3TransferSave_RnSoftbodySpring_t(const RnSoftbodySpring_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:932 */
	void KV3TransferLoad_RnSoftbodySpring_t(RnSoftbodySpring_t* , CKV3TransferLoadContext* );
	uint16 m_nParticle[2]; /* 0 4 */
	float32 m_flLength; /* 4 4 */
};

// <06646DE2> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:929
// member functions: 13
// member variables: 2
// static member variable: 1
// struct size: 8
struct RnSoftbodySpring_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:931 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:931 */
	RnSoftbodySpring_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:931 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:931 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:931 */
	void Schema_CompileTimeVerificationFunction(RnSoftbodySpring_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:931 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:931 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:931 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnSoftbodySpring_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:932 */
	RnSoftbodySpring_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:932 */
	void KV3TransferSave(const RnSoftbodySpring_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:932 */
	void KV3TransferLoad(RnSoftbodySpring_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:932 */
	void KV3TransferSave_RnSoftbodySpring_t(const RnSoftbodySpring_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:932 */
	void KV3TransferLoad_RnSoftbodySpring_t(RnSoftbodySpring_t* , CKV3TransferLoadContext* );
	uint16 m_nParticle[2]; /* 0 4 */
	float32 m_flLength; /* 4 4 */
};

// <0668B8DF> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:931
inline void RnSoftbodySpring_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <06661B6C> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:937
inline void RnSoftbodyCapsule_t::operator=(const RnSoftbodyCapsule_t &)
{
} /* size: 0 */

// <06661B49> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:937
void RnSoftbodyCapsule_t::RnSoftbodyCapsule_t()
{
} /* size: 0 */

// <06661B2C> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:937
inline void RnSoftbodyCapsule_t::RnSoftbodyCapsule_t()
{
} /* size: 0 */

// <04EFEC66> ../public/physicslib/serialize.h:937
// member functions: 15
// member variables: 3
// static member variable: 1
// struct size: 32
struct RnSoftbodyCapsule_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:939 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:939 */
	RnSoftbodyCapsule_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:939 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:939 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:939 */
	void Schema_CompileTimeVerificationFunction(RnSoftbodyCapsule_t* );
	/* ../public/physicslib/serialize.h:939 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:939 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:939 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnSoftbodyCapsule_t* );
	/* ../public/physicslib/serialize.h:940 */
	RnSoftbodyCapsule_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:940 */
	void KV3TransferSave(const RnSoftbodyCapsule_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:940 */
	void KV3TransferLoad(RnSoftbodyCapsule_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:940 */
	void KV3TransferSave_RnSoftbodyCapsule_t(const RnSoftbodyCapsule_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:940 */
	void KV3TransferLoad_RnSoftbodyCapsule_t(RnSoftbodyCapsule_t* , CKV3TransferLoadContext* );
	Vector m_vCenter[2]; /* 0 24 */
	float32 m_flRadius; /* 24 4 */
	uint16 m_nParticle[2]; /* 28 4 */
	RnSoftbodyCapsule_t& operator=(RnSoftbodyCapsule_t* , const RnSoftbodyCapsule_t& );
	void RnSoftbodyCapsule_t(RnSoftbodyCapsule_t* );
};

// <0505A21A> ../public/physicslib/serialize.h:937
// member functions: 15
// member variables: 3
// static member variable: 1
// struct size: 32
struct RnSoftbodyCapsule_t {
	/* ../public/physicslib/serialize.h:940 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/physicslib/serialize.h:939 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/physicslib/serialize.h:939 */
	RnSoftbodyCapsule_t* Schema_MarkHelperFn(void);
	/* ../public/physicslib/serialize.h:939 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/physicslib/serialize.h:939 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/physicslib/serialize.h:939 */
	void Schema_CompileTimeVerificationFunction(RnSoftbodyCapsule_t* );
	/* ../public/physicslib/serialize.h:939 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/physicslib/serialize.h:939 */
	const char* Schema_StaticClassname(void);
	/* ../public/physicslib/serialize.h:939 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnSoftbodyCapsule_t* );
	/* ../public/physicslib/serialize.h:940 */
	RnSoftbodyCapsule_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/physicslib/serialize.h:940 */
	void KV3TransferSave(const RnSoftbodyCapsule_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:940 */
	void KV3TransferLoad(RnSoftbodyCapsule_t* , CKV3TransferLoadContext* );
	/* ../public/physicslib/serialize.h:940 */
	void KV3TransferSave_RnSoftbodyCapsule_t(const RnSoftbodyCapsule_t* , CKV3TransferSaveContext* );
	/* ../public/physicslib/serialize.h:940 */
	void KV3TransferLoad_RnSoftbodyCapsule_t(RnSoftbodyCapsule_t* , CKV3TransferLoadContext* );
	Vector m_vCenter[2]; /* 0 24 */
	float32 m_flRadius; /* 24 4 */
	uint16 m_nParticle[2]; /* 28 4 */
	void RnSoftbodyCapsule_t(RnSoftbodyCapsule_t* );
	RnSoftbodyCapsule_t& operator=(RnSoftbodyCapsule_t* , const RnSoftbodyCapsule_t& );
};

// <06646FB8> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:937
// member functions: 15
// member variables: 3
// static member variable: 1
// struct size: 32
struct RnSoftbodyCapsule_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:939 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:939 */
	RnSoftbodyCapsule_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:939 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:939 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:939 */
	void Schema_CompileTimeVerificationFunction(RnSoftbodyCapsule_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:939 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:939 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:939 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnSoftbodyCapsule_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:940 */
	RnSoftbodyCapsule_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:940 */
	void KV3TransferSave(const RnSoftbodyCapsule_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:940 */
	void KV3TransferLoad(RnSoftbodyCapsule_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:940 */
	void KV3TransferSave_RnSoftbodyCapsule_t(const RnSoftbodyCapsule_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:940 */
	void KV3TransferLoad_RnSoftbodyCapsule_t(RnSoftbodyCapsule_t* , CKV3TransferLoadContext* );
	Vector m_vCenter[2]; /* 0 24 */
	float32 m_flRadius; /* 24 4 */
	uint16 m_nParticle[2]; /* 28 4 */
	void RnSoftbodyCapsule_t(RnSoftbodyCapsule_t* );
	RnSoftbodyCapsule_t& operator=(RnSoftbodyCapsule_t* , const RnSoftbodyCapsule_t& );
};

// <0668B8C0> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:939
inline void RnSoftbodyCapsule_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <066471C9> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:947
// member functions: 13
// member variables: 8
// static member variable: 1
// struct size: 16
struct RnBlendVertex_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:949 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:949 */
	RnBlendVertex_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:949 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:949 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:949 */
	void Schema_CompileTimeVerificationFunction(RnBlendVertex_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:949 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:949 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:949 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RnBlendVertex_t* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:950 */
	RnBlendVertex_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:950 */
	void KV3TransferSave(const RnBlendVertex_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:950 */
	void KV3TransferLoad(RnBlendVertex_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:950 */
	void KV3TransferSave_RnBlendVertex_t(const RnBlendVertex_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:950 */
	void KV3TransferLoad_RnBlendVertex_t(RnBlendVertex_t* , CKV3TransferLoadContext* );
	uint16 m_nWeight0; /* 0 2 */
	uint16 m_nIndex0; /* 2 2 */
	uint16 m_nWeight1; /* 4 2 */
	uint16 m_nIndex1; /* 6 2 */
	uint16 m_nWeight2; /* 8 2 */
	uint16 m_nIndex2; /* 10 2 */
	uint16 m_nFlags; /* 12 2 */
	uint16 m_nTargetIndex; /* 14 2 */
} __attribute__((__aligned__(16)));

// <0668B8A1> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:949
inline void RnBlendVertex_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <00A187F6> ../public/physicslib/serialize.h:1048
// variables: 12
inline void RotateInertiaInPlace(const matrix3x4_t& R, matrix3x4_t& I)
{
	float Ixx; // 1050
	float Iyy; // 1051
	float Izz; // 1052
	float Ixy; // 1053
	float Ixz; // 1054
	float Iyz; // 1055
	float Jxx; // 1058
	float Jyy; // 1059
	float Jzz; // 1060
	float Jyz; // 1061
	float Jxy; // 1062
	float Jxz; // 1063
} /* size: 0, variables: 12 */

// <0134AE47> ../public/physicslib/serialize.h:1072
// variables: 4
inline Vector RotateOrthographicAreas(const Vector& oa, const matrix3x4a_t& xform)
{
	float flSumAreas; // 1076
	float yz; // 1080
	float zx; // 1081
	float xy; // 1082
} /* size: 0, variables: 4 */

// <01873B23> ../public/physicslib/serialize.h:1092
// variables: 7
// function calls: 49
void RnHull_t::Transform(const matrix3x4a_t& transform)
{
	AABB_t bounds; // 1099
	Vector vOrigin; // 1111
	{
		int nVertex; // 1102
		{
			Vector point; // 1104
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 1104
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1307
			Vector::Vector(); // 1306
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2);  // 1104
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 1105
			AABB_t::AddPointToBounds(
					const Vector& vPoint);  // 83
			AABB_t::operator|=(
					const Vector& vPoint);  // 1106
			Vector::operator=(
					const Vector& vOther);  // 1105
		}
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1102
	}
	{
		int nPlane; // 1112
		{
			Vector vNormal; // 1114
			float flOffset; // 1115
			CUtlMemory<RnPlane_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::operator[](
					int i);  // 1114
			VectorRotate(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1315
			Vector::Vector(); // 1314
			VectorRotate(const Vector& in1,
					const matrix3x4_t& in2);  // 1114
			DotProduct(const Vector& a,
					const Vector& b);  // 1115
			CUtlMemory<RnPlane_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::operator[](
					int i);  // 1115
			Vector::operator=(
					const Vector& vOther);  // 1117
			CUtlMemory<RnPlane_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::operator[](
					int i);  // 1118
		}
		CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Count(); // 1112
	}
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 1097
	Vector::operator=(
			const Vector& vOther);  // 1097
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 139
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 138
	AABB_t::MakeInvalid(); // 1100
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 1099
	Vector::operator=(
			const Vector& vOther);  // 17
	Vector::operator=(
			const Vector& vOther);  // 17
	AABB_t::operator=(
			const AABB_t  &);  // 1109
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 1111
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 1122
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 1122
	matrix3x4_t::SetOrigin(
			const Vector& p);  // 1122
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1084
	RotateOrthographicAreas(const Vector& oa,
				const matrix3x4a_t& xform);  // 1124
	Vector::operator=(
			const Vector& vOther);  // 1124
} /* size: 846, variables: 2, inline expansions: 26 (586 bytes) */

// <0135C466> ../public/physicslib/serialize.h:1131
// variables: 4
// function calls: 218
void RnNode_t::GetHeight()
{
	const RnNode_t* pLeftChild; // 1138
	int LeftHeight; // 1139
	const RnNode_t* pRightChild; // 1140
	int RightHeight; // 1141
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetLeftChild(); // 1138
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetLeftChild(); // 1138
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetLeftChild(); // 1138
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetLeftChild(); // 1138
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetLeftChild(); // 1138
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetLeftChild(); // 1138
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetLeftChild(); // 1138
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetLeftChild(); // 1138
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetLeftChild(); // 1138
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetLeftChild(); // 1138
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetLeftChild(); // 1138
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetLeftChild(); // 1138
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1141
} /* size: 3413, variables: 4, inline expansions: 218 (22765 bytes) */

// <0134A12A> ../public/physicslib/serialize.h:1131
// variables: 4
inline void RnNode_t::GetHeight()
{
	const RnNode_t* pLeftChild; // 1138
	int LeftHeight; // 1139
	const RnNode_t* pRightChild; // 1140
	int RightHeight; // 1141
} /* size: 0, variables: 4 */

// <0134A101> ../public/physicslib/serialize.h:1150
// variable: 1
inline void RnMesh_t::GetHeight()
{
	const RnNode_t* Root; // 1152
} /* size: 0, variables: 1 */

// <0134A0D8> ../public/physicslib/serialize.h:1163
// variable: 1
inline void RnHull_t::GetMemory()
{
	int nMemory; // 1165
} /* size: 0, variables: 1 */

// <0134A0AF> ../public/physicslib/serialize.h:1176
// variable: 1
inline void RnMesh_t::GetMemory()
{
	int nMemory; // 1178
} /* size: 0, variables: 1 */

// <0646FDED> ../public/physicslib/serialize.h:1190
// variable: 1
inline void RnSphere_t::GetBbox()
{
	AABB_t b; // 1192
} /* size: 0, variables: 1 */

// <00B505F0> ../public/physicslib/serialize.h:1256
// variables: 14
inline void RnSphere_t::GetOutline(CUtlVector<Vector, CUtlMemory<Vector, int> >& vertices, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& indices, uint nSplit)
{
	int nBaseVert; // 1259
	Vector vq; // 1261
	{
		int qi; // 1276
		{
			int qi1; // 1278
			const Vector& vFrom; // 1279
			const Vector& vTo; // 1279
			int vi0; // 1280
			int vj0; // 1281
			int vj1; // 1281
			{
				uint ti; // 1282
				{
					float flAngle; // 1284
					float s; // 1285
					float c; // 1285
				}
			}
		}
	}
	{
		int i; // 1301
	}
} /* size: 0, variables: 2 */

// <0646FC9B> ../public/physicslib/serialize.h:1384
// variable: 1
inline void RnCapsule_t::GetBbox()
{
	AABB_t b; // 1386
} /* size: 0, variables: 1 */

// <063D75DA> ../public/physicslib/serialize.h:1406
// member function: 1
// member variables: 2
// struct size: 8
struct CapsuleVertConv_t {
	float m_flHeight; /* 0 4 */
	float m_flRadius; /* 4 4 */
	/* ../public/physicslib/serialize.h:1409 */
	RnVertex_t operator()(const CapsuleVertConv_t* , float, float, float);
};

// <0646FC61> ../public/physicslib/serialize.h:1409
inline void CapsuleVertConv_t::operator(float x, float y, float z)
{
} /* size: 0 */

// <00B4ABA6> ../public/physicslib/serialize.h:1529
// variables: 20
// function calls: 404
void RnCapsule_t::GetOutline(CUtlVector<Vector, CUtlMemory<Vector, int> >& vertices, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& indices, uint nSplit)
{
	Vector vAxis; // 1532
	Vector vU; // 1532
	Vector vV; // 1532
	matrix3x4_t tm0; // 1533
	matrix3x4_t tm1; // 1533
	int nBaseVert; // 1536
	Vector vq; // 1539
	{
		int qi; // 1566
		{
			int qi1; // 1568
			const Vector& vFrom; // 1569
			const Vector& vTo; // 1569
			int vi0; // 1570
			int vi1; // 1570
			int vj0; // 1571
			int vj1; // 1571
			{
				uint ti; // 1572
				{
					float flAngle; // 1574
					float s; // 1575
					float c; // 1575
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 1577
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 1578
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 1578
					Vector::Vector(); // 1436
					VectorAdd(const Vector& a,
							const Vector& b,
							Vector& c);  // 1437
					Vector::operator+(
							const Vector& v);  // 1578
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 1307
					Vector::Vector(); // 1306
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2);  // 2707
					matrix3x4_t::TransformVector(
							const Vector& v0);  // 1578
					CUtlMemory<Vector, int>::NumAllocated(); // 1247
					CUtlMemory<Vector, int>::operator[](
							int i);  // 602
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
						int i);  // 1252
					Construct<Vector, Vector>(Vector* pMemory); // 1252
					CUtlMemory<Vector, int>::Base(); // 112
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
							Vector& src);  // 1578
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 1578
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 1579
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 1580
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 1580
					Vector::Vector(); // 1436
					VectorAdd(const Vector& a,
							const Vector& b,
							Vector& c);  // 1437
					Vector::operator+(
							const Vector& v);  // 1580
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 1307
					Vector::Vector(); // 1306
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2);  // 2707
					matrix3x4_t::TransformVector(
							const Vector& v0);  // 1580
					CUtlMemory<Vector, int>::NumAllocated(); // 1247
					CUtlMemory<Vector, int>::operator[](
							int i);  // 602
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
						int i);  // 1252
					Construct<Vector, Vector>(Vector* pMemory); // 1252
					CUtlMemory<Vector, int>::Base(); // 112
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
							Vector& src);  // 1580
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 1580
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 1581
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 1582
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 1582
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 1307
					Vector::Vector(); // 1306
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2);  // 2707
					matrix3x4_t::TransformVector(
							const Vector& v0);  // 1582
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1582
					Vector::Vector(); // 1436
					VectorAdd(const Vector& a,
							const Vector& b,
							Vector& c);  // 1437
					Vector::operator+(
							const Vector& v);  // 1582
					CUtlMemory<Vector, int>::NumAllocated(); // 1247
					CUtlMemory<Vector, int>::operator[](
							int i);  // 602
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
						int i);  // 1252
					Construct<Vector, Vector>(Vector* pMemory); // 1252
					CUtlMemory<Vector, int>::Base(); // 112
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
							Vector& src);  // 1582
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 1582
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 1583
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 1584
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1584
					Vector::Vector(); // 1450
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::operator*(
							float fl);  // 1584
					Vector::Vector(); // 1436
					VectorAdd(const Vector& a,
							const Vector& b,
							Vector& c);  // 1437
					Vector::operator+(
							const Vector& v);  // 1584
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 1307
					Vector::Vector(); // 1306
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2);  // 2707
					matrix3x4_t::TransformVector(
							const Vector& v0);  // 1584
					CUtlMemory<Vector, int>::NumAllocated(); // 1247
					CUtlMemory<Vector, int>::operator[](
							int i);  // 602
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
						int i);  // 1252
					Construct<Vector, Vector>(Vector* pMemory); // 1252
					CUtlMemory<Vector, int>::Base(); // 112
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
							Vector& src);  // 1584
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 1584
				}
			}
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 1586
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 1587
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 1588
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 1589
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 1590
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 1591
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 1592
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 1593
		}
	}
	Vector::Normalized(); // 1532
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 1532
	Vector::Vector(); // 1639
	VectorPerpendicularToVector(const Vector& in); // 1532
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 1532
	matrix3x4_t::InitXYZ(
		const Vector& xAxis,
		const Vector& yAxis,
		const Vector& zAxis,
		const Vector& vecOrigin);  // 1534
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1536
	CUtlMemory<Vector, int>::NumAllocated(); // 782
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddMultipleToTail(
				int num);  // 1537
	matrix3x4_t::matrix3x4_t(); // 1533
	matrix3x4_t::matrix3x4_t(); // 1533
	matrix3x4_t::InitXYZ(
		const Vector& xAxis,
		const Vector& yAxis,
		const Vector& zAxis,
		const Vector& vecOrigin);  // 1535
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 1546
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1544
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1544
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1544
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1544
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1546
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 1546
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 1547
	Vector::operator=(
			const Vector& vOther);  // 1546
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 1547
	Vector::operator=(
			const Vector& vOther);  // 1547
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 1548
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 1548
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 1549
	Vector::operator=(
			const Vector& vOther);  // 1548
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 1549
	Vector::operator=(
			const Vector& vOther);  // 1549
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 1550
	Vector::operator=(
			const Vector& vOther);  // 1550
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 1550
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 1551
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1551
	Vector::operator=(
			const Vector& vOther);  // 1551
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 1552
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 1551
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 1552
	Vector::operator=(
			const Vector& vOther);  // 1552
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 1553
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 1553
	Vector::operator=(
			const Vector& vOther);  // 1553
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 1554
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 1554
	Vector::operator=(
			const Vector& vOther);  // 1554
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 1555
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 1555
	Vector::operator=(
			const Vector& vOther);  // 1555
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1252
	Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			unsigned int& src);  // 1557
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1252
	Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			unsigned int& src);  // 1558
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1252
	Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			unsigned int& src);  // 1559
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1252
	Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			unsigned int& src);  // 1560
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1252
	Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			unsigned int& src);  // 1561
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1252
	Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			unsigned int& src);  // 1562
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1252
	Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			unsigned int& src);  // 1563
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1252
	Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			unsigned int& src);  // 1564
} /* size: 4777, variables: 7, inline expansions: 170 (3076 bytes) */

// <0646E613> ../public/physicslib/serialize.h:1706
// variables: 2
inline void RnHull_t::GetBbox(float flScale)
{
	AABB_t b; // 1709
	{
		int nVert; // 1712
	}
} /* size: 0, variables: 1 */

// <0646D155> ../public/physicslib/serialize.h:1863
// variable: 1
inline void RnMesh_t::GetBbox()
{
	AABB_t b; // 1865
} /* size: 0, variables: 1 */

// <066594C0> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:2016
// variables: 2
inline void KV3TransferSaveArrayAsBlob<RnNode_t>(const CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >& source, CKV3MemberName memberNameAndHash, CKV3TransferSaveContext* pContext)
{
	KeyValues3* pTargetKV; // 2018
	KeyValues3* pMemberKV; // 2019
} /* size: 0, variables: 2 */

// <0665940F> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:2016
// variables: 2
inline void KV3TransferSaveArrayAsBlob<RnTriangle_t>(const CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& source, CKV3MemberName memberNameAndHash, CKV3TransferSaveContext* pContext)
{
	KeyValues3* pTargetKV; // 2018
	KeyValues3* pMemberKV; // 2019
} /* size: 0, variables: 2 */

// <0665935E> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:2016
// variables: 2
inline void KV3TransferSaveArrayAsBlob<Vector>(const CUtlVector<Vector, CUtlMemory<Vector, int> >& source, CKV3MemberName memberNameAndHash, CKV3TransferSaveContext* pContext)
{
	KeyValues3* pTargetKV; // 2018
	KeyValues3* pMemberKV; // 2019
} /* size: 0, variables: 2 */

// <066592CA> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:2025
// variables: 5
inline void KV3TransferLoadArrayAsBlob<RnNode_t>(CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >& target, CKV3MemberName memberNameAndHash, CKV3TransferLoadContext* pContext, int nExtraAllocationCount)
{
	const KeyValues3* pSourceKV; // 2027
	const KeyValues3* pMemberKV; // 2028
	{
		int nBlobSize; // 2037
		int nElementSize; // 2038
		{
			int nCount; // 2041
		}
	}
} /* size: 0, variables: 2 */

// <06659181> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:2025
// variables: 5
inline void KV3TransferLoadArrayAsBlob<VectorAligned>(CUtlVector<VectorAligned, CUtlMemory<VectorAligned, int> >& target, CKV3MemberName memberNameAndHash, CKV3TransferLoadContext* pContext, int nExtraAllocationCount)
{
	const KeyValues3* pSourceKV; // 2027
	const KeyValues3* pMemberKV; // 2028
	{
		int nBlobSize; // 2037
		int nElementSize; // 2038
		{
			int nCount; // 2041
		}
	}
} /* size: 0, variables: 2 */

// <066590B0> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:2025
// variables: 5
inline void KV3TransferLoadArrayAsBlob<Vector>(CUtlVector<Vector, CUtlMemory<Vector, int> >& target, CKV3MemberName memberNameAndHash, CKV3TransferLoadContext* pContext, int nExtraAllocationCount)
{
	const KeyValues3* pSourceKV; // 2027
	const KeyValues3* pMemberKV; // 2028
	{
		int nBlobSize; // 2037
		int nElementSize; // 2038
		{
			int nCount; // 2041
		}
	}
} /* size: 0, variables: 2 */

// <06658FC7> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:2025
// variables: 5
inline void KV3TransferLoadArrayAsBlob<int>(CUtlVector<int, CUtlMemory<int, int> >& target, CKV3MemberName memberNameAndHash, CKV3TransferLoadContext* pContext, int nExtraAllocationCount)
{
	const KeyValues3* pSourceKV; // 2027
	const KeyValues3* pMemberKV; // 2028
	{
		int nBlobSize; // 2037
		int nElementSize; // 2038
		{
			int nCount; // 2041
		}
	}
} /* size: 0, variables: 2 */

// <066586B0> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:2025
// variables: 5
inline void KV3TransferLoadArrayAsBlob<RnTriangle_t>(CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& target, CKV3MemberName memberNameAndHash, CKV3TransferLoadContext* pContext, int nExtraAllocationCount)
{
	const KeyValues3* pSourceKV; // 2027
	const KeyValues3* pMemberKV; // 2028
	{
		int nBlobSize; // 2037
		int nElementSize; // 2038
		{
			int nCount; // 2041
		}
	}
} /* size: 0, variables: 2 */

// <0668B822> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:2068
inline void RnMesh_t::KV3TransferPostSaveFn(CKV3TransferSaveContext* pContext)
{
} /* size: 0 */

// <06687709> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:2081
// variables: 40
// function calls: 229
void RnMesh_t::KV3TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
	const KeyValues3* pSourceKV; // 2085
	{
		KeyValues3* pMemberKV; // 2086
		{
			CUtlVector<VectorAligned, CUtlMemory<VectorAligned, int> > vertices; // 2088
			int nVertexCount; // 2091
			{
				int i; // 2093
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 40
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 2095
				CUtlMemory<Vector, int>::operator[](
						int i);  // 588
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
						int i);  // 2095
				Vector::operator=(
						const Vector& vOther);  // 2095
			}
			CUtlMemory<VectorAligned, int>::ValidateGrowSize(); // 475
			CUtlMemory<VectorAligned, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<VectorAligned, CUtlMemory<VectorAligned, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<VectorAligned, CUtlMemory<VectorAligned, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<VectorAligned, CUtlMemory<VectorAligned, int> >::CUtlVector(); // 2088
			CKV3MemberName::CKV3MemberName<18>(
						const char& str);  // 2089
			CKV3TransferLoadContext::SourceObject(); // 2027
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 101
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 101
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 2028
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 2028
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 2035
			CKV3TransferLoadContext::AllocatePooledMemory(
						uint nElementSize,
						uint nElementCount);  // 820
			CUtlMemory<VectorAligned, int>::ConvertToExternalMemory(
						VectorAligned* pMemory,
						int numElements,
						int nCopyElements,
						bool bSetGrowable,
						uint32 nGrowable_GrowSize);  // 306
			CUtlVectorBase<VectorAligned, CUtlMemory<VectorAligned, int> >::ConvertToExternalMemory(
						VectorAligned* pMemory,
						int numElements,
						int nCopyElements,
						bool bSetGrowable,
						uint32 nGrowable_GrowSize);  // 823
			SetCount(CKV3TransferLoadContext* pLoadContext,
				Array_t& arr,
				int nCount);  // 613
			{
				const KeyValues3* pArrayElement; // 647
				CKV3ArrayIteratorView<true>& __for_range; // 50162
				iterator __for_begin; // 50172
				iterator __for_end; // 50182
				CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
							KV3Pointer_t pKV3);  // 922
				KeyValues3::IterateArray(); // 647
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 396
				CKV3ArrayIteratorView<true>::begin(); // 647
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 401
				CKV3ArrayIteratorView<true>::end(); // 647
				iterator::operator!=(
						const iterator& rhs);  // 647
				iterator::operator*(); // 647
				KeyValues3::GetValueFloatArray<3>(
							float* pOutValues);  // 1341
				LoadValue<VectorAligned>(CKV3TransferLoadContext* pContext,
							const KeyValues3* pLoadFromValue,
							VectorAligned& value);  // 1548
				CKV3TransferLoadContext::LoadValueDirect<VectorAligned>(
								VectorAligned& destValue,
								const KeyValues3* pLoadFromMember);  // 651
			}
			LoadBlittableArrayElements<VectorAligned>(CKV3TransferLoadContext* pContext,
									const KeyValues3* pLoadFromValue,
									int nCount,
									VectorAligned* pValues);  // 618
			LoadValue<CUtlVector<VectorAligned> >(CKV3TransferLoadContext* pContext,
								const KeyValues3* pLoadFromValue,
								CUtlVector<VectorAligned, CUtlMemory<VectorAligned, int> >& value,
								type *);  // 1548
			CKV3TransferLoadContext::LoadValueDirect<CUtlVector<VectorAligned> >(
									CUtlVector<VectorAligned, CUtlMemory<VectorAligned, int> >& destValue,
									const KeyValues3* pLoadFromMember);  // 2057
			{
				int nBlobSize; // 2037
				int nElementSize; // 2038
				{
					int nCount; // 2041
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 75
					V_memcpy(void* dest,
						const void* src,
						int count);  // 2047
				}
			}
			KV3TransferLoadArrayAsBlob<VectorAligned>(CUtlVector<VectorAligned, CUtlMemory<VectorAligned, int> >& target,
									CKV3MemberName memberNameAndHash,
									CKV3TransferLoadContext* pContext,
									int nExtraAllocationCount);  // 2089
			CUtlMemory<VectorAligned, int>::Purge(); // 903
			CUtlMemory<VectorAligned, int>::Purge(); // 1799
			CUtlVectorBase<VectorAligned, CUtlMemory<VectorAligned, int> >::Purge(); // 560
			ValidateAlignment<VectorAligned>(void); // 508
			CUtlMemory<VectorAligned, int>::Purge(); // 510
			CUtlMemory<VectorAligned, int>::~CUtlMemory(); // 562
			CUtlVectorBase<VectorAligned, CUtlMemory<VectorAligned, int> >::~CUtlVectorBase(); // 410
			CUtlVector<VectorAligned, CUtlMemory<VectorAligned, int> >::~CUtlVector(); // 2097
		}
		CKV3MemberName::CKV3MemberName<18>(
					const char& str);  // 2086
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 101
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 101
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 2086
		CKV3MemberName::CKV3MemberName<11>(
					const char& str);  // 2100
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 2028
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 101
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 101
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 2028
		CKV3TransferLoadContext::SourceObject(); // 2027
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 2035
		CKV3TransferLoadContext::AllocatePooledMemory(
					uint nElementSize,
					uint nElementCount);  // 820
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 823
		CUtlMemory<Vector, int>::IsExternallyAllocated(); // 577
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 587
		CUtlMemory<Vector, int>::ConvertToExternalMemory(
					Vector* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 306
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ConvertToExternalMemory(
					Vector* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 823
		SetCount(CKV3TransferLoadContext* pLoadContext,
			Array_t& arr,
			int nCount);  // 613
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 812
		GetCount(const Array_t& arr); // 614
		CUtlMemory<Vector, int>::Base(); // 112
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 838
		GetBase(Array_t& arr); // 618
		{
			const KeyValues3* pArrayElement; // 647
			CKV3ArrayIteratorView<true>& __for_range; // 49921
			iterator __for_begin; // 49931
			iterator __for_end; // 49941
			CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 922
			KeyValues3::IterateArray(); // 647
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<true>::begin(); // 647
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<true>::end(); // 647
			iterator::operator!=(
					const iterator& rhs);  // 647
			iterator::operator*(); // 647
			KeyValues3::GetValueFloatArray<3>(
						float* pOutValues);  // 1341
			LoadValue<Vector>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						Vector& value);  // 1548
			CKV3TransferLoadContext::LoadValueDirect<Vector>(
						Vector& destValue,
						const KeyValues3* pLoadFromMember);  // 651
		}
		LoadBlittableArrayElements<Vector>(CKV3TransferLoadContext* pContext,
							const KeyValues3* pLoadFromValue,
							int nCount,
							Vector* pValues);  // 618
		LoadValue<CUtlVector<Vector> >(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						CUtlVector<Vector, CUtlMemory<Vector, int> >& value,
						type *);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<CUtlVector<Vector> >(
							CUtlVector<Vector, CUtlMemory<Vector, int> >& destValue,
							const KeyValues3* pLoadFromMember);  // 2057
		{
			int nBlobSize; // 2037
			int nElementSize; // 2038
			{
				int nCount; // 2041
				CUtlMemory<Vector, int>::Base(); // 112
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 2047
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 75
				V_memcpy(void* dest,
					const void* src,
					int count);  // 2047
			}
		}
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 2031
		KV3TransferLoadArrayAsBlob<Vector>(CUtlVector<Vector, CUtlMemory<Vector, int> >& target,
							CKV3MemberName memberNameAndHash,
							CKV3TransferLoadContext* pContext,
							int nExtraAllocationCount);  // 2100
	}
	{
		CUtlVector<int, CUtlMemory<int, int> > triangles; // 2106
		int nTriangleCount; // 2108
		{
			int i; // 2112
			{
				RnTriangle_t tri; // 2114
				V_memset(void* dest,
					int fill,
					size_t count);  // 529
				RnTriangle_t::RnTriangle_t(); // 2114
				CUtlMemory<RnTriangle_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::operator[](
						int i);  // 2118
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
						int i);  // 2119
			}
		}
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 2106
		CKV3MemberName::CKV3MemberName<12>(
					const char& str);  // 2107
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 2028
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 101
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 101
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 2028
		CKV3TransferLoadContext::SourceObject(); // 2027
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 2035
		CKV3TransferLoadContext::AllocatePooledMemory(
					uint nElementSize,
					uint nElementCount);  // 820
		CUtlMemory<int, int>::ConvertToExternalMemory(
					int* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 306
		CUtlVectorBase<int, CUtlMemory<int, int> >::ConvertToExternalMemory(
					int* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 823
		SetCount(CKV3TransferLoadContext* pLoadContext,
			Array_t& arr,
			int nCount);  // 613
		LoadBlittableArrayElements(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						int nCount,
						int* pValues);  // 618
		LoadValue<CUtlVector<int> >(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						CUtlVector<int, CUtlMemory<int, int> >& value,
						type *);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<CUtlVector<int> >(
							CUtlVector<int, CUtlMemory<int, int> >& destValue,
							const KeyValues3* pLoadFromMember);  // 2057
		{
			int nBlobSize; // 2037
			int nElementSize; // 2038
			{
				int nCount; // 2041
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 75
				V_memcpy(void* dest,
					const void* src,
					int count);  // 2047
			}
		}
		KV3TransferLoadArrayAsBlob<int>(CUtlVector<int, CUtlMemory<int, int> >& target,
						CKV3MemberName memberNameAndHash,
						CKV3TransferLoadContext* pContext,
						int nExtraAllocationCount);  // 2107
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2121
	}
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 2028
	CKV3TransferLoadContext::SourceObject(); // 2027
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2028
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2035
	CKV3TransferLoadContext::AllocatePooledMemory(
				uint nElementSize,
				uint nElementCount);  // 820
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Count(); // 823
	CUtlMemory<RnNode_t, int>::IsExternallyAllocated(); // 577
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 587
	CUtlMemory<RnNode_t, int>::ConvertToExternalMemory(
				RnNode_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 306
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::ConvertToExternalMemory(
				RnNode_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 823
	SetCount(CKV3TransferLoadContext* pLoadContext,
		Array_t& arr,
		int nCount);  // 613
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 614
	CUtlMemory<RnNode_t, int>::Base(); // 112
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Base(); // 838
	GetBase(Array_t& arr); // 618
	{
		const KeyValues3* pArrayElement; // 647
		CKV3ArrayIteratorView<true>& __for_range; // 50579
		iterator __for_begin; // 50589
		iterator __for_end; // 50599
		CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 922
		KeyValues3::IterateArray(); // 647
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<true>::begin(); // 647
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<true>::end(); // 647
		iterator::operator!=(
				const iterator& rhs);  // 647
		iterator::operator*(); // 647
		CUtlStack<const KeyValues3::Count(); // 413
		RnNode_t::KV3TransferLoad(
				CKV3TransferLoadContext* pContext);  // 415
		CKV3TransferLoadContext::LoadClassInstance<RnNode_t>(
						RnNode_t* pClassInstance,
						const KeyValues3* pNestedValue);  // 495
		LoadValue<RnNode_t>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					RnNode_t& value,
					type *);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<RnNode_t>(
						RnNode_t& destValue,
						const KeyValues3* pLoadFromMember);  // 651
	}
	LoadBlittableArrayElements<RnNode_t>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						int nCount,
						RnNode_t* pValues);  // 618
	LoadValue<CUtlVector<RnNode_t> >(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >& value,
					type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CUtlVector<RnNode_t> >(
						CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >& destValue,
						const KeyValues3* pLoadFromMember);  // 2057
	{
		int nBlobSize; // 2037
		int nElementSize; // 2038
		{
			int nCount; // 2041
			CUtlMemory<RnNode_t, int>::Base(); // 112
			CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Base(); // 2047
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 2047
		}
	}
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::RemoveAll(); // 2031
	KV3TransferLoadArrayAsBlob<RnNode_t>(CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >& target,
						CKV3MemberName memberNameAndHash,
						CKV3TransferLoadContext* pContext,
						int nExtraAllocationCount);  // 2083
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<8>(
				const char& str);  // 2083
	CKV3TransferLoadContext::SourceObject(); // 2085
	CKV3MemberName::CKV3MemberName<14>(
				const char& str);  // 2104
	CKV3MemberName::CKV3MemberName<12>(
				const char& str);  // 2124
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2028
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 2028
	CKV3TransferLoadContext::SourceObject(); // 2027
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2035
	CKV3TransferLoadContext::AllocatePooledMemory(
				uint nElementSize,
				uint nElementCount);  // 820
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 823
	CUtlMemory<RnTriangle_t, int>::IsExternallyAllocated(); // 577
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 587
	CUtlMemory<RnTriangle_t, int>::ConvertToExternalMemory(
				RnTriangle_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 306
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::ConvertToExternalMemory(
				RnTriangle_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 823
	SetCount(CKV3TransferLoadContext* pLoadContext,
		Array_t& arr,
		int nCount);  // 613
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 614
	CUtlMemory<RnTriangle_t, int>::Base(); // 112
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Base(); // 838
	GetBase(Array_t& arr); // 618
	{
		const KeyValues3* pArrayElement; // 647
		CKV3ArrayIteratorView<true>& __for_range; // 49157
		iterator __for_begin; // 49167
		iterator __for_end; // 49177
		CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 922
		KeyValues3::IterateArray(); // 647
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<true>::begin(); // 647
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<true>::end(); // 647
		iterator::operator!=(
				const iterator& rhs);  // 647
		iterator::operator*(); // 647
		CUtlStack<const KeyValues3::Count(); // 413
		RnTriangle_t::KV3TransferLoad(
				CKV3TransferLoadContext* pContext);  // 415
		CKV3TransferLoadContext::LoadClassInstance<RnTriangle_t>(
						RnTriangle_t* pClassInstance,
						const KeyValues3* pNestedValue);  // 495
		LoadValue<RnTriangle_t>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					RnTriangle_t& value,
					type *);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<RnTriangle_t>(
						RnTriangle_t& destValue,
						const KeyValues3* pLoadFromMember);  // 651
	}
	LoadBlittableArrayElements<RnTriangle_t>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						int nCount,
						RnTriangle_t* pValues);  // 618
	LoadValue<CUtlVector<RnTriangle_t> >(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& value,
						type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CUtlVector<RnTriangle_t> >(
							CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& destValue,
							const KeyValues3* pLoadFromMember);  // 2057
	{
		int nBlobSize; // 2037
		int nElementSize; // 2038
		{
			int nCount; // 2041
			CUtlMemory<RnTriangle_t, int>::Base(); // 112
			CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Base(); // 2047
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 2047
		}
	}
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::RemoveAll(); // 2031
	KV3TransferLoadArrayAsBlob<RnTriangle_t>(CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& target,
						CKV3MemberName memberNameAndHash,
						CKV3TransferLoadContext* pContext,
						int nExtraAllocationCount);  // 2124
} /* size: 3908, variables: 1, inline expansions: 59 (4649 bytes) */

// <066876DF> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:2130
inline void RnHull_t::KV3TransferPostSaveFn(CKV3TransferSaveContext* pContext)
{
} /* size: 0 */

// <06687670> ../_generated_code/physicslib/linuxsteamrt64/release/../../../../public/physicslib/serialize.h:2137
// variables: 5
inline void RnHull_t::KV3TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
	int nVertexCount; // 2139
	int nEdgeCount; // 2141
	{
		int nEdge; // 2142
		{
			const RnHalfEdge_t* pEdge; // 2144
			int nOrigin; // 2145
		}
	}
} /* size: 0, variables: 2 */

// <0134976F> ../public/physicslib/serialize.h:2245
// variables: 11
// function calls: 39
void RnHull_t::GetSurfaceArea()
{
	float flSurfaceArea; // 2248
	{
		int i; // 2249
		{
			const RnFace_t* pFace; // 2251
			const RnHalfEdge_t* pEdge1; // 2253
			const RnHalfEdge_t* pEdge2; // 2254
			const RnHalfEdge_t* pEdge3; // 2255
			Vector v1; // 2258
			{
				Vector v2; // 2262
				Vector v3; // 2263
				Vector n; // 2266
				float flTriangleArea; // 2267
				CUtlMemory<Vector, int>::operator[](
						int i);  // 595
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
						int i);  // 321
				RnHull_t::GetVertex(
						int nVertex);  // 2262
				CUtlMemory<Vector, int>::operator[](
						int i);  // 595
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
						int i);  // 321
				RnHull_t::GetVertex(
						int nVertex);  // 2263
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 2266
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1508
				CrossProduct(const Vector& a,
						const Vector& b);  // 2266
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 2266
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 2267
				CUtlMemory<RnHalfEdge_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator[](
						int i);  // 326
				RnHull_t::GetEdge(
					int nEdge);  // 2271
			}
			CUtlMemory<RnHalfEdge_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator[](
					int i);  // 326
			RnHull_t::GetEdge(
				int nEdge);  // 2253
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 321
			RnHull_t::GetVertex(
					int nVertex);  // 2258
			CUtlMemory<RnFace_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::operator[](
					int i);  // 328
			RnHull_t::GetFace(
				int nFace);  // 2251
			CUtlMemory<RnHalfEdge_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator[](
					int i);  // 326
			RnHull_t::GetEdge(
				int nEdge);  // 2254
			CUtlMemory<RnHalfEdge_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator[](
					int i);  // 326
			RnHull_t::GetEdge(
				int nEdge);  // 2255
		}
		CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Count(); // 327
		RnHull_t::GetFaceCount(); // 2249
	}
} /* size: 367, variables: 1 */

// <0587D5C9> ../../public/physicslib/serialize.h:2322
// variables: 3
inline fltx4 HMaxSIMD(fltx4 a)
{
	fltx4 b; // 2324
	fltx4 c; // 2325
	fltx4 d; // 2326
} /* size: 0, variables: 3 */

// <003D7255> ../public/physicslib/serialize.h:2332
// variables: 3
inline fltx4 HMinSIMD(fltx4 a)
{
	fltx4 b; // 2334
	fltx4 c; // 2335
	fltx4 d; // 2336
} /* size: 0, variables: 3 */

