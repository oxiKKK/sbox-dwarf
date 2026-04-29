
//
// soundsystem/vmix_voicelist.cpp
//
//	referenced by: libengine2.so
//
//	functions: 17
//	class: 1
//

// <0266B923> soundsystem/vmix_voicelist.cpp:19
// function calls: 11
void CVMixMasterVoiceList::CVMixMasterVoiceList(int nVoiceCount, const char* pMainGraphName)
{
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 19
	CUtlMemory<CSfxTable::ValidateGrowSize(); // 475
	CUtlMemory<CSfxTable::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSfxTable::ResetDbgInfo(); // 530
	CUtlVectorBase<CSfxTable::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSfxTable::CUtlVector(); // 19
	CUtlMemory<CVSndAsyncLoadRequest::ValidateGrowSize(); // 475
	CUtlMemory<CVSndAsyncLoadRequest::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVSndAsyncLoadRequest::ResetDbgInfo(); // 530
	CUtlVectorBase<CVSndAsyncLoadRequest::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVSndAsyncLoadRequest::CUtlVector(); // 19
} /* size: 84, inline expansions: 11 (87 bytes) */

// <0266B8EF> soundsystem/vmix_voicelist.cpp:19
void CVMixMasterVoiceList::CVMixMasterVoiceList(int nVoiceCount, const char* pMainGraphName)
{
} /* size: 0 */

// <0266B1F0> soundsystem/vmix_voicelist.cpp:23
// variable: 1
// function calls: 36
void CVMixMasterVoiceList::~CVMixMasterVoiceList()
{
	{
		int i; // 1807
		CUtlMemory<CVSndAsyncLoadRequest::operator[](
				int i);  // 602
		CUtlVectorBase<CVSndAsyncLoadRequest::Element(
			int i);  // 1809
		CUtlMemory<CSfxTable::IsExternallyAllocated(); // 905
		CUtlMemory<CSfxTable::Purge(); // 903
		CUtlMemory<CSfxTable::Purge(); // 1799
		CUtlVectorBase<CSfxTable::RemoveAll(); // 1798
		CUtlVectorBase<CSfxTable::Purge(); // 560
		ValidateAlignment<CSfxTable*>(void); // 508
		CUtlMemory<CSfxTable::Purge(); // 510
		CUtlMemory<CSfxTable::~CUtlMemory(); // 562
		CUtlVectorBase<CSfxTable::~CUtlVectorBase(); // 410
		CUtlVector<CSfxTable::~CUtlVector(); // 104
		CVSndAsyncLoadRequest::~CVSndAsyncLoadRequest(); // 1809
	}
	CUtlVectorBase<CVSndAsyncLoadRequest::RemoveAll(); // 1798
	CUtlMemory<CVSndAsyncLoadRequest::IsExternallyAllocated(); // 905
	CUtlMemory<CVSndAsyncLoadRequest::Purge(); // 903
	CUtlMemory<CVSndAsyncLoadRequest::Purge(); // 1799
	CUtlVectorBase<CVSndAsyncLoadRequest::ResetDbgInfo(); // 1800
	CUtlVectorBase<CVSndAsyncLoadRequest::Purge(); // 1811
	CUtlVectorBase<CVSndAsyncLoadRequest::PurgeAndDeleteElements(); // 184
	CUtlVectorBase<CSfxTable::RemoveAll(); // 185
	CVMixMasterVoiceList::ClearAsyncLoadQueue(); // 25
	CUtlVectorBase<CVSndAsyncLoadRequest::RemoveAll(); // 1798
	CUtlVectorBase<CVSndAsyncLoadRequest::Purge(); // 560
	ValidateAlignment<CVSndAsyncLoadRequest*>(void); // 508
	CUtlMemory<CVSndAsyncLoadRequest::Purge(); // 510
	CUtlMemory<CVSndAsyncLoadRequest::~CUtlMemory(); // 562
	CUtlVectorBase<CVSndAsyncLoadRequest::~CUtlVectorBase(); // 410
	CUtlVector<CVSndAsyncLoadRequest::~CUtlVector(); // 26
	CUtlVectorBase<CSfxTable::RemoveAll(); // 1798
	CUtlMemory<CSfxTable::IsExternallyAllocated(); // 905
	CUtlMemory<CSfxTable::Purge(); // 903
	CUtlMemory<CSfxTable::Purge(); // 1799
	CUtlVectorBase<CSfxTable::Purge(); // 560
	CUtlVectorBase<CSfxTable::~CUtlVectorBase(); // 410
	CUtlVector<CSfxTable::~CUtlVector(); // 26
} /* size: 267, inline expansions: 23 (706 bytes) */

