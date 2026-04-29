
//
// engine2/soundservice.cpp
//
//	referenced by: libengine2.so
//
//	functions: 20
//

// <0067D231> engine2/soundservice.cpp:22
void* __CreateCSoundServiceIEngineService_interface(void)
{
} /* size: 12 */

// <0067CDD9> engine2/soundservice.cpp:38
// function calls: 19
void CSoundService::CSoundService()
{
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CSoundService>::CConCommandMemberAccessor(
					CSoundService* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 37
	CConCommandMemberAccessor<CSoundService>::SetOwner(
		CSoundService* pOwner);  // 37
	CCommandMemberInitializer_PlaySoundCommand::CCommandMemberInitializer_PlaySoundCommand(); // 40
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	IAppSystem::IAppSystem(); // 78
	IEngineService::IEngineService(); // 9
	ISoundService::ISoundService(); // 120
	CBaseAppSystem<ISoundService>::CBaseAppSystem(); // 171
	CTier0AppSystem<ISoundService, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<ISoundService, 0>::CTier1AppSystem(); // 48
	CTier2AppSystem<ISoundService, 0>::CTier2AppSystem(); // 18
	CTier3AppSystem<ISoundService, 0>::CTier3AppSystem(); // 149
	CBaseEngineService<ISoundService>::CBaseEngineService(); // 40
} /* size: 238, inline expansions: 19 (296 bytes) */

// <0067CDC0> engine2/soundservice.cpp:38
void CSoundService::CSoundService()
{
} /* size: 0 */

// <0068E535> engine2/soundservice.cpp:50
// variables: 2
// function calls: 3
void CSoundService::OnClientOutput(const EventClientOutput_t& msg)
{
	bool bAppActive; // 60
	bool bAsyncUpdate; // 63
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 63
	CSoundService::OnClientOutput(
			const EventClientOutput_t& msg);  // 50
} /* size: 136, variables: 2, inline expansions: 3 (41 bytes) */

// <0067CD83> engine2/soundservice.cpp:50
// variables: 2
void CSoundService::OnClientOutput(const EventClientOutput_t& msg)
{
	bool bAppActive; // 60
	bool bAsyncUpdate; // 63
} /* size: 0, variables: 2 */

// <0068E638> engine2/soundservice.cpp:70
// variable: 1
// function calls: 3
void CSoundService::OnClientPostOutput(const EventClientPostOutput_t& msg)
{
	bool bAsyncUpdate; // 77
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 77
	CSoundService::OnClientPostOutput(
				const EventClientPostOutput_t& msg);  // 70
} /* size: 81, variables: 1, inline expansions: 3 (48 bytes) */

// <0067CD52> engine2/soundservice.cpp:70
// variable: 1
void CSoundService::OnClientPostOutput(const EventClientPostOutput_t& msg)
{
	bool bAsyncUpdate; // 77
} /* size: 0, variables: 1 */

// <0067BB94> engine2/soundservice.cpp:85
// variables: 6
// function calls: 68
void BuildFileList_R(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& files, const char* dir, const char* extension)
{
	FileFindHandle_t hFind; // 87
	int extlen; // 89
	CUtlString directory; // 90
	CUtlString filename; // 91
	const char* pFind; // 93
	{
		int len; // 110
		V_strlen(const char* str); // 110
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1201
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1520
		CopyConstruct<CUtlString>(CUtlString* pMemory,
						const CUtlString& src);  // 1201
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				const CUtlString& src);  // 118
	}
	FileFindHandle_t::FileFindHandle_t(); // 87
	V_strlen(const char* str); // 89
	CUtlString::CUtlString(); // 90
	CUtlString::CUtlString(); // 91
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 84
	CFmtStrN<256>::Access(); // 93
	CFileSystemPassThru::FindFirst(
			const char* pWildCard,
			FileFindHandle_t* pHandle);  // 127
	CFileSystemPassThru::FindFirst(
			const char* pWildCard,
			FileFindHandle_t* pHandle);  // 93
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 93
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 101
	CUtlString::operator=(
			const char* src);  // 101
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 101
	CUtlString::Get(); // 99
	CUtlString::String(); // 103
	CFileSystemPassThru::IsDirectory(
			const char* pFileName,
			const char* pathID);  // 108
	CFileSystemPassThru::IsDirectory(
			const char* pFileName,
			const char* pathID);  // 108
	CFileSystemPassThru::IsDirectory(
			const char* pFileName,
			const char* pathID);  // 108
	CFileSystemPassThru::IsDirectory(
			const char* pFileName,
			const char* pathID);  // 103
	CUtlString::Get(); // 99
	CUtlString::String(); // 106
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 122
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 125
	CUtlString::~CUtlString(); // 126
	CUtlString::~CUtlString(); // 126
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 798
	FileFindHandle_t::~FileFindHandle_t(); // 126
} /* size: 1753, variables: 5, inline expansions: 56 (4215 bytes) */

