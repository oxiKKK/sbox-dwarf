
//
// public/mathlib/ssequaternion.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 10
//	class: 1
//

// <059993A7> ../public/mathlib/ssequaternion.h:64
// variables: 3
inline fltx4 QuaternionNormalizeSIMD<(ESIMDLevel)20>(const fltx4& q)
{
	fltx4 radius; // 66
	fltx4 result; // 66
	fltx4 mask; // 66
} /* size: 0, variables: 3 */

// <05999484> ../public/mathlib/ssequaternion.h:82
// variables: 3
inline fltx4 QuaternionBlendNoAlignSIMD<(ESIMDLevel)20>(const fltx4& p, const fltx4& q, float t)
{
	fltx4 sclp; // 84
	fltx4 sclq; // 84
	fltx4 result; // 84
} /* size: 0, variables: 3 */

// <05999D29> ../public/mathlib/ssequaternion.h:93
// variables: 2
inline fltx4 QuaternionBlendSIMD<>(const fltx4& p, const fltx4& q, float t)
{
	fltx4 q2; // 96
	fltx4 result; // 96
} /* size: 0, variables: 2 */

// <05999D81> ../public/mathlib/ssequaternion.h:105
// variables: 3
inline void QuaternionBlendInternal<(ESIMDLevel)20, false>(const Quaternion& p, const Quaternion& q, float t, Quaternion& qt)
{
	fltx4 psimd; // 107
	fltx4 qsimd; // 107
	fltx4 qtsimd; // 107
} /* size: 0, variables: 3 */

