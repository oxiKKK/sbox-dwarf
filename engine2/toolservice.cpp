
//
// engine2/toolservice.cpp
//
//	referenced by: libengine2.so
//
//	functions: 22
//

// <00747F53> engine2/toolservice.cpp:24
void* __CreateCToolServiceIEngineService_interface(void)
{
} /* size: 12 */

// <00747C8C> engine2/toolservice.cpp:30
// function calls: 14
void CToolService::CToolService()
{
	IAppSystem::IAppSystem(); // 78
	IEngineService::IEngineService(); // 20
	IToolService::IToolService(); // 120
	CBaseAppSystem<IToolService>::CBaseAppSystem(); // 171
	CTier0AppSystem<IToolService, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IToolService, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<IToolService, 0>::CTier2AppSystem(); // 18
	CTier3AppSystem<IToolService, 0>::CTier3AppSystem(); // 149
	CBaseEngineService<IToolService>::CBaseEngineService(); // 30
} /* size: 0, inline expansions: 14 (0 bytes) */

// <00747C73> engine2/toolservice.cpp:30
void CToolService::CToolService()
{
} /* size: 0 */

// <00747A7E> engine2/toolservice.cpp:34
// function calls: 10
void CToolService::~CToolService()
{
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IToolService, 0>::~CTier2AppSystem(); // 18
	CTier3AppSystem<IToolService, 0>::~CTier3AppSystem(); // 167
	CBaseEngineService<IToolService>::~CBaseEngineService(); // 36
} /* size: 49, inline expansions: 10 (286 bytes) */

// <00747713> engine2/toolservice.cpp:34
// function calls: 19
void CToolService::~CToolService()
{
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	ValidateAlignment<ResourceManifestDesc_t*>(void); // 508
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 510
	CUtlMemory<ResourceManifestDesc_t::~CUtlMemory(); // 562
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	IEngineService::~IEngineService(); // 20
	IToolService::~IToolService(); // 120
	CBaseAppSystem<IToolService>::~CBaseAppSystem(); // 171
	CTier0AppSystem<IToolService, 0>::~CTier0AppSystem(); // 225
	CTier1AppSystem<IToolService, 0>::~CTier1AppSystem(); // 42
	CTier2AppSystem<IToolService, 0>::~CTier2AppSystem(); // 18
	CTier3AppSystem<IToolService, 0>::~CTier3AppSystem(); // 167
	CBaseEngineService<IToolService>::~CBaseEngineService(); // 36
	CToolService::~CToolService(); // 36
} /* size: 93, inline expansions: 19 (330 bytes) */

// <007476FA> engine2/toolservice.cpp:34
void CToolService::~CToolService()
{
} /* size: 0 */

// <007476A5> engine2/toolservice.cpp:42
// variable: 1
void CToolService::GetServiceDependencies()
{
	EngineServiceDependencies_t s_Dependencies; // 44
} /* size: 12, variables: 1 */

// <00758AC8> engine2/toolservice.cpp:57
// variable: 1
// function calls: 5
void CToolService::Init()
{
	InitReturnVal_t nRetVal; // 59
	CTier0AppSystem<IToolService, 0>::Init(); // 71
	CTier2AppSystem<IToolService, 0>::Init(); // 59
	CTier0AppSystem<IToolService, 0>::Init(); // 71
	CTier2AppSystem<IToolService, 0>::Init(); // 59
	CToolService::Init(); // 57
} /* size: 46, variables: 1, inline expansions: 5 (53 bytes) */

// <00747680> engine2/toolservice.cpp:57
// variable: 1
void CToolService::Init()
{
	InitReturnVal_t nRetVal; // 59
} /* size: 0, variables: 1 */

// <007475DD> engine2/toolservice.cpp:66
// function calls: 2
void CToolService::Shutdown()
{
	CTier0AppSystem<IToolService, 0>::Shutdown(); // 85
	CTier2AppSystem<IToolService, 0>::Shutdown(); // 68
} /* size: 33, inline expansions: 2 (56 bytes) */

// <00747582> engine2/toolservice.cpp:75
void CToolService::SubmitConsoleCommand(const char* pCmdString)
{
} /* size: 41 */

// <00747545> engine2/toolservice.cpp:87
void CToolService::ShouldActivate(const char* pLoopModeName)
{
} /* size: 24 */

// <007474F9> engine2/toolservice.cpp:96
void CToolService::OnLoopDeactivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 5 */

// <0075B92D> engine2/toolservice.cpp:103
// variables: 2
// function calls: 20
void CToolService::UpdateStandardLight(ISceneWorld* pSceneWorld, const LightDesc_t& lightDesc, HDeferredLight& hLightHandle)
{
	CSceneLightObject* pLight; // 105
	{
		CSceneLightObjectModifyScope modifyLight; // 108
		CSceneLightObjectModifyScope::CSceneLightObjectModifyScope(
						CSceneLightObject* pLight,
						bool bUpdateBounds);  // 108
		CSceneObject::GetWorld(); // 2621
		{
		}
		{
		}
		CSceneLightObject::GetLightDescForModify(); // 109
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 570
		CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 659
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
				ResourceHandleTyped_t hResource);  // 244
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 244
		CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::operator=(
				const CStrongHandleCopyable<InfoForResourceTypeCTextureBase>& src);  // 178
		Vector::operator=(
				const Vector& vOther);  // 169
		Vector::operator=(
				const Vector& vOther);  // 170
		Vector::operator=(
				const Vector& vOther);  // 202
		Vector::operator=(
				const Vector& vOther);  // 203
		Vector::operator=(
				const Vector& vOther);  // 204
		Vector::operator=(
				const Vector& vOther);  // 214
		Vector::operator=(
				const Vector& vOther);  // 215
		LightDesc_t::operator=(
				const LightDesc_t& other);  // 109
		CSceneObject::SetBounds(
				const Vector& vecWorldMins,
				const Vector& vecWorldMaxes);  // 2992
		CSceneLightObjectModifyScope::~CSceneLightObjectModifyScope(); // 110
	}
	CToolService::UpdateStandardLight(
				ISceneWorld* pSceneWorld,
				const LightDesc_t& lightDesc,
				HDeferredLight& hLightHandle);  // 103
} /* size: 0, variables: 1, inline expansions: 1 (41 bytes) */

