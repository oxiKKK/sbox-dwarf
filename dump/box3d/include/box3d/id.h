
//
// box3d/include/box3d/id.h
//
//	referenced by: libengine2.so
//
//	structs: 5
//

// <0098D27C> ../box3d/include/box3d/id.h:37
// member variables: 2
// struct size: 4
struct b3WorldId {
	uint16_t index1; /* 0 2 */
	uint16_t generation; /* 2 2 */
};

// <0098D2BE> ../box3d/include/box3d/id.h:44
// member variables: 3
// struct size: 8
struct b3BodyId {
	int32_t index1; /* 0 4 */
	uint16_t world0; /* 4 2 */
	uint16_t generation; /* 6 2 */
};

// <0098D310> ../box3d/include/box3d/id.h:52
// member variables: 3
// struct size: 8
struct b3ShapeId {
	int32_t index1; /* 0 4 */
	uint16_t world0; /* 4 2 */
	uint16_t generation; /* 6 2 */
};

// <0098D362> ../box3d/include/box3d/id.h:60
// member variables: 3
// struct size: 8
struct b3JointId {
	int32_t index1; /* 0 4 */
	uint16_t world0; /* 4 2 */
	uint16_t generation; /* 6 2 */
};

// <0098D3B4> ../box3d/include/box3d/id.h:68
// member variables: 4
// struct size: 12
struct b3ContactId {
	int32_t index1; /* 0 4 */
	uint16_t world0; /* 4 2 */
	int16_t padding; /* 6 2 */
	uint32_t generation; /* 8 4 */
};

