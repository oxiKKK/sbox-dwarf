
//
// tier0/commandline.cpp
//
//	referenced by: libtier0.so
//
//	functions: 42
//	class: 1
//

// <0009AF3A> tier0/commandline.cpp:40
// member functions: 67
// member variables: 7
// vtable entries: 20
// class size: 56
class CCommandLine : public ICommandLine {
	/* tier0/commandline.cpp:82 */
	struct ArgPair_t {
		const char * sArg; /* 0 8 */
		uint32 nArgLengthAndFlags; /* 8 4 */
	} __attribute__((__packed__));
	/* tier0/commandline.cpp:89 */
	struct ArgumentSet_t {
		/* tier0/commandline.cpp:93 */
		enum Constants_t {
			ARGLENGTH_MASK = 1073741823,
			ARGLENGTH_FLAG_ARGFILE = 1073741824,
			ARGLENGTH_FLAG_WASQUOTED = 2147483648,
		};
		/* tier0/commandline.cpp:91 */
		void ArgumentSet_t(ArgumentSet_t* );
		ArgumentSet_t * pNext; /* 0 8 */
		ArgPair_t * pOriginatingArg; /* 8 8 */
		const char * szFromFile; /* 16 8 */
		uint32 nArgs; /* 24 4 */
		ArgPair_t args[1]; /* 28 12 */
		/* tier0/commandline.cpp:107 */
		void FillArgs(const char* , int, bool, void* );
	} __attribute__((__packed__));
public:
	/* class ICommandLine <ancestor>; */ /* 0 8 */
	void CCommandLine(CCommandLine* , const CCommandLine& );
	/* tier0/commandline.cpp:193 */
	void CCommandLine(CCommandLine* );
	/* tier0/commandline.cpp:211 */
	virtual void ~CCommandLine(CCommandLine* );
	/* tier0/commandline.cpp:723 */
	virtual void CreateCmdLine(CCommandLine* , const char* );
	/* tier0/commandline.cpp:639 */
	virtual void CreateCmdLine(CCommandLine* , int, const char* const* );
	/* tier0/commandline.cpp:691 */
	virtual void CreateCmdLinePrependAppName(CCommandLine* , const char* );
	/* tier0/commandline.cpp:1137 */
	virtual const char* GetCmdLine(const CCommandLine* );
	/* tier0/commandline.cpp:1149 */
	virtual const char* CheckParm(const CCommandLine* , const char* , const char** );
	/* tier0/commandline.cpp:1251 */
	virtual bool HasParm(const CCommandLine* , const char* );
	/* tier0/commandline.cpp:1060 */
	virtual void RemoveParm(CCommandLine* , const char* );
	/* tier0/commandline.cpp:1104 */
	virtual void AppendParm(CCommandLine* , const char* , const char* );
	/* tier0/commandline.cpp:1235 */
	virtual int ParmCount(const CCommandLine* );
	/* tier0/commandline.cpp:1240 */
	virtual int FindParm(const CCommandLine* , const char* , int);
	/* tier0/commandline.cpp:1256 */
	virtual const char* GetParm(const CCommandLine* , int);
	/* tier0/commandline.cpp:1339 */
	virtual const char* ParmValue(const CCommandLine* , const char* , const char* );
	/* tier0/commandline.cpp:1352 */
	virtual int ParmValue(const CCommandLine* , const char* , int);
	/* tier0/commandline.cpp:1370 */
	virtual float ParmValue(const CCommandLine* , const char* , float);
	/* tier0/commandline.cpp:1388 */
	virtual bool ParmValue(CCommandLine* , const char* , const char* , CBufferString* );
	/* tier0/commandline.cpp:1417 */
	virtual const char* ParmValueByIndex(const CCommandLine* , int, const char* );
	/* tier0/commandline.cpp:1270 */
	virtual void SetParm(CCommandLine* , int, const char* );
	/* tier0/commandline.cpp:1311 */
	virtual void RemoveParmByIndex(CCommandLine* , int);
	/* tier0/commandline.cpp:1264 */
	virtual const char* * GetParms(const CCommandLine* );
	/* tier0/commandline.cpp:77 */
	virtual bool IsWellInitialized(const CCommandLine* );
private:
	/* tier0/commandline.cpp:744 */
	void InternalCreateCmdLineWithArgFiles(CCommandLine* , ArgumentSet_t& );
	/* tier0/commandline.cpp:960 */
	void InternalComposeFinalCommandLine(CCommandLine* , ArgumentSet_t& );
	/* tier0/commandline.cpp:899 */
	void InternalComposeFinalCommandLine_R(CCommandLine* , ArgumentSet_t& , char* & , char* & );
	/* tier0/commandline.cpp:1070 */
	void InternalComposeRemovedArgumentSet(CCommandLine* , ArgumentSet_t* , const char* );
	/* tier0/commandline.cpp:252 */
	FILE* OpenParameterFile(const char* , int, const char* , char* , size_t);
	/* tier0/commandline.cpp:595 */
	bool FindAppAutoArgs(CBufferString* );
	/* tier0/commandline.cpp:1174 */
	void FindArgsInString(const char* , int, FN_FoundArg, void* );
	/* tier0/commandline.cpp:127 */
	typedef void (*FN_FoundArg)(const char* , int, bool, void* );
	/* tier0/commandline.cpp:1429 */
	void InitEarlyCommandLine(CCommandLine* );
	char * m_pszCmdLine; /* 8 8 */
	size_t m_nAllocatedMem; /* 16 8 */
	int m_nParmCount; /* 24 4 */
	const char * * m_ppParms; /* 32 8 */
	bool * m_bWasQuoted; /* 40 8 */
	bool m_bIsWellInitialized; /* 48 1 */
	void CCommandLine(class CCommandLine *, const class CCommandLine  &); /* linkage=_ZN12CCommandLineC4ERKS_ */
	void CCommandLine(class CCommandLine *); /* linkage=_ZN12CCommandLineC4Ev */
	virtual void ~CCommandLine(class CCommandLine *); /* linkage=_ZN12CCommandLineD4Ev */
	virtual void CreateCmdLine(class CCommandLine *, const char  *); /* linkage=_ZN12CCommandLine13CreateCmdLineEPKc */
	virtual void CreateCmdLine(class CCommandLine *, int, const char  * const *); /* linkage=_ZN12CCommandLine13CreateCmdLineEiPKPKc */
	virtual void CreateCmdLinePrependAppName(class CCommandLine *, const char  *); /* linkage=_ZN12CCommandLine27CreateCmdLinePrependAppNameEPKc */
	virtual const char  * GetCmdLine(const class CCommandLine  *); /* linkage=_ZNK12CCommandLine10GetCmdLineEv */
	virtual const char  * CheckParm(const class CCommandLine  *, const char  *, const char  * *); /* linkage=_ZNK12CCommandLine9CheckParmEPKcPS1_ */
	virtual bool HasParm(const class CCommandLine  *, const char  *); /* linkage=_ZNK12CCommandLine7HasParmEPKc */
	virtual void RemoveParm(class CCommandLine *, const char  *); /* linkage=_ZN12CCommandLine10RemoveParmEPKc */
	virtual void AppendParm(class CCommandLine *, const char  *, const char  *); /* linkage=_ZN12CCommandLine10AppendParmEPKcS1_ */
	virtual int ParmCount(const class CCommandLine  *); /* linkage=_ZNK12CCommandLine9ParmCountEv */
	/* <a4df9> tier0/commandline.cpp:1240 */
	virtual int FindParm(const class CCommandLine  *, const char  *, int); /* linkage=_ZNK12CCommandLine8FindParmEPKci */
	virtual const char  * GetParm(const class CCommandLine  *, int); /* linkage=_ZNK12CCommandLine7GetParmEi */
	virtual const char  * ParmValue(const class CCommandLine  *, const char  *, const char  *); /* linkage=_ZNK12CCommandLine9ParmValueEPKcS1_ */
	virtual int ParmValue(const class CCommandLine  *, const char  *, int); /* linkage=_ZNK12CCommandLine9ParmValueEPKci */
	virtual float ParmValue(const class CCommandLine  *, const char  *, float); /* linkage=_ZNK12CCommandLine9ParmValueEPKcf */
	virtual bool ParmValue(class CCommandLine *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN12CCommandLine9ParmValueEPKcS1_P13CBufferString */
	/* <a4e85> tier0/commandline.cpp:1417 */
	virtual const char  * ParmValueByIndex(const class CCommandLine  *, int, const char  *); /* linkage=_ZNK12CCommandLine16ParmValueByIndexEiPKc */
	virtual void SetParm(class CCommandLine *, int, const char  *); /* linkage=_ZN12CCommandLine7SetParmEiPKc */
	virtual void RemoveParmByIndex(class CCommandLine *, int); /* linkage=_ZN12CCommandLine17RemoveParmByIndexEi */
	virtual const char  * * GetParms(const class CCommandLine  *); /* linkage=_ZNK12CCommandLine8GetParmsEv */
	virtual bool IsWellInitialized(const class CCommandLine  *); /* linkage=_ZNK12CCommandLine17IsWellInitializedEv */
	void InternalCreateCmdLineWithArgFiles(class CCommandLine *, class ArgumentSet_t &); /* linkage=_ZN12CCommandLine33InternalCreateCmdLineWithArgFilesERNS_13ArgumentSet_tE */
	void InternalComposeFinalCommandLine(class CCommandLine *, class ArgumentSet_t &); /* linkage=_ZN12CCommandLine31InternalComposeFinalCommandLineERNS_13ArgumentSet_tE */
	void InternalComposeFinalCommandLine_R(class CCommandLine *, class ArgumentSet_t &, char * &, char * &); /* linkage=_ZN12CCommandLine33InternalComposeFinalCommandLine_RERNS_13ArgumentSet_tERPcS3_ */
	void InternalComposeRemovedArgumentSet(class CCommandLine *, class ArgumentSet_t *, const char  *); /* linkage=_ZN12CCommandLine33InternalComposeRemovedArgumentSetEPNS_13ArgumentSet_tEPKc */
	FILE * OpenParameterFile(const char  *, int, const char  *, char *, size_t); /* linkage=_ZN12CCommandLine17OpenParameterFileEPKciS1_Pcm */
	bool FindAppAutoArgs(class CBufferString *); /* linkage=_ZN12CCommandLine15FindAppAutoArgsEP13CBufferString */
	void FindArgsInString(const char  *, int, FN_FoundArg, void *); /* linkage=_ZN12CCommandLine16FindArgsInStringEPKciPFvS1_ibPvES2_ */
	void InitEarlyCommandLine(class CCommandLine *); /* linkage=_ZN12CCommandLine20InitEarlyCommandLineEv */
};

// <000A46DB> tier0/commandline.cpp:77
void CCommandLine::IsWellInitialized()
{
} /* size: 9 */

// <000A46C4> tier0/commandline.cpp:91
void ArgumentSet_t::ArgumentSet_t()
{
} /* size: 0 */

// <000A46AB> tier0/commandline.cpp:91
inline void ArgumentSet_t::ArgumentSet_t()
{
} /* size: 0 */

// <000A462C> tier0/commandline.cpp:107
// variable: 1
void FillArgs(const char* pArgStart, int nArgLength, bool bWasQuoted, void* pContext)
{
	ArgumentSet_t* pCastContext; // 109
} /* size: 40, variables: 1 */

// <000A4600> tier0/commandline.cpp:143
// variable: 1
bool LooksLikeANumber(const char* pParam)
{
	{
		char c; // 147
	}
} /* size: 0 */

// <000A4495> tier0/commandline.cpp:176
// function calls: 3
ICommandLine* CreateCommandLine(void)
{
	ICommandLine::ICommandLine(); // 193
	CManuallyConstructedClass<CCommandLine>::CastPointer(); // 202
	CCommandLine::CCommandLine(); // 178
} /* size: 62, inline expansions: 3 (42 bytes) */

// <000A43B8> tier0/commandline.cpp:184
// function calls: 2
void FreeCommandLine(ICommandLine* pCmdLine)
{
	CCommandLine::~CCommandLine(); // 223
	CCommandLine::~CCommandLine(); // 186
} /* size: 138, inline expansions: 2 (145 bytes) */

// <000A42A7> tier0/commandline.cpp:193
// function calls: 3
void CCommandLine::CCommandLine()
{
	ICommandLine::ICommandLine(); // 193
	CManuallyConstructedClass<CCommandLine>::CastPointer(); // 202
	CCommandLine::CCommandLine(); // 193
} /* size: 0, inline expansions: 3 (0 bytes) */

// <000A428E> tier0/commandline.cpp:193
void CCommandLine::CCommandLine()
{
} /* size: 0 */

// <000A423D> tier0/commandline.cpp:211
void CCommandLine::~CCommandLine()
{
} /* size: 49 */

// <000A41A7> tier0/commandline.cpp:211
// function call: 1
void CCommandLine::~CCommandLine()
{
	CCommandLine::~CCommandLine(); // 223
} /* size: 72, inline expansions: 1 (38 bytes) */

// <000A3F61> tier0/commandline.cpp:226
// variables: 2
// function calls: 3
FILE* TryOpeningFileRelativeToDir(const char* pBasePath, char* pWriteToBasePathLocation, size_t nWriteLength, const char* pRelativeFileName)
{
	FILE* fp; // 231
	size_t nGameLen; // 244
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 237
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 243
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 245
} /* size: 176, variables: 2, inline expansions: 3 (45 bytes) */

// <000A27C5> tier0/commandline.cpp:252
// variables: 44
// function calls: 42
void OpenParameterFile(const char* pFileName, int nFileNameLength, const char* szReferencedFromFile, char* pFoundAtPathOut, size_t nFoundAtPathBufferSize)
{
	size_t nTerminatedFileNameLength; // 264
	char* pTerminatedFileName; // 265
	FILE* fp; // 272
	const char   __FUNCTION__; // 32208
	{
		char* szWorkingPath; // 276
		size_t nWorkingPathLength; // 277
		char* pWorkingPathEnd; // 285
		{
			size_t nReferencedFromFileLength; // 291
			const char* szReferencedFileRelativeToGameDir; // 293
			const char* pLastPathSeparator; // 312
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
			}
			{
				int i; // 294
				{
					const char* szGameRoot; // 296
					size_t nRootLength; // 300
					{
						const char* szRelative; // 303
					}
					V_strlen(const char* str); // 300
					V_memcmp(const void* m1,
						const void* m2,
						size_t count);  // 301
				}
			}
			{
				const char* pIter; // 314
			}
			{
				const char* pOnePastLastPathSeparator; // 324
				size_t nBasePathLength; // 325
				{
					int i; // 332
					{
						const char* szGameRoot; // 334
						size_t nRootLength; // 338
						V_strlen(const char* str); // 338
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 341
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 344
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 345
					}
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 367
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 368
				strncpy(char* __dest,
					const char* __src,
					size_t __len);  // 375
			}
			V_strlen(const char* str); // 291
		}
		{
			CBufferString wrapCurDir; // 390
			char* pCrawlDirectories; // 396
			CBufferString::SetFixedPtr(
					char* pBuffer,
					int nBufferChars,
					int nStringChars,
					bool bFreeBuffer);  // 391
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 390
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 392
			strncpy(char* __dest,
				const char* __src,
				size_t __len);  // 409
			CBufferString::~CBufferString(); // 414
		}
		{
			CBufferString wrapExeDir; // 420
			char* pCrawlDirectories; // 426
			strncpy(char* __dest,
				const char* __src,
				size_t __len);  // 448
			CBufferString::~CBufferString(); // 453
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 420
			CBufferString::SetFixedPtr(
					char* pBuffer,
					int nBufferChars,
					int nStringChars,
					bool bFreeBuffer);  // 421
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 422
		}
		{
			int i; // 459
			{
				const char* szGameRoot; // 461
				size_t nRootLength; // 465
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 468
				strncpy(char* __dest,
					const char* __src,
					size_t __len);  // 470
				strncpy(char* __dest,
					const char* __src,
					size_t __len);  // 478
			}
		}
		{
			const char* szVGAME; // 490
			{
				size_t nVGAMELength; // 493
				strncpy(char* __dest,
					const char* __src,
					size_t __len);  // 506
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 496
				strncpy(char* __dest,
					const char* __src,
					size_t __len);  // 498
			}
		}
		{
			size_t nFullPathSize; // 519
			int nInGameRoot; // 521
			const char* szFoundFileRelativeToGameDir; // 522
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 518
			}
			{
				int i; // 523
				{
					const char* szGameRoot; // 525
					size_t nRootLength; // 529
					{
						const char* szRelative; // 532
					}
					V_strlen(const char* str); // 529
					V_memcmp(const void* m1,
						const void* m2,
						size_t count);  // 530
				}
			}
			{
				size_t nFoundRelativeToGameDirLength; // 545
				{
					int i; // 546
					{
						const char* szGameRoot; // 548
						char szAltWorkingPath; // 552
						size_t nRootLength; // 554
						{
							FILE* fp2; // 563
							memcpy(void* __dest,
								const void* __src,
								size_t __len);  // 557
							memcpy(void* __dest,
								const void* __src,
								size_t __len);  // 559
							strncpy(char* __dest,
								const char* __src,
								size_t __len);  // 568
						}
					}
				}
				V_strlen(const char* str); // 545
			}
			V_strlen(const char* str); // 519
		}
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 266
	strncpy(char* __dest,
		const char* __src,
		size_t __len);  // 582
	printf(const char* __fmt, ...); // 589
} /* size: 0, variables: 4, inline expansions: 3 (81 bytes) */

// <000A2018> tier0/commandline.cpp:595
// variables: 3
// function calls: 30
void FindAppAutoArgs(CBufferString* pOutParmFile)
{
	CPathBufferString modulePath; // 597
	CBufferStringN<24> moduleBase; // 598
	bool bFound; // 603
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 597
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<24>::CBufferStringN(); // 598
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 600
	CBufferString::IsEmpty(); // 604
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 606
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 607
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 608
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 609
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 621
	CBufferString::~CBufferString(); // 587
	CBufferStringN<24>::~CBufferStringN(); // 629
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 629
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 625
} /* size: 582, variables: 3, inline expansions: 30 (748 bytes) */

// <000A1FB9> tier0/commandline.cpp:631
void CountArguments(const char* pArgStart, int nArgLength, bool bWasQuoted, void* pContext)
{
} /* size: 8 */

// <000A1E04> tier0/commandline.cpp:639
// variables: 8
// function calls: 3
void CCommandLine::CreateCmdLine(int argc, const char* const* argv)
{
	ArgumentSet_t* pNewArgSet; // 641
	const char   __FUNCTION__; // 24104
	{
		int i; // 644
		{
			bool bQuoted; // 648
			uint32 nContainedQuotes; // 649
			uint32 j; // 650
			{
				const char* pChar; // 653
				V_isspace(int c); // 655
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 672
			}
		}
	}
	ArgumentSet_t::ArgumentSet_t(); // 1479
	Construct<CCommandLine::ArgumentSet_t>(ArgumentSet_t* pMemory); // 642
} /* size: 374, variables: 2, inline expansions: 2 (50 bytes) */

// <000A1A9F> tier0/commandline.cpp:691
// variables: 5
// function calls: 12
void CCommandLine::CreateCmdLinePrependAppName(const char* pCommandLine)
{
	CPathBufferString moduleFilename; // 694
	int nCommandLineLength; // 697
	int nModuleNameLength; // 698
	uint32 nArgCount; // 700
	ArgumentSet_t* pNewArgSet; // 703
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 694
	V_strlen(const char* str); // 697
	CBufferString::Length(); // 698
	ArgumentSet_t::ArgumentSet_t(); // 1479
	Construct<CCommandLine::ArgumentSet_t>(ArgumentSet_t* pMemory); // 704
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 707
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 715
} /* size: 460, variables: 5, inline expansions: 12 (251 bytes) */

// <000A1924> tier0/commandline.cpp:723
// variables: 3
// function calls: 2
void CCommandLine::CreateCmdLine(const char* commandline)
{
	int nCommandLineLength; // 725
	uint32 nArgCount; // 727
	ArgumentSet_t* pNewArgSet; // 730
	ArgumentSet_t::ArgumentSet_t(); // 1479
	Construct<CCommandLine::ArgumentSet_t>(ArgumentSet_t* pMemory); // 731
} /* size: 285, variables: 3, inline expansions: 2 (46 bytes) */

// <000A10B1> tier0/commandline.cpp:744
// variables: 24
// function calls: 16
void CCommandLine::InternalCreateCmdLineWithArgFiles(ArgumentSet_t& argSet)
{
	bool bNoAutoArgs; // 746
	ArgumentSet_t** pWriteNewArgSet; // 749
	char szParamFileFoundAtPath; // 750
	char argFileMem; // 752
	char* pArgFileMemAlloc; // 753
	const char* pArgFileMemEnd; // 754
	{
		ArgumentSet_t* pArgumentSetIter; // 756
		{
			uint32 i; // 758
			{
				FILE* pParamFile; // 760
				ArgPair_t* pArgPair; // 761
				{
					CPathBufferString autoArgsFileName; // 773
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 773
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 779
					CBufferString::Length(); // 777
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 777
				}
				{
					const char* pArgument; // 783
					int nArgLength; // 784
					V_strnicmp_fast<int>(const char* s1,
								const char* s2,
								int n);  // 786
				}
				{
					int nFileLength; // 800
					size_t nParamFileNameLength; // 803
					{
						char* pArgFilePath; // 807
						char* pFileContents; // 811
						char* pFileContentsEnd; // 812
						uint32 nArgCount; // 872
						ArgumentSet_t* pNewArgSet; // 876
						{
							const char* pLineStart; // 822
							char* pWrite; // 823
							bool bLastWroteSpace; // 824
							{
								char* pParse; // 826
							}
						}
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 808
						Min<int>(const int& val1,
							const int& val2);  // 812
						Max<unsigned int>(const unsigned int& val1,
									const unsigned int& val2);  // 876
						ArgumentSet_t::ArgumentSet_t(); // 1479
						Construct<CCommandLine::ArgumentSet_t>(ArgumentSet_t* pMemory); // 877
					}
					printf(const char* __fmt, ...); // 887
				}
			}
		}
	}
} /* size: 1642, variables: 6 */

// <000A0E43> tier0/commandline.cpp:899
// variables: 6
// function calls: 4
void CCommandLine::InternalComposeFinalCommandLine_R(ArgumentSet_t& argSet, char *& pWriteString, char *& pWriteParams)
{
	{
		uint32 i; // 901
		{
			ArgPair_t& argPair; // 903
			{
				bool bQuoted; // 906
				uint32 nLength; // 907
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 915
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 931
			}
			{
				bool bFound; // 942
				{
					ArgumentSet_t* pArgumentSetIter; // 944
				}
				Plat_IsInDebugSession(void); // 955
				_DebuggerBreakInlineExpressionWrapper(void); // 955
			}
		}
	}
} /* size: 413 */

// <000A0AE4> tier0/commandline.cpp:960
// variables: 13
// function calls: 6
void CCommandLine::InternalComposeFinalCommandLine(ArgumentSet_t& argSet)
{
	size_t nArgCount; // 968
	size_t nUnquotedCombinedDelimitedLength; // 969
	size_t nQuoteCount; // 970
	size_t nStringTotalSpace; // 992
	size_t nTotalSpace; // 995
	char* pMemory; // 1011
	{
		ArgumentSet_t* pArgumentSetIter; // 972
		{
			uint32 i; // 974
			{
				ArgPair_t& argPair; // 976
			}
		}
	}
	{
		char* pWriteString; // 1017
		char* pWriteParams; // 1018
		{
			ArgumentSet_t* pArgumentSetIter; // 1021
		}
		Plat_IsInDebugSession(void); // 1029
		Plat_IsInDebugSession(void); // 1030
		Plat_IsInDebugSession(void); // 1031
		_DebuggerBreakInlineExpressionWrapper(void); // 1030
		_DebuggerBreakInlineExpressionWrapper(void); // 1029
		_DebuggerBreakInlineExpressionWrapper(void); // 1031
	}
	{
		size_t i; // 1036
	}
} /* size: 619, variables: 6 */

// <000A09E3> tier0/commandline.cpp:1060
// variable: 1
// function calls: 2
void CCommandLine::RemoveParm(const char* pszParm)
{
	ArgumentSet_t* pNewArgSet; // 1062
	ArgumentSet_t::ArgumentSet_t(); // 1479
	Construct<CCommandLine::ArgumentSet_t>(ArgumentSet_t* pMemory); // 1063
} /* size: 213, variables: 1, inline expansions: 2 (46 bytes) */

// <000A0910> tier0/commandline.cpp:1070
// variables: 3
void CCommandLine::InternalComposeRemovedArgumentSet(ArgumentSet_t* pOut, const char* szRemove)
{
	{
		int i; // 1072
		{
			ArgPair_t& argPair; // 1089
			{
				int j; // 1077
			}
		}
	}
} /* size: 232 */

// <000A0696> tier0/commandline.cpp:1104
// variables: 4
// function calls: 2
void CCommandLine::AppendParm(const char* pszParm, const char* pszValues)
{
	uint32 nNewParams; // 1106
	int nParmLength; // 1107
	int nValuesLength; // 1108
	ArgumentSet_t* pNewArgSet; // 1116
	ArgumentSet_t::ArgumentSet_t(); // 1479
	Construct<CCommandLine::ArgumentSet_t>(ArgumentSet_t* pMemory); // 1117
} /* size: 424, variables: 4, inline expansions: 2 (48 bytes) */

// <000A0668> tier0/commandline.cpp:1137
void CCommandLine::GetCmdLine()
{
} /* size: 9 */

// <000A0577> tier0/commandline.cpp:1149
// variables: 2
// function call: 1
void CCommandLine::CheckParm(const char* psz, const char ** ppszValue)
{
	int i; // 1154
	{
		int i; // 1243
	}
	CCommandLine::FindParm(
		const char* psz,
		int nStartIndex);  // 1154
} /* size: 225, variables: 1, inline expansions: 1 (56 bytes) */

// <000A03F6> tier0/commandline.cpp:1174
// variables: 5
void FindArgsInString(const char* szParse, int nParseLength, FN_FoundArg pFN_FoundArg, void* pContext)
{
	const char* pChar; // 1176
	const char* pEnd; // 1177
	bool bInQuotes; // 1184
	const char* pFirstLetter; // 1185
	{
		bool bCharIsParamDelimitingQuote; // 1188
	}
} /* size: 411, variables: 4 */

// <000A03C8> tier0/commandline.cpp:1235
void CCommandLine::ParmCount()
{
} /* size: 8 */

// <000A4DF9> tier0/commandline.cpp:1240
// variable: 1
// function call: 1
void CCommandLine::FindParm(const char* psz, int nStartIndex)
{
	{
		int i; // 1243
		Max<int>(const int& val1,
			const int& val2);  // 1243
	}
} /* size: 109 */

// <000A033A> tier0/commandline.cpp:1240
// variable: 1
void CCommandLine::FindParm(const char* psz, int nStartIndex)
{
	{
		int i; // 1243
	}
} /* size: 0 */

// <000A0294> tier0/commandline.cpp:1251
// variable: 1
// function call: 1
void CCommandLine::HasParm(const char* psz)
{
	{
		int i; // 1243
	}
	CCommandLine::FindParm(
		const char* psz,
		int nStartIndex);  // 1253
} /* size: 146, inline expansions: 1 (65 bytes) */

// <000A01F3> tier0/commandline.cpp:1256
// variables: 2
void CCommandLine::GetParm(int nIndex)
{
	const char   __FUNCTION__; // 6766
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1258
	}
} /* size: 0, variables: 1 */

