
//
// public/animationsystem/blendcurve.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//	classes: 5
//

// <019F60DB> ../public/animationsystem/blendcurve.h:22
inline void CBlendCurve::operator=(const CBlendCurve &)
{
} /* size: 0 */

// <01956635> ../public/animationsystem/blendcurve.h:22
void CBlendCurve::CBlendCurve(const CBlendCurve &)
{
} /* size: 0 */

// <01956614> ../public/animationsystem/blendcurve.h:22
inline void CBlendCurve::CBlendCurve(const CBlendCurve &)
{
} /* size: 0 */

// <0026EDDB> ../public/animationsystem/blendcurve.h:22
// member functions: 41
// member variables: 2
// static member variable: 1
// class size: 16
class CBlendCurve {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/blendcurve.h:24 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	CBlendCurve* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/blendcurve.h:24 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	void Schema_CompileTimeVerificationFunction(CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:24 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:25 */
	CBlendCurve* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/blendcurve.h:25 */
	void KV3TransferSave(const CBlendCurve* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/blendcurve.h:25 */
	void KV3TransferLoad(CBlendCurve* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/blendcurve.h:25 */
	void KV3TransferSave_CBlendCurve(const CBlendCurve* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/blendcurve.h:25 */
	void KV3TransferLoad_CBlendCurve(CBlendCurve* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/blendcurve.h:27 */
	void CBlendCurve(CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:28 */
	void CBlendCurve(CBlendCurve* , const Vector2D& , const Vector2D& );
	/* ../public/animationsystem/blendcurve.h:30 */
	const Vector2D& GetControlPoint1(const CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:31 */
	const Vector2D& GetControlPoint2(const CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:33 */
	void SetControlPoint1(CBlendCurve* , const Vector2D& );
	/* ../public/animationsystem/blendcurve.h:34 */
	void SetControlPoint2(CBlendCurve* , const Vector2D& );
	/* ../public/animationsystem/blendcurve.h:37 */
	float Evaluate(const CBlendCurve* , float);
	Vector2D m_vControlPoint1; /* 0 8 */
	Vector2D m_vControlPoint2; /* 8 8 */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CBlendCurve17GetPrimaryBindingEv */
	class CBlendCurve * Schema_MarkHelperFn(void); /* linkage=_ZN11CBlendCurve19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CBlendCurve15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <aac7d8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/blendcurve_h_schema.gen_cpp:93 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CBlendCurve32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CBlendCurve *); /* linkage=_ZN11CBlendCurve38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN11CBlendCurve20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CBlendCurve22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CBlendCurve  *); /* linkage=_ZNK11CBlendCurve21Schema_DynamicBindingEv */
	class CBlendCurve * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11CBlendCurve32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CBlendCurve  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CBlendCurve15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CBlendCurve *, class CKV3TransferLoadContext *); /* linkage=_ZN11CBlendCurve15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CBlendCurve(const class CBlendCurve  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CBlendCurve27KV3TransferSave_CBlendCurveEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CBlendCurve(class CBlendCurve *, class CKV3TransferLoadContext *); /* linkage=_ZN11CBlendCurve27KV3TransferLoad_CBlendCurveEP23CKV3TransferLoadContext */
	void CBlendCurve(class CBlendCurve *); /* linkage=_ZN11CBlendCurveC4Ev */
	void CBlendCurve(class CBlendCurve *, const class Vector2D  &, const class Vector2D  &); /* linkage=_ZN11CBlendCurveC4ERK8Vector2DS2_ */
	const class Vector2D  & GetControlPoint1(const class CBlendCurve  *); /* linkage=_ZNK11CBlendCurve16GetControlPoint1Ev */
	const class Vector2D  & GetControlPoint2(const class CBlendCurve  *); /* linkage=_ZNK11CBlendCurve16GetControlPoint2Ev */
	void SetControlPoint1(class CBlendCurve *, const class Vector2D  &); /* linkage=_ZN11CBlendCurve16SetControlPoint1ERK8Vector2D */
	void SetControlPoint2(class CBlendCurve *, const class Vector2D  &); /* linkage=_ZN11CBlendCurve16SetControlPoint2ERK8Vector2D */
	float Evaluate(const class CBlendCurve  *, float); /* linkage=_ZNK11CBlendCurve8EvaluateEf */
	class CBlendCurve & operator=(class CBlendCurve *, const class CBlendCurve  &); /* linkage=_ZN11CBlendCurveaSERKS_ */
};

// <00568DA0> ../public/animationsystem/blendcurve.h:22
// member functions: 42
// member variables: 2
// static member variable: 1
// class size: 16
class CBlendCurve {
	/* ../public/animationsystem/blendcurve.h:25 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/blendcurve.h:24 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	CBlendCurve* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/blendcurve.h:24 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	void Schema_CompileTimeVerificationFunction(CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:24 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:25 */
	CBlendCurve* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/blendcurve.h:25 */
	void KV3TransferSave(const CBlendCurve* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/blendcurve.h:25 */
	void KV3TransferLoad(CBlendCurve* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/blendcurve.h:25 */
	void KV3TransferSave_CBlendCurve(const CBlendCurve* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/blendcurve.h:25 */
	void KV3TransferLoad_CBlendCurve(CBlendCurve* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/blendcurve.h:27 */
	void CBlendCurve(CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:28 */
	void CBlendCurve(CBlendCurve* , const Vector2D& , const Vector2D& );
	/* ../public/animationsystem/blendcurve.h:30 */
	const Vector2D& GetControlPoint1(const CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:31 */
	const Vector2D& GetControlPoint2(const CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:33 */
	void SetControlPoint1(CBlendCurve* , const Vector2D& );
	/* ../public/animationsystem/blendcurve.h:34 */
	void SetControlPoint2(CBlendCurve* , const Vector2D& );
	/* ../public/animationsystem/blendcurve.h:37 */
	float Evaluate(const CBlendCurve* , float);
	Vector2D m_vControlPoint1; /* 0 8 */
	Vector2D m_vControlPoint2; /* 8 8 */
	CBlendCurve& operator=(CBlendCurve* , const CBlendCurve& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CBlendCurve17GetPrimaryBindingEv */
	class CBlendCurve * Schema_MarkHelperFn(void); /* linkage=_ZN11CBlendCurve19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CBlendCurve15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <aac7d8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/blendcurve_h_schema.gen_cpp:93 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CBlendCurve32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CBlendCurve *); /* linkage=_ZN11CBlendCurve38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN11CBlendCurve20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CBlendCurve22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CBlendCurve  *); /* linkage=_ZNK11CBlendCurve21Schema_DynamicBindingEv */
	class CBlendCurve * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11CBlendCurve32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CBlendCurve  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CBlendCurve15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CBlendCurve *, class CKV3TransferLoadContext *); /* linkage=_ZN11CBlendCurve15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CBlendCurve(const class CBlendCurve  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CBlendCurve27KV3TransferSave_CBlendCurveEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CBlendCurve(class CBlendCurve *, class CKV3TransferLoadContext *); /* linkage=_ZN11CBlendCurve27KV3TransferLoad_CBlendCurveEP23CKV3TransferLoadContext */
	void CBlendCurve(class CBlendCurve *); /* linkage=_ZN11CBlendCurveC4Ev */
	void CBlendCurve(class CBlendCurve *, const class Vector2D  &, const class Vector2D  &); /* linkage=_ZN11CBlendCurveC4ERK8Vector2DS2_ */
	const class Vector2D  & GetControlPoint1(const class CBlendCurve  *); /* linkage=_ZNK11CBlendCurve16GetControlPoint1Ev */
	const class Vector2D  & GetControlPoint2(const class CBlendCurve  *); /* linkage=_ZNK11CBlendCurve16GetControlPoint2Ev */
	void SetControlPoint1(class CBlendCurve *, const class Vector2D  &); /* linkage=_ZN11CBlendCurve16SetControlPoint1ERK8Vector2D */
	void SetControlPoint2(class CBlendCurve *, const class Vector2D  &); /* linkage=_ZN11CBlendCurve16SetControlPoint2ERK8Vector2D */
	float Evaluate(const class CBlendCurve  *, float); /* linkage=_ZNK11CBlendCurve8EvaluateEf */
	class CBlendCurve & operator=(class CBlendCurve *, const class CBlendCurve  &); /* linkage=_ZN11CBlendCurveaSERKS_ */
};

// <00A97009> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:22
// member functions: 42
// member variables: 2
// static member variable: 1
// class size: 16
class CBlendCurve {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:24 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:24 */
	CBlendCurve* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:24 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:24 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:24 */
	void Schema_CompileTimeVerificationFunction(CBlendCurve* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:24 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:24 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:24 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CBlendCurve* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:25 */
	CBlendCurve* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:25 */
	void KV3TransferSave(const CBlendCurve* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:25 */
	void KV3TransferLoad(CBlendCurve* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:25 */
	void KV3TransferSave_CBlendCurve(const CBlendCurve* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:25 */
	void KV3TransferLoad_CBlendCurve(CBlendCurve* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:27 */
	void CBlendCurve(CBlendCurve* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:28 */
	void CBlendCurve(CBlendCurve* , const Vector2D& , const Vector2D& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:30 */
	const Vector2D& GetControlPoint1(const CBlendCurve* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:31 */
	const Vector2D& GetControlPoint2(const CBlendCurve* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:33 */
	void SetControlPoint1(CBlendCurve* , const Vector2D& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:34 */
	void SetControlPoint2(CBlendCurve* , const Vector2D& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:37 */
	float Evaluate(const CBlendCurve* , float);
	Vector2D m_vControlPoint1; /* 0 8 */
	Vector2D m_vControlPoint2; /* 8 8 */
	CBlendCurve& operator=(CBlendCurve* , const CBlendCurve& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CBlendCurve17GetPrimaryBindingEv */
	class CBlendCurve * Schema_MarkHelperFn(void); /* linkage=_ZN11CBlendCurve19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CBlendCurve15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <aac7d8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/blendcurve_h_schema.gen_cpp:93 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CBlendCurve32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CBlendCurve *); /* linkage=_ZN11CBlendCurve38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN11CBlendCurve20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CBlendCurve22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CBlendCurve  *); /* linkage=_ZNK11CBlendCurve21Schema_DynamicBindingEv */
	class CBlendCurve * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11CBlendCurve32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CBlendCurve  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CBlendCurve15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CBlendCurve *, class CKV3TransferLoadContext *); /* linkage=_ZN11CBlendCurve15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CBlendCurve(const class CBlendCurve  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CBlendCurve27KV3TransferSave_CBlendCurveEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CBlendCurve(class CBlendCurve *, class CKV3TransferLoadContext *); /* linkage=_ZN11CBlendCurve27KV3TransferLoad_CBlendCurveEP23CKV3TransferLoadContext */
	void CBlendCurve(class CBlendCurve *); /* linkage=_ZN11CBlendCurveC4Ev */
	void CBlendCurve(class CBlendCurve *, const class Vector2D  &, const class Vector2D  &); /* linkage=_ZN11CBlendCurveC4ERK8Vector2DS2_ */
	const class Vector2D  & GetControlPoint1(const class CBlendCurve  *); /* linkage=_ZNK11CBlendCurve16GetControlPoint1Ev */
	const class Vector2D  & GetControlPoint2(const class CBlendCurve  *); /* linkage=_ZNK11CBlendCurve16GetControlPoint2Ev */
	void SetControlPoint1(class CBlendCurve *, const class Vector2D  &); /* linkage=_ZN11CBlendCurve16SetControlPoint1ERK8Vector2D */
	void SetControlPoint2(class CBlendCurve *, const class Vector2D  &); /* linkage=_ZN11CBlendCurve16SetControlPoint2ERK8Vector2D */
	float Evaluate(const class CBlendCurve  *, float); /* linkage=_ZNK11CBlendCurve8EvaluateEf */
	class CBlendCurve & operator=(class CBlendCurve *, const class CBlendCurve  &); /* linkage=_ZN11CBlendCurveaSERKS_ */
};

// <0110661C> ../public/animationsystem/blendcurve.h:22
// member functions: 42
// member variables: 2
// static member variable: 1
// class size: 16
class CBlendCurve {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/blendcurve.h:24 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	CBlendCurve* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/blendcurve.h:24 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	void Schema_CompileTimeVerificationFunction(CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:24 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:25 */
	CBlendCurve* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/blendcurve.h:25 */
	void KV3TransferSave(const CBlendCurve* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/blendcurve.h:25 */
	void KV3TransferLoad(CBlendCurve* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/blendcurve.h:25 */
	void KV3TransferSave_CBlendCurve(const CBlendCurve* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/blendcurve.h:25 */
	void KV3TransferLoad_CBlendCurve(CBlendCurve* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/blendcurve.h:27 */
	void CBlendCurve(CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:28 */
	void CBlendCurve(CBlendCurve* , const Vector2D& , const Vector2D& );
	/* ../public/animationsystem/blendcurve.h:30 */
	const Vector2D& GetControlPoint1(const CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:31 */
	const Vector2D& GetControlPoint2(const CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:33 */
	void SetControlPoint1(CBlendCurve* , const Vector2D& );
	/* ../public/animationsystem/blendcurve.h:34 */
	void SetControlPoint2(CBlendCurve* , const Vector2D& );
	/* ../public/animationsystem/blendcurve.h:37 */
	float Evaluate(const CBlendCurve* , float);
	Vector2D m_vControlPoint1; /* 0 8 */
	Vector2D m_vControlPoint2; /* 8 8 */
	CBlendCurve& operator=(CBlendCurve* , const CBlendCurve& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CBlendCurve17GetPrimaryBindingEv */
	class CBlendCurve * Schema_MarkHelperFn(void); /* linkage=_ZN11CBlendCurve19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CBlendCurve15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <aac7d8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/blendcurve_h_schema.gen_cpp:93 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CBlendCurve32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CBlendCurve *); /* linkage=_ZN11CBlendCurve38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN11CBlendCurve20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CBlendCurve22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CBlendCurve  *); /* linkage=_ZNK11CBlendCurve21Schema_DynamicBindingEv */
	class CBlendCurve * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11CBlendCurve32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CBlendCurve  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CBlendCurve15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CBlendCurve *, class CKV3TransferLoadContext *); /* linkage=_ZN11CBlendCurve15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CBlendCurve(const class CBlendCurve  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CBlendCurve27KV3TransferSave_CBlendCurveEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CBlendCurve(class CBlendCurve *, class CKV3TransferLoadContext *); /* linkage=_ZN11CBlendCurve27KV3TransferLoad_CBlendCurveEP23CKV3TransferLoadContext */
	void CBlendCurve(class CBlendCurve *); /* linkage=_ZN11CBlendCurveC4Ev */
	void CBlendCurve(class CBlendCurve *, const class Vector2D  &, const class Vector2D  &); /* linkage=_ZN11CBlendCurveC4ERK8Vector2DS2_ */
	const class Vector2D  & GetControlPoint1(const class CBlendCurve  *); /* linkage=_ZNK11CBlendCurve16GetControlPoint1Ev */
	const class Vector2D  & GetControlPoint2(const class CBlendCurve  *); /* linkage=_ZNK11CBlendCurve16GetControlPoint2Ev */
	void SetControlPoint1(class CBlendCurve *, const class Vector2D  &); /* linkage=_ZN11CBlendCurve16SetControlPoint1ERK8Vector2D */
	void SetControlPoint2(class CBlendCurve *, const class Vector2D  &); /* linkage=_ZN11CBlendCurve16SetControlPoint2ERK8Vector2D */
	float Evaluate(const class CBlendCurve  *, float); /* linkage=_ZNK11CBlendCurve8EvaluateEf */
	class CBlendCurve & operator=(class CBlendCurve *, const class CBlendCurve  &); /* linkage=_ZN11CBlendCurveaSERKS_ */
};

// <018D4D79> ../public/animationsystem/blendcurve.h:22
// member functions: 42
// member variables: 2
// static member variable: 1
// class size: 16
class CBlendCurve {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/blendcurve.h:24 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	CBlendCurve* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/blendcurve.h:24 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	void Schema_CompileTimeVerificationFunction(CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:24 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/blendcurve.h:24 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:25 */
	CBlendCurve* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/blendcurve.h:25 */
	void KV3TransferSave(const CBlendCurve* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/blendcurve.h:25 */
	void KV3TransferLoad(CBlendCurve* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/blendcurve.h:25 */
	void KV3TransferSave_CBlendCurve(const CBlendCurve* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/blendcurve.h:25 */
	void KV3TransferLoad_CBlendCurve(CBlendCurve* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/blendcurve.h:27 */
	void CBlendCurve(CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:28 */
	void CBlendCurve(CBlendCurve* , const Vector2D& , const Vector2D& );
	/* ../public/animationsystem/blendcurve.h:30 */
	const Vector2D& GetControlPoint1(const CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:31 */
	const Vector2D& GetControlPoint2(const CBlendCurve* );
	/* ../public/animationsystem/blendcurve.h:33 */
	void SetControlPoint1(CBlendCurve* , const Vector2D& );
	/* ../public/animationsystem/blendcurve.h:34 */
	void SetControlPoint2(CBlendCurve* , const Vector2D& );
	/* ../public/animationsystem/blendcurve.h:37 */
	float Evaluate(const CBlendCurve* , float);
	Vector2D m_vControlPoint1; /* 0 8 */
	Vector2D m_vControlPoint2; /* 8 8 */
	void CBlendCurve(CBlendCurve* , const CBlendCurve& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CBlendCurve17GetPrimaryBindingEv */
	class CBlendCurve * Schema_MarkHelperFn(void); /* linkage=_ZN11CBlendCurve19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CBlendCurve15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <aac7d8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/blendcurve_h_schema.gen_cpp:93 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CBlendCurve32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CBlendCurve *); /* linkage=_ZN11CBlendCurve38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN11CBlendCurve20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CBlendCurve22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CBlendCurve  *); /* linkage=_ZNK11CBlendCurve21Schema_DynamicBindingEv */
	class CBlendCurve * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11CBlendCurve32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CBlendCurve  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CBlendCurve15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CBlendCurve *, class CKV3TransferLoadContext *); /* linkage=_ZN11CBlendCurve15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CBlendCurve(const class CBlendCurve  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CBlendCurve27KV3TransferSave_CBlendCurveEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CBlendCurve(class CBlendCurve *, class CKV3TransferLoadContext *); /* linkage=_ZN11CBlendCurve27KV3TransferLoad_CBlendCurveEP23CKV3TransferLoadContext */
	void CBlendCurve(class CBlendCurve *); /* linkage=_ZN11CBlendCurveC4Ev */
	void CBlendCurve(class CBlendCurve *, const class Vector2D  &, const class Vector2D  &); /* linkage=_ZN11CBlendCurveC4ERK8Vector2DS2_ */
	const class Vector2D  & GetControlPoint1(const class CBlendCurve  *); /* linkage=_ZNK11CBlendCurve16GetControlPoint1Ev */
	const class Vector2D  & GetControlPoint2(const class CBlendCurve  *); /* linkage=_ZNK11CBlendCurve16GetControlPoint2Ev */
	void SetControlPoint1(class CBlendCurve *, const class Vector2D  &); /* linkage=_ZN11CBlendCurve16SetControlPoint1ERK8Vector2D */
	void SetControlPoint2(class CBlendCurve *, const class Vector2D  &); /* linkage=_ZN11CBlendCurve16SetControlPoint2ERK8Vector2D */
	float Evaluate(const class CBlendCurve  *, float); /* linkage=_ZNK11CBlendCurve8EvaluateEf */
	class CBlendCurve & operator=(class CBlendCurve *, const class CBlendCurve  &); /* linkage=_ZN11CBlendCurveaSERKS_ */
};

// <00AA8340> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:24
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <00AA833A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:24
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <00AA8321> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/blendcurve.h:24
inline void CBlendCurve::Schema_DynamicBinding()
{
} /* size: 0 */

// <01A01ABF> ../public/animationsystem/blendcurve.h:27
void CBlendCurve::CBlendCurve()
{
} /* size: 0 */

// <01A01AA6> ../public/animationsystem/blendcurve.h:27
inline void CBlendCurve::CBlendCurve()
{
} /* size: 0 */

// <0196DCDC> ../public/animationsystem/blendcurve.h:77
// variables: 9
inline void CBlendCurve::Evaluate(float t)
{
	float currentT; // 96
	Vector2D splinePos; // 97
	const Vector2D  vOne; // 98
	const int  kMaxIterations; // 100
	{
		int i; // 101
		{
			float t2; // 103
			float t3; // 104
			float invT; // 106
			float invT2; // 107
		}
	}
} /* size: 0, variables: 4 */

