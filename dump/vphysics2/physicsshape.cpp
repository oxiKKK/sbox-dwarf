
//
// vphysics2/physicsshape.cpp
//
//	referenced by: libengine2.so
//
//	functions: 75
//	struct: 1
//

// <00CB1CBF> vphysics2/physicsshape.cpp:12
// variables: 2
// function calls: 14
void CPhysicsShape::CPhysicsShape(b3ShapeId id)
{
	{
		{
		}
	}
	{
		CUtlString::CUtlString(); // 12
		RnCollisionAttr_t::ComputeHash(); // 167
		memset(void* __dest,
			int __ch,
			size_t __len);  // 165
		RnCollisionAttr_t::RnCollisionAttr_t(); // 12
		RnMaterial_t::RnMaterial_t(); // 12
		IPhysicsShape::IPhysicsShape(); // 12
		CManagedHandle::CManagedHandle(); // 12
		{
		}
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 21
		{
			int i; // 84
		}
		RnCollisionAttr_t::HasTag(
			uint32 tagToken);  // 116
		{
			int i; // 119
			RnCollisionAttr_t::ComputeHash(); // 211
			RnCollisionAttr_t::RebuildHash(); // 124
		}
		RnCollisionAttr_t::AddTag(
			uint32 tagToken);  // 114
		RnCollisionAttr_t::AddTag(
			uint32 tagToken);  // 111
		RnCollisionAttr_t::AddTag(
			CUtlStringToken tagToken);  // 21
	}
} /* size: 0 */

// <00CB1C76> vphysics2/physicsshape.cpp:12
// variables: 2
void CPhysicsShape::CPhysicsShape(b3ShapeId id)
{
	const char   __FUNCTION__; // 49270
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 14
	}
} /* size: 0, variables: 1 */

// <00CB1B93> vphysics2/physicsshape.cpp:30
// function calls: 2
void CPhysicsShape::~CPhysicsShape()
{
	CUtlString::~CUtlString(); // 47
	CManagedHandle::~CManagedHandle(); // 47
} /* size: 127, inline expansions: 2 (21 bytes) */

// <00CB1B2D> vphysics2/physicsshape.cpp:30
void CPhysicsShape::~CPhysicsShape()
{
} /* size: 36 */

// <00CB1AE6> vphysics2/physicsshape.cpp:49
void CPhysicsShape::GetBody()
{
} /* size: 9 */

// <00CB405E> vphysics2/physicsshape.cpp:54
void CPhysicsShape::GetType()
{
} /* size: 43 */

// <00CB18E5> vphysics2/physicsshape.cpp:67
// variables: 2
// function calls: 5
void CPhysicsShape::SetMaterial(const RnMaterial_t& material)
{
	b3SurfaceMaterial surfaceMaterial; // 69
	float density; // 77
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 73
	Max<float>(const float& val1,
			const float& val2);  // 77
} /* size: 386, variables: 2, inline expansions: 5 (14 bytes) */

// <00CB1763> vphysics2/physicsshape.cpp:89
// variables: 4
// function calls: 2
void CPhysicsShape::SetSurfaceIndex(int nSurfaceIndex, int nIndex)
{
	const IPhysSurfacePropertyController* pSurfaceProperties; // 94
	int materialCount; // 98
	const CPhysSurfaceProperties* pSurface; // 104
	b3SurfaceMaterial surfaceMaterial; // 105
	CPhysicsShape::GetType(); // 91
	CPhysicsShape::GetType(); // 91
} /* size: 346, variables: 4, inline expansions: 2 (56 bytes) */

// <00CB1735> vphysics2/physicsshape.cpp:114
void CPhysicsShape::GetMaterial()
{
} /* size: 9 */

// <00CB166C> vphysics2/physicsshape.cpp:119
// variable: 1
// function call: 1
void CPhysicsShape::SetMaterialIndex(CUtlStringToken nMaterialIndex)
{
	RnMaterial_t material; // 121
	RnMaterial_t::RnMaterial_t(); // 121
} /* size: 165, variables: 1, inline expansions: 1 (33 bytes) */

// <00CB163E> vphysics2/physicsshape.cpp:133
void CPhysicsShape::GetSurfaceIndex()
{
} /* size: 8 */

// <00CB14AE> vphysics2/physicsshape.cpp:138
// function calls: 4
void CPhysicsShape::SetCollisionAttributes(const RnCollisionAttr_t& attributes)
{
	RnCollisionAttr_t::ComputeHash(); // 211
	RnCollisionAttr_t::RebuildHash(); // 141
	RnCollisionAttr_t::GetCollisionFunctionMask(); // 194
	RnCollisionAttr_t::IsTouchEventEnabled(); // 143
} /* size: 196, inline expansions: 4 (41 bytes) */

// <00CB1480> vphysics2/physicsshape.cpp:157
void CPhysicsShape::GetCollisionAttributes()
{
} /* size: 9 */

// <00CB4773> vphysics2/physicsshape.cpp:162
// function calls: 3
void CPhysicsShape::AddCollisionFunctionMask(uint8 nMask)
{
	RnCollisionAttr_t::ComputeHash(); // 211
	RnCollisionAttr_t::RebuildHash(); // 240
	RnCollisionAttr_t::AddCollisionFunctionMask(
				uint8 nAddMask);  // 164
} /* size: 127, inline expansions: 3 (128 bytes) */

// <00CB145B> vphysics2/physicsshape.cpp:162
void CPhysicsShape::AddCollisionFunctionMask(uint8 nMask)
{
} /* size: 0 */

// <00CB4886> vphysics2/physicsshape.cpp:170
// function calls: 3
void CPhysicsShape::RemoveCollisionFunctionMask(uint8 nMask)
{
	RnCollisionAttr_t::ComputeHash(); // 211
	RnCollisionAttr_t::RebuildHash(); // 253
	RnCollisionAttr_t::RemoveCollisionFunctionMask(
					uint8 nRemoveMask);  // 172
} /* size: 127, inline expansions: 3 (131 bytes) */

// <00CB1436> vphysics2/physicsshape.cpp:170
void CPhysicsShape::RemoveCollisionFunctionMask(uint8 nMask)
{
} /* size: 0 */

// <00CB12DF> vphysics2/physicsshape.cpp:178
// function calls: 4
void CPhysicsShape::EnableTouchEvents()
{
	RnCollisionAttr_t::ComputeHash(); // 211
	RnCollisionAttr_t::RebuildHash(); // 240
	RnCollisionAttr_t::AddCollisionFunctionMask(
				uint8 nAddMask);  // 164
	CPhysicsShape::AddCollisionFunctionMask(
				uint8 nMask);  // 180
} /* size: 151, inline expansions: 4 (227 bytes) */

// <00CB1188> vphysics2/physicsshape.cpp:183
// function calls: 4
void CPhysicsShape::DisableTouchEvents()
{
	RnCollisionAttr_t::ComputeHash(); // 211
	RnCollisionAttr_t::RebuildHash(); // 253
	RnCollisionAttr_t::RemoveCollisionFunctionMask(
					uint8 nRemoveMask);  // 172
	CPhysicsShape::RemoveCollisionFunctionMask(
					uint8 nMask);  // 185
} /* size: 151, inline expansions: 4 (227 bytes) */

// <00CB115A> vphysics2/physicsshape.cpp:188
void CPhysicsShape::IsTouchEventEnabled()
{
} /* size: 17 */

