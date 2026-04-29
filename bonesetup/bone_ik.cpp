
//
// bonesetup/bone_ik.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 27
//

// <0263D187> bonesetup/bone_ik.cpp:60
void findD(float a, float b, float c)
{
} /* size: 0 */

// <0263D1CB> bonesetup/bone_ik.cpp:63
void findE(float a, float d)
{
} /* size: 0 */

// <0263333C> bonesetup/bone_ik.cpp:70
// variables: 7
// function calls: 8
void C2JointIKSolver::solve(float flLinkLengthA, float flLinkLengthB, const float* vEndEffectorPositionP, const float* vAimPositionD, float* vKneePositionQ)
{
	float R; // 72
	float r; // 75
	float d; // 76
	float e; // 77
	float S; // 78
	{
		int i; // 137
		dot(const float* a,
			const float* b);  // 138
	}
	rot(const float* M,
		const float* src,
		float* dst);  // 74
	findD(float a,
		float b,
		float c);  // 76
	dot(const float* a,
		const float* b);  // 122
	length(const float* v); // 75
	findE(float a,
		float d);  // 77
	{
		int i; // 137
		dot(const float* a,
			const float* b);  // 138
	}
	rot(const float* M,
		const float* src,
		float* dst);  // 79
} /* size: 425, variables: 5, inline expansions: 6 (363 bytes) */

// <026331E3> bonesetup/bone_ik.cpp:88
// variables: 5
// function calls: 2
void C2JointIKSolver::defineM(const float* P, const float* D)
{
	float* X; // 90
	float* Y; // 90
	float* Z; // 90
	int i; // 93
	float dDOTx; // 100
	dot(const float* a,
		const float* b);  // 100
	cross(const float* a,
		const float* b,
		float* c);  // 107
} /* size: 291, variables: 5, inline expansions: 2 (132 bytes) */

// <0263D217> bonesetup/bone_ik.cpp:120
void dot(const float* a, const float* b)
{
} /* size: 0 */

// <0263D248> bonesetup/bone_ik.cpp:122
// function call: 1
void length(const float* v)
{
	dot(const float* a,
		const float* b);  // 122
} /* size: 0, inline expansions: 1 (0 bytes) */

// <026331A7> bonesetup/bone_ik.cpp:122
void length(const float* v)
{
} /* size: 0 */

// <026330FA> bonesetup/bone_ik.cpp:124
// variables: 2
// function calls: 2
void normalize(float* v)
{
	float norm; // 125
	{
		int i; // 126
	}
	dot(const float* a,
		const float* b);  // 122
	length(const float* v); // 125
} /* size: 79, variables: 1, inline expansions: 2 (84 bytes) */

// <0263D2AF> bonesetup/bone_ik.cpp:130
void cross(const float* a, const float* b, float* c)
{
} /* size: 0 */

// <0263D2E7> bonesetup/bone_ik.cpp:136
// variable: 1
// function call: 1
void rot(const float* M, const float* src, float* dst)
{
	{
		int i; // 137
		dot(const float* a,
			const float* b);  // 138
	}
} /* size: 0 */

// <0263308F> bonesetup/bone_ik.cpp:136
// variable: 1
void rot(const float* M, const float* src, float* dst)
{
	{
		int i; // 137
	}
} /* size: 0 */

// <02632896> bonesetup/bone_ik.cpp:174
// variables: 2
bool BuildKneeParametersFor2JointIK(const CTransform& xformWsThighBone, const CTransform& xformWsKneeBone, const CTransform& xformWsFootBone, Vector& vWsKneePosition, Vector& vWsKneeDirection)
{
	const Vector  vWorldFoot; // 176
	const Vector  vWorldThigh; // 177
} /* size: 0, variables: 2 */

// <02632313> bonesetup/bone_ik.cpp:186
// variables: 2
// function calls: 26
void IKSolve_Perlin2Bone(CTransform& xformWsThighBone, CTransform& xformWsKneeBone, CTransform& xformWsFootBone, const Vector& vTargetFootPosition, bool bPositiveXPointsToChild)
{
	Vector vWorldKnee; // 188
	Vector vWsKneeDirection; // 189
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 176
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 177
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 178
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 176
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 177
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 178
	Vector::operator=(
			const Vector& vOther);  // 178
	BuildKneeParametersFor2JointIK(const CTransform& xformWsThighBone,
					const CTransform& xformWsKneeBone,
					const CTransform& xformWsFootBone,
					Vector& vWsKneePosition,
					Vector& vWsKneeDirection);  // 191
} /* size: 228, variables: 2, inline expansions: 26 (157 bytes) */

