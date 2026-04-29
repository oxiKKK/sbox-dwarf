
//
// vphysics2/physicsbody.cpp
//
//	referenced by: libengine2.so
//
//	functions: 123
//

// <00BB023C> vphysics2/physicsbody.cpp:13
// variables: 4
// function calls: 14
void CPhysicsBody::CPhysicsBody(b3BodyId id)
{
	{
		{
		}
	}
	{
		CUtlString::CUtlString(); // 13
		{
		}
		AlignedByteArrayExplicit_t<1, CPhysicsShape::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<1, CPhysicsShape::AlignedByteArray_t(); // 228
		CUtlMemory<CPhysicsShape::CUtlMemory(
				CPhysicsShape** pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<CPhysicsShape::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<CPhysicsShape::CUtlMemoryFixedGrowable_Base(
						CPhysicsShape** pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<1, CPhysicsShape::Base(); // 231
		CUtlMemoryFixedGrowable<CPhysicsShape::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<CPhysicsShape::ResetDbgInfo(); // 530
		CUtlVectorBase<CPhysicsShape::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<CPhysicsShape::CUtlVectorFixedGrowable(
					int growSize);  // 13
		IPhysicsBody::IPhysicsBody(); // 13
		CManagedHandle::CManagedHandle(); // 13
		{
		}
		{
			const uint32  m; // 226
			uint32 h; // 227
			uint32 k; // 228
			const int  r; // 229
		}
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 21
	}
} /* size: 0 */

// <00BB01F3> vphysics2/physicsbody.cpp:13
// variables: 2
void CPhysicsBody::CPhysicsBody(b3BodyId id)
{
	const char   __FUNCTION__; // 50761
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 15
	}
} /* size: 0, variables: 1 */

// <00BAFE03> vphysics2/physicsbody.cpp:24
// function calls: 19
void CPhysicsBody::~CPhysicsBody()
{
	CUtlVectorBase<CPhysicsShape::RemoveAll(); // 1798
	CUtlMemory<CPhysicsShape::IsExternallyAllocated(); // 577
	CUtlMemory<CPhysicsShape::ConvertToExternalMemory(
				CPhysicsShape** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CPhysicsShape::Purge_FixedGrowable(
				CPhysicsShape** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CPhysicsShape::Purge_FixedGrowable(
				CPhysicsShape** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<1, CPhysicsShape::Base(); // 237
	CUtlMemoryFixedGrowable<CPhysicsShape::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CPhysicsShape::ResetDbgInfo(); // 1800
	CUtlVectorBase<CPhysicsShape::Purge(); // 560
	ValidateAlignment<CPhysicsShape*>(void); // 508
	CUtlMemory<CPhysicsShape::Purge(); // 903
	CUtlMemory<CPhysicsShape::Purge(); // 510
	CUtlMemory<CPhysicsShape::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CPhysicsShape::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CPhysicsShape::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CPhysicsShape::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CPhysicsShape::~CUtlVectorFixedGrowable(); // 27
	CUtlString::~CUtlString(); // 27
	CManagedHandle::~CManagedHandle(); // 27
} /* size: 142, inline expansions: 19 (462 bytes) */

// <00BAFD9D> vphysics2/physicsbody.cpp:24
void CPhysicsBody::~CPhysicsBody()
{
} /* size: 36 */

// <00BAFCED> vphysics2/physicsbody.cpp:29
// variable: 1
void CPhysicsBody::SetType(PhysicsBodyType_t nType)
{
	b3BodyType BodyType; // 31
} /* size: 85, variables: 1 */

// <00BB22ED> vphysics2/physicsbody.cpp:56
void CPhysicsBody::GetType()
{
} /* size: 35 */

// <00BAFC84> vphysics2/physicsbody.cpp:67
void CPhysicsBody::GetWorld()
{
} /* size: 25 */

// <00BB2292> vphysics2/physicsbody.cpp:72
// function call: 1
void CPhysicsBody::GetShapeCount()
{
	CUtlVectorBase<CPhysicsShape::Count(); // 74
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00BAFC6B> vphysics2/physicsbody.cpp:72
void CPhysicsBody::GetShapeCount()
{
} /* size: 0 */

// <00BAFB97> vphysics2/physicsbody.cpp:77
// function calls: 3
void CPhysicsBody::GetShape(int nShape)
{
	CUtlVectorBase<CPhysicsShape::Count(); // 79
	CUtlMemory<CPhysicsShape::operator[](
			int i);  // 588
	CUtlVectorBase<CPhysicsShape::operator[](
			int i);  // 82
} /* size: 35, inline expansions: 3 (6 bytes) */

// <00BAFB72> vphysics2/physicsbody.cpp:85
void CPhysicsBody::GetShape(int nShape)
{
} /* size: 0 */

// <00BB2949> vphysics2/physicsbody.cpp:93
// variables: 3
// function calls: 14
void CPhysicsBody::RemoveShape(IPhysicsShape* pShape)
{
	b3ShapeId Shape; // 101
	{
		int i; // 1531
		CUtlVectorBase<CPhysicsShape::Count(); // 1531
		CUtlMemory<CPhysicsShape::operator[](
				int i);  // 609
		CUtlVectorBase<CPhysicsShape::Element(
			int i);  // 1533
	}
	CUtlVectorBase<CPhysicsShape::Find(
		CPhysicsShape* const& src);  // 1629
	CUtlMemory<CPhysicsShape::operator[](
			int i);  // 602
	CUtlVectorBase<CPhysicsShape::Element(
		int i);  // 1575
	Destruct<CPhysicsShape*>(CPhysicsShape** pMemory); // 1575
	{
		const bool  bNotLast; // 1578
		CUtlMemory<CPhysicsShape::operator[](
				int i);  // 602
		CUtlVectorBase<CPhysicsShape::Element(
			int i);  // 1584
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1584
	}
	CUtlVectorBase<CPhysicsShape::FastRemove(
			int elem);  // 1632
	CUtlVectorBase<CPhysicsShape::FindAndFastRemove(
				CPhysicsShape* const& src);  // 102
	CPhysicsBody::RemoveShape(
			IPhysicsShape* pShape);  // 93
} /* size: 222, variables: 1, inline expansions: 7 (338 bytes) */

// <00BAFB40> vphysics2/physicsbody.cpp:93
// variable: 1
void CPhysicsBody::RemoveShape(IPhysicsShape* pShape)
{
	b3ShapeId Shape; // 101
} /* size: 0, variables: 1 */

// <00BAF980> vphysics2/physicsbody.cpp:109
// variables: 4
// function calls: 6
void CPhysicsBody::PurgeShapes()
{
	{
		CPhysicsShape* pShape; // 111
		CUtlVectorFixedGrowable<CPhysicsShape*, 1>& __for_range; // 31468
		iterator __for_begin; // 44790
		iterator __for_end; // 44790
		CUtlMemory<CPhysicsShape::Base(); // 112
		CUtlVectorBase<CPhysicsShape::Base(); // 102
		CUtlVectorBase<CPhysicsShape::begin(); // 111
		CUtlVectorBase<CPhysicsShape::Count(); // 104
		CUtlVectorBase<CPhysicsShape::end(); // 111
	}
	CUtlVectorBase<CPhysicsShape::RemoveAll(); // 117
} /* size: 105, inline expansions: 1 (8 bytes) */

// <00BAF604> vphysics2/physicsbody.cpp:122
// variables: 5
// function calls: 14
void CPhysicsBody::BuildBounds()
{
	AABB_t bounds; // 124
	{
		CPhysicsShape* pShape; // 127
		const CUtlVectorFixedGrowable<CPhysicsShape*, 1>& __for_range; // 31117
		const_iterator __for_begin; // 44835
		const_iterator __for_end; // 44835
		CUtlMemory<CPhysicsShape::Base(); // 113
		CUtlVectorBase<CPhysicsShape::Base(); // 103
		CUtlVectorBase<CPhysicsShape::begin(); // 127
		CUtlVectorBase<CPhysicsShape::Count(); // 105
		CUtlVectorBase<CPhysicsShape::end(); // 127
		VectorMin(const Vector& a,
				const Vector& b,
				Vector& result);  // 99
		VectorMax(const Vector& a,
				const Vector& b,
				Vector& result);  // 100
		AABB_t::AddAABBToBounds(
				const AABB_t& other);  // 129
	}
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 124
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 138
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 139
	AABB_t::MakeInvalid(); // 125
} /* size: 323, variables: 1, inline expansions: 6 (52 bytes) */

// <00BAF26D> vphysics2/physicsbody.cpp:135
// variables: 5
// function calls: 14
void CPhysicsBody::BuildBounds(const matrix3x4_t& transform)
{
	AABB_t bounds; // 137
	{
		CPhysicsShape* pShape; // 140
		const CUtlVectorFixedGrowable<CPhysicsShape*, 1>& __for_range; // 31117
		const_iterator __for_begin; // 44835
		const_iterator __for_end; // 44835
		CUtlMemory<CPhysicsShape::Base(); // 113
		CUtlVectorBase<CPhysicsShape::Base(); // 103
		CUtlVectorBase<CPhysicsShape::begin(); // 140
		CUtlVectorBase<CPhysicsShape::Count(); // 105
		CUtlVectorBase<CPhysicsShape::end(); // 140
		VectorMin(const Vector& a,
				const Vector& b,
				Vector& result);  // 99
		VectorMax(const Vector& a,
				const Vector& b,
				Vector& result);  // 100
		AABB_t::AddAABBToBounds(
				const AABB_t& other);  // 142
	}
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 137
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 138
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 139
	AABB_t::MakeInvalid(); // 138
} /* size: 330, variables: 1, inline expansions: 6 (52 bytes) */

// <00BB28B2> vphysics2/physicsbody.cpp:148
// function call: 1
void CPhysicsBody::SetGravityScale(float flScale)
{
	CPhysicsBody::SetGravityScale(
			float flScale);  // 148
} /* size: 70, inline expansions: 1 (25 bytes) */

// <00BAF248> vphysics2/physicsbody.cpp:148
void CPhysicsBody::SetGravityScale(float flScale)
{
} /* size: 0 */

// <00BAF21A> vphysics2/physicsbody.cpp:160
void CPhysicsBody::GetGravityScale()
{
} /* size: 10 */

// <00BAF1C3> vphysics2/physicsbody.cpp:165
void CPhysicsBody::EnableGravity(bool bEnableGravity)
{
} /* size: 31 */

// <00BAF195> vphysics2/physicsbody.cpp:171
void CPhysicsBody::IsGravityEnabled()
{
} /* size: 9 */

// <00BAF167> vphysics2/physicsbody.cpp:176
void CPhysicsBody::IsGravityDisabled()
{
} /* size: 12 */

// <00BB390E> vphysics2/physicsbody.cpp:181
// function calls: 3
void CPhysicsBody::SetMass(float flMass)
{
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 186
	CPhysicsBody::GetMass(); // 187
	CPhysicsBody::SetMass(
		float flMass);  // 181
} /* size: 164, inline expansions: 3 (171 bytes) */

// <00BAF142> vphysics2/physicsbody.cpp:181
void CPhysicsBody::SetMass(float flMass)
{
} /* size: 0 */

// <00BB232A> vphysics2/physicsbody.cpp:193
void CPhysicsBody::GetMass()
{
} /* size: 13 */

// <00BB3A41> vphysics2/physicsbody.cpp:198
// function call: 1
void CPhysicsBody::ScaleInertia(float flInertiaScale)
{
	CPhysicsBody::ScaleInertia(
			float flInertiaScale);  // 198
} /* size: 77, inline expansions: 1 (32 bytes) */

// <00BAF104> vphysics2/physicsbody.cpp:198
void CPhysicsBody::ScaleInertia(float flInertiaScale)
{
} /* size: 0 */

// <00BAEFE7> vphysics2/physicsbody.cpp:210
// variable: 1
// function calls: 3
void CPhysicsBody::GetLocalInertiaOrientation()
{
	Vector inertia; // 212
	Vector::Vector(); // 212
	matrix3x4_t::matrix3x4_t(); // 98
	B3Cast<matrix3x4_t, b3Matrix3>(const b3Matrix3& v); // 213
} /* size: 187, variables: 1, inline expansions: 3 (111 bytes) */

// <00BAEECA> vphysics2/physicsbody.cpp:216
// variable: 1
// function calls: 3
void CPhysicsBody::GetLocalInertiaVector()
{
	Vector inertia; // 218
	Vector::Vector(); // 218
	matrix3x4_t::matrix3x4_t(); // 98
	B3Cast<matrix3x4_t, b3Matrix3>(const b3Matrix3& v); // 219
} /* size: 211, variables: 1, inline expansions: 3 (111 bytes) */

// <00BAE7DC> vphysics2/physicsbody.cpp:223
// variables: 4
// function calls: 26
void CPhysicsBody::SetLocalInertia(const Vector& vInertia, const Quaternion& qRotation)
{
	matrix3x4_t xRotation; // 231
	matrix3x4_t inertia; // 234
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 225
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 228
	matrix3x4_t::matrix3x4_t(); // 231
	matrix3x4_t::InitFromQuaternion(
				const Quaternion& orientation,
				const Vector& vPosition);  // 2671
	matrix3x4_t::InitFromQuaternion(
				const Quaternion& orientation);  // 232
	matrix3x4_t::matrix3x4_t(); // 234
	matrix3x4_t::SetToIdentity(); // 2664
	matrix3x4_t::InitFromDiagonal(
			const Vector& vDiagonal);  // 235
	RotateInertiaInPlace(const matrix3x4_t& R,
				matrix3x4_t& I);  // 237
	{
		int i; // 180
		{
			int j; // 182
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 184
		}
	}
	matrix3x4_t::IsValid(); // 239
} /* size: 974, variables: 2, inline expansions: 24 (894 bytes) */

// <00BB3AE0> vphysics2/physicsbody.cpp:248
// function call: 1
void CPhysicsBody::ResetLocalInertia()
{
	CPhysicsBody::ResetLocalInertia(); // 248
} /* size: 82, inline expansions: 1 (66 bytes) */

// <00BAE4CF> vphysics2/physicsbody.cpp:259
// variable: 1
// function calls: 10
void CPhysicsBody::GetMassCenter()
{
	{
		AABB_t bounds; // 263
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 32
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 32
		AABB_t::GetCenter(); // 264
	}
	CPhysicsBody::GetType(); // 261
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 267
} /* size: 275, inline expansions: 3 (44 bytes) */

// <00BAE1DB> vphysics2/physicsbody.cpp:270
// variable: 1
// function calls: 10
void CPhysicsBody::GetLocalMassCenter()
{
	{
		AABB_t bounds; // 274
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 32
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 32
		AABB_t::GetCenter(); // 275
	}
	CPhysicsBody::GetType(); // 272
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 278
} /* size: 282, inline expansions: 3 (44 bytes) */

// <00BADEB3> vphysics2/physicsbody.cpp:281
// function calls: 13
void CPhysicsBody::SetLocalMassCenter(const Vector& vMassCenterOverride)
{
	Vector::operator==(
			const Vector& src);  // 283
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 286
	Vector::LengthSqr(); // 627
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 628
	Vector::IsReasonable(
			float range);  // 289
	Vector::operator=(
			const Vector& vOther);  // 292
} /* size: 193, inline expansions: 13 (222 bytes) */

// <00BADE54> vphysics2/physicsbody.cpp:297
void CPhysicsBody::SetOverrideMassCenter(bool bOverride)
{
} /* size: 33 */

// <00BADE26> vphysics2/physicsbody.cpp:307
void CPhysicsBody::GetOverrideMassCenter()
{
} /* size: 12 */

// <00BB3B56> vphysics2/physicsbody.cpp:312
// function calls: 2
void CPhysicsBody::BuildMass()
{
	CPhysicsBody::GetType(); // 314
	CPhysicsBody::BuildMass(); // 312
} /* size: 247, inline expansions: 2 (151 bytes) */

// <00BADE0D> vphysics2/physicsbody.cpp:312
void CPhysicsBody::BuildMass()
{
} /* size: 0 */

// <00BADA62> vphysics2/physicsbody.cpp:323
// variables: 2
// function calls: 14
void CPhysicsBody::UpdateMass()
{
	b3MassData massData; // 331
	{
		float massRatio; // 335
		b3MulSV(float s,
			b3Vec3 a);  // 752
		b3MulSV(float s,
			b3Vec3 a);  // 750
		b3ScaleMatrix(float s,
				b3Matrix3 m);  // 336
	}
	CPhysicsBody::GetType(); // 325
	CUtlVectorBase<CPhysicsShape::Count(); // 74
	CPhysicsBody::GetShapeCount(); // 328
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 342
	b3MulSV(float s,
		b3Vec3 a);  // 750
	b3MulSV(float s,
		b3Vec3 a);  // 751
	b3MulSV(float s,
		b3Vec3 a);  // 752
	b3ScaleMatrix(float s,
			b3Matrix3 m);  // 351
	B3Cast<b3Matrix3, matrix3x4_t>(const matrix3x4_t& v); // 347
} /* size: 730, variables: 1, inline expansions: 11 (349 bytes) */

// <00BB2DB7> vphysics2/physicsbody.cpp:366
// function calls: 22
void CPhysicsBody::SetPosition(const Vector& p)
{
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 368
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 381
	CPhysicsBody::GetPosition(); // 373
	Vector::operator==(
			const Vector& src);  // 373
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 376
	CPhysicsBody::SetPosition(
			const Vector& p);  // 366
	{
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 370
} /* size: 0, inline expansions: 22 (320 bytes) */

// <00BAD9FE> vphysics2/physicsbody.cpp:366
// variables: 2
void CPhysicsBody::SetPosition(const Vector& p)
{
	const char   __FUNCTION__; // 50734
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 368
	}
} /* size: 0, variables: 1 */

// <00BB2436> vphysics2/physicsbody.cpp:379
// function calls: 2
void CPhysicsBody::GetPosition()
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 381
} /* size: 23, inline expansions: 2 (0 bytes) */

// <00BAD9E5> vphysics2/physicsbody.cpp:379
void CPhysicsBody::GetPosition()
{
} /* size: 0 */

// <00BB32DD> vphysics2/physicsbody.cpp:384
// variables: 3
// function calls: 27
void CPhysicsBody::SetOrientation(const Quaternion& q)
{
	b3Quat rotation; // 391
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 386
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 388
	b3DotQuat(b3Quat a,
			b3Quat b);  // 441
	{
		float s; // 444
		b3Quat qn; // 445
	}
	b3NormalizeQuat(b3Quat q); // 392
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 21
	B3Cast<Quaternion, b3Quat>(const b3Quat& v); // 405
	CPhysicsBody::GetOrientation(); // 397
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 21
	B3Cast<Quaternion, b3Quat>(const b3Quat& v); // 397
	Quaternion::operator==(
			const Quaternion& src);  // 397
	CPhysicsBody::SetOrientation(
			const Quaternion& q);  // 384
	{
	}
} /* size: 0, variables: 1, inline expansions: 27 (828 bytes) */

// <00BAD974> vphysics2/physicsbody.cpp:384
// variables: 3
void CPhysicsBody::SetOrientation(const Quaternion& q)
{
	const char   __FUNCTION__; // 50810
	b3Quat rotation; // 391
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 386
	}
} /* size: 0, variables: 2 */

// <00BB2368> vphysics2/physicsbody.cpp:403
// function calls: 2
void CPhysicsBody::GetOrientation()
{
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 21
	B3Cast<Quaternion, b3Quat>(const b3Quat& v); // 405
} /* size: 23, inline expansions: 2 (0 bytes) */

// <00BAD95B> vphysics2/physicsbody.cpp:403
void CPhysicsBody::GetOrientation()
{
} /* size: 0 */

// <00BACE05> vphysics2/physicsbody.cpp:408
// variables: 6
// function calls: 47
void CPhysicsBody::SetTransform(const Vector& p, const Quaternion& q)
{
	const char   __FUNCTION__; // 50761
	b3Quat rotation; // 416
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 410
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 411
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 410
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 411
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 413
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 413
	b3DotQuat(b3Quat a,
			b3Quat b);  // 441
	{
		float s; // 444
		b3Quat qn; // 445
	}
	b3NormalizeQuat(b3Quat q); // 417
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 381
	CPhysicsBody::GetPosition(); // 422
	Vector::operator==(
			const Vector& src);  // 422
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 21
	B3Cast<Quaternion, b3Quat>(const b3Quat& v); // 405
	CPhysicsBody::GetOrientation(); // 422
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 21
	B3Cast<Quaternion, b3Quat>(const b3Quat& v); // 422
	Quaternion::operator==(
			const Quaternion& src);  // 422
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 425
} /* size: 0, variables: 2, inline expansions: 47 (670 bytes) */

// <00BACB94> vphysics2/physicsbody.cpp:428
// function calls: 12
void CPhysicsBody::SetTransform(const CTransform& tm)
{
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 430
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 350
	CTransform::ToQuaternion(); // 430
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 430
} /* size: 121, inline expansions: 12 (26 bytes) */

// <00BB24F7> vphysics2/physicsbody.cpp:433
// variable: 1
// function calls: 13
void CPhysicsBody::GetTransform()
{
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 21
	B3Cast<Quaternion, b3Quat>(const b3Quat& v); // 71
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 71
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
			float flScale);  // 71
	B3Cast<CTransform, b3Transform>(const b3Transform& v); // 435
} /* size: 119, inline expansions: 12 (182 bytes) */

// <00BACB7B> vphysics2/physicsbody.cpp:433
void CPhysicsBody::GetTransform()
{
} /* size: 0 */

// <00BAC979> vphysics2/physicsbody.cpp:438
// variables: 4
// function calls: 5
void CPhysicsBody::UpdateSurfaceProperties(const CPhysSurfaceProperties* pSurfaceProperties)
{
	{
		CPhysicsShape* pShape; // 443
		CUtlVectorFixedGrowable<CPhysicsShape*, 1>& __for_range; // 31468
		iterator __for_begin; // 44790
		iterator __for_end; // 44790
		CUtlMemory<CPhysicsShape::Base(); // 112
		CUtlVectorBase<CPhysicsShape::Base(); // 102
		CUtlVectorBase<CPhysicsShape::begin(); // 443
		CUtlVectorBase<CPhysicsShape::Count(); // 104
		CUtlVectorBase<CPhysicsShape::end(); // 443
	}
} /* size: 211 */

// <00BAC878> vphysics2/physicsbody.cpp:455
// variable: 1
// function calls: 3
void CPhysicsBody::SetLinearVelocity(const Vector& v)
{
	b3Vec3 lv; // 457
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 457
} /* size: 80, variables: 1, inline expansions: 3 (26 bytes) */

// <00BAC6FD> vphysics2/physicsbody.cpp:463
// variable: 1
// function calls: 5
void CPhysicsBody::AddLinearVelocity(const Vector& v)
{
	b3Vec3 lv; // 465
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 465
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 468
} /* size: 111, variables: 1, inline expansions: 5 (54 bytes) */

// <00BAC637> vphysics2/physicsbody.cpp:471
// function calls: 2
void CPhysicsBody::GetLinearVelocity()
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 473
} /* size: 23, inline expansions: 2 (0 bytes) */

// <00BAC4B1> vphysics2/physicsbody.cpp:476
// variable: 1
// function calls: 5
void CPhysicsBody::GetVelocityAtPoint(const Vector& vWorldPoint)
{
	b3Vec3 p; // 478
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 478
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 481
} /* size: 118, variables: 1, inline expansions: 5 (48 bytes) */

// <00BAC3B1> vphysics2/physicsbody.cpp:484
// variable: 1
// function calls: 3
void CPhysicsBody::SetAngularVelocity(const Vector& w)
{
	b3Vec3 v; // 486
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 486
} /* size: 80, variables: 1, inline expansions: 3 (26 bytes) */

// <00BAC237> vphysics2/physicsbody.cpp:492
// variable: 1
// function calls: 5
void CPhysicsBody::AddAngularVelocity(const Vector& w)
{
	b3Vec3 v; // 494
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 494
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 497
} /* size: 111, variables: 1, inline expansions: 5 (54 bytes) */

// <00BAC171> vphysics2/physicsbody.cpp:500
// function calls: 2
void CPhysicsBody::GetAngularVelocity()
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 502
} /* size: 23, inline expansions: 2 (0 bytes) */

