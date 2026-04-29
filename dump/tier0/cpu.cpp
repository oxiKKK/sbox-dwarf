
//
// tier0/cpu.cpp
//
//	referenced by: libtier0.so
//
//	functions: 27
//	class: 1
//	struct: 1
//	union: 1
//

// <000A8A29> tier0/cpu.cpp:36
// member function: 1
// member variables: 4
// struct size: 16
struct CpuIdResult_t {
	uint32 eax; /* 0 4 */
	uint32 ebx; /* 4 4 */
	uint32 ecx; /* 8 4 */
	uint32 edx; /* 12 4 */
	/* tier0/cpu.cpp:43 */
	void Reset(CpuIdResult_t* );
};

// <000AB8C3> tier0/cpu.cpp:43
inline void CpuIdResult_t::Reset()
{
} /* size: 0 */

// <000AB869> tier0/cpu.cpp:50
// variables: 4
bool cpuid(uint32 function, CpuIdResult_t& out)
{
	uint32 out_eax; // 56
	uint32 out_ebx; // 56
	uint32 out_ecx; // 56
	uint32 out_edx; // 56
} /* size: 0, variables: 4 */

// <000AB7FD> tier0/cpu.cpp:131
// variables: 4
bool cpuidex(uint32 function, uint32 subfunction, CpuIdResult_t& out)
{
	uint32 out_eax; // 136
	uint32 out_ebx; // 136
	uint32 out_ecx; // 136
	uint32 out_edx; // 136
} /* size: 0, variables: 4 */

// <000AB7D3> tier0/cpu.cpp:200
// variable: 1
CpuIdResult_t cpuid(uint32 function)
{
	CpuIdResult_t out; // 202
} /* size: 0, variables: 1 */

// <000AB79D> tier0/cpu.cpp:210
// variable: 1
CpuIdResult_t cpuidex(uint32 function, uint32 subfunction)
{
	CpuIdResult_t out; // 212
} /* size: 0, variables: 1 */

// <000AB6EB> tier0/cpu.cpp:284
// function calls: 2
bool CheckSSE3Technology(void)
{
	cpuid(uint32 function,
		CpuIdResult_t& out);  // 203
	cpuid(uint32 function); // 286
} /* size: 0, inline expansions: 2 (0 bytes) */

// <000AB639> tier0/cpu.cpp:289
// function calls: 2
bool CheckSSSE3Technology(void)
{
	cpuid(uint32 function,
		CpuIdResult_t& out);  // 203
	cpuid(uint32 function); // 293
} /* size: 0, inline expansions: 2 (0 bytes) */

// <000AB587> tier0/cpu.cpp:296
// function calls: 2
bool CheckSSE41Technology(void)
{
	cpuid(uint32 function,
		CpuIdResult_t& out);  // 203
	cpuid(uint32 function); // 300
} /* size: 0, inline expansions: 2 (0 bytes) */

