
//
// src/compound.c
//
//	referenced by: libengine2.so
//
//	functions: 20
//	structs: 8
//

// <06CEE770> src/compound.c:16
// member variables: 2
// struct size: 16
struct b3SharedHull {
	const b3Hull * hull; /* 0 8 */
	int hullOffset; /* 8 4 */
};

// <06CEE7A8> src/compound.c:22
// member variables: 2
// struct size: 16
struct b3SharedMesh {
	const b3MeshData * meshData; /* 0 8 */
	int meshOffset; /* 8 4 */
};

// <06CEE7E0> src/compound.c:28
// member variables: 3
// struct size: 36
struct b3HullInstance {
	b3Transform transform; /* 0 28 */
	uint32_t hullOffset; /* 28 4 */
	uint32_t materialIndex; /* 32 4 */
};

// <06CEE82C> src/compound.c:35
// member variables: 4
// struct size: 56
struct b3MeshInstance {
	b3Transform transform; /* 0 28 */
	b3Vec3 scale; /* 28 12 */
	uint32_t meshOffset; /* 40 4 */
	uint32_t materialIndices[3]; /* 44 12 */
};

// <06CF5004> src/compound.c:43
inline b3TreeNode* b3GetCompoundNodes(b3Compound* compound)
{
} /* size: 0 */

// <06CF4F33> src/compound.c:63
// variables: 2
b3CompoundCapsule b3GetCompoundCapsule(const b3Compound* compound, int index)
{
	b3CompoundCapsule result; // 67
	const b3CompoundCapsule* capsules; // 73
} /* size: 0, variables: 2 */

// <06CF4E4E> src/compound.c:77
// variables: 3
b3CompoundHull b3GetCompoundHull(const b3Compound* compound, int index)
{
	b3CompoundHull result; // 81
	const b3HullInstance* hullInstances; // 87
	uint32_t hullOffset; // 88
} /* size: 0, variables: 3 */

// <06CF4D41> src/compound.c:96
// variables: 4
b3CompoundMesh b3GetCompoundMesh(const b3Compound* compound, int index)
{
	b3CompoundMesh result; // 100
	const b3MeshInstance* meshInstances; // 106
	uint32_t meshOffset; // 107
	{
		int i; // 112
	}
} /* size: 0, variables: 3 */

// <06CF4CAA> src/compound.c:119
// variables: 2
b3CompoundSphere b3GetCompoundSphere(const b3Compound* compound, int index)
{
	b3CompoundSphere result; // 123
	const b3CompoundSphere* spheres; // 129
} /* size: 0, variables: 2 */

// <06CF4AF7> src/compound.c:197
inline uint64_t b3HashHull(const b3Hull* hull)
{
} /* size: 0 */

// <06CF4AC1> src/compound.c:202
// variable: 1
bool b3CompareHulls(const b3Hull* hull1, const b3Hull* hull2)
{
	int result; // 214
} /* size: 0, variables: 1 */

// <06CF427A> src/compound.c:227
inline uint64_t b3HashMesh(const b3MeshData* mesh)
{
} /* size: 0 */

// <06CF4244> src/compound.c:232
// variable: 1
bool b3CompareMeshes(const b3MeshData* mesh1, const b3MeshData* mesh2)
{
	int result; // 244
} /* size: 0, variables: 1 */

// <06CF3B9F> src/compound.c:257
inline uint64_t b3HashMaterial(const b3SurfaceMaterial* material)
{
} /* size: 0 */

// <06CF3B65> src/compound.c:262
// variable: 1
bool b3CompareMaterials(const b3SurfaceMaterial* mat1, const b3SurfaceMaterial* mat2)
{
	int result; // 269
} /* size: 0, variables: 1 */