// <00BAC0F6> vphysics2/physicsbody.cpp:505
void CPhysicsBody::SetLinearDamping(float d)
{
} /* size: 59 */

// <00BAC0B4> vphysics2/physicsbody.cpp:512
void CPhysicsBody::GetLinearDamping()
{
} /* size: 13 */

// <00BAC039> vphysics2/physicsbody.cpp:517
void CPhysicsBody::SetAngularDamping(float d)
{
} /* size: 59 */

// <00BABFF7> vphysics2/physicsbody.cpp:524
void CPhysicsBody::GetAngularDamping()
{
} /* size: 13 */

// <00BABEF1> vphysics2/physicsbody.cpp:529
// variable: 1
// function calls: 3
void CPhysicsBody::ApplyLinearImpulse(const Vector& P)
{
	b3Vec3 p; // 531
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 531
} /* size: 85, variables: 1, inline expansions: 3 (26 bytes) */

// <00BABD20> vphysics2/physicsbody.cpp:537
// variables: 2
// function calls: 6
void CPhysicsBody::ApplyLinearImpulseAtWorldSpace(const Vector& P, const Vector& vWorldSpace)
{
	b3Vec3 p; // 539
	b3Vec3 w; // 542
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 539
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 542
} /* size: 137, variables: 2, inline expansions: 6 (52 bytes) */