// <059317D2> ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:174
// member functions: 54
// member variables: 4
// static member variable: 1
// class size: 64
class FourQuaternions {
	fltx4 x; /* 0 16 */
	fltx4 y; /* 16 16 */
	fltx4 z; /* 32 16 */
	fltx4 w; /* 48 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:182 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:182 */
	FourQuaternions* Schema_MarkHelperFn(void);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:182 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:182 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:182 */
	void Schema_CompileTimeVerificationFunction(FourQuaternions* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:182 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:182 */
	const char* Schema_StaticClassname(void);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:182 */
	const CSchemaClassInfo* Schema_DynamicBinding(const FourQuaternions* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:184 */
	void FourQuaternions(FourQuaternions* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:188 */
	void FourQuaternions(FourQuaternions* , const fltx4& , const fltx4& , const fltx4& , const fltx4& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:195 */
	void FourQuaternions(FourQuaternions* , const FourQuaternions& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:203 */
	void operator=(FourQuaternions* , const FourQuaternions& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:212 */
	FourQuaternions Mul(const FourQuaternions* , const FourQuaternions& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:215 */
	FourQuaternions Conjugate(const FourQuaternions* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:220 */
	FourQuaternions ScaleAngle(const FourQuaternions* , const fltx4& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:226 */
	FourQuaternions MulAc(const FourQuaternions* , const fltx4& , const FourQuaternions& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:229 */
	FourQuaternions ScaleMul(const FourQuaternions* , const fltx4& , const FourQuaternions& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:232 */
	FourQuaternions Slerp(FourQuaternions* , const FourQuaternions& , const fltx4& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:234 */
	FourQuaternions SlerpNoAlign(FourQuaternions* , const FourQuaternions& , const fltx4& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:238 */
	void LoadAndSwizzleAligned(FourQuaternions* , const float* , const float* , const float* , const float* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:252 */
	void LoadAndSwizzleUnaligned(FourQuaternions* , const float* , const float* , const float* , const float* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:266 */
	void LoadAndSwizzleAligned(FourQuaternions* , const QuaternionAligned* , const QuaternionAligned* , const QuaternionAligned* , const QuaternionAligned* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:281 */
	void LoadAndSwizzleAligned(FourQuaternions* , const QuaternionAligned* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:296 */
	void SwizzleAndStoreAligned(FourQuaternions* , QuaternionAligned* , QuaternionAligned* , QuaternionAligned* , QuaternionAligned* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:307 */
	void SwizzleAndStoreUnaligned(FourQuaternions* , QuaternionAligned* , QuaternionAligned* , QuaternionAligned* , QuaternionAligned* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:318 */
	void SwizzleAndStoreAligned(FourQuaternions* , QuaternionAligned* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:332 */
	void SwizzleAndStoreAlignedMasked(FourQuaternions* , QuaternionAligned* , const fltx4& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15FourQuaternions17GetPrimaryBindingEv */
	class FourQuaternions * Schema_MarkHelperFn(void); /* linkage=_ZN15FourQuaternions19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15FourQuaternions15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <593228c> ../../_generated_code/mathlib_extended/linuxsteamrt64/release/ssequaternion_h_schema.gen_cpp:97 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15FourQuaternions32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class FourQuaternions *); /* linkage=_ZN15FourQuaternions38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15FourQuaternions20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15FourQuaternions22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class FourQuaternions  *); /* linkage=_ZNK15FourQuaternions21Schema_DynamicBindingEv */
	void FourQuaternions(class FourQuaternions *); /* linkage=_ZN15FourQuaternionsC4Ev */
	void FourQuaternions(class FourQuaternions *, const fltx4  &, const fltx4  &, const fltx4  &, const fltx4  &); /* linkage=_ZN15FourQuaternionsC4ERKDv4_fS2_S2_S2_ */
	void FourQuaternions(class FourQuaternions *, const class FourQuaternions  &); /* linkage=_ZN15FourQuaternionsC4ERKS_ */
	void operator=(class FourQuaternions *, const class FourQuaternions  &); /* linkage=_ZN15FourQuaternionsaSERKS_ */
	class FourQuaternions Mul(const class FourQuaternions  *, const class FourQuaternions  &); /* linkage=_ZNK15FourQuaternions3MulERKS_ */
	class FourQuaternions Conjugate(const class FourQuaternions  *); /* linkage=_ZNK15FourQuaternions9ConjugateEv */
	class FourQuaternions ScaleAngle(const class FourQuaternions  *, const fltx4  &); /* linkage=_ZNK15FourQuaternions10ScaleAngleERKDv4_f */
	class FourQuaternions MulAc(const class FourQuaternions  *, const fltx4  &, const class FourQuaternions  &); /* linkage=_ZNK15FourQuaternions5MulAcERKDv4_fRKS_ */
	class FourQuaternions ScaleMul(const class FourQuaternions  *, const fltx4  &, const class FourQuaternions  &); /* linkage=_ZNK15FourQuaternions8ScaleMulERKDv4_fRKS_ */
	class FourQuaternions Slerp(class FourQuaternions *, const class FourQuaternions  &, const fltx4  &); /* linkage=_ZN15FourQuaternions5SlerpERKS_RKDv4_f */
	class FourQuaternions SlerpNoAlign(class FourQuaternions *, const class FourQuaternions  &, const fltx4  &); /* linkage=_ZN15FourQuaternions12SlerpNoAlignERKS_RKDv4_f */
	void LoadAndSwizzleAligned(class FourQuaternions *, const float  *, const float  *, const float  *, const float  *); /* linkage=_ZN15FourQuaternions21LoadAndSwizzleAlignedEPKfS1_S1_S1_ */
	void LoadAndSwizzleUnaligned(class FourQuaternions *, const float  *, const float  *, const float  *, const float  *); /* linkage=_ZN15FourQuaternions23LoadAndSwizzleUnalignedEPKfS1_S1_S1_ */
	void LoadAndSwizzleAligned(class FourQuaternions *, const class QuaternionAligned  *, const class QuaternionAligned  *, const class QuaternionAligned  *, const class QuaternionAligned  *); /* linkage=_ZN15FourQuaternions21LoadAndSwizzleAlignedEPK17QuaternionAlignedS2_S2_S2_ */
	void LoadAndSwizzleAligned(class FourQuaternions *, const class QuaternionAligned  *); /* linkage=_ZN15FourQuaternions21LoadAndSwizzleAlignedEPK17QuaternionAligned */
	void SwizzleAndStoreAligned(class FourQuaternions *, class QuaternionAligned *, class QuaternionAligned *, class QuaternionAligned *, class QuaternionAligned *); /* linkage=_ZN15FourQuaternions22SwizzleAndStoreAlignedEP17QuaternionAlignedS1_S1_S1_ */
	void SwizzleAndStoreUnaligned(class FourQuaternions *, class QuaternionAligned *, class QuaternionAligned *, class QuaternionAligned *, class QuaternionAligned *); /* linkage=_ZN15FourQuaternions24SwizzleAndStoreUnalignedEP17QuaternionAlignedS1_S1_S1_ */
	void SwizzleAndStoreAligned(class FourQuaternions *, class QuaternionAligned *); /* linkage=_ZN15FourQuaternions22SwizzleAndStoreAlignedEP17QuaternionAligned */
	void SwizzleAndStoreAlignedMasked(class FourQuaternions *, class QuaternionAligned *, const fltx4  &); /* linkage=_ZN15FourQuaternions28SwizzleAndStoreAlignedMaskedEP17QuaternionAlignedRKDv4_f */
} __attribute__((__aligned__(16)));

// <059320D4> ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:182
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <059320CE> ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:182
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <059320B5> ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:182
inline void FourQuaternions::Schema_DynamicBinding()
{
} /* size: 0 */

// <0593209E> ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:184
void FourQuaternions::FourQuaternions()
{
} /* size: 0 */

// <05932085> ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:184
inline void FourQuaternions::FourQuaternions()
{
} /* size: 0 */

// <05932060> ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/ssequaternion.h:203
inline void FourQuaternions::operator=(const FourQuaternions& src)
{
} /* size: 0 */

