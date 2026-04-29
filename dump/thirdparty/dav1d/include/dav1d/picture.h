
//
// thirdparty/dav1d/include/dav1d/picture.h
//
//	referenced by: libengine2.so
//
//	function: 1
//	structs: 3
//

// <02079E98> ../thirdparty/dav1d/include/dav1d/picture.h:46
// member variables: 4
// struct size: 16
struct Dav1dPictureParameters {
	int w; /* 0 4 */
	int h; /* 4 4 */
	Dav1dPixelLayout layout; /* 8 4 */
	int bpc; /* 12 4 */
};

// <02079EEA> ../thirdparty/dav1d/include/dav1d/picture.h:53
// member variables: 19
// struct size: 272
struct Dav1dPicture {
	Dav1dSequenceHeader * seq_hdr; /* 0 8 */
	Dav1dFrameHeader * frame_hdr; /* 8 8 */
	void * data[3]; /* 16 24 */
	ptrdiff_t stride[2]; /* 40 16 */
	Dav1dPictureParameters p; /* 56 16 */
	Dav1dDataProps m; /* 72 48 */
	Dav1dContentLightLevel * content_light; /* 120 8 */
	Dav1dMasteringDisplay * mastering_display; /* 128 8 */
	Dav1dITUTT35 * itut_t35; /* 136 8 */
	size_t n_itut_t35; /* 144 8 */
	uintptr_t reserved[4]; /* 152 32 */
	Dav1dRef * frame_hdr_ref; /* 184 8 */
	Dav1dRef * seq_hdr_ref; /* 192 8 */
	Dav1dRef * content_light_ref; /* 200 8 */
	Dav1dRef * mastering_display_ref; /* 208 8 */
	Dav1dRef * itut_t35_ref; /* 216 8 */
	uintptr_t reserved_ref[4]; /* 224 32 */
	Dav1dRef * ref; /* 256 8 */
	void * allocator_data; /* 264 8 */
};

// <0207A07D> ../thirdparty/dav1d/include/dav1d/picture.h:107
// member functions: 2
// member variables: 3
// struct size: 24
struct Dav1dPicAllocator {
	void * cookie; /* 0 8 */
	int (*alloc_picture_callback)(Dav1dPicture* , void* ); /* 8 8* /
	void (*release_picture_callback)(Dav1dPicture* , void* ); /* 16 8* /
};

// <0207AAC8> ../thirdparty/dav1d/include/dav1d/picture.h:151
void dav1d_picture_unref(Dav1dPicture *)
{
} /* size: 0 */

