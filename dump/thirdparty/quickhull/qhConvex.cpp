
//
// thirdparty/quickhull/qhConvex.cpp
//
//	referenced by: libengine2.so
//
//	functions: 48
//

// <061F66FF> thirdparty/quickhull/qhConvex.cpp:46
inline void qhSwap(qhIteration& Lhs, qhIteration& Rhs)
{
} /* size: 0 */

// <061F66BD> thirdparty/quickhull/qhConvex.cpp:56
// variables: 2
inline qhVector3 qhBuildCentroid(int VertexCount, const qhVector3* Vertices)
{
	qhVector3 Centroid; // 58
	{
		int i; // 59
	}
} /* size: 0, variables: 1 */

// <061F6673> thirdparty/quickhull/qhConvex.cpp:70
// variable: 1
void qhShiftVertices(qhArray<qhVector3>& Vertices, int VertexCount, const qhVector3* VertexBase, const qhVector3& Translation)
{
	{
		int i; // 73
	}
} /* size: 0 */

// <061F663D> thirdparty/quickhull/qhConvex.cpp:81
// variables: 2
inline qhBounds3 qhBuildBounds(qhArray<qhVector3>& Vertices)
{
	qhBounds3 Bounds; // 83
	{
		int i; // 84
	}
} /* size: 0, variables: 1 */

// <061F65F1> thirdparty/quickhull/qhConvex.cpp:94
// variables: 3
void qhWeldVertices(qhArray<qhVector3>& Vertices, const qhVector3& Tolerance)
{
	{
		int i; // 100
		{
			int k; // 102
			{
				qhVector3 Offset; // 105
			}
		}
	}
} /* size: 0 */

// <061F651C> thirdparty/quickhull/qhConvex.cpp:117
// variables: 9
void qhFindFarthestPointsAlongCardinalAxes(int& Index1, int& Index2, qhReal Tolerance, int VertexCount, const qhVector3* VertexBase)
{
	qhVector3 V0; // 120
	qhVector3 Min; // 121
	qhVector3 Max; // 122
	int MinIndex; // 123
	int MaxIndex; // 124
	qhVector3 Distance; // 167
	int MaxElement; // 172
	{
		int i; // 126
		{
			const qhVector3& V; // 128
		}
	}
} /* size: 0, variables: 7 */

// <061F6454> thirdparty/quickhull/qhConvex.cpp:182
// variables: 11
int qhFindFarthestPointFromLine(int Index1, int Index2, qhReal Tolerance, int VertexCount, const qhVector3* VertexBase)
{
	const qhVector3& A; // 184
	const qhVector3& B; // 185
	qhVector3 AB; // 187
	qhReal MaxDistance; // 188
	int MaxIndex; // 189
	{
		int i; // 191
		{
			const qhVector3& P; // 198
			qhVector3 AP; // 200
			qhReal s; // 201
			qhVector3 Q; // 202
			qhReal Distance; // 204
		}
	}
} /* size: 0, variables: 5 */

// <061F639E> thirdparty/quickhull/qhConvex.cpp:217
// variables: 8
int qhFindFarthestPointFromPlane(int Index1, int Index2, int Index3, qhReal Tolerance, int VertexCount, const qhVector3* VertexBase)
{
	const qhVector3& A; // 219
	const qhVector3& B; // 220
	const qhVector3& C; // 221
	qhPlane Plane; // 222
	qhReal MaxDistance; // 225
	int MaxIndex; // 226
	{
		int i; // 228
		{
			qhReal Distance; // 235
		}
	}
} /* size: 0, variables: 6 */

// <061F6214> thirdparty/quickhull/qhConvex.cpp:250
// function calls: 9
void qhConvex::qhConvex()
{
	qhPool<qhVertex>::qhPool(); // 254
	qhPool<qhHalfEdge>::qhPool(); // 254
	qhList<qhVertex>::qhList(); // 254
	qhList<qhVertex>::qhList(); // 254
	qhPool<qhFace>::qhPool(); // 254
	qhList<qhVertex>::qhList(); // 62
	qhFace::qhFace(); // 50
	qhList<qhFace>::qhList(); // 254
	qhArray<qhIteration>::qhArray(); // 254
} /* size: 241, inline expansions: 9 (238 bytes) */

// <061F61F8> thirdparty/quickhull/qhConvex.cpp:250
void qhConvex::qhConvex()
{
} /* size: 0 */

// <061F5B65> thirdparty/quickhull/qhConvex.cpp:261
// variables: 10
// function calls: 27
void qhConvex::~qhConvex()
{
	{
		qhFace* Face; // 264
		qhVertex* Vertex; // 275
		{
			qhFace* Nuke; // 267
		}
		{
			qhVertex* Nuke; // 278
		}
	}
	{
		qhFace* Face; // 264
		qhVertex* Vertex; // 275
		qhList<qhFace>::Begin(); // 264
		qhList<qhFace>::End(); // 265
		{
			qhFace* Nuke; // 267
			{
				qhHalfEdge* Nuke; // 765
				qhPool<qhHalfEdge>::Free(
					qhHalfEdge* Address);  // 768
			}
			qhPool<qhFace>::Free(
				qhFace* Address);  // 777
			qhConvex::DestroyFace(
					qhFace* Face);  // 271
			qhRemove<qhFace>(qhFace* Node); // 270
		}
		qhList<qhVertex>::Begin(); // 275
		qhList<qhVertex>::End(); // 276
		{
			qhVertex* Nuke; // 278
			qhPool<qhVertex>::Free(
				qhVertex* Address);  // 694
			qhConvex::DestroyVertex(
					qhVertex* Vertex);  // 282
			qhRemove<qhVertex>(qhVertex* Node); // 281
		}
	}
	qhArray<qhIteration>::Size(); // 25
	{
		int i; // 142
		qhArray<int>::Size(); // 25
		qhDestroy<int>(int* Address,
				int N);  // 25
		qhArray<int>::~qhArray(); // 37
		qhArray<qhVector3>::Size(); // 25
		qhDestroy<qhVector3>(qhVector3* Address,
					int N);  // 25
		qhArray<qhVector3>::~qhArray(); // 37
		qhArray<qhVector3>::Size(); // 25
		qhDestroy<qhVector3>(qhVector3* Address,
					int N);  // 25
		qhArray<qhVector3>::~qhArray(); // 37
		qhIteration::~qhIteration(); // 144
	}
	qhDestroy<qhIteration>(qhIteration* Address,
				int N);  // 25
	qhArray<qhIteration>::~qhArray(); // 284
	qhPool<qhFace>::~qhPool(); // 284
	qhPool<qhHalfEdge>::~qhPool(); // 284
	qhPool<qhVertex>::~qhPool(); // 284
} /* size: 465, inline expansions: 6 (242 bytes) */

// <061F5B0A> thirdparty/quickhull/qhConvex.cpp:261
// variables: 4
void qhConvex::~qhConvex()
{
	{
		qhFace* Face; // 264
		qhVertex* Vertex; // 275
		{
			qhFace* Nuke; // 267
		}
		{
			qhVertex* Nuke; // 278
		}
	}
} /* size: 0 */

// <061F5212> thirdparty/quickhull/qhConvex.cpp:288
// variables: 11
// function calls: 32
void qhConvex::Construct(int VertexCount, const qhVector3* VertexBase, qhReal RelativeWeldTolerance)
{
	qhVector3 Centroid; // 300
	qhArray<qhVector3> Vertices; // 302
	qhBounds3 Bounds; // 304
	qhVertex* Vertex; // 318
	{
		int i; // 59
		qhVector3::operator+=(
				const qhVector3& V);  // 61
	}
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 258
	operator/(const qhVector3& V,
			qhReal S);  // 65
	qhBuildCentroid(int VertexCount,
			const qhVector3* Vertices);  // 300
	{
		qhVector3* Begin; // 69
	}
	qhArray<qhVector3>::Reserve(
		int Count);  // 65
	qhArray<qhVector3>::Reserve(
		int Count);  // 84
	qhArray<qhVector3>::Resize(
		int Count);  // 72
	{
		int i; // 73
		qhVector3::qhVector3(
				qhReal x,
				qhReal y,
				qhReal z);  // 230
		operator+(const qhVector3& V1,
				const qhVector3& V2);  // 75
	}
	qhShiftVertices(qhArray<qhVector3>& Vertices,
			int VertexCount,
			const qhVector3* VertexBase,
			const qhVector3& Translation);  // 303
	qhArray<qhVector3>::qhArray(); // 302
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 194
	qhVector3::operator-(); // 303
	{
		int i; // 84
		qhArray<qhVector3>::Size(); // 84
		qhBounds3::operator+=(
				const qhVector3& Point);  // 86
	}
	qhBuildBounds(qhArray<qhVector3>& Vertices); // 304
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 237
	operator-(const qhVector3& V1,
			const qhVector3& V2);  // 305
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 244
	operator*(qhReal S,
			const qhVector3& V);  // 305
	{
		int i; // 100
		{
			int k; // 102
			{
				qhVector3 Offset; // 105
				qhAbs(qhReal X); // 106
				qhVector3::qhVector3(
						qhReal x,
						qhReal y,
						qhReal z);  // 237
				operator-(const qhVector3& V1,
						const qhVector3& V2);  // 105
				qhAbs(qhReal X); // 106
				qhAbs(qhReal X); // 106
				qhDestroy<qhVector3>(qhVector3* Address); // 123
				qhArray<qhVector3>::PopBack(); // 109
			}
		}
		qhArray<qhVector3>::Size(); // 100
	}
	qhWeldVertices(qhArray<qhVector3>& Vertices,
			const qhVector3& Tolerance);  // 305
	qhArray<qhVector3>::Size(); // 25
	qhDestroy<qhVector3>(qhVector3* Address,
				int N);  // 25
	qhArray<qhVector3>::~qhArray(); // 330
} /* size: 1054, variables: 4, inline expansions: 19 (1067 bytes) */

