
//
// src/convex_manifold.cpp
//
//	referenced by: libengine2.so
//
//	functions: 10
//

// <06CE8CEA> src/convex_manifold.cpp:16
// variables: 6
bool b3AreParallel(const b3Capsule* capsule1, const b3Capsule* capsule2)
{
	b3Vec3 segment1; // 18
	float length1; // 19
	b3Vec3 segment2; // 25
	float length2; // 26
	const float  kTolerance; // 33
	b3Vec3 axis; // 34
} /* size: 0, variables: 6 */

// <06CE8CB2> src/convex_manifold.cpp:39
// variable: 1
void b3BuildClipPlanes(b3Plane* out, const b3Capsule* capsule)
{
	b3Vec3 normal; // 41
} /* size: 0, variables: 1 */

// <06CE44F7> src/convex_manifold.cpp:346
void b3BuildSegment(b3ClipVertex* out, const b3Capsule* capsule, const b3Transform& transform)
{
} /* size: 0 */

// <06CE43AF> src/convex_manifold.cpp:356
// variables: 17
bool b3BuildHullAndCapsuleFaceContact(b3Manifold& manifold, const b3Hull* hull, b3Transform xfA, const b3Capsule* capsule, b3Transform xfB, b3FaceQuery query)
{
	b3Transform xf; // 361
	const b3Plane* planes; // 363
	int refFace; // 366
	b3Plane refPlane; // 367
	b3ClipVertex segment; // 369
	float distance1; // 378
	float distance2; // 379
	{
		b3Vec3 normal; // 383
		b3Vec3 point1; // 384
		b3Vec3 point2; // 385
		b3ManifoldPoint* mp; // 389
	}
	{
		b3Vec3 normal; // 411
		b3Vec3 point; // 412
		b3ManifoldPoint* mp; // 416
	}
	{
		b3Vec3 normal; // 431
		b3Vec3 point; // 432
		b3ManifoldPoint* mp; // 436
	}
} /* size: 0, variables: 7 */

// <06CE436D> src/convex_manifold.cpp:450
// variables: 2
float b3DeepestPointSeparation(const b3Manifold& manifold)
{
	float minSeparation; // 453
	{
		int index; // 454
	}
} /* size: 0, variables: 1 */

// <06CE4238> src/convex_manifold.cpp:462
// variables: 17
bool b3BuildHullAndCapsuleEdgeContact(b3Manifold& manifold, const b3Hull* hull, b3Transform xfA, const b3Capsule* capsule, b3Transform xfB, b3EdgeQuery query)
{
	b3Transform xf; // 467
	b3Vec3 pc; // 469
	b3Vec3 qc; // 470
	b3Vec3 ec; // 471
	const b3HullHalfEdge* edges; // 476
	const b3Vec3* points; // 477
	const b3HullHalfEdge* edge2; // 479
	const b3HullHalfEdge* twin2; // 480
	b3Vec3 ch; // 481
	b3Vec3 ph; // 482
	b3Vec3 qh; // 483
	b3Vec3 eh; // 484
	b3Vec3 normal; // 486
	b3ClosestApproachResult result; // 495
	b3Vec3 point; // 503
	float separation; // 505
	b3ManifoldPoint* mp; // 510
} /* size: 0, variables: 17 */

