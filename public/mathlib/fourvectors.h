
//
// public/mathlib/fourvectors.h
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
//	functions: 36
//	classes: 2
//

// <000A8369> ../public/mathlib/fourvectors.h:25
// member functions: 144
// member variables: 3
// class size: 48
class FourVectors {
	fltx4 x; /* 0 16 */
	fltx4 y; /* 16 16 */
	fltx4 z; /* 32 16 */
	/* ../public/mathlib/fourvectors.h:32 */
	void FourVectors(FourVectors* );
	/* ../public/mathlib/fourvectors.h:36 */
	void FourVectors(FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:43 */
	void Init(FourVectors* );
	/* ../public/mathlib/fourvectors.h:50 */
	void Init(FourVectors* , float, float, float);
	/* ../public/mathlib/fourvectors.h:57 */
	void FourVectors(FourVectors* , float, float, float);
	/* ../public/mathlib/fourvectors.h:62 */
	void Init(FourVectors* , const fltx4& , const fltx4& , const fltx4& );
	/* ../public/mathlib/fourvectors.h:69 */
	void FourVectors(FourVectors* , const fltx4& , const fltx4& , const fltx4& );
	/* ../public/mathlib/fourvectors.h:77 */
	void FourVectors(FourVectors* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/fourvectors.h:83 */
	void FourVectors(FourVectors* , const VectorAligned& , const VectorAligned& , const VectorAligned& , const VectorAligned& );
	/* ../public/mathlib/fourvectors.h:92 */
	void FourVectors(FourVectors* , const float* , const float* , const float* );
	/* ../public/mathlib/fourvectors.h:96 */
	void DuplicateVector(FourVectors* , const Vector& );
	/* ../public/mathlib/fourvectors.h:103 */
	void DuplicateVector(FourVectors* , const VectorAligned& );
	/* ../public/mathlib/fourvectors.h:110 */
	const fltx4& operator[](const FourVectors* , int);
	/* ../public/mathlib/fourvectors.h:115 */
	fltx4& operator[](FourVectors* , int);
	/* ../public/mathlib/fourvectors.h:127 */
	void operator+=(FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:132 */
	FourVectors operator+(const FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:141 */
	void operator-=(FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:146 */
	void operator*=(FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:151 */
	void operator*=(FourVectors* , const fltx4& );
	/* ../public/mathlib/fourvectors.h:158 */
	void operator*=(FourVectors* , float);
	/* ../public/mathlib/fourvectors.h:164 */
	fltx4 operator*(const FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:172 */
	fltx4 operator*(const FourVectors* , const Vector& );
	/* ../public/mathlib/fourvectors.h:180 */
	FourVectors operator*(const FourVectors* , FLTX4);
	/* ../public/mathlib/fourvectors.h:189 */
	void VProduct(FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:195 */
	void MakeReciprocal(FourVectors* );
	/* ../public/mathlib/fourvectors.h:202 */
	void MakeReciprocalSaturate(FourVectors* );
	/* ../public/mathlib/fourvectors.h:210 */
	void MaskedAssign(FourVectors* , FLTX4, const FourVectors& );
	/* ../public/mathlib/fourvectors.h:226 */
	void RotateManyBy(FourVectors* , unsigned int, const matrix3x4_t& );
	/* ../public/mathlib/fourvectors.h:228 */
	void RotateManyBy(FourVectors* , unsigned int, const matrix3x4_t& , FourVectors* );
	/* ../public/mathlib/fourvectors.h:242 */
	void TransformManyBy(FourVectors* , unsigned int, const matrix3x4_t& , FourVectors* );
	/* ../public/mathlib/fourvectors.h:249 */
	void TransformManyBy(FourVectors* , unsigned int, const matrix3x4_t& );
	/* ../public/mathlib/fourvectors.h:251 */
	void CalcClosestPointOnLineSIMD(const FourVectors& , const FourVectors& , const FourVectors& , FourVectors& , fltx4* );
	/* ../public/mathlib/fourvectors.h:252 */
	fltx4 CalcClosestPointToLineTSIMD(const FourVectors& , const FourVectors& , const FourVectors& , FourVectors& );
	/* ../public/mathlib/fourvectors.h:255 */
	const float& X(const FourVectors* , int);
	/* ../public/mathlib/fourvectors.h:261 */
	const float& Y(const FourVectors* , int);
	/* ../public/mathlib/fourvectors.h:266 */
	const float& Z(const FourVectors* , int);
	/* ../public/mathlib/fourvectors.h:271 */
	float& X(FourVectors* , int);
	/* ../public/mathlib/fourvectors.h:276 */
	float& Y(FourVectors* , int);
	/* ../public/mathlib/fourvectors.h:281 */
	float& Z(FourVectors* , int);
	/* ../public/mathlib/fourvectors.h:286 */
	Vector Vec(const FourVectors* , int);
	/* ../public/mathlib/fourvectors.h:292 */
	void SetVec(FourVectors* , const Vector& , int);
	/* ../public/mathlib/fourvectors.h:299 */
	void operator=(FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:307 */
	void LoadAndSwizzle(FourVectors* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/fourvectors.h:321 */
	void LoadAndSwizzle(FourVectors* , const Vector& );
	/* ../public/mathlib/fourvectors.h:331 */
	void Load(FourVectors* , const float& , const float& , const float& , const float& );
	/* ../public/mathlib/fourvectors.h:342 */
	void LoadAndSwizzle(FourVectors* , FLTX4, FLTX4, FLTX4, FLTX4);
	/* ../public/mathlib/fourvectors.h:357 */
	void LoadAndSwizzle(FourVectors* , const VectorAligned& , const VectorAligned& , const VectorAligned& , const VectorAligned& );
	/* ../public/mathlib/fourvectors.h:373 */
	void LoadAndSwizzleAligned(FourVectors* , const float* , const float* , const float* , const float* );
	/* ../public/mathlib/fourvectors.h:388 */
	void LoadAndSwizzleAligned(FourVectors* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/fourvectors.h:398 */
	void TransposeOnto(const FourVectors* , fltx4& , fltx4& , fltx4& , fltx4& , FLTX4);
	/* ../public/mathlib/fourvectors.h:409 */
	void StoreUnalignedVector3SIMD(const FourVectors* , Vector* , Vector* , Vector* , Vector* );
	/* ../public/mathlib/fourvectors.h:412 */
	void StoreAlignedVectorSIMD(const FourVectors* , VectorAligned* , VectorAligned* , VectorAligned* , VectorAligned* );
	/* ../public/mathlib/fourvectors.h:416 */
	void StoreUnalignedContigVector3SIMD(FourVectors* , Vector* );
	/* ../public/mathlib/fourvectors.h:428 */
	void StoreAlignedContigVector3SIMD(const FourVectors* , Vector* );
	/* ../public/mathlib/fourvectors.h:436 */
	void StoreAlignedContigVectorASIMD(const FourVectors* , VectorAligned* );
	/* ../public/mathlib/fourvectors.h:446 */
	fltx4 LengthSqr(const FourVectors* );
	/* ../public/mathlib/fourvectors.h:453 */
	fltx4 length2(const FourVectors* );
	/* ../public/mathlib/fourvectors.h:459 */
	fltx4 length(const FourVectors* );
	/* ../public/mathlib/fourvectors.h:465 */
	fltx4 Length(const FourVectors* );
	/* ../public/mathlib/fourvectors.h:471 */
	void VectorNormalizeFast(FourVectors* );
	/* ../public/mathlib/fourvectors.h:479 */
	void VectorNormalizeFastSaturate(FourVectors* );
	/* ../public/mathlib/fourvectors.h:487 */
	void VectorNormalize(FourVectors* );
	/* ../public/mathlib/fourvectors.h:494 */
	fltx4 DistToSqr(const FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:502 */
	fltx4 DistTo(const FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:511 */
	fltx4 TValueOfClosestPointOnLine(const FourVectors* , const FourVectors& , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:522 */
	fltx4 DistSqrToLineSegment(const FourVectors* , const FourVectors& , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:540 */
	FourVectors Normalized(const FourVectors* );
	/* ../public/mathlib/fourvectors.h:550 */
	FourVectors NormalizedSafeX(const FourVectors* );
	/* ../public/mathlib/fourvectors.h:561 */
	FourVectors NormalizedSafeY(const FourVectors* );
	/* ../public/mathlib/fourvectors.h:573 */
	FourVectors NormalizedSafeZ(const FourVectors* );
	void FourVectors(class FourVectors *); /* linkage=_ZN11FourVectorsC4Ev */
	void FourVectors(class FourVectors *, const class FourVectors  &); /* linkage=_ZN11FourVectorsC4ERKS_ */
	void Init(class FourVectors *); /* linkage=_ZN11FourVectors4InitEv */
	void Init(class FourVectors *, float, float, float); /* linkage=_ZN11FourVectors4InitEfff */
	void FourVectors(class FourVectors *, float, float, float); /* linkage=_ZN11FourVectorsC4Efff */
	void Init(class FourVectors *, const fltx4  &, const fltx4  &, const fltx4  &); /* linkage=_ZN11FourVectors4InitERKDv4_fS2_S2_ */
	void FourVectors(class FourVectors *, const fltx4  &, const fltx4  &, const fltx4  &); /* linkage=_ZN11FourVectorsC4ERKDv4_fS2_S2_ */
	void FourVectors(class FourVectors *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN11FourVectorsC4ERK6VectorS2_S2_S2_ */
	void FourVectors(class FourVectors *, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &); /* linkage=_ZN11FourVectorsC4ERK13VectorAlignedS2_S2_S2_ */
	void FourVectors(class FourVectors *, const float  *, const float  *, const float  *); /* linkage=_ZN11FourVectorsC4EPKfS1_S1_ */
	void DuplicateVector(class FourVectors *, const class Vector  &); /* linkage=_ZN11FourVectors15DuplicateVectorERK6Vector */
	void DuplicateVector(class FourVectors *, const class VectorAligned  &); /* linkage=_ZN11FourVectors15DuplicateVectorERK13VectorAligned */
	const fltx4  & operator[](const class FourVectors  *, int); /* linkage=_ZNK11FourVectorsixEi */
	fltx4 & operator[](class FourVectors *, int); /* linkage=_ZN11FourVectorsixEi */
	void operator+=(class FourVectors *, const class FourVectors  &); /* linkage=_ZN11FourVectorspLERKS_ */
	class FourVectors operator+(const class FourVectors  *, const class FourVectors  &); /* linkage=_ZNK11FourVectorsplERKS_ */
	void operator-=(class FourVectors *, const class FourVectors  &); /* linkage=_ZN11FourVectorsmIERKS_ */
	void operator*=(class FourVectors *, const class FourVectors  &); /* linkage=_ZN11FourVectorsmLERKS_ */
	void operator*=(class FourVectors *, const fltx4  &); /* linkage=_ZN11FourVectorsmLERKDv4_f */
	void operator*=(class FourVectors *, float); /* linkage=_ZN11FourVectorsmLEf */
	fltx4 operator*(const class FourVectors  *, const class FourVectors  &); /* linkage=_ZNK11FourVectorsmlERKS_ */
	fltx4 operator*(const class FourVectors  *, const class Vector  &); /* linkage=_ZNK11FourVectorsmlERK6Vector */
	class FourVectors operator*(const class FourVectors  *, FLTX4); /* linkage=_ZNK11FourVectorsmlERKDv4_f */
	void VProduct(class FourVectors *, const class FourVectors  &); /* linkage=_ZN11FourVectors8VProductERKS_ */
	void MakeReciprocal(class FourVectors *); /* linkage=_ZN11FourVectors14MakeReciprocalEv */
	void MakeReciprocalSaturate(class FourVectors *); /* linkage=_ZN11FourVectors22MakeReciprocalSaturateEv */
	void MaskedAssign(class FourVectors *, FLTX4, const class FourVectors  &); /* linkage=_ZN11FourVectors12MaskedAssignERKDv4_fRKS_ */
	void RotateManyBy(class FourVectors *, unsigned int, const class matrix3x4_t  &); /* linkage=_ZN11FourVectors12RotateManyByEPS_jRK11matrix3x4_t */
	void RotateManyBy(class FourVectors *, unsigned int, const class matrix3x4_t  &, class FourVectors *); /* linkage=_ZN11FourVectors12RotateManyByEPS_jRK11matrix3x4_tS0_ */
	void TransformManyBy(class FourVectors *, unsigned int, const class matrix3x4_t  &, class FourVectors *); /* linkage=_ZN11FourVectors15TransformManyByEPS_jRK11matrix3x4_tS0_ */
	void TransformManyBy(class FourVectors *, unsigned int, const class matrix3x4_t  &); /* linkage=_ZN11FourVectors15TransformManyByEPS_jRK11matrix3x4_t */
	void CalcClosestPointOnLineSIMD(const class FourVectors  &, const class FourVectors  &, const class FourVectors  &, class FourVectors &, fltx4 *); /* linkage=_ZN11FourVectors26CalcClosestPointOnLineSIMDERKS_S1_S1_RS_PDv4_f */
	/* <5a44390> mathlib/sseconst.cpp:214 */
	fltx4 CalcClosestPointToLineTSIMD(const class FourVectors  &, const class FourVectors  &, const class FourVectors  &, class FourVectors &); /* linkage=_ZN11FourVectors27CalcClosestPointToLineTSIMDERKS_S1_S1_RS_ */
	const float  & X(const class FourVectors  *, int); /* linkage=_ZNK11FourVectors1XEi */
	const float  & Y(const class FourVectors  *, int); /* linkage=_ZNK11FourVectors1YEi */
	const float  & Z(const class FourVectors  *, int); /* linkage=_ZNK11FourVectors1ZEi */
	float & X(class FourVectors *, int); /* linkage=_ZN11FourVectors1XEi */
	float & Y(class FourVectors *, int); /* linkage=_ZN11FourVectors1YEi */
	float & Z(class FourVectors *, int); /* linkage=_ZN11FourVectors1ZEi */
	class Vector Vec(const class FourVectors  *, int); /* linkage=_ZNK11FourVectors3VecEi */
	void SetVec(class FourVectors *, const class Vector  &, int); /* linkage=_ZN11FourVectors6SetVecERK6Vectori */
	void operator=(class FourVectors *, const class FourVectors  &); /* linkage=_ZN11FourVectorsaSERKS_ */
	void LoadAndSwizzle(class FourVectors *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN11FourVectors14LoadAndSwizzleERK6VectorS2_S2_S2_ */
	void LoadAndSwizzle(class FourVectors *, const class Vector  &); /* linkage=_ZN11FourVectors14LoadAndSwizzleERK6Vector */
	void Load(class FourVectors *, const float  &, const float  &, const float  &, const float  &); /* linkage=_ZN11FourVectors4LoadERKfS1_S1_S1_ */
	void LoadAndSwizzle(class FourVectors *, FLTX4, FLTX4, FLTX4, FLTX4); /* linkage=_ZN11FourVectors14LoadAndSwizzleERKDv4_fS2_S2_S2_ */
	void LoadAndSwizzle(class FourVectors *, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &); /* linkage=_ZN11FourVectors14LoadAndSwizzleERK13VectorAlignedS2_S2_S2_ */
	void LoadAndSwizzleAligned(class FourVectors *, const float  *, const float  *, const float  *, const float  *); /* linkage=_ZN11FourVectors21LoadAndSwizzleAlignedEPKfS1_S1_S1_ */
	void LoadAndSwizzleAligned(class FourVectors *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN11FourVectors21LoadAndSwizzleAlignedERK6VectorS2_S2_S2_ */
	void TransposeOnto(const class FourVectors  *, fltx4 &, fltx4 &, fltx4 &, fltx4 &, FLTX4); /* linkage=_ZNK11FourVectors13TransposeOntoERDv4_fS1_S1_S1_RKS0_ */
	void StoreUnalignedVector3SIMD(const class FourVectors  *, class Vector *, class Vector *, class Vector *, class Vector *); /* linkage=_ZNK11FourVectors25StoreUnalignedVector3SIMDEP6VectorS1_S1_S1_ */
	void StoreAlignedVectorSIMD(const class FourVectors  *, class VectorAligned *, class VectorAligned *, class VectorAligned *, class VectorAligned *); /* linkage=_ZNK11FourVectors22StoreAlignedVectorSIMDEP13VectorAlignedS1_S1_S1_ */
	void StoreUnalignedContigVector3SIMD(class FourVectors *, class Vector *); /* linkage=_ZN11FourVectors31StoreUnalignedContigVector3SIMDEP6Vector */
	void StoreAlignedContigVector3SIMD(const class FourVectors  *, class Vector *); /* linkage=_ZNK11FourVectors29StoreAlignedContigVector3SIMDEP6Vector */
	void StoreAlignedContigVectorASIMD(const class FourVectors  *, class VectorAligned *); /* linkage=_ZNK11FourVectors29StoreAlignedContigVectorASIMDEP13VectorAligned */
	fltx4 LengthSqr(const class FourVectors  *); /* linkage=_ZNK11FourVectors9LengthSqrEv */
	fltx4 length2(const class FourVectors  *); /* linkage=_ZNK11FourVectors7length2Ev */
	fltx4 length(const class FourVectors  *); /* linkage=_ZNK11FourVectors6lengthEv */
	fltx4 Length(const class FourVectors  *); /* linkage=_ZNK11FourVectors6LengthEv */
	void VectorNormalizeFast(class FourVectors *); /* linkage=_ZN11FourVectors19VectorNormalizeFastEv */
	void VectorNormalizeFastSaturate(class FourVectors *); /* linkage=_ZN11FourVectors27VectorNormalizeFastSaturateEv */
	void VectorNormalize(class FourVectors *); /* linkage=_ZN11FourVectors15VectorNormalizeEv */
	fltx4 DistToSqr(const class FourVectors  *, const class FourVectors  &); /* linkage=_ZNK11FourVectors9DistToSqrERKS_ */
	fltx4 DistTo(const class FourVectors  *, const class FourVectors  &); /* linkage=_ZNK11FourVectors6DistToERKS_ */
	fltx4 TValueOfClosestPointOnLine(const class FourVectors  *, const class FourVectors  &, const class FourVectors  &); /* linkage=_ZNK11FourVectors26TValueOfClosestPointOnLineERKS_S1_ */
	fltx4 DistSqrToLineSegment(const class FourVectors  *, const class FourVectors  &, const class FourVectors  &); /* linkage=_ZNK11FourVectors20DistSqrToLineSegmentERKS_S1_ */
	class FourVectors Normalized(const class FourVectors  *); /* linkage=_ZNK11FourVectors10NormalizedEv */
	class FourVectors NormalizedSafeX(const class FourVectors  *); /* linkage=_ZNK11FourVectors15NormalizedSafeXEv */
	class FourVectors NormalizedSafeY(const class FourVectors  *); /* linkage=_ZNK11FourVectors15NormalizedSafeYEv */
	class FourVectors NormalizedSafeZ(const class FourVectors  *); /* linkage=_ZNK11FourVectors15NormalizedSafeZEv */
	void ApplyBinaryUpdateFunction<SubSIMD<> >(class FourVectors *, const class FourVectors  &); /* linkage=_ZN11FourVectors25ApplyBinaryUpdateFunctionIXadL_Z7SubSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEvRKS_ */
	void ApplyBinaryUpdateFunction<AddSIMD<> >(class FourVectors *, const class FourVectors  &); /* linkage=_ZN11FourVectors25ApplyBinaryUpdateFunctionIXadL_Z7AddSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEvRKS_ */
	void ApplyBinaryUpdateFunction<MulSIMD<> >(class FourVectors *, const class FourVectors  &); /* linkage=_ZN11FourVectors25ApplyBinaryUpdateFunctionIXadL_Z7MulSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEvRKS_ */
	void TransformBy<matrix3x4a_t>(class FourVectors *, const class matrix3x4a_t  &); /* linkage=_ZN11FourVectors11TransformByI12matrix3x4a_tEEvRKT_ */
};

// <007016F6> ../public/mathlib/fourvectors.h:25
// member functions: 146
// member variables: 3
// class size: 48
class FourVectors {
	fltx4 x; /* 0 16 */
	fltx4 y; /* 16 16 */
	fltx4 z; /* 32 16 */
	/* ../public/mathlib/fourvectors.h:32 */
	void FourVectors(FourVectors* );
	/* ../public/mathlib/fourvectors.h:36 */
	void FourVectors(FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:43 */
	void Init(FourVectors* );
	/* ../public/mathlib/fourvectors.h:50 */
	void Init(FourVectors* , float, float, float);
	/* ../public/mathlib/fourvectors.h:57 */
	void FourVectors(FourVectors* , float, float, float);
	/* ../public/mathlib/fourvectors.h:62 */
	void Init(FourVectors* , const fltx4& , const fltx4& , const fltx4& );
	/* ../public/mathlib/fourvectors.h:69 */
	void FourVectors(FourVectors* , const fltx4& , const fltx4& , const fltx4& );
	/* ../public/mathlib/fourvectors.h:77 */
	void FourVectors(FourVectors* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/fourvectors.h:83 */
	void FourVectors(FourVectors* , const VectorAligned& , const VectorAligned& , const VectorAligned& , const VectorAligned& );
	/* ../public/mathlib/fourvectors.h:92 */
	void FourVectors(FourVectors* , const float* , const float* , const float* );
	/* ../public/mathlib/fourvectors.h:96 */
	void DuplicateVector(FourVectors* , const Vector& );
	/* ../public/mathlib/fourvectors.h:103 */
	void DuplicateVector(FourVectors* , const VectorAligned& );
	/* ../public/mathlib/fourvectors.h:110 */
	const fltx4& operator[](const FourVectors* , int);
	/* ../public/mathlib/fourvectors.h:115 */
	fltx4& operator[](FourVectors* , int);
	/* ../public/mathlib/fourvectors.h:127 */
	void operator+=(FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:132 */
	FourVectors operator+(const FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:141 */
	void operator-=(FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:146 */
	void operator*=(FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:151 */
	void operator*=(FourVectors* , const fltx4& );
	/* ../public/mathlib/fourvectors.h:158 */
	void operator*=(FourVectors* , float);
	/* ../public/mathlib/fourvectors.h:164 */
	fltx4 operator*(const FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:172 */
	fltx4 operator*(const FourVectors* , const Vector& );
	/* ../public/mathlib/fourvectors.h:180 */
	FourVectors operator*(const FourVectors* , FLTX4);
	/* ../public/mathlib/fourvectors.h:189 */
	void VProduct(FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:195 */
	void MakeReciprocal(FourVectors* );
	/* ../public/mathlib/fourvectors.h:202 */
	void MakeReciprocalSaturate(FourVectors* );
	/* ../public/mathlib/fourvectors.h:210 */
	void MaskedAssign(FourVectors* , FLTX4, const FourVectors& );
	/* ../public/mathlib/fourvectors.h:226 */
	void RotateManyBy(FourVectors* , unsigned int, const matrix3x4_t& );
	/* ../public/mathlib/fourvectors.h:228 */
	void RotateManyBy(FourVectors* , unsigned int, const matrix3x4_t& , FourVectors* );
	/* ../public/mathlib/fourvectors.h:242 */
	void TransformManyBy(FourVectors* , unsigned int, const matrix3x4_t& , FourVectors* );
	/* ../public/mathlib/fourvectors.h:249 */
	void TransformManyBy(FourVectors* , unsigned int, const matrix3x4_t& );
	/* ../public/mathlib/fourvectors.h:251 */
	void CalcClosestPointOnLineSIMD(const FourVectors& , const FourVectors& , const FourVectors& , FourVectors& , fltx4* );
	/* ../public/mathlib/fourvectors.h:252 */
	fltx4 CalcClosestPointToLineTSIMD(const FourVectors& , const FourVectors& , const FourVectors& , FourVectors& );
	/* ../public/mathlib/fourvectors.h:255 */
	const float& X(const FourVectors* , int);
	/* ../public/mathlib/fourvectors.h:261 */
	const float& Y(const FourVectors* , int);
	/* ../public/mathlib/fourvectors.h:266 */
	const float& Z(const FourVectors* , int);
	/* ../public/mathlib/fourvectors.h:271 */
	float& X(FourVectors* , int);
	/* ../public/mathlib/fourvectors.h:276 */
	float& Y(FourVectors* , int);
	/* ../public/mathlib/fourvectors.h:281 */
	float& Z(FourVectors* , int);
	/* ../public/mathlib/fourvectors.h:286 */
	Vector Vec(const FourVectors* , int);
	/* ../public/mathlib/fourvectors.h:292 */
	void SetVec(FourVectors* , const Vector& , int);
	/* ../public/mathlib/fourvectors.h:299 */
	void operator=(FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:307 */
	void LoadAndSwizzle(FourVectors* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/fourvectors.h:321 */
	void LoadAndSwizzle(FourVectors* , const Vector& );
	/* ../public/mathlib/fourvectors.h:331 */
	void Load(FourVectors* , const float& , const float& , const float& , const float& );
	/* ../public/mathlib/fourvectors.h:342 */
	void LoadAndSwizzle(FourVectors* , FLTX4, FLTX4, FLTX4, FLTX4);
	/* ../public/mathlib/fourvectors.h:357 */
	void LoadAndSwizzle(FourVectors* , const VectorAligned& , const VectorAligned& , const VectorAligned& , const VectorAligned& );
	/* ../public/mathlib/fourvectors.h:373 */
	void LoadAndSwizzleAligned(FourVectors* , const float* , const float* , const float* , const float* );
	/* ../public/mathlib/fourvectors.h:388 */
	void LoadAndSwizzleAligned(FourVectors* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/fourvectors.h:398 */
	void TransposeOnto(const FourVectors* , fltx4& , fltx4& , fltx4& , fltx4& , FLTX4);
	/* ../public/mathlib/fourvectors.h:409 */
	void StoreUnalignedVector3SIMD(const FourVectors* , Vector* , Vector* , Vector* , Vector* );
	/* ../public/mathlib/fourvectors.h:412 */
	void StoreAlignedVectorSIMD(const FourVectors* , VectorAligned* , VectorAligned* , VectorAligned* , VectorAligned* );
	/* ../public/mathlib/fourvectors.h:416 */
	void StoreUnalignedContigVector3SIMD(FourVectors* , Vector* );
	/* ../public/mathlib/fourvectors.h:428 */
	void StoreAlignedContigVector3SIMD(const FourVectors* , Vector* );
	/* ../public/mathlib/fourvectors.h:436 */
	void StoreAlignedContigVectorASIMD(const FourVectors* , VectorAligned* );
	/* ../public/mathlib/fourvectors.h:446 */
	fltx4 LengthSqr(const FourVectors* );
	/* ../public/mathlib/fourvectors.h:453 */
	fltx4 length2(const FourVectors* );
	/* ../public/mathlib/fourvectors.h:459 */
	fltx4 length(const FourVectors* );
	/* ../public/mathlib/fourvectors.h:465 */
	fltx4 Length(const FourVectors* );
	/* ../public/mathlib/fourvectors.h:471 */
	void VectorNormalizeFast(FourVectors* );
	/* ../public/mathlib/fourvectors.h:479 */
	void VectorNormalizeFastSaturate(FourVectors* );
	/* ../public/mathlib/fourvectors.h:487 */
	void VectorNormalize(FourVectors* );
	/* ../public/mathlib/fourvectors.h:494 */
	fltx4 DistToSqr(const FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:502 */
	fltx4 DistTo(const FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:511 */
	fltx4 TValueOfClosestPointOnLine(const FourVectors* , const FourVectors& , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:522 */
	fltx4 DistSqrToLineSegment(const FourVectors* , const FourVectors& , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:540 */
	FourVectors Normalized(const FourVectors* );
	/* ../public/mathlib/fourvectors.h:550 */
	FourVectors NormalizedSafeX(const FourVectors* );
	/* ../public/mathlib/fourvectors.h:561 */
	FourVectors NormalizedSafeY(const FourVectors* );
	/* ../public/mathlib/fourvectors.h:573 */
	FourVectors NormalizedSafeZ(const FourVectors* );
	/* ../public/mathlib/fourvectors.h:120 */
	void ApplyBinaryUpdateFunction<SubSIMD<> >(FourVectors* , const FourVectors& );
	/* ../public/mathlib/fourvectors.h:120 */
	void ApplyBinaryUpdateFunction<AddSIMD<> >(FourVectors* , const FourVectors& );
	void FourVectors(class FourVectors *); /* linkage=_ZN11FourVectorsC4Ev */
	void FourVectors(class FourVectors *, const class FourVectors  &); /* linkage=_ZN11FourVectorsC4ERKS_ */
	void Init(class FourVectors *); /* linkage=_ZN11FourVectors4InitEv */
	void Init(class FourVectors *, float, float, float); /* linkage=_ZN11FourVectors4InitEfff */
	void FourVectors(class FourVectors *, float, float, float); /* linkage=_ZN11FourVectorsC4Efff */
	void Init(class FourVectors *, const fltx4  &, const fltx4  &, const fltx4  &); /* linkage=_ZN11FourVectors4InitERKDv4_fS2_S2_ */
	void FourVectors(class FourVectors *, const fltx4  &, const fltx4  &, const fltx4  &); /* linkage=_ZN11FourVectorsC4ERKDv4_fS2_S2_ */
	void FourVectors(class FourVectors *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN11FourVectorsC4ERK6VectorS2_S2_S2_ */
	void FourVectors(class FourVectors *, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &); /* linkage=_ZN11FourVectorsC4ERK13VectorAlignedS2_S2_S2_ */
	void FourVectors(class FourVectors *, const float  *, const float  *, const float  *); /* linkage=_ZN11FourVectorsC4EPKfS1_S1_ */
	void DuplicateVector(class FourVectors *, const class Vector  &); /* linkage=_ZN11FourVectors15DuplicateVectorERK6Vector */
	void DuplicateVector(class FourVectors *, const class VectorAligned  &); /* linkage=_ZN11FourVectors15DuplicateVectorERK13VectorAligned */
	const fltx4  & operator[](const class FourVectors  *, int); /* linkage=_ZNK11FourVectorsixEi */
	fltx4 & operator[](class FourVectors *, int); /* linkage=_ZN11FourVectorsixEi */
	void operator+=(class FourVectors *, const class FourVectors  &); /* linkage=_ZN11FourVectorspLERKS_ */
	class FourVectors operator+(const class FourVectors  *, const class FourVectors  &); /* linkage=_ZNK11FourVectorsplERKS_ */
	void operator-=(class FourVectors *, const class FourVectors  &); /* linkage=_ZN11FourVectorsmIERKS_ */
	void operator*=(class FourVectors *, const class FourVectors  &); /* linkage=_ZN11FourVectorsmLERKS_ */
	void operator*=(class FourVectors *, const fltx4  &); /* linkage=_ZN11FourVectorsmLERKDv4_f */
	void operator*=(class FourVectors *, float); /* linkage=_ZN11FourVectorsmLEf */
	fltx4 operator*(const class FourVectors  *, const class FourVectors  &); /* linkage=_ZNK11FourVectorsmlERKS_ */
	fltx4 operator*(const class FourVectors  *, const class Vector  &); /* linkage=_ZNK11FourVectorsmlERK6Vector */
	class FourVectors operator*(const class FourVectors  *, FLTX4); /* linkage=_ZNK11FourVectorsmlERKDv4_f */
	void VProduct(class FourVectors *, const class FourVectors  &); /* linkage=_ZN11FourVectors8VProductERKS_ */
	void MakeReciprocal(class FourVectors *); /* linkage=_ZN11FourVectors14MakeReciprocalEv */
	void MakeReciprocalSaturate(class FourVectors *); /* linkage=_ZN11FourVectors22MakeReciprocalSaturateEv */
	void MaskedAssign(class FourVectors *, FLTX4, const class FourVectors  &); /* linkage=_ZN11FourVectors12MaskedAssignERKDv4_fRKS_ */
	void RotateManyBy(class FourVectors *, unsigned int, const class matrix3x4_t  &); /* linkage=_ZN11FourVectors12RotateManyByEPS_jRK11matrix3x4_t */
	void RotateManyBy(class FourVectors *, unsigned int, const class matrix3x4_t  &, class FourVectors *); /* linkage=_ZN11FourVectors12RotateManyByEPS_jRK11matrix3x4_tS0_ */
	void TransformManyBy(class FourVectors *, unsigned int, const class matrix3x4_t  &, class FourVectors *); /* linkage=_ZN11FourVectors15TransformManyByEPS_jRK11matrix3x4_tS0_ */
	void TransformManyBy(class FourVectors *, unsigned int, const class matrix3x4_t  &); /* linkage=_ZN11FourVectors15TransformManyByEPS_jRK11matrix3x4_t */
	void CalcClosestPointOnLineSIMD(const class FourVectors  &, const class FourVectors  &, const class FourVectors  &, class FourVectors &, fltx4 *); /* linkage=_ZN11FourVectors26CalcClosestPointOnLineSIMDERKS_S1_S1_RS_PDv4_f */
	/* <5a44390> mathlib/sseconst.cpp:214 */
	fltx4 CalcClosestPointToLineTSIMD(const class FourVectors  &, const class FourVectors  &, const class FourVectors  &, class FourVectors &); /* linkage=_ZN11FourVectors27CalcClosestPointToLineTSIMDERKS_S1_S1_RS_ */
	const float  & X(const class FourVectors  *, int); /* linkage=_ZNK11FourVectors1XEi */
	const float  & Y(const class FourVectors  *, int); /* linkage=_ZNK11FourVectors1YEi */
	const float  & Z(const class FourVectors  *, int); /* linkage=_ZNK11FourVectors1ZEi */
	float & X(class FourVectors *, int); /* linkage=_ZN11FourVectors1XEi */
	float & Y(class FourVectors *, int); /* linkage=_ZN11FourVectors1YEi */
	float & Z(class FourVectors *, int); /* linkage=_ZN11FourVectors1ZEi */
	class Vector Vec(const class FourVectors  *, int); /* linkage=_ZNK11FourVectors3VecEi */
	void SetVec(class FourVectors *, const class Vector  &, int); /* linkage=_ZN11FourVectors6SetVecERK6Vectori */
	void operator=(class FourVectors *, const class FourVectors  &); /* linkage=_ZN11FourVectorsaSERKS_ */
	void LoadAndSwizzle(class FourVectors *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN11FourVectors14LoadAndSwizzleERK6VectorS2_S2_S2_ */
	void LoadAndSwizzle(class FourVectors *, const class Vector  &); /* linkage=_ZN11FourVectors14LoadAndSwizzleERK6Vector */
	void Load(class FourVectors *, const float  &, const float  &, const float  &, const float  &); /* linkage=_ZN11FourVectors4LoadERKfS1_S1_S1_ */
	void LoadAndSwizzle(class FourVectors *, FLTX4, FLTX4, FLTX4, FLTX4); /* linkage=_ZN11FourVectors14LoadAndSwizzleERKDv4_fS2_S2_S2_ */
	void LoadAndSwizzle(class FourVectors *, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &); /* linkage=_ZN11FourVectors14LoadAndSwizzleERK13VectorAlignedS2_S2_S2_ */
	void LoadAndSwizzleAligned(class FourVectors *, const float  *, const float  *, const float  *, const float  *); /* linkage=_ZN11FourVectors21LoadAndSwizzleAlignedEPKfS1_S1_S1_ */
	void LoadAndSwizzleAligned(class FourVectors *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN11FourVectors21LoadAndSwizzleAlignedERK6VectorS2_S2_S2_ */
	void TransposeOnto(const class FourVectors  *, fltx4 &, fltx4 &, fltx4 &, fltx4 &, FLTX4); /* linkage=_ZNK11FourVectors13TransposeOntoERDv4_fS1_S1_S1_RKS0_ */
	void StoreUnalignedVector3SIMD(const class FourVectors  *, class Vector *, class Vector *, class Vector *, class Vector *); /* linkage=_ZNK11FourVectors25StoreUnalignedVector3SIMDEP6VectorS1_S1_S1_ */
	void StoreAlignedVectorSIMD(const class FourVectors  *, class VectorAligned *, class VectorAligned *, class VectorAligned *, class VectorAligned *); /* linkage=_ZNK11FourVectors22StoreAlignedVectorSIMDEP13VectorAlignedS1_S1_S1_ */
	void StoreUnalignedContigVector3SIMD(class FourVectors *, class Vector *); /* linkage=_ZN11FourVectors31StoreUnalignedContigVector3SIMDEP6Vector */
	void StoreAlignedContigVector3SIMD(const class FourVectors  *, class Vector *); /* linkage=_ZNK11FourVectors29StoreAlignedContigVector3SIMDEP6Vector */
	void StoreAlignedContigVectorASIMD(const class FourVectors  *, class VectorAligned *); /* linkage=_ZNK11FourVectors29StoreAlignedContigVectorASIMDEP13VectorAligned */
	fltx4 LengthSqr(const class FourVectors  *); /* linkage=_ZNK11FourVectors9LengthSqrEv */
	fltx4 length2(const class FourVectors  *); /* linkage=_ZNK11FourVectors7length2Ev */
	fltx4 length(const class FourVectors  *); /* linkage=_ZNK11FourVectors6lengthEv */
	fltx4 Length(const class FourVectors  *); /* linkage=_ZNK11FourVectors6LengthEv */
	void VectorNormalizeFast(class FourVectors *); /* linkage=_ZN11FourVectors19VectorNormalizeFastEv */
	void VectorNormalizeFastSaturate(class FourVectors *); /* linkage=_ZN11FourVectors27VectorNormalizeFastSaturateEv */
	void VectorNormalize(class FourVectors *); /* linkage=_ZN11FourVectors15VectorNormalizeEv */
	fltx4 DistToSqr(const class FourVectors  *, const class FourVectors  &); /* linkage=_ZNK11FourVectors9DistToSqrERKS_ */
	fltx4 DistTo(const class FourVectors  *, const class FourVectors  &); /* linkage=_ZNK11FourVectors6DistToERKS_ */
	fltx4 TValueOfClosestPointOnLine(const class FourVectors  *, const class FourVectors  &, const class FourVectors  &); /* linkage=_ZNK11FourVectors26TValueOfClosestPointOnLineERKS_S1_ */
	fltx4 DistSqrToLineSegment(const class FourVectors  *, const class FourVectors  &, const class FourVectors  &); /* linkage=_ZNK11FourVectors20DistSqrToLineSegmentERKS_S1_ */
	class FourVectors Normalized(const class FourVectors  *); /* linkage=_ZNK11FourVectors10NormalizedEv */
	class FourVectors NormalizedSafeX(const class FourVectors  *); /* linkage=_ZNK11FourVectors15NormalizedSafeXEv */
	class FourVectors NormalizedSafeY(const class FourVectors  *); /* linkage=_ZNK11FourVectors15NormalizedSafeYEv */
	class FourVectors NormalizedSafeZ(const class FourVectors  *); /* linkage=_ZNK11FourVectors15NormalizedSafeZEv */
	void ApplyBinaryUpdateFunction<SubSIMD<> >(class FourVectors *, const class FourVectors  &); /* linkage=_ZN11FourVectors25ApplyBinaryUpdateFunctionIXadL_Z7SubSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEvRKS_ */
	void ApplyBinaryUpdateFunction<AddSIMD<> >(class FourVectors *, const class FourVectors  &); /* linkage=_ZN11FourVectors25ApplyBinaryUpdateFunctionIXadL_Z7AddSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEvRKS_ */
	void ApplyBinaryUpdateFunction<MulSIMD<> >(class FourVectors *, const class FourVectors  &); /* linkage=_ZN11FourVectors25ApplyBinaryUpdateFunctionIXadL_Z7MulSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEvRKS_ */
	void TransformBy<matrix3x4a_t>(class FourVectors *, const class matrix3x4a_t  &); /* linkage=_ZN11FourVectors11TransformByI12matrix3x4a_tEEvRKT_ */
};

// <06F38A12> ../public/mathlib/fourvectors.h:32
void FourVectors::FourVectors()
{
} /* size: 0 */

// <06F389F9> ../public/mathlib/fourvectors.h:32
inline void FourVectors::FourVectors()
{
} /* size: 0 */

// <06352853> ../public/mathlib/fourvectors.h:36
void FourVectors::FourVectors(const FourVectors& src)
{
} /* size: 0 */

// <0635282E> ../public/mathlib/fourvectors.h:36
inline void FourVectors::FourVectors(const FourVectors& src)
{
} /* size: 0 */

// <0584C452> ../../public/mathlib/fourvectors.h:43
inline void FourVectors::Init()
{
} /* size: 0 */

// <0584C415> ../../public/mathlib/fourvectors.h:50
inline void FourVectors::Init(float flX, float flY, float flZ)
{
} /* size: 0 */

// <00DE40A7> ../public/mathlib/fourvectors.h:62
inline void FourVectors::Init(const fltx4& fl4X, const fltx4& fl4Y, const fltx4& fl4Z)
{
} /* size: 0 */

// <00DE4081> ../public/mathlib/fourvectors.h:69
void FourVectors::FourVectors(const fltx4& fl4X, const fltx4& fl4Y, const fltx4& fl4Z)
{
} /* size: 0 */

// <00DE4044> ../public/mathlib/fourvectors.h:69
inline void FourVectors::FourVectors(const fltx4& fl4X, const fltx4& fl4Y, const fltx4& fl4Z)
{
} /* size: 0 */

// <06352803> ../public/mathlib/fourvectors.h:83
void FourVectors::FourVectors(const VectorAligned& a, const VectorAligned& b, const VectorAligned& c, const VectorAligned& d)
{
} /* size: 0 */

// <063527C2> ../public/mathlib/fourvectors.h:83
inline void FourVectors::FourVectors(const VectorAligned& a, const VectorAligned& b, const VectorAligned& c, const VectorAligned& d)
{
} /* size: 0 */

// <0635279F> ../public/mathlib/fourvectors.h:96
inline void FourVectors::DuplicateVector(const Vector& v)
{
} /* size: 0 */

// <0635277A> ../public/mathlib/fourvectors.h:110
inline void FourVectors::operator[](int idx)
{
} /* size: 0 */

// <06316E79> ../public/mathlib/fourvectors.h:120
inline void ApplyBinaryUpdateFunction<AddSIMD<> FourVectors::>(const FourVectors& v4Arg)
{
} /* size: 0 */

// <06316E4A> ../public/mathlib/fourvectors.h:120
inline void ApplyBinaryUpdateFunction<SubSIMD<> FourVectors::>(const FourVectors& v4Arg)
{
} /* size: 0 */

// <044DA8FB> ../public/mathlib/fourvectors.h:120
inline void ApplyBinaryUpdateFunction<MulSIMD<> FourVectors::>(const FourVectors& v4Arg)
{
} /* size: 0 */

// <02F77247> ../public/mathlib/fourvectors.h:127
inline void FourVectors::operator+=(const FourVectors& b)
{
} /* size: 0 */

// <0635270F> ../public/mathlib/fourvectors.h:141
inline void FourVectors::operator-=(const FourVectors& b)
{
} /* size: 0 */

// <044FFD1E> ../public/mathlib/fourvectors.h:146
inline void FourVectors::operator*=(const FourVectors& b)
{
} /* size: 0 */

// <063526EA> ../public/mathlib/fourvectors.h:151
inline void FourVectors::operator*=(const fltx4& scale)
{
} /* size: 0 */

// <063526A2> ../public/mathlib/fourvectors.h:202
inline void FourVectors::MakeReciprocalSaturate()
{
} /* size: 0 */

// <06352671> ../public/mathlib/fourvectors.h:210
inline void FourVectors::MaskedAssign(FLTX4 fl4Writemask, const FourVectors& v4NewValues)
{
} /* size: 0 */

// <0635264C> ../public/mathlib/fourvectors.h:255
inline void FourVectors::X(int idx)
{
} /* size: 0 */

// <06352626> ../public/mathlib/fourvectors.h:261
inline void FourVectors::Y(int idx)
{
} /* size: 0 */

// <06352600> ../public/mathlib/fourvectors.h:266
inline void FourVectors::Z(int idx)
{
} /* size: 0 */

// <06352568> ../public/mathlib/fourvectors.h:286
inline void FourVectors::Vec(int idx)
{
} /* size: 0 */

// <044FFC26> ../public/mathlib/fourvectors.h:292
inline void FourVectors::SetVec(const Vector& v, int nIdx)
{
} /* size: 0 */

// <06352542> ../public/mathlib/fourvectors.h:299
inline void FourVectors::operator=(const FourVectors& src)
{
} /* size: 0 */

// <044FFBB0> ../public/mathlib/fourvectors.h:307
// variable: 1
inline void FourVectors::LoadAndSwizzle(const Vector& a, const Vector& b, const Vector& c, const Vector& d)
{
	fltx4 w; // 312
} /* size: 0, variables: 1 */

// <00DE3FA4> ../public/mathlib/fourvectors.h:342
// variable: 1
inline void FourVectors::LoadAndSwizzle(FLTX4 a, FLTX4 b, FLTX4 c, FLTX4 d)
{
	fltx4 w; // 347
} /* size: 0, variables: 1 */

// <063524F2> ../public/mathlib/fourvectors.h:357
// variable: 1
inline void FourVectors::LoadAndSwizzle(const VectorAligned& a, const VectorAligned& b, const VectorAligned& c, const VectorAligned& d)
{
	fltx4 w; // 362
} /* size: 0, variables: 1 */

// <063524CE> ../public/mathlib/fourvectors.h:453
// variable: 1
inline void FourVectors::length2()
{
	const FourVectors& a; // 455
} /* size: 0, variables: 1 */

// <063524B5> ../public/mathlib/fourvectors.h:459
inline void FourVectors::length()
{
} /* size: 0 */

// <044FFB32> ../public/mathlib/fourvectors.h:494
// variables: 3
inline void FourVectors::DistToSqr(const FourVectors& pnt)
{
	fltx4 fl4dX; // 496
	fltx4 fl4dY; // 497
	fltx4 fl4dZ; // 498
} /* size: 0, variables: 3 */

// <00DE3F53> ../public/mathlib/fourvectors.h:603
inline FourVectors ReplicateX4(const Vector& v)
{
} /* size: 0 */

// <063146A4> ../public/mathlib/fourvectors.h:851
// variables: 15
inline void FourVectors::TransformBy<matrix3x4a_t>(const matrix3x4a_t& matrix)
{
	fltx4 matSplat00; // 857
	fltx4 matSplat01; // 857
	fltx4 matSplat02; // 857
	fltx4 matSplat10; // 858
	fltx4 matSplat11; // 858
	fltx4 matSplat12; // 858
	fltx4 matSplat20; // 859
	fltx4 matSplat21; // 859
	fltx4 matSplat22; // 859
	fltx4 matCol0; // 861
	fltx4 matCol1; // 861
	fltx4 matCol2; // 861
	fltx4 outX; // 889
	fltx4 outY; // 889
	fltx4 outZ; // 889
} /* size: 0, variables: 15 */

