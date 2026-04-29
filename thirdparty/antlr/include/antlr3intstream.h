
//
// thirdparty/antlr/include/antlr3intstream.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	struct: 1
//

// <06A52817> ../thirdparty/antlr/include/antlr3intstream.h:93
// member functions: 11
// member variables: 16
// struct size: 128
struct ANTLR3_INT_STREAM_struct {
	ANTLR3_UINT32 type; /* 0 4 */
	pANTLR3_STRING streamName; /* 8 8 */
	void * super; /* 16 8 */
	ANTLR3_MARKER lastMarker; /* 24 8 */
	pANTLR3_STRING (*getSourceName)(ANTLR3_INT_STREAM_struct* ); /* 32 8* /
	void (*consume)(ANTLR3_INT_STREAM_struct* ); /* 40 8* /
	ANTLR3_UINT32 (*_LA)(ANTLR3_INT_STREAM_struct* , ANTLR3_INT32); /* 48 8* /
	ANTLR3_MARKER (*mark)(ANTLR3_INT_STREAM_struct* ); /* 56 8* /
	ANTLR3_MARKER (*index)(ANTLR3_INT_STREAM_struct* ); /* 64 8* /
	void (*rewind)(ANTLR3_INT_STREAM_struct* , ANTLR3_MARKER); /* 72 8* /
	void (*rewindLast)(ANTLR3_INT_STREAM_struct* ); /* 80 8* /
	void (*release)(ANTLR3_INT_STREAM_struct* , ANTLR3_MARKER); /* 88 8* /
	void (*seek)(ANTLR3_INT_STREAM_struct* , ANTLR3_MARKER); /* 96 8* /
	ANTLR3_UINT32 (*size)(ANTLR3_INT_STREAM_struct* ); /* 104 8* /
	ANTLR3_UINT32 cachedSize; /* 112 4 */
	void (*free)(ANTLR3_INT_STREAM_struct* ); /* 120 8* /
};

