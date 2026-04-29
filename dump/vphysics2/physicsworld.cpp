
//
// vphysics2/physicsworld.cpp
//
//	referenced by: libengine2.so
//
//	functions: 142
//	classes: 5
//	structs: 2
//

// <00B38B2A> vphysics2/physicsworld.cpp:32
// variables: 2
// function call: 1
ResourceManifestDesc_t* InitManifestDesc<PhysicsDebugMaterials::CTemplateArg>(CTemplateArg& def)
{
	ResourceManifestDesc_t s_Manifest; // 32
	ManifestEntryGroupList_t s_pManifestEntries; // 32
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 34
} /* size: 170, variables: 2, inline expansions: 1 (50 bytes) */

// <00B389F9> vphysics2/physicsworld.cpp:38
// function calls: 4
HMaterial GetPhysicsDebugMaterial(void)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator CWeakHandle<InfoForResourceTypeIMaterial2>(); // 48
} /* size: 125, inline expansions: 4 (16 bytes) */

// <00B389DC> vphysics2/physicsworld.cpp:51
inline Vector4D MakeRGBA8(b3HexColor h)
{
} /* size: 0 */

// <00ABDA55> vphysics2/physicsworld.cpp:56
// member functions: 8
// member variables: 2
// class size: 32
class CPhysicsDebugShape {
	/* vphysics2/physicsworld.cpp:60 */
	void CPhysicsDebugShape(CPhysicsDebugShape* , ISceneWorld* , int, const Vector* , const Vector* , int, const uint32* , int, const uint32* );
	/* vphysics2/physicsworld.cpp:105 */
	void ~CPhysicsDebugShape(CPhysicsDebugShape* );
	/* vphysics2/physicsworld.cpp:118 */
	void Disable(CPhysicsDebugShape* );
	/* vphysics2/physicsworld.cpp:131 */
	void Draw(const CPhysicsDebugShape* , const b3Transform& , const b3HexColor& );
	PhysicsSceneObject_t m_pEdgeObject; /* 0 16 */
	PhysicsSceneObject_t m_pBodyObject; /* 16 16 */
	void CPhysicsDebugShape(class CPhysicsDebugShape *, class ISceneWorld *, int, const class Vector  *, const class Vector  *, int, const uint32  *, int, const uint32  *); /* linkage=_ZN18CPhysicsDebugShapeC4EP11ISceneWorldiPK6VectorS4_iPKjiS6_ */
	void ~CPhysicsDebugShape(class CPhysicsDebugShape *); /* linkage=_ZN18CPhysicsDebugShapeD4Ev */
	void Disable(class CPhysicsDebugShape *); /* linkage=_ZN18CPhysicsDebugShape7DisableEv */
	void Draw(const class CPhysicsDebugShape  *, const b3Transform  &, const b3HexColor  &); /* linkage=_ZNK18CPhysicsDebugShape4DrawERK11b3TransformRK10b3HexColor */
};

// <00B37B37> vphysics2/physicsworld.cpp:60
// variables: 11
// function calls: 58
void CPhysicsDebugShape::CPhysicsDebugShape(ISceneWorld* pSceneWorld, int VertexCount, const Vector* VertexPositions, const Vector* VertexNormals, int TriangleCount, const uint32* TriangleIndices, int EdgeCount, const uint32* EdgeIndices)
{
	{
		HMaterial hMainMaterial; // 65
		CStridedArray<Vector> vertices; // 66
	}
	{
		HMaterial hMainMaterial; // 82
		CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> > v; // 83
		{
			int i; // 86
		}
	}
	PhysicsSceneObject_t::PhysicsSceneObject_t(); // 62
	PhysicsSceneObject_t::PhysicsSceneObject_t(); // 62
	{
		HMaterial hMainMaterial; // 65
		CStridedArray<Vector> vertices; // 66
		CStridedArray<Vector>::CStridedArray(
				const Vector* pFirstElement,
				uint nElementCount,
				uint nStride);  // 66
		CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 67
		CSceneObject::MirrorFlags(); // 1901
		CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
							ESceneObjectFlags flags);  // 1976
		CSceneObject::DisableRendering(); // 74
		PhysicsSceneObject_t::operator->(); // 74
		PhysicsSceneObject_t::operator->(); // 75
		CSceneObject::MirrorFlags(); // 1901
		CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
							ESceneObjectFlags flags);  // 1934
		CSceneObject::ChangeFlags(
				ESceneObjectFlags nNewFlags,
				ESceneObjectFlags nNewFlagsMask);  // 1951
		CSceneObject::ClearFlags(
				ESceneObjectFlags nFlagsToClear);  // 75
		PhysicsSceneObject_t::operator->(); // 76
		CSceneObject::SetLayerMatchID(
				CUtlStringToken nTok);  // 76
		CSceneObject::SetBatchable(
				bool bIsBatchable);  // 77
		PhysicsSceneObject_t::operator->(); // 77
	}
	{
		HMaterial hMainMaterial; // 82
		CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> > v; // 83
		CUtlMemory<RnVertex_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<RnVertex_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >::CUtlVector(); // 83
		CUtlMemory<RnVertex_t, int>::Grow(
			int num);  // 806
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::GrowVector(
				int num);  // 1445
		{
			int i; // 1451
		}
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::SetCount(
			int count);  // 84
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::Base(); // 29
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::Count(); // 29
		CStridedArray<RnVertex_t>::CStridedArray(
				const CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& vertices);  // 96
		CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 91
		PhysicsSceneObject_t::operator->(); // 98
		CSceneObject::MirrorFlags(); // 1901
		CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
							ESceneObjectFlags flags);  // 1976
		CSceneObject::DisableRendering(); // 98
		PhysicsSceneObject_t::operator->(); // 99
		CSceneObject::MirrorFlags(); // 1901
		CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
							ESceneObjectFlags flags);  // 1934
		CSceneObject::ChangeFlags(
				ESceneObjectFlags nNewFlags,
				ESceneObjectFlags nNewFlagsMask);  // 1951
		CSceneObject::ClearFlags(
				ESceneObjectFlags nFlagsToClear);  // 99
		PhysicsSceneObject_t::operator->(); // 100
		CSceneObject::SetLayerMatchID(
				CUtlStringToken nTok);  // 100
		CSceneObject::SetBatchable(
				bool bIsBatchable);  // 101
		CUtlMemory<RnVertex_t, int>::Purge(); // 903
		CUtlMemory<RnVertex_t, int>::Purge(); // 1799
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::Purge(); // 560
		CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >::~CUtlVector(); // 102
		PhysicsSceneObject_t::operator->(); // 101
		{
			int i; // 86
			RnVertex_t::RnVertex_t(
					const Vector& vPos,
					const Vector& vNormal);  // 88
			Vector::operator=(
					const Vector& vOther);  // 15
			Vector::operator=(
					const Vector& vOther);  // 15
			RnVertex_t::operator=(
					RnVertex_t &);  // 88
			CUtlVectorBase<RnVertex_t, CUtlMemory<RnVertex_t, int> >::operator[](
					int i);  // 88
		}
	}
} /* size: 896, inline expansions: 2 (11 bytes) */

// <00B37A79> vphysics2/physicsworld.cpp:60
// variables: 5
inline void CPhysicsDebugShape::CPhysicsDebugShape(ISceneWorld* pSceneWorld, int VertexCount, const Vector* VertexPositions, const Vector* VertexNormals, int TriangleCount, const uint32* TriangleIndices, int EdgeCount, const uint32* EdgeIndices)
{
	{
		HMaterial hMainMaterial; // 65
		CStridedArray<Vector> vertices; // 66
	}
	{
		HMaterial hMainMaterial; // 82
		CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> > v; // 83
		{
			int i; // 86
		}
	}
} /* size: 0 */

// <00B37A62> vphysics2/physicsworld.cpp:105
void CPhysicsDebugShape::~CPhysicsDebugShape()
{
} /* size: 0 */

// <00B37A49> vphysics2/physicsworld.cpp:105
inline void CPhysicsDebugShape::~CPhysicsDebugShape()
{
} /* size: 0 */

// <00B37A30> vphysics2/physicsworld.cpp:118
inline void CPhysicsDebugShape::Disable()
{
} /* size: 0 */

// <00B379DE> vphysics2/physicsworld.cpp:131
// variables: 2
inline void CPhysicsDebugShape::Draw(const b3Transform& Transform, const b3HexColor& Color)
{
	{
		Vector4D vTint; // 138
	}
	{
		Vector4D vTint; // 149
	}
} /* size: 0 */

// <00B3798F> vphysics2/physicsworld.cpp:160
// variables: 3
CPhysicsDebugShape* CreateDebugSphere(ISceneWorld* pSceneWorld, const b3Sphere* Sphere)
{
	CUtlVector<Vector, CUtlMemory<Vector, int> > vertices; // 165
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > indices; // 166
	RnSphere_t sphere; // 168
} /* size: 0, variables: 3 */

// <00B37940> vphysics2/physicsworld.cpp:174
// variables: 3
CPhysicsDebugShape* CreateDebugCapsule(ISceneWorld* pSceneWorld, const b3Capsule* Capsule)
{
	CUtlVector<Vector, CUtlMemory<Vector, int> > vertices; // 179
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > indices; // 180
	RnCapsule_t capsule; // 182
} /* size: 0, variables: 3 */

// <00B378A6> vphysics2/physicsworld.cpp:188
// variables: 8
CPhysicsDebugShape* CreateDebugHull(ISceneWorld* pSceneWorld, const b3Hull* Hull)
{
	int VertexCount; // 193
	const b3Vec3* Vertices; // 194
	int HalfEdgeCount; // 196
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > EdgeIndices; // 197
	const b3HullHalfEdge* edges; // 200
	{
		int i; // 202
		{
			const b3HullHalfEdge& Edge; // 204
			const b3HullHalfEdge& Twin; // 205
		}
	}
} /* size: 0, variables: 5 */

// <00B37814> vphysics2/physicsworld.cpp:214
// variables: 8
CPhysicsDebugShape* CreateDebugMesh(ISceneWorld* pSceneWorld, const b3Mesh* mesh)
{
	const b3MeshData* meshData; // 219
	b3Vec3 scale; // 223
	int vertexCount; // 224
	int triangleCount; // 225
	const b3Vec3* vertices; // 226
	CUtlVector<Vector, CUtlMemory<Vector, int> > scaledVertices; // 228
	const b3MeshTriangle* triangles; // 235
	{
		int i; // 230
	}
} /* size: 0, variables: 7 */

// <00AFB92F> vphysics2/physicsworld.cpp:240
// member variables: 2
// struct size: 8
struct IndexPair {
	uint32 Index1; /* 0 4 */
	uint32 Index2; /* 4 4 */
};

// <00B37570> vphysics2/physicsworld.cpp:246
// variables: 35
CPhysicsDebugShape* CreateDebugHeightField(ISceneWorld* pSceneWorld, const b3HeightField* HeightShape)
{
	uint32 RowCount; // 251
	uint32 ColumnCount; // 252
	uint16_t* CompressedHeights; // 253
	uint8_t* Materials; // 254
	float MinHeight; // 255
	float HeightScale; // 256
	b3Vec3 Scale; // 257
	uint32 VertexCount; // 259
	uint32 CellCount; // 260
	CUtlVector<b3Vec3, CUtlMemory<b3Vec3, int> > Vertices; // 262
	uint32 VertexIndex; // 265
	const char   __FUNCTION__; // 61753
	uint32 EdgeCount; // 282
	CUtlVector<IndexPair, CUtlMemory<IndexPair, int> > EdgePairs; // 283
	int EdgeIndex; // 286
	{
		uint32 Row; // 266
		{
			uint32 Column; // 268
			{
				uint32 HeightIndex; // 270
				float X; // 272
				float Y; // 273
				float Z; // 274
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
	}
	{
		uint32 Row; // 288
		{
			uint32 Column; // 290
			{
				uint32 CellIndex; // 292
				uint32 Index1; // 299
				uint32 Index2; // 300
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 293
				}
			}
		}
	}
	{
		uint32 Column; // 307
		{
			uint32 Row; // 309
			{
				uint32 CellIndex; // 311
				uint32 Index1; // 318
				uint32 Index2; // 319
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 312
				}
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 325
	}
} /* size: 0, variables: 15 */

// <00B37542> vphysics2/physicsworld.cpp:331
CPhysicsDebugShape* CreateDebugShape(ISceneWorld* pSceneWorld, const b3DebugShape* DebugShape)
{
} /* size: 0 */

// <00B32C0C> vphysics2/physicsworld.cpp:344
// variables: 37
// function calls: 305
void* CreateDebugShape(const b3DebugShape* debugShape, void* context)
{
	CPhysicsWorld* pWorld; // 349
	ISceneWorld* pSceneWorld; // 350
	CPhysicsDebugShape* pDebugShape; // 354
	CPhysicsWorld::GetDebugScene(); // 350
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 165
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 166
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
				int num);  // 1268
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1266
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1266
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1266
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1266
	Vector::operator=(
			const Vector& vOther);  // 1269
	Vector::operator=(
			const Vector& vOther);  // 1270
	Vector::operator=(
			const Vector& vOther);  // 1272
	Vector::operator=(
			const Vector& vOther);  // 1273
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1269
	Vector::operator=(
			const Vector& vOther);  // 1271
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1274
	Vector::operator=(
			const Vector& vOther);  // 1274
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
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 1288
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 1287
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 1288
					CUtlMemory<Vector, int>::operator[](
							int i);  // 602
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
						int i);  // 1252
					Construct<Vector, Vector>(Vector* pMemory); // 1252
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
							Vector& src);  // 1288
					VectorAdd(const Vector& a,
							const Vector& b,
							Vector& c);  // 1437
					Vector::Vector(); // 1436
					Vector::operator+(
							const Vector& v);  // 1288
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 1288
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 1289
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 1290
					CUtlMemory<Vector, int>::operator[](
							int i);  // 602
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
						int i);  // 1252
					Construct<Vector, Vector>(Vector* pMemory); // 1252
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
							Vector& src);  // 1290
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1290
					VectorAdd(const Vector& a,
							const Vector& b,
							Vector& c);  // 1437
					Vector::Vector(); // 1436
					Vector::operator+(
							const Vector& v);  // 1290
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 1290
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 1290
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 1291
					CUtlMemory<Vector, int>::operator[](
							int i);  // 602
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
						int i);  // 1252
					Construct<Vector, Vector>(Vector* pMemory); // 1252
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
							Vector& src);  // 1292
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1292
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 1292
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 1292
					Vector::Vector(); // 1436
					Vector::operator+(
							const Vector& v);  // 1292
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 1292
				}
			}
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 1294
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 1295
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 1296
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 1297
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 1298
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 1299
		}
	}
	{
		int i; // 1301
		Vector::operator+=(
				const Vector& v);  // 1303
	}
	RnSphere_t::GetOutline(
			CUtlVector<Vector, CUtlMemory<Vector, int> >& vertices,
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& indices,
			uint nSplit);  // 169
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 168
	RnSphere_t::RnSphere_t(
			const Vector& vCenter,
			float flRadius);  // 168
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 172
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 172
	CreateDebugSphere(ISceneWorld* pSceneWorld,
				const b3Sphere* Sphere);  // 335
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 179
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 180
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 182
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 182
	Vector::operator=(
			const Vector& vOther);  // 132
	Vector::operator=(
			const Vector& vOther);  // 132
	RnCapsule_t::RnCapsule_t(
			const Vector& vCenter0,
			const Vector& vCenter1,
			float flRadius);  // 182
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 186
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 186
	CreateDebugCapsule(ISceneWorld* pSceneWorld,
				const b3Capsule* Capsule);  // 336
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 238
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 228
	b3GetMeshVertices(const b3MeshData* mesh); // 226
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
		int count);  // 229
	{
		int i; // 230
		b3Mul(b3Vec3 a,
			b3Vec3 b);  // 1011
		operator*(b3Vec3 a,
				b3Vec3 b);  // 232
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 11
		B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 232
		Vector::operator=(
				const Vector& vOther);  // 232
	}
	b3GetMeshTriangles(const b3MeshData* mesh); // 235
	CreateDebugMesh(ISceneWorld* pSceneWorld,
			const b3Mesh* mesh);  // 338
	CUtlMemory<b3Vec3, int>::ValidateGrowSize(); // 475
	CUtlMemory<b3Vec3, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<b3Vec3, CUtlMemory<b3Vec3, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<b3Vec3, CUtlMemory<b3Vec3, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<b3Vec3, CUtlMemory<b3Vec3, int> >::CUtlVector(); // 262
	CUtlMemory<b3Vec3, int>::Grow(
		int num);  // 806
	CUtlVectorBase<b3Vec3, CUtlMemory<b3Vec3, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<b3Vec3, CUtlMemory<b3Vec3, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<b3Vec3, CUtlMemory<b3Vec3, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<b3Vec3, CUtlMemory<b3Vec3, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<b3Vec3, CUtlMemory<b3Vec3, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<b3Vec3, CUtlMemory<b3Vec3, int> >::SetCount(
		int count);  // 263
	{
		uint32 Row; // 266
		{
			uint32 Column; // 268
			{
				uint32 HeightIndex; // 270
				float X; // 272
				float Y; // 273
				float Z; // 274
				b3Mul(b3Vec3 a,
					b3Vec3 b);  // 1011
				operator*(b3Vec3 a,
						b3Vec3 b);  // 276
				CUtlMemory<b3Vec3, int>::operator[](
						int i);  // 588
				CUtlVectorBase<b3Vec3, CUtlMemory<b3Vec3, int> >::operator[](
						int i);  // 276
			}
		}
	}
	{
	}
	CUtlMemory<IndexPair, int>::ValidateGrowSize(); // 475
	CUtlMemory<IndexPair, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IndexPair, CUtlMemory<IndexPair, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<IndexPair, CUtlMemory<IndexPair, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IndexPair, CUtlMemory<IndexPair, int> >::CUtlVector(); // 283
	CUtlMemory<IndexPair, int>::Grow(
		int num);  // 806
	CUtlVectorBase<IndexPair, CUtlMemory<IndexPair, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<IndexPair, CUtlMemory<IndexPair, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<IndexPair, CUtlMemory<IndexPair, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<IndexPair, CUtlMemory<IndexPair, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<IndexPair, CUtlMemory<IndexPair, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<IndexPair, CUtlMemory<IndexPair, int> >::SetCount(
		int count);  // 284
	{
		uint32 Row; // 288
		{
			uint32 Column; // 290
			{
				uint32 CellIndex; // 292
				uint32 Index1; // 299
				uint32 Index2; // 300
				{
				}
				CUtlMemory<IndexPair, int>::operator[](
						int i);  // 588
				CUtlVectorBase<IndexPair, CUtlMemory<IndexPair, int> >::operator[](
						int i);  // 302
			}
		}
	}
	{
		uint32 Column; // 307
		{
			uint32 Row; // 309
			{
				uint32 CellIndex; // 311
				uint32 Index1; // 318
				uint32 Index2; // 319
				{
				}
				CUtlMemory<IndexPair, int>::operator[](
						int i);  // 588
				CUtlVectorBase<IndexPair, CUtlMemory<IndexPair, int> >::operator[](
						int i);  // 321
			}
		}
	}
	{
	}
	CUtlMemory<IndexPair, int>::Purge(); // 903
	CUtlMemory<IndexPair, int>::Purge(); // 1799
	CUtlVectorBase<IndexPair, CUtlMemory<IndexPair, int> >::Purge(); // 560
	ValidateAlignment<IndexPair>(void); // 508
	CUtlMemory<IndexPair, int>::Purge(); // 510
	CUtlMemory<IndexPair, int>::~CUtlMemory(); // 562
	CUtlVectorBase<IndexPair, CUtlMemory<IndexPair, int> >::~CUtlVectorBase(); // 410
	CUtlVector<IndexPair, CUtlMemory<IndexPair, int> >::~CUtlVector(); // 329
	CUtlMemory<b3Vec3, int>::Purge(); // 903
	CUtlMemory<b3Vec3, int>::Purge(); // 1799
	CUtlVectorBase<b3Vec3, CUtlMemory<b3Vec3, int> >::Purge(); // 560
	ValidateAlignment<b3Vec3>(void); // 508
	CUtlMemory<b3Vec3, int>::Purge(); // 510
	CUtlMemory<b3Vec3, int>::~CUtlMemory(); // 562
	CUtlVectorBase<b3Vec3, CUtlMemory<b3Vec3, int> >::~CUtlVectorBase(); // 410
	CUtlVector<b3Vec3, CUtlMemory<b3Vec3, int> >::~CUtlVector(); // 329
	CreateDebugHeightField(ISceneWorld* pSceneWorld,
				const b3HeightField* HeightShape);  // 339
	b3GetHullPoints(const b3Hull* hull); // 194
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 197
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount(
		int count);  // 198
	b3GetHullEdges(const b3Hull* hull); // 200
	{
		int i; // 202
		{
			const b3HullHalfEdge& Edge; // 204
			const b3HullHalfEdge& Twin; // 205
		}
	}
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 212
	CreateDebugHull(ISceneWorld* pSceneWorld,
			const b3Hull* Hull);  // 337
	CreateDebugShape(ISceneWorld* pSceneWorld,
			const b3DebugShape* DebugShape);  // 354
	CUtlMemory<CPhysicsDebugShape::NumAllocated(); // 1196
	CUtlMemory<CPhysicsDebugShape::operator[](
			int i);  // 602
	CUtlVectorBase<CPhysicsDebugShape::Element(
		int i);  // 1201
	CopyConstruct<CPhysicsDebugShape*>(CPhysicsDebugShape** pMemory,
						CPhysicsDebugShape* const& src);  // 1201
	CUtlMemory<CPhysicsDebugShape::Base(); // 112
	CUtlVectorBase<CPhysicsDebugShape::Base(); // 368
	CUtlVectorBase<CPhysicsDebugShape::ResetDbgInfo(); // 824
	CUtlVectorBase<CPhysicsDebugShape::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CPhysicsDebugShape::AddToTail(
			CPhysicsDebugShape* const& src);  // 1156
	CPhysicsWorld::AddDebugShape(
			CPhysicsDebugShape* pShape);  // 357
} /* size: 0, variables: 3, inline expansions: 176 (22813 bytes) */