// <0266B1D4> soundsystem/vmix_voicelist.cpp:23
void CVMixMasterVoiceList::~CVMixMasterVoiceList()
{
} /* size: 0 */

// <0266AAAF> soundsystem/vmix_voicelist.cpp:28
// variables: 3
// function calls: 28
void CVMixMasterVoiceList::QueueSfxForLoad(CSfxTable* pSfx, const char* pSoundFileName)
{
	CResourceName resourceName; // 34
	ResourceStatus_t status; // 35
	{
		int i; // 1531
		CUtlVectorBase<CSfxTable::Count(); // 1531
		CUtlMemory<CSfxTable::operator[](
				int i);  // 609
		CUtlVectorBase<CSfxTable::Element(
			int i);  // 1533
	}
	CUtlVectorBase<CSfxTable::Find(
		CSfxTable* const& src);  // 47
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 55
	CUtlMemory<CSfxTable::NumAllocated(); // 1196
	CUtlMemory<CSfxTable::operator[](
			int i);  // 602
	CUtlVectorBase<CSfxTable::Element(
		int i);  // 1201
	CopyConstruct<CSfxTable*>(CSfxTable** pMemory,
					CSfxTable* const& src);  // 1201
	CUtlMemory<CSfxTable::Base(); // 112
	CUtlVectorBase<CSfxTable::Base(); // 368
	CUtlVectorBase<CSfxTable::ResetDbgInfo(); // 824
	CUtlVectorBase<CSfxTable::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CSfxTable::AddToTail(
			CSfxTable* const& src);  // 53
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 55
	CWeakHandle<InfoForResourceTypeVSound_t>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeVSound_t>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 703
	CWeakHandle<InfoForResourceTypeVSound_t>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeVSound_t>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 705
	IResourceSystem::FindOrRegisterResourceByName<1684960118>(
						const CResourceName& resourceName,
						bool bWarnIfNotLoaded);  // 38
	CStrongHandle<InfoForResourceTypeVSound_t>::operator=(
			const CWeakHandle<InfoForResourceTypeVSound_t>& src);  // 38
} /* size: 406, variables: 2, inline expansions: 25 (300 bytes) */

// <02662CFF> soundsystem/vmix_voicelist.cpp:57
// member functions: 8
// member variables: 2
// class size: 40
class CVSndAsyncLoadRequest {
	CUtlVector<CSfxTable*, CUtlMemory<CSfxTable*, int> > m_list; /* 0 32 */
	HResourceManifest m_hSoundQueueManifest; /* 32 8 */
	/* soundsystem/vmix_voicelist.cpp:63 */
	void CVSndAsyncLoadRequest(CVSndAsyncLoadRequest* , CUtlVector<CSfxTable*, CUtlMemory<CSfxTable*, int> >& );
	/* soundsystem/vmix_voicelist.cpp:97 */
	void ~CVSndAsyncLoadRequest(CVSndAsyncLoadRequest* );
	/* soundsystem/vmix_voicelist.cpp:106 */
	void OnManifestCompleted(CVSndAsyncLoadRequest* , HResourceManifest);
	/* soundsystem/vmix_voicelist.cpp:148 */
	bool PollForCompletion(CVSndAsyncLoadRequest* );
	void CVSndAsyncLoadRequest(class CVSndAsyncLoadRequest *, class CUtlVector<CSfxTable*, CUtlMemory<CSfxTable*, int> > &); /* linkage=_ZN21CVSndAsyncLoadRequestC4ER10CUtlVectorIP9CSfxTable10CUtlMemoryIS2_iEE */
	void ~CVSndAsyncLoadRequest(class CVSndAsyncLoadRequest *); /* linkage=_ZN21CVSndAsyncLoadRequestD4Ev */
	void OnManifestCompleted(class CVSndAsyncLoadRequest *, HResourceManifest); /* linkage=_ZN21CVSndAsyncLoadRequest19OnManifestCompletedEP19HResourceManifest__ */
	bool PollForCompletion(class CVSndAsyncLoadRequest *); /* linkage=_ZN21CVSndAsyncLoadRequest17PollForCompletionEv */
};