// <00CB4DA9> vphysics2/physicsshape.cpp:193
// function calls: 13
void CPhysicsShape::SetTrigger(bool trigger)
{
	RnCollisionAttr_t::ComputeHash(); // 211
	RnCollisionAttr_t::RebuildHash(); // 199
	RnCollisionAttr_t::ComputeHash(); // 211
	RnCollisionAttr_t::RebuildHash(); // 240
	RnCollisionAttr_t::AddCollisionFunctionMask(
				uint8 nAddMask);  // 203
	RnCollisionAttr_t::ComputeHash(); // 211
	RnCollisionAttr_t::RebuildHash(); // 240
	RnCollisionAttr_t::AddCollisionFunctionMask(
				uint8 nAddMask);  // 208
	RnCollisionAttr_t::ComputeHash(); // 211
	RnCollisionAttr_t::RebuildHash(); // 253
	RnCollisionAttr_t::RemoveCollisionFunctionMask(
					uint8 nRemoveMask);  // 209
	RnCollisionAttr_t::RemoveCollisionFunctionMask(
					uint8 nRemoveMask);  // 204
	CPhysicsShape::SetTrigger(
			bool trigger);  // 193
} /* size: 312, inline expansions: 13 (644 bytes) */

// <00CB1135> vphysics2/physicsshape.cpp:193
void CPhysicsShape::SetTrigger(bool trigger)
{
} /* size: 0 */

// <00CB409C> vphysics2/physicsshape.cpp:217
// variable: 1
// function calls: 2
void CPhysicsShape::SetHasNoMass(bool b)
{
	float density; // 224
	Max<float>(const float& val1,
			const float& val2);  // 224
	CPhysicsShape::SetHasNoMass(
			bool b);  // 217
} /* size: 145, variables: 1, inline expansions: 2 (120 bytes) */

// <00CB1105> vphysics2/physicsshape.cpp:217
// variable: 1
void CPhysicsShape::SetHasNoMass(bool b)
{
	float density; // 224
} /* size: 0, variables: 1 */

// <00CB10C4> vphysics2/physicsshape.cpp:233
void CPhysicsShape::SetIgnoreTraces(bool b)
{
} /* size: 40 */

// <00CB1096> vphysics2/physicsshape.cpp:241
void CPhysicsShape::IsTrigger()
{
} /* size: 15 */

// <00CB0E2E> vphysics2/physicsshape.cpp:246
// function calls: 10
void CPhysicsShape::BuildBounds()
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 41
	Vector::operator=(
			const Vector& vOther);  // 29
	Vector::Vector(); // 27
	Vector::Vector(); // 27
	Vector::operator=(
			const Vector& vOther);  // 28
	AABB_t::AABB_t(
		const Vector& vMins,
		const Vector& vMaxs);  // 41
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 41
	B3Cast<AABB_t, b3AABB>(const b3AABB& v); // 248
} /* size: 90, inline expansions: 10 (53 bytes) */

// <00CB01FD> vphysics2/physicsshape.cpp:251
// variables: 7
// function calls: 47
void CPhysicsShape::BuildBounds(const matrix3x4_t& transform)
{
	b3Vec3 position; // 253
	b3AABB aabb; // 254
	{
		b3Capsule capsule; // 260
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 76
		Quaternion::Quaternion(); // 837
		MatrixQuaternion(const matrix3x4_t& mat); // 2675
		matrix3x4_t::ToQuaternion(); // 76
		B3Cast<b3Vec3, Vector>(const Vector& v); // 76
		B3Cast<b3Transform, matrix3x4_t>(const matrix3x4_t& v); // 261
	}
	{
		const b3HeightField* heightField; // 266
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 76
		Quaternion::Quaternion(); // 837
		MatrixQuaternion(const matrix3x4_t& mat); // 2675
		matrix3x4_t::ToQuaternion(); // 76
		B3Cast<b3Vec3, Vector>(const Vector& v); // 76
		B3Cast<b3Transform, matrix3x4_t>(const matrix3x4_t& v); // 267
	}
	{
		const b3Hull* hull; // 272
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 76
		Quaternion::Quaternion(); // 837
		MatrixQuaternion(const matrix3x4_t& mat); // 2675
		matrix3x4_t::ToQuaternion(); // 76
		B3Cast<b3Vec3, Vector>(const Vector& v); // 76
		B3Cast<b3Transform, matrix3x4_t>(const matrix3x4_t& v); // 273
	}
	{
		b3Mesh mesh; // 278
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 76
		Quaternion::Quaternion(); // 837
		MatrixQuaternion(const matrix3x4_t& mat); // 2675
		matrix3x4_t::ToQuaternion(); // 76
		B3Cast<b3Vec3, Vector>(const Vector& v); // 76
		B3Cast<b3Transform, matrix3x4_t>(const matrix3x4_t& v); // 279
	}
	{
		b3Sphere sphere; // 284
		Quaternion::Quaternion(); // 837
		MatrixQuaternion(const matrix3x4_t& mat); // 2675
		matrix3x4_t::ToQuaternion(); // 76
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 76
		B3Cast<b3Vec3, Vector>(const Vector& v); // 76
		B3Cast<b3Transform, matrix3x4_t>(const matrix3x4_t& v); // 285
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 253
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 41
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 41
	Vector::Vector(); // 27
	Vector::Vector(); // 27
	Vector::operator=(
			const Vector& vOther);  // 28
	Vector::operator=(
			const Vector& vOther);  // 29
	AABB_t::AABB_t(
		const Vector& vMins,
		const Vector& vMaxs);  // 41
	B3Cast<AABB_t, b3AABB>(const b3AABB& v); // 290
} /* size: 1091, variables: 2, inline expansions: 12 (84 bytes) */

// <00CAFF99> vphysics2/physicsshape.cpp:293
// variables: 4
// function calls: 3
void CPhysicsShape::ComputeMass(float& flMass, Vector& vCenter)
{
	b3MassData massData; // 295
	{
		b3Capsule capsule; // 301
	}
	{
		const b3Hull* hull; // 307
	}
	{
		b3Sphere sphere; // 313
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 320
	Vector::operator=(
			const Vector& vOther);  // 320
} /* size: 331, variables: 1, inline expansions: 3 (11 bytes) */

// <00CAFEFF> vphysics2/physicsshape.cpp:323
// function call: 1
void CPhysicsShape::SetDebugName(const char* pName)
{
	CUtlString::operator=(
			const char* src);  // 325
} /* size: 13, inline expansions: 1 (5 bytes) */

// <00CAFE70> vphysics2/physicsshape.cpp:328
// function calls: 2
void CPhysicsShape::GetDebugName()
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 330
} /* size: 23, inline expansions: 2 (36 bytes) */

// <00CB3FC5> vphysics2/physicsshape.cpp:333
// variable: 1
// function call: 1
void CPhysicsShape::HasTag(uint tag)
{
	{
		int i; // 84
	}
	RnCollisionAttr_t::HasTag(
		uint32 tagToken);  // 335
} /* size: 54, inline expansions: 1 (49 bytes) */

// <00CAFE4A> vphysics2/physicsshape.cpp:333
void CPhysicsShape::HasTag(uint tag)
{
} /* size: 0 */

// <00CB4999> vphysics2/physicsshape.cpp:338
// variables: 3
// function calls: 8
void CPhysicsShape::AddTag(uint tag)
{
	{
		int i; // 84
	}
	RnCollisionAttr_t::HasTag(
		uint32 tagToken);  // 335
	CPhysicsShape::HasTag(
		uint tag);  // 340
	{
		int i; // 84
	}
	RnCollisionAttr_t::HasTag(
		uint32 tagToken);  // 116
	{
		int i; // 119
		RnCollisionAttr_t::ComputeHash(); // 211
		RnCollisionAttr_t::RebuildHash(); // 124
	}
	RnCollisionAttr_t::AddTag(
		uint32 tagToken);  // 114
	RnCollisionAttr_t::AddTag(
		uint32 tagToken);  // 342
	CPhysicsShape::AddTag(
		uint tag);  // 338
} /* size: 260, inline expansions: 6 (274 bytes) */

// <00CAFE24> vphysics2/physicsshape.cpp:338
void CPhysicsShape::AddTag(uint tag)
{
} /* size: 0 */

// <00CB4BA0> vphysics2/physicsshape.cpp:352
// variables: 3
// function calls: 8
void CPhysicsShape::RemoveTag(uint tag)
{
	{
		int i; // 84
	}
	RnCollisionAttr_t::HasTag(
		uint32 tagToken);  // 335
	CPhysicsShape::HasTag(
		uint tag);  // 354
	{
		int i; // 84
	}
	RnCollisionAttr_t::HasTag(
		uint32 tagToken);  // 134
	{
		int i; // 137
		RnCollisionAttr_t::ComputeHash(); // 211
		RnCollisionAttr_t::RebuildHash(); // 149
	}
	RnCollisionAttr_t::RemoveTag(
			uint32 tagToken);  // 132
	RnCollisionAttr_t::RemoveTag(
			uint32 tagToken);  // 356
	CPhysicsShape::AddTag(
		uint tag);  // 338
} /* size: 284, inline expansions: 6 (330 bytes) */

// <00CAFDFE> vphysics2/physicsshape.cpp:352
void CPhysicsShape::RemoveTag(uint tag)
{
} /* size: 0 */

// <00CB463B> vphysics2/physicsshape.cpp:366
// function calls: 4
void CPhysicsShape::ClearTags()
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 371
	RnCollisionAttr_t::ComputeHash(); // 211
	RnCollisionAttr_t::RebuildHash(); // 372
	CPhysicsShape::ClearTags(); // 366
} /* size: 97, inline expansions: 4 (128 bytes) */