// <00B553C2> vphysics2/physicsworld.cpp:363
// variables: 2
// function calls: 5
void DestroyDebugShape(void* userShape, void* context)
{
	CPhysicsDebugShape* pDebugShape; // 365
	CPhysicsWorld* pWorld; // 366
	CPhysicsWorld::RemoveDebugShape(
			CPhysicsDebugShape* pShape);  // 367
	PhysicsSceneObject_t::operator bool(); // 107
	PhysicsSceneObject_t::operator bool(); // 112
	CPhysicsDebugShape::~CPhysicsDebugShape(); // 368
	DestroyDebugShape(void* userShape,
				void* context);  // 363
} /* size: 118, variables: 2, inline expansions: 5 (148 bytes) */

// <00B32BC8> vphysics2/physicsworld.cpp:363
// variables: 2
void DestroyDebugShape(void* userShape, void* context)
{
	CPhysicsDebugShape* pDebugShape; // 365
	CPhysicsWorld* pWorld; // 366
} /* size: 0, variables: 2 */

// <00B2034A> vphysics2/physicsworld.cpp:371
void DebugDrawContext_t::DebugDrawContext_t()
{
} /* size: 0 */

// <00B2032D> vphysics2/physicsworld.cpp:371
inline void DebugDrawContext_t::DebugDrawContext_t()
{
} /* size: 0 */

// <00AFEB8E> vphysics2/physicsworld.cpp:371
// member function: 1
// member variable: 1
// struct size: 24
struct DebugDrawContext_t {
	DebugDrawDelegate_t DebugDrawFcn; /* 0 24 */
	void DebugDrawContext_t(DebugDrawContext_t* );
};

// <00B31388> vphysics2/physicsworld.cpp:376
// variables: 9
// function calls: 95
bool DrawShapeCallback(void* userShape, b3Transform transform, b3HexColor color, void* context)
{
	CPhysicsDebugShape* Shape; // 378
	PhysicsSceneObject_t::operator bool(); // 133
	{
		Vector4D vTint; // 138
		CSceneObject::MirrorFlags(); // 1901
		CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
							ESceneObjectFlags flags);  // 1981
		CSceneObject::EnableRendering(); // 135
		PhysicsSceneObject_t::operator->(); // 136
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
		B3Cast<CTransform, b3Transform>(const b3Transform& v); // 136
		_mm_cvtss_f32(__m128 __A); // 1553
		GetWSIMD<>(fltx4 a); // 98
		VectorAligned::operator fltx4(); // 98
		CTransform::GetScale(); // 362
		{
			int i; // 325
			{
				int j; // 327
			}
		}
		matrix3x4_t::ScaleUpper3x3Matrix(
					float flScale);  // 365
		CTransform::ToMatrix(); // 2098
		matrix3x4_t::Base(); // 291
		matrix3x4_t::Base(); // 291
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 291
		matrix3x4a_t::operator=(
				const matrix3x4_t& src);  // 2082
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 2090
		CSceneObject::SetTransform(
				const matrix3x4_t& mTransform);  // 2098
		CSceneObject::SetTransform(
				const CTransform& transform);  // 136
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 53
		MakeRGBA8(b3HexColor h); // 138
		PhysicsSceneObject_t::operator->(); // 139
		Vector4DSubtract(const Vector4D& a,
				const Vector4D& b,
				Vector4D& c);  // 708
		Vector4D::LengthSqr(); // 709
		Vector4D::Vector4D(); // 707
		Vector4D::DistToSqr(
				const Vector4D& vOther);  // 417
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 417
		CSceneObject::SetAlphaFade(
				float fAlpha);  // 423
		CSceneObject::SetTintRGBA_Gamma(
					const Vector4D& vTint);  // 415
		CSceneObject::SetAlphaFade(
				float fAlpha);  // 431
		CSceneObject::SetTintRGBA_Gamma(
					const Vector4D& vTint);  // 139
		PhysicsSceneObject_t::operator->(); // 140
		PhysicsSceneObject_t::operator->(); // 141
	}
	PhysicsSceneObject_t::operator bool(); // 144
	{
		Vector4D vTint; // 149
		CSceneObject::MirrorFlags(); // 1901
		CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
							ESceneObjectFlags flags);  // 1981
		CSceneObject::EnableRendering(); // 146
		PhysicsSceneObject_t::operator->(); // 147
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
		B3Cast<CTransform, b3Transform>(const b3Transform& v); // 147
		_mm_cvtss_f32(__m128 __A); // 1553
		GetWSIMD<>(fltx4 a); // 98
		VectorAligned::operator fltx4(); // 98
		CTransform::GetScale(); // 362
		{
			int i; // 325
			{
				int j; // 327
			}
		}
		matrix3x4_t::ScaleUpper3x3Matrix(
					float flScale);  // 365
		CTransform::ToMatrix(); // 2098
		matrix3x4_t::Base(); // 291
		matrix3x4_t::Base(); // 291
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 291
		matrix3x4a_t::operator=(
				const matrix3x4_t& src);  // 2082
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 2090
		CSceneObject::SetTransform(
				const matrix3x4_t& mTransform);  // 2098
		CSceneObject::SetTransform(
				const CTransform& transform);  // 147
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 53
		MakeRGBA8(b3HexColor h); // 149
		PhysicsSceneObject_t::operator->(); // 150
		Vector4DSubtract(const Vector4D& a,
				const Vector4D& b,
				Vector4D& c);  // 708
		Vector4D::LengthSqr(); // 709
		Vector4D::Vector4D(); // 707
		Vector4D::DistToSqr(
				const Vector4D& vOther);  // 417
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 417
		CSceneObject::SetAlphaFade(
				float fAlpha);  // 423
		CSceneObject::SetTintRGBA_Gamma(
					const Vector4D& vTint);  // 415
		CSceneObject::SetAlphaFade(
				float fAlpha);  // 431
		CSceneObject::SetTintRGBA_Gamma(
					const Vector4D& vTint);  // 150
		PhysicsSceneObject_t::operator->(); // 151
		PhysicsSceneObject_t::operator->(); // 152
	}
	CPhysicsDebugShape::Draw(
		const b3Transform& Transform,
		const b3HexColor& Color);  // 379
} /* size: 2144, variables: 1, inline expansions: 3 (2033 bytes) */

// <00B30ED7> vphysics2/physicsworld.cpp:384
// variables: 3
// function calls: 18
void DrawStringCallback(b3Vec3 p, const char* s, b3HexColor color, void* context)
{
	DebugDrawContext_t* pContext; // 389
	{
		DrawStringArgs_t args; // 392
		DebugDrawArgs_t out; // 398
		Vector::Vector(); // 246
		Vector4D::Vector4D(); // 246
		DrawStringArgs_t::DrawStringArgs_t(); // 392
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 393
		Vector::operator=(
				const Vector& vOther);  // 394
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 53
		MakeRGBA8(b3HexColor h); // 396
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 11
		B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 394
		ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(DebugDrawArgs_t*), void (*)(DebugDrawArgs_t*), void (*)(DebugDrawAr this); // 1150
		FastDelegate1<DebugDrawArgs_t::operator(
				DebugDrawArgs_t* p1);  // 402
		Vector4D::operator=(
				const Vector4D& vOther);  // 396
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 399
	}
	CUtlAbstractDelegate::operator!(); // 1180
	FastDelegate1<DebugDrawArgs_t::IsEmpty(); // 1163
	FastDelegate1<DebugDrawArgs_t::operator FastDelegate1<DebugDrawArgs_t*, void>::unspecified_bool_type(); // 390
} /* size: 282, variables: 1, inline expansions: 3 (75 bytes) */

// <00B309CC> vphysics2/physicsworld.cpp:406
// variables: 3
// function calls: 19
void DrawSegmentCallback(b3Vec3 p1, b3Vec3 p2, b3HexColor color, void* context)
{
	DebugDrawContext_t* pContext; // 411
	{
		DrawSegmentArgs_t args; // 414
		DebugDrawArgs_t out; // 420
		Vector::Vector(); // 253
		Vector::Vector(); // 253
		Vector4D::Vector4D(); // 253
		DrawSegmentArgs_t::DrawSegmentArgs_t(); // 414
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 11
		B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 416
		Vector::operator=(
				const Vector& vOther);  // 416
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 11
		B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 417
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 53
		MakeRGBA8(b3HexColor h); // 418
		Vector4D::operator=(
				const Vector4D& vOther);  // 418
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 421
		ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(DebugDrawArgs_t*), void (*)(DebugDrawArgs_t*), void (*)(DebugDrawAr this); // 1150
		FastDelegate1<DebugDrawArgs_t::operator(
				DebugDrawArgs_t* p1);  // 424
	}
	CUtlAbstractDelegate::operator!(); // 1180
	FastDelegate1<DebugDrawArgs_t::IsEmpty(); // 1163
	FastDelegate1<DebugDrawArgs_t::operator FastDelegate1<DebugDrawArgs_t*, void>::unspecified_bool_type(); // 412
} /* size: 306, variables: 1, inline expansions: 3 (75 bytes) */

// <00B30577> vphysics2/physicsworld.cpp:428
// variables: 3
// function calls: 16
void DrawPointCallback(b3Vec3 p, float size, b3HexColor color, void* context)
{
	DebugDrawContext_t* pContext; // 433
	{
		DrawPointArgs_t args; // 436
		DebugDrawArgs_t out; // 442
		Vector::Vector(); // 260
		Vector4D::Vector4D(); // 260
		DrawPointArgs_t::DrawPointArgs_t(); // 436
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 11
		B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 438
		Vector::operator=(
				const Vector& vOther);  // 438
		Vector4D::operator=(
				const Vector4D& vOther);  // 440
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 53
		MakeRGBA8(b3HexColor h); // 440
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 443
		ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(DebugDrawArgs_t*), void (*)(DebugDrawArgs_t*), void (*)(DebugDrawAr this); // 1150
		FastDelegate1<DebugDrawArgs_t::operator(
				DebugDrawArgs_t* p1);  // 446
	}
	CUtlAbstractDelegate::operator!(); // 1180
	FastDelegate1<DebugDrawArgs_t::IsEmpty(); // 1163
	FastDelegate1<DebugDrawArgs_t::operator FastDelegate1<DebugDrawArgs_t*, void>::unspecified_bool_type(); // 434
} /* size: 274, variables: 1, inline expansions: 3 (75 bytes) */

// <00B2FEEA> vphysics2/physicsworld.cpp:450
// variables: 3
// function calls: 28
void DrawBoundsCallback(b3AABB aabb, b3HexColor color, void* context)
{
	DebugDrawContext_t* pContext; // 455
	{
		DrawBoundsArgs_t args; // 458
		DebugDrawArgs_t out; // 463
		Vector::Vector(); // 24
		Vector::Vector(); // 24
		AABB_t::AABB_t(); // 267
		Vector4D::Vector4D(); // 267
		DrawBoundsArgs_t::DrawBoundsArgs_t(); // 458
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
		B3Cast<AABB_t, b3AABB>(const b3AABB& v); // 460
		Vector::operator=(
				const Vector& vOther);  // 17
		Vector::operator=(
				const Vector& vOther);  // 17
		AABB_t::operator=(
				AABB_t &);  // 460
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 53
		MakeRGBA8(b3HexColor h); // 461
		Vector4D::operator=(
				const Vector4D& vOther);  // 461
		ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(DebugDrawArgs_t*), void (*)(DebugDrawArgs_t*), void (*)(DebugDrawAr this); // 1150
		FastDelegate1<DebugDrawArgs_t::operator(
				DebugDrawArgs_t* p1);  // 467
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 464
	}
	CUtlAbstractDelegate::operator!(); // 1180
	FastDelegate1<DebugDrawArgs_t::IsEmpty(); // 1163
	FastDelegate1<DebugDrawArgs_t::operator FastDelegate1<DebugDrawArgs_t*, void>::unspecified_bool_type(); // 456
} /* size: 266, variables: 1, inline expansions: 3 (75 bytes) */

// <00B2FAF1> vphysics2/physicsworld.cpp:471
// variables: 3
// function calls: 15
void DrawTransformCallback(b3Transform transform, void* context)
{
	DebugDrawContext_t* pContext; // 476
	{
		DrawTransformArgs_t args; // 479
		DebugDrawArgs_t out; // 484
		Vector::Vector(); // 273
		Quaternion::Quaternion(); // 273
		DrawTransformArgs_t::DrawTransformArgs_t(); // 479
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 11
		B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 481
		Vector::operator=(
				const Vector& vOther);  // 481
		Quaternion::Quaternion(
				vec_t ix,
				vec_t iy,
				vec_t iz,
				vec_t iw);  // 21
		B3Cast<Quaternion, b3Quat>(const b3Quat& v); // 482
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 485
		ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(DebugDrawArgs_t*), void (*)(DebugDrawArgs_t*), void (*)(DebugDrawAr this); // 1150
		FastDelegate1<DebugDrawArgs_t::operator(
				DebugDrawArgs_t* p1);  // 488
	}
	CUtlAbstractDelegate::operator!(); // 1180
	FastDelegate1<DebugDrawArgs_t::IsEmpty(); // 1163
	FastDelegate1<DebugDrawArgs_t::operator FastDelegate1<DebugDrawArgs_t*, void>::unspecified_bool_type(); // 477
} /* size: 174, variables: 1, inline expansions: 3 (51 bytes) */