// <06CF1AE9> src/compound.c:282
// variables: 82
// function calls: 44
b3Compound* b3CreateCompound(const b3CompoundDef* def)
{
	int convexCount; // 284
	int shapeCount; // 285
	b3DynamicTree tree; // 293
	int childIndex; // 295
	int capsuleCount; // 298
	b3CompoundCapsule* capsuleInstances; // 299
	int hullCount; // 300
	b3HullInstance* hullInstances; // 301
	int meshCount; // 302
	b3MeshInstance* meshInstances; // 303
	int sphereCount; // 304
	b3CompoundSphere* sphereInstances; // 305
	int materialCapacity; // 308
	b3MaterialMap materialMap; // 316
	b3SurfaceMaterial* materials; // 319
	int materialCount; // 320
	b3SharedHull* sharedHulls; // 347
	int sharedHullCount; // 348
	b3SharedMesh* sharedMeshes; // 403
	int sharedMeshCount; // 404
	int byteCount; // 498
	int nodeOffset; // 501
	int materialOffset; // 504
	int capsuleOffset; // 507
	int hullArrayOffset; // 514
	int meshArrayOffset; // 530
	int sphereOffset; // 542
	b3Compound* compound; // 545
	b3TreeNode* nodes; // 574
	b3SurfaceMaterial* destinationMaterials; // 580
	b3HullInstance* destinationHullInstances; // 603
	b3MeshInstance* destinationMeshInstances; // 622
	{
		int i; // 309
	}
	{
		int i; // 322
		{
			const b3CompoundCapsuleDef* capsuleDef; // 324
			b3MaterialMap_itr materialItr; // 328
			int materialIndex; // 331
			b3AABB aabb; // 341
			{
				b3MaterialMap_itr itr; // 1524
				b3MaterialMap_is_end(b3MaterialMap_itr itr); // 1536
			}
			b3MaterialMap_get_or_insert(b3MaterialMap* table,
							const b3SurfaceMaterial* key,
							int val);  // 328
		}
	}
	{
		b3HullMap hullMap; // 352
		{
			int i; // 356
			{
				const b3CompoundHullDef* hullDef; // 358
				const b3Hull* hull; // 359
				b3AABB aabb; // 360
				b3MaterialMap_itr materialItr; // 365
				int materialIndex; // 368
				b3HullMap_itr itr; // 381
				int sharedHullIndex; // 384
				{
					b3MaterialMap_itr itr; // 1524
					b3MaterialMap_is_end(b3MaterialMap_itr itr); // 1536
				}
				b3MaterialMap_get_or_insert(b3MaterialMap* table,
								const b3SurfaceMaterial* key,
								int val);  // 365
				{
					b3HullMap_itr itr; // 1524
					b3HullMap_is_end(b3HullMap_itr itr); // 1536
				}
				b3HullMap_get_or_insert(b3HullMap* table,
							const b3Hull* key,
							int val);  // 381
			}
		}
		b3HullMap_init(b3HullMap* table); // 353
		b3HullMap_min_bucket_count_for_size(size_t size); // 1746
		b3HullMap_reserve(b3HullMap* table,
					size_t size);  // 354
		b3HullMap_metadata_offset(b3HullMap* table); // 1068
		b3HullMap_total_alloc_size(b3HullMap* table); // 1821
		b3HullMap_init(b3HullMap* table); // 1829
		b3HullMap_cleanup(b3HullMap* table); // 399
	}
	{
		b3MeshMap meshMap; // 408
		{
			int i; // 412
			{
				const b3CompoundMeshDef* meshDef; // 414
				const b3MeshData* meshData; // 416
				b3AABB aabb; // 417
				b3MeshMap_itr itr; // 443
				int sharedMeshIndex; // 446
				{
					int j; // 424
					{
						b3MaterialMap_itr materialItr; // 427
						int materialIndex; // 431
						{
							b3MaterialMap_itr itr; // 1524
							b3MaterialMap_is_end(b3MaterialMap_itr itr); // 1536
						}
						b3MaterialMap_get_or_insert(b3MaterialMap* table,
										const b3SurfaceMaterial* key,
										int val);  // 428
					}
				}
				{
					b3MeshMap_itr itr; // 1524
					b3MeshMap_is_end(b3MeshMap_itr itr); // 1536
				}
				b3MeshMap_get_or_insert(b3MeshMap* table,
							const b3MeshData* key,
							int val);  // 443
			}
		}
		b3MeshMap_init(b3MeshMap* table); // 409
		b3MeshMap_min_bucket_count_for_size(size_t size); // 1746
		b3MeshMap_reserve(b3MeshMap* table,
					size_t size);  // 410
		b3MeshMap_metadata_offset(b3MeshMap* table); // 1068
		b3MeshMap_total_alloc_size(b3MeshMap* table); // 1821
		b3MeshMap_init(b3MeshMap* table); // 1829
		b3MeshMap_cleanup(b3MeshMap* table); // 465
	}
	{
		int i; // 469
		{
			const b3CompoundSphereDef* sphereDef; // 471
			b3MaterialMap_itr materialItr; // 475
			int materialIndex; // 478
			b3AABB aabb; // 488
			{
				b3MaterialMap_itr itr; // 1524
				b3MaterialMap_is_end(b3MaterialMap_itr itr); // 1536
			}
			b3MaterialMap_get_or_insert(b3MaterialMap* table,
							const b3SurfaceMaterial* key,
							int val);  // 475
		}
	}
	{
		int i; // 520
	}
	{
		int i; // 536
	}
	{
		b3CompoundCapsule* capsules; // 590
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 591
	}
	{
		int i; // 595
		{
			int sharedIndex; // 598
		}
	}
	{
		int i; // 606
		{
			int offset; // 608
			b3Hull* destinationHull; // 609
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 610
		}
	}
	{
		int i; // 614
		{
			int sharedIndex; // 617
		}
	}
	{
		int i; // 625
		{
			int offset; // 627
			b3MeshData* destinationMesh; // 628
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 629
		}
	}
	{
		b3CompoundSphere* spheres; // 636
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 637
	}
	b3MaterialMap_init(b3MaterialMap* table); // 317
	b3MaterialMap_min_bucket_count_for_size(size_t size); // 1746
	b3MaterialMap_reserve(b3MaterialMap* table,
				size_t size);  // 318
	memset(void* __dest,
		int __ch,
		size_t __len);  // 546
	b3GetCompoundNodes(b3Compound* compound); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 551
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 575
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 583
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 604
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 623
	b3MaterialMap_metadata_offset(b3MaterialMap* table); // 1068
	b3MaterialMap_total_alloc_size(b3MaterialMap* table); // 1821
	b3MaterialMap_init(b3MaterialMap* table); // 1829
	b3MaterialMap_cleanup(b3MaterialMap* table); // 640
} /* size: 0, variables: 32, inline expansions: 14 (0 bytes) */