// <000A01C5> tier0/commandline.cpp:1264
void CCommandLine::GetParms()
{
} /* size: 9 */

// <0009FF83> tier0/commandline.cpp:1270
// variables: 6
// function calls: 3
void CCommandLine::SetParm(int nIndex, const char* pParm)
{
	{
		{
			bool bParmIsQuoted; // 1274
			int nParmLength; // 1275
			ArgumentSet_t* pNewArgSet; // 1285
			{
				int i; // 1276
			}
			{
				int i; // 1288
				{
					ArgPair_t& argPair; // 1290
				}
			}
			ArgumentSet_t::ArgumentSet_t(); // 1479
			Construct<CCommandLine::ArgumentSet_t>(ArgumentSet_t* pMemory); // 1286
		}
		_DebuggerBreakInlineExpressionWrapper(void); // 1272
	}
} /* size: 0 */

// <0009FE36> tier0/commandline.cpp:1311
// variables: 3
// function calls: 2
void CCommandLine::RemoveParmByIndex(int nIndex)
{
	{
		ArgumentSet_t* pNewArgSet; // 1315
		{
			int i; // 1318
			{
				ArgPair_t& argPair; // 1323
			}
		}
		ArgumentSet_t::ArgumentSet_t(); // 1479
		Construct<CCommandLine::ArgumentSet_t>(ArgumentSet_t* pMemory); // 1316
	}
} /* size: 315 */

