
//
// public/meshutils/formats.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	function: 1
//	struct: 1
//

// <0184BA3A> ../public/meshutils/formats.h:18
// member variables: 6
// struct size: 16
struct ColorFormatInfo_t {
	int m_nComponents; /* 0 4 */
	bool m_bSigned; /* 4 1 */
	bool m_bNormalized; /* 5 1 */
	bool m_bFloat; /* 6 1 */
	int m_nBytesPerComponent; /* 8 4 */
	int m_nTotalBytes; /* 12 4 */
};

// <0185069A> ../public/meshutils/formats.h:29
const ColorFormatInfo_t& GetColorFormatInfo(int)
{
} /* size: 0 */