// <00BABC1A> vphysics2/physicsbody.cpp:548
// variable: 1
// function calls: 3
void CPhysicsBody::ApplyAngularImpulse(const Vector& L)
{
	b3Vec3 v; // 550
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 550
} /* size: 85, variables: 1, inline expansions: 3 (26 bytes) */

// <00BABB14> vphysics2/physicsbody.cpp:556
// variable: 1
// function calls: 3
void CPhysicsBody::ApplyForce(const Vector& F)
{
	b3Vec3 v; // 558
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 558
} /* size: 85, variables: 1, inline expansions: 3 (26 bytes) */

// <00BAB941> vphysics2/physicsbody.cpp:564
// variables: 2
// function calls: 6
void CPhysicsBody::ApplyForceAt(const Vector& vWorldspaceForce, const Vector& vWorldspacePosition)
{
	b3Vec3 f; // 566
	b3Vec3 p; // 569
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 566
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 569
} /* size: 137, variables: 2, inline expansions: 6 (52 bytes) */

// <00BAB83B> vphysics2/physicsbody.cpp:575
// variable: 1
// function calls: 3
void CPhysicsBody::ApplyTorque(const Vector& M)
{
	b3Vec3 m; // 577
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 577
} /* size: 85, variables: 1, inline expansions: 3 (26 bytes) */

// <00BAB7F3> vphysics2/physicsbody.cpp:583
void CPhysicsBody::ClearForces()
{
} /* size: 18 */

// <00BAB7AB> vphysics2/physicsbody.cpp:588
void CPhysicsBody::ClearTorque()
{
} /* size: 18 */

// <00BAB763> vphysics2/physicsbody.cpp:593
void CPhysicsBody::EnableAutoSleeping()
{
} /* size: 18 */

// <00BAB71B> vphysics2/physicsbody.cpp:598
void CPhysicsBody::DisableAutoSleeping()
{
} /* size: 15 */

// <00BAB6D9> vphysics2/physicsbody.cpp:603
void CPhysicsBody::IsAutoSleepingEnabled()
{
} /* size: 13 */

