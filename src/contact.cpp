
//
// src/contact.cpp
//
//	referenced by: libengine2.so
//
//	functions: 6
//	struct: 1
//

// <06B39354> src/contact.cpp:57
// variables: 2
b3Contact* b3GetContactFullId(b3World* world, b3ContactId contactId)
{
	int id; // 59
	b3Contact* contact; // 60
} /* size: 0, variables: 2 */

// <06B35B1C> src/contact.cpp:101
// member variables: 2
// struct size: 2
struct b3ContactRegister {
	bool supported; /* 0 1 */
	bool primary; /* 1 1 */
};

// <06B390B7> src/contact.cpp:149
void b3AddType(b3ShapeType type1, b3ShapeType type2)
{
} /* size: 0 */

// <06B38E1E> src/contact.cpp:164
// function calls: 11
void b3InitializeContactRegisters(void)
{
	b3AddType(b3ShapeType type1,
			b3ShapeType type2);  // 168
	b3AddType(b3ShapeType type1,
			b3ShapeType type2);  // 174
	b3AddType(b3ShapeType type1,
			b3ShapeType type2);  // 177
	b3AddType(b3ShapeType type1,
			b3ShapeType type2);  // 178
	b3AddType(b3ShapeType type1,
			b3ShapeType type2);  // 180
	b3AddType(b3ShapeType type1,
			b3ShapeType type2);  // 171
	b3AddType(b3ShapeType type1,
			b3ShapeType type2);  // 170
	b3AddType(b3ShapeType type1,
			b3ShapeType type2);  // 172
	b3AddType(b3ShapeType type1,
			b3ShapeType type2);  // 173
	b3AddType(b3ShapeType type1,
			b3ShapeType type2);  // 179
	b3AddType(b3ShapeType type1,
			b3ShapeType type2);  // 182
} /* size: 129, inline expansions: 11 (108 bytes) */

// <06B3775F> src/contact.cpp:524
// variables: 3
bool b3ComputeManifold(b3World* world, int workerIndex, b3ContactSim* sim, const b3Shape* shapeA, b3Transform xfA, const b3Shape* shapeB, b3Transform xfB)
{
	b3ShapeType typeA; // 527
	b3ShapeType typeB; // 528
	b3Manifold manifold; // 530
} /* size: 0, variables: 3 */

// <06B36C4B> src/contact.cpp:591
// variables: 28
// function calls: 20
bool b3UpdateConvexContact(b3World* world, int workerIndex, b3ContactSim* contactSim, b3Shape* shapeA, b3Vec3 centerOffsetA, b3Transform xfA, b3Shape* shapeB, b3Vec3 centerOffsetB, b3Transform xfB, bool flip)
{
	b3Manifold oldManifold; // 596
	bool touching; // 607
	int pointCount; // 725
	{
		const b3SurfaceMaterial* materialA; // 624
		const b3SurfaceMaterial* materialB; // 625
		b3Vec3 tangentVelocityA; // 666
		b3Vec3 tangentVelocityB; // 667
		{
			int pointCount; // 616
			{
				int i; // 617
				{
					b3ManifoldPoint* mp; // 619
					{
						b3Vec3 B3_SWAP_TEMP; // 620
					}
				}
			}
			b3Neg(b3Vec3 a); // 614
		}
		{
			b3ShapeType typeA; // 635
			b3ShapeType typeB; // 636
			float radiusA; // 638
			float radiusB; // 648
			float maxRadius; // 658
		}
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
				b3Vec3 v);  // 666
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
				b3Vec3 v);  // 667
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 668
	}
	{
		b3ShapeId shapeIdA; // 687
		b3ShapeId shapeIdB; // 688
		b3Manifold* manifold; // 690
		b3Vec3 bestPoint; // 691
		float bestSeparation; // 692
		{
			int i; // 695
			{
				float separation; // 697
			}
		}
	}
	{
		int i; // 726
		{
			b3ManifoldPoint* mp2; // 728
			uint32_t id2; // 739
			{
				int j; // 741
				{
					b3ManifoldPoint* mp1; // 743
				}
			}
			b3Sub(b3Vec3 a,
				b3Vec3 b);  // 732
			b3Sub(b3Vec3 a,
				b3Vec3 b);  // 731
		}
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 599
	memset(void* __dest,
		int __ch,
		size_t __len);  // 603
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 578
	b3AllocateManifolds(b3World* world,
				int count);  // 575
	b3FreeManifolds(b3World* world,
			b3Manifold* manifolds,
			int count);  // 583
	b3ComputeManifold(b3World* world,
				int workerIndex,
				b3ContactSim* sim,
				const b3Shape* shapeA,
				b3Transform xfA,
				const b3Shape* shapeB,
				b3Transform xfB);  // 607
} /* size: 0, variables: 3, inline expansions: 6 (1541 bytes) */

// <06B360DE> src/contact.cpp:762
// variables: 20
// function calls: 33
bool b3UpdateContact(b3World* world, int workerIndex, b3ContactSim* contactSim, b3Shape* shapeA, b3Vec3 centerOffsetA, b3Transform xfA, b3Shape* shapeB, b3Vec3 centerOffsetB, b3Transform xfB)
{
	bool touching; // 765
	{
		int childIndex; // 771
		b3ChildShape child; // 772
		b3Shape childShapeA; // 775
		{
			bool flip; // 786
		}
		{
			bool flip; // 792
		}
		{
			bool flip; // 801
			b3Cross(b3Vec3 a,
				b3Vec3 b);  // 413
			b3MulAdd(b3Vec3 a,
				float s,
				b3Vec3 b);  // 415
			b3MulAdd(b3Vec3 a,
				float s,
				b3Vec3 b);  // 414
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 416
			b3MulQuat(b3Quat q1,
					b3Quat q2);  // 533
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
					b3Vec3 v);  // 532
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 532
			b3MulTransforms(b3Transform a,
					b3Transform b);  // 800
		}
		{
			int i; // 826
			{
				b3Manifold* manifold; // 828
				int pointCount; // 829
				{
					int j; // 830
					{
						b3ManifoldPoint* mp; // 832
						b3Sub(b3Vec3 a,
							b3Vec3 b);  // 984
						operator-=(b3Vec3& a,
								b3Vec3 b);  // 834
						b3Sub(b3Vec3 a,
							b3Vec3 b);  // 984
						operator-=(b3Vec3& a,
								b3Vec3 b);  // 833
					}
				}
			}
		}
		{
			bool flip; // 846
		}
		{
			bool flip; // 852
		}
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
				b3Vec3 v);  // 532
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 532
		b3MulTransforms(b3Transform a,
				b3Transform b);  // 808
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 776
	}
	{
		int i; // 878
		{
			b3Manifold* manifold; // 880
			int pointCount; // 881
			{
				int j; // 882
				{
					b3ManifoldPoint* mp; // 884
					b3Sub(b3Vec3 a,
						b3Vec3 b);  // 984
					operator-=(b3Vec3& a,
							b3Vec3 b);  // 886
					b3Sub(b3Vec3 a,
						b3Vec3 b);  // 984
					operator-=(b3Vec3& a,
							b3Vec3 b);  // 885
				}
			}
		}
	}
	{
		bool flip; // 893
	}
} /* size: 0, variables: 1 */