// <00CAFDE5> vphysics2/physicsshape.cpp:366
void CPhysicsShape::ClearTags()
{
} /* size: 0 */

// <00CB50BD> vphysics2/physicsshape.cpp:379
// variables: 2
// function call: 1
void CPhysicsShape::UpdateBoxShape(const Vector& vCenter, const Quaternion& qRotation, const Vector& vExtents)
{
	b3Transform transform; // 384
	b3BoxHull hull; // 385
	CPhysicsShape::GetType(); // 381
} /* size: 156, variables: 2, inline expansions: 1 (26 bytes) */

// <00CB445B> vphysics2/physicsshape.cpp:379
// variables: 2
// function calls: 7
void CPhysicsShape::UpdateBoxShape(const Vector& vCenter, const Vector& vExtents, const Quaternion& qRotation)
{
	b3Transform transform; // 384
	b3BoxHull hull; // 385
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 384
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 385
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 384
} /* size: 219, variables: 2, inline expansions: 7 (148 bytes) */

// <00CAFD8B> vphysics2/physicsshape.cpp:379
// variables: 2
void CPhysicsShape::UpdateBoxShape(const Vector& vCenter, const Quaternion& qRotation, const Vector& vExtents)
{
	b3Transform transform; // 384
	b3BoxHull hull; // 385
} /* size: 0, variables: 2 */

// <00CAFC2E> vphysics2/physicsshape.cpp:391
// variables: 2
// function call: 1
void CPhysicsShape::UpdateMeshShape(int nVertexCount, const Vector* pVertexBase, int nIndexCount, const uint32* pIndexBase)
{
	b3MeshDef def; // 399
	b3MeshData* meshData; // 407
	CPhysicsShape::GetType(); // 396
} /* size: 357, variables: 2, inline expansions: 1 (44 bytes) */

// <00CB5185> vphysics2/physicsshape.cpp:421
// variables: 13
// function calls: 2
void CPhysicsShape::UpdateHeightShape(uint16_t* pHeights, uint8_t* pMaterials, int x, int y, int w, int h, float SizeScale, float HeightScale)
{
	const b3HeightField* heightField; // 429
	int columnCount; // 431
	int rowCount; // 432
	CPhysicsShape::GetType(); // 426
	{
		uint16_t* Heights; // 436
		{
			int i; // 438
			{
				int j; // 440
				{
					int dstIndex; // 442
					int srcIndex; // 443
				}
			}
		}
	}
	{
		uint8_t* Materials; // 451
		{
			int i; // 453
			{
				int j; // 455
				{
					int dstIndex; // 457
					int srcIndex; // 458
				}
			}
		}
	}
	CPhysicsShape::UpdateHeightShape(
				uint16_t* pHeights,
				uint8_t* pMaterials,
				int x,
				int y,
				int w,
				int h,
				float SizeScale,
				float HeightScale);  // 421
} /* size: 503, variables: 3, inline expansions: 2 (379 bytes) */

// <00CAFB00> vphysics2/physicsshape.cpp:421
// variables: 13
void CPhysicsShape::UpdateHeightShape(uint16_t* pHeights, uint8_t* pMaterials, int x, int y, int w, int h, float SizeScale, float HeightScale)
{
	const b3HeightField* heightField; // 429
	int columnCount; // 431
	int rowCount; // 432
	{
		uint16_t* Heights; // 436
		{
			int i; // 438
			{
				int j; // 440
				{
					int dstIndex; // 442
					int srcIndex; // 443
				}
			}
		}
	}
	{
		uint8_t* Materials; // 451
		{
			int i; // 453
			{
				int j; // 455
				{
					int dstIndex; // 457
					int srcIndex; // 458
				}
			}
		}
	}
} /* size: 0, variables: 3 */

// <00CB418B> vphysics2/physicsshape.cpp:467
// variable: 1
// function calls: 5
void CPhysicsShape::UpdateSphereShape(const Vector& vCenter, float flRadius)
{
	b3Sphere sphere; // 472
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 472
	CPhysicsShape::UpdateSphereShape(
				const Vector& vCenter,
				float flRadius);  // 467
} /* size: 162, variables: 1, inline expansions: 5 (77 bytes) */

// <00CAFA87> vphysics2/physicsshape.cpp:467
// variable: 1
void CPhysicsShape::UpdateSphereShape(const Vector& vCenter, float flRadius)
{
	b3Sphere sphere; // 472
} /* size: 0, variables: 1 */

// <00CAF84C> vphysics2/physicsshape.cpp:478
// variable: 1
// function calls: 7
void CPhysicsShape::UpdateCapsuleShape(const Vector& vCenter1, const Vector& vCenter2, float flRadius)
{
	b3Capsule sphere; // 480
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 480
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 480
} /* size: 137, variables: 1, inline expansions: 7 (8 bytes) */

// <00CAF075> vphysics2/physicsshape.cpp:486
// variables: 5
// function calls: 26
void CPhysicsShape::UpdateHullShape(const Vector& position, const Quaternion& rotation, int nVertexCount, const Vector* pvVertexBase)
{
	matrix3x4_t transform; // 491
	CUtlVector<Vector, CUtlMemory<Vector, int> > vertices; // 494
	b3Hull* hull; // 501
	{
		int nVertex; // 496
		Vector::Vector(); // 1306
		VectorTransform(const Vector& in1,
				const matrix3x4_t& in2,
				Vector& out);  // 1307
		VectorTransform(const Vector& in1,
				const matrix3x4_t& in2);  // 498
		Vector::operator=(
				const Vector& vOther);  // 498
	}
	matrix3x4_t::matrix3x4_t(); // 491
	matrix3x4_t::InitFromQuaternion(
				const Quaternion& orientation,
				const Vector& vPosition);  // 492
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 494
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
				int num);  // 1319
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount(
		int count);  // 495
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 509
} /* size: 520, variables: 3, inline expansions: 22 (840 bytes) */

// <00CBA86D> vphysics2/physicsshape.cpp:511
void CPhysicsShape::GetTriangulation(CUtlVector<Vector, CUtlMemory<Vector, int> >* pPositions, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pIndices)
{
} /* size: 25 */