// <00BAB691> vphysics2/physicsbody.cpp:608
void CPhysicsBody::Sleep()
{
} /* size: 15 */

// <00BB2D0B> vphysics2/physicsbody.cpp:613
// function calls: 2
void CPhysicsBody::Wake()
{
	CPhysicsBody::GetType(); // 615
	CPhysicsBody::Wake(); // 613
} /* size: 92, inline expansions: 2 (40 bytes) */

// <00BAB678> vphysics2/physicsbody.cpp:613
void CPhysicsBody::Wake()
{
} /* size: 0 */

// <00BAB2D8> vphysics2/physicsbody.cpp:621
// variables: 5
// function calls: 12
void CPhysicsBody::WakeConnected()
{
	CUtlVector<b3ContactData, CUtlMemory<b3ContactData, int> > contactData; // 623
	int contactCount; // 625
	{
		int i; // 627
		{
			const b3ContactData& contact; // 629
			b3BodyId bodyId; // 630
			CUtlMemory<b3ContactData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<b3ContactData, CUtlMemory<b3ContactData, int> >::operator[](
					int i);  // 629
		}
	}
	CUtlMemory<b3ContactData, int>::ValidateGrowSize(); // 475
	CUtlMemory<b3ContactData, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<b3ContactData, CUtlMemory<b3ContactData, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<b3ContactData, CUtlMemory<b3ContactData, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<b3ContactData, CUtlMemory<b3ContactData, int> >::CUtlVector(); // 623
	CUtlMemory<b3ContactData, int>::Purge(); // 903
	CUtlMemory<b3ContactData, int>::Purge(); // 1799
	CUtlVectorBase<b3ContactData, CUtlMemory<b3ContactData, int> >::Purge(); // 560
	CUtlVectorBase<b3ContactData, CUtlMemory<b3ContactData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<b3ContactData, CUtlMemory<b3ContactData, int> >::~CUtlVector(); // 633
} /* size: 257, variables: 2, inline expansions: 10 (272 bytes) */

// <00BAB296> vphysics2/physicsbody.cpp:635
void CPhysicsBody::IsSleeping()
{
} /* size: 22 */

// <00BAB112> vphysics2/physicsbody.cpp:640
// variable: 1
// function calls: 5
void CPhysicsBody::TransformPointToLocal(const Vector& p)
{
	b3Vec3 v; // 642
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 642
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 645
} /* size: 118, variables: 1, inline expansions: 5 (48 bytes) */

// <00BAAF8E> vphysics2/physicsbody.cpp:648
// variable: 1
// function calls: 5
void CPhysicsBody::TransformPointToWorld(const Vector& p)
{
	b3Vec3 v; // 650
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 650
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 653
} /* size: 118, variables: 1, inline expansions: 5 (48 bytes) */

// <00BAAE0D> vphysics2/physicsbody.cpp:656
// variables: 4
// function calls: 5
void CPhysicsBody::SetMaterial(const RnMaterial_t& material)
{
	{
		CPhysicsShape* pShape; // 658
		CUtlVectorFixedGrowable<CPhysicsShape*, 1>& __for_range; // 31468
		iterator __for_begin; // 44790
		iterator __for_end; // 44790
		CUtlMemory<CPhysicsShape::Base(); // 112
		CUtlVectorBase<CPhysicsShape::Base(); // 102
		CUtlVectorBase<CPhysicsShape::begin(); // 658
		CUtlVectorBase<CPhysicsShape::Count(); // 104
		CUtlVectorBase<CPhysicsShape::end(); // 658
	}
} /* size: 72 */

// <00BAABC7> vphysics2/physicsbody.cpp:664
// variables: 5
// function calls: 6
void CPhysicsBody::SetMaterialIndex(CUtlStringToken nMaterialIndex)
{
	RnMaterial_t material; // 666
	{
		CPhysicsShape* pShape; // 669
		CUtlVectorFixedGrowable<CPhysicsShape*, 1>& __for_range; // 31468
		iterator __for_begin; // 44790
		iterator __for_end; // 44790
		CUtlMemory<CPhysicsShape::Base(); // 112
		CUtlVectorBase<CPhysicsShape::Base(); // 102
		CUtlVectorBase<CPhysicsShape::begin(); // 669
		CUtlVectorBase<CPhysicsShape::Count(); // 104
		CUtlVectorBase<CPhysicsShape::end(); // 669
	}
	RnMaterial_t::RnMaterial_t(); // 666
} /* size: 165, variables: 1, inline expansions: 1 (33 bytes) */

// <00BAAA46> vphysics2/physicsbody.cpp:676
// variables: 4
// function calls: 5
void CPhysicsBody::SetCollisionAttributes(const RnCollisionAttr_t& attributes)
{
	{
		CPhysicsShape* pShape; // 678
		CUtlVectorFixedGrowable<CPhysicsShape*, 1>& __for_range; // 31468
		iterator __for_begin; // 44790
		iterator __for_end; // 44790
		CUtlMemory<CPhysicsShape::Base(); // 112
		CUtlVectorBase<CPhysicsShape::Base(); // 102
		CUtlVectorBase<CPhysicsShape::begin(); // 678
		CUtlVectorBase<CPhysicsShape::Count(); // 104
		CUtlVectorBase<CPhysicsShape::end(); // 678
	}
} /* size: 72 */

// <00BAA9B7> vphysics2/physicsbody.cpp:684
// function calls: 2
void CPhysicsBody::GetDebugName()
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 686
} /* size: 23, inline expansions: 2 (36 bytes) */

// <00BAA91D> vphysics2/physicsbody.cpp:689
// function call: 1
void CPhysicsBody::SetDebugName(const char* pName)
{
	CUtlString::operator=(
			const char* src);  // 691
} /* size: 13, inline expansions: 1 (5 bytes) */

// <00BAA904> vphysics2/physicsbody.cpp:694
void CPhysicsBody::GetName()
{
} /* size: 0 */

// <00BAA8C6> vphysics2/physicsbody.cpp:699
void CPhysicsBody::SetAggregateInstance(void* pAggregate)
{
} /* size: 9 */

// <00BAA893> vphysics2/physicsbody.cpp:704
void* CPhysicsBody::GetAggregateInstance()
{
} /* size: 9 */

// <00BAA6D7> vphysics2/physicsbody.cpp:709
// variables: 2
// function calls: 5
void CPhysicsBody::GetClosestPoint(const Vector& vPoint)
{
	b3Vec3 p; // 711
	b3Vec3 result; // 714
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 711
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 716
} /* size: 160, variables: 2, inline expansions: 5 (64 bytes) */

// <00BAA6BE> vphysics2/physicsbody.cpp:719
void CPhysicsBody::GetVelocity()
{
} /* size: 0 */

// <00BAA51A> vphysics2/physicsbody.cpp:724
// variables: 6
// function calls: 5
void CPhysicsBody::GetDensity()
{
	int count; // 726
	float density; // 730
	{
		CPhysicsShape* pShape; // 731
		CUtlVectorFixedGrowable<CPhysicsShape*, 1>& __for_range; // 31468
		iterator __for_begin; // 44790
		iterator __for_end; // 44790
		CUtlMemory<CPhysicsShape::Base(); // 112
		CUtlVectorBase<CPhysicsShape::Base(); // 102
		CUtlVectorBase<CPhysicsShape::begin(); // 731
		CUtlVectorBase<CPhysicsShape::end(); // 731
	}
	CUtlVectorBase<CPhysicsShape::Count(); // 726
} /* size: 150, variables: 2, inline expansions: 1 (4 bytes) */

// <00BAA446> vphysics2/physicsbody.cpp:739
// variables: 2
IPhysicsShape* CreateNullShape(b3BodyId id)
{
	b3ShapeDef def; // 741
	b3Sphere sphere; // 744
} /* size: 166, variables: 2 */

// <00BAA222> vphysics2/physicsbody.cpp:748
// variables: 2
// function calls: 4
void CPhysicsBody::AddSphereShape(const Vector& vCenter, float flRadius)
{
	b3ShapeDef def; // 750
	b3Sphere sphere; // 755
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 755
} /* size: 219, variables: 2, inline expansions: 4 (0 bytes) */

// <00BA9F6F> vphysics2/physicsbody.cpp:759
// variables: 2
// function calls: 7
void CPhysicsBody::AddCapsuleShape(const Vector& vCenter1, const Vector& vCenter2, float flRadius)
{
	b3ShapeDef def; // 761
	b3Capsule capsule; // 766
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 766
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 766
} /* size: 247, variables: 2, inline expansions: 7 (8 bytes) */

// <00BA9D00> vphysics2/physicsbody.cpp:770
// variables: 3
// function calls: 6
void CPhysicsBody::AddBoxShape(const Vector& vCenter, const Vector& vExtents)
{
	b3ShapeDef def; // 772
	b3Transform transform; // 777
	b3BoxHull hull; // 778
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 777
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 778
} /* size: 290, variables: 3, inline expansions: 6 (14 bytes) */