// <007474A2> engine2/toolservice.cpp:103
// variables: 2
void CToolService::UpdateStandardLight(ISceneWorld* pSceneWorld, const LightDesc_t& lightDesc, HDeferredLight& hLightHandle)
{
	CSceneLightObject* pLight; // 105
	{
		CSceneLightObjectModifyScope modifyLight; // 108
	}
} /* size: 0, variables: 1 */

// <00747432> engine2/toolservice.cpp:119
// variable: 1
void CToolService::DeleteStandardLight(HDeferredLight hLightHandle)
{
	CSceneLightObject* pLight; // 121
} /* size: 23, variables: 1 */

// <00747278> engine2/toolservice.cpp:128
// function calls: 6
void CToolService::GetModelCombineInfo(HModel hCombinedModel, HModelStrongCopyable* phBaseModel, int* piBaseSkin, const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCM ppVecAdditionalModels, const CUtlVector<int, CUtlMemory<int, int> > ** ppVecSkins)
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 130
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 239
	CStrongHandleCopyable<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 130
} /* size: 87, inline expansions: 6 (159 bytes) */

// <0074724A> engine2/toolservice.cpp:137
void CToolService::GetPlayerTonemappingScale()
{
} /* size: 13 */

// <0074695B> engine2/toolservice.cpp:143
// variables: 8
// function calls: 30
void CToolService::ExtractVPK(const CUtlString& sourceVpk, const CUtlString& targetFolder)
{

vpk_extract_cleanup: // 186
	bool bResultCode; // 145
	const char* vpkName; // 153
	char vpkTmp; // 155
	CPathBufferString gamePath; // 158
	char* pSemicolon; // 160
	{
		char vpkCmd; // 174
		IProcess* pProcess; // 176
		int nReturnCode; // 177
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 176
	}
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 147
	V_strcmp(const char* s1,
		const char* s2);  // 147
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 150
	CFileSystemPassThru::CreateDirHierarchy(
				const char* path,
				const char* pathID);  // 104
	CFileSystemPassThru::CreateDirHierarchy(
				const char* path,
				const char* pathID);  // 104
	CFileSystemPassThru::CreateDirHierarchy(
				const char* path,
				const char* pathID);  // 150
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 153
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 156
	V_ComposeFileName<long unsigned int>(const char* path,
						const char* filename,
						char* dest,
						long unsigned int destSize);  // 156
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 158
	CFileSystemPassThru::GetSearchPath(
			const char* pathID,
			GetSearchPathTypes_t nPathTypes,
			CBufferString* pPath,
			int nMaxElements);  // 499
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 159
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 808
	CBufferString::GetForModify(); // 160
	strchr(char* __s,
		int __c);  // 194
	V_strchr(char* s,
		char c);  // 160
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 166
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 189
} /* size: 845, variables: 5, goto labels: 1, inline expansions: 27 (753 bytes) */

// <0075C4FE> engine2/toolservice.cpp:193
// variables: 2
// function calls: 2
void CToolService::CreateVPK(const CUtlString& sourceFolder)
{
	CPathBufferString gamePath; // 198
	char* pSemicolon; // 200
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 195
} /* size: 88, variables: 2, inline expansions: 2 (34 bytes) */

// <0075BEF1> engine2/toolservice.cpp:193
// variables: 5
// function calls: 20
void CUtlString& sourceFolder, const CToolService::CreateVPK()
{
	CPathBufferString gamePath; // 198
	char* pSemicolon; // 200
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 198
	CFileSystemPassThru::GetSearchPath(
			const char* pathID,
			GetSearchPathTypes_t nPathTypes,
			CBufferString* pPath,
			int nMaxElements);  // 164
	CFileSystemPassThru::GetSearchPath(
			const char* pathID,
			GetSearchPathTypes_t nPathTypes,
			CBufferString* pPath,
			int nMaxElements);  // 164
	CFileSystemPassThru::GetSearchPath(
			const char* pathID,
			GetSearchPathTypes_t nPathTypes,
			CBufferString* pPath,
			int nMaxElements);  // 164
	CFileSystemPassThru::GetSearchPath(
			const char* pathID,
			GetSearchPathTypes_t nPathTypes,
			CBufferString* pPath,
			int nMaxElements);  // 499
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 199
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 808
	CBufferString::GetForModify(); // 200
	strchr(char* __s,
		int __c);  // 194
	V_strchr(char* s,
		char c);  // 200
	{
		char vpkCmd; // 208
		IProcess* pProcess; // 210
		int nReturnCode; // 211
		CUtlString::Get(); // 99
		CUtlString::String(); // 209
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 210
	}
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 220
} /* size: 525, variables: 2, inline expansions: 15 (781 bytes) */

// <007468F8> engine2/toolservice.cpp:193
// variables: 5
void CToolService::CreateVPK(const CUtlString& sourceFolder)
{
	CPathBufferString gamePath; // 198
	char* pSemicolon; // 200
	{
		char vpkCmd; // 208
		IProcess* pProcess; // 210
		int nReturnCode; // 211
	}
} /* size: 0, variables: 2 */