// <00CB5868> vphysics2/physicsshape.cpp:511
// variables: 95
// function calls: 349
void CPhysicsShape::GetTriangulation(CUtlVector<Vector, CUtlMemory<Vector, int> >* pPositions, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pIndices)
{
	CPhysicsShape::GetType(); // 516
	CPhysicsShape::GetType(); // 544
	CPhysicsShape::GetType(); // 610
	CPhysicsShape::GetType(); // 644
	CPhysicsShape::GetType(); // 703
	{
		const b3Capsule& capsule; // 705
		float Height; // 706
		b3Vec3 Origin; // 708
		b3Vec3 AxisX; // 709
		b3Vec3 AxisY; // 710
		b3Vec3 AxisZ; // 711
		const int  kSlices; // 713
		const int  kStacks; // 714
		const int  kSideVertices; // 716
		int VertexCount; // 718
		int VertexStartIndex; // 719
		int TriangleCount; // 722
		int IndexIterator; // 723
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 232
		b3Distance(b3Vec3 v1,
				b3Vec3 v2);  // 706
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 708
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 708
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 283
		b3Perp(b3Vec3 v); // 710
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 719
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 711
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 723
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 726
		Vector::operator=(
				const Vector& vOther);  // 727
		{
			int I; // 729
			{
				int I1; // 731
				float Theta; // 733
				float S0; // 734
				float C0; // 735
				b3Sin(float radians); // 734
				{
					int K; // 745
					{
						int K1; // 747
						float Phi; // 749
						float X0; // 750
						float Y0; // 751
						b3Vec3 Normal1; // 753
						b3Vec3 Position1; // 754
						b3Vec3 Normal2; // 757
						b3Vec3 Position2; // 758
						b3Add(b3Vec3 a,
							b3Vec3 b);  // 1016
						operator+(b3Vec3 a,
								b3Vec3 b);  // 758
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 763
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 764
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 765
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 767
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 768
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 769
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 771
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 772
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 773
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 775
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 776
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 777
						b3Sin(float radians); // 750
						b3Cos(float radians); // 751
						b3MulSV(float s,
							b3Vec3 a);  // 1001
						operator*(float s,
								b3Vec3 a);  // 754
						CUtlMemory<Vector, int>::operator[](
								int i);  // 602
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
							int i);  // 755
						b3Sub(b3Vec3 a,
							b3Vec3 b);  // 1021
						operator-(b3Vec3 a,
								b3Vec3 b);  // 754
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 11
						B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 755
						Vector::operator=(
								const Vector& vOther);  // 755
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 11
						B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 759
						CUtlMemory<Vector, int>::operator[](
								int i);  // 602
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
							int i);  // 759
						Vector::operator=(
								const Vector& vOther);  // 759
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 782
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 783
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 785
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 786
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 787
					}
				}
				b3Cos(float radians); // 735
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
					int i);  // 737
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
					int i);  // 738
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
					int i);  // 739
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
					int i);  // 741
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
					int i);  // 742
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
					int i);  // 743
			}
		}
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 726
		Vector::operator=(
				const Vector& vOther);  // 726
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 727
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 727
		{
			int Index; // 794
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 794
			{
				Vector Position; // 796
				CUtlMemory<Vector, int>::operator[](
						int i);  // 602
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
					int i);  // 796
				b3MulSV(float s,
					b3Vec3 a);  // 1001
				operator*(float s,
						b3Vec3 a);  // 797
				b3MulSV(float s,
					b3Vec3 a);  // 1001
				operator*(float s,
						b3Vec3 a);  // 797
				b3MulSV(float s,
					b3Vec3 a);  // 1001
				operator*(float s,
						b3Vec3 a);  // 797
				b3Add(b3Vec3 a,
					b3Vec3 b);  // 1016
				operator+(b3Vec3 a,
						b3Vec3 b);  // 797
				b3Add(b3Vec3 a,
					b3Vec3 b);  // 1016
				operator+(b3Vec3 a,
						b3Vec3 b);  // 797
				b3Add(b3Vec3 a,
					b3Vec3 b);  // 1016
				operator+(b3Vec3 a,
						b3Vec3 b);  // 797
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 11
				B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 797
				Vector::operator=(
						const Vector& vOther);  // 797
			}
		}
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 709
	}
	{
		const b3Sphere& sphere; // 646
		const int  kSlices; // 647
		const int  kStacks; // 648
		int VertexCount; // 650
		int VertexStartIndex; // 651
		int TriangleCount; // 654
		int IndexIterator; // 655
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 651
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 655
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 658
		{
			int I; // 661
			{
				float Theta; // 663
				float S0; // 664
				float C0; // 665
				int I1; // 667
				{
					int K; // 669
					{
						float Phi; // 671
						float X0; // 672
						float Y0; // 673
						b3Vec3 Normal; // 675
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 681
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 682
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 684
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 685
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 686
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 680
						b3Sin(float radians); // 672
						b3Cos(float radians); // 673
						CUtlMemory<Vector, int>::operator[](
								int i);  // 602
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
							int i);  // 676
						b3MulSV(float s,
							b3Vec3 a);  // 1001
						operator*(float s,
								b3Vec3 a);  // 676
						b3Add(b3Vec3 a,
							b3Vec3 b);  // 1016
						operator+(b3Vec3 a,
								b3Vec3 b);  // 676
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 11
						B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 676
						Vector::operator=(
								const Vector& vOther);  // 676
					}
				}
				b3Sin(float radians); // 664
				b3Cos(float radians); // 665
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
					int i);  // 695
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
					int i);  // 696
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
					int i);  // 698
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
					int i);  // 699
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
					int i);  // 700
			}
		}
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 659
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 658
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 11
		B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 658
		Vector::operator=(
				const Vector& vOther);  // 658
		Vector::operator=(
				const Vector& vOther);  // 659
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 11
		B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 659
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 659
	}
	{
		const b3Hull* hull; // 612
		const b3Vec3* points; // 615
		const b3HullFace* faces; // 623
		const b3HullHalfEdge* edges; // 624
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 613
		CUtlMemory<Vector, int>::IsGrowable(); // 881
		CUtlMemory<Vector, int>::IsExternallyAllocated(); // 888
		CUtlMemory<Vector, int>::EnsureCapacity(
				int num);  // 1006
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1024
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::EnsureCapacity(
				int num);  // 613
		b3GetHullPoints(const b3Hull* hull); // 615
		{
			int VertexIndex; // 616
			CUtlMemory<Vector, int>::Base(); // 112
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
					int num);  // 1249
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 1252
			Construct<Vector, Vector>(Vector* pMemory); // 1252
			CUtlMemory<Vector, int>::NumAllocated(); // 1247
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
					Vector& src);  // 618
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 11
			B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 618
		}
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 621
		CUtlMemory<unsigned int, int>::IsGrowable(); // 881
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 888
		CUtlMemory<unsigned int, int>::EnsureCapacity(
				int num);  // 1006
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 1024
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::EnsureCapacity(
				int num);  // 621
		b3GetHullFaces(const b3Hull* hull); // 623
		b3GetHullEdges(const b3Hull* hull); // 624
		{
			int FaceIndex; // 625
			{
				const b3HullFace& Face; // 627
				const b3HullHalfEdge* Edge1; // 628
				const b3HullHalfEdge* Edge2; // 629
				const b3HullHalfEdge* Edge3; // 630
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
						unsigned int& src);  // 635
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
						unsigned int& src);  // 636
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
						unsigned int& src);  // 637
			}
		}
	}
	{
		const b3HeightField* heightField; // 546
		int RowCount; // 548
		int ColumnCount; // 549
		uint16_t* CompressedHeights; // 550
		uint8_t* Materials; // 551
		float MinHeight; // 552
		float HeightScale; // 553
		b3Vec3 Scale; // 554
		int VertexCount; // 556
		int CellCount; // 557
		int TriangleCount; // 576
		int IndexCountEstimate; // 577
		CUtlMemory<Vector, int>::IsGrowable(); // 881
		CUtlMemory<Vector, int>::IsExternallyAllocated(); // 888
		CUtlMemory<Vector, int>::EnsureCapacity(
				int num);  // 1006
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1024
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::EnsureCapacity(
				int num);  // 559
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 559
		{
			int Row; // 561
			{
				int Column; // 563
				{
					int HeightIndex; // 565
					float X; // 567
					float Y; // 568
					float Z; // 569
					CUtlMemory<Vector, int>::Base(); // 112
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
							int num);  // 1249
					CUtlMemory<Vector, int>::operator[](
							int i);  // 602
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
						int i);  // 1252
					Construct<Vector, Vector>(Vector* pMemory); // 1252
					CUtlMemory<Vector, int>::NumAllocated(); // 1247
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
							Vector& src);  // 571
					b3Mul(b3Vec3 a,
						b3Vec3 b);  // 1011
					operator*(b3Vec3 a,
							b3Vec3 b);  // 571
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 11
					B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 571
				}
			}
		}
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 574
		{
		}
		CUtlMemory<unsigned int, int>::IsGrowable(); // 881
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 888
		CUtlMemory<unsigned int, int>::EnsureCapacity(
				int num);  // 1006
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 1024
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::EnsureCapacity(
				int num);  // 578
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 578
		{
			int Row; // 580
			{
				int Column; // 582
				{
					int CellIndex; // 584
					int Index11; // 591
					int Index12; // 593
					int Index21; // 594
					int Index22; // 595
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 603
					{
					}
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 597
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
							unsigned int& src);  // 598
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
							unsigned int& src);  // 599
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
							unsigned int& src);  // 601
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
							unsigned int& src);  // 602
				}
			}
		}
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 606
		{
		}
	}
	{
		const b3Mesh& mesh; // 518
		const b3MeshData* BVH; // 519
		b3Vec3 Scale; // 520
		int VertexCount; // 522
		const b3Vec3* vertices; // 525
		int TriangleCount; // 531
		const b3MeshTriangle* triangles; // 534
		CUtlMemory<Vector, int>::IsGrowable(); // 881
		CUtlMemory<Vector, int>::IsExternallyAllocated(); // 888
		CUtlMemory<Vector, int>::EnsureCapacity(
				int num);  // 1006
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1024
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::EnsureCapacity(
				int num);  // 523
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 523
		b3GetMeshVertices(const b3MeshData* mesh); // 525
		{
			int VertexIndex; // 526
			CUtlMemory<Vector, int>::Base(); // 112
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
					int num);  // 1249
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 1252
			Construct<Vector, Vector>(Vector* pMemory); // 1252
			CUtlMemory<Vector, int>::NumAllocated(); // 1247
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
					Vector& src);  // 528
			b3Mul(b3Vec3 a,
				b3Vec3 b);  // 1011
			operator*(b3Vec3 a,
					b3Vec3 b);  // 528
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 11
			B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 528
		}
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 532
		CUtlMemory<unsigned int, int>::IsGrowable(); // 881
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 888
		CUtlMemory<unsigned int, int>::EnsureCapacity(
				int num);  // 1006
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 1024
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::EnsureCapacity(
				int num);  // 532
		b3GetMeshTriangles(const b3MeshData* mesh); // 534
		{
			int TriangleIndex; // 536
			{
				const b3MeshTriangle& Triangle; // 538
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
						unsigned int& src);  // 539
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
						unsigned int& src);  // 540
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
						unsigned int& src);  // 541
			}
		}
	}
} /* size: 0, inline expansions: 5 (180 bytes) */

