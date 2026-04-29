
//
// vulkan/aftermathvulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 9
//	classes: 2
//

// <009A22B2> vulkan/aftermathvulkan.h:96
// member functions: 14
// member variables: 2
// class size: 40
class CAftermathVulkan {
	void CAftermathVulkan(CAftermathVulkan* , const CAftermathVulkan& );
	int ()(void) * * _vptr.CAftermathVulkan; /* 0 8 */
	/* vulkan/aftermathvulkan.h:99 */
	void CAftermathVulkan(CAftermathVulkan* );
	/* vulkan/aftermathvulkan.h:100 */
	virtual void ~CAftermathVulkan(CAftermathVulkan* );
	/* vulkan/aftermathvulkan.h:101 */
	bool Init(CAftermathVulkan* );
	/* vulkan/aftermathvulkan.h:102 */
	void Shutdown(CAftermathVulkan* );
	/* vulkan/aftermathvulkan.h:103 */
	void AddShader(CAftermathVulkan* , const void* , uint32_t, const char* );
	/* vulkan/aftermathvulkan.h:104 */
	const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& GetCrashShaderNames(const CAftermathVulkan* );
private:
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_crashShaderNames; /* 8 32 */
	void CAftermathVulkan(class CAftermathVulkan *, const class CAftermathVulkan  &); /* linkage=_ZN16CAftermathVulkanC4ERKS_ */
	void CAftermathVulkan(class CAftermathVulkan *); /* linkage=_ZN16CAftermathVulkanC4Ev */
	virtual void ~CAftermathVulkan(class CAftermathVulkan *); /* linkage=_ZN16CAftermathVulkanD4Ev */
	bool Init(class CAftermathVulkan *); /* linkage=_ZN16CAftermathVulkan4InitEv */
	void Shutdown(class CAftermathVulkan *); /* linkage=_ZN16CAftermathVulkan8ShutdownEv */
	void AddShader(class CAftermathVulkan *, const void  *, uint32_t, const char  *); /* linkage=_ZN16CAftermathVulkan9AddShaderEPKvjPKc */
	const class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >  & GetCrashShaderNames(const class CAftermathVulkan  *); /* linkage=_ZNK16CAftermathVulkan19GetCrashShaderNamesEv */
};

// <00B6314D> vulkan/aftermathvulkan.h:96
// member functions: 13
// member variables: 2
// class size: 40
class CAftermathVulkan {
	int ()(void) * * _vptr.CAftermathVulkan; /* 0 8 */
	/* vulkan/aftermathvulkan.h:99 */
	void CAftermathVulkan(CAftermathVulkan* );
	/* vulkan/aftermathvulkan.h:100 */
	virtual void ~CAftermathVulkan(CAftermathVulkan* );
	/* vulkan/aftermathvulkan.h:101 */
	bool Init(CAftermathVulkan* );
	/* vulkan/aftermathvulkan.h:102 */
	void Shutdown(CAftermathVulkan* );
	/* vulkan/aftermathvulkan.h:103 */
	void AddShader(CAftermathVulkan* , const void* , uint32_t, const char* );
	/* vulkan/aftermathvulkan.h:104 */
	const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& GetCrashShaderNames(const CAftermathVulkan* );
private:
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_crashShaderNames; /* 8 32 */
	void CAftermathVulkan(class CAftermathVulkan *, const class CAftermathVulkan  &); /* linkage=_ZN16CAftermathVulkanC4ERKS_ */
	void CAftermathVulkan(class CAftermathVulkan *); /* linkage=_ZN16CAftermathVulkanC4Ev */
	virtual void ~CAftermathVulkan(class CAftermathVulkan *); /* linkage=_ZN16CAftermathVulkanD4Ev */
	bool Init(class CAftermathVulkan *); /* linkage=_ZN16CAftermathVulkan4InitEv */
	void Shutdown(class CAftermathVulkan *); /* linkage=_ZN16CAftermathVulkan8ShutdownEv */
	void AddShader(class CAftermathVulkan *, const void  *, uint32_t, const char  *); /* linkage=_ZN16CAftermathVulkan9AddShaderEPKvjPKc */
	const class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >  & GetCrashShaderNames(const class CAftermathVulkan  *); /* linkage=_ZNK16CAftermathVulkan19GetCrashShaderNamesEv */
};

// <00A55D30> vulkan/aftermathvulkan.h:99
void CAftermathVulkan::CAftermathVulkan()
{
} /* size: 0 */

// <00A55D17> vulkan/aftermathvulkan.h:99
inline void CAftermathVulkan::CAftermathVulkan()
{
} /* size: 0 */

// <00A55AC7> vulkan/aftermathvulkan.h:100
// variable: 1
// function calls: 11
void CAftermathVulkan::~CAftermathVulkan()
{
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 100
} /* size: 155, inline expansions: 7 (438 bytes) */

// <00A557A0> vulkan/aftermathvulkan.h:100
// variable: 1
// function calls: 15
void CAftermathVulkan::~CAftermathVulkan()
{
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 100
	CAftermathVulkan::~CAftermathVulkan(); // 100
} /* size: 150, inline expansions: 11 (510 bytes) */

// <00A55787> vulkan/aftermathvulkan.h:100
inline void CAftermathVulkan::~CAftermathVulkan()
{
} /* size: 0 */

// <00A5576E> vulkan/aftermathvulkan.h:101
inline void CAftermathVulkan::Init()
{
} /* size: 0 */

// <00A55755> vulkan/aftermathvulkan.h:102
inline void CAftermathVulkan::Shutdown()
{
} /* size: 0 */

// <00BC4733> vulkan/aftermathvulkan.h:103
inline void CAftermathVulkan::AddShader(const void* pSpirV, uint32_t nSpirvSize, const char* pDebugName)
{
} /* size: 0 */

// <00B8B450> vulkan/aftermathvulkan.h:104
inline void CAftermathVulkan::GetCrashShaderNames()
{
} /* size: 0 */

