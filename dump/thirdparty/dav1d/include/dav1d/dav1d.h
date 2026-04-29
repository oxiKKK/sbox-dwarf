
//
// thirdparty/dav1d/include/dav1d/dav1d.h
//
//	referenced by: libengine2.so
//
//	functions: 6
//	structs: 2
//

// <0207A15F> ../thirdparty/dav1d/include/dav1d/dav1d.h:49
// member function: 1
// member variables: 2
// struct size: 16
struct Dav1dLogger {
	void * cookie; /* 0 8 */
	void (*callback)(void* , const char* , typedef __va_list_tag __va_list_tag* ); /* 8 8* /
};

// <0207A20E> ../thirdparty/dav1d/include/dav1d/dav1d.h:78
// member variables: 13
// struct size: 96
struct Dav1dSettings {
	int n_threads; /* 0 4 */
	int max_frame_delay; /* 4 4 */
	int apply_grain; /* 8 4 */
	int operating_point; /* 12 4 */
	int all_layers; /* 16 4 */
	unsigned int frame_size_limit; /* 20 4 */
	Dav1dPicAllocator allocator; /* 24 24 */
	Dav1dLogger logger; /* 48 16 */
	int strict_std_compliance; /* 64 4 */
	int output_invisible_frames; /* 68 4 */
	Dav1dInloopFilterType inloop_filters; /* 72 4 */
	Dav1dDecodeFrameType decode_frame_type; /* 76 4 */
	uint8_t reserved[16]; /* 80 16 */
};

// <0207AC43> ../thirdparty/dav1d/include/dav1d/dav1d.h:120
void dav1d_default_settings(Dav1dSettings *)
{
} /* size: 0 */

// <0207AC20> ../thirdparty/dav1d/include/dav1d/dav1d.h:134
int dav1d_open(Dav1dContext* *, const Dav1dSettings *)
{
} /* size: 0 */

// <0207AB2B> ../thirdparty/dav1d/include/dav1d/dav1d.h:174
int dav1d_send_data(Dav1dContext *, Dav1dData *)
{
} /* size: 0 */

// <0207AB0E> ../thirdparty/dav1d/include/dav1d/dav1d.h:226
int dav1d_get_picture(Dav1dContext *, Dav1dPicture *)
{
} /* size: 0 */

// <0207ABC1> ../thirdparty/dav1d/include/dav1d/dav1d.h:254
void dav1d_close(Dav1dContext* *)
{
} /* size: 0 */

// <0207ABAC> ../thirdparty/dav1d/include/dav1d/dav1d.h:266
void dav1d_flush(Dav1dContext *)
{
} /* size: 0 */

