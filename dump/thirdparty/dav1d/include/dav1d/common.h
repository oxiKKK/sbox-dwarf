
//
// thirdparty/dav1d/include/dav1d/common.h
//
//	referenced by: libengine2.so
//
//	structs: 2
//

// <02078A64> ../thirdparty/dav1d/include/dav1d/common.h:64
// member variables: 2
// struct size: 16
struct Dav1dUserData {
	const uint8_t * data; /* 0 8 */
	Dav1dRef * ref; /* 8 8 */
};

// <02078AA2> ../thirdparty/dav1d/include/dav1d/common.h:77
// member variables: 5
// struct size: 48
struct Dav1dDataProps {
	int64_t timestamp; /* 0 8 */
	int64_t duration; /* 8 8 */
	int64_t offset; /* 16 8 */
	size_t size; /* 24 8 */
	Dav1dUserData user_data; /* 32 16 */
};