// <061F44CA> thirdparty/quickhull/qhConvex.cpp:334
// variables: 13
// function calls: 52
void qhConvex::Construct(int PlaneCount, const qhPlane* PlaneBase, qhReal RelativeWeldTolerance, const qhVector3& InternalPoint)
{
	qhArray<qhVector3> DualVertices; // 346
	qhConvex Dual; // 363
	const qhList<qhFace>& FaceList; // 372
	qhArray<qhVector3> PrimalVertices; // 374
	{
		int Index; // 349
		{
			qhPlane Plane; // 352
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 258
			operator/(const qhVector3& V,
					qhReal S);  // 360
			qhDot(const qhVector3& V1,
				const qhVector3& V2);  // 1046
			qhPlane::Translate(
					const qhVector3& Translation);  // 353
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 194
			qhVector3::operator-(); // 353
		}
	}
	{
		const qhFace* Face; // 377
		{
			qhPlane Plane; // 379
			qhVector3 Vertex; // 383
			qhArray<qhVector3>::Capacity(); // 112
			qhCopyConstruct<qhVector3>(qhVector3* Address,
							const qhVector3& Other);  // 115
			{
				qhVector3* Begin; // 69
				qhSwap<qhVector3>(qhVector3& Lhs,
							qhVector3& Rhs);  // 156
				qhMove<qhVector3>(qhVector3* Address,
							qhVector3* Begin,
							qhVector3* End);  // 70
				qhArray<qhVector3>::Size(); // 74
			}
			qhArray<qhVector3>::Reserve(
				int Count);  // 65
			qhArray<qhVector3>::Reserve(
				int Count);  // 112
			qhArray<qhVector3>::PushBack(
				const qhVector3& Other);  // 384
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 258
			operator/(const qhVector3& V,
					qhReal S);  // 383
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 230
			operator+(const qhVector3& V1,
					const qhVector3& V2);  // 383
		}
		qhList<qhFace>::Begin(); // 377
		qhList<qhFace>::End(); // 377
	}
	{
		qhVector3* Begin; // 69
	}
	qhArray<qhVector3>::Reserve(
		int Count);  // 65
	qhArray<qhVector3>::Reserve(
		int Count);  // 84
	qhArray<qhVector3>::Resize(
		int Count);  // 347
	qhArray<qhVector3>::qhArray(); // 346
	qhArray<qhVector3>::Size(); // 364
	qhList<qhVertex>::qhList(); // 62
	qhFace::qhFace(); // 50
	qhList<qhFace>::qhList(); // 254
	qhPool<qhVertex>::qhPool(); // 254
	qhList<qhVertex>::qhList(); // 254
	qhList<qhVertex>::qhList(); // 254
	qhPool<qhHalfEdge>::qhPool(); // 254
	qhArray<qhIteration>::qhArray(); // 254
	qhPool<qhFace>::qhPool(); // 254
	qhConvex::qhConvex(); // 363
	qhArray<qhVector3>::qhArray(); // 374
	{
		const qhFace* Node; // 62
		qhList<qhFace>::Begin(); // 62
		qhList<qhFace>::End(); // 62
	}
	qhList<qhFace>::Size(); // 375
	{
		qhVector3* Begin; // 69
	}
	qhArray<qhVector3>::Reserve(
		int Count);  // 65
	qhArray<qhVector3>::Reserve(
		int Count);  // 375
	qhArray<qhVector3>::Size(); // 25
	qhDestroy<qhVector3>(qhVector3* Address,
				int N);  // 25
	qhArray<qhVector3>::~qhArray(); // 388
	qhArray<qhVector3>::Size(); // 387
	qhArray<qhVector3>::Size(); // 25
	qhDestroy<qhVector3>(qhVector3* Address,
				int N);  // 25
	qhArray<qhVector3>::~qhArray(); // 388
	qhArray<qhVector3>::Size(); // 25
	qhDestroy<qhVector3>(qhVector3* Address,
				int N);  // 25
	qhArray<qhVector3>::~qhArray(); // 388
	qhConvex::GetErrorCode(); // 367
} /* size: 1333, variables: 4, inline expansions: 30 (851 bytes) */

// <061F4085> thirdparty/quickhull/qhConvex.cpp:393
// variables: 9
// function calls: 17
void qhConvex::IsConsistent()
{
	int V; // 396
	int E; // 397
	int F; // 398
	{
		const qhFace* Face; // 407
		{
			const qhHalfEdge* Edge; // 431
			qhDot(const qhVector3& V1,
				const qhVector3& V2);  // 1053
			qhPlane::Distance(
				const qhVector3& Point);  // 416
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 237
			operator-(const qhVector3& V1,
					const qhVector3& V2);  // 460
			qhDot(const qhVector3& V1,
				const qhVector3& V2);  // 446
			sqrt(float __x); // 446
			qhLength(const qhVector3& V); // 460
			qhDistance(const qhVector3& V1,
					const qhVector3& V2);  // 462
		}
	}
	{
		const qhVertex* Node; // 62
		qhList<qhVertex>::Begin(); // 62
		qhList<qhVertex>::End(); // 62
	}
	qhList<qhVertex>::Size(); // 33
	qhConvex::GetVertexCount(); // 396
	{
		const qhFace* Face; // 41
		qhList<qhFace>::Begin(); // 41
		qhList<qhFace>::End(); // 41
		{
			qhHalfEdge* Edge; // 43
		}
	}
	qhConvex::GetEdgeCount(); // 397
	{
		const qhFace* Node; // 62
	}
	qhList<qhFace>::Size(); // 61
	qhConvex::GetFaceCount(); // 398
} /* size: 512, variables: 3, inline expansions: 5 (223 bytes) */