// <0262E6A9> bonesetup/bone_ik.cpp:199
// variables: 35
// function calls: 259
void IKSolve_Perlin2Bone(CTransform& xformWsThigh, CTransform& xformWsKnee, CTransform& xformWsFoot, const Vector& vWsTargetFootPosition, const Vector& vWsTargetKneePosition, const Vector& vWsPoleVectorDirection, bool bPositiveXPointsToChild)
{
	const Vector  vWsThighPosition; // 210
	const Vector  vWsKneePosition; // 211
	const Vector  vWsFootPosition; // 212
	Vector vThighToTargetFootDelta; // 214
	Vector vThighToTargetKneeDelta; // 215
	const float  flKneeToThighLength; // 217
	const float  flFootToKneeLength; // 218
	float flMinDistance; // 229
	C2JointIKSolver ik; // 259
	{
		float flSphereRadius; // 240
		const float  flMax; // 242
		const Vector  vWsPoleVector; // 244
		CLabelledDebugHelper* pDebugHelper; // 246
		Vector::Normalized(); // 244
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 242
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 242
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 244
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 244
		CUtlString::CUtlString(
				const char* pString);  // 248
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 160
		VertexColor_t::operator*(
				float flScale);  // 248
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 248
		CUtlString::~CUtlString(); // 248
		CUtlString::CUtlString(
				const char* pString);  // 249
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 160
		VertexColor_t::operator*(
				float flScale);  // 249
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 249
		CUtlString::~CUtlString(); // 249
		CUtlString::CUtlString(
				const char* pString);  // 250
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 160
		VertexColor_t::operator*(
				float flScale);  // 250
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 250
		CUtlString::~CUtlString(); // 250
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 251
		CUtlString::CUtlString(
				const char* pString);  // 251
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 160
		VertexColor_t::operator*(
				float flScale);  // 251
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 251
		CUtlString::~CUtlString(); // 251
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 251
		CUtlString::CUtlString(
				const char* pString);  // 253
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 160
		VertexColor_t::operator*(
				float flScale);  // 253
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 253
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 253
		CUtlString::~CUtlString(); // 253
		CUtlString::CUtlString(
				const char* pString);  // 254
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 160
		VertexColor_t::operator*(
				float flScale);  // 254
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 254
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 254
		CUtlString::~CUtlString(); // 254
		CUtlString::CUtlString(
				const char* pString);  // 255
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 160
		VertexColor_t::operator*(
				float flScale);  // 255
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 255
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 255
		CUtlString::~CUtlString(); // 255
		CUtlString::CUtlString(
				const char* pString);  // 256
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 160
		VertexColor_t::operator*(
				float flScale);  // 256
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 256
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 256
		CUtlString::~CUtlString(); // 256
	}
	{
		Vector vThighForward; // 270
		Vector vKneeForward; // 273
		Vector vKneePosition; // 276
		Vector vFootPosition; // 277
		{
			float flSphereRadius; // 284
			CLabelledDebugHelper* pDebugHelper; // 285
			CUtlString::CUtlString(
					const char* pString);  // 287
			VectorAligned::operator fltx4(); // 71
			{
				fltx4 retVal; // 1478
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1479
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1481
			}
			SetWSIMD<>(fltx4 a,
					float f);  // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 287
			CUtlString::~CUtlString(); // 287
			CUtlString::CUtlString(
					const char* pString);  // 288
			VectorAligned::operator fltx4(); // 71
			{
				fltx4 retVal; // 1478
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1479
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1481
			}
			SetWSIMD<>(fltx4 a,
					float f);  // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 288
			CUtlString::~CUtlString(); // 288
			CUtlString::CUtlString(
					const char* pString);  // 289
			VectorAligned::operator fltx4(); // 71
			{
				fltx4 retVal; // 1478
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1479
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1481
			}
			SetWSIMD<>(fltx4 a,
					float f);  // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 289
			CUtlString::~CUtlString(); // 289
			CUtlString::CUtlString(
					const char* pString);  // 291
			VectorAligned::operator fltx4(); // 71
			{
				fltx4 retVal; // 1478
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1479
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1481
			}
			SetWSIMD<>(fltx4 a,
					float f);  // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 291
			VectorAligned::operator fltx4(); // 71
			{
				fltx4 retVal; // 1478
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1479
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1481
			}
			SetWSIMD<>(fltx4 a,
					float f);  // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 291
			CUtlString::~CUtlString(); // 291
			CUtlString::CUtlString(
					const char* pString);  // 292
			VectorAligned::operator fltx4(); // 71
			{
				fltx4 retVal; // 1478
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1479
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1481
			}
			SetWSIMD<>(fltx4 a,
					float f);  // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 292
			VectorAligned::operator fltx4(); // 71
			{
				fltx4 retVal; // 1478
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1479
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1481
			}
			SetWSIMD<>(fltx4 a,
					float f);  // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 292
			CUtlString::~CUtlString(); // 292
		}
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 273
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 276
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 277
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 279
		VectorAligned::operator fltx4(); // 68
		{
			fltx4 zzww; // 1414
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<250>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<250>(const fltx4& a,
					const fltx4& b);  // 1414
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<148>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<148>(const fltx4& a,
					const fltx4& b);  // 1415
		}
		SetWSIMD<>(const fltx4& a,
				const fltx4& w);  // 68
		VectorAligned::operator=(
				fltx4 src);  // 68
		CTransform::SetOrigin(
				const VectorAligned& vPos);  // 279
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 280
		VectorAligned::operator fltx4(); // 68
		{
			fltx4 zzww; // 1414
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<250>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<250>(const fltx4& a,
					const fltx4& b);  // 1414
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<148>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<148>(const fltx4& a,
					const fltx4& b);  // 1415
		}
		SetWSIMD<>(const fltx4& a,
				const fltx4& w);  // 68
		VectorAligned::operator=(
				fltx4 src);  // 68
		CTransform::SetOrigin(
				const VectorAligned& vPos);  // 280
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 282
	}
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 210
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 214
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 210
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 211
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 212
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 221
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 217
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 211
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 212
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 215
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 217
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 218
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 218
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 230
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 238
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 224
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 233
	Vector::operator=(
			const Vector& vOther);  // 233
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 235
} /* size: 4431, variables: 9, inline expansions: 76 (1373 bytes) */