// <06CE0348> src/convex_manifold.cpp:654
// variables: 34
// function calls: 56
bool b3BuildFaceContact(b3Manifold& manifold, const b3Hull* hullA, b3Transform xfA, const b3Hull* hullB, b3Transform xfB, b3FaceQuery query, bool flipNormal, b3SATCache* cache)
{
	const b3HullFace* facesA; // 657
	const b3HullHalfEdge* edgesA; // 658
	const b3Plane* planesA; // 659
	const b3Vec3* pointsA; // 660
	int refFace; // 662
	b3Plane refPlane; // 663
	b3Transform xf; // 665
	b3Vec3 refNormalInB; // 666
	int incFace; // 669
	b3ClipVertex buffer1; // 672
	b3ClipVertex buffer2; // 672
	int pointCount; // 673
	b3ClipVertex* input; // 676
	b3ClipVertex* output; // 677
	const b3HullFace* face; // 679
	int edgeIndex; // 680
	b3ManifoldPoint points; // 712
	float minSeparation; // 713
	{
		const b3HullHalfEdge* edge; // 684
		int nextEdgeIndex; // 685
		const b3HullHalfEdge* next; // 686
		b3Vec3 vertex1; // 687
		b3Vec3 vertex2; // 688
		b3Vec3 tangent; // 689
		b3Vec3 binormal; // 690
		b3Plane clipPlane; // 692
		{
			b3ClipVertex* B3_SWAP_TEMP; // 697
		}
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 689
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 690
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 781
		b3MakePlaneFromNormalAndPoint(b3Vec3 normal,
						b3Vec3 point);  // 692
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 689
	}
	{
		int i; // 715
		{
			b3ClipVertex* clipPoint; // 717
			b3ManifoldPoint* mp; // 718
			b3Vec3 point; // 721
			b3FeaturePair pair; // 738
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
					b3Vec3 v);  // 725
			b3Sub(b3Vec3 a,
				b3Vec3 b);  // 1021
			operator-(b3Vec3 a,
					b3Vec3 b);  // 726
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 1016
			operator+(b3Vec3 a,
					b3Vec3 b);  // 726
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 1016
			operator+(b3Vec3 a,
					b3Vec3 b);  // 727
			b3MakeFeatureKey(b3FeaturePair pair); // 739
			b3MulSV(float s,
				b3Vec3 a);  // 1001
			operator*(float s,
					b3Vec3 a);  // 721
			b3Sub(b3Vec3 a,
				b3Vec3 b);  // 1021
			operator-(b3Vec3 a,
					b3Vec3 b);  // 721
		}
	}
	b3GetHullFaces(const b3Hull* hull); // 657
	b3GetHullEdges(const b3Hull* hull); // 658
	b3GetHullPoints(const b3Hull* hull); // 660
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 543
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
				b3Vec3 v);  // 543
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 422
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 423
	b3MulSub(b3Vec3 a,
		float s,
		b3Vec3 b);  // 424
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 425
	b3InvMulQuat(b3Quat q1,
			b3Quat q2);  // 544
	b3InvMulTransforms(b3Transform a,
				b3Transform b);  // 665
	b3GetHullPlanes(const b3Hull* hull); // 659
	b3MulSub(b3Vec3 a,
		float s,
		b3Vec3 b);  // 401
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 400
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 403
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 402
	b3InvRotateVector(b3Quat q,
				b3Vec3 v);  // 666
	b3MinInt(int a,
		int b);  // 710
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
			b3Vec3 v);  // 751
	b3Neg(b3Vec3 a); // 996
	operator-(b3Vec3 a); // 751
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
			b3Vec3 v);  // 751
} /* size: 0, variables: 18, inline expansions: 34 (3007 bytes) */

// <06CE9516> src/convex_manifold.cpp:764
// variables: 23
// function calls: 66
bool b3BuildEdgeContact(b3Manifold& manifold, const b3Hull* hullA, b3Transform xfA, const b3Hull* hullB, b3Transform xfB, b3SATCache* cache, b3EdgeQuery query)
{
	b3Transform xf; // 769
	const b3HullHalfEdge* edgesA; // 771
	const b3Vec3* pointsA; // 772
	const b3HullHalfEdge* edgesB; // 774
	const b3Vec3* pointsB; // 775
	const b3HullHalfEdge* edge1; // 779
	const b3HullHalfEdge* twin1; // 780
	b3Vec3 c1; // 781
	b3Vec3 p1; // 782
	b3Vec3 q1; // 783
	b3Vec3 e1; // 784
	const b3HullHalfEdge* edge2; // 786
	const b3HullHalfEdge* twin2; // 787
	b3Vec3 p2; // 788
	b3Vec3 q2; // 789
	b3Vec3 e2; // 790
	b3Vec3 normal; // 792
	b3ClosestApproachResult result; // 800
	float separation; // 809
	b3Vec3 point; // 812
	b3ManifoldPoint* mp; // 816
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 543
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
				b3Vec3 v);  // 543
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 422
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 423
	b3MulSub(b3Vec3 a,
		float s,
		b3Vec3 b);  // 424
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 425
	b3InvMulQuat(b3Quat q1,
			b3Quat q2);  // 544
	b3InvMulTransforms(b3Transform a,
				b3Transform b);  // 769
	b3GetHullEdges(const b3Hull* hull); // 771
	b3GetHullPoints(const b3Hull* hull); // 775
	b3GetHullPoints(const b3Hull* hull); // 772
	b3GetHullEdges(const b3Hull* hull); // 774
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
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
			b3Vec3 v);  // 788
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 784
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
			b3Vec3 v);  // 789
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 790
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 792
	{
		float s; // 247
		b3Vec3 u; // 248
	}
	b3Normalize(b3Vec3 a); // 793
	b3IsWithinSegments(const b3ClosestApproachResult* result); // 802
	b3MakeFeatureKeyFull(b3FeatureOwner owner1,
				int index1,
				b3FeatureOwner owner2,
				int index2);  // 821
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 809
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 809
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 812
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 812
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
			b3Vec3 v);  // 814
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
			b3Vec3 v);  // 817
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 820
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 818
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 818
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 795
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 795
	b3Neg(b3Vec3 a); // 996
	operator-(b3Vec3 a); // 797
} /* size: 2708, variables: 21, inline expansions: 66 (4523 bytes) */

