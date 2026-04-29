
//
// src/height_field.cpp
//
//	referenced by: libengine2.so
//
//	functions: 10
//

// <06B64A88> src/height_field.cpp:427
// variables: 24
// function calls: 8
b3Triangle b3GetHeightFieldTriangle(const b3HeightField* heightField, int triangleIndex)
{
	b3Triangle triangle; // 432
	int columnCount; // 435
	int quadIndex; // 436
	int row; // 437
	int column; // 438
	int index11; // 440
	int index12; // 441
	int index21; // 442
	int index22; // 443
	int cellIndex; // 445
	float minHeight; // 451
	float heightScale; // 452
	const uint16_t* heights; // 453
	float height11; // 455
	float height12; // 456
	float height21; // 457
	float height22; // 458
	float x1; // 460
	float x2; // 461
	float z1; // 462
	float z2; // 463
	b3Vec3 scale; // 465
	{
		b3Vec3 B3_SWAP_TEMP; // 491
	}
	{
		int B3_SWAP_TEMP; // 492
	}
	b3Mul(b3Vec3 a,
		b3Vec3 b);  // 1011
	operator*(b3Vec3 a,
			b3Vec3 b);  // 468
	b3Mul(b3Vec3 a,
		b3Vec3 b);  // 1011
	operator*(b3Vec3 a,
			b3Vec3 b);  // 470
	b3Mul(b3Vec3 a,
		b3Vec3 b);  // 1011
	operator*(b3Vec3 a,
			b3Vec3 b);  // 469
	b3Mul(b3Vec3 a,
		b3Vec3 b);  // 1011
	operator*(b3Vec3 a,
			b3Vec3 b);  // 477
} /* size: 0, variables: 22, inline expansions: 8 (164 bytes) */

// <06B64A28> src/height_field.cpp:498
// variable: 1
int b3GetHeightFieldMaterial(const b3HeightField* heightField, int triangleIndex)
{
	int cellIndex; // 505
} /* size: 29, variables: 1 */