// <0262AD34> bonesetup/bone_ik.cpp:303
// variables: 30
// function calls: 215
void IKSolve_Perlin2Bone(matrix3x4a_t& mWsThigh, matrix3x4a_t& mWsKnee, matrix3x4a_t& mWsFoot, const Vector& vWsTargetFootPosition, const Vector& vWsTargetKneePosition, const Vector& vWsPoleVectorDirection, bool bPositiveXPointsToChild)
{
	const Vector  vWsThighPosition; // 314
	const Vector  vWsKneePosition; // 315
	const Vector  vWsFootPosition; // 316
	Vector vThighToTargetFootDelta; // 318
	Vector vThighToTargetKneeDelta; // 319
	const float  flKneeToThighLength; // 321
	const float  flFootToKneeLength; // 322
	float flMinDistance; // 333
	C2JointIKSolver ik; // 363
	{
		float flSphereRadius; // 344
		const float  flMax; // 346
		const Vector  vWsPoleVector; // 348
		CLabelledDebugHelper* pDebugHelper; // 350
		Vector::Normalized(); // 348
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 346
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 346
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 348
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 348
		CUtlString::CUtlString(
				const char* pString);  // 352
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 160
		VertexColor_t::operator*(
				float flScale);  // 352
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 352
		CUtlString::~CUtlString(); // 352
		CUtlString::CUtlString(
				const char* pString);  // 353
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 160
		VertexColor_t::operator*(
				float flScale);  // 353
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 353
		CUtlString::~CUtlString(); // 353
		CUtlString::CUtlString(
				const char* pString);  // 354
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 160
		VertexColor_t::operator*(
				float flScale);  // 354
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 354
		CUtlString::~CUtlString(); // 354
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 355
		CUtlString::CUtlString(
				const char* pString);  // 355
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 160
		VertexColor_t::operator*(
				float flScale);  // 355
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 355
		CUtlString::~CUtlString(); // 355
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 355
		CUtlString::CUtlString(
				const char* pString);  // 357
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 160
		VertexColor_t::operator*(
				float flScale);  // 357
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 357
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 357
		CUtlString::~CUtlString(); // 357
		CUtlString::CUtlString(
				const char* pString);  // 358
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 160
		VertexColor_t::operator*(
				float flScale);  // 358
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 358
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 358
		CUtlString::~CUtlString(); // 358
		CUtlString::CUtlString(
				const char* pString);  // 359
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 160
		VertexColor_t::operator*(
				float flScale);  // 359
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 359
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 359
		CUtlString::~CUtlString(); // 359
		CUtlString::CUtlString(
				const char* pString);  // 360
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 160
		VertexColor_t::operator*(
				float flScale);  // 360
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 360
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 360
		CUtlString::~CUtlString(); // 360
	}
	{
		Vector vThighForward; // 374
		Vector vKneeForward; // 377
		Vector vKneePosition; // 380
		Vector vFootPosition; // 381
		{
			float flSphereRadius; // 388
			CLabelledDebugHelper* pDebugHelper; // 389
			CUtlString::CUtlString(
					const char* pString);  // 391
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 391
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 146
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 391
			CUtlString::~CUtlString(); // 391
			CUtlString::CUtlString(
					const char* pString);  // 392
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 392
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 146
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 392
			CUtlString::~CUtlString(); // 392
			CUtlString::CUtlString(
					const char* pString);  // 393
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 393
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 146
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 393
			CUtlString::~CUtlString(); // 393
			CUtlString::CUtlString(
					const char* pString);  // 395
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 395
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 146
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 395
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 395
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 146
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 395
			CUtlString::~CUtlString(); // 395
			CUtlString::CUtlString(
					const char* pString);  // 396
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 396
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 146
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 396
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 396
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 146
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 396
			CUtlString::~CUtlString(); // 396
		}
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 377
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 380
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 381
		matrix3x4_t::SetOrigin(
				const Vector& p);  // 383
		matrix3x4_t::SetOrigin(
				const Vector& p);  // 384
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 386
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 314
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 316
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 315
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 321
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 319
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 318
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 322
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 321
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 325
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 322
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 334
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 342
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 328
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 337
	Vector::operator=(
			const Vector& vOther);  // 337
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 339
} /* size: 4671, variables: 9, inline expansions: 52 (1383 bytes) */

// <0262AAEE> bonesetup/bone_ik.cpp:407
// function calls: 7
void AlignBoneToPointToNext(matrix3x4a_t& mCurrentBone, const matrix3x4a_t& mNextBone, bool bPositiveXPointsToChild)
{
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 409
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 409
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 409
} /* size: 109, inline expansions: 7 (66 bytes) */

// <0262940A> bonesetup/bone_ik.cpp:415
// variables: 35
// function calls: 100
void AlignTransformForwardAlongVector(CTransform& xform, const Vector& vAlignTo, bool bPositiveXPointsToChild)
{
	Vector vNewForward; // 427
	Vector vOldForward; // 436
	Quaternion qRotation; // 437
	Quaternion qOriginalRotation; // 440
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 421
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 435
	QuaternionAligned::GetForward(); // 391
	CTransform::GetForward(); // 436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 929
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 929
	Quaternion::Quaternion(); // 928
	Vector::LengthSqr(); // 930
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 932
	Vector::operator=(
			const Vector& vOther);  // 932
	DotProduct(const Vector& a,
			const Vector& b);  // 933
	BuildRotateBetweenVectorsQuaternion(const Vector& vFrom,
						const Vector& vTo);  // 437
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 351
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1694
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	Dot3SIMD<>(const fltx4& a,
			const fltx4& b);  // 359
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 360
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 361
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 362
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	MaskedAssign<>(const fltx4& ReplacementMask,
			const fltx4& a,
			const fltx4& b);  // 362
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 362
	VectorAligned::NormalizedSafe(
			const VectorAligned& v);  // 351
	VectorAligned::Normalized(); // 436
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 436
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 350
	CTransform::ToQuaternion(); // 440
	Quaternion::Quaternion(); // 2001
	operator*(const Quaternion& p,
			const Quaternion& q);  // 441
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 345
	CTransform::SetOrientation(
			const Quaternion& qOrientation);  // 441
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 431
	Vector::operator=(
			const Vector& vOther);  // 431
} /* size: 771, variables: 4, inline expansions: 65 (1449 bytes) */

// <026289C3> bonesetup/bone_ik.cpp:444
// variables: 6
// function calls: 42
void AlignMatrixForwardAlongVector(matrix3x4a_t& mMat, const Vector& vAlignTo, bool bPositiveXPointsToChild)
{
	Vector vNewForward; // 456
	Vector vOldForward; // 465
	Quaternion qRotation; // 468
	float flOriginalScale; // 473
	Vector vOriginalPosition; // 474
	Quaternion qOriginalRotation; // 475
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 450
	Vector::Vector(); // 465
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 642
	Vector::operator=(
			const Vector& vOther);  // 642
	MatrixGetColumn(const matrix3x4_t& in,
			MatrixAxisType_t nColumn,
			Vector& out);  // 466
	Vector::NormalizeInPlace(); // 467
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 929
	Quaternion::Quaternion(); // 928
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 929
	Vector::LengthSqr(); // 930
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 932
	DotProduct(const Vector& a,
			const Vector& b);  // 933
	Vector::operator=(
			const Vector& vOther);  // 932
	BuildRotateBetweenVectorsQuaternion(const Vector& vFrom,
						const Vector& vTo);  // 468
	Vector::Vector(); // 474
	Quaternion::Quaternion(); // 475
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 476
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 477
	Quaternion::Quaternion(); // 2001
	operator*(const Quaternion& p,
			const Quaternion& q);  // 477
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 460
	Vector::operator=(
			const Vector& vOther);  // 460
} /* size: 1038, variables: 6, inline expansions: 42 (1410 bytes) */

// <02628762> bonesetup/bone_ik.cpp:480
// variables: 3
// function calls: 4
void SolveTransform(const CModel* pModel, int nBone, matrix3x4a_t* pBoneToWorldArray, CTransform* pTransformArray)
{
	int nParent; // 487
	matrix3x4a_t worldToBone; // 495
	matrix3x4a_t local; // 498
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 495
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 498
} /* size: 0, variables: 3, inline expansions: 4 (0 bytes) */

// <0263C6E0> bonesetup/bone_ik.cpp:507
// variables: 3
// function call: 1
bool VectorsAreParallel(const Vector& vA, const Vector& vB, float flTolerance)
{
	Vector vANormalized; // 509
	Vector vBNormalized; // 511
	const float  flDot; // 514
	DotProduct(const Vector& a,
			const Vector& b);  // 514
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <02628702> bonesetup/bone_ik.cpp:507
// variables: 3
bool VectorsAreParallel(const Vector& vA, const Vector& vB, float flTolerance)
{
	Vector vANormalized; // 509
	Vector vBNormalized; // 511
	const float  flDot; // 514
} /* size: 0, variables: 3 */

// <0263C7B5> bonesetup/bone_ik.cpp:524
// variables: 11
// function calls: 21
Quaternion QuaternionRotateVectorAIntoB(const Vector& a, const Vector& b, float flEps)
{
	Quaternion q; // 545
	const float  flALengthSqr; // 547
	const float  flBLengthSqr; // 548
	const float  flFactorF; // 549
	Vector::LengthSqr(); // 547
	Vector::LengthSqr(); // 548
	{
		const float  flDotAB; // 553
		const float  flDotABScaled; // 554
		Vector vPivot; // 555
		const float  flTheta; // 568
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 555
		DotProduct(const Vector& a,
				const Vector& b);  // 553
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 557
		{
			const MatrixAxisType_t  dominantIndex; // 561
			{
				const Vector  vAbs; // 529
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 529
			}
			operator()(const class* __closure,
					const Vector& v); // 561
			Vector::operator[](
					int i);  // 563
			Vector::operator[](
					int i);  // 562
			Vector::operator[](
					int i);  // 562
			Vector::operator[](
					int i);  // 564
			Vector::operator[](
					int i);  // 563
		}
		RAD2DEG(float flRadians); // 568
		Vector::NormalizeInPlace(); // 571
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 568
	}
} /* size: 0, variables: 4, inline expansions: 2 (0 bytes) */

// <0262857E> bonesetup/bone_ik.cpp:524
// variables: 10
Quaternion QuaternionRotateVectorAIntoB(const Vector& a, const Vector& b, float flEps)
{
	const   DominantAxisFn; // 527
	Quaternion q; // 545
	const float  flALengthSqr; // 547
	const float  flBLengthSqr; // 548
	const float  flFactorF; // 549
	{
		const float  flDotAB; // 553
		const float  flDotABScaled; // 554
		Vector vPivot; // 555
		const float  flTheta; // 568
		{
			const MatrixAxisType_t  dominantIndex; // 561
		}
	}
} /* size: 0, variables: 5 */

// <02626DB6> bonesetup/bone_ik.cpp:578
// variables: 28
// function calls: 92
void MayaIk2BSolve(const Vector& vStartPos, const Vector& vMidPos, const Vector& vEndEffectorPos, const Vector& vHandlePos, const Vector& vPoleVector, double flTwistValue, Quaternion& qStart, Quaternion& qMid, float flEps)
{
	const Vector  v1; // 590
	const Vector  v2; // 592
	const Vector  vE; // 594
	const Vector  vH; // 596
	const float  fla; // 598
	const float  flb; // 599
	const Vector  vO; // 602
	const float  flVectorAngle12; // 605
	const Vector  vVectorCross12; // 608
	const float  flLengthHSquared; // 610
	const float  flCosTheta; // 613
	const float  flTheta; // 615
	const char   __FUNCTION__; // 64273
	Vector v2Rot; // 623
	const Vector  vERot; // 627
	Quaternion vqEH; // 630
	Vector v1Rot; // 633
	Quaternion vqNP; // 643
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 619
	}
	{
		const Vector  vN; // 650
		const Vector  vP; // 653
		const float  flDotNP; // 655
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 647
		}
		{
			const float  flLengthH; // 660
			const Vector  vHNormalized; // 661
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 661
		}
		DotProduct(const Vector& a,
				const Vector& b);  // 650
		DotProduct(const Vector& a,
				const Vector& b);  // 653
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 650
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 650
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 653
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 653
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 655
		DotProduct(const Vector& a,
				const Vector& b);  // 655
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 655
	}
	{
		const float  flLengthH; // 676
		const Vector  vHNormalized; // 677
		Quaternion vqTwist; // 679
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 677
		RAD2DEG(float flRadians); // 680
		Quaternion::Quaternion(); // 679
		Quaternion::Quaternion(); // 2001
		operator*(const Quaternion& p,
				const Quaternion& q);  // 683
	}
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 590
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 592
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 594
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 596
	Vector::Normalized(); // 605
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 599
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 598
	DotProduct(const Vector& a,
			const Vector& b);  // 602
	DotProduct(const Vector& a,
			const Vector& b);  // 602
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 602
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 602
	Vector::Normalized(); // 605
	DotProduct(const Vector& a,
			const Vector& b);  // 605
	Vector::LengthSqr(); // 610
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 608
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 613
	RAD2DEG(float flRadians); // 618
	Vector::Normalized(); // 618
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 619
	Vector::Vector(); // 623
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 627
	Vector::Vector(); // 633
	DotProduct(const Vector& a,
			const Vector& b);  // 514
	VectorsAreParallel(const Vector& vA,
				const Vector& vB,
				float flTolerance);  // 636
	Quaternion::Quaternion(); // 2001
	operator*(const Quaternion& p,
			const Quaternion& q);  // 670
} /* size: 0, variables: 18, inline expansions: 59 (0 bytes) */

