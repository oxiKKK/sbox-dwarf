
//
// thirdparty/mikktspace/mikktspace.c
//
//	referenced by: libengine2.so
//
//	functions: 39
//	structs: 6
//	union: 1
//

// <061D87C3> ../thirdparty/mikktspace/mikktspace.c:51
// member variables: 3
// struct size: 12
typedef struct {
	float x; /* 0 4 */
	float y; /* 4 4 */
	float z; /* 8 4 */
} SVec3;

// <061DF691> ../thirdparty/mikktspace/mikktspace.c:55
inline tbool veq(const SVec3 v1, const SVec3 v2)
{
} /* size: 0 */

// <061DF65D> ../thirdparty/mikktspace/mikktspace.c:60
// variable: 1
inline SVec3 vadd(const SVec3 v1, const SVec3 v2)
{
	SVec3 vRes; // 62
} /* size: 0, variables: 1 */

// <061DF629> ../thirdparty/mikktspace/mikktspace.c:72
// variable: 1
inline SVec3 vsub(const SVec3 v1, const SVec3 v2)
{
	SVec3 vRes; // 74
} /* size: 0, variables: 1 */

// <061DF5F6> ../thirdparty/mikktspace/mikktspace.c:83
// variable: 1
inline SVec3 vscale(const float fS, const SVec3 v)
{
	SVec3 vRes; // 85
} /* size: 0, variables: 1 */

// <061DF5DA> ../thirdparty/mikktspace/mikktspace.c:94
inline float LengthSquared(const SVec3 v)
{
} /* size: 0 */

// <061DF596> ../thirdparty/mikktspace/mikktspace.c:111
// variable: 1
inline SVec3 NormalizeSafe(const SVec3 v)
{
	const float  len; // 113
} /* size: 0, variables: 1 */

// <061DF56E> ../thirdparty/mikktspace/mikktspace.c:123
inline float vdot(const SVec3 v1, const SVec3 v2)
{
} /* size: 0 */

// <061DF551> ../thirdparty/mikktspace/mikktspace.c:129
inline tbool NotZero(const float fX)
{
} /* size: 0 */

// <061D8809> ../thirdparty/mikktspace/mikktspace.c:144
// member variables: 2
// struct size: 16
typedef struct {
	int iNrFaces; /* 0 4 */
	int * pTriMembers; /* 8 8 */
} SSubGroup;

// <061D8846> ../thirdparty/mikktspace/mikktspace.c:149
// member variables: 4
// struct size: 24
typedef struct {
	int iNrFaces; /* 0 4 */
	int * pFaceIndices; /* 8 8 */
	int iVertexRepresentitive; /* 16 4 */
	tbool bOrientPreservering; /* 20 4 */
} SGroup;

// <061D88A1> ../thirdparty/mikktspace/mikktspace.c:164
// member variables: 10
// struct size: 88
typedef struct {
	int FaceNeighbors[3]; /* 0 12 */
	SGroup * AssignedGroup[3]; /* 16 24 */
	SVec3 vOs; /* 40 12 */
	SVec3 vOt; /* 52 12 */
	float fMagS; /* 64 4 */
	float fMagT; /* 68 4 */
	int iOrgFaceNumber; /* 72 4 */
	int iFlag; /* 76 4 */
	int iTSpacesOffs; /* 80 4 */
	unsigned char vert_num[4]; /* 84 4 */
} STriInfo;

// <061D898C> ../thirdparty/mikktspace/mikktspace.c:178
// member variables: 6
// struct size: 40
typedef struct {
	SVec3 vOs; /* 0 12 */
	float fMagS; /* 12 4 */
	SVec3 vOt; /* 16 12 */
	float fMagT; /* 28 4 */
	int iCounter; /* 32 4 */
	tbool bOrient; /* 36 4 */
} STSpace;

// <061DF527> ../thirdparty/mikktspace/mikktspace.c:195
inline int MakeIndex(const int iFace, const int iVert)
{
} /* size: 0 */

// <061DF4F5> ../thirdparty/mikktspace/mikktspace.c:201
inline void IndexToData(int* piFace, int* piVert, const int iIndexIn)
{
} /* size: 0 */

// <061DF4BF> ../thirdparty/mikktspace/mikktspace.c:207
// variable: 1
STSpace AvgTSpace(const STSpace* pTS0, const STSpace* pTS1)
{
	STSpace ts_res; // 209
} /* size: 0, variables: 1 */

