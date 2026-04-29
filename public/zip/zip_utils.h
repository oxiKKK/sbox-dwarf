
//
// public/zip/zip_utils.h
//
//	referenced by: libfilesystem_stdio.so
//
//	functions: 2
//	class: 1
//

// <0016132F> ../public/zip/zip_utils.h:16
void IZip::IZip()
{
} /* size: 0 */

// <00161312> ../public/zip/zip_utils.h:16
inline void IZip::IZip()
{
} /* size: 0 */

// <001570C6> ../public/zip/zip_utils.h:16
// member functions: 46
// member variable: 1
// vtable entries: 17
// class size: 8
class IZip {
	void IZip(IZip* , IZip& );
	void IZip(IZip* , const IZip& );
	void IZip(IZip* );
	void ~IZip(IZip* );
	int ()(void) * * _vptr.IZip; /* 0 8 */
	/* ../public/zip/zip_utils.h:19 */
	virtual void Reset(IZip* );
	/* ../public/zip/zip_utils.h:22 */
	virtual bool AddFileToZip(IZip* , const char* , const char* );
	/* ../public/zip/zip_utils.h:25 */
	virtual bool FileExistsInZip(IZip* , const char* );
	/* ../public/zip/zip_utils.h:28 */
	virtual bool ReadFileFromZip(IZip* , const char* , bool, CUtlBuffer& );
	/* ../public/zip/zip_utils.h:34 */
	virtual void RemoveFileFromZip(IZip* , const char* );
	/* ../public/zip/zip_utils.h:37 */
	virtual int GetNextFilename(IZip* , int, char* , int, int& );
	/* ../public/zip/zip_utils.h:40 */
	virtual void PrintDirectory(IZip* );
	/* ../public/zip/zip_utils.h:43 */
	virtual unsigned int EstimateSize(IZip* );
	/* ../public/zip/zip_utils.h:46 */
	virtual void AddBufferToZip(IZip* , const char* , void* , int, bool);
	/* ../public/zip/zip_utils.h:50 */
	virtual void SaveToBuffer(IZip* , CUtlBuffer& );
	/* ../public/zip/zip_utils.h:54 */
	virtual void SaveToDisk(IZip* , FILE* );
	/* ../public/zip/zip_utils.h:61 */
	virtual void ParseFromBuffer(IZip* , void* , int);
	/* ../public/zip/zip_utils.h:71 */
	virtual void ForceAlignment(IZip* , bool, bool, unsigned int);
	/* ../public/zip/zip_utils.h:73 */
	virtual unsigned int GetAlignment(IZip* );
	/* ../public/zip/zip_utils.h:76 */
	virtual void SetBigEndian(IZip* , bool);
	/* ../public/zip/zip_utils.h:77 */
	virtual void ActivateByteSwapping(IZip* , bool);
	/* ../public/zip/zip_utils.h:78 */
	virtual bool GetCompressionMethodFromBuffer(IZip* , void* , int, short unsigned int* );
	/* ../public/zip/zip_utils.cpp:1758 */
	IZip* CreateZip(const char* , bool);
	/* ../public/zip/zip_utils.cpp:1766 */
	void ReleaseZip(IZip* );
	void IZip(class IZip *, class IZip &); /* linkage=_ZN4IZipC4EOS_ */
	void IZip(class IZip *, const class IZip  &); /* linkage=_ZN4IZipC4ERKS_ */
	void IZip(class IZip *); /* linkage=_ZN4IZipC4Ev */
	void ~IZip(class IZip *); /* linkage=_ZN4IZipD4Ev */
	virtual void Reset(class IZip *); /* linkage=_ZN4IZip5ResetEv */
	virtual bool AddFileToZip(class IZip *, const char  *, const char  *); /* linkage=_ZN4IZip12AddFileToZipEPKcS1_ */
	virtual bool FileExistsInZip(class IZip *, const char  *); /* linkage=_ZN4IZip15FileExistsInZipEPKc */
	virtual bool ReadFileFromZip(class IZip *, const char  *, bool, class CUtlBuffer &); /* linkage=_ZN4IZip15ReadFileFromZipEPKcbR10CUtlBuffer */
	virtual void RemoveFileFromZip(class IZip *, const char  *); /* linkage=_ZN4IZip17RemoveFileFromZipEPKc */
	virtual int GetNextFilename(class IZip *, int, char *, int, int &); /* linkage=_ZN4IZip15GetNextFilenameEiPciRi */
	virtual void PrintDirectory(class IZip *); /* linkage=_ZN4IZip14PrintDirectoryEv */
	virtual unsigned int EstimateSize(class IZip *); /* linkage=_ZN4IZip12EstimateSizeEv */
	virtual void AddBufferToZip(class IZip *, const char  *, void *, int, bool); /* linkage=_ZN4IZip14AddBufferToZipEPKcPvib */
	virtual void SaveToBuffer(class IZip *, class CUtlBuffer &); /* linkage=_ZN4IZip12SaveToBufferER10CUtlBuffer */
	virtual void SaveToDisk(class IZip *, FILE *); /* linkage=_ZN4IZip10SaveToDiskEP8_IO_FILE */
	virtual void ParseFromBuffer(class IZip *, void *, int); /* linkage=_ZN4IZip15ParseFromBufferEPvi */
	virtual void ForceAlignment(class IZip *, bool, bool, unsigned int); /* linkage=_ZN4IZip14ForceAlignmentEbbj */
	virtual unsigned int GetAlignment(class IZip *); /* linkage=_ZN4IZip12GetAlignmentEv */
	virtual void SetBigEndian(class IZip *, bool); /* linkage=_ZN4IZip12SetBigEndianEb */
	virtual void ActivateByteSwapping(class IZip *, bool); /* linkage=_ZN4IZip20ActivateByteSwappingEb */
	virtual bool GetCompressionMethodFromBuffer(class IZip *, void *, int, short unsigned int *); /* linkage=_ZN4IZip30GetCompressionMethodFromBufferEPviPt */
	class IZip * CreateZip(const char  *, bool); /* linkage=_ZN4IZip9CreateZipEPKcb */
	void ReleaseZip(class IZip *); /* linkage=_ZN4IZip10ReleaseZipEPS_ */
};