// <026263DF> bonesetup/bone_ik.cpp:687
// variables: 7
// function calls: 38
void CalculateFixupRotation(const matrix3x4a_t* mBoneToWorlds, const Vector& vMsPole, int nCurrentBoneIndex, int nNextBoneIndex, Quaternion& qOutFixupRotation)
{
	Vector vMsDesiredForward; // 689
	const Vector  vMsPoleNormalized; // 708
	const Vector  vMsDesiredRight; // 709
	const Vector  vMsDesiredUp; // 710
	const Quaternion  qDesired; // 711
	const Vector  vOrigin; // 713
	const Quaternion  qCurrent; // 715
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 255
	matrix3x4_t::GetForward(); // 698
	Vector::operator=(
			const Vector& vOther);  // 694
	Vector::LengthSqr(); // 701
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 708
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 708
	Vector::Normalized(); // 708
	Vector::Normalized(); // 709
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 709
	Vector::Normalized(); // 710
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 710
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 710
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 711
	Quaternion::Quaternion(); // 837
	MatrixQuaternion(const matrix3x4_t& mat); // 2675
	matrix3x4_t::ToQuaternion(); // 715
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 713
	Quaternion::Quaternion(); // 875
	QuaternionInvert(const Quaternion& p); // 716
	Quaternion::Quaternion(); // 2001
	operator*(const Quaternion& p,
			const Quaternion& q);  // 716
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 694
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 694
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 694
	Vector::Normalized(); // 694
} /* size: 0, variables: 7, inline expansions: 38 (0 bytes) */