// <061DA646> ../thirdparty/mikktspace/mikktspace.c:252
// variables: 229
// function calls: 219
tbool genTangSpace(const SMikkTSpaceContext* pContext, const float fAngularThreshold)
{
	int* piTriListIn; // 255
	int* piGroupTrianglesBuffer; // 255
	STriInfo* pTriInfos; // 256
	SGroup* pGroups; // 257
	STSpace* psTspace; // 258
	int iNrTrianglesIn; // 259
	int f; // 259
	int t; // 259
	int i; // 259
	int iNrTSPaces; // 260
	int iTotTris; // 260
	int iDegenTriangles; // 260
	int iNrMaxGroups; // 260
	int iNrActiveGroups; // 261
	int index; // 261
	const int  iNrFaces; // 262
	tbool bRes; // 263
	const float  fThresCos; // 264
	{
		const int  verts; // 277
	}
	{
		const int  i0; // 306
		const int  i1; // 307
		const int  i2; // 308
		const SVec3  p0; // 309
		const SVec3  p1; // 310
		const SVec3  p2; // 311
		IndexToData(int* piFace,
				int* piVert,
				const int  iIndexIn);  // 738
		GetPosition(const SMikkTSpaceContext* pContext,
				const int  index);  // 309
		IndexToData(int* piFace,
				int* piVert,
				const int  iIndexIn);  // 738
		GetPosition(const SMikkTSpaceContext* pContext,
				const int  index);  // 310
		IndexToData(int* piFace,
				int* piVert,
				const int  iIndexIn);  // 738
		GetPosition(const SMikkTSpaceContext* pContext,
				const int  index);  // 311
		veq(const SVec3  v1,
			const SVec3  v2);  // 312
		veq(const SVec3  v1,
			const SVec3  v2);  // 312
		veq(const SVec3  v1,
			const SVec3  v2);  // 312
	}
	{
		const int  verts; // 399
		{
			const STSpace* pTSpace; // 427
			float tang; // 428
			float bitang; // 429
		}
	}
	{
		const int  verts; // 629
		{
			const int  i0; // 655
			const int  i1; // 656
			const int  i2; // 657
			const int  i3; // 658
			const SVec3  T0; // 659
			const SVec3  T1; // 660
			const SVec3  T2; // 661
			const SVec3  T3; // 662
			const float  distSQ_02; // 663
			const float  distSQ_13; // 664
			tbool bQuadDiagIs_02; // 665
			{
				unsigned char* pVerts_B; // 693
			}
			{
				unsigned char* pVerts_A; // 685
			}
			{
				unsigned char* pVerts_A; // 704
			}
			{
				unsigned char* pVerts_B; // 712
			}
			IndexToData(int* piFace,
					int* piVert,
					const int  iIndexIn);  // 758
			GetTexCoord(const SMikkTSpaceContext* pContext,
					const int  index);  // 659
			MakeIndex(const int  iFace,
					const int  iVert);  // 658
			GetTexCoord(const SMikkTSpaceContext* pContext,
					const int  index);  // 660
			GetTexCoord(const SMikkTSpaceContext* pContext,
					const int  index);  // 661
			GetTexCoord(const SMikkTSpaceContext* pContext,
					const int  index);  // 662
			vsub(const SVec3  v1,
				const SVec3  v2);  // 663
			LengthSquared(const SVec3 v); // 663
			vsub(const SVec3  v1,
				const SVec3  v2);  // 664
			{
				const SVec3  P0; // 672
				const SVec3  P1; // 673
				const SVec3  P2; // 674
				const SVec3  P3; // 675
				const float  distSQ_02; // 676
				const float  distSQ_13; // 677
				GetPosition(const SMikkTSpaceContext* pContext,
						const int  index);  // 672
				GetPosition(const SMikkTSpaceContext* pContext,
						const int  index);  // 673
				GetPosition(const SMikkTSpaceContext* pContext,
						const int  index);  // 674
				GetPosition(const SMikkTSpaceContext* pContext,
						const int  index);  // 675
				vsub(const SVec3  v1,
					const SVec3  v2);  // 676
				vsub(const SVec3  v1,
					const SVec3  v2);  // 677
				LengthSquared(const SVec3 v); // 676
				LengthSquared(const SVec3 v); // 677
			}
			LengthSquared(const SVec3 v); // 664
		}
		{
			unsigned char* pVerts; // 637
			MakeIndex(const int  iFace,
					const int  iVert);  // 640
			MakeIndex(const int  iFace,
					const int  iVert);  // 641
			MakeIndex(const int  iFace,
					const int  iVert);  // 639
		}
	}
	GenerateInitialVerticesIndexList(STriInfo* pTriInfos,
					int* piTriList_out,
					const SMikkTSpaceContext* pContext,
					const int  iNrTrianglesIn);  // 294
	{
		int i; // 517
		{
			const int  index; // 518
			const SVec3  vP; // 520
			const uint  hashP; // 521
			const SVec3  vN; // 523
			const uint  hashN; // 524
			const SVec3  vT; // 526
			const uint  hashT; // 527
			IndexToData(int* piFace,
					int* piVert,
					const int  iIndexIn);  // 738
			GetPosition(const SMikkTSpaceContext* pContext,
					const int  index);  // 520
			float_as_uint(const float v); // 521
			float_as_uint(const float v); // 521
			float_as_uint(const float v); // 521
			GetNormal(const SMikkTSpaceContext* pContext,
					const int  index);  // 523
			float_as_uint(const float v); // 524
			float_as_uint(const float v); // 524
			float_as_uint(const float v); // 524
			GetTexCoord(const SMikkTSpaceContext* pContext,
					const int  index);  // 526
			float_as_uint(const float v); // 527
			float_as_uint(const float v); // 527
		}
	}
	{
		uint hash; // 544
		int blockend; // 545
		{
			int i; // 550
			{
				int index1; // 551
				const SVec3  vP; // 552
				const SVec3  vN; // 553
				const SVec3  vT; // 554
				{
					int i2; // 555
					{
						int index2; // 556
						veq(const SVec3  v1,
							const SVec3  v2);  // 559
						IndexToData(int* piFace,
								int* piVert,
								const int  iIndexIn);  // 738
						GetPosition(const SMikkTSpaceContext* pContext,
								const int  index);  // 559
						GetNormal(const SMikkTSpaceContext* pContext,
								const int  index);  // 560
						veq(const SVec3  v1,
							const SVec3  v2);  // 560
						GetTexCoord(const SMikkTSpaceContext* pContext,
								const int  index);  // 561
						veq(const SVec3  v1,
							const SVec3  v2);  // 561
					}
				}
				IndexToData(int* piFace,
						int* piVert,
						const int  iIndexIn);  // 738
				GetPosition(const SMikkTSpaceContext* pContext,
						const int  index);  // 552
				GetNormal(const SMikkTSpaceContext* pContext,
						const int  index);  // 553
				GetTexCoord(const SMikkTSpaceContext* pContext,
						const int  index);  // 554
			}
		}
	}
	{
		const int  offs; // 587
		const int  index; // 588
		const SVec3  vP; // 590
		const SVec3  vN; // 591
		const SVec3  vT; // 592
		tbool bFound; // 594
		int t2; // 595
		int index2rec; // 595
		{
			int j; // 598
			{
				const int  index2; // 601
				const SVec3  vP2; // 602
				const SVec3  vN2; // 603
				const SVec3  vT2; // 604
				veq(const SVec3  v1,
					const SVec3  v2);  // 606
				IndexToData(int* piFace,
						int* piVert,
						const int  iIndexIn);  // 738
				GetPosition(const SMikkTSpaceContext* pContext,
						const int  index);  // 602
				GetNormal(const SMikkTSpaceContext* pContext,
						const int  index);  // 603
				GetTexCoord(const SMikkTSpaceContext* pContext,
						const int  index);  // 604
				veq(const SVec3  v1,
					const SVec3  v2);  // 606
				veq(const SVec3  v1,
					const SVec3  v2);  // 606
			}
		}
		IndexToData(int* piFace,
				int* piVert,
				const int  iIndexIn);  // 738
		GetPosition(const SMikkTSpaceContext* pContext,
				const int  index);  // 590
		GetNormal(const SMikkTSpaceContext* pContext,
				const int  index);  // 591
		GetTexCoord(const SMikkTSpaceContext* pContext,
				const int  index);  // 592
	}
	GenerateSharedVerticesIndexListSlow(int* piTriList_in_and_out,
						const SMikkTSpaceContext* pContext,
						const int  iNrTrianglesIn);  // 513
	GenerateSharedVerticesIndexList(int* piTriList_in_and_out,
					const SMikkTSpaceContext* pContext,
					const int  iNrTrianglesIn);  // 298
	{
		const tbool  bIsGood; // 1629
		{
			int t0; // 1637
			int t1; // 1637
			tbool bJustADegenerate; // 1639
			{
				const tbool  bIsGood; // 1642
			}
			{
				int i; // 1655
				{
					const int  index; // 1658
				}
				{
					const STriInfo  tri_info; // 1663
				}
			}
		}
	}
	{
		const int  iFO_a; // 1605
		const int  iFO_b; // 1606
		{
			const tbool  bIsDeg_a; // 1609
			const tbool  bIsDeg_b; // 1610
		}
	}
	DegenPrologue(STriInfo* pTriInfos,
			int* piTriList_out,
			const int  iNrTrianglesIn,
			const int  iTotTris);  // 325
	{
		const SVec3  v1; // 820
		const SVec3  v2; // 821
		const SVec3  v3; // 822
		const SVec3  t1; // 823
		const SVec3  t2; // 824
		const SVec3  t3; // 825
		const float  t21x; // 827
		const float  t21y; // 828
		const float  t31x; // 829
		const float  t31y; // 830
		const SVec3  d1; // 831
		const SVec3  d2; // 832
		const float  fSignedAreaSTx2; // 834
		SVec3 vOs; // 836
		SVec3 vOt; // 837
		{
			const float  fAbsArea; // 843
			const float  fLenOs; // 844
			const float  fLenOt; // 845
			const float  fS; // 846
			LengthSquared(const SVec3 v); // 101
			Length(const SVec3 v); // 844
			NotZero(const float fX); // 847
			vscale(const float  fS,
				const SVec3  v);  // 847
			NotZero(const float fX); // 848
			vscale(const float  fS,
				const SVec3  v);  // 848
			NotZero(const float fX); // 855
			NotZero(const float fX); // 855
		}
		NotZero(const float fX); // 841
		IndexToData(int* piFace,
				int* piVert,
				const int  iIndexIn);  // 738
		GetPosition(const SMikkTSpaceContext* pContext,
				const int  index);  // 820
		IndexToData(int* piFace,
				int* piVert,
				const int  iIndexIn);  // 738
		GetPosition(const SMikkTSpaceContext* pContext,
				const int  index);  // 821
		IndexToData(int* piFace,
				int* piVert,
				const int  iIndexIn);  // 738
		GetPosition(const SMikkTSpaceContext* pContext,
				const int  index);  // 822
		IndexToData(int* piFace,
				int* piVert,
				const int  iIndexIn);  // 758
		GetTexCoord(const SMikkTSpaceContext* pContext,
				const int  index);  // 823
		IndexToData(int* piFace,
				int* piVert,
				const int  iIndexIn);  // 758
		GetTexCoord(const SMikkTSpaceContext* pContext,
				const int  index);  // 824
		IndexToData(int* piFace,
				int* piVert,
				const int  iIndexIn);  // 758
		GetTexCoord(const SMikkTSpaceContext* pContext,
				const int  index);  // 825
		vsub(const SVec3  v1,
			const SVec3  v2);  // 831
		vsub(const SVec3  v1,
			const SVec3  v2);  // 832
		vscale(const float  fS,
			const SVec3  v);  // 836
		vscale(const float  fS,
			const SVec3  v);  // 836
		vsub(const SVec3  v1,
			const SVec3  v2);  // 836
		vscale(const float  fS,
			const SVec3  v);  // 837
		vscale(const float  fS,
			const SVec3  v);  // 837
		vadd(const SVec3  v1,
			const SVec3  v2);  // 837
	}
	{
		const int  iFO_a; // 863
		const int  iFO_b; // 864
		{
			const tbool  bIsDeg_a; // 867
			const tbool  bIsDeg_b; // 868
			{
				const tbool  bOrientA; // 874
				const tbool  bOrientB; // 875
				{
					tbool bChooseOrientFirstTri; // 880
					{
						const int  t0; // 887
						const int  t1; // 888
					}
				}
			}
		}
	}
	{
		SEdge* pEdges; // 902
		{
			const int  i0; // 1354
			const int  i1; // 1355
		}
		{
			const int  iL; // 1373
			const int  iR; // 1374
		}
		{
			const int  iL; // 1389
			const int  iR; // 1390
		}
		{
			const int  i0; // 1400
			const int  i1; // 1401
			const int  f; // 1402
			tbool bUnassigned_A; // 1403
			int i0_A; // 1405
			int i1_A; // 1405
			int edgenum_A; // 1406
			int edgenum_B; // 1406
			GetEdge(int* i0_out,
				int* i1_out,
				int* edgenum_out,
				const int* indices,
				const int  i0_in,
				const int  i1_in);  // 1562
			GetEdge(int* i0_out,
				int* i1_out,
				int* edgenum_out,
				const int* indices,
				const int  i0_in,
				const int  i1_in);  // 1407
			{
				int j; // 1413
				int t; // 1413
				tbool bNotFound; // 1414
				{
					tbool bUnassigned_B; // 1417
					int i0_B; // 1418
					int i1_B; // 1418
					GetEdge(int* i0_out,
						int* i1_out,
						int* edgenum_out,
						const int* indices,
						const int  i0_in,
						const int  i1_in);  // 1562
					GetEdge(int* i0_out,
						int* i1_out,
						int* edgenum_out,
						const int* indices,
						const int  i0_in,
						const int  i1_in);  // 1421
				}
				{
					int t; // 1432
				}
			}
		}
		BuildNeighborsFast(STriInfo* pTriInfos,
					SEdge* pEdges,
					const int* piTriListIn,
					const int  iNrTrianglesIn);  // 907
		{
			const int  i0_A; // 1451
			const int  i1_A; // 1452
			tbool bFound; // 1455
			int t; // 1456
			int j; // 1456
			{
				const int  i1_B; // 1465
				const int  i0_B; // 1466
			}
		}
		BuildNeighborsSlow(STriInfo* pTriInfos,
					const int* piTriListIn,
					const int  iNrTrianglesIn);  // 904
	}
	InitTriInfo(STriInfo* pTriInfos,
			const int* piTriListIn,
			const SMikkTSpaceContext* pContext,
			const int  iNrTrianglesIn);  // 330
	{
		const SGroup* pGroup; // 1079
		int iUniqueSubGroups; // 1080
		int s; // 1080
		{
			const int  f; // 1084
			int index; // 1085
			int iVertIndex; // 1085
			int iOF_1; // 1085
			int iMembers; // 1085
			int j; // 1085
			int l; // 1085
			SSubGroup tmp_group; // 1086
			tbool bFound; // 1087
			SVec3 n; // 1088
			SVec3 vOs; // 1088
			SVec3 vOt; // 1088
			{
				int* pIndices; // 1157
				{
					int s; // 1161
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 1171
				{
					const int  f; // 1226
					{
						SVec3 n; // 1231
						SVec3 vOs; // 1231
						SVec3 vOt; // 1231
						SVec3 p0; // 1231
						SVec3 p1; // 1231
						SVec3 p2; // 1231
						SVec3 v1; // 1231
						SVec3 v2; // 1231
						float fCos; // 1232
						float fAngle; // 1232
						float fMagS; // 1232
						float fMagT; // 1232
						int i; // 1233
						int index; // 1233
						int i0; // 1233
						int i1; // 1233
						int i2; // 1233
						LengthSquared(const SVec3 v); // 101
						Length(const SVec3 v); // 113
						vscale(const float  fS,
							const SVec3  v);  // 115
						NormalizeSafe(const SVec3 v); // 1242
						IndexToData(int* piFace,
								int* piVert,
								const int  iIndexIn);  // 738
						GetPosition(const SMikkTSpaceContext* pContext,
								const int  index);  // 1249
						IndexToData(int* piFace,
								int* piVert,
								const int  iIndexIn);  // 738
						GetPosition(const SMikkTSpaceContext* pContext,
								const int  index);  // 1250
						IndexToData(int* piFace,
								int* piVert,
								const int  iIndexIn);  // 738
						GetPosition(const SMikkTSpaceContext* pContext,
								const int  index);  // 1251
						vsub(const SVec3  v1,
							const SVec3  v2);  // 1252
						LengthSquared(const SVec3 v); // 101
						Length(const SVec3 v); // 113
						vscale(const float  fS,
							const SVec3  v);  // 115
						NormalizeSafe(const SVec3 v); // 1256
						vsub(const SVec3  v1,
							const SVec3  v2);  // 1253
						vdot(const SVec3  v1,
							const SVec3  v2);  // 1256
						vscale(const float  fS,
							const SVec3  v);  // 1256
						vsub(const SVec3  v1,
							const SVec3  v2);  // 1256
						vdot(const SVec3  v1,
							const SVec3  v2);  // 1257
						vscale(const float  fS,
							const SVec3  v);  // 1257
						vsub(const SVec3  v1,
							const SVec3  v2);  // 1257
						LengthSquared(const SVec3 v); // 101
						Length(const SVec3 v); // 113
						vscale(const float  fS,
							const SVec3  v);  // 115
						NormalizeSafe(const SVec3 v); // 1257
						vdot(const SVec3  v1,
							const SVec3  v2);  // 1261
						acos(float __x); // 1262
						vscale(const float  fS,
							const SVec3  v);  // 1266
						vadd(const SVec3  v1,
							const SVec3  v2);  // 1266
						vscale(const float  fS,
							const SVec3  v);  // 1267
						vadd(const SVec3  v1,
							const SVec3  v2);  // 1267
						IndexToData(int* piFace,
								int* piVert,
								const int  iIndexIn);  // 748
						GetNormal(const SMikkTSpaceContext* pContext,
								const int  index);  // 1241
						vdot(const SVec3  v1,
							const SVec3  v2);  // 1242
						vsub(const SVec3  v1,
							const SVec3  v2);  // 1242
						vscale(const float  fS,
							const SVec3  v);  // 1242
						vdot(const SVec3  v1,
							const SVec3  v2);  // 1243
						vsub(const SVec3  v1,
							const SVec3  v2);  // 1243
						vscale(const float  fS,
							const SVec3  v);  // 1243
						LengthSquared(const SVec3 v); // 101
						Length(const SVec3 v); // 113
						vscale(const float  fS,
							const SVec3  v);  // 115
						NormalizeSafe(const SVec3 v); // 1243
					}
				}
				LengthSquared(const SVec3 v); // 101
				Length(const SVec3 v); // 113
				vscale(const float  fS,
					const SVec3  v);  // 115
				NormalizeSafe(const SVec3 v); // 1275
				LengthSquared(const SVec3 v); // 101
				Length(const SVec3 v); // 113
				vscale(const float  fS,
					const SVec3  v);  // 115
				NormalizeSafe(const SVec3 v); // 1276
				EvalTspace(int* face_indices,
						const int  iFaces,
						const int* piTriListIn,
						const STriInfo* pTriInfos,
						const SMikkTSpaceContext* pContext,
						const int  iVertexRepresentitive);  // 1173
			}
			IndexToData(int* piFace,
					int* piVert,
					const int  iIndexIn);  // 748
			GetNormal(const SMikkTSpaceContext* pContext,
					const int  index);  // 1098
			vdot(const SVec3  v1,
				const SVec3  v2);  // 1101
			vscale(const float  fS,
				const SVec3  v);  // 1101
			vsub(const SVec3  v1,
				const SVec3  v2);  // 1101
			LengthSquared(const SVec3 v); // 101
			Length(const SVec3 v); // 113
			vscale(const float  fS,
				const SVec3  v);  // 115
			NormalizeSafe(const SVec3 v); // 1101
			vdot(const SVec3  v1,
				const SVec3  v2);  // 1102
			vsub(const SVec3  v1,
				const SVec3  v2);  // 1102
			vscale(const float  fS,
				const SVec3  v);  // 1102
			LengthSquared(const SVec3 v); // 101
			Length(const SVec3 v); // 113
			vscale(const float  fS,
				const SVec3  v);  // 115
			NormalizeSafe(const SVec3 v); // 1102
			{
				const int  t; // 1110
				const int  iOF_2; // 1111
				SVec3 vOs2; // 1114
				SVec3 vOt2; // 1115
				LengthSquared(const SVec3 v); // 101
				Length(const SVec3 v); // 113
				vscale(const float  fS,
					const SVec3  v);  // 115
				NormalizeSafe(const SVec3 v); // 1114
				{
					const tbool  bAny; // 1118
					const tbool  bSameOrgFace; // 1120
					const float  fCosS; // 1122
					const float  fCosT; // 1123
					vdot(const SVec3  v1,
						const SVec3  v2);  // 1122
					vdot(const SVec3  v1,
						const SVec3  v2);  // 1123
				}
				vdot(const SVec3  v1,
					const SVec3  v2);  // 1114
				vscale(const float  fS,
					const SVec3  v);  // 1114
				vsub(const SVec3  v1,
					const SVec3  v2);  // 1114
				vdot(const SVec3  v1,
					const SVec3  v2);  // 1115
				vscale(const float  fS,
					const SVec3  v);  // 1115
				vsub(const SVec3  v1,
					const SVec3  v2);  // 1115
				LengthSquared(const SVec3 v); // 101
				Length(const SVec3 v); // 113
				vscale(const float  fS,
					const SVec3  v);  // 115
				NormalizeSafe(const SVec3 v); // 1115
			}
			{
				unsigned int uSeed; // 1136
			}
			CompareSubGroups(const SSubGroup* pg1,
					const SSubGroup* pg2);  // 1145
			{
				const int  iOffs; // 1179
				const int  iVert; // 1180
				STSpace* pTS_out; // 1181
				veq(const SVec3  v1,
					const SVec3  v2);  // 215
				vadd(const SVec3  v1,
					const SVec3  v2);  // 226
				vadd(const SVec3  v1,
					const SVec3  v2);  // 227
				LengthSquared(const SVec3 v); // 101
				Length(const SVec3 v); // 113
				vscale(const float  fS,
					const SVec3  v);  // 115
				NormalizeSafe(const SVec3 v); // 228
				LengthSquared(const SVec3 v); // 101
				Length(const SVec3 v); // 113
				vscale(const float  fS,
					const SVec3  v);  // 115
				NormalizeSafe(const SVec3 v); // 229
				veq(const SVec3  v1,
					const SVec3  v2);  // 215
				AvgTSpace(const STSpace* pTS0,
						const STSpace* pTS1);  // 1186
			}
		}
	}
	GenerateTSpaces(STSpace* psTspace,
			const STriInfo* pTriInfos,
			const SGroup* pGroups,
			const int  iNrActiveGroups,
			const int* piTriListIn,
			const float  fThresCos,
			const SMikkTSpaceContext* pContext);  // 373
	{
		tbool bOrPre; // 933
		int neigh_indexL; // 934
		int neigh_indexR; // 934
		const int  vert_index; // 935
		AddTriToGroup(SGroup* pGroup,
				const int  iTriIndex);  // 944
		{
			const tbool  bAnswer; // 950
			const tbool  bOrPre2; // 954
			const tbool  bDiff; // 955
		}
		{
			const tbool  bAnswer; // 961
			const tbool  bOrPre2; // 965
			const tbool  bDiff; // 966
		}
	}
	Build4RuleGroups(STriInfo* pTriInfos,
			SGroup* pGroups,
			int* piGroupTrianglesBuffer,
			const int* piTriListIn,
			const int  iNrTrianglesIn);  // 348
	memset(void* __dest,
		int __ch,
		size_t __len);  // 362
	{
		const tbool  bSkip; // 1778
		{
			const int  index1; // 1785
			int j; // 1786
			const int  iTri; // 1796
			const int  iVert; // 1797
			const int  iSrcVert; // 1798
			const int  iSrcOffs; // 1799
			const int  iDstVert; // 1800
			const int  iDstOffs; // 1801
			{
				int iVertIndex; // 1695
			}
			{
				int iVertIndex; // 1718
			}
			GenerateReverseLookup(const int* piTriListIn,
						const int  iNrTrianglesIn,
						VertReverseLookupContext* pLookupCtx);  // 1736
			LookupVertexIndexFromGoodTriangle(VertReverseLookupContext* pLookupCtx,
								int* piTriListIn,
								const int  iNrTrianglesIn,
								const int  iVertexIndex);  // 1786
		}
	}
	FreeReverseLookup(VertReverseLookupContext* pLookupCtx); // 1806
	{
		SVec3 vDstP; // 1815
		int iOrgF; // 1816
		int i; // 1816
		tbool bNotFound; // 1817
		unsigned char* pV; // 1818
		int iFlag; // 1819
		int iMissingIndex; // 1820
		MakeIndex(const int  iFace,
				const int  iVert);  // 1826
		IndexToData(int* piFace,
				int* piVert,
				const int  iIndexIn);  // 738
		GetPosition(const SMikkTSpaceContext* pContext,
				const int  index);  // 1826
		{
			const int  iVert; // 1831
			const SVec3  vSrcP; // 1832
			veq(const SVec3  v1,
				const SVec3  v2);  // 1833
			MakeIndex(const int  iFace,
					const int  iVert);  // 1832
			IndexToData(int* piFace,
					int* piVert,
					const int  iIndexIn);  // 738
			GetPosition(const SMikkTSpaceContext* pContext,
					const int  index);  // 1832
			{
				const int  iOffs; // 1835
			}
		}
	}
	DegenEpilogue(STSpace* psTspace,
			STriInfo* pTriInfos,
			int* piTriListIn,
			const SMikkTSpaceContext* pContext,
			const int  iNrTrianglesIn,
			const int  iTotTris);  // 392
} /* size: 0, variables: 18, inline expansions: 10 (0 bytes) */

// <061DA628> ../thirdparty/mikktspace/mikktspace.c:456
uint float_as_uint(const float v)
{
} /* size: 0 */

// <061DA44F> ../thirdparty/mikktspace/mikktspace.c:466
// variables: 9
void radixsort_pair(uint* comp, int* data, uint* comp2, int* data2, int n)
{
	int shift; // 468
	{
		int pass; // 469
		{
			int bins; // 470
			int* tmpdata; // 487
			uint* tmpcomp; // 488
			{
				int i; // 472
			}
			{
				int i; // 476
			}
			{
				int i; // 480
				{
					int pos; // 481
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <061DA2E1> ../thirdparty/mikktspace/mikktspace.c:498
// variables: 23
void GenerateSharedVerticesIndexList(int* piTriList_in_and_out, const SMikkTSpaceContext* pContext, const int iNrTrianglesIn)
{
	int numVertices; // 500
	uint* hashes; // 502
	int* indices; // 503
	uint* temp_hashes; // 504
	int* temp_indices; // 505
	int blockstart; // 541
	{
		int i; // 517
		{
			const int  index; // 518
			const SVec3  vP; // 520
			const uint  hashP; // 521
			const SVec3  vN; // 523
			const uint  hashN; // 524
			const SVec3  vT; // 526
			const uint  hashT; // 527
		}
	}
	{
		uint hash; // 544
		int blockend; // 545
		{
			int i; // 550
			{
				int index1; // 551
				const SVec3  vP; // 552
				const SVec3  vN; // 553
				const SVec3  vT; // 554
				{
					int i2; // 555
					{
						int index2; // 556
					}
				}
			}
		}
	}
} /* size: 0, variables: 6 */

// <061DA1DF> ../thirdparty/mikktspace/mikktspace.c:580
// variables: 16
void GenerateSharedVerticesIndexListSlow(int* piTriList_in_and_out, const SMikkTSpaceContext* pContext, const int iNrTrianglesIn)
{
	int iNumUniqueVerts; // 582
	int t; // 582
	int i; // 582
	{
		const int  offs; // 587
		const int  index; // 588
		const SVec3  vP; // 590
		const SVec3  vN; // 591
		const SVec3  vT; // 592
		tbool bFound; // 594
		int t2; // 595
		int index2rec; // 595
		{
			int j; // 598
			{
				const int  index2; // 601
				const SVec3  vP2; // 602
				const SVec3  vN2; // 603
				const SVec3  vT2; // 604
			}
		}
	}
} /* size: 0, variables: 3 */

// <061DA025> ../thirdparty/mikktspace/mikktspace.c:623
// variables: 27
int GenerateInitialVerticesIndexList(STriInfo* pTriInfos, int* piTriList_out, const SMikkTSpaceContext* pContext, const int iNrTrianglesIn)
{
	int iTSpacesOffs; // 625
	int f; // 625
	int t; // 625
	int iDstTriIndex; // 626
	{
		const int  verts; // 629
		{
			unsigned char* pVerts; // 637
		}
		{
			const int  i0; // 655
			const int  i1; // 656
			const int  i2; // 657
			const int  i3; // 658
			const SVec3  T0; // 659
			const SVec3  T1; // 660
			const SVec3  T2; // 661
			const SVec3  T3; // 662
			const float  distSQ_02; // 663
			const float  distSQ_13; // 664
			tbool bQuadDiagIs_02; // 665
			{
				const SVec3  P0; // 672
				const SVec3  P1; // 673
				const SVec3  P2; // 674
				const SVec3  P3; // 675
				const float  distSQ_02; // 676
				const float  distSQ_13; // 677
			}
			{
				unsigned char* pVerts_A; // 685
			}
			{
				unsigned char* pVerts_B; // 693
			}
			{
				unsigned char* pVerts_A; // 704
			}
			{
				unsigned char* pVerts_B; // 712
			}
		}
	}
} /* size: 0, variables: 4 */

// <061D9FC6> ../thirdparty/mikktspace/mikktspace.c:734
// variables: 4
inline SVec3 GetPosition(const SMikkTSpaceContext* pContext, const int index)
{
	int iF; // 736
	int iI; // 736
	SVec3 res; // 737
	float pos; // 737
} /* size: 0, variables: 4 */

// <061D9F67> ../thirdparty/mikktspace/mikktspace.c:744
// variables: 4
inline SVec3 GetNormal(const SMikkTSpaceContext* pContext, const int index)
{
	int iF; // 746
	int iI; // 746
	SVec3 res; // 747
	float norm; // 747
} /* size: 0, variables: 4 */

// <061D9EF8> ../thirdparty/mikktspace/mikktspace.c:754
// variables: 4
inline SVec3 GetTexCoord(const SMikkTSpaceContext* pContext, const int index)
{
	int iF; // 756
	int iI; // 756
	SVec3 res; // 757
	float texc; // 757
} /* size: 0, variables: 4 */

// <061D8A15> ../thirdparty/mikktspace/mikktspace.c:767
typedef union {
	struct {
		int i0; /* 0 4 */
		int i1; /* 4 4 */
		int f; /* 8 4 */
	}; /* 0 12 */
	int array[3]; /* 0 12 */
} SEdge;

// <061D9C0B> ../thirdparty/mikktspace/mikktspace.c:779
// variables: 8
// function calls: 6
float CalcTexArea(const SMikkTSpaceContext* pContext, const int* indices)
{
	const SVec3  t1; // 781
	const SVec3  t2; // 782
	const SVec3  t3; // 783
	const float  t21x; // 785
	const float  t21y; // 786
	const float  t31x; // 787
	const float  t31y; // 788
	const float  fSignedAreaSTx2; // 790
	IndexToData(int* piFace,
			int* piVert,
			const int  iIndexIn);  // 758
	GetTexCoord(const SMikkTSpaceContext* pContext,
			const int  index);  // 781
	IndexToData(int* piFace,
			int* piVert,
			const int  iIndexIn);  // 758
	GetTexCoord(const SMikkTSpaceContext* pContext,
			const int  index);  // 782
	IndexToData(int* piFace,
			int* piVert,
			const int  iIndexIn);  // 758
	GetTexCoord(const SMikkTSpaceContext* pContext,
			const int  index);  // 783
} /* size: 0, variables: 8, inline expansions: 6 (0 bytes) */

// <061D9A21> ../thirdparty/mikktspace/mikktspace.c:795
// variables: 32
void InitTriInfo(STriInfo* pTriInfos, const int* piTriListIn, const SMikkTSpaceContext* pContext, const int iNrTrianglesIn)
{
	int f; // 797
	int i; // 797
	int t; // 797
	{
		const SVec3  v1; // 820
		const SVec3  v2; // 821
		const SVec3  v3; // 822
		const SVec3  t1; // 823
		const SVec3  t2; // 824
		const SVec3  t3; // 825
		const float  t21x; // 827
		const float  t21y; // 828
		const float  t31x; // 829
		const float  t31y; // 830
		const SVec3  d1; // 831
		const SVec3  d2; // 832
		const float  fSignedAreaSTx2; // 834
		SVec3 vOs; // 836
		SVec3 vOt; // 837
		{
			const float  fAbsArea; // 843
			const float  fLenOs; // 844
			const float  fLenOt; // 845
			const float  fS; // 846
		}
	}
	{
		const int  iFO_a; // 863
		const int  iFO_b; // 864
		{
			const tbool  bIsDeg_a; // 867
			const tbool  bIsDeg_b; // 868
			{
				const tbool  bOrientA; // 874
				const tbool  bOrientB; // 875
				{
					tbool bChooseOrientFirstTri; // 880
					{
						const int  t0; // 887
						const int  t1; // 888
					}
				}
			}
		}
	}
	{
		SEdge* pEdges; // 902
	}
} /* size: 0, variables: 3 */

// <061D9904> ../thirdparty/mikktspace/mikktspace.c:920
// variables: 15
int Build4RuleGroups(STriInfo* pTriInfos, SGroup* pGroups, int* piGroupTrianglesBuffer, const int* piTriListIn, const int iNrTrianglesIn)
{
	const int  iNrMaxGroups; // 922
	int iNrActiveGroups; // 923
	int iOffset; // 924
	int f; // 924
	int i; // 924
	{
		tbool bOrPre; // 933
		int neigh_indexL; // 934
		int neigh_indexR; // 934
		const int  vert_index; // 935
		{
			const tbool  bAnswer; // 950
			const tbool  bOrPre2; // 954
			const tbool  bDiff; // 955
		}
		{
			const tbool  bAnswer; // 961
			const tbool  bOrPre2; // 965
			const tbool  bDiff; // 966
		}
	}
} /* size: 0, variables: 5 */

// <061D98DB> ../thirdparty/mikktspace/mikktspace.c:984
inline void AddTriToGroup(SGroup* pGroup, const int iTriIndex)
{
} /* size: 0 */

// <061DF740> ../thirdparty/mikktspace/mikktspace.c:990
// variables: 7
// function call: 1
tbool AssignRecur(const int* piTriListIn, STriInfo* psTriInfos, const int iMyTriIndex, SGroup* pGroup)
{
	STriInfo* pMyTriInfo; // 993
	const int  iVertRep; // 996
	const int* pVerts; // 997
	int i; // 998
	{
		const tbool  bOrient; // 1021
	}
	AddTriToGroup(SGroup* pGroup,
			const int  iTriIndex);  // 1025
	{
		const int  neigh_indexL; // 1029
		const int  neigh_indexR; // 1030
	}
} /* size: 0, variables: 4, inline expansions: 1 (0 bytes) */

// <061D9833> ../thirdparty/mikktspace/mikktspace.c:990
// variables: 7
tbool AssignRecur(const int* piTriListIn, STriInfo* psTriInfos, const int iMyTriIndex, SGroup* pGroup)
{
	STriInfo* pMyTriInfo; // 993
	const int  iVertRep; // 996
	const int* pVerts; // 997
	int i; // 998
	{
		const tbool  bOrient; // 1021
	}
	{
		const int  neigh_indexL; // 1029
		const int  neigh_indexR; // 1030
	}
} /* size: 0, variables: 4 */

// <061D95DB> ../thirdparty/mikktspace/mikktspace.c:1049
// variables: 36
tbool GenerateTSpaces(STSpace* psTspace, const STriInfo* pTriInfos, const SGroup* pGroups, const int iNrActiveGroups, const int* piTriListIn, const float fThresCos, const SMikkTSpaceContext* pContext)
{
	STSpace* pSubGroupTspace; // 1053
	SSubGroup* pUniSubGroups; // 1054
	int* pTmpMembers; // 1055
	int iMaxNrFaces; // 1056
	int iUniqueTspaces; // 1056
	int g; // 1056
	int i; // 1056
	{
		const SGroup* pGroup; // 1079
		int iUniqueSubGroups; // 1080
		int s; // 1080
		{
			const int  f; // 1084
			int index; // 1085
			int iVertIndex; // 1085
			int iOF_1; // 1085
			int iMembers; // 1085
			int j; // 1085
			int l; // 1085
			SSubGroup tmp_group; // 1086
			tbool bFound; // 1087
			SVec3 n; // 1088
			SVec3 vOs; // 1088
			SVec3 vOt; // 1088
			{
				const int  t; // 1110
				const int  iOF_2; // 1111
				SVec3 vOs2; // 1114
				SVec3 vOt2; // 1115
				{
					const tbool  bAny; // 1118
					const tbool  bSameOrgFace; // 1120
					const float  fCosS; // 1122
					const float  fCosT; // 1123
				}
			}
			{
				unsigned int uSeed; // 1136
			}
			{
				int* pIndices; // 1157
				{
					int s; // 1161
				}
			}
			{
				const int  iOffs; // 1179
				const int  iVert; // 1180
				STSpace* pTS_out; // 1181
			}
		}
	}
} /* size: 0, variables: 7 */

// <061D946D> ../thirdparty/mikktspace/mikktspace.c:1214
// variables: 21
STSpace EvalTspace(int* face_indices, const int iFaces, const int* piTriListIn, const STriInfo* pTriInfos, const SMikkTSpaceContext* pContext, const int iVertexRepresentitive)
{
	STSpace res; // 1217
	float fAngleSum; // 1218
	int face; // 1219
	{
		const int  f; // 1226
		{
			SVec3 n; // 1231
			SVec3 vOs; // 1231
			SVec3 vOt; // 1231
			SVec3 p0; // 1231
			SVec3 p1; // 1231
			SVec3 p2; // 1231
			SVec3 v1; // 1231
			SVec3 v2; // 1231
			float fCos; // 1232
			float fAngle; // 1232
			float fMagS; // 1232
			float fMagT; // 1232
			int i; // 1233
			int index; // 1233
			int i0; // 1233
			int i1; // 1233
			int i2; // 1233
		}
	}
} /* size: 0, variables: 3 */

// <061D9422> ../thirdparty/mikktspace/mikktspace.c:1286
// variables: 2
tbool CompareSubGroups(const SSubGroup* pg1, const SSubGroup* pg2)
{
	tbool bStillSame; // 1288
	int i; // 1289
} /* size: 0, variables: 2 */

// <061D9301> ../thirdparty/mikktspace/mikktspace.c:1299
// variables: 7
void QuickSort(int* pSortBuffer, int iLeft, int iRight, unsigned int uSeed)
{
	int iL; // 1301
	int iR; // 1301
	int n; // 1301
	int index; // 1301
	int iMid; // 1301
	int iTmp; // 1301
	unsigned int t; // 1304
} /* size: 0, variables: 7 */

// <061D9162> ../thirdparty/mikktspace/mikktspace.c:1346
// variables: 26
void BuildNeighborsFast(STriInfo* pTriInfos, SEdge* pEdges, const int* piTriListIn, const int iNrTrianglesIn)
{
	unsigned int uSeed; // 1349
	int iEntries; // 1350
	int iCurStartIndex; // 1350
	int f; // 1350
	int i; // 1350
	{
		const int  i0; // 1354
		const int  i1; // 1355
	}
	{
		const int  iL; // 1373
		const int  iR; // 1374
	}
	{
		const int  iL; // 1389
		const int  iR; // 1390
	}
	{
		const int  i0; // 1400
		const int  i1; // 1401
		const int  f; // 1402
		tbool bUnassigned_A; // 1403
		int i0_A; // 1405
		int i1_A; // 1405
		int edgenum_A; // 1406
		int edgenum_B; // 1406
		{
			int j; // 1413
			int t; // 1413
			tbool bNotFound; // 1414
			{
				tbool bUnassigned_B; // 1417
				int i0_B; // 1418
				int i1_B; // 1418
			}
			{
				int t; // 1432
			}
		}
	}
} /* size: 0, variables: 5 */

// <061D90BB> ../thirdparty/mikktspace/mikktspace.c:1441
// variables: 9
void BuildNeighborsSlow(STriInfo* pTriInfos, const int* piTriListIn, const int iNrTrianglesIn)
{
	int f; // 1443
	int i; // 1443
	{
		const int  i0_A; // 1451
		const int  i1_A; // 1452
		tbool bFound; // 1455
		int t; // 1456
		int j; // 1456
		{
			const int  i1_B; // 1465
			const int  i0_B; // 1466
		}
	}
} /* size: 0, variables: 2 */

// <061D8EFC> ../thirdparty/mikktspace/mikktspace.c:1490
// variables: 11
void QuickSortEdges(SEdge* pSortBuffer, int iLeft, int iRight, const int channel, unsigned int uSeed)
{
	unsigned int t; // 1492
	int iL; // 1493
	int iR; // 1493
	int n; // 1493
	int index; // 1493
	int iMid; // 1493
	SEdge sTmp; // 1496
	const int  iElems; // 1497
	{
		int i; // 1510
		int j; // 1510
		{
			int index; // 1513
		}
	}
} /* size: 0, variables: 8 */

// <061D8E9F> ../thirdparty/mikktspace/mikktspace.c:1562
void GetEdge(int* i0_out, int* i1_out, int* edgenum_out, const int* indices, const int i0_in, const int i1_in)
{
} /* size: 0 */

// <061D8D83> ../thirdparty/mikktspace/mikktspace.c:1596
// variables: 15
void DegenPrologue(STriInfo* pTriInfos, int* piTriList_out, const int iNrTrianglesIn, const int iTotTris)
{
	int iNextGoodTriangleSearchIndex; // 1598
	tbool bStillFindingGoodOnes; // 1599
	int t; // 1602
	{
		const int  iFO_a; // 1605
		const int  iFO_b; // 1606
		{
			const tbool  bIsDeg_a; // 1609
			const tbool  bIsDeg_b; // 1610
		}
	}
	{
		const tbool  bIsGood; // 1629
		{
			int t0; // 1637
			int t1; // 1637
			tbool bJustADegenerate; // 1639
			{
				const tbool  bIsGood; // 1642
			}
			{
				int i; // 1655
				{
					const int  index; // 1658
				}
				{
					const STriInfo  tri_info; // 1663
				}
			}
		}
	}
} /* size: 0, variables: 3 */

// <061D8A7B> ../thirdparty/mikktspace/mikktspace.c:1679
// member variables: 3
// struct size: 24
struct VertReverseLookupContext {
	tbool bIsInitialized; /* 0 4 */
	int * pLookup; /* 8 8 */
	int iMaxVertIndex; /* 16 4 */
};

// <061D8D20> ../thirdparty/mikktspace/mikktspace.c:1685
// variables: 3
void GenerateReverseLookup(const int* piTriListIn, const int iNrTrianglesIn, VertReverseLookupContext* pLookupCtx)
{
	int t; // 1690
	{
		int iVertIndex; // 1695
	}
	{
		int iVertIndex; // 1718
	}
} /* size: 0, variables: 1 */

// <061D8CD9> ../thirdparty/mikktspace/mikktspace.c:1727
int LookupVertexIndexFromGoodTriangle(VertReverseLookupContext* pLookupCtx, int* piTriListIn, const int iNrTrianglesIn, const int iVertexIndex)
{
} /* size: 0 */

// <061D8CB7> ../thirdparty/mikktspace/mikktspace.c:1753
void FreeReverseLookup(VertReverseLookupContext* pLookupCtx)
{
} /* size: 0 */

// <061D8B25> ../thirdparty/mikktspace/mikktspace.c:1763
// variables: 22
void DegenEpilogue(STSpace* psTspace, STriInfo* pTriInfos, int* piTriListIn, const SMikkTSpaceContext* pContext, const int iNrTrianglesIn, const int iTotTris)
{
	int t; // 1770
	int i; // 1770
	VertReverseLookupContext lookupCtx; // 1771
	{
		const tbool  bSkip; // 1778
		{
			const int  index1; // 1785
			int j; // 1786
			const int  iTri; // 1796
			const int  iVert; // 1797
			const int  iSrcVert; // 1798
			const int  iSrcOffs; // 1799
			const int  iDstVert; // 1800
			const int  iDstOffs; // 1801
		}
	}
	{
		SVec3 vDstP; // 1815
		int iOrgF; // 1816
		int i; // 1816
		tbool bNotFound; // 1817
		unsigned char* pV; // 1818
		int iFlag; // 1819
		int iMissingIndex; // 1820
		{
			const int  iVert; // 1831
			const SVec3  vSrcP; // 1832
			{
				const int  iOffs; // 1835
			}
		}
	}
} /* size: 0, variables: 3 */

