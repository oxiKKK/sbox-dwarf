
//
// public/mathlib/mathlib.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 179
//	classes: 2
//	structs: 4
//

// <05968760> ../../public/mathlib/mathlib.h:42
void cplane_t::cplane_t()
{
} /* size: 0 */

// <05968743> ../../public/mathlib/mathlib.h:42
inline void cplane_t::cplane_t()
{
} /* size: 0 */

// <000296FC> ../public/mathlib/mathlib.h:42
// member function: 1
// member variables: 2
// struct size: 16
struct cplane_t {
	Vector normal; /* 0 12 */
	float dist; /* 12 4 */
	/* ../public/mathlib/mathlib.h:47 */
	void Zero(cplane_t* );
};

// <0002306D> ../../public/mathlib/mathlib.h:42
// member function: 1
// member variables: 2
// struct size: 16
struct cplane_t {
	Vector normal; /* 0 12 */
	float dist; /* 12 4 */
	/* ../../public/mathlib/mathlib.h:47 */
	void Zero(cplane_t* );
};

// <000273CC> ../public/mathlib/mathlib.h:91
// member functions: 61
// member variable: 1
// static member variable: 1
// struct size: 48
struct matrix3x4_t {
	static const struct matrix3x4_t mIdentity; /* 0 0 */
	/* ../public/mathlib/mathlib.h:95 */
	void matrix3x4_t(matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:98 */
	void matrix3x4_t(matrix3x4_t* , float, float, float, float, float, float, float, float, float, float, float, float);
	/* ../public/mathlib/mathlib.h:108 */
	void matrix3x4_t(matrix3x4_t* , const Quaternion& , Vector& );
	/* ../public/mathlib/mathlib.h:114 */
	void InitXYZ(matrix3x4_t* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/mathlib.h:122 */
	void InitFLU(matrix3x4_t* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/mathlib.h:129 */
	void InitFromQAngles(matrix3x4_t* , const QAngle& , const Vector& );
	/* ../public/mathlib/mathlib.h:130 */
	void InitFromQAngles(matrix3x4_t* , const QAngle& );
	/* ../public/mathlib/mathlib.h:131 */
	void InitFromRadianEuler(matrix3x4_t* , const RadianEuler& , const Vector& );
	/* ../public/mathlib/mathlib.h:132 */
	void InitFromRadianEuler(matrix3x4_t* , const RadianEuler& );
	/* ../public/mathlib/mathlib.h:133 */
	void InitFromCTransform(matrix3x4_t* , const CTransform& );
	/* ../public/mathlib/mathlib.h:134 */
	void InitFromQuaternion(matrix3x4_t* , const Quaternion& , const Vector& );
	/* ../public/mathlib/mathlib.h:135 */
	void InitFromQuaternion(matrix3x4_t* , const Quaternion& );
	/* ../public/mathlib/mathlib.h:136 */
	void InitFromDiagonal(matrix3x4_t* , const Vector& );
	/* ../public/mathlib/mathlib.h:138 */
	Quaternion ToQuaternion(const matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:139 */
	QAngle ToQAngle(const matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:140 */
	CTransform ToCTransform(const matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:142 */
	void SetToZero(matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:143 */
	void SetToIdentity(matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:148 */
	void ScaleUpper3x3Matrix(matrix3x4_t* , float);
	/* ../public/mathlib/mathlib.h:151 */
	void SetOrigin(matrix3x4_t* , const Vector& );
	/* ../public/mathlib/mathlib.h:159 */
	Vector GetOrigin(const matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:166 */
	void Invalidate(matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:178 */
	bool IsValid(const matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:191 */
	matrix3x4_t& operator*=(matrix3x4_t* , const matrix3x4_t& );
	/* ../public/mathlib/mathlib.h:198 */
	matrix3x4_t& operator+=(matrix3x4_t* , const matrix3x4_t& );
	/* ../public/mathlib/mathlib.h:211 */
	matrix3x4_t& operator-=(matrix3x4_t* , const matrix3x4_t& );
	/* ../public/mathlib/mathlib.h:224 */
	bool operator==(const matrix3x4_t* , const matrix3x4_t& );
	/* ../public/mathlib/mathlib.h:229 */
	bool operator!=(const matrix3x4_t* , const matrix3x4_t& );
	/* ../public/mathlib/mathlib.h:234 */
	bool IsEqualTo(const matrix3x4_t* , const matrix3x4_t& , float);
	/* ../public/mathlib/mathlib.h:236 */
	void GetBasisVectorsFLU(const matrix3x4_t* , Vector* , Vector* , Vector* );
	/* ../public/mathlib/mathlib.h:237 */
	Vector TransformVector(const matrix3x4_t* , const Vector& );
	/* ../public/mathlib/mathlib.h:238 */
	Vector RotateVector(const matrix3x4_t* , const Vector& );
	/* ../public/mathlib/mathlib.h:239 */
	Vector TransformVectorByInverse(const matrix3x4_t* , const Vector& );
	/* ../public/mathlib/mathlib.h:240 */
	Vector RotateVectorByInverse(const matrix3x4_t* , const Vector& );
	/* ../public/mathlib/mathlib.h:241 */
	Vector RotateExtents(const matrix3x4_t* , const Vector& );
	/* ../public/mathlib/mathlib.h:242 */
	void TransformAABB(const matrix3x4_t* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/mathlib.h:243 */
	void TransformAABBByInverse(const matrix3x4_t* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/mathlib.h:244 */
	void RotateAABB(const matrix3x4_t* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/mathlib.h:245 */
	void RotateAABBByInverse(const matrix3x4_t* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/mathlib.h:246 */
	void TransformPlane(const matrix3x4_t* , const cplane_t& , cplane_t& );
	/* ../public/mathlib/mathlib.h:247 */
	void TransformPlaneByInverse(const matrix3x4_t* , const cplane_t& , cplane_t& );
	/* ../public/mathlib/mathlib.h:248 */
	float GetOrthogonalityError(const matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:249 */
	float GetDeterminant(const matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:250 */
	float GetSylvestersCriterion(const matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:251 */
	float GetTrace(const matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:253 */
	Vector GetColumn(const matrix3x4_t* , MatrixAxisType_t);
	/* ../public/mathlib/mathlib.h:254 */
	void SetColumn(matrix3x4_t* , const Vector& , MatrixAxisType_t);
	/* ../public/mathlib/mathlib.h:255 */
	Vector GetForward(const matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:256 */
	Vector GetLeft(const matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:257 */
	Vector GetUp(const matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:258 */
	Vector GetRow(const matrix3x4_t* , int);
	/* ../public/mathlib/mathlib.h:259 */
	void SetRow(matrix3x4_t* , int, const Vector& );
	/* ../public/mathlib/mathlib.h:261 */
	void Transposed(const matrix3x4_t* , matrix3x4_t& );
	/* ../public/mathlib/mathlib.h:262 */
	matrix3x4_t Transposed(const matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:263 */
	void InverseTR(const matrix3x4_t* , matrix3x4_t& );
	/* ../public/mathlib/mathlib.h:264 */
	matrix3x4_t InverseTR(const matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:266 */
	float* operator[](matrix3x4_t* , int);
	/* ../public/mathlib/mathlib.h:267 */
	const float* operator[](const matrix3x4_t* , int);
	/* ../public/mathlib/mathlib.h:268 */
	float* Base(matrix3x4_t* );
	/* ../public/mathlib/mathlib.h:269 */
	const float* Base(const matrix3x4_t* );
	float m_flMatVal[3][4]; /* 0 48 */
	/* ../public/mathlib/mathlib.h:273 */
	bool TypeIsAlignedForSIMD(void);
};

// <057EDA6F> ../../public/mathlib/mathlib.h:91
// member functions: 61
// member variable: 1
// static member variable: 1
// struct size: 48
struct matrix3x4_t {
	static const struct matrix3x4_t mIdentity; /* 0 0 */
	/* ../../public/mathlib/mathlib.h:95 */
	void matrix3x4_t(matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:98 */
	void matrix3x4_t(matrix3x4_t* , float, float, float, float, float, float, float, float, float, float, float, float);
	/* ../../public/mathlib/mathlib.h:108 */
	void matrix3x4_t(matrix3x4_t* , const Quaternion& , Vector& );
	/* ../../public/mathlib/mathlib.h:114 */
	void InitXYZ(matrix3x4_t* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../../public/mathlib/mathlib.h:122 */
	void InitFLU(matrix3x4_t* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../../public/mathlib/mathlib.h:129 */
	void InitFromQAngles(matrix3x4_t* , const QAngle& , const Vector& );
	/* ../../public/mathlib/mathlib.h:130 */
	void InitFromQAngles(matrix3x4_t* , const QAngle& );
	/* ../../public/mathlib/mathlib.h:131 */
	void InitFromRadianEuler(matrix3x4_t* , const RadianEuler& , const Vector& );
	/* ../../public/mathlib/mathlib.h:132 */
	void InitFromRadianEuler(matrix3x4_t* , const RadianEuler& );
	/* ../../public/mathlib/mathlib.h:133 */
	void InitFromCTransform(matrix3x4_t* , const CTransform& );
	/* ../../public/mathlib/mathlib.h:134 */
	void InitFromQuaternion(matrix3x4_t* , const Quaternion& , const Vector& );
	/* ../../public/mathlib/mathlib.h:135 */
	void InitFromQuaternion(matrix3x4_t* , const Quaternion& );
	/* ../../public/mathlib/mathlib.h:136 */
	void InitFromDiagonal(matrix3x4_t* , const Vector& );
	/* ../../public/mathlib/mathlib.h:138 */
	Quaternion ToQuaternion(const matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:139 */
	QAngle ToQAngle(const matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:140 */
	CTransform ToCTransform(const matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:142 */
	void SetToZero(matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:143 */
	void SetToIdentity(matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:148 */
	void ScaleUpper3x3Matrix(matrix3x4_t* , float);
	/* ../../public/mathlib/mathlib.h:151 */
	void SetOrigin(matrix3x4_t* , const Vector& );
	/* ../../public/mathlib/mathlib.h:159 */
	Vector GetOrigin(const matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:166 */
	void Invalidate(matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:178 */
	bool IsValid(const matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:191 */
	matrix3x4_t& operator*=(matrix3x4_t* , const matrix3x4_t& );
	/* ../../public/mathlib/mathlib.h:198 */
	matrix3x4_t& operator+=(matrix3x4_t* , const matrix3x4_t& );
	/* ../../public/mathlib/mathlib.h:211 */
	matrix3x4_t& operator-=(matrix3x4_t* , const matrix3x4_t& );
	/* ../../public/mathlib/mathlib.h:224 */
	bool operator==(const matrix3x4_t* , const matrix3x4_t& );
	/* ../../public/mathlib/mathlib.h:229 */
	bool operator!=(const matrix3x4_t* , const matrix3x4_t& );
	/* ../../public/mathlib/mathlib.h:234 */
	bool IsEqualTo(const matrix3x4_t* , const matrix3x4_t& , float);
	/* ../../public/mathlib/mathlib.h:236 */
	void GetBasisVectorsFLU(const matrix3x4_t* , Vector* , Vector* , Vector* );
	/* ../../public/mathlib/mathlib.h:237 */
	Vector TransformVector(const matrix3x4_t* , const Vector& );
	/* ../../public/mathlib/mathlib.h:238 */
	Vector RotateVector(const matrix3x4_t* , const Vector& );
	/* ../../public/mathlib/mathlib.h:239 */
	Vector TransformVectorByInverse(const matrix3x4_t* , const Vector& );
	/* ../../public/mathlib/mathlib.h:240 */
	Vector RotateVectorByInverse(const matrix3x4_t* , const Vector& );
	/* ../../public/mathlib/mathlib.h:241 */
	Vector RotateExtents(const matrix3x4_t* , const Vector& );
	/* ../../public/mathlib/mathlib.h:242 */
	void TransformAABB(const matrix3x4_t* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../../public/mathlib/mathlib.h:243 */
	void TransformAABBByInverse(const matrix3x4_t* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../../public/mathlib/mathlib.h:244 */
	void RotateAABB(const matrix3x4_t* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../../public/mathlib/mathlib.h:245 */
	void RotateAABBByInverse(const matrix3x4_t* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../../public/mathlib/mathlib.h:246 */
	void TransformPlane(const matrix3x4_t* , const cplane_t& , cplane_t& );
	/* ../../public/mathlib/mathlib.h:247 */
	void TransformPlaneByInverse(const matrix3x4_t* , const cplane_t& , cplane_t& );
	/* ../../public/mathlib/mathlib.h:248 */
	float GetOrthogonalityError(const matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:249 */
	float GetDeterminant(const matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:250 */
	float GetSylvestersCriterion(const matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:251 */
	float GetTrace(const matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:253 */
	Vector GetColumn(const matrix3x4_t* , MatrixAxisType_t);
	/* ../../public/mathlib/mathlib.h:254 */
	void SetColumn(matrix3x4_t* , const Vector& , MatrixAxisType_t);
	/* ../../public/mathlib/mathlib.h:255 */
	Vector GetForward(const matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:256 */
	Vector GetLeft(const matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:257 */
	Vector GetUp(const matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:258 */
	Vector GetRow(const matrix3x4_t* , int);
	/* ../../public/mathlib/mathlib.h:259 */
	void SetRow(matrix3x4_t* , int, const Vector& );
	/* ../../public/mathlib/mathlib.h:261 */
	void Transposed(const matrix3x4_t* , matrix3x4_t& );
	/* ../../public/mathlib/mathlib.h:262 */
	matrix3x4_t Transposed(const matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:263 */
	void InverseTR(const matrix3x4_t* , matrix3x4_t& );
	/* ../../public/mathlib/mathlib.h:264 */
	matrix3x4_t InverseTR(const matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:266 */
	float* operator[](matrix3x4_t* , int);
	/* ../../public/mathlib/mathlib.h:267 */
	const float* operator[](const matrix3x4_t* , int);
	/* ../../public/mathlib/mathlib.h:268 */
	float* Base(matrix3x4_t* );
	/* ../../public/mathlib/mathlib.h:269 */
	const float* Base(const matrix3x4_t* );
	float m_flMatVal[3][4]; /* 0 48 */
	/* ../../public/mathlib/mathlib.h:273 */
	bool TypeIsAlignedForSIMD(void);
};

// <064E6B08> ../public/mathlib/mathlib.h:95
void matrix3x4_t::matrix3x4_t()
{
} /* size: 0 */

// <064E6AEF> ../public/mathlib/mathlib.h:95
inline void matrix3x4_t::matrix3x4_t()
{
} /* size: 0 */

// <0615BB1E> ../public/mathlib/mathlib.h:98
void matrix3x4_t::matrix3x4_t(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23)
{
} /* size: 0 */

// <0615BA75> ../public/mathlib/mathlib.h:98
inline void matrix3x4_t::matrix3x4_t(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23)
{
} /* size: 0 */

// <0596B7B1> ../../public/mathlib/mathlib.h:114
inline void matrix3x4_t::InitXYZ(const Vector& xAxis, const Vector& yAxis, const Vector& zAxis, const Vector& vecOrigin)
{
} /* size: 0 */

// <064706B0> ../public/mathlib/mathlib.h:122
inline void matrix3x4_t::InitFLU(const Vector& vForward, const Vector& vLeft, const Vector& vUp, const Vector& vecOrigin)
{
} /* size: 0 */

// <059D8BAF> ../public/mathlib/mathlib.h:151
inline void matrix3x4_t::SetOrigin(const Vector& p)
{
} /* size: 0 */

// <05F09547> ../public/mathlib/mathlib.h:159
// variable: 1
inline void matrix3x4_t::GetOrigin()
{
	Vector vecRet; // 161
} /* size: 0, variables: 1 */

// <03B9C767> ../public/mathlib/mathlib.h:178
// variables: 2
inline void matrix3x4_t::IsValid()
{
	{
		int i; // 180
		{
			int j; // 182
		}
	}
} /* size: 0 */

// <00A1A8B4> ../public/mathlib/mathlib.h:211
// variables: 2
inline void matrix3x4_t::operator-=(const matrix3x4_t& other)
{
	{
		int nRow; // 213
		{
			int nCol; // 215
		}
	}
} /* size: 0 */

// <0580D8CD> ../../public/mathlib/mathlib.h:255
inline void matrix3x4_t::GetForward()
{
} /* size: 0 */

// <0580D8B4> ../../public/mathlib/mathlib.h:256
inline void matrix3x4_t::GetLeft()
{
} /* size: 0 */

// <0580D89B> ../../public/mathlib/mathlib.h:257
inline void matrix3x4_t::GetUp()
{
} /* size: 0 */

// <0580D875> ../../public/mathlib/mathlib.h:258
inline void matrix3x4_t::GetRow(int nRow)
{
} /* size: 0 */

// <059D8B57> ../public/mathlib/mathlib.h:259
inline void matrix3x4_t::SetRow(int nRow, const Vector& vRow)
{
} /* size: 0 */

// <06F38A29> ../public/mathlib/mathlib.h:266
inline void matrix3x4_t::operator[](int i)
{
} /* size: 0 */

// <05A7DC14> ../public/mathlib/mathlib.h:268
inline void matrix3x4_t::Base()
{
} /* size: 0 */

// <00028DB6> ../public/mathlib/mathlib.h:284
// member functions: 29
// member variable: 1
// class size: 48
class matrix3x4a_t : public matrix3x4_t {
public:
	/* struct matrix3x4_t <ancestor>; */ /* 0 48 */
	/* ../public/mathlib/mathlib.h:290 */
	void matrix3x4a_t(matrix3x4a_t* , const matrix3x4_t& );
	/* ../public/mathlib/mathlib.h:291 */
	matrix3x4a_t& operator=(matrix3x4a_t* , const matrix3x4_t& );
	/* ../public/mathlib/mathlib.h:293 */
	void matrix3x4a_t(matrix3x4a_t* , float, float, float, float, float, float, float, float, float, float, float, float);
	/* ../public/mathlib/mathlib.h:303 */
	void matrix3x4a_t(matrix3x4a_t* );
	/* ../public/mathlib/mathlib.h:304 */
	bool TypeIsAlignedForSIMD(void);
	/* ../public/mathlib/mathlib.h:307 */
	fltx4& SIMDRow(matrix3x4a_t* , uint);
	/* ../public/mathlib/mathlib.h:308 */
	const fltx4& SIMDRow(const matrix3x4a_t* , uint);
	/* ../public/mathlib/mathlib.h:309 */
	Vector TransformVector(const matrix3x4a_t* , const Vector& );
	/* ../public/mathlib/mathlib.h:310 */
	VectorAligned TransformVector(const matrix3x4a_t* , const VectorAligned& );
	/* ../public/mathlib/mathlib.h:311 */
	Vector RotateVector(const matrix3x4a_t* , const Vector& );
	/* ../public/mathlib/mathlib.h:312 */
	VectorAligned RotateVector(const matrix3x4a_t* , const VectorAligned& );
	/* ../public/mathlib/mathlib.h:313 */
	Vector TransformVectorByInverse(const matrix3x4a_t* , const Vector& );
	/* ../public/mathlib/mathlib.h:314 */
	VectorAligned TransformVectorByInverse(const matrix3x4a_t* , const VectorAligned& );
	void matrix3x4a_t(class matrix3x4a_t *, const class matrix3x4_t  &); /* linkage=_ZN12matrix3x4a_tC4ERK11matrix3x4_t */
	class matrix3x4a_t & operator=(class matrix3x4a_t *, const class matrix3x4_t  &); /* linkage=_ZN12matrix3x4a_taSERK11matrix3x4_t */
	void matrix3x4a_t(class matrix3x4a_t *, float, float, float, float, float, float, float, float, float, float, float, float); /* linkage=_ZN12matrix3x4a_tC4Effffffffffff */
	void matrix3x4a_t(class matrix3x4a_t *); /* linkage=_ZN12matrix3x4a_tC4Ev */
	bool TypeIsAlignedForSIMD(void); /* linkage=_ZN12matrix3x4a_t20TypeIsAlignedForSIMDEv */
	fltx4 & SIMDRow(class matrix3x4a_t *, uint); /* linkage=_ZN12matrix3x4a_t7SIMDRowEj */
	const fltx4  & SIMDRow(const class matrix3x4a_t  *, uint); /* linkage=_ZNK12matrix3x4a_t7SIMDRowEj */
	class Vector__1 TransformVector(const class matrix3x4a_t  *, const class Vector__1  &); /* linkage=_ZNK12matrix3x4a_t15TransformVectorERK6Vector */
	class VectorAligned TransformVector(const class matrix3x4a_t  *, const class VectorAligned  &); /* linkage=_ZNK12matrix3x4a_t15TransformVectorERK13VectorAligned */
	class Vector__1 RotateVector(const class matrix3x4a_t  *, const class Vector__1  &); /* linkage=_ZNK12matrix3x4a_t12RotateVectorERK6Vector */
	class VectorAligned RotateVector(const class matrix3x4a_t  *, const class VectorAligned  &); /* linkage=_ZNK12matrix3x4a_t12RotateVectorERK13VectorAligned */
	class Vector__1 TransformVectorByInverse(const class matrix3x4a_t  *, const class Vector__1  &); /* linkage=_ZNK12matrix3x4a_t24TransformVectorByInverseERK6Vector */
	class VectorAligned TransformVectorByInverse(const class matrix3x4a_t  *, const class VectorAligned  &); /* linkage=_ZNK12matrix3x4a_t24TransformVectorByInverseERK13VectorAligned */
	class Vector TransformVector(const class matrix3x4a_t  *, const class Vector  &); /* linkage=_ZNK12matrix3x4a_t15TransformVectorERK6Vector */
	class Vector RotateVector(const class matrix3x4a_t  *, const class Vector  &); /* linkage=_ZNK12matrix3x4a_t12RotateVectorERK6Vector */
	class Vector TransformVectorByInverse(const class matrix3x4a_t  *, const class Vector  &); /* linkage=_ZNK12matrix3x4a_t24TransformVectorByInverseERK6Vector */
} __attribute__((__aligned__(16)));

// <00022E1B> ../../public/mathlib/mathlib.h:284
// member functions: 29
// member variable: 1
// class size: 48
class matrix3x4a_t : public matrix3x4_t {
public:
	/* struct matrix3x4_t <ancestor>; */ /* 0 48 */
	/* ../../public/mathlib/mathlib.h:290 */
	void matrix3x4a_t(matrix3x4a_t* , const matrix3x4_t& );
	/* ../../public/mathlib/mathlib.h:291 */
	matrix3x4a_t& operator=(matrix3x4a_t* , const matrix3x4_t& );
	/* ../../public/mathlib/mathlib.h:293 */
	void matrix3x4a_t(matrix3x4a_t* , float, float, float, float, float, float, float, float, float, float, float, float);
	/* ../../public/mathlib/mathlib.h:303 */
	void matrix3x4a_t(matrix3x4a_t* );
	/* ../../public/mathlib/mathlib.h:304 */
	bool TypeIsAlignedForSIMD(void);
	/* ../../public/mathlib/mathlib.h:307 */
	fltx4& SIMDRow(matrix3x4a_t* , uint);
	/* ../../public/mathlib/mathlib.h:308 */
	const fltx4& SIMDRow(const matrix3x4a_t* , uint);
	/* ../../public/mathlib/mathlib.h:309 */
	Vector TransformVector(const matrix3x4a_t* , const Vector& );
	/* ../../public/mathlib/mathlib.h:310 */
	VectorAligned TransformVector(const matrix3x4a_t* , const VectorAligned& );
	/* ../../public/mathlib/mathlib.h:311 */
	Vector RotateVector(const matrix3x4a_t* , const Vector& );
	/* ../../public/mathlib/mathlib.h:312 */
	VectorAligned RotateVector(const matrix3x4a_t* , const VectorAligned& );
	/* ../../public/mathlib/mathlib.h:313 */
	Vector TransformVectorByInverse(const matrix3x4a_t* , const Vector& );
	/* ../../public/mathlib/mathlib.h:314 */
	VectorAligned TransformVectorByInverse(const matrix3x4a_t* , const VectorAligned& );
	void matrix3x4a_t(class matrix3x4a_t *, const class matrix3x4_t  &); /* linkage=_ZN12matrix3x4a_tC4ERK11matrix3x4_t */
	class matrix3x4a_t & operator=(class matrix3x4a_t *, const class matrix3x4_t  &); /* linkage=_ZN12matrix3x4a_taSERK11matrix3x4_t */
	void matrix3x4a_t(class matrix3x4a_t *, float, float, float, float, float, float, float, float, float, float, float, float); /* linkage=_ZN12matrix3x4a_tC4Effffffffffff */
	void matrix3x4a_t(class matrix3x4a_t *); /* linkage=_ZN12matrix3x4a_tC4Ev */
	bool TypeIsAlignedForSIMD(void); /* linkage=_ZN12matrix3x4a_t20TypeIsAlignedForSIMDEv */
	fltx4 & SIMDRow(class matrix3x4a_t *, uint); /* linkage=_ZN12matrix3x4a_t7SIMDRowEj */
	const fltx4  & SIMDRow(const class matrix3x4a_t  *, uint); /* linkage=_ZNK12matrix3x4a_t7SIMDRowEj */
	class Vector__1 TransformVector(const class matrix3x4a_t  *, const class Vector__1  &); /* linkage=_ZNK12matrix3x4a_t15TransformVectorERK6Vector */
	class VectorAligned TransformVector(const class matrix3x4a_t  *, const class VectorAligned  &); /* linkage=_ZNK12matrix3x4a_t15TransformVectorERK13VectorAligned */
	class Vector__1 RotateVector(const class matrix3x4a_t  *, const class Vector__1  &); /* linkage=_ZNK12matrix3x4a_t12RotateVectorERK6Vector */
	class VectorAligned RotateVector(const class matrix3x4a_t  *, const class VectorAligned  &); /* linkage=_ZNK12matrix3x4a_t12RotateVectorERK13VectorAligned */
	class Vector__1 TransformVectorByInverse(const class matrix3x4a_t  *, const class Vector__1  &); /* linkage=_ZNK12matrix3x4a_t24TransformVectorByInverseERK6Vector */
	class VectorAligned TransformVectorByInverse(const class matrix3x4a_t  *, const class VectorAligned  &); /* linkage=_ZNK12matrix3x4a_t24TransformVectorByInverseERK13VectorAligned */
	class Vector TransformVector(const class matrix3x4a_t  *, const class Vector  &); /* linkage=_ZNK12matrix3x4a_t15TransformVectorERK6Vector */
	class Vector RotateVector(const class matrix3x4a_t  *, const class Vector  &); /* linkage=_ZNK12matrix3x4a_t12RotateVectorERK6Vector */
	class Vector TransformVectorByInverse(const class matrix3x4a_t  *, const class Vector  &); /* linkage=_ZNK12matrix3x4a_t24TransformVectorByInverseERK6Vector */
} __attribute__((__aligned__(16)));

// <04BDE70E> ../public/mathlib/mathlib.h:290
void matrix3x4a_t::matrix3x4a_t(const matrix3x4_t& src)
{
} /* size: 0 */

// <04BDE6E8> ../public/mathlib/mathlib.h:290
inline void matrix3x4a_t::matrix3x4a_t(const matrix3x4_t& src)
{
} /* size: 0 */

// <0541A0B8> ../public/mathlib/mathlib.h:291
inline void matrix3x4a_t::operator=(const matrix3x4_t& src)
{
} /* size: 0 */

// <059D8A8A> ../public/mathlib/mathlib.h:293
void matrix3x4a_t::matrix3x4a_t(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23)
{
} /* size: 0 */

// <059D89D5> ../public/mathlib/mathlib.h:293
inline void matrix3x4a_t::matrix3x4a_t(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23)
{
} /* size: 0 */

// <06470699> ../public/mathlib/mathlib.h:303
void matrix3x4a_t::matrix3x4a_t()
{
} /* size: 0 */

// <06470680> ../public/mathlib/mathlib.h:303
inline void matrix3x4a_t::matrix3x4a_t()
{
} /* size: 0 */

// <06353602> ../public/mathlib/mathlib.h:304
inline void TypeIsAlignedForSIMD(void)
{
} /* size: 0 */

// <05A24F3A> ../public/mathlib/mathlib.h:307
inline void matrix3x4a_t::SIMDRow(uint nIdx)
{
} /* size: 0 */

// <05B4B83C> ../public/mathlib/mathlib.h:323
// variables: 2
inline void matrix3x4_t::ScaleUpper3x3Matrix(float flScale)
{
	{
		int i; // 325
		{
			int j; // 327
		}
	}
} /* size: 0 */

// <005DD469> ../public/mathlib/mathlib.h:369
inline vec_t DotProduct(const vec_t* v1, const vec_t* v2)
{
} /* size: 0 */

// <05979DB8> ../public/mathlib/mathlib.h:405
inline float VectorMaximum(const Vector& v)
{
} /* size: 0 */

// <011A37B0> ../public/mathlib/mathlib.h:430
inline void VectorScale(const float* in, vec_t scale, float* out)
{
} /* size: 0 */

// <0596B6A2> ../../public/mathlib/mathlib.h:452
inline void VectorMA(const Vector& start, float scale, const Vector& direction, Vector& dest)
{
} /* size: 0 */

// <011A3720> ../public/mathlib/mathlib.h:459
inline void VectorMA(const Vector2D& vStart, float flScale, const Vector2D& vDirection, Vector2D& vDest)
{
} /* size: 0 */

// <059D883D> ../public/mathlib/mathlib.h:521
inline void SinCos2Scaled(const vec_t* pRadians, float fScale, vec_t* pSines, vec_t* pCosines)
{
} /* size: 0 */

// <059D87F5> ../public/mathlib/mathlib.h:557
inline void SinCos3Scaled(const VectorAligned& vaRadians, float fScale, VectorAligned* pSines, VectorAligned* pCosines)
{
} /* size: 0 */

// <05C98B38> ../public/mathlib/mathlib.h:576
inline int Square<int>(const int& a)
{
} /* size: 0 */

// <05976952> ../public/mathlib/mathlib.h:576
inline Vector Square<Vector>(const Vector& a)
{
} /* size: 0 */

// <02E1E1BD> ../public/mathlib/mathlib.h:576
inline float Square<float>(const float& a)
{
} /* size: 0 */

// <009DC024> ../public/mathlib/mathlib.h:599
void VectorTransform(const float *, const matrix3x4_t &, float *)
{
} /* size: 0 */

// <00FF919E> ../public/mathlib/mathlib.h:600
void VectorITransform(const float *, const matrix3x4_t &, float *)
{
} /* size: 0 */

// <009DC000> ../public/mathlib/mathlib.h:601
void VectorRotate(const float *, const matrix3x4_t &, float *)
{
} /* size: 0 */

// <01AD0C30> ../public/mathlib/mathlib.h:603
void VectorRotate(const Vector &, const Quaternion &, Vector &)
{
} /* size: 0 */

// <0594A5E0> ../../public/mathlib/mathlib.h:604
void VectorIRotate(const float *, const matrix3x4_t &, float *)
{
} /* size: 0 */

// <01AD0F8B> ../public/mathlib/mathlib.h:613
VectorAligned VectorRotateSIMD(VectorAligned, const matrix3x4a_t &)
{
} /* size: 0 */

// <0125A462> ../public/mathlib/mathlib.h:614
VectorAligned VectorTransformSIMD(VectorAligned, const matrix3x4a_t &)
{
} /* size: 0 */

// <03E74463> ../public/mathlib/mathlib.h:624
void MatrixCopy(const matrix3x4_t &, matrix3x4_t &)
{
} /* size: 0 */

// <01259E52> ../public/mathlib/mathlib.h:626
void MatrixInvertTR(const matrix3x4_t &, matrix3x4_t &)
{
} /* size: 0 */

// <009DBFA9> ../public/mathlib/mathlib.h:629
void MatrixInvert(const matrix3x4_t &, matrix3x4_t &)
{
} /* size: 0 */

// <0263B3CA> ../public/mathlib/mathlib.h:640
inline void MatrixGetColumn(const matrix3x4_t& in, MatrixAxisType_t nColumn, Vector& out)
{
} /* size: 0 */

// <0547EE2C> ../public/mathlib/mathlib.h:645
inline void MatrixSetColumn(const Vector& in, MatrixAxisType_t nColumn, matrix3x4_t& out)
{
} /* size: 0 */

// <009DBF85> ../public/mathlib/mathlib.h:652
void ConcatTransforms(const matrix3x4_t &, const matrix3x4_t &, matrix3x4_t &)
{
} /* size: 0 */

// <01259F5B> ../public/mathlib/mathlib.h:654
void ConcatTransforms_Aligned(const matrix3x4a_t &, const matrix3x4a_t &, matrix3x4a_t &)
{
} /* size: 0 */

// <01354FC8> ../public/mathlib/mathlib.h:657
inline void MatrixMultiply(const matrix3x4_t& in1, const matrix3x4_t& in2, matrix3x4_t& out)
{
} /* size: 0 */

// <053E800F> ../public/mathlib/mathlib.h:667
void QuaternionSlerp(const Quaternion &, const Quaternion &, float, Quaternion &)
{
} /* size: 0 */

// <027EA83E> ../public/mathlib/mathlib.h:674
void QuaternionBlend(const QuaternionAligned &, const QuaternionAligned &, float, QuaternionAligned &)
{
} /* size: 0 */

// <027EA783> ../public/mathlib/mathlib.h:681
void QuaternionIdentityBlend(const Quaternion &, float, Quaternion &)
{
} /* size: 0 */

// <053E7F30> ../public/mathlib/mathlib.h:686
void QuaternionScale(const Quaternion &, float, Quaternion &)
{
} /* size: 0 */

// <053E7FCE> ../public/mathlib/mathlib.h:693
void QuaternionInvert(const Quaternion &, Quaternion &)
{
} /* size: 0 */

// <014ACBA0> ../public/mathlib/mathlib.h:694
float QuaternionNormalize(Quaternion &)
{
} /* size: 0 */

// <009DC12F> ../public/mathlib/mathlib.h:695
Quaternion QuaternionNormalize(const Quaternion &)
{
} /* size: 0 */

// <0261F4D7> ../public/mathlib/mathlib.h:696
void QuaternionMultiply(const Quaternion &, const Vector &, Vector &)
{
} /* size: 0 */

// <04AA2FA0> ../public/mathlib/mathlib.h:707
void QuaternionAverageExponential(Quaternion &, int, const Quaternion *, const float *)
{
} /* size: 0 */

// <00088647> ../public/mathlib/mathlib.h:711
Quaternion QuaternionLookAtFLU(const Vector &, const Vector &)
{
} /* size: 0 */

// <009DC10B> ../public/mathlib/mathlib.h:713
void QuaternionMatrix(const Quaternion &, const Vector &, matrix3x4_t &)
{
} /* size: 0 */

// <01AD0EC1> ../public/mathlib/mathlib.h:714
void QuaternionMatrix(const Quaternion &, const Vector &, const Vector &, matrix3x4_t &)
{
} /* size: 0 */

// <04998142> ../public/mathlib/mathlib.h:716
void QuaternionAngles(const Quaternion &, QAngle &)
{
} /* size: 0 */

// <000604FF> ../public/mathlib/mathlib.h:719
void AngleQuaternion(const QAngle &, Quaternion &)
{
} /* size: 0 */

// <01AD0C76> ../public/mathlib/mathlib.h:722
void QuaternionAxisAngle(const Quaternion &, Vector &, float &)
{
} /* size: 0 */

// <053E7F53> ../public/mathlib/mathlib.h:723
void AxisAngleQuaternion(const Vector &, float, Quaternion &)
{
} /* size: 0 */

// <00DF4C7A> ../public/mathlib/mathlib.h:724
Quaternion AxisAngleQuaternion(const Vector &, float)
{
} /* size: 0 */

// <01AD0C09> ../public/mathlib/mathlib.h:727
Quaternion BasisToQuaternionFLU(const Vector &, const Vector &, const Vector &)
{
} /* size: 0 */

// <00CA726F> ../public/mathlib/mathlib.h:733
void MatrixQuaternion(const matrix3x4_t &, Quaternion &)
{
} /* size: 0 */

// <02E0EAFB> ../public/mathlib/mathlib.h:763
Vector ComputeMatrixScale(const matrix3x4_t &)
{
} /* size: 0 */

// <017163D6> ../public/mathlib/mathlib.h:770
void QuaternionSM(float, const QuaternionAligned &, const QuaternionAligned &, QuaternionAligned &)
{
} /* size: 0 */

// <027EA816> ../public/mathlib/mathlib.h:774
void QuaternionMA(const QuaternionAligned &, float, const QuaternionAligned &, QuaternionAligned &)
{
} /* size: 0 */

// <05A590CC> ../public/mathlib/mathlib.h:780
inline bool QuaternionsAreEqualInternal(const Quaternion& src1, const Quaternion& src2, float flTolerance)
{
} /* size: 0 */

// <05A59080> ../public/mathlib/mathlib.h:794
// variable: 1
inline bool QuaternionsAreEqual(const Quaternion& src1, const Quaternion& src2, float flTolerance)
{
	Quaternion src2neg; // 800
} /* size: 0, variables: 1 */

// <0311A69E> ../public/mathlib/mathlib.h:864
const Quaternion  RotateBetween(const Vector &, const Vector &)
{
} /* size: 0 */

// <04AB644F> ../public/mathlib/mathlib.h:881
// variables: 2
inline fltx4 QuaternionMultSIMD<>(const fltx4& p, const fltx4& q)
{
	fltx4 q2; // 884
	fltx4 result; // 884
} /* size: 0, variables: 2 */

// <04AE4845> ../public/mathlib/mathlib.h:896
// variables: 3
inline const QuaternionAligned  QuaternionMultAligned(const Quaternion& p, const Quaternion& q)
{
	QuaternionAligned qt; // 898
	fltx4 fl4p; // 899
	fltx4 fl4q; // 900
} /* size: 0, variables: 3 */

// <0178F9F2> ../public/mathlib/mathlib.h:926
// variables: 2
inline Quaternion BuildRotateBetweenVectorsQuaternion(const Vector& vFrom, const Vector& vTo)
{
	Quaternion qDifference; // 928
	Vector vHalfVector; // 929
} /* size: 0, variables: 2 */

// <00D24820> ../public/mathlib/mathlib.h:1017
// variable: 1
inline const matrix3x4_t  operator*(const matrix3x4_t& in1, const matrix3x4_t& in2)
{
	matrix3x4_t out; // 1019
} /* size: 0, variables: 1 */

// <059D86E6> ../public/mathlib/mathlib.h:1039
inline const Vector  MatrixGetColumn(const matrix3x4_t& in, MatrixAxisType_t nColumn)
{
} /* size: 0 */

// <0596B629> ../../public/mathlib/mathlib.h:1046
inline float MatrixRowDotProduct(const matrix3x4_t& in1, int row, const Vector& in2)
{
} /* size: 0 */

// <0596B5EA> ../../public/mathlib/mathlib.h:1052
inline float MatrixColumnDotProduct(const matrix3x4_t& in1, int col, const Vector& in2)
{
} /* size: 0 */

// <059D86C3> ../public/mathlib/mathlib.h:1063
inline float anglemod(float a)
{
} /* size: 0 */

// <00D24777> ../public/mathlib/mathlib.h:1070
// variables: 4
inline QAngle Lerp<QAngle>(float flPercent, const QAngle& q1, const QAngle& q2)
{
	Quaternion src; // 1076
	Quaternion dest; // 1076
	Quaternion result; // 1082
	QAngle output; // 1088
} /* size: 0, variables: 4 */

// <045002CC> ../public/mathlib/mathlib.h:1098
inline int Wrap(int x, int nLimit)
{
} /* size: 0 */

// <0260E1F9> ../public/mathlib/mathlib.h:1153
void AngleVectorsForward(const QAngle &, Vector *)
{
} /* size: 0 */

// <05801361> ../../public/mathlib/mathlib.h:1154
void AngleVectorsFLU(const QAngle &, Vector *, Vector *, Vector *)
{
} /* size: 0 */

// <02E0EF22> ../public/mathlib/mathlib.h:1156
void AngleMatrix(const QAngle &, matrix3x4_t &)
{
} /* size: 0 */

// <00C13FB0> ../public/mathlib/mathlib.h:1159
void AngleMatrix(const QAngle &, const Vector &, float, matrix3x4_t &)
{
} /* size: 0 */

// <0594A5AA> ../../public/mathlib/mathlib.h:1162
void AngleIMatrix(const QAngle &, matrix3x4_t &)
{
} /* size: 0 */

// <0260E218> ../public/mathlib/mathlib.h:1165
void VectorAngles(const Vector &, QAngle &)
{
} /* size: 0 */

// <0021613E> ../public/mathlib/mathlib.h:1167
void VectorMatrix(const Vector &, matrix3x4_t &)
{
} /* size: 0 */

// <0311A60E> ../public/mathlib/mathlib.h:1169
void VectorVectorsFLU(const Vector &, Vector &, Vector &)
{
} /* size: 0 */

// <0583E60E> ../../public/mathlib/mathlib.h:1174
void MakeOrthonormalBasis(const Vector &, Vector &, Vector &)
{
} /* size: 0 */

// <00DF4A53> ../public/mathlib/mathlib.h:1179
void AngleVectors(const QAngle &, Vector *, Vector *, Vector *)
{
} /* size: 0 */

// <0583E59E> ../../public/mathlib/mathlib.h:1180
void VectorVectors(const Vector &, Vector &, Vector &)
{
} /* size: 0 */

// <000604BD> ../public/mathlib/mathlib.h:1183
void SetIdentityMatrix(matrix3x4_t &)
{
} /* size: 0 */

// <009DC1E4> ../public/mathlib/mathlib.h:1184
void SetScaleMatrix(float, float, float, matrix3x4_t &)
{
} /* size: 0 */

// <037DBF6F> ../public/mathlib/mathlib.h:1203
void MatrixTranspose(const matrix3x4_t &, matrix3x4_t &)
{
} /* size: 0 */

// <026B4911> ../public/mathlib/mathlib.h:1209
inline void PositionMatrix(const Vector& position, matrix3x4_t& mat)
{
} /* size: 0 */

// <00D1C87D> ../public/mathlib/mathlib.h:1215
inline void MatrixPosition(const matrix3x4_t& matrix, Vector& position)
{
} /* size: 0 */

// <00D0E8E8> ../public/mathlib/mathlib.h:1247
Vector MatrixNormalize(const matrix3x4_t &, matrix3x4_t &)
{
} /* size: 0 */

// <03926CA3> ../public/mathlib/mathlib.h:1249
void MatrixAngles(const matrix3x4_t &, QAngle &)
{
} /* size: 0 */

// <00C13F87> ../public/mathlib/mathlib.h:1257
void MatrixAngles(const matrix3x4_t &, QAngle &, Vector &, Vector &)
{
} /* size: 0 */

// <04AE47E7> ../public/mathlib/mathlib.h:1292
inline int VectorCompare(const Vector& v1, const Vector& v2)
{
} /* size: 0 */

// <05801343> ../../public/mathlib/mathlib.h:1369
void ClearBounds(Vector &, Vector &)
{
} /* size: 0 */

// <003C4FA2> ../public/mathlib/mathlib.h:1370
void AddPointToBounds(const Vector &, Vector &, Vector &)
{
} /* size: 0 */

// <0583E78A> ../../public/mathlib/mathlib.h:1414
bool SolveQuadratic(float, float, float, float &, float &)
{
} /* size: 0 */

// <0583E659> ../../public/mathlib/mathlib.h:1423
bool SolveInverseQuadraticMonotonic(float, float, float, float, float, float, float &, float &, float &)
{
} /* size: 0 */

// <00C1399E> ../public/mathlib/mathlib.h:1433
Vector VectorYawRotate(const Vector &, float)
{
} /* size: 0 */

// <017E8B62> ../public/mathlib/mathlib.h:1522
float SmoothCurve(float)
{
} /* size: 0 */

// <03EAD9A1> ../public/mathlib/mathlib.h:1543
inline float ExponentialDecay(float decayTo, float decayTime, float dt)
{
} /* size: 0 */

// <00D246C2> ../public/mathlib/mathlib.h:1559
// variable: 1
inline float SimpleSpline(float value)
{
	float valueSquared; // 1561
} /* size: 0, variables: 1 */

// <02F2D625> ../public/mathlib/mathlib.h:1616
inline long unsigned int RoundFloatToUnsignedLong(float f)
{
} /* size: 0 */

// <02F2D5CB> ../public/mathlib/mathlib.h:1640
// variables: 3
inline uint8 RoundFloatToByte(float f)
{
	uint nRet; // 1642
	const char   __FUNCTION__; // 63601
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1643
	}
} /* size: 0, variables: 2 */

// <01158EBB> ../public/mathlib/mathlib.h:1640
// variables: 3
inline uint8 RoundFloatToByte(float f)
{
	uint nRet; // 1642
	const char   __FUNCTION__; // 3573
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1643
	}
} /* size: 0, variables: 2 */

// <0068F64D> ../public/mathlib/mathlib.h:1640
// variables: 3
inline uint8 RoundFloatToByte(float f)
{
	uint nRet; // 1642
	const char   __FUNCTION__; // 52964
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1643
	}
} /* size: 0, variables: 2 */

// <0083DA1E> ../public/mathlib/mathlib.h:1640
// variables: 3
inline uint8 RoundFloatToByte(float f)
{
	uint nRet; // 1642
	const char   __FUNCTION__; // 32522
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1643
	}
} /* size: 0, variables: 2 */

// <0080A948> ../public/mathlib/mathlib.h:1640
// variables: 3
inline uint8 RoundFloatToByte(float f)
{
	uint nRet; // 1642
	const char   __FUNCTION__; // 45999
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1643
	}
} /* size: 0, variables: 2 */

// <00C07190> ../public/mathlib/mathlib.h:1640
// variables: 3
inline uint8 RoundFloatToByte(float f)
{
	uint nRet; // 1642
	const char   __FUNCTION__; // 45564
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1643
	}
} /* size: 0, variables: 2 */

// <00B0AB04> ../public/mathlib/mathlib.h:1717
float GammaToLinearFullRange(float)
{
} /* size: 0 */

// <02B736AB> ../public/mathlib/mathlib.h:1721
float SrgbLinearToGamma(float)
{
} /* size: 0 */

// <04703BB2> ../public/mathlib/mathlib.h:1723
inline float SrgbGammaToLinearByte(uint8 c)
{
} /* size: 0 */

// <02B73671> ../public/mathlib/mathlib.h:1732
Color LinearColorToSRGBColor(const Vector &)
{
} /* size: 0 */

// <02B7368E> ../public/mathlib/mathlib.h:1737
Vector4D EncodeRGBM(const Vector &)
{
} /* size: 0 */

// <03FF60C0> ../public/mathlib/mathlib.h:1744
Vector TurboColorRampLookupLinear(float)
{
} /* size: 0 */

// <01565A97> ../public/mathlib/mathlib.h:1781
void Catmull_Rom_Spline_Tangent(const Vector &, const Vector &, const Vector &, const Vector &, float, Vector &)
{
} /* size: 0 */

// <0269401A> ../public/mathlib/mathlib.h:1847
void Hermite_Spline(const Vector &, const Vector &, const Vector &, const Vector &, float, Vector &)
{
} /* size: 0 */

// <00F44AF7> ../public/mathlib/mathlib.h:2019
void GetInterpolationData(const float *, const float *, int, int, float, bool, float *, float *, float *)
{
} /* size: 0 */

// <02B735AC> ../public/mathlib/mathlib.h:2033
float CalcSqrDistanceToAABB(const Vector &, const Vector &, const Vector &)
{
} /* size: 0 */

// <0583E6FD> ../../public/mathlib/mathlib.h:2041
Vector ClosestPointOnSphere(const Vector &, float, const Vector &)
{
} /* size: 0 */

// <003C4FE8> ../public/mathlib/mathlib.h:2044
float CalcDistanceToAABB(const Vector &, const Vector &, const Vector &)
{
} /* size: 0 */

// <033A8044> ../public/mathlib/mathlib.h:2058
float CalcDistanceToPlane(const Vector &, const Vector &, const Vector &)
{
} /* size: 0 */

// <0583E724> ../../public/mathlib/mathlib.h:2067
void CalcClosestPointOnLineSegment(const Vector &, const Vector &, const Vector &, Vector &, float *)
{
} /* size: 0 */

// <00128250> ../public/mathlib/mathlib.h:2088
void MathLib_Init(void)
{
} /* size: 0 */

// <00DF4C4D> ../public/mathlib/mathlib.h:2093
float AngleDistance(float, float)
{
} /* size: 0 */

// <00DF4A17> ../public/mathlib/mathlib.h:2094
float AngleNormalize(float)
{
} /* size: 0 */

// <06353537> ../public/mathlib/mathlib.h:2120
// variable: 1
inline float BoxSurfaceArea(const Vector& vecBoxMin, const Vector& vecBoxMax)
{
	Vector boxdim; // 2122
} /* size: 0, variables: 1 */

// <00B0AB21> ../public/mathlib/mathlib.h:2137
void TransformAABB(const matrix3x4_t &, const Vector &, const Vector &, Vector &, Vector &)
{
} /* size: 0 */

// <0596B3A3> ../../public/mathlib/mathlib.h:2180
// variables: 2
inline void MatrixITransformPlane(const matrix3x4_t& src, const cplane_t& inPlane, cplane_t& outPlane)
{
	Vector vecTranslation; // 2184
	Vector vecInvTranslation; // 2186
} /* size: 0, variables: 2 */

// <018760A4> ../public/mathlib/mathlib.h:2337
// variables: 14
inline float* UnpackNormal_UBYTE4(const unsigned int* pPackedNormal, float* pNormal, bool bIsTangent)
{
	uint8 cX; // 2339
	uint8 cY; // 2339
	float x; // 2351
	float y; // 2352
	float z; // 2353
	float zSignBit; // 2355
	float tSignBit; // 2356
	float zSign; // 2357
	float tSign; // 2358
	float xSignBit; // 2365
	float ySignBit; // 2366
	float xSign; // 2367
	float ySign; // 2368
	float oolen; // 2374
} /* size: 0, variables: 14 */

// <05AE4E9D> ../public/mathlib/mathlib.h:2401
// variables: 17
inline unsigned int* PackNormal_UBYTE4(float nx, float ny, float nz, unsigned int* pPackedNormal, bool bIsTangent, float binormalSign)
{
	float xSign; // 2403
	float ySign; // 2404
	float zSign; // 2405
	float tSign; // 2406
	const char   __FUNCTION__; // 40643
	float xSignBit; // 2409
	float ySignBit; // 2410
	float zSignBit; // 2411
	float tSignBit; // 2412
	float absX; // 2414
	float absY; // 2415
	float absZ; // 2416
	float xbits; // 2418
	float ybits; // 2419
	unsigned char cX; // 2435
	unsigned char cY; // 2436
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2407
	}
} /* size: 0, variables: 16 */

// <02C8FBC2> ../public/mathlib/mathlib.h:2401
// variables: 17
inline unsigned int* PackNormal_UBYTE4(float nx, float ny, float nz, unsigned int* pPackedNormal, bool bIsTangent, float binormalSign)
{
	float xSign; // 2403
	float ySign; // 2404
	float zSign; // 2405
	float tSign; // 2406
	const char   __FUNCTION__; // 6877
	float xSignBit; // 2409
	float ySignBit; // 2410
	float zSignBit; // 2411
	float tSignBit; // 2412
	float absX; // 2414
	float absY; // 2415
	float absZ; // 2416
	float xbits; // 2418
	float ybits; // 2419
	unsigned char cX; // 2435
	unsigned char cY; // 2436
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2407
	}
} /* size: 0, variables: 16 */

// <014797FA> ../public/mathlib/mathlib.h:2401
// variables: 17
inline unsigned int* PackNormal_UBYTE4(float nx, float ny, float nz, unsigned int* pPackedNormal, bool bIsTangent, float binormalSign)
{
	float xSign; // 2403
	float ySign; // 2404
	float zSign; // 2405
	float tSign; // 2406
	const char   __FUNCTION__; // 62597
	float xSignBit; // 2409
	float ySignBit; // 2410
	float zSignBit; // 2411
	float tSignBit; // 2412
	float absX; // 2414
	float absY; // 2415
	float absZ; // 2416
	float xbits; // 2418
	float ybits; // 2419
	unsigned char cX; // 2435
	unsigned char cY; // 2436
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2407
	}
} /* size: 0, variables: 16 */

// <0584C697> ../../public/mathlib/mathlib.h:2484
inline float RelativeLuminance(const Vector& vRGB)
{
} /* size: 0 */

// <03056CE2> ../public/mathlib/mathlib.h:2517
void RGBtoHSV(const Vector &, Vector &)
{
} /* size: 0 */

// <02B73871> ../public/mathlib/mathlib.h:2532
void HSLtoRGB(const Vector &, Vector &)
{
} /* size: 0 */

// <059EF052> ../public/mathlib/mathlib.h:2538
inline bool CloseEnough(float a, float b, float epsilon)
{
} /* size: 0 */

// <00E87FDC> ../public/mathlib/mathlib.h:2549
inline bool CloseEnough(const Vector& a, const Vector& b, float epsilon)
{
} /* size: 0 */

// <00C5C858> ../public/mathlib/mathlib.h:2563
bool AlmostEqual(float, float, int)
{
} /* size: 0 */

// <06D52552> ../../public/mathlib/mathlib.h:2608
// variable: 1
inline float Approach(float target, float value, float speed)
{
	float delta; // 2610
} /* size: 0, variables: 1 */

// <00DF48C8> ../public/mathlib/mathlib.h:2628
void CriticallyDampedSpring(VectorAligned &, VectorAligned &, float, float)
{
} /* size: 0 */

// <01AD0A87> ../public/mathlib/mathlib.h:2638
void PlaneEquation(const Vector *, int, Vector *, float *)
{
} /* size: 0 */

// <0596B36D> ../../public/mathlib/mathlib.h:2644
inline void matrix3x4_t::InitFromQAngles(const QAngle& angles, const Vector& vPosition)
{
} /* size: 0 */

// <05A100D0> ../public/mathlib/mathlib.h:2657
inline void matrix3x4_t::InitFromQuaternion(const Quaternion& orientation, const Vector& vPosition)
{
} /* size: 0 */

// <00BB1342> ../public/mathlib/mathlib.h:2662
inline void matrix3x4_t::InitFromDiagonal(const Vector& vDiagonal)
{
} /* size: 0 */

// <00BB1319> ../public/mathlib/mathlib.h:2671
inline void matrix3x4_t::InitFromQuaternion(const Quaternion& orientation)
{
} /* size: 0 */

// <00D1C861> ../public/mathlib/mathlib.h:2673
inline void matrix3x4_t::ToQuaternion()
{
} /* size: 0 */

// <059D8443> ../public/mathlib/mathlib.h:2678
// variable: 1
inline void matrix3x4_t::ToQAngle()
{
	QAngle tmp; // 2680
} /* size: 0, variables: 1 */

// <00A1A615> ../public/mathlib/mathlib.h:2685
inline void matrix3x4_t::SetToZero()
{
} /* size: 0 */

// <0580D806> ../../public/mathlib/mathlib.h:2690
inline void matrix3x4_t::SetToIdentity()
{
} /* size: 0 */

// <05B4B752> ../public/mathlib/mathlib.h:2705
inline void matrix3x4_t::TransformVector(const Vector& v0)
{
} /* size: 0 */

// <060E1D43> ../public/mathlib/mathlib.h:2710
inline void matrix3x4a_t::TransformVector(const Vector& v0)
{
} /* size: 0 */

// <060E1D1B> ../public/mathlib/mathlib.h:2730
inline void matrix3x4a_t::RotateVector(const Vector& v0)
{
} /* size: 0 */

// <01B54014> ../public/mathlib/mathlib.h:2735
inline void matrix3x4a_t::RotateVector(const VectorAligned& v0)
{
} /* size: 0 */

// <059D841B> ../public/mathlib/mathlib.h:2740
inline void matrix3x4_t::RotateVector(const Vector& v0)
{
} /* size: 0 */

// <0596B31D> ../../public/mathlib/mathlib.h:2745
inline void matrix3x4_t::TransformVectorByInverse(const Vector& v0)
{
} /* size: 0 */

// <05989D80> ../public/mathlib/mathlib.h:2750
// variable: 1
inline void matrix3x4_t::RotateVectorByInverse(const Vector& v0)
{
	Vector tmp; // 2752
} /* size: 0, variables: 1 */

// <059D83F2> ../public/mathlib/mathlib.h:2762
inline void matrix3x4_t::GetColumn(MatrixAxisType_t nColumn)
{
} /* size: 0 */

// <059D83BC> ../public/mathlib/mathlib.h:2767
inline void matrix3x4_t::SetColumn(const Vector& vColumn, MatrixAxisType_t nColumn)
{
} /* size: 0 */

// <037EF974> ../public/mathlib/mathlib.h:2779
// variable: 1
inline void matrix3x4_t::Transposed()
{
	matrix3x4_t out; // 2781
} /* size: 0, variables: 1 */

// <03AF7B10> ../public/mathlib/mathlib.h:2791
// variable: 1
inline void matrix3x4_t::InverseTR()
{
	matrix3x4_t out; // 2793
} /* size: 0, variables: 1 */

// <018644C7> ../public/mathlib/mathlib.h:2848
inline void QAngle::ToQuaternion()
{
} /* size: 0 */

// <00D1C845> ../public/mathlib/mathlib.h:2853
inline void matrix3x4_t::GetDeterminant()
{
} /* size: 0 */

// <009DBFDE> ../public/mathlib/mathlib.h:2920
const matrix3x4_t  ScaleMatrix(const Vector &, const matrix3x4_t &)
{
} /* size: 0 */