// <026697C0> soundsystem/vmix_voicelist.cpp:63
// variables: 16
// function calls: 76
void CVSndAsyncLoadRequest::CVSndAsyncLoadRequest(CUtlVector<CSfxTable*, CUtlMemory<CSfxTable*, int> >& list)
{
	{
		{
			CStableSymbolTable resourceNameList; // 66
			{
				int i; // 67
				{
					CSfxTable* pSfx; // 72
					CPathBufferString soundName; // 74
					const char* pSoundFileName; // 75
					{
					}
					{
					}
				}
			}
			{
				int i; // 87
				{
					CSfxTable* pSfx; // 89
				}
			}
		}
	}
	{
		CUtlMemory<CSfxTable::ValidateGrowSize(); // 475
		CUtlMemory<CSfxTable::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CSfxTable::ResetDbgInfo(); // 530
		CUtlVectorBase<CSfxTable::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CSfxTable::CUtlVector(); // 64
		{
			CStableSymbolTable resourceNameList; // 66
			CUtlVectorBase<CSfxTable::Count(); // 65
			CUtlVectorBase<CSfxTable::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlMemory<CSfxTable::Base(); // 112
			CUtlVectorBase<CSfxTable::Base(); // 368
			CUtlVectorBase<CSfxTable::ResetDbgInfo(); // 824
			CUtlVectorBase<CSfxTable::GrowMemory(
					int num);  // 784
			CUtlVectorBase<CSfxTable::GrowVector(
					int num);  // 1445
			CUtlVectorBase<CSfxTable::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<CSfxTable::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<CSfxTable::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<CSfxTable::SetCount(
				int count);  // 65
			CUtlMemory<CUtlHashtableEntry<char const::ValidateGrowSize(); // 475
			CUtlMemory<CUtlHashtableEntry<char const::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 178
			CUtlHashtable<char const::Init(); // 178
			CUtlHashtable<char const::CUtlHashtable(
					int minimumSize);  // 26
			CUtlMemory<char const::ValidateGrowSize(); // 475
			CUtlMemory<char const::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<char const::ResetDbgInfo(); // 530
			CUtlVectorBase<char const::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<char const::CUtlVector(); // 26
			CStableSymbolTable::CStableSymbolTable(); // 66
			{
				int i; // 67
				CUtlVectorBase<CSfxTable::Count(); // 67
				{
					CSfxTable* pSfx; // 72
					CPathBufferString soundName; // 74
					const char* pSoundFileName; // 75
					CUtlMemory<CSfxTable::operator[](
							int i);  // 588
					CUtlVectorBase<CSfxTable::operator[](
							int i);  // 69
					CUtlMemory<CSfxTable::operator[](
							int i);  // 588
					CUtlVectorBase<CSfxTable::operator[](
							int i);  // 69
					CUtlMemory<CSfxTable::operator[](
							int i);  // 588
					CUtlVectorBase<CSfxTable::operator[](
							int i);  // 72
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 74
					CStableSymbolTable::FindOrAddSymbol(
							const char* pSymbol,
							bool* pIsNewSymbol);  // 76
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 318
					CResourceName::~CResourceName(); // 79
					{
					}
					{
					}
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 81
				}
			}
			CUtlVectorBase<char const::Count(); // 31
			CStableSymbolTable::Count(); // 83
			ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(
							int nCount,
							const char ** ppResourceFiles,
							ResourceManifestLoadBehavior_t nLoadBehavior,
							const char* pDebugName,
							ResourceManifestLoadPriority_t nPriority);  // 777
			IResourceSystem::CreateResourceManifest(
						int nCount,
						const char ** ppResourceFiles,
						ResourceManifestLoadBehavior_t nLoadBehavior,
						const char* pDebugName,
						ResourceManifestLoadPriority_t nPriority);  // 85
			CUtlMemory<char const::Base(); // 113
			CUtlVectorBase<char const::Base(); // 35
			CStableSymbolTable::GetAllSymbols(); // 85
			CStableSymbolTable::Count(); // 85
			{
				int i; // 87
				CUtlVectorBase<CSfxTable::Count(); // 87
				{
					CSfxTable* pSfx; // 89
					CUtlMemory<CSfxTable::operator[](
							int i);  // 588
					CUtlVectorBase<CSfxTable::operator[](
							int i);  // 89
				}
			}
			CUtlVectorBase<char const::RemoveAll(); // 1798
			CUtlMemory<char const::IsExternallyAllocated(); // 905
			CUtlMemory<char const::Purge(); // 903
			CUtlMemory<char const::Purge(); // 1799
			CUtlVectorBase<char const::Purge(); // 560
			ValidateAlignment<char const*>(void); // 508
			CUtlMemory<char const::Purge(); // 510
			CUtlMemory<char const::~CUtlMemory(); // 562
			CUtlVectorBase<char const::~CUtlVectorBase(); // 410
			CUtlVector<char const::~CUtlVector(); // 27
			{
				entry_t* table; // 896
				CUtlMemory<CUtlHashtableEntry<char const::Base(); // 896
				{
					int i; // 897
					CUtlMemory<CUtlHashtableEntry<char const::Count(); // 897
					CUtlHashtableEntry<char const::IsValid(); // 899
					CUtlHashtableEntry<char const::MarkInvalid(); // 901
					Destruct<CUtlKeyValuePair<char const*, int> >(CUtlKeyValuePair<char const*, int>* pMemory); // 902
				}
			}
			CUtlHashtable<char const::RemoveAll(); // 188
			ValidateAlignment<CUtlHashtableEntry<char const*, int> >(void); // 508
			CUtlMemory<CUtlHashtableEntry<char const::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlHashtableEntry<char const::Purge(); // 903
			CUtlMemory<CUtlHashtableEntry<char const::Purge(); // 510
			CUtlMemory<CUtlHashtableEntry<char const::~CUtlMemory(); // 188
			CUtlHashtable<char const::~CUtlHashtable(); // 27
			CStableSymbolTable::~CStableSymbolTable(); // 95
		}
	}
} /* size: 1045 */