// <00B2FA45> vphysics2/physicsworld.cpp:492
// variable: 1
bool CustomFilterCallback(b3ShapeId shapeIdA, b3ShapeId shapeIdB, void* context)
{
	CPhysicsWorld* pWorld; // 494
} /* size: 66, variables: 1 */

// <00B2F9D1> vphysics2/physicsworld.cpp:498
bool PreSolveFcn(b3ShapeId shapeIdA, b3ShapeId shapeIdB, b3Vec3 point, b3Vec3 normal, void* context)
{
} /* size: 10 */

// <00B2F597> vphysics2/physicsworld.cpp:503
// function call: 1
void CPhysicsTaskWrapper::~CPhysicsTaskWrapper()
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 503
} /* size: 5, inline expansions: 1 (0 bytes) */

// <00B2F4E1> vphysics2/physicsworld.cpp:503
// function calls: 2
void CPhysicsTaskWrapper::~CPhysicsTaskWrapper()
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 503
	CPhysicsTaskWrapper::~CPhysicsTaskWrapper(); // 503
} /* size: 14, inline expansions: 2 (0 bytes) */

// <00B2F4C4> vphysics2/physicsworld.cpp:503
inline void CPhysicsTaskWrapper::~CPhysicsTaskWrapper()
{
} /* size: 0 */

// <00B054DB> vphysics2/physicsworld.cpp:503
// member functions: 10
// member variables: 6
// vtable entry: 1
// class size: 40
class CPhysicsTaskWrapper : public IMultipleWorkerJob {
public:
	/* class IMultipleWorkerJob <ancestor>; */ /* 0 8 */
	void CPhysicsTaskWrapper(CPhysicsTaskWrapper* , CPhysicsTaskWrapper& );
	void CPhysicsTaskWrapper(CPhysicsTaskWrapper* , const CPhysicsTaskWrapper& );
	/* vphysics2/physicsworld.cpp:506 */
	void CPhysicsTaskWrapper(CPhysicsTaskWrapper* , b3TaskCallback* , int, int, void* );
	/* vphysics2/physicsworld.cpp:515 */
	virtual void Run(CPhysicsTaskWrapper* , int);
private:
	b3TaskCallback * m_pTask; /* 8 8 */
	int m_itemCount; /* 16 4 */
	int m_minRange; /* 20 4 */
	void * m_taskContext; /* 24 8 */
	CInterlockedInt m_nextIndex __attribute__((__aligned__(4))); /* 32 4 */
	virtual void ~CPhysicsTaskWrapper(CPhysicsTaskWrapper* );
	void CPhysicsTaskWrapper(class CPhysicsTaskWrapper *, class CPhysicsTaskWrapper &); /* linkage=_ZN19CPhysicsTaskWrapperC4EOS_ */
	void CPhysicsTaskWrapper(class CPhysicsTaskWrapper *, const class CPhysicsTaskWrapper  &); /* linkage=_ZN19CPhysicsTaskWrapperC4ERKS_ */
	void CPhysicsTaskWrapper(class CPhysicsTaskWrapper *, b3TaskCallback *, int, int, void *); /* linkage=_ZN19CPhysicsTaskWrapperC4EPFviijPvEiiS0_ */
	virtual void Run(class CPhysicsTaskWrapper *, int); /* linkage=_ZN19CPhysicsTaskWrapper3RunEi */
	virtual void ~CPhysicsTaskWrapper(class CPhysicsTaskWrapper *); /* linkage=_ZN19CPhysicsTaskWrapperD4Ev */
} __attribute__((__aligned__(8)));

// <00B2F973> vphysics2/physicsworld.cpp:506
void CPhysicsTaskWrapper::CPhysicsTaskWrapper(b3TaskCallback* pTask, int itemCount, int minRange, void* taskContext)
{
} /* size: 0 */

// <00B2F926> vphysics2/physicsworld.cpp:506
inline void CPhysicsTaskWrapper::CPhysicsTaskWrapper(b3TaskCallback* pTask, int itemCount, int minRange, void* taskContext)
{
} /* size: 0 */

// <00B2F7ED> vphysics2/physicsworld.cpp:515
// variables: 2
// function calls: 3
void CPhysicsTaskWrapper::Run(int nJobIndex)
{
	{
		int startIndex; // 520
		int endIndex; // 525
		Min<int>(const int& val1,
			const int& val2);  // 525
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<int, 4>::AtomicAdd(
				int add);  // 520
	}
} /* size: 64 */

// <00B2F5F7> vphysics2/physicsworld.cpp:541
// variables: 2
// function calls: 3
void* EnqueueTask(b3TaskCallback* task, int itemCount, int minRange, void* taskContext, void* userContext)
{
	CPhysicsTaskWrapper* pWrapper; // 553
	int nMaxThreads; // 555
	IMultipleWorkerJob::IMultipleWorkerJob(); // 511
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 511
	CPhysicsTaskWrapper::CPhysicsTaskWrapper(
				b3TaskCallback* pTask,
				int itemCount,
				int minRange,
				void* taskContext);  // 553
} /* size: 266, variables: 2, inline expansions: 3 (49 bytes) */

// <00B2F437> vphysics2/physicsworld.cpp:564
// variable: 1
void FinishTask(void* userTask, void* userContext)
{
	{
		CPhysicsTaskWrapper* pWrapper; // 568
	}
} /* size: 17 */

// <00B2DAB9> vphysics2/physicsworld.cpp:573
// variables: 2
// function calls: 25
void CPhysicsWorld::CPhysicsWorld()
{
	{
		b3WorldDef worldDef; // 575
	}
	CUtlString::CUtlString(); // 573
	IPhysicsWorld::IPhysicsWorld(); // 573
	CManagedHandle::CManagedHandle(); // 573
	CUtlMemory<CPhysAggregateInstance::ValidateGrowSize(); // 475
	CUtlMemory<CPhysAggregateInstance::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CPhysAggregateInstance::ResetDbgInfo(); // 530
	CUtlVectorBase<CPhysAggregateInstance::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CPhysAggregateInstance::CUtlVector(); // 23
	CUtlIncrementalVector(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns this); // 573
	IPhysIntersectionController::IPhysIntersectionController(); // 15
	CIntersectionController::CIntersectionController(); // 573
	CUtlMemory<CPhysicsDebugShape::ValidateGrowSize(); // 475
	CUtlMemory<CPhysicsDebugShape::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CPhysicsDebugShape::ResetDbgInfo(); // 530
	CUtlVectorBase<CPhysicsDebugShape::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CPhysicsDebugShape::CUtlVector(); // 573
	CUtlMemory<CPhysicsBody::ValidateGrowSize(); // 475
	CUtlMemory<CPhysicsBody::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CPhysicsBody::ResetDbgInfo(); // 530
	CUtlVectorBase<CPhysicsBody::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CPhysicsBody::CUtlVector(); // 573
	CUtlMemory<CUtlHashtableEntry<b3ContactId, empty_t>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<b3ContactId, empty_t>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<b3ContactId, empty_t, CPhysicsWorld::DefaultContactHashFunctor, CPhysicsWorld::DefaultContactEqualFun this); // 178
	CUtlHashtable(const CUtlHashtable<b3ContactId, empty_t, CPhysicsWorld::DefaultContactHashFunctor, CPhysicsWorld::DefaultContactEqualFun this,
			int minimumSize);  // 573
	{
		b3WorldDef worldDef; // 575
	}
} /* size: 573, inline expansions: 25 (401 bytes) */

// <00B2DA91> vphysics2/physicsworld.cpp:573
// variable: 1
void CPhysicsWorld::CPhysicsWorld()
{
	{
		b3WorldDef worldDef; // 575
	}
} /* size: 0 */

// <00B2D08F> vphysics2/physicsworld.cpp:602
// variables: 10
// function calls: 30
void DestroyWrapperObjects(b3BodyId bodyId)
{
	CUtlVector<b3JointId, CUtlMemory<b3JointId, int> > joints; // 607
	int jointCount; // 609
	CUtlVector<b3ShapeId, CUtlMemory<b3ShapeId, int> > shapes; // 626
	int shapeCount; // 628
	{
		int i; // 611
		{
			b3JointId jointId; // 613
			CPhysicsJoint* pJoint; // 617
		}
	}
	{
		int i; // 630
		{
			b3ShapeId shapeId; // 632
			CPhysicsShape* pShape; // 636
		}
	}
	CUtlMemory<b3JointId, int>::ValidateGrowSize(); // 475
	CUtlMemory<b3JointId, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<b3JointId, CUtlMemory<b3JointId, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<b3JointId, CUtlMemory<b3JointId, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<b3JointId, CUtlMemory<b3JointId, int> >::CUtlVector(); // 607
	CUtlMemory<b3JointId, int>::Grow(
		int num);  // 806
	CUtlVectorBase<b3JointId, CUtlMemory<b3JointId, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<b3JointId, CUtlMemory<b3JointId, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<b3JointId, CUtlMemory<b3JointId, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<b3JointId, CUtlMemory<b3JointId, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<b3JointId, CUtlMemory<b3JointId, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<b3JointId, CUtlMemory<b3JointId, int> >::SetCount(
		int count);  // 608
	CUtlMemory<b3ShapeId, int>::ValidateGrowSize(); // 475
	CUtlMemory<b3ShapeId, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<b3ShapeId, CUtlMemory<b3ShapeId, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<b3ShapeId, CUtlMemory<b3ShapeId, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<b3ShapeId, CUtlMemory<b3ShapeId, int> >::CUtlVector(); // 626
	CUtlMemory<b3ShapeId, int>::Purge(); // 903
	CUtlMemory<b3ShapeId, int>::Purge(); // 1799
	CUtlVectorBase<b3ShapeId, CUtlMemory<b3ShapeId, int> >::Purge(); // 560
	ValidateAlignment<b3ShapeId>(void); // 508
	CUtlMemory<b3ShapeId, int>::Purge(); // 510
	CUtlMemory<b3ShapeId, int>::~CUtlMemory(); // 562
	CUtlVectorBase<b3ShapeId, CUtlMemory<b3ShapeId, int> >::~CUtlVectorBase(); // 410
	CUtlVector<b3ShapeId, CUtlMemory<b3ShapeId, int> >::~CUtlVector(); // 646
	CUtlMemory<b3JointId, int>::Purge(); // 903
	CUtlMemory<b3JointId, int>::Purge(); // 1799
	CUtlVectorBase<b3JointId, CUtlMemory<b3JointId, int> >::Purge(); // 560
	CUtlVectorBase<b3JointId, CUtlMemory<b3JointId, int> >::~CUtlVectorBase(); // 410
	CUtlVector<b3JointId, CUtlMemory<b3JointId, int> >::~CUtlVector(); // 646
} /* size: 516, variables: 4, inline expansions: 30 (856 bytes) */

// <00B2C4BF> vphysics2/physicsworld.cpp:648
// variables: 12
// function calls: 53
void CPhysicsWorld::~CPhysicsWorld()
{
	{
		CPhysicsBody* pBody; // 652
		CUtlVector<CPhysicsBody*, CUtlMemory<CPhysicsBody*, int> >& __for_range; // 23621
		iterator __for_begin; // 23631
		iterator __for_end; // 23641
		{
			b3BodyId bodyId; // 654
		}
	}
	{
		CPhysicsBody* pBody; // 652
		CUtlVector<CPhysicsBody*, CUtlMemory<CPhysicsBody*, int> >& __for_range; // 23621
		iterator __for_begin; // 23631
		iterator __for_end; // 23641
		CUtlMemory<CPhysicsBody::Base(); // 112
		CUtlVectorBase<CPhysicsBody::Base(); // 102
		CUtlVectorBase<CPhysicsBody::begin(); // 652
		CUtlVectorBase<CPhysicsBody::Count(); // 104
		CUtlVectorBase<CPhysicsBody::end(); // 652
		{
			b3BodyId bodyId; // 654
		}
	}
	CUtlVectorBase<CPhysicsBody::RemoveAll(); // 659
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<b3ContactId, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<b3ContactId, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<b3ContactId, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<b3ContactId, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<b3ContactId, empty_t> >(CUtlKeyValuePair<b3ContactId, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<b3ContactId, empty_t, CPhysicsWorld::DefaultContactHashFunctor, CPhysicsWorld::DefaultContactEqualFun this); // 188
	ValidateAlignment<CUtlHashtableEntry<b3ContactId, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<b3ContactId, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<b3ContactId, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<b3ContactId, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<b3ContactId, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<b3ContactId, empty_t, CPhysicsWorld::DefaultContactHashFunctor, CPhysicsWorld::DefaultContactEqualFun this); // 663
	CUtlVectorBase<CPhysicsBody::RemoveAll(); // 1798
	CUtlMemory<CPhysicsBody::IsExternallyAllocated(); // 905
	CUtlMemory<CPhysicsBody::Purge(); // 903
	CUtlMemory<CPhysicsBody::Purge(); // 1799
	CUtlVectorBase<CPhysicsBody::Purge(); // 560
	ValidateAlignment<CPhysicsBody*>(void); // 508
	CUtlMemory<CPhysicsBody::Purge(); // 510
	CUtlMemory<CPhysicsBody::~CUtlMemory(); // 562
	CUtlVectorBase<CPhysicsBody::~CUtlVectorBase(); // 410
	CUtlVector<CPhysicsBody::~CUtlVector(); // 663
	CUtlVectorBase<CPhysicsDebugShape::RemoveAll(); // 1798
	CUtlMemory<CPhysicsDebugShape::IsExternallyAllocated(); // 905
	CUtlMemory<CPhysicsDebugShape::Purge(); // 903
	CUtlMemory<CPhysicsDebugShape::Purge(); // 1799
	CUtlVectorBase<CPhysicsDebugShape::Purge(); // 560
	ValidateAlignment<CPhysicsDebugShape*>(void); // 508
	CUtlMemory<CPhysicsDebugShape::Purge(); // 510
	CUtlMemory<CPhysicsDebugShape::~CUtlMemory(); // 562
	CUtlVectorBase<CPhysicsDebugShape::~CUtlVectorBase(); // 410
	CUtlVector<CPhysicsDebugShape::~CUtlVector(); // 663
	IPhysIntersectionController::~IPhysIntersectionController(); // 15
	CIntersectionController::~CIntersectionController(); // 663
	CUtlVectorBase<CPhysAggregateInstance::RemoveAll(); // 1798
	CUtlMemory<CPhysAggregateInstance::IsExternallyAllocated(); // 905
	CUtlMemory<CPhysAggregateInstance::Purge(); // 903
	CUtlMemory<CPhysAggregateInstance::Purge(); // 1799
	CUtlVectorBase<CPhysAggregateInstance::Purge(); // 560
	ValidateAlignment<CPhysAggregateInstance*>(void); // 508
	CUtlMemory<CPhysAggregateInstance::Purge(); // 510
	CUtlMemory<CPhysAggregateInstance::~CUtlMemory(); // 562
	CUtlVectorBase<CPhysAggregateInstance::~CUtlVectorBase(); // 410
	CUtlVector<CPhysAggregateInstance::~CUtlVector(); // 23
	~CUtlIncrementalVector(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns this); // 663
	CUtlString::~CUtlString(); // 663
	CManagedHandle::~CManagedHandle(); // 663
} /* size: 481, inline expansions: 43 (957 bytes) */

// <00B2C458> vphysics2/physicsworld.cpp:648
void CPhysicsWorld::~CPhysicsWorld()
{
} /* size: 36 */

// <00B2C403> vphysics2/physicsworld.cpp:648
// variables: 5
void CPhysicsWorld::~CPhysicsWorld()
{
	{
		CPhysicsBody* pBody; // 652
		CUtlVector<CPhysicsBody*, CUtlMemory<CPhysicsBody*, int> >& __for_range; // 8149
		iterator __for_begin; // 36086
		iterator __for_end; // 36086
		{
			b3BodyId bodyId; // 654
		}
	}
} /* size: 0 */

// <00B58EB9> vphysics2/physicsworld.cpp:665
// variables: 3
// function calls: 14
void CPhysicsWorld::RemoveBody(IPhysicsBody* pBody)
{
	b3BodyId bodyId; // 673
	{
		int i; // 1531
		CUtlVectorBase<CPhysicsBody::Count(); // 1531
		CUtlMemory<CPhysicsBody::operator[](
				int i);  // 609
		CUtlVectorBase<CPhysicsBody::Element(
			int i);  // 1533
	}
	CUtlVectorBase<CPhysicsBody::Find(
		CPhysicsBody* const& src);  // 1629
	CUtlMemory<CPhysicsBody::operator[](
			int i);  // 602
	CUtlVectorBase<CPhysicsBody::Element(
		int i);  // 1575
	Destruct<CPhysicsBody*>(CPhysicsBody** pMemory); // 1575
	{
		const bool  bNotLast; // 1578
		CUtlMemory<CPhysicsBody::operator[](
				int i);  // 602
		CUtlVectorBase<CPhysicsBody::Element(
			int i);  // 1584
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1584
	}
	CUtlVectorBase<CPhysicsBody::FastRemove(
			int elem);  // 1632
	CUtlVectorBase<CPhysicsBody::FindAndFastRemove(
				CPhysicsBody* const& src);  // 682
	CPhysicsWorld::RemoveBody(
			IPhysicsBody* pBody);  // 665
} /* size: 232, variables: 1, inline expansions: 7 (360 bytes) */

// <00B2C3D0> vphysics2/physicsworld.cpp:665
// variable: 1
void CPhysicsWorld::RemoveBody(IPhysicsBody* pBody)
{
	b3BodyId bodyId; // 673
} /* size: 0, variables: 1 */

