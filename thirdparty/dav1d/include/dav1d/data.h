
//
// thirdparty/dav1d/include/dav1d/data.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	struct: 1
//

// <0207A0FA> ../thirdparty/dav1d/include/dav1d/data.h:40
// member variables: 4
// struct size: 72
struct Dav1dData {
	const uint8_t * data; /* 0 8 */
	size_t sz; /* 8 8 */
	Dav1dRef * ref; /* 16 8 */
	Dav1dDataProps m; /* 24 48 */
};

// <0207AB48> ../thirdparty/dav1d/include/dav1d/data.h:71
int dav1d_data_wrap(Dav1dData *, const uint8_t *, size_t, void (*)(const uint8_t *, void *), void *)
{
} /* size: 0 */

// <0207AAF4> ../thirdparty/dav1d/include/dav1d/data.h:111
void dav1d_data_unref(Dav1dData *)
{
} /* size: 0 */