// <00CAEAF5> vphysics2/physicsshape.cpp:511
// variables: 95
void CPhysicsShape::GetTriangulation(CUtlVector<Vector, CUtlMemory<Vector, int> >* pPositions, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pIndices)
{
	const char   __FUNCTION__; // 49341
	{
		const b3Mesh& mesh; // 518
		const b3MeshData* BVH; // 519
		b3Vec3 Scale; // 520
		int VertexCount; // 522
		const b3Vec3* vertices; // 525
		int TriangleCount; // 531
		const b3MeshTriangle* triangles; // 534
		{
			int VertexIndex; // 526
		}
		{
			int TriangleIndex; // 536
			{
				const b3MeshTriangle& Triangle; // 538
			}
		}
	}
	{
		const b3HeightField* heightField; // 546
		int RowCount; // 548
		int ColumnCount; // 549
		uint16_t* CompressedHeights; // 550
		uint8_t* Materials; // 551
		float MinHeight; // 552
		float HeightScale; // 553
		b3Vec3 Scale; // 554
		int VertexCount; // 556
		int CellCount; // 557
		int TriangleCount; // 576
		int IndexCountEstimate; // 577
		{
			int Row; // 561
			{
				int Column; // 563
				{
					int HeightIndex; // 565
					float X; // 567
					float Y; // 568
					float Z; // 569
				}
			}
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 574
		}
		{
			int Row; // 580
			{
				int Column; // 582
				{
					int CellIndex; // 584
					int Index11; // 591
					int Index12; // 593
					int Index21; // 594
					int Index22; // 595
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 585
					}
				}
			}
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 606
		}
	}
	{
		const b3Hull* hull; // 612
		const b3Vec3* points; // 615
		const b3HullFace* faces; // 623
		const b3HullHalfEdge* edges; // 624
		{
			int VertexIndex; // 616
		}
		{
			int FaceIndex; // 625
			{
				const b3HullFace& Face; // 627
				const b3HullHalfEdge* Edge1; // 628
				const b3HullHalfEdge* Edge2; // 629
				const b3HullHalfEdge* Edge3; // 630
			}
		}
	}
	{
		const b3Sphere& sphere; // 646
		const int  kSlices; // 647
		const int  kStacks; // 648
		int VertexCount; // 650
		int VertexStartIndex; // 651
		int TriangleCount; // 654
		int IndexIterator; // 655
		{
			int I; // 661
			{
				float Theta; // 663
				float S0; // 664
				float C0; // 665
				int I1; // 667
				{
					int K; // 669
					{
						float Phi; // 671
						float X0; // 672
						float Y0; // 673
						b3Vec3 Normal; // 675
					}
				}
			}
		}
	}
	{
		const b3Capsule& capsule; // 705
		float Height; // 706
		b3Vec3 Origin; // 708
		b3Vec3 AxisX; // 709
		b3Vec3 AxisY; // 710
		b3Vec3 AxisZ; // 711
		const int  kSlices; // 713
		const int  kStacks; // 714
		const int  kSideVertices; // 716
		int VertexCount; // 718
		int VertexStartIndex; // 719
		int TriangleCount; // 722
		int IndexIterator; // 723
		{
			int I; // 729
			{
				int I1; // 731
				float Theta; // 733
				float S0; // 734
				float C0; // 735
				{
					int K; // 745
					{
						int K1; // 747
						float Phi; // 749
						float X0; // 750
						float Y0; // 751
						b3Vec3 Normal1; // 753
						b3Vec3 Position1; // 754
						b3Vec3 Normal2; // 757
						b3Vec3 Position2; // 758
					}
				}
			}
		}
		{
			int Index; // 794
			{
				Vector Position; // 796
			}
		}
	}
} /* size: 0, variables: 1 */

// <00CB5449> vphysics2/physicsshape.cpp:802
// variables: 7
// function calls: 14
void CPhysicsShape::GetOutline(CUtlVector<Vector, CUtlMemory<Vector, int> >* pPoints)
{
	const b3Hull* hull; // 807
	const b3Vec3* points; // 808
	const b3HullHalfEdge* edges; // 809
	int edgeCount; // 811
	CPhysicsShape::GetType(); // 804
	b3GetHullPoints(const b3Hull* hull); // 808
	b3GetHullEdges(const b3Hull* hull); // 809
	{
		int i; // 814
		{
			const b3HullHalfEdge& edge; // 816
			const b3HullHalfEdge& twin; // 817
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 11
			B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 819
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 819
			Vector::operator=(
					const Vector& vOther);  // 819
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 11
			B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 820
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 820
			Vector::operator=(
					const Vector& vOther);  // 820
		}
	}
	CPhysicsShape::GetOutline(
			CUtlVector<Vector, CUtlMemory<Vector, int> >* pPoints);  // 802
} /* size: 295, variables: 4, inline expansions: 4 (254 bytes) */