// <000AB4AB> tier0/cpu.cpp:303
// variable: 1
// function calls: 2
bool CheckSSE42Technology(void)
{
	const char* pchVendor; // 306
	cpuid(uint32 function,
		CpuIdResult_t& out);  // 203
	cpuid(uint32 function); // 310
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <000AB486> tier0/cpu.cpp:314
// variable: 1
bool CheckSSE4aTechnology(void)
{
	const char* pchVendor; // 317
} /* size: 0, variables: 1 */

// <000AB478> tier0/cpu.cpp:325
bool Check3DNowTechnology(void)
{
} /* size: 0 */

// <000A8AD7> tier0/cpu.cpp:354
union CpuBrand_t {
	CpuIdResult_t cpuid[3]; /* 0 48 */
	char name[49]; /* 0 49 */
};

// <000AB453> tier0/cpu.cpp:364
// variable: 1
const char* GetProcessorVendorId(void)
{
	CpuIdResult_t cpuid0; // 373
} /* size: 0, variables: 1 */

// <000AB42E> tier0/cpu.cpp:391
// variable: 1
const char* GetProcessorBrand(void)
{
	char* pTrim; // 412
} /* size: 0, variables: 1 */

// <000A8B51> tier0/cpu.cpp:454
// member functions: 6
// member variable: 1
// class size: 16
class TimeVal {
	/* tier0/cpu.cpp:457 */
	void TimeVal(TimeVal* );
	/* tier0/cpu.cpp:458 */
	TimeVal& operator=(TimeVal* , const TimeVal& );
	/* tier0/cpu.cpp:459 */
	double operator-(TimeVal* , const TimeVal& );
	timeval m_TimeVal; /* 0 16 */
	void TimeVal(class TimeVal *); /* linkage=_ZN7TimeValC4Ev */
	class TimeVal & operator=(class TimeVal *, const class TimeVal  &); /* linkage=_ZN7TimeValaSERKS_ */
	double operator-(class TimeVal *, const class TimeVal  &); /* linkage=_ZN7TimeValmiERKS_ */
};

// <000AB417> tier0/cpu.cpp:457
void TimeVal::TimeVal()
{
} /* size: 0 */

// <000AB3FE> tier0/cpu.cpp:457
inline void TimeVal::TimeVal()
{
} /* size: 0 */

// <000AB3B1> tier0/cpu.cpp:459
// variables: 3
inline void TimeVal::operator-(const TimeVal& right)
{
	uint64 right_us; // 461
	uint64 left_us; // 462
	uint64 diff_us; // 463
} /* size: 0, variables: 3 */

// <000AB386> tier0/cpu.cpp:470
inline uint64 diff(uint64 v1, uint64 v2)
{
} /* size: 0 */

// <000AB19B> tier0/cpu.cpp:475
// variables: 5
// function calls: 2
uint64 GetCPUFreqFromPROC(void)
{
	double mhz; // 489
	char line; // 490
	char* s; // 490
	char search_str; // 490
	FILE* fp; // 491
	strstr(char* __haystack,
		const char* __needle);  // 500
	fgets(char* __s,
		int __n,
		FILE* __stream);  // 498
} /* size: 351, variables: 5, inline expansions: 2 (39 bytes) */

// <000AB0D1> tier0/cpu.cpp:517
// variables: 13
uint64 CalculateCPUFreq(void)
{
	const char* pFreq; // 520
	const uint64  error; // 567
	const int  max_iterations; // 568
	int count; // 569
	uint64 period; // 570
	uint64 period1; // 570
	uint64 period2; // 570
	uint64 period3; // 570
	{
		uint64 retVal; // 523
	}
	{
		TimeVal start_time; // 574
		TimeVal end_time; // 574
		CCycleCount start_tsc; // 575
		CCycleCount end_tsc; // 575
	}
} /* size: 0, variables: 8 */

// <000AB0C3> tier0/cpu.cpp:615
uint64 CalculateClockSpeed(void)
{
} /* size: 0 */

// <000AB082> tier0/cpu.cpp:670
// variable: 1
void CpuidWrapper(uint32 param, uint32* pRegisters)
{
	CpuIdResult_t result; // 672
} /* size: 0, variables: 1 */

// <000AA849> tier0/cpu.cpp:676
// variables: 2
// function calls: 32
const uint32* GetProcessorDetailBlob(int32* pcunDetail)
{
	uint32 DetailBlob; // 678
	int iun; // 681
	cpuid(uint32 function,
		CpuIdResult_t& out);  // 203
	cpuid(uint32 function); // 672
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 673
	CpuidWrapper(uint32 param,
			uint32* pRegisters);  // 682
	cpuid(uint32 function,
		CpuIdResult_t& out);  // 203
	cpuid(uint32 function); // 672
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 673
	CpuidWrapper(uint32 param,
			uint32* pRegisters);  // 683
	cpuid(uint32 function,
		CpuIdResult_t& out);  // 203
	cpuid(uint32 function); // 672
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 673
	CpuidWrapper(uint32 param,
			uint32* pRegisters);  // 684
	cpuid(uint32 function,
		CpuIdResult_t& out);  // 203
	cpuid(uint32 function); // 672
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 673
	CpuidWrapper(uint32 param,
			uint32* pRegisters);  // 685
	cpuid(uint32 function,
		CpuIdResult_t& out);  // 203
	cpuid(uint32 function); // 672
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 673
	CpuidWrapper(uint32 param,
			uint32* pRegisters);  // 686
	cpuid(uint32 function,
		CpuIdResult_t& out);  // 203
	cpuid(uint32 function); // 672
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 673
	CpuidWrapper(uint32 param,
			uint32* pRegisters);  // 687
	cpuid(uint32 function,
		CpuIdResult_t& out);  // 203
	cpuid(uint32 function); // 672
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 673
	CpuidWrapper(uint32 param,
			uint32* pRegisters);  // 688
	cpuid(uint32 function,
		CpuIdResult_t& out);  // 203
	cpuid(uint32 function); // 672
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 673
	CpuidWrapper(uint32 param,
			uint32* pRegisters);  // 689
} /* size: 0, variables: 2, inline expansions: 32 (0 bytes) */

// <000AA7F5> tier0/cpu.cpp:698
// variables: 4
uint16 ReadSysCpuPhysicalPackageID(int nCpu)
{
	char sysCpuName; // 700
	FILE* pFile; // 702
	uint16 nVal; // 708
	char valLine; // 709
} /* size: 0, variables: 4 */

// <000AA7A1> tier0/cpu.cpp:719
// variables: 4
uint8 ReadSysCpuCoreID(int nCpu)
{
	char sysCpuName; // 721
	FILE* pFile; // 723
	uint8 nVal; // 729
	char valLine; // 730
} /* size: 0, variables: 4 */

// <000AA73D> tier0/cpu.cpp:740
// variables: 4
int64 ReadSysCpuMaxFrequency(int nCpu)
{
	char sysCpuName; // 742
	FILE* pFile; // 744
	int64 nVal; // 750
	char valLine; // 751
} /* size: 0, variables: 4 */

// <000AA6CB> tier0/cpu.cpp:764
// variables: 6
uint16 ComputeSMTIndices(uint16 nLogicalProcs)
{
	uint16 nPhysicalProcessors; // 766
	{
		uint16 i; // 767
		{
			CPULogicalProcessor_t* pProc1; // 769
			uint8 nSMTIndex; // 779
			{
				uint16 j; // 780
				{
					CPULogicalProcessor_t* pProc2; // 782
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <000A9212> tier0/cpu.cpp:937
// variables: 38
// function calls: 49
const CPUInformation& GetCPUInformation(void)
{
	CPUInformation& pi; // 939
	bool bAuthenticAMD; // 955
	bool bGenuineIntel; // 956
	uint16 nLogicalProcessors; // 1029
	FILE* fpCpuInfo; // 1031
	const char   __FUNCTION__; // 58593
	CpuIdResult_t cpuid0; // 1197
	CpuIdResult_t cpuid0ex; // 1280
	{
		int i; // 949
		CPULogicalProcessor_t::Reset(); // 951
	}
	{
		char rgchLine; // 1034
		CPULogicalProcessor_t* pLogical; // 1035
		uint16 nPhysicalProcessors; // 1134
		{
			char* pchValue; // 1090
			strchr(char* __s,
				int __c);  // 1090
			atoi(const char* __nptr); // 1091
		}
		{
			char* pchValue; // 1096
			strchr(char* __s,
				int __c);  // 1096
			atoi(const char* __nptr); // 1097
		}
		{
			uint16 i; // 1103
			fgets(char* __s,
				int __n,
				FILE* __stream);  // 710
			atoi(const char* __nptr); // 712
			ReadSysCpuPhysicalPackageID(int nCpu); // 1120
			CPULogicalProcessor_t::IsProcessorGroupSet(); // 1106
			CPULogicalProcessor_t::IsPhysicalIDSet(); // 1118
			CPULogicalProcessor_t::IsCoreIDSet(); // 1122
			CPULogicalProcessor_t::IsMaxFrequencySet(); // 1126
			fgets(char* __s,
				int __n,
				FILE* __stream);  // 752
			atoll(const char* __nptr); // 755
			ReadSysCpuMaxFrequency(int nCpu); // 1128
			fgets(char* __s,
				int __n,
				FILE* __stream);  // 731
			atoi(const char* __nptr); // 733
			ReadSysCpuCoreID(int nCpu); // 1124
		}
		fgets(char* __s,
			int __n,
			FILE* __stream);  // 1036
		{
			uint16 i; // 767
			{
				CPULogicalProcessor_t* pProc1; // 769
				uint8 nSMTIndex; // 779
				{
					uint16 j; // 780
					{
						CPULogicalProcessor_t* pProc2; // 782
						CPULogicalProcessor_t::IsSameCore(
								const CPULogicalProcessor_t& other);  // 783
					}
				}
			}
		}
		ComputeSMTIndices(uint16 nLogicalProcs); // 1134
		Clamp<short unsigned int>(const short unsigned int& val,
						const short unsigned int& minVal,
						const short unsigned int& maxVal);  // 1141
		Clamp<short unsigned int>(const short unsigned int& val,
						const short unsigned int& minVal,
						const short unsigned int& maxVal);  // 1142
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1152
	}
	{
		CpuIdResult_t cpuid1; // 1200
		uint bFPU; // 1201
		{
			const uint  nCachesToQuery; // 1242
			uint nCacheSizeKiB; // 1243
			{
				uint i; // 1244
			}
			{
				uint32 nSub; // 1248
				{
					CpuIdResult_t cpuid4; // 1250
					uint nCacheType; // 1251
					{
						uint nCacheLevel; // 1260
						{
							uint nCacheWays; // 1263
							uint nCachePartitions; // 1264
							uint nCacheLineSize; // 1265
							uint nCacheSets; // 1266
							uint nCacheSizeBytes; // 1267
						}
					}
					cpuidex(uint32 function,
						uint32 subfunction,
						CpuIdResult_t& out);  // 213
					cpuidex(uint32 function,
						uint32 subfunction);  // 1250
				}
			}
		}
		cpuid(uint32 function,
			CpuIdResult_t& out);  // 203
		cpuid(uint32 function); // 1200
		cpuid(uint32 function,
			CpuIdResult_t& out);  // 203
		cpuid(uint32 function); // 321
		CheckSSE4aTechnology(void); // 314
		CheckSSE4aTechnology(void); // 1211
		cpuid(uint32 function,
			CpuIdResult_t& out);  // 203
		cpuid(uint32 function); // 327
		cpuid(uint32 function,
			CpuIdResult_t& out);  // 203
		cpuid(uint32 function); // 329
		Check3DNowTechnology(void); // 1214
		GetProcessorBrand(void); // 1229
	}
	{
		CpuIdResult_t cpuid7ex; // 1283
		cpuid(uint32 function,
			CpuIdResult_t& out);  // 203
		cpuid(uint32 function); // 1283
	}
	{
		CpuIdResult_t cpuid5ex; // 1290
		cpuid(uint32 function,
			CpuIdResult_t& out);  // 203
		cpuid(uint32 function); // 1290
	}
	{
		CpuIdResult_t cpuid6ex; // 1296
		cpuid(uint32 function,
			CpuIdResult_t& out);  // 203
		cpuid(uint32 function); // 1296
	}
	cpuid(uint32 function,
		CpuIdResult_t& out);  // 203
	cpuid(uint32 function); // 1197
	cpuid(uint32 function,
		CpuIdResult_t& out);  // 203
	cpuid(uint32 function); // 1280
	cpuid(uint32 function,
		CpuIdResult_t& out);  // 203
	cpuid(uint32 function); // 1308
} /* size: 0, variables: 8, inline expansions: 6 (140 bytes) */

