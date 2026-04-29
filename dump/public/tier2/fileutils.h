
//
// public/tier2/fileutils.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 52
//	classes: 6
//

// <001BFB26> ../../public/tier2/fileutils.h:26
const char* GetTemporaryFolder(void)
{
} /* size: 0 */

// <066CCD37> ../public/tier2/fileutils.h:32
bool SplitFullPath(const char *, CBufferString *, CBufferString *, CBufferString *)
{
} /* size: 0 */

// <006EF7F9> ../public/tier2/fileutils.h:49
void GetModSubdirectory(const char *, bool, CBufferString *)
{
} /* size: 0 */

// <000B0D59> ../public/tier2/fileutils.h:86
void BuildFileList(const char *, const char *, const char *, bool, BuildFileListType_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &)
{
} /* size: 0 */

// <02311E7A> ../public/tier2/fileutils.h:164
// member functions: 42
// member variable: 1
// class size: 8
class CBaseFile {
	FileHandle_t m_FileHandle; /* 0 8 */
	/* ../public/tier2/fileutils.h:169 */
	void CBaseFile(CBaseFile* );
	/* ../public/tier2/fileutils.h:179 */
	void ~CBaseFile(CBaseFile* );
	/* ../public/tier2/fileutils.h:184 */
	FileHandle_t Handle(const CBaseFile* );
	/* ../public/tier2/fileutils.h:189 */
	void Close(CBaseFile* );
	/* ../public/tier2/fileutils.h:196 */
	void Open(CBaseFile* , const char* , const char* );
	/* ../public/tier2/fileutils.h:202 */
	char* ReadLine(CBaseFile* , char* , int);
	/* ../public/tier2/fileutils.h:207 */
	CUtlString ReadLine(CBaseFile* , bool);
	/* ../public/tier2/fileutils.h:213 */
	void ReadLines(CBaseFile* , CUtlStringList& , int);
	/* ../public/tier2/fileutils.h:215 */
	int Read(CBaseFile* , void* , int);
	/* ../public/tier2/fileutils.h:220 */
	void MustRead(CBaseFile* , void* , int);
	/* ../public/tier2/fileutils.h:230 */
	int Write(CBaseFile* , const void* , int);
	/* ../public/tier2/fileutils.h:238 */
	void PutInt(CBaseFile* , int);
	/* ../public/tier2/fileutils.h:244 */
	int GetInt(CBaseFile* );
	/* ../public/tier2/fileutils.h:251 */
	float GetFloat(CBaseFile* );
	/* ../public/tier2/fileutils.h:258 */
	void PutFloat(CBaseFile* , float);
	/* ../public/tier2/fileutils.h:264 */
	bool IsOk(CBaseFile* );
	/* ../public/tier2/fileutils.h:270 */
	bool AtEndOfFile(const CBaseFile* );
	/* ../public/tier2/fileutils.h:272 */
	void Seek(CBaseFile* , int, FileSystemSeek_t);
	/* ../public/tier2/fileutils.h:277 */
	int64 Tell(CBaseFile* );
	/* ../public/tier2/fileutils.h:282 */
	int64 Size(CBaseFile* );
	/* ../public/tier2/fileutils.h:288 */
	void ReadFile(CBaseFile* , CUtlBuffer& );
	void CBaseFile(class CBaseFile *); /* linkage=_ZN9CBaseFileC4Ev */
	void ~CBaseFile(class CBaseFile *); /* linkage=_ZN9CBaseFileD4Ev */
	FileHandle_t Handle(const class CBaseFile  *); /* linkage=_ZNK9CBaseFile6HandleEv */
	void Close(class CBaseFile *); /* linkage=_ZN9CBaseFile5CloseEv */
	void Open(class CBaseFile *, const char  *, const char  *); /* linkage=_ZN9CBaseFile4OpenEPKcS1_ */
	char * ReadLine(class CBaseFile *, char *, int); /* linkage=_ZN9CBaseFile8ReadLineEPci */
	class CUtlString ReadLine(class CBaseFile *, bool); /* linkage=_ZN9CBaseFile8ReadLineEb */
	void ReadLines(class CBaseFile *, class CUtlStringList &, int); /* linkage=_ZN9CBaseFile9ReadLinesER14CUtlStringListi */
	int Read(class CBaseFile *, void *, int); /* linkage=_ZN9CBaseFile4ReadEPvi */
	void MustRead(class CBaseFile *, void *, int); /* linkage=_ZN9CBaseFile8MustReadEPvi */
	int Write(class CBaseFile *, const void  *, int); /* linkage=_ZN9CBaseFile5WriteEPKvi */
	void PutInt(class CBaseFile *, int); /* linkage=_ZN9CBaseFile6PutIntEi */
	int GetInt(class CBaseFile *); /* linkage=_ZN9CBaseFile6GetIntEv */
	float GetFloat(class CBaseFile *); /* linkage=_ZN9CBaseFile8GetFloatEv */
	void PutFloat(class CBaseFile *, float); /* linkage=_ZN9CBaseFile8PutFloatEf */
	bool IsOk(class CBaseFile *); /* linkage=_ZN9CBaseFile4IsOkEv */
	bool AtEndOfFile(const class CBaseFile  *); /* linkage=_ZNK9CBaseFile11AtEndOfFileEv */
	void Seek(class CBaseFile *, int, enum FileSystemSeek_t); /* linkage=_ZN9CBaseFile4SeekEi16FileSystemSeek_t */
	int64 Tell(class CBaseFile *); /* linkage=_ZN9CBaseFile4TellEv */
	int64 Size(class CBaseFile *); /* linkage=_ZN9CBaseFile4SizeEv */
	void ReadFile(class CBaseFile *, class CUtlBuffer &); /* linkage=_ZN9CBaseFile8ReadFileER10CUtlBuffer */
};

