
//
// modellib/model.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 327
//

// <04AEC49F> modellib/model.cpp:40
// function call: 1
void CModelSkeleton::NumBones()
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
} /* size: 8, inline expansions: 1 (0 bytes) */

// <04ADF320> modellib/model.cpp:40
void CModelSkeleton::NumBones()
{
} /* size: 0 */

// <04AEC4F8> modellib/model.cpp:47
// function calls: 3
void CModelSkeleton::GetParent(int nBoneIndex)
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
	CUtlMemory<short int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 50
} /* size: 38, inline expansions: 3 (6 bytes) */

// <04ADF2F8> modellib/model.cpp:47
void CModelSkeleton::GetParent(int nBoneIndex)
{
} /* size: 0 */

// <04AEC5BF> modellib/model.cpp:56
// function calls: 4
void CModelSkeleton::GetFlags(int nBoneIndex)
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 58
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
			int i);  // 59
	CModelSkeleton::GetFlags(
		int nBoneIndex);  // 56
} /* size: 0, inline expansions: 4 (0 bytes) */

// <04ADF2D0> modellib/model.cpp:56
void CModelSkeleton::GetFlags(int nBoneIndex)
{
} /* size: 0 */

// <04AEC6C9> modellib/model.cpp:65
// function calls: 6
void CModelSkeleton::GetBoneNameByIndex(int nBoneIndex)
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 67
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 68
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 68
	CModelSkeleton::GetBoneNameByIndex(
				int nBoneIndex);  // 65
} /* size: 0, inline expansions: 6 (0 bytes) */

// <04ADF2A8> modellib/model.cpp:65
void CModelSkeleton::GetBoneNameByIndex(int nBoneIndex)
{
} /* size: 0 */

// <04AEC820> modellib/model.cpp:74
// function calls: 4
void CModelSkeleton::Sphere(int nBoneIndex)
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 76
	CUtlMemory<float, int>::operator[](
			int i);  // 595
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 77
	CModelSkeleton::Sphere(
		int nBoneIndex);  // 74
} /* size: 0, inline expansions: 4 (0 bytes) */

// <04ADF280> modellib/model.cpp:74
void CModelSkeleton::Sphere(int nBoneIndex)
{
} /* size: 0 */

// <04AEC92A> modellib/model.cpp:83
// function calls: 5
void CModelSkeleton::GetPosParentSpace(int nBoneIndex)
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 85
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 87
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 86
	CModelSkeleton::GetPosParentSpace(
				int nBoneIndex);  // 83
} /* size: 0, inline expansions: 5 (0 bytes) */

// <04ADF258> modellib/model.cpp:83
void CModelSkeleton::GetPosParentSpace(int nBoneIndex)
{
} /* size: 0 */

// <04AECAA1> modellib/model.cpp:92
// function calls: 4
void CModelSkeleton::GetRotParentSpace(int nBoneIndex)
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 94
	CUtlMemory<Quaternion, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
			int i);  // 95
	CModelSkeleton::GetRotParentSpace(
				int nBoneIndex);  // 92
} /* size: 0, inline expansions: 4 (0 bytes) */

// <04ADF230> modellib/model.cpp:92
void CModelSkeleton::GetRotParentSpace(int nBoneIndex)
{
} /* size: 0 */

// <04ADF0BF> modellib/model.cpp:101
// function calls: 5
void CModelSkeleton::GetBindPoseParentTransform(int nBone, matrix3x4a_t& mBindPoseParent)
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 103
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 104
	CUtlMemory<Quaternion, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
			int i);  // 104
} /* size: 0, inline expansions: 5 (0 bytes) */

// <04ADED19> modellib/model.cpp:108
// variables: 2
// function calls: 13
void CModelSkeleton::GetBindPoseParentTransform(int nBone)
{
	{
		CTransform tBindPoseParent; // 112
		CUtlMemory<Quaternion, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
				int i);  // 112
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 112
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 30
		QuaternionAligned::QuaternionAligned(
					const Quaternion& rhs);  // 33
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
				float p3);  // 111
		VectorAligned::operator=(
				fltx4 src);  // 111
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 33
		VectorAligned::VectorAligned(); // 33
		CTransform::CTransform(
				const Vector& v,
				const Quaternion& q,
				float flScale);  // 112
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 110
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04ADE933> modellib/model.cpp:118
// variables: 2
// function calls: 13
void CModelSkeleton::GetBindPoseParentTransforms(int nCount, CTransform* pBindPoseParentTransforms)
{
	{
		int b; // 121
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 123
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 217
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 328
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
				float p3);  // 111
		VectorAligned::operator=(
				fltx4 src);  // 111
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 329
		CTransform::InitFromQuaternion(
					const Quaternion& orientation,
					const Vector& vPosition,
					float flScale);  // 123
		CUtlMemory<Quaternion, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
				int i);  // 123
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 120
} /* size: 123, inline expansions: 2 (0 bytes) */

// <04ADE4C1> modellib/model.cpp:128
// variables: 2
// function calls: 16
void CModelSkeleton::GetBindPoseParentTransforms(float flScale, int nCount, CTransform* pBindPoseParentTransforms)
{
	{
		int b; // 131
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 133
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 133
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 217
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 328
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
				float p3);  // 111
		VectorAligned::operator=(
				fltx4 src);  // 111
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 329
		CTransform::InitFromQuaternion(
					const Quaternion& orientation,
					const Vector& vPosition,
					float flScale);  // 133
		CUtlMemory<Quaternion, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
				int i);  // 133
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 130
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04ADDA0E> modellib/model.cpp:137
// variables: 6
// function calls: 42
void CModelSkeleton::GetBindPoseWorldTransform(const CTransform& skeletonToWorld, int nBoneIndex, CTransform* pBindPoseWorldTransform)
{
	const char   __FUNCTION__; // 36025
	CTransform tBindPoseBoneToParent; // 140
	CTransform tBindPoseToWorld; // 140
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 139
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 139
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 140
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 140
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 141
	CUtlMemory<Quaternion, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
			int i);  // 141
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 328
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
			float p3);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 329
	CTransform::InitFromQuaternion(
				const Quaternion& orientation,
				const Vector& vPosition,
				float flScale);  // 141
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
	CUtlMemory<short int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 50
	CModelSkeleton::GetParent(
			int nBoneIndex);  // 143
	CUtlMemory<Quaternion, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
			int i);  // 145
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 145
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
			float p3);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 329
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 328
	CTransform::InitFromQuaternion(
				const Quaternion& orientation,
				const Vector& vPosition,
				float flScale);  // 145
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 147
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 147
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
	CUtlMemory<short int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 50
	CModelSkeleton::GetParent(
			int nBoneIndex);  // 143
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 150
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 150
} /* size: 0, variables: 3, inline expansions: 40 (493 bytes) */

// <01E2287C> modellib/model.cpp:137
// variables: 6
// function calls: 42
void CModelSkeleton::GetBindPoseWorldTransform(const CTransform& skeletonToWorld, int nBoneIndex, CTransform* pBindPoseWorldTransform)
{
	const char   __FUNCTION__; // 43548
	CTransform tBindPoseBoneToParent; // 140
	CTransform tBindPoseToWorld; // 140
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 139
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 139
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 140
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 140
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 141
	CUtlMemory<Quaternion, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
			int i);  // 141
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 328
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
			float p3);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 329
	CTransform::InitFromQuaternion(
				const Quaternion& orientation,
				const Vector& vPosition,
				float flScale);  // 141
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
	CUtlMemory<short int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 50
	CModelSkeleton::GetParent(
			int nBoneIndex);  // 143
	CUtlMemory<Quaternion, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
			int i);  // 145
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 145
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
			float p3);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 329
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 328
	CTransform::InitFromQuaternion(
				const Quaternion& orientation,
				const Vector& vPosition,
				float flScale);  // 145
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 147
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 147
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
	CUtlMemory<short int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 50
	CModelSkeleton::GetParent(
			int nBoneIndex);  // 143
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 150
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 150
} /* size: 0, variables: 3, inline expansions: 40 (493 bytes) */

// <00A58851> modellib/model.cpp:137
// variables: 6
// function calls: 42
void CModelSkeleton::GetBindPoseWorldTransform(const CTransform& skeletonToWorld, int nBoneIndex, CTransform* pBindPoseWorldTransform)
{
	const char   __FUNCTION__; // 18273
	CTransform tBindPoseBoneToParent; // 140
	CTransform tBindPoseToWorld; // 140
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 139
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 139
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 140
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 140
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 141
	CUtlMemory<Quaternion, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
			int i);  // 141
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 328
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
			float p3);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 329
	CTransform::InitFromQuaternion(
				const Quaternion& orientation,
				const Vector& vPosition,
				float flScale);  // 141
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
	CUtlMemory<short int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 50
	CModelSkeleton::GetParent(
			int nBoneIndex);  // 143
	CUtlMemory<Quaternion, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
			int i);  // 145
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 145
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
			float p3);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 329
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 328
	CTransform::InitFromQuaternion(
				const Quaternion& orientation,
				const Vector& vPosition,
				float flScale);  // 145
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 147
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 147
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
	CUtlMemory<short int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 50
	CModelSkeleton::GetParent(
			int nBoneIndex);  // 143
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 150
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 150
} /* size: 0, variables: 3, inline expansions: 40 (0 bytes) */

// <04ADD4E4> modellib/model.cpp:153
// variable: 1
// function calls: 17
void CModelSkeleton::GetBindPoseWorldTransforms(const matrix3x4a_t& skeletonToWorld, int nCount, matrix3x4a_t* pBindPoseWorldTransforms)
{
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
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
			float p3);  // 111
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 310
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	matrix3x4_t::ToCTransform(); // 155
} /* size: 229, inline expansions: 16 (502 bytes) */

// <04ADCEC5> modellib/model.cpp:158
// variables: 6
// function calls: 22
void CModelSkeleton::GetBindPoseWorldTransforms(const CTransform& skeletonToWorld, float flScale, int nCount, CTransform* pBindPoseWorldTransforms)
{
	CTransform tBindPoseParent; // 160
	const char   __FUNCTION__; // 36052
	{
		int b; // 162
		{
			int nParent; // 166
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 167
			}
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 168
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 168
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
			CUtlMemory<short int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 50
			CModelSkeleton::GetParent(
					int nBoneIndex);  // 166
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 164
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
					float p3);  // 111
			CTransform::SetPositionAndScale(
						const Vector& v0,
						float flScale);  // 329
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 328
			CTransform::InitFromQuaternion(
						const Quaternion& orientation,
						const Vector& vPosition,
						float flScale);  // 164
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 164
			CUtlMemory<Quaternion, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
					int i);  // 164
		}
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 161
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <01E21D33> modellib/model.cpp:158
// variables: 6
// function calls: 22
void CModelSkeleton::GetBindPoseWorldTransforms(const CTransform& skeletonToWorld, float flScale, int nCount, CTransform* pBindPoseWorldTransforms)
{
	CTransform tBindPoseParent; // 160
	const char   __FUNCTION__; // 43575
	{
		int b; // 162
		{
			int nParent; // 166
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 167
			}
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 168
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 168
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
			CUtlMemory<short int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 50
			CModelSkeleton::GetParent(
					int nBoneIndex);  // 166
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 164
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
					float p3);  // 111
			CTransform::SetPositionAndScale(
						const Vector& v0,
						float flScale);  // 329
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 328
			CTransform::InitFromQuaternion(
						const Quaternion& orientation,
						const Vector& vPosition,
						float flScale);  // 164
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 164
			CUtlMemory<Quaternion, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
					int i);  // 164
		}
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 161
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <00A57D08> modellib/model.cpp:158
// variables: 6
// function calls: 22
void CModelSkeleton::GetBindPoseWorldTransforms(const CTransform& skeletonToWorld, float flScale, int nCount, CTransform* pBindPoseWorldTransforms)
{
	CTransform tBindPoseParent; // 160
	const char   __FUNCTION__; // 18300
	{
		int b; // 162
		{
			int nParent; // 166
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 167
			}
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 168
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 168
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
			CUtlMemory<short int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 50
			CModelSkeleton::GetParent(
					int nBoneIndex);  // 166
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 164
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
					float p3);  // 111
			CTransform::SetPositionAndScale(
						const Vector& v0,
						float flScale);  // 329
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 328
			CTransform::InitFromQuaternion(
						const Quaternion& orientation,
						const Vector& vPosition,
						float flScale);  // 164
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 164
			CUtlMemory<Quaternion, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
					int i);  // 164
		}
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 161
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <04ADCC7F> modellib/model.cpp:173
// variables: 5
// function calls: 6
void CModelSkeleton::GetBindPoseWorldTransforms(const CTransform& skeletonToWorld, int nBaseIndex, int nCount, matrix3x4a_t* pBindPoseWorldTransforms)
{
	int nActualCount; // 175
	CTransform* pOutTransforms; // 176
	{
		int i; // 180
		_mm_cvtss_f32(__m128 __A); // 1553
		GetWSIMD<>(fltx4 a); // 98
		CTransform::GetScale(); // 362
		{
			int i; // 325
			{
				int j; // 327
			}
		}
		matrix3x4_t::ScaleUpper3x3Matrix(
					float flScale);  // 365
		CTransform::ToMatrix(); // 208
		TransformMatrix(const CTransform& in,
				matrix3x4_t& out);  // 182
	}
} /* size: 508, variables: 2 */

// <04ADC5F2> modellib/model.cpp:186
// variables: 6
// function calls: 24
void CModelSkeleton::GetBindPoseWorldTransforms(const CTransform& skeletonToWorld, int nCount, CTransform* pBindPoseWorldTransforms)
{
	CTransform mBindPoseParent; // 188
	const char   __FUNCTION__; // 36052
	{
		int b; // 190
		{
			int nParent; // 194
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
			}
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 196
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 196
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
			CUtlMemory<short int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 50
			CModelSkeleton::GetParent(
					int nBoneIndex);  // 194
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 192
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 328
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
					float p3);  // 111
			CTransform::SetPositionAndScale(
						const Vector& v0,
						float flScale);  // 329
			CTransform::InitFromQuaternion(
						const Quaternion& orientation,
						const Vector& vPosition,
						float flScale);  // 192
			CUtlMemory<Quaternion, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
					int i);  // 192
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 196
		}
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 189
} /* size: 0, variables: 2, inline expansions: 2 (34 bytes) */

// <01E21460> modellib/model.cpp:186
// variables: 6
// function calls: 24
void CModelSkeleton::GetBindPoseWorldTransforms(const CTransform& skeletonToWorld, int nCount, CTransform* pBindPoseWorldTransforms)
{
	CTransform mBindPoseParent; // 188
	const char   __FUNCTION__; // 43575
	{
		int b; // 190
		{
			int nParent; // 194
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
			}
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 196
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 196
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
			CUtlMemory<short int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 50
			CModelSkeleton::GetParent(
					int nBoneIndex);  // 194
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 192
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 328
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
					float p3);  // 111
			CTransform::SetPositionAndScale(
						const Vector& v0,
						float flScale);  // 329
			CTransform::InitFromQuaternion(
						const Quaternion& orientation,
						const Vector& vPosition,
						float flScale);  // 192
			CUtlMemory<Quaternion, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
					int i);  // 192
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 196
		}
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 189
} /* size: 0, variables: 2, inline expansions: 2 (34 bytes) */

// <00A57435> modellib/model.cpp:186
// variables: 6
// function calls: 24
void CModelSkeleton::GetBindPoseWorldTransforms(const CTransform& skeletonToWorld, int nCount, CTransform* pBindPoseWorldTransforms)
{
	CTransform mBindPoseParent; // 188
	const char   __FUNCTION__; // 18300
	{
		int b; // 190
		{
			int nParent; // 194
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
			}
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 196
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 196
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
			CUtlMemory<short int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 50
			CModelSkeleton::GetParent(
					int nBoneIndex);  // 194
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 192
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 328
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
					float p3);  // 111
			CTransform::SetPositionAndScale(
						const Vector& v0,
						float flScale);  // 329
			CTransform::InitFromQuaternion(
						const Quaternion& orientation,
						const Vector& vPosition,
						float flScale);  // 192
			CUtlMemory<Quaternion, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
					int i);  // 192
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 196
		}
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 189
} /* size: 0, variables: 2, inline expansions: 2 (34 bytes) */

// <04ADC41F> modellib/model.cpp:200
// variables: 3
// function calls: 3
void CModelSkeleton::GetBindPoseWorldTransforms(const CTransform& skeletonToWorld, float flScale, int nBaseIndex, int nCount, CTransform* pBindPoseWorldTransforms)
{
	int nActualCount; // 202
	CTransform* pOutTransforms; // 203
	{
		int i; // 207
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				const CTransform  &);  // 209
	}
} /* size: 0, variables: 2 */

// <04ADC364> modellib/model.cpp:214
// function calls: 2
void CModelSkeleton::GetInvBindPose(int nBoneIndex)
{
	CUtlMemory<CTransform, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
			int i);  // 216
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04ADC2D2> modellib/model.cpp:219
// function calls: 2
void CModelSkeleton::GetInvBindPoses()
{
	CUtlMemory<CTransform, int>::Base(); // 113
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 221
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04ADBD76> modellib/model.cpp:224
// variables: 3
// function calls: 21
void CModelSkeleton::CalcInvBindPose()
{
	int nNumBones; // 226
	CTransform* pBindPoseWorldTransforms; // 230
	{
		int b; // 234
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 236
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 236
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 226
	CUtlMemory<CTransform, int>::NumAllocated(); // 782
	CUtlMemory<CTransform, int>::IsGrowable(); // 823
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CTransform, int>::Grow(
		int num);  // 806
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 368
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::SetCount(
		int count);  // 227
} /* size: 0, variables: 2, inline expansions: 16 (0 bytes) */

// <04ADB88B> modellib/model.cpp:241
// variables: 5
// function calls: 16
void CModelSkeleton::GetBoneSubtree(int nSubtreeTipBone, CVarBitVec* pSubtree)
{
	int nBoneCount; // 243
	const char   __FUNCTION__; // 35753
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 244
	}
	{
		int nBone; // 249
		{
			int nParent; // 251
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
			CUtlMemory<short int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 50
			CModelSkeleton::GetParent(
					int nBoneIndex);  // 251
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
				int bitNum);  // 252
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 1480
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
				int bitNum);  // 254
		}
	}
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 243
	{
	}
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
	Bitvec_Set(uint32* pBits,
			int nBitNum);  // 1480
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
		int bitNum);  // 247
} /* size: 0, variables: 2, inline expansions: 4 (113 bytes) */

// <01E206F9> modellib/model.cpp:241
// variables: 5
// function calls: 16
void CModelSkeleton::GetBoneSubtree(int nSubtreeTipBone, CVarBitVec* pSubtree)
{
	int nBoneCount; // 243
	const char   __FUNCTION__; // 43276
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 244
	}
	{
		int nBone; // 249
		{
			int nParent; // 251
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
			CUtlMemory<short int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 50
			CModelSkeleton::GetParent(
					int nBoneIndex);  // 251
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
				int bitNum);  // 252
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 1480
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
				int bitNum);  // 254
		}
	}
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 243
	{
	}
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
	Bitvec_Set(uint32* pBits,
			int nBitNum);  // 1480
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
		int bitNum);  // 247
} /* size: 0, variables: 2, inline expansions: 4 (113 bytes) */

// <00A566CE> modellib/model.cpp:241
// variables: 5
// function calls: 16
void CModelSkeleton::GetBoneSubtree(int nSubtreeTipBone, CVarBitVec* pSubtree)
{
	int nBoneCount; // 243
	const char   __FUNCTION__; // 18001
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 244
	}
	{
		int nBone; // 249
		{
			int nParent; // 251
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
			CUtlMemory<short int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 50
			CModelSkeleton::GetParent(
					int nBoneIndex);  // 251
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
				int bitNum);  // 252
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 1480
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
				int bitNum);  // 254
		}
	}
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 243
	{
	}
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
	Bitvec_Set(uint32* pBits,
			int nBitNum);  // 1480
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
		int bitNum);  // 247
} /* size: 0, variables: 2, inline expansions: 4 (113 bytes) */

// <04ADAD91> modellib/model.cpp:260
// function calls: 47
void CModelSkeleton::CModelSkeleton()
{
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
			int minimumSize);  // 130
	BoneDict_t::BoneDict_t(); // 260
	CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undef this); // 178
	CUtlHashtable(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undef this,
			int minimumSize);  // 138
	BoneDictInverted_t::BoneDictInverted_t(); // 260
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 260
	CUtlMemory<short int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short int, CUtlMemory<short int, int> >::CUtlVector(); // 260
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 260
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::CUtlVector(); // 260
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 260
	CUtlMemory<Quaternion, int>::ValidateGrowSize(); // 475
	CUtlMemory<Quaternion, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVector(); // 260
	CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTransform, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(); // 260
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 262
} /* size: 0, inline expansions: 47 (0 bytes) */

// <04ADAD74> modellib/model.cpp:260
void CModelSkeleton::CModelSkeleton()
{
} /* size: 0 */

// <04AECBA1> modellib/model.cpp:265
// function calls: 2
void CModelSkeleton::NumBonesForLOD(int nLod)
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 273
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04ADAD4A> modellib/model.cpp:265
void CModelSkeleton::NumBonesForLOD(int nLod)
{
} /* size: 0 */

// <04ADACB6> modellib/model.cpp:276
// function calls: 2
void CModelSkeleton::GetParentArray()
{
	CUtlMemory<short int, int>::Base(); // 113
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 278
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04ADAC22> modellib/model.cpp:281
// function calls: 2
void CModelSkeleton::GetSphereArray()
{
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 283
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04ADA7C8> modellib/model.cpp:286
// variables: 7
// function calls: 17
void CModelSkeleton::BuildBoneMergeList(const CModelSkeleton* pDestSkeleton, bone_merge_list_t* pListOut, int nListMax, float flScale)
{
	int nCount; // 288
	int nDestBones; // 289
	{
		int i; // 290
		{
			uint32 nBoneHash; // 292
			int nSourceBoneIndex; // 293
			{
				fltx4 retVal; // 1478
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1479
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1481
			}
			SetWSIMD<>(fltx4 a,
					float f);  // 378
			VectorAligned::operator fltx4(); // 378
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 379
			CTransform::SetToIdentity(); // 300
			CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::operator[](
					int i);  // 296
			operator[](const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, this,
					handle_t idx);  // 352
			CModelSkeleton::GetBoneHashByIndex(
						int nIndex);  // 292
			{
				fltx4 retVal; // 1478
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1479
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1481
			}
			SetWSIMD<>(fltx4 a,
					float f);  // 108
			VectorAligned::operator=(
					fltx4 src);  // 108
			CTransform::SetPositionAndScale(
						const VectorAligned& v0,
						float flScale);  // 99
			CTransform::SetScale(
				float flScale);  // 301
		}
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 289
} /* size: 228, variables: 2, inline expansions: 2 (8 bytes) */

// <04ADA20A> modellib/model.cpp:310
// variables: 6
// function calls: 19
void CModelSkeleton::ComputeParentSpaceTransformsFromWorldSpaceTransforms(const CTransform& rootToWorld, int nCount, const CTransform* pWorldSpaceTransforms, CTransform* pParentSpaceTransforms)
{
	const char   __FUNCTION__; // 36644
	CTransform worldToParent; // 313
	CTransform worldToRoot; // 314
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 312
	}
	{
		int i; // 315
		{
			int nParentBone; // 317
			QuaternionAligned::operator fltx4(); // 258
			VectorAligned::operator fltx4(); // 258
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 322
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 327
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 327
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
			CUtlMemory<short int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 50
			CModelSkeleton::GetParent(
					int nBoneIndex);  // 317
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 326
		}
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 312
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 313
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <01E1F078> modellib/model.cpp:310
// variables: 6
// function calls: 19
void CModelSkeleton::ComputeParentSpaceTransformsFromWorldSpaceTransforms(const CTransform& rootToWorld, int nCount, const CTransform* pWorldSpaceTransforms, CTransform* pParentSpaceTransforms)
{
	const char   __FUNCTION__; // 44167
	CTransform worldToParent; // 313
	CTransform worldToRoot; // 314
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 312
	}
	{
		int i; // 315
		{
			int nParentBone; // 317
			QuaternionAligned::operator fltx4(); // 258
			VectorAligned::operator fltx4(); // 258
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 322
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 327
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 327
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
			CUtlMemory<short int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 50
			CModelSkeleton::GetParent(
					int nBoneIndex);  // 317
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 326
		}
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 312
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 313
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <00A5504D> modellib/model.cpp:310
// variables: 6
// function calls: 19
void CModelSkeleton::ComputeParentSpaceTransformsFromWorldSpaceTransforms(const CTransform& rootToWorld, int nCount, const CTransform* pWorldSpaceTransforms, CTransform* pParentSpaceTransforms)
{
	const char   __FUNCTION__; // 18892
	CTransform worldToParent; // 313
	CTransform worldToRoot; // 314
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 312
	}
	{
		int i; // 315
		{
			int nParentBone; // 317
			QuaternionAligned::operator fltx4(); // 258
			VectorAligned::operator fltx4(); // 258
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 322
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 327
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 327
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
			CUtlMemory<short int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 50
			CModelSkeleton::GetParent(
					int nBoneIndex);  // 317
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 326
		}
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 312
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 313
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <04AECC32> modellib/model.cpp:332
// variable: 1
// function calls: 3
void CModelSkeleton::FindBoneIndex(const char* pBoneName)
{
	CUtlStringToken hash; // 334
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 334
} /* size: 0, variables: 1, inline expansions: 3 (182 bytes) */

// <04ADA1D3> modellib/model.cpp:332
// variable: 1
void CModelSkeleton::FindBoneIndex(const char* pBoneName)
{
	CUtlStringToken hash; // 334
} /* size: 0, variables: 1 */

// <04AD9F1F> modellib/model.cpp:338
// variable: 1
// function calls: 10
void CModelSkeleton::FindBoneIndexByHash(uint32 nHash)
{
	UtlHashHandle_t hItem; // 340
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Base(); // 650
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 651
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlHashtableEntry<unsigned int, short unsigned int>::IdealIndex(
			uint32 slotmask);  // 656
	CUtlHashtableEntry<unsigned int, short unsigned int>::IdealIndex(
			uint32 slotmask);  // 667
	DoLookup<unsigned int>(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
				unsigned int x,
				unsigned int h,
				handle_t* pPreviousInChain);  // 218
	Find(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
		KeyArg_t k);  // 340
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
			handle_t idx);  // 341
} /* size: 198, variables: 1, inline expansions: 10 (380 bytes) */

// <04AECDC1> modellib/model.cpp:348
// function calls: 2
void CModelSkeleton::GetBoneHashByIndex(int nIndex)
{
	CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, this,
			handle_t idx);  // 352
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04AD9EF5> modellib/model.cpp:348
void CModelSkeleton::GetBoneHashByIndex(int nIndex)
{
} /* size: 0 */

// <04AD3E25> modellib/model.cpp:358
// function calls: 219
void CModel::CModel()
{
	CUtlString::CUtlString(); // 360
	Vector::Vector(); // 360
	Vector::Vector(); // 360
	Vector::Vector(); // 360
	Vector::Vector(); // 360
	Vector::Vector(); // 360
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int> > this); // 360
	CUtlMemory<long long unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<long long unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVector(); // 360
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 360
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 360
	CPhysAggregateDataHandle::CPhysAggregateDataHandle(); // 360
	CUtlMemory<CAnimationGroupResource::ValidateGrowSize(); // 475
	CUtlMemory<CAnimationGroupResource::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimationGroupResource::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimationGroupResource::CUtlVector(); // 360
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 360
	CUtlMemory<CModelMaterialGroup, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMaterialGroup, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::CUtlVector(); // 360
	CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtab this); // 178
	CUtlHashtable(const CUtlHashtable<int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtab this,
			int minimumSize);  // 360
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CU this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CU this,
			int minimumSize);  // 360
	Vector::Vector(); // 831
	Vector::Vector(); // 831
	FourVectors::FourVectors(); // 831
	CUtlMemory<CacheOptimizedKDNode_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CacheOptimizedKDNode_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> >::CUtlVector(); // 831
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::Init(
		int nGrowSize,
		int nInitSize);  // 126
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::CUtlBlockMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 14
	CUtlBlockVector<CacheOptimizedTriangle_t, int>::CUtlBlockVector(
			int growSize,
			int initCapacity);  // 831
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 831
	CUtlMemory<LightDesc_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<LightDesc_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<LightDesc_t, CUtlMemory<LightDesc_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<LightDesc_t, CUtlMemory<LightDesc_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<LightDesc_t, CUtlMemory<LightDesc_t, int> >::CUtlVector(); // 831
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 831
	CUtlMemory<long long unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<long long unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVector(); // 831
	CUtlBlockMemory<Vector2D, int>::Init(
		int nGrowSize,
		int nInitSize);  // 126
	CUtlBlockMemory<Vector2D, int>::CUtlBlockMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector2D, CUtlBlockMemory<Vector2D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector2D, CUtlBlockMemory<Vector2D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 14
	CUtlBlockVector<Vector2D, int>::CUtlBlockVector(
			int growSize,
			int initCapacity);  // 831
	CUtlMemory<TraceVertex_t::ValidateGrowSize(); // 475
	CUtlMemory<TraceVertex_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TraceVertex_t::ResetDbgInfo(); // 530
	CUtlVectorBase<TraceVertex_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TraceVertex_t::CUtlVector(); // 831
	CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> > this); // 530
	CUtlVectorBase(const CUtlVectorBase<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> >  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> >::CUtlVector(); // 831
	CUtlMemory<InstancedRayTracingEnvironmentReference_t::ValidateGrowSize(); // 475
	CUtlMemory<InstancedRayTracingEnvironmentReference_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<InstancedRayTracingEnvironmentReference_t::ResetDbgInfo(); // 530
	CUtlVectorBase<InstancedRayTracingEnvironmentReference_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<InstancedRayTracingEnvironmentReference_t::CUtlVector(); // 1895
	CUtlVectorAutoPurge<InstancedRayTracingEnvironmentReference_t::CUtlVectorAutoPurge(); // 831
	CUtlMemory<RayTracingEnvironment::ValidateGrowSize(); // 475
	CUtlMemory<RayTracingEnvironment::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<RayTracingEnvironment::ResetDbgInfo(); // 530
	CUtlVectorBase<RayTracingEnvironment::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<RayTracingEnvironment::CUtlVector(); // 831
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 831
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 831
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 838
	FourVectors::DuplicateVector(
			const Vector& v);  // 833
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 837
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 833
	RayTracingEnvironment::RayTracingEnvironment(); // 360
	CUtlMemory<short int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short int, CUtlMemory<short int, int> >::CUtlVector(); // 360
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(); // 360
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<ResourceId_t, int, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t, this); // 178
	CUtlHashtable(const CUtlHashtable<ResourceId_t, int, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t,  this,
			int minimumSize);  // 359
	CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this); // 178
	CUtlHashtable(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this,
			int minimumSize);  // 360
	CUtlMemory<CBoneFlexDriver, int>::ValidateGrowSize(); // 475
	CUtlMemory<CBoneFlexDriver, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::CUtlVector(); // 360
	CUtlMemory<CUtlStringToken, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlStringToken, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVector(); // 360
	CUtlMemory<CModel::BodyPart_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModel::BodyPart_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::CUtlVector(); // 360
	CUtlMemory<CUtlStringToken, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlStringToken, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVector(); // 360
	CUtlMemory<AttachmentPairing_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<AttachmentPairing_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::CUtlVector(); // 360
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(); // 360
	CUtlMemory<const CFlexController::ValidateGrowSize(); // 475
	CUtlMemory<const CFlexController::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const CFlexController::ResetDbgInfo(); // 530
	CUtlVectorBase<const CFlexController::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const CFlexController::CUtlVector(); // 360
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 360
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::CSmartPtr(); // 360
	CUtlMemory<const CBoneConstraintBase::ValidateGrowSize(); // 475
	CUtlMemory<const CBoneConstraintBase::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const CBoneConstraintBase::ResetDbgInfo(); // 530
	CUtlVectorBase<const CBoneConstraintBase::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const CBoneConstraintBase::CUtlVector(); // 360
	CUtlMemory<StateDrivenMorph_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<StateDrivenMorph_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >::CUtlVector(); // 360
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 360
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 360
	ValidateGrowSize(const CUtlMemory<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUt this); // 475
	CUtlMemory(const CUtlMemory<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUt this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUt this); // 360
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 360
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 360
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int> this); // 360
	CUtlString::CUtlString(); // 360
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 360
} /* size: 0, inline expansions: 219 (0 bytes) */