// <06CF1A9B> src/compound.c:653
void b3DestroyCompound(b3Compound* compound)
{
} /* size: 0 */

// <06CF1A61> src/compound.c:658
uint8_t* b3ConvertCompoundToBytes(b3Compound* compound)
{
} /* size: 0 */

// <06CF1934> src/compound.c:665
// variable: 1
b3Compound* b3ConvertBytesToCompound(uint8_t* bytes, int byteCount)
{
	b3Compound* compound; // 669
} /* size: 0, variables: 1 */

// <06CEF00C> src/compound.c:690
// member variables: 4
// struct size: 64
struct b3CompoundOverlapContext {
	const b3Compound * compound; /* 0 8 */
	b3Transform transform; /* 8 28 */
	b3ShapeProxy proxy; /* 40 16 */
	bool overlap; /* 56 1 */
};

// <06CF143E> src/compound.c:699
// variables: 5
// function calls: 12
bool b3CompoundOverlapCallback(int proxyId, uint64_t userData, void* context)
{
	int childIndex; // 703
	b3CompoundOverlapContext* overlapContext; // 704
	b3ChildShape child; // 705
	b3Transform transform; // 707
	bool overlap; // 709
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
			b3Vec3 v);  // 532
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 532
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 413
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 414
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 415
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 416
	b3MulQuat(b3Quat q1,
			b3Quat q2);  // 533
	b3MulTransforms(b3Transform a,
			b3Transform b);  // 707
} /* size: 0, variables: 5, inline expansions: 12 (1260 bytes) */

// <06CEF05B> src/compound.c:769
// member variables: 2
// struct size: 16
struct b3CompoundCastContext {
	const b3Compound * compound; /* 0 8 */
	b3CastOutput * output; /* 8 8 */
};

