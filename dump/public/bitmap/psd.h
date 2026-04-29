
//
// public/bitmap/psd.h
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 4
//	classes: 2
//

// <0472A657> ../public/bitmap/psd.h:20
// member functions: 4
// member variables: 2
// class size: 16
class PSDImageResources {
	/* ../public/bitmap/psd.h:23 */
	enum Resource {
		eResFileInfo = 1028,
	};
	/* ../public/bitmap/psd.h:27 */
	struct ResElement {
		Resource m_eType; /* 0 4 */
		short unsigned int m_numBytes; /* 4 2 */
		const unsigned char * m_pvData; /* 8 8 */
	};
	/* ../public/bitmap/psd.h:35 */
	void PSDImageResources(PSDImageResources* , unsigned int, const unsigned char* );
	/* ../public/bitmap/psd.h:38 */
	ResElement FindElement(const PSDImageResources* , Resource);
protected:
	unsigned int m_numBytes; /* 0 4 */
	const unsigned char * m_pvBuffer; /* 8 8 */
	void PSDImageResources(class PSDImageResources *, unsigned int, const unsigned char  *); /* linkage=_ZN17PSDImageResourcesC4EjPKh */
	class ResElement FindElement(const class PSDImageResources  *, enum Resource); /* linkage=_ZNK17PSDImageResources11FindElementENS_8ResourceE */
};

// <0473BCBD> ../public/bitmap/psd.h:35
void PSDImageResources::PSDImageResources(unsigned int numBytes, const unsigned char* pvBuffer)
{
} /* size: 0 */

// <0473BC8C> ../public/bitmap/psd.h:35
inline void PSDImageResources::PSDImageResources(unsigned int numBytes, const unsigned char* pvBuffer)
{
} /* size: 0 */

// <0472A750> ../public/bitmap/psd.h:45
// member functions: 4
// member variable: 1
// class size: 16
class PSDResFileInfo {
	/* ../public/bitmap/psd.h:48 */
	enum ResFileInfo {
		eTitle = 5,
		eAuthor = 80,
		eAuthorTitle = 85,
		eDescription = 120,
		eDescriptionWriter = 122,
		eKeywords = 25,
		eCopyrightNotice = 116,
	};
	/* ../public/bitmap/psd.h:58 */
	struct ResFileInfoElement {
		ResFileInfo m_eType; /* 0 4 */
		short unsigned int m_numBytes; /* 4 2 */
		const unsigned char * m_pvData; /* 8 8 */
	};
	/* ../public/bitmap/psd.h:65 */
	void PSDResFileInfo(PSDResFileInfo* , ResElement);
	/* ../public/bitmap/psd.h:68 */
	ResFileInfoElement FindElement(const PSDResFileInfo* , ResFileInfo);
protected:
	ResElement m_res; /* 0 16 */
	void PSDResFileInfo(class PSDResFileInfo *, class ResElement); /* linkage=_ZN14PSDResFileInfoC4EN17PSDImageResources10ResElementE */
	class ResFileInfoElement FindElement(const class PSDResFileInfo  *, enum ResFileInfo); /* linkage=_ZNK14PSDResFileInfo11FindElementENS_11ResFileInfoE */
};

// <0465D7A7> ../public/bitmap/psd.h:79
bool IsPSDFile(CUtlBuffer &)
{
} /* size: 0 */

// <0465D781> ../public/bitmap/psd.h:99
bool PSDReadFileRGBA8888(CUtlBuffer &, Bitmap_t &, bool)
{
} /* size: 0 */