// <00BA8816> vphysics2/physicsbody.cpp:782
// variables: 11
// function calls: 84
void CPhysicsBody::AddHullShape(const RnHull_t* pHull, float flScale)
{
	b3Hull* hull; // 789
	int vertexCount; // 791
	int edgeCount; // 792
	int faceCount; // 793
	b3ShapeDef def; // 842
	CPhysicsShape* pShape; // 847
	{
		b3Vec3* points; // 821
		b3Plane* planes; // 827
		{
			int i; // 822
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 824
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 824
		}
		{
			int i; // 828
			CUtlMemory<RnPlane_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::operator[](
					int i);  // 830
			Vector::operator[](
					int i);  // 31
			Vector::operator[](
					int i);  // 31
			B3Cast<b3Vec3, Vector>(const Vector& v); // 830
			CUtlMemory<RnPlane_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::operator[](
					int i);  // 831
		}
		{
			int nVert; // 1712
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1712
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 1714
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1714
			AABB_t::AddPointToBounds(
					const Vector& vPoint);  // 83
			AABB_t::operator|=(
					const Vector& vPoint);  // 1714
		}
		Vector::Vector(); // 24
		Vector::Vector(); // 24
		AABB_t::AABB_t(); // 1709
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 138
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 139
		AABB_t::MakeInvalid(); // 1710
		RnHull_t::GetBbox(
			float flScale);  // 812
		Vector::operator[](
				int i);  // 31
		B3Cast<b3Vec3, Vector>(const Vector& v); // 46
		Vector::operator[](
				int i);  // 31
		B3Cast<b3Vec3, Vector>(const Vector& v); // 46
		B3Cast<b3AABB, AABB_t>(const AABB_t& v); // 812
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 814
		B3Cast<b3Matrix3, matrix3x4_t>(const matrix3x4_t& v); // 815
		b3MulSM(float s,
			b3Matrix3 a);  // 815
		CUtlMemory<unsigned char, int>::Base(); // 113
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 817
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 817
		CUtlMemory<RnHalfEdge_t, int>::Base(); // 113
		CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Base(); // 818
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 818
		CUtlMemory<RnFace_t, int>::Base(); // 113
		CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Base(); // 819
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 819
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 135
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::IsEmpty(); // 784
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Count(); // 325
	RnHull_t::GetEdgeCount(); // 792
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 46
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 46
	B3Cast<b3AABB, AABB_t>(const AABB_t& v); // 798
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 800
	B3Cast<b3Matrix3, matrix3x4_t>(const matrix3x4_t& v); // 801
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 803
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 803
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 804
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 804
	CUtlMemory<RnHalfEdge_t, int>::Base(); // 113
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Base(); // 805
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 805
	CUtlMemory<RnFace_t, int>::Base(); // 113
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Base(); // 806
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 806
	CUtlMemory<RnPlane_t, int>::Base(); // 113
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Base(); // 807
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 807
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Count(); // 327
	RnHull_t::GetFaceCount(); // 793
} /* size: 1617, variables: 6, inline expansions: 35 (363 bytes) */

// <00BA5C3B> vphysics2/physicsbody.cpp:853
// variables: 4
// function calls: 207
void CPhysicsBody::AddBoxShape(const Vector& position, const Quaternion& rotation, const Vector& extent)
{
	Vector vertices; // 855
	b3Hull* hull; // 867
	b3ShapeDef def; // 873
	CPhysicsShape* pShape; // 878
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 857
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 857
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 857
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 858
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 2464
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 858
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 858
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 859
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 2464
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 859
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 860
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 859
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 860
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 861
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 862
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 860
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 861
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 861
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 862
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 864
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 862
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 863
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 863
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 863
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 864
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 864
} /* size: 1843, variables: 4, inline expansions: 207 (4771 bytes) */

// <00BA5613> vphysics2/physicsbody.cpp:883
// variables: 6
// function calls: 19
void CPhysicsBody::AddHullShape(const Vector& position, const Quaternion& rotation, int nVertexCount, const Vector* pvVertexBase)
{
	matrix3x4_t transform; // 885
	CUtlVector<Vector, CUtlMemory<Vector, int> > vertices; // 888
	b3Hull* hull; // 895
	b3ShapeDef def; // 901
	CPhysicsShape* pShape; // 906
	{
		int nVertex; // 890
		Vector::Vector(); // 1306
		VectorTransform(const Vector& in1,
				const matrix3x4_t& in2,
				Vector& out);  // 1307
		VectorTransform(const Vector& in1,
				const matrix3x4_t& in2);  // 892
		Vector::operator=(
				const Vector& vOther);  // 892
	}
	matrix3x4_t::matrix3x4_t(); // 885
	matrix3x4_t::InitFromQuaternion(
				const Quaternion& orientation,
				const Vector& vPosition);  // 886
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 888
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 909
} /* size: 466, variables: 5, inline expansions: 15 (234 bytes) */

// <00BA4B5D> vphysics2/physicsbody.cpp:911
// variables: 12
// function calls: 36
void CPhysicsBody::AddHullShape(RnHull_t* pHull, const CTransformUnaligned& xform)
{
	const float  flMinScale; // 913
	Vector vScale; // 915
	const float  flScaleTolerance; // 920
	bool bHasNonUniformScale; // 921
	Quaternion q; // 923
	matrix3x4_t transform; // 929
	int nVertexCount; // 932
	CUtlVector<Vector, CUtlMemory<Vector, int> > vertices; // 933
	b3Hull* hull; // 940
	b3ShapeDef def; // 946
	CPhysicsShape* pShape; // 951
	{
		int nVertex; // 935
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 321
		RnHull_t::GetVertex(
				int nVertex);  // 937
		VectorMultiply(const Vector& a,
				const Vector& b,
				Vector& c);  // 1458
		Vector::Vector(); // 1457
		Vector::operator*(
				const Vector& v);  // 937
		VectorTransform(const Vector& in1,
				const matrix3x4_t& in2,
				Vector& out);  // 1307
		Vector::Vector(); // 1306
		VectorTransform(const Vector& in1,
				const matrix3x4_t& in2);  // 937
		Vector::operator=(
				const Vector& vOther);  // 937
	}
	FloatsAreEqual(float f1,
			float f2,
			float flTolerance);  // 921
	fabs(float __x); // 916
	Sign(float x); // 916
	fabs(float __x); // 917
	Sign(float x); // 917
	fabs(float __x); // 918
	Sign(float x); // 918
	matrix3x4_t::InitFromQuaternion(
				const Quaternion& orientation,
				const Vector& vPosition);  // 930
	matrix3x4_t::matrix3x4_t(); // 929
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 320
	RnHull_t::GetVertexCount(); // 932
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 933
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 954
	FloatsAreEqual(float f1,
			float f2,
			float flTolerance);  // 921
	Vector::IsZero(
		float tolerance);  // 924
} /* size: 1628, variables: 11, inline expansions: 26 (951 bytes) */

// <00BA42B6> vphysics2/physicsbody.cpp:956
// variables: 9
// function calls: 33
void CPhysicsBody::AddHullShape(RnMesh_t* mesh, const CTransformUnaligned& xform)
{
	const float  flMinScale; // 958
	Vector vScale; // 959
	matrix3x4_t transform; // 964
	int nVertexCount; // 967
	CUtlVector<Vector, CUtlMemory<Vector, int> > vertices; // 968
	b3Hull* hull; // 975
	b3ShapeDef def; // 981
	CPhysicsShape* pShape; // 986
	{
		int nVertex; // 970
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 651
		RnMesh_t::GetVertex(
				int nVertex);  // 972
		VectorTransform(const Vector& in1,
				const matrix3x4_t& in2,
				Vector& out);  // 1307
		Vector::Vector(); // 1306
		VectorTransform(const Vector& in1,
				const matrix3x4_t& in2);  // 972
		VectorMultiply(const Vector& a,
				const Vector& b,
				Vector& c);  // 1458
		Vector::Vector(); // 1457
		Vector::operator*(
				const Vector& v);  // 972
		Vector::operator=(
				const Vector& vOther);  // 972
	}
	fabs(float __x); // 960
	Sign(float x); // 960
	fabs(float __x); // 961
	matrix3x4_t::InitFromQuaternion(
				const Quaternion& orientation,
				const Vector& vPosition);  // 965
	Sign(float x); // 961
	fabs(float __x); // 962
	Sign(float x); // 962
	matrix3x4_t::matrix3x4_t(); // 964
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 650
	RnMesh_t::GetVertexCount(); // 967
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 968
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 989
} /* size: 746, variables: 8, inline expansions: 23 (271 bytes) */

// <00BA31B4> vphysics2/physicsbody.cpp:991
// variables: 16
// function calls: 62
void CPhysicsBody::AddMeshShape(const RnMesh_t* pMesh, const Vector& vScale, int nMaterialCount)
{
	int nNodeCount; // 996
	int nVertexCount; // 1000
	int nTriangleCount; // 1004
	b3MeshData* meshData; // 1008
	const char   __FUNCTION__; // 50761
	b3MeshNode* nodes; // 1016
	b3ShapeDef def; // 1047
	CUtlVector<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> > surfaceMaterials; // 1054
	CPhysicsShape* pShape; // 1066
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1015
	}
	{
		int i; // 1017
		{
			const RnNode_t& src; // 1019
			b3MeshNode& node; // 1020
			uint32_t nChildren; // 1028
			CUtlMemory<RnNode_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::operator[](
					int i);  // 1019
			Vector::operator[](
					int i);  // 1021
			Vector::operator[](
					int i);  // 1022
			Vector::operator[](
					int i);  // 1023
			Vector::operator[](
					int i);  // 1024
			Vector::operator[](
					int i);  // 1025
			Vector::operator[](
					int i);  // 1026
		}
	}
	{
		int i; // 1058
		CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<b3SurfaceMaterial, int>::operator[](
				int i);  // 602
		CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::Element(
			int i);  // 1252
		Construct<b3SurfaceMaterial, b3SurfaceMaterial>(b3SurfaceMaterial* pMemory); // 1252
		CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::AddToTail(
				b3SurfaceMaterial& src);  // 1060
	}
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Count(); // 996
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 650
	RnMesh_t::GetVertexCount(); // 1000
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 652
	RnMesh_t::GetTriangleCount(); // 1004
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 1865
	Vector::operator=(
			const Vector& vOther);  // 1866
	Vector::operator=(
			const Vector& vOther);  // 1867
	RnMesh_t::GetBbox(); // 1009
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 1010
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1010
	CUtlMemory<RnTriangle_t, int>::Base(); // 113
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Base(); // 1013
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1013
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 1033
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 1038
	CUtlMemory<b3SurfaceMaterial, int>::ValidateGrowSize(); // 475
	CUtlMemory<b3SurfaceMaterial, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::CUtlVector(); // 1054
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 1066
	CUtlMemory<b3SurfaceMaterial, int>::Purge(); // 903
	CUtlMemory<b3SurfaceMaterial, int>::Purge(); // 1799
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::Purge(); // 560
	ValidateAlignment<b3SurfaceMaterial>(void); // 508
	CUtlMemory<b3SurfaceMaterial, int>::Purge(); // 510
	CUtlMemory<b3SurfaceMaterial, int>::~CUtlMemory(); // 562
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::~CUtlVectorBase(); // 410
	CUtlVector<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::~CUtlVector(); // 1069
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 1040
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 1040
	CUtlMemory<b3SurfaceMaterial, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::EnsureCapacity(
			int num);  // 1057
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 1035
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1035
} /* size: 1283, variables: 9, inline expansions: 48 (661 bytes) */