// <026696ED> soundsystem/vmix_voicelist.cpp:63
// variables: 10
inline void CVSndAsyncLoadRequest::CVSndAsyncLoadRequest(CUtlVector<CSfxTable*, CUtlMemory<CSfxTable*, int> >& list)
{
	const char   __FUNCTION__; // 9387
	{
		CStableSymbolTable resourceNameList; // 66
		{
			int i; // 67
			{
				CSfxTable* pSfx; // 72
				CPathBufferString soundName; // 74
				const char* pSoundFileName; // 75
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 79
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
				}
			}
		}
		{
			int i; // 87
			{
				CSfxTable* pSfx; // 89
			}
		}
	}
} /* size: 0, variables: 1 */

// <026696D6> soundsystem/vmix_voicelist.cpp:97
void CVSndAsyncLoadRequest::~CVSndAsyncLoadRequest()
{
} /* size: 0 */

// <026696BD> soundsystem/vmix_voicelist.cpp:97
inline void CVSndAsyncLoadRequest::~CVSndAsyncLoadRequest()
{
} /* size: 0 */

// <0266C752> soundsystem/vmix_voicelist.cpp:106
// variables: 8
// function calls: 21
void CVSndAsyncLoadRequest::OnManifestCompleted(HResourceManifest hManifest)
{
	CPathBufferString soundName; // 108
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 108
	{
		int i; // 109
		CUtlVectorBase<CSfxTable::Count(); // 109
		{
			CSfxTable* pSfx; // 111
			const char* pSoundFileName; // 112
			CResourceName soundResourceName; // 113
			ResourceStatus_t status; // 114
			{
				const VSound_t* pSound; // 122
				CAudioSource* pSource; // 130
				CWeakHandle<InfoForResourceTypeVSound_t>::CWeakHandle(); // 226
				CWeakHandle<InfoForResourceTypeVSound_t>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 703
				CWeakHandle<InfoForResourceTypeVSound_t>::CWeakHandle(); // 226
				CWeakHandle<InfoForResourceTypeVSound_t>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 705
				IResourceSystem::FindOrRegisterResourceByName<1684960118>(
									const CResourceName& resourceName,
									bool bWarnIfNotLoaded);  // 121
				CStrongHandle<InfoForResourceTypeVSound_t>::operator=(
						const CWeakHandle<InfoForResourceTypeVSound_t>& src);  // 121
				CStrongHandle<InfoForResourceTypeVSound_t>::operator const ResourceHandleInfo_t<InfoForResourceTypeVSound_t>::RuntimeClass_t*(); // 122
			}
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 145
			CUtlMemory<CSfxTable::operator[](
					int i);  // 588
			CUtlVectorBase<CSfxTable::operator[](
					int i);  // 111
		}
	}
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 146
} /* size: 514, variables: 1, inline expansions: 5 (87 bytes) */

