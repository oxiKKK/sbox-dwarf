
//
// public/mathlib/vmatrix.h
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
//	functions: 49
//	classes: 2
//

// <00032FDC> ../public/mathlib/vmatrix.h:31
// member functions: 162
// member variable: 1
// class size: 64
class VMatrix {
	/* ../public/mathlib/vmatrix.h:36 */
	void VMatrix(VMatrix* );
	/* ../public/mathlib/vmatrix.h:40 */
	void VMatrix(VMatrix* , vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t);
	/* ../public/mathlib/vmatrix.h:48 */
	void VMatrix(VMatrix* , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/vmatrix.h:51 */
	void VMatrix(VMatrix* , const matrix3x4_t& );
	/* ../public/mathlib/vmatrix.h:55 */
	void Init(VMatrix* , vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t);
	/* ../public/mathlib/vmatrix.h:61 */
	void InitFLU(VMatrix* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/vmatrix.h:64 */
	void Init(VMatrix* , const matrix3x4_t& );
	/* ../public/mathlib/vmatrix.h:67 */
	float* operator[](VMatrix* , int);
	/* ../public/mathlib/vmatrix.h:72 */
	const float* operator[](const VMatrix* , int);
	/* ../public/mathlib/vmatrix.h:78 */
	float* Base(VMatrix* );
	/* ../public/mathlib/vmatrix.h:83 */
	const float* Base(const VMatrix* );
	/* ../public/mathlib/vmatrix.h:88 */
	void SetLeft(VMatrix* , const Vector& );
	/* ../public/mathlib/vmatrix.h:89 */
	void SetUp(VMatrix* , const Vector& );
	/* ../public/mathlib/vmatrix.h:90 */
	void SetForward(VMatrix* , const Vector& );
	/* ../public/mathlib/vmatrix.h:92 */
	void GetBasisVectors(const VMatrix* , Vector& , Vector& , Vector& );
	/* ../public/mathlib/vmatrix.h:93 */
	void SetBasisVectors(VMatrix* , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/vmatrix.h:96 */
	Vector& GetTranslation(const VMatrix* , Vector& );
	/* ../public/mathlib/vmatrix.h:97 */
	void SetTranslation(VMatrix* , const Vector& );
	/* ../public/mathlib/vmatrix.h:99 */
	void PreTranslate(VMatrix* , const Vector& );
	/* ../public/mathlib/vmatrix.h:100 */
	void PostTranslate(VMatrix* , const Vector& );
	/* ../public/mathlib/vmatrix.h:103 */
	matrix3x4_t& As3x4(VMatrix* );
	/* ../public/mathlib/vmatrix.h:104 */
	const matrix3x4_t& As3x4(const VMatrix* );
	/* ../public/mathlib/vmatrix.h:105 */
	void CopyFrom3x4(VMatrix* , const matrix3x4_t& );
	/* ../public/mathlib/vmatrix.h:106 */
	void Set3x4(const VMatrix* , matrix3x4_t& );
	/* ../public/mathlib/vmatrix.h:109 */
	bool operator==(const VMatrix* , const VMatrix& );
	/* ../public/mathlib/vmatrix.h:110 */
	bool operator!=(const VMatrix* , const VMatrix& );
	/* ../public/mathlib/vmatrix.h:113 */
	Vector GetLeft(const VMatrix* );
	/* ../public/mathlib/vmatrix.h:114 */
	Vector GetUp(const VMatrix* );
	/* ../public/mathlib/vmatrix.h:115 */
	Vector GetForward(const VMatrix* );
	/* ../public/mathlib/vmatrix.h:116 */
	Vector GetTranslation(const VMatrix* );
	/* ../public/mathlib/vmatrix.h:117 */
	Vector GetOrigin(const VMatrix* );
	/* ../public/mathlib/vmatrix.h:124 */
	void V3Mul(const VMatrix* , const Vector& , Vector& );
	/* ../public/mathlib/vmatrix.h:127 */
	void V4Mul(const VMatrix* , const Vector4D& , Vector4D& );
	/* ../public/mathlib/vmatrix.h:130 */
	Vector ApplyRotation(const VMatrix* , const Vector& );
	/* ../public/mathlib/vmatrix.h:133 */
	Vector operator*(const VMatrix* , const Vector& );
	/* ../public/mathlib/vmatrix.h:136 */
	Vector VMul3x3(const VMatrix* , const Vector& );
	/* ../public/mathlib/vmatrix.h:139 */
	Vector VMul3x3Transpose(const VMatrix* , const Vector& );
	/* ../public/mathlib/vmatrix.h:142 */
	Vector VMul4x3(const VMatrix* , const Vector& );
	/* ../public/mathlib/vmatrix.h:145 */
	Vector VMul4x3Transpose(const VMatrix* , const Vector& );
	/* ../public/mathlib/vmatrix.h:151 */
	void TransformPlane(const VMatrix* , const VPlane& , VPlane& );
	/* ../public/mathlib/vmatrix.h:154 */
	VPlane operator*(const VMatrix* , const VPlane& );
	/* ../public/mathlib/vmatrix.h:160 */
	VMatrix& operator=(VMatrix* , const VMatrix& );
	/* ../public/mathlib/vmatrix.h:163 */
	void MatrixMul(const VMatrix* , const VMatrix& , VMatrix& );
	/* ../public/mathlib/vmatrix.h:166 */
	const VMatrix& operator+=(VMatrix* , const VMatrix& );
	/* ../public/mathlib/vmatrix.h:169 */
	VMatrix operator*(const VMatrix* , const VMatrix& );
	/* ../public/mathlib/vmatrix.h:172 */
	VMatrix operator+(const VMatrix* , const VMatrix& );
	/* ../public/mathlib/vmatrix.h:173 */
	VMatrix operator-(const VMatrix* , const VMatrix& );
	/* ../public/mathlib/vmatrix.h:178 */
	VMatrix operator-(const VMatrix* );
	/* ../public/mathlib/vmatrix.h:182 */
	void Identity(VMatrix* );
	/* ../public/mathlib/vmatrix.h:184 */
	bool IsIdentity(const VMatrix* );
	/* ../public/mathlib/vmatrix.h:186 */
	const VMatrix& GetIdentityMatrix(void);
	/* ../public/mathlib/vmatrix.h:198 */
	void SetupMatrixOrgAngles(VMatrix* , const Vector& , const QAngle& );
	/* ../public/mathlib/vmatrix.h:203 */
	VMatrix operator~(const VMatrix* );
	/* ../public/mathlib/vmatrix.h:205 */
	bool InverseGeneral(const VMatrix* , VMatrix& );
	/* ../public/mathlib/vmatrix.h:208 */
	void InverseTR(const VMatrix* , VMatrix& );
	/* ../public/mathlib/vmatrix.h:213 */
	bool IsRotationMatrix(const VMatrix* );
	/* ../public/mathlib/vmatrix.h:217 */
	float Element(const VMatrix* , int, int);
	/* ../public/mathlib/vmatrix.h:222 */
	void SetElement(VMatrix* , int, int, float);
	/* ../public/mathlib/vmatrix.h:227 */
	int Width(const VMatrix* );
	/* ../public/mathlib/vmatrix.h:228 */
	int Height(const VMatrix* );
	/* ../public/mathlib/vmatrix.h:229 */
	void SetDimensions(VMatrix* , int, int);
	/* ../public/mathlib/vmatrix.h:232 */
	VMatrix InverseTR(const VMatrix* );
	/* ../public/mathlib/vmatrix.h:235 */
	Vector GetScale(const VMatrix* );
	/* ../public/mathlib/vmatrix.h:238 */
	VMatrix Scale(VMatrix* , const Vector& );
	/* ../public/mathlib/vmatrix.h:241 */
	void ScaleUpper3x3Matrix(VMatrix* , float);
	/* ../public/mathlib/vmatrix.h:253 */
	VMatrix NormalizeBasisVectors(const VMatrix* );
	/* ../public/mathlib/vmatrix.h:256 */
	VMatrix Transpose(const VMatrix* );
	/* ../public/mathlib/vmatrix.h:259 */
	VMatrix Transpose3x3(const VMatrix* );
	vec_t m[4][4]; /* 0 64 */
	void VMatrix(class VMatrix *); /* linkage=_ZN7VMatrixC4Ev */
	void VMatrix(class VMatrix *, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t); /* linkage=_ZN7VMatrixC4Effffffffffffffff */
	void VMatrix(class VMatrix *, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &); /* linkage=_ZN7VMatrixC4ERK6VectorS2_S2_ */
	void VMatrix(class VMatrix *, const class matrix3x4_t  &); /* linkage=_ZN7VMatrixC4ERK11matrix3x4_t */
	void Init(class VMatrix *, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t); /* linkage=_ZN7VMatrix4InitEffffffffffffffff */
	void InitFLU(class VMatrix *, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &); /* linkage=_ZN7VMatrix7InitFLUERK6VectorS2_S2_S2_ */
	void Init(class VMatrix *, const class matrix3x4_t  &); /* linkage=_ZN7VMatrix4InitERK11matrix3x4_t */
	float * operator[](class VMatrix *, int); /* linkage=_ZN7VMatrixixEi */
	const float  * operator[](const class VMatrix  *, int); /* linkage=_ZNK7VMatrixixEi */
	float * Base(class VMatrix *); /* linkage=_ZN7VMatrix4BaseEv */
	const float  * Base(const class VMatrix  *); /* linkage=_ZNK7VMatrix4BaseEv */
	void SetLeft(class VMatrix *, const class Vector__1  &); /* linkage=_ZN7VMatrix7SetLeftERK6Vector */
	void SetUp(class VMatrix *, const class Vector__1  &); /* linkage=_ZN7VMatrix5SetUpERK6Vector */
	void SetForward(class VMatrix *, const class Vector__1  &); /* linkage=_ZN7VMatrix10SetForwardERK6Vector */
	void GetBasisVectors(const class VMatrix  *, class Vector__1 &, class Vector__1 &, class Vector__1 &); /* linkage=_ZNK7VMatrix15GetBasisVectorsER6VectorS1_S1_ */
	void SetBasisVectors(class VMatrix *, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &); /* linkage=_ZN7VMatrix15SetBasisVectorsERK6VectorS2_S2_ */
	class Vector__1 & GetTranslation(const class VMatrix  *, class Vector__1 &); /* linkage=_ZNK7VMatrix14GetTranslationER6Vector */
	void SetTranslation(class VMatrix *, const class Vector__1  &); /* linkage=_ZN7VMatrix14SetTranslationERK6Vector */
	void PreTranslate(class VMatrix *, const class Vector__1  &); /* linkage=_ZN7VMatrix12PreTranslateERK6Vector */
	void PostTranslate(class VMatrix *, const class Vector__1  &); /* linkage=_ZN7VMatrix13PostTranslateERK6Vector */
	class matrix3x4_t & As3x4(class VMatrix *); /* linkage=_ZN7VMatrix5As3x4Ev */
	const class matrix3x4_t  & As3x4(const class VMatrix  *); /* linkage=_ZNK7VMatrix5As3x4Ev */
	void CopyFrom3x4(class VMatrix *, const class matrix3x4_t  &); /* linkage=_ZN7VMatrix11CopyFrom3x4ERK11matrix3x4_t */
	void Set3x4(const class VMatrix  *, class matrix3x4_t &); /* linkage=_ZNK7VMatrix6Set3x4ER11matrix3x4_t */
	bool operator==(const class VMatrix  *, const class VMatrix  &); /* linkage=_ZNK7VMatrixeqERKS_ */
	bool operator!=(const class VMatrix  *, const class VMatrix  &); /* linkage=_ZNK7VMatrixneERKS_ */
	class Vector__1 GetLeft(const class VMatrix  *); /* linkage=_ZNK7VMatrix7GetLeftEv */
	class Vector__1 GetUp(const class VMatrix  *); /* linkage=_ZNK7VMatrix5GetUpEv */
	class Vector__1 GetForward(const class VMatrix  *); /* linkage=_ZNK7VMatrix10GetForwardEv */
	class Vector__1 GetTranslation(const class VMatrix  *); /* linkage=_ZNK7VMatrix14GetTranslationEv */
	class Vector__1 GetOrigin(const class VMatrix  *); /* linkage=_ZNK7VMatrix9GetOriginEv */
	void V3Mul(const class VMatrix  *, const class Vector__1  &, class Vector__1 &); /* linkage=_ZNK7VMatrix5V3MulERK6VectorRS0_ */
	void V4Mul(const class VMatrix  *, const class Vector4D  &, class Vector4D &); /* linkage=_ZNK7VMatrix5V4MulERK8Vector4DRS0_ */
	class Vector__1 ApplyRotation(const class VMatrix  *, const class Vector__1  &); /* linkage=_ZNK7VMatrix13ApplyRotationERK6Vector */
	class Vector__1 operator*(const class VMatrix  *, const class Vector__1  &); /* linkage=_ZNK7VMatrixmlERK6Vector */
	class Vector__1 VMul3x3(const class VMatrix  *, const class Vector__1  &); /* linkage=_ZNK7VMatrix7VMul3x3ERK6Vector */
	class Vector__1 VMul3x3Transpose(const class VMatrix  *, const class Vector__1  &); /* linkage=_ZNK7VMatrix16VMul3x3TransposeERK6Vector */
	class Vector__1 VMul4x3(const class VMatrix  *, const class Vector__1  &); /* linkage=_ZNK7VMatrix7VMul4x3ERK6Vector */
	class Vector__1 VMul4x3Transpose(const class VMatrix  *, const class Vector__1  &); /* linkage=_ZNK7VMatrix16VMul4x3TransposeERK6Vector */
	void TransformPlane(const class VMatrix  *, const class VPlane  &, class VPlane &); /* linkage=_ZNK7VMatrix14TransformPlaneERK6VPlaneRS0_ */
	class VPlane operator*(const class VMatrix  *, const class VPlane  &); /* linkage=_ZNK7VMatrixmlERK6VPlane */
	class VMatrix & operator=(class VMatrix *, const class VMatrix  &); /* linkage=_ZN7VMatrixaSERKS_ */
	void MatrixMul(const class VMatrix  *, const class VMatrix  &, class VMatrix &); /* linkage=_ZNK7VMatrix9MatrixMulERKS_RS_ */
	const class VMatrix  & operator+=(class VMatrix *, const class VMatrix  &); /* linkage=_ZN7VMatrixpLERKS_ */
	class VMatrix operator*(const class VMatrix  *, const class VMatrix  &); /* linkage=_ZNK7VMatrixmlERKS_ */
	class VMatrix operator+(const class VMatrix  *, const class VMatrix  &); /* linkage=_ZNK7VMatrixplERKS_ */
	class VMatrix operator-(const class VMatrix  *, const class VMatrix  &); /* linkage=_ZNK7VMatrixmiERKS_ */
	class VMatrix operator-(const class VMatrix  *); /* linkage=_ZNK7VMatrixngEv */
	void Identity(class VMatrix *); /* linkage=_ZN7VMatrix8IdentityEv */
	bool IsIdentity(const class VMatrix  *); /* linkage=_ZNK7VMatrix10IsIdentityEv */
	const class VMatrix  & GetIdentityMatrix(void); /* linkage=_ZN7VMatrix17GetIdentityMatrixEv */
	void SetupMatrixOrgAngles(class VMatrix *, const class Vector__1  &, const class QAngle  &); /* linkage=_ZN7VMatrix20SetupMatrixOrgAnglesERK6VectorRK6QAngle */
	class VMatrix operator~(const class VMatrix  *); /* linkage=_ZNK7VMatrixcoEv */
	/* <5a7ed38> mathlib/vmatrix.cpp:377 */
	bool InverseGeneral(const class VMatrix  *, class VMatrix &); /* linkage=_ZNK7VMatrix14InverseGeneralERS_ */
	void InverseTR(const class VMatrix  *, class VMatrix &); /* linkage=_ZNK7VMatrix9InverseTRERS_ */
	bool IsRotationMatrix(const class VMatrix  *); /* linkage=_ZNK7VMatrix16IsRotationMatrixEv */
	float Element(const class VMatrix  *, int, int); /* linkage=_ZNK7VMatrix7ElementEii */
	void SetElement(class VMatrix *, int, int, float); /* linkage=_ZN7VMatrix10SetElementEiif */
	int Width(const class VMatrix  *); /* linkage=_ZNK7VMatrix5WidthEv */
	int Height(const class VMatrix  *); /* linkage=_ZNK7VMatrix6HeightEv */
	void SetDimensions(class VMatrix *, int, int); /* linkage=_ZN7VMatrix13SetDimensionsEii */
	class VMatrix InverseTR(const class VMatrix  *); /* linkage=_ZNK7VMatrix9InverseTREv */
	class Vector__1 GetScale(const class VMatrix  *); /* linkage=_ZNK7VMatrix8GetScaleEv */
	class VMatrix Scale(class VMatrix *, const class Vector__1  &); /* linkage=_ZN7VMatrix5ScaleERK6Vector */
	void ScaleUpper3x3Matrix(class VMatrix *, float); /* linkage=_ZN7VMatrix19ScaleUpper3x3MatrixEf */
	class VMatrix NormalizeBasisVectors(const class VMatrix  *); /* linkage=_ZNK7VMatrix21NormalizeBasisVectorsEv */
	class VMatrix Transpose(const class VMatrix  *); /* linkage=_ZNK7VMatrix9TransposeEv */
	class VMatrix Transpose3x3(const class VMatrix  *); /* linkage=_ZNK7VMatrix12Transpose3x3Ev */
	void VMatrix(class VMatrix *, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN7VMatrixC4ERK6VectorS2_S2_ */
	void InitFLU(class VMatrix *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN7VMatrix7InitFLUERK6VectorS2_S2_S2_ */
	void SetLeft(class VMatrix *, const class Vector  &); /* linkage=_ZN7VMatrix7SetLeftERK6Vector */
	void SetUp(class VMatrix *, const class Vector  &); /* linkage=_ZN7VMatrix5SetUpERK6Vector */
	void SetForward(class VMatrix *, const class Vector  &); /* linkage=_ZN7VMatrix10SetForwardERK6Vector */
	void GetBasisVectors(const class VMatrix  *, class Vector &, class Vector &, class Vector &); /* linkage=_ZNK7VMatrix15GetBasisVectorsER6VectorS1_S1_ */
	void SetBasisVectors(class VMatrix *, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN7VMatrix15SetBasisVectorsERK6VectorS2_S2_ */
	class Vector & GetTranslation(const class VMatrix  *, class Vector &); /* linkage=_ZNK7VMatrix14GetTranslationER6Vector */
	void SetTranslation(class VMatrix *, const class Vector  &); /* linkage=_ZN7VMatrix14SetTranslationERK6Vector */
	void PreTranslate(class VMatrix *, const class Vector  &); /* linkage=_ZN7VMatrix12PreTranslateERK6Vector */
	void PostTranslate(class VMatrix *, const class Vector  &); /* linkage=_ZN7VMatrix13PostTranslateERK6Vector */
	class Vector GetLeft(const class VMatrix  *); /* linkage=_ZNK7VMatrix7GetLeftEv */
	class Vector GetUp(const class VMatrix  *); /* linkage=_ZNK7VMatrix5GetUpEv */
	class Vector GetForward(const class VMatrix  *); /* linkage=_ZNK7VMatrix10GetForwardEv */
	class Vector GetTranslation(const class VMatrix  *); /* linkage=_ZNK7VMatrix14GetTranslationEv */
	class Vector GetOrigin(const class VMatrix  *); /* linkage=_ZNK7VMatrix9GetOriginEv */
	void V3Mul(const class VMatrix  *, const class Vector  &, class Vector &); /* linkage=_ZNK7VMatrix5V3MulERK6VectorRS0_ */
	class Vector ApplyRotation(const class VMatrix  *, const class Vector  &); /* linkage=_ZNK7VMatrix13ApplyRotationERK6Vector */
	class Vector operator*(const class VMatrix  *, const class Vector  &); /* linkage=_ZNK7VMatrixmlERK6Vector */
	class Vector VMul3x3(const class VMatrix  *, const class Vector  &); /* linkage=_ZNK7VMatrix7VMul3x3ERK6Vector */
	class Vector VMul3x3Transpose(const class VMatrix  *, const class Vector  &); /* linkage=_ZNK7VMatrix16VMul3x3TransposeERK6Vector */
	class Vector VMul4x3(const class VMatrix  *, const class Vector  &); /* linkage=_ZNK7VMatrix7VMul4x3ERK6Vector */
	class Vector VMul4x3Transpose(const class VMatrix  *, const class Vector  &); /* linkage=_ZNK7VMatrix16VMul4x3TransposeERK6Vector */
	void SetupMatrixOrgAngles(class VMatrix *, const class Vector  &, const class QAngle  &); /* linkage=_ZN7VMatrix20SetupMatrixOrgAnglesERK6VectorRK6QAngle */
	class Vector GetScale(const class VMatrix  *); /* linkage=_ZNK7VMatrix8GetScaleEv */
	class VMatrix Scale(class VMatrix *, const class Vector  &); /* linkage=_ZN7VMatrix5ScaleERK6Vector */
};

// <057EF709> ../../public/mathlib/vmatrix.h:31
// member functions: 162
// member variable: 1
// class size: 64
class VMatrix {
	/* ../../public/mathlib/vmatrix.h:36 */
	void VMatrix(VMatrix* );
	/* ../../public/mathlib/vmatrix.h:40 */
	void VMatrix(VMatrix* , vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vmatrix.h:48 */
	void VMatrix(VMatrix* , const Vector& , const Vector& , const Vector& );
	/* ../../public/mathlib/vmatrix.h:51 */
	void VMatrix(VMatrix* , const matrix3x4_t& );
	/* ../../public/mathlib/vmatrix.h:55 */
	void Init(VMatrix* , vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vmatrix.h:61 */
	void InitFLU(VMatrix* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../../public/mathlib/vmatrix.h:64 */
	void Init(VMatrix* , const matrix3x4_t& );
	/* ../../public/mathlib/vmatrix.h:67 */
	float* operator[](VMatrix* , int);
	/* ../../public/mathlib/vmatrix.h:72 */
	const float* operator[](const VMatrix* , int);
	/* ../../public/mathlib/vmatrix.h:78 */
	float* Base(VMatrix* );
	/* ../../public/mathlib/vmatrix.h:83 */
	const float* Base(const VMatrix* );
	/* ../../public/mathlib/vmatrix.h:88 */
	void SetLeft(VMatrix* , const Vector& );
	/* ../../public/mathlib/vmatrix.h:89 */
	void SetUp(VMatrix* , const Vector& );
	/* ../../public/mathlib/vmatrix.h:90 */
	void SetForward(VMatrix* , const Vector& );
	/* ../../public/mathlib/vmatrix.h:92 */
	void GetBasisVectors(const VMatrix* , Vector& , Vector& , Vector& );
	/* ../../public/mathlib/vmatrix.h:93 */
	void SetBasisVectors(VMatrix* , const Vector& , const Vector& , const Vector& );
	/* ../../public/mathlib/vmatrix.h:96 */
	Vector& GetTranslation(const VMatrix* , Vector& );
	/* ../../public/mathlib/vmatrix.h:97 */
	void SetTranslation(VMatrix* , const Vector& );
	/* ../../public/mathlib/vmatrix.h:99 */
	void PreTranslate(VMatrix* , const Vector& );
	/* ../../public/mathlib/vmatrix.h:100 */
	void PostTranslate(VMatrix* , const Vector& );
	/* ../../public/mathlib/vmatrix.h:103 */
	matrix3x4_t& As3x4(VMatrix* );
	/* ../../public/mathlib/vmatrix.h:104 */
	const matrix3x4_t& As3x4(const VMatrix* );
	/* ../../public/mathlib/vmatrix.h:105 */
	void CopyFrom3x4(VMatrix* , const matrix3x4_t& );
	/* ../../public/mathlib/vmatrix.h:106 */
	void Set3x4(const VMatrix* , matrix3x4_t& );
	/* ../../public/mathlib/vmatrix.h:109 */
	bool operator==(const VMatrix* , const VMatrix& );
	/* ../../public/mathlib/vmatrix.h:110 */
	bool operator!=(const VMatrix* , const VMatrix& );
	/* ../../public/mathlib/vmatrix.h:113 */
	Vector GetLeft(const VMatrix* );
	/* ../../public/mathlib/vmatrix.h:114 */
	Vector GetUp(const VMatrix* );
	/* ../../public/mathlib/vmatrix.h:115 */
	Vector GetForward(const VMatrix* );
	/* ../../public/mathlib/vmatrix.h:116 */
	Vector GetTranslation(const VMatrix* );
	/* ../../public/mathlib/vmatrix.h:117 */
	Vector GetOrigin(const VMatrix* );
	/* ../../public/mathlib/vmatrix.h:124 */
	void V3Mul(const VMatrix* , const Vector& , Vector& );
	/* ../../public/mathlib/vmatrix.h:127 */
	void V4Mul(const VMatrix* , const Vector4D& , Vector4D& );
	/* ../../public/mathlib/vmatrix.h:130 */
	Vector ApplyRotation(const VMatrix* , const Vector& );
	/* ../../public/mathlib/vmatrix.h:133 */
	Vector operator*(const VMatrix* , const Vector& );
	/* ../../public/mathlib/vmatrix.h:136 */
	Vector VMul3x3(const VMatrix* , const Vector& );
	/* ../../public/mathlib/vmatrix.h:139 */
	Vector VMul3x3Transpose(const VMatrix* , const Vector& );
	/* ../../public/mathlib/vmatrix.h:142 */
	Vector VMul4x3(const VMatrix* , const Vector& );
	/* ../../public/mathlib/vmatrix.h:145 */
	Vector VMul4x3Transpose(const VMatrix* , const Vector& );
	/* ../../public/mathlib/vmatrix.h:151 */
	void TransformPlane(const VMatrix* , const VPlane& , VPlane& );
	/* ../../public/mathlib/vmatrix.h:154 */
	VPlane operator*(const VMatrix* , const VPlane& );
	/* ../../public/mathlib/vmatrix.h:160 */
	VMatrix& operator=(VMatrix* , const VMatrix& );
	/* ../../public/mathlib/vmatrix.h:163 */
	void MatrixMul(const VMatrix* , const VMatrix& , VMatrix& );
	/* ../../public/mathlib/vmatrix.h:166 */
	const VMatrix& operator+=(VMatrix* , const VMatrix& );
	/* ../../public/mathlib/vmatrix.h:169 */
	VMatrix operator*(const VMatrix* , const VMatrix& );
	/* ../../public/mathlib/vmatrix.h:172 */
	VMatrix operator+(const VMatrix* , const VMatrix& );
	/* ../../public/mathlib/vmatrix.h:173 */
	VMatrix operator-(const VMatrix* , const VMatrix& );
	/* ../../public/mathlib/vmatrix.h:178 */
	VMatrix operator-(const VMatrix* );
	/* ../../public/mathlib/vmatrix.h:182 */
	void Identity(VMatrix* );
	/* ../../public/mathlib/vmatrix.h:184 */
	bool IsIdentity(const VMatrix* );
	/* ../../public/mathlib/vmatrix.h:186 */
	const VMatrix& GetIdentityMatrix(void);
	/* ../../public/mathlib/vmatrix.h:198 */
	void SetupMatrixOrgAngles(VMatrix* , const Vector& , const QAngle& );
	/* ../../public/mathlib/vmatrix.h:203 */
	VMatrix operator~(const VMatrix* );
	/* ../../public/mathlib/vmatrix.h:205 */
	bool InverseGeneral(const VMatrix* , VMatrix& );
	/* ../../public/mathlib/vmatrix.h:208 */
	void InverseTR(const VMatrix* , VMatrix& );
	/* ../../public/mathlib/vmatrix.h:213 */
	bool IsRotationMatrix(const VMatrix* );
	/* ../../public/mathlib/vmatrix.h:217 */
	float Element(const VMatrix* , int, int);
	/* ../../public/mathlib/vmatrix.h:222 */
	void SetElement(VMatrix* , int, int, float);
	/* ../../public/mathlib/vmatrix.h:227 */
	int Width(const VMatrix* );
	/* ../../public/mathlib/vmatrix.h:228 */
	int Height(const VMatrix* );
	/* ../../public/mathlib/vmatrix.h:229 */
	void SetDimensions(VMatrix* , int, int);
	/* ../../public/mathlib/vmatrix.h:232 */
	VMatrix InverseTR(const VMatrix* );
	/* ../../public/mathlib/vmatrix.h:235 */
	Vector GetScale(const VMatrix* );
	/* ../../public/mathlib/vmatrix.h:238 */
	VMatrix Scale(VMatrix* , const Vector& );
	/* ../../public/mathlib/vmatrix.h:241 */
	void ScaleUpper3x3Matrix(VMatrix* , float);
	/* ../../public/mathlib/vmatrix.h:253 */
	VMatrix NormalizeBasisVectors(const VMatrix* );
	/* ../../public/mathlib/vmatrix.h:256 */
	VMatrix Transpose(const VMatrix* );
	/* ../../public/mathlib/vmatrix.h:259 */
	VMatrix Transpose3x3(const VMatrix* );
	vec_t m[4][4]; /* 0 64 */
	void VMatrix(class VMatrix *); /* linkage=_ZN7VMatrixC4Ev */
	void VMatrix(class VMatrix *, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t); /* linkage=_ZN7VMatrixC4Effffffffffffffff */
	void VMatrix(class VMatrix *, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &); /* linkage=_ZN7VMatrixC4ERK6VectorS2_S2_ */
	void VMatrix(class VMatrix *, const class matrix3x4_t  &); /* linkage=_ZN7VMatrixC4ERK11matrix3x4_t */
	void Init(class VMatrix *, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t); /* linkage=_ZN7VMatrix4InitEffffffffffffffff */
	void InitFLU(class VMatrix *, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &); /* linkage=_ZN7VMatrix7InitFLUERK6VectorS2_S2_S2_ */
	void Init(class VMatrix *, const class matrix3x4_t  &); /* linkage=_ZN7VMatrix4InitERK11matrix3x4_t */
	float * operator[](class VMatrix *, int); /* linkage=_ZN7VMatrixixEi */
	const float  * operator[](const class VMatrix  *, int); /* linkage=_ZNK7VMatrixixEi */
	float * Base(class VMatrix *); /* linkage=_ZN7VMatrix4BaseEv */
	const float  * Base(const class VMatrix  *); /* linkage=_ZNK7VMatrix4BaseEv */
	void SetLeft(class VMatrix *, const class Vector__1  &); /* linkage=_ZN7VMatrix7SetLeftERK6Vector */
	void SetUp(class VMatrix *, const class Vector__1  &); /* linkage=_ZN7VMatrix5SetUpERK6Vector */
	void SetForward(class VMatrix *, const class Vector__1  &); /* linkage=_ZN7VMatrix10SetForwardERK6Vector */
	void GetBasisVectors(const class VMatrix  *, class Vector__1 &, class Vector__1 &, class Vector__1 &); /* linkage=_ZNK7VMatrix15GetBasisVectorsER6VectorS1_S1_ */
	void SetBasisVectors(class VMatrix *, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &); /* linkage=_ZN7VMatrix15SetBasisVectorsERK6VectorS2_S2_ */
	class Vector__1 & GetTranslation(const class VMatrix  *, class Vector__1 &); /* linkage=_ZNK7VMatrix14GetTranslationER6Vector */
	void SetTranslation(class VMatrix *, const class Vector__1  &); /* linkage=_ZN7VMatrix14SetTranslationERK6Vector */
	void PreTranslate(class VMatrix *, const class Vector__1  &); /* linkage=_ZN7VMatrix12PreTranslateERK6Vector */
	void PostTranslate(class VMatrix *, const class Vector__1  &); /* linkage=_ZN7VMatrix13PostTranslateERK6Vector */
	class matrix3x4_t & As3x4(class VMatrix *); /* linkage=_ZN7VMatrix5As3x4Ev */
	const class matrix3x4_t  & As3x4(const class VMatrix  *); /* linkage=_ZNK7VMatrix5As3x4Ev */
	void CopyFrom3x4(class VMatrix *, const class matrix3x4_t  &); /* linkage=_ZN7VMatrix11CopyFrom3x4ERK11matrix3x4_t */
	void Set3x4(const class VMatrix  *, class matrix3x4_t &); /* linkage=_ZNK7VMatrix6Set3x4ER11matrix3x4_t */
	bool operator==(const class VMatrix  *, const class VMatrix  &); /* linkage=_ZNK7VMatrixeqERKS_ */
	bool operator!=(const class VMatrix  *, const class VMatrix  &); /* linkage=_ZNK7VMatrixneERKS_ */
	class Vector__1 GetLeft(const class VMatrix  *); /* linkage=_ZNK7VMatrix7GetLeftEv */
	class Vector__1 GetUp(const class VMatrix  *); /* linkage=_ZNK7VMatrix5GetUpEv */
	class Vector__1 GetForward(const class VMatrix  *); /* linkage=_ZNK7VMatrix10GetForwardEv */
	class Vector__1 GetTranslation(const class VMatrix  *); /* linkage=_ZNK7VMatrix14GetTranslationEv */
	class Vector__1 GetOrigin(const class VMatrix  *); /* linkage=_ZNK7VMatrix9GetOriginEv */
	void V3Mul(const class VMatrix  *, const class Vector__1  &, class Vector__1 &); /* linkage=_ZNK7VMatrix5V3MulERK6VectorRS0_ */
	void V4Mul(const class VMatrix  *, const class Vector4D  &, class Vector4D &); /* linkage=_ZNK7VMatrix5V4MulERK8Vector4DRS0_ */
	class Vector__1 ApplyRotation(const class VMatrix  *, const class Vector__1  &); /* linkage=_ZNK7VMatrix13ApplyRotationERK6Vector */
	class Vector__1 operator*(const class VMatrix  *, const class Vector__1  &); /* linkage=_ZNK7VMatrixmlERK6Vector */
	class Vector__1 VMul3x3(const class VMatrix  *, const class Vector__1  &); /* linkage=_ZNK7VMatrix7VMul3x3ERK6Vector */
	class Vector__1 VMul3x3Transpose(const class VMatrix  *, const class Vector__1  &); /* linkage=_ZNK7VMatrix16VMul3x3TransposeERK6Vector */
	class Vector__1 VMul4x3(const class VMatrix  *, const class Vector__1  &); /* linkage=_ZNK7VMatrix7VMul4x3ERK6Vector */
	class Vector__1 VMul4x3Transpose(const class VMatrix  *, const class Vector__1  &); /* linkage=_ZNK7VMatrix16VMul4x3TransposeERK6Vector */
	void TransformPlane(const class VMatrix  *, const class VPlane  &, class VPlane &); /* linkage=_ZNK7VMatrix14TransformPlaneERK6VPlaneRS0_ */
	class VPlane operator*(const class VMatrix  *, const class VPlane  &); /* linkage=_ZNK7VMatrixmlERK6VPlane */
	class VMatrix & operator=(class VMatrix *, const class VMatrix  &); /* linkage=_ZN7VMatrixaSERKS_ */
	void MatrixMul(const class VMatrix  *, const class VMatrix  &, class VMatrix &); /* linkage=_ZNK7VMatrix9MatrixMulERKS_RS_ */
	const class VMatrix  & operator+=(class VMatrix *, const class VMatrix  &); /* linkage=_ZN7VMatrixpLERKS_ */
	class VMatrix operator*(const class VMatrix  *, const class VMatrix  &); /* linkage=_ZNK7VMatrixmlERKS_ */
	class VMatrix operator+(const class VMatrix  *, const class VMatrix  &); /* linkage=_ZNK7VMatrixplERKS_ */
	class VMatrix operator-(const class VMatrix  *, const class VMatrix  &); /* linkage=_ZNK7VMatrixmiERKS_ */
	class VMatrix operator-(const class VMatrix  *); /* linkage=_ZNK7VMatrixngEv */
	void Identity(class VMatrix *); /* linkage=_ZN7VMatrix8IdentityEv */
	bool IsIdentity(const class VMatrix  *); /* linkage=_ZNK7VMatrix10IsIdentityEv */
	const class VMatrix  & GetIdentityMatrix(void); /* linkage=_ZN7VMatrix17GetIdentityMatrixEv */
	void SetupMatrixOrgAngles(class VMatrix *, const class Vector__1  &, const class QAngle  &); /* linkage=_ZN7VMatrix20SetupMatrixOrgAnglesERK6VectorRK6QAngle */
	class VMatrix operator~(const class VMatrix  *); /* linkage=_ZNK7VMatrixcoEv */
	/* <5a7ed38> mathlib/vmatrix.cpp:377 */
	bool InverseGeneral(const class VMatrix  *, class VMatrix &); /* linkage=_ZNK7VMatrix14InverseGeneralERS_ */
	void InverseTR(const class VMatrix  *, class VMatrix &); /* linkage=_ZNK7VMatrix9InverseTRERS_ */
	bool IsRotationMatrix(const class VMatrix  *); /* linkage=_ZNK7VMatrix16IsRotationMatrixEv */
	float Element(const class VMatrix  *, int, int); /* linkage=_ZNK7VMatrix7ElementEii */
	void SetElement(class VMatrix *, int, int, float); /* linkage=_ZN7VMatrix10SetElementEiif */
	int Width(const class VMatrix  *); /* linkage=_ZNK7VMatrix5WidthEv */
	int Height(const class VMatrix  *); /* linkage=_ZNK7VMatrix6HeightEv */
	void SetDimensions(class VMatrix *, int, int); /* linkage=_ZN7VMatrix13SetDimensionsEii */
	class VMatrix InverseTR(const class VMatrix  *); /* linkage=_ZNK7VMatrix9InverseTREv */
	class Vector__1 GetScale(const class VMatrix  *); /* linkage=_ZNK7VMatrix8GetScaleEv */
	class VMatrix Scale(class VMatrix *, const class Vector__1  &); /* linkage=_ZN7VMatrix5ScaleERK6Vector */
	void ScaleUpper3x3Matrix(class VMatrix *, float); /* linkage=_ZN7VMatrix19ScaleUpper3x3MatrixEf */
	class VMatrix NormalizeBasisVectors(const class VMatrix  *); /* linkage=_ZNK7VMatrix21NormalizeBasisVectorsEv */
	class VMatrix Transpose(const class VMatrix  *); /* linkage=_ZNK7VMatrix9TransposeEv */
	class VMatrix Transpose3x3(const class VMatrix  *); /* linkage=_ZNK7VMatrix12Transpose3x3Ev */
	void VMatrix(class VMatrix *, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN7VMatrixC4ERK6VectorS2_S2_ */
	void InitFLU(class VMatrix *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN7VMatrix7InitFLUERK6VectorS2_S2_S2_ */
	void SetLeft(class VMatrix *, const class Vector  &); /* linkage=_ZN7VMatrix7SetLeftERK6Vector */
	void SetUp(class VMatrix *, const class Vector  &); /* linkage=_ZN7VMatrix5SetUpERK6Vector */
	void SetForward(class VMatrix *, const class Vector  &); /* linkage=_ZN7VMatrix10SetForwardERK6Vector */
	void GetBasisVectors(const class VMatrix  *, class Vector &, class Vector &, class Vector &); /* linkage=_ZNK7VMatrix15GetBasisVectorsER6VectorS1_S1_ */
	void SetBasisVectors(class VMatrix *, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN7VMatrix15SetBasisVectorsERK6VectorS2_S2_ */
	class Vector & GetTranslation(const class VMatrix  *, class Vector &); /* linkage=_ZNK7VMatrix14GetTranslationER6Vector */
	void SetTranslation(class VMatrix *, const class Vector  &); /* linkage=_ZN7VMatrix14SetTranslationERK6Vector */
	void PreTranslate(class VMatrix *, const class Vector  &); /* linkage=_ZN7VMatrix12PreTranslateERK6Vector */
	void PostTranslate(class VMatrix *, const class Vector  &); /* linkage=_ZN7VMatrix13PostTranslateERK6Vector */
	class Vector GetLeft(const class VMatrix  *); /* linkage=_ZNK7VMatrix7GetLeftEv */
	class Vector GetUp(const class VMatrix  *); /* linkage=_ZNK7VMatrix5GetUpEv */
	class Vector GetForward(const class VMatrix  *); /* linkage=_ZNK7VMatrix10GetForwardEv */
	class Vector GetTranslation(const class VMatrix  *); /* linkage=_ZNK7VMatrix14GetTranslationEv */
	class Vector GetOrigin(const class VMatrix  *); /* linkage=_ZNK7VMatrix9GetOriginEv */
	void V3Mul(const class VMatrix  *, const class Vector  &, class Vector &); /* linkage=_ZNK7VMatrix5V3MulERK6VectorRS0_ */
	class Vector ApplyRotation(const class VMatrix  *, const class Vector  &); /* linkage=_ZNK7VMatrix13ApplyRotationERK6Vector */
	class Vector operator*(const class VMatrix  *, const class Vector  &); /* linkage=_ZNK7VMatrixmlERK6Vector */
	class Vector VMul3x3(const class VMatrix  *, const class Vector  &); /* linkage=_ZNK7VMatrix7VMul3x3ERK6Vector */
	class Vector VMul3x3Transpose(const class VMatrix  *, const class Vector  &); /* linkage=_ZNK7VMatrix16VMul3x3TransposeERK6Vector */
	class Vector VMul4x3(const class VMatrix  *, const class Vector  &); /* linkage=_ZNK7VMatrix7VMul4x3ERK6Vector */
	class Vector VMul4x3Transpose(const class VMatrix  *, const class Vector  &); /* linkage=_ZNK7VMatrix16VMul4x3TransposeERK6Vector */
	void SetupMatrixOrgAngles(class VMatrix *, const class Vector  &, const class QAngle  &); /* linkage=_ZN7VMatrix20SetupMatrixOrgAnglesERK6VectorRK6QAngle */
	class Vector GetScale(const class VMatrix  *); /* linkage=_ZNK7VMatrix8GetScaleEv */
	class VMatrix Scale(class VMatrix *, const class Vector  &); /* linkage=_ZN7VMatrix5ScaleERK6Vector */
};

// <05A7DA9F> ../public/mathlib/vmatrix.h:67
inline void VMatrix::operator[](int nRow)
{
} /* size: 0 */

// <05A7DA61> ../public/mathlib/vmatrix.h:78
inline void VMatrix::Base()
{
} /* size: 0 */

// <039F90EE> ../public/mathlib/vmatrix.h:117
inline void VMatrix::GetOrigin()
{
} /* size: 0 */

// <027DFFAF> ../public/mathlib/vmatrix.h:186
// variable: 1
inline void GetIdentityMatrix(void)
{
	const VMatrix  identityMatrix; // 188
} /* size: 0, variables: 1 */

// <027DFF82> ../public/mathlib/vmatrix.h:217
inline void VMatrix::Element(int i, int j)
{
} /* size: 0 */

// <027DFF49> ../public/mathlib/vmatrix.h:222
inline void VMatrix::SetElement(int i, int j, float flValue)
{
} /* size: 0 */

// <027DFF0C> ../public/mathlib/vmatrix.h:241
// variables: 2
inline void VMatrix::ScaleUpper3x3Matrix(float flScale)
{
	{
		int i; // 243
		{
			int j; // 245
		}
	}
} /* size: 0 */

// <05998A13> ../public/mathlib/vmatrix.h:309
bool PlaneIntersection(const VPlane &, const VPlane &, const VPlane &, Vector &)
{
} /* size: 0 */

// <02E0ED78> ../public/mathlib/vmatrix.h:315
void MatrixSetIdentity(VMatrix &)
{
} /* size: 0 */

// <003C4FC5> ../public/mathlib/vmatrix.h:353
void Vector3DMultiplyPositionProjective(const VMatrix &, const Vector &, Vector &)
{
} /* size: 0 */

// <05801389> ../../public/mathlib/vmatrix.h:381
void MatrixBuildTranslation(VMatrix &, float, float, float)
{
} /* size: 0 */

// <058014E7> ../../public/mathlib/vmatrix.h:393
void MatrixBuildRotationAboutAxis(VMatrix &, const Vector &, float)
{
} /* size: 0 */

// <02E0EDB1> ../public/mathlib/vmatrix.h:466
bool MatrixInverseGeneral(const VMatrix &, VMatrix &)
{
} /* size: 0 */

// <05CB4AD8> ../public/mathlib/vmatrix.h:478
void VMatrix::VMatrix()
{
} /* size: 0 */

// <05CB4ABC> ../public/mathlib/vmatrix.h:478
inline void VMatrix::VMatrix()
{
} /* size: 0 */

// <05CB4A55> ../public/mathlib/vmatrix.h:482
void VMatrix::VMatrix(vec_t m00, vec_t m01, vec_t m02, vec_t m03, vec_t m10, vec_t m11, vec_t m12, vec_t m13, vec_t m20, vec_t m21, vec_t m22, vec_t m23, vec_t m30, vec_t m31, vec_t m32, vec_t m33)
{
} /* size: 0 */

// <05CB4969> ../public/mathlib/vmatrix.h:482
inline void VMatrix::VMatrix(vec_t m00, vec_t m01, vec_t m02, vec_t m03, vec_t m10, vec_t m11, vec_t m12, vec_t m13, vec_t m20, vec_t m21, vec_t m22, vec_t m23, vec_t m30, vec_t m31, vec_t m32, vec_t m33)
{
} /* size: 0 */

// <0580D5AE> ../../public/mathlib/vmatrix.h:497
void VMatrix::VMatrix(const matrix3x4_t& matrix3x4)
{
} /* size: 0 */

// <0580D585> ../../public/mathlib/vmatrix.h:497
inline void VMatrix::VMatrix(const matrix3x4_t& matrix3x4)
{
} /* size: 0 */

// <0584C22E> ../../public/mathlib/vmatrix.h:507
void VMatrix::VMatrix(const Vector& xAxis, const Vector& yAxis, const Vector& zAxis)
{
} /* size: 0 */

// <0584C1EB> ../../public/mathlib/vmatrix.h:507
inline void VMatrix::VMatrix(const Vector& xAxis, const Vector& yAxis, const Vector& zAxis)
{
} /* size: 0 */

// <05CB487D> ../public/mathlib/vmatrix.h:518
inline void VMatrix::Init(vec_t m00, vec_t m01, vec_t m02, vec_t m03, vec_t m10, vec_t m11, vec_t m12, vec_t m13, vec_t m20, vec_t m21, vec_t m22, vec_t m23, vec_t m30, vec_t m31, vec_t m32, vec_t m33)
{
} /* size: 0 */

// <0580D470> ../../public/mathlib/vmatrix.h:558
inline void VMatrix::Init(const matrix3x4_t& matrix3x4)
{
} /* size: 0 */

// <039F909F> ../public/mathlib/vmatrix.h:573
inline void VMatrix::GetForward()
{
} /* size: 0 */

// <039F9083> ../public/mathlib/vmatrix.h:583
inline void VMatrix::GetUp()
{
} /* size: 0 */

// <05A7D7C6> ../public/mathlib/vmatrix.h:588
inline void VMatrix::SetForward(const Vector& vForward)
{
} /* size: 0 */

// <05A7D79D> ../public/mathlib/vmatrix.h:595
inline void VMatrix::SetLeft(const Vector& vLeft)
{
} /* size: 0 */

// <05A7D774> ../public/mathlib/vmatrix.h:602
inline void VMatrix::SetUp(const Vector& vUp)
{
} /* size: 0 */

// <05A7D731> ../public/mathlib/vmatrix.h:609
inline void VMatrix::GetBasisVectors(Vector& vForward, Vector& vLeft, Vector& vUp)
{
} /* size: 0 */

// <05A7D6EE> ../public/mathlib/vmatrix.h:616
inline void VMatrix::SetBasisVectors(const Vector& vForward, const Vector& vLeft, const Vector& vUp)
{
} /* size: 0 */

// <0580D454> ../../public/mathlib/vmatrix.h:627
inline void VMatrix::GetTranslation()
{
} /* size: 0 */

// <05A7D6C5> ../public/mathlib/vmatrix.h:632
inline void VMatrix::GetTranslation(Vector& vTrans)
{
} /* size: 0 */

// <05A7D69C> ../public/mathlib/vmatrix.h:640
inline void VMatrix::SetTranslation(const Vector& vTrans)
{
} /* size: 0 */

// <05A7D680> ../public/mathlib/vmatrix.h:676
inline void VMatrix::As3x4()
{
} /* size: 0 */

// <05A7D657> ../public/mathlib/vmatrix.h:681
inline void VMatrix::CopyFrom3x4(const matrix3x4_t& m3x4)
{
} /* size: 0 */

// <05A7D62E> ../public/mathlib/vmatrix.h:688
inline void VMatrix::Set3x4(matrix3x4_t& matrix3x4)
{
} /* size: 0 */

// <05B4B668> ../public/mathlib/vmatrix.h:800
// variable: 1
inline void VMatrix::V3Mul(const Vector& vIn, Vector& vOut)
{
	vec_t rw; // 802
} /* size: 0, variables: 1 */

// <03181588> ../public/mathlib/vmatrix.h:810
inline void VMatrix::V4Mul(const Vector4D& vIn, Vector4D& vOut)
{
} /* size: 0 */

// <05A7D5EB> ../public/mathlib/vmatrix.h:822
// variable: 1
inline void VMatrix::TransformPlane(const VPlane& inPlane, VPlane& outPlane)
{
	Vector vTrans; // 824
} /* size: 0, variables: 1 */

// <05A7D5CF> ../public/mathlib/vmatrix.h:834
inline void VMatrix::Identity()
{
} /* size: 0 */

// <02F2C0BF> ../public/mathlib/vmatrix.h:889
// variables: 2
inline Vector4D MatrixGetRowAsVector4D(const VMatrix& src, MatrixAxisType_t nRow)
{
	const char   __FUNCTION__; // 63763
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 891
	}
} /* size: 0, variables: 1 */

// <02C3F16E> ../public/mathlib/vmatrix.h:889
// variables: 2
inline Vector4D MatrixGetRowAsVector4D(const VMatrix& src, MatrixAxisType_t nRow)
{
	const char   __FUNCTION__; // 22753
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 891
	}
} /* size: 0, variables: 1 */

// <011EE850> ../public/mathlib/vmatrix.h:889
// variables: 2
inline Vector4D MatrixGetRowAsVector4D(const VMatrix& src, MatrixAxisType_t nRow)
{
	const char   __FUNCTION__; // 26497
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 891
	}
} /* size: 0, variables: 1 */

// <0071F2F9> ../public/mathlib/vmatrix.h:889
// variables: 2
inline Vector4D MatrixGetRowAsVector4D(const VMatrix& src, MatrixAxisType_t nRow)
{
	const char   __FUNCTION__; // 52103
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 891
	}
} /* size: 0, variables: 1 */

// <00572AA9> ../public/mathlib/vmatrix.h:889
// variables: 2
inline Vector4D MatrixGetRowAsVector4D(const VMatrix& src, MatrixAxisType_t nRow)
{
	const char   __FUNCTION__; // 48140
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 891
	}
} /* size: 0, variables: 1 */

// <008ED5CF> ../public/mathlib/vmatrix.h:889
// variables: 2
inline Vector4D MatrixGetRowAsVector4D(const VMatrix& src, MatrixAxisType_t nRow)
{
	const char   __FUNCTION__; // 31410
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 891
	}
} /* size: 0, variables: 1 */

// <008A02DD> ../public/mathlib/vmatrix.h:889
// variables: 2
inline Vector4D MatrixGetRowAsVector4D(const VMatrix& src, MatrixAxisType_t nRow)
{
	const char   __FUNCTION__; // 3387
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 891
	}
} /* size: 0, variables: 1 */

// <00C96E3C> ../public/mathlib/vmatrix.h:889
// variables: 2
inline Vector4D MatrixGetRowAsVector4D(const VMatrix& src, MatrixAxisType_t nRow)
{
	const char   __FUNCTION__; // 44703
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 891
	}
} /* size: 0, variables: 1 */

// <02E0ECC2> ../public/mathlib/vmatrix.h:1003
void ExtractClipPlanesFromNonTransposedMatrix(const VMatrix &, VPlane *, bool)
{
} /* size: 0 */