// <00B53E8D> vphysics2/physicsworld.cpp:686
// variable: 1
// function call: 1
void CPhysicsWorld::RemoveJoint(IPhysicsJoint* pJoint)
{
	b3JointId joint; // 691
	CPhysicsWorld::RemoveJoint(
			IPhysicsJoint* pJoint);  // 686
} /* size: 65, variables: 1, inline expansions: 1 (39 bytes) */

// <00B2C39D> vphysics2/physicsworld.cpp:686
// variable: 1
void CPhysicsWorld::RemoveJoint(IPhysicsJoint* pJoint)
{
	b3JointId joint; // 691
} /* size: 0, variables: 1 */

// <00B2BFDF> vphysics2/physicsworld.cpp:696
// variables: 2
// function calls: 13
void CPhysicsWorld::AddBody()
{
	b3BodyDef def; // 698
	CPhysicsBody* pBody; // 699
	CUtlMemory<CPhysicsBody::NumAllocated(); // 1196
	CUtlMemory<CPhysicsBody::Base(); // 112
	CUtlVectorBase<CPhysicsBody::Base(); // 368
	CUtlVectorBase<CPhysicsBody::ResetDbgInfo(); // 824
	CUtlMemory<CPhysicsBody::IsGrowable(); // 823
	CUtlMemory<CPhysicsBody::IsExternallyAllocated(); // 859
	CUtlMemory<CPhysicsBody::IsExternallyAllocated(); // 861
	CUtlMemory<CPhysicsBody::Grow(
		int num);  // 806
	CUtlVectorBase<CPhysicsBody::GrowMemory(
			int num);  // 1198
	CUtlMemory<CPhysicsBody::operator[](
			int i);  // 602
	CUtlVectorBase<CPhysicsBody::Element(
		int i);  // 1201
	CopyConstruct<CPhysicsBody*>(CPhysicsBody** pMemory,
					CPhysicsBody* const& src);  // 1201
	CUtlVectorBase<CPhysicsBody::AddToTail(
			CPhysicsBody* const& src);  // 700
} /* size: 451, variables: 2, inline expansions: 13 (957 bytes) */

// <00B2BD31> vphysics2/physicsworld.cpp:704
// variables: 2
// function calls: 8
void CPhysicsWorld::AddWeldJoint(IPhysicsBody* pBody1, IPhysicsBody* pBody2, CTransformUnaligned localFrame1, CTransformUnaligned localFrame2)
{
	b3WeldJointDef def; // 706
	b3JointId id; // 713
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 66
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 66
	B3Cast<b3Transform, CTransformUnaligned>(const CTransformUnaligned& v); // 711
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 66
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 66
	B3Cast<b3Transform, CTransformUnaligned>(const CTransformUnaligned& v); // 712
} /* size: 293, variables: 2, inline expansions: 8 (156 bytes) */

// <00B2BA83> vphysics2/physicsworld.cpp:718
// variables: 2
// function calls: 8
void CPhysicsWorld::AddRevoluteJoint(IPhysicsBody* pBody1, IPhysicsBody* pBody2, CTransformUnaligned localFrame1, CTransformUnaligned localFrame2)
{
	b3RevoluteJointDef def; // 720
	b3JointId id; // 727
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 66
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 66
	B3Cast<b3Transform, CTransformUnaligned>(const CTransformUnaligned& v); // 725
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 66
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 66
	B3Cast<b3Transform, CTransformUnaligned>(const CTransformUnaligned& v); // 726
} /* size: 302, variables: 2, inline expansions: 8 (156 bytes) */

// <00B2B7D5> vphysics2/physicsworld.cpp:732
// variables: 2
// function calls: 8
void CPhysicsWorld::AddPrismaticJoint(IPhysicsBody* pBody1, IPhysicsBody* pBody2, CTransformUnaligned localFrame1, CTransformUnaligned localFrame2)
{
	b3PrismaticJointDef def; // 734
	b3JointId id; // 741
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 66
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 66
	B3Cast<b3Transform, CTransformUnaligned>(const CTransformUnaligned& v); // 739
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 66
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 66
	B3Cast<b3Transform, CTransformUnaligned>(const CTransformUnaligned& v); // 740
} /* size: 302, variables: 2, inline expansions: 8 (156 bytes) */

// <00B2B527> vphysics2/physicsworld.cpp:746
// variables: 2
// function calls: 8
void CPhysicsWorld::AddSphericalJoint(IPhysicsBody* pBody1, IPhysicsBody* pBody2, CTransformUnaligned localFrame1, CTransformUnaligned localFrame2)
{
	b3SphericalJointDef def; // 748
	b3JointId id; // 755
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 66
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 66
	B3Cast<b3Transform, CTransformUnaligned>(const CTransformUnaligned& v); // 753
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 66
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 66
	B3Cast<b3Transform, CTransformUnaligned>(const CTransformUnaligned& v); // 754
} /* size: 311, variables: 2, inline expansions: 8 (156 bytes) */

// <00B2B279> vphysics2/physicsworld.cpp:760
// variables: 2
// function calls: 8
void CPhysicsWorld::AddSpringJoint(IPhysicsBody* pBody1, IPhysicsBody* pBody2, CTransformUnaligned localFrame1, CTransformUnaligned localFrame2)
{
	b3DistanceJointDef def; // 762
	b3JointId id; // 773
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 66
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 66
	B3Cast<b3Transform, CTransformUnaligned>(const CTransformUnaligned& v); // 767
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 66
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 66
	B3Cast<b3Transform, CTransformUnaligned>(const CTransformUnaligned& v); // 768
} /* size: 324, variables: 2, inline expansions: 8 (156 bytes) */

// <00B2AFCB> vphysics2/physicsworld.cpp:778
// variables: 2
// function calls: 8
void CPhysicsWorld::AddMotorJoint(IPhysicsBody* pBody1, IPhysicsBody* pBody2, CTransformUnaligned localFrame1, CTransformUnaligned localFrame2)
{
	b3MotorJointDef def; // 780
	b3JointId id; // 787
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 66
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 66
	B3Cast<b3Transform, CTransformUnaligned>(const CTransformUnaligned& v); // 785
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 66
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 66
	B3Cast<b3Transform, CTransformUnaligned>(const CTransformUnaligned& v); // 786
} /* size: 308, variables: 2, inline expansions: 8 (156 bytes) */

// <00B2AD1D> vphysics2/physicsworld.cpp:792
// variables: 2
// function calls: 8
void CPhysicsWorld::AddWheelJoint(IPhysicsBody* pBody1, IPhysicsBody* pBody2, CTransformUnaligned localFrame1, CTransformUnaligned localFrame2)
{
	b3WheelJointDef def; // 794
	b3JointId id; // 801
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 66
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 66
	B3Cast<b3Transform, CTransformUnaligned>(const CTransformUnaligned& v); // 799
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 66
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 66
	B3Cast<b3Transform, CTransformUnaligned>(const CTransformUnaligned& v); // 800
} /* size: 311, variables: 2, inline expansions: 8 (156 bytes) */

// <00B2AA6F> vphysics2/physicsworld.cpp:806
// variables: 2
// function calls: 8
void CPhysicsWorld::AddParallelJoint(IPhysicsBody* pBody1, IPhysicsBody* pBody2, CTransformUnaligned localFrame1, CTransformUnaligned localFrame2)
{
	b3ParallelJointDef def; // 808
	b3JointId id; // 815
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 66
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 66
	B3Cast<b3Transform, CTransformUnaligned>(const CTransformUnaligned& v); // 813
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 66
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 66
	B3Cast<b3Transform, CTransformUnaligned>(const CTransformUnaligned& v); // 814
} /* size: 293, variables: 2, inline expansions: 8 (156 bytes) */

// <00B2A945> vphysics2/physicsworld.cpp:820
// variables: 2
void CPhysicsWorld::AddFilterJoint(IPhysicsBody* pBody1, IPhysicsBody* pBody2)
{
	b3FilterJointDef def; // 822
	b3JointId id; // 825
} /* size: 163, variables: 2 */

// <00B28DD9> vphysics2/physicsworld.cpp:830
// variables: 34
// function calls: 117
void CPhysicsWorld::AddRevoluteJoint(const PhysicsRevoluteJointDesc_t& desc)
{
	const char   __FUNCTION__; // 61606
	CTransform tLocalFrame1; // 836
	CTransform tLocalFrame2; // 839
	b3RevoluteJointDef def; // 842
	b3JointId jointId; // 874
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 832
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 215
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 220
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 225
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 230
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 235
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 235
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 240
	PhysicsRevoluteJointDesc_t::IsValid(); // 208
	PhysicsRevoluteJointDesc_t::IsValid(); // 832
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 215
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 220
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 225
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 230
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 235
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 235
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 240
	PhysicsRevoluteJointDesc_t::IsValid(); // 208
	PhysicsRevoluteJointDesc_t::IsValid(); // 833
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 44
	PhysicsJointDesc_t::GetLocalFrame1(); // 836
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
			const fltx4& b);  // 392
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 395
	QuaternionAligned::operator fltx4(); // 397
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 393
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 397
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
			const fltx4& b);  // 397
	QuaternionAligned::Normalize(); // 837
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	VectorAligned::VectorAligned(); // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 67
	PhysicsJointDesc_t::GetLocalFrame2(); // 839
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
			const fltx4& b);  // 392
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 393
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 395
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 397
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
			const fltx4& b);  // 397
	QuaternionAligned::Normalize(); // 840
	DEG2RAD(float flDegrees); // 847
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	QuaternionAligned::x(); // 41
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	QuaternionAligned::y(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 350
	CTransform::ToQuaternion(); // 61
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 61
	B3Cast<b3Transform, CTransform>(const CTransform& v); // 852
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 61
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
	B3Cast<b3Transform, CTransform>(const CTransform& v); // 851
	DEG2RAD(float flDegrees); // 859
	PhysicsJointDesc_t::IsBreakable(); // 868
} /* size: 0, variables: 5, inline expansions: 87 (1350 bytes) */

// <00B27012> vphysics2/physicsworld.cpp:878
// variables: 36
// function calls: 126
void CPhysicsWorld::AddPrismaticJoint(const PhysicsPrismaticJointDesc_t& desc)
{
	const char   __FUNCTION__; // 61633
	CTransform tLocalFrame1; // 884
	CTransform tLocalFrame2; // 887
	const float  angle; // 890
	Quaternion rot; // 891
	b3PrismaticJointDef def; // 895
	b3JointId jointId; // 927
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 880
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 299
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 304
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 309
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 314
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 319
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 319
	PhysicsPrismaticJointDesc_t::IsValid(); // 292
	PhysicsPrismaticJointDesc_t::IsValid(); // 880
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 299
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 304
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 309
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 314
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 319
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 319
	PhysicsPrismaticJointDesc_t::IsValid(); // 292
	PhysicsPrismaticJointDesc_t::IsValid(); // 881
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 44
	PhysicsJointDesc_t::GetLocalFrame1(); // 884
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
			const fltx4& b);  // 392
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 395
	QuaternionAligned::operator fltx4(); // 397
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 393
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 397
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
			const fltx4& b);  // 397
	QuaternionAligned::Normalize(); // 885
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	VectorAligned::VectorAligned(); // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 67
	PhysicsJointDesc_t::GetLocalFrame2(); // 887
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
			const fltx4& b);  // 392
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 393
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 395
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 397
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
			const fltx4& b);  // 397
	QuaternionAligned::Normalize(); // 888
	Quaternion::Quaternion(); // 2001
	operator*(const Quaternion& p,
			const Quaternion& q);  // 893
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
	QuaternionAligned::operator Quaternion(); // 892
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 891
	Quaternion::Quaternion(); // 2001
	operator*(const Quaternion& p,
			const Quaternion& q);  // 892
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 77
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 893
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 61
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 350
	CTransform::ToQuaternion(); // 61
	B3Cast<b3Transform, CTransform>(const CTransform& v); // 904
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 61
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 350
	CTransform::ToQuaternion(); // 61
	B3Cast<b3Transform, CTransform>(const CTransform& v); // 905
	PhysicsJointDesc_t::IsBreakable(); // 921
} /* size: 0, variables: 7, inline expansions: 96 (2029 bytes) */

// <00B25622> vphysics2/physicsworld.cpp:931
// variables: 34
// function calls: 110
void CPhysicsWorld::AddSphericalJoint(const PhysicsSphericalJointDesc_t& desc)
{
	const char   __FUNCTION__; // 61633
	CTransform tLocalFrame1; // 937
	CTransform tLocalFrame2; // 940
	b3SphericalJointDef def; // 943
	b3JointId jointId; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 157
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 162
	PhysicsSphericalJointDesc_t::IsValid(); // 150
	PhysicsSphericalJointDesc_t::IsValid(); // 933
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 157
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 162
	PhysicsSphericalJointDesc_t::IsValid(); // 150
	PhysicsSphericalJointDesc_t::IsValid(); // 934
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 44
	PhysicsJointDesc_t::GetLocalFrame1(); // 937
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
			const fltx4& b);  // 392
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 395
	QuaternionAligned::operator fltx4(); // 397
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 393
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 397
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
			const fltx4& b);  // 397
	QuaternionAligned::Normalize(); // 938
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	VectorAligned::VectorAligned(); // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 67
	PhysicsJointDesc_t::GetLocalFrame2(); // 940
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
			const fltx4& b);  // 392
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 393
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 395
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 397
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
			const fltx4& b);  // 397
	QuaternionAligned::Normalize(); // 941
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	QuaternionAligned::x(); // 41
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	QuaternionAligned::y(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 350
	CTransform::ToQuaternion(); // 61
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 61
	B3Cast<b3Transform, CTransform>(const CTransform& v); // 950
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 61
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
	B3Cast<b3Transform, CTransform>(const CTransform& v); // 949
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 957
	PhysicsJointDesc_t::IsBreakable(); // 966
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 962
} /* size: 0, variables: 5, inline expansions: 80 (1310 bytes) */

// <00B2395E> vphysics2/physicsworld.cpp:976
// variables: 34
// function calls: 124
void CPhysicsWorld::AddConicalJoint(const PhysicsConicalJointDesc_t& desc)
{
	const char   __FUNCTION__; // 61579
	CTransform tLocalFrame1; // 982
	CTransform tLocalFrame2; // 985
	b3SphericalJointDef def; // 988
	b3JointId jointId; // 1022
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 978
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 379
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 384
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 384
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 389
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 394
	PhysicsConicalJointDesc_t::IsValid(); // 372
	PhysicsConicalJointDesc_t::IsValid(); // 978
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 379
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 384
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 384
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 389
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 394
	PhysicsConicalJointDesc_t::IsValid(); // 372
	PhysicsConicalJointDesc_t::IsValid(); // 979
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 44
	PhysicsJointDesc_t::GetLocalFrame1(); // 982
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
			const fltx4& b);  // 392
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 395
	QuaternionAligned::operator fltx4(); // 397
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 393
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 397
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
			const fltx4& b);  // 397
	QuaternionAligned::Normalize(); // 983
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	VectorAligned::VectorAligned(); // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 67
	PhysicsJointDesc_t::GetLocalFrame2(); // 985
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
			const fltx4& b);  // 392
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 393
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 395
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 397
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
			const fltx4& b);  // 397
	QuaternionAligned::Normalize(); // 986
	DEG2RAD(float flDegrees); // 994
	DEG2RAD(float flDegrees); // 995
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	QuaternionAligned::x(); // 41
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	QuaternionAligned::y(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 350
	CTransform::ToQuaternion(); // 61
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 61
	B3Cast<b3Transform, CTransform>(const CTransform& v); // 1000
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 61
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
	B3Cast<b3Transform, CTransform>(const CTransform& v); // 999
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 1007
	PhysicsJointDesc_t::IsBreakable(); // 1016
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 1012
} /* size: 0, variables: 5, inline expansions: 94 (1582 bytes) */

// <00B220B0> vphysics2/physicsworld.cpp:1026
// variables: 34
// function calls: 103
void CPhysicsWorld::AddWeldJoint(const PhysicsWeldJointDesc_t& desc)
{
	const char   __FUNCTION__; // 61498
	CTransform tLocalFrame1; // 1032
	CTransform tLocalFrame2; // 1035
	b3WeldJointDef def; // 1038
	b3JointId jointId; // 1057
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1028
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 448
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 453
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 458
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 463
	PhysicsWeldJointDesc_t::IsValid(); // 441
	PhysicsWeldJointDesc_t::IsValid(); // 1028
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 448
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 453
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 458
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 463
	PhysicsWeldJointDesc_t::IsValid(); // 441
	PhysicsWeldJointDesc_t::IsValid(); // 1029
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 44
	PhysicsJointDesc_t::GetLocalFrame1(); // 1032
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
			const fltx4& b);  // 392
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 395
	QuaternionAligned::operator fltx4(); // 397
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 393
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 397
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
			const fltx4& b);  // 397
	QuaternionAligned::Normalize(); // 1033
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	VectorAligned::VectorAligned(); // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 67
	PhysicsJointDesc_t::GetLocalFrame2(); // 1035
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
			const fltx4& b);  // 392
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 393
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 395
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 397
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
			const fltx4& b);  // 397
	QuaternionAligned::Normalize(); // 1036
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	QuaternionAligned::x(); // 41
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	QuaternionAligned::y(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 350
	CTransform::ToQuaternion(); // 61
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 61
	B3Cast<b3Transform, CTransform>(const CTransform& v); // 1045
	PhysicsJointDesc_t::IsBreakable(); // 1051
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
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 61
	B3Cast<b3Transform, CTransform>(const CTransform& v); // 1044
} /* size: 0, variables: 5, inline expansions: 73 (1222 bytes) */