// <06CE01D2> src/convex_manifold.cpp:764
// variables: 21
bool b3BuildEdgeContact(b3Manifold& manifold, const b3Hull* hullA, b3Transform xfA, const b3Hull* hullB, b3Transform xfB, b3EdgeQuery query, b3SATCache* cache)
{
	b3Transform xf; // 769
	const b3HullHalfEdge* edgesA; // 771
	const b3Vec3* pointsA; // 772
	const b3HullHalfEdge* edgesB; // 774
	const b3Vec3* pointsB; // 775
	const b3HullHalfEdge* edge1; // 779
	const b3HullHalfEdge* twin1; // 780
	b3Vec3 c1; // 781
	b3Vec3 p1; // 782
	b3Vec3 q1; // 783
	b3Vec3 e1; // 784
	const b3HullHalfEdge* edge2; // 786
	const b3HullHalfEdge* twin2; // 787
	b3Vec3 p2; // 788
	b3Vec3 q2; // 789
	b3Vec3 e2; // 790
	b3Vec3 normal; // 792
	b3ClosestApproachResult result; // 800
	float separation; // 809
	b3Vec3 point; // 812
	b3ManifoldPoint* mp; // 816
} /* size: 0, variables: 21 */

// <06CDFF34> src/convex_manifold.cpp:834
// variables: 42
bool b3QueryLastFeatures(b3Manifold& out, const b3Hull* hullA, b3Transform xfA, const b3Hull* hullB, b3Transform xfB, b3SATCache* cache)
{
	const b3HullHalfEdge* edgesA; // 837
	const b3Plane* planesA; // 838
	const b3Vec3* pointsA; // 839
	const b3HullHalfEdge* edgesB; // 841
	const b3Plane* planesB; // 842
	const b3Vec3* pointsB; // 843
	b3Transform xf; // 845
	float linearSlop; // 846
	float speculativeDistance; // 847
	{
		b3Plane plane; // 856
		int vertexIndex; // 857
		b3Vec3 support; // 858
		float separation; // 859
		{
			b3FaceQuery faceQuery; // 890
			bool flip; // 896
		}
	}
	{
		b3Plane plane; // 907
		int vertexIndex; // 908
		b3Vec3 support; // 909
		float separation; // 910
		{
			b3FaceQuery faceQuery; // 935
			bool flip; // 941
		}
	}
	{
		b3Transform transform; // 950
		int index1; // 952
		const b3HullHalfEdge* edge1; // 953
		const b3HullHalfEdge* twin1; // 954
		b3Vec3 p1; // 957
		b3Vec3 q1; // 958
		b3Vec3 e1; // 959
		b3Vec3 u1; // 961
		b3Vec3 v1; // 962
		int index2; // 964
		const b3HullHalfEdge* edge2; // 965
		const b3HullHalfEdge* twin2; // 966
		b3Vec3 p2; // 969
		b3Vec3 q2; // 970
		b3Vec3 e2; // 971
		b3Vec3 u2; // 973
		b3Vec3 v2; // 974
		{
			b3Vec3 c1; // 983
			b3Vec3 c2; // 984
			float separation; // 986
			{
				b3EdgeQuery edgeQuery; // 1008
			}
		}
	}
} /* size: 0, variables: 9 */

