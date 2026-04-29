
//
// src/dynamic_tree.cpp
//
//	referenced by: libengine2.so
//
//	functions: 23
//	struct: 1
//

// <06B5A6C6> src/dynamic_tree.cpp:31
inline bool b3IsLeaf(const b3TreeNode* node)
{
} /* size: 0 */

// <06B5A6A8> src/dynamic_tree.cpp:36
inline bool b3IsAllocated(const b3TreeNode* node)
{
} /* size: 0 */

// <06B5A682> src/dynamic_tree.cpp:41
inline uint16_t b3MaxUInt16(uint16_t a, uint16_t b)
{
} /* size: 0 */

// <06B5A296> src/dynamic_tree.cpp:98
// variables: 5
// function calls: 2
int b3AllocateNode(b3DynamicTree* tree)
{
	int nodeIndex; // 127
	b3TreeNode* node; // 128
	{
		b3TreeNode* oldNodes; // 106
		int oldCapacity; // 107
		{
			int i; // 117
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 111
		memset(void* __dest,
			int __ch,
			size_t __len);  // 112
	}
} /* size: 0, variables: 2 */

// <06B5A1F8> src/dynamic_tree.cpp:136
void b3FreeNode(b3DynamicTree* tree, int nodeId)
{
} /* size: 0 */

// <06B5A06E> src/dynamic_tree.cpp:163
// variables: 28
int b3FindBestSibling(const b3DynamicTree* tree, b3AABB boxD)
{
	b3Vec3 centerD; // 165
	float areaD; // 166
	const b3TreeNode* nodes; // 168
	int rootIndex; // 169
	b3AABB rootBox; // 171
	float areaBase; // 174
	float directCost; // 177
	float inheritedCost; // 178
	int bestSibling; // 180
	float bestCost; // 181
	int index; // 184
	{
		int child1; // 187
		int child2; // 188
		float cost; // 191
		bool leaf1; // 204
		bool leaf2; // 205
		float lowerCost1; // 208
		b3AABB box1; // 209
		float directCost1; // 210
		float area1; // 211
		float lowerCost2; // 235
		b3AABB box2; // 236
		float directCost2; // 237
		float area2; // 238
		{
			float cost1; // 216
		}
		{
			float cost2; // 243
		}
		{
			b3Vec3 d1; // 280
			b3Vec3 d2; // 281
		}
	}
} /* size: 0, variables: 11 */

// <06B59DF5> src/dynamic_tree.cpp:317
// variables: 47
void b3RotateNodes(b3DynamicTree* tree, int iA)
{
	b3TreeNode* nodes; // 321
	b3TreeNode* A; // 323
	int iB; // 329
	int iC; // 330
	b3TreeNode* B; // 334
	b3TreeNode* C; // 335
	bool isLeafB; // 337
	bool isLeafC; // 338
	{
		int iF; // 342
		int iG; // 343
		b3TreeNode* F; // 344
		b3TreeNode* G; // 345
		float costBase; // 350
		b3AABB aabbBG; // 353
		float costBF; // 354
		b3AABB aabbBF; // 357
		float costBG; // 358
	}
	{
		int iD; // 407
		int iE; // 408
		b3TreeNode* D; // 409
		b3TreeNode* E; // 410
		float costBase; // 415
		b3AABB aabbCE; // 418
		float costCD; // 419
		b3AABB aabbCD; // 422
		float costCE; // 423
	}
	{
		int iD; // 471
		int iE; // 472
		int iF; // 473
		int iG; // 474
		b3TreeNode* D; // 481
		b3TreeNode* E; // 482
		b3TreeNode* F; // 483
		b3TreeNode* G; // 484
		float areaB; // 487
		float areaC; // 488
		float costBase; // 489
		b3RotateType bestRotation; // 490
		float bestCost; // 491
		b3AABB aabbBG; // 494
		float costBF; // 495
		b3AABB aabbBF; // 503
		float costBG; // 504
		b3AABB aabbCE; // 512
		float costCD; // 513
		b3AABB aabbCD; // 521
		float costCE; // 522
	}
} /* size: 0, variables: 8 */

// <06B5B1A0> src/dynamic_tree.cpp:611
// variables: 64
// function calls: 89
void b3InsertLeaf(b3DynamicTree* tree, int leaf, bool shouldRotate)
{
	b3AABB leafAABB; // 621
	int sibling; // 622
	int oldParent; // 625
	int newParent; // 626
	b3TreeNode* nodes; // 629
	int index; // 664
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 880
	b3MulSV(float s,
		b3Vec3 a);  // 880
	b3AABB_Center(b3AABB bounds); // 165
	b3Perimeter(b3AABB a); // 166
	b3Perimeter(b3AABB a); // 174
	b3AABB_Union(b3AABB bounds1,
			b3AABB bounds2);  // 177
	b3Perimeter(b3AABB a); // 177
	b3IsLeaf(const b3TreeNode* node); // 185
	{
		int child1; // 187
		int child2; // 188
		float cost; // 191
		bool leaf1; // 204
		bool leaf2; // 205
		float lowerCost1; // 208
		b3AABB box1; // 209
		float directCost1; // 210
		float area1; // 211
		float lowerCost2; // 235
		b3AABB box2; // 236
		float directCost2; // 237
		float area2; // 238
		b3IsLeaf(const b3TreeNode* node); // 204
		b3Perimeter(b3AABB a); // 210
		b3IsLeaf(const b3TreeNode* node); // 205
		b3AABB_Union(b3AABB bounds1,
				b3AABB bounds2);  // 210
		{
			float cost1; // 216
		}
		b3Perimeter(b3AABB a); // 228
		{
			float cost2; // 243
		}
		b3Perimeter(b3AABB a); // 255
		b3Perimeter(b3AABB a); // 237
		b3AABB_Union(b3AABB bounds1,
				b3AABB bounds2);  // 237
		{
			b3Vec3 d1; // 280
			b3Vec3 d2; // 281
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 880
			b3MulSV(float s,
				b3Vec3 a);  // 880
			b3AABB_Center(b3AABB bounds); // 280
			b3Sub(b3Vec3 a,
				b3Vec3 b);  // 280
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 880
			b3MulSV(float s,
				b3Vec3 a);  // 880
			b3AABB_Center(b3AABB bounds); // 281
			b3Sub(b3Vec3 a,
				b3Vec3 b);  // 281
			b3LengthSquared(b3Vec3 a); // 283
			b3LengthSquared(b3Vec3 a); // 282
		}
		b3IsLeaf(const b3TreeNode* node); // 300
	}
	b3FindBestSibling(const b3DynamicTree* tree,
				b3AABB boxD);  // 622
	b3Min(b3Vec3 a,
		b3Vec3 b);  // 891
	b3Max(b3Vec3 a,
		b3Vec3 b);  // 892
	b3AABB_Union(b3AABB bounds1,
			b3AABB bounds2);  // 632
	{
		int child1; // 667
		int child2; // 668
		b3Min(b3Vec3 a,
			b3Vec3 b);  // 891
		b3Max(b3Vec3 a,
			b3Vec3 b);  // 892
		b3AABB_Union(b3AABB bounds1,
				b3AABB bounds2);  // 673
		b3MaxUInt16(uint16_t a,
				uint16_t b);  // 675
		b3IsLeaf(const b3TreeNode* node); // 324
		b3IsLeaf(const b3TreeNode* node); // 337
		b3IsLeaf(const b3TreeNode* node); // 338
		{
			int iF; // 342
			int iG; // 343
			b3TreeNode* F; // 344
			b3TreeNode* G; // 345
			float costBase; // 350
			b3AABB aabbBG; // 353
			float costBF; // 354
			b3AABB aabbBF; // 357
			float costBG; // 358
			b3Perimeter(b3AABB a); // 350
			b3Perimeter(b3AABB a); // 354
			b3Min(b3Vec3 a,
				b3Vec3 b);  // 891
			b3Max(b3Vec3 a,
				b3Vec3 b);  // 892
			b3AABB_Union(b3AABB bounds1,
					b3AABB bounds2);  // 353
			b3Perimeter(b3AABB a); // 358
			b3Min(b3Vec3 a,
				b3Vec3 b);  // 891
			b3Max(b3Vec3 a,
				b3Vec3 b);  // 892
			b3AABB_Union(b3AABB bounds1,
					b3AABB bounds2);  // 357
			b3MaxUInt16(uint16_t a,
					uint16_t b);  // 377
			b3MaxUInt16(uint16_t a,
					uint16_t b);  // 378
			b3MaxUInt16(uint16_t a,
					uint16_t b);  // 395
			b3MaxUInt16(uint16_t a,
					uint16_t b);  // 396
		}
		{
			int iD; // 407
			int iE; // 408
			b3TreeNode* D; // 409
			b3TreeNode* E; // 410
			float costBase; // 415
			b3AABB aabbCE; // 418
			float costCD; // 419
			b3AABB aabbCD; // 422
			float costCE; // 423
			b3Perimeter(b3AABB a); // 415
			b3Perimeter(b3AABB a); // 419
			b3Min(b3Vec3 a,
				b3Vec3 b);  // 891
			b3Max(b3Vec3 a,
				b3Vec3 b);  // 892
			b3AABB_Union(b3AABB bounds1,
					b3AABB bounds2);  // 418
			b3Perimeter(b3AABB a); // 423
			b3Min(b3Vec3 a,
				b3Vec3 b);  // 891
			b3Max(b3Vec3 a,
				b3Vec3 b);  // 892
			b3AABB_Union(b3AABB bounds1,
					b3AABB bounds2);  // 422
			b3MaxUInt16(uint16_t a,
					uint16_t b);  // 442
			b3MaxUInt16(uint16_t a,
					uint16_t b);  // 460
		}
		{
			int iD; // 471
			int iE; // 472
			int iF; // 473
			int iG; // 474
			b3TreeNode* D; // 481
			b3TreeNode* E; // 482
			b3TreeNode* F; // 483
			b3TreeNode* G; // 484
			float areaB; // 487
			float areaC; // 488
			float costBase; // 489
			b3RotateType bestRotation; // 490
			float bestCost; // 491
			b3AABB aabbBG; // 494
			float costBF; // 495
			b3AABB aabbBF; // 503
			float costBG; // 504
			b3AABB aabbCE; // 512
			float costCD; // 513
			b3AABB aabbCD; // 521
			float costCE; // 522
			b3MaxUInt16(uint16_t a,
					uint16_t b);  // 577
			b3MaxUInt16(uint16_t a,
					uint16_t b);  // 578
			b3Perimeter(b3AABB a); // 487
			b3Perimeter(b3AABB a); // 488
			b3Min(b3Vec3 a,
				b3Vec3 b);  // 891
			b3Max(b3Vec3 a,
				b3Vec3 b);  // 892
			b3AABB_Union(b3AABB bounds1,
					b3AABB bounds2);  // 494
			b3Perimeter(b3AABB a); // 495
			b3Perimeter(b3AABB a); // 504
			b3Min(b3Vec3 a,
				b3Vec3 b);  // 891
			b3Max(b3Vec3 a,
				b3Vec3 b);  // 892
			b3AABB_Union(b3AABB bounds1,
					b3AABB bounds2);  // 503
			b3Min(b3Vec3 a,
				b3Vec3 b);  // 891
			b3Max(b3Vec3 a,
				b3Vec3 b);  // 892
			b3AABB_Union(b3AABB bounds1,
					b3AABB bounds2);  // 512
			b3Perimeter(b3AABB a); // 513
			b3Min(b3Vec3 a,
				b3Vec3 b);  // 891
			b3Max(b3Vec3 a,
				b3Vec3 b);  // 892
			b3AABB_Union(b3AABB bounds1,
					b3AABB bounds2);  // 521
			b3Perimeter(b3AABB a); // 522
			b3MaxUInt16(uint16_t a,
					uint16_t b);  // 543
			b3MaxUInt16(uint16_t a,
					uint16_t b);  // 544
			b3MaxUInt16(uint16_t a,
					uint16_t b);  // 594
			b3MaxUInt16(uint16_t a,
					uint16_t b);  // 595
			b3MaxUInt16(uint16_t a,
					uint16_t b);  // 560
			b3MaxUInt16(uint16_t a,
					uint16_t b);  // 561
		}
		b3RotateNodes(b3DynamicTree* tree,
				int iA);  // 680
	}
} /* size: 0, variables: 6, inline expansions: 12 (3223 bytes) */

// <06B59D55> src/dynamic_tree.cpp:611
// variables: 8
void b3InsertLeaf(b3DynamicTree* tree, int leaf, bool shouldRotate)
{
	b3AABB leafAABB; // 621
	int sibling; // 622
	int oldParent; // 625
	int newParent; // 626
	b3TreeNode* nodes; // 629
	int index; // 664
	{
		int child1; // 667
		int child2; // 668
	}
} /* size: 0, variables: 6 */

// <06B59B18> src/dynamic_tree.cpp:687
// variables: 8
// function calls: 4
void b3RemoveLeaf(b3DynamicTree* tree, int leaf)
{
	b3TreeNode* nodes; // 695
	int parent; // 697
	int grandParent; // 698
	int sibling; // 699
	{
		int index; // 724
		{
			b3TreeNode* node; // 727
			b3TreeNode* child1; // 728
			b3TreeNode* child2; // 729
			b3Min(b3Vec3 a,
				b3Vec3 b);  // 891
			b3Max(b3Vec3 a,
				b3Vec3 b);  // 892
			b3AABB_Union(b3AABB bounds1,
					b3AABB bounds2);  // 739
			b3MaxUInt16(uint16_t a,
					uint16_t b);  // 741
		}
	}
} /* size: 388, variables: 4 */

// <06B596F1> src/dynamic_tree.cpp:795
int b3DynamicTree_GetProxyCount(const b3DynamicTree* tree)
{
} /* size: 0 */

// <06B59139> src/dynamic_tree.cpp:867
// variables: 5
// function call: 1
void b3DynamicTree_SetCategoryBits(b3DynamicTree* tree, int proxyId, uint64_t categoryBits)
{
	b3TreeNode* nodes; // 869
	int nodeIndex; // 876
	{
		b3TreeNode* node; // 879
		int child1; // 880
		int child2; // 882
	}
	b3IsLeaf(const b3TreeNode* node); // 871
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <06B590C4> src/dynamic_tree.cpp:890
uint64_t b3DynamicTree_GetCategoryBits(b3DynamicTree* tree, int proxyId)
{
} /* size: 0 */

// <06B5908E> src/dynamic_tree.cpp:896
int b3DynamicTree_GetHeight(const b3DynamicTree* tree)
{
} /* size: 0 */

// <06B58EF6> src/dynamic_tree.cpp:906
// variables: 5
// function calls: 3
float b3DynamicTree_GetAreaRatio(const b3DynamicTree* tree)
{
	const b3TreeNode* root; // 913
	float rootArea; // 914
	float totalArea; // 916
	{
		int i; // 917
		{
			const b3TreeNode* node; // 919
			b3IsAllocated(const b3TreeNode* node); // 920
			b3Perimeter(b3AABB a); // 925
		}
	}
	b3Perimeter(b3AABB a); // 914
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <06B58EAB> src/dynamic_tree.cpp:931
// variable: 1
b3AABB b3DynamicTree_GetRootBounds(const b3DynamicTree* tree)
{
	b3AABB empty; // 938
} /* size: 0, variables: 1 */

// <06B58E72> src/dynamic_tree.cpp:1081
void b3DynamicTree_ValidateNoEnlarged(const b3DynamicTree* tree)
{
} /* size: 0 */

// <06B58E27> src/dynamic_tree.cpp:1099
// variable: 1
int b3DynamicTree_GetByteCount(const b3DynamicTree* tree)
{
	size_t size; // 1101
} /* size: 0, variables: 1 */

// <06B57E44> src/dynamic_tree.cpp:1166
// variables: 22
// function calls: 50
b3TreeStats b3DynamicTree_RayCast(const b3DynamicTree* tree, const b3RayCastInput* input, uint64_t maskBits, bool requireAllBits, b3TreeRayCastCallbackFcn* callback, void* context)
{
	b3TreeStats result; // 1169
	b3Vec3 p1; // 1176
	b3Vec3 d; // 1177
	b3V32 pv1; // 1179
	b3V32 dv; // 1180
	float maxFraction; // 1182
	b3Vec3 p2; // 1184
	b3AABB segmentAABB; // 1187
	int stack; // 1189
	int stackCount; // 1190
	const b3TreeNode* nodes; // 1193
	b3RayCastInput subInput; // 1195
	{
		int nodeId; // 1199
		const b3TreeNode* node; // 1207
		b3AABB nodeAABB; // 1210
		uint64_t bitMatch; // 1213
		b3V32 lower; // 1220
		b3V32 upper; // 1221
		bool edgeOverlap; // 1223
		{
			float value; // 1233
			b3MulAdd(b3Vec3 a,
				float s,
				b3Vec3 b);  // 1248
		}
		{
			b3Vec3 c1; // 1258
			b3Vec3 c2; // 1259
			b3MulSV(float s,
				b3Vec3 a);  // 880
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 880
			b3AABB_Center(b3AABB bounds); // 1258
			b3DistanceSquared(b3Vec3 v1,
						b3Vec3 v2);  // 1260
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 880
			b3MulSV(float s,
				b3Vec3 a);  // 880
			b3AABB_Center(b3AABB bounds); // 1259
			b3DistanceSquared(b3Vec3 v1,
						b3Vec3 v2);  // 1260
		}
		b3AABB_Overlaps(b3AABB a,
				b3AABB b);  // 1215
		_mm_loadu_ps(const float* __P); // 67
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 68
		b3LoadV(const float* src); // 1220
		_mm_loadu_ps(const float* __P); // 67
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 68
		b3LoadV(const float* src); // 1221
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 122
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 123
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 124
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 125
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 127
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 127
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 127
		b3CrossV(b3V32 a,
			b3V32 b);  // 351
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 107
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 107
		b3AbsV(b3V32 a); // 351
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 134
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 135
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 132
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 133
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 137
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 137
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 137
		b3ModifiedCrossV(b3V32 a,
				b3V32 b);  // 351
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 107
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 107
		b3AbsV(b3V32 a); // 351
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 160
		_mm_movemask_ps(__m128 __A); // 161
		b3AllLessEq3V(b3V32 a,
				b3V32 b);  // 352
		b3TestBoundsRayOverlap(b3V32 nodeMin,
					b3V32 nodeMax,
					b3V32 rayStart,
					b3V32 rayDelta);  // 1223
		b3IsLeaf(const b3TreeNode* node); // 1229
	}
	_mm_loadu_ps(const float* __P); // 67
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	b3LoadV(const float* src); // 1179
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 1184
	_mm_loadu_ps(const float* __P); // 67
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	b3LoadV(const float* src); // 1180
} /* size: 0, variables: 12, inline expansions: 7 (213 bytes) */

// <06B56DC9> src/dynamic_tree.cpp:1277
// variables: 26
// function calls: 65
b3TreeStats b3DynamicTree_ShapeCast(const b3DynamicTree* tree, const b3ShapeCastInput* input, uint64_t maskBits, bool requireAllBits, b3TreeShapeCastCallbackFcn* callback, void* context)
{
	b3TreeStats stats; // 1280
	b3AABB originAABB; // 1287
	b3Vec3 radius; // 1294
	b3Vec3 p1; // 1299
	b3Vec3 extension; // 1300
	b3Vec3 d; // 1303
	b3V32 pv1; // 1305
	b3V32 dv; // 1306
	b3V32 ev; // 1307
	float maxFraction; // 1309
	b3Vec3 t; // 1312
	b3AABB totalAABB; // 1313
	b3ShapeCastInput subInput; // 1318
	const b3TreeNode* nodes; // 1319
	int stack; // 1321
	int stackCount; // 1322
	{
		int i; // 1288
	}
	{
		int nodeId; // 1327
		const b3TreeNode* node; // 1335
		uint64_t bitMatch; // 1339
		b3V32 lower; // 1347
		b3V32 upper; // 1348
		bool edgeOverlap; // 1349
		{
			float value; // 1359
			b3MulSV(float s,
				b3Vec3 a);  // 1372
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 1373
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 1374
		}
		{
			b3Vec3 c1; // 1382
			b3Vec3 c2; // 1383
			b3DistanceSquared(b3Vec3 v1,
						b3Vec3 v2);  // 1384
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 880
			b3MulSV(float s,
				b3Vec3 a);  // 880
			b3AABB_Center(b3AABB bounds); // 1382
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 880
			b3MulSV(float s,
				b3Vec3 a);  // 880
			b3AABB_Center(b3AABB bounds); // 1383
			b3DistanceSquared(b3Vec3 v1,
						b3Vec3 v2);  // 1384
		}
		b3AABB_Overlaps(b3AABB a,
				b3AABB b);  // 1341
		_mm_loadu_ps(const float* __P); // 67
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 68
		b3LoadV(const float* src); // 1347
		_mm_loadu_ps(const float* __P); // 67
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 68
		b3LoadV(const float* src); // 1348
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 122
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 123
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 124
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 125
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 127
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 127
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 127
		b3CrossV(b3V32 a,
			b3V32 b);  // 351
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 107
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 107
		b3AbsV(b3V32 a); // 351
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 134
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 135
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 132
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 133
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 137
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 137
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 137
		b3ModifiedCrossV(b3V32 a,
				b3V32 b);  // 351
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 107
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 107
		b3AbsV(b3V32 a); // 351
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 160
		_mm_movemask_ps(__m128 __A); // 161
		b3AllLessEq3V(b3V32 a,
				b3V32 b);  // 352
		b3TestBoundsRayOverlap(b3V32 nodeMin,
					b3V32 nodeMax,
					b3V32 rayStart,
					b3V32 rayDelta);  // 1349
		b3IsLeaf(const b3TreeNode* node); // 1355
	}
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1296
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1297
	b3MulSV(float s,
		b3Vec3 a);  // 880
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 880
	b3AABB_Center(b3AABB bounds); // 1299
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 885
	b3MulSV(float s,
		b3Vec3 a);  // 885
	b3AABB_Extents(b3AABB bounds); // 1300
	b3MulSV(float s,
		b3Vec3 a);  // 1312
	_mm_loadu_ps(const float* __P); // 67
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	b3LoadV(const float* src); // 1305
	_mm_loadu_ps(const float* __P); // 67
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	b3LoadV(const float* src); // 1307
	_mm_loadu_ps(const float* __P); // 67
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	b3LoadV(const float* src); // 1306
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1314
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1315
} /* size: 0, variables: 16, inline expansions: 20 (541 bytes) */

// <06B5AF25> src/dynamic_tree.cpp:1407
// variables: 16
// function calls: 5
int b3PartitionMid(int* indices, b3Vec3* centers, int count)
{
	b3Vec3 lowerBound; // 1415
	b3Vec3 upperBound; // 1416
	b3Vec3 d; // 1424
	b3Vec3 c; // 1425
	int i1; // 1430
	int i2; // 1430
	{
		int i; // 1418
	}
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1424
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 1425
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 1425
	{
		float pivot; // 1433
		{
			int temp; // 1451
		}
		{
			b3Vec3 temp; // 1458
		}
	}
	{
		float pivot; // 1470
		{
			int temp; // 1488
		}
		{
			b3Vec3 temp; // 1495
		}
	}
	{
		float pivot; // 1507
		{
			int temp; // 1525
		}
		{
			b3Vec3 temp; // 1532
		}
	}
} /* size: 0, variables: 6, inline expansions: 5 (128 bytes) */

// <06B56C9B> src/dynamic_tree.cpp:1407
// variables: 16
int b3PartitionMid(int* indices, b3Vec3* centers, int count)
{
	b3Vec3 lowerBound; // 1415
	b3Vec3 upperBound; // 1416
	b3Vec3 d; // 1424
	b3Vec3 c; // 1425
	int i1; // 1430
	int i2; // 1430
	{
		int i; // 1418
	}
	{
		float pivot; // 1433
		{
			int temp; // 1451
		}
		{
			b3Vec3 temp; // 1458
		}
	}
	{
		float pivot; // 1470
		{
			int temp; // 1488
		}
		{
			b3Vec3 temp; // 1495
		}
	}
	{
		float pivot; // 1507
		{
			int temp; // 1525
		}
		{
			b3Vec3 temp; // 1532
		}
	}
} /* size: 0, variables: 6 */

// <06B55FA5> src/dynamic_tree.cpp:1722
// member variables: 5
// struct size: 20
struct b3RebuildItem {
	int nodeIndex; /* 0 4 */
	int childCount; /* 4 4 */
	int startIndex; /* 8 4 */
	int splitIndex; /* 12 4 */
	int endIndex; /* 16 4 */
};

// <06B56B34> src/dynamic_tree.cpp:1734
// variables: 21
int b3BuildTree(b3DynamicTree* tree, int leafCount)
{
	b3TreeNode* nodes; // 1736
	int* leafIndices; // 1737
	b3Vec3* leafCenters; // 1746
	b3RebuildItem stack; // 1753
	int top; // 1754
	b3TreeNode* rootNode; // 1874
	b3TreeNode* child1; // 1879
	b3TreeNode* child2; // 1880
	{
		b3RebuildItem* item; // 1768
		{
			b3RebuildItem* parentItem; // 1782
			b3TreeNode* parentNode; // 1783
			b3TreeNode* node; // 1797
			b3TreeNode* child1; // 1804
			b3TreeNode* child2; // 1805
		}
		{
			int startIndex; // 1816
			int endIndex; // 1816
			int count; // 1829
			{
				int childIndex; // 1833
				b3TreeNode* node; // 1834
				b3TreeNode* childNode; // 1848
			}
			{
				b3RebuildItem* newItem; // 1858
			}
		}
	}
} /* size: 0, variables: 8 */