// <00B20BFE> vphysics2/physicsworld.cpp:1061
// variables: 34
// function calls: 83
void CPhysicsWorld::AddMouseJoint(const PhysicsMouseJointDesc_t& desc)
{
	const char   __FUNCTION__; // 61525
	CTransform tLocalFrame1; // 1067
	CTransform tLocalFrame2; // 1070
	b3MotorJointDef def; // 1073
	b3JointId jointId; // 1091
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1063
	}
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 44
	PhysicsJointDesc_t::GetLocalFrame1(); // 1067
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
			const fltx4& b);  // 392
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 395
	QuaternionAligned::operator fltx4(); // 397
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 393
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 397
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
			const fltx4& b);  // 397
	QuaternionAligned::Normalize(); // 1068
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	VectorAligned::VectorAligned(); // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 67
	PhysicsJointDesc_t::GetLocalFrame2(); // 1070
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
			const fltx4& b);  // 392
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 393
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 395
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 397
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
			const fltx4& b);  // 397
	QuaternionAligned::Normalize(); // 1071
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	QuaternionAligned::x(); // 41
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	QuaternionAligned::y(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 350
	CTransform::ToQuaternion(); // 61
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 61
	B3Cast<b3Transform, CTransform>(const CTransform& v); // 1080
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
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 61
	B3Cast<b3Transform, CTransform>(const CTransform& v); // 1079
	PhysicsJointDesc_t::IsBreakable(); // 1085
} /* size: 0, variables: 5, inline expansions: 53 (781 bytes) */

// <00B20BD0> vphysics2/physicsworld.cpp:1095
void CPhysicsWorld::GetWorldReferenceBody()
{
} /* size: 9 */

// <00B20AC5> vphysics2/physicsworld.cpp:1100
// function calls: 3
void CPhysicsWorld::SetGravity(const Vector& gravity)
{
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 1102
} /* size: 21, inline expansions: 3 (0 bytes) */

// <00B209FF> vphysics2/physicsworld.cpp:1105
// function calls: 2
void CPhysicsWorld::GetGravity()
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 1107
} /* size: 22, inline expansions: 2 (0 bytes) */

// <00B20921> vphysics2/physicsworld.cpp:1110
// function calls: 3
void CPhysicsWorld::GetAggregate(int nIndex)
{
	CUtlMemory<CPhysAggregateInstance::operator[](
			int i);  // 588
	CUtlVectorBase<CPhysAggregateInstance::operator[](
			int i);  // 61
	operator[](const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns this,
			int i);  // 1112
} /* size: 16, inline expansions: 3 (13 bytes) */

// <00B5A7CC> vphysics2/physicsworld.cpp:1115
// variable: 1
// function calls: 16
void CPhysicsWorld::CreateAggregateInstance(const CPhysAggregateData* pAggregateData, const CTransform& tmStart, uint64 nGSNHandle, VPhysicsMotionType_t nMotionType)
{
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 1117
	{
	}
	CUtlVectorBase<const VPhysXBodyPart_t::Count(); // 241
	CPhysAggregateData::GetPartCount(); // 1118
	{
		CPhysAggregateInstance* pAggregate; // 1120
		CUtlVectorBase<CPhysAggregateInstance::Count(); // 73
		SetIndex(CPhysAggregateInstance* pAgg,
			int nIndex);  // 73
		CUtlMemory<CPhysAggregateInstance::NumAllocated(); // 1196
		CUtlMemory<CPhysAggregateInstance::operator[](
				int i);  // 602
		CUtlVectorBase<CPhysAggregateInstance::Element(
			int i);  // 1201
		CopyConstruct<CPhysAggregateInstance*>(CPhysAggregateInstance** pMemory,
							CPhysAggregateInstance* const& src);  // 1201
		CUtlMemory<CPhysAggregateInstance::Base(); // 112
		CUtlVectorBase<CPhysAggregateInstance::Base(); // 368
		CUtlVectorBase<CPhysAggregateInstance::ResetDbgInfo(); // 824
		CUtlVectorBase<CPhysAggregateInstance::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CPhysAggregateInstance::AddToTail(
				CPhysAggregateInstance* const& src);  // 74
		AddToTail(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns this,
				CPhysAggregateInstance* p);  // 1121
	}
	CPhysicsWorld::CreateAggregateInstance(
				const CPhysAggregateData* pAggregateData,
				const CTransform& tmStart,
				uint64 nGSNHandle,
				VPhysicsMotionType_t nMotionType);  // 1115
} /* size: 0, inline expansions: 4 (120 bytes) */

// <00B20880> vphysics2/physicsworld.cpp:1115
// variables: 3
void CPhysicsWorld::CreateAggregateInstance(const CPhysAggregateData* pAggregateData, const CTransform& tmStart, uint64 nGSNHandle, VPhysicsMotionType_t nMotionType)
{
	const char   __FUNCTION__; // 61780
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1117
	}
	{
		CPhysAggregateInstance* pAggregate; // 1120
	}
} /* size: 0, variables: 1 */

// <00B20573> vphysics2/physicsworld.cpp:1130
// variable: 1
// function calls: 12
void CPhysicsWorld::CreateAggregateInstance()
{
	CPhysAggregateInstance* pAgg; // 1132
	CUtlVectorBase<CPhysAggregateInstance::Count(); // 73
	SetIndex(CPhysAggregateInstance* pAgg,
		int nIndex);  // 73
	CUtlMemory<CPhysAggregateInstance::NumAllocated(); // 1196
	CUtlMemory<CPhysAggregateInstance::operator[](
			int i);  // 602
	CUtlVectorBase<CPhysAggregateInstance::Element(
		int i);  // 1201
	CopyConstruct<CPhysAggregateInstance*>(CPhysAggregateInstance** pMemory,
						CPhysAggregateInstance* const& src);  // 1201
	CUtlMemory<CPhysAggregateInstance::Base(); // 112
	CUtlVectorBase<CPhysAggregateInstance::Base(); // 368
	CUtlVectorBase<CPhysAggregateInstance::ResetDbgInfo(); // 824
	CUtlVectorBase<CPhysAggregateInstance::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CPhysAggregateInstance::AddToTail(
			CPhysAggregateInstance* const& src);  // 74
	AddToTail(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns this,
			CPhysAggregateInstance* p);  // 1133
} /* size: 122, variables: 1, inline expansions: 12 (187 bytes) */

// <00B54B8D> vphysics2/physicsworld.cpp:1137
// variables: 2
// function calls: 10
void CPhysicsWorld::DestroyAggregateInstance(IPhysAggregateInstance* pAggregate)
{
	CPhysAggregateInstance* pAgg; // 1142
	GetIndex(const CPhysAggregateInstance* pAgg); // 167
	CUtlMemory<CPhysAggregateInstance::operator[](
			int i);  // 630
	CUtlVectorBase<CPhysAggregateInstance::Tail(); // 158
	CUtlMemory<CPhysAggregateInstance::operator[](
			int i);  // 588
	CUtlVectorBase<CPhysAggregateInstance::operator[](
			int i);  // 159
	{
		int i; // 1696
	}
	CUtlVectorBase<CPhysAggregateInstance::RemoveMultipleFromTail(
				int num);  // 160
	SetIndex(CPhysAggregateInstance* pAgg,
		int nIndex);  // 161
	FastRemove(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns this,
			int elem);  // 169
	FindAndFastRemove(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns this,
				CPhysAggregateInstance* p);  // 1143
	CPhysicsWorld::DestroyAggregateInstance(
				IPhysAggregateInstance* pAggregate);  // 1137
} /* size: 81, variables: 1, inline expansions: 10 (142 bytes) */

// <00B20540> vphysics2/physicsworld.cpp:1137
// variable: 1
void CPhysicsWorld::DestroyAggregateInstance(IPhysAggregateInstance* pAggregate)
{
	CPhysAggregateInstance* pAgg; // 1142
} /* size: 0, variables: 1 */

// <00B20503> vphysics2/physicsworld.cpp:1149
void CPhysicsWorld::SetWorldReferenceBody(IPhysicsBody* pBody)
{
} /* size: 9 */

// <00B5A5BB> vphysics2/physicsworld.cpp:1154
// function calls: 9
void CPhysicsWorld::AddDebugShape(CPhysicsDebugShape* pShape)
{
	CUtlMemory<CPhysicsDebugShape::NumAllocated(); // 1196
	CUtlMemory<CPhysicsDebugShape::operator[](
			int i);  // 602
	CUtlVectorBase<CPhysicsDebugShape::Element(
		int i);  // 1201
	CopyConstruct<CPhysicsDebugShape*>(CPhysicsDebugShape** pMemory,
						CPhysicsDebugShape* const& src);  // 1201
	CUtlMemory<CPhysicsDebugShape::Base(); // 112
	CUtlVectorBase<CPhysicsDebugShape::Base(); // 368
	CUtlVectorBase<CPhysicsDebugShape::ResetDbgInfo(); // 824
	CUtlVectorBase<CPhysicsDebugShape::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CPhysicsDebugShape::AddToTail(
			CPhysicsDebugShape* const& src);  // 1156
} /* size: 0, inline expansions: 9 (0 bytes) */

// <00B204DD> vphysics2/physicsworld.cpp:1154
void CPhysicsWorld::AddDebugShape(CPhysicsDebugShape* pShape)
{
} /* size: 0 */

// <00B57B68> vphysics2/physicsworld.cpp:1159
void CPhysicsWorld::RemoveDebugShape(CPhysicsDebugShape* pShape)
{
} /* size: 0 */

// <00B20361> vphysics2/physicsworld.cpp:1164
// function calls: 5
void CPhysicsWorld::Draw()
{
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(DebugDrawArgs_t*), void (*)(DebugDrawArgs_t*), void (*)(DebugDrawArgs_t*) this); // 1134
	FastDelegate1<DebugDrawArgs_t::Bind(
		void (*function_to_bind)(DebugDrawArgs_t *));  // 1135
	FastDelegate1<DebugDrawArgs_t::FastDelegate1(
			void (*function_to_bind)(DebugDrawArgs_t *));  // 2173
	CUtlDelegate<void(DebugDrawArgs_t::CUtlDelegate(
			void (*function_to_bind)(DebugDrawArgs_t *));  // 1166
} /* size: 105, inline expansions: 5 (111 bytes) */

// <00B1F8B4> vphysics2/physicsworld.cpp:1169
// variables: 12
// function calls: 43
void CPhysicsWorld::Draw(DebugDrawDelegate_t debugDrawFcn)
{
	const bool  drawShapes; // 1171
	const bool  drawMass; // 1172
	const bool  drawContacts; // 1173
	const bool  drawJoints; // 1174
	const bool  drawBounds; // 1175
	const bool  bShouldDraw; // 1177
	DebugDrawContext_t context; // 1191
	b3DebugDraw debugDraw; // 1194
	{
		CPhysicsDebugShape* pDebugShape; // 1181
		CUtlVector<CPhysicsDebugShape*, CUtlMemory<CPhysicsDebugShape*, int> >& __for_range; // 39690
		iterator __for_begin; // 30107
		iterator __for_end; // 30107
		CUtlMemory<CPhysicsDebugShape::Base(); // 112
		CUtlVectorBase<CPhysicsDebugShape::Base(); // 102
		CUtlVectorBase<CPhysicsDebugShape::begin(); // 1181
		CUtlVectorBase<CPhysicsDebugShape::Count(); // 104
		CUtlVectorBase<CPhysicsDebugShape::end(); // 1181
		PhysicsSceneObject_t::operator bool(); // 120
		CSceneObject::MirrorFlags(); // 1901
		CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
							ESceneObjectFlags flags);  // 1976
		CSceneObject::DisableRendering(); // 122
		PhysicsSceneObject_t::operator bool(); // 125
		CSceneObject::MirrorFlags(); // 1901
		CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
							ESceneObjectFlags flags);  // 1976
		CSceneObject::DisableRendering(); // 127
		CPhysicsDebugShape::Disable(); // 1182
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1171
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1172
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1173
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1174
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1175
	CUtlAbstractDelegate::SetMementoFrom(
			const CUtlAbstractDelegate& right);  // 843
	ClosurePtr<void (detail::GenericClass::::CopyFrom<FastDelegate1<DebugDrawArgs_t*, void> >(
							FastDelegate1<DebugDrawArgs_t*, void>* pParent,
							const CUtlAbstractDelegate& right);  // 1091
	FastDelegate1<DebugDrawArgs_t::operator=(
			const FastDelegate1<DebugDrawArgs_t*, void>& x);  // 2148
	CUtlDelegate<void(DebugDrawArgs_t::operator=(
			const CUtlDelegate<void(DebugDrawArgs_t*)> &);  // 1192
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(DebugDrawArgs_t*), void (*)(DebugDrawArgs_t*), void (*)(DebugDrawArgs_t*) this); // 1084
	FastDelegate1<DebugDrawArgs_t::Clear(); // 1084
	FastDelegate1<DebugDrawArgs_t::FastDelegate1(); // 2160
	CUtlDelegate<void(DebugDrawArgs_t::CUtlDelegate()>* this); // 371
	DebugDrawContext_t::DebugDrawContext_t(); // 1191
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 1201
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 1201
	Vector::Vector(); // 27
	Vector::Vector(); // 27
	Vector::operator=(
			const Vector& vOther);  // 28
	Vector::operator=(
			const Vector& vOther);  // 29
	AABB_t::AABB_t(
		const Vector& vMins,
		const Vector& vMaxs);  // 1201
} /* size: 628, variables: 8, inline expansions: 29 (234 bytes) */

// <00B1F825> vphysics2/physicsworld.cpp:1225
// function calls: 2
void CPhysicsWorld::GetAggregateCount()
{
	CUtlVectorBase<CPhysAggregateInstance::Count(); // 55
	Count(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggreg this); // 1227
} /* size: 8, inline expansions: 2 (0 bytes) */

// <00B1F7BC> vphysics2/physicsworld.cpp:1230
void CPhysicsWorld::SetSimulation(PhysicsSimulation_t simulation)
{
} /* size: 23 */

// <00B1F77A> vphysics2/physicsworld.cpp:1235
void CPhysicsWorld::GetSimulation()
{
} /* size: 21 */

// <00B1F6E0> vphysics2/physicsworld.cpp:1240
// function call: 1
void CPhysicsWorld::SetDebugName(const char* pName)
{
	CUtlString::operator=(
			const char* src);  // 1242
} /* size: 13, inline expansions: 1 (5 bytes) */

// <00B1F651> vphysics2/physicsworld.cpp:1245
// function calls: 2
void CPhysicsWorld::GetDebugName()
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 1247
} /* size: 23, inline expansions: 2 (36 bytes) */

