
//
// sbox/glue_lz4.h
//
//	referenced by: libengine2.so
//
//	class: 1
//

// <011E963C> sbox/glue_lz4.h:3
// member functions: 8
// class size: 1
class LZ4Glue {
	/* sbox/glue_lz4.h:6 */
	int CompressBound(int);
	/* sbox/glue_lz4.h:7 */
	int Compress(const void* , void* , int, int);
	/* sbox/glue_lz4.h:8 */
	int CompressHC(const void* , void* , int, int, int);
	/* sbox/glue_lz4.h:9 */
	int Decompress(const void* , void* , int, int);
	/* sbox/glue_lz4.h:10 */
	int CompressFrameBound(int);
	/* sbox/glue_lz4.h:11 */
	int CompressFrame(const void* , void* , int, int, int);
	/* sbox/glue_lz4.h:12 */
	int64 GetFrameContentSize(const void* , int);
	/* sbox/glue_lz4.h:13 */
	int DecompressFrame(const void* , void* , int, int);
};