// <06B62AA4> src/height_field.cpp:526
// variables: 101
// function calls: 101
b3CastOutput b3ShapeCastHeightField(const b3HeightField* heightField, const b3ShapeCastInput* input)
{
	b3AABB shapeBounds; // 528
	b3Vec3 shapeTranslation; // 529
	b3Vec3 scale; // 530
	b3Vec3 shapeStart; // 532
	b3Vec3 shapeDelta; // 533
	b3Vec3 shapeEnd; // 534
	b3CastOutput result; // 536
	b3Vec3 shapeExtents; // 538
	b3Vec3 margin; // 539
	b3AABB combinedBounds; // 540
	float minFraction; // 542
	float maxFraction; // 542
	bool intersects; // 543
	b3Vec3 clampedStart; // 552
	b3Vec3 clampedDelta; // 553
	b3Vec3 clampedEnd; // 554
	float signX; // 557
	float signZ; // 557
	int columnStart; // 584
	int columnEnd; // 585
	int rowStart; // 586
	int rowEnd; // 587
	b3Vec3 absClampedDelta; // 589
	float deltaAlphaX; // 594
	float nextFractionX; // 595
	int deltaColumn; // 596
	float deltaAlphaZ; // 624
	float nextFractionZ; // 625
	int deltaRow; // 626
	int boxColumnHead; // 655
	int boxRowHead; // 656
	int boxColumnTail; // 658
	int boxRowTail; // 659
	float bestFraction; // 661
	int rowCount; // 663
	int columnCount; // 664
	int cellCount; // 665
	float minHeight; // 668
	float heightScale; // 669
	const uint16_t* heights; // 670
	b3ShapeCastPairInput pairInput; // 672
	b3AABB castBounds; // 679
	{
		int column1; // 685
		int column2; // 685
		int row1; // 697
		int row2; // 697
		{
			int row; // 709
			{
				int column; // 716
				{
					int cellIndex; // 723
					uint8_t materialIndex; // 726
					int index11; // 737
					int index12; // 739
					int index21; // 740
					int index22; // 741
					float height11; // 743
					float height12; // 744
					float height21; // 745
					float height22; // 746
					float x1; // 748
					float x2; // 749
					float z1; // 750
					float z2; // 751
					b3Vec3 point11; // 753
					b3Vec3 point12; // 754
					b3Vec3 point21; // 755
					b3Vec3 point22; // 756
					b3AABB bounds; // 759
					int quadIndex; // 768
					int triangleIndex1; // 769
					int triangleIndex2; // 770
					{
						b3V32 vertex1; // 776
						b3V32 vertex2; // 777
						b3V32 vertex3; // 777
						b3V32 rayOrigin; // 790
						b3V32 rayTranslation; // 791
						float alpha; // 793
						{
							b3Vec3 edge1; // 798
							b3Vec3 edge2; // 799
							b3Vec3 normal; // 800
							b3Sub(b3Vec3 a,
								b3Vec3 b);  // 1021
							operator-(b3Vec3 a,
									b3Vec3 b);  // 798
							b3Sub(b3Vec3 a,
								b3Vec3 b);  // 1021
							operator-(b3Vec3 a,
									b3Vec3 b);  // 799
							b3Cross(b3Vec3 a,
								b3Vec3 b);  // 800
							b3MulSV(float s,
								b3Vec3 a);  // 1001
							operator*(float s,
									b3Vec3 a);  // 802
							b3Add(b3Vec3 a,
								b3Vec3 b);  // 1016
							operator+(b3Vec3 a,
									b3Vec3 b);  // 802
							{
								float s; // 247
								b3Vec3 u; // 248
							}
							b3Normalize(b3Vec3 a); // 803
							b3Cross(b3Vec3 a,
								b3Vec3 b);  // 800
						}
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 68
						_mm_loadu_ps(const float* __P); // 67
						b3LoadV(const float* src); // 776
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 68
						b3LoadV(const float* src); // 781
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 68
						b3LoadV(const float* src); // 782
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 68
						_mm_loadu_ps(const float* __P); // 67
						b3LoadV(const float* src); // 790
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 68
						_mm_loadu_ps(const float* __P); // 67
						b3LoadV(const float* src); // 791
					}
					{
						b3V32 vertex1; // 813
						b3V32 vertex2; // 814
						b3V32 vertex3; // 814
						b3V32 rayOrigin; // 827
						b3V32 rayTranslation; // 828
						float alpha; // 830
						{
							b3Vec3 edge1; // 835
							b3Vec3 edge2; // 836
							b3Vec3 normal; // 837
							b3Sub(b3Vec3 a,
								b3Vec3 b);  // 1021
							operator-(b3Vec3 a,
									b3Vec3 b);  // 835
							b3Sub(b3Vec3 a,
								b3Vec3 b);  // 1021
							operator-(b3Vec3 a,
									b3Vec3 b);  // 836
							b3Cross(b3Vec3 a,
								b3Vec3 b);  // 837
							b3MulSV(float s,
								b3Vec3 a);  // 1001
							operator*(float s,
									b3Vec3 a);  // 839
							b3Add(b3Vec3 a,
								b3Vec3 b);  // 1016
							operator+(b3Vec3 a,
									b3Vec3 b);  // 839
							{
								float s; // 247
								b3Vec3 u; // 248
							}
							b3Normalize(b3Vec3 a); // 840
							b3Cross(b3Vec3 a,
								b3Vec3 b);  // 837
						}
						_mm_loadu_ps(const float* __P); // 67
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 68
						b3LoadV(const float* src); // 813
					}
					{
						b3Vec3 origin; // 855
						b3Vec3 triangleVertices; // 856
						b3CastOutput pairOutput; // 861
						b3Sub(b3Vec3 a,
							b3Vec3 b);  // 1021
						operator-(b3Vec3 a,
								b3Vec3 b);  // 856
						b3Sub(b3Vec3 a,
							b3Vec3 b);  // 1021
						operator-(b3Vec3 a,
								b3Vec3 b);  // 856
						b3Neg(b3Vec3 a); // 996
						operator-(b3Vec3 a); // 859
						b3Add(b3Vec3 a,
							b3Vec3 b);  // 978
						operator+=(b3Vec3& a,
								b3Vec3 b);  // 867
					}
					{
						b3Vec3 origin; // 875
						b3Vec3 triangleVertices; // 876
						b3CastOutput pairOutput; // 881
						b3Sub(b3Vec3 a,
							b3Vec3 b);  // 1021
						operator-(b3Vec3 a,
								b3Vec3 b);  // 876
						b3Sub(b3Vec3 a,
							b3Vec3 b);  // 1021
						operator-(b3Vec3 a,
								b3Vec3 b);  // 876
						b3Neg(b3Vec3 a); // 996
						operator-(b3Vec3 a); // 879
						b3Add(b3Vec3 a,
							b3Vec3 b);  // 978
						operator+=(b3Vec3& a,
								b3Vec3 b);  // 887
					}
					b3Mul(b3Vec3 a,
						b3Vec3 b);  // 1011
					operator*(b3Vec3 a,
							b3Vec3 b);  // 753
					b3Mul(b3Vec3 a,
						b3Vec3 b);  // 1011
					operator*(b3Vec3 a,
							b3Vec3 b);  // 754
					b3Mul(b3Vec3 a,
						b3Vec3 b);  // 1011
					operator*(b3Vec3 a,
							b3Vec3 b);  // 755
					b3AABB_Overlaps(b3AABB a,
							b3AABB b);  // 763
					b3Mul(b3Vec3 a,
						b3Vec3 b);  // 1011
					operator*(b3Vec3 a,
							b3Vec3 b);  // 756
				}
			}
		}
		{
			float rowIntercept; // 925
		}
		{
			float columnIntercept; // 953
		}
	}
	{
		int i; // 830
	}
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 837
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 838
	b3MakeAABB(const b3Vec3* points,
			int count,
			float radius);  // 528
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 880
	b3MulSV(float s,
		b3Vec3 a);  // 880
	b3AABB_Center(b3AABB bounds); // 532
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 885
	b3MulSV(float s,
		b3Vec3 a);  // 885
	b3AABB_Extents(b3AABB bounds); // 538
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 533
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 534
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 540
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 540
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 540
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 540
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 552
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 552
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 553
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 554
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 581
	b3AbsFloat(float a); // 334
	b3AbsFloat(float a); // 336
	b3Abs(b3Vec3 a); // 589
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 680
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 681
} /* size: 0, variables: 42, inline expansions: 38 (1965 bytes) */