// <063503B9> ../public/tier2/fileutils.h:169
void CBaseFile::CBaseFile()
{
} /* size: 0 */

// <063503A0> ../public/tier2/fileutils.h:169
inline void CBaseFile::CBaseFile()
{
} /* size: 0 */

// <06350389> ../public/tier2/fileutils.h:179
void CBaseFile::~CBaseFile()
{
} /* size: 0 */

// <06350370> ../public/tier2/fileutils.h:179
inline void CBaseFile::~CBaseFile()
{
} /* size: 0 */

// <06350357> ../public/tier2/fileutils.h:184
inline void CBaseFile::Handle()
{
} /* size: 0 */

// <0635033E> ../public/tier2/fileutils.h:189
inline void CBaseFile::Close()
{
} /* size: 0 */

// <0635030D> ../public/tier2/fileutils.h:196
inline void CBaseFile::Open(const char* fname, const char* modes)
{
} /* size: 0 */

// <068124AF> ../public/tier2/fileutils.h:202
inline void CBaseFile::ReadLine(char* pOutput, int maxChars)
{
} /* size: 0 */

// <0681247E> ../public/tier2/fileutils.h:215
inline void CBaseFile::Read(void* pOutput, int size)
{
} /* size: 0 */

// <00238F4E> ../public/tier2/fileutils.h:220
// variables: 3
inline void CBaseFile::MustRead(void* pOutput, int size)
{
	int ret; // 222
	const char   __FUNCTION__; // 25336
	{
		int* _pCrash; // 226
	}
} /* size: 0, variables: 2 */

// <00238F1D> ../public/tier2/fileutils.h:230
inline void CBaseFile::Write(const void* pInput, int size)
{
} /* size: 0 */

// <06812465> ../public/tier2/fileutils.h:264
inline void CBaseFile::IsOk()
{
} /* size: 0 */

// <00238ED1> ../public/tier2/fileutils.h:272
inline void CBaseFile::Seek(int pos, FileSystemSeek_t nSeekType)
{
} /* size: 0 */