// <00BB3C79> vphysics2/physicsbody.cpp:1071
// variables: 6
// function calls: 23
void CPhysicsBody::AddMeshShape(int nVertexCount, const Vector* pVertexBase, int nIndexCount, const uint32* pIndexBase, int nMaterialCount)
{
	b3MeshDef meshDef; // 1078
	b3MeshData* meshData; // 1086
	b3ShapeDef def; // 1092
	CUtlVector<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> > surfaceMaterials; // 1099
	CPhysicsShape* pShape; // 1111
	CUtlMemory<b3SurfaceMaterial, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::EnsureCapacity(
			int num);  // 1102
	{
		int i; // 1103
		CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<b3SurfaceMaterial, int>::operator[](
				int i);  // 602
		CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::Element(
			int i);  // 1252
		Construct<b3SurfaceMaterial, b3SurfaceMaterial>(b3SurfaceMaterial* pMemory); // 1252
		CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::AddToTail(
				b3SurfaceMaterial& src);  // 1105
	}
	CUtlMemory<b3SurfaceMaterial, int>::ValidateGrowSize(); // 475
	CUtlMemory<b3SurfaceMaterial, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::CUtlVector(); // 1099
	CUtlMemory<b3SurfaceMaterial, int>::Purge(); // 903
	CUtlMemory<b3SurfaceMaterial, int>::Purge(); // 1799
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::Purge(); // 560
	ValidateAlignment<b3SurfaceMaterial>(void); // 508
	CUtlMemory<b3SurfaceMaterial, int>::Purge(); // 510
	CUtlMemory<b3SurfaceMaterial, int>::~CUtlMemory(); // 562
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::~CUtlVectorBase(); // 410
	CUtlVector<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::~CUtlVector(); // 1114
	CPhysicsBody::AddMeshShape(
			int nVertexCount,
			const Vector* pVertexBase,
			int nIndexCount,
			const uint32* pIndexBase,
			int nMaterialCount);  // 1071
} /* size: 933, variables: 5, inline expansions: 17 (1059 bytes) */

// <00BA310C> vphysics2/physicsbody.cpp:1071
// variables: 6
void CPhysicsBody::AddMeshShape(int nVertexCount, const Vector* pVertexBase, int nIndexCount, const uint32* pIndexBase, int nMaterialCount)
{
	b3MeshDef meshDef; // 1078
	b3MeshData* meshData; // 1086
	b3ShapeDef def; // 1092
	CUtlVector<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> > surfaceMaterials; // 1099
	CPhysicsShape* pShape; // 1111
	{
		int i; // 1103
	}
} /* size: 0, variables: 5 */

// <00BA1981> vphysics2/physicsbody.cpp:1116
// variables: 19
// function calls: 94
void CPhysicsBody::AddMeshShape(RnMesh_t* mesh, const CTransformUnaligned& xform, int nMaterialCount)
{
	const float  flMinScale; // 1118
	Vector vScale; // 1119
	const char   __FUNCTION__; // 50761
	Quaternion q; // 1136
	matrix3x4_t transform; // 1142
	int nVertexCount; // 1147
	int nTriangleCount; // 1148
	CUtlVector<Vector, CUtlMemory<Vector, int> > vertices; // 1149
	b3MeshDef meshDef; // 1156
	b3MeshData* meshData; // 1173
	b3ShapeDef def; // 1179
	CUtlVector<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> > surfaceMaterials; // 1186
	CPhysicsShape* pShape; // 1198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1126
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1132
	}
	{
		int nVertex; // 1151
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 651
		RnMesh_t::GetVertex(
				int nVertex);  // 1153
		VectorMultiply(const Vector& a,
				const Vector& b,
				Vector& c);  // 1458
		Vector::Vector(); // 1457
		Vector::operator*(
				const Vector& v);  // 1153
		VectorTransform(const Vector& in1,
				const matrix3x4_t& in2,
				Vector& out);  // 1307
		Vector::Vector(); // 1306
		VectorTransform(const Vector& in1,
				const matrix3x4_t& in2);  // 1153
		Vector::operator=(
				const Vector& vOther);  // 1153
	}
	{
		int i; // 1190
		CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<b3SurfaceMaterial, int>::operator[](
				int i);  // 602
		CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::Element(
			int i);  // 1252
		Construct<b3SurfaceMaterial, b3SurfaceMaterial>(b3SurfaceMaterial* pMemory); // 1252
		CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::AddToTail(
				b3SurfaceMaterial& src);  // 1192
	}
	fabs(float __x); // 1120
	Sign(float x); // 1120
	fabs(float __x); // 1121
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 1124
	Sign(float x); // 1121
	fabs(float __x); // 1122
	Sign(float x); // 1122
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 141
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 141
	CTransformUnaligned::IsValid(); // 1130
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 1137
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 652
	RnMesh_t::GetTriangleCount(); // 1137
	Vector::IsZero(
		float tolerance);  // 1137
	matrix3x4_t::matrix3x4_t(); // 1142
	matrix3x4_t::InitFromQuaternion(
				const Quaternion& orientation,
				const Vector& vPosition);  // 1143
	{
		int i; // 180
		{
			int j; // 182
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 184
		}
	}
	matrix3x4_t::IsValid(); // 1144
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 650
	RnMesh_t::GetVertexCount(); // 1147
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 652
	RnMesh_t::GetTriangleCount(); // 1148
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 1149
	CUtlMemory<RnTriangle_t, int>::Base(); // 112
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Base(); // 1158
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 1164
	CUtlMemory<b3SurfaceMaterial, int>::ValidateGrowSize(); // 475
	CUtlMemory<b3SurfaceMaterial, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::CUtlVector(); // 1186
	CUtlMemory<b3SurfaceMaterial, int>::Purge(); // 903
	CUtlMemory<b3SurfaceMaterial, int>::Purge(); // 1799
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::Purge(); // 560
	ValidateAlignment<b3SurfaceMaterial>(void); // 508
	CUtlMemory<b3SurfaceMaterial, int>::Purge(); // 510
	CUtlMemory<b3SurfaceMaterial, int>::~CUtlMemory(); // 562
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::~CUtlVectorBase(); // 410
	CUtlVector<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::~CUtlVector(); // 1201
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1201
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 1166
	CUtlMemory<b3SurfaceMaterial, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::EnsureCapacity(
			int num);  // 1189
	matrix3x4_t::SetToIdentity(); // 1145
} /* size: 0, variables: 13, inline expansions: 76 (1166 bytes) */