// <06CF0C02> src/compound.c:775
// variables: 6
// function calls: 24
float b3CompoundRayCastCallback(const b3RayCastInput* input, int proxyId, uint64_t userData, void* context)
{
	b3CompoundCastContext* castContext; // 779
	const b3Compound* compound; // 780
	int childIndex; // 782
	b3ChildShape child; // 784
	b3RayCastInput localInput; // 786
	b3CastOutput output; // 790
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
				b3Vec3 v);  // 788
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 572
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
				b3Vec3 v);  // 572
	b3InvTransformPoint(b3Transform t,
				b3Vec3 v);  // 787
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
			b3Vec3 v);  // 822
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
			b3Vec3 v);  // 823
} /* size: 0, variables: 6, inline expansions: 24 (1714 bytes) */

// <06CF034E> src/compound.c:844
// variables: 10
// function calls: 25
float b3CompoundShapeCastCallback(const b3ShapeCastInput* input, int proxyId, uint64_t userData, void* context)
{
	b3CompoundCastContext* castContext; // 848
	const b3Compound* compound; // 849
	int childIndex; // 851
	b3ChildShape child; // 853
	b3ShapeCastInput localInput; // 855
	b3Vec3 localPoints; // 856
	b3Transform invTransform; // 860
	b3Matrix3 R; // 861
	b3CastOutput output; // 871
	{
		int i; // 863
		b3MulMV(b3Matrix3 m,
			b3Vec3 a);  // 865
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 865
	}
	b3MinInt(int a,
		int b);  // 858
	b3Conjugate(b3Quat q); // 552
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
	b3InvertTransform(b3Transform t); // 860
	b3MakeMatrixFromQuat(b3Quat q); // 861
	b3MulMV(b3Matrix3 m,
		b3Vec3 a);  // 869
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
			b3Vec3 v);  // 903
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
			b3Vec3 v);  // 904
} /* size: 0, variables: 9, inline expansions: 23 (2380 bytes) */

// <06CEF090> src/compound.c:925
// member variables: 3
// struct size: 24
struct b3CompoundQueryContext {
	const b3Compound * compound; /* 0 8 */
	b3CompoundQueryFcn * fcn; /* 8 8 */
	void * userContext; /* 16 8 */
};

// <06CF01F8> src/compound.c:932
// variable: 1
bool TreeQueryCallbackFcn(int proxyId, uint64_t userData, void* treeContext)
{
	b3CompoundQueryContext* context; // 935
} /* size: 20, variables: 1 */

// <06CEF0D5> src/compound.c:1101
// member variables: 5
// struct size: 56
struct b3CompoundMoverContext {
	const b3Compound * compound; /* 0 8 */
	b3PlaneResult * planes; /* 8 8 */
	int planeCapacity; /* 16 4 */
	int planeCount; /* 20 4 */
	b3Capsule mover; /* 24 28 */
};

// <06CEF6EB> src/compound.c:1110
// variables: 8
// function calls: 26
bool b3CompoundMoverCallback(int proxyId, uint64_t userData, void* context)
{
	int childIndex; // 1114
	b3CompoundMoverContext* moverContext; // 1115
	b3ChildShape child; // 1116
	b3Capsule localMover; // 1119
	int capacity; // 1124
	b3PlaneResult* planes; // 1127
	int planeCount; // 1128
	{
		int i; // 1154
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 389
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 390
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 392
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 391
		b3RotateVector(b3Quat q,
				b3Vec3 v);  // 1156
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 390
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 392
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 389
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 391
		b3RotateVector(b3Quat q,
				b3Vec3 v);  // 566
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 567
		b3TransformPoint(b3Transform t,
				b3Vec3 v);  // 1157
	}
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 572
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
				b3Vec3 v);  // 572
	b3InvTransformPoint(b3Transform t,
				b3Vec3 v);  // 1121
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 572
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
				b3Vec3 v);  // 572
	b3InvTransformPoint(b3Transform t,
				b3Vec3 v);  // 1120
} /* size: 0, variables: 7, inline expansions: 14 (0 bytes) */