// <02625539> bonesetup/bone_ik.cpp:721
// variables: 15
// function calls: 64
void BuildPoleVector(const matrix3x4a_t& mWsThigh, const Vector& vWsKnee, const Vector& vWsFoot, Vector& vTsPole)
{
	const matrix3x4a_t  mWsToTs; // 730
	const Vector  vTsKneeDirection; // 731
	const Vector  vTsFootDirection; // 732
	const float  flDot; // 734
	const bool  bKneeIsBentEnough; // 735
	const float  flAmountTowardsFeet; // 742
	const float  flPushoutAmount; // 744
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 724
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 724
	Vector::LengthSqr(); // 724
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 724
	Vector::LengthSqr(); // 724
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 724
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 724
	Vector::LengthSqr(); // 724
	matrix3x4_t::matrix3x4_t(); // 1027
	MatrixInvert(const matrix3x4_t& in); // 730
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 730
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1011
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_load_ss(const float* __P); // 1012
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 2712
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 2712
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 42
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 2712
	matrix3x4a_t::TransformVector(
			const Vector& v0);  // 731
	Vector::Normalized(); // 731
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1011
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_load_ss(const float* __P); // 1012
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 2712
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 2712
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 42
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 2712
	matrix3x4a_t::TransformVector(
			const Vector& v0);  // 732
	Vector::Normalized(); // 732
	DotProduct(const Vector& a,
			const Vector& b);  // 734
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 745
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 745
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 745
	Vector::operator=(
			const Vector& vOther);  // 745
} /* size: 0, variables: 7, inline expansions: 54 (0 bytes) */