// <06B62069> src/height_field.cpp:964
// variables: 47
// function calls: 26
bool b3OverlapHeightField(const b3HeightField* shape, b3Transform shapeTransform, const b3ShapeProxy* proxy)
{
	b3Vec3 buffer; // 966
	b3ShapeProxy localProxy; // 967
	b3AABB aabb; // 968
	b3Vec3 scale; // 970
	int minRow; // 971
	int maxRow; // 972
	int minCol; // 973
	int maxCol; // 974
	b3V32 boundsMin; // 976
	b3V32 boundsMax; // 977
	b3V32 boundsCenter; // 978
	b3V32 boundsExtent; // 979
	b3DistanceInput input; // 981
	b3SimplexCache cache; // 987
	float minHeight; // 989
	float heightScale; // 990
	const uint16_t* heights; // 992
	{
		int row; // 996
		{
			int column; // 1003
			{
				int cellIndex; // 1010
				uint8_t material; // 1012
				int index11; // 1019
				int index12; // 1020
				int index21; // 1021
				int index22; // 1022
				float height11; // 1024
				float height12; // 1025
				float height21; // 1026
				float height22; // 1027
				float x1; // 1029
				float x2; // 1030
				float z1; // 1031
				float z2; // 1032
				b3Vec3 point11; // 1034
				b3Vec3 point12; // 1035
				b3Vec3 point21; // 1036
				b3Vec3 point22; // 1037
				b3V32 v11; // 1039
				b3V32 v12; // 1040
				b3V32 v21; // 1041
				b3V32 v22; // 1042
				{
					b3Vec3 triangleVertices; // 1046
					b3DistanceOutput output; // 1053
					float tolerance; // 1055
				}
				{
					b3Vec3 triangleVertices; // 1065
					b3DistanceOutput output; // 1072
					float tolerance; // 1074
				}
				b3Mul(b3Vec3 a,
					b3Vec3 b);  // 1011
				operator*(b3Vec3 a,
						b3Vec3 b);  // 1034
				b3Mul(b3Vec3 a,
					b3Vec3 b);  // 1011
				operator*(b3Vec3 a,
						b3Vec3 b);  // 1036
				b3Mul(b3Vec3 a,
					b3Vec3 b);  // 1011
				operator*(b3Vec3 a,
						b3Vec3 b);  // 1035
				b3Mul(b3Vec3 a,
					b3Vec3 b);  // 1011
				operator*(b3Vec3 a,
						b3Vec3 b);  // 1037
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 68
				_mm_loadu_ps(const float* __P); // 67
				b3LoadV(const float* src); // 1041
				_mm_loadu_ps(const float* __P); // 67
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 68
				b3LoadV(const float* src); // 1039
				_mm_loadu_ps(const float* __P); // 67
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 68
				b3LoadV(const float* src); // 1040
				_mm_loadu_ps(const float* __P); // 67
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 68
				b3LoadV(const float* src); // 1042
			}
		}
	}
	_mm_loadu_ps(const float* __P); // 67
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	b3LoadV(const float* src); // 977
	_mm_loadu_ps(const float* __P); // 67
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	b3LoadV(const float* src); // 976
} /* size: 0, variables: 17, inline expansions: 6 (78 bytes) */

