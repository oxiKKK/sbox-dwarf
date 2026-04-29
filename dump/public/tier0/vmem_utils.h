
//
// public/tier0/vmem_utils.h
//
//	referenced by: libengine2.so
//				   libtier0.so
//
//	functions: 8
//	class: 1
//

// <000DA6D3> ../public/tier0/vmem_utils.h:13
// member functions: 76
// member variables: 13
// class size: 104
class CVirtualMemorySnapshot {
	/* ../public/tier0/vmem_utils.h:19 */
	struct Region_t {
		uint64 m_nStart; /* 0 8 */
		uint64 m_nBytes; /* 8 8 */
		uint32 m_nAccess; /* 16 4 */
		int m_nDescString; /* 20 4 */
		uint32 m_bShared:1; /* 24: 0 4 */
		uint32 m_bSharedKnown:1; /* 24: 1 4 */
		uint32 m_bFileMapping:1; /* 24: 2 4 */
		uint32 m_bImageMapping:1; /* 24: 3 4 */
		uint32 m_bImageMappingKnown:1; /* 24: 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/vmem_utils.h:16 */
	void CVirtualMemorySnapshot(CVirtualMemorySnapshot* );
	/* ../public/tier0/vmem_utils.h:17 */
	void ~CVirtualMemorySnapshot(CVirtualMemorySnapshot* );
	/* ../public/tier0/vmem_utils.h:38 */
	bool Capture(CVirtualMemorySnapshot* );
	/* ../public/tier0/vmem_utils.h:39 */
	void Purge(CVirtualMemorySnapshot* );
	/* ../public/tier0/vmem_utils.h:41 */
	void Report(const CVirtualMemorySnapshot* , LoggingChannelID_t);
	/* ../public/tier0/vmem_utils.h:46 */
	void Diff(CVirtualMemorySnapshot* , const CVirtualMemorySnapshot* , const CVirtualMemorySnapshot* );
	/* ../public/tier0/vmem_utils.h:52 */
	void GetLargestUnmappedRegion(const CVirtualMemorySnapshot* , uint64* , uint64* , uint64);
	/* ../public/tier0/vmem_utils.h:53 */
	uint64 GetAddressAfterLastRegion(const CVirtualMemorySnapshot* , uint64);
	/* ../public/tier0/vmem_utils.h:56 */
	bool IsEqualRegion(const CVirtualMemorySnapshot* , const Region_t* , const CVirtualMemorySnapshot* , const Region_t* );
	/* ../public/tier0/vmem_utils.h:61 */
	bool HasCapture(const CVirtualMemorySnapshot* );
	/* ../public/tier0/vmem_utils.h:67 */
	bool GetCaptureHasErrors(const CVirtualMemorySnapshot* );
	/* ../public/tier0/vmem_utils.h:71 */
	bool IsDiff(const CVirtualMemorySnapshot* );
	/* ../public/tier0/vmem_utils.h:76 */
	uint64 GetTotalVirtualBytes(const CVirtualMemorySnapshot* );
	/* ../public/tier0/vmem_utils.h:80 */
	uint64 GetPeakTotalVirtualBytes(const CVirtualMemorySnapshot* );
	/* ../public/tier0/vmem_utils.h:84 */
	uint64 GetResidentVirtualBytes(const CVirtualMemorySnapshot* );
	/* ../public/tier0/vmem_utils.h:88 */
	uint64 GetPeakResidentVirtualBytes(const CVirtualMemorySnapshot* );
	/* ../public/tier0/vmem_utils.h:93 */
	int GetRegionsCount(const CVirtualMemorySnapshot* );
	/* ../public/tier0/vmem_utils.h:97 */
	const int* GetRegionsByStartIndices(const CVirtualMemorySnapshot* );
	/* ../public/tier0/vmem_utils.h:101 */
	const int* GetRegionsByBytesIndices(const CVirtualMemorySnapshot* );
	/* ../public/tier0/vmem_utils.h:105 */
	const Region_t* GetRegion(const CVirtualMemorySnapshot* , int);
	/* ../public/tier0/vmem_utils.h:110 */
	const Region_t* GetRegionByStart(const CVirtualMemorySnapshot* , int);
	/* ../public/tier0/vmem_utils.h:115 */
	const Region_t* GetRegionByBytes(const CVirtualMemorySnapshot* , int);
	/* ../public/tier0/vmem_utils.h:120 */
	const char* GetRegionString(const CVirtualMemorySnapshot* , int);
	/* ../public/tier0/vmem_utils.h:125 */
	bool RegionHasDesc(const CVirtualMemorySnapshot* , const Region_t* );
	/* ../public/tier0/vmem_utils.h:129 */
	const char* GetRegionDesc(const CVirtualMemorySnapshot* , const Region_t* );
	/* ../public/tier0/vmem_utils.h:134 */
	void AppendAccessString(const Region_t* , CBufferString* );
	/* ../public/tier0/vmem_utils.h:135 */
	void AppendPropertiesString(const Region_t* , CBufferString* );
protected:
	uint64 m_nTotalVirtualBytes; /* 0 8 */
	uint64 m_nPeakTotalVirtualBytes; /* 8 8 */
	uint64 m_nResidentVirtualBytes; /* 16 8 */
	uint64 m_nPeakResidentVirtualBytes; /* 24 8 */
	CBufferString m_FileContent; /* 32 16 */
	CBufferString m_RegionStrings; /* 48 16 */
	Region_t * m_pRegions; /* 64 8 */
	int * m_pRegionsByStart; /* 72 8 */
	int * m_pRegionsByBytes; /* 80 8 */
	int m_nRegionsAlloc; /* 88 4 */
	int m_nRegionsCount; /* 92 4 */
	bool m_bCaptureErrors; /* 96 1 */
	bool m_bIsDiff; /* 97 1 */
	/* ../public/tier0/vmem_utils.h:154 */
	void Reset(CVirtualMemorySnapshot* );
	/* ../public/tier0/vmem_utils.h:156 */
	int AddRegionString(CVirtualMemorySnapshot* , const char* );
	/* ../public/tier0/vmem_utils.h:157 */
	Region_t* AddRegion(CVirtualMemorySnapshot* , uint64, uint64, uint32);
	/* ../public/tier0/vmem_utils.h:158 */
	Region_t* CopyRegion(CVirtualMemorySnapshot* , const CVirtualMemorySnapshot* , const Region_t* );
	/* ../public/tier0/vmem_utils.h:161 */
	int CompareByStart(void* , const void* , const void* );
	/* ../public/tier0/vmem_utils.h:162 */
	int CompareByBytes(void* , const void* , const void* );
	/* ../public/tier0/vmem_utils.h:163 */
	void SortRegions(CVirtualMemorySnapshot* );
	/* ../public/tier0/vmem_utils.h:166 */
	bool ReadFileContent(CVirtualMemorySnapshot* , const char* );
	/* ../public/tier0/vmem_utils.h:167 */
	bool ReadStatus(CVirtualMemorySnapshot* );
	/* ../public/tier0/vmem_utils.h:168 */
	bool ParseMapsLine(CVirtualMemorySnapshot* , char* );
	/* ../public/tier0/vmem_utils.h:169 */
	bool ReadMaps(CVirtualMemorySnapshot* );
	void CVirtualMemorySnapshot(class CVirtualMemorySnapshot *); /* linkage=_ZN22CVirtualMemorySnapshotC4Ev */
	void ~CVirtualMemorySnapshot(class CVirtualMemorySnapshot *); /* linkage=_ZN22CVirtualMemorySnapshotD4Ev */
	bool Capture(class CVirtualMemorySnapshot *); /* linkage=_ZN22CVirtualMemorySnapshot7CaptureEv */
	void Purge(class CVirtualMemorySnapshot *); /* linkage=_ZN22CVirtualMemorySnapshot5PurgeEv */
	void Report(const class CVirtualMemorySnapshot  *, LoggingChannelID_t); /* linkage=_ZNK22CVirtualMemorySnapshot6ReportEi */
	void Diff(class CVirtualMemorySnapshot *, const class CVirtualMemorySnapshot  *, const class CVirtualMemorySnapshot  *); /* linkage=_ZN22CVirtualMemorySnapshot4DiffEPKS_S1_ */
	void GetLargestUnmappedRegion(const class CVirtualMemorySnapshot  *, uint64 *, uint64 *, uint64); /* linkage=_ZNK22CVirtualMemorySnapshot24GetLargestUnmappedRegionEPyS0_y */
	uint64 GetAddressAfterLastRegion(const class CVirtualMemorySnapshot  *, uint64); /* linkage=_ZNK22CVirtualMemorySnapshot25GetAddressAfterLastRegionEy */
	bool IsEqualRegion(const class CVirtualMemorySnapshot  *, const class Region_t  *, const class CVirtualMemorySnapshot  *, const class Region_t  *); /* linkage=_ZN22CVirtualMemorySnapshot13IsEqualRegionEPKS_PKNS_8Region_tES1_S4_ */
	bool HasCapture(const class CVirtualMemorySnapshot  *); /* linkage=_ZNK22CVirtualMemorySnapshot10HasCaptureEv */
	bool GetCaptureHasErrors(const class CVirtualMemorySnapshot  *); /* linkage=_ZNK22CVirtualMemorySnapshot19GetCaptureHasErrorsEv */
	bool IsDiff(const class CVirtualMemorySnapshot  *); /* linkage=_ZNK22CVirtualMemorySnapshot6IsDiffEv */
	uint64 GetTotalVirtualBytes(const class CVirtualMemorySnapshot  *); /* linkage=_ZNK22CVirtualMemorySnapshot20GetTotalVirtualBytesEv */
	uint64 GetPeakTotalVirtualBytes(const class CVirtualMemorySnapshot  *); /* linkage=_ZNK22CVirtualMemorySnapshot24GetPeakTotalVirtualBytesEv */
	uint64 GetResidentVirtualBytes(const class CVirtualMemorySnapshot  *); /* linkage=_ZNK22CVirtualMemorySnapshot23GetResidentVirtualBytesEv */
	uint64 GetPeakResidentVirtualBytes(const class CVirtualMemorySnapshot  *); /* linkage=_ZNK22CVirtualMemorySnapshot27GetPeakResidentVirtualBytesEv */
	int GetRegionsCount(const class CVirtualMemorySnapshot  *); /* linkage=_ZNK22CVirtualMemorySnapshot15GetRegionsCountEv */
	const int  * GetRegionsByStartIndices(const class CVirtualMemorySnapshot  *); /* linkage=_ZNK22CVirtualMemorySnapshot24GetRegionsByStartIndicesEv */
	const int  * GetRegionsByBytesIndices(const class CVirtualMemorySnapshot  *); /* linkage=_ZNK22CVirtualMemorySnapshot24GetRegionsByBytesIndicesEv */
	const class Region_t  * GetRegion(const class CVirtualMemorySnapshot  *, int); /* linkage=_ZNK22CVirtualMemorySnapshot9GetRegionEi */
	const class Region_t  * GetRegionByStart(const class CVirtualMemorySnapshot  *, int); /* linkage=_ZNK22CVirtualMemorySnapshot16GetRegionByStartEi */
	const class Region_t  * GetRegionByBytes(const class CVirtualMemorySnapshot  *, int); /* linkage=_ZNK22CVirtualMemorySnapshot16GetRegionByBytesEi */
	const char  * GetRegionString(const class CVirtualMemorySnapshot  *, int); /* linkage=_ZNK22CVirtualMemorySnapshot15GetRegionStringEi */
	bool RegionHasDesc(const class CVirtualMemorySnapshot  *, const class Region_t  *); /* linkage=_ZNK22CVirtualMemorySnapshot13RegionHasDescEPKNS_8Region_tE */
	const char  * GetRegionDesc(const class CVirtualMemorySnapshot  *, const class Region_t  *); /* linkage=_ZNK22CVirtualMemorySnapshot13GetRegionDescEPKNS_8Region_tE */
	void AppendAccessString(const class Region_t  *, class CBufferString *); /* linkage=_ZN22CVirtualMemorySnapshot18AppendAccessStringEPKNS_8Region_tEP13CBufferString */
	/* <51f81d> tier0/vmem_utils.cpp:360 */
	void AppendPropertiesString(const class Region_t  *, class CBufferString *); /* linkage=_ZN22CVirtualMemorySnapshot22AppendPropertiesStringEPKNS_8Region_tEP13CBufferString */
	/* <51f7f3> tier0/vmem_utils.cpp:324 */
	void Reset(class CVirtualMemorySnapshot *); /* linkage=_ZN22CVirtualMemorySnapshot5ResetEv */
	int AddRegionString(class CVirtualMemorySnapshot *, const char  *); /* linkage=_ZN22CVirtualMemorySnapshot15AddRegionStringEPKc */
	class Region_t * AddRegion(class CVirtualMemorySnapshot *, uint64, uint64, uint32); /* linkage=_ZN22CVirtualMemorySnapshot9AddRegionEyyj */
	class Region_t * CopyRegion(class CVirtualMemorySnapshot *, const class CVirtualMemorySnapshot  *, const class Region_t  *); /* linkage=_ZN22CVirtualMemorySnapshot10CopyRegionEPKS_PKNS_8Region_tE */
	int CompareByStart(void *, const void  *, const void  *); /* linkage=_ZN22CVirtualMemorySnapshot14CompareByStartEPvPKvS2_ */
	int CompareByBytes(void *, const void  *, const void  *); /* linkage=_ZN22CVirtualMemorySnapshot14CompareByBytesEPvPKvS2_ */
	void SortRegions(class CVirtualMemorySnapshot *); /* linkage=_ZN22CVirtualMemorySnapshot11SortRegionsEv */
	bool ReadFileContent(class CVirtualMemorySnapshot *, const char  *); /* linkage=_ZN22CVirtualMemorySnapshot15ReadFileContentEPKc */
	bool ReadStatus(class CVirtualMemorySnapshot *); /* linkage=_ZN22CVirtualMemorySnapshot10ReadStatusEv */
	bool ParseMapsLine(class CVirtualMemorySnapshot *, char *); /* linkage=_ZN22CVirtualMemorySnapshot13ParseMapsLineEPc */
	bool ReadMaps(class CVirtualMemorySnapshot *); /* linkage=_ZN22CVirtualMemorySnapshot8ReadMapsEv */
};

// <00128A6C> ../public/tier0/vmem_utils.h:16
void CVirtualMemorySnapshot::CVirtualMemorySnapshot()
{
} /* size: 0 */

// <00127ECE> ../public/tier0/vmem_utils.h:17
void CVirtualMemorySnapshot::~CVirtualMemorySnapshot()
{
} /* size: 0 */

// <0015C3EA> ../public/tier0/vmem_utils.h:61
inline void CVirtualMemorySnapshot::HasCapture()
{
} /* size: 0 */

// <0051F4BF> ../public/tier0/vmem_utils.h:93
inline void CVirtualMemorySnapshot::GetRegionsCount()
{
} /* size: 0 */

// <0051F49A> ../public/tier0/vmem_utils.h:105
inline void CVirtualMemorySnapshot::GetRegion(int nIdx)
{
} /* size: 0 */

// <0051F475> ../public/tier0/vmem_utils.h:120
inline void CVirtualMemorySnapshot::GetRegionString(int nIdx)
{
} /* size: 0 */

// <0051F450> ../public/tier0/vmem_utils.h:125
inline void CVirtualMemorySnapshot::RegionHasDesc(const Region_t* pRegion)
{
} /* size: 0 */

// <0051F42B> ../public/tier0/vmem_utils.h:129
inline void CVirtualMemorySnapshot::GetRegionDesc(const Region_t* pRegion)
{
} /* size: 0 */

