
//
// public/tier0/buffer_string.h
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
//	functions: 154
//	classes: 25
//

// <00013942> ../public/tier0/buffer_string.h:110
// member functions: 346
// member variables: 7
// static member variable: 1
// class size: 16
class CBufferString {
	/* ../public/tier0/buffer_string.h:198 */
	enum EAllocationOption_t {
		k_AllocateNonEmptyVal = 0,
		k_AllocateAlwaysVal = 1,
		k_AllocateExistingVal = 2,
		k_AllocateValMask = 255,
		k_AllocateCloseBit = 256,
		k_AllocateExactBit = 512,
		k_AllocateAnyBit = 1024,
		k_AllocateForce = 2147483648,
		k_AllocateNonEmptyClose = 256,
		k_AllocateNonEmptyExact = 512,
		k_AllocateNonEmptyAny = 1024,
		k_AllocateAlwaysClose = 257,
		k_AllocateAlwaysExact = 513,
		k_AllocateAlwaysAny = 1025,
		k_AllocateNoChange = 2,
	};
	/* ../public/tier0/buffer_string.h:560 */
	union {
		char * m_pBuffer; /* 0 8 */
		char m_instanceData[8]; /* 0 8 */
	};
	/* ../public/tier0/buffer_string.h:113 */
	void CBufferString(CBufferString* );
	/* ../public/tier0/buffer_string.h:114 */
	void CBufferString(CBufferString* , const char* , int, bool, bool);
	/* ../public/tier0/buffer_string.h:115 */
	void CBufferString(CBufferString* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:116 */
	void CBufferString(CBufferString* , const char* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:122 */
	void CBufferString(CBufferString* , int, bool);
	/* ../public/tier0/buffer_string.h:123 */
	void CBufferString(CBufferString* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:126 */
	void CBufferString(CBufferString* , CBufferString& );
	/* ../public/tier0/buffer_string.h:127 */
	CBufferString& operator=(CBufferString* , CBufferString& );
	/* ../public/tier0/buffer_string.h:129 */
	void ~CBufferString(CBufferString* );
	/* ../public/tier0/buffer_string.h:132 */
	const char* Get(const CBufferString* );
	/* ../public/tier0/buffer_string.h:133 */
	const char* String(const CBufferString* );
	/* ../public/tier0/buffer_string.h:134 */
	const char* operator char const*(const CBufferString* );
	/* ../public/tier0/buffer_string.h:136 */
	char operator[](const CBufferString* , int);
	/* ../public/tier0/buffer_string.h:137 */
	char GetHeadChar(const CBufferString* );
	/* ../public/tier0/buffer_string.h:138 */
	char GetTailChar(const CBufferString* );
	/* ../public/tier0/buffer_string.h:141 */
	char* Access(CBufferString* );
	/* ../public/tier0/buffer_string.h:144 */
	char* GetForModify(CBufferString* );
	/* ../public/tier0/buffer_string.h:146 */
	int Length(const CBufferString* );
	/* ../public/tier0/buffer_string.h:148 */
	int LengthBytes(const CBufferString* );
	/* ../public/tier0/buffer_string.h:149 */
	bool IsEmpty(const CBufferString* );
	/* ../public/tier0/buffer_string.h:152 */
	bool IsCurBufferFull(const CBufferString* );
	/* ../public/tier0/buffer_string.h:154 */
	bool IsFixedFull(const CBufferString* );
	/* ../public/tier0/buffer_string.h:157 */
	int LengthUnused(const CBufferString* );
	/* ../public/tier0/buffer_string.h:158 */
	int LengthUnusedBytes(const CBufferString* );
	/* ../public/tier0/buffer_string.h:161 */
	int LengthAllocated(const CBufferString* );
	/* ../public/tier0/buffer_string.h:162 */
	int LengthAllocatedBytes(const CBufferString* );
	/* ../public/tier0/buffer_string.h:163 */
	int Capacity(const CBufferString* );
	/* ../public/tier0/buffer_string.h:168 */
	bool ContainsPtr(const CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:171 */
	size_t AllocSize(const CBufferString* );
	/* ../public/tier0/buffer_string.h:173 */
	size_t NonfixedAllocSize(const CBufferString* );
	/* ../public/tier0/buffer_string.h:183 */
	int EnsureCapacity(CBufferString* , int, char** , bool, bool);
	/* ../public/tier0/buffer_string.h:186 */
	int EnsureAddedCapacity(CBufferString* , int, char** , bool, bool);
	/* ../public/tier0/buffer_string.h:196 */
	int GrowByChunks(CBufferString* , int, int);
	/* ../public/tier0/buffer_string.h:246 */
	char* EnsureOwnedAllocation(CBufferString* , EAllocationOption_t);
	/* ../public/tier0/buffer_string.h:251 */
	char* Relinquish(CBufferString* , EAllocationOption_t);
	/* ../public/tier0/buffer_string.h:258 */
	void SetPtr(CBufferString* , char* , int, int, bool, bool);
	/* ../public/tier0/buffer_string.h:260 */
	void SetFixedPtr(CBufferString* , char* , int, int, bool);
	/* ../public/tier0/buffer_string.h:269 */
	char* SetLength(CBufferString* , int, bool, int* );
	/* ../public/tier0/buffer_string.h:271 */
	char* EnsureLength(CBufferString* , int, bool, int* );
	/* ../public/tier0/buffer_string.h:278 */
	char* GetInsertPtr(CBufferString* , int, int, bool, int* );
	/* ../public/tier0/buffer_string.h:279 */
	char* GetAppendPtr(CBufferString* , int, bool, int* );
	/* ../public/tier0/buffer_string.h:280 */
	char* GetReplacePtr(CBufferString* , int, int, int, bool, int* );
	/* ../public/tier0/buffer_string.h:283 */
	int SyncStringChars(CBufferString* );
	/* ../public/tier0/buffer_string.h:285 */
	const char* TruncateAt(CBufferString* , int, bool);
	/* ../public/tier0/buffer_string.h:286 */
	const char* TruncateAt(CBufferString* , const char* , bool);
	/* ../public/tier0/buffer_string.h:288 */
	const char* Set(CBufferString* , const char* , int, bool);
	/* ../public/tier0/buffer_string.h:289 */
	CBufferString& ChainSet(CBufferString* , const char* , int, bool);
	/* ../public/tier0/buffer_string.h:290 */
	const char* SetDirect(CBufferString* , const char* , size_t);
	/* ../public/tier0/buffer_string.h:293 */
	const char* Insert(CBufferString* , int, const char* , int, bool);
	/* ../public/tier0/buffer_string.h:294 */
	const char* Insert(CBufferString* , int, char, bool);
	/* ../public/tier0/buffer_string.h:295 */
	const char* Append(CBufferString* , const char* , int, bool);
	/* ../public/tier0/buffer_string.h:296 */
	CBufferString& ChainAppend(CBufferString* , const char* , int, bool);
	/* ../public/tier0/buffer_string.h:297 */
	const char* Append(CBufferString* , const CBufferString& , bool);
	/* ../public/tier0/buffer_string.h:298 */
	CBufferString& ChainAppend(CBufferString* , const CBufferString& , bool);
	/* ../public/tier0/buffer_string.h:299 */
	const char* Append(CBufferString* , char, bool);
	/* ../public/tier0/buffer_string.h:300 */
	CBufferString& ChainAppend(CBufferString* , char, bool);
	/* ../public/tier0/buffer_string.h:301 */
	const char* AppendChar(CBufferString* , char, bool);
	/* ../public/tier0/buffer_string.h:302 */
	const char* AppendRepeat(CBufferString* , char, int, bool);
	/* ../public/tier0/buffer_string.h:305 */
	int Replace(CBufferString* , char, char);
	/* ../public/tier0/buffer_string.h:309 */
	int Replace(CBufferString* , const char* , const char* , bool);
	/* ../public/tier0/buffer_string.h:311 */
	int ReplaceFastCaseless(CBufferString* , const char* , const char* );
	/* ../public/tier0/buffer_string.h:314 */
	const char* ReplaceAt(CBufferString* , int, const char* , int, bool);
	/* ../public/tier0/buffer_string.h:316 */
	const char* ReplaceAt(CBufferString* , int, int, const char* , int, bool);
	/* ../public/tier0/buffer_string.h:319 */
	const char* ReverseChars(CBufferString* , int, int);
	/* ../public/tier0/buffer_string.h:321 */
	char* CopyOut(CBufferString* , char* , int);
	/* ../public/tier0/buffer_string.h:322 */
	const char* ConvertIn(CBufferString* , const wchar_t* , int, bool);
	/* ../public/tier0/buffer_string.h:323 */
	wchar_t* ConvertOut_bytes(CBufferString* , wchar_t* , int, EStringConvertErrorPolicy);
	/* ../public/tier0/buffer_string.h:325 */
	const char* RemoveAt(CBufferString* , int, int);
	/* ../public/tier0/buffer_string.h:326 */
	const char* RemoveHead(CBufferString* , int);
	/* ../public/tier0/buffer_string.h:327 */
	const char* RemoveTail(CBufferString* , int);
	/* ../public/tier0/buffer_string.h:332 */
	const char* RemoveAtUTF8(CBufferString* , int, int);
	/* ../public/tier0/buffer_string.h:333 */
	const char* RemoveHeadUTF8(CBufferString* , int);
	/* ../public/tier0/buffer_string.h:334 */
	const char* RemoveTailUTF8(CBufferString* , int);
	/* ../public/tier0/buffer_string.h:338 */
	const char* TrimHead(CBufferString* , char);
	/* ../public/tier0/buffer_string.h:339 */
	const char* TrimHead(CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:340 */
	const char* TrimTail(CBufferString* , char);
	/* ../public/tier0/buffer_string.h:341 */
	const char* TrimTail(CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:342 */
	const char* Trim(CBufferString* , char);
	/* ../public/tier0/buffer_string.h:343 */
	const char* Trim(CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:347 */
	int RemoveWhitespace(CBufferString* );
	/* ../public/tier0/buffer_string.h:351 */
	CBufferString& operator+=(CBufferString* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:352 */
	CBufferString& operator+=(CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:353 */
	CBufferString& operator+=(CBufferString* , char);
	/* ../public/tier0/buffer_string.h:355 */
	int Format(CBufferString* , const char* , ...);
	/* ../public/tier0/buffer_string.h:356 */
	int FormatV(CBufferString* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../public/tier0/buffer_string.h:357 */
	int AppendFormat(CBufferString* , const char* , ...);
	/* ../public/tier0/buffer_string.h:358 */
	int AppendFormatV(CBufferString* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../public/tier0/buffer_string.h:360 */
	const char* StrFormat(CBufferString* , const char* , ...);
	/* ../public/tier0/buffer_string.h:361 */
	const char* StrFormatV(CBufferString* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../public/tier0/buffer_string.h:362 */
	const char* StrAppendFormat(CBufferString* , const char* , ...);
	/* ../public/tier0/buffer_string.h:363 */
	const char* StrAppendFormatV(CBufferString* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../public/tier0/buffer_string.h:365 */
	const char* Concat(CBufferString* , int, const char* const* , const int* , bool);
	/* ../public/tier0/buffer_string.h:366 */
	const char* ConcatV(CBufferString* , const char* , const char* , typedef __va_list_tag __va_list_tag* , bool);
	/* ../public/tier0/buffer_string.h:368 */
	const char* Concat(CBufferString* , const char* , const char* , ...);
	/* ../public/tier0/buffer_string.h:369 */
	const char* Concat(CBufferString* , const char* , int, const char* , int, bool);
	/* ../public/tier0/buffer_string.h:372 */
	const char* Concat(CBufferString* , const char* , int, const char* , int, const char* , int, bool);
	/* ../public/tier0/buffer_string.h:376 */
	const char* AppendConcat(CBufferString* , int, const char* const* , const int* , bool);
	/* ../public/tier0/buffer_string.h:377 */
	const char* AppendConcatV(CBufferString* , const char* , const char* , typedef __va_list_tag __va_list_tag* , bool);
	/* ../public/tier0/buffer_string.h:379 */
	const char* AppendConcat(CBufferString* , const char* , const char* , ...);
	/* ../public/tier0/buffer_string.h:380 */
	const char* AppendConcat(CBufferString* , const char* , int, const char* , int, bool);
	/* ../public/tier0/buffer_string.h:383 */
	const char* AppendConcat(CBufferString* , const char* , int, const char* , int, const char* , int, bool);
	/* ../public/tier0/buffer_string.h:389 */
	void RemoveAll(CBufferString* );
	/* ../public/tier0/buffer_string.h:397 */
	void Purge(CBufferString* , int);
	/* ../public/tier0/buffer_string.h:403 */
	void SetUnusable(CBufferString* );
	/* ../public/tier0/buffer_string.h:409 */
	void MoveFrom(CBufferString* , CBufferString& );
	/* ../public/tier0/buffer_string.h:411 */
	CBufferString& operator=(CBufferString* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:412 */
	CBufferString& operator=(CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:414 */
	bool IsEqual_CaseSensitive(const CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:416 */
	bool IsEqual_FastCaseInsensitive(const CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:418 */
	bool operator==(const CBufferString* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:419 */
	bool operator!=(const CBufferString* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:420 */
	bool operator==(const CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:421 */
	bool operator!=(const CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:423 */
	bool StartsWith(CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:424 */
	bool StartsWith_FastCaseInsensitive(CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:426 */
	bool EndsWith(CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:427 */
	bool EndsWith_FastCaseInsensitive(CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:429 */
	void ToLowerFast(CBufferString* , int);
	/* ../public/tier0/buffer_string.h:430 */
	void ToUpperFast(CBufferString* , int);
	/* ../public/tier0/buffer_string.h:431 */
	int UnicodeCaseConvert(CBufferString* , int, EStringConvertErrorPolicy);
	/* ../public/tier0/buffer_string.h:432 */
	int ToLowerLinguistic(CBufferString* , int, EStringConvertErrorPolicy);
	/* ../public/tier0/buffer_string.h:437 */
	int ToUpperLinguistic(CBufferString* , int, EStringConvertErrorPolicy);
	/* ../public/tier0/buffer_string.h:443 */
	bool UnicodeValidate(const CBufferString* );
	/* ../public/tier0/buffer_string.h:444 */
	int UnicodeLength(const CBufferString* );
	/* ../public/tier0/buffer_string.h:445 */
	bool UnicodeRepair(CBufferString* , EStringConvertErrorPolicy);
	/* ../public/tier0/buffer_string.h:458 */
	bool RemovePartialUTF8Tail(CBufferString* , bool);
	/* ../public/tier0/buffer_string.h:460 */
	bool GetInInstance(const CBufferString* );
	/* ../public/tier0/buffer_string.h:461 */
	bool GetFreeBuffer(const CBufferString* );
	/* ../public/tier0/buffer_string.h:463 */
	bool GetError(const CBufferString* );
	/* ../public/tier0/buffer_string.h:464 */
	void SetError(CBufferString* , bool);
	/* ../public/tier0/buffer_string.h:466 */
	bool GetGrowable(const CBufferString* );
	/* ../public/tier0/buffer_string.h:467 */
	void SetGrowable(CBufferString* , bool);
	/* ../public/tier0/buffer_string.h:469 */
	bool HasTrailingSlash(const CBufferString* );
	/* ../public/tier0/buffer_string.h:470 */
	const char* StripTrailingSlash(CBufferString* );
	/* ../public/tier0/buffer_string.h:474 */
	const char* EnsureTrailingSlash(CBufferString* , char, bool);
	/* ../public/tier0/buffer_string.h:477 */
	const char* AppendSlash(CBufferString* , char);
	/* ../public/tier0/buffer_string.h:479 */
	const char* FixSlashes(CBufferString* , char);
	/* ../public/tier0/buffer_string.h:480 */
	CBufferString& ChainFixSlashes(CBufferString* , char);
	/* ../public/tier0/buffer_string.h:482 */
	const char* FixDoubleSlashes(CBufferString* );
	/* ../public/tier0/buffer_string.h:486 */
	const char* RemoveDotSlashes(CBufferString* , char);
	/* ../public/tier0/buffer_string.h:487 */
	const char* FixSlashesAndDotSlashes(CBufferString* , char);
	/* ../public/tier0/buffer_string.h:491 */
	const char* FixupPathName(CBufferString* , char);
	/* ../public/tier0/buffer_string.h:492 */
	CBufferString& ChainFixupPathName(CBufferString* , char);
	/* ../public/tier0/buffer_string.h:493 */
	const char* CopyAndFixupPathName(CBufferString* , const char* , char);
	/* ../public/tier0/buffer_string.h:500 */
	const char* ComposeFileName(CBufferString* , const char* , const char* , char);
	/* ../public/tier0/buffer_string.h:501 */
	CBufferString& ChainComposeFileName(CBufferString* , const char* , const char* , char);
	/* ../public/tier0/buffer_string.h:503 */
	const char* ExtendPath(CBufferString* , const char* , char);
	/* ../public/tier0/buffer_string.h:504 */
	CBufferString& ChainExtendPath(CBufferString* , const char* , char);
	/* ../public/tier0/buffer_string.h:506 */
	const char* ComposeExtendPath(CBufferString* , const char* , char);
	/* ../public/tier0/buffer_string.h:514 */
	const char* ShortenPath(CBufferString* , bool);
	/* ../public/tier0/buffer_string.h:515 */
	CBufferString& ChainShortenPath(CBufferString* , bool);
	/* ../public/tier0/buffer_string.h:517 */
	const char* MakeAbsolutePath(CBufferString* , const char* , const char* );
	/* ../public/tier0/buffer_string.h:519 */
	const char* MakeRelativePath(CBufferString* , const char* , const char* );
	/* ../public/tier0/buffer_string.h:522 */
	const char* ExtractFirstDir(CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:524 */
	const char* RemoveFirstDir(CBufferString* , CBufferString* );
	/* ../public/tier0/buffer_string.h:526 */
	const char* ExtractFilePath(CBufferString* , const char* , bool);
	/* ../public/tier0/buffer_string.h:527 */
	CBufferString& ChainExtractFilePath(CBufferString* , const char* , bool);
	/* ../public/tier0/buffer_string.h:529 */
	const char* RemoveFilePath(CBufferString* );
	/* ../public/tier0/buffer_string.h:530 */
	const char* ExtractFileBase(CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:531 */
	const char* RemoveToFileBase(CBufferString* );
	/* ../public/tier0/buffer_string.h:532 */
	bool HasExtension(const CBufferString* );
	/* ../public/tier0/buffer_string.h:533 */
	const char* GetFileExtension(const CBufferString* );
	/* ../public/tier0/buffer_string.h:534 */
	const char* GetUnqualifiedFileName(const CBufferString* );
	/* ../public/tier0/buffer_string.h:535 */
	const char* StripExtension(CBufferString* );
	/* ../public/tier0/buffer_string.h:536 */
	const char* CopyAndStripExtension(CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:537 */
	const char* DefaultExtension(CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:538 */
	const char* SetExtension(CBufferString* , const char* );
	/* ../public/tier0/buffer_string.h:539 */
	const char* CopyAndSetExtension(CBufferString* , const char* , const char* );
	/* ../public/tier0/buffer_string.h:540 */
	const char* ExtractFileExtension(CBufferString* , const char* );
	static const int k_nMaxBufferChars = 1073741823; /* 0 0 */
protected:
	uint32 m_nStringChars:30; /* 0: 0 4 */
	uint32 m_bError:1; /* 0:30 4 */
	uint32 m_bFreeBuffer:1; /* 0:31 4 */
	uint32 m_nBufferChars:30; /* 4: 0 4 */
	uint32 m_bInInstance:1; /* 4:30 4 */
	uint32 m_bGrowable:1; /* 4:31 4 */
	union {
		char * m_pBuffer; /* 8 8 */
		char m_instanceData[8]; /* 8 8 */
	}; /* 8 8 */
	/* ../public/tier0/buffer_string.h:568 */
	const char* ReadBuffer(const CBufferString* );
	/* ../public/tier0/buffer_string.h:570 */
	char* WriteBuffer(CBufferString* );
	/* ../public/tier0/buffer_string.h:572 */
	void InitMinConstruct(CBufferString* , bool);
	/* ../public/tier0/buffer_string.h:574 */
	int GetAllocChars(int, int);
	void CBufferString(class CBufferString *); /* linkage=_ZN13CBufferStringC4Ev */
	void CBufferString(class CBufferString *, const char  *, int, bool, bool); /* linkage=_ZN13CBufferStringC4EPKcibb */
	void CBufferString(class CBufferString *, const char  *, const char  *, bool, bool); /* linkage=_ZN13CBufferStringC4EPKcS1_bb */
	void CBufferString(class CBufferString *, const char  *, const char  *, const char  *, bool, bool); /* linkage=_ZN13CBufferStringC4EPKcS1_S1_bb */
	void CBufferString(class CBufferString *, int, bool); /* linkage=_ZN13CBufferStringC4Eib */
	void CBufferString(class CBufferString *, const class CBufferString  &); /* linkage=_ZN13CBufferStringC4ERKS_ */
	void CBufferString(class CBufferString *, class CBufferString &); /* linkage=_ZN13CBufferStringC4EOS_ */
	class CBufferString & operator=(class CBufferString *, class CBufferString &); /* linkage=_ZN13CBufferStringaSEOS_ */
	void ~CBufferString(class CBufferString *); /* linkage=_ZN13CBufferStringD4Ev */
	const char  * Get(const class CBufferString  *); /* linkage=_ZNK13CBufferString3GetEv */
	const char  * String(const class CBufferString  *); /* linkage=_ZNK13CBufferString6StringEv */
	const char  * operator char const*(const class CBufferString  *); /* linkage=_ZNK13CBufferStringcvPKcEv */
	char operator[](const class CBufferString  *, int); /* linkage=_ZNK13CBufferStringixEi */
	char GetHeadChar(const class CBufferString  *); /* linkage=_ZNK13CBufferString11GetHeadCharEv */
	char GetTailChar(const class CBufferString  *); /* linkage=_ZNK13CBufferString11GetTailCharEv */
	char * Access(class CBufferString *); /* linkage=_ZN13CBufferString6AccessEv */
	char * GetForModify(class CBufferString *); /* linkage=_ZN13CBufferString12GetForModifyEv */
	int Length(const class CBufferString  *); /* linkage=_ZNK13CBufferString6LengthEv */
	int LengthBytes(const class CBufferString  *); /* linkage=_ZNK13CBufferString11LengthBytesEv */
	bool IsEmpty(const class CBufferString  *); /* linkage=_ZNK13CBufferString7IsEmptyEv */
	bool IsCurBufferFull(const class CBufferString  *); /* linkage=_ZNK13CBufferString15IsCurBufferFullEv */
	bool IsFixedFull(const class CBufferString  *); /* linkage=_ZNK13CBufferString11IsFixedFullEv */
	int LengthUnused(const class CBufferString  *); /* linkage=_ZNK13CBufferString12LengthUnusedEv */
	int LengthUnusedBytes(const class CBufferString  *); /* linkage=_ZNK13CBufferString17LengthUnusedBytesEv */
	int LengthAllocated(const class CBufferString  *); /* linkage=_ZNK13CBufferString15LengthAllocatedEv */
	int LengthAllocatedBytes(const class CBufferString  *); /* linkage=_ZNK13CBufferString20LengthAllocatedBytesEv */
	int Capacity(const class CBufferString  *); /* linkage=_ZNK13CBufferString8CapacityEv */
	bool ContainsPtr(const class CBufferString  *, const char  *); /* linkage=_ZNK13CBufferString11ContainsPtrEPKc */
	size_t AllocSize(const class CBufferString  *); /* linkage=_ZNK13CBufferString9AllocSizeEv */
	size_t NonfixedAllocSize(const class CBufferString  *); /* linkage=_ZNK13CBufferString17NonfixedAllocSizeEv */
	int EnsureCapacity(class CBufferString *, int, char * *, bool, bool); /* linkage=_ZN13CBufferString14EnsureCapacityEiPPcbb */
	int EnsureAddedCapacity(class CBufferString *, int, char * *, bool, bool); /* linkage=_ZN13CBufferString19EnsureAddedCapacityEiPPcbb */
	int GrowByChunks(class CBufferString *, int, int); /* linkage=_ZN13CBufferString12GrowByChunksEii */
	char * EnsureOwnedAllocation(class CBufferString *, enum EAllocationOption_t); /* linkage=_ZN13CBufferString21EnsureOwnedAllocationENS_19EAllocationOption_tE */
	char * Relinquish(class CBufferString *, enum EAllocationOption_t); /* linkage=_ZN13CBufferString10RelinquishENS_19EAllocationOption_tE */
	void SetPtr(class CBufferString *, char *, int, int, bool, bool); /* linkage=_ZN13CBufferString6SetPtrEPciibb */
	void SetFixedPtr(class CBufferString *, char *, int, int, bool); /* linkage=_ZN13CBufferString11SetFixedPtrEPciib */
	char * SetLength(class CBufferString *, int, bool, int *); /* linkage=_ZN13CBufferString9SetLengthEibPi */
	char * EnsureLength(class CBufferString *, int, bool, int *); /* linkage=_ZN13CBufferString12EnsureLengthEibPi */
	char * GetInsertPtr(class CBufferString *, int, int, bool, int *); /* linkage=_ZN13CBufferString12GetInsertPtrEiibPi */
	char * GetAppendPtr(class CBufferString *, int, bool, int *); /* linkage=_ZN13CBufferString12GetAppendPtrEibPi */
	char * GetReplacePtr(class CBufferString *, int, int, int, bool, int *); /* linkage=_ZN13CBufferString13GetReplacePtrEiiibPi */
	int SyncStringChars(class CBufferString *); /* linkage=_ZN13CBufferString15SyncStringCharsEv */
	const char  * TruncateAt(class CBufferString *, int, bool); /* linkage=_ZN13CBufferString10TruncateAtEib */
	const char  * TruncateAt(class CBufferString *, const char  *, bool); /* linkage=_ZN13CBufferString10TruncateAtEPKcb */
	const char  * Set(class CBufferString *, const char  *, int, bool); /* linkage=_ZN13CBufferString3SetEPKcib */
	class CBufferString & ChainSet(class CBufferString *, const char  *, int, bool); /* linkage=_ZN13CBufferString8ChainSetEPKcib */
	const char  * SetDirect(class CBufferString *, const char  *, size_t); /* linkage=_ZN13CBufferString9SetDirectEPKcm */
	const char  * Insert(class CBufferString *, int, const char  *, int, bool); /* linkage=_ZN13CBufferString6InsertEiPKcib */
	const char  * Insert(class CBufferString *, int, char, bool); /* linkage=_ZN13CBufferString6InsertEicb */
	const char  * Append(class CBufferString *, const char  *, int, bool); /* linkage=_ZN13CBufferString6AppendEPKcib */
	class CBufferString & ChainAppend(class CBufferString *, const char  *, int, bool); /* linkage=_ZN13CBufferString11ChainAppendEPKcib */
	const char  * Append(class CBufferString *, const class CBufferString  &, bool); /* linkage=_ZN13CBufferString6AppendERKS_b */
	class CBufferString & ChainAppend(class CBufferString *, const class CBufferString  &, bool); /* linkage=_ZN13CBufferString11ChainAppendERKS_b */
	const char  * Append(class CBufferString *, char, bool); /* linkage=_ZN13CBufferString6AppendEcb */
	class CBufferString & ChainAppend(class CBufferString *, char, bool); /* linkage=_ZN13CBufferString11ChainAppendEcb */
	const char  * AppendChar(class CBufferString *, char, bool); /* linkage=_ZN13CBufferString10AppendCharEcb */
	const char  * AppendRepeat(class CBufferString *, char, int, bool); /* linkage=_ZN13CBufferString12AppendRepeatEcib */
	int Replace(class CBufferString *, char, char); /* linkage=_ZN13CBufferString7ReplaceEcc */
	int Replace(class CBufferString *, const char  *, const char  *, bool); /* linkage=_ZN13CBufferString7ReplaceEPKcS1_b */
	int ReplaceFastCaseless(class CBufferString *, const char  *, const char  *); /* linkage=_ZN13CBufferString19ReplaceFastCaselessEPKcS1_ */
	const char  * ReplaceAt(class CBufferString *, int, const char  *, int, bool); /* linkage=_ZN13CBufferString9ReplaceAtEiPKcib */
	const char  * ReplaceAt(class CBufferString *, int, int, const char  *, int, bool); /* linkage=_ZN13CBufferString9ReplaceAtEiiPKcib */
	const char  * ReverseChars(class CBufferString *, int, int); /* linkage=_ZN13CBufferString12ReverseCharsEii */
	char * CopyOut(class CBufferString *, char *, int); /* linkage=_ZN13CBufferString7CopyOutEPci */
	const char  * ConvertIn(class CBufferString *, const wchar_t  *, int, bool); /* linkage=_ZN13CBufferString9ConvertInEPKwib */
	wchar_t * ConvertOut_bytes(class CBufferString *, wchar_t *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN13CBufferString16ConvertOut_bytesEPwi25EStringConvertErrorPolicy */
	const char  * RemoveAt(class CBufferString *, int, int); /* linkage=_ZN13CBufferString8RemoveAtEii */
	const char  * RemoveHead(class CBufferString *, int); /* linkage=_ZN13CBufferString10RemoveHeadEi */
	const char  * RemoveTail(class CBufferString *, int); /* linkage=_ZN13CBufferString10RemoveTailEi */
	const char  * RemoveAtUTF8(class CBufferString *, int, int); /* linkage=_ZN13CBufferString12RemoveAtUTF8Eii */
	const char  * RemoveHeadUTF8(class CBufferString *, int); /* linkage=_ZN13CBufferString14RemoveHeadUTF8Ei */
	const char  * RemoveTailUTF8(class CBufferString *, int); /* linkage=_ZN13CBufferString14RemoveTailUTF8Ei */
	const char  * TrimHead(class CBufferString *, char); /* linkage=_ZN13CBufferString8TrimHeadEc */
	const char  * TrimHead(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString8TrimHeadEPKc */
	const char  * TrimTail(class CBufferString *, char); /* linkage=_ZN13CBufferString8TrimTailEc */
	const char  * TrimTail(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString8TrimTailEPKc */
	const char  * Trim(class CBufferString *, char); /* linkage=_ZN13CBufferString4TrimEc */
	const char  * Trim(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString4TrimEPKc */
	int RemoveWhitespace(class CBufferString *); /* linkage=_ZN13CBufferString16RemoveWhitespaceEv */
	class CBufferString & operator+=(class CBufferString *, const class CBufferString  &); /* linkage=_ZN13CBufferStringpLERKS_ */
	class CBufferString & operator+=(class CBufferString *, const char  *); /* linkage=_ZN13CBufferStringpLEPKc */
	class CBufferString & operator+=(class CBufferString *, char); /* linkage=_ZN13CBufferStringpLEc */
	int Format(class CBufferString *, const char  *, ...); /* linkage=_ZN13CBufferString6FormatEPKcz */
	int FormatV(class CBufferString *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN13CBufferString7FormatVEPKcP13__va_list_tag */
	int AppendFormat(class CBufferString *, const char  *, ...); /* linkage=_ZN13CBufferString12AppendFormatEPKcz */
	int AppendFormatV(class CBufferString *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN13CBufferString13AppendFormatVEPKcP13__va_list_tag */
	const char  * StrFormat(class CBufferString *, const char  *, ...); /* linkage=_ZN13CBufferString9StrFormatEPKcz */
	const char  * StrFormatV(class CBufferString *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN13CBufferString10StrFormatVEPKcP13__va_list_tag */
	const char  * StrAppendFormat(class CBufferString *, const char  *, ...); /* linkage=_ZN13CBufferString15StrAppendFormatEPKcz */
	const char  * StrAppendFormatV(class CBufferString *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN13CBufferString16StrAppendFormatVEPKcP13__va_list_tag */
	const char  * Concat(class CBufferString *, int, const char  * const *, const int  *, bool); /* linkage=_ZN13CBufferString6ConcatEiPKPKcPKib */
	const char  * ConcatV(class CBufferString *, const char  *, const char  *, class typedef __va_list_tag __va_list_tag *, bool); /* linkage=_ZN13CBufferString7ConcatVEPKcS1_P13__va_list_tagb */
	const char  * Concat(class CBufferString *, const char  *, const char  *, ...); /* linkage=_ZN13CBufferString6ConcatEPKcS1_z */
	const char  * Concat(class CBufferString *, const char  *, int, const char  *, int, bool); /* linkage=_ZN13CBufferString6ConcatEPKciS1_ib */
	const char  * Concat(class CBufferString *, const char  *, int, const char  *, int, const char  *, int, bool); /* linkage=_ZN13CBufferString6ConcatEPKciS1_iS1_ib */
	const char  * AppendConcat(class CBufferString *, int, const char  * const *, const int  *, bool); /* linkage=_ZN13CBufferString12AppendConcatEiPKPKcPKib */
	const char  * AppendConcatV(class CBufferString *, const char  *, const char  *, class typedef __va_list_tag __va_list_tag *, bool); /* linkage=_ZN13CBufferString13AppendConcatVEPKcS1_P13__va_list_tagb */
	const char  * AppendConcat(class CBufferString *, const char  *, const char  *, ...); /* linkage=_ZN13CBufferString12AppendConcatEPKcS1_z */
	const char  * AppendConcat(class CBufferString *, const char  *, int, const char  *, int, bool); /* linkage=_ZN13CBufferString12AppendConcatEPKciS1_ib */
	const char  * AppendConcat(class CBufferString *, const char  *, int, const char  *, int, const char  *, int, bool); /* linkage=_ZN13CBufferString12AppendConcatEPKciS1_iS1_ib */
	/* <58c885> ../public/tier0/buffer_string.h:1097 */
	void RemoveAll(class CBufferString *); /* linkage=_ZN13CBufferString9RemoveAllEv */
	void Purge(class CBufferString *, int); /* linkage=_ZN13CBufferString5PurgeEi */
	void SetUnusable(class CBufferString *); /* linkage=_ZN13CBufferString11SetUnusableEv */
	void MoveFrom(class CBufferString *, class CBufferString &); /* linkage=_ZN13CBufferString8MoveFromERS_ */
	class CBufferString & operator=(class CBufferString *, const class CBufferString  &); /* linkage=_ZN13CBufferStringaSERKS_ */
	class CBufferString & operator=(class CBufferString *, const char  *); /* linkage=_ZN13CBufferStringaSEPKc */
	bool IsEqual_CaseSensitive(const class CBufferString  *, const char  *); /* linkage=_ZNK13CBufferString21IsEqual_CaseSensitiveEPKc */
	bool IsEqual_FastCaseInsensitive(const class CBufferString  *, const char  *); /* linkage=_ZNK13CBufferString27IsEqual_FastCaseInsensitiveEPKc */
	bool operator==(const class CBufferString  *, const class CBufferString  &); /* linkage=_ZNK13CBufferStringeqERKS_ */
	bool operator!=(const class CBufferString  *, const class CBufferString  &); /* linkage=_ZNK13CBufferStringneERKS_ */
	bool operator==(const class CBufferString  *, const char  *); /* linkage=_ZNK13CBufferStringeqEPKc */
	bool operator!=(const class CBufferString  *, const char  *); /* linkage=_ZNK13CBufferStringneEPKc */
	bool StartsWith(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString10StartsWithEPKc */
	bool StartsWith_FastCaseInsensitive(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString30StartsWith_FastCaseInsensitiveEPKc */
	bool EndsWith(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString8EndsWithEPKc */
	bool EndsWith_FastCaseInsensitive(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString28EndsWith_FastCaseInsensitiveEPKc */
	void ToLowerFast(class CBufferString *, int); /* linkage=_ZN13CBufferString11ToLowerFastEi */
	void ToUpperFast(class CBufferString *, int); /* linkage=_ZN13CBufferString11ToUpperFastEi */
	int UnicodeCaseConvert(class CBufferString *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN13CBufferString18UnicodeCaseConvertEi25EStringConvertErrorPolicy */
	int ToLowerLinguistic(class CBufferString *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN13CBufferString17ToLowerLinguisticEi25EStringConvertErrorPolicy */
	int ToUpperLinguistic(class CBufferString *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN13CBufferString17ToUpperLinguisticEi25EStringConvertErrorPolicy */
	bool UnicodeValidate(const class CBufferString  *); /* linkage=_ZNK13CBufferString15UnicodeValidateEv */
	int UnicodeLength(const class CBufferString  *); /* linkage=_ZNK13CBufferString13UnicodeLengthEv */
	bool UnicodeRepair(class CBufferString *, enum EStringConvertErrorPolicy); /* linkage=_ZN13CBufferString13UnicodeRepairE25EStringConvertErrorPolicy */
	bool RemovePartialUTF8Tail(class CBufferString *, bool); /* linkage=_ZN13CBufferString21RemovePartialUTF8TailEb */
	bool GetInInstance(const class CBufferString  *); /* linkage=_ZNK13CBufferString13GetInInstanceEv */
	bool GetFreeBuffer(const class CBufferString  *); /* linkage=_ZNK13CBufferString13GetFreeBufferEv */
	bool GetError(const class CBufferString  *); /* linkage=_ZNK13CBufferString8GetErrorEv */
	void SetError(class CBufferString *, bool); /* linkage=_ZN13CBufferString8SetErrorEb */
	bool GetGrowable(const class CBufferString  *); /* linkage=_ZNK13CBufferString11GetGrowableEv */
	void SetGrowable(class CBufferString *, bool); /* linkage=_ZN13CBufferString11SetGrowableEb */
	bool HasTrailingSlash(const class CBufferString  *); /* linkage=_ZNK13CBufferString16HasTrailingSlashEv */
	const char  * StripTrailingSlash(class CBufferString *); /* linkage=_ZN13CBufferString18StripTrailingSlashEv */
	const char  * EnsureTrailingSlash(class CBufferString *, char, bool); /* linkage=_ZN13CBufferString19EnsureTrailingSlashEcb */
	const char  * AppendSlash(class CBufferString *, char); /* linkage=_ZN13CBufferString11AppendSlashEc */
	const char  * FixSlashes(class CBufferString *, char); /* linkage=_ZN13CBufferString10FixSlashesEc */
	class CBufferString & ChainFixSlashes(class CBufferString *, char); /* linkage=_ZN13CBufferString15ChainFixSlashesEc */
	const char  * FixDoubleSlashes(class CBufferString *); /* linkage=_ZN13CBufferString16FixDoubleSlashesEv */
	const char  * RemoveDotSlashes(class CBufferString *, char); /* linkage=_ZN13CBufferString16RemoveDotSlashesEc */
	const char  * FixSlashesAndDotSlashes(class CBufferString *, char); /* linkage=_ZN13CBufferString23FixSlashesAndDotSlashesEc */
	/* <4c511> tier0/buffer_string.cpp:1618 */
	const char  * FixupPathName(class CBufferString *, char); /* linkage=_ZN13CBufferString13FixupPathNameEc */
	class CBufferString & ChainFixupPathName(class CBufferString *, char); /* linkage=_ZN13CBufferString18ChainFixupPathNameEc */
	const char  * CopyAndFixupPathName(class CBufferString *, const char  *, char); /* linkage=_ZN13CBufferString20CopyAndFixupPathNameEPKcc */
	const char  * ComposeFileName(class CBufferString *, const char  *, const char  *, char); /* linkage=_ZN13CBufferString15ComposeFileNameEPKcS1_c */
	class CBufferString & ChainComposeFileName(class CBufferString *, const char  *, const char  *, char); /* linkage=_ZN13CBufferString20ChainComposeFileNameEPKcS1_c */
	/* <4cada> tier0/buffer_string.cpp:1678 */
	const char  * ExtendPath(class CBufferString *, const char  *, char); /* linkage=_ZN13CBufferString10ExtendPathEPKcc */
	class CBufferString & ChainExtendPath(class CBufferString *, const char  *, char); /* linkage=_ZN13CBufferString15ChainExtendPathEPKcc */
	const char  * ComposeExtendPath(class CBufferString *, const char  *, char); /* linkage=_ZN13CBufferString17ComposeExtendPathEPKcc */
	const char  * ShortenPath(class CBufferString *, bool); /* linkage=_ZN13CBufferString11ShortenPathEb */
	class CBufferString & ChainShortenPath(class CBufferString *, bool); /* linkage=_ZN13CBufferString16ChainShortenPathEb */
	const char  * MakeAbsolutePath(class CBufferString *, const char  *, const char  *); /* linkage=_ZN13CBufferString16MakeAbsolutePathEPKcS1_ */
	const char  * MakeRelativePath(class CBufferString *, const char  *, const char  *); /* linkage=_ZN13CBufferString16MakeRelativePathEPKcS1_ */
	const char  * ExtractFirstDir(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString15ExtractFirstDirEPKc */
	const char  * RemoveFirstDir(class CBufferString *, class CBufferString *); /* linkage=_ZN13CBufferString14RemoveFirstDirEPS_ */
	const char  * ExtractFilePath(class CBufferString *, const char  *, bool); /* linkage=_ZN13CBufferString15ExtractFilePathEPKcb */
	class CBufferString & ChainExtractFilePath(class CBufferString *, const char  *, bool); /* linkage=_ZN13CBufferString20ChainExtractFilePathEPKcb */
	/* <4cca6> tier0/buffer_string.cpp:1845 */
	const char  * RemoveFilePath(class CBufferString *); /* linkage=_ZN13CBufferString14RemoveFilePathEv */
	const char  * ExtractFileBase(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString15ExtractFileBaseEPKc */
	const char  * RemoveToFileBase(class CBufferString *); /* linkage=_ZN13CBufferString16RemoveToFileBaseEv */
	bool HasExtension(const class CBufferString  *); /* linkage=_ZNK13CBufferString12HasExtensionEv */
	const char  * GetFileExtension(const class CBufferString  *); /* linkage=_ZNK13CBufferString16GetFileExtensionEv */
	const char  * GetUnqualifiedFileName(const class CBufferString  *); /* linkage=_ZNK13CBufferString22GetUnqualifiedFileNameEv */
	/* <4c805> tier0/buffer_string.cpp:1874 */
	const char  * StripExtension(class CBufferString *); /* linkage=_ZN13CBufferString14StripExtensionEv */
	const char  * CopyAndStripExtension(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString21CopyAndStripExtensionEPKc */
	const char  * DefaultExtension(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString16DefaultExtensionEPKc */
	const char  * SetExtension(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString12SetExtensionEPKc */
	const char  * CopyAndSetExtension(class CBufferString *, const char  *, const char  *); /* linkage=_ZN13CBufferString19CopyAndSetExtensionEPKcS1_ */
	const char  * ExtractFileExtension(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString20ExtractFileExtensionEPKc */
	/* <4e99afb> ../public/tier0/buffer_string.h:1374 */
	const char  * ReadBuffer(const class CBufferString  *); /* linkage=_ZNK13CBufferString10ReadBufferEv */
	char * WriteBuffer(class CBufferString *); /* linkage=_ZN13CBufferString11WriteBufferEv */
	void InitMinConstruct(class CBufferString *, bool); /* linkage=_ZN13CBufferString16InitMinConstructEb */
	/* <4c9a2> tier0/buffer_string.cpp:1955 */
	int GetAllocChars(int, int); /* linkage=_ZN13CBufferString13GetAllocCharsEii */
};

// <057F9DA4> ../../public/tier0/buffer_string.h:110
// member functions: 346
// member variables: 7
// static member variable: 1
// class size: 16
class CBufferString {
	/* ../../public/tier0/buffer_string.h:198 */
	enum EAllocationOption_t {
		k_AllocateNonEmptyVal = 0,
		k_AllocateAlwaysVal = 1,
		k_AllocateExistingVal = 2,
		k_AllocateValMask = 255,
		k_AllocateCloseBit = 256,
		k_AllocateExactBit = 512,
		k_AllocateAnyBit = 1024,
		k_AllocateForce = 2147483648,
		k_AllocateNonEmptyClose = 256,
		k_AllocateNonEmptyExact = 512,
		k_AllocateNonEmptyAny = 1024,
		k_AllocateAlwaysClose = 257,
		k_AllocateAlwaysExact = 513,
		k_AllocateAlwaysAny = 1025,
		k_AllocateNoChange = 2,
	};
	/* ../../public/tier0/buffer_string.h:560 */
	union {
		char * m_pBuffer; /* 0 8 */
		char m_instanceData[8]; /* 0 8 */
	};
	/* ../../public/tier0/buffer_string.h:113 */
	void CBufferString(CBufferString* );
	/* ../../public/tier0/buffer_string.h:114 */
	void CBufferString(CBufferString* , const char* , int, bool, bool);
	/* ../../public/tier0/buffer_string.h:115 */
	void CBufferString(CBufferString* , const char* , const char* , bool, bool);
	/* ../../public/tier0/buffer_string.h:116 */
	void CBufferString(CBufferString* , const char* , const char* , const char* , bool, bool);
	/* ../../public/tier0/buffer_string.h:122 */
	void CBufferString(CBufferString* , int, bool);
	/* ../../public/tier0/buffer_string.h:123 */
	void CBufferString(CBufferString* , const CBufferString& );
	/* ../../public/tier0/buffer_string.h:126 */
	void CBufferString(CBufferString* , CBufferString& );
	/* ../../public/tier0/buffer_string.h:127 */
	CBufferString& operator=(CBufferString* , CBufferString& );
	/* ../../public/tier0/buffer_string.h:129 */
	void ~CBufferString(CBufferString* );
	/* ../../public/tier0/buffer_string.h:132 */
	const char* Get(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:133 */
	const char* String(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:134 */
	const char* operator char const*(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:136 */
	char operator[](const CBufferString* , int);
	/* ../../public/tier0/buffer_string.h:137 */
	char GetHeadChar(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:138 */
	char GetTailChar(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:141 */
	char* Access(CBufferString* );
	/* ../../public/tier0/buffer_string.h:144 */
	char* GetForModify(CBufferString* );
	/* ../../public/tier0/buffer_string.h:146 */
	int Length(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:148 */
	int LengthBytes(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:149 */
	bool IsEmpty(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:152 */
	bool IsCurBufferFull(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:154 */
	bool IsFixedFull(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:157 */
	int LengthUnused(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:158 */
	int LengthUnusedBytes(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:161 */
	int LengthAllocated(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:162 */
	int LengthAllocatedBytes(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:163 */
	int Capacity(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:168 */
	bool ContainsPtr(const CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:171 */
	size_t AllocSize(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:173 */
	size_t NonfixedAllocSize(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:183 */
	int EnsureCapacity(CBufferString* , int, char** , bool, bool);
	/* ../../public/tier0/buffer_string.h:186 */
	int EnsureAddedCapacity(CBufferString* , int, char** , bool, bool);
	/* ../../public/tier0/buffer_string.h:196 */
	int GrowByChunks(CBufferString* , int, int);
	/* ../../public/tier0/buffer_string.h:246 */
	char* EnsureOwnedAllocation(CBufferString* , EAllocationOption_t);
	/* ../../public/tier0/buffer_string.h:251 */
	char* Relinquish(CBufferString* , EAllocationOption_t);
	/* ../../public/tier0/buffer_string.h:258 */
	void SetPtr(CBufferString* , char* , int, int, bool, bool);
	/* ../../public/tier0/buffer_string.h:260 */
	void SetFixedPtr(CBufferString* , char* , int, int, bool);
	/* ../../public/tier0/buffer_string.h:269 */
	char* SetLength(CBufferString* , int, bool, int* );
	/* ../../public/tier0/buffer_string.h:271 */
	char* EnsureLength(CBufferString* , int, bool, int* );
	/* ../../public/tier0/buffer_string.h:278 */
	char* GetInsertPtr(CBufferString* , int, int, bool, int* );
	/* ../../public/tier0/buffer_string.h:279 */
	char* GetAppendPtr(CBufferString* , int, bool, int* );
	/* ../../public/tier0/buffer_string.h:280 */
	char* GetReplacePtr(CBufferString* , int, int, int, bool, int* );
	/* ../../public/tier0/buffer_string.h:283 */
	int SyncStringChars(CBufferString* );
	/* ../../public/tier0/buffer_string.h:285 */
	const char* TruncateAt(CBufferString* , int, bool);
	/* ../../public/tier0/buffer_string.h:286 */
	const char* TruncateAt(CBufferString* , const char* , bool);
	/* ../../public/tier0/buffer_string.h:288 */
	const char* Set(CBufferString* , const char* , int, bool);
	/* ../../public/tier0/buffer_string.h:289 */
	CBufferString& ChainSet(CBufferString* , const char* , int, bool);
	/* ../../public/tier0/buffer_string.h:290 */
	const char* SetDirect(CBufferString* , const char* , size_t);
	/* ../../public/tier0/buffer_string.h:293 */
	const char* Insert(CBufferString* , int, const char* , int, bool);
	/* ../../public/tier0/buffer_string.h:294 */
	const char* Insert(CBufferString* , int, char, bool);
	/* ../../public/tier0/buffer_string.h:295 */
	const char* Append(CBufferString* , const char* , int, bool);
	/* ../../public/tier0/buffer_string.h:296 */
	CBufferString& ChainAppend(CBufferString* , const char* , int, bool);
	/* ../../public/tier0/buffer_string.h:297 */
	const char* Append(CBufferString* , const CBufferString& , bool);
	/* ../../public/tier0/buffer_string.h:298 */
	CBufferString& ChainAppend(CBufferString* , const CBufferString& , bool);
	/* ../../public/tier0/buffer_string.h:299 */
	const char* Append(CBufferString* , char, bool);
	/* ../../public/tier0/buffer_string.h:300 */
	CBufferString& ChainAppend(CBufferString* , char, bool);
	/* ../../public/tier0/buffer_string.h:301 */
	const char* AppendChar(CBufferString* , char, bool);
	/* ../../public/tier0/buffer_string.h:302 */
	const char* AppendRepeat(CBufferString* , char, int, bool);
	/* ../../public/tier0/buffer_string.h:305 */
	int Replace(CBufferString* , char, char);
	/* ../../public/tier0/buffer_string.h:309 */
	int Replace(CBufferString* , const char* , const char* , bool);
	/* ../../public/tier0/buffer_string.h:311 */
	int ReplaceFastCaseless(CBufferString* , const char* , const char* );
	/* ../../public/tier0/buffer_string.h:314 */
	const char* ReplaceAt(CBufferString* , int, const char* , int, bool);
	/* ../../public/tier0/buffer_string.h:316 */
	const char* ReplaceAt(CBufferString* , int, int, const char* , int, bool);
	/* ../../public/tier0/buffer_string.h:319 */
	const char* ReverseChars(CBufferString* , int, int);
	/* ../../public/tier0/buffer_string.h:321 */
	char* CopyOut(CBufferString* , char* , int);
	/* ../../public/tier0/buffer_string.h:322 */
	const char* ConvertIn(CBufferString* , const wchar_t* , int, bool);
	/* ../../public/tier0/buffer_string.h:323 */
	wchar_t* ConvertOut_bytes(CBufferString* , wchar_t* , int, EStringConvertErrorPolicy);
	/* ../../public/tier0/buffer_string.h:325 */
	const char* RemoveAt(CBufferString* , int, int);
	/* ../../public/tier0/buffer_string.h:326 */
	const char* RemoveHead(CBufferString* , int);
	/* ../../public/tier0/buffer_string.h:327 */
	const char* RemoveTail(CBufferString* , int);
	/* ../../public/tier0/buffer_string.h:332 */
	const char* RemoveAtUTF8(CBufferString* , int, int);
	/* ../../public/tier0/buffer_string.h:333 */
	const char* RemoveHeadUTF8(CBufferString* , int);
	/* ../../public/tier0/buffer_string.h:334 */
	const char* RemoveTailUTF8(CBufferString* , int);
	/* ../../public/tier0/buffer_string.h:338 */
	const char* TrimHead(CBufferString* , char);
	/* ../../public/tier0/buffer_string.h:339 */
	const char* TrimHead(CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:340 */
	const char* TrimTail(CBufferString* , char);
	/* ../../public/tier0/buffer_string.h:341 */
	const char* TrimTail(CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:342 */
	const char* Trim(CBufferString* , char);
	/* ../../public/tier0/buffer_string.h:343 */
	const char* Trim(CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:347 */
	int RemoveWhitespace(CBufferString* );
	/* ../../public/tier0/buffer_string.h:351 */
	CBufferString& operator+=(CBufferString* , const CBufferString& );
	/* ../../public/tier0/buffer_string.h:352 */
	CBufferString& operator+=(CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:353 */
	CBufferString& operator+=(CBufferString* , char);
	/* ../../public/tier0/buffer_string.h:355 */
	int Format(CBufferString* , const char* , ...);
	/* ../../public/tier0/buffer_string.h:356 */
	int FormatV(CBufferString* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../../public/tier0/buffer_string.h:357 */
	int AppendFormat(CBufferString* , const char* , ...);
	/* ../../public/tier0/buffer_string.h:358 */
	int AppendFormatV(CBufferString* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../../public/tier0/buffer_string.h:360 */
	const char* StrFormat(CBufferString* , const char* , ...);
	/* ../../public/tier0/buffer_string.h:361 */
	const char* StrFormatV(CBufferString* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../../public/tier0/buffer_string.h:362 */
	const char* StrAppendFormat(CBufferString* , const char* , ...);
	/* ../../public/tier0/buffer_string.h:363 */
	const char* StrAppendFormatV(CBufferString* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../../public/tier0/buffer_string.h:365 */
	const char* Concat(CBufferString* , int, const char* const* , const int* , bool);
	/* ../../public/tier0/buffer_string.h:366 */
	const char* ConcatV(CBufferString* , const char* , const char* , typedef __va_list_tag __va_list_tag* , bool);
	/* ../../public/tier0/buffer_string.h:368 */
	const char* Concat(CBufferString* , const char* , const char* , ...);
	/* ../../public/tier0/buffer_string.h:369 */
	const char* Concat(CBufferString* , const char* , int, const char* , int, bool);
	/* ../../public/tier0/buffer_string.h:372 */
	const char* Concat(CBufferString* , const char* , int, const char* , int, const char* , int, bool);
	/* ../../public/tier0/buffer_string.h:376 */
	const char* AppendConcat(CBufferString* , int, const char* const* , const int* , bool);
	/* ../../public/tier0/buffer_string.h:377 */
	const char* AppendConcatV(CBufferString* , const char* , const char* , typedef __va_list_tag __va_list_tag* , bool);
	/* ../../public/tier0/buffer_string.h:379 */
	const char* AppendConcat(CBufferString* , const char* , const char* , ...);
	/* ../../public/tier0/buffer_string.h:380 */
	const char* AppendConcat(CBufferString* , const char* , int, const char* , int, bool);
	/* ../../public/tier0/buffer_string.h:383 */
	const char* AppendConcat(CBufferString* , const char* , int, const char* , int, const char* , int, bool);
	/* ../../public/tier0/buffer_string.h:389 */
	void RemoveAll(CBufferString* );
	/* ../../public/tier0/buffer_string.h:397 */
	void Purge(CBufferString* , int);
	/* ../../public/tier0/buffer_string.h:403 */
	void SetUnusable(CBufferString* );
	/* ../../public/tier0/buffer_string.h:409 */
	void MoveFrom(CBufferString* , CBufferString& );
	/* ../../public/tier0/buffer_string.h:411 */
	CBufferString& operator=(CBufferString* , const CBufferString& );
	/* ../../public/tier0/buffer_string.h:412 */
	CBufferString& operator=(CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:414 */
	bool IsEqual_CaseSensitive(const CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:416 */
	bool IsEqual_FastCaseInsensitive(const CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:418 */
	bool operator==(const CBufferString* , const CBufferString& );
	/* ../../public/tier0/buffer_string.h:419 */
	bool operator!=(const CBufferString* , const CBufferString& );
	/* ../../public/tier0/buffer_string.h:420 */
	bool operator==(const CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:421 */
	bool operator!=(const CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:423 */
	bool StartsWith(CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:424 */
	bool StartsWith_FastCaseInsensitive(CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:426 */
	bool EndsWith(CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:427 */
	bool EndsWith_FastCaseInsensitive(CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:429 */
	void ToLowerFast(CBufferString* , int);
	/* ../../public/tier0/buffer_string.h:430 */
	void ToUpperFast(CBufferString* , int);
	/* ../../public/tier0/buffer_string.h:431 */
	int UnicodeCaseConvert(CBufferString* , int, EStringConvertErrorPolicy);
	/* ../../public/tier0/buffer_string.h:432 */
	int ToLowerLinguistic(CBufferString* , int, EStringConvertErrorPolicy);
	/* ../../public/tier0/buffer_string.h:437 */
	int ToUpperLinguistic(CBufferString* , int, EStringConvertErrorPolicy);
	/* ../../public/tier0/buffer_string.h:443 */
	bool UnicodeValidate(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:444 */
	int UnicodeLength(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:445 */
	bool UnicodeRepair(CBufferString* , EStringConvertErrorPolicy);
	/* ../../public/tier0/buffer_string.h:458 */
	bool RemovePartialUTF8Tail(CBufferString* , bool);
	/* ../../public/tier0/buffer_string.h:460 */
	bool GetInInstance(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:461 */
	bool GetFreeBuffer(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:463 */
	bool GetError(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:464 */
	void SetError(CBufferString* , bool);
	/* ../../public/tier0/buffer_string.h:466 */
	bool GetGrowable(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:467 */
	void SetGrowable(CBufferString* , bool);
	/* ../../public/tier0/buffer_string.h:469 */
	bool HasTrailingSlash(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:470 */
	const char* StripTrailingSlash(CBufferString* );
	/* ../../public/tier0/buffer_string.h:474 */
	const char* EnsureTrailingSlash(CBufferString* , char, bool);
	/* ../../public/tier0/buffer_string.h:477 */
	const char* AppendSlash(CBufferString* , char);
	/* ../../public/tier0/buffer_string.h:479 */
	const char* FixSlashes(CBufferString* , char);
	/* ../../public/tier0/buffer_string.h:480 */
	CBufferString& ChainFixSlashes(CBufferString* , char);
	/* ../../public/tier0/buffer_string.h:482 */
	const char* FixDoubleSlashes(CBufferString* );
	/* ../../public/tier0/buffer_string.h:486 */
	const char* RemoveDotSlashes(CBufferString* , char);
	/* ../../public/tier0/buffer_string.h:487 */
	const char* FixSlashesAndDotSlashes(CBufferString* , char);
	/* ../../public/tier0/buffer_string.h:491 */
	const char* FixupPathName(CBufferString* , char);
	/* ../../public/tier0/buffer_string.h:492 */
	CBufferString& ChainFixupPathName(CBufferString* , char);
	/* ../../public/tier0/buffer_string.h:493 */
	const char* CopyAndFixupPathName(CBufferString* , const char* , char);
	/* ../../public/tier0/buffer_string.h:500 */
	const char* ComposeFileName(CBufferString* , const char* , const char* , char);
	/* ../../public/tier0/buffer_string.h:501 */
	CBufferString& ChainComposeFileName(CBufferString* , const char* , const char* , char);
	/* ../../public/tier0/buffer_string.h:503 */
	const char* ExtendPath(CBufferString* , const char* , char);
	/* ../../public/tier0/buffer_string.h:504 */
	CBufferString& ChainExtendPath(CBufferString* , const char* , char);
	/* ../../public/tier0/buffer_string.h:506 */
	const char* ComposeExtendPath(CBufferString* , const char* , char);
	/* ../../public/tier0/buffer_string.h:514 */
	const char* ShortenPath(CBufferString* , bool);
	/* ../../public/tier0/buffer_string.h:515 */
	CBufferString& ChainShortenPath(CBufferString* , bool);
	/* ../../public/tier0/buffer_string.h:517 */
	const char* MakeAbsolutePath(CBufferString* , const char* , const char* );
	/* ../../public/tier0/buffer_string.h:519 */
	const char* MakeRelativePath(CBufferString* , const char* , const char* );
	/* ../../public/tier0/buffer_string.h:522 */
	const char* ExtractFirstDir(CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:524 */
	const char* RemoveFirstDir(CBufferString* , CBufferString* );
	/* ../../public/tier0/buffer_string.h:526 */
	const char* ExtractFilePath(CBufferString* , const char* , bool);
	/* ../../public/tier0/buffer_string.h:527 */
	CBufferString& ChainExtractFilePath(CBufferString* , const char* , bool);
	/* ../../public/tier0/buffer_string.h:529 */
	const char* RemoveFilePath(CBufferString* );
	/* ../../public/tier0/buffer_string.h:530 */
	const char* ExtractFileBase(CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:531 */
	const char* RemoveToFileBase(CBufferString* );
	/* ../../public/tier0/buffer_string.h:532 */
	bool HasExtension(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:533 */
	const char* GetFileExtension(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:534 */
	const char* GetUnqualifiedFileName(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:535 */
	const char* StripExtension(CBufferString* );
	/* ../../public/tier0/buffer_string.h:536 */
	const char* CopyAndStripExtension(CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:537 */
	const char* DefaultExtension(CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:538 */
	const char* SetExtension(CBufferString* , const char* );
	/* ../../public/tier0/buffer_string.h:539 */
	const char* CopyAndSetExtension(CBufferString* , const char* , const char* );
	/* ../../public/tier0/buffer_string.h:540 */
	const char* ExtractFileExtension(CBufferString* , const char* );
	static const int k_nMaxBufferChars = 1073741823; /* 0 0 */
protected:
	uint32 m_nStringChars:30; /* 0: 0 4 */
	uint32 m_bError:1; /* 0:30 4 */
	uint32 m_bFreeBuffer:1; /* 0:31 4 */
	uint32 m_nBufferChars:30; /* 4: 0 4 */
	uint32 m_bInInstance:1; /* 4:30 4 */
	uint32 m_bGrowable:1; /* 4:31 4 */
	union {
		char * m_pBuffer; /* 8 8 */
		char m_instanceData[8]; /* 8 8 */
	}; /* 8 8 */
	/* ../../public/tier0/buffer_string.h:568 */
	const char* ReadBuffer(const CBufferString* );
	/* ../../public/tier0/buffer_string.h:570 */
	char* WriteBuffer(CBufferString* );
	/* ../../public/tier0/buffer_string.h:572 */
	void InitMinConstruct(CBufferString* , bool);
	/* ../../public/tier0/buffer_string.h:574 */
	int GetAllocChars(int, int);
	void CBufferString(class CBufferString *); /* linkage=_ZN13CBufferStringC4Ev */
	void CBufferString(class CBufferString *, const char  *, int, bool, bool); /* linkage=_ZN13CBufferStringC4EPKcibb */
	void CBufferString(class CBufferString *, const char  *, const char  *, bool, bool); /* linkage=_ZN13CBufferStringC4EPKcS1_bb */
	void CBufferString(class CBufferString *, const char  *, const char  *, const char  *, bool, bool); /* linkage=_ZN13CBufferStringC4EPKcS1_S1_bb */
	void CBufferString(class CBufferString *, int, bool); /* linkage=_ZN13CBufferStringC4Eib */
	void CBufferString(class CBufferString *, const class CBufferString  &); /* linkage=_ZN13CBufferStringC4ERKS_ */
	void CBufferString(class CBufferString *, class CBufferString &); /* linkage=_ZN13CBufferStringC4EOS_ */
	class CBufferString & operator=(class CBufferString *, class CBufferString &); /* linkage=_ZN13CBufferStringaSEOS_ */
	void ~CBufferString(class CBufferString *); /* linkage=_ZN13CBufferStringD4Ev */
	const char  * Get(const class CBufferString  *); /* linkage=_ZNK13CBufferString3GetEv */
	const char  * String(const class CBufferString  *); /* linkage=_ZNK13CBufferString6StringEv */
	const char  * operator char const*(const class CBufferString  *); /* linkage=_ZNK13CBufferStringcvPKcEv */
	char operator[](const class CBufferString  *, int); /* linkage=_ZNK13CBufferStringixEi */
	char GetHeadChar(const class CBufferString  *); /* linkage=_ZNK13CBufferString11GetHeadCharEv */
	char GetTailChar(const class CBufferString  *); /* linkage=_ZNK13CBufferString11GetTailCharEv */
	char * Access(class CBufferString *); /* linkage=_ZN13CBufferString6AccessEv */
	char * GetForModify(class CBufferString *); /* linkage=_ZN13CBufferString12GetForModifyEv */
	int Length(const class CBufferString  *); /* linkage=_ZNK13CBufferString6LengthEv */
	int LengthBytes(const class CBufferString  *); /* linkage=_ZNK13CBufferString11LengthBytesEv */
	bool IsEmpty(const class CBufferString  *); /* linkage=_ZNK13CBufferString7IsEmptyEv */
	bool IsCurBufferFull(const class CBufferString  *); /* linkage=_ZNK13CBufferString15IsCurBufferFullEv */
	bool IsFixedFull(const class CBufferString  *); /* linkage=_ZNK13CBufferString11IsFixedFullEv */
	int LengthUnused(const class CBufferString  *); /* linkage=_ZNK13CBufferString12LengthUnusedEv */
	int LengthUnusedBytes(const class CBufferString  *); /* linkage=_ZNK13CBufferString17LengthUnusedBytesEv */
	int LengthAllocated(const class CBufferString  *); /* linkage=_ZNK13CBufferString15LengthAllocatedEv */
	int LengthAllocatedBytes(const class CBufferString  *); /* linkage=_ZNK13CBufferString20LengthAllocatedBytesEv */
	int Capacity(const class CBufferString  *); /* linkage=_ZNK13CBufferString8CapacityEv */
	bool ContainsPtr(const class CBufferString  *, const char  *); /* linkage=_ZNK13CBufferString11ContainsPtrEPKc */
	size_t AllocSize(const class CBufferString  *); /* linkage=_ZNK13CBufferString9AllocSizeEv */
	size_t NonfixedAllocSize(const class CBufferString  *); /* linkage=_ZNK13CBufferString17NonfixedAllocSizeEv */
	int EnsureCapacity(class CBufferString *, int, char * *, bool, bool); /* linkage=_ZN13CBufferString14EnsureCapacityEiPPcbb */
	int EnsureAddedCapacity(class CBufferString *, int, char * *, bool, bool); /* linkage=_ZN13CBufferString19EnsureAddedCapacityEiPPcbb */
	int GrowByChunks(class CBufferString *, int, int); /* linkage=_ZN13CBufferString12GrowByChunksEii */
	char * EnsureOwnedAllocation(class CBufferString *, enum EAllocationOption_t); /* linkage=_ZN13CBufferString21EnsureOwnedAllocationENS_19EAllocationOption_tE */
	char * Relinquish(class CBufferString *, enum EAllocationOption_t); /* linkage=_ZN13CBufferString10RelinquishENS_19EAllocationOption_tE */
	void SetPtr(class CBufferString *, char *, int, int, bool, bool); /* linkage=_ZN13CBufferString6SetPtrEPciibb */
	void SetFixedPtr(class CBufferString *, char *, int, int, bool); /* linkage=_ZN13CBufferString11SetFixedPtrEPciib */
	char * SetLength(class CBufferString *, int, bool, int *); /* linkage=_ZN13CBufferString9SetLengthEibPi */
	char * EnsureLength(class CBufferString *, int, bool, int *); /* linkage=_ZN13CBufferString12EnsureLengthEibPi */
	char * GetInsertPtr(class CBufferString *, int, int, bool, int *); /* linkage=_ZN13CBufferString12GetInsertPtrEiibPi */
	char * GetAppendPtr(class CBufferString *, int, bool, int *); /* linkage=_ZN13CBufferString12GetAppendPtrEibPi */
	char * GetReplacePtr(class CBufferString *, int, int, int, bool, int *); /* linkage=_ZN13CBufferString13GetReplacePtrEiiibPi */
	int SyncStringChars(class CBufferString *); /* linkage=_ZN13CBufferString15SyncStringCharsEv */
	const char  * TruncateAt(class CBufferString *, int, bool); /* linkage=_ZN13CBufferString10TruncateAtEib */
	const char  * TruncateAt(class CBufferString *, const char  *, bool); /* linkage=_ZN13CBufferString10TruncateAtEPKcb */
	const char  * Set(class CBufferString *, const char  *, int, bool); /* linkage=_ZN13CBufferString3SetEPKcib */
	class CBufferString & ChainSet(class CBufferString *, const char  *, int, bool); /* linkage=_ZN13CBufferString8ChainSetEPKcib */
	const char  * SetDirect(class CBufferString *, const char  *, size_t); /* linkage=_ZN13CBufferString9SetDirectEPKcm */
	const char  * Insert(class CBufferString *, int, const char  *, int, bool); /* linkage=_ZN13CBufferString6InsertEiPKcib */
	const char  * Insert(class CBufferString *, int, char, bool); /* linkage=_ZN13CBufferString6InsertEicb */
	const char  * Append(class CBufferString *, const char  *, int, bool); /* linkage=_ZN13CBufferString6AppendEPKcib */
	class CBufferString & ChainAppend(class CBufferString *, const char  *, int, bool); /* linkage=_ZN13CBufferString11ChainAppendEPKcib */
	const char  * Append(class CBufferString *, const class CBufferString  &, bool); /* linkage=_ZN13CBufferString6AppendERKS_b */
	class CBufferString & ChainAppend(class CBufferString *, const class CBufferString  &, bool); /* linkage=_ZN13CBufferString11ChainAppendERKS_b */
	const char  * Append(class CBufferString *, char, bool); /* linkage=_ZN13CBufferString6AppendEcb */
	class CBufferString & ChainAppend(class CBufferString *, char, bool); /* linkage=_ZN13CBufferString11ChainAppendEcb */
	const char  * AppendChar(class CBufferString *, char, bool); /* linkage=_ZN13CBufferString10AppendCharEcb */
	const char  * AppendRepeat(class CBufferString *, char, int, bool); /* linkage=_ZN13CBufferString12AppendRepeatEcib */
	int Replace(class CBufferString *, char, char); /* linkage=_ZN13CBufferString7ReplaceEcc */
	int Replace(class CBufferString *, const char  *, const char  *, bool); /* linkage=_ZN13CBufferString7ReplaceEPKcS1_b */
	int ReplaceFastCaseless(class CBufferString *, const char  *, const char  *); /* linkage=_ZN13CBufferString19ReplaceFastCaselessEPKcS1_ */
	const char  * ReplaceAt(class CBufferString *, int, const char  *, int, bool); /* linkage=_ZN13CBufferString9ReplaceAtEiPKcib */
	const char  * ReplaceAt(class CBufferString *, int, int, const char  *, int, bool); /* linkage=_ZN13CBufferString9ReplaceAtEiiPKcib */
	const char  * ReverseChars(class CBufferString *, int, int); /* linkage=_ZN13CBufferString12ReverseCharsEii */
	char * CopyOut(class CBufferString *, char *, int); /* linkage=_ZN13CBufferString7CopyOutEPci */
	const char  * ConvertIn(class CBufferString *, const wchar_t  *, int, bool); /* linkage=_ZN13CBufferString9ConvertInEPKwib */
	wchar_t * ConvertOut_bytes(class CBufferString *, wchar_t *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN13CBufferString16ConvertOut_bytesEPwi25EStringConvertErrorPolicy */
	const char  * RemoveAt(class CBufferString *, int, int); /* linkage=_ZN13CBufferString8RemoveAtEii */
	const char  * RemoveHead(class CBufferString *, int); /* linkage=_ZN13CBufferString10RemoveHeadEi */
	const char  * RemoveTail(class CBufferString *, int); /* linkage=_ZN13CBufferString10RemoveTailEi */
	const char  * RemoveAtUTF8(class CBufferString *, int, int); /* linkage=_ZN13CBufferString12RemoveAtUTF8Eii */
	const char  * RemoveHeadUTF8(class CBufferString *, int); /* linkage=_ZN13CBufferString14RemoveHeadUTF8Ei */
	const char  * RemoveTailUTF8(class CBufferString *, int); /* linkage=_ZN13CBufferString14RemoveTailUTF8Ei */
	const char  * TrimHead(class CBufferString *, char); /* linkage=_ZN13CBufferString8TrimHeadEc */
	const char  * TrimHead(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString8TrimHeadEPKc */
	const char  * TrimTail(class CBufferString *, char); /* linkage=_ZN13CBufferString8TrimTailEc */
	const char  * TrimTail(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString8TrimTailEPKc */
	const char  * Trim(class CBufferString *, char); /* linkage=_ZN13CBufferString4TrimEc */
	const char  * Trim(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString4TrimEPKc */
	int RemoveWhitespace(class CBufferString *); /* linkage=_ZN13CBufferString16RemoveWhitespaceEv */
	class CBufferString & operator+=(class CBufferString *, const class CBufferString  &); /* linkage=_ZN13CBufferStringpLERKS_ */
	class CBufferString & operator+=(class CBufferString *, const char  *); /* linkage=_ZN13CBufferStringpLEPKc */
	class CBufferString & operator+=(class CBufferString *, char); /* linkage=_ZN13CBufferStringpLEc */
	int Format(class CBufferString *, const char  *, ...); /* linkage=_ZN13CBufferString6FormatEPKcz */
	int FormatV(class CBufferString *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN13CBufferString7FormatVEPKcP13__va_list_tag */
	int AppendFormat(class CBufferString *, const char  *, ...); /* linkage=_ZN13CBufferString12AppendFormatEPKcz */
	int AppendFormatV(class CBufferString *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN13CBufferString13AppendFormatVEPKcP13__va_list_tag */
	const char  * StrFormat(class CBufferString *, const char  *, ...); /* linkage=_ZN13CBufferString9StrFormatEPKcz */
	const char  * StrFormatV(class CBufferString *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN13CBufferString10StrFormatVEPKcP13__va_list_tag */
	const char  * StrAppendFormat(class CBufferString *, const char  *, ...); /* linkage=_ZN13CBufferString15StrAppendFormatEPKcz */
	const char  * StrAppendFormatV(class CBufferString *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN13CBufferString16StrAppendFormatVEPKcP13__va_list_tag */
	const char  * Concat(class CBufferString *, int, const char  * const *, const int  *, bool); /* linkage=_ZN13CBufferString6ConcatEiPKPKcPKib */
	const char  * ConcatV(class CBufferString *, const char  *, const char  *, class typedef __va_list_tag __va_list_tag *, bool); /* linkage=_ZN13CBufferString7ConcatVEPKcS1_P13__va_list_tagb */
	const char  * Concat(class CBufferString *, const char  *, const char  *, ...); /* linkage=_ZN13CBufferString6ConcatEPKcS1_z */
	const char  * Concat(class CBufferString *, const char  *, int, const char  *, int, bool); /* linkage=_ZN13CBufferString6ConcatEPKciS1_ib */
	const char  * Concat(class CBufferString *, const char  *, int, const char  *, int, const char  *, int, bool); /* linkage=_ZN13CBufferString6ConcatEPKciS1_iS1_ib */
	const char  * AppendConcat(class CBufferString *, int, const char  * const *, const int  *, bool); /* linkage=_ZN13CBufferString12AppendConcatEiPKPKcPKib */
	const char  * AppendConcatV(class CBufferString *, const char  *, const char  *, class typedef __va_list_tag __va_list_tag *, bool); /* linkage=_ZN13CBufferString13AppendConcatVEPKcS1_P13__va_list_tagb */
	const char  * AppendConcat(class CBufferString *, const char  *, const char  *, ...); /* linkage=_ZN13CBufferString12AppendConcatEPKcS1_z */
	const char  * AppendConcat(class CBufferString *, const char  *, int, const char  *, int, bool); /* linkage=_ZN13CBufferString12AppendConcatEPKciS1_ib */
	const char  * AppendConcat(class CBufferString *, const char  *, int, const char  *, int, const char  *, int, bool); /* linkage=_ZN13CBufferString12AppendConcatEPKciS1_iS1_ib */
	/* <58c885> ../public/tier0/buffer_string.h:1097 */
	void RemoveAll(class CBufferString *); /* linkage=_ZN13CBufferString9RemoveAllEv */
	void Purge(class CBufferString *, int); /* linkage=_ZN13CBufferString5PurgeEi */
	void SetUnusable(class CBufferString *); /* linkage=_ZN13CBufferString11SetUnusableEv */
	void MoveFrom(class CBufferString *, class CBufferString &); /* linkage=_ZN13CBufferString8MoveFromERS_ */
	class CBufferString & operator=(class CBufferString *, const class CBufferString  &); /* linkage=_ZN13CBufferStringaSERKS_ */
	class CBufferString & operator=(class CBufferString *, const char  *); /* linkage=_ZN13CBufferStringaSEPKc */
	bool IsEqual_CaseSensitive(const class CBufferString  *, const char  *); /* linkage=_ZNK13CBufferString21IsEqual_CaseSensitiveEPKc */
	bool IsEqual_FastCaseInsensitive(const class CBufferString  *, const char  *); /* linkage=_ZNK13CBufferString27IsEqual_FastCaseInsensitiveEPKc */
	bool operator==(const class CBufferString  *, const class CBufferString  &); /* linkage=_ZNK13CBufferStringeqERKS_ */
	bool operator!=(const class CBufferString  *, const class CBufferString  &); /* linkage=_ZNK13CBufferStringneERKS_ */
	bool operator==(const class CBufferString  *, const char  *); /* linkage=_ZNK13CBufferStringeqEPKc */
	bool operator!=(const class CBufferString  *, const char  *); /* linkage=_ZNK13CBufferStringneEPKc */
	bool StartsWith(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString10StartsWithEPKc */
	bool StartsWith_FastCaseInsensitive(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString30StartsWith_FastCaseInsensitiveEPKc */
	bool EndsWith(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString8EndsWithEPKc */
	bool EndsWith_FastCaseInsensitive(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString28EndsWith_FastCaseInsensitiveEPKc */
	void ToLowerFast(class CBufferString *, int); /* linkage=_ZN13CBufferString11ToLowerFastEi */
	void ToUpperFast(class CBufferString *, int); /* linkage=_ZN13CBufferString11ToUpperFastEi */
	int UnicodeCaseConvert(class CBufferString *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN13CBufferString18UnicodeCaseConvertEi25EStringConvertErrorPolicy */
	int ToLowerLinguistic(class CBufferString *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN13CBufferString17ToLowerLinguisticEi25EStringConvertErrorPolicy */
	int ToUpperLinguistic(class CBufferString *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN13CBufferString17ToUpperLinguisticEi25EStringConvertErrorPolicy */
	bool UnicodeValidate(const class CBufferString  *); /* linkage=_ZNK13CBufferString15UnicodeValidateEv */
	int UnicodeLength(const class CBufferString  *); /* linkage=_ZNK13CBufferString13UnicodeLengthEv */
	bool UnicodeRepair(class CBufferString *, enum EStringConvertErrorPolicy); /* linkage=_ZN13CBufferString13UnicodeRepairE25EStringConvertErrorPolicy */
	bool RemovePartialUTF8Tail(class CBufferString *, bool); /* linkage=_ZN13CBufferString21RemovePartialUTF8TailEb */
	bool GetInInstance(const class CBufferString  *); /* linkage=_ZNK13CBufferString13GetInInstanceEv */
	bool GetFreeBuffer(const class CBufferString  *); /* linkage=_ZNK13CBufferString13GetFreeBufferEv */
	bool GetError(const class CBufferString  *); /* linkage=_ZNK13CBufferString8GetErrorEv */
	void SetError(class CBufferString *, bool); /* linkage=_ZN13CBufferString8SetErrorEb */
	bool GetGrowable(const class CBufferString  *); /* linkage=_ZNK13CBufferString11GetGrowableEv */
	void SetGrowable(class CBufferString *, bool); /* linkage=_ZN13CBufferString11SetGrowableEb */
	bool HasTrailingSlash(const class CBufferString  *); /* linkage=_ZNK13CBufferString16HasTrailingSlashEv */
	const char  * StripTrailingSlash(class CBufferString *); /* linkage=_ZN13CBufferString18StripTrailingSlashEv */
	const char  * EnsureTrailingSlash(class CBufferString *, char, bool); /* linkage=_ZN13CBufferString19EnsureTrailingSlashEcb */
	const char  * AppendSlash(class CBufferString *, char); /* linkage=_ZN13CBufferString11AppendSlashEc */
	const char  * FixSlashes(class CBufferString *, char); /* linkage=_ZN13CBufferString10FixSlashesEc */
	class CBufferString & ChainFixSlashes(class CBufferString *, char); /* linkage=_ZN13CBufferString15ChainFixSlashesEc */
	const char  * FixDoubleSlashes(class CBufferString *); /* linkage=_ZN13CBufferString16FixDoubleSlashesEv */
	const char  * RemoveDotSlashes(class CBufferString *, char); /* linkage=_ZN13CBufferString16RemoveDotSlashesEc */
	const char  * FixSlashesAndDotSlashes(class CBufferString *, char); /* linkage=_ZN13CBufferString23FixSlashesAndDotSlashesEc */
	/* <4c511> tier0/buffer_string.cpp:1618 */
	const char  * FixupPathName(class CBufferString *, char); /* linkage=_ZN13CBufferString13FixupPathNameEc */
	class CBufferString & ChainFixupPathName(class CBufferString *, char); /* linkage=_ZN13CBufferString18ChainFixupPathNameEc */
	const char  * CopyAndFixupPathName(class CBufferString *, const char  *, char); /* linkage=_ZN13CBufferString20CopyAndFixupPathNameEPKcc */
	const char  * ComposeFileName(class CBufferString *, const char  *, const char  *, char); /* linkage=_ZN13CBufferString15ComposeFileNameEPKcS1_c */
	class CBufferString & ChainComposeFileName(class CBufferString *, const char  *, const char  *, char); /* linkage=_ZN13CBufferString20ChainComposeFileNameEPKcS1_c */
	/* <4cada> tier0/buffer_string.cpp:1678 */
	const char  * ExtendPath(class CBufferString *, const char  *, char); /* linkage=_ZN13CBufferString10ExtendPathEPKcc */
	class CBufferString & ChainExtendPath(class CBufferString *, const char  *, char); /* linkage=_ZN13CBufferString15ChainExtendPathEPKcc */
	const char  * ComposeExtendPath(class CBufferString *, const char  *, char); /* linkage=_ZN13CBufferString17ComposeExtendPathEPKcc */
	const char  * ShortenPath(class CBufferString *, bool); /* linkage=_ZN13CBufferString11ShortenPathEb */
	class CBufferString & ChainShortenPath(class CBufferString *, bool); /* linkage=_ZN13CBufferString16ChainShortenPathEb */
	const char  * MakeAbsolutePath(class CBufferString *, const char  *, const char  *); /* linkage=_ZN13CBufferString16MakeAbsolutePathEPKcS1_ */
	const char  * MakeRelativePath(class CBufferString *, const char  *, const char  *); /* linkage=_ZN13CBufferString16MakeRelativePathEPKcS1_ */
	const char  * ExtractFirstDir(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString15ExtractFirstDirEPKc */
	const char  * RemoveFirstDir(class CBufferString *, class CBufferString *); /* linkage=_ZN13CBufferString14RemoveFirstDirEPS_ */
	const char  * ExtractFilePath(class CBufferString *, const char  *, bool); /* linkage=_ZN13CBufferString15ExtractFilePathEPKcb */
	class CBufferString & ChainExtractFilePath(class CBufferString *, const char  *, bool); /* linkage=_ZN13CBufferString20ChainExtractFilePathEPKcb */
	/* <4cca6> tier0/buffer_string.cpp:1845 */
	const char  * RemoveFilePath(class CBufferString *); /* linkage=_ZN13CBufferString14RemoveFilePathEv */
	const char  * ExtractFileBase(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString15ExtractFileBaseEPKc */
	const char  * RemoveToFileBase(class CBufferString *); /* linkage=_ZN13CBufferString16RemoveToFileBaseEv */
	bool HasExtension(const class CBufferString  *); /* linkage=_ZNK13CBufferString12HasExtensionEv */
	const char  * GetFileExtension(const class CBufferString  *); /* linkage=_ZNK13CBufferString16GetFileExtensionEv */
	const char  * GetUnqualifiedFileName(const class CBufferString  *); /* linkage=_ZNK13CBufferString22GetUnqualifiedFileNameEv */
	/* <4c805> tier0/buffer_string.cpp:1874 */
	const char  * StripExtension(class CBufferString *); /* linkage=_ZN13CBufferString14StripExtensionEv */
	const char  * CopyAndStripExtension(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString21CopyAndStripExtensionEPKc */
	const char  * DefaultExtension(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString16DefaultExtensionEPKc */
	const char  * SetExtension(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString12SetExtensionEPKc */
	const char  * CopyAndSetExtension(class CBufferString *, const char  *, const char  *); /* linkage=_ZN13CBufferString19CopyAndSetExtensionEPKcS1_ */
	const char  * ExtractFileExtension(class CBufferString *, const char  *); /* linkage=_ZN13CBufferString20ExtractFileExtensionEPKc */
	/* <4e99afb> ../public/tier0/buffer_string.h:1374 */
	const char  * ReadBuffer(const class CBufferString  *); /* linkage=_ZNK13CBufferString10ReadBufferEv */
	char * WriteBuffer(class CBufferString *); /* linkage=_ZN13CBufferString11WriteBufferEv */
	void InitMinConstruct(class CBufferString *, bool); /* linkage=_ZN13CBufferString16InitMinConstructEb */
	/* <4c9a2> tier0/buffer_string.cpp:1955 */
	int GetAllocChars(int, int); /* linkage=_ZN13CBufferString13GetAllocCharsEii */
};

// <06E6CAC0> ../../public/tier0/buffer_string.h:587
void CBufferStringN<200>::~CBufferStringN()
{
} /* size: 0 */

// <06E6CAA3> ../../public/tier0/buffer_string.h:587
inline void CBufferStringN<200>::~CBufferStringN()
{
} /* size: 0 */

// <06A6E054> ../public/tier0/buffer_string.h:587
void CBufferStringN<256>::~CBufferStringN()
{
} /* size: 0 */

// <06A6E036> ../public/tier0/buffer_string.h:587
inline void CBufferStringN<256>::~CBufferStringN()
{
} /* size: 0 */

// <066D272C> ../public/tier0/buffer_string.h:587
void CBufferStringN<30>::~CBufferStringN()
{
} /* size: 0 */

// <066D270F> ../public/tier0/buffer_string.h:587
inline void CBufferStringN<30>::~CBufferStringN()
{
} /* size: 0 */

// <056E6D1F> ../public/tier0/buffer_string.h:587
void CBufferStringN<1024>::~CBufferStringN()
{
} /* size: 0 */

// <056E6D02> ../public/tier0/buffer_string.h:587
inline void CBufferStringN<1024>::~CBufferStringN()
{
} /* size: 0 */

// <056C575F> ../public/tier0/buffer_string.h:587
void CBufferStringN<80>::~CBufferStringN()
{
} /* size: 0 */

// <056C5742> ../public/tier0/buffer_string.h:587
inline void CBufferStringN<80>::~CBufferStringN()
{
} /* size: 0 */

// <056C1797> ../public/tier0/buffer_string.h:587
void CBufferStringN<128>::~CBufferStringN()
{
} /* size: 0 */

// <056C177A> ../public/tier0/buffer_string.h:587
inline void CBufferStringN<128>::~CBufferStringN()
{
} /* size: 0 */

// <0464A25D> ../public/tier0/buffer_string.h:587
void CBufferStringN<40>::~CBufferStringN()
{
} /* size: 0 */

// <0464A240> ../public/tier0/buffer_string.h:587
inline void CBufferStringN<40>::~CBufferStringN()
{
} /* size: 0 */

// <013524C9> ../public/tier0/buffer_string.h:587
// function call: 1
void CBufferStringN<200>::~CBufferStringN()
{
	CBufferString::~CBufferString(); // 587
} /* size: 9, inline expansions: 1 (5 bytes) */

// <007D5A9B> ../public/tier0/buffer_string.h:587
void CBufferStringN<50>::~CBufferStringN()
{
} /* size: 0 */

// <007D5A7D> ../public/tier0/buffer_string.h:587
inline void CBufferStringN<50>::~CBufferStringN()
{
} /* size: 0 */

// <0013A1DE> ../public/tier0/buffer_string.h:587
void CBufferStringN<20>::~CBufferStringN()
{
} /* size: 0 */

// <0013A1C0> ../public/tier0/buffer_string.h:587
inline void CBufferStringN<20>::~CBufferStringN()
{
} /* size: 0 */

// <0013A1A9> ../public/tier0/buffer_string.h:587
void CBufferStringN<100>::~CBufferStringN()
{
} /* size: 0 */

// <0013A18B> ../public/tier0/buffer_string.h:587
inline void CBufferStringN<100>::~CBufferStringN()
{
} /* size: 0 */

// <0013384C> ../public/tier0/buffer_string.h:587
void CBufferStringN<2048>::~CBufferStringN()
{
} /* size: 0 */

// <0013382E> ../public/tier0/buffer_string.h:587
inline void CBufferStringN<2048>::~CBufferStringN()
{
} /* size: 0 */

// <00102D8A> ../public/tier0/buffer_string.h:587
void CBufferStringN<64>::~CBufferStringN()
{
} /* size: 0 */

// <00102D6C> ../public/tier0/buffer_string.h:587
inline void CBufferStringN<64>::~CBufferStringN()
{
} /* size: 0 */

// <005F3B86> ../public/tier0/buffer_string.h:587
void CBufferStringN<500>::~CBufferStringN()
{
} /* size: 0 */

// <005F3B68> ../public/tier0/buffer_string.h:587
inline void CBufferStringN<500>::~CBufferStringN()
{
} /* size: 0 */

// <000A277A> ../public/tier0/buffer_string.h:587
void CBufferStringN<24>::~CBufferStringN()
{
} /* size: 0 */

// <000A275D> ../public/tier0/buffer_string.h:587
inline void CBufferStringN<24>::~CBufferStringN()
{
} /* size: 0 */

// <002311DF> ../public/tier0/buffer_string.h:587
void CBufferStringN<8192>::~CBufferStringN()
{
} /* size: 0 */

// <002311C2> ../public/tier0/buffer_string.h:587
inline void CBufferStringN<8192>::~CBufferStringN()
{
} /* size: 0 */

// <000306FB> ../public/tier0/buffer_string.h:587
// member functions: 29
// member variables: 2
// class size: 208
class CBufferStringN<200> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<200>* );
	/* ../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<200>* , const char* , int, bool, bool);
	/* ../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<200>* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<200>* , const char* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<200>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<200>* , const CBufferStringN<200>& );
	/* ../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<200>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<200>* , CBufferStringN<200>& );
	/* ../public/tier0/buffer_string.h:648 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:653 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , CBufferStringN<200>& );
	/* ../public/tier0/buffer_string.h:659 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:664 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , const CBufferStringN<200>& );
	/* ../public/tier0/buffer_string.h:669 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , const char* );
	/* ../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<200>* );
protected:
	char m_extraInstanceData[192]; /* 16 192 */
	void CBufferStringN(class CBufferStringN<200> *); /* linkage=_ZN14CBufferStringNILi200EEC4Ev */
	void CBufferStringN(class CBufferStringN<200> *, const char  *, int, bool, bool); /* linkage=_ZN14CBufferStringNILi200EEC4EPKcibb */
	void CBufferStringN(class CBufferStringN<200> *, const char  *, const char  *, bool, bool); /* linkage=_ZN14CBufferStringNILi200EEC4EPKcS2_bb */
	void CBufferStringN(class CBufferStringN<200> *, const char  *, const char  *, const char  *, bool, bool); /* linkage=_ZN14CBufferStringNILi200EEC4EPKcS2_S2_bb */
	void CBufferStringN(class CBufferStringN<200> *, const class CBufferString  &); /* linkage=_ZN14CBufferStringNILi200EEC4ERK13CBufferString */
	void CBufferStringN(class CBufferStringN<200> *, const class CBufferStringN<200>  &); /* linkage=_ZN14CBufferStringNILi200EEC4ERKS0_ */
	void CBufferStringN(class CBufferStringN<200> *, class CBufferString &); /* linkage=_ZN14CBufferStringNILi200EEC4EO13CBufferString */
	void CBufferStringN(class CBufferStringN<200> *, class CBufferStringN<200> &); /* linkage=_ZN14CBufferStringNILi200EEC4EOS0_ */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, class CBufferString &); /* linkage=_ZN14CBufferStringNILi200EEaSEO13CBufferString */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, class CBufferStringN<200> &); /* linkage=_ZN14CBufferStringNILi200EEaSEOS0_ */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, const class CBufferString  &); /* linkage=_ZN14CBufferStringNILi200EEaSERK13CBufferString */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, const class CBufferStringN<200>  &); /* linkage=_ZN14CBufferStringNILi200EEaSERKS0_ */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, const char  *); /* linkage=_ZN14CBufferStringNILi200EEaSEPKc */
	void Purge(class CBufferStringN<200> *); /* linkage=_ZN14CBufferStringNILi200EE5PurgeEv */
	void ~CBufferStringN(class CBufferStringN<200> *); /* linkage=_ZN14CBufferStringNILi200EED4Ev */
};

// <0007FB88> ../public/tier0/buffer_string.h:587
// member functions: 30
// member variables: 2
// class size: 208
class CBufferStringN<200> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<200>* );
	/* ../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<200>* , const char* , int, bool, bool);
	/* ../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<200>* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<200>* , const char* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<200>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<200>* , const CBufferStringN<200>& );
	/* ../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<200>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<200>* , CBufferStringN<200>& );
	/* ../public/tier0/buffer_string.h:648 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:653 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , CBufferStringN<200>& );
	/* ../public/tier0/buffer_string.h:659 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:664 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , const CBufferStringN<200>& );
	/* ../public/tier0/buffer_string.h:669 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , const char* );
	/* ../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<200>* );
protected:
	char m_extraInstanceData[192]; /* 16 192 */
	void ~CBufferStringN(CBufferStringN<200>* );
	void CBufferStringN(class CBufferStringN<200> *); /* linkage=_ZN14CBufferStringNILi200EEC4Ev */
	void CBufferStringN(class CBufferStringN<200> *, const char  *, int, bool, bool); /* linkage=_ZN14CBufferStringNILi200EEC4EPKcibb */
	void CBufferStringN(class CBufferStringN<200> *, const char  *, const char  *, bool, bool); /* linkage=_ZN14CBufferStringNILi200EEC4EPKcS2_bb */
	void CBufferStringN(class CBufferStringN<200> *, const char  *, const char  *, const char  *, bool, bool); /* linkage=_ZN14CBufferStringNILi200EEC4EPKcS2_S2_bb */
	void CBufferStringN(class CBufferStringN<200> *, const class CBufferString  &); /* linkage=_ZN14CBufferStringNILi200EEC4ERK13CBufferString */
	void CBufferStringN(class CBufferStringN<200> *, const class CBufferStringN<200>  &); /* linkage=_ZN14CBufferStringNILi200EEC4ERKS0_ */
	void CBufferStringN(class CBufferStringN<200> *, class CBufferString &); /* linkage=_ZN14CBufferStringNILi200EEC4EO13CBufferString */
	void CBufferStringN(class CBufferStringN<200> *, class CBufferStringN<200> &); /* linkage=_ZN14CBufferStringNILi200EEC4EOS0_ */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, class CBufferString &); /* linkage=_ZN14CBufferStringNILi200EEaSEO13CBufferString */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, class CBufferStringN<200> &); /* linkage=_ZN14CBufferStringNILi200EEaSEOS0_ */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, const class CBufferString  &); /* linkage=_ZN14CBufferStringNILi200EEaSERK13CBufferString */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, const class CBufferStringN<200>  &); /* linkage=_ZN14CBufferStringNILi200EEaSERKS0_ */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, const char  *); /* linkage=_ZN14CBufferStringNILi200EEaSEPKc */
	void Purge(class CBufferStringN<200> *); /* linkage=_ZN14CBufferStringNILi200EE5PurgeEv */
	void ~CBufferStringN(class CBufferStringN<200> *); /* linkage=_ZN14CBufferStringNILi200EED4Ev */
};

// <0007FE01> ../public/tier0/buffer_string.h:587
// member functions: 15
// member variables: 2
// class size: 48
class CBufferStringN<40> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<40>* );
	/* ../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<40>* , const char* , int, bool, bool);
	/* ../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<40>* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<40>* , const char* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<40>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<40>* , const CBufferStringN<40>& );
	/* ../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<40>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<40>* , CBufferStringN<40>& );
	/* ../public/tier0/buffer_string.h:648 */
	CBufferStringN<40>& operator=(CBufferStringN<40>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:653 */
	CBufferStringN<40>& operator=(CBufferStringN<40>* , CBufferStringN<40>& );
	/* ../public/tier0/buffer_string.h:659 */
	CBufferStringN<40>& operator=(CBufferStringN<40>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:664 */
	CBufferStringN<40>& operator=(CBufferStringN<40>* , const CBufferStringN<40>& );
	/* ../public/tier0/buffer_string.h:669 */
	CBufferStringN<40>& operator=(CBufferStringN<40>* , const char* );
	/* ../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<40>* );
protected:
	char m_extraInstanceData[32]; /* 16 32 */
	void ~CBufferStringN(CBufferStringN<40>* );
};

// <0008007A> ../public/tier0/buffer_string.h:587
// member functions: 15
// member variables: 2
// class size: 32
class CBufferStringN<20> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<20>* );
	/* ../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<20>* , const char* , int, bool, bool);
	/* ../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<20>* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<20>* , const char* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<20>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<20>* , const CBufferStringN<20>& );
	/* ../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<20>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<20>* , CBufferStringN<20>& );
	/* ../public/tier0/buffer_string.h:648 */
	CBufferStringN<20>& operator=(CBufferStringN<20>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:653 */
	CBufferStringN<20>& operator=(CBufferStringN<20>* , CBufferStringN<20>& );
	/* ../public/tier0/buffer_string.h:659 */
	CBufferStringN<20>& operator=(CBufferStringN<20>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:664 */
	CBufferStringN<20>& operator=(CBufferStringN<20>* , const CBufferStringN<20>& );
	/* ../public/tier0/buffer_string.h:669 */
	CBufferStringN<20>& operator=(CBufferStringN<20>* , const char* );
	/* ../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<20>* );
protected:
	char m_extraInstanceData[12]; /* 16 12 */
	void ~CBufferStringN(CBufferStringN<20>* );
};

// <000A1976> ../public/tier0/buffer_string.h:587
// member functions: 30
// member variables: 2
// class size: 264
class CBufferStringN<256> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<256>* );
	/* ../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<256>* , const char* , int, bool, bool);
	/* ../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<256>* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<256>* , const char* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<256>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<256>* , const CBufferStringN<256>& );
	/* ../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<256>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<256>* , CBufferStringN<256>& );
	/* ../public/tier0/buffer_string.h:648 */
	CBufferStringN<256>& operator=(CBufferStringN<256>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:653 */
	CBufferStringN<256>& operator=(CBufferStringN<256>* , CBufferStringN<256>& );
	/* ../public/tier0/buffer_string.h:659 */
	CBufferStringN<256>& operator=(CBufferStringN<256>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:664 */
	CBufferStringN<256>& operator=(CBufferStringN<256>* , const CBufferStringN<256>& );
	/* ../public/tier0/buffer_string.h:669 */
	CBufferStringN<256>& operator=(CBufferStringN<256>* , const char* );
	/* ../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<256>* );
protected:
	char m_extraInstanceData[248]; /* 16 248 */
	void ~CBufferStringN(CBufferStringN<256>* );
	void CBufferStringN(class CBufferStringN<256> *); /* linkage=_ZN14CBufferStringNILi256EEC4Ev */
	void CBufferStringN(class CBufferStringN<256> *, const char  *, int, bool, bool); /* linkage=_ZN14CBufferStringNILi256EEC4EPKcibb */
	void CBufferStringN(class CBufferStringN<256> *, const char  *, const char  *, bool, bool); /* linkage=_ZN14CBufferStringNILi256EEC4EPKcS2_bb */
	void CBufferStringN(class CBufferStringN<256> *, const char  *, const char  *, const char  *, bool, bool); /* linkage=_ZN14CBufferStringNILi256EEC4EPKcS2_S2_bb */
	void CBufferStringN(class CBufferStringN<256> *, const class CBufferString  &); /* linkage=_ZN14CBufferStringNILi256EEC4ERK13CBufferString */
	void CBufferStringN(class CBufferStringN<256> *, const class CBufferStringN<256>  &); /* linkage=_ZN14CBufferStringNILi256EEC4ERKS0_ */
	void CBufferStringN(class CBufferStringN<256> *, class CBufferString &); /* linkage=_ZN14CBufferStringNILi256EEC4EO13CBufferString */
	void CBufferStringN(class CBufferStringN<256> *, class CBufferStringN<256> &); /* linkage=_ZN14CBufferStringNILi256EEC4EOS0_ */
	class CBufferStringN<256> & operator=(class CBufferStringN<256> *, class CBufferString &); /* linkage=_ZN14CBufferStringNILi256EEaSEO13CBufferString */
	class CBufferStringN<256> & operator=(class CBufferStringN<256> *, class CBufferStringN<256> &); /* linkage=_ZN14CBufferStringNILi256EEaSEOS0_ */
	class CBufferStringN<256> & operator=(class CBufferStringN<256> *, const class CBufferString  &); /* linkage=_ZN14CBufferStringNILi256EEaSERK13CBufferString */
	class CBufferStringN<256> & operator=(class CBufferStringN<256> *, const class CBufferStringN<256>  &); /* linkage=_ZN14CBufferStringNILi256EEaSERKS0_ */
	class CBufferStringN<256> & operator=(class CBufferStringN<256> *, const char  *); /* linkage=_ZN14CBufferStringNILi256EEaSEPKc */
	void Purge(class CBufferStringN<256> *); /* linkage=_ZN14CBufferStringNILi256EE5PurgeEv */
	void ~CBufferStringN(class CBufferStringN<256> *); /* linkage=_ZN14CBufferStringNILi256EED4Ev */
};

// <000A1C3C> ../public/tier0/buffer_string.h:587
// member functions: 15
// member variables: 2
// class size: 1,032
class CBufferStringN<1024> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<1024>* );
	/* ../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<1024>* , const char* , int, bool, bool);
	/* ../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<1024>* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<1024>* , const char* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<1024>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<1024>* , const CBufferStringN<1024>& );
	/* ../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<1024>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<1024>* , CBufferStringN<1024>& );
	/* ../public/tier0/buffer_string.h:648 */
	CBufferStringN<1024>& operator=(CBufferStringN<1024>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:653 */
	CBufferStringN<1024>& operator=(CBufferStringN<1024>* , CBufferStringN<1024>& );
	/* ../public/tier0/buffer_string.h:659 */
	CBufferStringN<1024>& operator=(CBufferStringN<1024>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:664 */
	CBufferStringN<1024>& operator=(CBufferStringN<1024>* , const CBufferStringN<1024>& );
	/* ../public/tier0/buffer_string.h:669 */
	CBufferStringN<1024>& operator=(CBufferStringN<1024>* , const char* );
	/* ../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<1024>* );
protected:
	char m_extraInstanceData[1016]; /* 16 1016 */
	void ~CBufferStringN(CBufferStringN<1024>* );
};

// <0011D0F8> ../public/tier0/buffer_string.h:587
// member functions: 15
// member variables: 2
// class size: 112
class CBufferStringN<100> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<100>* );
	/* ../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<100>* , const char* , int, bool, bool);
	/* ../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<100>* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<100>* , const char* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<100>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<100>* , const CBufferStringN<100>& );
	/* ../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<100>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<100>* , CBufferStringN<100>& );
	/* ../public/tier0/buffer_string.h:648 */
	CBufferStringN<100>& operator=(CBufferStringN<100>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:653 */
	CBufferStringN<100>& operator=(CBufferStringN<100>* , CBufferStringN<100>& );
	/* ../public/tier0/buffer_string.h:659 */
	CBufferStringN<100>& operator=(CBufferStringN<100>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:664 */
	CBufferStringN<100>& operator=(CBufferStringN<100>* , const CBufferStringN<100>& );
	/* ../public/tier0/buffer_string.h:669 */
	CBufferStringN<100>& operator=(CBufferStringN<100>* , const char* );
	/* ../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<100>* );
protected:
	char m_extraInstanceData[92]; /* 16 92 */
	void ~CBufferStringN(CBufferStringN<100>* );
};

// <0011D3BD> ../public/tier0/buffer_string.h:587
// member functions: 30
// member variables: 2
// class size: 2,056
class CBufferStringN<2048> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<2048>* );
	/* ../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<2048>* , const char* , int, bool, bool);
	/* ../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<2048>* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<2048>* , const char* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<2048>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<2048>* , const CBufferStringN<2048>& );
	/* ../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<2048>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<2048>* , CBufferStringN<2048>& );
	/* ../public/tier0/buffer_string.h:648 */
	CBufferStringN<2048>& operator=(CBufferStringN<2048>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:653 */
	CBufferStringN<2048>& operator=(CBufferStringN<2048>* , CBufferStringN<2048>& );
	/* ../public/tier0/buffer_string.h:659 */
	CBufferStringN<2048>& operator=(CBufferStringN<2048>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:664 */
	CBufferStringN<2048>& operator=(CBufferStringN<2048>* , const CBufferStringN<2048>& );
	/* ../public/tier0/buffer_string.h:669 */
	CBufferStringN<2048>& operator=(CBufferStringN<2048>* , const char* );
	/* ../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<2048>* );
protected:
	char m_extraInstanceData[2040]; /* 16 2040 */
	void ~CBufferStringN(CBufferStringN<2048>* );
	void CBufferStringN(class CBufferStringN<2048> *); /* linkage=_ZN14CBufferStringNILi2048EEC4Ev */
	void CBufferStringN(class CBufferStringN<2048> *, const char  *, int, bool, bool); /* linkage=_ZN14CBufferStringNILi2048EEC4EPKcibb */
	void CBufferStringN(class CBufferStringN<2048> *, const char  *, const char  *, bool, bool); /* linkage=_ZN14CBufferStringNILi2048EEC4EPKcS2_bb */
	void CBufferStringN(class CBufferStringN<2048> *, const char  *, const char  *, const char  *, bool, bool); /* linkage=_ZN14CBufferStringNILi2048EEC4EPKcS2_S2_bb */
	void CBufferStringN(class CBufferStringN<2048> *, const class CBufferString  &); /* linkage=_ZN14CBufferStringNILi2048EEC4ERK13CBufferString */
	void CBufferStringN(class CBufferStringN<2048> *, const class CBufferStringN<2048>  &); /* linkage=_ZN14CBufferStringNILi2048EEC4ERKS0_ */
	void CBufferStringN(class CBufferStringN<2048> *, class CBufferString &); /* linkage=_ZN14CBufferStringNILi2048EEC4EO13CBufferString */
	void CBufferStringN(class CBufferStringN<2048> *, class CBufferStringN<2048> &); /* linkage=_ZN14CBufferStringNILi2048EEC4EOS0_ */
	class CBufferStringN<2048> & operator=(class CBufferStringN<2048> *, class CBufferString &); /* linkage=_ZN14CBufferStringNILi2048EEaSEO13CBufferString */
	class CBufferStringN<2048> & operator=(class CBufferStringN<2048> *, class CBufferStringN<2048> &); /* linkage=_ZN14CBufferStringNILi2048EEaSEOS0_ */
	class CBufferStringN<2048> & operator=(class CBufferStringN<2048> *, const class CBufferString  &); /* linkage=_ZN14CBufferStringNILi2048EEaSERK13CBufferString */
	class CBufferStringN<2048> & operator=(class CBufferStringN<2048> *, const class CBufferStringN<2048>  &); /* linkage=_ZN14CBufferStringNILi2048EEaSERKS0_ */
	class CBufferStringN<2048> & operator=(class CBufferStringN<2048> *, const char  *); /* linkage=_ZN14CBufferStringNILi2048EEaSEPKc */
	void Purge(class CBufferStringN<2048> *); /* linkage=_ZN14CBufferStringNILi2048EE5PurgeEv */
	void ~CBufferStringN(class CBufferStringN<2048> *); /* linkage=_ZN14CBufferStringNILi2048EED4Ev */
};

// <007C96FC> ../public/tier0/buffer_string.h:587
// member functions: 15
// member variables: 2
// class size: 64
class CBufferStringN<50> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<50>* );
	/* ../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<50>* , const char* , int, bool, bool);
	/* ../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<50>* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<50>* , const char* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<50>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<50>* , const CBufferStringN<50>& );
	/* ../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<50>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<50>* , CBufferStringN<50>& );
	/* ../public/tier0/buffer_string.h:648 */
	CBufferStringN<50>& operator=(CBufferStringN<50>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:653 */
	CBufferStringN<50>& operator=(CBufferStringN<50>* , CBufferStringN<50>& );
	/* ../public/tier0/buffer_string.h:659 */
	CBufferStringN<50>& operator=(CBufferStringN<50>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:664 */
	CBufferStringN<50>& operator=(CBufferStringN<50>* , const CBufferStringN<50>& );
	/* ../public/tier0/buffer_string.h:669 */
	CBufferStringN<50>& operator=(CBufferStringN<50>* , const char* );
	/* ../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<50>* );
protected:
	char m_extraInstanceData[42]; /* 16 42 */
	void ~CBufferStringN(CBufferStringN<50>* );
};

// <023C661F> ../public/tier0/buffer_string.h:587
// member functions: 15
// member variables: 2
// class size: 40
class CBufferStringN<30> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<30>* );
	/* ../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<30>* , const char* , int, bool, bool);
	/* ../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<30>* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<30>* , const char* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<30>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<30>* , const CBufferStringN<30>& );
	/* ../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<30>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<30>* , CBufferStringN<30>& );
	/* ../public/tier0/buffer_string.h:648 */
	CBufferStringN<30>& operator=(CBufferStringN<30>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:653 */
	CBufferStringN<30>& operator=(CBufferStringN<30>* , CBufferStringN<30>& );
	/* ../public/tier0/buffer_string.h:659 */
	CBufferStringN<30>& operator=(CBufferStringN<30>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:664 */
	CBufferStringN<30>& operator=(CBufferStringN<30>* , const CBufferStringN<30>& );
	/* ../public/tier0/buffer_string.h:669 */
	CBufferStringN<30>& operator=(CBufferStringN<30>* , const char* );
	/* ../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<30>* );
protected:
	char m_extraInstanceData[22]; /* 16 22 */
	void ~CBufferStringN(CBufferStringN<30>* );
};

// <055BCF26> ../public/tier0/buffer_string.h:587
// member functions: 15
// member variables: 2
// class size: 136
class CBufferStringN<128> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<128>* );
	/* ../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<128>* , const char* , int, bool, bool);
	/* ../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<128>* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<128>* , const char* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<128>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<128>* , const CBufferStringN<128>& );
	/* ../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<128>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<128>* , CBufferStringN<128>& );
	/* ../public/tier0/buffer_string.h:648 */
	CBufferStringN<128>& operator=(CBufferStringN<128>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:653 */
	CBufferStringN<128>& operator=(CBufferStringN<128>* , CBufferStringN<128>& );
	/* ../public/tier0/buffer_string.h:659 */
	CBufferStringN<128>& operator=(CBufferStringN<128>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:664 */
	CBufferStringN<128>& operator=(CBufferStringN<128>* , const CBufferStringN<128>& );
	/* ../public/tier0/buffer_string.h:669 */
	CBufferStringN<128>& operator=(CBufferStringN<128>* , const char* );
	/* ../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<128>* );
protected:
	char m_extraInstanceData[120]; /* 16 120 */
	void ~CBufferStringN(CBufferStringN<128>* );
};

// <055DD971> ../public/tier0/buffer_string.h:587
// member functions: 15
// member variables: 2
// class size: 88
class CBufferStringN<80> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<80>* );
	/* ../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<80>* , const char* , int, bool, bool);
	/* ../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<80>* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<80>* , const char* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<80>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<80>* , const CBufferStringN<80>& );
	/* ../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<80>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<80>* , CBufferStringN<80>& );
	/* ../public/tier0/buffer_string.h:648 */
	CBufferStringN<80>& operator=(CBufferStringN<80>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:653 */
	CBufferStringN<80>& operator=(CBufferStringN<80>* , CBufferStringN<80>& );
	/* ../public/tier0/buffer_string.h:659 */
	CBufferStringN<80>& operator=(CBufferStringN<80>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:664 */
	CBufferStringN<80>& operator=(CBufferStringN<80>* , const CBufferStringN<80>& );
	/* ../public/tier0/buffer_string.h:669 */
	CBufferStringN<80>& operator=(CBufferStringN<80>* , const char* );
	/* ../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<80>* );
protected:
	char m_extraInstanceData[72]; /* 16 72 */
	void ~CBufferStringN(CBufferStringN<80>* );
};

// <0583A1E9> ../../public/tier0/buffer_string.h:587
// member functions: 29
// member variables: 2
// class size: 208
class CBufferStringN<200> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<200>* );
	/* ../../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<200>* , const char* , int, bool, bool);
	/* ../../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<200>* , const char* , const char* , bool, bool);
	/* ../../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<200>* , const char* , const char* , const char* , bool, bool);
	/* ../../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<200>* , const CBufferString& );
	/* ../../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<200>* , const CBufferStringN<200>& );
	/* ../../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<200>* , CBufferString& );
	/* ../../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<200>* , CBufferStringN<200>& );
	/* ../../public/tier0/buffer_string.h:648 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , CBufferString& );
	/* ../../public/tier0/buffer_string.h:653 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , CBufferStringN<200>& );
	/* ../../public/tier0/buffer_string.h:659 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , const CBufferString& );
	/* ../../public/tier0/buffer_string.h:664 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , const CBufferStringN<200>& );
	/* ../../public/tier0/buffer_string.h:669 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , const char* );
	/* ../../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<200>* );
protected:
	char m_extraInstanceData[192]; /* 16 192 */
	void CBufferStringN(class CBufferStringN<200> *); /* linkage=_ZN14CBufferStringNILi200EEC4Ev */
	void CBufferStringN(class CBufferStringN<200> *, const char  *, int, bool, bool); /* linkage=_ZN14CBufferStringNILi200EEC4EPKcibb */
	void CBufferStringN(class CBufferStringN<200> *, const char  *, const char  *, bool, bool); /* linkage=_ZN14CBufferStringNILi200EEC4EPKcS2_bb */
	void CBufferStringN(class CBufferStringN<200> *, const char  *, const char  *, const char  *, bool, bool); /* linkage=_ZN14CBufferStringNILi200EEC4EPKcS2_S2_bb */
	void CBufferStringN(class CBufferStringN<200> *, const class CBufferString  &); /* linkage=_ZN14CBufferStringNILi200EEC4ERK13CBufferString */
	void CBufferStringN(class CBufferStringN<200> *, const class CBufferStringN<200>  &); /* linkage=_ZN14CBufferStringNILi200EEC4ERKS0_ */
	void CBufferStringN(class CBufferStringN<200> *, class CBufferString &); /* linkage=_ZN14CBufferStringNILi200EEC4EO13CBufferString */
	void CBufferStringN(class CBufferStringN<200> *, class CBufferStringN<200> &); /* linkage=_ZN14CBufferStringNILi200EEC4EOS0_ */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, class CBufferString &); /* linkage=_ZN14CBufferStringNILi200EEaSEO13CBufferString */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, class CBufferStringN<200> &); /* linkage=_ZN14CBufferStringNILi200EEaSEOS0_ */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, const class CBufferString  &); /* linkage=_ZN14CBufferStringNILi200EEaSERK13CBufferString */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, const class CBufferStringN<200>  &); /* linkage=_ZN14CBufferStringNILi200EEaSERKS0_ */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, const char  *); /* linkage=_ZN14CBufferStringNILi200EEaSEPKc */
	void Purge(class CBufferStringN<200> *); /* linkage=_ZN14CBufferStringNILi200EE5PurgeEv */
	void ~CBufferStringN(class CBufferStringN<200> *); /* linkage=_ZN14CBufferStringNILi200EED4Ev */
};

// <05896AD0> ../../public/tier0/buffer_string.h:587
// member functions: 30
// member variables: 2
// class size: 208
class CBufferStringN<200> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<200>* );
	/* ../../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<200>* , const char* , int, bool, bool);
	/* ../../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<200>* , const char* , const char* , bool, bool);
	/* ../../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<200>* , const char* , const char* , const char* , bool, bool);
	/* ../../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<200>* , const CBufferString& );
	/* ../../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<200>* , const CBufferStringN<200>& );
	/* ../../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<200>* , CBufferString& );
	/* ../../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<200>* , CBufferStringN<200>& );
	/* ../../public/tier0/buffer_string.h:648 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , CBufferString& );
	/* ../../public/tier0/buffer_string.h:653 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , CBufferStringN<200>& );
	/* ../../public/tier0/buffer_string.h:659 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , const CBufferString& );
	/* ../../public/tier0/buffer_string.h:664 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , const CBufferStringN<200>& );
	/* ../../public/tier0/buffer_string.h:669 */
	CBufferStringN<200>& operator=(CBufferStringN<200>* , const char* );
	/* ../../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<200>* );
protected:
	char m_extraInstanceData[192]; /* 16 192 */
	void ~CBufferStringN(CBufferStringN<200>* );
	void CBufferStringN(class CBufferStringN<200> *); /* linkage=_ZN14CBufferStringNILi200EEC4Ev */
	void CBufferStringN(class CBufferStringN<200> *, const char  *, int, bool, bool); /* linkage=_ZN14CBufferStringNILi200EEC4EPKcibb */
	void CBufferStringN(class CBufferStringN<200> *, const char  *, const char  *, bool, bool); /* linkage=_ZN14CBufferStringNILi200EEC4EPKcS2_bb */
	void CBufferStringN(class CBufferStringN<200> *, const char  *, const char  *, const char  *, bool, bool); /* linkage=_ZN14CBufferStringNILi200EEC4EPKcS2_S2_bb */
	void CBufferStringN(class CBufferStringN<200> *, const class CBufferString  &); /* linkage=_ZN14CBufferStringNILi200EEC4ERK13CBufferString */
	void CBufferStringN(class CBufferStringN<200> *, const class CBufferStringN<200>  &); /* linkage=_ZN14CBufferStringNILi200EEC4ERKS0_ */
	void CBufferStringN(class CBufferStringN<200> *, class CBufferString &); /* linkage=_ZN14CBufferStringNILi200EEC4EO13CBufferString */
	void CBufferStringN(class CBufferStringN<200> *, class CBufferStringN<200> &); /* linkage=_ZN14CBufferStringNILi200EEC4EOS0_ */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, class CBufferString &); /* linkage=_ZN14CBufferStringNILi200EEaSEO13CBufferString */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, class CBufferStringN<200> &); /* linkage=_ZN14CBufferStringNILi200EEaSEOS0_ */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, const class CBufferString  &); /* linkage=_ZN14CBufferStringNILi200EEaSERK13CBufferString */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, const class CBufferStringN<200>  &); /* linkage=_ZN14CBufferStringNILi200EEaSERKS0_ */
	class CBufferStringN<200> & operator=(class CBufferStringN<200> *, const char  *); /* linkage=_ZN14CBufferStringNILi200EEaSEPKc */
	void Purge(class CBufferStringN<200> *); /* linkage=_ZN14CBufferStringNILi200EE5PurgeEv */
	void ~CBufferStringN(class CBufferStringN<200> *); /* linkage=_ZN14CBufferStringNILi200EED4Ev */
};

// <000E0DF5> ../public/tier0/buffer_string.h:587
// member functions: 15
// member variables: 2
// class size: 72
class CBufferStringN<64> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<64>* );
	/* ../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<64>* , const char* , int, bool, bool);
	/* ../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<64>* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<64>* , const char* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<64>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<64>* , const CBufferStringN<64>& );
	/* ../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<64>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<64>* , CBufferStringN<64>& );
	/* ../public/tier0/buffer_string.h:648 */
	CBufferStringN<64>& operator=(CBufferStringN<64>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:653 */
	CBufferStringN<64>& operator=(CBufferStringN<64>* , CBufferStringN<64>& );
	/* ../public/tier0/buffer_string.h:659 */
	CBufferStringN<64>& operator=(CBufferStringN<64>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:664 */
	CBufferStringN<64>& operator=(CBufferStringN<64>* , const CBufferStringN<64>& );
	/* ../public/tier0/buffer_string.h:669 */
	CBufferStringN<64>& operator=(CBufferStringN<64>* , const char* );
	/* ../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<64>* );
protected:
	char m_extraInstanceData[56]; /* 16 56 */
	void ~CBufferStringN(CBufferStringN<64>* );
};

// <00163474> ../public/tier0/buffer_string.h:587
// member functions: 14
// member variables: 2
// class size: 72
class CBufferStringN<64> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<64>* );
	/* ../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<64>* , const char* , int, bool, bool);
	/* ../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<64>* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<64>* , const char* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<64>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<64>* , const CBufferStringN<64>& );
	/* ../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<64>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<64>* , CBufferStringN<64>& );
	/* ../public/tier0/buffer_string.h:648 */
	CBufferStringN<64>& operator=(CBufferStringN<64>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:653 */
	CBufferStringN<64>& operator=(CBufferStringN<64>* , CBufferStringN<64>& );
	/* ../public/tier0/buffer_string.h:659 */
	CBufferStringN<64>& operator=(CBufferStringN<64>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:664 */
	CBufferStringN<64>& operator=(CBufferStringN<64>* , const CBufferStringN<64>& );
	/* ../public/tier0/buffer_string.h:669 */
	CBufferStringN<64>& operator=(CBufferStringN<64>* , const char* );
	/* ../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<64>* );
protected:
	char m_extraInstanceData[56]; /* 16 56 */
};

// <00125A74> ../../public/tier0/buffer_string.h:587
// member functions: 30
// member variables: 2
// class size: 264
class CBufferStringN<256> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<256>* );
	/* ../../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<256>* , const char* , int, bool, bool);
	/* ../../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<256>* , const char* , const char* , bool, bool);
	/* ../../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<256>* , const char* , const char* , const char* , bool, bool);
	/* ../../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<256>* , const CBufferString& );
	/* ../../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<256>* , const CBufferStringN<256>& );
	/* ../../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<256>* , CBufferString& );
	/* ../../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<256>* , CBufferStringN<256>& );
	/* ../../public/tier0/buffer_string.h:648 */
	CBufferStringN<256>& operator=(CBufferStringN<256>* , CBufferString& );
	/* ../../public/tier0/buffer_string.h:653 */
	CBufferStringN<256>& operator=(CBufferStringN<256>* , CBufferStringN<256>& );
	/* ../../public/tier0/buffer_string.h:659 */
	CBufferStringN<256>& operator=(CBufferStringN<256>* , const CBufferString& );
	/* ../../public/tier0/buffer_string.h:664 */
	CBufferStringN<256>& operator=(CBufferStringN<256>* , const CBufferStringN<256>& );
	/* ../../public/tier0/buffer_string.h:669 */
	CBufferStringN<256>& operator=(CBufferStringN<256>* , const char* );
	/* ../../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<256>* );
protected:
	char m_extraInstanceData[248]; /* 16 248 */
	void ~CBufferStringN(CBufferStringN<256>* );
	void CBufferStringN(class CBufferStringN<256> *); /* linkage=_ZN14CBufferStringNILi256EEC4Ev */
	void CBufferStringN(class CBufferStringN<256> *, const char  *, int, bool, bool); /* linkage=_ZN14CBufferStringNILi256EEC4EPKcibb */
	void CBufferStringN(class CBufferStringN<256> *, const char  *, const char  *, bool, bool); /* linkage=_ZN14CBufferStringNILi256EEC4EPKcS2_bb */
	void CBufferStringN(class CBufferStringN<256> *, const char  *, const char  *, const char  *, bool, bool); /* linkage=_ZN14CBufferStringNILi256EEC4EPKcS2_S2_bb */
	void CBufferStringN(class CBufferStringN<256> *, const class CBufferString  &); /* linkage=_ZN14CBufferStringNILi256EEC4ERK13CBufferString */
	void CBufferStringN(class CBufferStringN<256> *, const class CBufferStringN<256>  &); /* linkage=_ZN14CBufferStringNILi256EEC4ERKS0_ */
	void CBufferStringN(class CBufferStringN<256> *, class CBufferString &); /* linkage=_ZN14CBufferStringNILi256EEC4EO13CBufferString */
	void CBufferStringN(class CBufferStringN<256> *, class CBufferStringN<256> &); /* linkage=_ZN14CBufferStringNILi256EEC4EOS0_ */
	class CBufferStringN<256> & operator=(class CBufferStringN<256> *, class CBufferString &); /* linkage=_ZN14CBufferStringNILi256EEaSEO13CBufferString */
	class CBufferStringN<256> & operator=(class CBufferStringN<256> *, class CBufferStringN<256> &); /* linkage=_ZN14CBufferStringNILi256EEaSEOS0_ */
	class CBufferStringN<256> & operator=(class CBufferStringN<256> *, const class CBufferString  &); /* linkage=_ZN14CBufferStringNILi256EEaSERK13CBufferString */
	class CBufferStringN<256> & operator=(class CBufferStringN<256> *, const class CBufferStringN<256>  &); /* linkage=_ZN14CBufferStringNILi256EEaSERKS0_ */
	class CBufferStringN<256> & operator=(class CBufferStringN<256> *, const char  *); /* linkage=_ZN14CBufferStringNILi256EEaSEPKc */
	void Purge(class CBufferStringN<256> *); /* linkage=_ZN14CBufferStringNILi256EE5PurgeEv */
	void ~CBufferStringN(class CBufferStringN<256> *); /* linkage=_ZN14CBufferStringNILi256EED4Ev */
};

// <0009BE17> ../public/tier0/buffer_string.h:587
// member functions: 15
// member variables: 2
// class size: 32
class CBufferStringN<24> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<24>* );
	/* ../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<24>* , const char* , int, bool, bool);
	/* ../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<24>* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<24>* , const char* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<24>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<24>* , const CBufferStringN<24>& );
	/* ../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<24>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<24>* , CBufferStringN<24>& );
	/* ../public/tier0/buffer_string.h:648 */
	CBufferStringN<24>& operator=(CBufferStringN<24>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:653 */
	CBufferStringN<24>& operator=(CBufferStringN<24>* , CBufferStringN<24>& );
	/* ../public/tier0/buffer_string.h:659 */
	CBufferStringN<24>& operator=(CBufferStringN<24>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:664 */
	CBufferStringN<24>& operator=(CBufferStringN<24>* , const CBufferStringN<24>& );
	/* ../public/tier0/buffer_string.h:669 */
	CBufferStringN<24>& operator=(CBufferStringN<24>* , const char* );
	/* ../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<24>* );
protected:
	char m_extraInstanceData[16]; /* 16 16 */
	void ~CBufferStringN(CBufferStringN<24>* );
};

// <001FB3A8> ../public/tier0/buffer_string.h:587
// member functions: 15
// member variables: 2
// class size: 512
class CBufferStringN<500> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<500>* );
	/* ../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<500>* , const char* , int, bool, bool);
	/* ../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<500>* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<500>* , const char* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<500>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<500>* , const CBufferStringN<500>& );
	/* ../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<500>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<500>* , CBufferStringN<500>& );
	/* ../public/tier0/buffer_string.h:648 */
	CBufferStringN<500>& operator=(CBufferStringN<500>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:653 */
	CBufferStringN<500>& operator=(CBufferStringN<500>* , CBufferStringN<500>& );
	/* ../public/tier0/buffer_string.h:659 */
	CBufferStringN<500>& operator=(CBufferStringN<500>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:664 */
	CBufferStringN<500>& operator=(CBufferStringN<500>* , const CBufferStringN<500>& );
	/* ../public/tier0/buffer_string.h:669 */
	CBufferStringN<500>& operator=(CBufferStringN<500>* , const char* );
	/* ../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<500>* );
protected:
	char m_extraInstanceData[492]; /* 16 492 */
	void ~CBufferStringN(CBufferStringN<500>* );
};

// <00206443> ../public/tier0/buffer_string.h:587
// member functions: 15
// member variables: 2
// class size: 8,200
class CBufferStringN<8192> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:590 */
	void CBufferStringN(CBufferStringN<8192>* );
	/* ../public/tier0/buffer_string.h:595 */
	void CBufferStringN(CBufferStringN<8192>* , const char* , int, bool, bool);
	/* ../public/tier0/buffer_string.h:603 */
	void CBufferStringN(CBufferStringN<8192>* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:611 */
	void CBufferStringN(CBufferStringN<8192>* , const char* , const char* , const char* , bool, bool);
	/* ../public/tier0/buffer_string.h:619 */
	void CBufferStringN(CBufferStringN<8192>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:626 */
	void CBufferStringN(CBufferStringN<8192>* , const CBufferStringN<8192>& );
	/* ../public/tier0/buffer_string.h:634 */
	void CBufferStringN(CBufferStringN<8192>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:641 */
	void CBufferStringN(CBufferStringN<8192>* , CBufferStringN<8192>& );
	/* ../public/tier0/buffer_string.h:648 */
	CBufferStringN<8192>& operator=(CBufferStringN<8192>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:653 */
	CBufferStringN<8192>& operator=(CBufferStringN<8192>* , CBufferStringN<8192>& );
	/* ../public/tier0/buffer_string.h:659 */
	CBufferStringN<8192>& operator=(CBufferStringN<8192>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:664 */
	CBufferStringN<8192>& operator=(CBufferStringN<8192>* , const CBufferStringN<8192>& );
	/* ../public/tier0/buffer_string.h:669 */
	CBufferStringN<8192>& operator=(CBufferStringN<8192>* , const char* );
	/* ../public/tier0/buffer_string.h:675 */
	void Purge(CBufferStringN<8192>* );
protected:
	char m_extraInstanceData[8184]; /* 16 8184 */
	void ~CBufferStringN(CBufferStringN<8192>* );
};

// <06E6A6EF> ../../public/tier0/buffer_string.h:590
void CBufferStringN<200>::CBufferStringN()
{
} /* size: 0 */

// <06E6A6D6> ../../public/tier0/buffer_string.h:590
inline void CBufferStringN<200>::CBufferStringN()
{
} /* size: 0 */

// <06A5EA93> ../public/tier0/buffer_string.h:590
void CBufferStringN<256>::CBufferStringN()
{
} /* size: 0 */

// <06A5EA7A> ../public/tier0/buffer_string.h:590
inline void CBufferStringN<256>::CBufferStringN()
{
} /* size: 0 */

// <056E4638> ../public/tier0/buffer_string.h:590
void CBufferStringN<1024>::CBufferStringN()
{
} /* size: 0 */

// <056E461F> ../public/tier0/buffer_string.h:590
inline void CBufferStringN<1024>::CBufferStringN()
{
} /* size: 0 */

// <056BE98D> ../public/tier0/buffer_string.h:590
void CBufferStringN<80>::CBufferStringN()
{
} /* size: 0 */

// <056BE974> ../public/tier0/buffer_string.h:590
inline void CBufferStringN<80>::CBufferStringN()
{
} /* size: 0 */

// <056BE2DE> ../public/tier0/buffer_string.h:590
void CBufferStringN<128>::CBufferStringN()
{
} /* size: 0 */

// <056BE2C5> ../public/tier0/buffer_string.h:590
inline void CBufferStringN<128>::CBufferStringN()
{
} /* size: 0 */

// <04639B90> ../public/tier0/buffer_string.h:590
void CBufferStringN<40>::CBufferStringN()
{
} /* size: 0 */

// <04639B77> ../public/tier0/buffer_string.h:590
inline void CBufferStringN<40>::CBufferStringN()
{
} /* size: 0 */

// <007D0B99> ../public/tier0/buffer_string.h:590
void CBufferStringN<50>::CBufferStringN()
{
} /* size: 0 */

// <007D0B80> ../public/tier0/buffer_string.h:590
inline void CBufferStringN<50>::CBufferStringN()
{
} /* size: 0 */

// <001338AC> ../public/tier0/buffer_string.h:590
void CBufferStringN<20>::CBufferStringN()
{
} /* size: 0 */

// <00133893> ../public/tier0/buffer_string.h:590
inline void CBufferStringN<20>::CBufferStringN()
{
} /* size: 0 */

// <0013387C> ../public/tier0/buffer_string.h:590
void CBufferStringN<100>::CBufferStringN()
{
} /* size: 0 */

// <00133863> ../public/tier0/buffer_string.h:590
inline void CBufferStringN<100>::CBufferStringN()
{
} /* size: 0 */

// <00130E30> ../public/tier0/buffer_string.h:590
void CBufferStringN<2048>::CBufferStringN()
{
} /* size: 0 */

// <00130E17> ../public/tier0/buffer_string.h:590
inline void CBufferStringN<2048>::CBufferStringN()
{
} /* size: 0 */

// <009E9AE7> ../public/tier0/buffer_string.h:590
void CBufferStringN<64>::CBufferStringN()
{
} /* size: 0 */

// <009E9ACE> ../public/tier0/buffer_string.h:590
inline void CBufferStringN<64>::CBufferStringN()
{
} /* size: 0 */

// <005E8860> ../public/tier0/buffer_string.h:590
void CBufferStringN<500>::CBufferStringN()
{
} /* size: 0 */

// <005E8847> ../public/tier0/buffer_string.h:590
inline void CBufferStringN<500>::CBufferStringN()
{
} /* size: 0 */

// <0009EEB7> ../public/tier0/buffer_string.h:590
void CBufferStringN<24>::CBufferStringN()
{
} /* size: 0 */

// <0009EE9E> ../public/tier0/buffer_string.h:590
inline void CBufferStringN<24>::CBufferStringN()
{
} /* size: 0 */

// <0021AA37> ../public/tier0/buffer_string.h:590
void CBufferStringN<8192>::CBufferStringN()
{
} /* size: 0 */

// <0021AA1E> ../public/tier0/buffer_string.h:590
inline void CBufferStringN<8192>::CBufferStringN()
{
} /* size: 0 */

// <066CCFC8> ../public/tier0/buffer_string.h:595
void CBufferStringN<30>::CBufferStringN(const char* pString, int nChars, bool bExact, bool bGrowable)
{
} /* size: 0 */

// <066CCF7B> ../public/tier0/buffer_string.h:595
inline void CBufferStringN<30>::CBufferStringN(const char* pString, int nChars, bool bExact, bool bGrowable)
{
} /* size: 0 */

// <04C3A6E3> ../public/tier0/buffer_string.h:595
void CBufferStringN<200>::CBufferStringN(const char* pString, int nChars, bool bExact, bool bGrowable)
{
} /* size: 0 */

// <04C3A696> ../public/tier0/buffer_string.h:595
inline void CBufferStringN<200>::CBufferStringN(const char* pString, int nChars, bool bExact, bool bGrowable)
{
} /* size: 0 */

// <0680308C> ../public/tier0/buffer_string.h:603
void CBufferStringN<200>::CBufferStringN(const char* pString1, const char* pString2, bool bExact, bool bGrowable)
{
} /* size: 0 */

// <0680303F> ../public/tier0/buffer_string.h:603
inline void CBufferStringN<200>::CBufferStringN(const char* pString1, const char* pString2, bool bExact, bool bGrowable)
{
} /* size: 0 */

// <02356258> ../public/tier0/buffer_string.h:626
void CBufferStringN<200>::CBufferStringN(const CBufferStringN<200>& string)
{
} /* size: 0 */

// <02356232> ../public/tier0/buffer_string.h:626
inline void CBufferStringN<200>::CBufferStringN(const CBufferStringN<200>& string)
{
} /* size: 0 */

// <068F499C> ../public/tier0/buffer_string.h:648
inline void CBufferStringN<200>::operator=(CBufferString& rhs)
{
} /* size: 0 */

// <066CCEC3> ../public/tier0/buffer_string.h:664
inline void CBufferStringN<200>::operator=(const CBufferStringN<200>& src)
{
} /* size: 0 */

// <068F49C2> ../public/tier0/buffer_string.h:669
inline void CBufferStringN<200>::operator=(const char* pSrc)
{
} /* size: 0 */

// <0083E213> ../public/tier0/buffer_string.h:669
inline void CBufferStringN<64>::operator=(const char* pSrc)
{
} /* size: 0 */

// <0058A094> ../public/tier0/buffer_string.h:669
inline void CBufferStringN<256>::operator=(const char* pSrc)
{
} /* size: 0 */

// <068F4D82> ../public/tier0/buffer_string.h:675
inline void CBufferStringN<200>::Purge()
{
} /* size: 0 */

// <06E6CC02> ../../public/tier0/buffer_string.h:706
void CBufferString::CBufferString()
{
} /* size: 0 */

// <06E6CBE6> ../../public/tier0/buffer_string.h:706
inline void CBufferString::CBufferString()
{
} /* size: 0 */

// <06979156> ../public/tier0/buffer_string.h:715
void CBufferString::CBufferString(const char* pString, int nChars, bool bExact, bool bGrowable)
{
} /* size: 0 */

// <06979106> ../public/tier0/buffer_string.h:715
inline void CBufferString::CBufferString(const char* pString, int nChars, bool bExact, bool bGrowable)
{
} /* size: 0 */

// <02F2CC62> ../public/tier0/buffer_string.h:733
void CBufferString::CBufferString(int nBufferChars, bool bExact)
{
} /* size: 0 */

// <02F2CC2C> ../public/tier0/buffer_string.h:733
inline void CBufferString::CBufferString(int nBufferChars, bool bExact)
{
} /* size: 0 */

// <06E9B72E> ../public/tier0/buffer_string.h:742
void CBufferString::CBufferString(const CBufferString& string)
{
} /* size: 0 */

// <06E9B705> ../public/tier0/buffer_string.h:742
inline void CBufferString::CBufferString(const CBufferString& string)
{
} /* size: 0 */

// <006835EC> ../public/tier0/buffer_string.h:748
void CBufferString::CBufferString(CBufferString& rhs)
{
} /* size: 0 */

// <006835C3> ../public/tier0/buffer_string.h:748
inline void CBufferString::CBufferString(CBufferString& rhs)
{
} /* size: 0 */

// <06979098> ../public/tier0/buffer_string.h:754
inline void CBufferString::operator=(CBufferString& rhs)
{
} /* size: 0 */

// <06E9B6EE> ../public/tier0/buffer_string.h:760
void CBufferString::~CBufferString()
{
} /* size: 0 */

// <06E9B6D2> ../public/tier0/buffer_string.h:760
inline void CBufferString::~CBufferString()
{
} /* size: 0 */

// <06E9B6B6> ../public/tier0/buffer_string.h:769
inline void CBufferString::Get()
{
} /* size: 0 */

// <06E6CB97> ../../public/tier0/buffer_string.h:774
inline void CBufferString::String()
{
} /* size: 0 */

// <06979011> ../public/tier0/buffer_string.h:779
inline void operator char CBufferString::const*()
{
} /* size: 0 */

// <06E9B68F> ../public/tier0/buffer_string.h:784
inline void CBufferString::operator[](int i)
{
} /* size: 0 */

// <06812E28> ../public/tier0/buffer_string.h:791
inline void CBufferString::GetHeadChar()
{
} /* size: 0 */

// <02CE5281> ../public/tier0/buffer_string.h:796
inline void CBufferString::GetTailChar()
{
} /* size: 0 */

// <06812E0C> ../public/tier0/buffer_string.h:801
inline void CBufferString::Access()
{
} /* size: 0 */

// <06E9B673> ../public/tier0/buffer_string.h:806
inline void CBufferString::GetForModify()
{
} /* size: 0 */

// <056C59CF> ../public/tier0/buffer_string.h:811
inline void CBufferString::Length()
{
} /* size: 0 */

// <005FB1CB> ../public/tier0/buffer_string.h:816
inline void CBufferString::LengthBytes()
{
} /* size: 0 */

// <06978FD9> ../public/tier0/buffer_string.h:821
inline void CBufferString::IsEmpty()
{
} /* size: 0 */

// <044216C4> ../public/tier0/buffer_string.h:826
inline void CBufferString::IsCurBufferFull()
{
} /* size: 0 */

// <044216A8> ../public/tier0/buffer_string.h:831
inline void CBufferString::IsFixedFull()
{
} /* size: 0 */

// <0004C131> ../public/tier0/buffer_string.h:836
inline void CBufferString::LengthUnused()
{
} /* size: 0 */

// <0051F610> ../public/tier0/buffer_string.h:841
inline void CBufferString::LengthUnusedBytes()
{
} /* size: 0 */

// <06812D9C> ../public/tier0/buffer_string.h:846
inline void CBufferString::LengthAllocated()
{
} /* size: 0 */

// <0038FE36> ../public/tier0/buffer_string.h:851
inline void CBufferString::LengthAllocatedBytes()
{
} /* size: 0 */

// <0004C0FB> ../public/tier0/buffer_string.h:861
// variable: 1
inline void CBufferString::ContainsPtr(const char* pPtr)
{
	const char* pBuffer; // 863
} /* size: 0, variables: 1 */

// <00448EC0> ../public/tier0/buffer_string.h:868
inline void CBufferString::AllocSize()
{
} /* size: 0 */

// <00448EA4> ../public/tier0/buffer_string.h:873
inline void CBufferString::NonfixedAllocSize()
{
} /* size: 0 */

// <05DFEB2D> ../public/tier0/buffer_string.h:878
inline void CBufferString::SetFixedPtr(char* pBuffer, int nBufferChars, int nStringChars, bool bFreeBuffer)
{
} /* size: 0 */

// <0004C0B8> ../public/tier0/buffer_string.h:888
inline void CBufferString::GetAppendPtr(int nChars, bool bExact, int* pActual)
{
} /* size: 0 */

// <06812D80> ../public/tier0/buffer_string.h:893
inline void CBufferString::SyncStringChars()
{
} /* size: 0 */

// <06E9B614> ../public/tier0/buffer_string.h:899
inline void CBufferString::Set(const char* pString, int nChars, bool bExact)
{
} /* size: 0 */

// <06E9B5DE> ../public/tier0/buffer_string.h:911
inline void CBufferString::SetDirect(const char* pString, size_t nChars)
{
} /* size: 0 */

// <06E9B59B> ../public/tier0/buffer_string.h:921
inline void CBufferString::Append(const char* pString, int nChars, bool bExact)
{
} /* size: 0 */

// <04E991B9> ../public/tier0/buffer_string.h:932
inline void CBufferString::Append(const CBufferString& rhs, bool bExact)
{
} /* size: 0 */

// <06E9B566> ../public/tier0/buffer_string.h:943
inline void CBufferString::Append(char ch, bool bExact)
{
} /* size: 0 */

// <06E9B531> ../public/tier0/buffer_string.h:954
inline void CBufferString::AppendChar(char ch, bool bExact)
{
} /* size: 0 */

// <06E9B508> ../public/tier0/buffer_string.h:976
inline void CBufferString::RemoveHead(int nChars)
{
} /* size: 0 */

// <06E9B4DF> ../public/tier0/buffer_string.h:981
inline void CBufferString::RemoveTail(int nChars)
{
} /* size: 0 */

// <02CE51F9> ../public/tier0/buffer_string.h:981
void CBufferString::RemoveTail(int nChars)
{
} /* size: 0 */

// <06812CC6> ../public/tier0/buffer_string.h:991
// variable: 1
inline void CBufferString::TrimHead(char c)
{
	char chars; // 993
} /* size: 0, variables: 1 */

// <03505E64> ../public/tier0/buffer_string.h:1015
inline void CBufferString::operator+=(const char* pRhs)
{
} /* size: 0 */

// <03505E3D> ../public/tier0/buffer_string.h:1021
inline void CBufferString::operator+=(char c)
{
} /* size: 0 */

// <06A75D22> ../public/tier0/buffer_string.h:1027
inline void CBufferString::FormatV(const char* pFormat, typedef __va_list_tag __va_list_tag* marker)
{
} /* size: 0 */

// <0004BF25> ../public/tier0/buffer_string.h:1045
inline void CBufferString::Concat(int nStrs, const char* const* ppStrs, const int* pLens, bool bExact)
{
} /* size: 0 */

// <06812C3F> ../public/tier0/buffer_string.h:1078
// variables: 2
inline void CBufferString::AppendConcat(const char* pStr1, int nChars1, const char* pStr2, int nChars2, bool bExact)
{
	const char* pStrs; // 1082
	int nChars; // 1083
} /* size: 0, variables: 2 */

// <06E9B473> ../public/tier0/buffer_string.h:1097
inline void CBufferString::RemoveAll()
{
} /* size: 0 */

// <0058C885> ../public/tier0/buffer_string.h:1097
// function calls: 2
void CBufferString::RemoveAll()
{
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
} /* size: 37, inline expansions: 2 (18 bytes) */

// <05507C83> ../public/tier0/buffer_string.h:1106
inline void CBufferString::operator=(const CBufferString& src)
{
} /* size: 0 */

// <00A4BFC3> ../public/tier0/buffer_string.h:1106
// function calls: 6
void CBufferString::operator=(const CBufferString& src)
{
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
} /* size: 86, inline expansions: 6 (158 bytes) */

// <06E9B44A> ../public/tier0/buffer_string.h:1112
inline void CBufferString::operator=(const char* pSrc)
{
} /* size: 0 */

// <06812BFA> ../public/tier0/buffer_string.h:1128
inline void CBufferString::IsEqual_FastCaseInsensitive(const char* src)
{
} /* size: 0 */

// <0004BEE0> ../public/tier0/buffer_string.h:1223
inline void CBufferString::SetError(bool bError)
{
} /* size: 0 */

// <0004BEC4> ../public/tier0/buffer_string.h:1228
inline void CBufferString::GetGrowable()
{
} /* size: 0 */

// <06812BC4> ../public/tier0/buffer_string.h:1254
inline void CBufferString::CopyAndFixupPathName(const char* pPath, char chSeparator)
{
} /* size: 0 */

// <001C7AE3> ../../public/tier0/buffer_string.h:1285
inline void CBufferString::AppendSlash(char chSeparator)
{
} /* size: 0 */

// <06812BA8> ../public/tier0/buffer_string.h:1297
inline void CBufferString::FixDoubleSlashes()
{
} /* size: 0 */

// <0172966C> ../public/tier0/buffer_string.h:1336
inline void CBufferString::HasExtension()
{
} /* size: 0 */

// <066D287F> ../public/tier0/buffer_string.h:1341
inline void CBufferString::GetFileExtension()
{
} /* size: 0 */

// <06812B8C> ../public/tier0/buffer_string.h:1352
inline void CBufferString::GetUnqualifiedFileName()
{
} /* size: 0 */

// <06E9B42E> ../public/tier0/buffer_string.h:1374
inline void CBufferString::ReadBuffer()
{
} /* size: 0 */

// <04E99AFB> ../public/tier0/buffer_string.h:1374
// function call: 1
void CBufferString::ReadBuffer()
{
	CBufferString::ReadBuffer(); // 1374
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06E9B412> ../public/tier0/buffer_string.h:1390
inline void CBufferString::WriteBuffer()
{
} /* size: 0 */

// <06E9B3E9> ../public/tier0/buffer_string.h:1406
inline void CBufferString::InitMinConstruct(bool bGrowable)
{
} /* size: 0 */

// <001D4DB9> ../public/tier0/buffer_string.h:1484
void CFmtBufferStringN<80>::~CFmtBufferStringN()
{
} /* size: 0 */

// <001D4D9C> ../public/tier0/buffer_string.h:1484
inline void CFmtBufferStringN<80>::~CFmtBufferStringN()
{
} /* size: 0 */

// <000D2333> ../public/tier0/buffer_string.h:1484
void CFmtBufferStringN<50>::~CFmtBufferStringN()
{
} /* size: 0 */

// <000D2316> ../public/tier0/buffer_string.h:1484
inline void CFmtBufferStringN<50>::~CFmtBufferStringN()
{
} /* size: 0 */

// <0004F37B> ../public/tier0/buffer_string.h:1484
void CFmtBufferStringN<200>::~CFmtBufferStringN()
{
} /* size: 0 */

// <0004F35E> ../public/tier0/buffer_string.h:1484
inline void CFmtBufferStringN<200>::~CFmtBufferStringN()
{
} /* size: 0 */

// <000C7FAB> ../public/tier0/buffer_string.h:1484
// member functions: 24
// member variables: 2
// class size: 64
class CFmtBufferStringN<50> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:1487 */
	void CFmtBufferStringN(CFmtBufferStringN<50>* , const char* , ...);
	/* ../public/tier0/buffer_string.h:1498 */
	void CFmtBufferStringN(CFmtBufferStringN<50>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:1505 */
	void CFmtBufferStringN(CFmtBufferStringN<50>* , const CFmtBufferStringN<50>& );
	/* ../public/tier0/buffer_string.h:1513 */
	void CFmtBufferStringN(CFmtBufferStringN<50>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:1520 */
	CFmtBufferStringN<50>& operator=(CFmtBufferStringN<50>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:1525 */
	void CFmtBufferStringN(CFmtBufferStringN<50>* , CFmtBufferStringN<50>& );
	/* ../public/tier0/buffer_string.h:1532 */
	CFmtBufferStringN<50>& operator=(CFmtBufferStringN<50>* , CFmtBufferStringN<50>& );
	/* ../public/tier0/buffer_string.h:1538 */
	CFmtBufferStringN<50>& operator=(CFmtBufferStringN<50>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:1543 */
	CFmtBufferStringN<50>& operator=(CFmtBufferStringN<50>* , const CFmtBufferStringN<50>& );
	/* ../public/tier0/buffer_string.h:1548 */
	CFmtBufferStringN<50>& operator=(CFmtBufferStringN<50>* , const char* );
	/* ../public/tier0/buffer_string.h:1554 */
	void Purge(CFmtBufferStringN<50>* );
protected:
	char m_extraInstanceData[42]; /* 16 42 */
	void ~CFmtBufferStringN(CFmtBufferStringN<50>* );
	void CFmtBufferStringN(class CFmtBufferStringN<50> *, const char  *, ...); /* linkage=_ZN17CFmtBufferStringNILi50EEC4EPKcz */
	void CFmtBufferStringN(class CFmtBufferStringN<50> *, const class CBufferString  &); /* linkage=_ZN17CFmtBufferStringNILi50EEC4ERK13CBufferString */
	void CFmtBufferStringN(class CFmtBufferStringN<50> *, const class CFmtBufferStringN<50>  &); /* linkage=_ZN17CFmtBufferStringNILi50EEC4ERKS0_ */
	void CFmtBufferStringN(class CFmtBufferStringN<50> *, class CBufferString &); /* linkage=_ZN17CFmtBufferStringNILi50EEC4EO13CBufferString */
	class CFmtBufferStringN<50> & operator=(class CFmtBufferStringN<50> *, class CBufferString &); /* linkage=_ZN17CFmtBufferStringNILi50EEaSEO13CBufferString */
	void CFmtBufferStringN(class CFmtBufferStringN<50> *, class CFmtBufferStringN<50> &); /* linkage=_ZN17CFmtBufferStringNILi50EEC4EOS0_ */
	class CFmtBufferStringN<50> & operator=(class CFmtBufferStringN<50> *, class CFmtBufferStringN<50> &); /* linkage=_ZN17CFmtBufferStringNILi50EEaSEOS0_ */
	class CFmtBufferStringN<50> & operator=(class CFmtBufferStringN<50> *, const class CBufferString  &); /* linkage=_ZN17CFmtBufferStringNILi50EEaSERK13CBufferString */
	class CFmtBufferStringN<50> & operator=(class CFmtBufferStringN<50> *, const class CFmtBufferStringN<50>  &); /* linkage=_ZN17CFmtBufferStringNILi50EEaSERKS0_ */
	class CFmtBufferStringN<50> & operator=(class CFmtBufferStringN<50> *, const char  *); /* linkage=_ZN17CFmtBufferStringNILi50EEaSEPKc */
	void Purge(class CFmtBufferStringN<50> *); /* linkage=_ZN17CFmtBufferStringNILi50EE5PurgeEv */
	void ~CFmtBufferStringN(class CFmtBufferStringN<50> *); /* linkage=_ZN17CFmtBufferStringNILi50EED4Ev */
};

// <001C277D> ../public/tier0/buffer_string.h:1484
// member functions: 12
// member variables: 2
// class size: 88
class CFmtBufferStringN<80> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:1487 */
	void CFmtBufferStringN(CFmtBufferStringN<80>* , const char* , ...);
	/* ../public/tier0/buffer_string.h:1498 */
	void CFmtBufferStringN(CFmtBufferStringN<80>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:1505 */
	void CFmtBufferStringN(CFmtBufferStringN<80>* , const CFmtBufferStringN<80>& );
	/* ../public/tier0/buffer_string.h:1513 */
	void CFmtBufferStringN(CFmtBufferStringN<80>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:1520 */
	CFmtBufferStringN<80>& operator=(CFmtBufferStringN<80>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:1525 */
	void CFmtBufferStringN(CFmtBufferStringN<80>* , CFmtBufferStringN<80>& );
	/* ../public/tier0/buffer_string.h:1532 */
	CFmtBufferStringN<80>& operator=(CFmtBufferStringN<80>* , CFmtBufferStringN<80>& );
	/* ../public/tier0/buffer_string.h:1538 */
	CFmtBufferStringN<80>& operator=(CFmtBufferStringN<80>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:1543 */
	CFmtBufferStringN<80>& operator=(CFmtBufferStringN<80>* , const CFmtBufferStringN<80>& );
	/* ../public/tier0/buffer_string.h:1548 */
	CFmtBufferStringN<80>& operator=(CFmtBufferStringN<80>* , const char* );
	/* ../public/tier0/buffer_string.h:1554 */
	void Purge(CFmtBufferStringN<80>* );
protected:
	char m_extraInstanceData[72]; /* 16 72 */
	void ~CFmtBufferStringN(CFmtBufferStringN<80>* );
};

// <00018FA6> ../public/tier0/buffer_string.h:1484
// member functions: 24
// member variables: 2
// class size: 208
class CFmtBufferStringN<200> : public CBufferString {
public:
	/* class CBufferString <ancestor>; */ /* 0 16 */
	/* ../public/tier0/buffer_string.h:1487 */
	void CFmtBufferStringN(CFmtBufferStringN<200>* , const char* , ...);
	/* ../public/tier0/buffer_string.h:1498 */
	void CFmtBufferStringN(CFmtBufferStringN<200>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:1505 */
	void CFmtBufferStringN(CFmtBufferStringN<200>* , const CFmtBufferStringN<200>& );
	/* ../public/tier0/buffer_string.h:1513 */
	void CFmtBufferStringN(CFmtBufferStringN<200>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:1520 */
	CFmtBufferStringN<200>& operator=(CFmtBufferStringN<200>* , CBufferString& );
	/* ../public/tier0/buffer_string.h:1525 */
	void CFmtBufferStringN(CFmtBufferStringN<200>* , CFmtBufferStringN<200>& );
	/* ../public/tier0/buffer_string.h:1532 */
	CFmtBufferStringN<200>& operator=(CFmtBufferStringN<200>* , CFmtBufferStringN<200>& );
	/* ../public/tier0/buffer_string.h:1538 */
	CFmtBufferStringN<200>& operator=(CFmtBufferStringN<200>* , const CBufferString& );
	/* ../public/tier0/buffer_string.h:1543 */
	CFmtBufferStringN<200>& operator=(CFmtBufferStringN<200>* , const CFmtBufferStringN<200>& );
	/* ../public/tier0/buffer_string.h:1548 */
	CFmtBufferStringN<200>& operator=(CFmtBufferStringN<200>* , const char* );
	/* ../public/tier0/buffer_string.h:1554 */
	void Purge(CFmtBufferStringN<200>* );
protected:
	char m_extraInstanceData[192]; /* 16 192 */
	void ~CFmtBufferStringN(CFmtBufferStringN<200>* );
	void CFmtBufferStringN(class CFmtBufferStringN<200> *, const char  *, ...); /* linkage=_ZN17CFmtBufferStringNILi200EEC4EPKcz */
	void CFmtBufferStringN(class CFmtBufferStringN<200> *, const class CBufferString  &); /* linkage=_ZN17CFmtBufferStringNILi200EEC4ERK13CBufferString */
	void CFmtBufferStringN(class CFmtBufferStringN<200> *, const class CFmtBufferStringN<200>  &); /* linkage=_ZN17CFmtBufferStringNILi200EEC4ERKS0_ */
	void CFmtBufferStringN(class CFmtBufferStringN<200> *, class CBufferString &); /* linkage=_ZN17CFmtBufferStringNILi200EEC4EO13CBufferString */
	class CFmtBufferStringN<200> & operator=(class CFmtBufferStringN<200> *, class CBufferString &); /* linkage=_ZN17CFmtBufferStringNILi200EEaSEO13CBufferString */
	void CFmtBufferStringN(class CFmtBufferStringN<200> *, class CFmtBufferStringN<200> &); /* linkage=_ZN17CFmtBufferStringNILi200EEC4EOS0_ */
	class CFmtBufferStringN<200> & operator=(class CFmtBufferStringN<200> *, class CFmtBufferStringN<200> &); /* linkage=_ZN17CFmtBufferStringNILi200EEaSEOS0_ */
	class CFmtBufferStringN<200> & operator=(class CFmtBufferStringN<200> *, const class CBufferString  &); /* linkage=_ZN17CFmtBufferStringNILi200EEaSERK13CBufferString */
	class CFmtBufferStringN<200> & operator=(class CFmtBufferStringN<200> *, const class CFmtBufferStringN<200>  &); /* linkage=_ZN17CFmtBufferStringNILi200EEaSERKS0_ */
	class CFmtBufferStringN<200> & operator=(class CFmtBufferStringN<200> *, const char  *); /* linkage=_ZN17CFmtBufferStringNILi200EEaSEPKc */
	void Purge(class CFmtBufferStringN<200> *); /* linkage=_ZN17CFmtBufferStringNILi200EE5PurgeEv */
	void ~CFmtBufferStringN(class CFmtBufferStringN<200> *); /* linkage=_ZN17CFmtBufferStringNILi200EED4Ev */
};

// <001CC425> ../public/tier0/buffer_string.h:1487
// variables: 2
// function calls: 5
void CFmtBufferStringN<80>::CFmtBufferStringN(const char* pFormat, ...)
{
	{
		va_list params; // 1492
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 1488
	{
		va_list params; // 1492
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 1029
		CBufferString::FormatV(
			const char* pFormat,
			typedef __va_list_tag __va_list_tag* marker);  // 1494
	}
} /* size: 221, inline expansions: 2 (16 bytes) */

// <001CC3EF> ../public/tier0/buffer_string.h:1487
// variable: 1
inline void CFmtBufferStringN<80>::CFmtBufferStringN(const char* pFormat, ...)
{
	{
		va_list params; // 1492
	}
} /* size: 0 */

// <000CD966> ../public/tier0/buffer_string.h:1487
// variables: 2
// function calls: 5
void CFmtBufferStringN<50>::CFmtBufferStringN(const char* pFormat, ...)
{
	{
		va_list params; // 1492
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 1488
	{
		va_list params; // 1492
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 1029
		CBufferString::FormatV(
			const char* pFormat,
			typedef __va_list_tag __va_list_tag* marker);  // 1494
	}
} /* size: 221, inline expansions: 2 (16 bytes) */

// <000CD930> ../public/tier0/buffer_string.h:1487
// variable: 1
inline void CFmtBufferStringN<50>::CFmtBufferStringN(const char* pFormat, ...)
{
	{
		va_list params; // 1492
	}
} /* size: 0 */

// <0004A92A> ../public/tier0/buffer_string.h:1487
// variables: 2
// function calls: 5
void CFmtBufferStringN<200>::CFmtBufferStringN(const char* pFormat, ...)
{
	{
		va_list params; // 1492
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 1488
	{
		va_list params; // 1492
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 1029
		CBufferString::FormatV(
			const char* pFormat,
			typedef __va_list_tag __va_list_tag* marker);  // 1494
	}
} /* size: 221, inline expansions: 2 (16 bytes) */

// <0004A8F4> ../public/tier0/buffer_string.h:1487
// variable: 1
inline void CFmtBufferStringN<200>::CFmtBufferStringN(const char* pFormat, ...)
{
	{
		va_list params; // 1492
	}
} /* size: 0 */