// <04AD3E0C> modellib/model.cpp:358
void CModel::CModel()
{
} /* size: 0 */

// <04ACF2C0> modellib/model.cpp:365
// variables: 15
// function calls: 380
void CModel::~CModel()
{
	Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 226
	{
		int ndxBucket; // 227
		operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTy this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashVal this,
				int i);  // 229
		RemoveAll(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this); // 1798
		CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::Purge(); // 903
		CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::Purge(); // 1799
		ResetDbgInfo(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this); // 1800
		Purge(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this); // 229
	}
	Purge(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this); // 134
	{
		int i; // 1721
		operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTy this,
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashVal this,
			int i);  // 1723
		RemoveAll(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this); // 1798
		CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::Purge(); // 903
		CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this); // 560
		ValidateAlignment<CActivityToSequenceMapping::HashValueType>(void); // 508
		CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::Purge(); // 510
		CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this); // 410
		~CUtlVector(const CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> > this); // 1526
		Destruct<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> > >(CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashVal this); // 1798
	IsExternallyAllocated(const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this); // 905
	Purge(const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTy this); // 903
	Purge(const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTy this); // 1799
	Purge(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashVal this); // 560
	ValidateAlignment<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> > >(void); // 508
	Purge(const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTy this); // 510
	~CUtlMemory(const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTy this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashVal this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTy this); // 135
	~CUtlHash(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this); // 103
	CActivityToSequenceMapping::~CActivityToSequenceMapping(); // 369
	CUtlString::~CUtlString(); // 372
	RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 1798
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Purge(); // 903
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 560
	ValidateAlignment<CWeakHandle<InfoForResourceTypeIMaterial2> >(void); // 508
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Purge(); // 510
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 410
	~CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int> this); // 372
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 372
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 372
	IsExternallyAllocated(const CUtlMemory<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemo this); // 905
	Purge(const CUtlMemory<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUt this); // 903
	Purge(const CUtlMemory<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUt this); // 1799
	Purge(const CUtlVectorBase<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory this); // 560
	ValidateAlignment<CUtlHashtable<int, float> >(void); // 508
	Purge(const CUtlMemory<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUt this); // 510
	~CUtlMemory(const CUtlMemory<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUt this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory this); // 410
	~CUtlVector(const CUtlVector<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUt this); // 372
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::Count(); // 897
			CUtlHashtableEntry<CUtlString, int>::IsValid(); // 899
			CUtlHashtableEntry<CUtlString, int>::MarkInvalid(); // 901
			CUtlString::~CUtlString(); // 51
			CUtlKeyValuePair<CUtlString, int>::~CUtlKeyValuePair(); // 1526
			Destruct<CUtlKeyValuePair<CUtlString, int> >(CUtlKeyValuePair<CUtlString, int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this); // 188
	ValidateAlignment<CUtlHashtableEntry<CUtlString, int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this); // 372
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 372
	{
		int i; // 1721
		CUtlMemory<StateDrivenMorph_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<StateDrivenMorph_t::Activator_t, CUtlMemory<StateDrivenMorph_t::Activator_t, int> >::RemoveAll(); // 1798
		CUtlMemory<StateDrivenMorph_t::Activator_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<StateDrivenMorph_t::Activator_t, int>::Purge(); // 903
		CUtlMemory<StateDrivenMorph_t::Activator_t, int>::Purge(); // 1799
		CUtlVectorBase<StateDrivenMorph_t::Activator_t, CUtlMemory<StateDrivenMorph_t::Activator_t, int> >::Purge(); // 560
		ValidateAlignment<StateDrivenMorph_t::Activator_t>(void); // 508
		CUtlMemory<StateDrivenMorph_t::Activator_t, int>::Purge(); // 510
		CUtlMemory<StateDrivenMorph_t::Activator_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<StateDrivenMorph_t::Activator_t, CUtlMemory<StateDrivenMorph_t::Activator_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<StateDrivenMorph_t::Activator_t, CUtlMemory<StateDrivenMorph_t::Activator_t, int> >::~CUtlVector(); // 291
		StateDrivenMorph_t::~StateDrivenMorph_t(); // 1526
		Destruct<StateDrivenMorph_t>(StateDrivenMorph_t* pMemory); // 1723
	}
	CUtlVectorBase<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >::RemoveAll(); // 1798
	CUtlMemory<StateDrivenMorph_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<StateDrivenMorph_t, int>::Purge(); // 903
	CUtlMemory<StateDrivenMorph_t, int>::Purge(); // 1799
	CUtlVectorBase<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >::Purge(); // 560
	ValidateAlignment<StateDrivenMorph_t>(void); // 508
	CUtlMemory<StateDrivenMorph_t, int>::Purge(); // 510
	CUtlMemory<StateDrivenMorph_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >::~CUtlVector(); // 372
	CUtlVectorBase<const CBoneConstraintBase::RemoveAll(); // 1798
	CUtlMemory<const CBoneConstraintBase::IsExternallyAllocated(); // 905
	CUtlMemory<const CBoneConstraintBase::Purge(); // 903
	CUtlMemory<const CBoneConstraintBase::Purge(); // 1799
	CUtlVectorBase<const CBoneConstraintBase::Purge(); // 560
	ValidateAlignment<const CBoneConstraintBase*>(void); // 508
	CUtlMemory<const CBoneConstraintBase::Purge(); // 510
	CUtlMemory<const CBoneConstraintBase::~CUtlMemory(); // 562
	CUtlVectorBase<const CBoneConstraintBase::~CUtlVectorBase(); // 410
	CUtlVector<const CBoneConstraintBase::~CUtlVector(); // 372
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const IAnimGraphModelBinding>(const IAnimGraphModelBinding* pObj); // 344
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::~CSmartPtr(); // 372
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 372
	CUtlVectorBase<const CFlexController::RemoveAll(); // 1798
	CUtlMemory<const CFlexController::IsExternallyAllocated(); // 905
	CUtlMemory<const CFlexController::Purge(); // 903
	CUtlMemory<const CFlexController::Purge(); // 1799
	CUtlVectorBase<const CFlexController::Purge(); // 560
	ValidateAlignment<const CFlexController*>(void); // 508
	CUtlMemory<const CFlexController::Purge(); // 510
	CUtlMemory<const CFlexController::~CUtlMemory(); // 562
	CUtlVectorBase<const CFlexController::~CUtlVectorBase(); // 410
	CUtlVector<const CFlexController::~CUtlVector(); // 372
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::Count(); // 897
			CUtlHashtableEntry<int, unsigned int>::IsValid(); // 899
			CUtlHashtableEntry<int, unsigned int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<int, unsigned int> >(CUtlKeyValuePair<int, unsigned int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtab this); // 188
	ValidateAlignment<CUtlHashtableEntry<int, unsigned int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtab this); // 372
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, int>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, int> >(CUtlKeyValuePair<unsigned int, int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CU this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CU this); // 372
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 372
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::RemoveAll(); // 1798
	CUtlMemory<AttachmentPairing_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AttachmentPairing_t, int>::Purge(); // 903
	CUtlMemory<AttachmentPairing_t, int>::Purge(); // 1799
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Purge(); // 560
	ValidateAlignment<AttachmentPairing_t>(void); // 508
	CUtlMemory<AttachmentPairing_t, int>::Purge(); // 510
	CUtlMemory<AttachmentPairing_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::~CUtlVector(); // 372
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<ResourceId_t, int>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<ResourceId_t, int>, int>::Count(); // 897
			CUtlHashtableEntry<ResourceId_t, int>::IsValid(); // 899
			CUtlHashtableEntry<ResourceId_t, int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<ResourceId_t, int> >(CUtlKeyValuePair<ResourceId_t, int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<ResourceId_t, int, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t, this); // 188
	ValidateAlignment<CUtlHashtableEntry<ResourceId_t, int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, int>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<ResourceId_t, int, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t, this); // 372
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlStringToken, int>::Purge(); // 903
	CUtlMemory<CUtlStringToken, int>::Purge(); // 1799
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Purge(); // 560
	ValidateAlignment<CUtlStringToken>(void); // 508
	CUtlMemory<CUtlStringToken, int>::Purge(); // 510
	CUtlMemory<CUtlStringToken, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVector(); // 372
	{
		int i; // 1721
		CUtlMemory<CModel::BodyPart_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<long long unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<long long unsigned int, int>::Purge(); // 903
		CUtlMemory<long long unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Purge(); // 560
		ValidateAlignment<long long unsigned int>(void); // 508
		CUtlMemory<long long unsigned int, int>::Purge(); // 510
		CUtlMemory<long long unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVector(); // 654
		CUtlString::~CUtlString(); // 654
		BodyPart_t::~BodyPart_t(); // 1526
		Destruct<CModel::BodyPart_t>(BodyPart_t* pMemory); // 1723
	}
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CModel::BodyPart_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModel::BodyPart_t, int>::Purge(); // 903
	CUtlMemory<CModel::BodyPart_t, int>::Purge(); // 1799
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::Purge(); // 560
	ValidateAlignment<CModel::BodyPart_t>(void); // 508
	CUtlMemory<CModel::BodyPart_t, int>::Purge(); // 510
	CUtlMemory<CModel::BodyPart_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::~CUtlVector(); // 372
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlStringToken, int>::Purge(); // 903
	CUtlMemory<CUtlStringToken, int>::Purge(); // 1799
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Purge(); // 560
	ValidateAlignment<CUtlStringToken>(void); // 508
	CUtlMemory<CUtlStringToken, int>::Purge(); // 510
	CUtlMemory<CUtlStringToken, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVector(); // 372
	CUtlMemory<CBoneFlexDriver, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBoneFlexDriver, int>::Purge(); // 903
	CUtlMemory<CBoneFlexDriver, int>::Purge(); // 1799
	CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::Purge(); // 560
	ValidateAlignment<CBoneFlexDriver>(void); // 508
	CUtlMemory<CBoneFlexDriver, int>::Purge(); // 510
	CUtlMemory<CBoneFlexDriver, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::~CUtlVector(); // 372
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 372
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveAll(); // 1798
	CUtlMemory<short int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short int, int>::Purge(); // 903
	CUtlMemory<short int, int>::Purge(); // 1799
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
	ValidateAlignment<short int>(void); // 508
	CUtlMemory<short int, int>::Purge(); // 510
	CUtlMemory<short int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 372
	CUtlMemory<CModelMaterialGroup, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelMaterialGroup, int>::Purge(); // 903
	CUtlMemory<CModelMaterialGroup, int>::Purge(); // 1799
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::Purge(); // 560
	ValidateAlignment<CModelMaterialGroup>(void); // 508
	CUtlMemory<CModelMaterialGroup, int>::Purge(); // 510
	CUtlMemory<CModelMaterialGroup, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::~CUtlVector(); // 372
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 372
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 372
	CPhysAggregateDataHandle::Clear(); // 115
	CPhysAggregateDataHandle::~CPhysAggregateDataHandle(); // 372
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 372
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 372
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<long long unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<long long unsigned int, int>::Purge(); // 903
	CUtlMemory<long long unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Purge(); // 560
	ValidateAlignment<long long unsigned int>(void); // 508
	CUtlMemory<long long unsigned int, int>::Purge(); // 510
	CUtlMemory<long long unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVector(); // 372
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CRenderMesh>(CRenderMesh* pObj); // 344
		CSmartPtr<CRenderMesh, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CRenderMesh> >(CSmartPtr<CRenderMesh, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this); // 1798
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this); // 560
	ValidateAlignment<CSmartPtr<CRenderMesh> >(void); // 508
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int> > this); // 372
	CUtlString::~CUtlString(); // 372
} /* size: 0, inline expansions: 290 (0 bytes) */

// <04ACF258> modellib/model.cpp:365
void CModel::~CModel()
{
} /* size: 0 */

// <04AECE55> modellib/model.cpp:374
// function calls: 3
void CModel::GetMeshGroupMaskForMesh(int iMesh)
{
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Count(); // 376
	CUtlMemory<long long unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
			int i);  // 379
} /* size: 49, inline expansions: 3 (6 bytes) */

// <04ACF219> modellib/model.cpp:374
void CModel::GetMeshGroupMaskForMesh(int iMesh)
{
} /* size: 0 */

// <04ACF1EB> modellib/model.cpp:382
void CModel::GetDefaultMeshGroupMask()
{
} /* size: 12 */

// <04AECF1E> modellib/model.cpp:390
// variables: 2
// function calls: 4
void CModel::GetMaskForMeshGroup(CUtlStringToken nMeshGroupToken)
{
	int nGroups; // 392
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 392
	{
		int g; // 393
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
				int i);  // 395
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 395
	}
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <04ACF1AB> modellib/model.cpp:390
// variables: 2
void CModel::GetMaskForMeshGroup(CUtlStringToken nMeshGroupToken)
{
	int nGroups; // 392
	{
		int g; // 393
	}
} /* size: 0, variables: 1 */

// <04ACEF02> modellib/model.cpp:404
// variable: 1
// function calls: 8
void CModel::GetMaskForMeshGroup(const char* pMeshGroupName)
{
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 406
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 392
	{
		int g; // 393
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
				int i);  // 395
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 395
	}
	CModel::GetMaskForMeshGroup(
				CUtlStringToken nMeshGroupToken);  // 406
} /* size: 0, inline expansions: 5 (0 bytes) */

// <04ACED6F> modellib/model.cpp:409
// variables: 5
// function calls: 4
void CModel::GetNumMeshesInMeshGroup(int nMeshGroup)
{
	MeshGroupMask_t nMask; // 411
	int nMeshesWithMask; // 413
	int nMeshes; // 414
	{
		int m; // 415
		{
			MeshGroupMask_t nMeshMask; // 417
			CUtlMemory<long long unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
					int i);  // 417
		}
	}
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 685
	CModel::GetNumMeshes(); // 414
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <04ACEC29> modellib/model.cpp:428
// variables: 2
// function calls: 4
void CModel::GetIndexForMeshGroup(CUtlStringToken nMeshGroupToken)
{
	int nGroups; // 430
	{
		int g; // 431
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
				int i);  // 433
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 433
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 430
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <04AED04D> modellib/model.cpp:442
// function call: 1
void CModel::GetNumMeshGroups()
{
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 444
} /* size: 11, inline expansions: 1 (0 bytes) */

// <04ACEC10> modellib/model.cpp:442
void CModel::GetNumMeshGroups()
{
} /* size: 0 */

// <04ACEA8C> modellib/model.cpp:447
// variables: 2
// function calls: 5
void CModel::GetMeshGroupName(int nMeshGroup)
{
	const char   __FUNCTION__; // 35807
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 449
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 444
	CModel::GetNumMeshGroups(); // 449
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 450
	CUtlString::Get(); // 450
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <01E138FA> modellib/model.cpp:447
// variables: 2
// function calls: 5
void CModel::GetMeshGroupName(int nMeshGroup)
{
	const char   __FUNCTION__; // 43330
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 449
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 444
	CModel::GetNumMeshGroups(); // 449
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 450
	CUtlString::Get(); // 450
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <00A498CF> modellib/model.cpp:447
// variables: 2
// function calls: 5
void CModel::GetMeshGroupName(int nMeshGroup)
{
	const char   __FUNCTION__; // 18055
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 449
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 444
	CModel::GetNumMeshGroups(); // 449
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 450
	CUtlString::Get(); // 450
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <04AED0A7> modellib/model.cpp:456
// variables: 2
// function calls: 4
void CModel::GetBodyPartForName(CUtlStringToken nBodyPartToken)
{
	int nParts; // 458
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::Count(); // 458
	{
		int p; // 459
		CUtlMemory<CModel::BodyPart_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
				int i);  // 461
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 461
	}
} /* size: 54, variables: 1, inline expansions: 1 (6 bytes) */

// <04ACEA4C> modellib/model.cpp:456
// variables: 2
void CModel::GetBodyPartForName(CUtlStringToken nBodyPartToken)
{
	int nParts; // 458
	{
		int p; // 459
	}
} /* size: 0, variables: 1 */

// <04ACE77F> modellib/model.cpp:470
// variable: 1
// function calls: 8
void CModel::GetBodyPartForName(const char* pName)
{
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 472
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::Count(); // 458
	{
		int p; // 459
		CUtlMemory<CModel::BodyPart_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
				int i);  // 461
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 461
	}
	CModel::GetBodyPartForName(
				CUtlStringToken nBodyPartToken);  // 472
} /* size: 0, inline expansions: 5 (258 bytes) */

// <04ACE6AF> modellib/model.cpp:475
// function calls: 3
void CModel::GetBodyPartName(int nPart)
{
	CUtlMemory<CModel::BodyPart_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
			int i);  // 477
	CUtlString::Get(); // 477
} /* size: 37, inline expansions: 3 (35 bytes) */

// <04ACE409> modellib/model.cpp:480
// variables: 2
// function calls: 10
void CModel::GetBodyPartMeshName(int nPart, int nMesh, CBufferString* pResourceName)
{
	MeshGroupMask_t nMask; // 482
	{
		int m; // 483
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Count(); // 483
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
				int i);  // 485
	}
	CUtlMemory<CModel::BodyPart_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
			int i);  // 482
	CUtlMemory<long long unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
			int i);  // 482
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 492
} /* size: 132, variables: 1, inline expansions: 7 (82 bytes) */

// <04ACE3AA> modellib/model.cpp:495
// function call: 1
void CModel::GetNumBodyParts()
{
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::Count(); // 497
} /* size: 11, inline expansions: 1 (0 bytes) */

// <04ACE2A4> modellib/model.cpp:500
// function calls: 4
void CModel::GetNumBodyPartMeshes(int nPart)
{
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::IsValidIndex(
			int i);  // 502
	CUtlMemory<CModel::BodyPart_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
			int i);  // 505
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Count(); // 505
} /* size: 36, inline expansions: 4 (32 bytes) */

// <04AED1FA> modellib/model.cpp:508
// function calls: 3
void CModel::GetBodyPartMask(int nPart)
{
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::IsValidIndex(
			int i);  // 510
	CUtlMemory<CModel::BodyPart_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
			int i);  // 513
} /* size: 37, inline expansions: 3 (18 bytes) */

// <04ACE27E> modellib/model.cpp:508
void CModel::GetBodyPartMask(int nPart)
{
} /* size: 0 */

// <04ACE0EE> modellib/model.cpp:516
// function calls: 6
void CModel::GetBodyPartMeshMask(int nPart, int nMesh)
{
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::IsValidIndex(
			int i);  // 518
	CUtlMemory<CModel::BodyPart_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
			int i);  // 521
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::IsValidIndex(
			int i);  // 521
	CUtlMemory<long long unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
			int i);  // 524
} /* size: 53, inline expansions: 6 (55 bytes) */

// <04ACDEE6> modellib/model.cpp:527
// variables: 3
// function calls: 7
void CModel::FindMeshIndexForMask(int nPart, MeshGroupMask_t nMask)
{
	MeshGroupMask_t nPartMask; // 529
	int nSubMeshes; // 531
	{
		int m; // 532
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
				int i);  // 534
	}
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::IsValidIndex(
			int i);  // 510
	CUtlMemory<CModel::BodyPart_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
			int i);  // 513
	CModel::GetBodyPartMask(
			int nPart);  // 529
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Count(); // 531
} /* size: 89, variables: 2, inline expansions: 5 (76 bytes) */

// <04ACDDF1> modellib/model.cpp:543
// function calls: 3
void CModel::IsBodyPartHiddenInTools(int nPart)
{
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::IsValidIndex(
			int i);  // 545
	CUtlMemory<CModel::BodyPart_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
			int i);  // 548
} /* size: 0, inline expansions: 3 (0 bytes) */

// <04ACDCD2> modellib/model.cpp:554
// variable: 1
// function calls: 4
void CModel::GetMaterialGroupIndex(CUtlStringToken nGroup)
{
	{
		int g; // 561
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 561
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
				int i);  // 563
	}
	CModel::GetMaterialGroupIndex(
				uint32 nGroupHash);  // 556
} /* size: 54, inline expansions: 1 (47 bytes) */

// <04AED2E2> modellib/model.cpp:559
// variable: 1
// function calls: 3
void CModel::GetMaterialGroupIndex(uint32 nGroupHash)
{
	{
		int g; // 561
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 561
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
				int i);  // 563
	}
} /* size: 0 */

// <04ACDC9F> modellib/model.cpp:559
// variable: 1
void CModel::GetMaterialGroupIndex(uint32 nGroupHash)
{
	{
		int g; // 561
	}
} /* size: 0 */

// <04ACDA2D> modellib/model.cpp:572
// variables: 2
// function calls: 9
void CModel::GetMaterialGroupList(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pGroupList)
{
	int nGroups; // 574
	{
		int g; // 580
		CUtlString::Get(); // 606
		CUtlMemory<CModelMaterialGroup, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::operator[](
				int i);  // 606
		CModel::GetMaterialGroupName(
					int iGroup);  // 582
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 582
		CUtlString::operator=(
				const char* src);  // 582
	}
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::Count(); // 601
	CModel::GetNumMaterialGroups(); // 574
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <04ACD520> modellib/model.cpp:586
// variables: 2
// function calls: 22
void CModel::GetMaterialGroupMaterials(int nGroupIndex, CUtlVector<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int> >* pOutGroupMaterials)
{
	const CModelMaterialGroup& matGrp; // 592
	{
		int i; // 593
		Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 593
		CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Base(); // 112
		Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 368
		ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 824
		GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
				int num);  // 1198
		CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
			int i);  // 1201
		CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1520
		CopyConstruct<CWeakHandle<InfoForResourceTypeIMaterial2> >(CWeakHandle<InfoForResourceTypeIMaterial2>* pMemory,
										const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1201
		CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::NumAllocated(); // 1196
		AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 595
		CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this,
				int i);  // 595
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
		CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 595
	}
	RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 588
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::Count(); // 601
	CModel::GetNumMaterialGroups(); // 589
	CUtlMemory<CModelMaterialGroup, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::operator[](
			int i);  // 592
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <04AED3C2> modellib/model.cpp:599
// function call: 1
void CModel::GetNumMaterialGroups()
{
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::Count(); // 601
} /* size: 11, inline expansions: 1 (0 bytes) */

// <04ACD507> modellib/model.cpp:599
void CModel::GetNumMaterialGroups()
{
} /* size: 0 */

// <04AED41C> modellib/model.cpp:604
// function calls: 3
void CModel::GetMaterialGroupName(int iGroup)
{
	CUtlMemory<CModelMaterialGroup, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::operator[](
			int i);  // 606
	CUtlString::Get(); // 606
} /* size: 40, inline expansions: 3 (38 bytes) */

// <04ACD4E1> modellib/model.cpp:604
void CModel::GetMaterialGroupName(int iGroup)
{
} /* size: 0 */