// <00B1F4FD> vphysics2/physicsworld.cpp:1250
// variables: 20
void ProcessContactData(const b3ContactData& contactData, VPhysIntersectionNotification_t& out)
{
	const b3ShapeId& shapeId; // 1252
	int materialCount; // 1253
	b3ShapeType shapeType; // 1254
	float approachSpeed; // 1256
	float totalImpulse; // 1257
	b3Vec3 point; // 1258
	b3Vec3 normal; // 1259
	{
		int manifoldIndex; // 1261
		{
			const b3Manifold* manifold; // 1263
			int pointCount; // 1264
			{
				int k; // 1265
				{
					const b3ManifoldPoint* mp; // 1267
					float speed; // 1268
					{
						b3Mesh mesh; // 1282
						{
							const uint8_t* materialIndices; // 1285
							int materialIndex; // 1286
							{
								b3SurfaceMaterial surfaceMaterial; // 1290
							}
						}
					}
					{
						const b3HeightField* heightField; // 1297
						int materialIndex; // 1298
						{
							b3SurfaceMaterial surfaceMaterial; // 1302
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 7 */

// <00B1F459> vphysics2/physicsworld.cpp:1317
// variables: 5
void ProcessContactHitEvent(const b3ContactHitEvent& hitEvent, ProcessIntersectionsDelegate_t function)
{
	CPhysicsShape* pShapeA; // 1325
	CPhysicsShape* pShapeB; // 1329
	IPhysicsBody* pBodyA; // 1333
	IPhysicsBody* pBodyB; // 1337
	VPhysIntersectionNotification_t out; // 1341
} /* size: 0, variables: 5 */

// <00B1F3DF> vphysics2/physicsworld.cpp:1360
// variables: 6
void ProcessContactBeginTouchEvent(const b3ContactBeginTouchEvent& beginTouchEvent, ProcessIntersectionsDelegate_t function)
{
	CPhysicsShape* pShapeA; // 1368
	CPhysicsShape* pShapeB; // 1372
	IPhysicsBody* pBodyA; // 1376
	IPhysicsBody* pBodyB; // 1380
	VPhysIntersectionNotification_t out; // 1384
	{
		b3ContactData contactData; // 1397
	}
} /* size: 0, variables: 5 */

// <00B1F374> vphysics2/physicsworld.cpp:1404
// variables: 5
void ProcessContactEndTouchEvent(const b3ContactEndTouchEvent& endTouchEvent, ProcessIntersectionsDelegate_t function)
{
	CPhysicsShape* pShapeA; // 1412
	CPhysicsShape* pShapeB; // 1416
	IPhysicsBody* pBodyA; // 1420
	IPhysicsBody* pBodyB; // 1424
	VPhysIntersectionNotification_t out; // 1428
} /* size: 0, variables: 5 */

// <00B1F303> vphysics2/physicsworld.cpp:1442
// variables: 5
void ProcessSensorBeginTouchEvent(const b3SensorBeginTouchEvent& beginTouchEvent, ProcessIntersectionsDelegate_t function)
{
	CPhysicsShape* pShapeA; // 1450
	CPhysicsShape* pShapeB; // 1454
	IPhysicsBody* pBodyA; // 1458
	IPhysicsBody* pBodyB; // 1462
	VPhysIntersectionNotification_t out; // 1466
} /* size: 0, variables: 5 */

// <00B1F292> vphysics2/physicsworld.cpp:1480
// variables: 5
void ProcessSensorEndTouchEvent(const b3SensorEndTouchEvent& endTouchEvent, ProcessIntersectionsDelegate_t function)
{
	CPhysicsShape* pShapeA; // 1488
	CPhysicsShape* pShapeB; // 1492
	IPhysicsBody* pBodyA; // 1496
	IPhysicsBody* pBodyB; // 1500
	VPhysIntersectionNotification_t out; // 1504
} /* size: 0, variables: 5 */

// <00B1F183> vphysics2/physicsworld.cpp:1518
// variables: 16
bool ProcessContactPersistsEvent(const b3ContactId& contactId, ProcessIntersectionsDelegate_t function)
{
	b3ContactData contactData; // 1523
	CPhysicsShape* pShapeA; // 1528
	CPhysicsShape* pShapeB; // 1535
	IPhysicsBody* pBodyA; // 1542
	IPhysicsBody* pBodyB; // 1546
	VPhysIntersectionNotification_t out; // 1550
	float approachSpeed; // 1561
	float totalImpulse; // 1562
	b3Vec3 point; // 1563
	b3Vec3 normal; // 1564
	{
		int manifoldIndex; // 1566
		{
			const b3Manifold* manifold; // 1568
			int pointCount; // 1569
			{
				int k; // 1570
				{
					const b3ManifoldPoint* mp; // 1572
					float speed; // 1573
				}
			}
		}
	}
} /* size: 0, variables: 10 */

// <00B1C51D> vphysics2/physicsworld.cpp:1597
// variables: 36
// function calls: 157
void CPhysicsWorld::ProcessIntersections(ProcessIntersectionsDelegate_t function)
{
	b3ContactEvents contactEvents; // 1599
	b3SensorEvents sensorEvents; // 1600
	{
		int i; // 1602
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1342
		Vector::Vector(); // 231
		Vector::Vector(); // 231
		Vector::Vector(); // 231
		VPhysIntersectionNotification_t::VPhysIntersectionNotification_t(); // 1341
		ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(VPhysIntersectionNotification_t*), void (*)(VPhysIntersectionNotifi this); // 1150
		FastDelegate1<VPhysIntersectionNotification_t::operator(
				VPhysIntersectionNotification_t* p1);  // 1357
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 11
		B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 1352
		Vector::operator=(
				const Vector& vOther);  // 1352
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 11
		B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 1353
		Vector::operator=(
				const Vector& vOther);  // 1353
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1355
		Vector::operator=(
				const Vector& vOther);  // 1355
		ProcessContactHitEvent(const b3ContactHitEvent& hitEvent,
					ProcessIntersectionsDelegate_t function);  // 1604
		CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
		ClosurePtr<void (detail::GenericClass::::ClosurePtr()(VPhysIntersectionNotification_t*), void (*)(VPhysIntersectionNotification this); // 1086
		CUtlAbstractDelegate::SetMementoFrom(
				const CUtlAbstractDelegate& right);  // 843
		ClosurePtr<void (detail::GenericClass::::CopyFrom<FastDelegate1<VPhysIntersectionNotification_t*, void> >(
										FastDelegate1<VPhysIntersectionNotification_t*, void>* pParent,
										const CUtlAbstractDelegate& right);  // 1087
		FastDelegate1<VPhysIntersectionNotification_t::FastDelegate1(
				const FastDelegate1<VPhysIntersectionNotification_t*, void>& x);  // 2148
		CUtlDelegate<void(VPhysIntersectionNotification_t::CUtlDelegate(
				const CUtlDelegate<void(VPhysIntersectionNotification_t*)> &);  // 1604
	}
	{
		int i; // 1607
		{
			const b3ContactBeginTouchEvent& beginTouchEvent; // 1609
			CPhysicsShape* pShapeA; // 1621
			CPhysicsShape* pShapeB; // 1625
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 1385
			Vector::Vector(); // 231
			Vector::Vector(); // 231
			Vector::Vector(); // 231
			VPhysIntersectionNotification_t::VPhysIntersectionNotification_t(); // 1384
			{
				b3ContactData contactData; // 1397
				{
					int manifoldIndex; // 1261
					{
						const b3Manifold* manifold; // 1263
						int pointCount; // 1264
						{
							int k; // 1265
							{
								const b3ManifoldPoint* mp; // 1267
								float speed; // 1268
								{
									const b3HeightField* heightField; // 1297
									int materialIndex; // 1298
									{
										b3SurfaceMaterial surfaceMaterial; // 1302
									}
								}
								{
									b3Mesh mesh; // 1282
									{
										const uint8_t* materialIndices; // 1285
										int materialIndex; // 1286
										b3GetMeshMaterialIndices(const b3MeshData* mesh); // 1285
										{
											b3SurfaceMaterial surfaceMaterial; // 1290
										}
									}
								}
							}
						}
					}
				}
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 1313
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 11
				B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 1310
				Vector::operator=(
						const Vector& vOther);  // 1310
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 11
				B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 1311
				Vector::operator=(
						const Vector& vOther);  // 1311
				ProcessContactData(const b3ContactData& contactData,
							VPhysIntersectionNotification_t& out);  // 1398
			}
			ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(VPhysIntersectionNotification_t*), void (*)(VPhysIntersectionNotifi this); // 1150
			FastDelegate1<VPhysIntersectionNotification_t::operator(
					VPhysIntersectionNotification_t* p1);  // 1401
			ProcessContactBeginTouchEvent(const b3ContactBeginTouchEvent& beginTouchEvent,
							ProcessIntersectionsDelegate_t function);  // 1610
			CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
			ClosurePtr<void (detail::GenericClass::::ClosurePtr()(VPhysIntersectionNotification_t*), void (*)(VPhysIntersectionNotification this); // 1086
			CUtlAbstractDelegate::SetMementoFrom(
					const CUtlAbstractDelegate& right);  // 843
			ClosurePtr<void (detail::GenericClass::::CopyFrom<FastDelegate1<VPhysIntersectionNotification_t*, void> >(
											FastDelegate1<VPhysIntersectionNotification_t*, void>* pParent,
											const CUtlAbstractDelegate& right);  // 1087
			FastDelegate1<VPhysIntersectionNotification_t::FastDelegate1(
					const FastDelegate1<VPhysIntersectionNotification_t*, void>& x);  // 2148
			CUtlDelegate<void(VPhysIntersectionNotification_t::CUtlDelegate(
					const CUtlDelegate<void(VPhysIntersectionNotification_t*)> &);  // 1610
			RnCollisionAttr_t::GetCollisionFunctionMask(); // 199
			RnCollisionAttr_t::IsTouchPersistsEnabled(); // 1629
			RnCollisionAttr_t::GetCollisionFunctionMask(); // 199
			RnCollisionAttr_t::IsTouchPersistsEnabled(); // 1629
			Hash12(const void* pKey); // 155
			DefaultContactHashFunctor::operator(
					const b3ContactId& contactId);  // 240
			CUtlMemory<CUtlHashtableEntry<b3ContactId, empty_t>, int>::operator[](
					int i);  // 706
			CUtlKeyValuePair<b3ContactId, empty_t>::CUtlKeyValuePair<b3ContactId>(
							const b3ContactId& k);  // 1514
			Construct<CUtlKeyValuePair<b3ContactId, empty_t>, const b3ContactId&>(CUtlKeyValuePair<b3ContactId, empty_t>* pMemory); // 706
			DoInsert<const b3ContactId&>(const CUtlHashtable<b3ContactId, empty_t, CPhysicsWorld::DefaultContactHashFunctor, CPhysicsWorld::DefaultContactEqualFun this,
							const b3ContactId& k,
							unsigned int h,
							bool* pDidInsert);  // 695
			DoInsert<const b3ContactId&>(const CUtlHashtable<b3ContactId, empty_t, CPhysicsWorld::DefaultContactHashFunctor, CPhysicsWorld::DefaultContactEqualFun this,
							const b3ContactId& k,
							unsigned int h,
							bool* pDidInsert);  // 240
			Insert(const CUtlHashtable<b3ContactId, empty_t, CPhysicsWorld::DefaultContactHashFunctor, CPhysicsWorld::DefaultContactEqualFun this,
				KeyArg_t k);  // 1632
		}
	}
	{
		int i; // 1635
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1467
		Vector::Vector(); // 231
		Vector::Vector(); // 231
		Vector::Vector(); // 231
		VPhysIntersectionNotification_t::VPhysIntersectionNotification_t(); // 1466
		ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(VPhysIntersectionNotification_t*), void (*)(VPhysIntersectionNotifi this); // 1150
		FastDelegate1<VPhysIntersectionNotification_t::operator(
				VPhysIntersectionNotification_t* p1);  // 1477
		ProcessSensorBeginTouchEvent(const b3SensorBeginTouchEvent& beginTouchEvent,
						ProcessIntersectionsDelegate_t function);  // 1637
		CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
		ClosurePtr<void (detail::GenericClass::::ClosurePtr()(VPhysIntersectionNotification_t*), void (*)(VPhysIntersectionNotification this); // 1086
		CUtlAbstractDelegate::SetMementoFrom(
				const CUtlAbstractDelegate& right);  // 843
		ClosurePtr<void (detail::GenericClass::::CopyFrom<FastDelegate1<VPhysIntersectionNotification_t*, void> >(
										FastDelegate1<VPhysIntersectionNotification_t*, void>* pParent,
										const CUtlAbstractDelegate& right);  // 1087
		FastDelegate1<VPhysIntersectionNotification_t::FastDelegate1(
				const FastDelegate1<VPhysIntersectionNotification_t*, void>& x);  // 2148
		CUtlDelegate<void(VPhysIntersectionNotification_t::CUtlDelegate(
				const CUtlDelegate<void(VPhysIntersectionNotification_t*)> &);  // 1637
	}
	{
		int i; // 1640
		{
			const b3ContactEndTouchEvent& endTouchEvent; // 1642
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 1429
			Vector::Vector(); // 231
			Vector::Vector(); // 231
			Vector::Vector(); // 231
			VPhysIntersectionNotification_t::VPhysIntersectionNotification_t(); // 1428
			ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(VPhysIntersectionNotification_t*), void (*)(VPhysIntersectionNotifi this); // 1150
			FastDelegate1<VPhysIntersectionNotification_t::operator(
					VPhysIntersectionNotification_t* p1);  // 1439
			ProcessContactEndTouchEvent(const b3ContactEndTouchEvent& endTouchEvent,
							ProcessIntersectionsDelegate_t function);  // 1643
			CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
			ClosurePtr<void (detail::GenericClass::::ClosurePtr()(VPhysIntersectionNotification_t*), void (*)(VPhysIntersectionNotification this); // 1086
			CUtlAbstractDelegate::SetMementoFrom(
					const CUtlAbstractDelegate& right);  // 843
			ClosurePtr<void (detail::GenericClass::::CopyFrom<FastDelegate1<VPhysIntersectionNotification_t*, void> >(
											FastDelegate1<VPhysIntersectionNotification_t*, void>* pParent,
											const CUtlAbstractDelegate& right);  // 1087
			FastDelegate1<VPhysIntersectionNotification_t::FastDelegate1(
					const FastDelegate1<VPhysIntersectionNotification_t*, void>& x);  // 2148
			CUtlDelegate<void(VPhysIntersectionNotification_t::CUtlDelegate(
					const CUtlDelegate<void(VPhysIntersectionNotification_t*)> &);  // 1643
			Hash12(const void* pKey); // 155
			DefaultContactHashFunctor::operator(
					const b3ContactId& contactId);  // 267
			Remove(const CUtlHashtable<b3ContactId, empty_t, CPhysicsWorld::DefaultContactHashFunctor, CPhysicsWorld::DefaultContactEqualFun this,
				KeyArg_t k);  // 1644
		}
	}
	{
		int i; // 1647
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1505
		Vector::Vector(); // 231
		Vector::Vector(); // 231
		Vector::Vector(); // 231
		VPhysIntersectionNotification_t::VPhysIntersectionNotification_t(); // 1504
		ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(VPhysIntersectionNotification_t*), void (*)(VPhysIntersectionNotifi this); // 1150
		FastDelegate1<VPhysIntersectionNotification_t::operator(
				VPhysIntersectionNotification_t* p1);  // 1515
		ProcessSensorEndTouchEvent(const b3SensorEndTouchEvent& endTouchEvent,
						ProcessIntersectionsDelegate_t function);  // 1649
		CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
		ClosurePtr<void (detail::GenericClass::::ClosurePtr()(VPhysIntersectionNotification_t*), void (*)(VPhysIntersectionNotification this); // 1086
		CUtlAbstractDelegate::SetMementoFrom(
				const CUtlAbstractDelegate& right);  // 843
		ClosurePtr<void (detail::GenericClass::::CopyFrom<FastDelegate1<VPhysIntersectionNotification_t*, void> >(
										FastDelegate1<VPhysIntersectionNotification_t*, void>* pParent,
										const CUtlAbstractDelegate& right);  // 1087
		FastDelegate1<VPhysIntersectionNotification_t::FastDelegate1(
				const FastDelegate1<VPhysIntersectionNotification_t*, void>& x);  // 2148
		CUtlDelegate<void(VPhysIntersectionNotification_t::CUtlDelegate(
				const CUtlDelegate<void(VPhysIntersectionNotification_t*)> &);  // 1649
	}
	{
		UtlHashHandle_t it; // 1652
		{
			const b3ContactId& contact; // 1654
			RnCollisionAttr_t::GetCollisionFunctionMask(); // 199
			RnCollisionAttr_t::IsTouchPersistsEnabled(); // 1539
			Vector::Vector(); // 231
			Vector::Vector(); // 231
			Vector::Vector(); // 231
			VPhysIntersectionNotification_t::VPhysIntersectionNotification_t(); // 1550
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 1551
			{
				int manifoldIndex; // 1566
				{
					const b3Manifold* manifold; // 1568
					int pointCount; // 1569
					{
						int k; // 1570
						{
							const b3ManifoldPoint* mp; // 1572
							float speed; // 1573
						}
					}
				}
			}
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1589
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 11
			B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 1586
			Vector::operator=(
					const Vector& vOther);  // 1586
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 11
			B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 1587
			Vector::operator=(
					const Vector& vOther);  // 1587
			ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(VPhysIntersectionNotification_t*), void (*)(VPhysIntersectionNotifi this); // 1150
			FastDelegate1<VPhysIntersectionNotification_t::operator(
					VPhysIntersectionNotification_t* p1);  // 1592
			RnCollisionAttr_t::GetCollisionFunctionMask(); // 199
			RnCollisionAttr_t::IsTouchPersistsEnabled(); // 1539
			ProcessContactPersistsEvent(const b3ContactId& contactId,
							ProcessIntersectionsDelegate_t function);  // 1656
			CUtlMemory<CUtlHashtableEntry<b3ContactId, empty_t>, int>::operator[](
					int i);  // 297
			CUtlKeyValuePair<b3ContactId, empty_t>::GetValue(); // 297
			operator[](const CUtlHashtable<b3ContactId, empty_t, CPhysicsWorld::DefaultContactHashFunctor, CPhysicsWorld::DefaultContactEqualFun this,
					handle_t idx);  // 1654
			CUtlAbstractDelegate::SetMementoFrom(
					const CUtlAbstractDelegate& right);  // 843
			ClosurePtr<void (detail::GenericClass::::CopyFrom<FastDelegate1<VPhysIntersectionNotification_t*, void> >(
											FastDelegate1<VPhysIntersectionNotification_t*, void>* pParent,
											const CUtlAbstractDelegate& right);  // 1087
			CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
			ClosurePtr<void (detail::GenericClass::::ClosurePtr()(VPhysIntersectionNotification_t*), void (*)(VPhysIntersectionNotification this); // 1086
			FastDelegate1<VPhysIntersectionNotification_t::FastDelegate1(
					const FastDelegate1<VPhysIntersectionNotification_t*, void>& x);  // 2148
			CUtlDelegate<void(VPhysIntersectionNotification_t::CUtlDelegate(
					const CUtlDelegate<void(VPhysIntersectionNotification_t*)> &);  // 1656
			CUtlMemory<CUtlHashtableEntry<b3ContactId, empty_t>, int>::Base(); // 914
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<b3ContactId, empty_t>, int>::Count(); // 915
				CUtlHashtableEntry<b3ContactId, empty_t>::IsValid(); // 917
			}
			NextHandle(const CUtlHashtable<b3ContactId, empty_t, CPhysicsWorld::DefaultContactHashFunctor, CPhysicsWorld::DefaultContactEq this,
					handle_t start);  // 1658
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<b3ContactId, empty_t>, int>::Count(); // 915
				CUtlHashtableEntry<b3ContactId, empty_t>::IsValid(); // 917
			}
			CUtlMemory<CUtlHashtableEntry<b3ContactId, empty_t>, int>::Base(); // 914
			NextHandle(const CUtlHashtable<b3ContactId, empty_t, CPhysicsWorld::DefaultContactHashFunctor, CPhysicsWorld::DefaultContactEq this,
					handle_t start);  // 857
			CUtlMemory<CUtlHashtableEntry<b3ContactId, empty_t>, int>::operator[](
					int i);  // 852
			RemoveAndAdvance(const CUtlHashtable<b3ContactId, empty_t, CPhysicsWorld::DefaultContactHashFunctor, CPhysicsWorld::DefaultContactEqualFun this,
					UtlHashHandle_t idx);  // 1662
		}
		CUtlMemory<CUtlHashtableEntry<b3ContactId, empty_t>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<b3ContactId, empty_t>, int>::Count(); // 915
			CUtlHashtableEntry<b3ContactId, empty_t>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<b3ContactId, empty_t, CPhysicsWorld::DefaultContactHashFunctor, CPhysicsWorld::DefaultContactEq this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<b3ContactId, empty_t, CPhysicsWorld::DefaultContactHashFunctor, CPhysicsWorld::DefaultContactEq this); // 1652
	}
} /* size: 0, variables: 2 */

// <00B1C367> vphysics2/physicsworld.cpp:1667
// variables: 4
void CPhysicsWorld::ShouldCollide(const IPhysicsShape* pShape1, const IPhysicsShape* pShape2)
{
	bool bIsTrigger; // 1672
	Rule rule; // 1685
	{
		const IPhysicsBody* pBody1; // 1675
		const IPhysicsBody* pBody2; // 1676
	}
} /* size: 307, variables: 2 */

// <00B1C1BC> vphysics2/physicsworld.cpp:1689
// variables: 2
// function calls: 2
void CPhysicsWorld::StepSimulation(float flDeltaTime, int nNumSteps)
{
	const int  minSubSteps; // 1691
	const int  maxSubSteps; // 1692
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 1693
	CPhysicsWorld::StepUpdateManaged(); // 1695
} /* size: 77, variables: 2, inline expansions: 2 (37 bytes) */

// <00B57BBF> vphysics2/physicsworld.cpp:1698
// variables: 2
void CPhysicsWorld::StepUpdateManaged()
{
	b3BodyEvents moveEvents; // 1703
	b3JointEvents jointEvents; // 1718
} /* size: 0, variables: 2 */

// <00B54559> vphysics2/physicsworld.cpp:1698
// variables: 11
// function calls: 18
void CPhysicsWorld::StepUpdateManaged()
{
	b3BodyEvents moveEvents; // 1703
	b3JointEvents jointEvents; // 1718
	{
		int i; // 1704
		{
			const b3BodyMoveEvent& moveEvent; // 1706
			CPhysicsBody* pBody; // 1707
			CTransform transform; // 1711
			Vector linearVelocity; // 1712
			Vector angularVelocity; // 1713
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
			CTransform::SetPositionAndScale(
						const Vector& v0,
						float flScale);  // 33
			CTransform::CTransform(
					const Vector& v,
					const Quaternion& q,
					float flScale);  // 71
			B3Cast<CTransform, b3Transform>(const b3Transform& v); // 1711
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 67
			Vector::Vector(
				vec_t xyz);  // 127
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 127
			CTransform::GetScale(); // 127
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 127
			CTransformUnaligned::CTransformUnaligned(
						const CTransform& transform);  // 1715
		}
	}
	{
		int i; // 1719
		{
			const b3JointEvent& jointEvent; // 1721
			CPhysicsJoint* pJoint; // 1722
		}
	}
} /* size: 413, variables: 2 */

// <00B1C0FF> vphysics2/physicsworld.cpp:1698
// variables: 11
void CPhysicsWorld::StepUpdateManaged()
{
	b3BodyEvents moveEvents; // 1703
	b3JointEvents jointEvents; // 1718
	{
		int i; // 1704
		{
			const b3BodyMoveEvent& moveEvent; // 1706
			CPhysicsBody* pBody; // 1707
			CTransform transform; // 1711
			Vector linearVelocity; // 1712
			Vector angularVelocity; // 1713
		}
	}
	{
		int i; // 1719
		{
			const b3JointEvent& jointEvent; // 1721
			CPhysicsJoint* pJoint; // 1722
		}
	}
} /* size: 0, variables: 2 */

// <00B1C0B7> vphysics2/physicsworld.cpp:1730
void CPhysicsWorld::EnableSleeping()
{
} /* size: 17 */

// <00B1C06F> vphysics2/physicsworld.cpp:1735
void CPhysicsWorld::DisableSleeping()
{
} /* size: 14 */

// <00B1C02C> vphysics2/physicsworld.cpp:1740
void CPhysicsWorld::IsSleepingEnabled()
{
} /* size: 12 */

// <00B1BFCB> vphysics2/physicsworld.cpp:1745
void CPhysicsWorld::SetMaximumLinearSpeed(float flSpeed)
{
} /* size: 12 */

// <00B5407C> vphysics2/physicsworld.cpp:1750
// variable: 1
// function calls: 8
void ConvertCastResult(const b3RayResult& inResult, PhysicsTrace_t& outResult)
{
	CPhysicsShape* pShape; // 1755
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 1758
	Vector::operator=(
			const Vector& vOther);  // 1758
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	B3Cast<Vector, b3Vec3>(const b3Vec3& v); // 1759
	Vector::operator=(
			const Vector& vOther);  // 1759
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 1763
} /* size: 178, variables: 1, inline expansions: 8 (113 bytes) */

// <00B1BF8E> vphysics2/physicsworld.cpp:1750
// variable: 1
void ConvertCastResult(const b3RayResult& inResult, PhysicsTrace_t& outResult)
{
	CPhysicsShape* pShape; // 1755
} /* size: 0, variables: 1 */

// <00B01DD3> vphysics2/physicsworld.cpp:1767
// member functions: 4
// member variables: 3
// class size: 80
class CRayCastCallback {
	/* vphysics2/physicsworld.cpp:1771 */
	float Callback(b3ShapeId, b3Vec3, b3Vec3, float, bool, uint64_t, int, int, void* );
	/* vphysics2/physicsworld.cpp:1794 */
	void CRayCastCallback(CRayCastCallback* , const CPhysicsWorld* , const RnQueryAttr_t& );
	b3RayResult Result; /* 0 64 */
private:
	const class CPhysicsWorld * m_pWorld; /* 64 8 */
	const class RnQueryAttr_t & m_query; /* 72 8 */
	float Callback(b3ShapeId, b3Vec3, b3Vec3, float, bool, uint64_t, int, int, void *); /* linkage=_ZN16CRayCastCallback8CallbackE9b3ShapeId6b3Vec3S1_fbmiiPv */
	void CRayCastCallback(class CRayCastCallback *, const class CPhysicsWorld  *, const class RnQueryAttr_t  &); /* linkage=_ZN16CRayCastCallbackC4EPK13CPhysicsWorldRK13RnQueryAttr_t */
};

// <00B1BE4D> vphysics2/physicsworld.cpp:1771
// variables: 3
void Callback(b3ShapeId shapeId, b3Vec3 point, b3Vec3 normal, float fraction, bool startSolid, uint64_t userMaterialId, int triangleIndex, int childIndex, void* context)
{
	CRayCastCallback* callback; // 1773
	const CPhysicsWorld* pWorld; // 1774
	b3RayResult* rayResult; // 1781
} /* size: 207, variables: 3 */

// <00B1BE2C> vphysics2/physicsworld.cpp:1794
void CRayCastCallback::CRayCastCallback(const CPhysicsWorld* pWorld, const RnQueryAttr_t& query)
{
} /* size: 0 */

// <00B1BDF9> vphysics2/physicsworld.cpp:1794
inline void CRayCastCallback::CRayCastCallback(const CPhysicsWorld* pWorld, const RnQueryAttr_t& query)
{
} /* size: 0 */

// <00B01E9D> vphysics2/physicsworld.cpp:1808
// member functions: 4
// member variables: 4
// class size: 88
class CRayCastMultipleCallback {
	/* vphysics2/physicsworld.cpp:1812 */
	float Callback(b3ShapeId, b3Vec3, b3Vec3, float, bool, uint64_t, int, int, void* );
	/* vphysics2/physicsworld.cpp:1839 */
	void CRayCastMultipleCallback(CRayCastMultipleCallback* , const CPhysicsWorld* , const RnQueryAttr_t& , CTraceVector& );
	b3RayResult Result; /* 0 64 */
private:
	const class CPhysicsWorld * m_pWorld; /* 64 8 */
	const class RnQueryAttr_t & m_query; /* 72 8 */
	CTraceVector & m_results; /* 80 8 */
	float Callback(b3ShapeId, b3Vec3, b3Vec3, float, bool, uint64_t, int, int, void *); /* linkage=_ZN24CRayCastMultipleCallback8CallbackE9b3ShapeId6b3Vec3S1_fbmiiPv */
	void CRayCastMultipleCallback(class CRayCastMultipleCallback *, const class CPhysicsWorld  *, const class RnQueryAttr_t  &, CTraceVector &); /* linkage=_ZN24CRayCastMultipleCallbackC4EPK13CPhysicsWorldRK13RnQueryAttr_tR23CUtlVectorFixedGrowableI14PhysicsTrace_tLm128EE */
};

// <00B1B888> vphysics2/physicsworld.cpp:1812
// variables: 4
// function calls: 17
void Callback(b3ShapeId shapeId, b3Vec3 point, b3Vec3 normal, float fraction, bool startSolid, uint64_t userMaterialId, int triangleIndex, int childIndex, void* context)
{
	CRayCastMultipleCallback* callback; // 1814
	const CPhysicsWorld* pWorld; // 1815
	b3RayResult& rayResult; // 1822
	PhysicsTrace_t result; // 1832
	ConvertCastResult(const b3RayResult& inResult,
				PhysicsTrace_t& outResult);  // 1833
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 37
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 38
	PhysicsTrace_t::PhysicsTrace_t(); // 1832
	CUtlMemory<PhysicsTrace_t, int>::NumAllocated(); // 1196
	CUtlMemory<PhysicsTrace_t, int>::Base(); // 112
	CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int> >::Base(); // 368
	CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int> >::ResetDbgInfo(); // 824
	CUtlMemory<PhysicsTrace_t, int>::IsGrowable(); // 823
	CUtlMemory<PhysicsTrace_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<PhysicsTrace_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<PhysicsTrace_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int> >::GrowMemory(
			int num);  // 1198
	CopyConstruct<PhysicsTrace_t>(PhysicsTrace_t* pMemory,
					const PhysicsTrace_t& src);  // 1201
	CUtlMemory<PhysicsTrace_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int> >::Element(
		int i);  // 1201
	CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int> >::AddToTail(
			const PhysicsTrace_t& src);  // 1834
} /* size: 602, variables: 4, inline expansions: 17 (879 bytes) */

// <00B1B862> vphysics2/physicsworld.cpp:1839
void CRayCastMultipleCallback::CRayCastMultipleCallback(const CPhysicsWorld* pWorld, const RnQueryAttr_t& query, CTraceVector& results)
{
} /* size: 0 */

// <00B1B822> vphysics2/physicsworld.cpp:1839
inline void CRayCastMultipleCallback::CRayCastMultipleCallback(const CPhysicsWorld* pWorld, const RnQueryAttr_t& query, CTraceVector& results)
{
} /* size: 0 */

// <00B1B53D> vphysics2/physicsworld.cpp:1855
// variable: 1
// function calls: 8
void CPhysicsWorld::CastRaySingle(PhysicsTrace_t& out, const Vector& vRayStart, const Vector& vRayDelta, const RnQueryAttr_t& attributes)
{
	CRayCastCallback callback; // 1857
	CRayCastCallback::CRayCastCallback(
			const CPhysicsWorld* pWorld,
			const RnQueryAttr_t& query);  // 1857
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 1858
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 1858
	ConvertCastResult(const b3RayResult& inResult,
				PhysicsTrace_t& outResult);  // 1859
} /* size: 196, variables: 1, inline expansions: 8 (54 bytes) */

// <00B1B2AD> vphysics2/physicsworld.cpp:1862
// variable: 1
// function calls: 7
void CPhysicsWorld::CastRayMultiple(CTraceVector& out, const Vector& vRayStart, const Vector& vRayDelta, const RnQueryAttr_t& attributes)
{
	CRayCastMultipleCallback callback; // 1864
	CRayCastMultipleCallback::CRayCastMultipleCallback(
				const CPhysicsWorld* pWorld,
				const RnQueryAttr_t& query,
				CTraceVector& results);  // 1864
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 1865
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 1865
} /* size: 162, variables: 1, inline expansions: 7 (34 bytes) */

// <00B542B4> vphysics2/physicsworld.cpp:1868
// function call: 1
void CPhysicsWorld::CastSphereSingle(PhysicsTrace_t& out, const Vector& vRayStart, const Vector& vRayDelta, float flRadius, const RnQueryAttr_t& attributes)
{
	CPhysicsWorld::CastSphereSingle(
			PhysicsTrace_t& out,
			const Vector& vRayStart,
			const Vector& vRayDelta,
			float flRadius,
			const RnQueryAttr_t& attributes);  // 1868
} /* size: 98, inline expansions: 1 (42 bytes) */

// <00B53D41> vphysics2/physicsworld.cpp:1880
// function call: 1
void CPhysicsWorld::CastSphereMultiple(CTraceVector& out, const Vector& vRayStart, const Vector& vRayDelta, float flRadius, const RnQueryAttr_t& attributes)
{
	CPhysicsWorld::CastSphereMultiple(
				CTraceVector& out,
				const Vector& vRayStart,
				const Vector& vRayDelta,
				float flRadius,
				const RnQueryAttr_t& attributes);  // 1880
} /* size: 98, inline expansions: 1 (42 bytes) */

// <00B1B1F9> vphysics2/physicsworld.cpp:1880
void CPhysicsWorld::CastSphereMultiple(CTraceVector& out, const Vector& vRayStart, const Vector& vRayDelta, float flRadius, const RnQueryAttr_t& attributes)
{
} /* size: 0 */

// <00B1A803> vphysics2/physicsworld.cpp:1892
// variables: 6
// function calls: 37
void CPhysicsWorld::CastBoxSingle(PhysicsTrace_t& out, const Vector& vRayStart, const Vector& vRayDelta, const Quaternion& qRot, const Vector& vExtent, const RnQueryAttr_t& attributes)
{
	Vector v; // 1894
	Vector pVertices; // 1895
	{
		Vector& vertex; // 1903
		Vector& __for_range; // 16409
		Vector* __for_begin; // 28607
		Vector* __for_end; // 28607
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
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
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
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
		operator*(const Quaternion& q,
				const Vector& v);  // 1905
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 1905
		Vector::operator=(
				const Vector& vOther);  // 1905
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1901
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1901
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1901
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1901
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1901
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1901
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1901
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1901
} /* size: 649, variables: 2, inline expansions: 8 (147 bytes) */

// <00B19E07> vphysics2/physicsworld.cpp:1911
// variables: 6
// function calls: 37
void CPhysicsWorld::CastBoxMultiple(CTraceVector& out, const Vector& vRayStart, const Vector& vRayDelta, const Quaternion& qRot, const Vector& vExtent, const RnQueryAttr_t& attributes)
{
	Vector v; // 1913
	Vector pVertices; // 1914
	{
		Vector& vertex; // 1922
		Vector& __for_range; // 16409
		Vector* __for_begin; // 28607
		Vector* __for_end; // 28607
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
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
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
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
		operator*(const Quaternion& q,
				const Vector& v);  // 1924
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 1924
		Vector::operator=(
				const Vector& vOther);  // 1924
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1920
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1920
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1920
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1920
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1920
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1920
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1920
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1920
} /* size: 649, variables: 2, inline expansions: 8 (147 bytes) */

// <00B559C2> vphysics2/physicsworld.cpp:1930
// variables: 5
// function calls: 68
void ComputeCylinderPoints(Vector* points, const Vector& origin, const Quaternion& rotation, const Vector& start, const Vector& end, float radius, int numSegments)
{
	{
		int i; // 1932
		{
			float flAngle; // 1934
			Vector vOffset; // 1935
			Vector vBottom; // 1936
			Vector vTop; // 1937
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1935
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 1936
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1935
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 1937
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 1488
			Vector::Vector(); // 1487
			Vector::Cross(
				const Vector& vOther);  // 2464
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 2464
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
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1853
			Quaternion::v(); // 2464
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
					const Vector& v);  // 1938
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 1488
			Vector::Vector(); // 1487
			Vector::Cross(
				const Vector& vOther);  // 2464
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 2464
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
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1853
			Quaternion::v(); // 2464
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
					const Vector& v);  // 1939
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 1938
			Vector::operator=(
					const Vector& vOther);  // 1938
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 1939
			Vector::operator=(
					const Vector& vOther);  // 1939
		}
	}
} /* size: 813 */

// <00B19D59> vphysics2/physicsworld.cpp:1930
// variables: 5
void ComputeCylinderPoints(Vector* points, int numSegments, const Vector& origin, const Quaternion& rotation, const Vector& start, const Vector& end, float radius)
{
	{
		int i; // 1932
		{
			float flAngle; // 1934
			Vector vOffset; // 1935
			Vector vBottom; // 1936
			Vector vTop; // 1937
		}
	}
} /* size: 0 */

// <00B19BDE> vphysics2/physicsworld.cpp:1943
// variables: 2
void CPhysicsWorld::CastCylinderSingle(PhysicsTrace_t& out, const Vector* pVertices, float flRadius, const Vector& vRayStart, const Vector& vDelta, const Quaternion& qRot, const RnQueryAttr_t& attributes)
{
	const int  nNumSegments; // 1945
	Vector points; // 1946
} /* size: 177, variables: 2 */

// <00B19A53> vphysics2/physicsworld.cpp:1951
// variables: 2
void CPhysicsWorld::CastCylinderMultiple(CTraceVector& out, const Vector* pVertices, float flRadius, const Vector& vRayStart, const Vector& vDelta, const Quaternion& qRot, const RnQueryAttr_t& attributes)
{
	const int  nNumSegments; // 1953
	Vector points; // 1954
} /* size: 177, variables: 2 */

// <00B197DF> vphysics2/physicsworld.cpp:1959
// variables: 2
// function calls: 5
void CPhysicsWorld::CastShapeSingle(PhysicsTrace_t& out, const Vector* pVertices, int nVertices, float flRadius, const Vector& vDelta, const RnQueryAttr_t& attributes)
{
	CRayCastCallback callback; // 1961
	b3ShapeProxy proxy; // 1962
	CRayCastCallback::CRayCastCallback(
			const CPhysicsWorld* pWorld,
			const RnQueryAttr_t& query);  // 1961
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 1963
	ConvertCastResult(const b3RayResult& inResult,
				PhysicsTrace_t& outResult);  // 1964
} /* size: 198, variables: 2, inline expansions: 5 (48 bytes) */

// <00B195C0> vphysics2/physicsworld.cpp:1967
// variables: 2
// function calls: 4
void CPhysicsWorld::CastShapeMultiple(CTraceVector& out, const Vector* pVertices, int nVertices, float flRadius, const Vector& vDelta, const RnQueryAttr_t& attributes)
{
	CRayCastMultipleCallback callback; // 1969
	b3ShapeProxy proxy; // 1970
	CRayCastMultipleCallback::CRayCastMultipleCallback(
				const CPhysicsWorld* pWorld,
				const RnQueryAttr_t& query,
				CTraceVector& results);  // 1969
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 1971
} /* size: 164, variables: 2, inline expansions: 4 (34 bytes) */

// <00B59C0D> vphysics2/physicsworld.cpp:1974
// variables: 6
void CPhysicsWorld::CastBody(PhysicsTrace_t& out, IPhysicsBody* pBody, const Vector& vRayStart, const Vector& vDelta, const Quaternion& qRot, const RnQueryAttr_t& attributes)
{
	float fraction; // 1979
	b3BodyId bodyId; // 1981
	b3Transform shapeTransform; // 1982
	b3Vec3 hullPoints; // 1983
	CUtlVector<b3ShapeId, CUtlMemory<b3ShapeId, int> > shapes; // 1985
	int shapeCount; // 1987
} /* size: 17, variables: 6 */

// <00B59284> vphysics2/physicsworld.cpp:1974
// variables: 16
// function calls: 32
void CPhysicsWorld::CastBody(PhysicsTrace_t& out, IPhysicsBody* pBody, const Vector& vRayStart, const Vector& vDelta, const Quaternion& qRot, const RnQueryAttr_t& attributes)
{
	float fraction; // 1979
	b3BodyId bodyId; // 1981
	b3Transform shapeTransform; // 1982
	b3Vec3 hullPoints; // 1983
	CUtlVector<b3ShapeId, CUtlMemory<b3ShapeId, int> > shapes; // 1985
	int shapeCount; // 1987
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 1982
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 1982
	CUtlMemory<b3ShapeId, int>::ValidateGrowSize(); // 475
	CUtlMemory<b3ShapeId, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<b3ShapeId, CUtlMemory<b3ShapeId, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<b3ShapeId, CUtlMemory<b3ShapeId, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<b3ShapeId, CUtlMemory<b3ShapeId, int> >::CUtlVector(); // 1985
	{
		int i; // 1989
		{
			b3ShapeId shapeId; // 1991
			b3ShapeType shapeType; // 1992
			const b3Hull* hull; // 1997
			const b3Vec3* points; // 1998
			b3ShapeProxy shapeProxy; // 2014
			PhysicsTrace_t Result; // 2052
			{
				b3Capsule capsule; // 2020
			}
			{
				b3Sphere sphere; // 2028
			}
			{
				int i; // 2037
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
						b3Vec3 v);  // 2039
			}
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 37
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 38
			PhysicsTrace_t::PhysicsTrace_t(); // 2052
			Vector::operator=(
					const Vector& vOther);  // 31
			Vector::operator=(
					const Vector& vOther);  // 31
			PhysicsTrace_t::operator=(
					const PhysicsTrace_t  &);  // 2058
			b3GetHullPoints(const b3Hull* hull); // 2009
		}
	}
	CUtlMemory<b3ShapeId, int>::Purge(); // 903
	CUtlMemory<b3ShapeId, int>::Purge(); // 1799
	CUtlVectorBase<b3ShapeId, CUtlMemory<b3ShapeId, int> >::Purge(); // 560
	ValidateAlignment<b3ShapeId>(void); // 508
	CUtlMemory<b3ShapeId, int>::Purge(); // 510
	CUtlMemory<b3ShapeId, int>::~CUtlMemory(); // 562
	CUtlVectorBase<b3ShapeId, CUtlMemory<b3ShapeId, int> >::~CUtlVectorBase(); // 410
	CUtlVector<b3ShapeId, CUtlMemory<b3ShapeId, int> >::~CUtlVector(); // 2061
} /* size: 0, variables: 6, inline expansions: 18 (331 bytes) */

// <00B19458> vphysics2/physicsworld.cpp:1974
// variables: 16
void CPhysicsWorld::CastBody(PhysicsTrace_t& out, IPhysicsBody* pBody, const Vector& vRayStart, const Vector& vDelta, const Quaternion& qRot, const RnQueryAttr_t& attributes)
{
	float fraction; // 1979
	b3BodyId bodyId; // 1981
	b3Transform shapeTransform; // 1982
	b3Vec3 hullPoints; // 1983
	CUtlVector<b3ShapeId, CUtlMemory<b3ShapeId, int> > shapes; // 1985
	int shapeCount; // 1987
	{
		int i; // 1989
		{
			b3ShapeId shapeId; // 1991
			b3ShapeType shapeType; // 1992
			const b3Hull* hull; // 1997
			const b3Vec3* points; // 1998
			b3ShapeProxy shapeProxy; // 2014
			PhysicsTrace_t Result; // 2052
			{
				b3Capsule capsule; // 2020
			}
			{
				b3Sphere sphere; // 2028
			}
			{
				int i; // 2037
			}
		}
	}
} /* size: 0, variables: 6 */

// <00B5A4E7> vphysics2/physicsworld.cpp:2063
// variables: 5
void CPhysicsWorld::CastBodyMultiple(CTraceVector& out, IPhysicsBody* pBody, const Vector& vRayStart, const Vector& vDelta, const Quaternion& qRot, const RnQueryAttr_t& attributes)
{
	b3BodyId bodyId; // 2068
	b3Transform shapeTransform; // 2069
	b3Vec3 hullPoints; // 2070
	CUtlVector<b3ShapeId, CUtlMemory<b3ShapeId, int> > shapes; // 2072
	int shapeCount; // 2074
} /* size: 17, variables: 5 */

// <00B59CE6> vphysics2/physicsworld.cpp:2063
// variables: 14
// function calls: 26
void CPhysicsWorld::CastBodyMultiple(CTraceVector& out, IPhysicsBody* pBody, const Vector& vRayStart, const Vector& vDelta, const Quaternion& qRot, const RnQueryAttr_t& attributes)
{
	b3BodyId bodyId; // 2068
	b3Transform shapeTransform; // 2069
	b3Vec3 hullPoints; // 2070
	CUtlVector<b3ShapeId, CUtlMemory<b3ShapeId, int> > shapes; // 2072
	int shapeCount; // 2074
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	Vector::operator[](
			int i);  // 31
	B3Cast<b3Vec3, Vector>(const Vector& v); // 2069
	B3Cast<b3Quat, Quaternion>(const Quaternion& v); // 2069
	CUtlMemory<b3ShapeId, int>::ValidateGrowSize(); // 475
	CUtlMemory<b3ShapeId, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<b3ShapeId, CUtlMemory<b3ShapeId, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<b3ShapeId, CUtlMemory<b3ShapeId, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<b3ShapeId, CUtlMemory<b3ShapeId, int> >::CUtlVector(); // 2072
	{
		int i; // 2076
		{
			b3ShapeId shapeId; // 2078
			b3ShapeType shapeType; // 2079
			const b3Hull* hull; // 2084
			const b3Vec3* points; // 2085
			b3ShapeProxy shapeProxy; // 2101
			{
				b3Capsule capsule; // 2107
			}
			{
				b3Sphere sphere; // 2115
			}
			{
				int i; // 2124
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
						b3Vec3 v);  // 2126
			}
			b3GetHullPoints(const b3Hull* hull); // 2096
		}
	}
	CUtlMemory<b3ShapeId, int>::Purge(); // 903
	CUtlMemory<b3ShapeId, int>::Purge(); // 1799
	CUtlVectorBase<b3ShapeId, CUtlMemory<b3ShapeId, int> >::Purge(); // 560
	ValidateAlignment<b3ShapeId>(void); // 508
	CUtlMemory<b3ShapeId, int>::Purge(); // 510
	CUtlMemory<b3ShapeId, int>::~CUtlMemory(); // 562
	CUtlVectorBase<b3ShapeId, CUtlMemory<b3ShapeId, int> >::~CUtlVectorBase(); // 410
	CUtlVector<b3ShapeId, CUtlMemory<b3ShapeId, int> >::~CUtlVector(); // 2141
} /* size: 0, variables: 5, inline expansions: 18 (333 bytes) */

// <00B1931B> vphysics2/physicsworld.cpp:2063
// variables: 14
void CPhysicsWorld::CastBodyMultiple(CTraceVector& out, IPhysicsBody* pBody, const Vector& vRayStart, const Vector& vDelta, const Quaternion& qRot, const RnQueryAttr_t& attributes)
{
	b3BodyId bodyId; // 2068
	b3Transform shapeTransform; // 2069
	b3Vec3 hullPoints; // 2070
	CUtlVector<b3ShapeId, CUtlMemory<b3ShapeId, int> > shapes; // 2072
	int shapeCount; // 2074
	{
		int i; // 2076
		{
			b3ShapeId shapeId; // 2078
			b3ShapeType shapeType; // 2079
			const b3Hull* hull; // 2084
			const b3Vec3* points; // 2085
			b3ShapeProxy shapeProxy; // 2101
			{
				b3Capsule capsule; // 2107
			}
			{
				b3Sphere sphere; // 2115
			}
			{
				int i; // 2124
			}
		}
	}
} /* size: 0, variables: 5 */

// <00B03714> vphysics2/physicsworld.cpp:2143
// member functions: 6
// member variables: 3
// class size: 24
class COverlapResultCallback {
	/* vphysics2/physicsworld.cpp:2147 */
	bool CallbackStatic(b3ShapeId, void* );
	/* vphysics2/physicsworld.cpp:2153 */
	void COverlapResultCallback(COverlapResultCallback* , const CPhysicsWorld* , const RnQueryAttr_t& , CQueryResult& );
private:
	/* vphysics2/physicsworld.cpp:2162 */
	bool Callback(COverlapResultCallback* , b3ShapeId);
	const class CPhysicsWorld * m_pWorld; /* 0 8 */
	const class RnQueryAttr_t & m_query; /* 8 8 */
	CQueryResult & m_result; /* 16 8 */
	bool CallbackStatic(b3ShapeId, void *); /* linkage=_ZN22COverlapResultCallback14CallbackStaticE9b3ShapeIdPv */
	void COverlapResultCallback(class COverlapResultCallback *, const class CPhysicsWorld  *, const class RnQueryAttr_t  &, CQueryResult &); /* linkage=_ZN22COverlapResultCallbackC4EPK13CPhysicsWorldRK13RnQueryAttr_tR23CUtlVectorFixedGrowableIP13IPhysicsShapeLm128EE */
	bool Callback(class COverlapResultCallback *, b3ShapeId); /* linkage=_ZN22COverlapResultCallback8CallbackE9b3ShapeId */
};

// <00B18F7C> vphysics2/physicsworld.cpp:2147
// variable: 1
// function calls: 14
void CallbackStatic(b3ShapeId shapeId, void* context)
{
	COverlapResultCallback* callback; // 2149
	CUtlMemory<IPhysicsShape::NumAllocated(); // 1247
	CUtlMemory<IPhysicsShape::Base(); // 112
	CUtlVectorBase<IPhysicsShape::Base(); // 368
	CUtlVectorBase<IPhysicsShape::ResetDbgInfo(); // 824
	CUtlMemory<IPhysicsShape::IsGrowable(); // 823
	CUtlMemory<IPhysicsShape::IsExternallyAllocated(); // 859
	CUtlMemory<IPhysicsShape::IsExternallyAllocated(); // 861
	CUtlMemory<IPhysicsShape::Grow(
		int num);  // 806
	CUtlVectorBase<IPhysicsShape::GrowMemory(
			int num);  // 1249
	CUtlMemory<IPhysicsShape::operator[](
			int i);  // 602
	CUtlVectorBase<IPhysicsShape::Element(
		int i);  // 1252
	Construct<IPhysicsShape*, IPhysicsShape*>(IPhysicsShape** pMemory); // 1252
	CUtlVectorBase<IPhysicsShape::AddToTail(
			IPhysicsShape *& src);  // 2167
	COverlapResultCallback::Callback(
		b3ShapeId shapeId);  // 2150
} /* size: 347, variables: 1, inline expansions: 14 (1078 bytes) */

// <00B18F56> vphysics2/physicsworld.cpp:2153
void COverlapResultCallback::COverlapResultCallback(const CPhysicsWorld* pWorld, const RnQueryAttr_t& query, CQueryResult& result)
{
} /* size: 0 */

// <00B18F16> vphysics2/physicsworld.cpp:2153
inline void COverlapResultCallback::COverlapResultCallback(const CPhysicsWorld* pWorld, const RnQueryAttr_t& query, CQueryResult& result)
{
} /* size: 0 */

// <00B18EE3> vphysics2/physicsworld.cpp:2162
// variable: 1
inline void COverlapResultCallback::Callback(b3ShapeId shapeId)
{
	CPhysicsShape* pShape; // 2164
} /* size: 0, variables: 1 */

// <00B18DA3> vphysics2/physicsworld.cpp:2178
// variables: 2
// function call: 1
void CPhysicsWorld::Query(CQueryResult& result, const Vector& vCenter, float flRadius, const RnQueryAttr_t& attributes)
{
	COverlapResultCallback callback; // 2180
	b3ShapeProxy proxy; // 2181
	COverlapResultCallback::COverlapResultCallback(
				const CPhysicsWorld* pWorld,
				const RnQueryAttr_t& query,
				CQueryResult& result);  // 2180
} /* size: 127, variables: 2, inline expansions: 1 (22 bytes) */

// <00B188FD> vphysics2/physicsworld.cpp:2185
// variables: 3
// function calls: 10
void CPhysicsWorld::Query(CQueryResult& result, const AABB_t& bounds, const RnQueryAttr_t& attributes)
{
	const Vector& vMin; // 2187
	const Vector& vMax; // 2188
	Vector pPoints; // 2190
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2196
	COverlapResultCallback::COverlapResultCallback(
				const CPhysicsWorld* pWorld,
				const RnQueryAttr_t& query,
				CQueryResult& result);  // 2203
	CPhysicsWorld::Query(
		CQueryResult& result,
		const Vector* pPoints,
		int nPoints,
		const RnQueryAttr_t& attributes);  // 2198
} /* size: 325, variables: 3, inline expansions: 10 (243 bytes) */

// <00B53BC9> vphysics2/physicsworld.cpp:2201
// variables: 2
// function call: 1
void CPhysicsWorld::Query(CQueryResult& result, const Vector* pPoints, int nPoints, const RnQueryAttr_t& attributes)
{
	COverlapResultCallback callback; // 2203
	b3ShapeProxy proxy; // 2204
	COverlapResultCallback::COverlapResultCallback(
				const CPhysicsWorld* pWorld,
				const RnQueryAttr_t& query,
				CQueryResult& result);  // 2203
} /* size: 125, variables: 2, inline expansions: 1 (22 bytes) */

// <00B18896> vphysics2/physicsworld.cpp:2201
// variables: 2
void CPhysicsWorld::Query(CQueryResult& result, const Vector* pPoints, int nPoints, const RnQueryAttr_t& attributes)
{
	COverlapResultCallback callback; // 2203
	b3ShapeProxy proxy; // 2204
} /* size: 0, variables: 2 */

// <00B18859> vphysics2/physicsworld.cpp:2208
void CPhysicsWorld::SetDebugScene(ISceneWorld* pSceneWorld)
{
} /* size: 12 */

// <00B53B9E> vphysics2/physicsworld.cpp:2213
void CPhysicsWorld::GetDebugScene()
{
} /* size: 12 */

// <00B187BF> vphysics2/physicsworld.cpp:2218
void CPhysicsWorld::SetCollisionRulesFromJson(const char* json)
{
} /* size: 46 */

// <00B18634> vphysics2/physicsworld.cpp:2224
// variables: 4
// function calls: 5
void CPhysicsWorld::UpdateSurfaceProperties(const CPhysSurfaceProperties* pSurfaceProperties)
{
	{
		CPhysicsBody* pBody; // 2229
		CUtlVector<CPhysicsBody*, CUtlMemory<CPhysicsBody*, int> >& __for_range; // 8149
		iterator __for_begin; // 36086
		iterator __for_end; // 36086
		CUtlMemory<CPhysicsBody::Base(); // 112
		CUtlVectorBase<CPhysicsBody::Base(); // 102
		CUtlVectorBase<CPhysicsBody::begin(); // 2229
		CUtlVectorBase<CPhysicsBody::Count(); // 104
		CUtlVectorBase<CPhysicsBody::end(); // 2229
	}
} /* size: 89 */

// <00B183EF> vphysics2/physicsworld.cpp:2235
// variables: 2
// function calls: 5
void CPhysicsWorld::ShouldHit(const IPhysicsShape* pShape, const RnQueryAttr_t& queryAttr)
{
	const IPhysicsBody* pBody; // 2242
	const RnCollisionAttr_t& queried; // 2280
	{
		byte ()(int)* filterFunction; // 2292
		CManagedHandle::GetValue(); // 2293
	}
	RnQueryAttr_t::GetObjectSetMask(); // 2260
	RnQueryAttr_t::GetObjectSetMask(); // 2267
	RnQueryAttr_t::GetObjectSetMask(); // 2274
} /* size: 261, variables: 2, inline expansions: 3 (0 bytes) */

// <00B183C1> vphysics2/physicsworld.cpp:2300
void CPhysicsWorld::GetIntersectionController()
{
} /* size: 12 */

// <00B18393> vphysics2/physicsworld.cpp:2305
void CPhysicsWorld::GetManagedHandle()
{
} /* size: 9 */

// <00B18309> vphysics2/physicsworld.cpp:2315
CPhysicsWorld* AsWorld(b3WorldId id)
{
} /* size: 9 */