// <061F2259> thirdparty/quickhull/qhConvex.cpp:477
// variables: 37
// function calls: 122
void qhConvex::Simplify(qhConvex& Convex, qhReal MaxAngle)
{
	qhArray<qhArray<const qhFace*> > Clusters; // 481
	qhArray<qhVector3> DualVertices; // 506
	qhArray<qhVector3> ClusterPrimeNormals; // 506
	qhBounds3 DualBounds; // 507
	qhVector3 Centroid; // 508
	float FinalAngleCos; // 509
	qhConvex Dual; // 547
	qhArray<qhVector3> Vertices; // 555
	{
		const qhFace* Face; // 483
		{
			int BestIndex; // 485
			qhReal BestDot; // 486
			qhCluster& Cluster; // 501
			{
				int Index; // 488
				{
					const qhCluster& Cluster; // 490
					qhReal Dot; // 493
					qhDot(const qhVector3& V1,
						const qhVector3& V2);  // 493
					qhArray<const qhFace::operator[](
							int Offset);  // 493
				}
				qhArray<qhArray<const qhFace::Size(); // 488
			}
			cos(float __x); // 20
			qhCos(qhReal Rad); // 486
			qhArray<qhArray<const qhFace::operator[](
					int Offset);  // 501
			qhCopyConstruct<const qhFace*>(const qhFace ** Address,
							const qhFace* const& Other);  // 115
			qhArray<const qhFace::Capacity(); // 112
			{
				const qhFace ** Begin; // 69
				qhSwap<const qhFace*>(const qhFace  *& Lhs,
							const qhFace  *& Rhs);  // 156
				qhMove<const qhFace*>(const qhFace ** Address,
							const qhFace ** Begin,
							const qhFace ** End);  // 70
				qhArray<const qhFace::Size(); // 74
			}
			qhArray<const qhFace::Reserve(
				int Count);  // 112
			qhArray<const qhFace::PushBack(
				const qhFace* const& Other);  // 502
			qhArray<const qhFace::qhArray(); // 105
			qhConstruct<qhArray<const qhFace*> >(qhArray<const qhFace*>* Address); // 101
			qhArray<qhArray<const qhFace::Capacity(); // 98
			{
				qhArray<const qhFace*>* Begin; // 69
				qhArray<const qhFace::qhArray(); // 155
				qhSwap<const qhFace**>(const qhFace* *& Lhs,
							const qhFace* *& Rhs);  // 233
				qhSwap<const qhFace**>(const qhFace* *& Lhs,
							const qhFace* *& Rhs);  // 234
				qhSwap<const qhFace**>(const qhFace* *& Lhs,
							const qhFace* *& Rhs);  // 235
				qhArray<const qhFace::Swap(
					qhArray<const qhFace*>& Other);  // 243
				qhSwap<const qhFace*>(qhArray<const qhFace*>& Lhs,
							qhArray<const qhFace*>& Rhs);  // 156
				qhMove<qhArray<const qhFace*> >(qhArray<const qhFace*>* Address,
								qhArray<const qhFace*>* Begin,
								qhArray<const qhFace*>* End);  // 70
			}
			qhArray<qhArray<const qhFace::Reserve(
				int Count);  // 65
			qhArray<qhArray<const qhFace::Reserve(
				int Count);  // 98
			qhArray<qhArray<const qhFace::Expand(); // 501
		}
		qhList<qhFace>::End(); // 483
		qhList<qhFace>::Begin(); // 483
	}
	{
		int I; // 511
		{
			const qhCluster& Cluster; // 513
			qhReal Area; // 516
			qhVector3 Vertex; // 517
			qhVector3 PrimeNormal; // 531
			{
				int K; // 518
				{
					const qhFace* Face; // 520
					qhPlane Plane; // 521
					qhVector3::qhVector3(
							qhReal x,
							qhReal y,
							qhReal z);  // 194
					qhVector3::operator-(); // 522
					qhVector3::operator+=(
							const qhVector3& V);  // 526
					qhDot(const qhVector3& V1,
						const qhVector3& V2);  // 1046
					qhPlane::Translate(
							const qhVector3& Translation);  // 522
					qhVector3::qhVector3(
							qhReal x,
							qhReal y,
							qhReal z);  // 258
					operator/(const qhVector3& V,
							qhReal S);  // 526
					qhVector3::qhVector3(
							qhReal x,
							qhReal y,
							qhReal z);  // 244
					operator*(qhReal S,
							const qhVector3& V);  // 526
				}
				qhArray<const qhFace::Size(); // 518
			}
			{
				int K; // 532
				{
					float Check; // 534
				}
			}
			qhArray<qhVector3>::Capacity(); // 112
			qhCopyConstruct<qhVector3>(qhVector3* Address,
							const qhVector3& Other);  // 115
			{
				qhVector3* Begin; // 69
				qhSwap<qhVector3>(qhVector3& Lhs,
							qhVector3& Rhs);  // 156
				qhMove<qhVector3>(qhVector3* Address,
							qhVector3* Begin,
							qhVector3* End);  // 70
				qhArray<qhVector3>::Size(); // 74
			}
			qhArray<qhVector3>::Reserve(
				int Count);  // 65
			qhArray<qhVector3>::Reserve(
				int Count);  // 112
			qhArray<qhVector3>::PushBack(
				const qhVector3& Other);  // 541
			qhVector3::operator/=(
					qhReal S);  // 529
			qhDot(const qhVector3& V1,
				const qhVector3& V2);  // 446
			sqrt(float __x); // 446
			qhLength(const qhVector3& V); // 376
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 377
			qhNormalize(const qhVector3& V); // 531
			qhCopyConstruct<qhVector3>(qhVector3* Address,
							const qhVector3& Other);  // 115
			qhArray<qhVector3>::Capacity(); // 112
			{
				qhVector3* Begin; // 69
				qhSwap<qhVector3>(qhVector3& Lhs,
							qhVector3& Rhs);  // 156
				qhMove<qhVector3>(qhVector3* Address,
							qhVector3* Begin,
							qhVector3* End);  // 70
				qhArray<qhVector3>::Size(); // 74
			}
			qhArray<qhVector3>::Reserve(
				int Count);  // 65
			qhArray<qhVector3>::Reserve(
				int Count);  // 112
			qhArray<qhVector3>::PushBack(
				const qhVector3& Other);  // 542
		}
		qhArray<qhArray<const qhFace::Size(); // 511
	}
	{
		const qhFace* Face; // 556
		{
			const qhPlane& Plane; // 558
			qhVector3 Vertex; // 561
			qhArray<qhVector3>::Capacity(); // 112
			qhCopyConstruct<qhVector3>(qhVector3* Address,
							const qhVector3& Other);  // 115
			{
				qhVector3* Begin; // 69
				qhSwap<qhVector3>(qhVector3& Lhs,
							qhVector3& Rhs);  // 156
				qhMove<qhVector3>(qhVector3* Address,
							qhVector3* Begin,
							qhVector3* End);  // 70
				qhArray<qhVector3>::Size(); // 74
			}
			qhArray<qhVector3>::Reserve(
				int Count);  // 65
			qhArray<qhVector3>::Reserve(
				int Count);  // 112
			qhArray<qhVector3>::PushBack(
				const qhVector3& Other);  // 562
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 258
			operator/(const qhVector3& V,
					qhReal S);  // 561
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 230
			operator+(const qhVector3& V1,
					const qhVector3& V2);  // 561
		}
		qhList<qhFace>::Begin(); // 556
		qhList<qhFace>::End(); // 556
	}
	qhArray<qhArray<const qhFace::qhArray(); // 481
	qhArray<qhVector3>::qhArray(); // 506
	qhArray<qhVector3>::qhArray(); // 506
	qhList<qhVertex>::Empty(); // 14
	{
		int VertexCount; // 16
		{
			const qhVertex* Vertex; // 17
			qhVector3::operator+=(
					const qhVector3& V);  // 19
		}
		qhVector3::operator/=(
				qhReal S);  // 23
	}
	qhConvex::GetCentroid(); // 508
	qhArray<qhVector3>::Size(); // 548
	qhList<qhVertex>::qhList(); // 254
	qhArray<qhIteration>::qhArray(); // 254
	qhList<qhVertex>::qhList(); // 254
	qhList<qhVertex>::qhList(); // 62
	qhFace::qhFace(); // 50
	qhList<qhFace>::qhList(); // 254
	qhPool<qhVertex>::qhPool(); // 254
	qhPool<qhHalfEdge>::qhPool(); // 254
	qhPool<qhFace>::qhPool(); // 254
	qhConvex::qhConvex(); // 547
	qhArray<qhVector3>::qhArray(); // 555
	qhArray<qhVector3>::Size(); // 565
	qhArray<qhVector3>::Size(); // 25
	qhDestroy<qhVector3>(qhVector3* Address,
				int N);  // 25
	qhArray<qhVector3>::~qhArray(); // 661
	qhArray<qhVector3>::Size(); // 25
	qhDestroy<qhVector3>(qhVector3* Address,
				int N);  // 25
	qhArray<qhVector3>::~qhArray(); // 661
	qhArray<qhVector3>::Size(); // 25
	qhDestroy<qhVector3>(qhVector3* Address,
				int N);  // 25
	qhArray<qhVector3>::~qhArray(); // 661
	qhArray<qhArray<const qhFace::Size(); // 25
	{
		int i; // 142
		qhArray<const qhFace::Size(); // 25
		qhDestroy<const qhFace*>(const qhFace ** Address,
					int N);  // 25
		qhArray<const qhFace::~qhArray(); // 144
	}
	qhDestroy<qhArray<const qhFace*> >(qhArray<const qhFace*>* Address,
						int N);  // 25
	qhArray<qhArray<const qhFace::~qhArray(); // 661
	qhArray<qhVector3>::Size(); // 25
	qhDestroy<qhVector3>(qhVector3* Address,
				int N);  // 25
	qhArray<qhVector3>::~qhArray(); // 661
	qhArray<qhVector3>::Size(); // 25
	qhDestroy<qhVector3>(qhVector3* Address,
				int N);  // 25
	qhArray<qhVector3>::~qhArray(); // 661
	qhArray<qhArray<const qhFace::Size(); // 25
	{
		int i; // 142
		qhArray<const qhFace::Size(); // 25
		qhDestroy<const qhFace*>(const qhFace ** Address,
					int N);  // 25
		qhArray<const qhFace::~qhArray(); // 144
	}
	qhDestroy<qhArray<const qhFace*> >(qhArray<const qhFace*>* Address,
						int N);  // 25
	qhArray<qhArray<const qhFace::~qhArray(); // 661
} /* size: 0, variables: 8, inline expansions: 39 (0 bytes) */