// <0266962D> soundsystem/vmix_voicelist.cpp:106
// variables: 8
inline void CVSndAsyncLoadRequest::OnManifestCompleted(HResourceManifest hManifest)
{
	CPathBufferString soundName; // 108
	{
		int i; // 109
		{
			CSfxTable* pSfx; // 111
			const char* pSoundFileName; // 112
			CResourceName soundResourceName; // 113
			ResourceStatus_t status; // 114
			{
				const VSound_t* pSound; // 122
				CAudioSource* pSource; // 130
			}
		}
	}
} /* size: 0, variables: 1 */

// <02669614> soundsystem/vmix_voicelist.cpp:148
inline void CVSndAsyncLoadRequest::PollForCompletion()
{
} /* size: 0 */

// <02668CF4> soundsystem/vmix_voicelist.cpp:163
// variables: 3
// function calls: 40
void CVMixMasterVoiceList::UpdateLoadQueue()
{
	{
		int i; // 165
		CUtlVectorBase<CVSndAsyncLoadRequest::Count(); // 165
		CVSndAsyncLoadRequest::PollForCompletion(); // 167
		CUtlMemory<CVSndAsyncLoadRequest::operator[](
				int i);  // 588
		CUtlVectorBase<CVSndAsyncLoadRequest::operator[](
				int i);  // 167
		CUtlMemory<CSfxTable::IsExternallyAllocated(); // 905
		CUtlMemory<CSfxTable::Purge(); // 903
		CUtlMemory<CSfxTable::Purge(); // 1799
		CUtlVectorBase<CSfxTable::RemoveAll(); // 1798
		CUtlVectorBase<CSfxTable::Purge(); // 560
		ValidateAlignment<CSfxTable*>(void); // 508
		CUtlMemory<CSfxTable::Purge(); // 510
		CUtlMemory<CSfxTable::~CUtlMemory(); // 562
		CUtlVectorBase<CSfxTable::~CUtlVectorBase(); // 410
		CUtlVector<CSfxTable::~CUtlVector(); // 104
		CVSndAsyncLoadRequest::~CVSndAsyncLoadRequest(); // 169
		CUtlMemory<CVSndAsyncLoadRequest::operator[](
				int i);  // 602
		CUtlVectorBase<CVSndAsyncLoadRequest::Element(
			int i);  // 1575
		Destruct<CVSndAsyncLoadRequest*>(CVSndAsyncLoadRequest** pMemory); // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<CVSndAsyncLoadRequest::operator[](
					int i);  // 602
			CUtlVectorBase<CVSndAsyncLoadRequest::Element(
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		CUtlVectorBase<CVSndAsyncLoadRequest::FastRemove(
				int elem);  // 170
		CUtlMemory<CVSndAsyncLoadRequest::operator[](
				int i);  // 588
		CUtlVectorBase<CVSndAsyncLoadRequest::operator[](
				int i);  // 169
	}
	{
		CVSndAsyncLoadRequest* pReq; // 176
		CUtlVectorBase<CSfxTable::RemoveAll(); // 177
		CUtlMemory<CVSndAsyncLoadRequest::NumAllocated(); // 1196
		CUtlMemory<CVSndAsyncLoadRequest::Base(); // 112
		CUtlVectorBase<CVSndAsyncLoadRequest::Base(); // 368
		CUtlVectorBase<CVSndAsyncLoadRequest::ResetDbgInfo(); // 824
		CUtlMemory<CVSndAsyncLoadRequest::IsGrowable(); // 823
		CUtlMemory<CVSndAsyncLoadRequest::IsExternallyAllocated(); // 859
		CUtlMemory<CVSndAsyncLoadRequest::IsExternallyAllocated(); // 861
		CUtlMemory<CVSndAsyncLoadRequest::Grow(
			int num);  // 806
		CUtlVectorBase<CVSndAsyncLoadRequest::GrowMemory(
				int num);  // 1198
		CUtlMemory<CVSndAsyncLoadRequest::operator[](
				int i);  // 602
		CUtlVectorBase<CVSndAsyncLoadRequest::Element(
			int i);  // 1201
		CopyConstruct<CVSndAsyncLoadRequest*>(CVSndAsyncLoadRequest** pMemory,
							CVSndAsyncLoadRequest* const& src);  // 1201
		CUtlVectorBase<CVSndAsyncLoadRequest::AddToTail(
				CVSndAsyncLoadRequest* const& src);  // 178
	}
	CUtlVectorBase<CSfxTable::Count(); // 174
} /* size: 562, inline expansions: 1 (0 bytes) */