// <0009FD4F> tier0/commandline.cpp:1339
// variables: 2
// function call: 1
void CCommandLine::ParmValue(const char* psz, const char* pDefaultVal)
{
	int nIndex; // 1341
	{
		int i; // 1243
	}
	CCommandLine::FindParm(
		const char* psz,
		int nStartIndex);  // 1341
} /* size: 188, variables: 1, inline expansions: 1 (56 bytes) */

// <0009FC5A> tier0/commandline.cpp:1352
// variables: 2
// function call: 1
void CCommandLine::ParmValue(const char* psz, int nDefaultVal)
{
	int nIndex; // 1354
	{
		int i; // 1243
	}
	CCommandLine::FindParm(
		const char* psz,
		int nStartIndex);  // 1354
} /* size: 180, variables: 1, inline expansions: 1 (56 bytes) */

// <0009FB65> tier0/commandline.cpp:1370
// variables: 2
// function call: 1
void CCommandLine::ParmValue(const char* psz, float flDefaultVal)
{
	int nIndex; // 1372
	{
		int i; // 1243
	}
	CCommandLine::FindParm(
		const char* psz,
		int nStartIndex);  // 1372
} /* size: 190, variables: 1, inline expansions: 1 (62 bytes) */

// <0009F7A2> tier0/commandline.cpp:1388
// variables: 2
// function calls: 12
void CCommandLine::ParmValue(const char* pParam, const char* pDefaultValue, CBufferString* pValue)
{

parmNotFound: // 1405
	int nIndex; // 1390
	{
		int i; // 1243
	}
	CCommandLine::FindParm(
		const char* psz,
		int nStartIndex);  // 1390
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1408
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1402
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1412
} /* size: 385, variables: 1, goto labels: 1, inline expansions: 12 (368 bytes) */

