
//
// public/bitmap/tgaloader.h
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	struct: 1
//

// <0465D16A> ../public/bitmap/tgaloader.h:29
// member variables: 12
// struct size: 18
struct TGAHeader_t {
	uint8 m_nIdLength; /* 0 1 */
	uint8 m_nColormapType; /* 1 1 */
	uint8 m_nImageType; /* 2 1 */
	uint16 m_nColormapIndex; /* 3 2 */
	uint16 m_nColormapLength; /* 5 2 */
	uint8 m_nColormapSize; /* 7 1 */
	uint16 m_nXOrigin; /* 8 2 */
	uint16 m_nYOrigin; /* 10 2 */
	uint16 m_nWidth; /* 12 2 */
	uint16 m_nHeight; /* 14 2 */
	uint8 m_nPixelSize; /* 16 1 */
	uint8 m_nAttributes; /* 17 1 */
} __attribute__((__packed__));