// <0067BB5C> engine2/soundservice.cpp:128
void BuildFileList(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& files, const char* rootdir, const char* extension)
{
} /* size: 0 */

// <006917E3> engine2/soundservice.cpp:134
// function call: 1
void CSoundService::BuildList(const char* pchRoot, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& soundList)
{
	BuildFileList(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& files,
			const char* rootdir,
			const char* extension);  // 136
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0067BB2B> engine2/soundservice.cpp:134
void CSoundService::BuildList(const char* pchRoot, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& soundList)
{
} /* size: 0 */

// <0067B510> engine2/soundservice.cpp:140
// variables: 3
// function calls: 25
void CSoundService::FilterList(const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& soundList, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& filteredList, CUtlString& best, const char* pchPartial)
{
	bool bSetBest; // 142
	int nSubStringLen; // 145
	{
		int i; // 151
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 151
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 161
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1201
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1520
		CopyConstruct<CUtlString>(CUtlString* pMemory,
						const CUtlString& src);  // 1201
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				const CUtlString& src);  // 161
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 154
		CUtlString::Get(); // 154
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 159
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 159
	}
	CUtlString::operator=(
			const char* src);  // 143
	V_strlen(const char* str); // 148
} /* size: 416, variables: 2, inline expansions: 2 (26 bytes) */

// <00679DBE> engine2/soundservice.cpp:168
// variables: 13
// function calls: 94
void CSoundService::PlaySoundCommand(const CCommandContext& ctx, const CCommand& args)
{
	const char* pszSubString; // 176
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > soundlist; // 180
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > dummy; // 182
	CUtlString best; // 183
	{
		CResourceName resourceName; // 188
		HSound hSound; // 193
		CSfxTable* pSfx; // 200
		StartSoundParams_t params; // 207
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 189
		CResourceName::Get(); // 191
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
							bool bWarnIfNotLoaded);  // 193
		CResourceName::Get(); // 200
		CUtlStringToken::CUtlStringToken(); // 94
		CUtlStringToken::CUtlStringToken(); // 94
		StartSoundParams_t::StartSoundParams_t(); // 207
		{
			int i; // 108
		}
		StartSoundParams_t::Init(
			CSfxTable* pSfxIn,
			float flVolume,
			sound_voice_layer_t nLayer);  // 208
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 210
		CResourceName::Get(); // 196
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 210
		CResourceName::Get(); // 203
	}
	CCommand::ArgC(); // 170
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 172
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 176
	BuildFileList(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& files,
			const char* rootdir,
			const char* extension);  // 136
	CSoundService::BuildList(
			const char* pchRoot,
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& soundList);  // 181
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 180
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 182
	CUtlString::CUtlString(); // 183
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 186
	CUtlString::~CUtlString(); // 211
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
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 211
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
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 211
	CUtlString::~CUtlString(); // 211
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
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 211
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
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 211
} /* size: 1337, variables: 4, inline expansions: 54 (1895 bytes) */

// <00678F8A> engine2/soundservice.cpp:213
// variables: 8
// function calls: 62
void CSoundService::SoundResource_CompletionFunc(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char* pCommand; // 215
	const char* pSoundSubstring; // 217
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > soundlist; // 223
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > filtered; // 225
	CUtlString best; // 226
	{
		int i; // 229
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 231
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1252
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1514
		Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				CUtlString& src);  // 231
		CUtlString::~CUtlString(); // 231
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 231
		CUtlString::Get(); // 231
		CUtlString::CUtlString(
				const char* pString);  // 231
	}
	BuildFileList(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& files,
			const char* rootdir,
			const char* extension);  // 136
	CSoundService::BuildList(
			const char* pchRoot,
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& soundList);  // 224
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 223
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 225
	CUtlString::CUtlString(); // 226
	CUtlString::~CUtlString(); // 233
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
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 233
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
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 233
} /* size: 948, variables: 5, inline expansions: 33 (1168 bytes) */

// <00678EE0> engine2/soundservice.cpp:235
// function calls: 2
void CSoundService::ShouldActivate(const char* pLoopModeName)
{
	CAppSystemDict::IsConsoleApp(); // 130
	CTier1Application::IsConsoleApp(); // 237
} /* size: 80, inline expansions: 2 (22 bytes) */

// <00678E67> engine2/soundservice.cpp:245
void CSoundService::OnLoopActivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 67 */

// <00678E1B> engine2/soundservice.cpp:253
void CSoundService::OnLoopDeactivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 12 */

