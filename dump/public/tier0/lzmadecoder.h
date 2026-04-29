
//
// public/tier0/lzmadecoder.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	class: 1
//	struct: 1
//

// <00290A96> ../public/tier0/lzmadecoder.h:18
// member variables: 4
// struct size: 17
struct lzma_header_t {
	unsigned int id; /* 0 4 */
	unsigned int actualSize; /* 4 4 */
	unsigned int lzmaSize; /* 8 4 */
	unsigned char properties[5]; /* 12 5 */
} __attribute__((__packed__));

// <068C5ECB> ../public/tier0/lzmadecoder.h:29
// member functions: 6
// class size: 1
class CLZMA {
	/* ../public/tier0/lzmadecoder.h:32 */
	unsigned int Uncompress(CLZMA* , const unsigned char* , unsigned char* , LZMAReadProgressCallbackFunc_t);
	/* ../public/tier0/lzmadecoder.h:33 */
	bool IsCompressed(CLZMA* , const unsigned char* );
	/* ../public/tier0/lzmadecoder.h:34 */
	unsigned int GetActualSize(CLZMA* , const unsigned char* );
	unsigned int Uncompress(class CLZMA *, const unsigned char  *, unsigned char *, LZMAReadProgressCallbackFunc_t); /* linkage=_ZN5CLZMA10UncompressEPKhPhPFvvE */
	bool IsCompressed(class CLZMA *, const unsigned char  *); /* linkage=_ZN5CLZMA12IsCompressedEPKh */
	unsigned int GetActualSize(class CLZMA *, const unsigned char  *); /* linkage=_ZN5CLZMA13GetActualSizeEPKh */
};

