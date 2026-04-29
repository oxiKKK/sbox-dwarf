
//
// public/tier0/lzss.h
//
//	referenced by: libtier0.so
//
//	class: 1
//	struct: 1
//

// <002950DF> ../public/tier0/lzss.h:16
// member variables: 2
// struct size: 8
struct lzss_header_t {
	unsigned int id; /* 0 4 */
	unsigned int actualSize; /* 4 4 */
};

// <0029510A> ../public/tier0/lzss.h:26
// member functions: 16
// member variables: 3
// class size: 24
class CLZSS {
	/* ../public/tier0/lzss.h:42 */
	struct lzss_node_t {
		unsigned char * pData; /* 0 8 */
		lzss_node_t * pPrev; /* 8 8 */
		lzss_node_t * pNext; /* 16 8 */
		char empty[4]; /* 24 4 */
	};
	/* ../public/tier0/lzss.h:50 */
	struct lzss_list_t {
		lzss_node_t * pStart; /* 0 8 */
		lzss_node_t * pEnd; /* 8 8 */
	};
	/* ../public/tier0/lzss.h:29 */
	unsigned char* Compress(CLZSS* , unsigned char* , int, unsigned int* , bool);
	/* ../public/tier0/lzss.h:30 */
	unsigned char* CompressNoAlloc(CLZSS* , unsigned char* , int, unsigned char* , unsigned int* , bool);
	/* ../public/tier0/lzss.h:31 */
	unsigned int Uncompress(CLZSS* , unsigned char* , unsigned char* );
	/* ../public/tier0/lzss.h:33 */
	unsigned int SafeUncompress(CLZSS* , unsigned char* , unsigned char* , unsigned int);
	/* ../public/tier0/lzss.h:34 */
	bool IsCompressed(CLZSS* , unsigned char* );
	/* ../public/tier0/lzss.h:35 */
	unsigned int GetActualSize(CLZSS* , unsigned char* );
	/* ../public/tier0/lzss.h:38 */
	void CLZSS(CLZSS* , int);
private:
	/* ../public/tier0/lzss.h:56 */
	void BuildHash(CLZSS* , unsigned char* );
	lzss_list_t * m_pHashTable; /* 0 8 */
	lzss_node_t * m_pHashTarget; /* 8 8 */
	int m_nWindowSize; /* 16 4 */
	unsigned char * Compress(class CLZSS *, unsigned char *, int, unsigned int *, bool); /* linkage=_ZN5CLZSS8CompressEPhiPjb */
	unsigned char * CompressNoAlloc(class CLZSS *, unsigned char *, int, unsigned char *, unsigned int *, bool); /* linkage=_ZN5CLZSS15CompressNoAllocEPhiS0_Pjb */
	unsigned int Uncompress(class CLZSS *, unsigned char *, unsigned char *); /* linkage=_ZN5CLZSS10UncompressEPhS0_ */
	unsigned int SafeUncompress(class CLZSS *, unsigned char *, unsigned char *, unsigned int); /* linkage=_ZN5CLZSS14SafeUncompressEPhS0_j */
	bool IsCompressed(class CLZSS *, unsigned char *); /* linkage=_ZN5CLZSS12IsCompressedEPh */
	unsigned int GetActualSize(class CLZSS *, unsigned char *); /* linkage=_ZN5CLZSS13GetActualSizeEPh */
	void CLZSS(class CLZSS *, int); /* linkage=_ZN5CLZSSC4Ei */
	void BuildHash(class CLZSS *, unsigned char *); /* linkage=_ZN5CLZSS9BuildHashEPh */
};