// <0067872E> engine2/soundservice.cpp:259
// variable: 1
// function calls: 32
void CSoundService::Init()
{
	InitReturnVal_t ret; // 261
	CTier0AppSystem<ISoundService, 0>::Init(); // 71
	CTier2AppSystem<ISoundService, 0>::Init(); // 261
	CAppSystemDict::IsConsoleApp(); // 130
	CTier1Application::IsConsoleApp(); // 262
	GetPrimaryBinding(void); // 341
	Schema_StaticBinding(void); // 237
	GetEventID(void); // 267
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(const EventAppShutdown_t&), void (*)(const EventAppShutdown_t&), void (*) this); // 1112
	implicit_cast<CSoundService*, CSoundService*>(CSoundService* inputVal); // 1113
	CSoundService::Convert<CSoundService, void (
															void ()(CSoundService *, const EventAppShutdown_t &) CSoundService::* function_to_bind,
															void ()(GenericClass *) GenericClass::*& bound_func);  // 746
	ClosurePtr<void (detail::GenericClass::::bindmemfunc<CSoundService, void (
											CSoundService* pthis,
											void ()(CSoundService *, const EventAppShutdown_t &) CSoundService::* function_to_bind);  // 1113
	FastDelegate1<const EventAppShutdown_t&, void>::FastDelegate1<CSoundService, CSoundService>(
							CSoundService* pthis,
							void ()(CSoundService *, const EventAppShutdown_t &) CSoundService::* function_to_bind);  // 2164
	CUtlDelegate<void(const EventAppShutdown_t&)>::CUtlDelegate<CSoundService, CSoundService>(
							CSoundService* pthis,
							void ()(CSoundService *, const EventAppShutdown_t &) CSoundService::* function_to_bind); // 2519
	UtlMakeDelegate<CSoundService, CSoundService, const EventAppShutdown_t&, void>(CSoundService* x,
											void ()(CSoundService *, const EventAppShutdown_t &) CSoundService::* func);  // 267
	FastDelegate1<const EventAppShutdown_t&, void>::GetAbstractDelegate(); // 595
	CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1>::RegisterEventListener(
				const CUtlDelegate<void(const EventAppShutdown_t&)>& listener,
				int nPriority,
				const char* pszName,
				EventID_t EventID);  // 267
	GetPrimaryBinding(void); // 69
	Schema_StaticBinding(void); // 237
	GetEventID(void); // 271
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(const EventClientOutput_t&), void (*)(const EventClientOutput_t&), void ( this); // 1112
	implicit_cast<CSoundService*, CSoundService*>(CSoundService* inputVal); // 1113
	CSoundService::Convert<CSoundService, void (
															void ()(CSoundService *, const EventClientOutput_t &) CSoundService::* function_to_bind,
															void ()(GenericClass *) GenericClass::*& bound_func);  // 746
	ClosurePtr<void (detail::GenericClass::::bindmemfunc<CSoundService, void (
											CSoundService* pthis,
											void ()(CSoundService *, const EventClientOutput_t &) CSoundService::* function_to_bind);  // 1113
	FastDelegate1<const EventClientOutput_t&, void>::FastDelegate1<CSoundService, CSoundService>(
							CSoundService* pthis,
							void ()(CSoundService *, const EventClientOutput_t &) CSoundService::* function_to_bind);  // 2164
	CUtlDelegate<void(const EventClientOutput_t&)>::CUtlDelegate<CSoundService, CSoundService>(
							CSoundService* pthis,
							void ()(CSoundService *, const EventClientOutput_t &) CSoundService::* function_to_bind); // 2519
	UtlMakeDelegate<CSoundService, CSoundService, const EventClientOutput_t&, void>(CSoundService* x,
											void ()(CSoundService *, const EventClientOutput_t &) CSoundService::* func);  // 271
	FastDelegate1<const EventClientOutput_t&, void>::GetAbstractDelegate(); // 595
	CEvent_Register<CEventIDManager_Default, EventClientOutput_t, void, 1>::RegisterEventListener(
				const CUtlDelegate<void(const EventClientOutput_t&)>& listener,
				int nPriority,
				const char* pszName,
				EventID_t EventID);  // 271
} /* size: 388, variables: 1, inline expansions: 30 (477 bytes) */

// <006786A0> engine2/soundservice.cpp:276
// function calls: 2
void CSoundService::Shutdown()
{
	CTier0AppSystem<ISoundService, 0>::Shutdown(); // 85
	CTier2AppSystem<ISoundService, 0>::Shutdown(); // 280
} /* size: 50, inline expansions: 2 (46 bytes) */

// <00678662> engine2/soundservice.cpp:283
void CSoundService::OnAppShutdown(const EventAppShutdown_t& msg)
{
} /* size: 5 */