// <00CAEA6C> vphysics2/physicsshape.cpp:802
// variables: 7
void CPhysicsShape::GetOutline(CUtlVector<Vector, CUtlMemory<Vector, int> >* pPoints)
{
	const b3Hull* hull; // 807
	const b3Vec3* points; // 808
	const b3HullHalfEdge* edges; // 809
	int edgeCount; // 811
	{
		int i; // 814
		{
			const b3HullHalfEdge& edge; // 816
			const b3HullHalfEdge& twin; // 817
		}
	}
} /* size: 0, variables: 4 */

// <00CA658F> vphysics2/physicsshape.cpp:824
// member variables: 2
// struct size: 16
struct MeshQueryContext {
	const b3MeshTriangle * pTriangles; /* 0 8 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > * pIndices; /* 8 8 */
};

// <00CAE3F0> vphysics2/physicsshape.cpp:830
// variables: 3
// function calls: 27
bool MeshQueryFcn(b3Vec3 a, b3Vec3 b, b3Vec3 c, int triangleIndex, void* context)
{
	MeshQueryContext* pContext; // 832
	const b3MeshTriangle& triangle; // 833
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pIndices; // 834
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
			unsigned int& src);  // 835
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
			unsigned int& src);  // 836
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
			unsigned int& src);  // 837
} /* size: 324, variables: 3, inline expansions: 27 (443 bytes) */

// <00CAE1C4> vphysics2/physicsshape.cpp:841
// variables: 37
void GetHeightfieldTriangulationForNavmesh(CUtlVector<Vector, CUtlMemory<Vector, int> >* pPositions, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pIndices, const AABB_t& tileBounds, const b3ShapeId id)
{
	const b3HeightField* heightField; // 843
	b3BodyId bodyId; // 846
	b3Transform xform; // 847
	const b3AABB  localTileBounds; // 848
	int RowCount; // 850
	int ColumnCount; // 851
	uint16_t* CompressedHeights; // 852
	uint8_t* Materials; // 853
	float MinHeight; // 854
	float HeightScale; // 855
	b3Vec3 Scale; // 856
	int minRow; // 860
	int maxRow; // 861
	int minCol; // 862
	int maxCol; // 863
	int boundRowCount; // 866
	int boundColCount; // 867
	int vertexCount; // 868
	int startVertexIndex; // 871
	{
		int Row; // 875
		{
			int Column; // 877
			{
				int HeightIndex; // 879
				float X; // 881
				float Y; // 882
				float Z; // 883
			}
		}
	}
	{
		int boundCellWidth; // 892
		int boundCellHeight; // 893
		int triangleCount; // 894
		{
			int r; // 897
			{
				int c; // 899
				{
					int globalRow; // 901
					int globalCol; // 902
					int CellIndex; // 903
					int localIndex11; // 912
					int localIndex12; // 913
					int localIndex21; // 914
					int localIndex22; // 915
				}
			}
		}
	}
} /* size: 0, variables: 19 */

// <00CABE37> vphysics2/physicsshape.cpp:930
// variables: 29
// function calls: 150
void CPhysicsShape::GetTriangulationForNavmesh(CUtlVector<Vector, CUtlMemory<Vector, int> >* pPositions, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pIndices, const AABB_t& tileBounds)
{
	b3BodyId bodyId; // 945
	const b3AABB  shapeBounds; // 946
	b3Transform xform; // 955
	const b3AABB  localTileBounds; // 956
	const b3Mesh& mesh; // 958
	const int  nVertexCapacity; // 959
	MeshQueryContext context; // 962
	int nVertexCount; // 965
	const b3Vec3* vertices; // 967
	b3Vec3 scale; // 968
	{
		int i; // 970
		CUtlMemory<Vector, int>::Base(); // 112
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1252
		Construct<Vector, Vector>(Vector* pMemory); // 1252
		CUtlMemory<Vector, int>::NumAllocated(); // 1247
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
				Vector& src);  // 972
		b3Mul(b3Vec3 a,
			b3Vec3 b);  // 1011
		operator*(b3Vec3 a,
				b3Vec3 b);  // 972
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 11
		B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 972
	}
	CPhysicsShape::GetType(); // 932
	CPhysicsShape::GetType(); // 939
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 46
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 46
	B3Cast<b3AABB, AABB_t>(const AABB_t& v); // 949
	b3AABB_Contains(b3AABB a,
			b3AABB b);  // 949
	CPhysicsShape::GetTriangulation(
			CUtlVector<Vector, CUtlMemory<Vector, int> >* pPositions,
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pIndices);  // 941
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 46
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 46
	B3Cast<b3AABB, AABB_t>(const AABB_t& v); // 956
	b3Neg(b3Vec3 a); // 551
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 400
	b3MulSub(b3Vec3 a,
		float s,
		b3Vec3 b);  // 401
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 402
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 403
	b3InvRotateVector(b3Quat q,
				b3Vec3 v);  // 551
	b3Conjugate(b3Quat q); // 552
	b3InvertTransform(b3Transform t); // 956
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 960
	CUtlMemory<unsigned int, int>::IsGrowable(); // 881
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::EnsureCapacity(
			int num);  // 960
	b3GetMeshTriangles(const b3MeshData* mesh); // 962
	CUtlMemory<Vector, int>::IsGrowable(); // 881
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 888
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::EnsureCapacity(
			int num);  // 966
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 966
	b3GetMeshVertices(const b3MeshData* mesh); // 967
	{
		int Row; // 875
		{
			int Column; // 877
			{
				int HeightIndex; // 879
				float X; // 881
				float Y; // 882
				float Z; // 883
				CUtlMemory<Vector, int>::Base(); // 112
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
						int num);  // 1249
				CUtlMemory<Vector, int>::operator[](
						int i);  // 602
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
					int i);  // 1252
				Construct<Vector, Vector>(Vector* pMemory); // 1252
				CUtlMemory<Vector, int>::NumAllocated(); // 1247
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
						Vector& src);  // 885
				b3Mul(b3Vec3 a,
					b3Vec3 b);  // 1011
				operator*(b3Vec3 a,
						b3Vec3 b);  // 885
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 11
				B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 885
			}
		}
	}
	{
		int boundCellWidth; // 892
		int boundCellHeight; // 893
		int triangleCount; // 894
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 895
		CUtlMemory<unsigned int, int>::IsGrowable(); // 881
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 888
		CUtlMemory<unsigned int, int>::EnsureCapacity(
				int num);  // 1006
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 1024
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::EnsureCapacity(
				int num);  // 895
		{
			int r; // 897
			{
				int c; // 899
				{
					int globalRow; // 901
					int globalCol; // 902
					int CellIndex; // 903
					int localIndex11; // 912
					int localIndex12; // 913
					int localIndex21; // 914
					int localIndex22; // 915
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 924
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 918
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
							unsigned int& src);  // 919
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
							unsigned int& src);  // 920
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
							unsigned int& src);  // 922
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
							unsigned int& src);  // 923
				}
			}
		}
	}
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 46
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 46
	B3Cast<b3AABB, AABB_t>(const AABB_t& v); // 848
	b3Neg(b3Vec3 a); // 551
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 400
	b3MulSub(b3Vec3 a,
		float s,
		b3Vec3 b);  // 401
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 402
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 403
	b3InvRotateVector(b3Quat q,
				b3Vec3 v);  // 551
	b3Conjugate(b3Quat q); // 552
	b3InvertTransform(b3Transform t); // 848
	Max<int>(const int& val1,
		const int& val2);  // 860
	Min<int>(const int& val1,
		const int& val2);  // 861
	Max<int>(const int& val1,
		const int& val2);  // 862
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 871
	Min<int>(const int& val1,
		const int& val2);  // 863
	CUtlMemory<Vector, int>::IsGrowable(); // 881
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 888
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::EnsureCapacity(
			int num);  // 872
	GetHeightfieldTriangulationForNavmesh(CUtlVector<Vector, CUtlMemory<Vector, int> >* pPositions,
						CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pIndices,
						const AABB_t& tileBounds,
						const b3ShapeId  id);  // 934
} /* size: 4164, variables: 10, inline expansions: 64 (5582 bytes) */

