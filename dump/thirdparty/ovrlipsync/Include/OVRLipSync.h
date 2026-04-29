
//
// thirdparty/ovrlipsync/Include/OVRLipSync.h
//
//	referenced by: libengine2.so
//
//	struct: 1
//

// <0120045C> ../thirdparty/ovrlipsync/Include/OVRLipSync.h:143
// member variables: 7
// struct size: 40
typedef struct {
	int frameNumber; /* 0 4 */
	int frameDelay; /* 4 4 */
	float * visemes; /* 8 8 */
	unsigned int visemesLength; /* 16 4 */
	float laughterScore; /* 20 4 */
	float * laughterCategories; /* 24 8 */
	unsigned int laughterCategoriesLength; /* 32 4 */
} ovrLipSyncFrame;