// <06B61B8F> src/height_field.cpp:1087
// variables: 31
// function calls: 9
void b3QueryHeightField(const b3HeightField* heightField, b3AABB bounds, b3MeshQueryFcn* fcn, void* context)
{
	b3Vec3 scale; // 1089
	int minRow; // 1091
	int maxRow; // 1092
	int minCol; // 1093
	int maxCol; // 1094
	float minHeight; // 1096
	float heightScale; // 1097
	const uint16_t* heights; // 1099
	{
		int row; // 1103
		{
			int column; // 1110
			{
				int cellIndex; // 1117
				uint8_t material; // 1119
				int index11; // 1126
				int index12; // 1127
				int index21; // 1128
				int index22; // 1129
				float height11; // 1131
				float height12; // 1132
				float height21; // 1133
				float height22; // 1134
				float x1; // 1136
				float x2; // 1137
				float z1; // 1138
				float z2; // 1139
				b3Vec3 point11; // 1141
				b3Vec3 point12; // 1142
				b3Vec3 point21; // 1143
				b3Vec3 point22; // 1144
				b3AABB cellBound; // 1148
				{
					int quadIndex; // 1154
					int triangleIndex; // 1155
				}
				b3Mul(b3Vec3 a,
					b3Vec3 b);  // 1011
				operator*(b3Vec3 a,
						b3Vec3 b);  // 1141
				b3Mul(b3Vec3 a,
					b3Vec3 b);  // 1011
				operator*(b3Vec3 a,
						b3Vec3 b);  // 1142
				b3Mul(b3Vec3 a,
					b3Vec3 b);  // 1011
				operator*(b3Vec3 a,
						b3Vec3 b);  // 1143
				b3Mul(b3Vec3 a,
					b3Vec3 b);  // 1011
				operator*(b3Vec3 a,
						b3Vec3 b);  // 1144
				b3AABB_Overlaps(b3AABB a,
						b3AABB b);  // 1152
			}
		}
	}
} /* size: 0, variables: 8 */

// <06B60E30> src/height_field.cpp:1211
// variables: 53
// function calls: 41
int b3CollideMoverAndHeightField(b3PlaneResult* planes, int capacity, const b3HeightField* shape, const b3Capsule* mover)
{
	b3DistanceInput distanceInput; // 1213
	b3SimplexCache cache; // 1219
	float radius; // 1221
	b3V32 center1; // 1222
	b3V32 center2; // 1223
	b3V32 r; // 1224
	b3V32 boundsMin; // 1225
	b3V32 boundsMax; // 1226
	b3V32 boundsCenter; // 1227
	b3V32 boundsExtent; // 1228
	float localMinX; // 1230
	float localMinZ; // 1231
	float localMaxX; // 1232
	float localMaxZ; // 1233
	b3Vec3 scale; // 1235
	int minRow; // 1236
	int maxRow; // 1237
	int minCol; // 1238
	int maxCol; // 1239
	float minHeight; // 1241
	float heightScale; // 1242
	const uint16_t* heights; // 1243
	int planeCount; // 1244
	{
		int row; // 1248
		{
			int column; // 1255
			{
				int cellIndex; // 1262
				uint8_t material; // 1264
				int index11; // 1271
				int index12; // 1272
				int index21; // 1273
				int index22; // 1274
				float height11; // 1276
				float height12; // 1277
				float height21; // 1278
				float height22; // 1279
				float x1; // 1281
				float x2; // 1282
				float z1; // 1283
				float z2; // 1284
				b3Vec3 point11; // 1286
				b3Vec3 point12; // 1287
				b3Vec3 point21; // 1288
				b3Vec3 point22; // 1289
				b3V32 v11; // 1291
				b3V32 v12; // 1292
				b3V32 v21; // 1293
				b3V32 v22; // 1294
				{
					b3Vec3 triangleVertices; // 1298
					b3DistanceOutput distanceOutput; // 1305
					{
						b3Plane plane; // 1313
					}
				}
				{
					b3Vec3 triangleVertices; // 1326
					b3DistanceOutput distanceOutput; // 1333
					{
						b3Plane plane; // 1341
					}
				}
				b3Mul(b3Vec3 a,
					b3Vec3 b);  // 1011
				operator*(b3Vec3 a,
						b3Vec3 b);  // 1286
				b3Mul(b3Vec3 a,
					b3Vec3 b);  // 1011
				operator*(b3Vec3 a,
						b3Vec3 b);  // 1288
				b3Mul(b3Vec3 a,
					b3Vec3 b);  // 1011
				operator*(b3Vec3 a,
						b3Vec3 b);  // 1287
				b3Mul(b3Vec3 a,
					b3Vec3 b);  // 1011
				operator*(b3Vec3 a,
						b3Vec3 b);  // 1289
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 68
				_mm_loadu_ps(const float* __P); // 67
				b3LoadV(const float* src); // 1292
				_mm_loadu_ps(const float* __P); // 67
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 68
				b3LoadV(const float* src); // 1291
				_mm_loadu_ps(const float* __P); // 67
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 68
				b3LoadV(const float* src); // 1294
				_mm_loadu_ps(const float* __P); // 67
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 68
				b3LoadV(const float* src); // 1293
			}
		}
	}
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	_mm_loadu_ps(const float* __P); // 67
	b3LoadV(const float* src); // 1223
	_mm_loadu_ps(const float* __P); // 67
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	b3LoadV(const float* src); // 1222
	_mm_min_ps(__m128 __A,
			__m128 __B);  // 112
	b3MinV(b3V32 a,
		b3V32 b);  // 1225
	_mm_set1_ps(float __F); // 948
	_mm_set_ps1(float __F); // 100
	b3SplatV(float x); // 1224
	_mm_max_ps(__m128 __A,
			__m128 __B);  // 117
	b3MaxV(b3V32 a,
		b3V32 b);  // 1226
	_mm_cvtss_f32(__m128 __A); // 78
	b3GetXV(b3V32 a); // 1230
	_mm_cvtss_f32(__m128 __A); // 88
	b3GetZV(b3V32 a); // 1231
	_mm_cvtss_f32(__m128 __A); // 78
	b3GetXV(b3V32 a); // 1232
	_mm_cvtss_f32(__m128 __A); // 88
	b3GetZV(b3V32 a); // 1233
} /* size: 0, variables: 23, inline expansions: 21 (0 bytes) */