// <00CABCD0> vphysics2/physicsshape.cpp:976
// variables: 2
// function calls: 4
void CPhysicsShape::AsSphere()
{
	RnSphere_t sphere; // 978
	{
		b3Sphere Sphere; // 981
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 11
		B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 982
		Vector::operator=(
				const Vector& vOther);  // 982
	}
	RnSphere_t::RnSphere_t(
			float flRadius);  // 978
} /* size: 150, variables: 1, inline expansions: 1 (36 bytes) */

// <00CABA03> vphysics2/physicsshape.cpp:989
// variables: 2
// function calls: 9
void CPhysicsShape::AsCapsule()
{
	RnCapsule_t capsule; // 991
	{
		b3Capsule Capsule; // 994
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 11
		B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 995
		Vector::operator=(
				const Vector& vOther);  // 995
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 11
		B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 996
		Vector::operator=(
				const Vector& vOther);  // 996
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 130
	RnCapsule_t::RnCapsule_t(); // 991
} /* size: 162, variables: 1, inline expansions: 3 (90 bytes) */

// <00CAB977> vphysics2/physicsshape.cpp:1003
// variable: 1
void CPhysicsShape::SetFriction(float f)
{
	b3SurfaceMaterial surfaceMaterial; // 1006
} /* size: 158, variables: 1 */

// <00CAB949> vphysics2/physicsshape.cpp:1011
void CPhysicsShape::GetFriction()
{
} /* size: 10 */

// <00CAB8BD> vphysics2/physicsshape.cpp:1016
// variable: 1
void CPhysicsShape::SetElasticity(float f)
{
	b3SurfaceMaterial surfaceMaterial; // 1019
} /* size: 158, variables: 1 */

// <00CAB831> vphysics2/physicsshape.cpp:1024
// variable: 1
void CPhysicsShape::SetRollingResistance(float f)
{
	b3SurfaceMaterial surfaceMaterial; // 1027
} /* size: 158, variables: 1 */

// <00CAB663> vphysics2/physicsshape.cpp:1032
// variable: 1
// function calls: 6
void CPhysicsShape::SetLocalVelocity(const Vector& vLocalVelocity)
{
	b3SurfaceMaterial surfaceMaterial; // 1039
	Vector::operator==(
			const Vector& src);  // 1034
	Vector::operator=(
			const Vector& vOther);  // 1037
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 1040
	Vector::IsZero(
		float tolerance);  // 1043
} /* size: 408, variables: 1, inline expansions: 6 (177 bytes) */

// <00CAB634> vphysics2/physicsshape.cpp:1056
void CPhysicsShape::GetLocalVelocity()
{
} /* size: 26 */

// <00CB4354> vphysics2/physicsshape.cpp:1061
// variable: 1
// function calls: 2
void CPhysicsShape::IsTouching(IPhysicsShape* pShape, bool bTriggers)
{
	b3ShapeId shapeId; // 1066
	AsShape(const IPhysicsShape* pShape); // 1066
	CPhysicsShape::IsTouching(
			IPhysicsShape* pShape,
			bool bTriggers);  // 1061
} /* size: 83, variables: 1, inline expansions: 2 (49 bytes) */

// <00CAB5F4> vphysics2/physicsshape.cpp:1061
// variable: 1
void CPhysicsShape::IsTouching(IPhysicsShape* pShape, bool bTriggers)
{
	b3ShapeId shapeId; // 1066
} /* size: 0, variables: 1 */

// <00CAB5A7> vphysics2/physicsshape.cpp:1078
void CPhysicsShape::ResetProxy()
{
} /* size: 23 */

// <00CAB4FF> vphysics2/physicsshape.cpp:1083
// variables: 6
bool ComputeSubmergedSphereVolume(float radius, b3Vec3 center, b3Plane plane, float* outTotal, float* outSub, b3Vec3* outCenter)
{
	const float  r; // 1085
	const float  d; // 1086
	const float  total; // 1088
	const float  h; // 1105
	const float  sub; // 1106
	const float  z; // 1111
} /* size: 0, variables: 6 */

// <00CAB476> vphysics2/physicsshape.cpp:1117
// variables: 6
inline void ComputeSubmergedDisk(float R, float d, float* outArea, float* outOffset)
{
	const float  fullArea; // 1126
	float x; // 1135
	float t; // 1136
	float area; // 1138
	float h2; // 1142
	float offset; // 1143
} /* size: 0, variables: 6 */

// <00CAB2F2> vphysics2/physicsshape.cpp:1151
// variables: 23
bool ComputeSubmergedCapsuleVolume(const b3Capsule* capsule, b3Transform bodyTransform, b3Plane plane, float* outTotal, float* outSub, b3Vec3* outCenter)
{
	const float  r; // 1153
	b3Vec3 p1; // 1155
	b3Vec3 p2; // 1156
	b3Vec3 axis; // 1158
	float L; // 1159
	b3Vec3 dir; // 1167
	const int  slices; // 1173
	const float  sMin; // 1174
	const float  sMax; // 1175
	const float  ds; // 1176
	float volume; // 1178
	b3Vec3 centroid; // 1179
	{
		int i; // 1181
		{
			float s; // 1183
			b3Vec3 sliceCenter; // 1185
			float rs; // 1187
			float d; // 1206
			float area; // 1208
			float offset; // 1208
			float dv; // 1214
			b3Vec3 c; // 1217
			{
				float u; // 1190
			}
			{
				float u; // 1195
			}
		}
	}
} /* size: 0, variables: 12 */

// <00CAB23A> vphysics2/physicsshape.cpp:1233
// variables: 9
int ClipPolygonToPlane(b3Vec3* out, const b3Vec3* in, int count, b3Plane plane)
{
	int outCount; // 1235
	{
		int i; // 1237
		{
			b3Vec3 a; // 1239
			b3Vec3 b; // 1240
			float da; // 1242
			float db; // 1243
			bool aIn; // 1245
			bool bIn; // 1246
			{
				float t; // 1253
			}
		}
	}
} /* size: 0, variables: 1 */

// <00CAB0DF> vphysics2/physicsshape.cpp:1261
// variables: 18
bool ComputeSubmergedHullVolume(const b3Hull* hull, b3Transform bodyTransform, b3Plane waterPlane, float* outSubmergedVolume, b3Vec3* outCenterOfBuoyancy)
{
	b3Plane localPlane; // 1263
	const b3HullFace* faces; // 1265
	const b3HullHalfEdge* edges; // 1266
	const b3Vec3* points; // 1267
	float volume; // 1269
	b3Vec3 centroid; // 1270
	b3Vec3 facePoly; // 1272
	b3Vec3 clippedPoly; // 1273
	{
		int f; // 1275
		{
			int edgeIndex; // 1277
			int count; // 1278
			int clippedCount; // 1287
			{
				const b3HullHalfEdge* e; // 1282
			}
			{
				int i; // 1291
				{
					b3Vec3 a; // 1293
					b3Vec3 b; // 1294
					b3Vec3 c; // 1295
					float v; // 1297
				}
			}
		}
	}
} /* size: 0, variables: 8 */

// <00CA8EDF> vphysics2/physicsshape.cpp:1317
// variables: 32
// function calls: 173
void CPhysicsShape::GetSubmergedVolume(const CTransform& bodyTransform, const VPlane& plane, float* outTotalVolume, float* outSubmergedVolume, Vector* outCenterOfBuoyancy)
{
	b3Vec3 center; // 1323
	{
		const b3Hull* hull; // 1329
		b3GetHullFaces(const b3Hull* hull); // 1265
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 810
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 400
		b3MulSub(b3Vec3 a,
			float s,
			b3Vec3 b);  // 401
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 402
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 403
		b3InvRotateVector(b3Quat q,
					b3Vec3 v);  // 811
		b3InvTransformPlane(b3Transform transform,
					b3Plane plane);  // 1263
		b3GetHullEdges(const b3Hull* hull); // 1266
		b3GetHullPoints(const b3Hull* hull); // 1267
		{
			int f; // 1275
			{
				int edgeIndex; // 1277
				int count; // 1278
				int clippedCount; // 1287
				{
					const b3HullHalfEdge* e; // 1282
				}
				{
					int i; // 1237
					{
						b3Vec3 a; // 1239
						b3Vec3 b; // 1240
						float da; // 1242
						float db; // 1243
						bool aIn; // 1245
						bool bIn; // 1246
						{
							float t; // 1253
							b3Lerp(b3Vec3 a,
								b3Vec3 b,
								float alpha);  // 1254
						}
						b3Dot(b3Vec3 a,
							b3Vec3 b);  // 818
						b3PlaneSeparation(b3Plane plane,
									b3Vec3 point);  // 1242
						b3Dot(b3Vec3 a,
							b3Vec3 b);  // 818
						b3PlaneSeparation(b3Plane plane,
									b3Vec3 point);  // 1243
					}
				}
				ClipPolygonToPlane(b3Vec3* out,
							const b3Vec3* in,
							int count,
							b3Plane plane);  // 1287
				{
					int i; // 1291
					{
						b3Vec3 a; // 1293
						b3Vec3 b; // 1294
						b3Vec3 c; // 1295
						float v; // 1297
						b3Cross(b3Vec3 a,
							b3Vec3 b);  // 1297
						b3Add(b3Vec3 a,
							b3Vec3 b);  // 1016
						operator+(b3Vec3 a,
								b3Vec3 b);  // 1299
						b3Add(b3Vec3 a,
							b3Vec3 b);  // 1016
						operator+(b3Vec3 a,
								b3Vec3 b);  // 1299
						b3Dot(b3Vec3 a,
							b3Vec3 b);  // 1297
						b3MulSV(float s,
							b3Vec3 a);  // 1001
						operator*(float s,
								b3Vec3 a);  // 1299
						b3Add(b3Vec3 a,
							b3Vec3 b);  // 978
						operator+=(b3Vec3& a,
								b3Vec3 b);  // 1299
					}
				}
			}
		}
		b3AbsFloat(float a); // 1303
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
				b3Vec3 v);  // 1312
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 1312
		ComputeSubmergedHullVolume(const b3Hull* hull,
						b3Transform bodyTransform,
						b3Plane waterPlane,
						float* outSubmergedVolume,
						b3Vec3* outCenterOfBuoyancy);  // 1333
		Vector::operator[](
				int i);  // 31
		Vector::operator[](
				int i);  // 31
		Vector::operator[](
				int i);  // 31
		B3Cast<b3Vec3, Vector>(const Vector& v); // 88
		B3Cast<b3Plane, VPlane>(const VPlane& v); // 1333
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
		B3Cast<b3Transform, CTransform>(const CTransform& v); // 1333
	}
	{
		const b3Sphere  sphere; // 1344
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
		B3Cast<b3Vec3, VectorAligned>(const VectorAligned& v); // 1346
		Vector::operator[](
				int i);  // 31
		Vector::operator[](
				int i);  // 31
		Vector::operator[](
				int i);  // 31
		B3Cast<b3Vec3, Vector>(const Vector& v); // 88
		B3Cast<b3Plane, VPlane>(const VPlane& v); // 1346
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 1086
		b3MulSV(float s,
			b3Vec3 a);  // 1112
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1112
		ComputeSubmergedSphereVolume(float radius,
						b3Vec3 center,
						b3Plane plane,
						float* outTotal,
						float* outSub,
						b3Vec3* outCenter);  // 1346
		VectorAligned::operator fltx4(); // 71
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1348
	}
	{
		const b3Capsule  capsule; // 1358
		Vector::operator[](
				int i);  // 31
		Vector::operator[](
				int i);  // 31
		Vector::operator[](
				int i);  // 31
		B3Cast<b3Vec3, Vector>(const Vector& v); // 88
		B3Cast<b3Plane, VPlane>(const VPlane& v); // 1360
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		QuaternionAligned::y(); // 41
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		QuaternionAligned::z(); // 41
		_mm_cvtss_f32(__m128 __A); // 1553
		GetWSIMD<>(fltx4 a); // 77
		QuaternionAligned::w(); // 41
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
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		VectorAligned::x(); // 288
		VectorAligned::operator[](
				int index);  // 36
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 290
		VectorAligned::operator[](
				int index);  // 36
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		VectorAligned::y(); // 289
		VectorAligned::operator[](
				int index);  // 36
		B3Cast<b3Vec3, VectorAligned>(const VectorAligned& v); // 61
		VectorAligned::operator fltx4(); // 71
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 61
		B3Cast<b3Transform, CTransform>(const CTransform& v); // 1360
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 389
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 391
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 390
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 392
		b3RotateVector(b3Quat q,
				b3Vec3 v);  // 566
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 567
		b3TransformPoint(b3Transform t,
				b3Vec3 v);  // 1155
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
				b3Vec3 v);  // 1156
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1158
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 1159
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 1086
		b3MulSV(float s,
			b3Vec3 a);  // 1112
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1112
		ComputeSubmergedSphereVolume(float radius,
						b3Vec3 center,
						b3Plane plane,
						float* outTotal,
						float* outSub,
						b3Vec3* outCenter);  // 1163
		{
			int i; // 1181
			{
				float s; // 1183
				b3Vec3 sliceCenter; // 1185
				float rs; // 1187
				float d; // 1206
				float area; // 1208
				float offset; // 1208
				float dv; // 1214
				b3Vec3 c; // 1217
				{
					float u; // 1195
				}
				b3Dot(b3Vec3 a,
					b3Vec3 b);  // 1206
				ComputeSubmergedDisk(float R,
							float d,
							float* outArea,
							float* outOffset);  // 1209
				b3MulSub(b3Vec3 a,
					float s,
					b3Vec3 b);  // 1218
				b3MulSV(float s,
					b3Vec3 a);  // 1001
				operator*(float s,
						b3Vec3 a);  // 1220
				b3Add(b3Vec3 a,
					b3Vec3 b);  // 978
				operator+=(b3Vec3& a,
						b3Vec3 b);  // 1220
				b3MulAdd(b3Vec3 a,
					float s,
					b3Vec3 b);  // 1185
			}
		}
		b3MulSV(float s,
			b3Vec3 a);  // 1167
		b3MulSV(float s,
			b3Vec3 a);  // 1006
		operator*(b3Vec3 a,
				float s);  // 1226
		ComputeSubmergedCapsuleVolume(const b3Capsule* capsule,
						b3Transform bodyTransform,
						b3Plane plane,
						float* outTotal,
						float* outSub,
						b3Vec3* outCenter);  // 1360
	}
	Vector::operator=(
			const Vector& vOther);  // 1321
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 1374
	Vector::operator=(
			const Vector& vOther);  // 1374
} /* size: 0, variables: 1, inline expansions: 4 (62 bytes) */

// <00CA8EB1> vphysics2/physicsshape.cpp:1377
void CPhysicsShape::GetManagedHandle()
{
} /* size: 9 */