// <04ACCEFF> modellib/model.cpp:609
// variables: 3
// function calls: 26
void CModel::GetMaterialReplacementForGroup(int nGroupIndex, ResourceId_t nDefaultMaterialID)
{
	UtlHashHandle_t nIndex; // 611
	int nMaterialIndex; // 615
	const CModelMaterialGroup& group; // 619
	HashItem<ResourceId_t>(const ResourceId_t& item); // 50
	DefaultHashFunctor<ResourceId_t>::operator(
			ResourceId_t s);  // 218
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, int>, int>::Count(); // 651
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, int>, int>::Base(); // 650
	CUtlHashtableEntry<ResourceId_t, int>::IdealIndex(
			uint32 slotmask);  // 656
	CUtlHashtableEntry<ResourceId_t, int>::IdealIndex(
			uint32 slotmask);  // 667
	ResourceId_t::operator==(
			const ResourceId_t& other);  // 154
	DefaultEqualFunctor<ResourceId_t>::operator(
			Arg_t a,
			Arg_t b);  // 670
	DoLookup<const ResourceId_t&>(const CUtlHashtable<ResourceId_t, int, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefin this,
					const ResourceId_t& x,
					unsigned int h,
					handle_t* pPreviousInChain);  // 218
	Find(const CUtlHashtable<ResourceId_t, int, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefin this,
		KeyArg_t k);  // 611
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, int>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<ResourceId_t, int>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<ResourceId_t, int, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefin this,
			handle_t idx);  // 612
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 613
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::Count(); // 616
	CUtlMemory<CModelMaterialGroup, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::operator[](
			int i);  // 619
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 620
	CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this,
			int i);  // 623
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 623
} /* size: 0, variables: 3, inline expansions: 26 (0 bytes) */

// <04ACCDFC> modellib/model.cpp:626
// function calls: 4
void CModel::GetMaterialGroupTokenForIndex(int nGroupIndex)
{
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 628
	CUtlStringToken::CUtlStringToken(); // 629
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
			int i);  // 631
} /* size: 38, inline expansions: 4 (6 bytes) */

// <04ACC911> modellib/model.cpp:634
// variables: 2
// function calls: 21
void CModel::GetAllMaterials(CUtlVector<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int> >& materialList)
{
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Base(); // 113
	Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this); // 636
	Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this); // 636
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::NumAllocated(); // 782
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Base(); // 112
	Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 368
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 824
	GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
			int num);  // 1484
	{
		int i; // 1500
		CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
			int i);  // 1502
		CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1520
		CopyConstruct<CWeakHandle<InfoForResourceTypeIMaterial2> >(CWeakHandle<InfoForResourceTypeIMaterial2>* pMemory,
										const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1502
	}
	{
		int i; // 1492
		CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
			int i);  // 1494
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 1479
		Construct<CWeakHandle<InfoForResourceTypeIMaterial2> >(CWeakHandle<InfoForResourceTypeIMaterial2>* pMemory); // 1494
	}
	InsertMultipleBefore(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
				int elem,
				int num,
				const CWeakHandle<InfoForResourceTypeIMaterial2>* pToInsert);  // 1476
	InsertMultipleBefore(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
				int elem,
				int num,
				const CWeakHandle<InfoForResourceTypeIMaterial2>* pToInsert);  // 1303
	AddMultipleToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
				int num,
				const CWeakHandle<InfoForResourceTypeIMaterial2>* pToCopy);  // 636
} /* size: 0, inline expansions: 12 (0 bytes) */

// <04ACC847> modellib/model.cpp:639
// function calls: 3
void CModel::GetNumMaterialsInGroup(int iGroup)
{
	CUtlMemory<CModelMaterialGroup, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::operator[](
			int i);  // 641
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 641
} /* size: 26, inline expansions: 3 (21 bytes) */

// <04ACC659> modellib/model.cpp:644
// function calls: 8
void CModel::GetMaterialInGroup(int iGroup, int iIndex)
{
	CUtlMemory<CModelMaterialGroup, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::operator[](
			int i);  // 646
	CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this,
			int i);  // 646
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 646
} /* size: 40, inline expansions: 8 (59 bytes) */

// <04ACC5BC> modellib/model.cpp:649
// function calls: 2
void CModel::IsTranslucent()
{
	operator|(ModelFlags_t a,
			ModelFlags_t b);  // 667
	CModel::flags(); // 651
} /* size: 14, inline expansions: 2 (12 bytes) */

// <04ACC4F5> modellib/model.cpp:654
// function calls: 3
void CModel::IsTranslucentTwoPass()
{
	operator|(ModelFlags_t a,
			ModelFlags_t b);  // 667
	CModel::flags(); // 656
	operator&(ModelFlags_t a,
			ModelFlags_t b);  // 656
} /* size: 16, inline expansions: 3 (12 bytes) */

// <04ACC42E> modellib/model.cpp:659
// function calls: 3
void CModel::IsRuntimeCombined()
{
	operator|(ModelFlags_t a,
			ModelFlags_t b);  // 667
	CModel::flags(); // 661
	operator&(ModelFlags_t a,
			ModelFlags_t b);  // 661
} /* size: 0, inline expansions: 3 (0 bytes) */

// <04AED4D9> modellib/model.cpp:665
// function call: 1
void CModel::flags()
{
	operator|(ModelFlags_t a,
			ModelFlags_t b);  // 667
} /* size: 11, inline expansions: 1 (6 bytes) */

// <04ACC415> modellib/model.cpp:665
void CModel::flags()
{
} /* size: 0 */

// <04AED540> modellib/model.cpp:670
// function call: 1
void CModel::pszName()
{
	CUtlString::Get(); // 672
} /* size: 23, inline expansions: 1 (18 bytes) */

// <04ACC3FC> modellib/model.cpp:670
void CModel::pszName()
{
} /* size: 0 */

// <04ACC3E3> modellib/model.cpp:675
void CModel::name()
{
} /* size: 0 */

// <04AED59A> modellib/model.cpp:683
// function call: 1
void CModel::GetNumMeshes()
{
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 685
} /* size: 8, inline expansions: 1 (0 bytes) */

// <04ACC3CA> modellib/model.cpp:683
void CModel::GetNumMeshes()
{
} /* size: 0 */

// <04ACC35C> modellib/model.cpp:688
// function call: 1
void CModel::HasMesh(int iMesh)
{
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 690
} /* size: 17, inline expansions: 1 (0 bytes) */

// <04AED5F4> modellib/model.cpp:696
// function calls: 4
void CModel::GetMeshData(int iMesh)
{
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 698
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
			int i);  // 701
	CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
} /* size: 35, inline expansions: 4 (17 bytes) */

// <04ACC336> modellib/model.cpp:696
void CModel::GetMeshData(int iMesh)
{
} /* size: 0 */

// <04ACC26F> modellib/model.cpp:704
// function calls: 3
void CModel::HasSkinnedMeshes()
{
	operator|(ModelFlags_t a,
			ModelFlags_t b);  // 667
	CModel::flags(); // 706
	operator&(ModelFlags_t a,
			ModelFlags_t b);  // 706
} /* size: 17, inline expansions: 3 (12 bytes) */

// <04ACBEA7> modellib/model.cpp:713
// variables: 9
// function calls: 13
void CModel::AllMeshesSkinnedToOneBone()
{
	int16 nCommonMasterBone; // 715
	int nMeshes; // 716
	const char   __FUNCTION__; // 36025
	{
		int i; // 717
		{
			const CRenderMesh* pMesh; // 719
			const CRenderSkeleton* pSkeleton; // 723
			const int16* pLocalToMaster; // 731
			int16 nMasterBone; // 732
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 733
			}
			Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 698
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
					int i);  // 701
			CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
			CModel::GetMeshData(
					int iMesh);  // 719
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 1089
			CUtlMemory<short int, int>::Base(); // 113
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 1089
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
					int i);  // 1089
			CModel::GetLocalToMasterTableForMesh(
							int nMesh);  // 731
		}
	}
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 685
	CModel::GetNumMeshes(); // 716
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <01E10D15> modellib/model.cpp:713
// variables: 9
// function calls: 13
void CModel::AllMeshesSkinnedToOneBone()
{
	int16 nCommonMasterBone; // 715
	int nMeshes; // 716
	const char   __FUNCTION__; // 43548
	{
		int i; // 717
		{
			const CRenderMesh* pMesh; // 719
			const CRenderSkeleton* pSkeleton; // 723
			const int16* pLocalToMaster; // 731
			int16 nMasterBone; // 732
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 733
			}
			Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 698
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
					int i);  // 701
			CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
			CModel::GetMeshData(
					int iMesh);  // 719
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 1089
			CUtlMemory<short int, int>::Base(); // 113
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 1089
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
					int i);  // 1089
			CModel::GetLocalToMasterTableForMesh(
							int nMesh);  // 731
		}
	}
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 685
	CModel::GetNumMeshes(); // 716
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <00A46CEA> modellib/model.cpp:713
// variables: 9
// function calls: 13
void CModel::AllMeshesSkinnedToOneBone()
{
	int16 nCommonMasterBone; // 715
	int nMeshes; // 716
	const char   __FUNCTION__; // 18273
	{
		int i; // 717
		{
			const CRenderMesh* pMesh; // 719
			const CRenderSkeleton* pSkeleton; // 723
			const int16* pLocalToMaster; // 731
			int16 nMasterBone; // 732
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 733
			}
			Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 698
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
					int i);  // 701
			CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
			CModel::GetMeshData(
					int iMesh);  // 719
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 1089
			CUtlMemory<short int, int>::Base(); // 113
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 1089
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
					int i);  // 1089
			CModel::GetLocalToMasterTableForMesh(
							int nMesh);  // 731
		}
	}
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 685
	CModel::GetNumMeshes(); // 716
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <04AED6E6> modellib/model.cpp:748
// variable: 1
// function calls: 14
void CModel::GetMeshName(int iMesh, CBufferString* pOutName)
{
	const CRenderMesh* pMesh; // 750
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 698
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
			int i);  // 701
	CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
	CModel::GetMeshData(
			int iMesh);  // 750
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 752
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 754
	CModel::GetMeshName(
			int iMesh,
			CBufferString* pOutName);  // 748
} /* size: 182, variables: 1, inline expansions: 14 (325 bytes) */

// <04ACBE67> modellib/model.cpp:748
// variable: 1
void CModel::GetMeshName(int iMesh, CBufferString* pOutName)
{
	const CRenderMesh* pMesh; // 750
} /* size: 0, variables: 1 */

// <04ACB89D> modellib/model.cpp:757
// variables: 5
// function calls: 19
void CModel::GetMeshBounds(Vector* pOutMins, Vector* pOutMaxs)
{
	int nMeshes; // 759
	{
		int i; // 770
		{
			const CRenderMesh* pMesh; // 772
			Vector min; // 776
			Vector max; // 776
			Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 698
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
					int i);  // 701
			CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
			CModel::GetMeshData(
					int iMesh);  // 772
			Vector::Vector(); // 776
			Vector::Vector(); // 776
			Vector::operator=(
					const Vector& vOther);  // 778
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1414
			Vector::Min(
				const Vector& vOther);  // 778
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1421
			Vector::Max(
				const Vector& vOther);  // 779
			Vector::operator=(
					const Vector& vOther);  // 779
		}
	}
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 685
	CModel::GetNumMeshes(); // 759
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 767
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 768
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 762
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 763
} /* size: 340, variables: 1, inline expansions: 6 (72 bytes) */

// <04ACAFFE> modellib/model.cpp:783
// variables: 6
// function calls: 30
void CModel::GetPhysicsBounds(Vector* pOutMins, Vector* pOutMaxs)
{
	int nUsefulPhysicsShapes; // 788
	{
		const CPhysAggregateData* pAggData; // 789
		{
			int nShapes; // 791
			{
				int s; // 792
				{
					AABB_t boxLocal; // 794
					{
						AABB_t boxWorld; // 803
						Vector::Vector(); // 24
						Vector::Vector(); // 24
						AABB_t::AABB_t(); // 803
						CUtlMemory<matrix3x4_t, int>::operator[](
								int i);  // 804
						TransformAABB(const matrix3x4_t& matTransform,
								const AABB_t& boundsIn,
								AABB_t* pBoundsOut);  // 804
						Vector::operator=(
								const Vector& vOther);  // 805
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 1414
						Vector::Min(
							const Vector& vOther);  // 805
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 1421
						Vector::Max(
							const Vector& vOther);  // 806
						Vector::operator=(
								const Vector& vOther);  // 806
					}
					CUtlMemoryConservative<const VPhysXBodyPart_t::Base(); // 366
					CUtlMemoryConservative<const VPhysXBodyPart_t::operator[](
							int i);  // 595
					CUtlVectorBase<const VPhysXBodyPart_t::operator[](
							int i);  // 794
					AABB_t::IsInvalid(); // 796
					CUtlMemory<matrix3x4_t, int>::Count(); // 801
					Vector::operator=(
							const Vector& vOther);  // 810
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1414
					Vector::Min(
						const Vector& vOther);  // 810
					Vector::operator=(
							const Vector& vOther);  // 811
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1421
					Vector::Max(
						const Vector& vOther);  // 811
				}
			}
			CUtlVectorBase<const VPhysXBodyPart_t::Count(); // 241
			CPhysAggregateData::GetPartCount(); // 791
		}
		CPhysAggregateDataHandle::Get(); // 400
		CModel::GetPhysicsContainer(); // 789
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 785
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 786
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 819
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 820
} /* size: 597, variables: 1, inline expansions: 4 (74 bytes) */

// <04ACADCE> modellib/model.cpp:824
// function calls: 8
void CModel::GetModelRenderBounds(Vector* pOutMins, Vector* pOutMaxs)
{
	Vector::operator==(
			const Vector& src);  // 1294
	VectorCompare(const Vector& v1,
			const Vector& v2);  // 827
	Vector::operator==(
			const Vector& src);  // 1294
	VectorCompare(const Vector& v1,
			const Vector& v2);  // 827
	VectorCopy(const Vector& src,
			Vector& dst);  // 836
	VectorCopy(const Vector& src,
			Vector& dst);  // 837
	VectorCopy(const Vector& src,
			Vector& dst);  // 830
	VectorCopy(const Vector& src,
			Vector& dst);  // 831
} /* size: 190, inline expansions: 8 (258 bytes) */

// <04ACAD6F> modellib/model.cpp:844
// function call: 1
void CModel::HasCollision()
{
	CPhysAggregateDataHandle::IsValid(); // 846
} /* size: 16, inline expansions: 1 (11 bytes) */

// <04ACAD10> modellib/model.cpp:849
// function call: 1
void CModel::GetBoneFlexDriverCount()
{
	CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::Count(); // 851
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04ACABD6> modellib/model.cpp:854
// variable: 1
// function calls: 4
void CModel::GetBoneFlexDriverBoneIndex(int iFlex)
{
	const CBoneFlexDriver* pBoneFlexDriver; // 856
	CUtlMemory<CBoneFlexDriver, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::operator[](
			int i);  // 856
	CUtlStringToken::GetHashCode(); // 857
	CModel::FindBoneIndexByHash(
				uint32 nHashCode);  // 857
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <04ACAAF7> modellib/model.cpp:860
// variable: 1
// function calls: 3
void CModel::GetBoneFlexDriverControllerCount(int iFlex)
{
	const CBoneFlexDriver* pBoneFlexDriver; // 862
	CUtlMemory<CBoneFlexDriver, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::operator[](
			int i);  // 862
	CUtlVectorBase<CBoneFlexDriverControl, CUtlMemory<CBoneFlexDriverControl, int> >::Count(); // 863
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <04ACA7A7> modellib/model.cpp:866
// variables: 4
// function calls: 11
void CModel::LookupBoneFlexDriverControllerLocal(int iFlex, int iController)
{
	const CBoneFlexDriver* pBoneFlexDriver; // 868
	const CBoneFlexDriverControl* pController; // 869
	const char   __FUNCTION__; // 36265
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	CUtlMemory<CBoneFlexDriver, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::operator[](
			int i);  // 868
	CUtlMemory<CBoneFlexDriverControl, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBoneFlexDriverControl, CUtlMemory<CBoneFlexDriverControl, int> >::operator[](
			int i);  // 869
	CUtlStringToken::GetHashCode(); // 873
	Find(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMem this,
		KeyArg_t k);  // 947
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<unsigned int, int>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMem this,
			handle_t idx);  // 948
	CModel::LookupFlexControllerByHash(
					uint32 nFlexControllerNameHash);  // 873
} /* size: 0, variables: 3, inline expansions: 11 (0 bytes) */

// <01E0F615> modellib/model.cpp:866
// variables: 4
// function calls: 11
void CModel::LookupBoneFlexDriverControllerLocal(int iFlex, int iController)
{
	const CBoneFlexDriver* pBoneFlexDriver; // 868
	const CBoneFlexDriverControl* pController; // 869
	const char   __FUNCTION__; // 43788
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	CUtlMemory<CBoneFlexDriver, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::operator[](
			int i);  // 868
	CUtlMemory<CBoneFlexDriverControl, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBoneFlexDriverControl, CUtlMemory<CBoneFlexDriverControl, int> >::operator[](
			int i);  // 869
	CUtlStringToken::GetHashCode(); // 873
	Find(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMem this,
		KeyArg_t k);  // 947
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<unsigned int, int>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMem this,
			handle_t idx);  // 948
	CModel::LookupFlexControllerByHash(
					uint32 nFlexControllerNameHash);  // 873
} /* size: 0, variables: 3, inline expansions: 11 (0 bytes) */

// <00A455EA> modellib/model.cpp:866
// variables: 4
// function calls: 11
void CModel::LookupBoneFlexDriverControllerLocal(int iFlex, int iController)
{
	const CBoneFlexDriver* pBoneFlexDriver; // 868
	const CBoneFlexDriverControl* pController; // 869
	const char   __FUNCTION__; // 18513
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	CUtlMemory<CBoneFlexDriver, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::operator[](
			int i);  // 868
	CUtlMemory<CBoneFlexDriverControl, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBoneFlexDriverControl, CUtlMemory<CBoneFlexDriverControl, int> >::operator[](
			int i);  // 869
	CUtlStringToken::GetHashCode(); // 873
	Find(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMem this,
		KeyArg_t k);  // 947
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<unsigned int, int>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMem this,
			handle_t idx);  // 948
	CModel::LookupFlexControllerByHash(
					uint32 nFlexControllerNameHash);  // 873
} /* size: 0, variables: 3, inline expansions: 11 (0 bytes) */

// <04ACA632> modellib/model.cpp:876
// variables: 2
// function calls: 4
void CModel::GetBoneFlexDriverControllerInfo(int iFlex, int iController, BoneFlexComponent_t* pOutBoneComponent, float* pOutMin, float* pOutMax)
{
	const CBoneFlexDriver* pBoneFlexDriver; // 878
	const CBoneFlexDriverControl* pController; // 879
	CUtlMemory<CBoneFlexDriver, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::operator[](
			int i);  // 878
	CUtlMemory<CBoneFlexDriverControl, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBoneFlexDriverControl, CUtlMemory<CBoneFlexDriverControl, int> >::operator[](
			int i);  // 879
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <04ACA604> modellib/model.cpp:885
void CModel::GetStateDrivenMorphs()
{
} /* size: 0 */

// <04ACA34C> modellib/model.cpp:893
// variable: 1
// function calls: 8
void CModel::LookupFlexController(const char* _pszName)
{
	const UtlHashHandle_t  hController; // 895
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 895
	Find(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMem this,
		KeyArg_t k);  // 895
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<unsigned int, int>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMem this,
			handle_t idx);  // 896
} /* size: 0, variables: 1, inline expansions: 8 (247 bytes) */

// <04AEDABD> modellib/model.cpp:902
// function call: 1
void CModel::NumFlexControllers()
{
	CUtlVectorBase<const CFlexController::Count(); // 904
} /* size: 11, inline expansions: 1 (0 bytes) */

// <04ACA333> modellib/model.cpp:902
void CModel::NumFlexControllers()
{
} /* size: 0 */

// <04ACA20A> modellib/model.cpp:907
// function calls: 5
void CModel::GetFlexControllerName(LocalFlexController_t nFlexController)
{
	CUtlVectorBase<const CFlexController::Count(); // 909
	CUtlMemory<const CFlexController::operator[](
			int i);  // 595
	CUtlVectorBase<const CFlexController::operator[](
			int i);  // 910
	CUtlString::Get(); // 93
	CFlexController::pszName(); // 910
} /* size: 54, inline expansions: 5 (18 bytes) */

// <04ACA169> modellib/model.cpp:914
// function calls: 2
void CModel::GetFlexControllerHash(LocalFlexController_t nFlexController)
{
	CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlH this,
			handle_t idx);  // 916
} /* size: 26, inline expansions: 2 (6 bytes) */

// <04ACA07B> modellib/model.cpp:919
// function calls: 4
void CModel::GetFlexControllerType(LocalFlexController_t nFlexController)
{
	CUtlMemory<const CFlexController::operator[](
			int i);  // 595
	CUtlVectorBase<const CFlexController::operator[](
			int i);  // 921
	CUtlString::Get(); // 94
	CFlexController::pszType(); // 921
} /* size: 0, inline expansions: 4 (0 bytes) */

// <04AC9FDA> modellib/model.cpp:924
// function calls: 2
void CModel::GetFlexControllerModelToGlobal(LocalFlexController_t nFlexController)
{
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 926
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04AC9F39> modellib/model.cpp:929
// function calls: 2
void CModel::GetFlexController(LocalFlexController_t nFlexController)
{
	CUtlMemory<const CFlexController::operator[](
			int i);  // 595
	CUtlVectorBase<const CFlexController::operator[](
			int i);  // 931
} /* size: 19, inline expansions: 2 (6 bytes) */

// <04AC9E89> modellib/model.cpp:934
// function calls: 2
void CModel::SetFlexControllerModelToGlobal(LocalFlexController_t nFlexController, int nModelToGlobal)
{
	CUtlMemory<int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 936
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04AEFBA1> modellib/model.cpp:943
// variables: 2
// function calls: 5
void CModel::LookupFlexControllerByHash(uint32 nFlexControllerNameHash)
{
	LocalFlexController_t nFlexControllerLocalIndex; // 945
	const UtlHashHandle_t  hFlex; // 947
	Find(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMem this,
		KeyArg_t k);  // 947
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<unsigned int, int>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMem this,
			handle_t idx);  // 948
} /* size: 77, variables: 2, inline expansions: 5 (50 bytes) */

// <04AC9E49> modellib/model.cpp:943
// variables: 2
void CModel::LookupFlexControllerByHash(uint32 nFlexControllerNameHash)
{
	LocalFlexController_t nFlexControllerLocalIndex; // 945
	const UtlHashHandle_t  hFlex; // 947
} /* size: 0, variables: 2 */

// <04AC9B84> modellib/model.cpp:960
// variables: 5
// function calls: 8
void CModel::GetFlexControllerHashToGlobal(uint32 nFlexControllerNameHash)
{
	int nFlexControllerGlobalIndex; // 962
	const UtlHashHandle_t  hFlex; // 964
	const char   __FUNCTION__; // 36128
	{
		const int  nFlexControllerModelIndex; // 967
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 968
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::IsValidIndex(
				int i);  // 968
		CUtlMemory<int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 969
	}
	Find(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMem this,
		KeyArg_t k);  // 964
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<unsigned int, int>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMem this,
			handle_t idx);  // 965
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <01E0E9F2> modellib/model.cpp:960
// variables: 5
// function calls: 8
void CModel::GetFlexControllerHashToGlobal(uint32 nFlexControllerNameHash)
{
	int nFlexControllerGlobalIndex; // 962
	const UtlHashHandle_t  hFlex; // 964
	const char   __FUNCTION__; // 43651
	{
		const int  nFlexControllerModelIndex; // 967
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 968
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::IsValidIndex(
				int i);  // 968
		CUtlMemory<int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 969
	}
	Find(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMem this,
		KeyArg_t k);  // 964
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<unsigned int, int>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMem this,
			handle_t idx);  // 965
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <00A449C7> modellib/model.cpp:960
// variables: 5
// function calls: 8
void CModel::GetFlexControllerHashToGlobal(uint32 nFlexControllerNameHash)
{
	int nFlexControllerGlobalIndex; // 962
	const UtlHashHandle_t  hFlex; // 964
	const char   __FUNCTION__; // 18376
	{
		const int  nFlexControllerModelIndex; // 967
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 968
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::IsValidIndex(
				int i);  // 968
		CUtlMemory<int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 969
	}
	Find(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMem this,
		KeyArg_t k);  // 964
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<unsigned int, int>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMem this,
			handle_t idx);  // 965
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <04AC8C94> modellib/model.cpp:977
// variables: 23
// function calls: 55
void CModel::ValidateRemappingTables()
{
	bool bValid; // 979
	const int  nModelBoneCount; // 981
	const int  nModelFlexCtrlCount; // 982
	const int  nModelMeshCount; // 983
	int nNextTableStart; // 997
	{
		int nMesh; // 999
		{
			const CRenderMesh* pMesh; // 1001
			const int  nMeshBoneCount; // 1002
			const int  nMeshFlexCtrlCount; // 1003
			int nMeshHitboxBoneCount; // 1005
			const int  nIndexCount; // 1011
			{
				uint nHitBoxSet; // 1006
				CUtlRBTree<CUtlMap<char const::Count()(char const* const&, char const* const&)>::Node_t, i this); // 177
				CUtlMap<char const::Count()(char const* const&, char const* const&)>* this); // 232
				CUtlDict<CHitBoxSet, int>::Count(); // 1006
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 545
				CUtlRBTree<CUtlMap<char const::Element(
					int i);  // 93
				CUtlMap<char const::operator[](
						IndexType_t i);  // 186
				CUtlDict<CHitBoxSet, int>::Element(
					int i);  // 213
				CUtlDict<CHitBoxSet, int>::operator[](
						int i);  // 1008
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Count(); // 1008
			}
			{
				const int  nTableStart; // 1031
				const int16* pRemapStart; // 1039
				const int16* pBoneRemapStart; // 1041
				const int16* pFlexCtrlRemapStart; // 1042
				const int16* pHitboxBoneRemapStart; // 1043
				{
					int nMeshBone; // 1045
					{
						const int16  nModelBone; // 1047
						CUtlString::Get(); // 672
						CModel::pszName(); // 1050
					}
				}
				{
					int nMeshFlexCtrl; // 1056
					{
						const int16  nModelFlexCtrl; // 1058
						CUtlString::Get(); // 672
						CModel::pszName(); // 1061
					}
				}
				{
					int nMeshHitboxBone; // 1067
					{
						const int16  nModelBone; // 1069
						CUtlString::Get(); // 672
						CModel::pszName(); // 1074
					}
				}
				CUtlMemory<short unsigned int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
						int i);  // 1024
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 1032
				CUtlMemory<short int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
						int i);  // 1039
				CUtlMemory<short unsigned int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
						int i);  // 1026
				CUtlString::Get(); // 672
				CModel::pszName(); // 1026
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 1034
				CUtlString::Get(); // 672
				CModel::pszName(); // 1034
			}
			Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 698
			CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
					int i);  // 701
			CModel::GetMeshData(
					int iMesh);  // 1001
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::IsValidIndex(
					int i);  // 1013
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
					int i);  // 1015
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::IsValidIndex(
					int i);  // 1022
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
					int i);  // 1017
			CUtlString::Get(); // 672
			CModel::pszName(); // 1017
		}
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 2438
	CModel::NumBones(); // 981
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 685
	CModel::GetNumMeshes(); // 983
	CUtlVectorBase<const CFlexController::Count(); // 904
	CModel::NumFlexControllers(); // 982
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 985
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 991
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 987
	CUtlString::Get(); // 672
	CModel::pszName(); // 987
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 993
	CUtlString::Get(); // 672
	CModel::pszName(); // 993
} /* size: 0, variables: 5, inline expansions: 15 (0 bytes) */

// <04AEDB17> modellib/model.cpp:1087
// function calls: 5
void CModel::GetLocalToMasterTableForMesh(int nMesh)
{
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 1089
	CUtlMemory<short int, int>::Base(); // 113
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 1089
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 1089
} /* size: 0, inline expansions: 5 (0 bytes) */

