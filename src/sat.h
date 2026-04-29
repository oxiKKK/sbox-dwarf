
//
// src/sat.h
//
//	referenced by: libengine2.so
//
//	functions: 3
//	structs: 3
//

// <06C25D84> src/sat.h:13
// member variables: 3
// struct size: 12
struct b3FaceQuery {
	float separation; /* 0 4 */
	int faceIndex; /* 4 4 */
	int vertexIndex; /* 8 4 */
};

// <06C25E19> src/sat.h:52
// member variables: 4
// struct size: 4
struct b3FeaturePair {
	uint8_t owner1; /* 0 1 */
	uint8_t index1; /* 1 1 */
	uint8_t owner2; /* 2 1 */
	uint8_t index2; /* 3 1 */
};

// <06C2AE78> src/sat.h:67
inline uint32_t b3MakeFeatureKey(b3FeaturePair pair)
{
} /* size: 0 */

// <06CDA7AE> src/sat.h:73
// variable: 1
inline uint32_t b3MakeFeatureKeyFull(b3FeatureOwner owner1, int index1, b3FeatureOwner owner2, int index2)
{
	b3FeaturePair pair; // 75
} /* size: 0, variables: 1 */

// <06C25E63> src/sat.h:80
// member variables: 3
// struct size: 20
struct b3ClipVertex {
	b3Vec3 position; /* 0 12 */
	float separation; /* 12 4 */
	b3FeaturePair pair; /* 16 4 */
};

// <06BBDDCB> src/sat.h:99
void b3ReduceManifoldPoints(b3Manifold *, b3ManifoldPoint *, int)
{
} /* size: 0 */