// <00238EB8> ../public/tier2/fileutils.h:277
inline void CBaseFile::Tell()
{
} /* size: 0 */

// <06812421> ../public/tier2/fileutils.h:282
// variables: 2
inline void CBaseFile::Size()
{
	const char   __FUNCTION__; // 25556
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 284
	}
} /* size: 0, variables: 1 */

// <031BA2EF> ../public/tier2/fileutils.h:282
// variables: 2
inline void CBaseFile::Size()
{
	const char   __FUNCTION__; // 45463
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 284
	}
} /* size: 0, variables: 1 */

// <003B2C9F> ../public/tier2/fileutils.h:282
// variables: 2
inline void CBaseFile::Size()
{
	const char   __FUNCTION__; // 44130
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 284
	}
} /* size: 0, variables: 1 */

// <01A1FDAB> ../public/tier2/fileutils.h:282
// variables: 2
inline void CBaseFile::Size()
{
	const char   __FUNCTION__; // 18883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 284
	}
} /* size: 0, variables: 1 */

// <00A88895> ../public/tier2/fileutils.h:282
// variables: 2
inline void CBaseFile::Size()
{
	const char   __FUNCTION__; // 14888
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 284
	}
} /* size: 0, variables: 1 */

// <0102B7F4> ../public/tier2/fileutils.h:282
// variables: 2
inline void CBaseFile::Size()
{
	const char   __FUNCTION__; // 40844
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 284
	}
} /* size: 0, variables: 1 */

// <00238E75> ../public/tier2/fileutils.h:282
// variables: 2
inline void CBaseFile::Size()
{
	const char   __FUNCTION__; // 25228
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 284
	}
} /* size: 0, variables: 1 */

// <001C9735> ../public/tier2/fileutils.h:282
// variables: 2
inline void CBaseFile::Size()
{
	const char   __FUNCTION__; // 34549
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 284
	}
} /* size: 0, variables: 1 */

// <0022BEDD> ../public/tier2/fileutils.h:291
void COutputFile::~COutputFile()
{
} /* size: 0 */

// <0022BEC0> ../public/tier2/fileutils.h:291
inline void COutputFile::~COutputFile()
{
} /* size: 0 */

// <001FF0B8> ../public/tier2/fileutils.h:291
// member functions: 8
// member variable: 1
// class size: 8
class COutputFile : public CBaseFile {
public:
	/* class CBaseFile <ancestor>; */ /* 0 8 */
	/* ../public/tier2/fileutils.h:294 */
	void Open(COutputFile* , const char* );
	/* ../public/tier2/fileutils.h:299 */
	void COutputFile(COutputFile* , const char* );
	/* ../public/tier2/fileutils.h:304 */
	void COutputFile(COutputFile* );
	void ~COutputFile(COutputFile* );
	void Open(class COutputFile *, const char  *); /* linkage=_ZN11COutputFile4OpenEPKc */
	void COutputFile(class COutputFile *, const char  *); /* linkage=_ZN11COutputFileC4EPKc */
	void COutputFile(class COutputFile *); /* linkage=_ZN11COutputFileC4Ev */
	void ~COutputFile(class COutputFile *); /* linkage=_ZN11COutputFileD4Ev */
};

// <00238E4F> ../public/tier2/fileutils.h:294
inline void COutputFile::Open(const char* pFname)
{
} /* size: 0 */

// <00238E33> ../public/tier2/fileutils.h:299
void COutputFile::COutputFile(const char* pFname)
{
} /* size: 0 */

// <00238E0D> ../public/tier2/fileutils.h:299
inline void COutputFile::COutputFile(const char* pFname)
{
} /* size: 0 */

// <06331FEA> ../public/tier2/fileutils.h:309
void COutputTextFile::~COutputTextFile()
{
} /* size: 0 */