// <06B60BE1> src/height_field.cpp:1357
// variables: 12
b3HeightField* b3CreateGrid(int rowCount, int columnCount, b3Vec3 scale, bool makeHoles)
{
	int heightCount; // 1359
	float* heights; // 1360
	int cellCount; // 1371
	uint8_t* materialIndices; // 1372
	b3HeightFieldDef data; // 1391
	b3HeightField* heightField; // 1401
	{
		int i; // 1362
		{
			int j; // 1364
			{
				int k; // 1366
			}
		}
	}
	{
		int i; // 1374
		{
			int j; // 1376
			{
				int k; // 1378
			}
		}
	}
} /* size: 0, variables: 6 */

// <06B608F0> src/height_field.cpp:1409
// variables: 17
b3HeightField* b3CreateWave(int rowCount, int columnCount, b3Vec3 scale, float rowFrequency, float columnFrequency, bool makeHoles)
{
	int heightCount; // 1412
	float* heights; // 1413
	float omegaZ; // 1415
	float omegaX; // 1416
	int cellCount; // 1430
	uint8_t* materialIndices; // 1431
	b3HeightFieldDef data; // 1451
	b3HeightField* heightField; // 1461
	{
		int i; // 1418
		{
			float rowHeight; // 1420
			{
				int j; // 1422
				{
					int k; // 1424
					float columnHeight; // 1425
				}
			}
		}
	}
	{
		int i; // 1433
		{
			int j; // 1435
			{
				int k; // 1437
				{
					int materialCount; // 1445
				}
			}
		}
	}
} /* size: 0, variables: 8 */

// <06B604E4> src/height_field.cpp:1483
// variables: 5
// function calls: 6
void b3DumpHeightData(const b3HeightFieldDef* data, const char* fileName)
{
	FILE* file; // 1485
	int heightCount; // 1506
	int materialCount; // 1512
	{
		int i; // 1507
		fprintf(FILE* __stream,
			const char* __fmt, ...);  // 1509
	}
	{
		int i; // 1513
		fprintf(FILE* __stream,
			const char* __fmt, ...);  // 1515
	}
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1501
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1502
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1503
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1504
} /* size: 0, variables: 3, inline expansions: 4 (0 bytes) */

// <06B60170> src/height_field.cpp:1527
// variables: 9
b3HeightField* b3LoadHeightField(const char* fileName)
{
	FILE* file; // 1529
	b3HeightFieldDef data; // 1545
	int clockwise; // 1569
	int heightCount; // 1578
	int materialCount; // 1592
	b3HeightField* heightField; // 1611
	{
		int i; // 1581
	}
	{
		int i; // 1595
		{
			int materialIndex; // 1597
		}
	}
} /* size: 0, variables: 6 */