// <00BA07BB> vphysics2/physicsbody.cpp:1203
// variables: 16
// function calls: 62
void CPhysicsBody::AddHeightFieldShape(uint16_t* pHeights, uint8_t* pMaterials, int sizeX, int sizeY, float sizeScale, float heightScale, int nMaterialCount)
{
	b3ShapeDef def; // 1205
	CUtlVector<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> > surfaceMaterials; // 1211
	int columnCount; // 1223
	int rowCount; // 1224
	int heightCount; // 1225
	CUtlVector<float, CUtlMemory<float, int> > heights; // 1227
	int cellCount; // 1238
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > materials; // 1240
	b3HeightFieldDef data; // 1251
	b3HeightField* heightField; // 1261
	CPhysicsShape* pShape; // 1262
	{
		int i; // 1215
		CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<b3SurfaceMaterial, int>::operator[](
				int i);  // 602
		CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::Element(
			int i);  // 1252
		Construct<b3SurfaceMaterial, b3SurfaceMaterial>(b3SurfaceMaterial* pMemory); // 1252
		CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::AddToTail(
				b3SurfaceMaterial& src);  // 1217
	}
	{
		int i; // 1230
		{
			int j; // 1232
		}
	}
	{
		int i; // 1243
		{
			int j; // 1245
		}
	}
	CUtlMemory<b3SurfaceMaterial, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::EnsureCapacity(
			int num);  // 1214
	CUtlMemory<b3SurfaceMaterial, int>::ValidateGrowSize(); // 475
	CUtlMemory<b3SurfaceMaterial, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::CUtlVector(); // 1211
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 1227
	CUtlMemory<float, int>::Grow(
		int num);  // 806
	CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<float, CUtlMemory<float, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount(
		int count);  // 1228
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 1240
	CUtlMemory<unsigned char, int>::Grow(
		int num);  // 806
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::SetCount(
		int count);  // 1241
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 1266
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 1266
	CUtlMemory<b3SurfaceMaterial, int>::Purge(); // 903
	CUtlMemory<b3SurfaceMaterial, int>::Purge(); // 1799
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::Purge(); // 560
	ValidateAlignment<b3SurfaceMaterial>(void); // 508
	CUtlMemory<b3SurfaceMaterial, int>::Purge(); // 510
	CUtlMemory<b3SurfaceMaterial, int>::~CUtlMemory(); // 562
	CUtlVectorBase<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::~CUtlVectorBase(); // 410
	CUtlVector<b3SurfaceMaterial, CUtlMemory<b3SurfaceMaterial, int> >::~CUtlVector(); // 1266
} /* size: 1566, variables: 11, inline expansions: 56 (1614 bytes) */

// <00B9FC4A> vphysics2/physicsbody.cpp:1268
// variables: 15
// function calls: 47
void CPhysicsBody::CheckOverlap(IPhysicsBody* pBody, const CTransform& xform)
{
	b3BodyId bodyId; // 1270
	b3Transform bodyTransform; // 1271
	b3Vec3 hullPoints; // 1272
	{
		const CPhysicsShape* pShape; // 1274
		CUtlVectorFixedGrowable<CPhysicsShape*, 1>& __for_range; // 31468
		iterator __for_begin; // 44790
		iterator __for_end; // 44790
		{
			b3ShapeId shapeId; // 1276
			b3ShapeType shapeType; // 1277
			const b3Hull* hull; // 1282
			const b3Vec3* points; // 1283
			b3ShapeProxy shapeProxy; // 1299
			{
				b3Capsule capsule; // 1305
			}
			{
				b3Sphere sphere; // 1313
			}
			{
				int i; // 1322
				b3Cross(b3Vec3 a,
					b3Vec3 b);  // 389
				b3MulAdd(b3Vec3 a,
					float s,
					b3Vec3 b);  // 390
				b3Cross(b3Vec3 a,
					b3Vec3 b);  // 391
				b3MulAdd(b3Vec3 a,
					float s,
					b3Vec3 b);  // 392
				b3RotateVector(b3Quat q,
						b3Vec3 v);  // 566
				b3Add(b3Vec3 a,
					b3Vec3 b);  // 567
				b3TransformPoint(b3Transform t,
						b3Vec3 v);  // 1324
			}
			VectorAligned::operator fltx4(); // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 61
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			VectorAligned::x(); // 288
			VectorAligned::operator[](
					int index);  // 36
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			VectorAligned::y(); // 289
			VectorAligned::operator[](
					int index);  // 36
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 290
			VectorAligned::operator[](
					int index);  // 36
			B3Cast<b3Vec3, VectorAligned>(const VectorAligned& v); // 61
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 77
			QuaternionAligned::w(); // 41
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			QuaternionAligned::z(); // 41
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			QuaternionAligned::y(); // 41
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			QuaternionAligned::x(); // 41
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 350
			CTransform::ToQuaternion(); // 61
			B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 61
			B3Cast<b3Transform, CTransform>(const CTransform& v); // 1337
			b3GetHullPoints(const b3Hull* hull); // 1294
		}
		CUtlMemory<CPhysicsShape::Base(); // 112
		CUtlVectorBase<CPhysicsShape::Base(); // 102
		CUtlVectorBase<CPhysicsShape::begin(); // 1274
		CUtlVectorBase<CPhysicsShape::Count(); // 104
		CUtlVectorBase<CPhysicsShape::end(); // 1274
	}
	AsBody(const IPhysicsBody* pBody); // 1270
} /* size: 0, variables: 3, inline expansions: 1 (31 bytes) */

// <00B9FAE1> vphysics2/physicsbody.cpp:1344
// variables: 4
// function calls: 5
void CPhysicsBody::EnableTouchEvents()
{
	{
		CPhysicsShape* pShape; // 1346
		CUtlVectorFixedGrowable<CPhysicsShape*, 1>& __for_range; // 31468
		iterator __for_begin; // 44790
		iterator __for_end; // 44790
		CUtlMemory<CPhysicsShape::Base(); // 112
		CUtlVectorBase<CPhysicsShape::Base(); // 102
		CUtlVectorBase<CPhysicsShape::begin(); // 1346
		CUtlVectorBase<CPhysicsShape::Count(); // 104
		CUtlVectorBase<CPhysicsShape::end(); // 1346
	}
} /* size: 54 */

// <00B9F978> vphysics2/physicsbody.cpp:1352
// variables: 4
// function calls: 5
void CPhysicsBody::DisableTouchEvents()
{
	{
		CPhysicsShape* pShape; // 1354
		CUtlVectorFixedGrowable<CPhysicsShape*, 1>& __for_range; // 31468
		iterator __for_begin; // 44790
		iterator __for_end; // 44790
		CUtlMemory<CPhysicsShape::Base(); // 112
		CUtlVectorBase<CPhysicsShape::Base(); // 102
		CUtlVectorBase<CPhysicsShape::begin(); // 1354
		CUtlVectorBase<CPhysicsShape::Count(); // 104
		CUtlVectorBase<CPhysicsShape::end(); // 1354
	}
} /* size: 54 */

// <00B9F80F> vphysics2/physicsbody.cpp:1360
// variables: 4
// function calls: 5
void CPhysicsBody::IsTouchEventEnabled()
{
	{
		CPhysicsShape* pShape; // 1362
		const CUtlVectorFixedGrowable<CPhysicsShape*, 1>& __for_range; // 31117
		const_iterator __for_begin; // 44835
		const_iterator __for_end; // 44835
		CUtlMemory<CPhysicsShape::Base(); // 113
		CUtlVectorBase<CPhysicsShape::Base(); // 103
		CUtlVectorBase<CPhysicsShape::begin(); // 1362
		CUtlVectorBase<CPhysicsShape::Count(); // 105
		CUtlVectorBase<CPhysicsShape::end(); // 1362
	}
} /* size: 71 */

// <00B9F7CD> vphysics2/physicsbody.cpp:1371
void CPhysicsBody::Enable()
{
} /* size: 13 */

// <00B9F749> vphysics2/physicsbody.cpp:1381
void CPhysicsBody::IsEnabled()
{
} /* size: 13 */

// <00B9F4CB> vphysics2/physicsbody.cpp:1386
// variables: 5
// function calls: 7
void CPhysicsBody::SetTargetTransform(const Vector& vTargetPosition, const Quaternion& vTargetAngles, float flTimeOffset)
{
	b3Vec3 position; // 1390
	b3Quat rotation; // 1394
	b3Transform transform; // 1400
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 1390
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 1394
	b3DotQuat(b3Quat a,
			b3Quat b);  // 441
	{
		float s; // 444
		b3Quat qn; // 445
	}
	b3NormalizeQuat(b3Quat q); // 1395
} /* size: 443, variables: 3, inline expansions: 7 (252 bytes) */

// <00B9F404> vphysics2/physicsbody.cpp:1404
// variable: 1
void CPhysicsBody::SetMotionLocks(bool x, bool y, bool z, bool pitch, bool yaw, bool roll)
{
	b3MotionLocks locks; // 1406
} /* size: 67, variables: 1 */

// <00B9F0BA> vphysics2/physicsbody.cpp:1410
// function calls: 13
void CPhysicsBody::OnAddShape(CPhysicsShape* pShape)
{
	CUtlMemory<CPhysicsShape::NumAllocated(); // 1196
	CUtlMemory<CPhysicsShape::Base(); // 112
	CUtlVectorBase<CPhysicsShape::Base(); // 368
	CUtlVectorBase<CPhysicsShape::ResetDbgInfo(); // 824
	CUtlMemory<CPhysicsShape::IsGrowable(); // 823
	CUtlMemory<CPhysicsShape::IsExternallyAllocated(); // 859
	CUtlMemory<CPhysicsShape::IsExternallyAllocated(); // 861
	CUtlMemory<CPhysicsShape::Grow(
		int num);  // 806
	CUtlVectorBase<CPhysicsShape::GrowMemory(
			int num);  // 1198
	CUtlMemory<CPhysicsShape::operator[](
			int i);  // 602
	CUtlVectorBase<CPhysicsShape::Element(
		int i);  // 1201
	CopyConstruct<CPhysicsShape*>(CPhysicsShape** pMemory,
					CPhysicsShape* const& src);  // 1201
	CUtlVectorBase<CPhysicsShape::AddToTail(
			CPhysicsShape* const& src);  // 1415
} /* size: 332, inline expansions: 13 (882 bytes) */