// <04AC8C6E> modellib/model.cpp:1087
void CModel::GetLocalToMasterTableForMesh(int nMesh)
{
} /* size: 0 */

// <04AC8BA7> modellib/model.cpp:1092
// function calls: 3
void CModel::HasAnimationDrivenFlexes()
{
	operator|(ModelFlags_t a,
			ModelFlags_t b);  // 667
	CModel::flags(); // 1094
	operator&(ModelFlags_t a,
			ModelFlags_t b);  // 1094
} /* size: 17, inline expansions: 3 (12 bytes) */

// <04AC857C> modellib/model.cpp:1097
// variables: 10
// function calls: 22
void CModel::GetBoneIndexForHitboxForMesh(const CHitBox* pHitBox, int nMesh)
{
	const char   __FUNCTION__; // 36101
	const int16* pRemappingTable; // 1130
	const int16* pHitBoxRemap; // 1131
	{
		int* _pCrash; // 1105
	}
	{
		int __executeCount; // 1113
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1113
			CUtlString::Get(); // 672
			CModel::pszName(); // 1113
		}
	}
	{
		int __executeCount; // 1119
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1119
			CUtlString::Get(); // 672
			CModel::pszName(); // 1119
		}
	}
	{
		int __executeCount; // 1125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1125
			CUtlString::Get(); // 672
			CModel::pszName(); // 1125
		}
	}
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 1103
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 1105
	CUtlString::Get(); // 672
	CModel::pszName(); // 1105
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1105
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 135
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::IsEmpty(); // 1111
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 135
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::IsEmpty(); // 1123
	CUtlMemory<short int, int>::Base(); // 113
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 1089
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 1089
	CModel::GetLocalToMasterTableForMesh(
					int nMesh);  // 1130
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 1131
} /* size: 0, variables: 3, inline expansions: 16 (0 bytes) */

// <01E0D3EA> modellib/model.cpp:1097
// variables: 10
// function calls: 22
void CModel::GetBoneIndexForHitboxForMesh(const CHitBox* pHitBox, int nMesh)
{
	const char   __FUNCTION__; // 43624
	const int16* pRemappingTable; // 1130
	const int16* pHitBoxRemap; // 1131
	{
		int* _pCrash; // 1105
	}
	{
		int __executeCount; // 1113
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1113
			CUtlString::Get(); // 672
			CModel::pszName(); // 1113
		}
	}
	{
		int __executeCount; // 1119
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1119
			CUtlString::Get(); // 672
			CModel::pszName(); // 1119
		}
	}
	{
		int __executeCount; // 1125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1125
			CUtlString::Get(); // 672
			CModel::pszName(); // 1125
		}
	}
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 1103
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 1105
	CUtlString::Get(); // 672
	CModel::pszName(); // 1105
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1105
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 135
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::IsEmpty(); // 1111
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 135
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::IsEmpty(); // 1123
	CUtlMemory<short int, int>::Base(); // 113
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 1089
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 1089
	CModel::GetLocalToMasterTableForMesh(
					int nMesh);  // 1130
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 1131
} /* size: 0, variables: 3, inline expansions: 16 (0 bytes) */

// <00A433BF> modellib/model.cpp:1097
// variables: 10
// function calls: 22
void CModel::GetBoneIndexForHitboxForMesh(const CHitBox* pHitBox, int nMesh)
{
	const char   __FUNCTION__; // 18349
	const int16* pRemappingTable; // 1130
	const int16* pHitBoxRemap; // 1131
	{
		int* _pCrash; // 1105
	}
	{
		int __executeCount; // 1113
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1113
			CUtlString::Get(); // 672
			CModel::pszName(); // 1113
		}
	}
	{
		int __executeCount; // 1119
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1119
			CUtlString::Get(); // 672
			CModel::pszName(); // 1119
		}
	}
	{
		int __executeCount; // 1125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1125
			CUtlString::Get(); // 672
			CModel::pszName(); // 1125
		}
	}
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 1103
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 1105
	CUtlString::Get(); // 672
	CModel::pszName(); // 1105
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1105
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 135
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::IsEmpty(); // 1111
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 135
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::IsEmpty(); // 1123
	CUtlMemory<short int, int>::Base(); // 113
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 1089
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 1089
	CModel::GetLocalToMasterTableForMesh(
					int nMesh);  // 1130
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 1131
} /* size: 0, variables: 3, inline expansions: 16 (0 bytes) */

// <04AC81CD> modellib/model.cpp:1136
// variables: 3
// function calls: 14
void CModel::FindHitboxSetIndexByName(const char* pName, int nMesh)
{
	const CRenderMesh* pMesh; // 1138
	int nSets; // 1142
	{
		int s; // 1143
		CUtlString::Get(); // 1146
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 545
		CUtlRBTree<CUtlMap<char const::Element(
			int i);  // 93
		CUtlMap<char const::operator[](
				IndexType_t i);  // 186
		CUtlDict<CHitBoxSet, int>::Element(
			int i);  // 213
		CUtlDict<CHitBoxSet, int>::operator[](
				int i);  // 1146
	}
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 698
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
			int i);  // 701
	CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
	CModel::GetMeshData(
			int iMesh);  // 1138
	CUtlRBTree<CUtlMap<char const::Count()(char const* const&, char const* const&)>::Node_t, i this); // 177
	CUtlMap<char const::Count()(char const* const&, char const* const&)>* this); // 232
	CUtlDict<CHitBoxSet, int>::Count(); // 1142
} /* size: 190, variables: 2, inline expansions: 8 (69 bytes) */

// <04AC7D17> modellib/model.cpp:1154
// variables: 3
// function calls: 19
void CModel::FindHitboxSetByName(const char* pName, int nMesh)
{
	const CRenderMesh* pMesh; // 1156
	int nSets; // 1160
	{
		int s; // 1161
		CUtlString::Get(); // 1164
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 545
		CUtlRBTree<CUtlMap<char const::Element(
			int i);  // 93
		CUtlMap<char const::operator[](
				IndexType_t i);  // 186
		CUtlDict<CHitBoxSet, int>::Element(
			int i);  // 213
		CUtlDict<CHitBoxSet, int>::operator[](
				int i);  // 1164
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 545
		CUtlRBTree<CUtlMap<char const::Element(
			int i);  // 93
		CUtlMap<char const::operator[](
				IndexType_t i);  // 186
		CUtlDict<CHitBoxSet, int>::Element(
			int i);  // 213
		CUtlDict<CHitBoxSet, int>::operator[](
				int i);  // 1166
	}
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 698
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
			int i);  // 701
	CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
	CModel::GetMeshData(
			int iMesh);  // 1156
	CUtlRBTree<CUtlMap<char const::Count()(char const* const&, char const* const&)>::Node_t, i this); // 177
	CUtlMap<char const::Count()(char const* const&, char const* const&)>* this); // 232
	CUtlDict<CHitBoxSet, int>::Count(); // 1160
} /* size: 195, variables: 2, inline expansions: 8 (69 bytes) */

// <04AC79CF> modellib/model.cpp:1173
// variables: 2
// function calls: 13
void CModel::GetHitboxSetByIndex(int nIndex, int nMesh)
{
	const CRenderMesh* pMesh; // 1175
	int nSets; // 1179
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 698
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
			int i);  // 701
	CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
	CModel::GetMeshData(
			int iMesh);  // 1175
	CUtlRBTree<CUtlMap<char const::Count()(char const* const&, char const* const&)>::Node_t, i this); // 177
	CUtlMap<char const::Count()(char const* const&, char const* const&)>* this); // 232
	CUtlDict<CHitBoxSet, int>::Count(); // 1179
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 545
	CUtlRBTree<CUtlMap<char const::Element(
		int i);  // 93
	CUtlMap<char const::operator[](
			IndexType_t i);  // 186
	CUtlDict<CHitBoxSet, int>::Element(
		int i);  // 213
	CUtlDict<CHitBoxSet, int>::operator[](
			int i);  // 1183
} /* size: 75, variables: 2, inline expansions: 13 (142 bytes) */

// <04AC77CD> modellib/model.cpp:1186
// variables: 2
// function calls: 8
void CModel::GetHitboxSetCount(int nMesh)
{
	const CRenderMesh* pMesh; // 1188
	int nSets; // 1192
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 698
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
			int i);  // 701
	CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
	CModel::GetMeshData(
			int iMesh);  // 1188
	CUtlRBTree<CUtlMap<char const::Count()(char const* const&, char const* const&)>::Node_t, i this); // 177
	CUtlMap<char const::Count()(char const* const&, char const* const&)>* this); // 232
	CUtlDict<CHitBoxSet, int>::Count(); // 1192
} /* size: 51, variables: 2, inline expansions: 8 (58 bytes) */

// <04AC772D> modellib/model.cpp:1196
// function call: 1
void CModel::GetBoneIndexForHitbox(const CHitBox* pHitBox)
{
	CModel::FindBoneIndexByHash(
				uint32 nHashCode);  // 1198
} /* size: 19, inline expansions: 1 (15 bytes) */

// <04AC6EC4> modellib/model.cpp:1201
// variables: 8
// function calls: 37
void CModel::GetHitboxSetsForMeshGroupMask(CHitboxSetList& hitBoxSets, MeshGroupMask_t nActiveMask, CUtlStringToken hitboxSetName)
{
	int nMeshes; // 1203
	{
		int m; // 1205
		{
			MeshGroupMask_t refMask; // 1207
			{
				const CRenderMesh* pMesh; // 1210
				uint32 nHitboxSetHashCode; // 1211
				int nSets; // 1213
				{
					int s; // 1214
					{
						int nWhich; // 1219
						CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
								int i);  // 545
						CUtlRBTree<CUtlMap<char const::Element(
							int i);  // 93
						CUtlMap<char const::operator[](
								IndexType_t i);  // 186
						CUtlDict<CHitBoxSet, int>::Element(
							int i);  // 213
						CUtlDict<CHitBoxSet, int>::operator[](
								int i);  // 1216
						CUtlMemory<HitBoxSetAndMesh_t, int>::NumAllocated(); // 1143
						CUtlMemory<HitBoxSetAndMesh_t, int>::Base(); // 112
						CUtlVectorBase<HitBoxSetAndMesh_t, CUtlMemoryFixedGrowable<HitBoxSetAndMesh_t, 16, int> >::Base(); // 368
						CUtlVectorBase<HitBoxSetAndMesh_t, CUtlMemoryFixedGrowable<HitBoxSetAndMesh_t, 16, int> >::ResetDbgInfo(); // 824
						CUtlMemory<HitBoxSetAndMesh_t, int>::IsGrowable(); // 823
						CUtlMemory<HitBoxSetAndMesh_t, int>::IsExternallyAllocated(); // 859
						CUtlMemory<HitBoxSetAndMesh_t, int>::IsExternallyAllocated(); // 861
						CUtlMemory<HitBoxSetAndMesh_t, int>::Grow(
							int num);  // 806
						CUtlVectorBase<HitBoxSetAndMesh_t, CUtlMemoryFixedGrowable<HitBoxSetAndMesh_t, 16, int> >::GrowMemory(
								int num);  // 1145
						CUtlVectorBase<HitBoxSetAndMesh_t, CUtlMemoryFixedGrowable<HitBoxSetAndMesh_t, 16, int> >::AddToTail(); // 1219
						CUtlMemory<HitBoxSetAndMesh_t, int>::operator[](
								int i);  // 588
						CUtlVectorBase<HitBoxSetAndMesh_t, CUtlMemoryFixedGrowable<HitBoxSetAndMesh_t, 16, int> >::operator[](
								int i);  // 1220
						CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
								int i);  // 545
						CUtlRBTree<CUtlMap<char const::Element(
							int i);  // 93
						CUtlMap<char const::operator[](
								IndexType_t i);  // 186
						CUtlDict<CHitBoxSet, int>::Element(
							int i);  // 213
						CUtlDict<CHitBoxSet, int>::operator[](
								int i);  // 1220
						CUtlMemory<HitBoxSetAndMesh_t, int>::operator[](
								int i);  // 588
						CUtlVectorBase<HitBoxSetAndMesh_t, CUtlMemoryFixedGrowable<HitBoxSetAndMesh_t, 16, int> >::operator[](
								int i);  // 1221
					}
				}
				Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 698
				CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
						int i);  // 701
				CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
				CModel::GetMeshData(
						int iMesh);  // 1210
				CUtlStringToken::GetHashCode(); // 1211
				CUtlRBTree<CUtlMap<char const::Count()(char const* const&, char const* const&)>::Node_t, i this); // 177
				CUtlMap<char const::Count()(char const* const&, char const* const&)>* this); // 232
				CUtlDict<CHitBoxSet, int>::Count(); // 1213
			}
			CUtlMemory<long long unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
					int i);  // 1207
		}
	}
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 685
	CModel::GetNumMeshes(); // 1203
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <04AC656A> modellib/model.cpp:1227
// variables: 10
// function calls: 40
void CModel::GetHitboxesForMeshGroupMask(CHitboxList& hitBoxes, MeshGroupMask_t nActiveMask, CUtlStringToken hitboxSetName)
{
	int nMeshes; // 1229
	{
		int m; // 1230
		{
			MeshGroupMask_t refMask; // 1232
			{
				const CRenderMesh* pMesh; // 1235
				uint32 nHitboxSetHashCode; // 1237
				int nSets; // 1239
				{
					int s; // 1240
					{
						int nBoxes; // 1245
						{
							int b; // 1246
							{
								int nWhich; // 1248
								CUtlMemory<HitBoxAndMesh_t, int>::Base(); // 112
								CUtlVectorBase<HitBoxAndMesh_t, CUtlMemoryFixedGrowable<HitBoxAndMesh_t, 32, int> >::Base(); // 368
								CUtlVectorBase<HitBoxAndMesh_t, CUtlMemoryFixedGrowable<HitBoxAndMesh_t, 32, int> >::ResetDbgInfo(); // 824
								CUtlMemory<HitBoxAndMesh_t, int>::IsGrowable(); // 823
								CUtlMemory<HitBoxAndMesh_t, int>::IsExternallyAllocated(); // 859
								CUtlMemory<HitBoxAndMesh_t, int>::IsExternallyAllocated(); // 861
								CUtlMemory<HitBoxAndMesh_t, int>::Grow(
									int num);  // 806
								CUtlVectorBase<HitBoxAndMesh_t, CUtlMemoryFixedGrowable<HitBoxAndMesh_t, 32, int> >::GrowMemory(
										int num);  // 1145
								CUtlMemory<HitBoxAndMesh_t, int>::NumAllocated(); // 1143
								CUtlVectorBase<HitBoxAndMesh_t, CUtlMemoryFixedGrowable<HitBoxAndMesh_t, 32, int> >::AddToTail(); // 1248
								CUtlMemory<HitBoxAndMesh_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<HitBoxAndMesh_t, CUtlMemoryFixedGrowable<HitBoxAndMesh_t, 32, int> >::operator[](
										int i);  // 1249
								CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
										int i);  // 545
								CUtlRBTree<CUtlMap<char const::Element(
									int i);  // 93
								CUtlMap<char const::operator[](
										IndexType_t i);  // 186
								CUtlDict<CHitBoxSet, int>::Element(
									int i);  // 213
								CUtlDict<CHitBoxSet, int>::operator[](
										int i);  // 1249
								CUtlMemory<CHitBox, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::operator[](
										int i);  // 1249
								CUtlMemory<HitBoxAndMesh_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<HitBoxAndMesh_t, CUtlMemoryFixedGrowable<HitBoxAndMesh_t, 32, int> >::operator[](
										int i);  // 1250
							}
						}
						CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
								int i);  // 545
						CUtlRBTree<CUtlMap<char const::Element(
							int i);  // 93
						CUtlMap<char const::operator[](
								IndexType_t i);  // 186
						CUtlDict<CHitBoxSet, int>::Element(
							int i);  // 213
						CUtlDict<CHitBoxSet, int>::operator[](
								int i);  // 1242
						CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Count(); // 1245
					}
				}
				Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 698
				CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
						int i);  // 701
				CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
				CModel::GetMeshData(
						int iMesh);  // 1235
				CUtlStringToken::GetHashCode(); // 1237
				CUtlRBTree<CUtlMap<char const::Count()(char const* const&, char const* const&)>::Node_t, i this); // 177
				CUtlMap<char const::Count()(char const* const&, char const* const&)>* this); // 232
				CUtlDict<CHitBoxSet, int>::Count(); // 1239
			}
			CUtlMemory<long long unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
					int i);  // 1232
		}
	}
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 685
	CModel::GetNumMeshes(); // 1229
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <04AC64E9> modellib/model.cpp:1257
// variables: 2
void CModel::GetBoneIndexForHitbox(const HitBoxAndMesh_t& hitBox)
{
	const CHitBox* pHitBox; // 1259
	int nIndex; // 1260
} /* size: 0, variables: 2 */

// <04AC64C4> modellib/model.cpp:1267
int AttachmentHandleToIndex(AttachmentHandle_t hAttachment)
{
} /* size: 0 */

// <04AC649F> modellib/model.cpp:1272
AttachmentHandle_t IndexToAttachmentHandle(int nIndex)
{
} /* size: 0 */

// <04AC5B24> modellib/model.cpp:1277
// variables: 4
// function calls: 45
void CModel::SetupAttachments(const CTransform* pSimWorldTransformsIn, const CTransform& rootTransform, CTransform* pAttachmentWorldTransformsOut)
{
	const char   __FUNCTION__; // 35807
	{
		int i; // 1279
		{
			const AttachmentPairing_t& pairing; // 1281
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
			}
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 2510
			SetupAttachment(int nInfluences,
					const int32* pInfluenceIndices,
					const float* pInfluenceWeights,
					const Vector* pInfluenceOffsets,
					const Quaternion* pInfluenceRotations,
					const CTransform* pSimWorldTransformsIn,
					const CTransform& rootTransform,
					CTransform* pAttachmentWorldTransformOut,
					bool bIgnoreRotation);  // 1283
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			VectorAligned::x(); // 158
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 158
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			VectorAligned::y(); // 158
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 158
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 158
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 158
			VectorAligned::IsValid(); // 44
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			QuaternionAligned::x(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			QuaternionAligned::y(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			QuaternionAligned::z(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 77
			QuaternionAligned::w(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			QuaternionAligned::IsValid(); // 44
			CTransform::IsValid(); // 1286
			CUtlMemory<AttachmentPairing_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
					int i);  // 1281
		}
		CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1279
	}
} /* size: 0, variables: 1 */

// <01E0A992> modellib/model.cpp:1277
// variables: 4
// function calls: 45
void CModel::SetupAttachments(const CTransform* pSimWorldTransformsIn, const CTransform& rootTransform, CTransform* pAttachmentWorldTransformsOut)
{
	const char   __FUNCTION__; // 43330
	{
		int i; // 1279
		{
			const AttachmentPairing_t& pairing; // 1281
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
			}
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 2510
			SetupAttachment(int nInfluences,
					const int32* pInfluenceIndices,
					const float* pInfluenceWeights,
					const Vector* pInfluenceOffsets,
					const Quaternion* pInfluenceRotations,
					const CTransform* pSimWorldTransformsIn,
					const CTransform& rootTransform,
					CTransform* pAttachmentWorldTransformOut,
					bool bIgnoreRotation);  // 1283
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			VectorAligned::x(); // 158
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 158
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			VectorAligned::y(); // 158
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 158
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 158
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 158
			VectorAligned::IsValid(); // 44
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			QuaternionAligned::x(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			QuaternionAligned::y(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			QuaternionAligned::z(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 77
			QuaternionAligned::w(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			QuaternionAligned::IsValid(); // 44
			CTransform::IsValid(); // 1286
			CUtlMemory<AttachmentPairing_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
					int i);  // 1281
		}
		CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1279
	}
} /* size: 0, variables: 1 */

// <00A40967> modellib/model.cpp:1277
// variables: 4
// function calls: 45
void CModel::SetupAttachments(const CTransform* pSimWorldTransformsIn, const CTransform& rootTransform, CTransform* pAttachmentWorldTransformsOut)
{
	const char   __FUNCTION__; // 18055
	{
		int i; // 1279
		{
			const AttachmentPairing_t& pairing; // 1281
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
			}
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 2510
			SetupAttachment(int nInfluences,
					const int32* pInfluenceIndices,
					const float* pInfluenceWeights,
					const Vector* pInfluenceOffsets,
					const Quaternion* pInfluenceRotations,
					const CTransform* pSimWorldTransformsIn,
					const CTransform& rootTransform,
					CTransform* pAttachmentWorldTransformOut,
					bool bIgnoreRotation);  // 1283
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			VectorAligned::x(); // 158
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 158
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			VectorAligned::y(); // 158
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 158
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 158
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 158
			VectorAligned::IsValid(); // 44
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			QuaternionAligned::x(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			QuaternionAligned::y(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			QuaternionAligned::z(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 77
			QuaternionAligned::w(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			QuaternionAligned::IsValid(); // 44
			CTransform::IsValid(); // 1286
			CUtlMemory<AttachmentPairing_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
					int i);  // 1281
		}
		CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1279
	}
} /* size: 0, variables: 1 */

// <04AC587C> modellib/model.cpp:1290
// variables: 2
// function calls: 10
void CModel::SetupAttachments(const CTransform* pSimWorldTransformsIn, CTransform* pAttachmentWorldTransformsOut)
{
	CTransform identity; // 1292
	VectorAligned::operator fltx4(); // 378
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 378
	VectorAligned::operator=(
			fltx4 src);  // 378
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 379
	CTransform::SetToIdentity(); // 1293
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 1292
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <04AC55F2> modellib/model.cpp:1298
// variables: 3
// function calls: 6
void CModel::SetupAttachments(const matrix3x4a_t* pSimWorldTransformsIn, const matrix3x4a_t& rootTransform, matrix3x4a_t* pAttachmentWorldTransformsOut)
{
	{
		int i; // 1300
		{
			const AttachmentPairing_t& pairing; // 1302
			matrix3x4a_t attachmentToWorld; // 1304
			SetupAttachment(int nInfluences,
					const int32* pInfluenceIndices,
					const float* pInfluenceWeights,
					const Vector* pInfluenceOffsets,
					const Quaternion* pInfluenceRotations,
					const matrix3x4a_t* pSimWorldTransformsIn,
					const matrix3x4a_t& rootTransform,
					matrix3x4a_t* pAttachmentWorldTransformOut,
					bool bIgnoreRotation);  // 1305
			CUtlMemory<AttachmentPairing_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
					int i);  // 1302
			matrix3x4_t::matrix3x4_t(); // 303
			matrix3x4a_t::matrix3x4a_t(); // 1304
		}
		CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1300
	}
} /* size: 339 */

// <04AC5150> modellib/model.cpp:1312
// variable: 1
// function calls: 17
void CModel::SetupAttachmentTransform(AttachmentHandle_t hAttachment, const CTransform* pSimWorldTransformsIn, CTransform& worldTransformOut)
{
	AttachmentHandle_t::operator==(
			const AttachmentHandle_t& other);  // 1319
	VectorAligned::operator fltx4(); // 378
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 379
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 378
	VectorAligned::operator=(
			fltx4 src);  // 378
	CTransform::SetToIdentity(); // 1321
	CModel::SetupAttachmentTransform(
				AttachmentHandle_t hAttachment,
				const CTransform& worldSpaceRootTransform,
				const CTransform* pSimWorldTransformsIn,
				CTransform& worldTransformOut);  // 1317
	AttachmentHandleToIndex(AttachmentHandle_t hAttachment); // 1327
	CUtlMemory<AttachmentPairing_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
			int i);  // 1327
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 2510
	SetupAttachment(int nInfluences,
			const int32* pInfluenceIndices,
			const float* pInfluenceWeights,
			const Vector* pInfluenceOffsets,
			const Quaternion* pInfluenceRotations,
			const CTransform* pSimWorldTransformsIn,
			const CTransform& rootTransform,
			CTransform* pAttachmentWorldTransformOut,
			bool bIgnoreRotation);  // 1328
	CModel::SetupAttachmentTransform(
				AttachmentHandle_t hAttachment,
				const CTransform& worldSpaceRootTransform,
				const CTransform* pSimWorldTransformsIn,
				CTransform& worldTransformOut);  // 1314
} /* size: 203, inline expansions: 15 (500 bytes) */

// <04AEDD04> modellib/model.cpp:1317
// variables: 2
// function calls: 16
void CModel::SetupAttachmentTransform(AttachmentHandle_t hAttachment, const CTransform& worldSpaceRootTransform, const CTransform* pSimWorldTransformsIn, CTransform& worldTransformOut)
{
	const AttachmentPairing_t& pairing; // 1327
	AttachmentHandle_t::operator==(
			const AttachmentHandle_t& other);  // 1319
	VectorAligned::operator fltx4(); // 378
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 378
	VectorAligned::operator=(
			fltx4 src);  // 378
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 379
	CTransform::SetToIdentity(); // 1321
	CModel::SetupAttachmentTransform(
				AttachmentHandle_t hAttachment,
				const CTransform& worldSpaceRootTransform,
				const CTransform* pSimWorldTransformsIn,
				CTransform& worldTransformOut);  // 1317
	AttachmentHandleToIndex(AttachmentHandle_t hAttachment); // 1327
	CUtlMemory<AttachmentPairing_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
			int i);  // 1327
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 2510
	SetupAttachment(int nInfluences,
			const int32* pInfluenceIndices,
			const float* pInfluenceWeights,
			const Vector* pInfluenceOffsets,
			const Quaternion* pInfluenceRotations,
			const CTransform* pSimWorldTransformsIn,
			const CTransform& rootTransform,
			CTransform* pAttachmentWorldTransformOut,
			bool bIgnoreRotation);  // 1328
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <04AC50F6> modellib/model.cpp:1317
// variable: 1
void CModel::SetupAttachmentTransform(AttachmentHandle_t hAttachment, const CTransform& worldSpaceRootTransform, const CTransform* pSimWorldTransformsIn, CTransform& worldTransformOut)
{
	const AttachmentPairing_t& pairing; // 1327
} /* size: 0, variables: 1 */

// <04AEE15E> modellib/model.cpp:1333
// variable: 1
// function calls: 13
void CModel::SetupAttachmentTransform(AttachmentHandle_t hAttachment, const matrix3x4_t& worldSpaceRootTransform, const matrix3x4a_t* pSimWorldTransformsIn, matrix3x4a_t& worldTransformOut)
{
	const AttachmentPairing_t& pairing; // 1341
	AttachmentHandle_t::operator==(
			const AttachmentHandle_t& other);  // 1335
	AttachmentHandleToIndex(AttachmentHandle_t hAttachment); // 1341
	CUtlMemory<AttachmentPairing_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
			int i);  // 1341
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 1343
	SetupAttachment(int nInfluences,
			const int32* pInfluenceIndices,
			const float* pInfluenceWeights,
			const Vector* pInfluenceOffsets,
			const Quaternion* pInfluenceRotations,
			const matrix3x4a_t* pSimWorldTransformsIn,
			const matrix3x4a_t& rootTransform,
			matrix3x4a_t* pAttachmentWorldTransformOut,
			bool bIgnoreRotation);  // 1342
	matrix3x4_t::SetToIdentity(); // 1337
} /* size: 0, variables: 1, inline expansions: 13 (0 bytes) */

// <04AC509C> modellib/model.cpp:1333
// variable: 1
void CModel::SetupAttachmentTransform(AttachmentHandle_t hAttachment, const matrix3x4_t& worldSpaceRootTransform, const matrix3x4a_t* pSimWorldTransformsIn, matrix3x4a_t& worldTransformOut)
{
	const AttachmentPairing_t& pairing; // 1341
} /* size: 0, variables: 1 */

// <04AC4C90> modellib/model.cpp:1348
// function calls: 14
void CModel::SetupAttachmentTransform(AttachmentHandle_t hAttachment, const matrix3x4a_t* pSimWorldTransformsIn, matrix3x4a_t& worldTransformOut)
{
	AttachmentHandle_t::operator==(
			const AttachmentHandle_t& other);  // 1335
	AttachmentHandleToIndex(AttachmentHandle_t hAttachment); // 1341
	CUtlMemory<AttachmentPairing_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
			int i);  // 1341
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 1343
	SetupAttachment(int nInfluences,
			const int32* pInfluenceIndices,
			const float* pInfluenceWeights,
			const Vector* pInfluenceOffsets,
			const Quaternion* pInfluenceRotations,
			const matrix3x4a_t* pSimWorldTransformsIn,
			const matrix3x4a_t& rootTransform,
			matrix3x4a_t* pAttachmentWorldTransformOut,
			bool bIgnoreRotation);  // 1342
	matrix3x4_t::SetToIdentity(); // 1337
	CModel::SetupAttachmentTransform(
				AttachmentHandle_t hAttachment,
				const matrix3x4_t& worldSpaceRootTransform,
				const matrix3x4a_t* pSimWorldTransformsIn,
				matrix3x4a_t& worldTransformOut);  // 1350
} /* size: 0, inline expansions: 14 (0 bytes) */

// <04AC4BF1> modellib/model.cpp:1353
// function calls: 2
void CModel::GetSimAttachmentTransformIndex(AttachmentHandle_t hAttachment)
{
	AttachmentHandle_t::GetRaw(); // 1269
	AttachmentHandleToIndex(AttachmentHandle_t hAttachment); // 1355
} /* size: 12, inline expansions: 2 (7 bytes) */

// <04AEE512> modellib/model.cpp:1358
// function calls: 2
void CModel::GetAttachmentHandleFromIndex(int nIndex)
{
	AttachmentHandle_t::AttachmentHandle_t(
				uint8 value);  // 1274
	IndexToAttachmentHandle(int nIndex); // 1360
} /* size: 8, inline expansions: 2 (3 bytes) */

// <04AC4BCB> modellib/model.cpp:1358
void CModel::GetAttachmentHandleFromIndex(int nIndex)
{
} /* size: 0 */

// <04AC4B6C> modellib/model.cpp:1363
// function call: 1
void CModel::GetNumAttachments()
{
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1365
} /* size: 11, inline expansions: 1 (0 bytes) */

// <04AEE5A9> modellib/model.cpp:1368
// variable: 1
// function calls: 5
void CModel::GetAttachmentHandle(CUtlStringToken nAttachmentToken)
{
	{
		int i; // 1370
		CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1370
		CUtlMemory<AttachmentPairing_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
				int i);  // 1372
		AttachmentHandle_t::AttachmentHandle_t(
					uint8 value);  // 1274
		IndexToAttachmentHandle(int nIndex); // 1374
	}
} /* size: 51 */

// <04AC4B39> modellib/model.cpp:1368
// variable: 1
void CModel::GetAttachmentHandle(CUtlStringToken nAttachmentToken)
{
	{
		int i; // 1370
	}
} /* size: 0 */

// <04AC496C> modellib/model.cpp:1381
// variable: 1
// function calls: 7
void CModel::GetAttachmentNameToken(AttachmentHandle_t nAttachmentHandle)
{
	int nIndex; // 1383
	AttachmentHandle_t::GetRaw(); // 1269
	AttachmentHandleToIndex(AttachmentHandle_t hAttachment); // 1383
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1384
	CUtlMemory<AttachmentPairing_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
			int i);  // 1387
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 1387
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <04AC444F> modellib/model.cpp:1390
// variables: 2
// function calls: 21
void CModel::GetAttachmentData(CUtlVector<const CAttachment*, CUtlMemory<const CAttachment*, int> >& attachmentList)
{
	{
		int i; // 1394
		{
			const AttachmentPairing_t& pairing; // 1396
			CUtlMemory<AttachmentPairing_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
					int i);  // 1396
			CUtlMemory<const CAttachment::operator[](
					int i);  // 588
			CUtlVectorBase<const CAttachment::operator[](
					int i);  // 1397
		}
		CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1394
	}
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1392
	CUtlVectorBase<const CAttachment::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<const CAttachment::NumAllocated(); // 782
	CUtlMemory<const CAttachment::IsGrowable(); // 823
	CUtlMemory<const CAttachment::IsExternallyAllocated(); // 859
	CUtlMemory<const CAttachment::IsExternallyAllocated(); // 861
	CUtlMemory<const CAttachment::Grow(
		int num);  // 806
	CUtlMemory<const CAttachment::Base(); // 112
	CUtlVectorBase<const CAttachment::Base(); // 368
	CUtlVectorBase<const CAttachment::ResetDbgInfo(); // 824
	CUtlVectorBase<const CAttachment::GrowMemory(
			int num);  // 784
	CUtlVectorBase<const CAttachment::GrowVector(
			int num);  // 1445
	CUtlVectorBase<const CAttachment::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<const CAttachment::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<const CAttachment::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<const CAttachment::SetCount(
		int count);  // 1392
} /* size: 0, inline expansions: 16 (0 bytes) */

// <04AEE700> modellib/model.cpp:1401
// variable: 1
// function calls: 5
void CModel::GetAttachment(const AttachmentHandle_t& hAttachment)
{
	int nIndex; // 1403
	AttachmentHandle_t::GetRaw(); // 1269
	AttachmentHandleToIndex(AttachmentHandle_t hAttachment); // 1403
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1405
	CUtlMemory<AttachmentPairing_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
			int i);  // 1407
} /* size: 52, variables: 1, inline expansions: 5 (10 bytes) */

