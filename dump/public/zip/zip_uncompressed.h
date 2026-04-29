
//
// public/zip/zip_uncompressed.h
//
//	referenced by: libfilesystem_stdio.so
//
//	structs: 5
//

// <00153744> ../public/zip/zip_uncompressed.h:17
// member function: 1
// member variables: 8
// static member variable: 1
// struct size: 22
struct ZIP_EndOfCentralDirRecord {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* ../public/zip/zip_uncompressed.h:19 */
	datamap_t* GetBaseMap(void);
	unsigned int signature; /* 0 4 */
	short unsigned int numberOfThisDisk; /* 4 2 */
	short unsigned int numberOfTheDiskWithStartOfCentralDirectory; /* 6 2 */
	short unsigned int nCentralDirectoryEntries_ThisDisk; /* 8 2 */
	short unsigned int nCentralDirectoryEntries_Total; /* 10 2 */
	unsigned int centralDirectorySize; /* 12 4 */
	unsigned int startOfCentralDirOffset; /* 16 4 */
	short unsigned int commentLength; /* 20 2 */
} __attribute__((__packed__));

// <001537EA> ../public/zip/zip_uncompressed.h:31
// member function: 1
// member variables: 17
// static member variable: 1
// struct size: 46
struct ZIP_FileHeader {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* ../public/zip/zip_uncompressed.h:33 */
	datamap_t* GetBaseMap(void);
	unsigned int signature; /* 0 4 */
	short unsigned int versionMadeBy; /* 4 2 */
	short unsigned int versionNeededToExtract; /* 6 2 */
	short unsigned int flags; /* 8 2 */
	short unsigned int compressionMethod; /* 10 2 */
	short unsigned int lastModifiedTime; /* 12 2 */
	short unsigned int lastModifiedDate; /* 14 2 */
	unsigned int crc32; /* 16 4 */
	unsigned int compressedSize; /* 20 4 */
	unsigned int uncompressedSize; /* 24 4 */
	short unsigned int fileNameLength; /* 28 2 */
	short unsigned int extraFieldLength; /* 30 2 */
	short unsigned int fileCommentLength; /* 32 2 */
	short unsigned int diskNumberStart; /* 34 2 */
	short unsigned int internalFileAttribs; /* 36 2 */
	unsigned int externalFileAttribs; /* 38 4 */
	unsigned int relativeOffsetOfLocalHeader; /* 42 4 */
} __attribute__((__packed__));

// <00153917> ../public/zip/zip_uncompressed.h:56
// member function: 1
// member variables: 11
// static member variable: 1
// struct size: 30
struct ZIP_LocalFileHeader {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* ../public/zip/zip_uncompressed.h:58 */
	datamap_t* GetBaseMap(void);
	unsigned int signature; /* 0 4 */
	short unsigned int versionNeededToExtract; /* 4 2 */
	short unsigned int flags; /* 6 2 */
	short unsigned int compressionMethod; /* 8 2 */
	short unsigned int lastModifiedTime; /* 10 2 */
	short unsigned int lastModifiedDate; /* 12 2 */
	unsigned int crc32; /* 14 4 */
	unsigned int compressedSize; /* 18 4 */
	unsigned int uncompressedSize; /* 22 4 */
	short unsigned int fileNameLength; /* 26 2 */
	short unsigned int extraFieldLength; /* 28 2 */
} __attribute__((__packed__));

// <001539EA> ../public/zip/zip_uncompressed.h:87
// member function: 1
// member variables: 4
// static member variable: 1
// struct size: 16
struct ZIP_PreloadHeader {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* ../public/zip/zip_uncompressed.h:89 */
	datamap_t* GetBaseMap(void);
	unsigned int Version; /* 0 4 */
	unsigned int DirectoryEntries; /* 4 4 */
	unsigned int PreloadDirectoryEntries; /* 8 4 */
	unsigned int Alignment; /* 12 4 */
};

// <00153A54> ../public/zip/zip_uncompressed.h:96
// member function: 1
// member variables: 2
// static member variable: 1
// struct size: 8
struct ZIP_PreloadDirectoryEntry {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* ../public/zip/zip_uncompressed.h:98 */
	datamap_t* GetBaseMap(void);
	unsigned int Length; /* 0 4 */
	unsigned int DataOffset; /* 4 4 */
};