// <00B9EA69> vphysics2/physicsbody.cpp:1420
// variables: 9
// function calls: 21
void CPhysicsBody::IsTouching(IPhysicsBody* pBody, bool bTriggers)
{
	CUtlVector<b3ContactData, CUtlMemory<b3ContactData, int> > contactData; // 1436
	int contactCount; // 1438
	b3BodyId bodyId; // 1439
	{
		CPhysicsShape* pBodyShape; // 1427
		const CUtlVectorFixedGrowable<CPhysicsShape*, 1>& __for_range; // 31117
		const_iterator __for_begin; // 44835
		const_iterator __for_end; // 44835
		CUtlMemory<CPhysicsShape::Base(); // 113
		CUtlVectorBase<CPhysicsShape::Base(); // 103
		CUtlVectorBase<CPhysicsShape::begin(); // 1427
		CUtlVectorBase<CPhysicsShape::Count(); // 105
		CUtlVectorBase<CPhysicsShape::end(); // 1427
	}
	{
		int i; // 1441
		{
			const b3ContactData& contact; // 1443
			CUtlMemory<b3ContactData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<b3ContactData, CUtlMemory<b3ContactData, int> >::operator[](
					int i);  // 1443
		}
	}
	CUtlMemory<b3ContactData, int>::ValidateGrowSize(); // 475
	CUtlMemory<b3ContactData, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<b3ContactData, CUtlMemory<b3ContactData, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<b3ContactData, CUtlMemory<b3ContactData, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<b3ContactData, CUtlMemory<b3ContactData, int> >::CUtlVector(); // 1436
	AsBody(const IPhysicsBody* pBody); // 1439
	CUtlMemory<b3ContactData, int>::Purge(); // 903
	CUtlMemory<b3ContactData, int>::Purge(); // 1799
	CUtlVectorBase<b3ContactData, CUtlMemory<b3ContactData, int> >::Purge(); // 560
	ValidateAlignment<b3ContactData>(void); // 508
	CUtlMemory<b3ContactData, int>::Purge(); // 510
	CUtlMemory<b3ContactData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<b3ContactData, CUtlMemory<b3ContactData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<b3ContactData, CUtlMemory<b3ContactData, int> >::~CUtlVector(); // 1459
} /* size: 575, variables: 3, inline expansions: 14 (264 bytes) */

// <00B9E314> vphysics2/physicsbody.cpp:1461
// variables: 15
// function calls: 25
void CPhysicsBody::IsTouching(IPhysicsShape* pShape, bool bTriggers)
{
	CUtlVector<b3ContactData, CUtlMemory<b3ContactData, int> > contactData; // 1496
	int contactCount; // 1498
	b3ShapeId shapeId; // 1499
	{
		b3ShapeId sensorId; // 1470
		{
			CPhysicsShape* pBodyShape; // 1472
			const CUtlVectorFixedGrowable<CPhysicsShape*, 1>& __for_range; // 31117
			const_iterator __for_begin; // 44835
			const_iterator __for_end; // 44835
			CUtlMemory<CPhysicsShape::Base(); // 113
			CUtlVectorBase<CPhysicsShape::Base(); // 103
			CUtlVectorBase<CPhysicsShape::begin(); // 1472
			CUtlVectorBase<CPhysicsShape::Count(); // 105
			CUtlVectorBase<CPhysicsShape::end(); // 1472
		}
	}
	{
		b3ShapeId shapeId; // 1482
		{
			CPhysicsShape* pBodyShape; // 1484
			const CUtlVectorFixedGrowable<CPhysicsShape*, 1>& __for_range; // 31117
			const_iterator __for_begin; // 44835
			const_iterator __for_end; // 44835
			CUtlMemory<CPhysicsShape::Base(); // 113
			CUtlVectorBase<CPhysicsShape::Base(); // 103
			CUtlVectorBase<CPhysicsShape::begin(); // 1484
			CUtlVectorBase<CPhysicsShape::Count(); // 105
			CUtlVectorBase<CPhysicsShape::end(); // 1484
		}
	}
	{
		int i; // 1501
		{
			const b3ContactData& contact; // 1503
			CUtlMemory<b3ContactData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<b3ContactData, CUtlMemory<b3ContactData, int> >::operator[](
					int i);  // 1503
		}
	}
	CUtlMemory<b3ContactData, int>::ValidateGrowSize(); // 475
	CUtlMemory<b3ContactData, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<b3ContactData, CUtlMemory<b3ContactData, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<b3ContactData, CUtlMemory<b3ContactData, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<b3ContactData, CUtlMemory<b3ContactData, int> >::CUtlVector(); // 1496
	CUtlMemory<b3ContactData, int>::Purge(); // 903
	CUtlMemory<b3ContactData, int>::Purge(); // 1799
	CUtlVectorBase<b3ContactData, CUtlMemory<b3ContactData, int> >::Purge(); // 560
	ValidateAlignment<b3ContactData>(void); // 508
	CUtlMemory<b3ContactData, int>::Purge(); // 510
	CUtlMemory<b3ContactData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<b3ContactData, CUtlMemory<b3ContactData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<b3ContactData, CUtlMemory<b3ContactData, int> >::~CUtlVector(); // 1519
} /* size: 591, variables: 3, inline expansions: 13 (332 bytes) */

// <00B9E2D6> vphysics2/physicsbody.cpp:1521
void CPhysicsBody::SetTrigger(bool bTrigger)
{
} /* size: 12 */

// <00B9E177> vphysics2/physicsbody.cpp:1526
// variables: 4
// function calls: 5
void CPhysicsBody::ResetProxy()
{
	{
		CPhysicsShape* pShape; // 1528
		CUtlVectorFixedGrowable<CPhysicsShape*, 1>& __for_range; // 31468
		iterator __for_begin; // 44790
		iterator __for_end; // 44790
		CUtlMemory<CPhysicsShape::Base(); // 112
		CUtlVectorBase<CPhysicsShape::Base(); // 102
		CUtlVectorBase<CPhysicsShape::begin(); // 1528
		CUtlVectorBase<CPhysicsShape::Count(); // 104
		CUtlVectorBase<CPhysicsShape::end(); // 1528
	}
} /* size: 58 */

// <00B9D72F> vphysics2/physicsbody.cpp:1534
// variables: 13
// function calls: 37
void CPhysicsBody::GetSubmergedVolume(const Vector& planeOrigin, const Vector& planeNormal, float* outTotalVolume, float* outSubmergedVolume, Vector* outCenterOfBuoyancy)
{
	float totalVolume; // 1536
	float submergedVolume; // 1537
	Vector weightedCenter; // 1538
	CTransform transform; // 1539
	VPlane vPlane; // 1540
	{
		CPhysicsShape* pShape; // 1542
		const CUtlVectorFixedGrowable<CPhysicsShape*, 1>& __for_range; // 31117
		const_iterator __for_begin; // 44835
		const_iterator __for_end; // 44835
		{
			float shapeTotal; // 1544
			float shapeSubmerged; // 1545
			Vector shapeCenter; // 1546
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 1553
			Vector::operator+=(
					const Vector& v);  // 1553
		}
		CUtlMemory<CPhysicsShape::Base(); // 113
		CUtlVectorBase<CPhysicsShape::Base(); // 103
		CUtlVectorBase<CPhysicsShape::begin(); // 1542
		CUtlVectorBase<CPhysicsShape::Count(); // 105
		CUtlVectorBase<CPhysicsShape::end(); // 1542
	}
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 21
	B3Cast<Quaternion, b3Quat>(const b3Quat& v); // 71
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 71
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
			float flScale);  // 71
	B3Cast<CTransform, b3Transform>(const b3Transform& v); // 435
	CPhysicsBody::GetTransform(); // 1539
	Vector::Vector(); // 99
	Vector::operator=(
			const Vector& vOther);  // 112
	Vector::NormalizeInPlace(); // 113
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 114
	VPlane::InitFromPointAndNormal(
				const Vector& vPos,
				const Vector& vNormal);  // 101
	VPlane::VPlane(
		const Vector& vNormal,
		const Vector& vPoint);  // 1540
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 1569
	Vector::operator=(
			const Vector& vOther);  // 1569
	Vector::operator=(
			const Vector& vOther);  // 1563
} /* size: 815, variables: 5, inline expansions: 26 (651 bytes) */

// <00B9D26A> vphysics2/physicsbody.cpp:1573
// variables: 7
// function calls: 11
void CPhysicsBody::ApplyBuoyancyImpulse(const Vector& planeOrigin, const Vector& planeNormal, float buoyancy, float linearDrag, float angularDrag, const Vector& fluidVelocity, const Vector& gravity, float dt)
{
	float totalVolume; // 1580
	float submergedVolume; // 1581
	Vector centerOfBuoyancy; // 1582
	b3Vec3 fluid; // 1584
	b3Vec3 g; // 1588
	b3Vec3 center; // 1595
	b3Vec3 relativeCenter; // 1599
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 1584
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 1588
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 1595
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 1599
} /* size: 707, variables: 7, inline expansions: 11 (156 bytes) */

// <00B9D208> vphysics2/physicsbody.cpp:1604
void CPhysicsBody::SetBullet(bool bEnabled)
{
} /* size: 17 */

// <00B9D1DA> vphysics2/physicsbody.cpp:1609
void CPhysicsBody::GetManagedHandle()
{
} /* size: 9 */