// <02624907> bonesetup/bone_ik.cpp:750
// variables: 16
// function calls: 40
void CalculatePoleVectorOrUseDefault(const CModel* pModel, const CUtlVector<int, CUtlMemory<int, int> >& boneIndicesInChain, int nIndexInChain, int nBoneIndex, const matrix3x4a_t* mBonesToWorlds, Vector& vMsLastPoleAsFallback)
{
	const int  nNumJoints; // 752
	Vector vMsPole; // 754
	const char   __FUNCTION__; // 64684
	{
		const matrix3x4a_t& m1; // 758
		const Vector  v1; // 759
		int nNextIndexInChain; // 762
		int nNextBoneIndex; // 764
		Vector v2; // 765
		{
			int nLastIndexInChain; // 779
			{
				int nLastBoneIndex; // 781
				const Vector& v3; // 782
				CUtlMemory<int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 791
				CUtlMemory<int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 781
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 161
				matrix3x4_t::GetOrigin(); // 782
				CUtlMemory<int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 791
				{
					fltx4 x000; // 1010
					fltx4 y000; // 1011
					fltx4 z000; // 1012
					fltx4 x0y0; // 1013
					_mm_load_ss(const float* __P); // 1010
					_mm_load_ss(const float* __P); // 1012
					_mm_load_ss(const float* __P); // 1011
					_mm_movelh_ps(__m128 __A,
							__m128 __B);  // 1013
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1014
				}
				LoadUnaligned3SIMD<>(const void* pSIMD); // 2712
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 2712
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 42
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 42
				VectorAligned::AsVector(); // 2712
				matrix3x4a_t::TransformVector(
						const Vector& v0);  // 786
				Vector::operator=(
						const Vector& vOther);  // 786
			}
		}
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 759
		CUtlMemory<int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 770
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 771
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 773
		Vector::operator=(
				const Vector& vOther);  // 771
		Vector::LengthSqr(); // 773
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 814
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 752
	Vector::LengthSqr(); // 800
	Vector::LengthSqr(); // 802
	Vector::LengthSqr(); // 814
	Vector::operator=(
			const Vector& vOther);  // 815
	Vector::operator=(
			const Vector& vOther);  // 805
	Vector::operator=(
			const Vector& vOther);  // 820
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