// <0266C2CF> soundsystem/vmix_voicelist.cpp:182
// variable: 1
// function calls: 21
void CVMixMasterVoiceList::ClearAsyncLoadQueue()
{
	{
		int i; // 1807
		CUtlMemory<CVSndAsyncLoadRequest::operator[](
				int i);  // 602
		CUtlVectorBase<CVSndAsyncLoadRequest::Element(
			int i);  // 1809
		CUtlMemory<CSfxTable::IsExternallyAllocated(); // 905
		CUtlMemory<CSfxTable::Purge(); // 903
		CUtlMemory<CSfxTable::Purge(); // 1799
		CUtlVectorBase<CSfxTable::RemoveAll(); // 1798
		CUtlVectorBase<CSfxTable::Purge(); // 560
		ValidateAlignment<CSfxTable*>(void); // 508
		CUtlMemory<CSfxTable::Purge(); // 510
		CUtlMemory<CSfxTable::~CUtlMemory(); // 562
		CUtlVectorBase<CSfxTable::~CUtlVectorBase(); // 410
		CUtlVector<CSfxTable::~CUtlVector(); // 104
		CVSndAsyncLoadRequest::~CVSndAsyncLoadRequest(); // 1809
	}
	CUtlVectorBase<CVSndAsyncLoadRequest::RemoveAll(); // 1798
	CUtlMemory<CVSndAsyncLoadRequest::IsExternallyAllocated(); // 905
	CUtlMemory<CVSndAsyncLoadRequest::Purge(); // 903
	CUtlMemory<CVSndAsyncLoadRequest::Purge(); // 1799
	CUtlVectorBase<CVSndAsyncLoadRequest::ResetDbgInfo(); // 1800
	CUtlVectorBase<CVSndAsyncLoadRequest::Purge(); // 1811
	CUtlVectorBase<CVSndAsyncLoadRequest::PurgeAndDeleteElements(); // 184
	CUtlVectorBase<CSfxTable::RemoveAll(); // 185
} /* size: 230, inline expansions: 8 (328 bytes) */

// <02668CD8> soundsystem/vmix_voicelist.cpp:182
void CVMixMasterVoiceList::ClearAsyncLoadQueue()
{
} /* size: 0 */

// <0266C721> soundsystem/vmix_voicelist.cpp:188
void CVMixMasterVoiceList::OnSfxUnloaded(CSfxTable* pSfx)
{
} /* size: 5 */

// <02668C88> soundsystem/vmix_voicelist.cpp:193
void CVMixMasterVoiceList::NotifyFreeAudioCacheHandle(memhandle_t hFree)
{
} /* size: 0 */

