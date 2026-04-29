
//
// public/tier0/utlstring.h
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
//	functions: 40
//	classes: 5
//

// <0002AD38> ../public/tier0/utlstring.h:16
// member functions: 186
// member variable: 1
// class size: 8
class CUtlString {
	/* ../public/tier0/utlstring.h:26 */
	void CUtlString(CUtlString* );
	/* ../public/tier0/utlstring.h:27 */
	void CUtlString(CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:28 */
	void CUtlString(CUtlString* , const char* , int);
	/* ../public/tier0/utlstring.h:29 */
	void CUtlString(CUtlString* , const CUtlString& );
	/* ../public/tier0/utlstring.h:30 */
	void CUtlString(CUtlString* , const CBufferString& );
	/* ../public/tier0/utlstring.h:69 */
	void ~CUtlString(CUtlString* );
	/* ../public/tier0/utlstring.h:71 */
	const char* Get(const CUtlString* );
	/* ../public/tier0/utlstring.h:72 */
	void Set(CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:74 */
	void Convert(CUtlString* , const wchar_t* );
	/* ../public/tier0/utlstring.h:75 */
	const char* operator char const*(const CUtlString* );
	/* ../public/tier0/utlstring.h:78 */
	void SetPtr(CUtlString* , char* );
	/* ../public/tier0/utlstring.h:83 */
	void Acquire(CUtlString* , CBufferString* , bool);
	/* ../public/tier0/utlstring.h:84 */
	CUtlString AcquireBuffer(CBufferString* , bool);
	/* ../public/tier0/utlstring.h:96 */
	void SetDirect(CUtlString* , const char* , int);
	/* ../public/tier0/utlstring.h:99 */
	const char* String(const CUtlString* );
	/* ../public/tier0/utlstring.h:103 */
	char* Access(CUtlString* );
	/* ../public/tier0/utlstring.h:106 */
	int Length(const CUtlString* );
	/* ../public/tier0/utlstring.h:108 */
	bool IsEmpty(const CUtlString* );
	/* ../public/tier0/utlstring.h:112 */
	void SetLength(CUtlString* , int);
	/* ../public/tier0/utlstring.h:113 */
	char* GetForModify(CUtlString* );
	/* ../public/tier0/utlstring.h:114 */
	void Purge(CUtlString* );
	/* ../public/tier0/utlstring.h:115 */
	void Clear(CUtlString* );
	/* ../public/tier0/utlstring.h:117 */
	void Swap(CUtlString* , CUtlString& );
	/* ../public/tier0/utlstring.h:120 */
	void ToLowerFast(CUtlString* );
	/* ../public/tier0/utlstring.h:121 */
	void ToUpperFast(CUtlString* );
	/* ../public/tier0/utlstring.h:122 */
	int UnicodeCaseConvert(CUtlString* , int, EStringConvertErrorPolicy);
	/* ../public/tier0/utlstring.h:123 */
	int ToLowerLinguistic(CUtlString* , int, EStringConvertErrorPolicy);
	/* ../public/tier0/utlstring.h:128 */
	int ToUpperLinguistic(CUtlString* , int, EStringConvertErrorPolicy);
	/* ../public/tier0/utlstring.h:133 */
	void Append(CUtlString* , const char* , int);
	/* ../public/tier0/utlstring.h:135 */
	void Append(CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:136 */
	void Append(CUtlString* , char);
	/* ../public/tier0/utlstring.h:139 */
	void StripTrailingSlash(CUtlString* );
	/* ../public/tier0/utlstring.h:140 */
	void FixSlashes(CUtlString* , char);
	/* ../public/tier0/utlstring.h:141 */
	void RemoveDotSlashes(CUtlString* , char);
	/* ../public/tier0/utlstring.h:145 */
	void FixupPathName(CUtlString* );
	/* ../public/tier0/utlstring.h:148 */
	void TrimLeft(CUtlString* , char);
	/* ../public/tier0/utlstring.h:149 */
	void TrimLeft(CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:150 */
	void TrimRight(CUtlString* , char);
	/* ../public/tier0/utlstring.h:151 */
	void TrimRight(CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:152 */
	void Trim(CUtlString* , char);
	/* ../public/tier0/utlstring.h:153 */
	void Trim(CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:155 */
	bool IsEqual_CaseSensitive(const CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:157 */
	bool IsEqual_FastCaseInsensitive(const CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:159 */
	CUtlString& operator=(CUtlString* , const CUtlString& );
	/* ../public/tier0/utlstring.h:164 */
	CUtlString& operator=(CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:169 */
	CUtlString& operator=(CUtlString* , const CBufferString& );
	/* ../public/tier0/utlstring.h:172 */
	bool operator==(const CUtlString* , const CUtlString& );
	/* ../public/tier0/utlstring.h:173 */
	bool operator!=(const CUtlString* , const CUtlString& );
	/* ../public/tier0/utlstring.h:174 */
	bool operator==(const CUtlString* , const CBufferString& );
	/* ../public/tier0/utlstring.h:175 */
	bool operator!=(const CUtlString* , const CBufferString& );
	/* ../public/tier0/utlstring.h:177 */
	CUtlString& operator+=(CUtlString* , const CUtlString& );
	/* ../public/tier0/utlstring.h:178 */
	CUtlString& operator+=(CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:179 */
	CUtlString& operator+=(CUtlString* , const CBufferString& );
	/* ../public/tier0/utlstring.h:180 */
	CUtlString& operator+=(CUtlString* , char);
	/* ../public/tier0/utlstring.h:181 */
	CUtlString& operator+=(CUtlString* , int);
	/* ../public/tier0/utlstring.h:182 */
	CUtlString& operator+=(CUtlString* , double);
	/* ../public/tier0/utlstring.h:184 */
	CUtlString operator+(const CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:185 */
	CUtlString operator+(const CUtlString* , const CUtlString& );
	/* ../public/tier0/utlstring.h:186 */
	CUtlString operator+(const CUtlString* , int);
	/* ../public/tier0/utlstring.h:189 */
	char operator[](const CUtlString* , int);
	/* ../public/tier0/utlstring.h:192 */
	bool IsValid(const CUtlString* );
	/* ../public/tier0/utlstring.h:199 */
	int Format(CUtlString* , const char* , ...);
	/* ../public/tier0/utlstring.h:200 */
	int FormatV(CUtlString* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../public/tier0/utlstring.h:206 */
	CUtlString Slice(const CUtlString* , int32, int32);
	/* ../public/tier0/utlstring.h:209 */
	CUtlString Left(const CUtlString* , int32);
	/* ../public/tier0/utlstring.h:210 */
	CUtlString Right(const CUtlString* , int32);
	/* ../public/tier0/utlstring.h:214 */
	CUtlString Replace(const CUtlString* , char, char);
	/* ../public/tier0/utlstring.h:217 */
	CUtlString Replace(const CUtlString* , char, const char* );
	/* ../public/tier0/utlstring.h:221 */
	CUtlString Replace(const CUtlString* , const char* , const char* , bool);
	/* ../public/tier0/utlstring.h:224 */
	CUtlString ReplaceFastCaseless(const CUtlString* , const char* , const char* );
	/* ../public/tier0/utlstring.h:228 */
	CUtlString Remove(const CUtlString* , const char* , bool);
	/* ../public/tier0/utlstring.h:231 */
	CUtlString RemoveFromStart(const CUtlString* , const char* , bool);
	/* ../public/tier0/utlstring.h:234 */
	CUtlString Ellipsify(CUtlString* , int);
	/* ../public/tier0/utlstring.h:237 */
	bool MatchesPattern(const CUtlString* , const CUtlString& , int);
	/* ../public/tier0/utlstring.h:242 */
	CUtlString AbsPath(const CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:245 */
	const char* UnqualifiedFilenameInPlace(const CUtlString* );
	/* ../public/tier0/utlstring.h:250 */
	CUtlString UnqualifiedFilenameAlloc(const CUtlString* );
	/* ../public/tier0/utlstring.h:253 */
	CUtlString DirName(const CUtlString* );
	/* ../public/tier0/utlstring.h:256 */
	CUtlString StripExtension(const CUtlString* );
	/* ../public/tier0/utlstring.h:259 */
	CUtlString StripFilename(const CUtlString* );
	/* ../public/tier0/utlstring.h:262 */
	CUtlString GetBaseFilename(const CUtlString* );
	/* ../public/tier0/utlstring.h:265 */
	bool HasExtension(const CUtlString* );
	/* ../public/tier0/utlstring.h:270 */
	const char* GetExtensionInPlace(const CUtlString* );
	/* ../public/tier0/utlstring.h:275 */
	CUtlString GetExtensionAlloc(const CUtlString* );
	/* ../public/tier0/utlstring.h:278 */
	CUtlString PathJoin(const char* , const char* );
	/* ../public/tier0/utlstring.h:282 */
	int SortFastCaseInsensitive(const CUtlString* , const CUtlString* );
	/* ../public/tier0/utlstring.h:283 */
	int SortCaseSensitive(const CUtlString* , const CUtlString* );
	/* ../public/tier0/utlstring.h:288 */
	const CUtlString& GetEmptyString(void);
	/* ../public/tier0/utlstring.h:290 */
	size_t AllocSize(const CUtlString* );
	/* ../public/tier0/utlstring.h:293 */
	size_t GetMemoryUsage(const CUtlString* );
private:
	/* ../public/tier0/utlstring.h:298 */
	void* GetMemoryBlock(const CUtlString* );
	/* ../public/tier0/utlstring.h:302 */
	void* AllocMemoryBlock(CUtlString* , uint32);
	/* ../public/tier0/utlstring.h:303 */
	void FreeMemoryBlock(CUtlString* );
	char * m_pString; /* 0 8 */
	void CUtlString(class CUtlString *); /* linkage=_ZN10CUtlStringC4Ev */
	void CUtlString(class CUtlString *, const char  *); /* linkage=_ZN10CUtlStringC4EPKc */
	void CUtlString(class CUtlString *, const char  *, int); /* linkage=_ZN10CUtlStringC4EPKci */
	void CUtlString(class CUtlString *, const class CUtlString  &); /* linkage=_ZN10CUtlStringC4ERKS_ */
	void CUtlString(class CUtlString *, const class CBufferString  &); /* linkage=_ZN10CUtlStringC4ERK13CBufferString */
	void ~CUtlString(class CUtlString *); /* linkage=_ZN10CUtlStringD4Ev */
	const char  * Get(const class CUtlString  *); /* linkage=_ZNK10CUtlString3GetEv */
	void Set(class CUtlString *, const char  *); /* linkage=_ZN10CUtlString3SetEPKc */
	void Convert(class CUtlString *, const wchar_t  *); /* linkage=_ZN10CUtlString7ConvertEPKw */
	const char  * operator char const*(const class CUtlString  *); /* linkage=_ZNK10CUtlStringcvPKcEv */
	void SetPtr(class CUtlString *, char *); /* linkage=_ZN10CUtlString6SetPtrEPc */
	void Acquire(class CUtlString *, class CBufferString *, bool); /* linkage=_ZN10CUtlString7AcquireEP13CBufferStringb */
	class CUtlString AcquireBuffer(class CBufferString *, bool); /* linkage=_ZN10CUtlString13AcquireBufferEP13CBufferStringb */
	/* <581d44> tier0/utlstring.cpp:84 */
	void SetDirect(class CUtlString *, const char  *, int); /* linkage=_ZN10CUtlString9SetDirectEPKci */
	const char  * String(const class CUtlString  *); /* linkage=_ZNK10CUtlString6StringEv */
	char * Access(class CUtlString *); /* linkage=_ZN10CUtlString6AccessEv */
	int Length(const class CUtlString  *); /* linkage=_ZNK10CUtlString6LengthEv */
	bool IsEmpty(const class CUtlString  *); /* linkage=_ZNK10CUtlString7IsEmptyEv */
	void SetLength(class CUtlString *, int); /* linkage=_ZN10CUtlString9SetLengthEi */
	char * GetForModify(class CUtlString *); /* linkage=_ZN10CUtlString12GetForModifyEv */
	void Purge(class CUtlString *); /* linkage=_ZN10CUtlString5PurgeEv */
	void Clear(class CUtlString *); /* linkage=_ZN10CUtlString5ClearEv */
	void Swap(class CUtlString *, class CUtlString &); /* linkage=_ZN10CUtlString4SwapERS_ */
	void ToLowerFast(class CUtlString *); /* linkage=_ZN10CUtlString11ToLowerFastEv */
	void ToUpperFast(class CUtlString *); /* linkage=_ZN10CUtlString11ToUpperFastEv */
	int UnicodeCaseConvert(class CUtlString *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN10CUtlString18UnicodeCaseConvertEi25EStringConvertErrorPolicy */
	int ToLowerLinguistic(class CUtlString *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN10CUtlString17ToLowerLinguisticEi25EStringConvertErrorPolicy */
	int ToUpperLinguistic(class CUtlString *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN10CUtlString17ToUpperLinguisticEi25EStringConvertErrorPolicy */
	void Append(class CUtlString *, const char  *, int); /* linkage=_ZN10CUtlString6AppendEPKci */
	void Append(class CUtlString *, const char  *); /* linkage=_ZN10CUtlString6AppendEPKc */
	void Append(class CUtlString *, char); /* linkage=_ZN10CUtlString6AppendEc */
	void StripTrailingSlash(class CUtlString *); /* linkage=_ZN10CUtlString18StripTrailingSlashEv */
	void FixSlashes(class CUtlString *, char); /* linkage=_ZN10CUtlString10FixSlashesEc */
	void RemoveDotSlashes(class CUtlString *, char); /* linkage=_ZN10CUtlString16RemoveDotSlashesEc */
	void FixupPathName(class CUtlString *); /* linkage=_ZN10CUtlString13FixupPathNameEv */
	void TrimLeft(class CUtlString *, char); /* linkage=_ZN10CUtlString8TrimLeftEc */
	void TrimLeft(class CUtlString *, const char  *); /* linkage=_ZN10CUtlString8TrimLeftEPKc */
	void TrimRight(class CUtlString *, char); /* linkage=_ZN10CUtlString9TrimRightEc */
	void TrimRight(class CUtlString *, const char  *); /* linkage=_ZN10CUtlString9TrimRightEPKc */
	void Trim(class CUtlString *, char); /* linkage=_ZN10CUtlString4TrimEc */
	void Trim(class CUtlString *, const char  *); /* linkage=_ZN10CUtlString4TrimEPKc */
	/* <581f87> tier0/utlstring.cpp:181 */
	bool IsEqual_CaseSensitive(const class CUtlString  *, const char  *); /* linkage=_ZNK10CUtlString21IsEqual_CaseSensitiveEPKc */
	bool IsEqual_FastCaseInsensitive(const class CUtlString  *, const char  *); /* linkage=_ZNK10CUtlString27IsEqual_FastCaseInsensitiveEPKc */
	class CUtlString & operator=(class CUtlString *, const class CUtlString  &); /* linkage=_ZN10CUtlStringaSERKS_ */
	class CUtlString & operator=(class CUtlString *, const char  *); /* linkage=_ZN10CUtlStringaSEPKc */
	class CUtlString & operator=(class CUtlString *, const class CBufferString  &); /* linkage=_ZN10CUtlStringaSERK13CBufferString */
	bool operator==(const class CUtlString  *, const class CUtlString  &); /* linkage=_ZNK10CUtlStringeqERKS_ */
	bool operator!=(const class CUtlString  *, const class CUtlString  &); /* linkage=_ZNK10CUtlStringneERKS_ */
	bool operator==(const class CUtlString  *, const class CBufferString  &); /* linkage=_ZNK10CUtlStringeqERK13CBufferString */
	bool operator!=(const class CUtlString  *, const class CBufferString  &); /* linkage=_ZNK10CUtlStringneERK13CBufferString */
	class CUtlString & operator+=(class CUtlString *, const class CUtlString  &); /* linkage=_ZN10CUtlStringpLERKS_ */
	class CUtlString & operator+=(class CUtlString *, const char  *); /* linkage=_ZN10CUtlStringpLEPKc */
	class CUtlString & operator+=(class CUtlString *, const class CBufferString  &); /* linkage=_ZN10CUtlStringpLERK13CBufferString */
	class CUtlString & operator+=(class CUtlString *, char); /* linkage=_ZN10CUtlStringpLEc */
	class CUtlString & operator+=(class CUtlString *, int); /* linkage=_ZN10CUtlStringpLEi */
	class CUtlString & operator+=(class CUtlString *, double); /* linkage=_ZN10CUtlStringpLEd */
	class CUtlString operator+(const class CUtlString  *, const char  *); /* linkage=_ZNK10CUtlStringplEPKc */
	class CUtlString operator+(const class CUtlString  *, const class CUtlString  &); /* linkage=_ZNK10CUtlStringplERKS_ */
	class CUtlString operator+(const class CUtlString  *, int); /* linkage=_ZNK10CUtlStringplEi */
	char operator[](const class CUtlString  *, int); /* linkage=_ZNK10CUtlStringixEi */
	bool IsValid(const class CUtlString  *); /* linkage=_ZNK10CUtlString7IsValidEv */
	int Format(class CUtlString *, const char  *, ...); /* linkage=_ZN10CUtlString6FormatEPKcz */
	int FormatV(class CUtlString *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN10CUtlString7FormatVEPKcP13__va_list_tag */
	class CUtlString Slice(const class CUtlString  *, int32, int32); /* linkage=_ZNK10CUtlString5SliceEii */
	class CUtlString Left(const class CUtlString  *, int32); /* linkage=_ZNK10CUtlString4LeftEi */
	class CUtlString Right(const class CUtlString  *, int32); /* linkage=_ZNK10CUtlString5RightEi */
	class CUtlString Replace(const class CUtlString  *, char, char); /* linkage=_ZNK10CUtlString7ReplaceEcc */
	class CUtlString Replace(const class CUtlString  *, char, const char  *); /* linkage=_ZNK10CUtlString7ReplaceEcPKc */
	class CUtlString Replace(const class CUtlString  *, const char  *, const char  *, bool); /* linkage=_ZNK10CUtlString7ReplaceEPKcS1_b */
	class CUtlString ReplaceFastCaseless(const class CUtlString  *, const char  *, const char  *); /* linkage=_ZNK10CUtlString19ReplaceFastCaselessEPKcS1_ */
	class CUtlString Remove(const class CUtlString  *, const char  *, bool); /* linkage=_ZNK10CUtlString6RemoveEPKcb */
	class CUtlString RemoveFromStart(const class CUtlString  *, const char  *, bool); /* linkage=_ZNK10CUtlString15RemoveFromStartEPKcb */
	class CUtlString Ellipsify(class CUtlString *, int); /* linkage=_ZN10CUtlString9EllipsifyEi */
	bool MatchesPattern(const class CUtlString  *, const class CUtlString  &, int); /* linkage=_ZNK10CUtlString14MatchesPatternERKS_i */
	class CUtlString AbsPath(const class CUtlString  *, const char  *); /* linkage=_ZNK10CUtlString7AbsPathEPKc */
	const char  * UnqualifiedFilenameInPlace(const class CUtlString  *); /* linkage=_ZNK10CUtlString26UnqualifiedFilenameInPlaceEv */
	class CUtlString UnqualifiedFilenameAlloc(const class CUtlString  *); /* linkage=_ZNK10CUtlString24UnqualifiedFilenameAllocEv */
	class CUtlString DirName(const class CUtlString  *); /* linkage=_ZNK10CUtlString7DirNameEv */
	class CUtlString StripExtension(const class CUtlString  *); /* linkage=_ZNK10CUtlString14StripExtensionEv */
	class CUtlString StripFilename(const class CUtlString  *); /* linkage=_ZNK10CUtlString13StripFilenameEv */
	class CUtlString GetBaseFilename(const class CUtlString  *); /* linkage=_ZNK10CUtlString15GetBaseFilenameEv */
	bool HasExtension(const class CUtlString  *); /* linkage=_ZNK10CUtlString12HasExtensionEv */
	const char  * GetExtensionInPlace(const class CUtlString  *); /* linkage=_ZNK10CUtlString19GetExtensionInPlaceEv */
	class CUtlString GetExtensionAlloc(const class CUtlString  *); /* linkage=_ZNK10CUtlString17GetExtensionAllocEv */
	class CUtlString PathJoin(const char  *, const char  *); /* linkage=_ZN10CUtlString8PathJoinEPKcS1_ */
	int SortFastCaseInsensitive(const class CUtlString  *, const class CUtlString  *); /* linkage=_ZN10CUtlString23SortFastCaseInsensitiveEPKS_S1_ */
	int SortCaseSensitive(const class CUtlString  *, const class CUtlString  *); /* linkage=_ZN10CUtlString17SortCaseSensitiveEPKS_S1_ */
	const class CUtlString  & GetEmptyString(void); /* linkage=_ZN10CUtlString14GetEmptyStringEv */
	size_t AllocSize(const class CUtlString  *); /* linkage=_ZNK10CUtlString9AllocSizeEv */
	size_t GetMemoryUsage(const class CUtlString  *); /* linkage=_ZNK10CUtlString14GetMemoryUsageEv */
	void * GetMemoryBlock(const class CUtlString  *); /* linkage=_ZNK10CUtlString14GetMemoryBlockEv */
	void * AllocMemoryBlock(class CUtlString *, uint32); /* linkage=_ZN10CUtlString16AllocMemoryBlockEj */
	void FreeMemoryBlock(class CUtlString *); /* linkage=_ZN10CUtlString15FreeMemoryBlockEv */
};

// <057F9078> ../../public/tier0/utlstring.h:16
// member functions: 186
// member variable: 1
// class size: 8
class CUtlString {
	/* ../../public/tier0/utlstring.h:26 */
	void CUtlString(CUtlString* );
	/* ../../public/tier0/utlstring.h:27 */
	void CUtlString(CUtlString* , const char* );
	/* ../../public/tier0/utlstring.h:28 */
	void CUtlString(CUtlString* , const char* , int);
	/* ../../public/tier0/utlstring.h:29 */
	void CUtlString(CUtlString* , const CUtlString& );
	/* ../../public/tier0/utlstring.h:30 */
	void CUtlString(CUtlString* , const CBufferString& );
	/* ../../public/tier0/utlstring.h:69 */
	void ~CUtlString(CUtlString* );
	/* ../../public/tier0/utlstring.h:71 */
	const char* Get(const CUtlString* );
	/* ../../public/tier0/utlstring.h:72 */
	void Set(CUtlString* , const char* );
	/* ../../public/tier0/utlstring.h:74 */
	void Convert(CUtlString* , const wchar_t* );
	/* ../../public/tier0/utlstring.h:75 */
	const char* operator char const*(const CUtlString* );
	/* ../../public/tier0/utlstring.h:78 */
	void SetPtr(CUtlString* , char* );
	/* ../../public/tier0/utlstring.h:83 */
	void Acquire(CUtlString* , CBufferString* , bool);
	/* ../../public/tier0/utlstring.h:84 */
	CUtlString AcquireBuffer(CBufferString* , bool);
	/* ../../public/tier0/utlstring.h:96 */
	void SetDirect(CUtlString* , const char* , int);
	/* ../../public/tier0/utlstring.h:99 */
	const char* String(const CUtlString* );
	/* ../../public/tier0/utlstring.h:103 */
	char* Access(CUtlString* );
	/* ../../public/tier0/utlstring.h:106 */
	int Length(const CUtlString* );
	/* ../../public/tier0/utlstring.h:108 */
	bool IsEmpty(const CUtlString* );
	/* ../../public/tier0/utlstring.h:112 */
	void SetLength(CUtlString* , int);
	/* ../../public/tier0/utlstring.h:113 */
	char* GetForModify(CUtlString* );
	/* ../../public/tier0/utlstring.h:114 */
	void Purge(CUtlString* );
	/* ../../public/tier0/utlstring.h:115 */
	void Clear(CUtlString* );
	/* ../../public/tier0/utlstring.h:117 */
	void Swap(CUtlString* , CUtlString& );
	/* ../../public/tier0/utlstring.h:120 */
	void ToLowerFast(CUtlString* );
	/* ../../public/tier0/utlstring.h:121 */
	void ToUpperFast(CUtlString* );
	/* ../../public/tier0/utlstring.h:122 */
	int UnicodeCaseConvert(CUtlString* , int, EStringConvertErrorPolicy);
	/* ../../public/tier0/utlstring.h:123 */
	int ToLowerLinguistic(CUtlString* , int, EStringConvertErrorPolicy);
	/* ../../public/tier0/utlstring.h:128 */
	int ToUpperLinguistic(CUtlString* , int, EStringConvertErrorPolicy);
	/* ../../public/tier0/utlstring.h:133 */
	void Append(CUtlString* , const char* , int);
	/* ../../public/tier0/utlstring.h:135 */
	void Append(CUtlString* , const char* );
	/* ../../public/tier0/utlstring.h:136 */
	void Append(CUtlString* , char);
	/* ../../public/tier0/utlstring.h:139 */
	void StripTrailingSlash(CUtlString* );
	/* ../../public/tier0/utlstring.h:140 */
	void FixSlashes(CUtlString* , char);
	/* ../../public/tier0/utlstring.h:141 */
	void RemoveDotSlashes(CUtlString* , char);
	/* ../../public/tier0/utlstring.h:145 */
	void FixupPathName(CUtlString* );
	/* ../../public/tier0/utlstring.h:148 */
	void TrimLeft(CUtlString* , char);
	/* ../../public/tier0/utlstring.h:149 */
	void TrimLeft(CUtlString* , const char* );
	/* ../../public/tier0/utlstring.h:150 */
	void TrimRight(CUtlString* , char);
	/* ../../public/tier0/utlstring.h:151 */
	void TrimRight(CUtlString* , const char* );
	/* ../../public/tier0/utlstring.h:152 */
	void Trim(CUtlString* , char);
	/* ../../public/tier0/utlstring.h:153 */
	void Trim(CUtlString* , const char* );
	/* ../../public/tier0/utlstring.h:155 */
	bool IsEqual_CaseSensitive(const CUtlString* , const char* );
	/* ../../public/tier0/utlstring.h:157 */
	bool IsEqual_FastCaseInsensitive(const CUtlString* , const char* );
	/* ../../public/tier0/utlstring.h:159 */
	CUtlString& operator=(CUtlString* , const CUtlString& );
	/* ../../public/tier0/utlstring.h:164 */
	CUtlString& operator=(CUtlString* , const char* );
	/* ../../public/tier0/utlstring.h:169 */
	CUtlString& operator=(CUtlString* , const CBufferString& );
	/* ../../public/tier0/utlstring.h:172 */
	bool operator==(const CUtlString* , const CUtlString& );
	/* ../../public/tier0/utlstring.h:173 */
	bool operator!=(const CUtlString* , const CUtlString& );
	/* ../../public/tier0/utlstring.h:174 */
	bool operator==(const CUtlString* , const CBufferString& );
	/* ../../public/tier0/utlstring.h:175 */
	bool operator!=(const CUtlString* , const CBufferString& );
	/* ../../public/tier0/utlstring.h:177 */
	CUtlString& operator+=(CUtlString* , const CUtlString& );
	/* ../../public/tier0/utlstring.h:178 */
	CUtlString& operator+=(CUtlString* , const char* );
	/* ../../public/tier0/utlstring.h:179 */
	CUtlString& operator+=(CUtlString* , const CBufferString& );
	/* ../../public/tier0/utlstring.h:180 */
	CUtlString& operator+=(CUtlString* , char);
	/* ../../public/tier0/utlstring.h:181 */
	CUtlString& operator+=(CUtlString* , int);
	/* ../../public/tier0/utlstring.h:182 */
	CUtlString& operator+=(CUtlString* , double);
	/* ../../public/tier0/utlstring.h:184 */
	CUtlString operator+(const CUtlString* , const char* );
	/* ../../public/tier0/utlstring.h:185 */
	CUtlString operator+(const CUtlString* , const CUtlString& );
	/* ../../public/tier0/utlstring.h:186 */
	CUtlString operator+(const CUtlString* , int);
	/* ../../public/tier0/utlstring.h:189 */
	char operator[](const CUtlString* , int);
	/* ../../public/tier0/utlstring.h:192 */
	bool IsValid(const CUtlString* );
	/* ../../public/tier0/utlstring.h:199 */
	int Format(CUtlString* , const char* , ...);
	/* ../../public/tier0/utlstring.h:200 */
	int FormatV(CUtlString* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../../public/tier0/utlstring.h:206 */
	CUtlString Slice(const CUtlString* , int32, int32);
	/* ../../public/tier0/utlstring.h:209 */
	CUtlString Left(const CUtlString* , int32);
	/* ../../public/tier0/utlstring.h:210 */
	CUtlString Right(const CUtlString* , int32);
	/* ../../public/tier0/utlstring.h:214 */
	CUtlString Replace(const CUtlString* , char, char);
	/* ../../public/tier0/utlstring.h:217 */
	CUtlString Replace(const CUtlString* , char, const char* );
	/* ../../public/tier0/utlstring.h:221 */
	CUtlString Replace(const CUtlString* , const char* , const char* , bool);
	/* ../../public/tier0/utlstring.h:224 */
	CUtlString ReplaceFastCaseless(const CUtlString* , const char* , const char* );
	/* ../../public/tier0/utlstring.h:228 */
	CUtlString Remove(const CUtlString* , const char* , bool);
	/* ../../public/tier0/utlstring.h:231 */
	CUtlString RemoveFromStart(const CUtlString* , const char* , bool);
	/* ../../public/tier0/utlstring.h:234 */
	CUtlString Ellipsify(CUtlString* , int);
	/* ../../public/tier0/utlstring.h:237 */
	bool MatchesPattern(const CUtlString* , const CUtlString& , int);
	/* ../../public/tier0/utlstring.h:242 */
	CUtlString AbsPath(const CUtlString* , const char* );
	/* ../../public/tier0/utlstring.h:245 */
	const char* UnqualifiedFilenameInPlace(const CUtlString* );
	/* ../../public/tier0/utlstring.h:250 */
	CUtlString UnqualifiedFilenameAlloc(const CUtlString* );
	/* ../../public/tier0/utlstring.h:253 */
	CUtlString DirName(const CUtlString* );
	/* ../../public/tier0/utlstring.h:256 */
	CUtlString StripExtension(const CUtlString* );
	/* ../../public/tier0/utlstring.h:259 */
	CUtlString StripFilename(const CUtlString* );
	/* ../../public/tier0/utlstring.h:262 */
	CUtlString GetBaseFilename(const CUtlString* );
	/* ../../public/tier0/utlstring.h:265 */
	bool HasExtension(const CUtlString* );
	/* ../../public/tier0/utlstring.h:270 */
	const char* GetExtensionInPlace(const CUtlString* );
	/* ../../public/tier0/utlstring.h:275 */
	CUtlString GetExtensionAlloc(const CUtlString* );
	/* ../../public/tier0/utlstring.h:278 */
	CUtlString PathJoin(const char* , const char* );
	/* ../../public/tier0/utlstring.h:282 */
	int SortFastCaseInsensitive(const CUtlString* , const CUtlString* );
	/* ../../public/tier0/utlstring.h:283 */
	int SortCaseSensitive(const CUtlString* , const CUtlString* );
	/* ../../public/tier0/utlstring.h:288 */
	const CUtlString& GetEmptyString(void);
	/* ../../public/tier0/utlstring.h:290 */
	size_t AllocSize(const CUtlString* );
	/* ../../public/tier0/utlstring.h:293 */
	size_t GetMemoryUsage(const CUtlString* );
private:
	/* ../../public/tier0/utlstring.h:298 */
	void* GetMemoryBlock(const CUtlString* );
	/* ../../public/tier0/utlstring.h:302 */
	void* AllocMemoryBlock(CUtlString* , uint32);
	/* ../../public/tier0/utlstring.h:303 */
	void FreeMemoryBlock(CUtlString* );
	char * m_pString; /* 0 8 */
	void CUtlString(class CUtlString *); /* linkage=_ZN10CUtlStringC4Ev */
	void CUtlString(class CUtlString *, const char  *); /* linkage=_ZN10CUtlStringC4EPKc */
	void CUtlString(class CUtlString *, const char  *, int); /* linkage=_ZN10CUtlStringC4EPKci */
	void CUtlString(class CUtlString *, const class CUtlString  &); /* linkage=_ZN10CUtlStringC4ERKS_ */
	void CUtlString(class CUtlString *, const class CBufferString  &); /* linkage=_ZN10CUtlStringC4ERK13CBufferString */
	void ~CUtlString(class CUtlString *); /* linkage=_ZN10CUtlStringD4Ev */
	const char  * Get(const class CUtlString  *); /* linkage=_ZNK10CUtlString3GetEv */
	void Set(class CUtlString *, const char  *); /* linkage=_ZN10CUtlString3SetEPKc */
	void Convert(class CUtlString *, const wchar_t  *); /* linkage=_ZN10CUtlString7ConvertEPKw */
	const char  * operator char const*(const class CUtlString  *); /* linkage=_ZNK10CUtlStringcvPKcEv */
	void SetPtr(class CUtlString *, char *); /* linkage=_ZN10CUtlString6SetPtrEPc */
	void Acquire(class CUtlString *, class CBufferString *, bool); /* linkage=_ZN10CUtlString7AcquireEP13CBufferStringb */
	class CUtlString AcquireBuffer(class CBufferString *, bool); /* linkage=_ZN10CUtlString13AcquireBufferEP13CBufferStringb */
	/* <581d44> tier0/utlstring.cpp:84 */
	void SetDirect(class CUtlString *, const char  *, int); /* linkage=_ZN10CUtlString9SetDirectEPKci */
	const char  * String(const class CUtlString  *); /* linkage=_ZNK10CUtlString6StringEv */
	char * Access(class CUtlString *); /* linkage=_ZN10CUtlString6AccessEv */
	int Length(const class CUtlString  *); /* linkage=_ZNK10CUtlString6LengthEv */
	bool IsEmpty(const class CUtlString  *); /* linkage=_ZNK10CUtlString7IsEmptyEv */
	void SetLength(class CUtlString *, int); /* linkage=_ZN10CUtlString9SetLengthEi */
	char * GetForModify(class CUtlString *); /* linkage=_ZN10CUtlString12GetForModifyEv */
	void Purge(class CUtlString *); /* linkage=_ZN10CUtlString5PurgeEv */
	void Clear(class CUtlString *); /* linkage=_ZN10CUtlString5ClearEv */
	void Swap(class CUtlString *, class CUtlString &); /* linkage=_ZN10CUtlString4SwapERS_ */
	void ToLowerFast(class CUtlString *); /* linkage=_ZN10CUtlString11ToLowerFastEv */
	void ToUpperFast(class CUtlString *); /* linkage=_ZN10CUtlString11ToUpperFastEv */
	int UnicodeCaseConvert(class CUtlString *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN10CUtlString18UnicodeCaseConvertEi25EStringConvertErrorPolicy */
	int ToLowerLinguistic(class CUtlString *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN10CUtlString17ToLowerLinguisticEi25EStringConvertErrorPolicy */
	int ToUpperLinguistic(class CUtlString *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN10CUtlString17ToUpperLinguisticEi25EStringConvertErrorPolicy */
	void Append(class CUtlString *, const char  *, int); /* linkage=_ZN10CUtlString6AppendEPKci */
	void Append(class CUtlString *, const char  *); /* linkage=_ZN10CUtlString6AppendEPKc */
	void Append(class CUtlString *, char); /* linkage=_ZN10CUtlString6AppendEc */
	void StripTrailingSlash(class CUtlString *); /* linkage=_ZN10CUtlString18StripTrailingSlashEv */
	void FixSlashes(class CUtlString *, char); /* linkage=_ZN10CUtlString10FixSlashesEc */
	void RemoveDotSlashes(class CUtlString *, char); /* linkage=_ZN10CUtlString16RemoveDotSlashesEc */
	void FixupPathName(class CUtlString *); /* linkage=_ZN10CUtlString13FixupPathNameEv */
	void TrimLeft(class CUtlString *, char); /* linkage=_ZN10CUtlString8TrimLeftEc */
	void TrimLeft(class CUtlString *, const char  *); /* linkage=_ZN10CUtlString8TrimLeftEPKc */
	void TrimRight(class CUtlString *, char); /* linkage=_ZN10CUtlString9TrimRightEc */
	void TrimRight(class CUtlString *, const char  *); /* linkage=_ZN10CUtlString9TrimRightEPKc */
	void Trim(class CUtlString *, char); /* linkage=_ZN10CUtlString4TrimEc */
	void Trim(class CUtlString *, const char  *); /* linkage=_ZN10CUtlString4TrimEPKc */
	/* <581f87> tier0/utlstring.cpp:181 */
	bool IsEqual_CaseSensitive(const class CUtlString  *, const char  *); /* linkage=_ZNK10CUtlString21IsEqual_CaseSensitiveEPKc */
	bool IsEqual_FastCaseInsensitive(const class CUtlString  *, const char  *); /* linkage=_ZNK10CUtlString27IsEqual_FastCaseInsensitiveEPKc */
	class CUtlString & operator=(class CUtlString *, const class CUtlString  &); /* linkage=_ZN10CUtlStringaSERKS_ */
	class CUtlString & operator=(class CUtlString *, const char  *); /* linkage=_ZN10CUtlStringaSEPKc */
	class CUtlString & operator=(class CUtlString *, const class CBufferString  &); /* linkage=_ZN10CUtlStringaSERK13CBufferString */
	bool operator==(const class CUtlString  *, const class CUtlString  &); /* linkage=_ZNK10CUtlStringeqERKS_ */
	bool operator!=(const class CUtlString  *, const class CUtlString  &); /* linkage=_ZNK10CUtlStringneERKS_ */
	bool operator==(const class CUtlString  *, const class CBufferString  &); /* linkage=_ZNK10CUtlStringeqERK13CBufferString */
	bool operator!=(const class CUtlString  *, const class CBufferString  &); /* linkage=_ZNK10CUtlStringneERK13CBufferString */
	class CUtlString & operator+=(class CUtlString *, const class CUtlString  &); /* linkage=_ZN10CUtlStringpLERKS_ */
	class CUtlString & operator+=(class CUtlString *, const char  *); /* linkage=_ZN10CUtlStringpLEPKc */
	class CUtlString & operator+=(class CUtlString *, const class CBufferString  &); /* linkage=_ZN10CUtlStringpLERK13CBufferString */
	class CUtlString & operator+=(class CUtlString *, char); /* linkage=_ZN10CUtlStringpLEc */
	class CUtlString & operator+=(class CUtlString *, int); /* linkage=_ZN10CUtlStringpLEi */
	class CUtlString & operator+=(class CUtlString *, double); /* linkage=_ZN10CUtlStringpLEd */
	class CUtlString operator+(const class CUtlString  *, const char  *); /* linkage=_ZNK10CUtlStringplEPKc */
	class CUtlString operator+(const class CUtlString  *, const class CUtlString  &); /* linkage=_ZNK10CUtlStringplERKS_ */
	class CUtlString operator+(const class CUtlString  *, int); /* linkage=_ZNK10CUtlStringplEi */
	char operator[](const class CUtlString  *, int); /* linkage=_ZNK10CUtlStringixEi */
	bool IsValid(const class CUtlString  *); /* linkage=_ZNK10CUtlString7IsValidEv */
	int Format(class CUtlString *, const char  *, ...); /* linkage=_ZN10CUtlString6FormatEPKcz */
	int FormatV(class CUtlString *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN10CUtlString7FormatVEPKcP13__va_list_tag */
	class CUtlString Slice(const class CUtlString  *, int32, int32); /* linkage=_ZNK10CUtlString5SliceEii */
	class CUtlString Left(const class CUtlString  *, int32); /* linkage=_ZNK10CUtlString4LeftEi */
	class CUtlString Right(const class CUtlString  *, int32); /* linkage=_ZNK10CUtlString5RightEi */
	class CUtlString Replace(const class CUtlString  *, char, char); /* linkage=_ZNK10CUtlString7ReplaceEcc */
	class CUtlString Replace(const class CUtlString  *, char, const char  *); /* linkage=_ZNK10CUtlString7ReplaceEcPKc */
	class CUtlString Replace(const class CUtlString  *, const char  *, const char  *, bool); /* linkage=_ZNK10CUtlString7ReplaceEPKcS1_b */
	class CUtlString ReplaceFastCaseless(const class CUtlString  *, const char  *, const char  *); /* linkage=_ZNK10CUtlString19ReplaceFastCaselessEPKcS1_ */
	class CUtlString Remove(const class CUtlString  *, const char  *, bool); /* linkage=_ZNK10CUtlString6RemoveEPKcb */
	class CUtlString RemoveFromStart(const class CUtlString  *, const char  *, bool); /* linkage=_ZNK10CUtlString15RemoveFromStartEPKcb */
	class CUtlString Ellipsify(class CUtlString *, int); /* linkage=_ZN10CUtlString9EllipsifyEi */
	bool MatchesPattern(const class CUtlString  *, const class CUtlString  &, int); /* linkage=_ZNK10CUtlString14MatchesPatternERKS_i */
	class CUtlString AbsPath(const class CUtlString  *, const char  *); /* linkage=_ZNK10CUtlString7AbsPathEPKc */
	const char  * UnqualifiedFilenameInPlace(const class CUtlString  *); /* linkage=_ZNK10CUtlString26UnqualifiedFilenameInPlaceEv */
	class CUtlString UnqualifiedFilenameAlloc(const class CUtlString  *); /* linkage=_ZNK10CUtlString24UnqualifiedFilenameAllocEv */
	class CUtlString DirName(const class CUtlString  *); /* linkage=_ZNK10CUtlString7DirNameEv */
	class CUtlString StripExtension(const class CUtlString  *); /* linkage=_ZNK10CUtlString14StripExtensionEv */
	class CUtlString StripFilename(const class CUtlString  *); /* linkage=_ZNK10CUtlString13StripFilenameEv */
	class CUtlString GetBaseFilename(const class CUtlString  *); /* linkage=_ZNK10CUtlString15GetBaseFilenameEv */
	bool HasExtension(const class CUtlString  *); /* linkage=_ZNK10CUtlString12HasExtensionEv */
	const char  * GetExtensionInPlace(const class CUtlString  *); /* linkage=_ZNK10CUtlString19GetExtensionInPlaceEv */
	class CUtlString GetExtensionAlloc(const class CUtlString  *); /* linkage=_ZNK10CUtlString17GetExtensionAllocEv */
	class CUtlString PathJoin(const char  *, const char  *); /* linkage=_ZN10CUtlString8PathJoinEPKcS1_ */
	int SortFastCaseInsensitive(const class CUtlString  *, const class CUtlString  *); /* linkage=_ZN10CUtlString23SortFastCaseInsensitiveEPKS_S1_ */
	int SortCaseSensitive(const class CUtlString  *, const class CUtlString  *); /* linkage=_ZN10CUtlString17SortCaseSensitiveEPKS_S1_ */
	const class CUtlString  & GetEmptyString(void); /* linkage=_ZN10CUtlString14GetEmptyStringEv */
	size_t AllocSize(const class CUtlString  *); /* linkage=_ZNK10CUtlString9AllocSizeEv */
	size_t GetMemoryUsage(const class CUtlString  *); /* linkage=_ZNK10CUtlString14GetMemoryUsageEv */
	void * GetMemoryBlock(const class CUtlString  *); /* linkage=_ZNK10CUtlString14GetMemoryBlockEv */
	void * AllocMemoryBlock(class CUtlString *, uint32); /* linkage=_ZN10CUtlString16AllocMemoryBlockEj */
	void FreeMemoryBlock(class CUtlString *); /* linkage=_ZN10CUtlString15FreeMemoryBlockEv */
};

// <0057A9E7> ../public/tier0/utlstring.h:16
// member functions: 186
// member variable: 1
// class size: 8
class CUtlString {
	/* ../public/tier0/utlstring.h:20 */
	enum {
		PATTERN_NONE = 0,
		PATTERN_DIRECTORY = 1,
	};
	/* ../public/tier0/utlstring.h:26 */
	void CUtlString(CUtlString* );
	/* ../public/tier0/utlstring.h:27 */
	void CUtlString(CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:28 */
	void CUtlString(CUtlString* , const char* , int);
	/* ../public/tier0/utlstring.h:29 */
	void CUtlString(CUtlString* , const CUtlString& );
	/* ../public/tier0/utlstring.h:30 */
	void CUtlString(CUtlString* , const CBufferString& );
	/* ../public/tier0/utlstring.h:69 */
	void ~CUtlString(CUtlString* );
	/* ../public/tier0/utlstring.h:71 */
	const char* Get(const CUtlString* );
	/* ../public/tier0/utlstring.h:72 */
	void Set(CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:74 */
	void Convert(CUtlString* , const wchar_t* );
	/* ../public/tier0/utlstring.h:75 */
	const char* operator char const*(const CUtlString* );
	/* ../public/tier0/utlstring.h:78 */
	void SetPtr(CUtlString* , char* );
	/* ../public/tier0/utlstring.h:83 */
	void Acquire(CUtlString* , CBufferString* , bool);
	/* ../public/tier0/utlstring.h:84 */
	CUtlString AcquireBuffer(CBufferString* , bool);
	/* ../public/tier0/utlstring.h:96 */
	void SetDirect(CUtlString* , const char* , int);
	/* ../public/tier0/utlstring.h:99 */
	const char* String(const CUtlString* );
	/* ../public/tier0/utlstring.h:103 */
	char* Access(CUtlString* );
	/* ../public/tier0/utlstring.h:106 */
	int Length(const CUtlString* );
	/* ../public/tier0/utlstring.h:108 */
	bool IsEmpty(const CUtlString* );
	/* ../public/tier0/utlstring.h:112 */
	void SetLength(CUtlString* , int);
	/* ../public/tier0/utlstring.h:113 */
	char* GetForModify(CUtlString* );
	/* ../public/tier0/utlstring.h:114 */
	void Purge(CUtlString* );
	/* ../public/tier0/utlstring.h:115 */
	void Clear(CUtlString* );
	/* ../public/tier0/utlstring.h:117 */
	void Swap(CUtlString* , CUtlString& );
	/* ../public/tier0/utlstring.h:120 */
	void ToLowerFast(CUtlString* );
	/* ../public/tier0/utlstring.h:121 */
	void ToUpperFast(CUtlString* );
	/* ../public/tier0/utlstring.h:122 */
	int UnicodeCaseConvert(CUtlString* , int, EStringConvertErrorPolicy);
	/* ../public/tier0/utlstring.h:123 */
	int ToLowerLinguistic(CUtlString* , int, EStringConvertErrorPolicy);
	/* ../public/tier0/utlstring.h:128 */
	int ToUpperLinguistic(CUtlString* , int, EStringConvertErrorPolicy);
	/* ../public/tier0/utlstring.h:133 */
	void Append(CUtlString* , const char* , int);
	/* ../public/tier0/utlstring.h:135 */
	void Append(CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:136 */
	void Append(CUtlString* , char);
	/* ../public/tier0/utlstring.h:139 */
	void StripTrailingSlash(CUtlString* );
	/* ../public/tier0/utlstring.h:140 */
	void FixSlashes(CUtlString* , char);
	/* ../public/tier0/utlstring.h:141 */
	void RemoveDotSlashes(CUtlString* , char);
	/* ../public/tier0/utlstring.h:145 */
	void FixupPathName(CUtlString* );
	/* ../public/tier0/utlstring.h:148 */
	void TrimLeft(CUtlString* , char);
	/* ../public/tier0/utlstring.h:149 */
	void TrimLeft(CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:150 */
	void TrimRight(CUtlString* , char);
	/* ../public/tier0/utlstring.h:151 */
	void TrimRight(CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:152 */
	void Trim(CUtlString* , char);
	/* ../public/tier0/utlstring.h:153 */
	void Trim(CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:155 */
	bool IsEqual_CaseSensitive(const CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:157 */
	bool IsEqual_FastCaseInsensitive(const CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:159 */
	CUtlString& operator=(CUtlString* , const CUtlString& );
	/* ../public/tier0/utlstring.h:164 */
	CUtlString& operator=(CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:169 */
	CUtlString& operator=(CUtlString* , const CBufferString& );
	/* ../public/tier0/utlstring.h:172 */
	bool operator==(const CUtlString* , const CUtlString& );
	/* ../public/tier0/utlstring.h:173 */
	bool operator!=(const CUtlString* , const CUtlString& );
	/* ../public/tier0/utlstring.h:174 */
	bool operator==(const CUtlString* , const CBufferString& );
	/* ../public/tier0/utlstring.h:175 */
	bool operator!=(const CUtlString* , const CBufferString& );
	/* ../public/tier0/utlstring.h:177 */
	CUtlString& operator+=(CUtlString* , const CUtlString& );
	/* ../public/tier0/utlstring.h:178 */
	CUtlString& operator+=(CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:179 */
	CUtlString& operator+=(CUtlString* , const CBufferString& );
	/* ../public/tier0/utlstring.h:180 */
	CUtlString& operator+=(CUtlString* , char);
	/* ../public/tier0/utlstring.h:181 */
	CUtlString& operator+=(CUtlString* , int);
	/* ../public/tier0/utlstring.h:182 */
	CUtlString& operator+=(CUtlString* , double);
	/* ../public/tier0/utlstring.h:184 */
	CUtlString operator+(const CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:185 */
	CUtlString operator+(const CUtlString* , const CUtlString& );
	/* ../public/tier0/utlstring.h:186 */
	CUtlString operator+(const CUtlString* , int);
	/* ../public/tier0/utlstring.h:189 */
	char operator[](const CUtlString* , int);
	/* ../public/tier0/utlstring.h:192 */
	bool IsValid(const CUtlString* );
	/* ../public/tier0/utlstring.h:199 */
	int Format(CUtlString* , const char* , ...);
	/* ../public/tier0/utlstring.h:200 */
	int FormatV(CUtlString* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../public/tier0/utlstring.h:206 */
	CUtlString Slice(const CUtlString* , int32, int32);
	/* ../public/tier0/utlstring.h:209 */
	CUtlString Left(const CUtlString* , int32);
	/* ../public/tier0/utlstring.h:210 */
	CUtlString Right(const CUtlString* , int32);
	/* ../public/tier0/utlstring.h:214 */
	CUtlString Replace(const CUtlString* , char, char);
	/* ../public/tier0/utlstring.h:217 */
	CUtlString Replace(const CUtlString* , char, const char* );
	/* ../public/tier0/utlstring.h:221 */
	CUtlString Replace(const CUtlString* , const char* , const char* , bool);
	/* ../public/tier0/utlstring.h:224 */
	CUtlString ReplaceFastCaseless(const CUtlString* , const char* , const char* );
	/* ../public/tier0/utlstring.h:228 */
	CUtlString Remove(const CUtlString* , const char* , bool);
	/* ../public/tier0/utlstring.h:231 */
	CUtlString RemoveFromStart(const CUtlString* , const char* , bool);
	/* ../public/tier0/utlstring.h:234 */
	CUtlString Ellipsify(CUtlString* , int);
	/* ../public/tier0/utlstring.h:237 */
	bool MatchesPattern(const CUtlString* , const CUtlString& , int);
	/* ../public/tier0/utlstring.h:242 */
	CUtlString AbsPath(const CUtlString* , const char* );
	/* ../public/tier0/utlstring.h:245 */
	const char* UnqualifiedFilenameInPlace(const CUtlString* );
	/* ../public/tier0/utlstring.h:250 */
	CUtlString UnqualifiedFilenameAlloc(const CUtlString* );
	/* ../public/tier0/utlstring.h:253 */
	CUtlString DirName(const CUtlString* );
	/* ../public/tier0/utlstring.h:256 */
	CUtlString StripExtension(const CUtlString* );
	/* ../public/tier0/utlstring.h:259 */
	CUtlString StripFilename(const CUtlString* );
	/* ../public/tier0/utlstring.h:262 */
	CUtlString GetBaseFilename(const CUtlString* );
	/* ../public/tier0/utlstring.h:265 */
	bool HasExtension(const CUtlString* );
	/* ../public/tier0/utlstring.h:270 */
	const char* GetExtensionInPlace(const CUtlString* );
	/* ../public/tier0/utlstring.h:275 */
	CUtlString GetExtensionAlloc(const CUtlString* );
	/* ../public/tier0/utlstring.h:278 */
	CUtlString PathJoin(const char* , const char* );
	/* ../public/tier0/utlstring.h:282 */
	int SortFastCaseInsensitive(const CUtlString* , const CUtlString* );
	/* ../public/tier0/utlstring.h:283 */
	int SortCaseSensitive(const CUtlString* , const CUtlString* );
	/* ../public/tier0/utlstring.h:288 */
	const CUtlString& GetEmptyString(void);
	/* ../public/tier0/utlstring.h:290 */
	size_t AllocSize(const CUtlString* );
	/* ../public/tier0/utlstring.h:293 */
	size_t GetMemoryUsage(const CUtlString* );
private:
	/* ../public/tier0/utlstring.h:298 */
	void* GetMemoryBlock(const CUtlString* );
	/* ../public/tier0/utlstring.h:302 */
	void* AllocMemoryBlock(CUtlString* , uint32);
	/* ../public/tier0/utlstring.h:303 */
	void FreeMemoryBlock(CUtlString* );
	char * m_pString; /* 0 8 */
	/* ../public/tier0/utlstring.h:23 */
	typedef enum {
		PATTERN_NONE = 0,
		PATTERN_DIRECTORY = 1,
	} TUtlStringPattern;
	void CUtlString(class CUtlString *); /* linkage=_ZN10CUtlStringC4Ev */
	void CUtlString(class CUtlString *, const char  *); /* linkage=_ZN10CUtlStringC4EPKc */
	void CUtlString(class CUtlString *, const char  *, int); /* linkage=_ZN10CUtlStringC4EPKci */
	void CUtlString(class CUtlString *, const class CUtlString  &); /* linkage=_ZN10CUtlStringC4ERKS_ */
	void CUtlString(class CUtlString *, const class CBufferString  &); /* linkage=_ZN10CUtlStringC4ERK13CBufferString */
	void ~CUtlString(class CUtlString *); /* linkage=_ZN10CUtlStringD4Ev */
	const char  * Get(const class CUtlString  *); /* linkage=_ZNK10CUtlString3GetEv */
	void Set(class CUtlString *, const char  *); /* linkage=_ZN10CUtlString3SetEPKc */
	void Convert(class CUtlString *, const wchar_t  *); /* linkage=_ZN10CUtlString7ConvertEPKw */
	const char  * operator char const*(const class CUtlString  *); /* linkage=_ZNK10CUtlStringcvPKcEv */
	void SetPtr(class CUtlString *, char *); /* linkage=_ZN10CUtlString6SetPtrEPc */
	void Acquire(class CUtlString *, class CBufferString *, bool); /* linkage=_ZN10CUtlString7AcquireEP13CBufferStringb */
	class CUtlString AcquireBuffer(class CBufferString *, bool); /* linkage=_ZN10CUtlString13AcquireBufferEP13CBufferStringb */
	/* <581d44> tier0/utlstring.cpp:84 */
	void SetDirect(class CUtlString *, const char  *, int); /* linkage=_ZN10CUtlString9SetDirectEPKci */
	const char  * String(const class CUtlString  *); /* linkage=_ZNK10CUtlString6StringEv */
	char * Access(class CUtlString *); /* linkage=_ZN10CUtlString6AccessEv */
	int Length(const class CUtlString  *); /* linkage=_ZNK10CUtlString6LengthEv */
	bool IsEmpty(const class CUtlString  *); /* linkage=_ZNK10CUtlString7IsEmptyEv */
	void SetLength(class CUtlString *, int); /* linkage=_ZN10CUtlString9SetLengthEi */
	char * GetForModify(class CUtlString *); /* linkage=_ZN10CUtlString12GetForModifyEv */
	void Purge(class CUtlString *); /* linkage=_ZN10CUtlString5PurgeEv */
	void Clear(class CUtlString *); /* linkage=_ZN10CUtlString5ClearEv */
	void Swap(class CUtlString *, class CUtlString &); /* linkage=_ZN10CUtlString4SwapERS_ */
	void ToLowerFast(class CUtlString *); /* linkage=_ZN10CUtlString11ToLowerFastEv */
	void ToUpperFast(class CUtlString *); /* linkage=_ZN10CUtlString11ToUpperFastEv */
	int UnicodeCaseConvert(class CUtlString *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN10CUtlString18UnicodeCaseConvertEi25EStringConvertErrorPolicy */
	int ToLowerLinguistic(class CUtlString *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN10CUtlString17ToLowerLinguisticEi25EStringConvertErrorPolicy */
	int ToUpperLinguistic(class CUtlString *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN10CUtlString17ToUpperLinguisticEi25EStringConvertErrorPolicy */
	void Append(class CUtlString *, const char  *, int); /* linkage=_ZN10CUtlString6AppendEPKci */
	void Append(class CUtlString *, const char  *); /* linkage=_ZN10CUtlString6AppendEPKc */
	void Append(class CUtlString *, char); /* linkage=_ZN10CUtlString6AppendEc */
	void StripTrailingSlash(class CUtlString *); /* linkage=_ZN10CUtlString18StripTrailingSlashEv */
	void FixSlashes(class CUtlString *, char); /* linkage=_ZN10CUtlString10FixSlashesEc */
	void RemoveDotSlashes(class CUtlString *, char); /* linkage=_ZN10CUtlString16RemoveDotSlashesEc */
	void FixupPathName(class CUtlString *); /* linkage=_ZN10CUtlString13FixupPathNameEv */
	void TrimLeft(class CUtlString *, char); /* linkage=_ZN10CUtlString8TrimLeftEc */
	void TrimLeft(class CUtlString *, const char  *); /* linkage=_ZN10CUtlString8TrimLeftEPKc */
	void TrimRight(class CUtlString *, char); /* linkage=_ZN10CUtlString9TrimRightEc */
	void TrimRight(class CUtlString *, const char  *); /* linkage=_ZN10CUtlString9TrimRightEPKc */
	void Trim(class CUtlString *, char); /* linkage=_ZN10CUtlString4TrimEc */
	void Trim(class CUtlString *, const char  *); /* linkage=_ZN10CUtlString4TrimEPKc */
	/* <581f87> tier0/utlstring.cpp:181 */
	bool IsEqual_CaseSensitive(const class CUtlString  *, const char  *); /* linkage=_ZNK10CUtlString21IsEqual_CaseSensitiveEPKc */
	bool IsEqual_FastCaseInsensitive(const class CUtlString  *, const char  *); /* linkage=_ZNK10CUtlString27IsEqual_FastCaseInsensitiveEPKc */
	class CUtlString & operator=(class CUtlString *, const class CUtlString  &); /* linkage=_ZN10CUtlStringaSERKS_ */
	class CUtlString & operator=(class CUtlString *, const char  *); /* linkage=_ZN10CUtlStringaSEPKc */
	class CUtlString & operator=(class CUtlString *, const class CBufferString  &); /* linkage=_ZN10CUtlStringaSERK13CBufferString */
	bool operator==(const class CUtlString  *, const class CUtlString  &); /* linkage=_ZNK10CUtlStringeqERKS_ */
	bool operator!=(const class CUtlString  *, const class CUtlString  &); /* linkage=_ZNK10CUtlStringneERKS_ */
	bool operator==(const class CUtlString  *, const class CBufferString  &); /* linkage=_ZNK10CUtlStringeqERK13CBufferString */
	bool operator!=(const class CUtlString  *, const class CBufferString  &); /* linkage=_ZNK10CUtlStringneERK13CBufferString */
	class CUtlString & operator+=(class CUtlString *, const class CUtlString  &); /* linkage=_ZN10CUtlStringpLERKS_ */
	class CUtlString & operator+=(class CUtlString *, const char  *); /* linkage=_ZN10CUtlStringpLEPKc */
	class CUtlString & operator+=(class CUtlString *, const class CBufferString  &); /* linkage=_ZN10CUtlStringpLERK13CBufferString */
	class CUtlString & operator+=(class CUtlString *, char); /* linkage=_ZN10CUtlStringpLEc */
	class CUtlString & operator+=(class CUtlString *, int); /* linkage=_ZN10CUtlStringpLEi */
	class CUtlString & operator+=(class CUtlString *, double); /* linkage=_ZN10CUtlStringpLEd */
	class CUtlString operator+(const class CUtlString  *, const char  *); /* linkage=_ZNK10CUtlStringplEPKc */
	class CUtlString operator+(const class CUtlString  *, const class CUtlString  &); /* linkage=_ZNK10CUtlStringplERKS_ */
	class CUtlString operator+(const class CUtlString  *, int); /* linkage=_ZNK10CUtlStringplEi */
	char operator[](const class CUtlString  *, int); /* linkage=_ZNK10CUtlStringixEi */
	bool IsValid(const class CUtlString  *); /* linkage=_ZNK10CUtlString7IsValidEv */
	int Format(class CUtlString *, const char  *, ...); /* linkage=_ZN10CUtlString6FormatEPKcz */
	int FormatV(class CUtlString *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN10CUtlString7FormatVEPKcP13__va_list_tag */
	class CUtlString Slice(const class CUtlString  *, int32, int32); /* linkage=_ZNK10CUtlString5SliceEii */
	class CUtlString Left(const class CUtlString  *, int32); /* linkage=_ZNK10CUtlString4LeftEi */
	class CUtlString Right(const class CUtlString  *, int32); /* linkage=_ZNK10CUtlString5RightEi */
	class CUtlString Replace(const class CUtlString  *, char, char); /* linkage=_ZNK10CUtlString7ReplaceEcc */
	class CUtlString Replace(const class CUtlString  *, char, const char  *); /* linkage=_ZNK10CUtlString7ReplaceEcPKc */
	class CUtlString Replace(const class CUtlString  *, const char  *, const char  *, bool); /* linkage=_ZNK10CUtlString7ReplaceEPKcS1_b */
	class CUtlString ReplaceFastCaseless(const class CUtlString  *, const char  *, const char  *); /* linkage=_ZNK10CUtlString19ReplaceFastCaselessEPKcS1_ */
	class CUtlString Remove(const class CUtlString  *, const char  *, bool); /* linkage=_ZNK10CUtlString6RemoveEPKcb */
	class CUtlString RemoveFromStart(const class CUtlString  *, const char  *, bool); /* linkage=_ZNK10CUtlString15RemoveFromStartEPKcb */
	class CUtlString Ellipsify(class CUtlString *, int); /* linkage=_ZN10CUtlString9EllipsifyEi */
	bool MatchesPattern(const class CUtlString  *, const class CUtlString  &, int); /* linkage=_ZNK10CUtlString14MatchesPatternERKS_i */
	class CUtlString AbsPath(const class CUtlString  *, const char  *); /* linkage=_ZNK10CUtlString7AbsPathEPKc */
	const char  * UnqualifiedFilenameInPlace(const class CUtlString  *); /* linkage=_ZNK10CUtlString26UnqualifiedFilenameInPlaceEv */
	class CUtlString UnqualifiedFilenameAlloc(const class CUtlString  *); /* linkage=_ZNK10CUtlString24UnqualifiedFilenameAllocEv */
	class CUtlString DirName(const class CUtlString  *); /* linkage=_ZNK10CUtlString7DirNameEv */
	class CUtlString StripExtension(const class CUtlString  *); /* linkage=_ZNK10CUtlString14StripExtensionEv */
	class CUtlString StripFilename(const class CUtlString  *); /* linkage=_ZNK10CUtlString13StripFilenameEv */
	class CUtlString GetBaseFilename(const class CUtlString  *); /* linkage=_ZNK10CUtlString15GetBaseFilenameEv */
	bool HasExtension(const class CUtlString  *); /* linkage=_ZNK10CUtlString12HasExtensionEv */
	const char  * GetExtensionInPlace(const class CUtlString  *); /* linkage=_ZNK10CUtlString19GetExtensionInPlaceEv */
	class CUtlString GetExtensionAlloc(const class CUtlString  *); /* linkage=_ZNK10CUtlString17GetExtensionAllocEv */
	class CUtlString PathJoin(const char  *, const char  *); /* linkage=_ZN10CUtlString8PathJoinEPKcS1_ */
	int SortFastCaseInsensitive(const class CUtlString  *, const class CUtlString  *); /* linkage=_ZN10CUtlString23SortFastCaseInsensitiveEPKS_S1_ */
	int SortCaseSensitive(const class CUtlString  *, const class CUtlString  *); /* linkage=_ZN10CUtlString17SortCaseSensitiveEPKS_S1_ */
	const class CUtlString  & GetEmptyString(void); /* linkage=_ZN10CUtlString14GetEmptyStringEv */
	size_t AllocSize(const class CUtlString  *); /* linkage=_ZNK10CUtlString9AllocSizeEv */
	size_t GetMemoryUsage(const class CUtlString  *); /* linkage=_ZNK10CUtlString14GetMemoryUsageEv */
	void * GetMemoryBlock(const class CUtlString  *); /* linkage=_ZNK10CUtlString14GetMemoryBlockEv */
	void * AllocMemoryBlock(class CUtlString *, uint32); /* linkage=_ZN10CUtlString16AllocMemoryBlockEj */
	void FreeMemoryBlock(class CUtlString *); /* linkage=_ZN10CUtlString15FreeMemoryBlockEv */
};

// <068DB7C6> ../public/tier0/utlstring.h:30
void CUtlString::CUtlString(const CBufferString& string)
{
} /* size: 0 */

// <066D2B87> ../public/tier0/utlstring.h:84
// variable: 1
inline void AcquireBuffer(CBufferString* pStr, bool bExact)
{
	CUtlString retVal; // 86
} /* size: 0, variables: 1 */

// <06D52539> ../../public/tier0/utlstring.h:99
inline void CUtlString::String()
{
} /* size: 0 */

// <00581861> ../public/tier0/utlstring.h:103
inline void CUtlString::Access()
{
} /* size: 0 */

// <06E2A938> ../../public/tier0/utlstring.h:115
inline void CUtlString::Clear()
{
} /* size: 0 */

// <000D6A5F> ../../public/tier0/utlstring.h:136
// variable: 1
inline void CUtlString::Append(const char chAddition)
{
	char temp; // 136
} /* size: 0, variables: 1 */

// <06A763C2> ../public/tier0/utlstring.h:159
inline void CUtlString::operator=(const CUtlString& src)
{
} /* size: 0 */

// <005E9A2E> ../public/tier0/utlstring.h:159
// function calls: 3
void CUtlString::operator=(const CUtlString& src)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
} /* size: 70, inline expansions: 3 (50 bytes) */

// <06E9B3C4> ../public/tier0/utlstring.h:164
inline void CUtlString::operator=(const char* src)
{
} /* size: 0 */

// <004495BC> ../public/tier0/utlstring.h:164
void CUtlString::operator=(const char* src)
{
} /* size: 0 */

// <0023A32D> ../public/tier0/utlstring.h:173
inline void CUtlString::operator!=(const CUtlString& src)
{
} /* size: 0 */

// <006832BC> ../public/tier0/utlstring.h:224
inline void CUtlString::ReplaceFastCaseless(const char* pchFrom, const char* pchTo)
{
} /* size: 0 */

// <000C2183> ../public/tier0/utlstring.h:245
inline void CUtlString::UnqualifiedFilenameInPlace()
{
} /* size: 0 */

// <02627E2C> ../public/tier0/utlstring.h:319
inline bool operator==(const CUtlString& utlString, const char* pString)
{
} /* size: 0 */

// <002AA9EE> ../../public/tier0/utlstring.h:324
inline bool operator!=(const CUtlString& utlString, const char* pString)
{
} /* size: 0 */

// <06E9B3AD> ../public/tier0/utlstring.h:334
void CUtlString::CUtlString()
{
} /* size: 0 */

// <06E9B391> ../public/tier0/utlstring.h:334
inline void CUtlString::CUtlString()
{
} /* size: 0 */

// <06A7634E> ../public/tier0/utlstring.h:339
void CUtlString::CUtlString(const char* pString)
{
} /* size: 0 */

// <06A76325> ../public/tier0/utlstring.h:339
inline void CUtlString::CUtlString(const char* pString)
{
} /* size: 0 */

// <01876006> ../public/tier0/utlstring.h:345
void CUtlString::CUtlString(const char* pString, int length)
{
} /* size: 0 */

// <01875FD0> ../public/tier0/utlstring.h:345
inline void CUtlString::CUtlString(const char* pString, int length)
{
} /* size: 0 */

// <06A76309> ../public/tier0/utlstring.h:351
void CUtlString::CUtlString(const CUtlString& string)
{
} /* size: 0 */

// <06A762E0> ../public/tier0/utlstring.h:351
inline void CUtlString::CUtlString(const CUtlString& string)
{
} /* size: 0 */

// <00581729> ../public/tier0/utlstring.h:357
inline void* CUtlString::GetMemoryBlock()
{
} /* size: 0 */

// <06E2A921> ../../public/tier0/utlstring.h:362
void CUtlString::~CUtlString()
{
} /* size: 0 */

// <06E2A904> ../../public/tier0/utlstring.h:362
inline void CUtlString::~CUtlString()
{
} /* size: 0 */

// <06E5C906> ../../public/tier0/utlstring.h:384
inline void CUtlString::Get()
{
} /* size: 0 */

// <05732203> ../public/tier0/utlstring.h:389
inline void CUtlString::Length()
{
} /* size: 0 */

// <00581663> ../public/tier0/utlstring.h:402
inline void CUtlString::SetPtr(char* pchString)
{
} /* size: 0 */

// <06A76259> ../public/tier0/utlstring.h:411
inline void CUtlString::IsEmpty()
{
} /* size: 0 */

// <0068D505> ../public/tier0/utlstring.h:416
// function calls: 4
void SortFastCaseInsensitive(const CUtlString* pString1, const CUtlString* pString2)
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 418
	CUtlString::Get(); // 99
	CUtlString::String(); // 418
} /* size: 36, inline expansions: 4 (54 bytes) */

// <06978ADA> ../public/tier0/utlstring.h:439
inline void operator char CUtlString::const*()
{
} /* size: 0 */

// <004494B8> ../public/tier0/utlstring.h:439
void operator char CUtlString::const*()
{
} /* size: 0 */

// <0016D49A> ../public/tier0/utlstring.h:446
void CUtlStringFormat::~CUtlStringFormat()
{
} /* size: 0 */

// <0016D47D> ../public/tier0/utlstring.h:446
inline void CUtlStringFormat::~CUtlStringFormat()
{
} /* size: 0 */

// <000DBC05> ../public/tier0/utlstring.h:446
// member functions: 4
// member variable: 1
// class size: 8
class CUtlStringFormat : public CUtlString {
public:
	/* class CUtlString <ancestor>; */ /* 0 8 */
	/* ../public/tier0/utlstring.h:450 */
	void CUtlStringFormat(CUtlStringFormat* , const char* , ...);
	void ~CUtlStringFormat(CUtlStringFormat* );
	void CUtlStringFormat(class CUtlStringFormat *, const char  *, ...); /* linkage=_ZN16CUtlStringFormatC4EPKcz */
	void ~CUtlStringFormat(class CUtlStringFormat *); /* linkage=_ZN16CUtlStringFormatD4Ev */
};

// <001A37E6> ../public/tier0/utlstring.h:450
// variables: 2
// function call: 1
void CUtlStringFormat::CUtlStringFormat(const char* pFmt, ...)
{
	{
		va_list argptr; // 452
	}
	CUtlString::CUtlString(); // 451
	{
		va_list argptr; // 452
	}
} /* size: 186, inline expansions: 1 (7 bytes) */

// <001A37B0> ../public/tier0/utlstring.h:450
// variable: 1
inline void CUtlStringFormat::CUtlStringFormat(const char* pFmt, ...)
{
	{
		va_list argptr; // 452
	}
} /* size: 0 */

// <00016B02> ../public/tier0/utlstring.h:477
// member functions: 6
// class size: 1
class StringFuncs<char> {
	/* ../public/tier0/utlstring.h:480 */
	char* Duplicate(const char* );
	/* ../public/tier0/utlstring.h:481 */
	void Copy(char* , const char* , int);
	/* ../public/tier0/utlstring.h:482 */
	int Compare(const char* , const char* );
	/* ../public/tier0/utlstring.h:483 */
	int Length(const char* );
	/* ../public/tier0/utlstring.h:484 */
	const char* FindChar(const char* , char);
	/* ../public/tier0/utlstring.h:485 */
	const char* EmptyString(void);
};

// <00071B5C> ../public/tier0/utlstring.h:484
inline void FindChar(const char* pStr, const char cSearch)
{
} /* size: 0 */

// <000D6795> ../../public/tier0/utlstring.h:613
// function calls: 3
bool UtlStringLessFunc(const CUtlString& lhs, const CUtlString& rhs)
{
	CUtlString::Get(); // 613
	CUtlString::Get(); // 613
	V_strcmp(const char* s1,
		const char* s2);  // 613
} /* size: 45, inline expansions: 3 (32 bytes) */

// <00107134> ../public/tier0/utlstring.h:615
// function calls: 2
bool UtlStringFastCaseInsensitiveLessFunc(const CUtlString& lhs, const CUtlString& rhs)
{
	CUtlString::Get(); // 615
	CUtlString::Get(); // 615
} /* size: 45, inline expansions: 2 (27 bytes) */