// <06331FCD> ../public/tier2/fileutils.h:309
inline void COutputTextFile::~COutputTextFile()
{
} /* size: 0 */

// <06247C46> ../public/tier2/fileutils.h:309
// member functions: 8
// member variable: 1
// class size: 8
class COutputTextFile : public CBaseFile {
public:
	/* class CBaseFile <ancestor>; */ /* 0 8 */
	/* ../public/tier2/fileutils.h:312 */
	void Open(COutputTextFile* , const char* );
	/* ../public/tier2/fileutils.h:317 */
	void COutputTextFile(COutputTextFile* , const char* );
	/* ../public/tier2/fileutils.h:322 */
	void COutputTextFile(COutputTextFile* );
	void ~COutputTextFile(COutputTextFile* );
	void Open(class COutputTextFile *, const char  *); /* linkage=_ZN15COutputTextFile4OpenEPKc */
	void COutputTextFile(class COutputTextFile *, const char  *); /* linkage=_ZN15COutputTextFileC4EPKc */
	void COutputTextFile(class COutputTextFile *); /* linkage=_ZN15COutputTextFileC4Ev */
	void ~COutputTextFile(class COutputTextFile *); /* linkage=_ZN15COutputTextFileD4Ev */
};

// <0635029D> ../public/tier2/fileutils.h:312
inline void COutputTextFile::Open(const char* pFname)
{
} /* size: 0 */

// <06350281> ../public/tier2/fileutils.h:317
void COutputTextFile::COutputTextFile(const char* pFname)
{
} /* size: 0 */

// <0635025B> ../public/tier2/fileutils.h:317
inline void COutputTextFile::COutputTextFile(const char* pFname)
{
} /* size: 0 */

// <0023588D> ../public/tier2/fileutils.h:345
void CInputFile::~CInputFile()
{
} /* size: 0 */

// <00235870> ../public/tier2/fileutils.h:345
inline void CInputFile::~CInputFile()
{
} /* size: 0 */

// <001FF156> ../public/tier2/fileutils.h:345
// member functions: 8
// member variable: 1
// class size: 8
class CInputFile : public CBaseFile {
public:
	/* class CBaseFile <ancestor>; */ /* 0 8 */
	/* ../public/tier2/fileutils.h:348 */
	void Open(CInputFile* , const char* );
	/* ../public/tier2/fileutils.h:353 */
	void CInputFile(CInputFile* , const char* );
	/* ../public/tier2/fileutils.h:357 */
	void CInputFile(CInputFile* );
	void ~CInputFile(CInputFile* );
	void Open(class CInputFile *, const char  *); /* linkage=_ZN10CInputFile4OpenEPKc */
	void CInputFile(class CInputFile *, const char  *); /* linkage=_ZN10CInputFileC4EPKc */
	void CInputFile(class CInputFile *); /* linkage=_ZN10CInputFileC4Ev */
	void ~CInputFile(class CInputFile *); /* linkage=_ZN10CInputFileD4Ev */
};

// <00238DE7> ../public/tier2/fileutils.h:348
inline void CInputFile::Open(const char* pFname)
{
} /* size: 0 */

// <00238DCB> ../public/tier2/fileutils.h:353
void CInputFile::CInputFile(const char* pFname)
{
} /* size: 0 */

// <00238DA5> ../public/tier2/fileutils.h:353
inline void CInputFile::CInputFile(const char* pFname)
{
} /* size: 0 */

// <02378C80> ../public/tier2/fileutils.h:362
void CInputTextFile::~CInputTextFile()
{
} /* size: 0 */

// <02378C63> ../public/tier2/fileutils.h:362
inline void CInputTextFile::~CInputTextFile()
{
} /* size: 0 */