// <000A4E85> tier0/commandline.cpp:1417
// function call: 1
void CCommandLine::ParmValueByIndex(int nIndex, const char* pDefaultVal)
{
	CCommandLine::ParmValueByIndex(
			int nIndex,
			const char* pDefaultVal);  // 1417
} /* size: 50, inline expansions: 1 (28 bytes) */

// <0009F76F> tier0/commandline.cpp:1417
void CCommandLine::ParmValueByIndex(int nIndex, const char* pDefaultVal)
{
} /* size: 0 */

// <0009F25C> tier0/commandline.cpp:1429
// variables: 14
// function calls: 8
void CCommandLine::InitEarlyCommandLine()
{
	{
		FILE* pCommandLineFile; // 1541
		{
			char pContents; // 1544
			size_t nSize; // 1545
			{
				{
					char* pEnd; // 1551
					int nArgs; // 1554
					int nSpaces; // 1555
					{
						bool bLastReadNULL; // 1557
						{
							char* pParse; // 1558
							{
								bool bIsNULL; // 1560
							}
						}
					}
					{
						{
							char** pArgs; // 1578
							char** pWriteArg; // 1579
							{
								bool bLastReadNULL; // 1581
								{
									char* pParse; // 1582
									{
										bool bIsNULL; // 1584
									}
								}
							}
							Plat_IsInDebugSession(void); // 1594
							_DebuggerBreakInlineExpressionWrapper(void); // 1594
						}
						_DebuggerBreakInlineExpressionWrapper(void); // 1575
					}
				}
				_DebuggerBreakInlineExpressionWrapper(void); // 1547
			}
			fread(void* __ptr,
				size_t __size,
				size_t __n,
				FILE* __stream);  // 1545
		}
	}
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1141
	COrderedConstructor_DependencyManagement<void>::Touch(); // 1613
} /* size: 0, inline expansions: 3 (107 bytes) */

