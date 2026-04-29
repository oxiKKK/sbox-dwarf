
//
// public/tier0/byteswap.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 248
//	classes: 38
//

// <000157E4> ../public/tier0/byteswap.h:15
// member functions: 45
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <0239A39F> ../public/tier0/byteswap.h:15
// member functions: 48
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short unsigned int>(short unsigned int* , short unsigned int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short unsigned int>(CByteswap* , short unsigned int* , short unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned char>(CByteswap* , unsigned char* , unsigned char* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <0465A01D> ../public/tier0/byteswap.h:15
// member functions: 47
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned char>(CByteswap* , unsigned char* , unsigned char* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<char>(CByteswap* , char* , char* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <0472A846> ../public/tier0/byteswap.h:15
// member functions: 53
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short unsigned int>(short unsigned int* , short unsigned int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short int>(short int* , short int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short unsigned int>(CByteswap* , short unsigned int* , short unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short int>(CByteswap* , short int* , short int* , int);
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<unsigned int>(unsigned int* , unsigned int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned int>(CByteswap* , unsigned int* , unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned char>(CByteswap* , unsigned char* , unsigned char* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<char>(CByteswap* , char* , char* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <04750B60> ../public/tier0/byteswap.h:15
// member functions: 46
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned char>(CByteswap* , unsigned char* , unsigned char* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <055FA4AD> ../public/tier0/byteswap.h:15
// member functions: 46
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<char>(CByteswap* , char* , char* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <05619714> ../public/tier0/byteswap.h:15
// member functions: 56
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int* , long long unsigned int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<long long int>(long long int* , long long int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<int>(int* , int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<long long unsigned int>(CByteswap* , long long unsigned int* , long long unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<long long int>(CByteswap* , long long int* , long long int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<int>(CByteswap* , int* , int* , int);
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<unsigned int>(unsigned int* , unsigned int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned int>(CByteswap* , unsigned int* , unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned char>(CByteswap* , unsigned char* , unsigned char* , int);
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<double>(double* , double* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<double>(CByteswap* , double* , double* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <0563CD70> ../public/tier0/byteswap.h:15
// member functions: 47
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<int>(int* , int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<int>(CByteswap* , int* , int* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <0565DB15> ../public/tier0/byteswap.h:15
// member functions: 51
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<int>(int* , int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short unsigned int>(short unsigned int* , short unsigned int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<int>(CByteswap* , int* , int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short unsigned int>(CByteswap* , short unsigned int* , short unsigned int* , int);
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<unsigned int>(unsigned int* , unsigned int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned int>(CByteswap* , unsigned int* , unsigned int* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <05675323> ../public/tier0/byteswap.h:15
// member functions: 58
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int* , long long unsigned int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<long long int>(long long int* , long long int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<int>(int* , int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short unsigned int>(short unsigned int* , short unsigned int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<long long unsigned int>(CByteswap* , long long unsigned int* , long long unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<long long int>(CByteswap* , long long int* , long long int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<int>(CByteswap* , int* , int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short unsigned int>(CByteswap* , short unsigned int* , short unsigned int* , int);
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<unsigned int>(unsigned int* , unsigned int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned int>(CByteswap* , unsigned int* , unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned char>(CByteswap* , unsigned char* , unsigned char* , int);
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<double>(double* , double* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<double>(CByteswap* , double* , double* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <057FDD49> ../../public/tier0/byteswap.h:15
// member functions: 45
// member variables: 2
// class size: 4
class CByteswap {
	/* ../../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <05AF19DF> ../public/tier0/byteswap.h:15
// member functions: 53
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int* , long long unsigned int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<int>(int* , int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<long long unsigned int>(CByteswap* , long long unsigned int* , long long unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<int>(CByteswap* , int* , int* , int);
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<unsigned int>(unsigned int* , unsigned int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned int>(CByteswap* , unsigned int* , unsigned int* , int);
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<float>(float* , float* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<float>(CByteswap* , float* , float* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <0621CB3D> ../public/tier0/byteswap.h:15
// member functions: 54
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int* , long long unsigned int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<int>(int* , int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short unsigned int>(short unsigned int* , short unsigned int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<long long unsigned int>(CByteswap* , long long unsigned int* , long long unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<int>(CByteswap* , int* , int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short unsigned int>(CByteswap* , short unsigned int* , short unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned char>(CByteswap* , unsigned char* , unsigned char* , int);
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<float>(float* , float* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<float>(CByteswap* , float* , float* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <067B9B58> ../public/tier0/byteswap.h:15
// member functions: 63
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int* , long long unsigned int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<long long int>(long long int* , long long int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<int>(int* , int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short unsigned int>(short unsigned int* , short unsigned int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short int>(short int* , short int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<long long unsigned int>(CByteswap* , long long unsigned int* , long long unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<long long int>(CByteswap* , long long int* , long long int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<int>(CByteswap* , int* , int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short unsigned int>(CByteswap* , short unsigned int* , short unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short int>(CByteswap* , short int* , short int* , int);
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<unsigned int>(unsigned int* , unsigned int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned int>(CByteswap* , unsigned int* , unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned char>(CByteswap* , unsigned char* , unsigned char* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<char>(CByteswap* , char* , char* , int);
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<double>(double* , double* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<float>(float* , float* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<double>(CByteswap* , double* , double* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<float>(CByteswap* , float* , float* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <0687660E> ../public/tier0/byteswap.h:15
// member functions: 61
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int* , long long unsigned int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<long long int>(long long int* , long long int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<int>(int* , int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short unsigned int>(short unsigned int* , short unsigned int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short int>(short int* , short int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<long long unsigned int>(CByteswap* , long long unsigned int* , long long unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<long long int>(CByteswap* , long long int* , long long int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<int>(CByteswap* , int* , int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short unsigned int>(CByteswap* , short unsigned int* , short unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short int>(CByteswap* , short int* , short int* , int);
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<unsigned int>(unsigned int* , unsigned int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned int>(CByteswap* , unsigned int* , unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned char>(CByteswap* , unsigned char* , unsigned char* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<char>(CByteswap* , char* , char* , int);
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<float>(float* , float* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<float>(CByteswap* , float* , float* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <069FDFA5> ../public/tier0/byteswap.h:15
// member functions: 50
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short unsigned int>(short unsigned int* , short unsigned int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short unsigned int>(CByteswap* , short unsigned int* , short unsigned int* , int);
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<unsigned int>(unsigned int* , unsigned int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned int>(CByteswap* , unsigned int* , unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned char>(CByteswap* , unsigned char* , unsigned char* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <06A7F86A> ../public/tier0/byteswap.h:15
// member functions: 52
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<long long int>(long long int* , long long int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<int>(int* , int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short unsigned int>(short unsigned int* , short unsigned int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<long long int>(CByteswap* , long long int* , long long int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<int>(CByteswap* , int* , int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short unsigned int>(CByteswap* , short unsigned int* , short unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned char>(CByteswap* , unsigned char* , unsigned char* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <06DA18DC> ../../public/tier0/byteswap.h:15
// member functions: 54
// member variables: 2
// class size: 4
class CByteswap {
	/* ../../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short unsigned int>(short unsigned int* , short unsigned int* );
	/* ../../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short int>(short int* , short int* );
	/* ../../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short unsigned int>(CByteswap* , short unsigned int* , short unsigned int* , int);
	/* ../../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short int>(CByteswap* , short int* , short int* , int);
	/* ../../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<unsigned int>(unsigned int* , unsigned int* );
	/* ../../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned int>(CByteswap* , unsigned int* , unsigned int* , int);
	/* ../../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned char>(CByteswap* , unsigned char* , unsigned char* , int);
	/* ../../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<float>(float* , float* );
	/* ../../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<float>(CByteswap* , float* , float* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <00F3E564> ../public/tier0/byteswap.h:15
// member functions: 49
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<int>(int* , int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<int>(CByteswap* , int* , int* , int);
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<float>(float* , float* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<float>(CByteswap* , float* , float* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <0175D25B> ../public/tier0/byteswap.h:15
// member functions: 53
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int* , long long unsigned int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<int>(int* , int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short int>(short int* , short int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<long long unsigned int>(CByteswap* , long long unsigned int* , long long unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<int>(CByteswap* , int* , int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short int>(CByteswap* , short int* , short int* , int);
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<unsigned int>(unsigned int* , unsigned int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned int>(CByteswap* , unsigned int* , unsigned int* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <00197C27> ../../public/tier0/byteswap.h:15
// member functions: 49
// member variables: 2
// class size: 4
class CByteswap {
	/* ../../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<int>(int* , int* );
	/* ../../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<int>(CByteswap* , int* , int* , int);
	/* ../../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<unsigned int>(unsigned int* , unsigned int* );
	/* ../../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned int>(CByteswap* , unsigned int* , unsigned int* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <0004FF3F> ../public/tier0/byteswap.h:15
// member functions: 55
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<unsigned int>(unsigned int* , unsigned int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int* , long long unsigned int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<int>(int* , int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short int>(short int* , short int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned int>(CByteswap* , unsigned int* , unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<long long unsigned int>(CByteswap* , long long unsigned int* , long long unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<int>(CByteswap* , int* , int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short int>(CByteswap* , short int* , short int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<char>(CByteswap* , char* , char* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<bool>(CByteswap* , bool* , bool* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <001F4158> ../public/tier0/byteswap.h:15
// member functions: 61
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int* , long long unsigned int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<long long int>(long long int* , long long int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<int>(int* , int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short unsigned int>(short unsigned int* , short unsigned int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short int>(short int* , short int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<void*>(void** , void** );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<long long unsigned int>(CByteswap* , long long unsigned int* , long long unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<long long int>(CByteswap* , long long int* , long long int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<int>(CByteswap* , int* , int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short unsigned int>(CByteswap* , short unsigned int* , short unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short int>(CByteswap* , short int* , short int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<void*>(CByteswap* , void** , void** , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned char>(CByteswap* , unsigned char* , unsigned char* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<char>(CByteswap* , char* , char* , int);
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<float>(float* , float* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<float>(CByteswap* , float* , float* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <00271ABD> ../public/tier0/byteswap.h:15
// member functions: 58
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<long long int>(long long int* , long long int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<int>(int* , int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short unsigned int>(short unsigned int* , short unsigned int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short int>(short int* , short int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<void*>(void** , void** );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<long long int>(CByteswap* , long long int* , long long int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<int>(CByteswap* , int* , int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short unsigned int>(CByteswap* , short unsigned int* , short unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short int>(CByteswap* , short int* , short int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<void*>(CByteswap* , void** , void** , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned char>(CByteswap* , unsigned char* , unsigned char* , int);
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<float>(float* , float* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<float>(CByteswap* , float* , float* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <0049DA2F> ../public/tier0/byteswap.h:15
// member functions: 50
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<int>(int* , int* );
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short unsigned int>(short unsigned int* , short unsigned int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<int>(CByteswap* , int* , int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short unsigned int>(CByteswap* , short unsigned int* , short unsigned int* , int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned char>(CByteswap* , unsigned char* , unsigned char* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <000E08C6> ../public/tier0/byteswap.h:15
// member functions: 47
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<unsigned int>(unsigned int* , unsigned int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<unsigned int>(CByteswap* , unsigned int* , unsigned int* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <00019486> ../public/tier0/byteswap.h:15
// member functions: 47
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:211 */
	void LowLevelByteSwap<short unsigned int>(short unsigned int* , short unsigned int* );
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<short unsigned int>(CByteswap* , short unsigned int* , short unsigned int* , int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <0014F7E5> ../public/tier0/byteswap.h:15
// member functions: 52
// member variables: 2
// class size: 4
class CByteswap {
	/* ../public/tier0/byteswap.h:18 */
	void CByteswap(CByteswap* );
	/* ../public/tier0/byteswap.h:27 */
	void SwapFieldToTargetEndian(CByteswap* , void* , void* , typedescription_t* );
	/* ../public/tier0/byteswap.h:32 */
	void SwapFieldsToTargetEndian(CByteswap* , void* , void* , datamap_t* );
	/* ../public/tier0/byteswap.h:55 */
	bool IsMachineBigEndian(void);
	/* ../public/tier0/byteswap.h:70 */
	void SetTargetBigEndian(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:77 */
	void FlipTargetEndian(CByteswap* );
	/* ../public/tier0/byteswap.h:84 */
	void ActivateByteSwapping(CByteswap* , bool);
	/* ../public/tier0/byteswap.h:94 */
	bool IsSwappingBytes(CByteswap* );
	/* ../public/tier0/byteswap.h:99 */
	bool IsTargetBigEndian(CByteswap* );
private:
	unsigned int m_bSwapBytes:1; /* 0: 0 4 */
	unsigned int m_bBigEndian:1; /* 0: 1 4 */
	/* ../public/tier0/byteswap.h:35 */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(CByteswap* , ZIP_FileHeader* , void* , unsigned int);
	/* ../public/tier0/byteswap.h:35 */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(CByteswap* , ZIP_LocalFileHeader* , void* , unsigned int);
	/* ../public/tier0/byteswap.h:35 */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(CByteswap* , ZIP_EndOfCentralDirRecord* , void* , unsigned int);
	/* ../public/tier0/byteswap.h:170 */
	void SwapBufferToTargetEndian<char>(CByteswap* , char* , char* , int);
	/* ../public/tier0/byteswap.h:45 */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(CByteswap* , ZIP_FileHeader* , unsigned int);
	/* ../public/tier0/byteswap.h:45 */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(CByteswap* , ZIP_LocalFileHeader* , unsigned int);
	/* ../public/tier0/byteswap.h:45 */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(CByteswap* , ZIP_EndOfCentralDirRecord* , unsigned int);
	void CByteswap(class CByteswap *); /* linkage=_ZN9CByteswapC4Ev */
	void SwapFieldToTargetEndian(class CByteswap *, void *, void *, class typedescription_t *); /* linkage=_ZN9CByteswap23SwapFieldToTargetEndianEPvS0_P17typedescription_t */
	void SwapFieldsToTargetEndian(class CByteswap *, void *, void *, class datamap_t *); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianEPvS0_P9datamap_t */
	bool IsMachineBigEndian(void); /* linkage=_ZN9CByteswap18IsMachineBigEndianEv */
	void SetTargetBigEndian(class CByteswap *, bool); /* linkage=_ZN9CByteswap18SetTargetBigEndianEb */
	void FlipTargetEndian(class CByteswap *); /* linkage=_ZN9CByteswap16FlipTargetEndianEv */
	void ActivateByteSwapping(class CByteswap *, bool); /* linkage=_ZN9CByteswap20ActivateByteSwappingEb */
	bool IsSwappingBytes(class CByteswap *); /* linkage=_ZN9CByteswap15IsSwappingBytesEv */
	bool IsTargetBigEndian(class CByteswap *); /* linkage=_ZN9CByteswap17IsTargetBigEndianEv */
	void LowLevelByteSwap<int>(int *, int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIiEEvPT_S2_ */
	void SwapBufferToTargetEndian<int>(class CByteswap *, int *, int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIiEEvPT_S2_i */
	void LowLevelByteSwap<unsigned int>(unsigned int *, unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIjEEvPT_S2_ */
	void SwapBufferToTargetEndian<unsigned int>(class CByteswap *, unsigned int *, unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIjEEvPT_S2_i */
	void LowLevelByteSwap<short unsigned int>(short unsigned int *, short unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapItEEvPT_S2_ */
	void SwapBufferToTargetEndian<short unsigned int>(class CByteswap *, short unsigned int *, short unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianItEEvPT_S2_i */
	void SwapBufferToTargetEndian<unsigned char>(class CByteswap *, unsigned char *, unsigned char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIhEEvPT_S2_i */
	void LowLevelByteSwap<long long unsigned int>(long long unsigned int *, long long unsigned int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIyEEvPT_S2_ */
	void LowLevelByteSwap<long long int>(long long int *, long long int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIxEEvPT_S2_ */
	void LowLevelByteSwap<short int>(short int *, short int *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIsEEvPT_S2_ */
	void SwapBufferToTargetEndian<long long unsigned int>(class CByteswap *, long long unsigned int *, long long unsigned int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIyEEvPT_S2_i */
	void SwapBufferToTargetEndian<long long int>(class CByteswap *, long long int *, long long int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIxEEvPT_S2_i */
	void SwapBufferToTargetEndian<short int>(class CByteswap *, short int *, short int *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIsEEvPT_S2_i */
	void SwapBufferToTargetEndian<char>(class CByteswap *, char *, char *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIcEEvPT_S2_i */
	void LowLevelByteSwap<float>(float *, float *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIfEEvPT_S2_ */
	void SwapBufferToTargetEndian<float>(class CByteswap *, float *, float *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIfEEvPT_S2_i */
	void SwapBufferToTargetEndian<bool>(class CByteswap *, bool *, bool *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIbEEvPT_S2_i */
	void LowLevelByteSwap<void*>(void * *, void * *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIPvEEvPT_S3_ */
	void SwapBufferToTargetEndian<void*>(class CByteswap *, void * *, void * *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIPvEEvPT_S3_i */
	void LowLevelByteSwap<double>(double *, double *); /* linkage=_ZN9CByteswap16LowLevelByteSwapIdEEvPT_S2_ */
	void SwapBufferToTargetEndian<double>(class CByteswap *, double *, double *, int); /* linkage=_ZN9CByteswap24SwapBufferToTargetEndianIdEEvPT_S2_i */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, void *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_Pvj */
	void SwapFieldsToTargetEndian<ZIP_FileHeader>(class CByteswap *, class ZIP_FileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI14ZIP_FileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(class CByteswap *, class ZIP_LocalFileHeader *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI19ZIP_LocalFileHeaderEEvPT_j */
	void SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(class CByteswap *, class ZIP_EndOfCentralDirRecord *, unsigned int); /* linkage=_ZN9CByteswap24SwapFieldsToTargetEndianI25ZIP_EndOfCentralDirRecordEEvPT_j */
};

// <0054E97C> ../public/tier0/byteswap.h:18
void CByteswap::CByteswap()
{
} /* size: 0 */

// <0054E963> ../public/tier0/byteswap.h:18
inline void CByteswap::CByteswap()
{
} /* size: 0 */

// <0015E8FF> ../public/tier0/byteswap.h:35
// variable: 1
inline void CByteswap::SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(ZIP_EndOfCentralDirRecord* pOutputBuffer, void* pBaseData, unsigned int objectCount)
{
	{
		unsigned int i; // 37
	}
} /* size: 0 */

// <0015E79F> ../public/tier0/byteswap.h:35
// variable: 1
inline void CByteswap::SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(ZIP_LocalFileHeader* pOutputBuffer, void* pBaseData, unsigned int objectCount)
{
	{
		unsigned int i; // 37
	}
} /* size: 0 */

// <0015E749> ../public/tier0/byteswap.h:35
// variable: 1
inline void CByteswap::SwapFieldsToTargetEndian<ZIP_FileHeader>(ZIP_FileHeader* pOutputBuffer, void* pBaseData, unsigned int objectCount)
{
	{
		unsigned int i; // 37
	}
} /* size: 0 */

// <0015F5BF> ../public/tier0/byteswap.h:45
inline void CByteswap::SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(ZIP_EndOfCentralDirRecord* pOutputBuffer, unsigned int objectCount)
{
} /* size: 0 */

// <0015EEF1> ../public/tier0/byteswap.h:45
inline void CByteswap::SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(ZIP_LocalFileHeader* pOutputBuffer, unsigned int objectCount)
{
} /* size: 0 */

// <0015EE83> ../public/tier0/byteswap.h:45
inline void CByteswap::SwapFieldsToTargetEndian<ZIP_FileHeader>(ZIP_FileHeader* pOutputBuffer, unsigned int objectCount)
{
} /* size: 0 */

// <0054E94B> ../public/tier0/byteswap.h:55
// variable: 1
inline void IsMachineBigEndian(void)
{
	short int nIsBigEndian; // 57
} /* size: 0, variables: 1 */

// <0054E926> ../public/tier0/byteswap.h:70
inline void CByteswap::SetTargetBigEndian(bool bigEndian)
{
} /* size: 0 */

// <0054E901> ../public/tier0/byteswap.h:84
inline void CByteswap::ActivateByteSwapping(bool bActivate)
{
} /* size: 0 */

// <06E81D05> ../public/tier0/byteswap.h:94
inline void CByteswap::IsSwappingBytes()
{
} /* size: 0 */

// <0054E8CF> ../public/tier0/byteswap.h:99
inline void CByteswap::IsTargetBigEndian()
{
} /* size: 0 */

// <06E7E035> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 15498
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <06E7DD84> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 15498
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <06DACCC5> ../../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<float>(float* outputBuffer, float* inputBuffer, int count)
{
	const char   __FUNCTION__; // 13534
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <06DACA44> ../../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 13534
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <06DAC9B1> ../../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 13534
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <06DAC80C> ../../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short CByteswap::int>(short int* outputBuffer, short int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 13534
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <06DAC783> ../../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 13534
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <06AD35A6> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 30538
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <06AD34F0> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 30538
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <06AB0F4F> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 18195
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <06AAF193> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 18195
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <06AAF0FF> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 18195
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <06AAF06B> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long CByteswap::int>(long long int* outputBuffer, long long int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 18195
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <06A5F04C> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 18972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <068FD75E> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<float>(float* outputBuffer, float* inputBuffer, int count)
{
	const char   __FUNCTION__; // 62893
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <068F2F3D> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<char>(char* outputBuffer, char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 62893
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <068F2EB1> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 62893
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <068F2E1B> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 62893
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <068ECD71> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short CByteswap::int>(short int* outputBuffer, short int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 62893
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <068ECCDB> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 62893
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <068ECC45> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 62893
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <068ECBB9> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long CByteswap::int>(long long int* outputBuffer, long long int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 62893
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <068ECB23> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 62893
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <067D70C5> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<float>(float* outputBuffer, float* inputBuffer, int count)
{
	const char   __FUNCTION__; // 6651
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <067D7032> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<double>(double* outputBuffer, double* inputBuffer, int count)
{
	const char   __FUNCTION__; // 6651
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <067D3295> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<char>(char* outputBuffer, char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 6651
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <067D320C> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 6651
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <067D3179> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 6651
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <067D1732> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short CByteswap::int>(short int* outputBuffer, short int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 6651
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <067D169F> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 6651
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <067D160C> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 6651
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <067D1579> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long CByteswap::int>(long long int* outputBuffer, long long int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 6651
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <067D14E6> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 6651
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <06317263> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<float>(float* outputBuffer, float* inputBuffer, int count)
{
	const char   __FUNCTION__; // 5226
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <06312AD3> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 5226
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <062EB703> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 5226
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <062EB66E> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 5226
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <062EB5D9> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 5226
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <05B2B6DF> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<float>(float* outputBuffer, float* inputBuffer, int count)
{
	const char   __FUNCTION__; // 64611
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <05B2AF0D> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 64611
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <05B2A584> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 64611
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <05B2A4ED> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 64611
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0568FE6F> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<double>(double* outputBuffer, double* inputBuffer, int count)
{
	const char   __FUNCTION__; // 48043
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0568DA95> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 48043
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0568D298> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 48043
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0568D205> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long CByteswap::int>(long long int* outputBuffer, long long int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 48043
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0568D172> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 48043
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <05667CE7> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 45588
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0566753E> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 45588
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <056674B5> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 45588
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <05642B7B> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 42389
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <05620AC6> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<double>(double* outputBuffer, double* inputBuffer, int count)
{
	const char   __FUNCTION__; // 27974
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0561F84C> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 27974
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0561F7C3> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 27974
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0561F1A3> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 27974
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0561F11A> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long CByteswap::int>(long long int* outputBuffer, long long int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 27974
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0561F091> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 27974
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <055FBEE6> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<char>(char* outputBuffer, char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 47886
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0475F425> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 7256
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <047364AF> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<char>(char* outputBuffer, char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 50820
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <04736426> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 50820
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0473639D> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 50820
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <047361CE> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short CByteswap::int>(short int* outputBuffer, short int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 50820
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <04736145> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 50820
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0465DB96> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<char>(char* outputBuffer, char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 29613
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0465DAF8> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 29613
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <023AA618> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 24443
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <023A7487> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 24443
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02F3BD78> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<float>(float* outputBuffer, float* inputBuffer, int count)
{
	const char   __FUNCTION__; // 11892
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02F10218> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 11892
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02F10183> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 11892
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02F100EE> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 11892
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02E03E79> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<float>(float* outputBuffer, float* inputBuffer, int count)
{
	const char   __FUNCTION__; // 21234
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02E036A7> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 21234
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02E02D1E> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 21234
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02E02C87> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 21234
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02A07869> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<double>(double* outputBuffer, double* inputBuffer, int count)
{
	const char   __FUNCTION__; // 1178
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02A05522> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 1178
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02A0548F> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 1178
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02A04D25> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 1178
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02A04C92> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 1178
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02A04BFF> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long CByteswap::int>(long long int* outputBuffer, long long int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 1178
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02A04B6C> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 1178
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <029DF6E1> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 64259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <029DEF38> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 64259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <029BA575> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 61060
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <029984C0> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<double>(double* outputBuffer, double* inputBuffer, int count)
{
	const char   __FUNCTION__; // 46645
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02997246> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 46645
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <029971BD> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 46645
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02996B9D> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 46645
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02996B14> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long CByteswap::int>(long long int* outputBuffer, long long int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 46645
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <02996A8B> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 46645
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <029738E0> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<char>(char* outputBuffer, char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 1021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <01B7EDC4> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 12492
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <01B7EB13> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 12492
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <016FBD63> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 64849
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <016FBCCE> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 64849
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <016FB1B9> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 64849
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0158FBBF> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<char>(char* outputBuffer, char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 43234
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <015898C7> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 43234
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0158983B> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long CByteswap::int>(long long int* outputBuffer, long long int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 43234
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <015897A5> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 43234
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0135741E> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<double>(double* outputBuffer, double* inputBuffer, int count)
{
	const char   __FUNCTION__; // 6157
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <013550D7> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 6157
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <01355044> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 6157
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <013548DA> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 6157
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <01354847> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 6157
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <013547B4> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long CByteswap::int>(long long int* outputBuffer, long long int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 6157
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <01354721> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 6157
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0132F296> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 3702
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0132EAED> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 3702
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0132EA64> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 3702
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0130A12A> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 503
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <012E8075> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<double>(double* outputBuffer, double* inputBuffer, int count)
{
	const char   __FUNCTION__; // 51624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <012E66C9> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long CByteswap::int>(long long int* outputBuffer, long long int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 51624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <012C3495> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<char>(char* outputBuffer, char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 6000
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00F45850> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<float>(float* outputBuffer, float* inputBuffer, int count)
{
	const char   __FUNCTION__; // 43944
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00F2EC22> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<char>(char* outputBuffer, char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 13482
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00F2E941> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short CByteswap::int>(short int* outputBuffer, short int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 13482
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00E56309> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<char>(char* outputBuffer, char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 57811
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00E5626B> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 57811
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0017362E> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 2869
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <006847B7> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 51745
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <005C656B> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 65355
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <001C13EC> ../../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 9249
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <001C0D4A> ../../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 9249
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <004A3C2B> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 28965
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00273B42> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<float>(float* outputBuffer, float* inputBuffer, int count)
{
	const char   __FUNCTION__; // 28822
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <002733D6> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<void*>(void** outputBuffer, void** inputBuffer, int count)
{
	const char   __FUNCTION__; // 28822
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00273343> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short CByteswap::int>(short int* outputBuffer, short int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 28822
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00273227> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 28822
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0027317F> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long CByteswap::int>(long long int* outputBuffer, long long int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 28822
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00238417> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<char>(char* outputBuffer, char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 49959
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <002026B4> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<void*>(void** outputBuffer, void** inputBuffer, int count)
{
	const char   __FUNCTION__; // 54115
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00050D0F> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<bool>(bool* outputBuffer, bool* inputBuffer, int count)
{
	const char   __FUNCTION__; // 18732
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00050BE3> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short CByteswap::int>(short int* outputBuffer, short int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 18732
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00050A15> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 18732
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <003D2BE3> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<double>(double* outputBuffer, double* inputBuffer, int count)
{
	const char   __FUNCTION__; // 57860
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <003D089C> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 57860
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <003CFF79> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long CByteswap::int>(long long int* outputBuffer, long long int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 57860
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <003CFEE6> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 57860
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <003858EF> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 52206
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0036383A> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<double>(double* outputBuffer, double* inputBuffer, int count)
{
	const char   __FUNCTION__; // 37791
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00361F17> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 37791
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00361E8E> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long CByteswap::int>(long long int* outputBuffer, long long int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 37791
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00361E05> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 37791
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <015EDAB1> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<float>(float* outputBuffer, float* inputBuffer, int count)
{
	const char   __FUNCTION__; // 11418
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <015EC8BF> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 11418
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00737DE5> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<double>(double* outputBuffer, double* inputBuffer, int count)
{
	const char   __FUNCTION__; // 18310
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00735A9E> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 18310
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00735A0B> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 18310
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <007352A1> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 18310
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0073517B> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long CByteswap::int>(long long int* outputBuffer, long long int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 18310
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <007350E8> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 18310
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <006EAAF1> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 12656
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <006C8A3C> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<double>(double* outputBuffer, double* inputBuffer, int count)
{
	const char   __FUNCTION__; // 63777
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <006C7090> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long CByteswap::int>(long long int* outputBuffer, long long int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 63777
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <006C7007> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 63777
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00620B19> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 42284
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <005F72DD> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<float>(float* outputBuffer, float* inputBuffer, int count)
{
	const char   __FUNCTION__; // 20834
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <005F6ADE> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 20834
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <005E06AF> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<char>(char* outputBuffer, char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 55908
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <005E03CE> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short CByteswap::int>(short int* outputBuffer, short int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 55908
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00B0FA6C> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<double>(double* outputBuffer, double* inputBuffer, int count)
{
	const char   __FUNCTION__; // 24461
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00B0D692> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 24461
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00B0CE02> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long CByteswap::int>(long long int* outputBuffer, long long int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 24461
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00B0CD6F> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 24461
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00AE78E4> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 22006
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00AE713B> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 22006
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00AE70B2> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 22006
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00A7BAE3> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<char>(char* outputBuffer, char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 24304
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <009A6889> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 21010
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <009A67D3> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 21010
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00984232> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 8667
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00982476> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 8667
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <009823E2> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 8667
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0098234E> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long CByteswap::int>(long long int* outputBuffer, long long int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 8667
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0091AA12> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 43826
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0091A97D> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 43826
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00919E68> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 43826
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <007B908F> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<float>(float* outputBuffer, float* inputBuffer, int count)
{
	const char   __FUNCTION__; // 22211
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <007AE86E> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<char>(char* outputBuffer, char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 22211
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <007AE7E2> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::char>(unsigned char* outputBuffer, unsigned char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 22211
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <007AE74C> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<unsigned CByteswap::int>(unsigned int* outputBuffer, unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 22211
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <007A86A2> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short CByteswap::int>(short int* outputBuffer, short int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 22211
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <007A860C> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 22211
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <007A8576> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 22211
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <007A84EA> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long CByteswap::int>(long long int* outputBuffer, long long int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 22211
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <007A8454> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<long long unsigned CByteswap::int>(long long unsigned int* outputBuffer, long long unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 22211
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00219AA9> ../public/tier0/byteswap.h:170
// variables: 4
inline void SwapBufferToTargetEndian<short unsigned CByteswap::int>(short unsigned int* outputBuffer, short unsigned int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 16958
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <001CF2F9> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<int>(int* outputBuffer, int* inputBuffer, int count)
{
	const char   __FUNCTION__; // 11304
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <00218C65> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<char>(char* outputBuffer, char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 25728
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <0015ED38> ../public/tier0/byteswap.h:170
// variables: 4
inline void CByteswap::SwapBufferToTargetEndian<char>(char* outputBuffer, char* inputBuffer, int count)
{
	const char   __FUNCTION__; // 13820
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		int i; // 200
	}
} /* size: 0, variables: 1 */

// <06E7D625> ../public/tier0/byteswap.h:211
// variables: 2
inline void LowLevelByteSwap<short unsigned int>(short unsigned int* output, short unsigned int* input)
{
	short unsigned int temp; // 213
	{
		int i; // 214
	}
} /* size: 0, variables: 1 */

// <06DACACD> ../../public/tier0/byteswap.h:211
// variables: 2
inline void LowLevelByteSwap<float>(float* output, float* input)
{
	float temp; // 213
	{
		int i; // 214
	}
} /* size: 0, variables: 1 */

// <06DAC89F> ../../public/tier0/byteswap.h:211
// variables: 2
inline void LowLevelByteSwap<unsigned int>(unsigned int* output, unsigned int* input)
{
	unsigned int temp; // 213
	{
		int i; // 214
	}
} /* size: 0, variables: 1 */

// <06DAC71A> ../../public/tier0/byteswap.h:211
// variables: 2
inline void LowLevelByteSwap<short int>(short int* output, short int* input)
{
	short int temp; // 213
	{
		int i; // 214
	}
} /* size: 0, variables: 1 */

// <06AACF6E> ../public/tier0/byteswap.h:211
// variables: 2
inline void LowLevelByteSwap<int>(int* output, int* input)
{
	int temp; // 213
	{
		int i; // 214
	}
} /* size: 0, variables: 1 */

// <06AACF2B> ../public/tier0/byteswap.h:211
// variables: 2
inline void LowLevelByteSwap<long long int>(long long int* output, long long int* input)
{
	long long int temp; // 213
	{
		int i; // 214
	}
} /* size: 0, variables: 1 */

// <068E791B> ../public/tier0/byteswap.h:211
// variables: 2
inline void LowLevelByteSwap<long long unsigned int>(long long unsigned int* output, long long unsigned int* input)
{
	long long unsigned int temp; // 213
	{
		int i; // 214
	}
} /* size: 0, variables: 1 */

// <067D331E> ../public/tier0/byteswap.h:211
// variables: 2
inline void LowLevelByteSwap<double>(double* output, double* input)
{
	double temp; // 213
	{
		int i; // 214
	}
} /* size: 0, variables: 1 */

// <0027313D> ../public/tier0/byteswap.h:211
// variables: 2
inline void LowLevelByteSwap<void*>(void** output, void** input)
{
	void* temp; // 213
	{
		int i; // 214
	}
} /* size: 0, variables: 1 */

// <000DABEA> ../public/tier0/byteswap.h:228
// member functions: 22
// member variable: 1
// class size: 2
class CBigEndianValue<short unsigned int> {
	/* ../public/tier0/byteswap.h:293 */
	union {
		uint8 m_nBytes[2]; /* 0 2 */
		short unsigned int m_nValue; /* 0 2 */
	};
	/* ../public/tier0/byteswap.h:235 */
	void CBigEndianValue(CBigEndianValue<short unsigned int>* );
	/* ../public/tier0/byteswap.h:236 */
	void CBigEndianValue(CBigEndianValue<short unsigned int>* , short unsigned int);
	/* ../public/tier0/byteswap.h:244 */
	short unsigned int GetValue(const CBigEndianValue<short unsigned int>* );
	/* ../public/tier0/byteswap.h:263 */
	CBigEndianValue<short unsigned int>& operator=(CBigEndianValue<short unsigned int>* , short unsigned int);
	/* ../public/tier0/byteswap.h:283 */
	short unsigned int operator short unsigned int(const CBigEndianValue<short unsigned int>* );
	/* ../public/tier0/byteswap.h:285 */
	CBigEndianValue<short unsigned int>& operator+=(CBigEndianValue<short unsigned int>* , short unsigned int);
	/* ../public/tier0/byteswap.h:286 */
	CBigEndianValue<short unsigned int>& operator-=(CBigEndianValue<short unsigned int>* , short unsigned int);
	/* ../public/tier0/byteswap.h:287 */
	CBigEndianValue<short unsigned int>& operator*=(CBigEndianValue<short unsigned int>* , short unsigned int);
	/* ../public/tier0/byteswap.h:288 */
	CBigEndianValue<short unsigned int>& operator++(CBigEndianValue<short unsigned int>* );
	/* ../public/tier0/byteswap.h:289 */
	CBigEndianValue<short unsigned int> operator++(CBigEndianValue<short unsigned int>* , int);
private:
	union {
		uint8 m_nBytes[2]; /* 0 2 */
		short unsigned int m_nValue; /* 0 2 */
	}; /* 0 2 */
	/* ../public/tier0/byteswap.h:298 */
	void ByteSwap(CBigEndianValue<short unsigned int>* );
	void CBigEndianValue(class CBigEndianValue<short unsigned int> *); /* linkage=_ZN15CBigEndianValueItEC4Ev */
	void CBigEndianValue(class CBigEndianValue<short unsigned int> *, short unsigned int); /* linkage=_ZN15CBigEndianValueItEC4Et */
	short unsigned int GetValue(const class CBigEndianValue<short unsigned int>  *); /* linkage=_ZNK15CBigEndianValueItE8GetValueEv */
	class CBigEndianValue<short unsigned int> & operator=(class CBigEndianValue<short unsigned int> *, short unsigned int); /* linkage=_ZN15CBigEndianValueItEaSEt */
	short unsigned int operator short unsigned int(const class CBigEndianValue<short unsigned int>  *); /* linkage=_ZNK15CBigEndianValueItEcvtEv */
	class CBigEndianValue<short unsigned int> & operator+=(class CBigEndianValue<short unsigned int> *, short unsigned int); /* linkage=_ZN15CBigEndianValueItEpLEt */
	class CBigEndianValue<short unsigned int> & operator-=(class CBigEndianValue<short unsigned int> *, short unsigned int); /* linkage=_ZN15CBigEndianValueItEmIEt */
	class CBigEndianValue<short unsigned int> & operator*=(class CBigEndianValue<short unsigned int> *, short unsigned int); /* linkage=_ZN15CBigEndianValueItEmLEt */
	class CBigEndianValue<short unsigned int> & operator++(class CBigEndianValue<short unsigned int> *); /* linkage=_ZN15CBigEndianValueItEppEv */
	class CBigEndianValue<short unsigned int> operator++(class CBigEndianValue<short unsigned int> *, int); /* linkage=_ZN15CBigEndianValueItEppEi */
	void ByteSwap(class CBigEndianValue<short unsigned int> *); /* linkage=_ZN15CBigEndianValueItE8ByteSwapEv */
};

// <000DADE3> ../public/tier0/byteswap.h:228
// member functions: 22
// member variable: 1
// class size: 4
class CBigEndianValue<unsigned int> {
	/* ../public/tier0/byteswap.h:293 */
	union {
		uint8 m_nBytes[4]; /* 0 4 */
		unsigned int m_nValue; /* 0 4 */
	};
	/* ../public/tier0/byteswap.h:235 */
	void CBigEndianValue(CBigEndianValue<unsigned int>* );
	/* ../public/tier0/byteswap.h:236 */
	void CBigEndianValue(CBigEndianValue<unsigned int>* , unsigned int);
	/* ../public/tier0/byteswap.h:244 */
	unsigned int GetValue(const CBigEndianValue<unsigned int>* );
	/* ../public/tier0/byteswap.h:263 */
	CBigEndianValue<unsigned int>& operator=(CBigEndianValue<unsigned int>* , unsigned int);
	/* ../public/tier0/byteswap.h:283 */
	unsigned int operator unsigned int(const CBigEndianValue<unsigned int>* );
	/* ../public/tier0/byteswap.h:285 */
	CBigEndianValue<unsigned int>& operator+=(CBigEndianValue<unsigned int>* , unsigned int);
	/* ../public/tier0/byteswap.h:286 */
	CBigEndianValue<unsigned int>& operator-=(CBigEndianValue<unsigned int>* , unsigned int);
	/* ../public/tier0/byteswap.h:287 */
	CBigEndianValue<unsigned int>& operator*=(CBigEndianValue<unsigned int>* , unsigned int);
	/* ../public/tier0/byteswap.h:288 */
	CBigEndianValue<unsigned int>& operator++(CBigEndianValue<unsigned int>* );
	/* ../public/tier0/byteswap.h:289 */
	CBigEndianValue<unsigned int> operator++(CBigEndianValue<unsigned int>* , int);
private:
	union {
		uint8 m_nBytes[4]; /* 0 4 */
		unsigned int m_nValue; /* 0 4 */
	}; /* 0 4 */
	/* ../public/tier0/byteswap.h:298 */
	void ByteSwap(CBigEndianValue<unsigned int>* );
	void CBigEndianValue(class CBigEndianValue<unsigned int> *); /* linkage=_ZN15CBigEndianValueIjEC4Ev */
	void CBigEndianValue(class CBigEndianValue<unsigned int> *, unsigned int); /* linkage=_ZN15CBigEndianValueIjEC4Ej */
	unsigned int GetValue(const class CBigEndianValue<unsigned int>  *); /* linkage=_ZNK15CBigEndianValueIjE8GetValueEv */
	class CBigEndianValue<unsigned int> & operator=(class CBigEndianValue<unsigned int> *, unsigned int); /* linkage=_ZN15CBigEndianValueIjEaSEj */
	unsigned int operator unsigned int(const class CBigEndianValue<unsigned int>  *); /* linkage=_ZNK15CBigEndianValueIjEcvjEv */
	class CBigEndianValue<unsigned int> & operator+=(class CBigEndianValue<unsigned int> *, unsigned int); /* linkage=_ZN15CBigEndianValueIjEpLEj */
	class CBigEndianValue<unsigned int> & operator-=(class CBigEndianValue<unsigned int> *, unsigned int); /* linkage=_ZN15CBigEndianValueIjEmIEj */
	class CBigEndianValue<unsigned int> & operator*=(class CBigEndianValue<unsigned int> *, unsigned int); /* linkage=_ZN15CBigEndianValueIjEmLEj */
	class CBigEndianValue<unsigned int> & operator++(class CBigEndianValue<unsigned int> *); /* linkage=_ZN15CBigEndianValueIjEppEv */
	class CBigEndianValue<unsigned int> operator++(class CBigEndianValue<unsigned int> *, int); /* linkage=_ZN15CBigEndianValueIjEppEi */
	void ByteSwap(class CBigEndianValue<unsigned int> *); /* linkage=_ZN15CBigEndianValueIjE8ByteSwapEv */
};

// <0013D5B3> ../public/tier0/byteswap.h:228
// member functions: 22
// member variable: 1
// class size: 8
class CBigEndianValue<long long unsigned int> {
	/* ../public/tier0/byteswap.h:230 */
	enum {
		TYPE_SIZE = 8,
	};
	/* ../public/tier0/byteswap.h:293 */
	union {
		uint8 m_nBytes[8]; /* 0 8 */
		long long unsigned int m_nValue; /* 0 8 */
	};
	/* ../public/tier0/byteswap.h:235 */
	void CBigEndianValue(CBigEndianValue<long long unsigned int>* );
	/* ../public/tier0/byteswap.h:236 */
	void CBigEndianValue(CBigEndianValue<long long unsigned int>* , long long unsigned int);
	/* ../public/tier0/byteswap.h:244 */
	long long unsigned int GetValue(const CBigEndianValue<long long unsigned int>* );
	/* ../public/tier0/byteswap.h:263 */
	CBigEndianValue<long long unsigned int>& operator=(CBigEndianValue<long long unsigned int>* , long long unsigned int);
	/* ../public/tier0/byteswap.h:283 */
	long long unsigned int operator long long unsigned int(const CBigEndianValue<long long unsigned int>* );
	/* ../public/tier0/byteswap.h:285 */
	CBigEndianValue<long long unsigned int>& operator+=(CBigEndianValue<long long unsigned int>* , long long unsigned int);
	/* ../public/tier0/byteswap.h:286 */
	CBigEndianValue<long long unsigned int>& operator-=(CBigEndianValue<long long unsigned int>* , long long unsigned int);
	/* ../public/tier0/byteswap.h:287 */
	CBigEndianValue<long long unsigned int>& operator*=(CBigEndianValue<long long unsigned int>* , long long unsigned int);
	/* ../public/tier0/byteswap.h:288 */
	CBigEndianValue<long long unsigned int>& operator++(CBigEndianValue<long long unsigned int>* );
	/* ../public/tier0/byteswap.h:289 */
	CBigEndianValue<long long unsigned int> operator++(CBigEndianValue<long long unsigned int>* , int);
private:
	union {
		uint8 m_nBytes[8]; /* 0 8 */
		long long unsigned int m_nValue; /* 0 8 */
	}; /* 0 8 */
	/* ../public/tier0/byteswap.h:298 */
	void ByteSwap(CBigEndianValue<long long unsigned int>* );
	void CBigEndianValue(class CBigEndianValue<long long unsigned int> *); /* linkage=_ZN15CBigEndianValueIyEC4Ev */
	void CBigEndianValue(class CBigEndianValue<long long unsigned int> *, long long unsigned int); /* linkage=_ZN15CBigEndianValueIyEC4Ey */
	long long unsigned int GetValue(const class CBigEndianValue<long long unsigned int>  *); /* linkage=_ZNK15CBigEndianValueIyE8GetValueEv */
	class CBigEndianValue<long long unsigned int> & operator=(class CBigEndianValue<long long unsigned int> *, long long unsigned int); /* linkage=_ZN15CBigEndianValueIyEaSEy */
	long long unsigned int operator long long unsigned int(const class CBigEndianValue<long long unsigned int>  *); /* linkage=_ZNK15CBigEndianValueIyEcvyEv */
	class CBigEndianValue<long long unsigned int> & operator+=(class CBigEndianValue<long long unsigned int> *, long long unsigned int); /* linkage=_ZN15CBigEndianValueIyEpLEy */
	class CBigEndianValue<long long unsigned int> & operator-=(class CBigEndianValue<long long unsigned int> *, long long unsigned int); /* linkage=_ZN15CBigEndianValueIyEmIEy */
	class CBigEndianValue<long long unsigned int> & operator*=(class CBigEndianValue<long long unsigned int> *, long long unsigned int); /* linkage=_ZN15CBigEndianValueIyEmLEy */
	class CBigEndianValue<long long unsigned int> & operator++(class CBigEndianValue<long long unsigned int> *); /* linkage=_ZN15CBigEndianValueIyEppEv */
	class CBigEndianValue<long long unsigned int> operator++(class CBigEndianValue<long long unsigned int> *, int); /* linkage=_ZN15CBigEndianValueIyEppEi */
	void ByteSwap(class CBigEndianValue<long long unsigned int> *); /* linkage=_ZN15CBigEndianValueIyE8ByteSwapEv */
};

// <0013DA25> ../public/tier0/byteswap.h:228
// member functions: 22
// member variable: 1
// class size: 1
class CBigEndianValue<unsigned char> {
	/* ../public/tier0/byteswap.h:230 */
	enum {
		TYPE_SIZE = 1,
	};
	/* ../public/tier0/byteswap.h:293 */
	union {
		uint8 m_nBytes[1]; /* 0 1 */
		unsigned char m_nValue; /* 0 1 */
	};
	/* ../public/tier0/byteswap.h:235 */
	void CBigEndianValue(CBigEndianValue<unsigned char>* );
	/* ../public/tier0/byteswap.h:236 */
	void CBigEndianValue(CBigEndianValue<unsigned char>* , unsigned char);
	/* ../public/tier0/byteswap.h:244 */
	unsigned char GetValue(const CBigEndianValue<unsigned char>* );
	/* ../public/tier0/byteswap.h:263 */
	CBigEndianValue<unsigned char>& operator=(CBigEndianValue<unsigned char>* , unsigned char);
	/* ../public/tier0/byteswap.h:283 */
	unsigned char operator unsigned char(const CBigEndianValue<unsigned char>* );
	/* ../public/tier0/byteswap.h:285 */
	CBigEndianValue<unsigned char>& operator+=(CBigEndianValue<unsigned char>* , unsigned char);
	/* ../public/tier0/byteswap.h:286 */
	CBigEndianValue<unsigned char>& operator-=(CBigEndianValue<unsigned char>* , unsigned char);
	/* ../public/tier0/byteswap.h:287 */
	CBigEndianValue<unsigned char>& operator*=(CBigEndianValue<unsigned char>* , unsigned char);
	/* ../public/tier0/byteswap.h:288 */
	CBigEndianValue<unsigned char>& operator++(CBigEndianValue<unsigned char>* );
	/* ../public/tier0/byteswap.h:289 */
	CBigEndianValue<unsigned char> operator++(CBigEndianValue<unsigned char>* , int);
private:
	union {
		uint8 m_nBytes[1]; /* 0 1 */
		unsigned char m_nValue; /* 0 1 */
	}; /* 0 1 */
	/* ../public/tier0/byteswap.h:298 */
	void ByteSwap(CBigEndianValue<unsigned char>* );
	void CBigEndianValue(class CBigEndianValue<unsigned int> *); /* linkage=_ZN15CBigEndianValueIjEC4Ev */
	void CBigEndianValue(class CBigEndianValue<unsigned int> *, unsigned int); /* linkage=_ZN15CBigEndianValueIjEC4Ej */
	unsigned int GetValue(const class CBigEndianValue<unsigned int>  *); /* linkage=_ZNK15CBigEndianValueIjE8GetValueEv */
	class CBigEndianValue<unsigned int> & operator=(class CBigEndianValue<unsigned int> *, unsigned int); /* linkage=_ZN15CBigEndianValueIjEaSEj */
	unsigned int operator unsigned int(const class CBigEndianValue<unsigned int>  *); /* linkage=_ZNK15CBigEndianValueIjEcvjEv */
	class CBigEndianValue<unsigned int> & operator+=(class CBigEndianValue<unsigned int> *, unsigned int); /* linkage=_ZN15CBigEndianValueIjEpLEj */
	class CBigEndianValue<unsigned int> & operator-=(class CBigEndianValue<unsigned int> *, unsigned int); /* linkage=_ZN15CBigEndianValueIjEmIEj */
	class CBigEndianValue<unsigned int> & operator*=(class CBigEndianValue<unsigned int> *, unsigned int); /* linkage=_ZN15CBigEndianValueIjEmLEj */
	class CBigEndianValue<unsigned int> & operator++(class CBigEndianValue<unsigned int> *); /* linkage=_ZN15CBigEndianValueIjEppEv */
	class CBigEndianValue<unsigned int> operator++(class CBigEndianValue<unsigned int> *, int); /* linkage=_ZN15CBigEndianValueIjEppEi */
	void ByteSwap(class CBigEndianValue<unsigned int> *); /* linkage=_ZN15CBigEndianValueIjE8ByteSwapEv */
};

// <0021952D> ../public/tier0/byteswap.h:228
// member functions: 22
// member variable: 1
// class size: 2
class CBigEndianValue<short unsigned int> {
	/* ../public/tier0/byteswap.h:230 */
	enum {
		TYPE_SIZE = 2,
	};
	/* ../public/tier0/byteswap.h:293 */
	union {
		uint8 m_nBytes[2]; /* 0 2 */
		short unsigned int m_nValue; /* 0 2 */
	};
	/* ../public/tier0/byteswap.h:235 */
	void CBigEndianValue(CBigEndianValue<short unsigned int>* );
	/* ../public/tier0/byteswap.h:236 */
	void CBigEndianValue(CBigEndianValue<short unsigned int>* , short unsigned int);
	/* ../public/tier0/byteswap.h:244 */
	short unsigned int GetValue(const CBigEndianValue<short unsigned int>* );
	/* ../public/tier0/byteswap.h:263 */
	CBigEndianValue<short unsigned int>& operator=(CBigEndianValue<short unsigned int>* , short unsigned int);
	/* ../public/tier0/byteswap.h:283 */
	short unsigned int operator short unsigned int(const CBigEndianValue<short unsigned int>* );
	/* ../public/tier0/byteswap.h:285 */
	CBigEndianValue<short unsigned int>& operator+=(CBigEndianValue<short unsigned int>* , short unsigned int);
	/* ../public/tier0/byteswap.h:286 */
	CBigEndianValue<short unsigned int>& operator-=(CBigEndianValue<short unsigned int>* , short unsigned int);
	/* ../public/tier0/byteswap.h:287 */
	CBigEndianValue<short unsigned int>& operator*=(CBigEndianValue<short unsigned int>* , short unsigned int);
	/* ../public/tier0/byteswap.h:288 */
	CBigEndianValue<short unsigned int>& operator++(CBigEndianValue<short unsigned int>* );
	/* ../public/tier0/byteswap.h:289 */
	CBigEndianValue<short unsigned int> operator++(CBigEndianValue<short unsigned int>* , int);
private:
	union {
		uint8 m_nBytes[2]; /* 0 2 */
		short unsigned int m_nValue; /* 0 2 */
	}; /* 0 2 */
	/* ../public/tier0/byteswap.h:298 */
	void ByteSwap(CBigEndianValue<short unsigned int>* );
	void CBigEndianValue(class CBigEndianValue<short unsigned int> *); /* linkage=_ZN15CBigEndianValueItEC4Ev */
	void CBigEndianValue(class CBigEndianValue<short unsigned int> *, short unsigned int); /* linkage=_ZN15CBigEndianValueItEC4Et */
	short unsigned int GetValue(const class CBigEndianValue<short unsigned int>  *); /* linkage=_ZNK15CBigEndianValueItE8GetValueEv */
	class CBigEndianValue<short unsigned int> & operator=(class CBigEndianValue<short unsigned int> *, short unsigned int); /* linkage=_ZN15CBigEndianValueItEaSEt */
	short unsigned int operator short unsigned int(const class CBigEndianValue<short unsigned int>  *); /* linkage=_ZNK15CBigEndianValueItEcvtEv */
	class CBigEndianValue<short unsigned int> & operator+=(class CBigEndianValue<short unsigned int> *, short unsigned int); /* linkage=_ZN15CBigEndianValueItEpLEt */
	class CBigEndianValue<short unsigned int> & operator-=(class CBigEndianValue<short unsigned int> *, short unsigned int); /* linkage=_ZN15CBigEndianValueItEmIEt */
	class CBigEndianValue<short unsigned int> & operator*=(class CBigEndianValue<short unsigned int> *, short unsigned int); /* linkage=_ZN15CBigEndianValueItEmLEt */
	class CBigEndianValue<short unsigned int> & operator++(class CBigEndianValue<short unsigned int> *); /* linkage=_ZN15CBigEndianValueItEppEv */
	class CBigEndianValue<short unsigned int> operator++(class CBigEndianValue<short unsigned int> *, int); /* linkage=_ZN15CBigEndianValueItEppEi */
	void ByteSwap(class CBigEndianValue<short unsigned int> *); /* linkage=_ZN15CBigEndianValueItE8ByteSwapEv */
};

// <00219735> ../public/tier0/byteswap.h:228
// member functions: 22
// member variable: 1
// class size: 4
class CBigEndianValue<unsigned int> {
	/* ../public/tier0/byteswap.h:230 */
	enum {
		TYPE_SIZE = 4,
	};
	/* ../public/tier0/byteswap.h:293 */
	union {
		uint8 m_nBytes[4]; /* 0 4 */
		unsigned int m_nValue; /* 0 4 */
	};
	/* ../public/tier0/byteswap.h:235 */
	void CBigEndianValue(CBigEndianValue<unsigned int>* );
	/* ../public/tier0/byteswap.h:236 */
	void CBigEndianValue(CBigEndianValue<unsigned int>* , unsigned int);
	/* ../public/tier0/byteswap.h:244 */
	unsigned int GetValue(const CBigEndianValue<unsigned int>* );
	/* ../public/tier0/byteswap.h:263 */
	CBigEndianValue<unsigned int>& operator=(CBigEndianValue<unsigned int>* , unsigned int);
	/* ../public/tier0/byteswap.h:283 */
	unsigned int operator unsigned int(const CBigEndianValue<unsigned int>* );
	/* ../public/tier0/byteswap.h:285 */
	CBigEndianValue<unsigned int>& operator+=(CBigEndianValue<unsigned int>* , unsigned int);
	/* ../public/tier0/byteswap.h:286 */
	CBigEndianValue<unsigned int>& operator-=(CBigEndianValue<unsigned int>* , unsigned int);
	/* ../public/tier0/byteswap.h:287 */
	CBigEndianValue<unsigned int>& operator*=(CBigEndianValue<unsigned int>* , unsigned int);
	/* ../public/tier0/byteswap.h:288 */
	CBigEndianValue<unsigned int>& operator++(CBigEndianValue<unsigned int>* );
	/* ../public/tier0/byteswap.h:289 */
	CBigEndianValue<unsigned int> operator++(CBigEndianValue<unsigned int>* , int);
private:
	union {
		uint8 m_nBytes[4]; /* 0 4 */
		unsigned int m_nValue; /* 0 4 */
	}; /* 0 4 */
	/* ../public/tier0/byteswap.h:298 */
	void ByteSwap(CBigEndianValue<unsigned int>* );
	void CBigEndianValue(class CBigEndianValue<unsigned int> *); /* linkage=_ZN15CBigEndianValueIjEC4Ev */
	void CBigEndianValue(class CBigEndianValue<unsigned int> *, unsigned int); /* linkage=_ZN15CBigEndianValueIjEC4Ej */
	unsigned int GetValue(const class CBigEndianValue<unsigned int>  *); /* linkage=_ZNK15CBigEndianValueIjE8GetValueEv */
	class CBigEndianValue<unsigned int> & operator=(class CBigEndianValue<unsigned int> *, unsigned int); /* linkage=_ZN15CBigEndianValueIjEaSEj */
	unsigned int operator unsigned int(const class CBigEndianValue<unsigned int>  *); /* linkage=_ZNK15CBigEndianValueIjEcvjEv */
	class CBigEndianValue<unsigned int> & operator+=(class CBigEndianValue<unsigned int> *, unsigned int); /* linkage=_ZN15CBigEndianValueIjEpLEj */
	class CBigEndianValue<unsigned int> & operator-=(class CBigEndianValue<unsigned int> *, unsigned int); /* linkage=_ZN15CBigEndianValueIjEmIEj */
	class CBigEndianValue<unsigned int> & operator*=(class CBigEndianValue<unsigned int> *, unsigned int); /* linkage=_ZN15CBigEndianValueIjEmLEj */
	class CBigEndianValue<unsigned int> & operator++(class CBigEndianValue<unsigned int> *); /* linkage=_ZN15CBigEndianValueIjEppEv */
	class CBigEndianValue<unsigned int> operator++(class CBigEndianValue<unsigned int> *, int); /* linkage=_ZN15CBigEndianValueIjEppEi */
	void ByteSwap(class CBigEndianValue<unsigned int> *); /* linkage=_ZN15CBigEndianValueIjE8ByteSwapEv */
};

// <00219C22> ../public/tier0/byteswap.h:228
// member functions: 22
// member variable: 1
// class size: 8
class CBigEndianValue<double> {
	/* ../public/tier0/byteswap.h:230 */
	enum {
		TYPE_SIZE = 8,
	};
	/* ../public/tier0/byteswap.h:293 */
	union {
		uint8 m_nBytes[8]; /* 0 8 */
		double m_nValue; /* 0 8 */
	};
	/* ../public/tier0/byteswap.h:235 */
	void CBigEndianValue(CBigEndianValue<double>* );
	/* ../public/tier0/byteswap.h:236 */
	void CBigEndianValue(CBigEndianValue<double>* , double);
	/* ../public/tier0/byteswap.h:244 */
	double GetValue(const CBigEndianValue<double>* );
	/* ../public/tier0/byteswap.h:263 */
	CBigEndianValue<double>& operator=(CBigEndianValue<double>* , double);
	/* ../public/tier0/byteswap.h:283 */
	double operator double(const CBigEndianValue<double>* );
	/* ../public/tier0/byteswap.h:285 */
	CBigEndianValue<double>& operator+=(CBigEndianValue<double>* , double);
	/* ../public/tier0/byteswap.h:286 */
	CBigEndianValue<double>& operator-=(CBigEndianValue<double>* , double);
	/* ../public/tier0/byteswap.h:287 */
	CBigEndianValue<double>& operator*=(CBigEndianValue<double>* , double);
	/* ../public/tier0/byteswap.h:288 */
	CBigEndianValue<double>& operator++(CBigEndianValue<double>* );
	/* ../public/tier0/byteswap.h:289 */
	CBigEndianValue<double> operator++(CBigEndianValue<double>* , int);
private:
	union {
		uint8 m_nBytes[8]; /* 0 8 */
		double m_nValue; /* 0 8 */
	}; /* 0 8 */
	/* ../public/tier0/byteswap.h:298 */
	void ByteSwap(CBigEndianValue<double>* );
	void CBigEndianValue(class CBigEndianValue<double> *); /* linkage=_ZN15CBigEndianValueIdEC4Ev */
	void CBigEndianValue(class CBigEndianValue<double> *, double); /* linkage=_ZN15CBigEndianValueIdEC4Ed */
	double GetValue(const class CBigEndianValue<double>  *); /* linkage=_ZNK15CBigEndianValueIdE8GetValueEv */
	class CBigEndianValue<double> & operator=(class CBigEndianValue<double> *, double); /* linkage=_ZN15CBigEndianValueIdEaSEd */
	double operator double(const class CBigEndianValue<double>  *); /* linkage=_ZNK15CBigEndianValueIdEcvdEv */
	class CBigEndianValue<double> & operator+=(class CBigEndianValue<double> *, double); /* linkage=_ZN15CBigEndianValueIdEpLEd */
	class CBigEndianValue<double> & operator-=(class CBigEndianValue<double> *, double); /* linkage=_ZN15CBigEndianValueIdEmIEd */
	class CBigEndianValue<double> & operator*=(class CBigEndianValue<double> *, double); /* linkage=_ZN15CBigEndianValueIdEmLEd */
	class CBigEndianValue<double> & operator++(class CBigEndianValue<double> *); /* linkage=_ZN15CBigEndianValueIdEppEv */
	class CBigEndianValue<double> operator++(class CBigEndianValue<double> *, int); /* linkage=_ZN15CBigEndianValueIdEppEi */
	void ByteSwap(class CBigEndianValue<double> *); /* linkage=_ZN15CBigEndianValueIdE8ByteSwapEv */
};

// <0021A445> ../public/tier0/byteswap.h:228
// member functions: 11
// member variable: 1
// class size: 1
class CBigEndianValue<signed char> {
	/* ../public/tier0/byteswap.h:230 */
	enum {
		TYPE_SIZE = 1,
	};
	/* ../public/tier0/byteswap.h:293 */
	union {
		uint8 m_nBytes[1]; /* 0 1 */
		signed char m_nValue; /* 0 1 */
	};
	/* ../public/tier0/byteswap.h:235 */
	void CBigEndianValue(CBigEndianValue<signed char>* );
	/* ../public/tier0/byteswap.h:236 */
	void CBigEndianValue(CBigEndianValue<signed char>* , signed char);
	/* ../public/tier0/byteswap.h:244 */
	signed char GetValue(const CBigEndianValue<signed char>* );
	/* ../public/tier0/byteswap.h:263 */
	CBigEndianValue<signed char>& operator=(CBigEndianValue<signed char>* , signed char);
	/* ../public/tier0/byteswap.h:283 */
	signed char operator signed char(const CBigEndianValue<signed char>* );
	/* ../public/tier0/byteswap.h:285 */
	CBigEndianValue<signed char>& operator+=(CBigEndianValue<signed char>* , signed char);
	/* ../public/tier0/byteswap.h:286 */
	CBigEndianValue<signed char>& operator-=(CBigEndianValue<signed char>* , signed char);
	/* ../public/tier0/byteswap.h:287 */
	CBigEndianValue<signed char>& operator*=(CBigEndianValue<signed char>* , signed char);
	/* ../public/tier0/byteswap.h:288 */
	CBigEndianValue<signed char>& operator++(CBigEndianValue<signed char>* );
	/* ../public/tier0/byteswap.h:289 */
	CBigEndianValue<signed char> operator++(CBigEndianValue<signed char>* , int);
private:
	union {
		uint8 m_nBytes[1]; /* 0 1 */
		signed char m_nValue; /* 0 1 */
	}; /* 0 1 */
	/* ../public/tier0/byteswap.h:298 */
	void ByteSwap(CBigEndianValue<signed char>* );
};

// <007F6E80> ../public/tier0/byteswap.h:228
// member functions: 22
// member variable: 1
// class size: 8
class CBigEndianValue<double> {
	/* ../public/tier0/byteswap.h:293 */
	union {
		uint8 m_nBytes[8]; /* 0 8 */
		double m_nValue; /* 0 8 */
	};
	/* ../public/tier0/byteswap.h:235 */
	void CBigEndianValue(CBigEndianValue<double>* );
	/* ../public/tier0/byteswap.h:236 */
	void CBigEndianValue(CBigEndianValue<double>* , double);
	/* ../public/tier0/byteswap.h:244 */
	double GetValue(const CBigEndianValue<double>* );
	/* ../public/tier0/byteswap.h:263 */
	CBigEndianValue<double>& operator=(CBigEndianValue<double>* , double);
	/* ../public/tier0/byteswap.h:283 */
	double operator double(const CBigEndianValue<double>* );
	/* ../public/tier0/byteswap.h:285 */
	CBigEndianValue<double>& operator+=(CBigEndianValue<double>* , double);
	/* ../public/tier0/byteswap.h:286 */
	CBigEndianValue<double>& operator-=(CBigEndianValue<double>* , double);
	/* ../public/tier0/byteswap.h:287 */
	CBigEndianValue<double>& operator*=(CBigEndianValue<double>* , double);
	/* ../public/tier0/byteswap.h:288 */
	CBigEndianValue<double>& operator++(CBigEndianValue<double>* );
	/* ../public/tier0/byteswap.h:289 */
	CBigEndianValue<double> operator++(CBigEndianValue<double>* , int);
private:
	union {
		uint8 m_nBytes[8]; /* 0 8 */
		double m_nValue; /* 0 8 */
	}; /* 0 8 */
	/* ../public/tier0/byteswap.h:298 */
	void ByteSwap(CBigEndianValue<double>* );
	void CBigEndianValue(class CBigEndianValue<double> *); /* linkage=_ZN15CBigEndianValueIdEC4Ev */
	void CBigEndianValue(class CBigEndianValue<double> *, double); /* linkage=_ZN15CBigEndianValueIdEC4Ed */
	double GetValue(const class CBigEndianValue<double>  *); /* linkage=_ZNK15CBigEndianValueIdE8GetValueEv */
	class CBigEndianValue<double> & operator=(class CBigEndianValue<double> *, double); /* linkage=_ZN15CBigEndianValueIdEaSEd */
	double operator double(const class CBigEndianValue<double>  *); /* linkage=_ZNK15CBigEndianValueIdEcvdEv */
	class CBigEndianValue<double> & operator+=(class CBigEndianValue<double> *, double); /* linkage=_ZN15CBigEndianValueIdEpLEd */
	class CBigEndianValue<double> & operator-=(class CBigEndianValue<double> *, double); /* linkage=_ZN15CBigEndianValueIdEmIEd */
	class CBigEndianValue<double> & operator*=(class CBigEndianValue<double> *, double); /* linkage=_ZN15CBigEndianValueIdEmLEd */
	class CBigEndianValue<double> & operator++(class CBigEndianValue<double> *); /* linkage=_ZN15CBigEndianValueIdEppEv */
	class CBigEndianValue<double> operator++(class CBigEndianValue<double> *, int); /* linkage=_ZN15CBigEndianValueIdEppEi */
	void ByteSwap(class CBigEndianValue<double> *); /* linkage=_ZN15CBigEndianValueIdE8ByteSwapEv */
};

// <007F7128> ../public/tier0/byteswap.h:228
// member functions: 22
// member variable: 1
// class size: 8
class CBigEndianValue<long long unsigned int> {
	/* ../public/tier0/byteswap.h:293 */
	union {
		uint8 m_nBytes[8]; /* 0 8 */
		long long unsigned int m_nValue; /* 0 8 */
	};
	/* ../public/tier0/byteswap.h:235 */
	void CBigEndianValue(CBigEndianValue<long long unsigned int>* );
	/* ../public/tier0/byteswap.h:236 */
	void CBigEndianValue(CBigEndianValue<long long unsigned int>* , long long unsigned int);
	/* ../public/tier0/byteswap.h:244 */
	long long unsigned int GetValue(const CBigEndianValue<long long unsigned int>* );
	/* ../public/tier0/byteswap.h:263 */
	CBigEndianValue<long long unsigned int>& operator=(CBigEndianValue<long long unsigned int>* , long long unsigned int);
	/* ../public/tier0/byteswap.h:283 */
	long long unsigned int operator long long unsigned int(const CBigEndianValue<long long unsigned int>* );
	/* ../public/tier0/byteswap.h:285 */
	CBigEndianValue<long long unsigned int>& operator+=(CBigEndianValue<long long unsigned int>* , long long unsigned int);
	/* ../public/tier0/byteswap.h:286 */
	CBigEndianValue<long long unsigned int>& operator-=(CBigEndianValue<long long unsigned int>* , long long unsigned int);
	/* ../public/tier0/byteswap.h:287 */
	CBigEndianValue<long long unsigned int>& operator*=(CBigEndianValue<long long unsigned int>* , long long unsigned int);
	/* ../public/tier0/byteswap.h:288 */
	CBigEndianValue<long long unsigned int>& operator++(CBigEndianValue<long long unsigned int>* );
	/* ../public/tier0/byteswap.h:289 */
	CBigEndianValue<long long unsigned int> operator++(CBigEndianValue<long long unsigned int>* , int);
private:
	union {
		uint8 m_nBytes[8]; /* 0 8 */
		long long unsigned int m_nValue; /* 0 8 */
	}; /* 0 8 */
	/* ../public/tier0/byteswap.h:298 */
	void ByteSwap(CBigEndianValue<long long unsigned int>* );
	void CBigEndianValue(class CBigEndianValue<long long unsigned int> *); /* linkage=_ZN15CBigEndianValueIyEC4Ev */
	void CBigEndianValue(class CBigEndianValue<long long unsigned int> *, long long unsigned int); /* linkage=_ZN15CBigEndianValueIyEC4Ey */
	long long unsigned int GetValue(const class CBigEndianValue<long long unsigned int>  *); /* linkage=_ZNK15CBigEndianValueIyE8GetValueEv */
	class CBigEndianValue<long long unsigned int> & operator=(class CBigEndianValue<long long unsigned int> *, long long unsigned int); /* linkage=_ZN15CBigEndianValueIyEaSEy */
	long long unsigned int operator long long unsigned int(const class CBigEndianValue<long long unsigned int>  *); /* linkage=_ZNK15CBigEndianValueIyEcvyEv */
	class CBigEndianValue<long long unsigned int> & operator+=(class CBigEndianValue<long long unsigned int> *, long long unsigned int); /* linkage=_ZN15CBigEndianValueIyEpLEy */
	class CBigEndianValue<long long unsigned int> & operator-=(class CBigEndianValue<long long unsigned int> *, long long unsigned int); /* linkage=_ZN15CBigEndianValueIyEmIEy */
	class CBigEndianValue<long long unsigned int> & operator*=(class CBigEndianValue<long long unsigned int> *, long long unsigned int); /* linkage=_ZN15CBigEndianValueIyEmLEy */
	class CBigEndianValue<long long unsigned int> & operator++(class CBigEndianValue<long long unsigned int> *); /* linkage=_ZN15CBigEndianValueIyEppEv */
	class CBigEndianValue<long long unsigned int> operator++(class CBigEndianValue<long long unsigned int> *, int); /* linkage=_ZN15CBigEndianValueIyEppEi */
	void ByteSwap(class CBigEndianValue<long long unsigned int> *); /* linkage=_ZN15CBigEndianValueIyE8ByteSwapEv */
};

// <00B0C091> ../public/tier0/byteswap.h:235
void CBigEndianValue<short unsigned int>::CBigEndianValue()
{
} /* size: 0 */

// <00B0C078> ../public/tier0/byteswap.h:235
inline void CBigEndianValue<short unsigned int>::CBigEndianValue()
{
} /* size: 0 */

// <00B0C061> ../public/tier0/byteswap.h:235
void CBigEndianValue<unsigned int>::CBigEndianValue()
{
} /* size: 0 */

// <00B0C048> ../public/tier0/byteswap.h:235
inline void CBigEndianValue<unsigned int>::CBigEndianValue()
{
} /* size: 0 */

// <00B0C031> ../public/tier0/byteswap.h:235
void CBigEndianValue<double>::CBigEndianValue()
{
} /* size: 0 */

// <00B0C018> ../public/tier0/byteswap.h:235
inline void CBigEndianValue<double>::CBigEndianValue()
{
} /* size: 0 */

// <00B0C001> ../public/tier0/byteswap.h:235
void CBigEndianValue<long long unsigned int>::CBigEndianValue()
{
} /* size: 0 */

// <00B0BFE8> ../public/tier0/byteswap.h:235
inline void CBigEndianValue<long long unsigned int>::CBigEndianValue()
{
} /* size: 0 */

// <00306BD1> ../public/tier0/byteswap.h:235
void CBigEndianValue<unsigned char>::CBigEndianValue()
{
} /* size: 0 */

// <00306BB8> ../public/tier0/byteswap.h:235
inline void CBigEndianValue<unsigned char>::CBigEndianValue()
{
} /* size: 0 */

// <00306BA1> ../public/tier0/byteswap.h:235
void CBigEndianValue<signed char>::CBigEndianValue()
{
} /* size: 0 */

// <00306B88> ../public/tier0/byteswap.h:235
inline void CBigEndianValue<signed char>::CBigEndianValue()
{
} /* size: 0 */

// <00B06F71> ../public/tier0/byteswap.h:244
// variable: 1
inline void CBigEndianValue<double>::GetValue()
{
	CBigEndianValue<double> temp; // 259
} /* size: 0, variables: 1 */

// <0083C620> ../public/tier0/byteswap.h:244
// variable: 1
inline void CBigEndianValue<short unsigned int>::GetValue()
{
	CBigEndianValue<short unsigned int> temp; // 259
} /* size: 0, variables: 1 */

// <0083C5FA> ../public/tier0/byteswap.h:244
// variable: 1
inline void CBigEndianValue<unsigned int>::GetValue()
{
	CBigEndianValue<unsigned int> temp; // 259
} /* size: 0, variables: 1 */

// <00173EA7> ../public/tier0/byteswap.h:244
// variable: 1
inline void CBigEndianValue<long long unsigned int>::GetValue()
{
	CBigEndianValue<long long unsigned int> temp; // 259
} /* size: 0, variables: 1 */

// <00B08507> ../public/tier0/byteswap.h:263
inline void CBigEndianValue<double>::operator=(double val)
{
} /* size: 0 */

// <00B08490> ../public/tier0/byteswap.h:263
inline void CBigEndianValue<unsigned int>::operator=(unsigned int val)
{
} /* size: 0 */

// <00B0841E> ../public/tier0/byteswap.h:263
inline void CBigEndianValue<long long unsigned int>::operator=(long long unsigned int val)
{
} /* size: 0 */

// <0083D547> ../public/tier0/byteswap.h:263
inline void CBigEndianValue<short unsigned int>::operator=(short unsigned int val)
{
} /* size: 0 */

// <003055CC> ../public/tier0/byteswap.h:263
inline void CBigEndianValue<unsigned char>::operator=(unsigned char val)
{
} /* size: 0 */

// <003055A6> ../public/tier0/byteswap.h:263
inline void CBigEndianValue<signed char>::operator=(signed char val)
{
} /* size: 0 */

// <00B084EE> ../public/tier0/byteswap.h:283
inline void operator CBigEndianValue<double>::double()
{
} /* size: 0 */

// <00306BE8> ../public/tier0/byteswap.h:283
inline void operator short unsigned CBigEndianValue<short unsigned int>::int()
{
} /* size: 0 */

// <0017A256> ../public/tier0/byteswap.h:283
inline void operator unsigned CBigEndianValue<unsigned int>::int()
{
} /* size: 0 */

// <0017733B> ../public/tier0/byteswap.h:283
inline void operator long long unsigned CBigEndianValue<long long unsigned int>::int()
{
} /* size: 0 */

// <0083E4C6> ../public/tier0/byteswap.h:285
inline void CBigEndianValue<short unsigned int>::operator+=(short unsigned int val)
{
} /* size: 0 */

// <0083E4A0> ../public/tier0/byteswap.h:285
inline void CBigEndianValue<unsigned int>::operator+=(unsigned int val)
{
} /* size: 0 */

// <0083E475> ../public/tier0/byteswap.h:289
// variable: 1
inline void CBigEndianValue<short unsigned int>::operator++(int)
{
	CBigEndianValue<short unsigned int> result; // 289
} /* size: 0, variables: 1 */

// <00B06F97> ../public/tier0/byteswap.h:298
// variables: 2
inline void CBigEndianValue<double>::ByteSwap()
{
	{
		uint i; // 300
		{
			uint c; // 302
		}
	}
} /* size: 0 */

// <00B06E47> ../public/tier0/byteswap.h:298
// variables: 2
inline void CBigEndianValue<long long unsigned int>::ByteSwap()
{
	{
		uint i; // 300
		{
			uint c; // 302
		}
	}
} /* size: 0 */

// <00301A41> ../public/tier0/byteswap.h:298
// variables: 2
inline void CBigEndianValue<unsigned char>::ByteSwap()
{
	{
		uint i; // 300
		{
			uint c; // 302
		}
	}
} /* size: 0 */

// <00301A0E> ../public/tier0/byteswap.h:298
// variables: 2
inline void CBigEndianValue<signed char>::ByteSwap()
{
	{
		uint i; // 300
		{
			uint c; // 302
		}
	}
} /* size: 0 */