// <04AC441C> modellib/model.cpp:1401
// variable: 1
void CModel::GetAttachment(const AttachmentHandle_t& hAttachment)
{
	int nIndex; // 1403
} /* size: 0, variables: 1 */

// <04AC43BD> modellib/model.cpp:1413
// function call: 1
void CModel::FirstAttachmentHandle()
{
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1415
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04AC42AD> modellib/model.cpp:1421
// variable: 1
// function calls: 4
void CModel::NextAttachmentHandle(AttachmentHandle_t hAttachment)
{
	int nCurrentIndex; // 1426
	AttachmentHandle_t::operator==(
			const AttachmentHandle_t& other);  // 1423
	AttachmentHandleToIndex(AttachmentHandle_t hAttachment); // 1426
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1427
	IndexToAttachmentHandle(int nIndex); // 1432
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <04AEE854> modellib/model.cpp:1435
// function calls: 7
void CModel::GetAttachmentName(AttachmentHandle_t hAttachment)
{
	AttachmentHandle_t::GetRaw(); // 1269
	AttachmentHandleToIndex(AttachmentHandle_t hAttachment); // 1403
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1405
	CUtlMemory<AttachmentPairing_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
			int i);  // 1407
	CModel::GetAttachment(
			const AttachmentHandle_t& hAttachment);  // 1437
	CUtlString::Get(); // 1437
} /* size: 0, inline expansions: 7 (0 bytes) */

// <04AC4287> modellib/model.cpp:1435
void CModel::GetAttachmentName(AttachmentHandle_t hAttachment)
{
} /* size: 0 */

// <04AC40ED> modellib/model.cpp:1440
// function calls: 6
void CModel::GetAttachmentBoneCount(AttachmentHandle_t hAttachment)
{
	AttachmentHandle_t::GetRaw(); // 1269
	AttachmentHandleToIndex(AttachmentHandle_t hAttachment); // 1403
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1405
	CUtlMemory<AttachmentPairing_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
			int i);  // 1407
	CModel::GetAttachment(
			const AttachmentHandle_t& hAttachment);  // 1442
} /* size: 0, inline expansions: 6 (55 bytes) */

// <04AC3FDD> modellib/model.cpp:1445
// function calls: 4
void CModel::GetAttachmentBone(AttachmentHandle_t hAttachment, int nIndex)
{
	AttachmentHandle_t::GetRaw(); // 1269
	AttachmentHandleToIndex(AttachmentHandle_t hAttachment); // 1447
	CUtlMemory<AttachmentPairing_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
			int i);  // 1447
} /* size: 37, inline expansions: 4 (13 bytes) */

// <04AC3B7F> modellib/model.cpp:1450
// function calls: 17
void CModel::GetAttachmentOffset(AttachmentHandle_t hAttachment, int nIndex, float* pWeight, Vector* pOffset, Quaternion* pQuatOffset)
{
	AttachmentHandle_t::GetRaw(); // 1269
	AttachmentHandleToIndex(AttachmentHandle_t hAttachment); // 1403
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1405
	CUtlMemory<AttachmentPairing_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
			int i);  // 1407
	CModel::GetAttachment(
			const AttachmentHandle_t& hAttachment);  // 1454
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1405
	CUtlMemory<AttachmentPairing_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
			int i);  // 1407
	AttachmentHandleToIndex(AttachmentHandle_t hAttachment); // 1403
	CModel::GetAttachment(
			const AttachmentHandle_t& hAttachment);  // 1459
	Vector::operator=(
			const Vector& vOther);  // 1459
	AttachmentHandleToIndex(AttachmentHandle_t hAttachment); // 1403
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1405
	CUtlMemory<AttachmentPairing_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
			int i);  // 1407
	CModel::GetAttachment(
			const AttachmentHandle_t& hAttachment);  // 1464
} /* size: 0, inline expansions: 17 (259 bytes) */

// <04AC3A24> modellib/model.cpp:1468
// variable: 1
// function call: 1
void CModel::GetAttachmentOffset(AttachmentHandle_t hAttachment, int nIndex, float* pWeight, Vector* pOffset, QAngle* pAngleOffset)
{
	Quaternion angles; // 1470
	Quaternion::Quaternion(); // 1470
} /* size: 109, variables: 1, inline expansions: 1 (0 bytes) */

// <04AC388D> modellib/model.cpp:1478
// variables: 2
// function calls: 2
void CModel::GetAttachmentOffset(AttachmentHandle_t hAttachment, int nIndex, float* pWeight, matrix3x4a_t* pOffset)
{
	Vector origin; // 1480
	Quaternion angles; // 1481
	Vector::Vector(); // 1480
	Quaternion::Quaternion(); // 1481
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <04AC350E> modellib/model.cpp:1489
// variables: 3
// function calls: 10
void CModel::GetAttachmentOffset(AttachmentHandle_t hAttachment, int nIndex, float* pWeight)
{
	Vector origin; // 1491
	Quaternion qOrientation; // 1492
	Vector::Vector(); // 1491
	Quaternion::Quaternion(); // 1492
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
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
			float p3);  // 111
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 1494
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

// <04AC3304> modellib/model.cpp:1501
// variables: 3
// function calls: 8
void CModel::GetAnimationStateSize()
{
	int nBoneSize; // 1503
	int nFlexControllerSize; // 1504
	int nUserDataSize; // 1505
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 2438
	CModel::NumBones(); // 1515
	CModel::GetAnimationStateCount(
				AnimationStateType_t nStateType);  // 1503
	CModel::GetUserDataSizeof(); // 1505
	CUtlVectorBase<const CFlexController::Count(); // 904
	CModel::NumFlexControllers(); // 1518
	CModel::GetAnimationStateCount(
				AnimationStateType_t nStateType);  // 1504
} /* size: 47, variables: 3, inline expansions: 8 (20 bytes) */

// <04AEE9E7> modellib/model.cpp:1510
// function calls: 8
void CModel::GetAnimationStateCount(AnimationStateType_t nStateType)
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 2438
	CModel::NumBones(); // 1515
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::Count(); // 1594
	CModel::NumUserDataElements(); // 1521
	CModel::GetAnimationStateCount(
				AnimationStateType_t nStateType);  // 1510
	CUtlVectorBase<const CFlexController::Count(); // 904
	CModel::NumFlexControllers(); // 1518
} /* size: 63, inline expansions: 8 (38 bytes) */

// <04AC32DE> modellib/model.cpp:1510
void CModel::GetAnimationStateCount(AnimationStateType_t nStateType)
{
} /* size: 0 */

// <04AC30BF> modellib/model.cpp:1527
// variables: 2
// function calls: 8
void CModel::GetAnimationStateOffset(AnimationStateType_t nStateType)
{
	const char   __FUNCTION__; // 35976
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1541
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 2438
	CModel::NumBones(); // 1538
	CUtlVectorBase<const CFlexController::Count(); // 904
	CModel::NumFlexControllers(); // 1538
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 2438
	CModel::NumBones(); // 1535
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <01E07F2D> modellib/model.cpp:1527
// variables: 2
// function calls: 8
void CModel::GetAnimationStateOffset(AnimationStateType_t nStateType)
{
	const char   __FUNCTION__; // 43499
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1541
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 2438
	CModel::NumBones(); // 1538
	CUtlVectorBase<const CFlexController::Count(); // 904
	CModel::NumFlexControllers(); // 1538
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 2438
	CModel::NumBones(); // 1535
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <00A3DF02> modellib/model.cpp:1527
// variables: 2
// function calls: 8
void CModel::GetAnimationStateOffset(AnimationStateType_t nStateType)
{
	const char   __FUNCTION__; // 18224
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1541
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 2438
	CModel::NumBones(); // 1538
	CUtlVectorBase<const CFlexController::Count(); // 904
	CModel::NumFlexControllers(); // 1538
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 2438
	CModel::NumBones(); // 1535
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <04AC2E8A> modellib/model.cpp:1545
// function calls: 5
void CModel::IsDataElementNeeded(const char* szChannelClass, const char* szElementName)
{
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 334
	CModelSkeleton::FindBoneIndex(
			const char* pBoneName);  // 1562
	CModel::FindBoneIndex(
			const char* szBoneName);  // 1550
} /* size: 0, inline expansions: 5 (0 bytes) */

// <04AC2E5C> modellib/model.cpp:1555
void CModel::MasterSkeleton()
{
} /* size: 12 */

// <04AEEBAB> modellib/model.cpp:1560
// function calls: 4
void CModel::FindBoneIndex(const char* szBoneName)
{
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 334
	CModelSkeleton::FindBoneIndex(
			const char* pBoneName);  // 1562
} /* size: 0, inline expansions: 4 (276 bytes) */

// <04AC2E36> modellib/model.cpp:1560
void CModel::FindBoneIndex(const char* szBoneName)
{
} /* size: 0 */

// <04AEED73> modellib/model.cpp:1565
void CModel::FindBoneIndexByHash(uint32 nHashCode)
{
} /* size: 16 */

// <04AC2CBB> modellib/model.cpp:1570
// function calls: 5
void CModel::GetBoneSphereRadius(uint nBoneIndex)
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 76
	CUtlMemory<float, int>::operator[](
			int i);  // 595
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 77
	CModelSkeleton::Sphere(
		int nBoneIndex);  // 74
	CModelSkeleton::Sphere(
		int nBoneIndex);  // 1572
} /* size: 0, inline expansions: 5 (0 bytes) */

// <04AC2672> modellib/model.cpp:1576
// variables: 2
// function calls: 20
void CModel::FindUserDataIndex(const char* szDataElementName, int nFieldType)
{
	{
		UtlHashHandle_t index; // 1580
		HashStringFastCaseless(const char* pszKey); // 96
		CHash<true>::operator(
				const Entry_t& entry);  // 239
		{
			int bucketCount; // 249
			Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<User this); // 249
		}
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserData this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<User this,
				int i);  // 254
		Count(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement this); // 255
		CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement this,
			int i);  // 258
		CCompare<true>::operator(
				const Entry_t& entry1,
				const Entry_t& entry2);  // 258
		DoFind(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this,
			const Entry_t& src,
			unsigned int* pBucket,
			int* pIndex);  // 278
		{
		}
		{
		}
		BuildHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this,
				int ndxBucket,
				int ndxKeyData);  // 280
		Find(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this,
			const Entry_t& src);  // 330
		CUtlHashDict<UserDataElement_t, true, false>::Find(
			const char* pName);  // 1580
		GetBucketIndex(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this,
				UtlHashHandle_t handle);  // 403
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElemen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataEl this,
				int i);  // 406
		CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this,
			int i);  // 406
		operator[](const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp this,
				UtlHashHandle_t handle);  // 127
		CUtlHashDict<UserDataElement_t, true, false>::Element(
			UtlHashHandle_t handle);  // 1583
	}
} /* size: 0 */

// <04AEEDCF> modellib/model.cpp:1590
// function call: 1
void CModel::NumUserDataElements()
{
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::Count(); // 1594
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04AC2659> modellib/model.cpp:1590
void CModel::NumUserDataElements()
{
} /* size: 0 */

// <04AEEE29> modellib/model.cpp:1599
void CModel::GetUserDataSizeof()
{
} /* size: 0 */

// <04AC2612> modellib/model.cpp:1609
void CModel::GetAnimContainer()
{
} /* size: 0 */

// <04AEEE52> modellib/model.cpp:1617
// function calls: 2
void CModel::IsValidAnimation(int nAnimation)
{
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Count(); // 1652
	CModel::GetNumAnim(); // 1619
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04AC25EC> modellib/model.cpp:1617
void CModel::IsValidAnimation(int nAnimation)
{
} /* size: 0 */

// <04AC21D0> modellib/model.cpp:1639
// function calls: 19
void CModel::pAnimdesc(int nAnimation)
{
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Count(); // 1652
	CModel::GetNumAnim(); // 1619
	CModel::IsValidAnimation(
			int nAnimation);  // 1641
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 497
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 595
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 498
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 239
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
	CAnimationGroupResource::pLocalHAnim(
			int nLocalHAnim);  // 498
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
	{
	}
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
	CAnimationResource::GetData(); // 499
	CUtlMemory<CAnimDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
			int i);  // 499
	CAnimContainer::GetAnimdesc(
			int nAnimation);  // 1643
} /* size: 0, inline expansions: 19 (343 bytes) */

// <04AEEEE4> modellib/model.cpp:1648
// function call: 1
void CModel::GetNumAnim()
{
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Count(); // 1652
} /* size: 25, inline expansions: 1 (6 bytes) */

// <04AC21B7> modellib/model.cpp:1648
void CModel::GetNumAnim()
{
} /* size: 0 */

// <04AC1B9E> modellib/model.cpp:1657
// variables: 2
// function calls: 20
void CModel::LookupAnimation(const char* _pszName)
{
	{
		UtlHashHandle_t handle; // 1661
		HashStringFastCaseless(const char* pszKey); // 96
		CHash<true>::operator(
				const Entry_t& entry);  // 239
		{
			int bucketCount; // 249
			Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this); // 249
		}
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this,
				int i);  // 254
		Count(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this); // 255
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this,
			int i);  // 258
		CCompare<true>::operator(
				const Entry_t& entry1,
				const Entry_t& entry2);  // 258
		DoFind(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
			const Entry_t& src,
			unsigned int* pBucket,
			int* pIndex);  // 278
		{
		}
		{
		}
		BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
				int ndxBucket,
				int ndxKeyData);  // 280
		Find(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
			const Entry_t& src);  // 330
		CUtlHashDict<short int, true, false>::Find(
			const char* pName);  // 1661
		GetBucketIndex(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
				UtlHashHandle_t handle);  // 403
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, f this,
				int i);  // 406
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this,
			int i);  // 406
		operator[](const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH this,
				UtlHashHandle_t handle);  // 127
		CUtlHashDict<short int, true, false>::Element(
			UtlHashHandle_t handle);  // 1664
	}
} /* size: 0 */

// <04AC1A94> modellib/model.cpp:1670
// function calls: 4
void CModel::GetAnimationName(int nAnimation)
{
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 358
	CAnimDesc::GetName(); // 1674
} /* size: 88, inline expansions: 4 (82 bytes) */

// <04AC19DB> modellib/model.cpp:1677
// function calls: 2
void CAnimContainer::pSeqGroupInstance(int nGroup)
{
	CUtlMemory<CSeqGroupInstance, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::operator[](
			int i);  // 1679
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04AC18CC> modellib/model.cpp:1682
// function calls: 4
void CAnimContainer::GetAnimDecodeSwizzle(int nAnimation)
{
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 1684
	CUtlMemory<CAnimDecodeSwizzle, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::operator[](
			int i);  // 1684
} /* size: 0, inline expansions: 4 (0 bytes) */

// <04AC1743> modellib/model.cpp:1687
// function calls: 6
void CAnimContainer::GetAnimResourceDataChannel(int nChannel)
{
	CUtlMemory<CAnimDataChannel, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
			int i);  // 1689
	CUtlMemory<CAnimDecodeSwizzle, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::operator[](
			int i);  // 1689
	CUtlMemory<CAnimDataChannelDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::operator[](
			int i);  // 1689
} /* size: 0, inline expansions: 6 (0 bytes) */

// <04AC1653> modellib/model.cpp:1693
// variable: 1
// function calls: 3
void CAnimContainer::GetAnimGroupIndex(const CAnimationGroupResource* pAnimGroup)
{
	{
		int i; // 1695
		CUtlVectorBase<const CAnimationGroupResource::Count(); // 1695
		CUtlMemory<const CAnimationGroupResource::operator[](
				int i);  // 595
		CUtlVectorBase<const CAnimationGroupResource::operator[](
				int i);  // 1697
	}
} /* size: 0 */

// <04AEEF3E> modellib/model.cpp:1704
// function calls: 7
void CAnimContainer::GetAnimRetarget(int nAnimation)
{
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 1706
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 1711
	CUtlMemory<CAnimRetarget, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimRetarget, CUtlMemory<CAnimRetarget, int> >::operator[](
			int i);  // 1711
	CAnimContainer::GetAnimGroupRetarget(
				int nGroup);  // 1706
} /* size: 0, inline expansions: 7 (0 bytes) */

// <04AC162D> modellib/model.cpp:1704
void CAnimContainer::GetAnimRetarget(int nAnimation)
{
} /* size: 0 */

// <04AEF0DA> modellib/model.cpp:1709
// function calls: 4
void CAnimContainer::GetAnimGroupRetarget(int nGroup)
{
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 1711
	CUtlMemory<CAnimRetarget, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimRetarget, CUtlMemory<CAnimRetarget, int> >::operator[](
			int i);  // 1711
} /* size: 0, inline expansions: 4 (0 bytes) */

// <04AC1607> modellib/model.cpp:1709
void CAnimContainer::GetAnimGroupRetarget(int nGroup)
{
} /* size: 0 */

// <04AEF1D6> modellib/model.cpp:1714
// function calls: 5
void CAnimContainer::GetAnimGroupRetargetName(int nGroup)
{
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 1716
	CUtlMemory<CAnimRetarget, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimRetarget, CUtlMemory<CAnimRetarget, int> >::operator[](
			int i);  // 1716
	CUtlString::Get(); // 1716
} /* size: 0, inline expansions: 5 (0 bytes) */

// <04AC15E1> modellib/model.cpp:1714
void CAnimContainer::GetAnimGroupRetargetName(int nGroup)
{
} /* size: 0 */

// <04AC1394> modellib/model.cpp:1719
// variable: 1
// function calls: 7
void CAnimContainer::EncodeAnimGroupBonename(CUtlString& sDstBoneName, const char* pSrcBoneName, int nAnimGroup)
{
	{
		const char* pRetargetName; // 1727
		CUtlMemory<CAnimRetarget, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CAnimRetarget, CUtlMemory<CAnimRetarget, int> >::operator[](
				int i);  // 1716
		CUtlString::Get(); // 1716
		CAnimContainer::GetAnimGroupRetargetName(
					int nGroup);  // 1727
	}
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 1721
	CUtlString::operator=(
			const char* src);  // 1723
} /* size: 0, inline expansions: 3 (0 bytes) */

// <04AEF2FB> modellib/model.cpp:1733
// variable: 1
// function calls: 9
void CAnimContainer::GetXYMovementScaleAnim(int nAnimation)
{
	const CAnimRetarget* pRetarget; // 1735
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 1706
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 1711
	CUtlMemory<CAnimRetarget, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimRetarget, CUtlMemory<CAnimRetarget, int> >::operator[](
			int i);  // 1711
	CAnimContainer::GetAnimGroupRetarget(
				int nGroup);  // 1706
	CAnimContainer::GetAnimRetarget(
			int nAnimation);  // 1735
	CAnimRetarget::GetXYMovementScale(); // 1736
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <04AC1361> modellib/model.cpp:1733
// variable: 1
void CAnimContainer::GetXYMovementScaleAnim(int nAnimation)
{
	const CAnimRetarget* pRetarget; // 1735
} /* size: 0, variables: 1 */

// <04AEF4FF> modellib/model.cpp:1744
// function calls: 2
void CModel::IsValidSequence(HSequence hSequence)
{
	HSequence::operator==(
			const HSequence& other);  // 1746
	CUtlVectorBase<ISequence::Count(); // 1753
} /* size: 69, inline expansions: 2 (0 bytes) */

// <04AC133B> modellib/model.cpp:1744
void CModel::IsValidSequence(HSequence hSequence)
{
} /* size: 0 */

// <04AEF5A8> modellib/model.cpp:1762
// function call: 1
void CModel::FirstSequence()
{
	CUtlVectorBase<ISequence::Count(); // 1764
} /* size: 54, inline expansions: 1 (0 bytes) */

// <04AC1322> modellib/model.cpp:1762
void CModel::FirstSequence()
{
} /* size: 0 */

// <04AC1237> modellib/model.cpp:1771
// function calls: 3
void CModel::NextSequence(HSequence hSequence)
{
	HSequence::GetRaw(); // 1773
	CUtlVectorBase<ISequence::Count(); // 1773
	HSequence::HSequence(
			int32 value);  // 1775
} /* size: 87, inline expansions: 3 (0 bytes) */

// <01E05A52> modellib/model.cpp:1783
// variables: 2
// function calls: 21
void CModel::LookupSequence(const char* _pszName)
{
	{
		UtlHashHandle_t handle; // 1787
		HashStringFastCaseless(const char* pszKey); // 96
		CHash<true>::operator(
				const Entry_t& entry);  // 239
		{
			int bucketCount; // 249
			Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this); // 249
		}
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this,
				int i);  // 254
		Count(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this); // 255
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this,
			int i);  // 258
		CCompare<true>::operator(
				const Entry_t& entry1,
				const Entry_t& entry2);  // 258
		DoFind(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
			const Entry_t& src,
			unsigned int* pBucket,
			int* pIndex);  // 278
		{
		}
		{
		}
		BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
				int ndxBucket,
				int ndxKeyData);  // 280
		Find(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
			const Entry_t& src);  // 330
		CUtlHashDict<short int, true, false>::Find(
			const char* pName);  // 1787
		GetBucketIndex(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
				UtlHashHandle_t handle);  // 403
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, f this,
				int i);  // 406
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this,
			int i);  // 406
		operator[](const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH this,
				UtlHashHandle_t handle);  // 127
		CUtlHashDict<short int, true, false>::Element(
			UtlHashHandle_t handle);  // 1790
		HSequence::HSequence(
				int32 value);  // 1790
	}
} /* size: 0 */

// <01E05994> modellib/model.cpp:1796
// function calls: 2
void CModel::GetSequenceName(HSequence hSequence)
{
	CUtlVectorBase<ISequence::Count(); // 1753
	CModel::IsValidSequence(
			HSequence hSequence);  // 1802
} /* size: 131, inline expansions: 2 (32 bytes) */

// <04AC0AF7> modellib/model.cpp:1816
void CModel::eyeposition()
{
} /* size: 0 */

// <04AC0AC9> modellib/model.cpp:1821
void CModel::MaxEyeDeflection()
{
} /* size: 0 */

// <04AC0A9B> modellib/model.cpp:1826
void CModel::mass()
{
} /* size: 0 */

// <04AC0A6C> modellib/model.cpp:1831
void CModel::hull_min()
{
} /* size: 0 */

// <04AC0A3D> modellib/model.cpp:1836
void CModel::hull_max()
{
} /* size: 0 */

// <04AC0A0E> modellib/model.cpp:1841
void CModel::view_bbmin()
{
} /* size: 26 */

// <04AC09DF> modellib/model.cpp:1846
void CModel::view_bbmax()
{
} /* size: 26 */

// <04AC09B1> modellib/model.cpp:1851
void CModel::GetModelKeyValues()
{
} /* size: 0 */