// <0231219E> ../public/tier2/fileutils.h:362
// member functions: 8
// member variable: 1
// class size: 8
class CInputTextFile : public CBaseFile {
public:
	/* class CBaseFile <ancestor>; */ /* 0 8 */
	/* ../public/tier2/fileutils.h:365 */
	void Open(CInputTextFile* , const char* );
	/* ../public/tier2/fileutils.h:370 */
	void CInputTextFile(CInputTextFile* , const char* );
	/* ../public/tier2/fileutils.h:374 */
	void CInputTextFile(CInputTextFile* );
	void ~CInputTextFile(CInputTextFile* );
	void Open(class CInputTextFile *, const char  *); /* linkage=_ZN14CInputTextFile4OpenEPKc */
	void CInputTextFile(class CInputTextFile *, const char  *); /* linkage=_ZN14CInputTextFileC4EPKc */
	void CInputTextFile(class CInputTextFile *); /* linkage=_ZN14CInputTextFileC4Ev */
	void ~CInputTextFile(class CInputTextFile *); /* linkage=_ZN14CInputTextFileD4Ev */
};

// <02382CFA> ../public/tier2/fileutils.h:365
inline void CInputTextFile::Open(const char* pFname)
{
} /* size: 0 */

// <02382CDE> ../public/tier2/fileutils.h:370
void CInputTextFile::CInputTextFile(const char* pFname)
{
} /* size: 0 */

// <02382CB8> ../public/tier2/fileutils.h:370
inline void CInputTextFile::CInputTextFile(const char* pFname)
{
} /* size: 0 */

// <06331BE5> ../public/tier2/fileutils.h:381
void CRequiredInputTextFile::~CRequiredInputTextFile()
{
} /* size: 0 */

// <06331BC8> ../public/tier2/fileutils.h:381
inline void CRequiredInputTextFile::~CRequiredInputTextFile()
{
} /* size: 0 */

// <06247CE5> ../public/tier2/fileutils.h:381
// member functions: 8
// member variable: 1
// class size: 8
class CRequiredInputTextFile : public CBaseFile {
public:
	/* class CBaseFile <ancestor>; */ /* 0 8 */
	/* ../public/tier2/fileutils.h:384 */
	void Open(CRequiredInputTextFile* , const char* );
	/* ../public/tier2/fileutils.h:393 */
	void CRequiredInputTextFile(CRequiredInputTextFile* , const char* );
	/* ../public/tier2/fileutils.h:397 */
	void CRequiredInputTextFile(CRequiredInputTextFile* );
	void ~CRequiredInputTextFile(CRequiredInputTextFile* );
	void Open(class CRequiredInputTextFile *, const char  *); /* linkage=_ZN22CRequiredInputTextFile4OpenEPKc */
	void CRequiredInputTextFile(class CRequiredInputTextFile *, const char  *); /* linkage=_ZN22CRequiredInputTextFileC4EPKc */
	void CRequiredInputTextFile(class CRequiredInputTextFile *); /* linkage=_ZN22CRequiredInputTextFileC4Ev */
	void ~CRequiredInputTextFile(class CRequiredInputTextFile *); /* linkage=_ZN22CRequiredInputTextFileD4Ev */
};

// <0635021B> ../public/tier2/fileutils.h:384
// variables: 2
inline void CRequiredInputTextFile::Open(const char* pFname)
{
	const char   __FUNCTION__; // 4721
	{
		int* _pCrash; // 389
	}
} /* size: 0, variables: 1 */

// <02F74D30> ../public/tier2/fileutils.h:384
// variables: 2
inline void CRequiredInputTextFile::Open(const char* pFname)
{
	const char   __FUNCTION__; // 11387
	{
		int* _pCrash; // 389
	}
} /* size: 0, variables: 1 */

// <063501FF> ../public/tier2/fileutils.h:393
void CRequiredInputTextFile::CRequiredInputTextFile(const char* pFname)
{
} /* size: 0 */

// <063501D9> ../public/tier2/fileutils.h:393
inline void CRequiredInputTextFile::CRequiredInputTextFile(const char* pFname)
{
} /* size: 0 */