// <061F6FE0> thirdparty/quickhull/qhConvex.cpp:665
// variable: 1
// function call: 1
void qhConvex::CreateVertex(const qhVector3& Position)
{
	qhVertex* Vertex; // 670
	qhPool<qhVertex>::Allocate(); // 670
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <061F2222> thirdparty/quickhull/qhConvex.cpp:665
// variable: 1
void qhConvex::CreateVertex(const qhVector3& Position)
{
	qhVertex* Vertex; // 670
} /* size: 0, variables: 1 */

// <061F704F> thirdparty/quickhull/qhConvex.cpp:686
// function call: 1
void qhConvex::DestroyVertex(qhVertex* Vertex)
{
	qhPool<qhVertex>::Free(
		qhVertex* Address);  // 694
} /* size: 0, inline expansions: 1 (0 bytes) */

// <061F21F8> thirdparty/quickhull/qhConvex.cpp:686
void qhConvex::DestroyVertex(qhVertex* Vertex)
{
} /* size: 0 */

// <061F1AA0> thirdparty/quickhull/qhConvex.cpp:699
// variables: 8
// function calls: 27
void qhConvex::CreateFace(qhVertex* Vertex1, qhVertex* Vertex2, qhVertex* Vertex3)
{
	qhFace* Face; // 708
	qhHalfEdge* Edge1; // 711
	qhHalfEdge* Edge2; // 712
	qhHalfEdge* Edge3; // 713
	qhPlane Plane; // 715
	qhReal Area; // 716
	qhPool<qhFace>::Allocate(); // 708
	qhList<qhVertex>::qhList(); // 62
	qhFace::qhFace(); // 709
	qhPool<qhHalfEdge>::Allocate(); // 711
	qhPool<qhHalfEdge>::Allocate(); // 712
	qhPool<qhHalfEdge>::Allocate(); // 713
	{
		qhVector3 Edge1; // 1018
		qhVector3 Edge2; // 1019
		qhVector3::qhVector3(
				qhReal x,
				qhReal y,
				qhReal z);  // 237
		operator-(const qhVector3& V1,
				const qhVector3& V2);  // 1018
		qhVector3::qhVector3(
				qhReal x,
				qhReal y,
				qhReal z);  // 237
		operator-(const qhVector3& V1,
				const qhVector3& V2);  // 1019
		qhVector3::qhVector3(
				qhReal x,
				qhReal y,
				qhReal z);  // 362
		qhCross(const qhVector3& V1,
			const qhVector3& V2);  // 1021
		qhDot(const qhVector3& V1,
			const qhVector3& V2);  // 1022
	}
	qhPlane::qhPlane(
		const qhVector3& Point1,
		const qhVector3& Point2,
		const qhVector3& Point3);  // 715
	qhDot(const qhVector3& V1,
		const qhVector3& V2);  // 446
	sqrt(float __x); // 446
	qhLength(const qhVector3& V); // 716
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 258
	operator/(const qhVector3& V,
			qhReal S);  // 727
	qhVector3::operator/=(
			qhReal S);  // 1038
	qhPlane::Normalize(); // 717
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 727
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 727
	qhDot(const qhVector3& V1,
		const qhVector3& V2);  // 1053
	qhPlane::Distance(
		const qhVector3& Point);  // 729
} /* size: 573, variables: 6, inline expansions: 20 (501 bytes) */

// <061F70D0> thirdparty/quickhull/qhConvex.cpp:755
// variables: 2
// function calls: 2
void qhConvex::DestroyFace(qhFace* Face)
{
	qhHalfEdge* Edge; // 760
	{
		qhHalfEdge* Nuke; // 765
		qhPool<qhHalfEdge>::Free(
			qhHalfEdge* Address);  // 768
	}
	qhPool<qhFace>::Free(
		qhFace* Address);  // 777
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <061F1A5A> thirdparty/quickhull/qhConvex.cpp:755
// variables: 2
void qhConvex::DestroyFace(qhFace* Face)
{
	qhHalfEdge* Edge; // 760
	{
		qhHalfEdge* Nuke; // 765
	}
} /* size: 0, variables: 1 */

// <061F17E6> thirdparty/quickhull/qhConvex.cpp:782
// variables: 9
// function calls: 3
void qhConvex::AllocateMemory(int VertexCount)
{
	int MaxVertexCount; // 785
	int MaxEdgeCount; // 786
	int MaxFaceCount; // 787
	{
		int i; // 54
		{
			int* Next; // 56
		}
	}
	qhPool<qhVertex>::Resize(
		int Size);  // 791
	{
		int i; // 54
		{
			int* Next; // 56
		}
	}
	qhPool<qhHalfEdge>::Resize(
		int Size);  // 792
	{
		int i; // 54
		{
			int* Next; // 56
		}
	}
	qhPool<qhFace>::Resize(
		int Size);  // 793
} /* size: 403, variables: 3, inline expansions: 3 (367 bytes) */

// <061F153F> thirdparty/quickhull/qhConvex.cpp:798
// variables: 7
// function calls: 11
void qhConvex::ComputeTolerance(qhArray<qhVector3>& Vertices)
{
	qhBounds3 Bounds; // 800
	qhVector3 Max; // 801
	qhReal MaxSum; // 803
	qhReal MaxCoord; // 804
	qhReal MaxDistance; // 805
	qhReal Tolerance; // 807
	{
		int i; // 84
		qhArray<qhVector3>::Size(); // 84
		qhBounds3::operator+=(
				const qhVector3& Point);  // 86
	}
	qhBuildBounds(qhArray<qhVector3>& Vertices); // 800
	qhAbs(qhReal X); // 392
	qhAbs(qhReal X); // 393
	qhAbs(qhReal X); // 394
	qhAbs(const qhVector3& V); // 801
	qhAbs(qhReal X); // 393
	qhAbs(qhReal X); // 392
	qhAbs(qhReal X); // 394
	qhAbs(const qhVector3& V); // 801
} /* size: 488, variables: 6, inline expansions: 9 (582 bytes) */

// <061EFBE9> thirdparty/quickhull/qhConvex.cpp:816
// variables: 34
// function calls: 84
void qhConvex::BuildInitialHull(int VertexCount, const qhVector3* VertexBase)
{
	int Index1; // 818
	int Index2; // 818
	int Index3; // 826
	int Index4; // 833
	qhVector3 V1; // 849
	qhVector3 V2; // 850
	qhVector3 V3; // 851
	qhVertex* Vertex1; // 859
	qhVertex* Vertex2; // 861
	qhVertex* Vertex3; // 863
	qhVertex* Vertex4; // 865
	qhFace* Face1; // 869
	qhFace* Face2; // 871
	qhFace* Face3; // 873
	qhFace* Face4; // 875
	{
		int i; // 893
		{
			const qhVector3& Point; // 900
			qhReal MaxDistance; // 902
			qhFace* MaxFace; // 903
			{
				qhFace* Face; // 905
				{
					qhReal Distance; // 907
					qhDot(const qhVector3& V1,
						const qhVector3& V2);  // 1053
					qhPlane::Distance(
						const qhVector3& Point);  // 907
				}
				qhList<qhFace>::End(); // 905
				qhList<qhFace>::Begin(); // 905
			}
			{
				qhVertex* Vertex; // 917
				qhPool<qhVertex>::Allocate(); // 670
				qhConvex::CreateVertex(
						const qhVector3& Position);  // 917
				qhInsert<qhVertex>(qhVertex* Node,
							qhVertex* Where);  // 111
				qhList<qhVertex>::PushBack(
					qhVertex* Node);  // 920
			}
		}
	}
	{
		int i; // 126
		{
			const qhVector3& V; // 128
		}
	}
	qhMaxElement(const qhVector3& V); // 172
	qhVector3::operator qhReal*(); // 173
	qhFindFarthestPointsAlongCardinalAxes(int& Index1,
						int& Index2,
						qhReal Tolerance,
						int VertexCount,
						const qhVector3* VertexBase);  // 819
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 237
	operator-(const qhVector3& V1,
			const qhVector3& V2);  // 187
	{
		int i; // 191
		{
			const qhVector3& P; // 198
			qhVector3 AP; // 200
			qhReal s; // 201
			qhVector3 Q; // 202
			qhReal Distance; // 204
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 237
			operator-(const qhVector3& V1,
					const qhVector3& V2);  // 200
			qhDot(const qhVector3& V1,
				const qhVector3& V2);  // 201
			qhDot(const qhVector3& V1,
				const qhVector3& V2);  // 201
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 244
			operator*(qhReal S,
					const qhVector3& V);  // 202
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 230
			operator+(const qhVector3& V1,
					const qhVector3& V2);  // 202
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 237
			operator-(const qhVector3& V1,
					const qhVector3& V2);  // 460
			qhDot(const qhVector3& V1,
				const qhVector3& V2);  // 446
			sqrt(float __x); // 446
			qhLength(const qhVector3& V); // 460
			qhDistance(const qhVector3& V1,
					const qhVector3& V2);  // 204
		}
	}
	qhFindFarthestPointFromLine(int Index1,
					int Index2,
					qhReal Tolerance,
					int VertexCount,
					const qhVector3* VertexBase);  // 826
	{
		qhVector3 Edge1; // 1018
		qhVector3 Edge2; // 1019
		qhVector3::qhVector3(
				qhReal x,
				qhReal y,
				qhReal z);  // 362
		qhCross(const qhVector3& V1,
			const qhVector3& V2);  // 1021
		qhVector3::qhVector3(
				qhReal x,
				qhReal y,
				qhReal z);  // 237
		operator-(const qhVector3& V1,
				const qhVector3& V2);  // 1018
		qhVector3::qhVector3(
				qhReal x,
				qhReal y,
				qhReal z);  // 237
		operator-(const qhVector3& V1,
				const qhVector3& V2);  // 1019
		qhDot(const qhVector3& V1,
			const qhVector3& V2);  // 1022
	}
	qhPlane::qhPlane(
		const qhVector3& Point1,
		const qhVector3& Point2,
		const qhVector3& Point3);  // 222
	qhDot(const qhVector3& V1,
		const qhVector3& V2);  // 446
	sqrt(float __x); // 446
	qhLength(const qhVector3& V); // 1037
	qhVector3::operator/=(
			qhReal S);  // 1038
	qhPlane::Normalize(); // 223
	{
		int i; // 228
		{
			qhReal Distance; // 235
			qhAbs(qhReal X); // 235
			qhDot(const qhVector3& V1,
				const qhVector3& V2);  // 1053
			qhPlane::Distance(
				const qhVector3& Point);  // 235
		}
	}
	qhFindFarthestPointFromPlane(int Index1,
					int Index2,
					int Index3,
					qhReal Tolerance,
					int VertexCount,
					const qhVector3* VertexBase);  // 833
	qhVector3::operator/=(
			qhReal S);  // 846
	qhVector3::operator+=(
			const qhVector3& V);  // 842
	qhVector3::operator+=(
			const qhVector3& V);  // 843
	qhVector3::operator+=(
			const qhVector3& V);  // 844
	qhVector3::operator+=(
			const qhVector3& V);  // 845
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 237
	operator-(const qhVector3& V1,
			const qhVector3& V2);  // 849
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 237
	operator-(const qhVector3& V1,
			const qhVector3& V2);  // 851
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 237
	operator-(const qhVector3& V1,
			const qhVector3& V2);  // 850
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 362
	qhCross(const qhVector3& V1,
		const qhVector3& V2);  // 474
	qhDot(const qhVector3& V1,
		const qhVector3& V2);  // 474
	qhDet(const qhVector3& V1,
		const qhVector3& V2,
		const qhVector3& V3);  // 853
	qhPool<qhVertex>::Allocate(); // 670
	qhConvex::CreateVertex(
			const qhVector3& Position);  // 859
	qhInsert<qhVertex>(qhVertex* Node,
				qhVertex* Where);  // 111
	qhList<qhVertex>::PushBack(
		qhVertex* Node);  // 860
	qhPool<qhVertex>::Allocate(); // 670
	qhConvex::CreateVertex(
			const qhVector3& Position);  // 861
	qhInsert<qhVertex>(qhVertex* Node,
				qhVertex* Where);  // 111
	qhList<qhVertex>::PushBack(
		qhVertex* Node);  // 862
	qhPool<qhVertex>::Allocate(); // 670
	qhConvex::CreateVertex(
			const qhVector3& Position);  // 863
	qhInsert<qhVertex>(qhVertex* Node,
				qhVertex* Where);  // 111
	qhList<qhVertex>::PushBack(
		qhVertex* Node);  // 864
	qhPool<qhVertex>::Allocate(); // 670
	qhConvex::CreateVertex(
			const qhVector3& Position);  // 865
	qhInsert<qhVertex>(qhVertex* Node,
				qhVertex* Where);  // 111
	qhList<qhVertex>::PushBack(
		qhVertex* Node);  // 866
	qhInsert<qhFace>(qhFace* Node,
			qhFace* Where);  // 111
	qhList<qhFace>::PushBack(
		qhFace* Node);  // 870
	qhInsert<qhFace>(qhFace* Node,
			qhFace* Where);  // 111
	qhList<qhFace>::PushBack(
		qhFace* Node);  // 872
	qhInsert<qhFace>(qhFace* Node,
			qhFace* Where);  // 111
	qhList<qhFace>::PushBack(
		qhFace* Node);  // 874
	qhInsert<qhFace>(qhFace* Node,
			qhFace* Where);  // 111
	qhList<qhFace>::PushBack(
		qhFace* Node);  // 876
} /* size: 2784, variables: 15, inline expansions: 52 (2747 bytes) */

// <061EFA43> thirdparty/quickhull/qhConvex.cpp:929
// variables: 5
// function calls: 5
void qhConvex::NextConflictVertex()
{
	qhVertex* MaxVertex; // 931
	qhReal MaxDistance; // 932
	{
		qhFace* Face; // 934
		{
			qhVertex* Vertex; // 938
			{
				qhReal Distance; // 941
				qhDot(const qhVector3& V1,
					const qhVector3& V2);  // 1053
				qhPlane::Distance(
					const qhVector3& Point);  // 941
			}
		}
		qhList<qhFace>::Begin(); // 934
		qhList<qhFace>::End(); // 934
		qhList<qhVertex>::Empty(); // 936
	}
} /* size: 209, variables: 2 */

// <061EF65B> thirdparty/quickhull/qhConvex.cpp:957
// variables: 3
// function calls: 12
void qhConvex::AddVertexToHull(qhVertex* Vertex)
{
	qhFace* Face; // 960
	qhArray<qhHalfEdge*> Horizon; // 966
	qhArray<qhFace*> Cone; // 971
	qhRemove<qhVertex>(qhVertex* Node); // 138
	qhList<qhVertex>::Remove(
		qhVertex* Node);  // 962
	qhInsert<qhVertex>(qhVertex* Node,
				qhVertex* Where);  // 111
	qhList<qhVertex>::PushBack(
		qhVertex* Node);  // 963
	qhArray<qhHalfEdge::qhArray(); // 966
	qhArray<qhFace::qhArray(); // 971
	qhArray<qhFace::Size(); // 25
	qhDestroy<qhFace*>(qhFace** Address,
				int N);  // 25
	qhArray<qhFace::~qhArray(); // 989
	qhArray<qhHalfEdge::Size(); // 25
	qhDestroy<qhHalfEdge*>(qhHalfEdge** Address,
				int N);  // 25
	qhArray<qhHalfEdge::~qhArray(); // 989
} /* size: 253, variables: 3, inline expansions: 12 (145 bytes) */

// <061EF3FC> thirdparty/quickhull/qhConvex.cpp:993
// variables: 4
// function calls: 8
void qhConvex::CleanHull()
{
	qhVertex* Vertex; // 1015
	{
		qhFace* Face; // 996
		{
			qhHalfEdge* Edge; // 998
		}
		qhList<qhFace>::Begin(); // 996
		qhList<qhFace>::End(); // 996
	}
	{
		qhVertex* Next; // 1018
		qhPool<qhVertex>::Free(
			qhVertex* Address);  // 694
		qhConvex::DestroyVertex(
				qhVertex* Vertex);  // 1022
		qhRemove<qhVertex>(qhVertex* Node); // 138
		qhList<qhVertex>::Remove(
			qhVertex* Node);  // 1021
	}
	qhList<qhVertex>::Begin(); // 1015
	qhList<qhVertex>::End(); // 1016
} /* size: 190, variables: 1, inline expansions: 2 (8 bytes) */

// <061EF1B9> thirdparty/quickhull/qhConvex.cpp:1031
// variables: 2
// function calls: 8
void qhConvex::ShiftHull(const qhVector3& Translation)
{
	{
		qhVertex* Vertex; // 1034
		qhList<qhVertex>::Begin(); // 1034
		qhList<qhVertex>::End(); // 1034
		qhVector3::operator+=(
				const qhVector3& V);  // 1036
	}
	{
		qhFace* Face; // 1040
		qhList<qhFace>::Begin(); // 1040
		qhList<qhFace>::End(); // 1040
		qhDot(const qhVector3& V1,
			const qhVector3& V2);  // 1046
		qhPlane::Translate(
				const qhVector3& Translation);  // 1042
	}
	qhVector3::operator+=(
			const qhVector3& V);  // 1046
} /* size: 293, inline expansions: 1 (44 bytes) */

// <061EEFE8> thirdparty/quickhull/qhConvex.cpp:1051
// variables: 2
// function calls: 6
void qhConvex::ScaleHull(qhReal Scale)
{
	{
		qhVertex* Vertex; // 1054
		qhList<qhVertex>::Begin(); // 1054
		qhList<qhVertex>::End(); // 1054
		qhVector3::operator*=(
				qhReal S);  // 1056
	}
	{
		qhFace* Face; // 1060
		qhList<qhFace>::Begin(); // 1060
		qhList<qhFace>::End(); // 1060
	}
	qhVector3::operator*=(
			qhReal S);  // 1066
} /* size: 0, inline expansions: 1 (0 bytes) */

// <061EEB52> thirdparty/quickhull/qhConvex.cpp:1071
// variables: 5
// function calls: 15
void qhConvex::BuildHorizon(qhArray<qhHalfEdge*>& Horizon, qhVertex* Apex, qhFace* Seed, qhHalfEdge* Edge1)
{
	qhVertex* Vertex; // 1076
	qhHalfEdge* Edge; // 1089
	{
		qhVertex* Orphan; // 1079
		qhRemove<qhVertex>(qhVertex* Node); // 138
		qhList<qhVertex>::Remove(
			qhVertex* Node);  // 1083
		qhInsert<qhVertex>(qhVertex* Node,
					qhVertex* Where);  // 111
		qhList<qhVertex>::PushBack(
			qhVertex* Node);  // 1085
	}
	{
		qhHalfEdge* Twin; // 1102
		qhDot(const qhVector3& V1,
			const qhVector3& V2);  // 1053
		qhPlane::Distance(
			const qhVector3& Point);  // 1105
		qhCopyConstruct<qhHalfEdge*>(qhHalfEdge** Address,
						qhHalfEdge* const& Other);  // 115
		qhArray<qhHalfEdge::Capacity(); // 112
		{
			qhHalfEdge** Begin; // 69
			qhSwap<qhHalfEdge*>(qhHalfEdge *& Lhs,
						qhHalfEdge *& Rhs);  // 156
			qhMove<qhHalfEdge*>(qhHalfEdge** Address,
						qhHalfEdge** Begin,
						qhHalfEdge** End);  // 70
			qhArray<qhHalfEdge::Size(); // 74
		}
		qhArray<qhHalfEdge::Reserve(
			int Count);  // 112
		qhArray<qhHalfEdge::PushBack(
			qhHalfEdge* const& Other);  // 1111
	}
	qhList<qhVertex>::End(); // 1077
	qhList<qhVertex>::Begin(); // 1076
} /* size: 464, variables: 2, inline expansions: 2 (8 bytes) */

// <061EE716> thirdparty/quickhull/qhConvex.cpp:1122
// variables: 7
// function calls: 12
void qhConvex::BuildCone(qhArray<qhFace*>& Cone, const qhArray<qhHalfEdge*>& Horizon, qhVertex* Apex)
{
	qhFace* Face1; // 1138
	{
		int i; // 1125
		{
			qhHalfEdge* Edge; // 1127
			qhFace* Face; // 1130
			qhCopyConstruct<qhFace*>(qhFace** Address,
						qhFace* const& Other);  // 115
			qhArray<qhFace::Capacity(); // 112
			{
				qhFace** Begin; // 69
				qhSwap<qhFace*>(qhFace *& Lhs,
						qhFace *& Rhs);  // 156
				qhMove<qhFace*>(qhFace** Address,
						qhFace** Begin,
						qhFace** End);  // 70
				qhArray<qhFace::Size(); // 74
			}
			qhArray<qhFace::Reserve(
				int Count);  // 112
			qhArray<qhFace::PushBack(
				qhFace* const& Other);  // 1131
			qhArray<qhHalfEdge::operator[](
					int Offset);  // 1127
		}
		qhArray<qhHalfEdge::Size(); // 1125
	}
	{
		int i; // 1139
		{
			qhFace* Face2; // 1141
			qhArray<qhFace::operator[](
					int Offset);  // 1141
		}
		qhArray<qhFace::Size(); // 1139
	}
	qhArray<qhFace::Back(); // 1138
} /* size: 444, variables: 1, inline expansions: 1 (4 bytes) */

// <061EE3E6> thirdparty/quickhull/qhConvex.cpp:1149
// variables: 11
// function calls: 6
void qhConvex::MergeFaces(qhArray<qhFace*>& Cone)
{
	{
		int i; // 1152
		{
			qhFace* Face; // 1154
			{
				qhReal BestArea; // 1159
				qhHalfEdge* BestEdge; // 1160
				qhHalfEdge* Edge; // 1162
				{
					qhHalfEdge* Twin; // 1166
					qhReal Area; // 1168
				}
			}
			qhArray<qhFace::operator[](
					int Offset);  // 1154
		}
		qhArray<qhFace::Size(); // 1152
	}
	{
		int i; // 1190
		{
			qhFace* Face; // 1192
			qhArray<qhFace::operator[](
					int Offset);  // 1192
		}
		qhArray<qhFace::Size(); // 1190
	}
	{
		int i; // 1201
		{
			qhFace* Face; // 1203
			qhArray<qhFace::operator[](
					int Offset);  // 1203
		}
		qhArray<qhFace::Size(); // 1201
	}
} /* size: 386 */

// <061EE0C7> thirdparty/quickhull/qhConvex.cpp:1214
// variables: 6
// function calls: 11
void qhConvex::ResolveVertices(qhArray<qhFace*>& Cone)
{
	qhVertex* Vertex; // 1217
	{
		qhVertex* Next; // 1220
		qhReal MaxDistance; // 1223
		qhFace* MaxFace; // 1224
		{
			int i; // 1226
			{
				qhReal Distance; // 1231
				qhDot(const qhVector3& V1,
					const qhVector3& V2);  // 1053
				qhPlane::Distance(
					const qhVector3& Point);  // 1231
			}
			qhArray<qhFace::Size(); // 1226
		}
		qhPool<qhVertex>::Free(
			qhVertex* Address);  // 694
		qhConvex::DestroyVertex(
				qhVertex* Vertex);  // 1250
		qhRemove<qhVertex>(qhVertex* Node); // 138
		qhList<qhVertex>::Remove(
			qhVertex* Node);  // 1221
		qhInsert<qhVertex>(qhVertex* Node,
					qhVertex* Where);  // 111
		qhList<qhVertex>::PushBack(
			qhVertex* Node);  // 1243
	}
	qhList<qhVertex>::Begin(); // 1217
	qhList<qhVertex>::End(); // 1218
} /* size: 280, variables: 1, inline expansions: 2 (8 bytes) */

// <061EDCFA> thirdparty/quickhull/qhConvex.cpp:1262
// variables: 5
// function calls: 14
void qhConvex::ResolveFaces(qhArray<qhFace*>& Cone)
{
	qhFace* Face; // 1265
	{
		qhFace* Nuke; // 1268
		{
			qhHalfEdge* Nuke; // 765
			qhPool<qhHalfEdge>::Free(
				qhHalfEdge* Address);  // 768
		}
		qhPool<qhFace>::Free(
			qhFace* Address);  // 777
		qhConvex::DestroyFace(
				qhFace* Face);  // 1276
		qhRemove<qhFace>(qhFace* Node); // 138
		qhList<qhFace>::Remove(
			qhFace* Node);  // 1275
	}
	{
		int i; // 1281
		qhArray<qhFace::Size(); // 1281
		qhPool<qhFace>::Free(
			qhFace* Address);  // 777
		{
			qhHalfEdge* Nuke; // 765
			qhPool<qhHalfEdge>::Free(
				qhHalfEdge* Address);  // 768
		}
		qhConvex::DestroyFace(
				qhFace* Face);  // 1285
		qhInsert<qhFace>(qhFace* Node,
				qhFace* Where);  // 111
		qhList<qhFace>::PushBack(
			qhFace* Node);  // 1289
		qhArray<qhFace::operator[](
				int Offset);  // 1283
	}
	qhList<qhFace>::Begin(); // 1265
	qhList<qhFace>::End(); // 1266
} /* size: 470, variables: 1, inline expansions: 2 (11 bytes) */

// <061EDBED> thirdparty/quickhull/qhConvex.cpp:1295
// variables: 3
void qhConvex::MergeConcave(qhFace* Face)
{
	bool Concave; // 1297
	qhHalfEdge* Edge; // 1299
	{
		qhHalfEdge* Twin; // 1303
	}
} /* size: 223, variables: 2 */

// <061EDB25> thirdparty/quickhull/qhConvex.cpp:1348
// variables: 2
void qhConvex::MergeCoplanar(qhFace* Face)
{
	qhHalfEdge* Edge; // 1350
	{
		qhHalfEdge* Twin; // 1354
	}
} /* size: 123, variables: 1 */

// <061ED673> thirdparty/quickhull/qhConvex.cpp:1371
// variables: 11
// function calls: 11
void qhConvex::ConnectFaces(qhHalfEdge* Edge)
{
	qhFace* Face; // 1374
	qhHalfEdge* Twin; // 1378
	qhHalfEdge* EdgePrev; // 1381
	qhHalfEdge* EdgeNext; // 1382
	qhHalfEdge* TwinPrev; // 1383
	qhHalfEdge* TwinNext; // 1384
	qhArray<qhFace*> MergedFaces; // 1410
	{
		qhHalfEdge* Absorbed; // 1415
	}
	{
		qhFace** Begin; // 69
	}
	qhArray<qhFace::Reserve(
		int Count);  // 112
	qhCopyConstruct<qhFace*>(qhFace** Address,
				qhFace* const& Other);  // 115
	qhArray<qhFace::PushBack(
		qhFace* const& Other);  // 1411
	qhArray<qhFace::qhArray(); // 1410
	{
		qhHalfEdge* Nuke; // 1515
		qhPool<qhHalfEdge>::Free(
			qhHalfEdge* Address);  // 1519
	}
	qhConvex::DestroyEdges(
			qhHalfEdge* Begin,
			qhHalfEdge* End);  // 1421
	{
		qhHalfEdge* Nuke; // 1515
		qhPool<qhHalfEdge>::Free(
			qhHalfEdge* Address);  // 1519
	}
	qhConvex::DestroyEdges(
			qhHalfEdge* Begin,
			qhHalfEdge* End);  // 1422
	qhArray<qhFace::Size(); // 25
	qhDestroy<qhFace*>(qhFace** Address,
				int N);  // 25
	qhArray<qhFace::~qhArray(); // 1434
} /* size: 548, variables: 7, inline expansions: 9 (304 bytes) */

// <061F71B8> thirdparty/quickhull/qhConvex.cpp:1438
// variables: 3
// function calls: 14
void qhConvex::ConnectEdges(qhHalfEdge* Prev, qhHalfEdge* Next, qhArray<qhFace*>& MergedFaces)
{
	{
		qhHalfEdge* Twin; // 1455
		{
			qhFace* OpposingFace; // 1464
			qhCopyConstruct<qhFace*>(qhFace** Address,
						qhFace* const& Other);  // 115
			qhArray<qhFace::Capacity(); // 112
			{
				qhFace** Begin; // 69
				qhSwap<qhFace*>(qhFace *& Lhs,
						qhFace *& Rhs);  // 156
				qhMove<qhFace*>(qhFace** Address,
						qhFace** Begin,
						qhFace** End);  // 70
				qhArray<qhFace::Size(); // 74
			}
			qhArray<qhFace::Reserve(
				int Count);  // 112
			qhArray<qhFace::PushBack(
				qhFace* const& Other);  // 1466
		}
		qhPool<qhHalfEdge>::Free(
			qhHalfEdge* Address);  // 1482
		qhRemove<qhVertex>(qhVertex* Node); // 138
		qhList<qhVertex>::Remove(
			qhVertex* Node);  // 1492
		qhPool<qhVertex>::Free(
			qhVertex* Address);  // 694
		qhConvex::DestroyVertex(
				qhVertex* Vertex);  // 1493
		qhPool<qhHalfEdge>::Free(
			qhHalfEdge* Address);  // 1495
	}
	qhConvex::ConnectEdges(
			qhHalfEdge* Prev,
			qhHalfEdge* Next,
			qhArray<qhFace*>& MergedFaces);  // 1438
} /* size: 656, inline expansions: 1 (589 bytes) */

// <061ED611> thirdparty/quickhull/qhConvex.cpp:1438
// variables: 2
void qhConvex::ConnectEdges(qhHalfEdge* Prev, qhHalfEdge* Next, qhArray<qhFace*>& MergedFaces)
{
	{
		qhHalfEdge* Twin; // 1455
		{
			qhFace* OpposingFace; // 1464
		}
	}
} /* size: 0 */

// <061F75F6> thirdparty/quickhull/qhConvex.cpp:1510
// variables: 2
// function call: 1
void qhConvex::DestroyEdges(qhHalfEdge* Begin, qhHalfEdge* End)
{
	qhHalfEdge* Edge; // 1512
	{
		qhHalfEdge* Nuke; // 1515
		qhPool<qhHalfEdge>::Free(
			qhHalfEdge* Address);  // 1519
	}
} /* size: 0, variables: 1 */

// <061ED5BE> thirdparty/quickhull/qhConvex.cpp:1510
// variables: 2
void qhConvex::DestroyEdges(qhHalfEdge* Begin, qhHalfEdge* End)
{
	qhHalfEdge* Edge; // 1512
	{
		qhHalfEdge* Nuke; // 1515
	}
} /* size: 0, variables: 1 */

// <061ED28D> thirdparty/quickhull/qhConvex.cpp:1525
// variables: 4
// function calls: 12
void qhConvex::AbsorbFaces(qhFace* Face, qhArray<qhFace*>& MergedFaces)
{
	{
		int i; // 1527
		{
			qhList<qhVertex>& ConflictList; // 1530
			qhVertex* Vertex; // 1532
			{
				qhVertex* Next; // 1535
				qhRemove<qhVertex>(qhVertex* Node); // 138
				qhList<qhVertex>::Remove(
					qhVertex* Node);  // 1536
				qhInsert<qhVertex>(qhVertex* Node,
							qhVertex* Where);  // 111
				qhList<qhVertex>::PushBack(
					qhVertex* Node);  // 1540
				qhDot(const qhVector3& V1,
					const qhVector3& V2);  // 1053
				qhPlane::Distance(
					const qhVector3& Point);  // 1538
				qhInsert<qhVertex>(qhVertex* Node,
							qhVertex* Where);  // 111
				qhList<qhVertex>::PushBack(
					qhVertex* Node);  // 1545
			}
			qhArray<qhFace::operator[](
					int Offset);  // 1530
			qhList<qhVertex>::Begin(); // 1532
			qhList<qhVertex>::End(); // 1533
		}
		qhArray<qhFace::Size(); // 1527
	}
} /* size: 259 */

// <061EC7AD> thirdparty/quickhull/qhConvex.cpp:1557
// variables: 11
// function calls: 42
void qhConvex::GetMesh(qhMesh& Mesh)
{
	{
		const qhVertex* Vertex; // 1565
		qhList<qhVertex>::End(); // 1565
		qhList<qhVertex>::Begin(); // 1565
		qhArray<qhVector3>::Capacity(); // 112
		qhCopyConstruct<qhVector3>(qhVector3* Address,
						const qhVector3& Other);  // 115
		{
			qhVector3* Begin; // 69
			qhSwap<qhVector3>(qhVector3& Lhs,
						qhVector3& Rhs);  // 156
			qhMove<qhVector3>(qhVector3* Address,
						qhVector3* Begin,
						qhVector3* End);  // 70
			qhArray<qhVector3>::Size(); // 74
		}
		qhArray<qhVector3>::Reserve(
			int Count);  // 65
		qhArray<qhVector3>::Reserve(
			int Count);  // 112
		qhArray<qhVector3>::PushBack(
			const qhVector3& Other);  // 1567
	}
	{
		const qhFace* Face; // 1571
		{
			int IndexStart; // 1575
			const qhHalfEdge* Edge; // 1576
			int IndexEnd; // 1587
			{
				int Index; // 1580
				{
					const qhVertex* First; // 147
					qhList<qhVertex>::Begin(); // 147
				}
				qhList<qhVertex>::IndexOf(
					const qhVertex* Node);  // 1580
				qhCopyConstruct<int>(int* Address,
							const int& Other);  // 115
				qhArray<int>::Capacity(); // 112
				{
					int* Begin; // 69
					qhSwap<int>(int& Lhs,
							int& Rhs);  // 156
					qhMove<int>(int* Address,
							int* Begin,
							int* End);  // 70
					qhArray<int>::Size(); // 74
				}
				qhArray<int>::Reserve(
					int Count);  // 112
				qhArray<int>::PushBack(
					const int& Other);  // 1581
			}
			qhCopyConstruct<qhVector3>(qhVector3* Address,
							const qhVector3& Other);  // 115
			qhArray<qhVector3>::Capacity(); // 112
			{
				qhVector3* Begin; // 69
				qhSwap<qhVector3>(qhVector3& Lhs,
							qhVector3& Rhs);  // 156
				qhMove<qhVector3>(qhVector3* Address,
							qhVector3* Begin,
							qhVector3* End);  // 70
				qhArray<qhVector3>::Size(); // 74
			}
			qhArray<qhVector3>::Reserve(
				int Count);  // 65
			qhArray<qhVector3>::Reserve(
				int Count);  // 112
			qhArray<qhVector3>::PushBack(
				const qhVector3& Other);  // 1573
			qhArray<int>::Size(); // 1575
			qhArray<int>::Size(); // 1587
			qhCopyConstruct<int>(int* Address,
						const int& Other);  // 115
			qhArray<int>::Capacity(); // 112
			{
				int* Begin; // 69
				qhSwap<int>(int& Lhs,
						int& Rhs);  // 156
				qhMove<int>(int* Address,
						int* Begin,
						int* End);  // 70
				qhArray<int>::Size(); // 74
			}
			qhArray<int>::Reserve(
				int Count);  // 112
			qhArray<int>::PushBack(
				const int& Other);  // 1588
		}
		qhList<qhFace>::Begin(); // 1571
		qhList<qhFace>::End(); // 1571
	}
	qhArray<qhVector3>::Clear(); // 1559
	qhArray<qhVector3>::Clear(); // 1560
	qhArray<int>::Clear(); // 1561
	qhArray<int>::Clear(); // 1562
} /* size: 0, inline expansions: 4 (0 bytes) */

// <061EC0CF> thirdparty/quickhull/qhConvex.cpp:1594
// variables: 19
// function calls: 22
void qhConvex::ComputeMass(qhReal Density)
{
	qhReal Volume; // 1597
	qhVector3 Center; // 1598
	qhReal XX; // 1600
	qhReal XY; // 1600
	qhReal YY; // 1601
	qhReal XZ; // 1601
	qhReal ZZ; // 1602
	qhReal YZ; // 1602
	qhMatrix3 Inertia; // 1645
	qhMass Mass; // 1650
	{
		const qhFace* Face; // 1605
		{
			const qhHalfEdge* Edge1; // 1607
			const qhHalfEdge* Edge2; // 1608
			const qhHalfEdge* Edge3; // 1609
			qhVector3 V1; // 1612
			{
				qhVector3 V2; // 1616
				qhVector3 V3; // 1617
				qhReal Det; // 1620
				qhVector3 v4; // 1626
				qhVector3::qhVector3(
						qhReal x,
						qhReal y,
						qhReal z);  // 230
				operator+(const qhVector3& V1,
						const qhVector3& V2);  // 1626
				qhVector3::qhVector3(
						qhReal x,
						qhReal y,
						qhReal z);  // 362
				qhCross(const qhVector3& V1,
					const qhVector3& V2);  // 474
				qhDot(const qhVector3& V1,
					const qhVector3& V2);  // 474
				qhDet(const qhVector3& V1,
					const qhVector3& V2,
					const qhVector3& V3);  // 1620
				qhVector3::qhVector3(
						qhReal x,
						qhReal y,
						qhReal z);  // 230
				operator+(const qhVector3& V1,
						const qhVector3& V2);  // 1626
				qhVector3::qhVector3(
						qhReal x,
						qhReal y,
						qhReal z);  // 244
				operator*(qhReal S,
						const qhVector3& V);  // 1627
				qhVector3::operator+=(
						const qhVector3& V);  // 1627
			}
		}
		qhList<qhFace>::End(); // 1605
		qhList<qhFace>::Begin(); // 1605
	}
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 258
	operator/(const qhVector3& V,
			qhReal S);  // 1652
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 244
	operator*(qhReal S,
			const qhVector3& V);  // 625
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 244
	operator*(qhReal S,
			const qhVector3& V);  // 627
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 244
	operator*(qhReal S,
			const qhVector3& V);  // 626
	operator*(qhReal F,
			const qhMatrix3& M);  // 1653
} /* size: 0, variables: 10, inline expansions: 9 (0 bytes) */

// <061EB6C7> thirdparty/quickhull/qhConvex.cpp:1660
// variables: 10
// function calls: 37
void qhConvex::AddIteration(qhVertex* Apex, const qhArray<qhHalfEdge*>& Horizon, const qhList<qhFace>& FaceList)
{
	qhIteration& Iteration; // 1662
	{
		int i; // 1668
		{
			const qhHalfEdge* Edge; // 1670
			qhArray<qhVector3>::Capacity(); // 112
			qhCopyConstruct<qhVector3>(qhVector3* Address,
							const qhVector3& Other);  // 115
			{
				qhVector3* Begin; // 69
				qhSwap<qhVector3>(qhVector3& Lhs,
							qhVector3& Rhs);  // 156
				qhMove<qhVector3>(qhVector3* Address,
							qhVector3* Begin,
							qhVector3* End);  // 70
				qhArray<qhVector3>::Size(); // 74
			}
			qhArray<qhVector3>::Reserve(
				int Count);  // 65
			qhArray<qhVector3>::Reserve(
				int Count);  // 112
			qhArray<qhVector3>::PushBack(
				const qhVector3& Other);  // 1671
			qhArray<qhHalfEdge::operator[](
					int Offset);  // 1670
		}
		qhArray<qhHalfEdge::Size(); // 1668
	}
	{
		const qhFace* Face; // 1675
		{
			int VertexCount; // 1677
			const qhHalfEdge* Edge; // 1678
			qhCopyConstruct<qhVector3>(qhVector3* Address,
							const qhVector3& Other);  // 115
			qhArray<qhVector3>::Capacity(); // 112
			{
				qhVector3* Begin; // 69
				qhSwap<qhVector3>(qhVector3& Lhs,
							qhVector3& Rhs);  // 156
				qhMove<qhVector3>(qhVector3* Address,
							qhVector3* Begin,
							qhVector3* End);  // 70
				qhArray<qhVector3>::Size(); // 74
			}
			qhArray<qhVector3>::Reserve(
				int Count);  // 65
			qhArray<qhVector3>::Reserve(
				int Count);  // 112
			qhArray<qhVector3>::PushBack(
				const qhVector3& Other);  // 1683
			qhCopyConstruct<int>(int* Address,
						const int& Other);  // 115
			qhArray<int>::Capacity(); // 112
			{
				int* Begin; // 69
				qhSwap<int>(int& Lhs,
						int& Rhs);  // 156
				qhMove<int>(int* Address,
						int* Begin,
						int* End);  // 70
				qhArray<int>::Size(); // 74
			}
			qhArray<int>::Reserve(
				int Count);  // 112
			qhArray<int>::PushBack(
				const int& Other);  // 1688
		}
		qhList<qhFace>::Begin(); // 1675
		qhList<qhFace>::End(); // 1675
	}
	qhArray<qhVector3>::qhArray(); // 37
	qhArray<qhVector3>::qhArray(); // 37
	qhArray<int>::qhArray(); // 37
	qhIteration::qhIteration(); // 105
	qhConstruct<qhIteration>(qhIteration* Address); // 101
	qhArray<qhIteration>::Capacity(); // 98
	{
		qhIteration* Begin; // 69
		qhArray<qhIteration>::Size(); // 74
	}
	qhArray<qhIteration>::Reserve(
		int Count);  // 65
	qhArray<qhIteration>::Reserve(
		int Count);  // 98
	qhArray<qhIteration>::Expand(); // 1662
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <061EB68C> thirdparty/quickhull/qhConvex.cpp:1694
const char* qhErrorCodeAsString(qhErrorCode nErrorCode)
{
} /* size: 0 */