// <04AC06B4> modellib/model.cpp:1856
// function calls: 9
void CModel::FindModelSubKey(const char* pName)
{
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 1858
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 1858
} /* size: 0, inline expansions: 9 (445 bytes) */

// <04AC03FE> modellib/model.cpp:1861
// function calls: 7
void CModel::GetKeyValueText(CUtlString* pOutKV)
{
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1863
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 245
	KeyValues3::IsNull(); // 1866
	CUtlString::operator=(
			const char* src);  // 1868
	_DebuggerBreakInlineExpressionWrapper(void); // 1872
} /* size: 0, inline expansions: 6 (0 bytes) */

// <04AC036E> modellib/model.cpp:1875
// function calls: 2
void CModel::numskinfamilies()
{
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::Count(); // 601
	CModel::GetNumMaterialGroups(); // 1877
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04AC00E4> modellib/model.cpp:1885
// function calls: 6
void CModel::pSeqdesc(HSequence hSequence)
{
	CUtlVectorBase<ISequence::Count(); // 135
	CUtlVectorBase<ISequence::IsEmpty(); // 1888
	CUtlVectorBase<ISequence::Count(); // 1753
	CModel::IsValidSequence(
			HSequence hSequence);  // 1891
	CUtlMemory<ISequence::operator[](
			int i);  // 588
	CUtlVectorBase<ISequence::operator[](
			int i);  // 1897
} /* size: 148, inline expansions: 6 (59 bytes) */

// <04AC0085> modellib/model.cpp:1904
void CModel::IsSequenceLooping(HSequence hSequence)
{
} /* size: 0 */

// <04ABFCA4> modellib/model.cpp:1917
// variables: 7
// function calls: 9
void CModel::FindDefaultPreviewSequence()
{
	HSequence hUserSpecifiedDefaultSequence; // 1919
	HSequence hActRefPoseSequence; // 1920
	HSequence hActIdleSequence; // 1921
	HSequence hIdleSequence; // 1922
	HSequence hIdleSubstringSequence; // 1923
	{
		HSequence hSequence; // 1925
		{
			const ISequence* pSeq; // 1927
			ConVar::GetString(); // 1933
			V_isempty(const char* pszString); // 1933
			ConVar::GetString(); // 1946
			V_isempty(const char* pszString); // 1946
		}
		CUtlVectorBase<ISequence::Count(); // 1764
		CModel::FirstSequence(); // 1925
		HSequence::operator==(
				const HSequence& other);  // 1925
	}
	CUtlVectorBase<ISequence::Count(); // 1764
	CModel::FirstSequence(); // 1995
} /* size: 0, variables: 5, inline expansions: 2 (0 bytes) */

// <04ABF680> modellib/model.cpp:2003
// variables: 2
// function calls: 20
void CModel::LookupPoseParameter(const char* _pszName)
{
	{
		UtlHashHandle_t handle; // 2007
		HashStringFastCaseless(const char* pszKey); // 96
		CHash<true>::operator(
				const Entry_t& entry);  // 239
		{
			int bucketCount; // 249
			Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, tr this); // 249
		}
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true,  this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, tr this,
				int i);  // 254
		Count(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>:: this); // 255
		CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>:: this,
			int i);  // 258
		CCompare<true>::operator(
				const Entry_t& entry1,
				const Entry_t& entry2);  // 258
		DoFind(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
			const Entry_t& src,
			unsigned int* pBucket,
			int* pIndex);  // 278
		{
		}
		{
		}
		BuildHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
				int ndxBucket,
				int ndxKeyData);  // 280
		Find(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
			const Entry_t& src);  // 330
		CUtlHashDict<short int, true, true>::Find(
			const char* pName);  // 2007
		GetBucketIndex(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
				UtlHashHandle_t handle);  // 403
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>: this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, tr this,
				int i);  // 406
		CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this,
			int i);  // 406
		operator[](const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas this,
				UtlHashHandle_t handle);  // 127
		CUtlHashDict<short int, true, true>::Element(
			UtlHashHandle_t handle);  // 2010
	}
} /* size: 0 */

// <04AEF60A> modellib/model.cpp:2020
// function call: 1
void CModel::GetNumPoseParameters()
{
	CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::Count(); // 2022
} /* size: 25, inline expansions: 1 (6 bytes) */

// <04ABF667> modellib/model.cpp:2020
void CModel::GetNumPoseParameters()
{
} /* size: 0 */

// <04AEF664> modellib/model.cpp:2029
// function calls: 2
void CModel::pPoseParameter(int iParameter)
{
	CUtlMemory<PoseParamDesc_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::operator[](
			int i);  // 2031
} /* size: 35, inline expansions: 2 (36 bytes) */

// <04ABF641> modellib/model.cpp:2029
void CModel::pPoseParameter(int iParameter)
{
} /* size: 0 */

// <04ABF3FF> modellib/model.cpp:2038
// function calls: 9
void CModel::GetPoseParameterName(int iParameter)
{
	CUtlMemory<PoseParamDesc_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::operator[](
			int i);  // 2040
	GetBucketIndex(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
			UtlHashHandle_t handle);  // 415
	operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true,  this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, tr this,
			int i);  // 418
	CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::operator[](
			int i);  // 609
	Element(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>:: this,
		int i);  // 418
	operator[](const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
			UtlHashHandle_t handle);  // 142
	CUtlHashDict<short int, true, true>::GetElementName(
			UtlHashHandle_t handle);  // 2040
} /* size: 0, inline expansions: 9 (0 bytes) */

// <04ABF0C8> modellib/model.cpp:2048
// variables: 6
// function calls: 10
void CModel::EncodePoseParameter(int iParameter, float flValue, float& flNormalizedValue)
{
	const PoseParamDesc_t* pPose; // 2056
	const char   __FUNCTION__; // 35878
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2057
	}
	{
		float wrap; // 2061
		float shift; // 2062
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2070
	}
	CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::Count(); // 2022
	CModel::GetNumPoseParameters(); // 2050
	CUtlMemory<PoseParamDesc_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::operator[](
			int i);  // 2031
	CModel::pPoseParameter(
			int iParameter);  // 2056
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2057
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 2069
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2070
} /* size: 0, variables: 2, inline expansions: 10 (0 bytes) */

// <01E03F36> modellib/model.cpp:2048
// variables: 6
// function calls: 10
void CModel::EncodePoseParameter(int iParameter, float flValue, float& flNormalizedValue)
{
	const PoseParamDesc_t* pPose; // 2056
	const char   __FUNCTION__; // 43401
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2057
	}
	{
		float wrap; // 2061
		float shift; // 2062
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2070
	}
	CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::Count(); // 2022
	CModel::GetNumPoseParameters(); // 2050
	CUtlMemory<PoseParamDesc_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::operator[](
			int i);  // 2031
	CModel::pPoseParameter(
			int iParameter);  // 2056
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2057
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 2069
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2070
} /* size: 0, variables: 2, inline expansions: 10 (108 bytes) */

// <00A39F0B> modellib/model.cpp:2048
// variables: 6
// function calls: 10
void CModel::EncodePoseParameter(int iParameter, float flValue, float& flNormalizedValue)
{
	const PoseParamDesc_t* pPose; // 2056
	const char   __FUNCTION__; // 18126
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2057
	}
	{
		float wrap; // 2061
		float shift; // 2062
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2070
	}
	CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::Count(); // 2022
	CModel::GetNumPoseParameters(); // 2050
	CUtlMemory<PoseParamDesc_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::operator[](
			int i);  // 2031
	CModel::pPoseParameter(
			int iParameter);  // 2056
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2057
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 2069
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2070
} /* size: 0, variables: 2, inline expansions: 10 (0 bytes) */

// <04ABEF4D> modellib/model.cpp:2080
// variable: 1
// function calls: 5
void CModel::DecodePoseParameter(int iParameter, float ctlValue)
{
	const PoseParamDesc_t* pPose; // 2087
	CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::Count(); // 2022
	CModel::GetNumPoseParameters(); // 2082
	CUtlMemory<PoseParamDesc_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::operator[](
			int i);  // 2031
	CModel::pPoseParameter(
			int iParameter);  // 2087
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <04ABE929> modellib/model.cpp:2097
// variables: 2
// function calls: 20
void CModel::LookupWeightlist(const char* _pszName)
{
	{
		UtlHashHandle_t handle; // 2101
		HashStringFastCaseless(const char* pszKey); // 96
		CHash<true>::operator(
				const Entry_t& entry);  // 239
		{
			int bucketCount; // 249
			Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this); // 249
		}
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this,
				int i);  // 254
		Count(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this); // 255
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this,
			int i);  // 258
		CCompare<true>::operator(
				const Entry_t& entry1,
				const Entry_t& entry2);  // 258
		DoFind(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
			const Entry_t& src,
			unsigned int* pBucket,
			int* pIndex);  // 278
		{
		}
		{
		}
		BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
				int ndxBucket,
				int ndxKeyData);  // 280
		Find(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
			const Entry_t& src);  // 330
		CUtlHashDict<short int, true, false>::Find(
			const char* pName);  // 2101
		GetBucketIndex(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
				UtlHashHandle_t handle);  // 403
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, f this,
				int i);  // 406
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this,
			int i);  // 406
		operator[](const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH this,
				UtlHashHandle_t handle);  // 127
		CUtlHashDict<short int, true, false>::Element(
			UtlHashHandle_t handle);  // 2104
	}
} /* size: 0 */

// <04ABE8CA> modellib/model.cpp:2110
// function call: 1
void CModel::GetNumWeightlists()
{
	CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::Count(); // 2112
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04AEF716> modellib/model.cpp:2116
// function calls: 2
void CModel::pChannelWeightlist(int nWeightlist)
{
	CUtlMemory<ChannelWeightlist_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::operator[](
			int i);  // 2121
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04ABE8A4> modellib/model.cpp:2116
void CModel::pChannelWeightlist(int nWeightlist)
{
} /* size: 0 */

// <04ABE75D> modellib/model.cpp:2125
// variable: 1
// function calls: 4
void CModel::GetWeightlistName(int nWeightlist)
{
	const ChannelWeightlist_t* pWeight; // 2127
	CUtlMemory<ChannelWeightlist_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::operator[](
			int i);  // 2121
	CModel::pChannelWeightlist(
				int nWeightlist);  // 2127
	CUtlString::Get(); // 2129
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <04ABE72F> modellib/model.cpp:2137
void CModel::GetAnimGraphBinding()
{
} /* size: 12 */

// <04ABDF99> modellib/model.cpp:2143
// variables: 2
// function calls: 37
void CModel::RecreateAnimGraphBinding()
{
	IAnimGraphModelBindingConstPtr newBinding; // 2145
	{
		HAnimationGraph hGraph; // 2149
		CWeakHandle<InfoForResourceTypeIAnimationGraph>::GetData(); // 2150
		CSmartPtr<IAnimGraphModelBinding, CRefCountAccessor>::Get(); // 413
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<IAnimGraphModelBinding>(IAnimGraphModelBinding* pObj); // 386
		CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator=<IAnimGraphModelBinding>(
							IAnimGraphModelBinding* pObj);  // 413
		CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator=<IAnimGraphModelBinding>(
							const CSmartPtr<IAnimGraphModelBinding, CRefCountAccessor>& other);  // 2152
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<IAnimGraphModelBinding>(IAnimGraphModelBinding* pObj); // 344
		CSmartPtr<IAnimGraphModelBinding, CRefCountAccessor>::~CSmartPtr(); // 2152
	}
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::CSmartPtr(); // 2145
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<const IAnimGraphModelBinding>(const IAnimGraphModelBinding* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const IAnimGraphModelBinding>(const IAnimGraphModelBinding* pObj); // 370
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator=(
			const IAnimGraphModelBinding* pObj);  // 406
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator=(
			const CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>& other);  // 2156
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const IAnimGraphModelBinding>(const IAnimGraphModelBinding* pObj); // 344
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::~CSmartPtr(); // 2157
} /* size: 0, variables: 1, inline expansions: 21 (0 bytes) */

// <04ABDF3A> modellib/model.cpp:2163
// function call: 1
void CModel::GetIKControlRigDescription()
{
	CAnimContainer::GetIKControlRigDescription(); // 2167
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04ABDEAC> modellib/model.cpp:2177
// variables: 2
void CModel::GetFootCount()
{
	int nCount; // 2179
	const KeyValues3* pFootListKV3; // 2181
} /* size: 0, variables: 2 */

// <04ABDA06> modellib/model.cpp:2191
// variables: 6
// function calls: 11
void CModel::GetFeet()
{
	CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> > feet; // 2193
	const KeyValues3* pFootListKV3; // 2197
	{
		const int  chainCount; // 2200
		{
			int i; // 2204
			{
				const KeyValues3* pChainKV3; // 2206
				CKV3TransferLoadContext loadContext; // 2208
				CUtlMemory<CFootDefinition, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::operator[](
						int i);  // 2209
				CUtlStack<const KeyValues3::Count(); // 413
				CKV3TransferLoadContext::LoadClassInstance<CFootDefinition>(
									CFootDefinition* pClassInstance,
									const KeyValues3* pNestedValue);  // 495
				LoadValue<CFootDefinition>(CKV3TransferLoadContext* pContext,
								const KeyValues3* pLoadFromValue,
								CFootDefinition& value,
								type *);  // 1548
				CKV3TransferLoadContext::LoadValueDirect<CFootDefinition>(
								CFootDefinition& destValue,
								const KeyValues3* pLoadFromMember);  // 2209
			}
		}
	}
	CUtlMemory<CFootDefinition, int>::ValidateGrowSize(); // 475
	CUtlMemory<CFootDefinition, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> >::CUtlVector(); // 2193
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <04ABD55C> modellib/model.cpp:2221
// variables: 6
// function calls: 11
void CModel::GetLookAtChainList()
{
	CUtlVector<CLookAtChain, CUtlMemory<CLookAtChain, int> > chainList; // 2226
	const KeyValues3* pChainListKV3; // 2228
	{
		const int  chainCount; // 2231
		{
			int chainIndex; // 2235
			{
				const KeyValues3* pChainKV3; // 2237
				CKV3TransferLoadContext loadContext; // 2239
				CUtlMemory<CLookAtChain, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CLookAtChain, CUtlMemory<CLookAtChain, int> >::operator[](
						int i);  // 2240
				CUtlStack<const KeyValues3::Count(); // 413
				CKV3TransferLoadContext::LoadClassInstance<CLookAtChain>(
								CLookAtChain* pClassInstance,
								const KeyValues3* pNestedValue);  // 495
				LoadValue<CLookAtChain>(CKV3TransferLoadContext* pContext,
							const KeyValues3* pLoadFromValue,
							CLookAtChain& value,
							type *);  // 1548
				CKV3TransferLoadContext::LoadValueDirect<CLookAtChain>(
								CLookAtChain& destValue,
								const KeyValues3* pLoadFromMember);  // 2240
			}
		}
	}
	CUtlMemory<CLookAtChain, int>::ValidateGrowSize(); // 475
	CUtlMemory<CLookAtChain, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CLookAtChain, CUtlMemory<CLookAtChain, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CLookAtChain, CUtlMemory<CLookAtChain, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CLookAtChain, CUtlMemory<CLookAtChain, int> >::CUtlVector(); // 2226
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <04ABD505> modellib/model.cpp:2248
void CModel::HasMovementSettings()
{
} /* size: 0 */

// <04ABD22E> modellib/model.cpp:2254
// variables: 3
// function calls: 6
void CModel::GetMovementSettings()
{
	CMovementSettings settings; // 2256
	const KeyValues3* pMoveSettingsKV3; // 2258
	{
		CKV3TransferLoadContext loadContext; // 2261
		CUtlStack<const KeyValues3::Count(); // 413
		CKV3TransferLoadContext::LoadClassInstance<CMovementSettings>(
							CMovementSettings* pClassInstance,
							const KeyValues3* pNestedValue);  // 495
		LoadValue<CMovementSettings>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						CMovementSettings& value,
						type *);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<CMovementSettings>(
							CMovementSettings& destValue,
							const KeyValues3* pLoadFromMember);  // 2262
	}
	CUtlString::Get(); // 677
	CModel::name(); // 2266
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <04ABC43B> modellib/model.cpp:2274
// variables: 8
// function calls: 52
void CModel::GetSlopeTraces()
{
	CUtlVector<CSlopeTrace, CUtlMemory<CSlopeTrace, int> > traces; // 2276
	const KeyValues3* pKV3; // 2278
	{
		const KeyValues3* pEntry; // 2281
		CKV3ArrayIteratorView<true>& __for_range; // 27204
		iterator __for_begin; // 56249
		iterator __for_end; // 56249
		{
			CSlopeTrace trace; // 2283
			CKV3TransferLoadContext loadContext; // 2284
			CKV3MemberName::CKV3MemberName<15>(
						const char& str);  // 40
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 101
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 101
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 338
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 338
			CKV3TransferLoadContext::FindSourceMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 309
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 309
			KeyValues3::GetValueFloatArray<3>(
						float* pOutValues);  // 1341
			LoadValue<VectorAligned>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						VectorAligned& value);  // 1548
			CKV3TransferLoadContext::LoadValueDirect<VectorAligned>(
							VectorAligned& destValue,
							const KeyValues3* pLoadFromMember);  // 316
			CKV3TransferLoadContext::LoadValueFromMemberIfPresent<VectorAligned>(
									CKV3MemberName memberNameAndHash,
									VectorAligned& destValue);  // 40
			CSlopeTrace::KV3TransferLoad(
					CKV3TransferLoadContext* pContext);  // 415
			CUtlStack<const KeyValues3::Count(); // 413
			CKV3TransferLoadContext::LoadClassInstance<CSlopeTrace>(
							CSlopeTrace* pClassInstance,
							const KeyValues3* pNestedValue);  // 495
			LoadValue<CSlopeTrace>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						CSlopeTrace& value,
						type *);  // 1548
			CKV3TransferLoadContext::LoadValueDirect<CSlopeTrace>(
							CSlopeTrace& destValue,
							const KeyValues3* pLoadFromMember);  // 2285
			{
			}
			iterator::operator*(); // 2281
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 30
			VectorAligned::VectorAligned(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 16
			CSlopeTrace::CSlopeTrace(); // 2283
			CUtlMemory<CSlopeTrace, int>::NumAllocated(); // 1196
			CUtlMemory<CSlopeTrace, int>::Base(); // 112
			CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::Base(); // 368
			CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CSlopeTrace, int>::IsGrowable(); // 823
			CUtlMemory<CSlopeTrace, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CSlopeTrace, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CSlopeTrace, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::GrowMemory(
					int num);  // 1198
			CSlopeTrace::CSlopeTrace(
					const CSlopeTrace& rhs);  // 1520
			CopyConstruct<CSlopeTrace>(CSlopeTrace* pMemory,
							const CSlopeTrace& src);  // 1201
			CUtlMemory<CSlopeTrace, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::Element(
				int i);  // 1201
			CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::AddToTail(
					const CSlopeTrace& src);  // 2287
		}
		{
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 74
			KeyValues3::GetType(); // 74
		}
		{
		}
		CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 67
		CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 922
		KeyValues3::IterateArray(); // 2281
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<true>::begin(); // 2281
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<true>::end(); // 2281
		iterator::operator!=(
				const iterator& rhs);  // 2281
	}
	CUtlMemory<CSlopeTrace, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSlopeTrace, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::CUtlVector(); // 2276
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <01E012A9> modellib/model.cpp:2274
// variables: 8
// function calls: 52
void CModel::GetSlopeTraces()
{
	CUtlVector<CSlopeTrace, CUtlMemory<CSlopeTrace, int> > traces; // 2276
	const KeyValues3* pKV3; // 2278
	{
		const KeyValues3* pEntry; // 2281
		CKV3ArrayIteratorView<true>& __for_range; // 34727
		iterator __for_begin; // 63772
		iterator __for_end; // 63772
		{
			CSlopeTrace trace; // 2283
			CKV3TransferLoadContext loadContext; // 2284
			CKV3MemberName::CKV3MemberName<15>(
						const char& str);  // 40
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 101
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 101
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 338
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 338
			CKV3TransferLoadContext::FindSourceMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 309
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 309
			KeyValues3::GetValueFloatArray<3>(
						float* pOutValues);  // 1341
			LoadValue<VectorAligned>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						VectorAligned& value);  // 1548
			CKV3TransferLoadContext::LoadValueDirect<VectorAligned>(
							VectorAligned& destValue,
							const KeyValues3* pLoadFromMember);  // 316
			CKV3TransferLoadContext::LoadValueFromMemberIfPresent<VectorAligned>(
									CKV3MemberName memberNameAndHash,
									VectorAligned& destValue);  // 40
			CSlopeTrace::KV3TransferLoad(
					CKV3TransferLoadContext* pContext);  // 415
			CUtlStack<const KeyValues3::Count(); // 413
			CKV3TransferLoadContext::LoadClassInstance<CSlopeTrace>(
							CSlopeTrace* pClassInstance,
							const KeyValues3* pNestedValue);  // 495
			LoadValue<CSlopeTrace>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						CSlopeTrace& value,
						type *);  // 1548
			CKV3TransferLoadContext::LoadValueDirect<CSlopeTrace>(
							CSlopeTrace& destValue,
							const KeyValues3* pLoadFromMember);  // 2285
			{
			}
			iterator::operator*(); // 2281
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 30
			VectorAligned::VectorAligned(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 16
			CSlopeTrace::CSlopeTrace(); // 2283
			CUtlMemory<CSlopeTrace, int>::NumAllocated(); // 1196
			CUtlMemory<CSlopeTrace, int>::Base(); // 112
			CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::Base(); // 368
			CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CSlopeTrace, int>::IsGrowable(); // 823
			CUtlMemory<CSlopeTrace, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CSlopeTrace, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CSlopeTrace, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::GrowMemory(
					int num);  // 1198
			CSlopeTrace::CSlopeTrace(
					const CSlopeTrace& rhs);  // 1520
			CopyConstruct<CSlopeTrace>(CSlopeTrace* pMemory,
							const CSlopeTrace& src);  // 1201
			CUtlMemory<CSlopeTrace, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::Element(
				int i);  // 1201
			CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::AddToTail(
					const CSlopeTrace& src);  // 2287
		}
		{
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 74
			KeyValues3::GetType(); // 74
		}
		{
		}
		CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 67
		CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 922
		KeyValues3::IterateArray(); // 2281
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<true>::begin(); // 2281
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<true>::end(); // 2281
		iterator::operator!=(
				const iterator& rhs);  // 2281
	}
	CUtlMemory<CSlopeTrace, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSlopeTrace, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::CUtlVector(); // 2276
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <00A3727E> modellib/model.cpp:2274
// variables: 8
// function calls: 52
void CModel::GetSlopeTraces()
{
	CUtlVector<CSlopeTrace, CUtlMemory<CSlopeTrace, int> > traces; // 2276
	const KeyValues3* pKV3; // 2278
	{
		const KeyValues3* pEntry; // 2281
		CKV3ArrayIteratorView<true>& __for_range; // 9452
		iterator __for_begin; // 38497
		iterator __for_end; // 38497
		{
			CSlopeTrace trace; // 2283
			CKV3TransferLoadContext loadContext; // 2284
			CKV3MemberName::CKV3MemberName<15>(
						const char& str);  // 40
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 101
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 101
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 338
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 338
			CKV3TransferLoadContext::FindSourceMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 309
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 309
			KeyValues3::GetValueFloatArray<3>(
						float* pOutValues);  // 1341
			LoadValue<VectorAligned>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						VectorAligned& value);  // 1548
			CKV3TransferLoadContext::LoadValueDirect<VectorAligned>(
							VectorAligned& destValue,
							const KeyValues3* pLoadFromMember);  // 316
			CKV3TransferLoadContext::LoadValueFromMemberIfPresent<VectorAligned>(
									CKV3MemberName memberNameAndHash,
									VectorAligned& destValue);  // 40
			CSlopeTrace::KV3TransferLoad(
					CKV3TransferLoadContext* pContext);  // 415
			CUtlStack<const KeyValues3::Count(); // 413
			CKV3TransferLoadContext::LoadClassInstance<CSlopeTrace>(
							CSlopeTrace* pClassInstance,
							const KeyValues3* pNestedValue);  // 495
			LoadValue<CSlopeTrace>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						CSlopeTrace& value,
						type *);  // 1548
			CKV3TransferLoadContext::LoadValueDirect<CSlopeTrace>(
							CSlopeTrace& destValue,
							const KeyValues3* pLoadFromMember);  // 2285
			{
			}
			iterator::operator*(); // 2281
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 30
			VectorAligned::VectorAligned(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 16
			CSlopeTrace::CSlopeTrace(); // 2283
			CUtlMemory<CSlopeTrace, int>::NumAllocated(); // 1196
			CUtlMemory<CSlopeTrace, int>::Base(); // 112
			CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::Base(); // 368
			CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CSlopeTrace, int>::IsGrowable(); // 823
			CUtlMemory<CSlopeTrace, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CSlopeTrace, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CSlopeTrace, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::GrowMemory(
					int num);  // 1198
			CSlopeTrace::CSlopeTrace(
					const CSlopeTrace& rhs);  // 1520
			CopyConstruct<CSlopeTrace>(CSlopeTrace* pMemory,
							const CSlopeTrace& src);  // 1201
			CUtlMemory<CSlopeTrace, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::Element(
				int i);  // 1201
			CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::AddToTail(
					const CSlopeTrace& src);  // 2287
		}
		{
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 74
			KeyValues3::GetType(); // 74
		}
		{
		}
		CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 67
		CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 922
		KeyValues3::IterateArray(); // 2281
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<true>::begin(); // 2281
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<true>::end(); // 2281
		iterator::operator!=(
				const iterator& rhs);  // 2281
	}
	CUtlMemory<CSlopeTrace, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSlopeTrace, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >::CUtlVector(); // 2276
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <04ABC3E4> modellib/model.cpp:2295
void CModel::HasSkeletalInputSettings()
{
} /* size: 0 */

// <04ABBE49> modellib/model.cpp:2301
// variables: 3
// function calls: 20
void CModel::GetSkeletalInputSettings()
{
	CVrSkeletalInputSettings settings; // 2303
	const KeyValues3* pMoveSettingsKV3; // 2305
	{
		CKV3TransferLoadContext loadContext; // 2308
		CUtlStack<const KeyValues3::Count(); // 413
		CKV3TransferLoadContext::LoadClassInstance<CVrSkeletalInputSettings>(
								CVrSkeletalInputSettings* pClassInstance,
								const KeyValues3* pNestedValue);  // 495
		LoadValue<CVrSkeletalInputSettings>(CKV3TransferLoadContext* pContext,
							const KeyValues3* pLoadFromValue,
							CVrSkeletalInputSettings& value,
							type *);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<CVrSkeletalInputSettings>(
								CVrSkeletalInputSettings& destValue,
								const KeyValues3* pLoadFromMember);  // 2309
	}
	CUtlString::CUtlString(); // 98
	CUtlMemory<CWristBone, int>::ValidateGrowSize(); // 475
	CUtlMemory<CWristBone, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CWristBone, CUtlMemory<CWristBone, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CWristBone, CUtlMemory<CWristBone, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CWristBone, CUtlMemory<CWristBone, int> >::CUtlVector(); // 98
	CUtlMemory<CFingerChain, int>::ValidateGrowSize(); // 475
	CUtlMemory<CFingerChain, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CFingerChain, CUtlMemory<CFingerChain, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CFingerChain, CUtlMemory<CFingerChain, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CFingerChain, CUtlMemory<CFingerChain, int> >::CUtlVector(); // 98
	CUtlString::CUtlString(); // 98
	CUtlString::CUtlString(); // 98
	CVrSkeletalInputSettings::CVrSkeletalInputSettings(); // 2303
	CUtlString::Get(); // 677
	CModel::name(); // 2313
} /* size: 0, variables: 2, inline expansions: 16 (0 bytes) */

// <04ABBDEA> modellib/model.cpp:2325
// function call: 1
void CModel::GetNumAutoplaySequences()
{
	CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::Count(); // 2330
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04ABBD13> modellib/model.cpp:2334
// function calls: 3
void CModel::GetAutoplaySequence(int nAutoplaySequenceIndex)
{
	CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::IsValidIndex(
			int i);  // 2336
	CUtlMemory<HSequence, int>::operator[](
			int i);  // 588
	CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
			int i);  // 2339
} /* size: 0, inline expansions: 3 (0 bytes) */

// <04ABBC9F> modellib/model.cpp:2347
// variable: 1
void CModel::EntryNode(HSequence hSequence)
{
	const ISequence* pSeqDesc; // 2349
} /* size: 0, variables: 1 */

// <04ABBC2B> modellib/model.cpp:2358
// variable: 1
void CModel::ExitNode(HSequence hSequence)
{
	const ISequence* pSeqDesc; // 2360
} /* size: 0, variables: 1 */

// <04ABBBCF> modellib/model.cpp:2369
void CModel::pszNodeName(int iNode)
{
} /* size: 0 */

// <04ABBB57> modellib/model.cpp:2380
void CModel::GetNodeTransition(int iFromNode, int iToNode)
{
} /* size: 0 */

// <04ABB99D> modellib/model.cpp:2385
// variable: 1
// function calls: 6
void CModel::GetAnimationGraph()
{
	HAnimationGraph hGraph; // 2387
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 2387
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::Init(
		const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 331
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator=(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 2391
} /* size: 94, variables: 1, inline expansions: 6 (43 bytes) */

// <04ABB951> modellib/model.cpp:2400
void CModel::RemapSeqBone(HSequence hSequence, int nLocalBone)
{
} /* size: 0 */

// <04ABB905> modellib/model.cpp:2417
void CModel::RemapAnimBone(int iAnim, int nLocalBone)
{
} /* size: 0 */

// <04ABB835> modellib/model.cpp:2431
// function calls: 3
void CModel::NumBonesForLOD(int nLod)
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 273
	CModelSkeleton::NumBonesForLOD(
			int nLod);  // 2433
} /* size: 0, inline expansions: 3 (0 bytes) */

// <04AEF7C8> modellib/model.cpp:2436
// function calls: 2
void CModel::NumBones()
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 42
	CModelSkeleton::NumBones(); // 2438
} /* size: 11, inline expansions: 2 (0 bytes) */

// <04ABB81C> modellib/model.cpp:2436
void CModel::NumBones()
{
} /* size: 0 */

// <04ABB6C7> modellib/model.cpp:2441
// function calls: 5
void CModel::boneFlags(int iBone)
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 58
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
			int i);  // 59
	CModelSkeleton::GetFlags(
		int nBoneIndex);  // 56
	CModelSkeleton::GetFlags(
		int nBoneIndex);  // 2443
} /* size: 32, inline expansions: 5 (54 bytes) */

// <04ABB525> modellib/model.cpp:2446
// function calls: 7
void CModel::boneName(int iBone)
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 67
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 68
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 68
	CModelSkeleton::GetBoneNameByIndex(
				int nBoneIndex);  // 65
	CModelSkeleton::GetBoneNameByIndex(
				int nBoneIndex);  // 2448
} /* size: 52, inline expansions: 7 (131 bytes) */

// <04ABB413> modellib/model.cpp:2451
// function calls: 4
void CModel::boneParent(int iBone)
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 49
	CUtlMemory<short int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 50
	CModelSkeleton::GetParent(
			int nBoneIndex);  // 2453
} /* size: 38, inline expansions: 4 (39 bytes) */

// <04ABB2B2> modellib/model.cpp:2456
// function calls: 5
void CModel::bonePosParentSpace(int iBone)
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 85
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 86
	CModelSkeleton::GetPosParentSpace(
				int nBoneIndex);  // 83
	CModelSkeleton::GetPosParentSpace(
				int nBoneIndex);  // 2458
} /* size: 64, inline expansions: 5 (121 bytes) */

// <04ABB150> modellib/model.cpp:2461
// function calls: 5
void CModel::boneRotParentSpace(int iBone)
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 94
	CUtlMemory<Quaternion, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
			int i);  // 95
	CModelSkeleton::GetRotParentSpace(
				int nBoneIndex);  // 92
	CModelSkeleton::GetRotParentSpace(
				int nBoneIndex);  // 2463
} /* size: 94, inline expansions: 5 (119 bytes) */

// <04ABAF01> modellib/model.cpp:2466
// function calls: 10
void CModel::GetXYMovementScaleAnim(int nAnim)
{
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 1706
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 1711
	CUtlMemory<CAnimRetarget, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimRetarget, CUtlMemory<CAnimRetarget, int> >::operator[](
			int i);  // 1711
	CAnimContainer::GetAnimGroupRetarget(
				int nGroup);  // 1706
	CAnimContainer::GetAnimRetarget(
			int nAnimation);  // 1735
	CAnimRetarget::GetXYMovementScale(); // 1736
	CAnimContainer::GetXYMovementScaleAnim(
				int nAnimation);  // 2470
} /* size: 0, inline expansions: 10 (0 bytes) */

// <04ABAE60> modellib/model.cpp:2475
void CModel::GetBindPoseWorldTransforms(const CTransform& skeletonToWorld, int nCount, CTransform* pBindPoseWorldTransforms)
{
} /* size: 0 */

// <04ABADBF> modellib/model.cpp:2480
void CModel::GetBindPoseWorldTransforms(const matrix3x4a_t& skeletonToWorld, int nCount, matrix3x4a_t* pBindPoseWorldTransforms)
{
} /* size: 0 */

// <04ABACF2> modellib/model.cpp:2485
// function calls: 3
void CModel::AcquirePhysicsRef()
{
	CPhysAggregateDataHandle::Get(); // 99
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 99
	CPhysAggregateDataHandle::CPhysAggregateDataHandle(
				const CPhysAggregateDataHandle& rhs);  // 2487
} /* size: 0, inline expansions: 3 (0 bytes) */

// <04ABAB69> modellib/model.cpp:2490
// function calls: 3
void CModel::GetSequenceBounds(HSequence hSequence, Vector* pVecMins, Vector* pVecMaxs)
{
	Vector::operator=(
			const Vector& vOther);  // 34
	Vector::operator=(
			const Vector& vOther);  // 34
	CEmptySequence::GetBounds(
			Vector* pVecMins,
			Vector* pVecMaxs);  // 2495
} /* size: 183, inline expansions: 3 (130 bytes) */

// <04AEF852> modellib/model.cpp:2503
// variables: 5
// function calls: 3
void SetupAttachment(int nInfluences, const int32* pInfluenceIndices, const float* pInfluenceWeights, const Vector* pInfluenceOffsets, const Quaternion* pInfluenceRotations, const CTransform* pSimWorldTransformsIn, const CTransform& rootTransform, CTransform* pAttachmentWorldTransformOut, bool bIgnoreRotation)
{
	Vector vBlendedPos; // 2520
	float flBlendedScale; // 2521
	float pWeights; // 2522
	Vector vPos; // 2523
	Quaternion qRot; // 2524
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 2510
} /* size: 0, variables: 5, inline expansions: 3 (0 bytes) */

// <04AE8D77> modellib/model.cpp:2503
// variables: 110
// function calls: 231
void SetupAttachment(int nInfluences, const int32* pInfluenceIndices, const float* pInfluenceWeights, const Vector* pInfluenceOffsets, const Quaternion* pInfluenceRotations, const CTransform* pSimWorldTransformsIn, const CTransform& rootTransform, CTransform* pAttachmentWorldTransformOut, bool bIgnoreRotation)
{
	Vector vBlendedPos; // 2520
	float flBlendedScale; // 2521
	float pWeights; // 2522
	Vector vPos; // 2523
	Quaternion qRot; // 2524
	{
		Quaternion pQuaternions; // 2577
		Quaternion vBlendedOrientation; // 2625
		{
			uint8 i; // 2578
			{
				const float  flWeight; // 2583
				int nParentTransform; // 2588
				Quaternion::Init(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 2620
				{
					CTransform parent; // 2608
					float flScale; // 2610
					Vector vLocalPos; // 2613
					{
					}
					_mm_cvtss_f32(__m128 __A); // 1496
					GetXSIMD<>(fltx4 a); // 74
					QuaternionAligned::x(); // 41
					Quaternion::Quaternion(
							vec_t ix,
							vec_t iy,
							vec_t iz,
							vec_t iw);  // 41
					QuaternionAligned::operator Quaternion(); // 2609
					_mm_cvtss_f32(__m128 __A); // 1553
					GetWSIMD<>(fltx4 a); // 98
					CTransform::GetScale(); // 2610
					{
						fltx4 retVal; // 1352
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1353
					}
					SplatWSIMD<>(const fltx4& a); // 417
					{
						fltx4 x000; // 1010
						fltx4 y000; // 1011
						fltx4 z000; // 1012
						fltx4 x0y0; // 1013
						_mm_load_ss(const float* __P); // 1010
						_mm_load_ss(const float* __P); // 1011
						_mm_load_ss(const float* __P); // 1012
						_mm_movelh_ps(__m128 __A,
								__m128 __B);  // 1013
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1014
					}
					LoadUnaligned3SIMD<>(const void* pSIMD); // 419
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
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 311
					{
						fltx4 retVal; // 1352
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1353
					}
					SplatWSIMD<>(const fltx4& a); // 313
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
							const VectorAligned& v);  // 419
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 419
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 420
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 421
					Vector::Vector(); // 422
					_mm_store_ss(float* __P,
							__m128 __A);  // 466
					_mm_store_ss(float* __P,
							__m128 __A);  // 467
					_mm_store_ss(float* __P,
							__m128 __A);  // 468
					StoreUnaligned3SIMD<>(float* pSIMD,
								const fltx4& a);  // 423
					CTransform::TransformVector(
							const Vector& v0);  // 2613
					{
						fltx4 retVal; // 947
						_mm_loadu_ps(const float* __P); // 948
					}
					LoadUnalignedSIMD<>(const void* pSIMD); // 900
					{
						fltx4 retVal; // 1616
						_mm_sub_ps(__m128 __A,
								__m128 __B);  // 1617
					}
					SubSIMD<>(const fltx4& a,
							const fltx4& b);  // 464
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 465
					{
						fltx4 fl4Product; // 1725
						fltx4 fl4YXWZ; // 1727
						fltx4 fl4UUVV; // 1729
						fltx4 fl4VVUU; // 1731
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1725
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1728
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1730
						{
							fltx4 retVal; // 373
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 374
						}
						RotateLeft2<>(const fltx4& a); // 1732
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1733
					}
					Dot4SIMD<>(const fltx4& a,
							const fltx4& b);  // 466
					{
						fltx4 fl4Product; // 1725
						fltx4 fl4YXWZ; // 1727
						fltx4 fl4UUVV; // 1729
						fltx4 fl4VVUU; // 1731
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1725
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1728
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1730
						{
							fltx4 retVal; // 373
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 374
						}
						RotateLeft2<>(const fltx4& a); // 1732
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1733
					}
					Dot4SIMD<>(const fltx4& a,
							const fltx4& b);  // 467
					{
						fltx4 retVal; // 1981
						_mm_cmpgt_ps(__m128 __A,
								__m128 __B);  // 1982
					}
					CmpGtSIMD<>(const fltx4& a,
							const fltx4& b);  // 468
					{
						fltx4 retVal; // 1616
						_mm_sub_ps(__m128 __A,
								__m128 __B);  // 1617
					}
					SubSIMD<>(const fltx4& a,
							const fltx4& b);  // 1797
					NegSIMD<>(const fltx4& a); // 469
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
							const fltx4& b);  // 469
					QuaternionAlignSIMD<>(const fltx4& p,
								const fltx4& q);  // 885
					QuaternionMultSIMD<>(const fltx4& p,
								const fltx4& q);  // 901
					QuaternionAligned::QuaternionAligned(); // 898
					QuaternionMultAligned(const Quaternion& p,
								const Quaternion& q);  // 2614
					Quaternion::Quaternion(
							vec_t ix,
							vec_t iy,
							vec_t iz,
							vec_t iw);  // 41
					QuaternionAligned::operator Quaternion(); // 2614
					Vector::Vector(); // 1450
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::operator*(
							float fl);  // 2615
					Vector::operator+=(
							const Vector& v);  // 2615
				}
				{
					float flScale; // 2593
					Vector vLocalPos; // 2596
					QuaternionAligned::w(); // 41
					_mm_cvtss_f32(__m128 __A); // 1496
					GetXSIMD<>(fltx4 a); // 74
					QuaternionAligned::x(); // 41
					Quaternion::Quaternion(
							vec_t ix,
							vec_t iy,
							vec_t iz,
							vec_t iw);  // 41
					QuaternionAligned::operator Quaternion(); // 2591
					VectorAligned::operator fltx4(); // 71
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 71
					CTransform::GetOrigin(); // 2592
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 40
					VectorAligned::operator Vector(); // 2592
					_mm_cvtss_f32(__m128 __A); // 1553
					GetWSIMD<>(fltx4 a); // 98
					CTransform::GetScale(); // 2593
				}
			}
		}
		Quaternion::Quaternion(); // 2625
		VectorAligned::VectorAligned(); // 33
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 30
		QuaternionAligned::QuaternionAligned(
					const Quaternion& rhs);  // 33
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
				float p3);  // 111
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 33
		CTransform::CTransform(
				const Vector& v,
				const Quaternion& q,
				float flScale);  // 2628
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 2628
	}
	{
		uint8 i; // 2528
		{
			const float  flWeight; // 2533
			int nParentTransform; // 2538
			{
				CTransform parent; // 2557
				float flScale; // 2558
				Vector vLocalPos; // 2564
				{
				}
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 2559
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 71
				CTransform::GetOrigin(); // 2560
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 2560
				_mm_cvtss_f32(__m128 __A); // 1553
				GetWSIMD<>(fltx4 a); // 98
				CTransform::GetScale(); // 2561
				{
					fltx4 retVal; // 1352
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1353
				}
				SplatWSIMD<>(const fltx4& a); // 417
				{
					fltx4 x000; // 1010
					fltx4 y000; // 1011
					fltx4 z000; // 1012
					fltx4 x0y0; // 1013
					_mm_load_ss(const float* __P); // 1010
					_mm_load_ss(const float* __P); // 1011
					_mm_load_ss(const float* __P); // 1012
					_mm_movelh_ps(__m128 __A,
							__m128 __B);  // 1013
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1014
				}
				LoadUnaligned3SIMD<>(const void* pSIMD); // 419
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 419
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
						const VectorAligned& v);  // 419
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 420
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 421
				Vector::Vector(); // 422
				_mm_store_ss(float* __P,
						__m128 __A);  // 466
				_mm_store_ss(float* __P,
						__m128 __A);  // 467
				_mm_store_ss(float* __P,
						__m128 __A);  // 468
				StoreUnaligned3SIMD<>(float* pSIMD,
							const fltx4& a);  // 423
				CTransform::TransformVector(
						const Vector& v0);  // 2564
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 2565
				Vector::operator+=(
						const Vector& v);  // 2565
			}
			{
				float flScale; // 2543
				Vector vLocalPos; // 2546
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 2541
				VectorAligned::operator fltx4(); // 71
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 71
				CTransform::GetOrigin(); // 2542
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 2542
				_mm_cvtss_f32(__m128 __A); // 1553
				GetWSIMD<>(fltx4 a); // 98
				CTransform::GetScale(); // 2543
				{
					fltx4 retVal; // 1352
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1353
				}
				SplatWSIMD<>(const fltx4& a); // 417
				{
					fltx4 x000; // 1010
					fltx4 y000; // 1011
					fltx4 z000; // 1012
					fltx4 x0y0; // 1013
					_mm_load_ss(const float* __P); // 1010
					_mm_load_ss(const float* __P); // 1011
					_mm_load_ss(const float* __P); // 1012
					_mm_movelh_ps(__m128 __A,
							__m128 __B);  // 1013
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1014
				}
				LoadUnaligned3SIMD<>(const void* pSIMD); // 419
				{
					fltx4 v1_yzxx; // 3340
					fltx4 v2_zxyy; // 3342
					fltx4 v1_zxyy; // 3344
					fltx4 v2_yzxx; // 3346
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 3341
				}
				CrossProduct3SIMD<>(const fltx4& v1,
							const fltx4& v2);  // 310
				QuaternionAligned::operator*(
						const VectorAligned& v);  // 419
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 419
				CTransform::TransformVector(
						const Vector& v0);  // 2546
			}
		}
	}
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
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
			float p3);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 2573
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 2573
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2520
	Vector::Vector(); // 2523
	Quaternion::Quaternion(); // 2524
} /* size: 0, variables: 5, inline expansions: 12 (95 bytes) */

// <04ABA964> modellib/model.cpp:2503
// variables: 26
void SetupAttachment(int nInfluences, const int32* pInfluenceIndices, const float* pInfluenceWeights, const Vector* pInfluenceOffsets, const Quaternion* pInfluenceRotations, const CTransform* pSimWorldTransformsIn, const CTransform& rootTransform, CTransform* pAttachmentWorldTransformOut, bool bIgnoreRotation)
{
	Vector vBlendedPos; // 2520
	float flBlendedScale; // 2521
	float pWeights; // 2522
	Vector vPos; // 2523
	Quaternion qRot; // 2524
	const char   __FUNCTION__; // 35780
	{
		uint8 i; // 2528
		{
			const float  flWeight; // 2533
			int nParentTransform; // 2538
			{
				float flScale; // 2543
				Vector vLocalPos; // 2546
			}
			{
				CTransform parent; // 2557
				float flScale; // 2558
				Vector vLocalPos; // 2564
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2555
				}
			}
		}
	}
	{
		Quaternion pQuaternions; // 2577
		Quaternion vBlendedOrientation; // 2625
		{
			uint8 i; // 2578
			{
				const float  flWeight; // 2583
				int nParentTransform; // 2588
				{
					float flScale; // 2593
					Vector vLocalPos; // 2596
				}
				{
					CTransform parent; // 2608
					float flScale; // 2610
					Vector vLocalPos; // 2613
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2606
					}
				}
			}
		}
	}
} /* size: 0, variables: 6 */

// <01DFF7D2> modellib/model.cpp:2503
// variables: 26
void SetupAttachment(int nInfluences, const int32* pInfluenceIndices, const float* pInfluenceWeights, const Vector* pInfluenceOffsets, const Quaternion* pInfluenceRotations, const CTransform* pSimWorldTransformsIn, const CTransform& rootTransform, CTransform* pAttachmentWorldTransformOut, bool bIgnoreRotation)
{
	Vector vBlendedPos; // 2520
	float flBlendedScale; // 2521
	float pWeights; // 2522
	Vector vPos; // 2523
	Quaternion qRot; // 2524
	const char   __FUNCTION__; // 43303
	{
		uint8 i; // 2528
		{
			const float  flWeight; // 2533
			int nParentTransform; // 2538
			{
				float flScale; // 2543
				Vector vLocalPos; // 2546
			}
			{
				CTransform parent; // 2557
				float flScale; // 2558
				Vector vLocalPos; // 2564
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2555
				}
			}
		}
	}
	{
		Quaternion pQuaternions; // 2577
		Quaternion vBlendedOrientation; // 2625
		{
			uint8 i; // 2578
			{
				const float  flWeight; // 2583
				int nParentTransform; // 2588
				{
					float flScale; // 2593
					Vector vLocalPos; // 2596
				}
				{
					CTransform parent; // 2608
					float flScale; // 2610
					Vector vLocalPos; // 2613
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2606
					}
				}
			}
		}
	}
} /* size: 0, variables: 6 */

// <00A357A7> modellib/model.cpp:2503
// variables: 26
void SetupAttachment(int nInfluences, const int32* pInfluenceIndices, const float* pInfluenceWeights, const Vector* pInfluenceOffsets, const Quaternion* pInfluenceRotations, const CTransform* pSimWorldTransformsIn, const CTransform& rootTransform, CTransform* pAttachmentWorldTransformOut, bool bIgnoreRotation)
{
	Vector vBlendedPos; // 2520
	float flBlendedScale; // 2521
	float pWeights; // 2522
	Vector vPos; // 2523
	Quaternion qRot; // 2524
	const char   __FUNCTION__; // 18028
	{
		uint8 i; // 2528
		{
			const float  flWeight; // 2533
			int nParentTransform; // 2538
			{
				float flScale; // 2543
				Vector vLocalPos; // 2546
			}
			{
				CTransform parent; // 2557
				float flScale; // 2558
				Vector vLocalPos; // 2564
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2555
				}
			}
		}
	}
	{
		Quaternion pQuaternions; // 2577
		Quaternion vBlendedOrientation; // 2625
		{
			uint8 i; // 2578
			{
				const float  flWeight; // 2583
				int nParentTransform; // 2588
				{
					float flScale; // 2593
					Vector vLocalPos; // 2596
				}
				{
					CTransform parent; // 2608
					float flScale; // 2610
					Vector vLocalPos; // 2613
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2606
					}
				}
			}
		}
	}
} /* size: 0, variables: 6 */

// <04AEFA0D> modellib/model.cpp:2635
// variables: 6
void SetupAttachment(int nInfluences, const int32* pInfluenceIndices, const float* pInfluenceWeights, const Vector* pInfluenceOffsets, const Quaternion* pInfluenceRotations, const matrix3x4a_t* pSimWorldTransformsIn, const matrix3x4a_t& rootTransform, matrix3x4a_t* pAttachmentWorldTransformOut, bool bIgnoreRotation)
{
	Vector vBlendedPos; // 2651
	float flBlendedScale; // 2652
	float pWeights; // 2653
	Vector vPos; // 2654
	Quaternion qRot; // 2655
	float flScale; // 2656
} /* size: 0, variables: 6 */

// <04AE5F6E> modellib/model.cpp:2635
// variables: 88
// function calls: 183
void SetupAttachment(int nInfluences, const int32* pInfluenceIndices, const float* pInfluenceWeights, const Vector* pInfluenceOffsets, const Quaternion* pInfluenceRotations, const matrix3x4a_t* pSimWorldTransformsIn, const matrix3x4a_t& rootTransform, matrix3x4a_t* pAttachmentWorldTransformOut, bool bIgnoreRotation)
{
	Vector vBlendedPos; // 2651
	float flBlendedScale; // 2652
	float pWeights; // 2653
	Vector vPos; // 2654
	Quaternion qRot; // 2655
	float flScale; // 2656
	{
		Quaternion pQuaternions; // 2705
		Quaternion vBlendedOrientation; // 2750
		{
			uint8 i; // 2706
			{
				const float  flWeight; // 2711
				int nParentTransform; // 2716
				Quaternion::Init(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 2745
				{
					const matrix3x4a_t& parent; // 2734
					Vector vLocalPos; // 2738
					{
					}
					matrix3x4_t::matrix3x4_t(); // 753
					Vector::LargestComponentValue(); // 755
					MatrixQuaternion(const matrix3x4_t& mat,
							Quaternion& q,
							Vector& o,
							float& flScale);  // 2735
					{
						fltx4 x000; // 1010
						fltx4 y000; // 1011
						fltx4 z000; // 1012
						fltx4 x0y0; // 1013
						_mm_load_ss(const float* __P); // 1010
						_mm_load_ss(const float* __P); // 1011
						_mm_load_ss(const float* __P); // 1012
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
							const Vector& v0);  // 2738
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 2740
					{
						fltx4 retVal; // 947
						_mm_loadu_ps(const float* __P); // 948
					}
					LoadUnalignedSIMD<>(const void* pSIMD); // 900
					QuaternionAligned::QuaternionAligned(); // 898
					{
						fltx4 retVal; // 947
						_mm_loadu_ps(const float* __P); // 948
					}
					LoadUnalignedSIMD<>(const void* pSIMD); // 899
					{
						fltx4 retVal; // 1616
						_mm_sub_ps(__m128 __A,
								__m128 __B);  // 1617
					}
					SubSIMD<>(const fltx4& a,
							const fltx4& b);  // 464
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 465
					{
						fltx4 fl4Product; // 1725
						fltx4 fl4YXWZ; // 1727
						fltx4 fl4UUVV; // 1729
						fltx4 fl4VVUU; // 1731
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1725
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1728
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1730
						{
							fltx4 retVal; // 373
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 374
						}
						RotateLeft2<>(const fltx4& a); // 1732
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1733
					}
					Dot4SIMD<>(const fltx4& a,
							const fltx4& b);  // 466
					{
						fltx4 fl4Product; // 1725
						fltx4 fl4YXWZ; // 1727
						fltx4 fl4UUVV; // 1729
						fltx4 fl4VVUU; // 1731
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1725
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1728
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1730
						{
							fltx4 retVal; // 373
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 374
						}
						RotateLeft2<>(const fltx4& a); // 1732
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1733
					}
					Dot4SIMD<>(const fltx4& a,
							const fltx4& b);  // 467
					{
						fltx4 retVal; // 1981
						_mm_cmpgt_ps(__m128 __A,
								__m128 __B);  // 1982
					}
					CmpGtSIMD<>(const fltx4& a,
							const fltx4& b);  // 468
					{
						fltx4 retVal; // 1616
						_mm_sub_ps(__m128 __A,
								__m128 __B);  // 1617
					}
					SubSIMD<>(const fltx4& a,
							const fltx4& b);  // 1797
					NegSIMD<>(const fltx4& a); // 469
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
							const fltx4& b);  // 469
					QuaternionAlignSIMD<>(const fltx4& p,
								const fltx4& q);  // 885
					SubFloat<>(const fltx4& a,
							int idx);  // 129
					ExtractFloat<0>(const fltx4& a); // 506
					ExtractFloat<0>(const fltx4& a); // 886
					QuaternionMultSIMD<>(const fltx4& p,
								const fltx4& q);  // 901
					QuaternionMultAligned(const Quaternion& p,
								const Quaternion& q);  // 2739
					Vector::operator+=(
							const Vector& v);  // 2740
					Quaternion::Quaternion(
							vec_t ix,
							vec_t iy,
							vec_t iz,
							vec_t iw);  // 41
					QuaternionAligned::operator Quaternion(); // 2739
				}
				{
					Vector vLocalPos; // 2722
					matrix3x4_t::matrix3x4_t(); // 753
					Vector::LargestComponentValue(); // 755
					MatrixQuaternion(const matrix3x4_t& mat,
							Quaternion& q,
							Vector& o,
							float& flScale);  // 2719
					{
						fltx4 x000; // 1010
						fltx4 y000; // 1011
						fltx4 z000; // 1012
						fltx4 x0y0; // 1013
						_mm_load_ss(const float* __P); // 1010
						_mm_load_ss(const float* __P); // 1011
						_mm_load_ss(const float* __P); // 1012
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
							const Vector& v0);  // 2722
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 2724
					{
						fltx4 retVal; // 947
						_mm_loadu_ps(const float* __P); // 948
					}
					LoadUnalignedSIMD<>(const void* pSIMD); // 900
					QuaternionAligned::QuaternionAligned(); // 898
					{
						fltx4 retVal; // 947
						_mm_loadu_ps(const float* __P); // 948
					}
					LoadUnalignedSIMD<>(const void* pSIMD); // 899
					{
						fltx4 retVal; // 1616
						_mm_sub_ps(__m128 __A,
								__m128 __B);  // 1617
					}
					SubSIMD<>(const fltx4& a,
							const fltx4& b);  // 464
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 465
					{
						fltx4 fl4Product; // 1725
						fltx4 fl4YXWZ; // 1727
						fltx4 fl4UUVV; // 1729
						fltx4 fl4VVUU; // 1731
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1725
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1728
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1730
						{
							fltx4 retVal; // 373
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 374
						}
						RotateLeft2<>(const fltx4& a); // 1732
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1733
					}
					Dot4SIMD<>(const fltx4& a,
							const fltx4& b);  // 466
					{
						fltx4 fl4Product; // 1725
						fltx4 fl4YXWZ; // 1727
						fltx4 fl4UUVV; // 1729
						fltx4 fl4VVUU; // 1731
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1725
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1728
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1730
						{
							fltx4 retVal; // 373
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 374
						}
						RotateLeft2<>(const fltx4& a); // 1732
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1733
					}
					Dot4SIMD<>(const fltx4& a,
							const fltx4& b);  // 467
					{
						fltx4 retVal; // 1981
						_mm_cmpgt_ps(__m128 __A,
								__m128 __B);  // 1982
					}
					CmpGtSIMD<>(const fltx4& a,
							const fltx4& b);  // 468
					{
						fltx4 retVal; // 1616
						_mm_sub_ps(__m128 __A,
								__m128 __B);  // 1617
					}
					SubSIMD<>(const fltx4& a,
							const fltx4& b);  // 1797
					NegSIMD<>(const fltx4& a); // 469
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
							const fltx4& b);  // 469
					QuaternionAlignSIMD<>(const fltx4& p,
								const fltx4& q);  // 885
					SubFloat<>(const fltx4& a,
							int idx);  // 129
					ExtractFloat<0>(const fltx4& a); // 506
					ExtractFloat<0>(const fltx4& a); // 886
					QuaternionMultSIMD<>(const fltx4& p,
								const fltx4& q);  // 901
					QuaternionMultAligned(const Quaternion& p,
								const Quaternion& q);  // 2723
					Vector::operator+=(
							const Vector& v);  // 2724
					Quaternion::Quaternion(
							vec_t ix,
							vec_t iy,
							vec_t iz,
							vec_t iw);  // 41
					QuaternionAligned::operator Quaternion(); // 2723
				}
			}
		}
		Quaternion::Quaternion(); // 2750
		matrix3x4_t::InitFromQuaternion(
					const Quaternion& orientation,
					const Vector& vPosition);  // 2753
		{
			int i; // 325
			{
				int j; // 327
			}
		}
		matrix3x4_t::ScaleUpper3x3Matrix(
					float flScale);  // 2754
	}
	{
		uint8 i; // 2660
		{
			const float  flWeight; // 2665
			int nParentTransform; // 2670
			{
				matrix3x4a_t parent; // 2687
				Vector vLocalPos; // 2691
				matrix3x4_t::matrix3x4_t(); // 753
				Vector::LargestComponentValue(); // 755
				MatrixQuaternion(const matrix3x4_t& mat,
						Quaternion& q,
						Vector& o,
						float& flScale);  // 2688
				{
				}
				{
					fltx4 x000; // 1010
					fltx4 y000; // 1011
					fltx4 z000; // 1012
					fltx4 x0y0; // 1013
					_mm_load_ss(const float* __P); // 1010
					_mm_load_ss(const float* __P); // 1011
					_mm_load_ss(const float* __P); // 1012
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
						const Vector& v0);  // 2691
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 2692
				Vector::operator+=(
						const Vector& v);  // 2692
			}
			{
				Vector vLocalPos; // 2676
				matrix3x4_t::matrix3x4_t(); // 753
				Vector::LargestComponentValue(); // 755
				MatrixQuaternion(const matrix3x4_t& mat,
						Quaternion& q,
						Vector& o,
						float& flScale);  // 2673
				{
					fltx4 x000; // 1010
					fltx4 y000; // 1011
					fltx4 z000; // 1012
					fltx4 x0y0; // 1013
					_mm_load_ss(const float* __P); // 1010
					_mm_load_ss(const float* __P); // 1011
					_mm_load_ss(const float* __P); // 1012
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
				VectorAligned::AsVector(); // 2712
				matrix3x4a_t::TransformVector(
						const Vector& v0);  // 2676
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 2677
			}
		}
	}
	matrix3x4_t::InitFromQuaternion(
				const Quaternion& orientation,
				const Vector& vPosition);  // 2700
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2651
	Vector::Vector(); // 2654
	Quaternion::Quaternion(); // 2655
} /* size: 0, variables: 6, inline expansions: 4 (65 bytes) */

// <04ABA786> modellib/model.cpp:2635
// variables: 23
void SetupAttachment(int nInfluences, const int32* pInfluenceIndices, const float* pInfluenceWeights, const Vector* pInfluenceOffsets, const Quaternion* pInfluenceRotations, const matrix3x4a_t* pSimWorldTransformsIn, const matrix3x4a_t& rootTransform, matrix3x4a_t* pAttachmentWorldTransformOut, bool bIgnoreRotation)
{
	Vector vBlendedPos; // 2651
	float flBlendedScale; // 2652
	float pWeights; // 2653
	Vector vPos; // 2654
	Quaternion qRot; // 2655
	float flScale; // 2656
	const char   __FUNCTION__; // 35780
	{
		uint8 i; // 2660
		{
			const float  flWeight; // 2665
			int nParentTransform; // 2670
			{
				Vector vLocalPos; // 2676
			}
			{
				matrix3x4a_t parent; // 2687
				Vector vLocalPos; // 2691
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2685
				}
			}
		}
	}
	{
		Quaternion pQuaternions; // 2705
		Quaternion vBlendedOrientation; // 2750
		{
			uint8 i; // 2706
			{
				const float  flWeight; // 2711
				int nParentTransform; // 2716
				{
					Vector vLocalPos; // 2722
				}
				{
					const matrix3x4a_t& parent; // 2734
					Vector vLocalPos; // 2738
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2732
					}
				}
			}
		}
	}
} /* size: 0, variables: 7 */

// <01DFF5F4> modellib/model.cpp:2635
// variables: 23
void SetupAttachment(int nInfluences, const int32* pInfluenceIndices, const float* pInfluenceWeights, const Vector* pInfluenceOffsets, const Quaternion* pInfluenceRotations, const matrix3x4a_t* pSimWorldTransformsIn, const matrix3x4a_t& rootTransform, matrix3x4a_t* pAttachmentWorldTransformOut, bool bIgnoreRotation)
{
	Vector vBlendedPos; // 2651
	float flBlendedScale; // 2652
	float pWeights; // 2653
	Vector vPos; // 2654
	Quaternion qRot; // 2655
	float flScale; // 2656
	const char   __FUNCTION__; // 43303
	{
		uint8 i; // 2660
		{
			const float  flWeight; // 2665
			int nParentTransform; // 2670
			{
				Vector vLocalPos; // 2676
			}
			{
				matrix3x4a_t parent; // 2687
				Vector vLocalPos; // 2691
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2685
				}
			}
		}
	}
	{
		Quaternion pQuaternions; // 2705
		Quaternion vBlendedOrientation; // 2750
		{
			uint8 i; // 2706
			{
				const float  flWeight; // 2711
				int nParentTransform; // 2716
				{
					Vector vLocalPos; // 2722
				}
				{
					const matrix3x4a_t& parent; // 2734
					Vector vLocalPos; // 2738
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2732
					}
				}
			}
		}
	}
} /* size: 0, variables: 7 */

// <00A355C9> modellib/model.cpp:2635
// variables: 23
void SetupAttachment(int nInfluences, const int32* pInfluenceIndices, const float* pInfluenceWeights, const Vector* pInfluenceOffsets, const Quaternion* pInfluenceRotations, const matrix3x4a_t* pSimWorldTransformsIn, const matrix3x4a_t& rootTransform, matrix3x4a_t* pAttachmentWorldTransformOut, bool bIgnoreRotation)
{
	Vector vBlendedPos; // 2651
	float flBlendedScale; // 2652
	float pWeights; // 2653
	Vector vPos; // 2654
	Quaternion qRot; // 2655
	float flScale; // 2656
	const char   __FUNCTION__; // 18028
	{
		uint8 i; // 2660
		{
			const float  flWeight; // 2665
			int nParentTransform; // 2670
			{
				Vector vLocalPos; // 2676
			}
			{
				matrix3x4a_t parent; // 2687
				Vector vLocalPos; // 2691
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2685
				}
			}
		}
	}
	{
		Quaternion pQuaternions; // 2705
		Quaternion vBlendedOrientation; // 2750
		{
			uint8 i; // 2706
			{
				const float  flWeight; // 2711
				int nParentTransform; // 2716
				{
					Vector vLocalPos; // 2722
				}
				{
					const matrix3x4a_t& parent; // 2734
					Vector vLocalPos; // 2738
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2732
					}
				}
			}
		}
	}
} /* size: 0, variables: 7 */

// <04ABA727> modellib/model.cpp:2760
// function call: 1
void CModel::GetBoneConstraintCount()
{
	CUtlVectorBase<const CBoneConstraintBase::Count(); // 2762
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04ABA64A> modellib/model.cpp:2767
// function calls: 3
void CModel::GetBoneConstraint(int nProceduralBoneIndex)
{
	CUtlVectorBase<const CBoneConstraintBase::IsValidIndex(
			int i);  // 2769
	CUtlMemory<const CBoneConstraintBase::operator[](
			int i);  // 595
	CUtlVectorBase<const CBoneConstraintBase::operator[](
			int i);  // 2770
} /* size: 0, inline expansions: 3 (0 bytes) */

// <04ABA4CC> modellib/model.cpp:2775
// function calls: 5
void CModel::GetMeshToolsGeometryInfo(int iMesh, const CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> > ** ppOutTraceData)
{
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 698
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
			int i);  // 701
	CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
	CModel::GetMeshData(
			int iMesh);  // 2777
} /* size: 0, inline expansions: 5 (0 bytes) */

// <04ABA083> modellib/model.cpp:2780
// variables: 7
// function calls: 13
void CModel::GetModelRenderInfo(LODGroupMask_t lodGroupMask, MeshGroupMask_t nMeshGroupMask, int* pOutMeshCount, int* pOutVertexCount, int* pOutPolyCount, int* pOutDrawCalls)
{
	{
		int i; // 2787
		{
			LODGroupMask_t lodMeshMask; // 2789
			MeshGroupMask_t nMeshMask; // 2793
			const CRenderMesh* pMesh; // 2797
			int nMeshVert; // 2801
			int nMeshPoly; // 2802
			int nMeshDraw; // 2803
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 595
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
					int i);  // 2867
			CModel::GetLODMaskForMesh(
						int nMesh);  // 2789
			CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Count(); // 376
			CUtlMemory<long long unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
					int i);  // 379
			CModel::GetMeshGroupMaskForMesh(
						int iMesh);  // 2793
			CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
					int i);  // 701
			CModel::GetMeshData(
					int iMesh);  // 2797
		}
		Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 685
		CModel::GetNumMeshes(); // 2787
	}
} /* size: 0 */

// <04AB9F14> modellib/model.cpp:2813
// variables: 6
// function calls: 3
void CModel::ComputeMaxLODLevelUsedByModel()
{
	LODGroupMask_t nHighestMask; // 2815
	int nLODGroupMasks; // 2816
	int nAllEnabled; // 2817
	int nHighestLod; // 2830
	{
		int i; // 2818
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
				int i);  // 2820
	}
	{
		int i; // 2831
	}
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 2816
} /* size: 160, variables: 4, inline expansions: 1 (7 bytes) */

// <04AB9DCF> modellib/model.cpp:2842
// variables: 4
// function calls: 3
void CModel::LODLevelForScreenSize(float flScreenWidthInPixels, float flScale)
{
	float flLODMetric; // 2847
	int nLod; // 2849
	{
		float flSwitchDistance; // 2853
		bool bValidSwitch; // 2854
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 2853
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 2849
} /* size: 105, variables: 2, inline expansions: 1 (6 bytes) */

// <04AEFB0D> modellib/model.cpp:2865
// function calls: 2
void CModel::GetLODMaskForMesh(int nMesh)
{
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
			int i);  // 2867
} /* size: 19, inline expansions: 2 (6 bytes) */

// <04AB9DA9> modellib/model.cpp:2865
void CModel::GetLODMaskForMesh(int nMesh)
{
} /* size: 0 */

// <04AB9D7B> modellib/model.cpp:2870
void CModel::GetLODGroupSwitchDistances()
{
} /* size: 12 */

// <04AB9B19> modellib/model.cpp:2888
// variables: 2
// function calls: 5
float GetWeight(const CVarBitVec& joints, const TraceVertex_t& tv)
{
	float flSum; // 2890
	{
		int i; // 2891
		TraceVertex_t::GetBoneWeight(
				int index);  // 2895
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
		{
		}
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 1471
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
			int bitNum);  // 2893
	}
} /* size: 0, variables: 1 */

// <04AB96B8> modellib/model.cpp:2905
// variables: 4
// function calls: 15
void CModel::GetAttachmentTransform(CUtlStringToken nAttachmentToken, CTransformUnaligned& tx)
{
	Vector origin; // 2907
	Quaternion qOrientation; // 2908
	AttachmentHandle_t hAttachment; // 2909
	Vector::Vector(); // 2907
	Quaternion::Quaternion(); // 2908
	{
		int i; // 1370
		CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1370
		CUtlMemory<AttachmentPairing_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
				int i);  // 1372
		AttachmentHandle_t::AttachmentHandle_t(
					uint8 value);  // 1274
		IndexToAttachmentHandle(int nIndex); // 1374
	}
	CModel::GetAttachmentHandle(
				CUtlStringToken nAttachmentToken);  // 2909
	AttachmentHandle_t::operator==(
			const AttachmentHandle_t& other);  // 2910
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 126
	CTransformUnaligned::CTransformUnaligned(
				const Vector& v,
				const Quaternion& q,
				float flScale);  // 2914
	Vector::operator=(
			const Vector& vOther);  // 122
	Vector::operator=(
			const Vector& vOther);  // 122
	CTransformUnaligned::operator=(
			CTransformUnaligned &);  // 2914
} /* size: 192, variables: 3, inline expansions: 10 (141 bytes) */

// <04AB918B> modellib/model.cpp:2919
// variables: 3
// function calls: 23
void CModel::GetBoneTransform(int boneId)
{
	CTransform f; // 2921
	CTransform out; // 2923
	VectorAligned::operator fltx4(); // 378
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 378
	VectorAligned::operator=(
			fltx4 src);  // 378
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 379
	CTransform::SetToIdentity(); // 2922
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 2921
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 2923
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 127
	CTransform::GetScale(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 127
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 127
	CTransformUnaligned::CTransformUnaligned(
				const CTransform& transform);  // 2927
} /* size: 164, variables: 2, inline expansions: 21 (161 bytes) */

// <04AB8F6E> modellib/model.cpp:2930
// function calls: 10
void CModel::GetAttachmentNameFromIndex(int index)
{
	AttachmentHandle_t::AttachmentHandle_t(
				uint8 value);  // 1274
	IndexToAttachmentHandle(int nIndex); // 1360
	CModel::GetAttachmentHandleFromIndex(
					int nIndex);  // 2932
	AttachmentHandleToIndex(AttachmentHandle_t hAttachment); // 1403
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 1405
	CUtlMemory<AttachmentPairing_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
			int i);  // 1407
	CModel::GetAttachment(
			const AttachmentHandle_t& hAttachment);  // 1437
	CUtlString::Get(); // 1437
	CModel::GetAttachmentName(
				AttachmentHandle_t hAttachment);  // 2932
} /* size: 0, inline expansions: 10 (167 bytes) */

// <04AB8BE6> modellib/model.cpp:2937
// variable: 1
// function calls: 10
void CModel::MeshTrace(const MeshTraceInput& input, MeshTraceOutput& output)
{
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2940; // 2940
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 2940
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2942
	}
} /* size: 194 */

// <04AB8240> modellib/model.cpp:2948
// variables: 14
// function calls: 32
void CModel::BuildRayTraceObject()
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2951; // 2951
	LODGroupMask_t lodGroupMask; // 2957
	int nTriangleCount; // 2972
	{
		int i; // 2959
		{
			LODGroupMask_t lodMeshMask; // 2961
			const CRenderMesh* pMesh; // 2965
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 595
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
					int i);  // 2867
			CModel::GetLODMaskForMesh(
						int nMesh);  // 2961
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
					int i);  // 701
			CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
			CModel::GetMeshData(
					int iMesh);  // 2965
		}
		Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 685
		CModel::GetNumMeshes(); // 2959
	}
	{
		int t; // 2973
		{
			int i0; // 2975
			int i1; // 2976
			int i2; // 2977
			const Vector  vx0; // 2979
			const Vector  vx1; // 2980
			const Vector  vx2; // 2981
			int idx; // 2983
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 2975
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 2976
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 2979
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 2977
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 2980
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 2981
		}
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 2951
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 2972
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2990
} /* size: 0, variables: 3, inline expansions: 11 (0 bytes) */

// <04AB7B4F> modellib/model.cpp:2992
// variables: 3
// function calls: 30
void CModel::GetVisemeMorph(const CUtlString& viseme, int morph)
{
	UtlHashHandle_t handle; // 2994
	const CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<i& morphs; // 2998
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 218
	{
		uint32 c; // 354
	}
	StringHashFunctor::operator(
			const char* s);  // 218
	CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::Base(); // 650
	CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::Count(); // 651
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlHashtableEntry<CUtlString, int>::IdealIndex(
			uint32 slotmask);  // 656
	CUtlHashtableEntry<CUtlString, int>::IdealIndex(
			uint32 slotmask);  // 667
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 670
	V_strcmp(const char* s1,
		const char* s2);  // 127
	StringEqualFunctor::operator(
			const char* a,
			const char* b);  // 670
	DoLookup<const CUtlString&>(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t,  this,
					const CUtlString& x,
					unsigned int h,
					handle_t* pPreviousInChain);  // 218
	Find(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t,  this,
		KeyArg_t k);  // 2994
	CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<CUtlString, int>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t,  this,
			handle_t idx);  // 2995
	operator[](const CUtlMemory<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUt this,
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory this,
			int i);  // 2998
	Mix32HashFunctor::operator(
			uint32 n);  // 218
	CUtlMemory<CUtlHashtableEntry<int, float>, int>::Count(); // 651
	CUtlMemory<CUtlHashtableEntry<int, float>, int>::Base(); // 650
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlHashtableEntry<int, float>::IdealIndex(
			uint32 slotmask);  // 656
	CUtlHashtableEntry<int, float>::IdealIndex(
			uint32 slotmask);  // 667
	DoLookup<int>(const CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHash this,
			int x,
			unsigned int h,
			handle_t* pPreviousInChain);  // 218
	Find(const CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHash this,
		KeyArg_t k);  // 2999
	CUtlMemory<CUtlHashtableEntry<int, float>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<int, float>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHash this,
			handle_t idx);  // 3000
} /* size: 666, variables: 2, inline expansions: 30 (1373 bytes) */

// <04AB6D79> modellib/model.cpp:3006
// variables: 14
// function calls: 61
void CModel::RebuildMaterialList()
{
	{
		int i; // 3010
		{
			const CRenderMesh* pMesh; // 3012
			{
				int s; // 3013
				{
					const CSceneObjectData& sceneObjectData; // 3015
					{
						int d; // 3016
						{
							HMaterial hMat; // 3018
							CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
									int i);  // 595
							CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
									int i);  // 3018
							{
								int i; // 1531
								Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this); // 1531
								CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
										int i);  // 609
								Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this,
									int i);  // 1533
								CWeakHandle<InfoForResourceTypeIMaterial2>::operator==(
										const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 1533
							}
							Find(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this,
								const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 3019
							CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::NumAllocated(); // 1196
							CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
								const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
							CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
									const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1520
							CopyConstruct<CWeakHandle<InfoForResourceTypeIMaterial2> >(CWeakHandle<InfoForResourceTypeIMaterial2>* pMemory,
															const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1201
							CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
									int i);  // 602
							Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
								int i);  // 1201
							CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Base(); // 112
							Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 368
							ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 824
							GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
									int num);  // 1198
							AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
									const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 3021
						}
						CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 3016
					}
					CUtlMemory<CSceneObjectData, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
							int i);  // 3015
				}
				CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 3013
			}
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
					int i);  // 701
			CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
			CModel::GetMeshData(
					int iMesh);  // 3012
		}
		Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 685
		CModel::GetNumMeshes(); // 3010
	}
	{
		const CModelMaterialGroup& group; // 3027
		CUtlVector<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >& __for_range; // 4965
		iterator __for_begin; // 45362
		iterator __for_end; // 45362
		{
			int m; // 3029
			{
				HMaterial hMat; // 3031
				CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Base(); // 112
				Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 368
				ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 824
				GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
						int num);  // 1198
				CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::NumAllocated(); // 1196
				CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
					int i);  // 1201
				CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1520
				CopyConstruct<CWeakHandle<InfoForResourceTypeIMaterial2> >(CWeakHandle<InfoForResourceTypeIMaterial2>* pMemory,
												const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1201
				AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
						const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 3034
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this,
						int i);  // 3031
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
				CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 3031
				{
					int i; // 1531
					Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this); // 1531
					CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
							int i);  // 609
					Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this,
						int i);  // 1533
					CWeakHandle<InfoForResourceTypeIMaterial2>::operator==(
							const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 1533
				}
				Find(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this,
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 3032
			}
			Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 3029
		}
		CUtlMemory<CModelMaterialGroup, int>::Base(); // 112
		CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::Base(); // 102
		CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::begin(); // 3027
		CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::Count(); // 104
		CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::end(); // 3027
	}
	RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 1798
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Purge(); // 903
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Purge(); // 1799
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 1800
	Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 3008
} /* size: 0, inline expansions: 6 (0 bytes) */

// <01DFBBE7> modellib/model.cpp:3006
// variables: 14
// function calls: 61
void CModel::RebuildMaterialList()
{
	{
		int i; // 3010
		{
			const CRenderMesh* pMesh; // 3012
			{
				int s; // 3013
				{
					const CSceneObjectData& sceneObjectData; // 3015
					{
						int d; // 3016
						{
							HMaterial hMat; // 3018
							CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
									int i);  // 595
							CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
									int i);  // 3018
							{
								int i; // 1531
								Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this); // 1531
								CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
										int i);  // 609
								Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this,
									int i);  // 1533
								CWeakHandle<InfoForResourceTypeIMaterial2>::operator==(
										const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 1533
							}
							Find(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this,
								const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 3019
							CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::NumAllocated(); // 1196
							CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
								const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
							CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
									const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1520
							CopyConstruct<CWeakHandle<InfoForResourceTypeIMaterial2> >(CWeakHandle<InfoForResourceTypeIMaterial2>* pMemory,
															const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1201
							CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
									int i);  // 602
							Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
								int i);  // 1201
							CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Base(); // 112
							Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 368
							ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 824
							GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
									int num);  // 1198
							AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
									const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 3021
						}
						CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 3016
					}
					CUtlMemory<CSceneObjectData, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
							int i);  // 3015
				}
				CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 3013
			}
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
					int i);  // 701
			CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
			CModel::GetMeshData(
					int iMesh);  // 3012
		}
		Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 685
		CModel::GetNumMeshes(); // 3010
	}
	{
		const CModelMaterialGroup& group; // 3027
		CUtlVector<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >& __for_range; // 12488
		iterator __for_begin; // 52885
		iterator __for_end; // 52885
		{
			int m; // 3029
			{
				HMaterial hMat; // 3031
				CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Base(); // 112
				Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 368
				ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 824
				GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
						int num);  // 1198
				CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::NumAllocated(); // 1196
				CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
					int i);  // 1201
				CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1520
				CopyConstruct<CWeakHandle<InfoForResourceTypeIMaterial2> >(CWeakHandle<InfoForResourceTypeIMaterial2>* pMemory,
												const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1201
				AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
						const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 3034
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this,
						int i);  // 3031
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
				CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 3031
				{
					int i; // 1531
					Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this); // 1531
					CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
							int i);  // 609
					Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this,
						int i);  // 1533
					CWeakHandle<InfoForResourceTypeIMaterial2>::operator==(
							const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 1533
				}
				Find(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this,
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 3032
			}
			Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 3029
		}
		CUtlMemory<CModelMaterialGroup, int>::Base(); // 112
		CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::Base(); // 102
		CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::begin(); // 3027
		CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::Count(); // 104
		CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::end(); // 3027
	}
	RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 1798
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Purge(); // 903
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Purge(); // 1799
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 1800
	Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 3008
} /* size: 0, inline expansions: 6 (0 bytes) */

// <00A31BBC> modellib/model.cpp:3006
// variables: 14
// function calls: 61
void CModel::RebuildMaterialList()
{
	{
		int i; // 3010
		{
			const CRenderMesh* pMesh; // 3012
			{
				int s; // 3013
				{
					const CSceneObjectData& sceneObjectData; // 3015
					{
						int d; // 3016
						{
							HMaterial hMat; // 3018
							CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
									int i);  // 595
							CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
									int i);  // 3018
							{
								int i; // 1531
								Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this); // 1531
								CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
										int i);  // 609
								Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this,
									int i);  // 1533
								CWeakHandle<InfoForResourceTypeIMaterial2>::operator==(
										const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 1533
							}
							Find(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this,
								const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 3019
							CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::NumAllocated(); // 1196
							CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
								const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
							CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
									const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1520
							CopyConstruct<CWeakHandle<InfoForResourceTypeIMaterial2> >(CWeakHandle<InfoForResourceTypeIMaterial2>* pMemory,
															const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1201
							CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
									int i);  // 602
							Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
								int i);  // 1201
							CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Base(); // 112
							Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 368
							ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 824
							GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
									int num);  // 1198
							AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
									const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 3021
						}
						CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 3016
					}
					CUtlMemory<CSceneObjectData, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
							int i);  // 3015
				}
				CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 3013
			}
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this,
					int i);  // 701
			CSmartPtr<CRenderMesh, CRefCountAccessor>::Get(); // 701
			CModel::GetMeshData(
					int iMesh);  // 3012
		}
		Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 685
		CModel::GetNumMeshes(); // 3010
	}
	{
		const CModelMaterialGroup& group; // 3027
		CUtlVector<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >& __for_range; // 52749
		iterator __for_begin; // 27610
		iterator __for_end; // 27610
		{
			int m; // 3029
			{
				HMaterial hMat; // 3031
				CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Base(); // 112
				Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 368
				ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 824
				GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
						int num);  // 1198
				CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::NumAllocated(); // 1196
				CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
					int i);  // 1201
				CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1520
				CopyConstruct<CWeakHandle<InfoForResourceTypeIMaterial2> >(CWeakHandle<InfoForResourceTypeIMaterial2>* pMemory,
												const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1201
				AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this,
						const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 3034
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this,
						int i);  // 3031
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
				CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 3031
				{
					int i; // 1531
					Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this); // 1531
					CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
							int i);  // 609
					Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this,
						int i);  // 1533
					CWeakHandle<InfoForResourceTypeIMaterial2>::operator==(
							const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 1533
				}
				Find(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this,
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 3032
			}
			Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 3029
		}
		CUtlMemory<CModelMaterialGroup, int>::Base(); // 112
		CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::Base(); // 102
		CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::begin(); // 3027
		CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::Count(); // 104
		CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::end(); // 3027
	}
	RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 1798
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Purge(); // 903
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Purge(); // 1799
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 1800
	Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, i this); // 3008
} /* size: 743, inline expansions: 6 (193 bytes) */

// <04AB6C1F> modellib/model.cpp:3041
// variable: 1
// function calls: 5
void CModel::GetMaterialIndex(const IMaterial2* material)
{
	{
		int i; // 1543
		Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this); // 1543
		CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this,
			int i);  // 1545
		CWeakHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 1545
	}
	FindComparable<const IMaterial2*>(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this,
						const IMaterial2* const& src);  // 3043
} /* size: 70, inline expansions: 1 (59 bytes) */

// <04AB6BC0> modellib/model.cpp:3046
// function call: 1
void CModel::GetMaterialIndexCount()
{
	Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this); // 3048
} /* size: 11, inline expansions: 1 (0 bytes) */

// <04AB6AB1> modellib/model.cpp:3051
// function calls: 4
void CModel::GetMaterialByIndex(int index)
{
	CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMateria this,
			int i);  // 3053
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 3053
} /* size: 25, inline expansions: 4 (34 bytes) */

