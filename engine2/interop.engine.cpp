
//
// engine2/interop.engine.cpp
//
//	referenced by: libengine2.so
//
//	functions: 2,828
//

// <013230F5> engine2/interop.engine.cpp:17
const char* SafeReturnString(const char* input)
{
} /* size: 0 */

// <01322260> engine2/interop.engine.cpp:24
// variables: 2
// function calls: 67
const wchar_t* SafeReturnWString(const wchar_t* input)
{
	_Alloc_hider(_Alloc_hider *,
			pointer,
			const allocator<wchar_t>  &);  // 27
	length(const char_type* __s); // 1847
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::size(); // 1847
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_check_length(
			size_type __n1,
			size_type __n2,
			const char* __s);  // 546
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 280
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 280
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_is_local(); // 1279
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::capacity(); // 551
	{
		pointer __p; // 553
		const size_type  __how_much; // 555
		less<wchar_t const::operator(
				const wchar_t* __x,
				const wchar_t* __y);  // 440
		less<wchar_t const::operator(
				const wchar_t* __x,
				const wchar_t* __y);  // 441
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_disjunct(
				const wchar_t* __s);  // 568
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		wmemcpy(wchar_t* __s1,
			const wchar_t* __s2,
			size_t __n);  // 560
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(wchar_t* __d,
			const wchar_t* __s,
			size_type __n);  // 573
	}
	__new_allocator<wchar_t>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<wchar_t>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 142
	_S_allocate(_Char_alloc_type& __a,
			size_type __n);  // 164
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_create(
			size_type& __capacity,
			size_type __old_capacity);  // 363
	wmemcpy(wchar_t* __s1,
		const wchar_t* __s2,
		size_t __n);  // 560
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 453
	_S_copy(wchar_t* __d,
		const wchar_t* __s,
		size_type __n);  // 368
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 280
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 280
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_is_local(); // 298
	__new_allocator<wchar_t>::deallocate(
			wchar_t* __p,
			size_type __n);  // 215
	allocator<wchar_t>::deallocate(
			wchar_t* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_destroy(
			size_type __size);  // 299
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_dispose(); // 373
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(
		pointer __p);  // 374
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_capacity(
			size_type __capacity);  // 375
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_mutate(
			size_type __pos,
			size_type __len1,
			const wchar_t* __s,
			size_type __len2);  // 579
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_length(
			size_type __length);  // 272
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 273
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_set_length(
			size_type __n);  // 581
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_replace(
			size_type __pos,
			size_type __len1,
			const wchar_t* __s,
			const size_type  __len2);  // 1847
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::assign(
		const wchar_t* __s);  // 27
	_Alloc_hider(_Alloc_hider *,
			pointer,
			const allocator<wchar_t>  &);  // 28
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 2874
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::c_str(); // 28
	CUtlString::CUtlString(); // 16
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 590
	__new_allocator<wchar_t>::__new_allocator(
			const __new_allocator<wchar_t>  &);  // 173
	allocator<wchar_t>::allocator(
			const allocator<wchar_t>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<wchar_t>& __a);  // 590
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_set_length(
			size_type __n);  // 593
	allocator<wchar_t>::~allocator(); // 590
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_init_local_buf(); // 592
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::basic_string(); // 23
	__tls_init(void); // 27
	CUtlString::CUtlString(); // 16
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 590
	__new_allocator<wchar_t>::__new_allocator(
			const __new_allocator<wchar_t>  &);  // 173
	allocator<wchar_t>::allocator(
			const allocator<wchar_t>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<wchar_t>& __a);  // 590
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_set_length(
			size_type __n);  // 593
	allocator<wchar_t>::~allocator(); // 590
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_init_local_buf(); // 592
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::basic_string(); // 23
	__tls_init(void); // 28
} /* size: 0, inline expansions: 60 (0 bytes) */

// <01322172> engine2/interop.engine.cpp:127
void DispatchManagedReadTextureCallback(CReadTexturePixelsManagedCallback* caller, void* pData, ImageFormat format, int nMipLevel, int nWidth, int nHeight, int nPitchInBytes)
{
} /* size: 13 */

// <013220F4> engine2/interop.engine.cpp:128
void DispatchManagedReadBufferCallback(CReadBufferManagedCallback* caller, void* pData, int nBytes)
{
} /* size: 10 */

// <013220D8> engine2/interop.engine.cpp:133
void MixOneBuffer(void)
{
} /* size: 10 */

// <01322090> engine2/interop.engine.cpp:138
void RegisterNativeVar(ConVar* convar)
{
} /* size: 10 */

// <01322048> engine2/interop.engine.cpp:139
void RegisterNativeCommand(ConCommand* concommand)
{
} /* size: 10 */

// <01321FCA> engine2/interop.engine.cpp:140
void OnConVarChanged(const char* convarname, const char* value, const char* previous)
{
} /* size: 0 */

// <01321F67> engine2/interop.engine.cpp:145
void RegisterEngineLogger(int id, const char* name)
{
} /* size: 10 */

// <01321F1F> engine2/interop.engine.cpp:150
void EnvironmentExit(int nCode)
{
} /* size: 10 */

// <01321EB8> engine2/interop.engine.cpp:159
void OnMouseMotion(float dx, float dy)
{
} /* size: 10 */

// <01321E19> engine2/interop.engine.cpp:160
void OnMousePositionChange(float x, float y, float dx, float dy)
{
} /* size: 10 */

// <01321D92> engine2/interop.engine.cpp:161
void OnMouseButton(ButtonCode_t button, bool state, int ikeymods)
{
} /* size: 17 */

// <01321CCC> engine2/interop.engine.cpp:162
void OnKey(ButtonCode_t scanButtonCode, ButtonCode_t keyButtonCode, bool state, bool repeating, int ikeymods)
{
} /* size: 22 */

// <01321C83> engine2/interop.engine.cpp:163
void OnText(unsigned int key)
{
} /* size: 10 */

// <01321C38> engine2/interop.engine.cpp:164
void OnWindowActive(bool active)
{
} /* size: 14 */

// <01321BBC> engine2/interop.engine.cpp:165
void OnMouseWheel(int x, int y, int ikeymods)
{
} /* size: 10 */

// <01321BA0> engine2/interop.engine.cpp:166
void OnImeStart(void)
{
} /* size: 0 */

// <01321B3A> engine2/interop.engine.cpp:167
void OnImeComposition(const char* text, bool final)
{
} /* size: 0 */

// <01321B1E> engine2/interop.engine.cpp:168
void OnImeEnd(void)
{
} /* size: 0 */

// <01321A97> engine2/interop.engine.cpp:169
void OnGameControllerButton(int deviceId, GameControllerCode_t button, bool state)
{
} /* size: 16 */

// <01321A13> engine2/interop.engine.cpp:170
void OnGameControllerAxis(int deviceId, GameControllerAxis_t axis, int value)
{
} /* size: 13 */

// <013219B0> engine2/interop.engine.cpp:171
void OnGameControllerConnected(int joystickId, int deviceId)
{
} /* size: 10 */

// <01321968> engine2/interop.engine.cpp:172
void OnGameControllerDisconnected(int deviceId)
{
} /* size: 10 */

// <01321920> engine2/interop.engine.cpp:173
void OnConsoleCommand(const char* command)
{
} /* size: 10 */

// <01321904> engine2/interop.engine.cpp:174
void CloseApplication(void)
{
} /* size: 10 */

// <01321866> engine2/interop.engine.cpp:231
void Set(const char* cpu, short unsigned int processorCount, uint64 frequency, uint64 totalMemory)
{
} /* size: 13 */

// <013217E8> engine2/interop.engine.cpp:232
void SetGpu(const char* driver, const char* version, uint64 memory)
{
} /* size: 10 */

// <0132176A> engine2/interop.engine.cpp:237
void Print(int severitty, const char* logger, const char* message)
{
} /* size: 10 */

// <013216EC> engine2/interop.engine.cpp:238
void DispatchConsoleCommand(const char* name, const char* args, int64 flags)
{
} /* size: 0 */

// <013216D0> engine2/interop.engine.cpp:239
void OnClientOutput(void)
{
} /* size: 10 */

// <01321688> engine2/interop.engine.cpp:240
void OnSceneViewSubmitted(ISceneView* view)
{
} /* size: 10 */

// <01321630> engine2/interop.engine.cpp:245
void OnLayer(int renderHookStage, ManagedRenderSetup_t setup)
{
} /* size: 10 */

// <013215CC> engine2/interop.engine.cpp:250
void RegisterHandle(void* ptr, unsigned int type)
{
} /* size: 10 */

// <01321584> engine2/interop.engine.cpp:251
void FreeHandle(int handle)
{
} /* size: 10 */

// <0132151E> engine2/interop.engine.cpp:256
void OnLobbyInvite(uint64 lobbyid, uint64 memberid)
{
} /* size: 10 */

// <013214B8> engine2/interop.engine.cpp:257
void OnMemberEntered(uint64 lobbyid, uint64 memberid)
{
} /* size: 10 */

// <01321452> engine2/interop.engine.cpp:258
void OnMemberLeave(uint64 lobbyid, uint64 memberid)
{
} /* size: 10 */

// <01321408> engine2/interop.engine.cpp:259
void OnEntered(uint64 lobbyid)
{
} /* size: 10 */

// <013213BE> engine2/interop.engine.cpp:260
void OnCreated(uint64 lobbyid)
{
} /* size: 10 */

// <01321358> engine2/interop.engine.cpp:261
void OnDataUpdate(uint64 lobbyid, uint64 targetid)
{
} /* size: 10 */

// <013212BA> engine2/interop.engine.cpp:262
void OnChatMessage(uint64 lobbyid, uint64 memberid, void* message, int length)
{
} /* size: 10 */

// <01321254> engine2/interop.engine.cpp:271
void OnSocketConnection(HSteamListenSocket socket, HSteamNetConnection connection)
{
} /* size: 10 */

// <013211EE> engine2/interop.engine.cpp:272
void OnSocketDisconnection(HSteamListenSocket socket, HSteamNetConnection connection)
{
} /* size: 10 */

// <01321188> engine2/interop.engine.cpp:273
void ShouldAcceptConnection(HSteamListenSocket socket, HSteamNetConnection connection)
{
} /* size: 21 */

// <01321106> engine2/interop.engine.cpp:274
void OnDisconnection(HSteamNetConnection connection, int reasonCode, const char* reasonString)
{
} /* size: 10 */

// <013210BC> engine2/interop.engine.cpp:275
void OnSessionEstablished(uint64 steamId)
{
} /* size: 10 */

// <01320FB4> engine2/interop.engine.cpp:287
// function calls: 2
void OnPhysicsJointBreak(IPhysicsJoint* joint)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsJoint*>(IPhysicsJoint* c); // 287
} /* size: 50, inline expansions: 2 (22 bytes) */

// <01320E93> engine2/interop.engine.cpp:288
// function calls: 2
void OnActive(IPhysicsBody* body, CTransformUnaligned transform, Vector velocity, Vector linearVelocity, bool fellAsleep, bool wentOutOfBounds)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsBody*>(IPhysicsBody* c); // 288
} /* size: 115, inline expansions: 2 (25 bytes) */

// <01320E47> engine2/interop.engine.cpp:293
void Update(float time)
{
} /* size: 0 */

// <01320D65> engine2/interop.engine.cpp:298
void InternalAddLayersToView(ISceneView* view, RenderViewport_t viewport, HSceneViewRenderTarget hColor, HSceneViewRenderTarget hDepth, RenderMultisampleType_t nMSAA, CRenderAttributes* pipelineAttributes, RenderViewport_t screenDimensions)
{
} /* size: 13 */

// <01320C83> engine2/interop.engine.cpp:299
void InternalPipelineEnd(ISceneView* view, RenderViewport_t viewport, HSceneViewRenderTarget hColor, HSceneViewRenderTarget hDepth, RenderMultisampleType_t nMSAA, CRenderAttributes* pipelineAttributes, RenderViewport_t screenDimensions)
{
} /* size: 13 */

// <01320C1D> engine2/interop.engine.cpp:304
void InitForView(void* handle, ISceneView* view)
{
} /* size: 10 */

// <01320BB7> engine2/interop.engine.cpp:305
void SetShaderAttributes(void* handle, CRenderAttributes* attr)
{
} /* size: 10 */

// <01320B6D> engine2/interop.engine.cpp:306
void UploadToGPU(void* handle)
{
} /* size: 10 */

// <01320A3F> engine2/interop.engine.cpp:307
// function calls: 3
void DoDirectionalLight(void* handle, CSceneLightObject* directionalLight, ISceneView* view)
{
	CSceneObject::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CSceneLightObject*>(CSceneLightObject* c); // 307
} /* size: 108, inline expansions: 3 (70 bytes) */

// <013208F3> engine2/interop.engine.cpp:308
// function calls: 3
void FindOrCreateShadowMaps(void* handle, CSceneLightObject* obj, ISceneView* view, float screenSize)
{
	CSceneObject::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CSceneLightObject*>(CSceneLightObject* c); // 308
} /* size: 118, inline expansions: 3 (75 bytes) */

// <01320845> engine2/interop.engine.cpp:313
void InternalAddLayersToView(ISceneView* view, RenderViewport_t viewport, HSceneViewRenderTarget hColor, HSceneViewRenderTarget hDepth, CRenderAttributes* pipelineAttributes)
{
} /* size: 10 */

// <01320828> engine2/interop.engine.cpp:318
void Flush(void)
{
} /* size: 10 */

// <013207C2> engine2/interop.engine.cpp:325
void OnResourceReloaded(const char* name, void* resourceBinding)
{
} /* size: 10 */

// <013206D9> engine2/interop.engine.cpp:331
// function calls: 3
void RenderObject(ManagedRenderSetup_t setup, CManagedSceneObject* obj)
{
	CSceneObject::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CManagedSceneObject*>(CManagedSceneObject* c); // 331
} /* size: 78, inline expansions: 3 (57 bytes) */

// <013205F0> engine2/interop.engine.cpp:336
// function calls: 3
void OnBeforeRender(CSceneObject* obj, ManagedRenderSetup_t setup)
{
	CSceneObject::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CSceneObject*>(CSceneObject* c); // 336
} /* size: 78, inline expansions: 3 (57 bytes) */

// <01320507> engine2/interop.engine.cpp:337
// function calls: 3
void OnAfterRender(CSceneObject* obj, ManagedRenderSetup_t setup)
{
	CSceneObject::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CSceneObject*>(CSceneObject* c); // 337
} /* size: 78, inline expansions: 3 (57 bytes) */

// <013204EA> engine2/interop.engine.cpp:342
void OnDefinitionUpdate(void)
{
} /* size: 10 */

// <01320481> engine2/interop.engine.cpp:343
void OnPricesUpdate(bool success, const char* currency)
{
} /* size: 0 */

// <013203FC> engine2/interop.engine.cpp:344
void OnPurchaseResult(bool success, uint64 orderid, uint64 transid)
{
} /* size: 0 */

// <013203C4> engine2/interop.engine.cpp:353
void ServerList::OnStarted()
{
} /* size: 12 */

// <01320348> engine2/interop.engine.cpp:354
void ServerList::OnServerResponded(void* ptr, uint64 steamid)
{
} /* size: 12 */

// <01320310> engine2/interop.engine.cpp:355
void ServerList::OnFinished()
{
} /* size: 12 */

// <013202D8> engine2/interop.engine.cpp:364
void VideoPlayer::OnTextureCreatedInternal()
{
} /* size: 12 */

// <0132025C> engine2/interop.engine.cpp:365
void VideoPlayer::OnInitAudioInternal(int sampleRate, int channels)
{
} /* size: 12 */

// <01320224> engine2/interop.engine.cpp:366
void VideoPlayer::OnFreeAudioInternal()
{
} /* size: 12 */

// <0132018C> engine2/interop.engine.cpp:367
void VideoPlayer::OnTextureDataInternal(void* data, int width, int height)
{
} /* size: 12 */

// <01320154> engine2/interop.engine.cpp:368
void VideoPlayer::OnLoadedInternal()
{
} /* size: 12 */

// <0132011A> engine2/interop.engine.cpp:369
void VideoPlayer::WantsTextureData()
{
} /* size: 23 */

// <013200E2> engine2/interop.engine.cpp:370
void VideoPlayer::OnFinishedInternal()
{
} /* size: 12 */

// <0132008B> engine2/interop.engine.cpp:377
void InternalIsActive(void)
{
} /* size: 21 */

// <0132006E> engine2/interop.engine.cpp:378
void BeginFrame(void)
{
} /* size: 10 */

// <01320051> engine2/interop.engine.cpp:379
void EndFrame(void)
{
} /* size: 10 */

// <0131FFEB> engine2/interop.engine.cpp:380
void Submit(void* pTexture, void* pDepthTexture)
{
} /* size: 21 */

// <0131FFB9> engine2/interop.engine.cpp:381
void GetVulkanInstanceExtensionsRequired(void)
{
} /* size: 23 */

// <0131FF87> engine2/interop.engine.cpp:382
void GetVulkanDeviceExtensionsRequired(void)
{
} /* size: 23 */

// <0131FEE6> engine2/interop.engine.cpp:387
void OnClientCallback(int type, void* data, int datasize, bool isServer)
{
} /* size: 13 */

// <0136B5F3> engine2/interop.engine.cpp:397
// function calls: 11
void CnmtnGrpBldr_DeleteThis(void* self)
{
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::Purge(); // 903
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::Purge(); // 560
	ValidateAlignment<CAnimationGroupBuilder::Animation_t>(void); // 508
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::Purge(); // 510
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::~CUtlVector(); // 137
	CAnimationGroupBuilder::~CAnimationGroupBuilder(); // 400
	CnmtnGrpBldr_DeleteThis(void* self); // 397
} /* size: 73, inline expansions: 11 (196 bytes) */

// <0131FE66> engine2/interop.engine.cpp:397
void CnmtnGrpBldr_DeleteThis(void* self)
{
} /* size: 0 */

// <0131FCAB> engine2/interop.engine.cpp:403
// function calls: 6
void CnmtnGrpBldr_Create(void)
{
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::CUtlVector(); // 137
	CAnimationGroupBuilder::CAnimationGroupBuilder(); // 406
} /* size: 51, inline expansions: 6 (108 bytes) */

// <0131F7DB> engine2/interop.engine.cpp:409
// function calls: 21
void CnmtnGrpBldr_AddAnimation(void* self)
{
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::NumAllocated(); // 1143
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::Base(); // 112
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::Base(); // 368
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::IsGrowable(); // 823
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlString::CUtlString(
			const char* pString);  // 141
	CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<C this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<C this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTran this); // 141
	Animation_t::Animation_t(); // 1479
	Construct<CAnimationGroupBuilder::Animation_t>(Animation_t* pMemory); // 1148
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::Element(
		int i);  // 1148
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::AddToTail(); // 153
	CAnimationGroupBuilder::AddAnimation(); // 412
} /* size: 379, inline expansions: 21 (1489 bytes) */

// <0131EFD4> engine2/interop.engine.cpp:415
// variable: 1
// function calls: 35
void CnmtnGrpBldr_AddFrame(void* self, int nAnimation, void* pBoneTransforms, int nNumBoneTransforms)
{
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::IsValidIndex(
			int i);  // 158
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::operator[](
			int i);  // 159
	CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::NumAllocated(); // 1143
	CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::Base(); // 112
	Base(const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<C this); // 368
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<C this); // 824
	CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::IsGrowable(); // 823
	CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<C this,
			int num);  // 1145
	CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<C this,
		int i);  // 1148
	CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTransform, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(); // 1479
	Construct<CUtlVector<CTransform> >(CUtlVector<CTransform, CUtlMemory<CTransform, int> >* pMemory); // 1148
	AddToTail(const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<C this); // 160
	CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<C this,
			int i);  // 160
	{
		int i; // 163
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 33
		VectorAligned::VectorAligned(); // 33
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 30
		QuaternionAligned::QuaternionAligned(
					const Quaternion& rhs);  // 33
		CTransform::CTransform(
				const Vector& v,
				const Quaternion& q,
				float flScale);  // 151
		CTransformUnaligned::AsTransform(); // 165
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 165
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 165
	}
	{
	}
	CAnimationGroupBuilder::AddFrame(
		int nAnimation,
		CTransformUnaligned* pBoneTransforms,
		int nNumBoneTransforms);  // 418
} /* size: 0, inline expansions: 24 (1445 bytes) */

// <0131EE26> engine2/interop.engine.cpp:421
// function calls: 5
void CnmtnGrpBldr_SetName(void* self, int nAnimation, const char* pName)
{
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::IsValidIndex(
			int i);  // 171
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::operator[](
			int i);  // 172
	CUtlString::operator=(
			const char* src);  // 173
	{
	}
	CAnimationGroupBuilder::SetName(
		int nAnimation,
		const char* pName);  // 424
} /* size: 0, inline expansions: 5 (143 bytes) */

// <0131ECBB> engine2/interop.engine.cpp:427
// function calls: 4
void CnmtnGrpBldr_SetFrameRate(void* self, int nAnimation, float fps)
{
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::IsValidIndex(
			int i);  // 178
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::operator[](
			int i);  // 179
	{
	}
	CAnimationGroupBuilder::SetFrameRate(
			int nAnimation,
			float fps);  // 430
} /* size: 0, inline expansions: 4 (110 bytes) */

// <0131EB44> engine2/interop.engine.cpp:433
// function calls: 4
void CnmtnGrpBldr_SetLooping(void* self, int nAnimation, int looping)
{
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::IsValidIndex(
			int i);  // 185
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::operator[](
			int i);  // 186
	{
	}
	CAnimationGroupBuilder::SetLooping(
			int nAnimation,
			bool looping);  // 436
} /* size: 0, inline expansions: 4 (105 bytes) */

// <0131E9CD> engine2/interop.engine.cpp:439
// function calls: 4
void CnmtnGrpBldr_SetDelta(void* self, int nAnimation, int delta)
{
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::IsValidIndex(
			int i);  // 192
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::operator[](
			int i);  // 193
	{
	}
	CAnimationGroupBuilder::SetDelta(
		int nAnimation,
		bool delta);  // 442
} /* size: 0, inline expansions: 4 (105 bytes) */

// <0131E856> engine2/interop.engine.cpp:445
// function calls: 4
void CnmtnGrpBldr_SetDisableInterpolation(void* self, int nAnimation, int disableInterpolation)
{
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::IsValidIndex(
			int i);  // 199
	CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::operator[](
			int i);  // 200
	{
	}
	CAnimationGroupBuilder::SetDisableInterpolation(
				int nAnimation,
				bool disableInterpolation);  // 448
} /* size: 0, inline expansions: 4 (105 bytes) */

// <0131E771> engine2/interop.engine.cpp:451
// variables: 2
// function calls: 2
void CAttachment_GetInfluenceName(void* __self, int __index)
{
	CAttachment* self; // 455
	int index; // 456
	CUtlString::Get(); // 99
	CUtlString::String(); // 459
} /* size: 31, variables: 2, inline expansions: 2 (44 bytes) */

// <0131E70A> engine2/interop.engine.cpp:463
// variables: 2
void CAttachment_GetInfluenceOffset(void* __self, int __index)
{
	CAttachment* self; // 467
	int index; // 468
} /* size: 35, variables: 2 */

// <0131E698> engine2/interop.engine.cpp:475
// variables: 2
void CAttachment_GetInfluenceRotation(void* __self, int __index)
{
	CAttachment* self; // 479
	int index; // 480
} /* size: 29, variables: 2 */

// <01367A31> engine2/interop.engine.cpp:487
// function calls: 2
void _Get__CAttachment_m_name(void* self)
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 489
} /* size: 26, inline expansions: 2 (34 bytes) */

// <0131E680> engine2/interop.engine.cpp:487
void _Get__CAttachment_m_name(void* self)
{
} /* size: 0 */

// <013589A9> engine2/interop.engine.cpp:491
// function call: 1
void _Set__CAttachment_m_name(void* self, const char* value)
{
	CUtlString::operator=(
			const char* src);  // 493
} /* size: 9, inline expansions: 1 (5 bytes) */

// <0131E65B> engine2/interop.engine.cpp:491
void _Set__CAttachment_m_name(void* self, const char* value)
{
} /* size: 0 */

// <0131E62E> engine2/interop.engine.cpp:495
void _Get__CAttachment_m_nInfluences(void* self)
{
} /* size: 12 */

// <0131E5F2> engine2/interop.engine.cpp:499
void _Set__CAttachment_m_nInfluences(void* self, unsigned char value)
{
} /* size: 12 */

// <0131E5C5> engine2/interop.engine.cpp:503
void _Get__CAttachment_m_bIgnoreRotation(void* self)
{
} /* size: 12 */

// <0131E589> engine2/interop.engine.cpp:507
void _Set__CAttachment_m_bIgnoreRotation(void* self, int value)
{
} /* size: 14 */

// <0131E537> engine2/interop.engine.cpp:511
void CAudioMixBuffer_Create(void)
{
} /* size: 35 */

// <01358C27> engine2/interop.engine.cpp:517
// function call: 1
void CAudioMixBuffer_Dispose(void* self)
{
	CAudioMixBuffer_Dispose(void* self); // 517
} /* size: 25, inline expansions: 1 (15 bytes) */

// <0131E51F> engine2/interop.engine.cpp:517
void CAudioMixBuffer_Dispose(void* self)
{
} /* size: 0 */

// <0131E4D8> engine2/interop.engine.cpp:523
// variable: 1
const void* CAudioMixBuffer_GetDataPointer(void* __self)
{
	CAudioMixBuffer* self; // 527
} /* size: 8, variables: 1 */

// <0131E45E> engine2/interop.engine.cpp:534
// function call: 1
void CAudioMixBuffer_Silence(void* self)
{
	CAudioMixBuffer::Silence(); // 537
} /* size: 9, inline expansions: 1 (5 bytes) */

// <0131E3E4> engine2/interop.engine.cpp:540
// function call: 1
void CAudioMixBuffer_AbsLevel(void* self)
{
	CAudioMixBuffer::AbsLevel(); // 543
} /* size: 9, inline expansions: 1 (5 bytes) */

// <0131E36A> engine2/interop.engine.cpp:546
// function call: 1
void CAudioMixBuffer_AvergeLevel(void* self)
{
	CAudioMixBuffer::AvergeLevel(); // 549
} /* size: 9, inline expansions: 1 (5 bytes) */

// <0131E293> engine2/interop.engine.cpp:552
// function call: 1
void CAudioMixBuffer_Ramp(void* self, float flStart, float flEnd)
{
	CAudioMixBuffer::Ramp(
		float flStart,
		float flEnd);  // 555
} /* size: 12, inline expansions: 1 (8 bytes) */

// <0131E15E> engine2/interop.engine.cpp:558
// function calls: 3
void CAudioMixBuffer_CopyFrom(void* self, CAudioMixBuffer* addThis)
{
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 289
	CAudioMixBuffer::CopyFrom(
		const CAudioMixBuffer* src);  // 561
} /* size: 14, inline expansions: 3 (30 bytes) */

// <0131E090> engine2/interop.engine.cpp:564
// function call: 1
void CAudioMixBuffer_Mix(void* self, CAudioMixBuffer* addThis, float flScale)
{
	CAudioMixBuffer::Mix(
		const CAudioMixBuffer* addThis,
		float flScale);  // 567
} /* size: 9, inline expansions: 1 (5 bytes) */

// <0131DF97> engine2/interop.engine.cpp:570
// function call: 1
void CAudioMixBuffer_MixRamp(void* self, CAudioMixBuffer* addThis, float flScaleStart, float flScaleEnd)
{
	CAudioMixBuffer::MixRamp(
		const CAudioMixBuffer* addThis,
		float flScaleStart,
		float flScaleEnd);  // 573
} /* size: 9, inline expansions: 1 (5 bytes) */

// <0131DF2F> engine2/interop.engine.cpp:576
void CdMxDvcBffrs_Create(int channels)
{
} /* size: 49 */

// <01358CA4> engine2/interop.engine.cpp:582
// function call: 1
void CdMxDvcBffrs_Destroy(void* self)
{
	CdMxDvcBffrs_Destroy(void* self); // 582
} /* size: 25, inline expansions: 1 (15 bytes) */

// <0131DF11> engine2/interop.engine.cpp:582
void CdMxDvcBffrs_Destroy(void* self)
{
} /* size: 0 */

// <0131DEA6> engine2/interop.engine.cpp:588
// variables: 2
void CdMxDvcBffrs_GetBuffer(void* __self, int __i)
{
	CAudioMixDeviceBuffers* self; // 592
	int i; // 593
} /* size: 16, variables: 2 */

// <0131DE61> engine2/interop.engine.cpp:600
void CAudioMixer_Dispose(void* self)
{
} /* size: 17 */

// <0131DE1C> engine2/interop.engine.cpp:606
void CAudioMixer_GetSamplePosition(void* self)
{
} /* size: 10 */

// <0131DDD7> engine2/interop.engine.cpp:612
void CAudioMixer_ShouldContinueMixing(void* self)
{
} /* size: 19 */

// <0131DD76> engine2/interop.engine.cpp:618
void CAudioMixer_SetSamplePosition(void* self, int position)
{
} /* size: 10 */

// <0131DD15> engine2/interop.engine.cpp:624
void CAudioMixer_SetSampleEnd(void* self, unsigned int nEndSample)
{
} /* size: 10 */

// <0131DCB4> engine2/interop.engine.cpp:630
void CAudioMixer_DelayOrSkipSamples(void* self, int nDelaySamples)
{
} /* size: 10 */

// <0131DC6F> engine2/interop.engine.cpp:636
void CAudioMixer_IsReadyToMix(void* self)
{
} /* size: 19 */

// <0131DC2A> engine2/interop.engine.cpp:642
void CAudioMixer_GetPositionForSave(void* self)
{
} /* size: 10 */

// <0131DBC9> engine2/interop.engine.cpp:648
void CAudioMixer_SetPositionFromSaved(void* self, int savedPosition)
{
} /* size: 10 */

// <0131DB68> engine2/interop.engine.cpp:654
void CAudioMixer_UpdateMixerState(void* self, audio_source_indexstate_t* state)
{
} /* size: 10 */

// <0131DB0E> engine2/interop.engine.cpp:660
// variable: 1
void CAudioMixer_GetIndexState(void* __self)
{
	CAudioMixer* self; // 664
} /* size: 23, variables: 1 */

// <0131DAC9> engine2/interop.engine.cpp:671
void CAudioMixer_GetSfxTable(void* self)
{
} /* size: 10 */

// <0131DA84> engine2/interop.engine.cpp:677
void CAudioMixer_GetSampleCount(void* self)
{
} /* size: 10 */

// <0131D9E0> engine2/interop.engine.cpp:683
// variable: 1
// function call: 1
void CAudioMixer_GetChannelCount(void* __self)
{
	CAudioMixer* self; // 687
	CAudioStreamManaged::ChannelCount(); // 691
} /* size: 86, variables: 1, inline expansions: 1 (3 bytes) */

// <0131D97D> engine2/interop.engine.cpp:695
void CAudioMixer_SetTimeScale(void* self, float flTimeScale)
{
} /* size: 19 */

// <0131D914> engine2/interop.engine.cpp:701
void CAudioMixer_EnableLooping(void* self, int bEnable)
{
} /* size: 23 */

// <0131D771> engine2/interop.engine.cpp:707
// variables: 2
// function call: 1
void CAudioMixer_ReadToBuffer(void* self, float pitch, CAudioMixDeviceBuffers* buffers)
{
	{
		int i; // 160
		{
			audio_source_input_t sourceInputDesc; // 163
		}
	}
	CAudioMixer::ReadToBuffer(
			float pitch,
			CAudioMixDeviceBuffers* buffers);  // 710
} /* size: 253, inline expansions: 1 (169 bytes) */

// <0131D72C> engine2/interop.engine.cpp:713
void CAudioProcessor_Dispose(void* self)
{
} /* size: 17 */

// <0131D63B> engine2/interop.engine.cpp:719
// function call: 1
void CAudioProcessor_Process(void* self, CAudioMixDeviceBuffers* pInput, CAudioMixDeviceBuffers* pOutput, int nChannelCount)
{
	CAudioProcessor::Process(
		CAudioMixDeviceBuffers* pInput,
		CAudioMixDeviceBuffers* pOutput,
		int nChannelCount);  // 722
} /* size: 10, inline expansions: 1 (6 bytes) */

// <0131D552> engine2/interop.engine.cpp:725
// function calls: 2
void CAudioProcessor_SetControlParameter(void* self, uint32 name, float flValue)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 728
} /* size: 19, inline expansions: 2 (0 bytes) */

// <0131D3CA> engine2/interop.engine.cpp:731
// function calls: 5
void CAudioProcessor_SetNameParameter(void* self, uint32 name, uint32 nNameValue)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 734
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 734
	CAudioProcessor::SetNameParameter(
			CUtlStringToken name,
			CUtlStringToken nNameValue);  // 734
} /* size: 19, inline expansions: 5 (6 bytes) */

// <0131D36C> engine2/interop.engine.cpp:737
// variable: 1
void CAudioProcessor_CreateDelay(int __channels)
{
	int channels; // 741
} /* size: 9, variables: 1 */

// <0131D30E> engine2/interop.engine.cpp:748
// variable: 1
void CAudioProcessor_CreatePitchShift(int __channels)
{
	int channels; // 752
} /* size: 9, variables: 1 */

// <0131D1C8> engine2/interop.engine.cpp:759
// function calls: 4
void CdStrmMngd_Create(int nChannels, unsigned int nSampleRate)
{
	Create(int nChannels,
		uint nSampleRate);  // 762
	CAudioStreamManaged::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CAudioStreamManaged*>(CAudioStreamManaged* c); // 762
} /* size: 120, inline expansions: 4 (71 bytes) */

// <0131D17F> engine2/interop.engine.cpp:765
void CdStrmMngd_Destroy(void* self)
{
} /* size: 9 */

// <0131D0E6> engine2/interop.engine.cpp:771
void CdStrmMngd_WriteAudioData(void* self, void* pData, unsigned int nSampleCount, unsigned int nChannels)
{
} /* size: 13 */

// <0131D0A1> engine2/interop.engine.cpp:777
void CdStrmMngd_QueuedSampleCount(void* self)
{
} /* size: 13 */

// <0131D05C> engine2/interop.engine.cpp:783
void CdStrmMngd_MaxWriteSampleCount(void* self)
{
} /* size: 13 */

// <0131D017> engine2/interop.engine.cpp:789
void CdStrmMngd_LatencySamplesCount(void* self)
{
} /* size: 13 */

// <0131CFD2> engine2/interop.engine.cpp:795
void CdStrmMngd_Pause(void* self)
{
} /* size: 13 */

// <0131CF8D> engine2/interop.engine.cpp:801
void CdStrmMngd_Resume(void* self)
{
} /* size: 13 */

// <0131CF48> engine2/interop.engine.cpp:807
void CdStrmMngd_Close(void* self)
{
} /* size: 13 */

// <0131CE63> engine2/interop.engine.cpp:813
// function calls: 3
void CdStrmMngd_GetName(void* self)
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 113
	CAudioStreamManaged::GetName(); // 816
} /* size: 71, inline expansions: 3 (54 bytes) */

// <0131CDFF> engine2/interop.engine.cpp:819
// function call: 1
void CdStrmMngd_GetSfxTable(void* self)
{
	CAudioStreamManaged::GetSfxTable(); // 822
} /* size: 34, inline expansions: 1 (4 bytes) */

// <0131CDB4> engine2/interop.engine.cpp:825
void CBinauralEffect_Create(void)
{
} /* size: 40 */

// <01358D9C> engine2/interop.engine.cpp:831
// function call: 1
void CBinauralEffect_Dispose(void* self)
{
	CBinauralEffect_Dispose(void* self); // 831
} /* size: 49, inline expansions: 1 (31 bytes) */

// <0131CD96> engine2/interop.engine.cpp:831
void CBinauralEffect_Dispose(void* self)
{
} /* size: 0 */

// <0131CCBE> engine2/interop.engine.cpp:837
void CBinauralEffect_Apply(void* self, Vector* localDirection, float spatialBlend, int useNearestInterpolation, CAudioMixDeviceBuffers* input, CAudioMixDeviceBuffers* output)
{
} /* size: 40 */

// <0131CB44> engine2/interop.engine.cpp:843
// function calls: 5
void CBldrMtrlGrp_AddMaterial(void* self, HMaterialStrong* hMat)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 15
	ResourceHandle_GetHandle(HMaterialStrong* target); // 846
} /* size: 70, inline expansions: 5 (27 bytes) */

// <0131CB2D> engine2/interop.engine.cpp:849
void _Get__CBldrMtrlGrp_m_name(void* self)
{
} /* size: 0 */

// <0131CB09> engine2/interop.engine.cpp:853
void _Set__CBldrMtrlGrp_m_name(void* self, const char* value)
{
} /* size: 0 */

// <0136B3A4> engine2/interop.engine.cpp:857
// function calls: 11
void CBldrMtrlGrprry_DeleteThis(void* self)
{
	CUtlMemory<CBuilderMaterialGroup, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBuilderMaterialGroup, int>::Purge(); // 903
	CUtlMemory<CBuilderMaterialGroup, int>::Purge(); // 1799
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::Purge(); // 560
	ValidateAlignment<CBuilderMaterialGroup>(void); // 508
	CUtlMemory<CBuilderMaterialGroup, int>::Purge(); // 510
	CUtlMemory<CBuilderMaterialGroup, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::~CUtlVector(); // 36
	CBuilderMaterialGroupArray::~CBuilderMaterialGroupArray(); // 860
	CBldrMtrlGrprry_DeleteThis(void* self); // 857
} /* size: 73, inline expansions: 11 (196 bytes) */

// <0131CABE> engine2/interop.engine.cpp:857
void CBldrMtrlGrprry_DeleteThis(void* self)
{
} /* size: 0 */

// <0131C4D4> engine2/interop.engine.cpp:863
// variable: 1
// function calls: 24
void CBldrMtrlGrprry_Create(int count)
{
	CUtlMemory<CBuilderMaterialGroup, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlString::CUtlString(); // 24
		CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::ValidateGrowSize(); // 475
		CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 530
		CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, i this); // 24
		CBuilderMaterialGroup::CBuilderMaterialGroup(); // 1479
		Construct<CBuilderMaterialGroup>(CBuilderMaterialGroup* pMemory); // 1453
		CUtlMemory<CBuilderMaterialGroup, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::Element(
			int i);  // 1453
	}
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::SetCount(
		int count);  // 42
	CUtlMemory<CBuilderMaterialGroup, int>::ValidateGrowSize(); // 475
	CUtlMemory<CBuilderMaterialGroup, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::CUtlVector(); // 41
	CBuilderMaterialGroupArray::CBuilderMaterialGroupArray(
					int count);  // 866
} /* size: 345, inline expansions: 14 (1579 bytes) */

// <0131C3FD> engine2/interop.engine.cpp:869
// function calls: 3
void CBldrMtrlGrprry_Get(void* self, int index)
{
	CUtlMemory<CBuilderMaterialGroup, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
			int i);  // 47
	CBuilderMaterialGroupArray::Get(
		int index);  // 872
} /* size: 20, inline expansions: 3 (45 bytes) */

// <01358E26> engine2/interop.engine.cpp:875
// function call: 1
void CCameraRenderer_DeleteThis(void* self)
{
	CCameraRenderer_DeleteThis(void* self); // 875
} /* size: 49, inline expansions: 1 (31 bytes) */

// <0131C3E5> engine2/interop.engine.cpp:875
void CCameraRenderer_DeleteThis(void* self)
{
} /* size: 0 */

// <0131C362> engine2/interop.engine.cpp:881
void CCameraRenderer_Create(const char* name, int cameraId)
{
} /* size: 62 */

// <0131C313> engine2/interop.engine.cpp:887
void CCameraRenderer_ClearSceneWorlds(void* self)
{
} /* size: 9 */

// <0131C2AE> engine2/interop.engine.cpp:893
void CCameraRenderer_AddSceneWorld(void* self, ISceneWorld* world)
{
} /* size: 9 */

// <0131C249> engine2/interop.engine.cpp:899
void CCameraRenderer_SetRenderAttributes(void* self, CRenderAttributes* attributes)
{
} /* size: 9 */

// <0131C1E4> engine2/interop.engine.cpp:905
void CCameraRenderer_Render(void* self, SwapChainHandle_t targetSwapChain)
{
} /* size: 9 */

// <0131C055> engine2/interop.engine.cpp:911
// function calls: 5
void CCameraRenderer_RenderToTexture(void* self, HRenderTextureStrong* hTexture, ISceneView* parentView)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 914
} /* size: 70, inline expansions: 5 (27 bytes) */

// <0131BEC6> engine2/interop.engine.cpp:917
// function calls: 5
void CCameraRenderer_RenderToCubeTexture(void* self, HRenderTextureStrong* hTexture, int nSlice)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 920
} /* size: 70, inline expansions: 5 (27 bytes) */

// <0131BE0D> engine2/interop.engine.cpp:923
void CCameraRenderer_RenderToBitmap(void* self, void* pixels, int width, int height, int bytesPerPixel)
{
} /* size: 9 */

// <0131BD4C> engine2/interop.engine.cpp:929
void CCameraRenderer_RenderStereo(void* self, int eye, int eyeWidth, int eyeHeight, int bSubmitThisEye)
{
} /* size: 20 */

// <0131BCCB> engine2/interop.engine.cpp:935
void CCameraRenderer_SubmitStereo(void* self, int eyeWidth, int eyeHeight)
{
} /* size: 9 */

// <0131BC4A> engine2/interop.engine.cpp:941
void CCameraRenderer_BlitStereo(void* self, int eyeWidth, int eyeHeight)
{
} /* size: 9 */

// <0131BC01> engine2/interop.engine.cpp:947
void CCameraRenderer_ClearRenderTags(void* self)
{
} /* size: 9 */

// <0131BBB8> engine2/interop.engine.cpp:953
void CCameraRenderer_ClearExcludeTags(void* self)
{
} /* size: 9 */

// <0131BB53> engine2/interop.engine.cpp:959
void CCameraRenderer_AddRenderTag(void* self, unsigned int hash)
{
} /* size: 9 */

// <0131BAEE> engine2/interop.engine.cpp:965
void CCameraRenderer_AddExcludeTag(void* self, unsigned int hash)
{
} /* size: 9 */

// <0131BAC1> engine2/interop.engine.cpp:971
void _Get__CCameraRenderer_ViewUniqueId(void* self)
{
} /* size: 8 */

// <0131BA85> engine2/interop.engine.cpp:975
void _Set__CCameraRenderer_ViewUniqueId(void* self, int value)
{
} /* size: 8 */

// <0131BA57> engine2/interop.engine.cpp:979
void _Get__CCameraRenderer_CameraPosition(void* self)
{
} /* size: 26 */

// <0131B9DD> engine2/interop.engine.cpp:983
// function call: 1
void _Set__CCameraRenderer_CameraPosition(void* self, Vector* value)
{
	Vector::operator=(
			const Vector& vOther);  // 985
} /* size: 34, inline expansions: 1 (29 bytes) */

// <0131B9AF> engine2/interop.engine.cpp:987
void _Get__CCameraRenderer_CameraRotation(void* self)
{
} /* size: 26 */

// <0131B935> engine2/interop.engine.cpp:991
// function call: 1
void _Set__CCameraRenderer_CameraRotation(void* self, QAngle* value)
{
	QAngle::operator=(
			const QAngle& vOther);  // 993
} /* size: 34, inline expansions: 1 (29 bytes) */

// <0131B908> engine2/interop.engine.cpp:995
void _Get__CCameraRenderer_FieldOfView(void* self)
{
} /* size: 10 */

// <0131B8CC> engine2/interop.engine.cpp:999
void _Set__CCameraRenderer_FieldOfView(void* self, float value)
{
} /* size: 10 */

// <0131B89F> engine2/interop.engine.cpp:1003
void _Get__CCameraRenderer_ZNear(void* self)
{
} /* size: 10 */

// <0131B863> engine2/interop.engine.cpp:1007
void _Set__CCameraRenderer_ZNear(void* self, float value)
{
} /* size: 10 */

// <0131B836> engine2/interop.engine.cpp:1011
void _Get__CCameraRenderer_ZFar(void* self)
{
} /* size: 10 */

// <0131B7FA> engine2/interop.engine.cpp:1015
void _Set__CCameraRenderer_ZFar(void* self, float value)
{
} /* size: 10 */

// <0131B7CD> engine2/interop.engine.cpp:1019
void _Get__CCameraRenderer_Rect(void* self)
{
} /* size: 13 */

// <0131B791> engine2/interop.engine.cpp:1023
void _Set__CCameraRenderer_Rect(void* self, Rect_t* value)
{
} /* size: 13 */

// <0131B732> engine2/interop.engine.cpp:1027
// function call: 1
void _Get__CCameraRenderer_Viewport(void* self)
{
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 1029
} /* size: 24, inline expansions: 1 (16 bytes) */

// <0131B6B8> engine2/interop.engine.cpp:1031
// function call: 1
void _Set__CCameraRenderer_Viewport(void* self, Vector4D* value)
{
	Vector4D::operator=(
			const Vector4D& vOther);  // 1033
} /* size: 44, inline expansions: 1 (39 bytes) */

// <0131B659> engine2/interop.engine.cpp:1035
// function call: 1
void _Get__CCameraRenderer_ClipSpaceBounds(void* self)
{
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 1037
} /* size: 24, inline expansions: 1 (16 bytes) */

// <0131B5DF> engine2/interop.engine.cpp:1039
// function call: 1
void _Set__CCameraRenderer_ClipSpaceBounds(void* self, Vector4D* value)
{
	Vector4D::operator=(
			const Vector4D& vOther);  // 1041
} /* size: 44, inline expansions: 1 (39 bytes) */

// <0131B5B2> engine2/interop.engine.cpp:1043
void _Get__CCameraRenderer_EnablePostprocessing(void* self)
{
} /* size: 12 */

// <0131B576> engine2/interop.engine.cpp:1047
void _Set__CCameraRenderer_EnablePostprocessing(void* self, int value)
{
} /* size: 14 */

// <0131B549> engine2/interop.engine.cpp:1051
void _Get__CCameraRenderer_EnableEngineOverlays(void* self)
{
} /* size: 12 */

// <0131B50D> engine2/interop.engine.cpp:1055
void _Set__CCameraRenderer_EnableEngineOverlays(void* self, int value)
{
} /* size: 14 */

// <0131B4E0> engine2/interop.engine.cpp:1059
void _Get__CCameraRenderer_Ortho(void* self)
{
} /* size: 9 */

// <0131B4A4> engine2/interop.engine.cpp:1063
void _Set__CCameraRenderer_Ortho(void* self, int value)
{
} /* size: 11 */

// <0131B477> engine2/interop.engine.cpp:1067
void _Get__CCameraRenderer_OrthoSize(void* self)
{
} /* size: 13 */

// <0131B43B> engine2/interop.engine.cpp:1071
void _Set__CCameraRenderer_OrthoSize(void* self, float value)
{
} /* size: 13 */

// <0131B40E> engine2/interop.engine.cpp:1075
void _Get__CCameraRenderer_NeedTonemapRenderer(void* self)
{
} /* size: 12 */

// <0131B3D2> engine2/interop.engine.cpp:1079
void _Set__CCameraRenderer_NeedTonemapRenderer(void* self, int value)
{
} /* size: 14 */

// <0131B3A5> engine2/interop.engine.cpp:1083
void _Get__CCameraRenderer_SceneViewFlags(void* self)
{
} /* size: 11 */

// <0131B369> engine2/interop.engine.cpp:1087
void _Set__CCameraRenderer_SceneViewFlags(void* self, int64 value)
{
} /* size: 11 */

// <0131B33C> engine2/interop.engine.cpp:1091
void _Get__CCameraRenderer_IsRenderingStereo(void* self)
{
} /* size: 12 */

// <0131B300> engine2/interop.engine.cpp:1095
void _Set__CCameraRenderer_IsRenderingStereo(void* self, int value)
{
} /* size: 14 */

// <0131B2D2> engine2/interop.engine.cpp:1099
void _Get__CCameraRenderer_MiddleEyePosition(void* self)
{
} /* size: 32 */

// <0131B258> engine2/interop.engine.cpp:1103
// function call: 1
void _Set__CCameraRenderer_MiddleEyePosition(void* self, Vector* value)
{
	Vector::operator=(
			const Vector& vOther);  // 1105
} /* size: 43, inline expansions: 1 (38 bytes) */

// <0131B22A> engine2/interop.engine.cpp:1107
void _Get__CCameraRenderer_MiddleEyeRotation(void* self)
{
} /* size: 32 */

// <0131B1B0> engine2/interop.engine.cpp:1111
// function call: 1
void _Set__CCameraRenderer_MiddleEyeRotation(void* self, QAngle* value)
{
	QAngle::operator=(
			const QAngle& vOther);  // 1113
} /* size: 43, inline expansions: 1 (38 bytes) */

// <0131B183> engine2/interop.engine.cpp:1115
void _Get__CCameraRenderer_OverrideProjection(void* self)
{
} /* size: 95 */

// <0131B11B> engine2/interop.engine.cpp:1119
void _Set__CCameraRenderer_OverrideProjection(void* self, VMatrix* value)
{
} /* size: 16 */

// <0131B0EE> engine2/interop.engine.cpp:1123
void _Get__CCameraRenderer_HasOverrideProjection(void* self)
{
} /* size: 12 */

// <0131B0B2> engine2/interop.engine.cpp:1127
void _Set__CCameraRenderer_HasOverrideProjection(void* self, int value)
{
} /* size: 14 */

// <0131B085> engine2/interop.engine.cpp:1131
void _Get__CCameraRenderer_FlipX(void* self)
{
} /* size: 12 */

// <0131B049> engine2/interop.engine.cpp:1135
void _Set__CCameraRenderer_FlipX(void* self, int value)
{
} /* size: 14 */

// <0131B01C> engine2/interop.engine.cpp:1139
void _Get__CCameraRenderer_FlipY(void* self)
{
} /* size: 12 */

// <0131AFE0> engine2/interop.engine.cpp:1143
void _Set__CCameraRenderer_FlipY(void* self, int value)
{
} /* size: 14 */

// <0131AF77> engine2/interop.engine.cpp:1147
void* From_CSceneObject_To_CDecalSceneObject(CSceneObject* ptr)
{
} /* size: 35 */

// <01356EBE> engine2/interop.engine.cpp:1148
void* To_CSceneObject_From_CDecalSceneObject(CDecalSceneObject* ptr)
{
} /* size: 8 */

// <01361C27> engine2/interop.engine.cpp:1150
// function calls: 4
void CDclScnbjct_ChangeFlags(void* self, int64 nNewFlags, int64 nNewFlagsMask)
{
	operator~(ESceneObjectFlags a); // 1934
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1934
	CSceneObject::ChangeFlags(
			ESceneObjectFlags nNewFlags,
			ESceneObjectFlags nNewFlagsMask);  // 1153
} /* size: 65, inline expansions: 4 (145 bytes) */

// <0131AF28> engine2/interop.engine.cpp:1150
void CDclScnbjct_ChangeFlags(void* self, int64 nNewFlags, int64 nNewFlagsMask)
{
} /* size: 0 */

// <01360F01> engine2/interop.engine.cpp:1156
// function calls: 3
void CDclScnbjct_SetFlags(void* self, int64 nFlagsToOR)
{
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1159
} /* size: 65, inline expansions: 3 (148 bytes) */

// <0131AF03> engine2/interop.engine.cpp:1156
void CDclScnbjct_SetFlags(void* self, int64 nFlagsToOR)
{
} /* size: 0 */

// <01356EE7> engine2/interop.engine.cpp:1162
// function call: 1
void CDclScnbjct_HasFlags(void* self, int64 nFlags)
{
	CSceneObject::HasFlags(
		ESceneObjectFlags nFlags);  // 1165
} /* size: 17, inline expansions: 1 (0 bytes) */

// <0131AEDE> engine2/interop.engine.cpp:1162
void CDclScnbjct_HasFlags(void* self, int64 nFlags)
{
} /* size: 0 */

// <01356F5B> engine2/interop.engine.cpp:1168
// function call: 1
void CDclScnbjct_GetFlags(void* self)
{
	CSceneObject::GetFlags(); // 1171
} /* size: 12, inline expansions: 1 (0 bytes) */

// <0131AEC6> engine2/interop.engine.cpp:1168
void CDclScnbjct_GetFlags(void* self)
{
} /* size: 0 */

// <01356FB5> engine2/interop.engine.cpp:1174
// function call: 1
void CDclScnbjct_GetOriginalFlags(void* self)
{
	CSceneObject::GetOriginalFlags(); // 1177
} /* size: 12, inline expansions: 1 (0 bytes) */

// <0131AEAE> engine2/interop.engine.cpp:1174
void CDclScnbjct_GetOriginalFlags(void* self)
{
} /* size: 0 */

// <01361AC9> engine2/interop.engine.cpp:1180
// function calls: 5
void CDclScnbjct_ClearFlags(void* self, int64 nFlagsToClear)
{
	operator~(ESceneObjectFlags a); // 1934
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1934
	CSceneObject::ChangeFlags(
			ESceneObjectFlags nNewFlags,
			ESceneObjectFlags nNewFlagsMask);  // 1951
	CSceneObject::ClearFlags(
			ESceneObjectFlags nFlagsToClear);  // 1183
} /* size: 65, inline expansions: 5 (208 bytes) */

// <0131AE89> engine2/interop.engine.cpp:1180
void CDclScnbjct_ClearFlags(void* self, int64 nFlagsToClear)
{
} /* size: 0 */

// <0135700F> engine2/interop.engine.cpp:1186
// function call: 1
void CDclScnbjct_SetCullDistance(void* self, float dist)
{
	CSceneObject::SetCullDistance(
			float flDistance);  // 1189
} /* size: 14, inline expansions: 1 (9 bytes) */

// <0131AE64> engine2/interop.engine.cpp:1186
void CDclScnbjct_SetCullDistance(void* self, float dist)
{
} /* size: 0 */

// <0135AB57> engine2/interop.engine.cpp:1192
// function calls: 2
void CDclScnbjct_EnableLightingCache(void* self)
{
	CSceneObject::EnableLightingCache(); // 2297
	CSceneObject::EnableLightingCache(); // 1195
} /* size: 44, inline expansions: 2 (63 bytes) */

// <0131AE4C> engine2/interop.engine.cpp:1192
void CDclScnbjct_EnableLightingCache(void* self)
{
} /* size: 0 */

// <0135FD1A> engine2/interop.engine.cpp:1198
// function calls: 4
void CDclScnbjct_SetLightingOrigin(void* self, Vector* vPos, int worldspace)
{
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 2335
	Vector::operator=(
			const Vector& vOther);  // 2337
	CSceneObject::SetLightingOrigin(
				const Vector& v,
				bool bWorldSpace);  // 1201
} /* size: 139, inline expansions: 4 (225 bytes) */

// <0131AE1A> engine2/interop.engine.cpp:1198
void CDclScnbjct_SetLightingOrigin(void* self, Vector* vPos, int worldspace)
{
} /* size: 0 */

// <013661D7> engine2/interop.engine.cpp:1204
void CDclScnbjct_GetLightingOrigin(void* self)
{
} /* size: 9 */

// <0135C3D6> engine2/interop.engine.cpp:1210
// function calls: 2
void CDclScnbjct_HasLightingOrigin(void* self)
{
	Vector::operator!=(
			const Vector& src);  // 2370
	CSceneObject::HasLightingOrigin(); // 1213
} /* size: 99, inline expansions: 2 (139 bytes) */

// <0131ADEA> engine2/interop.engine.cpp:1210
void CDclScnbjct_HasLightingOrigin(void* self)
{
} /* size: 0 */

// <0135BC44> engine2/interop.engine.cpp:1216
// function calls: 3
void CDclScnbjct_SetTintRGBA(void* self, Vector4D* color)
{
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 2375
	CSceneObject::SetAlphaFade(
			float fAlpha);  // 440
	CSceneObject::SetTintRGBA(
			const Vector4D& vTint);  // 1219
} /* size: 100, inline expansions: 3 (168 bytes) */

// <0131ADC5> engine2/interop.engine.cpp:1216
void CDclScnbjct_SetTintRGBA(void* self, Vector4D* color)
{
} /* size: 0 */

// <01357083> engine2/interop.engine.cpp:1222
// function calls: 3
void CDclScnbjct_GetTintRGBA(void* self)
{
	CSceneObject::GetAlphaFade(); // 445
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 445
	CSceneObject::GetTintRGBA(); // 1225
} /* size: 82, inline expansions: 3 (92 bytes) */

// <0131ADAD> engine2/interop.engine.cpp:1222
void CDclScnbjct_GetTintRGBA(void* self)
{
} /* size: 0 */

// <0135715F> engine2/interop.engine.cpp:1228
// function calls: 2
void CDclScnbjct_SetAlphaFade(void* self, float nAlpha)
{
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 2375
	CSceneObject::SetAlphaFade(
			float fAlpha);  // 1231
} /* size: 47, inline expansions: 2 (73 bytes) */

// <0131AD88> engine2/interop.engine.cpp:1228
void CDclScnbjct_SetAlphaFade(void* self, float nAlpha)
{
} /* size: 0 */

// <0135720E> engine2/interop.engine.cpp:1234
// function call: 1
void CDclScnbjct_GetAlphaFade(void* self)
{
	CSceneObject::GetAlphaFade(); // 1237
} /* size: 10, inline expansions: 1 (0 bytes) */

// <0131AD70> engine2/interop.engine.cpp:1234
void CDclScnbjct_GetAlphaFade(void* self)
{
} /* size: 0 */

// <0135A052> engine2/interop.engine.cpp:1240
// function calls: 6
void CDclScnbjct_SetMaterialOverrideForMeshInstances(void* self, HMaterialStrong* mat)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 15
	ResourceHandle_GetHandle(HMaterialStrong* target); // 1243
	CSceneObject::SetMaterialOverrideForMeshInstances(
						HMaterial hMaterial);  // 1243
} /* size: 94, inline expansions: 6 (11 bytes) */

// <0131AD4B> engine2/interop.engine.cpp:1240
void CDclScnbjct_SetMaterialOverrideForMeshInstances(void* self, HMaterialStrong* mat)
{
} /* size: 0 */

// <0136A814> engine2/interop.engine.cpp:1246
// variable: 1
// function calls: 18
void CDclScnbjct_ClearMaterialOverrideList(void* self)
{
	Count(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemo this); // 1720
	{
		int i; // 1721
		CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::~CStrongHandleCopyable(); // 167
		CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >::~CSceneObjectStateOverideEntry(); // 1526
		Destruct<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> > >(CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this); // 1798
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::ConvertToExternalMemory(
				CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >,  this,
				CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >,  this,
				CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	Base(const AlignedByteArrayExplicit_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, this); // 237
	Purge(const CUtlMemoryFixedGrowable<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 1, in this,
		int numElements);  // 1799
	ResetDbgInfo(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this); // 1800
	Purge(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this); // 1722
	CSceneObject::UpdateFlagsBasedOnMaterial(); // 1723
	CSceneObject::ClearMaterialOverrideList(); // 1249
} /* size: 262, inline expansions: 12 (903 bytes) */

// <0131AD33> engine2/interop.engine.cpp:1246
void CDclScnbjct_ClearMaterialOverrideList(void* self)
{
} /* size: 0 */

// <0135A1EC> engine2/interop.engine.cpp:1252
// function calls: 10
void CDclScnbjct_SetMaterialOverride(void* self, HMaterialStrong* hMaterial, uint32 nAttr, int nAttrValueMatch)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 15
	ResourceHandle_GetHandle(HMaterialStrong* target); // 1255
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 1255
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 512
	CSceneObject::SetMaterialOverride(
				HMaterial hMaterial,
				CUtlStringToken nAttr,
				int nAttrValueMatch);  // 1255
} /* size: 97, inline expansions: 10 (52 bytes) */

// <0131ACF4> engine2/interop.engine.cpp:1252
void CDclScnbjct_SetMaterialOverride(void* self, HMaterialStrong* hMaterial, uint32 nAttr, int nAttrValueMatch)
{
} /* size: 0 */

// <01357268> engine2/interop.engine.cpp:1258
// function call: 1
void CDclScnbjct_IsLoaded(void* self)
{
	CSceneObject::IsLoaded(); // 1261
} /* size: 18, inline expansions: 1 (0 bytes) */

// <0131ACDC> engine2/interop.engine.cpp:1258
void CDclScnbjct_IsLoaded(void* self)
{
} /* size: 0 */

// <013572C2> engine2/interop.engine.cpp:1264
// function call: 1
void CDclScnbjct_IsRenderingEnabled(void* self)
{
	CSceneObject::IsRenderingEnabled(); // 1267
} /* size: 21, inline expansions: 1 (0 bytes) */

// <0131ACC4> engine2/interop.engine.cpp:1264
void CDclScnbjct_IsRenderingEnabled(void* self)
{
} /* size: 0 */

// <01360FFD> engine2/interop.engine.cpp:1270
// function calls: 4
void CDclScnbjct_SetLoaded(void* self)
{
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 1273
} /* size: 65, inline expansions: 4 (198 bytes) */

// <0131ACAC> engine2/interop.engine.cpp:1270
void CDclScnbjct_SetLoaded(void* self)
{
} /* size: 0 */

// <0136111E> engine2/interop.engine.cpp:1276
// function calls: 5
void CDclScnbjct_ClearLoaded(void* self)
{
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1934
	CSceneObject::ChangeFlags(
			ESceneObjectFlags nNewFlags,
			ESceneObjectFlags nNewFlagsMask);  // 1951
	CSceneObject::ClearFlags(
			ESceneObjectFlags nFlagsToClear);  // 1971
	CSceneObject::ClearLoaded(); // 1279
} /* size: 65, inline expansions: 5 (267 bytes) */

// <0131AC94> engine2/interop.engine.cpp:1276
void CDclScnbjct_ClearLoaded(void* self)
{
} /* size: 0 */

// <01361285> engine2/interop.engine.cpp:1282
// function calls: 3
void CDclScnbjct_DisableRendering(void* self)
{
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1976
	CSceneObject::DisableRendering(); // 1285
} /* size: 65, inline expansions: 3 (138 bytes) */

// <0131AC7C> engine2/interop.engine.cpp:1282
void CDclScnbjct_DisableRendering(void* self)
{
} /* size: 0 */

// <01361367> engine2/interop.engine.cpp:1288
// function calls: 3
void CDclScnbjct_EnableRendering(void* self)
{
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1981
	CSceneObject::EnableRendering(); // 1291
} /* size: 65, inline expansions: 3 (147 bytes) */

// <0131AC64> engine2/interop.engine.cpp:1288
void CDclScnbjct_EnableRendering(void* self)
{
} /* size: 0 */

// <01361D66> engine2/interop.engine.cpp:1294
// function calls: 3
void CDclScnbjct_SetRenderingEnabled(void* self, int bEnabled)
{
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1988
	CSceneObject::SetRenderingEnabled(
				bool bEnabled);  // 1297
} /* size: 75, inline expansions: 3 (155 bytes) */

// <0131AC3F> engine2/interop.engine.cpp:1294
void CDclScnbjct_SetRenderingEnabled(void* self, int bEnabled)
{
} /* size: 0 */

// <0135FE41> engine2/interop.engine.cpp:1300
// function calls: 13
void CDclScnbjct_GetBoundingSphereRadius(void* self)
{
	CSceneObject::GetBounds(
			Vector& vecWorldMins,
			Vector& vecWorldMaxes);  // 2026
	Vector::Vector(); // 2024
	Vector::Vector(); // 2025
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2027
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2027
	CSceneObject::GetBoundingSphereRadius(); // 1303
} /* size: 147, inline expansions: 13 (272 bytes) */

// <0131AC27> engine2/interop.engine.cpp:1300
void CDclScnbjct_GetBoundingSphereRadius(void* self)
{
} /* size: 0 */

// <01365EA2> engine2/interop.engine.cpp:1306
// function calls: 11
void CDclScnbjct_SetTransform(void* self, CTransformUnaligned* tx)
{
	matrix3x4_t::matrix3x4_t(); // 248
	CTransformUnaligned::ToMatrix(); // 2105
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 2082
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 2090
	CSceneObject::SetTransform(
			const matrix3x4_t& mTransform);  // 2105
	CSceneObject::SetTransform(
			const CTransformUnaligned& transform);  // 1309
} /* size: 257, inline expansions: 11 (540 bytes) */

// <0131AC03> engine2/interop.engine.cpp:1306
void CDclScnbjct_SetTransform(void* self, CTransformUnaligned* tx)
{
} /* size: 0 */

// <0131A6A5> engine2/interop.engine.cpp:1312
// function calls: 21
void CDclScnbjct_GetCTransform(void* self)
{
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	matrix3x4_t::ToCTransform(); // 2120
	CSceneObject::GetCTransform(); // 1315
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 127
	CTransform::GetScale(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 127
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 127
	CTransformUnaligned::CTransformUnaligned(
				const CTransform& transform);  // 1315
} /* size: 203, inline expansions: 21 (386 bytes) */

// <0135F418> engine2/interop.engine.cpp:1318
// function calls: 2
void CDclScnbjct_SetBounds(void* self, AABB_t* box)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 625
	CSceneObject::SetBounds(
			const AABB_t& bounds);  // 1321
} /* size: 33, inline expansions: 2 (48 bytes) */

// <0131A680> engine2/interop.engine.cpp:1318
void CDclScnbjct_SetBounds(void* self, AABB_t* box)
{
} /* size: 0 */

// <0135BB01> engine2/interop.engine.cpp:1324
// function calls: 5
void CDclScnbjct_GetBounds(void* self)
{
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 637
	CSceneObject::GetBounds(
			AABB_t& bounds);  // 638
	CSceneObject::GetBounds(); // 1327
} /* size: 51, inline expansions: 5 (52 bytes) */

// <0135731C> engine2/interop.engine.cpp:1330
// function call: 1
void CDclScnbjct_SetBoundsInfinite(void* self)
{
	CSceneObject::SetBoundsInfinite(); // 1333
} /* size: 26, inline expansions: 1 (22 bytes) */

// <0131A650> engine2/interop.engine.cpp:1330
void CDclScnbjct_SetBoundsInfinite(void* self)
{
} /* size: 0 */

// <0135F4E7> engine2/interop.engine.cpp:1336
// function calls: 4
void CDclScnbjct_GetParent(void* self)
{
	CSceneObject::GetParent(); // 1339
	CSceneObject::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CSceneObject*>(CSceneObject* c); // 1339
} /* size: 86, inline expansions: 4 (69 bytes) */

// <0131A638> engine2/interop.engine.cpp:1336
void CDclScnbjct_GetParent(void* self)
{
} /* size: 0 */

// <0135738E> engine2/interop.engine.cpp:1342
// function calls: 3
void CDclScnbjct_AddChildObject(void* self, uint32 nId, CSceneObject* pChild, unsigned int nChildUpdateFlags)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 1345
	CSceneObject::AddChildObject(
			CUtlStringToken nId,
			CSceneObject* pChild,
			uint32 nChildUpdateFlags);  // 1345
} /* size: 40, inline expansions: 3 (30 bytes) */

// <0131A5F9> engine2/interop.engine.cpp:1342
void CDclScnbjct_AddChildObject(void* self, uint32 nId, CSceneObject* pChild, unsigned int nChildUpdateFlags)
{
} /* size: 0 */

// <013574B9> engine2/interop.engine.cpp:1348
// function call: 1
void CDclScnbjct_RemoveChild(void* self, CSceneObject* obj)
{
	CSceneObject::RemoveChild(
			CSceneObject* pChild);  // 1351
} /* size: 29, inline expansions: 1 (22 bytes) */

// <0131A5D4> engine2/interop.engine.cpp:1348
void CDclScnbjct_RemoveChild(void* self, CSceneObject* obj)
{
} /* size: 0 */

// <0131A4FB> engine2/interop.engine.cpp:1354
// function calls: 4
void CDclScnbjct_GetAttributesPtrForModify(void* self)
{
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 1063
	CSceneObject::GetAttributesForModify(); // 1035
	CSceneObject::GetAttributesPtrForModify(); // 1357
} /* size: 63, inline expansions: 4 (147 bytes) */

// <01360BCB> engine2/interop.engine.cpp:1360
// function calls: 7
void CDclScnbjct_EnableMeshGroups(void* self, uint64 nMask)
{
	CSceneObject::GetCurrentMeshGroupMask(); // 2204
	CSceneObject::GetCurrentMeshGroupMask(); // 2165
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 2198
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 2177
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 2167
	CSceneObject::EnableMeshGroups(
			MeshGroupMask_t nMask);  // 1363
} /* size: 174, inline expansions: 7 (433 bytes) */

// <0131A4D6> engine2/interop.engine.cpp:1360
void CDclScnbjct_EnableMeshGroups(void* self, uint64 nMask)
{
} /* size: 0 */

// <01360D66> engine2/interop.engine.cpp:1366
// function calls: 7
void CDclScnbjct_DisableMeshGroups(void* self, uint64 nMask)
{
	CSceneObject::GetCurrentMeshGroupMask(); // 2204
	CSceneObject::GetCurrentMeshGroupMask(); // 2172
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 2198
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 2177
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 2174
	CSceneObject::DisableMeshGroups(
				MeshGroupMask_t nMask);  // 1369
} /* size: 174, inline expansions: 7 (433 bytes) */

// <0131A4B1> engine2/interop.engine.cpp:1366
void CDclScnbjct_DisableMeshGroups(void* self, uint64 nMask)
{
} /* size: 0 */

// <01360477> engine2/interop.engine.cpp:1372
// function calls: 4
void CDclScnbjct_ResetMeshGroups(void* self, uint64 nMask)
{
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 2198
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 2177
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 1375
} /* size: 155, inline expansions: 4 (282 bytes) */

// <0131A48C> engine2/interop.engine.cpp:1372
void CDclScnbjct_ResetMeshGroups(void* self, uint64 nMask)
{
} /* size: 0 */

// <01359FE7> engine2/interop.engine.cpp:1378
// function calls: 2
void CDclScnbjct_GetCurrentMeshGroupMask(void* self)
{
	CSceneObject::GetCurrentMeshGroupMask(); // 2204
	CSceneObject::GetCurrentMeshGroupMask(); // 1381
} /* size: 41, inline expansions: 2 (50 bytes) */

// <0131A474> engine2/interop.engine.cpp:1378
void CDclScnbjct_GetCurrentMeshGroupMask(void* self)
{
} /* size: 0 */

// <0135F03F> engine2/interop.engine.cpp:1384
// function calls: 3
void CDclScnbjct_GetWorld(void* self)
{
	CSceneObject::GetWorld(); // 1387
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<ISceneWorld*>(ISceneWorld* c); // 1387
} /* size: 39, inline expansions: 3 (30 bytes) */

// <0131A45C> engine2/interop.engine.cpp:1384
void CDclScnbjct_GetWorld(void* self)
{
} /* size: 0 */

// <01360100> engine2/interop.engine.cpp:1390
// function calls: 5
void CDclScnbjct_SetLOD(void* self, int nLOD)
{
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 2230
	CSceneObject::DisableLOD(); // 2225
	CSceneObject::SetLOD(
		int nLOD);  // 2221
	CSceneObject::SetLOD(
		int nLOD);  // 1393
} /* size: 120, inline expansions: 5 (224 bytes) */

// <0131A437> engine2/interop.engine.cpp:1390
void CDclScnbjct_SetLOD(void* self, int nLOD)
{
} /* size: 0 */

// <01357540> engine2/interop.engine.cpp:1396
// function call: 1
void CDclScnbjct_DisableLOD(void* self)
{
	CSceneObject::DisableLOD(); // 1399
} /* size: 21, inline expansions: 1 (16 bytes) */

// <0131A41F> engine2/interop.engine.cpp:1396
void CDclScnbjct_DisableLOD(void* self)
{
} /* size: 0 */

// <0135759A> engine2/interop.engine.cpp:1402
// function call: 1
void CDclScnbjct_GetCurrentLODGroupMask(void* self)
{
	CSceneObject::GetCurrentLODGroupMask(); // 1405
} /* size: 57, inline expansions: 1 (26 bytes) */

// <0131A407> engine2/interop.engine.cpp:1402
void CDclScnbjct_GetCurrentLODGroupMask(void* self)
{
} /* size: 0 */

// <013575E8> engine2/interop.engine.cpp:1408
// function call: 1
void CDclScnbjct_GetCurrentLODLevel(void* self)
{
	CSceneObject::GetCurrentLODLevel(); // 1411
} /* size: 30, inline expansions: 1 (25 bytes) */

// <0131A3EF> engine2/interop.engine.cpp:1408
void CDclScnbjct_GetCurrentLODLevel(void* self)
{
} /* size: 0 */

// <0131A22B> engine2/interop.engine.cpp:1414
// function calls: 6
void CDclScnbjct_GetModelHandle(void* self)
{
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 266
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			ResourceHandleTyped_t hResource);  // 1077
	CSceneObject::GetModelHandle(); // 1417
	CWeakHandle<InfoForResourceTypeCModel>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCModel>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 1417
} /* size: 127, inline expansions: 6 (81 bytes) */

// <0135A5EE> engine2/interop.engine.cpp:1420
// function calls: 3
void CDclScnbjct_SetMaterialGroup(void* self, uint32 token)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 1423
	CSceneObject::SetMaterialGroup(
			CUtlStringToken token);  // 1423
} /* size: 33, inline expansions: 3 (28 bytes) */

// <0131A206> engine2/interop.engine.cpp:1420
void CDclScnbjct_SetMaterialGroup(void* self, uint32 token)
{
} /* size: 0 */

// <013628B1> engine2/interop.engine.cpp:1426
// function calls: 11
void CDclScnbjct_SetBodyGroup(void* self, uint32 token, int value)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 1429
	CStrongHandle<InfoForResourceTypeCModel>::GetData(); // 101
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetModelData(); // 1007
	CSceneObject::GetCurrentMeshGroupMask(); // 2204
	CSceneObject::GetCurrentMeshGroupMask(); // 1012
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 2198
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 2177
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 1029
	CSceneObject::SetBodyGroup(
			CUtlStringToken token,
			int iValue);  // 1429
} /* size: 348, inline expansions: 11 (611 bytes) */

// <0131A1D4> engine2/interop.engine.cpp:1426
void CDclScnbjct_SetBodyGroup(void* self, uint32 token, int value)
{
} /* size: 0 */

// <0135959C> engine2/interop.engine.cpp:1432
// function calls: 3
void CDclScnbjct_SetBatchable(void* self, int bIsBatchable)
{
	CSceneObject::SetBatchable(
			bool bIsBatchable);  // 1435
	CSceneObject::SetBatchable(
			bool bIsBatchable);  // 1435
	CDclScnbjct_SetBatchable(void* self,
				int bIsBatchable);  // 1432
} /* size: 26, inline expansions: 3 (42 bytes) */

// <0131A1AF> engine2/interop.engine.cpp:1432
void CDclScnbjct_SetBatchable(void* self, int bIsBatchable)
{
} /* size: 0 */

// <01357642> engine2/interop.engine.cpp:1438
// function call: 1
void CDclScnbjct_IsNotBatchable(void* self)
{
	CSceneObject::IsNotBatchable(); // 1441
} /* size: 15, inline expansions: 1 (0 bytes) */

// <0131A197> engine2/interop.engine.cpp:1438
void CDclScnbjct_IsNotBatchable(void* self)
{
} /* size: 0 */

// <01359658> engine2/interop.engine.cpp:1444
// function calls: 3
void CDclScnbjct_SetUniqueBatchGroup(void* self, int bUnique)
{
	CSceneObject::SetUniqueBatchGroup(
				bool bUnique);  // 1447
	CSceneObject::SetUniqueBatchGroup(
				bool bUnique);  // 1447
	CDclScnbjct_SetUniqueBatchGroup(void* self,
					int bUnique);  // 1444
} /* size: 26, inline expansions: 3 (42 bytes) */

// <0131A172> engine2/interop.engine.cpp:1444
void CDclScnbjct_SetUniqueBatchGroup(void* self, int bUnique)
{
} /* size: 0 */

// <01319E3E> engine2/interop.engine.cpp:1450
// variable: 1
// function calls: 14
void CDclScnbjct_RemoveTag(void* self, unsigned int tag)
{
	{
		int i; // 1531
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Count(); // 1531
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 609
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Element(
			int i);  // 1533
	}
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Find(
		const unsigned int& src);  // 1617
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Element(
		int i);  // 1114
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Remove(
		int elem);  // 1620
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::FindAndRemove(
			const unsigned int& src);  // 963
	CSceneObject::RemoveTag(
			uint hash);  // 1453
} /* size: 149, inline expansions: 11 (494 bytes) */

// <0135769C> engine2/interop.engine.cpp:1456
// function calls: 2
void CDclScnbjct_RemoveAllTags(void* self)
{
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::RemoveAll(); // 975
	CSceneObject::RemoveAllTags(); // 1459
} /* size: 15, inline expansions: 2 (20 bytes) */

// <01319E26> engine2/interop.engine.cpp:1456
void CDclScnbjct_RemoveAllTags(void* self)
{
} /* size: 0 */

// <01357727> engine2/interop.engine.cpp:1462
// function calls: 2
void CDclScnbjct_GetTagCount(void* self)
{
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Count(); // 969
	CSceneObject::GetTagCount(); // 1465
} /* size: 11, inline expansions: 2 (0 bytes) */

// <01319E0E> engine2/interop.engine.cpp:1462
void CDclScnbjct_GetTagCount(void* self)
{
} /* size: 0 */

// <013577B2> engine2/interop.engine.cpp:1468
// function calls: 3
void CDclScnbjct_GetTagAt(void* self, int i)
{
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Element(
		int i);  // 971
	CSceneObject::GetTagAt(
		int i);  // 1471
} /* size: 18, inline expansions: 3 (16 bytes) */

// <01319DEB> engine2/interop.engine.cpp:1468
void CDclScnbjct_GetTagAt(void* self, int i)
{
} /* size: 0 */

// <0136B02B> engine2/interop.engine.cpp:1474
// variable: 1
// function calls: 16
void CDclScnbjct_AddTag(void* self, unsigned int tag)
{
	{
		int i; // 1531
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Count(); // 1531
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 609
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Element(
			int i);  // 1533
	}
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Find(
		const unsigned int& src);  // 1563
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::HasElement(
			const unsigned int& src);  // 991
	CSceneObject::HasTag(
		uint hash);  // 980
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::AddToTail(
			const unsigned int& src);  // 981
	CSceneObject::AddTag(
		uint hash);  // 1477
} /* size: 188, inline expansions: 13 (555 bytes) */

// <01319DC6> engine2/interop.engine.cpp:1474
void CDclScnbjct_AddTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <0135A474> engine2/interop.engine.cpp:1480
// variable: 1
// function calls: 6
void CDclScnbjct_HasTag(void* self, unsigned int tag)
{
	{
		int i; // 1531
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Count(); // 1531
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 609
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Element(
			int i);  // 1533
	}
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Find(
		const unsigned int& src);  // 1563
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::HasElement(
			const unsigned int& src);  // 991
	CSceneObject::HasTag(
		uint hash);  // 1483
} /* size: 59, inline expansions: 3 (147 bytes) */

// <01319DA1> engine2/interop.engine.cpp:1480
void CDclScnbjct_HasTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <01357878> engine2/interop.engine.cpp:1486
// function calls: 3
void CDclScnbjct_SetForceLayerID(void* self, uint32 nTok)
{
	CSceneObject::SetForceLayerID(
			CUtlStringToken nTok);  // 1489
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 1489
} /* size: 28, inline expansions: 3 (22 bytes) */

// <01319D7C> engine2/interop.engine.cpp:1486
void CDclScnbjct_SetForceLayerID(void* self, uint32 nTok)
{
} /* size: 0 */

// <01357961> engine2/interop.engine.cpp:1492
// function calls: 3
void CDclScnbjct_SetLayerMatchID(void* self, uint32 nTok)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 1495
	CSceneObject::SetLayerMatchID(
			CUtlStringToken nTok);  // 1495
} /* size: 11, inline expansions: 3 (6 bytes) */

// <01319D57> engine2/interop.engine.cpp:1492
void CDclScnbjct_SetLayerMatchID(void* self, uint32 nTok)
{
} /* size: 0 */

// <01357A39> engine2/interop.engine.cpp:1498
// variable: 1
// function call: 1
void CDclScnbjct_UpdateFlagsBasedOnMaterial(void* __self)
{
	CDecalSceneObject* self; // 1502
	CSceneObject::UpdateFlagsBasedOnMaterial(); // 1506
} /* size: 68, variables: 1, inline expansions: 1 (25 bytes) */

// <01319D32> engine2/interop.engine.cpp:1498
// variable: 1
void CDclScnbjct_UpdateFlagsBasedOnMaterial(void* __self)
{
	CDecalSceneObject* self; // 1502
} /* size: 0, variables: 1 */

// <01358A40> engine2/interop.engine.cpp:1510
// function calls: 5
void CDclScnbjct_SetMaterialOverrideByIndex(void* self, int index, HMaterialStrong* material)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 15
	ResourceHandle_GetHandle(HMaterialStrong* target); // 1513
} /* size: 70, inline expansions: 5 (27 bytes) */

// <01319D00> engine2/interop.engine.cpp:1510
void CDclScnbjct_SetMaterialOverrideByIndex(void* self, int index, HMaterialStrong* material)
{
} /* size: 0 */

// <01319BF1> engine2/interop.engine.cpp:1516
// function calls: 3
void _Get__CDclScnbjct_m_hColor(void* self)
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 222
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 222
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 1518
} /* size: 62, inline expansions: 3 (52 bytes) */

// <013199EE> engine2/interop.engine.cpp:1520
// function calls: 8
void _Set__CDclScnbjct_m_hColor(void* self, HRenderTextureStrong* value)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 1522
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1522
} /* size: 162, inline expansions: 8 (245 bytes) */

// <013198DF> engine2/interop.engine.cpp:1524
// function calls: 3
void _Get__CDclScnbjct_m_hNormal(void* self)
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 222
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 222
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 1526
} /* size: 62, inline expansions: 3 (52 bytes) */

// <013196DC> engine2/interop.engine.cpp:1528
// function calls: 8
void _Set__CDclScnbjct_m_hNormal(void* self, HRenderTextureStrong* value)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 1530
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1530
} /* size: 162, inline expansions: 8 (245 bytes) */

// <013195CD> engine2/interop.engine.cpp:1532
// function calls: 3
void _Get__CDclScnbjct_m_hRMO(void* self)
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 222
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 222
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 1534
} /* size: 62, inline expansions: 3 (52 bytes) */

// <013193CA> engine2/interop.engine.cpp:1536
// function calls: 8
void _Set__CDclScnbjct_m_hRMO(void* self, HRenderTextureStrong* value)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 1538
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1538
} /* size: 162, inline expansions: 8 (245 bytes) */

// <0131939D> engine2/interop.engine.cpp:1540
void _Get__CDclScnbjct_m_nSortOrder(void* self)
{
} /* size: 11 */

// <01319361> engine2/interop.engine.cpp:1544
void _Set__CDclScnbjct_m_nSortOrder(void* self, unsigned int value)
{
} /* size: 11 */

// <013192F8> engine2/interop.engine.cpp:1552
void _Set__CDclScnbjct_m_nExclusionBitMask(void* self, unsigned int value)
{
} /* size: 11 */

// <01319299> engine2/interop.engine.cpp:1556
// function call: 1
void _Get__CDclScnbjct_m_vColorTint(void* self)
{
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 1558
} /* size: 30, inline expansions: 1 (22 bytes) */

// <0131921F> engine2/interop.engine.cpp:1560
// function call: 1
void _Set__CDclScnbjct_m_vColorTint(void* self, Vector4D* value)
{
	Vector4D::operator=(
			const Vector4D& vOther);  // 1562
} /* size: 56, inline expansions: 1 (51 bytes) */

// <01357AC2> engine2/interop.engine.cpp:1564
void _Get__CDclScnbjct_m_flAttenuationAngle(void* self)
{
} /* size: 13 */

// <013191CB> engine2/interop.engine.cpp:1568
void _Set__CDclScnbjct_m_flAttenuationAngle(void* self, float value)
{
} /* size: 13 */

// <0131919E> engine2/interop.engine.cpp:1572
void _Get__CDclScnbjct_m_flColorMix(void* self)
{
} /* size: 13 */

// <01319162> engine2/interop.engine.cpp:1576
void _Set__CDclScnbjct_m_flColorMix(void* self, float value)
{
} /* size: 13 */

// <01319053> engine2/interop.engine.cpp:1580
// function calls: 3
void _Get__CDclScnbjct_m_hEmission(void* self)
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 222
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 222
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 1582
} /* size: 62, inline expansions: 3 (52 bytes) */

// <01318E50> engine2/interop.engine.cpp:1584
// function calls: 8
void _Set__CDclScnbjct_m_hEmission(void* self, HRenderTextureStrong* value)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 1586
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1586
} /* size: 162, inline expansions: 8 (245 bytes) */

// <01318E23> engine2/interop.engine.cpp:1588
void _Get__CDclScnbjct_m_flEmissionEnergy(void* self)
{
} /* size: 13 */

// <01318DE7> engine2/interop.engine.cpp:1592
void _Set__CDclScnbjct_m_flEmissionEnergy(void* self, float value)
{
} /* size: 13 */

// <01318DBA> engine2/interop.engine.cpp:1596
void _Get__CDclScnbjct_m_nSequenceIndex(void* self)
{
} /* size: 11 */

// <01318D7E> engine2/interop.engine.cpp:1600
void _Set__CDclScnbjct_m_nSequenceIndex(void* self, unsigned int value)
{
} /* size: 11 */

// <0136A3C4> engine2/interop.engine.cpp:1604
// function calls: 3
void _Get__CDclScnbjct_m_hHeight(void* self)
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 222
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 222
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 1606
} /* size: 62, inline expansions: 3 (52 bytes) */

// <01318D66> engine2/interop.engine.cpp:1604
void _Get__CDclScnbjct_m_hHeight(void* self)
{
} /* size: 0 */

// <0136887C> engine2/interop.engine.cpp:1608
// function calls: 8
void _Set__CDclScnbjct_m_hHeight(void* self, HRenderTextureStrong* value)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 1610
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1610
} /* size: 162, inline expansions: 8 (245 bytes) */

// <01318D41> engine2/interop.engine.cpp:1608
void _Set__CDclScnbjct_m_hHeight(void* self, HRenderTextureStrong* value)
{
} /* size: 0 */

// <01357AEB> engine2/interop.engine.cpp:1612
void _Get__CDclScnbjct_m_flParallaxStrength(void* self)
{
} /* size: 13 */

// <01357B14> engine2/interop.engine.cpp:1616
void _Set__CDclScnbjct_m_flParallaxStrength(void* self, float value)
{
} /* size: 13 */

// <01318CD7> engine2/interop.engine.cpp:1620
void _Get__CDclScnbjct_m_nSamplerIndex(void* self)
{
} /* size: 11 */

// <01318C9B> engine2/interop.engine.cpp:1624
void _Set__CDclScnbjct_m_nSamplerIndex(void* self, int value)
{
} /* size: 11 */

// <01318C32> engine2/interop.engine.cpp:1628
void* From_CSceneObject_To_CDynamicSceneObject(CSceneObject* ptr)
{
} /* size: 35 */

// <01318C16> engine2/interop.engine.cpp:1629
void* To_CSceneObject_From_CDynamicSceneObject(CDynamicSceneObject* ptr)
{
} /* size: 0 */

// <01318B4C> engine2/interop.engine.cpp:1631
// function calls: 3
void CDynmcScnbjct_Create(ISceneWorld* world)
{
	CSceneObject::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CDynamicSceneObject*>(CDynamicSceneObject* c); // 1634
} /* size: 64, inline expansions: 3 (58 bytes) */

// <01318ACB> engine2/interop.engine.cpp:1637
void CDynmcScnbjct_Begin(void* self, int64 type, int vertexCount)
{
} /* size: 9 */

// <01318A82> engine2/interop.engine.cpp:1643
void CDynmcScnbjct_End(void* self)
{
} /* size: 9 */

// <01318A1D> engine2/interop.engine.cpp:1649
void CDynmcScnbjct_AddVertex(void* self, SboxVertex_t* vertex)
{
} /* size: 9 */

// <0131899C> engine2/interop.engine.cpp:1655
void CDynmcScnbjct_AddVertexRange(void* self, void* vertex, int length)
{
} /* size: 9 */

// <01318953> engine2/interop.engine.cpp:1661
void CDynmcScnbjct_Reset(void* self)
{
} /* size: 9 */

// <01318922> engine2/interop.engine.cpp:1667
void CDynmcScnbjct_ChangeFlags(void* self, int64 nNewFlags, int64 nNewFlagsMask)
{
} /* size: 0 */

// <013188FE> engine2/interop.engine.cpp:1673
void CDynmcScnbjct_SetFlags(void* self, int64 nFlagsToOR)
{
} /* size: 0 */

// <013188DA> engine2/interop.engine.cpp:1679
void CDynmcScnbjct_HasFlags(void* self, int64 nFlags)
{
} /* size: 0 */

// <013188C3> engine2/interop.engine.cpp:1685
void CDynmcScnbjct_GetFlags(void* self)
{
} /* size: 0 */

// <013188AC> engine2/interop.engine.cpp:1691
void CDynmcScnbjct_GetOriginalFlags(void* self)
{
} /* size: 0 */

// <01318888> engine2/interop.engine.cpp:1697
void CDynmcScnbjct_ClearFlags(void* self, int64 nFlagsToClear)
{
} /* size: 0 */

// <01318864> engine2/interop.engine.cpp:1703
void CDynmcScnbjct_SetCullDistance(void* self, float dist)
{
} /* size: 0 */

// <0131884D> engine2/interop.engine.cpp:1709
void CDynmcScnbjct_EnableLightingCache(void* self)
{
} /* size: 0 */

// <0131881C> engine2/interop.engine.cpp:1715
void CDynmcScnbjct_SetLightingOrigin(void* self, Vector* vPos, int worldspace)
{
} /* size: 0 */

// <01318805> engine2/interop.engine.cpp:1721
void CDynmcScnbjct_GetLightingOrigin(void* self)
{
} /* size: 0 */

// <013187EE> engine2/interop.engine.cpp:1727
void CDynmcScnbjct_HasLightingOrigin(void* self)
{
} /* size: 0 */

// <013187CA> engine2/interop.engine.cpp:1733
void CDynmcScnbjct_SetTintRGBA(void* self, Vector4D* color)
{
} /* size: 0 */

// <013187B3> engine2/interop.engine.cpp:1739
void CDynmcScnbjct_GetTintRGBA(void* self)
{
} /* size: 0 */

// <0131878F> engine2/interop.engine.cpp:1745
void CDynmcScnbjct_SetAlphaFade(void* self, float nAlpha)
{
} /* size: 0 */

// <01318778> engine2/interop.engine.cpp:1751
void CDynmcScnbjct_GetAlphaFade(void* self)
{
} /* size: 0 */

// <01318754> engine2/interop.engine.cpp:1757
void CDynmcScnbjct_SetMaterialOverrideForMeshInstances(void* self, HMaterialStrong* mat)
{
} /* size: 0 */

// <0131873D> engine2/interop.engine.cpp:1763
void CDynmcScnbjct_ClearMaterialOverrideList(void* self)
{
} /* size: 0 */

// <013186FF> engine2/interop.engine.cpp:1769
void CDynmcScnbjct_SetMaterialOverride(void* self, HMaterialStrong* hMaterial, uint32 nAttr, int nAttrValueMatch)
{
} /* size: 0 */

// <013186E8> engine2/interop.engine.cpp:1775
void CDynmcScnbjct_IsLoaded(void* self)
{
} /* size: 0 */

// <013186D1> engine2/interop.engine.cpp:1781
void CDynmcScnbjct_IsRenderingEnabled(void* self)
{
} /* size: 0 */

// <013186BA> engine2/interop.engine.cpp:1787
void CDynmcScnbjct_SetLoaded(void* self)
{
} /* size: 0 */

// <013186A3> engine2/interop.engine.cpp:1793
void CDynmcScnbjct_ClearLoaded(void* self)
{
} /* size: 0 */

// <0131868C> engine2/interop.engine.cpp:1799
void CDynmcScnbjct_DisableRendering(void* self)
{
} /* size: 0 */

// <01318651> engine2/interop.engine.cpp:1811
void CDynmcScnbjct_SetRenderingEnabled(void* self, int bEnabled)
{
} /* size: 0 */

// <0131863A> engine2/interop.engine.cpp:1817
void CDynmcScnbjct_GetBoundingSphereRadius(void* self)
{
} /* size: 0 */

// <01318617> engine2/interop.engine.cpp:1823
void CDynmcScnbjct_SetTransform(void* self, CTransformUnaligned* tx)
{
} /* size: 0 */

// <01318600> engine2/interop.engine.cpp:1829
void CDynmcScnbjct_GetCTransform(void* self)
{
} /* size: 0 */

// <013185DC> engine2/interop.engine.cpp:1835
void CDynmcScnbjct_SetBounds(void* self, AABB_t* box)
{
} /* size: 0 */

// <013185C5> engine2/interop.engine.cpp:1841
void CDynmcScnbjct_GetBounds(void* self)
{
} /* size: 0 */

// <013185AE> engine2/interop.engine.cpp:1847
void CDynmcScnbjct_SetBoundsInfinite(void* self)
{
} /* size: 0 */

// <01318597> engine2/interop.engine.cpp:1853
void CDynmcScnbjct_GetParent(void* self)
{
} /* size: 0 */

// <01318559> engine2/interop.engine.cpp:1859
void CDynmcScnbjct_AddChildObject(void* self, uint32 nId, CSceneObject* pChild, unsigned int nChildUpdateFlags)
{
} /* size: 0 */

// <01318535> engine2/interop.engine.cpp:1865
void CDynmcScnbjct_RemoveChild(void* self, CSceneObject* obj)
{
} /* size: 0 */

// <0131851E> engine2/interop.engine.cpp:1871
void CDynmcScnbjct_GetAttributesPtrForModify(void* self)
{
} /* size: 0 */

// <013184FA> engine2/interop.engine.cpp:1877
void CDynmcScnbjct_EnableMeshGroups(void* self, uint64 nMask)
{
} /* size: 0 */

// <013184B2> engine2/interop.engine.cpp:1889
void CDynmcScnbjct_ResetMeshGroups(void* self, uint64 nMask)
{
} /* size: 0 */

// <0131849B> engine2/interop.engine.cpp:1895
void CDynmcScnbjct_GetCurrentMeshGroupMask(void* self)
{
} /* size: 0 */

// <01318484> engine2/interop.engine.cpp:1901
void CDynmcScnbjct_GetWorld(void* self)
{
} /* size: 0 */

// <01318449> engine2/interop.engine.cpp:1913
void CDynmcScnbjct_DisableLOD(void* self)
{
} /* size: 0 */

// <01318432> engine2/interop.engine.cpp:1919
void CDynmcScnbjct_GetCurrentLODGroupMask(void* self)
{
} /* size: 0 */

// <01318404> engine2/interop.engine.cpp:1931
void CDynmcScnbjct_GetModelHandle(void* self)
{
} /* size: 0 */

// <013183E0> engine2/interop.engine.cpp:1937
void CDynmcScnbjct_SetMaterialGroup(void* self, uint32 token)
{
} /* size: 0 */

// <0131838A> engine2/interop.engine.cpp:1949
void CDynmcScnbjct_SetBatchable(void* self, int bIsBatchable)
{
} /* size: 0 */

// <01318373> engine2/interop.engine.cpp:1955
void CDynmcScnbjct_IsNotBatchable(void* self)
{
} /* size: 0 */

// <0131834E> engine2/interop.engine.cpp:1961
void CDynmcScnbjct_SetUniqueBatchGroup(void* self, int bUnique)
{
} /* size: 0 */

// <0131832A> engine2/interop.engine.cpp:1967
void CDynmcScnbjct_RemoveTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <01318313> engine2/interop.engine.cpp:1973
void CDynmcScnbjct_RemoveAllTags(void* self)
{
} /* size: 0 */

// <013182FC> engine2/interop.engine.cpp:1979
void CDynmcScnbjct_GetTagCount(void* self)
{
} /* size: 0 */

// <013182DA> engine2/interop.engine.cpp:1985
void CDynmcScnbjct_GetTagAt(void* self, int i)
{
} /* size: 0 */

// <013182B6> engine2/interop.engine.cpp:1991
void CDynmcScnbjct_AddTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <01318292> engine2/interop.engine.cpp:1997
void CDynmcScnbjct_HasTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <0131826E> engine2/interop.engine.cpp:2003
void CDynmcScnbjct_SetForceLayerID(void* self, uint32 nTok)
{
} /* size: 0 */

// <0131824A> engine2/interop.engine.cpp:2009
void CDynmcScnbjct_SetLayerMatchID(void* self, uint32 nTok)
{
} /* size: 0 */

// <01318226> engine2/interop.engine.cpp:2015
// variable: 1
void CDynmcScnbjct_UpdateFlagsBasedOnMaterial(void* __self)
{
	CDynamicSceneObject* self; // 2019
} /* size: 0, variables: 1 */

// <013181F5> engine2/interop.engine.cpp:2027
void CDynmcScnbjct_SetMaterialOverrideByIndex(void* self, int index, HMaterialStrong* material)
{
} /* size: 0 */

// <013180E6> engine2/interop.engine.cpp:2033
// function calls: 3
void _Get__CDynmcScnbjct_Material(void* self)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 2035
} /* size: 62, inline expansions: 3 (52 bytes) */

// <01317F3C> engine2/interop.engine.cpp:2037
// function calls: 7
void _Set__CDynmcScnbjct_Material(void* self, HMaterialStrong* value)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 15
	ResourceHandle_GetHandle(HMaterialStrong* target); // 2039
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 2039
} /* size: 20, inline expansions: 7 (25 bytes) */

// <01317538> engine2/interop.engine.cpp:2041
// variable: 1
// function calls: 41
void CEntityKeyValues_GetValueString(void* self, uint32 key, const char* pDefaultValue)
{
	{
		int i; // 93
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 442
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 95
	}
	CEntityKeyValues::FindKeyHash(
			CUtlStringToken key);  // 185
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 452
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValu this,
		int i);  // 442
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValu this,
			int i);  // 186
	CEntityKeyValues::GetValue(
		CUtlStringToken key);  // 196
	CUtlString::CUtlString(); // 197
	CUtlMemory<char, int>::Grow(
		int num);  // 806
	CUtlVectorBase<char, CUtlMemory<char, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<char, CUtlMemory<char, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<char, CUtlMemory<char, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<char, CUtlMemory<char, int> >::SetCount(
		int count);  // 1138
	CUtlMemory<char, int>::Purge(); // 903
	CUtlMemory<char, int>::Purge(); // 1799
	CUtlVectorBase<char, CUtlMemory<char, int> >::Purge(); // 560
	ValidateAlignment<char>(void); // 508
	CUtlMemory<char, int>::Purge(); // 510
	CUtlMemory<char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<char, CUtlMemory<char, int> >::~CUtlVector(); // 1149
	CUtlString::Clear(); // 1146
	V_strlen(const char* str); // 1136
	CUtlMemory<char, int>::ValidateGrowSize(); // 475
	CUtlMemory<char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char, CUtlMemory<char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<char, CUtlMemory<char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char, CUtlMemory<char, int> >::CUtlVector(); // 1137
	CVariantBase<CEntityVariantAllocator>::AssignTo(
		CUtlString* pString);  // 204
	CUtlString::Get(); // 206
	CUtlString::Get(); // 99
	CUtlString::String(); // 207
	CUtlString::~CUtlString(); // 211
	CEntityKeyValues::GetValueString(
			CUtlStringToken key,
			const char* pDefaultValue);  // 2044
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 2044
} /* size: 520, inline expansions: 36 (1656 bytes) */

// <013174B6> engine2/interop.engine.cpp:2047
// function calls: 2
void CEntityKeyValues_GetKeyCount(void* self)
{
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 222
	CEntityKeyValues::GetKeyCount(); // 2050
} /* size: 8, inline expansions: 2 (3 bytes) */

// <013172ED> engine2/interop.engine.cpp:2053
// variables: 2
// function calls: 7
void CEntityKeyValues_GetKey(void* __self, int __nIdx)
{
	CEntityKeyValues* self; // 2057
	int nIdx; // 2058
	CUtlStringToken::CUtlStringToken(); // 215
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 216
	AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
		int i);  // 442
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
			int i);  // 216
	CEntityKeyValues::GetKey(
		int nIdx);  // 2061
} /* size: 62, variables: 2, inline expansions: 7 (161 bytes) */

// <01317295> engine2/interop.engine.cpp:2065
// variables: 3
void CEntityKeyValues_GetValueString_1(void* __self, unsigned int __key, const char* __pDefaultValue)
{
	CEntityKeyValues* self; // 2069
	unsigned int key; // 2070
	const char* pDefaultValue; // 2071
} /* size: 0, variables: 3 */

// <0131722C> engine2/interop.engine.cpp:2078
void* From_CSceneLightObject_To_CEnvMapSceneObject(CSceneLightObject* ptr)
{
} /* size: 35 */

// <01317210> engine2/interop.engine.cpp:2079
void* To_CSceneLightObject_From_CEnvMapSceneObject(CEnvMapSceneObject* ptr)
{
} /* size: 0 */

// <013171A7> engine2/interop.engine.cpp:2080
void* From_CSceneObject_To_CEnvMapSceneObject(CSceneObject* ptr)
{
} /* size: 35 */

// <0131718B> engine2/interop.engine.cpp:2081
void* To_CSceneObject_From_CEnvMapSceneObject(CEnvMapSceneObject* ptr)
{
} /* size: 0 */

// <01317142> engine2/interop.engine.cpp:2083
void CnvMpScnbjct_CalculateRadianceSH(void* self)
{
} /* size: 9 */

// <01316FC8> engine2/interop.engine.cpp:2089
// function calls: 5
void CnvMpScnbjct_CalculateRadianceSH_1(void* self, HRenderTextureStrong* hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 2092
} /* size: 70, inline expansions: 5 (27 bytes) */

// <01316F7F> engine2/interop.engine.cpp:2095
void CnvMpScnbjct_CalculateNormalizationSH(void* self)
{
} /* size: 9 */

// <01316C0E> engine2/interop.engine.cpp:2101
// function calls: 13
void CnvMpScnbjct_CalculateBounds(void* self)
{
	TransformAABB(const matrix3x4_t& matTransform,
			const AABB_t& boundsIn,
			AABB_t* pBoundsOut);  // 165
	Vector::operator=(
			const Vector& vOther);  // 29
	Vector::Vector(); // 27
	Vector::Vector(); // 27
	Vector::operator=(
			const Vector& vOther);  // 28
	AABB_t::AABB_t(
		const Vector& vMins,
		const Vector& vMaxs);  // 164
	CSceneObject::GetTransform(); // 162
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 163
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 625
	CSceneObject::SetBounds(
			const AABB_t& bounds);  // 166
	CEnvMapSceneObject::CalculateBounds(); // 2104
} /* size: 149, inline expansions: 13 (230 bytes) */

// <01316AAF> engine2/interop.engine.cpp:2107
// function calls: 4
void CnvMpScnbjct_SetWorldPosition(void* self, Vector* pos)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2697
	Vector::operator=(
			const Vector& vOther);  // 2696
	CSceneLightObject::SetWorldPosition(
			Vector pos);  // 2110
} /* size: 99, inline expansions: 4 (165 bytes) */

// <01357B44> engine2/interop.engine.cpp:2113
// function call: 1
void CnvMpScnbjct_GetWorldPosition(void* self)
{
	CSceneLightObject::GetWorldPosition(); // 2116
} /* size: 21, inline expansions: 1 (0 bytes) */

// <01316A97> engine2/interop.engine.cpp:2113
void CnvMpScnbjct_GetWorldPosition(void* self)
{
} /* size: 0 */

// <01316719> engine2/interop.engine.cpp:2119
// function calls: 11
void CnvMpScnbjct_SetWorldDirection(void* self, Quaternion* dir)
{
	Vector::operator=(
			const Vector& vOther);  // 2703
	Vector::Negate(); // 2707
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2709
	Vector::NormalizedSafe(
			const Vector& vFallback);  // 2709
	Vector::operator=(
			const Vector& vOther);  // 2709
	Vector::NormalizedSafe(
			const Vector& vFallback);  // 2711
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2711
	Vector::operator=(
			const Vector& vOther);  // 2711
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2712
	CSceneLightObject::SetWorldDirection(
				Quaternion dir);  // 2122
} /* size: 368, inline expansions: 11 (589 bytes) */

// <01357B9E> engine2/interop.engine.cpp:2125
// function call: 1
void CnvMpScnbjct_GetWorldDirection(void* self)
{
	CSceneLightObject::GetWorldDirection(); // 2128
} /* size: 21, inline expansions: 1 (0 bytes) */

// <01316701> engine2/interop.engine.cpp:2125
void CnvMpScnbjct_GetWorldDirection(void* self)
{
} /* size: 0 */

// <0131656C> engine2/interop.engine.cpp:2131
// function calls: 5
void CnvMpScnbjct_SetColor(void* self, Vector* color)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2720
	Vector::operator=(
			const Vector& vOther);  // 2718
	Vector::operator=(
			const Vector& vOther);  // 2719
	CSceneLightObject::SetColor(
		Vector color);  // 2134
} /* size: 107, inline expansions: 5 (179 bytes) */

// <0131640D> engine2/interop.engine.cpp:2137
// function calls: 4
void CnvMpScnbjct_SetBounceColor(void* self, Vector* color)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2726
	Vector::operator=(
			const Vector& vOther);  // 2725
	CSceneLightObject::SetBounceColor(
			Vector color);  // 2140
} /* size: 93, inline expansions: 4 (153 bytes) */

// <01357BF8> engine2/interop.engine.cpp:2143
// function call: 1
void CnvMpScnbjct_GetColor(void* self)
{
	CSceneLightObject::GetColor(); // 2146
} /* size: 21, inline expansions: 1 (0 bytes) */

// <013163F5> engine2/interop.engine.cpp:2143
void CnvMpScnbjct_GetColor(void* self)
{
} /* size: 0 */

// <013162CC> engine2/interop.engine.cpp:2149
// function calls: 3
void CnvMpScnbjct_SetRadius(void* self, float radius)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2761
	CSceneLightObject::SetRadius(
			float radius);  // 2152
} /* size: 81, inline expansions: 3 (140 bytes) */

// <01357C52> engine2/interop.engine.cpp:2155
// function call: 1
void CnvMpScnbjct_GetRadius(void* self)
{
	CSceneLightObject::GetRadius(); // 2158
} /* size: 13, inline expansions: 1 (0 bytes) */

// <013162B4> engine2/interop.engine.cpp:2155
void CnvMpScnbjct_GetRadius(void* self)
{
} /* size: 0 */

// <0131618D> engine2/interop.engine.cpp:2161
// function calls: 3
void CnvMpScnbjct_SetTheta(void* self, float f)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2769
	CSceneLightObject::SetTheta(
		float radius);  // 2164
} /* size: 81, inline expansions: 3 (140 bytes) */

// <01316176> engine2/interop.engine.cpp:2167
void CnvMpScnbjct_GetTheta(void* self)
{
} /* size: 0 */

// <0131604F> engine2/interop.engine.cpp:2173
// function calls: 3
void CnvMpScnbjct_SetPhi(void* self, float f)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2780
	CSceneLightObject::SetPhi(
		float radius);  // 2176
} /* size: 81, inline expansions: 3 (140 bytes) */

// <01357CAC> engine2/interop.engine.cpp:2179
// function call: 1
void CnvMpScnbjct_GetPhi(void* self)
{
	CSceneLightObject::GetPhi(); // 2182
} /* size: 13, inline expansions: 1 (0 bytes) */

// <01316037> engine2/interop.engine.cpp:2179
void CnvMpScnbjct_GetPhi(void* self)
{
} /* size: 0 */

// <01315F10> engine2/interop.engine.cpp:2185
// function calls: 3
void CnvMpScnbjct_SetFallOff(void* self, float f)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2877
	CSceneLightObject::SetFallOff(
			float falloff);  // 2188
} /* size: 81, inline expansions: 3 (140 bytes) */

// <01357D06> engine2/interop.engine.cpp:2191
// function call: 1
void CnvMpScnbjct_GetFallOff(void* self)
{
	CSceneLightObject::GetFallOff(); // 2194
} /* size: 13, inline expansions: 1 (0 bytes) */

// <01315EF8> engine2/interop.engine.cpp:2191
void CnvMpScnbjct_GetFallOff(void* self)
{
} /* size: 0 */

// <01357D60> engine2/interop.engine.cpp:2197
// function call: 1
void CnvMpScnbjct_GetShadowTextureResolution(void* self)
{
	CSceneLightObject::GetShadowTextureResolution(); // 2200
} /* size: 11, inline expansions: 1 (0 bytes) */

// <01315EE0> engine2/interop.engine.cpp:2197
void CnvMpScnbjct_GetShadowTextureResolution(void* self)
{
} /* size: 0 */

// <01357DBA> engine2/interop.engine.cpp:2203
// function call: 1
void CnvMpScnbjct_SetShadowTextureResolution(void* self, int v)
{
	CSceneLightObject::SetShadowTextureResolution(
					int res);  // 2206
} /* size: 22, inline expansions: 1 (17 bytes) */

// <01315EBD> engine2/interop.engine.cpp:2203
void CnvMpScnbjct_SetShadowTextureResolution(void* self, int v)
{
} /* size: 0 */

// <01357E28> engine2/interop.engine.cpp:2209
// function call: 1
void CnvMpScnbjct_GetShadows(void* self)
{
	CSceneLightObject::GetShadows(); // 2212
} /* size: 12, inline expansions: 1 (0 bytes) */

// <01315EA5> engine2/interop.engine.cpp:2209
void CnvMpScnbjct_GetShadows(void* self)
{
} /* size: 0 */

// <01357E82> engine2/interop.engine.cpp:2215
// function call: 1
void CnvMpScnbjct_SetShadows(void* self, int v)
{
	CSceneLightObject::SetShadows(
			bool res);  // 2218
} /* size: 14, inline expansions: 1 (7 bytes) */

// <01315E82> engine2/interop.engine.cpp:2215
void CnvMpScnbjct_SetShadows(void* self, int v)
{
} /* size: 0 */

// <01315D5B> engine2/interop.engine.cpp:2221
// function calls: 3
void CnvMpScnbjct_SetConstantAttn(void* self, float f)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2737
	CSceneLightObject::SetConstantAttn(
			float f);  // 2224
} /* size: 81, inline expansions: 3 (140 bytes) */

// <01357EE4> engine2/interop.engine.cpp:2227
// function call: 1
void CnvMpScnbjct_GetConstantAttn(void* self)
{
	CSceneLightObject::GetConstantAttn(); // 2230
} /* size: 13, inline expansions: 1 (0 bytes) */

// <01315D43> engine2/interop.engine.cpp:2227
void CnvMpScnbjct_GetConstantAttn(void* self)
{
} /* size: 0 */

// <01315C1C> engine2/interop.engine.cpp:2233
// function calls: 3
void CnvMpScnbjct_SetLinearAttn(void* self, float f)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2745
	CSceneLightObject::SetLinearAttn(
			float f);  // 2236
} /* size: 81, inline expansions: 3 (140 bytes) */

// <01357F3E> engine2/interop.engine.cpp:2239
// function call: 1
void CnvMpScnbjct_GetLinearAttn(void* self)
{
	CSceneLightObject::GetLinearAttn(); // 2242
} /* size: 13, inline expansions: 1 (0 bytes) */

// <01315C04> engine2/interop.engine.cpp:2239
void CnvMpScnbjct_GetLinearAttn(void* self)
{
} /* size: 0 */

// <01315ADD> engine2/interop.engine.cpp:2245
// function calls: 3
void CnvMpScnbjct_SetQuadraticAttn(void* self, float f)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2753
	CSceneLightObject::SetQuadraticAttn(
			float f);  // 2248
} /* size: 81, inline expansions: 3 (140 bytes) */

// <01357F98> engine2/interop.engine.cpp:2251
// function call: 1
void CnvMpScnbjct_GetQuadraticAttn(void* self)
{
	CSceneLightObject::GetQuadraticAttn(); // 2254
} /* size: 13, inline expansions: 1 (0 bytes) */

// <01315AC5> engine2/interop.engine.cpp:2251
void CnvMpScnbjct_GetQuadraticAttn(void* self)
{
} /* size: 0 */

// <01368A74> engine2/interop.engine.cpp:2257
// function calls: 10
void CnvMpScnbjct_SetLightCookie(void* self, HRenderTextureStrong* f)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 2260
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 239
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2861
	CSceneLightObject::SetLightCookie(
			HRenderTexture f);  // 2260
} /* size: 162, inline expansions: 10 (497 bytes) */

// <01315AA2> engine2/interop.engine.cpp:2257
void CnvMpScnbjct_SetLightCookie(void* self, HRenderTextureStrong* f)
{
} /* size: 0 */

// <0136A4D0> engine2/interop.engine.cpp:2263
// function calls: 7
void CnvMpScnbjct_GetLightCookie(void* self)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 2866
	CSceneLightObject::GetLightCookie(); // 2266
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2266
} /* size: 62, inline expansions: 7 (52 bytes) */

// <01315A8A> engine2/interop.engine.cpp:2263
void CnvMpScnbjct_GetLightCookie(void* self)
{
} /* size: 0 */

// <01357FF2> engine2/interop.engine.cpp:2269
// function call: 1
void CnvMpScnbjct_GetShadowCascades(void* self)
{
	CSceneLightObject::GetShadowCascades(); // 2272
} /* size: 11, inline expansions: 1 (0 bytes) */

// <01315A72> engine2/interop.engine.cpp:2269
void CnvMpScnbjct_GetShadowCascades(void* self)
{
} /* size: 0 */

// <0135804C> engine2/interop.engine.cpp:2275
// function calls: 2
void CnvMpScnbjct_SetShadowCascades(void* self, int v)
{
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 2829
	CSceneLightObject::SetShadowCascades(
				int c);  // 2278
} /* size: 28, inline expansions: 2 (40 bytes) */

// <01315A4F> engine2/interop.engine.cpp:2275
void CnvMpScnbjct_SetShadowCascades(void* self, int v)
{
} /* size: 0 */

// <01315A38> engine2/interop.engine.cpp:2281
void CnvMpScnbjct_GetShadowCascadeSplitRatio(void* self)
{
} /* size: 0 */

// <01315A16> engine2/interop.engine.cpp:2287
void CnvMpScnbjct_SetShadowCascadeSplitRatio(void* self, float v)
{
} /* size: 0 */

// <013580EF> engine2/interop.engine.cpp:2293
// function call: 1
void CnvMpScnbjct_GetCascadeDistanceScale(void* self)
{
	CSceneLightObject::GetCascadeDistanceScale(); // 2296
} /* size: 13, inline expansions: 1 (0 bytes) */

// <013159FE> engine2/interop.engine.cpp:2293
void CnvMpScnbjct_GetCascadeDistanceScale(void* self)
{
} /* size: 0 */

// <01358149> engine2/interop.engine.cpp:2299
// function call: 1
void CnvMpScnbjct_SetCascadeDistanceScale(void* self, float dist)
{
	CSceneLightObject::SetCascadeDistanceScale(
				float res);  // 2302
} /* size: 13, inline expansions: 1 (8 bytes) */

// <013159D9> engine2/interop.engine.cpp:2299
void CnvMpScnbjct_SetCascadeDistanceScale(void* self, float dist)
{
} /* size: 0 */

// <013581B7> engine2/interop.engine.cpp:2305
// function call: 1
void CnvMpScnbjct_GetFogContributionStength(void* self)
{
	CSceneLightObject::GetFogContributionStength(); // 2308
} /* size: 13, inline expansions: 1 (0 bytes) */

// <013159C1> engine2/interop.engine.cpp:2305
void CnvMpScnbjct_GetFogContributionStength(void* self)
{
} /* size: 0 */

// <01358211> engine2/interop.engine.cpp:2311
// function call: 1
void CnvMpScnbjct_SetFogContributionStength(void* self, float v)
{
	CSceneLightObject::SetFogContributionStength(
					float v);  // 2314
} /* size: 13, inline expansions: 1 (8 bytes) */

// <0131599E> engine2/interop.engine.cpp:2311
void CnvMpScnbjct_SetFogContributionStength(void* self, float v)
{
} /* size: 0 */

// <0135827F> engine2/interop.engine.cpp:2317
// function call: 1
void CnvMpScnbjct_GetFogLightingMode(void* self)
{
	CSceneLightObject::GetFogLightingMode(); // 2320
} /* size: 11, inline expansions: 1 (0 bytes) */

// <01315986> engine2/interop.engine.cpp:2317
void CnvMpScnbjct_GetFogLightingMode(void* self)
{
} /* size: 0 */

// <013582D9> engine2/interop.engine.cpp:2323
// function call: 1
void CnvMpScnbjct_SetFogLightingMode(void* self, int v)
{
	CSceneLightObject::SetFogLightingMode(
				int v);  // 2326
} /* size: 11, inline expansions: 1 (6 bytes) */

// <01315963> engine2/interop.engine.cpp:2323
void CnvMpScnbjct_SetFogLightingMode(void* self, int v)
{
} /* size: 0 */

// <01358347> engine2/interop.engine.cpp:2329
// function call: 1
void CnvMpScnbjct_SetBakeLightIndex(void* self, int v)
{
	CSceneLightObject::SetBakeLightIndex(
				int v);  // 2332
} /* size: 11, inline expansions: 1 (6 bytes) */

// <01315940> engine2/interop.engine.cpp:2329
void CnvMpScnbjct_SetBakeLightIndex(void* self, int v)
{
} /* size: 0 */

// <013583B5> engine2/interop.engine.cpp:2335
// function call: 1
void CnvMpScnbjct_SetBakeLightIndexScale(void* self, float v)
{
	CSceneLightObject::SetBakeLightIndexScale(
				float v);  // 2338
} /* size: 13, inline expansions: 1 (8 bytes) */

// <0131591D> engine2/interop.engine.cpp:2335
void CnvMpScnbjct_SetBakeLightIndexScale(void* self, float v)
{
} /* size: 0 */

// <01358423> engine2/interop.engine.cpp:2341
// function call: 1
void CnvMpScnbjct_SetUsesIndexedBakedLighting(void* self, int v)
{
	CSceneLightObject::SetUsesIndexedBakedLighting(
					bool v);  // 2344
} /* size: 14, inline expansions: 1 (7 bytes) */

// <013158FA> engine2/interop.engine.cpp:2341
void CnvMpScnbjct_SetUsesIndexedBakedLighting(void* self, int v)
{
} /* size: 0 */

// <01358485> engine2/interop.engine.cpp:2347
// function call: 1
void CnvMpScnbjct_SetRenderDiffuse(void* self, int v)
{
	CSceneLightObject::SetRenderDiffuse(
			bool v);  // 2350
} /* size: 14, inline expansions: 1 (7 bytes) */

// <013158D7> engine2/interop.engine.cpp:2347
void CnvMpScnbjct_SetRenderDiffuse(void* self, int v)
{
} /* size: 0 */

// <013584E7> engine2/interop.engine.cpp:2353
// function call: 1
void CnvMpScnbjct_SetRenderSpecular(void* self, int v)
{
	CSceneLightObject::SetRenderSpecular(
				bool v);  // 2356
} /* size: 14, inline expansions: 1 (7 bytes) */

// <013158B4> engine2/interop.engine.cpp:2353
void CnvMpScnbjct_SetRenderSpecular(void* self, int v)
{
} /* size: 0 */

// <01358549> engine2/interop.engine.cpp:2359
// function call: 1
void CnvMpScnbjct_SetRenderTransmissive(void* self, int v)
{
	CSceneLightObject::SetRenderTransmissive(
				bool v);  // 2362
} /* size: 14, inline expansions: 1 (7 bytes) */

// <01315891> engine2/interop.engine.cpp:2359
void CnvMpScnbjct_SetRenderTransmissive(void* self, int v)
{
} /* size: 0 */

// <0131576A> engine2/interop.engine.cpp:2365
// function calls: 3
void CnvMpScnbjct_SetLightSourceSize0(void* self, float v)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2943
	CSceneLightObject::SetLightSourceSize0(
				float v);  // 2368
} /* size: 84, inline expansions: 3 (143 bytes) */

// <01315643> engine2/interop.engine.cpp:2371
// function calls: 3
void CnvMpScnbjct_SetLightSourceSize1(void* self, float v)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2949
	CSceneLightObject::SetLightSourceSize1(
				float v);  // 2374
} /* size: 84, inline expansions: 3 (143 bytes) */

// <013585AB> engine2/interop.engine.cpp:2377
// function call: 1
void CnvMpScnbjct_SetShadowTextureWidth(void* self, int v)
{
	CSceneLightObject::SetShadowTextureWidth(
				int res);  // 2380
} /* size: 11, inline expansions: 1 (6 bytes) */

// <01315620> engine2/interop.engine.cpp:2377
void CnvMpScnbjct_SetShadowTextureWidth(void* self, int v)
{
} /* size: 0 */

// <01358619> engine2/interop.engine.cpp:2383
// function call: 1
void CnvMpScnbjct_SetShadowTextureHeight(void* self, int v)
{
	CSceneLightObject::SetShadowTextureHeight(
				int res);  // 2386
} /* size: 11, inline expansions: 1 (6 bytes) */

// <013155FD> engine2/interop.engine.cpp:2383
void CnvMpScnbjct_SetShadowTextureHeight(void* self, int v)
{
} /* size: 0 */

// <013155E6> engine2/interop.engine.cpp:2389
void CnvMpScnbjct_GetShadowTextureWidth(void* self)
{
} /* size: 0 */

// <01358687> engine2/interop.engine.cpp:2395
// function call: 1
void CnvMpScnbjct_GetShadowTextureHeight(void* self)
{
	CSceneLightObject::GetShadowTextureHeight(); // 2398
} /* size: 11, inline expansions: 1 (0 bytes) */

// <013155CE> engine2/interop.engine.cpp:2395
void CnvMpScnbjct_GetShadowTextureHeight(void* self)
{
} /* size: 0 */

// <013586E1> engine2/interop.engine.cpp:2401
// function call: 1
void CnvMpScnbjct_GetLightFlags(void* self)
{
	CSceneLightObject::GetLightFlags(); // 2404
} /* size: 11, inline expansions: 1 (0 bytes) */

// <013155B6> engine2/interop.engine.cpp:2401
void CnvMpScnbjct_GetLightFlags(void* self)
{
} /* size: 0 */

// <0135873B> engine2/interop.engine.cpp:2407
// function call: 1
void CnvMpScnbjct_SetLightFlags(void* self, unsigned int flags)
{
	CSceneLightObject::SetLightFlags(
			uint flags);  // 2410
} /* size: 11, inline expansions: 1 (6 bytes) */

// <01315591> engine2/interop.engine.cpp:2407
void CnvMpScnbjct_SetLightFlags(void* self, unsigned int flags)
{
} /* size: 0 */

// <013587A9> engine2/interop.engine.cpp:2413
// function call: 1
void CnvMpScnbjct_GetLightShape(void* self)
{
	CSceneLightObject::GetLightShape(); // 2416
} /* size: 11, inline expansions: 1 (0 bytes) */

// <01315579> engine2/interop.engine.cpp:2413
void CnvMpScnbjct_GetLightShape(void* self)
{
} /* size: 0 */

// <01315450> engine2/interop.engine.cpp:2419
// function calls: 3
void CnvMpScnbjct_SetLightShape(void* self, int64 shape)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2960
	CSceneLightObject::SetLightShape(
			LightSourceShape_t shape);  // 2422
} /* size: 79, inline expansions: 3 (135 bytes) */

// <01315329> engine2/interop.engine.cpp:2425
// function calls: 3
void CnvMpScnbjct_SetLightSourceDim0(void* self, float v)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2966
	CSceneLightObject::SetLightSourceDim0(
				float v);  // 2428
} /* size: 81, inline expansions: 3 (140 bytes) */

// <01315202> engine2/interop.engine.cpp:2431
// function calls: 3
void CnvMpScnbjct_SetLightSourceDim1(void* self, float v)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2972
	CSceneLightObject::SetLightSourceDim1(
				float v);  // 2434
} /* size: 84, inline expansions: 3 (143 bytes) */

// <01358803> engine2/interop.engine.cpp:2437
// function call: 1
void CnvMpScnbjct_GetLightType(void* self)
{
	CSceneLightObject::GetLightType(); // 2440
} /* size: 11, inline expansions: 1 (0 bytes) */

// <013151EA> engine2/interop.engine.cpp:2437
void CnvMpScnbjct_GetLightType(void* self)
{
} /* size: 0 */

// <013151BD> engine2/interop.engine.cpp:2443
void _Get__CnvMpScnbjct_m_nProjectionMode(void* self)
{
} /* size: 11 */

// <01315181> engine2/interop.engine.cpp:2447
void _Set__CnvMpScnbjct_m_nProjectionMode(void* self, int64 value)
{
} /* size: 11 */

// <01315153> engine2/interop.engine.cpp:2451
void _Get__CnvMpScnbjct_m_vBoxProjectMins(void* self)
{
} /* size: 32 */

// <013150D9> engine2/interop.engine.cpp:2455
// function call: 1
void _Set__CnvMpScnbjct_m_vBoxProjectMins(void* self, Vector* value)
{
	Vector::operator=(
			const Vector& vOther);  // 2457
} /* size: 43, inline expansions: 1 (38 bytes) */

// <013150AB> engine2/interop.engine.cpp:2459
void _Get__CnvMpScnbjct_m_vBoxProjectMaxs(void* self)
{
} /* size: 32 */

// <01315031> engine2/interop.engine.cpp:2463
// function call: 1
void _Set__CnvMpScnbjct_m_vBoxProjectMaxs(void* self, Vector* value)
{
	Vector::operator=(
			const Vector& vOther);  // 2465
} /* size: 43, inline expansions: 1 (38 bytes) */

// <01315003> engine2/interop.engine.cpp:2467
void _Get__CnvMpScnbjct_m_vColor(void* self)
{
} /* size: 32 */

// <01314F89> engine2/interop.engine.cpp:2471
// function call: 1
void _Set__CnvMpScnbjct_m_vColor(void* self, Vector* value)
{
	Vector::operator=(
			const Vector& vOther);  // 2473
} /* size: 43, inline expansions: 1 (38 bytes) */

// <01314F5C> engine2/interop.engine.cpp:2475
void _Get__CnvMpScnbjct_m_nRenderPriority(void* self)
{
} /* size: 11 */

// <01314F20> engine2/interop.engine.cpp:2479
void _Set__CnvMpScnbjct_m_nRenderPriority(void* self, int value)
{
} /* size: 11 */

// <01314E11> engine2/interop.engine.cpp:2483
// function calls: 3
void _Get__CnvMpScnbjct_m_hEnvMapTexture(void* self)
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 222
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 222
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 2485
} /* size: 62, inline expansions: 3 (52 bytes) */

// <01314C0E> engine2/interop.engine.cpp:2487
// function calls: 8
void _Set__CnvMpScnbjct_m_hEnvMapTexture(void* self, HRenderTextureStrong* value)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 2489
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2489
} /* size: 162, inline expansions: 8 (245 bytes) */

// <01314BAF> engine2/interop.engine.cpp:2491
// function call: 1
void _Get__CnvMpScnbjct_m_vNormalizationSH(void* self)
{
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 2493
} /* size: 30, inline expansions: 1 (22 bytes) */

// <01314B35> engine2/interop.engine.cpp:2495
// function call: 1
void _Set__CnvMpScnbjct_m_vNormalizationSH(void* self, Vector4D* value)
{
	Vector4D::operator=(
			const Vector4D& vOther);  // 2497
} /* size: 56, inline expansions: 1 (51 bytes) */

// <01314B08> engine2/interop.engine.cpp:2499
void _Get__CnvMpScnbjct_m_flFeathering(void* self)
{
} /* size: 13 */

// <01314ACC> engine2/interop.engine.cpp:2503
void _Set__CnvMpScnbjct_m_flFeathering(void* self, float value)
{
} /* size: 13 */

// <01314A7F> engine2/interop.engine.cpp:2507
void CFrustum_Create(void)
{
} /* size: 40 */

// <013594EA> engine2/interop.engine.cpp:2513
// function calls: 2
void CFrustum_Delete(void* self)
{
	CFrustum::~CFrustum(); // 2516
	CFrustum_Delete(void* self); // 2513
} /* size: 25, inline expansions: 2 (15 bytes) */

// <01314A67> engine2/interop.engine.cpp:2513
void CFrustum_Delete(void* self)
{
} /* size: 0 */

// <01314732> engine2/interop.engine.cpp:2519
// function calls: 6
void CFrustum_InitCamera(void* self, Vector* origin, QAngle* angles, float flNear, float flFar, float flFOV, float flAspect, float flClipSpaceBottomLeftX, float flClipSpaceBottomLeftY, float flClipSpaceTopRightX, float flClipSpaceTopRightY)
{
	Vector::operator=(
			const Vector& vOther);  // 78
	QAngle::operator=(
			const QAngle& vOther);  // 79
	Camera_t::InitViewParameters(
				const Vector& vOrigin,
				const QAngle& vAngles);  // 63
	Camera_t::InitPerspectiveProjection(
					float flZNear,
					float flZFar,
					float flFOVX,
					float flAspect);  // 64
	Camera_t::Init(
		const Vector& origin,
		const QAngle& angles,
		float flNear,
		float flFar,
		float flFOV,
		float flAspect);  // 285
	CFrustum::InitCamera(
			const Vector& origin,
			const QAngle& angles,
			float flNear,
			float flFar,
			float flFOV,
			float flAspect,
			float flClipSpaceBottomLeftX,
			float flClipSpaceBottomLeftY,
			float flClipSpaceTopRightX,
			float flClipSpaceTopRightY);  // 2522
} /* size: 119, inline expansions: 6 (361 bytes) */

// <01314459> engine2/interop.engine.cpp:2525
// function calls: 6
void CFrustum_InitCamera_1(void* self, Vector* origin, QAngle* angles, float flNear, float flFar, float flFOV, float flAspect)
{
	Vector::operator=(
			const Vector& vOther);  // 78
	QAngle::operator=(
			const QAngle& vOther);  // 79
	Camera_t::InitViewParameters(
				const Vector& vOrigin,
				const QAngle& vAngles);  // 63
	Camera_t::InitPerspectiveProjection(
					float flZNear,
					float flZFar,
					float flFOVX,
					float flAspect);  // 64
	Camera_t::Init(
		const Vector& origin,
		const QAngle& angles,
		float flNear,
		float flFar,
		float flFOV,
		float flAspect);  // 285
	CFrustum::InitCamera(
			const Vector& origin,
			const QAngle& angles,
			float flNear,
			float flFar,
			float flFOV,
			float flAspect,
			float flClipSpaceBottomLeftX,
			float flClipSpaceBottomLeftY,
			float flClipSpaceTopRightX,
			float flClipSpaceTopRightY);  // 2528
} /* size: 105, inline expansions: 6 (311 bytes) */

// <01314174> engine2/interop.engine.cpp:2531
// function calls: 6
void CFrustum_InitOrthoCamera(void* self, Vector* origin, QAngle* angles, float flNear, float flFar, float flWidth, float flHeight)
{
	Vector::operator=(
			const Vector& vOther);  // 78
	QAngle::operator=(
			const QAngle& vOther);  // 79
	Camera_t::InitViewParameters(
				const Vector& vOrigin,
				const QAngle& vAngles);  // 71
	Camera_t::InitOrthoProjection(
				float flZNear,
				float flZFar,
				float flWidth,
				float flHeight);  // 72
	Camera_t::InitOrtho(
			const Vector& origin,
			const QAngle& angles,
			float flNear,
			float flFar,
			float flWidth,
			float flHeight);  // 299
	CFrustum::InitOrthoCamera(
			const Vector& origin,
			const QAngle& angles,
			float flNear,
			float flFar,
			float flWidth,
			float flHeight,
			float flClipSpaceBottomLeftX,
			float flClipSpaceBottomLeftY,
			float flClipSpaceTopRightX,
			float flClipSpaceTopRightY);  // 2534
} /* size: 116, inline expansions: 6 (337 bytes) */

// <013140B6> engine2/interop.engine.cpp:2537
// function call: 1
void CFrustum_SetCameraWidthHeight(void* self, float flWidth, float flHeight)
{
	CFrustum::SetCameraWidthHeight(
				float flWidth,
				float flHeight);  // 2540
} /* size: 49, inline expansions: 1 (44 bytes) */

// <01313F86> engine2/interop.engine.cpp:2543
void CFrustum_BuildFrustumFromVectors(void* self, Vector* origin, float flNear, float flFar, float flFOV, float flAspect, Vector* forward, Vector* left, Vector* up)
{
} /* size: 9 */

// <01313E2E> engine2/interop.engine.cpp:2549
// variable: 1
// function calls: 5
void CFrustum_GetView(void* __self)
{
	CFrustum* self; // 2553
	matrix3x4_t::Base(); // 560
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 560
	VMatrix::Init(
		const matrix3x4_t& matrix3x4);  // 499
	VMatrix::VMatrix(
		const matrix3x4_t& matrix3x4);  // 2556
} /* size: 92, variables: 1, inline expansions: 5 (298 bytes) */

// <01313E01> engine2/interop.engine.cpp:2560
void CFrustum_GetProj(void* self)
{
} /* size: 95 */

// <01313DD4> engine2/interop.engine.cpp:2566
void CFrustum_GetInvProj(void* self)
{
} /* size: 95 */

// <01313DA7> engine2/interop.engine.cpp:2572
void CFrustum_GetReverseZProj(void* self)
{
} /* size: 95 */

// <01313D7A> engine2/interop.engine.cpp:2578
void CFrustum_GetInvReverseZProj(void* self)
{
} /* size: 95 */

// <01313D4D> engine2/interop.engine.cpp:2584
void CFrustum_GetViewProj(void* self)
{
} /* size: 95 */

// <01313D20> engine2/interop.engine.cpp:2590
void CFrustum_GetInvViewProj(void* self)
{
} /* size: 95 */

// <01313CF3> engine2/interop.engine.cpp:2596
void CFrustum_GetInvReverseZViewProj(void* self)
{
} /* size: 95 */

// <01313C73> engine2/interop.engine.cpp:2602
// function call: 1
void CFrustum_GetInvReverseZViewProjTranspose(void* self)
{
	CFrustum::GetInvReverseZViewProjTranspose(); // 2605
} /* size: 70, inline expansions: 1 (12 bytes) */

// <01313C46> engine2/interop.engine.cpp:2608
void CFrustum_GetReverseZViewProj(void* self)
{
} /* size: 95 */

// <01313BC6> engine2/interop.engine.cpp:2614
// function call: 1
void CFrustum_GetReverseZViewProjTranspose(void* self)
{
	CFrustum::GetReverseZViewProjTranspose(); // 2617
} /* size: 70, inline expansions: 1 (12 bytes) */

// <013139D1> engine2/interop.engine.cpp:2620
// function calls: 7
void CFrustum_BoundingVolumeIntersectsFrustum(void* self, AABB_t* box)
{
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 595
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 596
	CFrustum::BoundingVolumeIntersectsFrustum(
					const AABB_t& box);  // 2623
} /* size: 136, inline expansions: 7 (182 bytes) */

// <01313950> engine2/interop.engine.cpp:2626
void CFrustum_ScreenTransform(void* self, Vector* world, Vector* result)
{
} /* size: 18 */

// <013138CF> engine2/interop.engine.cpp:2632
void CFrustum_WorldToView(void* self, Vector* vWorld, Vector2D* pOutViewMinusOneToOne)
{
} /* size: 9 */

// <01313820> engine2/interop.engine.cpp:2644
void CFrustum_GetCameraPosition(void* self)
{
} /* size: 25 */

// <013137F2> engine2/interop.engine.cpp:2650
void CFrustum_GetCameraAngles(void* self)
{
} /* size: 26 */

// <01313794> engine2/interop.engine.cpp:2656
// function call: 1
void CFrustum_GetCameraNearPlane(void* self)
{
	CFrustum::GetCameraNearPlane(); // 2659
} /* size: 10, inline expansions: 1 (0 bytes) */

// <01313736> engine2/interop.engine.cpp:2662
// function call: 1
void CFrustum_GetCameraFarPlane(void* self)
{
	CFrustum::GetCameraFarPlane(); // 2665
} /* size: 10, inline expansions: 1 (0 bytes) */

// <013136D8> engine2/interop.engine.cpp:2668
// function call: 1
void CFrustum_GetCameraFOV(void* self)
{
	CFrustum::GetCameraFOV(); // 2671
} /* size: 10, inline expansions: 1 (0 bytes) */

// <0131367A> engine2/interop.engine.cpp:2674
// function call: 1
void CFrustum_GetCameraAspect(void* self)
{
	CFrustum::GetCameraAspect(); // 2677
} /* size: 10, inline expansions: 1 (0 bytes) */

// <01313583> engine2/interop.engine.cpp:2680
// function call: 1
void CFrustum_GetPlane(void* self, int index, Vector* normal, float* distance)
{
	CFrustum::GetPlane(
		int index,
		Vector& normalOut,
		float& distOut);  // 2683
} /* size: 13, inline expansions: 1 (9 bytes) */

// <013133FD> engine2/interop.engine.cpp:2686
// function calls: 6
void CHitBox_GetTag(void* self, int index)
{
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 458
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 460
	CUtlString::Get(); // 99
	CUtlString::String(); // 460
	CHitBox::GetTag(
		int index);  // 2689
} /* size: 63, inline expansions: 6 (98 bytes) */

// <013133CF> engine2/interop.engine.cpp:2692
void _Get__CHitBox_m_vMinBounds(void* self)
{
} /* size: 26 */

// <01313355> engine2/interop.engine.cpp:2696
// function call: 1
void _Set__CHitBox_m_vMinBounds(void* self, Vector* value)
{
	Vector::operator=(
			const Vector& vOther);  // 2698
} /* size: 34, inline expansions: 1 (29 bytes) */

// <01313327> engine2/interop.engine.cpp:2700
void _Get__CHitBox_m_vMaxBounds(void* self)
{
} /* size: 26 */

// <013132AD> engine2/interop.engine.cpp:2704
// function call: 1
void _Set__CHitBox_m_vMaxBounds(void* self, Vector* value)
{
	Vector::operator=(
			const Vector& vOther);  // 2706
} /* size: 34, inline expansions: 1 (29 bytes) */

// <01313207> engine2/interop.engine.cpp:2708
// function calls: 2
void _Get__CHitBox_m_name(void* self)
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 2710
} /* size: 27, inline expansions: 2 (36 bytes) */

// <0131316E> engine2/interop.engine.cpp:2712
// function call: 1
void _Set__CHitBox_m_name(void* self, const char* value)
{
	CUtlString::operator=(
			const char* src);  // 2714
} /* size: 13, inline expansions: 1 (5 bytes) */

// <013130C8> engine2/interop.engine.cpp:2716
// function calls: 2
void _Get__CHitBox_m_sSurfaceProperty(void* self)
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 2718
} /* size: 27, inline expansions: 2 (36 bytes) */

// <0131302F> engine2/interop.engine.cpp:2720
// function call: 1
void _Set__CHitBox_m_sSurfaceProperty(void* self, const char* value)
{
	CUtlString::operator=(
			const char* src);  // 2722
} /* size: 13, inline expansions: 1 (5 bytes) */

// <01312F89> engine2/interop.engine.cpp:2724
// function calls: 2
void _Get__CHitBox_m_sBoneName(void* self)
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 2726
} /* size: 27, inline expansions: 2 (36 bytes) */

// <01312EC3> engine2/interop.engine.cpp:2732
void _Get__CHitBox_m_flShapeRadius(void* self)
{
} /* size: 10 */

// <01312E87> engine2/interop.engine.cpp:2736
void _Set__CHitBox_m_flShapeRadius(void* self, float value)
{
} /* size: 10 */

// <01312E5A> engine2/interop.engine.cpp:2740
void _Get__CHitBox_m_nBoneNameHash(void* self)
{
} /* size: 8 */

// <01312DF1> engine2/interop.engine.cpp:2748
void _Get__CHitBox_m_cRenderColor(void* self)
{
} /* size: 8 */

// <01312D06> engine2/interop.engine.cpp:2752
// function calls: 3
void _Set__CHitBox_m_cRenderColor(void* self, Color value)
{
	Color::GetRawColor(); // 147
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 2754
} /* size: 8, inline expansions: 3 (6 bytes) */

// <01312CD9> engine2/interop.engine.cpp:2756
void _Get__CHitBox_m_nHitBoxIndex(void* self)
{
} /* size: 9 */

// <01312C9D> engine2/interop.engine.cpp:2760
void _Set__CHitBox_m_nHitBoxIndex(void* self, short unsigned int value)
{
} /* size: 9 */

// <01312C70> engine2/interop.engine.cpp:2764
void _Get__CHitBox_m_nShapeType(void* self)
{
} /* size: 9 */

// <01312C34> engine2/interop.engine.cpp:2768
void _Set__CHitBox_m_nShapeType(void* self, unsigned char value)
{
} /* size: 9 */

// <01312C07> engine2/interop.engine.cpp:2772
void _Get__CHitBox_m_bForcedTransform(void* self)
{
} /* size: 9 */

// <01312BCB> engine2/interop.engine.cpp:2776
void _Set__CHitBox_m_bForcedTransform(void* self, int value)
{
} /* size: 11 */

// <01312B9E> engine2/interop.engine.cpp:2780
void _Get__CHitBox_m_bTranslationOnly(void* self)
{
} /* size: 9 */

// <01312B62> engine2/interop.engine.cpp:2784
void _Set__CHitBox_m_bTranslationOnly(void* self, int value)
{
} /* size: 11 */

// <01312B35> engine2/interop.engine.cpp:2788
void _Get__CHitBox_m_bVisible(void* self)
{
} /* size: 9 */

// <01312AF9> engine2/interop.engine.cpp:2792
void _Set__CHitBox_m_bVisible(void* self, int value)
{
} /* size: 11 */

// <01312ACC> engine2/interop.engine.cpp:2796
void _Get__CHitBox_m_bSelected(void* self)
{
} /* size: 9 */

// <01312A90> engine2/interop.engine.cpp:2800
void _Set__CHitBox_m_bSelected(void* self, int value)
{
} /* size: 11 */

// <01312A47> engine2/interop.engine.cpp:2804
void CHitBoxSet_numhitboxes(void* self)
{
} /* size: 9 */

// <013129E2> engine2/interop.engine.cpp:2810
void CHitBoxSet_pHitbox(void* self, int nIndex)
{
} /* size: 9 */

// <013129CB> engine2/interop.engine.cpp:2816
void _Get__CHitBoxSet_m_name(void* self)
{
} /* size: 0 */

// <013129A7> engine2/interop.engine.cpp:2820
void _Set__CHitBoxSet_m_name(void* self, const char* value)
{
} /* size: 0 */

// <01312901> engine2/interop.engine.cpp:2824
// function calls: 2
void _Get__CHitBoxSet_m_SourceFilename(void* self)
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 2826
} /* size: 27, inline expansions: 2 (36 bytes) */

// <01312868> engine2/interop.engine.cpp:2828
// function call: 1
void _Set__CHitBoxSet_m_SourceFilename(void* self, const char* value)
{
	CUtlString::operator=(
			const char* src);  // 2830
} /* size: 13, inline expansions: 1 (5 bytes) */

// <013127FF> engine2/interop.engine.cpp:2832
void* From_CSceneObject_To_CManagedSceneObject(CSceneObject* ptr)
{
} /* size: 35 */

// <013127E3> engine2/interop.engine.cpp:2833
void* To_CSceneObject_From_CManagedSceneObject(CManagedSceneObject* ptr)
{
} /* size: 0 */

// <01312719> engine2/interop.engine.cpp:2835
// function calls: 3
void CMngdScnbjct_Create(ISceneWorld* world)
{
	CSceneObject::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CManagedSceneObject*>(CManagedSceneObject* c); // 2838
} /* size: 64, inline expansions: 3 (58 bytes) */

// <013126E8> engine2/interop.engine.cpp:2841
void CMngdScnbjct_ChangeFlags(void* self, int64 nNewFlags, int64 nNewFlagsMask)
{
} /* size: 0 */

// <013126C4> engine2/interop.engine.cpp:2847
void CMngdScnbjct_SetFlags(void* self, int64 nFlagsToOR)
{
} /* size: 0 */

// <013126A0> engine2/interop.engine.cpp:2853
void CMngdScnbjct_HasFlags(void* self, int64 nFlags)
{
} /* size: 0 */

// <01312689> engine2/interop.engine.cpp:2859
void CMngdScnbjct_GetFlags(void* self)
{
} /* size: 0 */

// <01312672> engine2/interop.engine.cpp:2865
void CMngdScnbjct_GetOriginalFlags(void* self)
{
} /* size: 0 */

// <0131264E> engine2/interop.engine.cpp:2871
void CMngdScnbjct_ClearFlags(void* self, int64 nFlagsToClear)
{
} /* size: 0 */

// <0131262A> engine2/interop.engine.cpp:2877
void CMngdScnbjct_SetCullDistance(void* self, float dist)
{
} /* size: 0 */

// <01312613> engine2/interop.engine.cpp:2883
void CMngdScnbjct_EnableLightingCache(void* self)
{
} /* size: 0 */

// <013125E2> engine2/interop.engine.cpp:2889
void CMngdScnbjct_SetLightingOrigin(void* self, Vector* vPos, int worldspace)
{
} /* size: 0 */

// <013125CB> engine2/interop.engine.cpp:2895
void CMngdScnbjct_GetLightingOrigin(void* self)
{
} /* size: 0 */

// <013125B4> engine2/interop.engine.cpp:2901
void CMngdScnbjct_HasLightingOrigin(void* self)
{
} /* size: 0 */

// <01312590> engine2/interop.engine.cpp:2907
void CMngdScnbjct_SetTintRGBA(void* self, Vector4D* color)
{
} /* size: 0 */

// <01312579> engine2/interop.engine.cpp:2913
void CMngdScnbjct_GetTintRGBA(void* self)
{
} /* size: 0 */

// <01312555> engine2/interop.engine.cpp:2919
void CMngdScnbjct_SetAlphaFade(void* self, float nAlpha)
{
} /* size: 0 */

// <0131253E> engine2/interop.engine.cpp:2925
void CMngdScnbjct_GetAlphaFade(void* self)
{
} /* size: 0 */

// <0131251A> engine2/interop.engine.cpp:2931
void CMngdScnbjct_SetMaterialOverrideForMeshInstances(void* self, HMaterialStrong* mat)
{
} /* size: 0 */

// <01312503> engine2/interop.engine.cpp:2937
void CMngdScnbjct_ClearMaterialOverrideList(void* self)
{
} /* size: 0 */

// <013124C5> engine2/interop.engine.cpp:2943
void CMngdScnbjct_SetMaterialOverride(void* self, HMaterialStrong* hMaterial, uint32 nAttr, int nAttrValueMatch)
{
} /* size: 0 */

// <013124AE> engine2/interop.engine.cpp:2949
void CMngdScnbjct_IsLoaded(void* self)
{
} /* size: 0 */

// <01312497> engine2/interop.engine.cpp:2955
void CMngdScnbjct_IsRenderingEnabled(void* self)
{
} /* size: 0 */

// <01312480> engine2/interop.engine.cpp:2961
void CMngdScnbjct_SetLoaded(void* self)
{
} /* size: 0 */

// <01312469> engine2/interop.engine.cpp:2967
void CMngdScnbjct_ClearLoaded(void* self)
{
} /* size: 0 */

// <01312452> engine2/interop.engine.cpp:2973
void CMngdScnbjct_DisableRendering(void* self)
{
} /* size: 0 */

// <0131243B> engine2/interop.engine.cpp:2979
void CMngdScnbjct_EnableRendering(void* self)
{
} /* size: 0 */

// <01312417> engine2/interop.engine.cpp:2985
void CMngdScnbjct_SetRenderingEnabled(void* self, int bEnabled)
{
} /* size: 0 */

// <01312400> engine2/interop.engine.cpp:2991
void CMngdScnbjct_GetBoundingSphereRadius(void* self)
{
} /* size: 0 */

// <013123DD> engine2/interop.engine.cpp:2997
void CMngdScnbjct_SetTransform(void* self, CTransformUnaligned* tx)
{
} /* size: 0 */

// <013123C6> engine2/interop.engine.cpp:3003
void CMngdScnbjct_GetCTransform(void* self)
{
} /* size: 0 */

// <013123A2> engine2/interop.engine.cpp:3009
void CMngdScnbjct_SetBounds(void* self, AABB_t* box)
{
} /* size: 0 */

// <0131238B> engine2/interop.engine.cpp:3015
void CMngdScnbjct_GetBounds(void* self)
{
} /* size: 0 */

// <01312374> engine2/interop.engine.cpp:3021
void CMngdScnbjct_SetBoundsInfinite(void* self)
{
} /* size: 0 */

// <0131235D> engine2/interop.engine.cpp:3027
void CMngdScnbjct_GetParent(void* self)
{
} /* size: 0 */

// <0131231F> engine2/interop.engine.cpp:3033
void CMngdScnbjct_AddChildObject(void* self, uint32 nId, CSceneObject* pChild, unsigned int nChildUpdateFlags)
{
} /* size: 0 */

// <013122FB> engine2/interop.engine.cpp:3039
void CMngdScnbjct_RemoveChild(void* self, CSceneObject* obj)
{
} /* size: 0 */

// <013122E4> engine2/interop.engine.cpp:3045
void CMngdScnbjct_GetAttributesPtrForModify(void* self)
{
} /* size: 0 */

// <013122C0> engine2/interop.engine.cpp:3051
void CMngdScnbjct_EnableMeshGroups(void* self, uint64 nMask)
{
} /* size: 0 */

// <0131229C> engine2/interop.engine.cpp:3057
void CMngdScnbjct_DisableMeshGroups(void* self, uint64 nMask)
{
} /* size: 0 */

// <01312278> engine2/interop.engine.cpp:3063
void CMngdScnbjct_ResetMeshGroups(void* self, uint64 nMask)
{
} /* size: 0 */

// <01312261> engine2/interop.engine.cpp:3069
void CMngdScnbjct_GetCurrentMeshGroupMask(void* self)
{
} /* size: 0 */

// <0131224A> engine2/interop.engine.cpp:3075
void CMngdScnbjct_GetWorld(void* self)
{
} /* size: 0 */

// <01312226> engine2/interop.engine.cpp:3081
void CMngdScnbjct_SetLOD(void* self, int nLOD)
{
} /* size: 0 */

// <0131220F> engine2/interop.engine.cpp:3087
void CMngdScnbjct_DisableLOD(void* self)
{
} /* size: 0 */

// <013121F8> engine2/interop.engine.cpp:3093
void CMngdScnbjct_GetCurrentLODGroupMask(void* self)
{
} /* size: 0 */

// <013121CA> engine2/interop.engine.cpp:3105
void CMngdScnbjct_GetModelHandle(void* self)
{
} /* size: 0 */

// <013121A6> engine2/interop.engine.cpp:3111
void CMngdScnbjct_SetMaterialGroup(void* self, uint32 token)
{
} /* size: 0 */

// <01312175> engine2/interop.engine.cpp:3117
void CMngdScnbjct_SetBodyGroup(void* self, uint32 token, int value)
{
} /* size: 0 */

// <01312150> engine2/interop.engine.cpp:3123
void CMngdScnbjct_SetBatchable(void* self, int bIsBatchable)
{
} /* size: 0 */

// <01312139> engine2/interop.engine.cpp:3129
void CMngdScnbjct_IsNotBatchable(void* self)
{
} /* size: 0 */

// <01312114> engine2/interop.engine.cpp:3135
void CMngdScnbjct_SetUniqueBatchGroup(void* self, int bUnique)
{
} /* size: 0 */

// <013120D9> engine2/interop.engine.cpp:3147
void CMngdScnbjct_RemoveAllTags(void* self)
{
} /* size: 0 */

// <013120C2> engine2/interop.engine.cpp:3153
void CMngdScnbjct_GetTagCount(void* self)
{
} /* size: 0 */

// <013120A0> engine2/interop.engine.cpp:3159
void CMngdScnbjct_GetTagAt(void* self, int i)
{
} /* size: 0 */

// <0131207C> engine2/interop.engine.cpp:3165
void CMngdScnbjct_AddTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <01312058> engine2/interop.engine.cpp:3171
void CMngdScnbjct_HasTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <01312034> engine2/interop.engine.cpp:3177
void CMngdScnbjct_SetForceLayerID(void* self, uint32 nTok)
{
} /* size: 0 */

// <01312010> engine2/interop.engine.cpp:3183
void CMngdScnbjct_SetLayerMatchID(void* self, uint32 nTok)
{
} /* size: 0 */

// <01311FEC> engine2/interop.engine.cpp:3189
// variable: 1
void CMngdScnbjct_UpdateFlagsBasedOnMaterial(void* __self)
{
	CManagedSceneObject* self; // 3193
} /* size: 0, variables: 1 */

// <01311FBB> engine2/interop.engine.cpp:3201
void CMngdScnbjct_SetMaterialOverrideByIndex(void* self, int index, HMaterialStrong* material)
{
} /* size: 0 */

// <01311F8E> engine2/interop.engine.cpp:3207
void _Get__CMngdScnbjct_ExecuteOnMainThread(void* self)
{
} /* size: 12 */

// <01311F52> engine2/interop.engine.cpp:3211
void _Set__CMngdScnbjct_ExecuteOnMainThread(void* self, int value)
{
} /* size: 14 */

// <01311EEA> engine2/interop.engine.cpp:3215
void CMtrlSystm2ppSys_Create(MaterialSystem2AppSystemDictCreateInfo* createInfo)
{
} /* size: 51 */

// <01311E94> engine2/interop.engine.cpp:3221
void CMtrlSystm2ppSys_Destroy(void* self)
{
} /* size: 17 */

// <01311E4F> engine2/interop.engine.cpp:3227
void CMtrlSystm2ppSys_Init(void* self)
{
} /* size: 19 */

// <01311E06> engine2/interop.engine.cpp:3233
void CMtrlSystm2ppSys_InitWithoutMaterialSystem(void* self)
{
} /* size: 18 */

// <01311DBD> engine2/interop.engine.cpp:3239
void CMtrlSystm2ppSys_InitFinishSetupMaterialSystem(void* self)
{
} /* size: 18 */

// <01311D6F> engine2/interop.engine.cpp:3245
const void* CMtrlSystm2ppSys_GetAppWindow(void* self)
{
} /* size: 9 */

// <01311D11> engine2/interop.engine.cpp:3251
// function call: 1
void CMtrlSystm2ppSys_GetAppWindowSwapChain(void* self)
{
	CMaterialSystem2AppSystemDict::GetAppWindowSwapChain(); // 3254
} /* size: 12, inline expansions: 1 (0 bytes) */

// <01311CAC> engine2/interop.engine.cpp:3257
void CMtrlSystm2ppSys_SetAppWindowTitle(void* self, const char* title)
{
} /* size: 9 */

// <01311C47> engine2/interop.engine.cpp:3263
void CMtrlSystm2ppSys_SetAppWindowIcon(void* self, const char* title)
{
} /* size: 9 */

// <01311BE2> engine2/interop.engine.cpp:3269
void CMtrlSystm2ppSys_SetInitialAppWindowImage(void* self, const char* vmat)
{
} /* size: 9 */

// <01311B75> engine2/interop.engine.cpp:3275
void CMtrlSystm2ppSys_SetAppWindowDiscardMouseFocusClick(void* self, int discard)
{
} /* size: 19 */

// <01311B2C> engine2/interop.engine.cpp:3281
void CMtrlSystm2ppSys_DrawInitialWindowImage(void* self)
{
} /* size: 9 */

// <01311924> engine2/interop.engine.cpp:3287
// function calls: 5
void CMtrlSystm2ppSys_SuppressStartupManifestLoad(void* self, int b)
{
	{
	}
	CAppSystemDict::IsInToolsMode(); // 565
	CAppSystemDict::IsConsoleApp(); // 566
	CTier2AppSystemDict::LoadStartupManifest(); // 502
	CTier2AppSystemDict::SuppressStartupManifestLoad(
					bool bEnable);  // 488
	CTier2AppSystemDict::SuppressStartupManifestLoad(
					bool bEnable);  // 3290
} /* size: 0, inline expansions: 5 (534 bytes) */

// <013118BF> engine2/interop.engine.cpp:3293
void CMtrlSystm2ppSys_SetModuleSearchPath(void* self, const char* dir)
{
} /* size: 9 */

// <013117F4> engine2/interop.engine.cpp:3299
// function call: 1
void CMtrlSystm2ppSys_SetModGameSubdir(void* self, const char* dir)
{
	CTier1AppSystemDict::SetModGameSubdir(
			const char* pModGameSubDir);  // 3302
} /* size: 58, inline expansions: 1 (33 bytes) */

// <013116C5> engine2/interop.engine.cpp:3305
// function calls: 2
void CMtrlSystm2ppSys_SetModFromFileName(void* self, const char* filename, int noExeCheck)
{
	CTier1AppSystemDict::SetModGameSubdir(
			const char* pModGameSubDir);  // 449
	CTier1AppSystemDict::SetModFromFileName(
				const char* pFileName,
				bool bNoExeCheck);  // 3308
} /* size: 58, inline expansions: 2 (82 bytes) */

// <01311667> engine2/interop.engine.cpp:3311
// function call: 1
void CMtrlSystm2ppSys_DisableModPathCheck(void* self)
{
	CTier1AppSystemDict::DisableModPathCheck(); // 3314
} /* size: 12, inline expansions: 1 (7 bytes) */

// <01311590> engine2/interop.engine.cpp:3317
// function calls: 2
void CMtrlSystm2ppSys_SetDefaultRenderSystemOption(void* self, const char* system)
{
	CUtlString::operator=(
			const char* src);  // 96
	CMaterialSystem2AppSystemDict::SetDefaultRenderSystemOption(
					const char* pOption);  // 3320
} /* size: 16, inline expansions: 2 (17 bytes) */

// <013114E4> engine2/interop.engine.cpp:3329
void CMtrlSystm2ppSys_GetInitializationPhase(void* self)
{
} /* size: 9 */

// <0131149B> engine2/interop.engine.cpp:3335
void CMtrlSystm2ppSys_PreShutdown(void* self)
{
} /* size: 9 */

// <013113ED> engine2/interop.engine.cpp:3347
void CMtrlSystm2ppSys_ShutdownSDL(void* self)
{
} /* size: 9 */

// <0131138F> engine2/interop.engine.cpp:3353
// function call: 1
void CMtrlSystm2ppSys_IsConsoleApp(void* self)
{
	CAppSystemDict::IsConsoleApp(); // 3356
} /* size: 12, inline expansions: 1 (0 bytes) */

// <01311331> engine2/interop.engine.cpp:3359
// function call: 1
void CMtrlSystm2ppSys_IsGameApp(void* self)
{
	CAppSystemDict::IsGameApp(); // 3362
} /* size: 12, inline expansions: 1 (0 bytes) */

// <013112C3> engine2/interop.engine.cpp:3365
// function call: 1
void CMtrlSystm2ppSys_SetDedicatedServer(void* self, int bIsDedicatedServer)
{
	CAppSystemDict::SetDedicatedServer(
				bool bIsDedicatedServer);  // 3368
} /* size: 14, inline expansions: 1 (7 bytes) */

// <01311265> engine2/interop.engine.cpp:3371
// function call: 1
void CMtrlSystm2ppSys_IsDedicatedServer(void* self)
{
	CAppSystemDict::IsDedicatedServer(); // 3374
} /* size: 12, inline expansions: 1 (0 bytes) */

// <013111BE> engine2/interop.engine.cpp:3377
// function calls: 2
void CMtrlSystm2ppSys_GetContentPath(void* self)
{
	CUtlString::IsEmpty(); // 426
	CAppSystemDict::GetContentPath(); // 3380
} /* size: 30, inline expansions: 2 (33 bytes) */

// <01311117> engine2/interop.engine.cpp:3383
// function calls: 2
void CMtrlSystm2ppSys_GetModGameSubdir(void* self)
{
	CUtlString::IsEmpty(); // 431
	CAppSystemDict::GetModGameSubdir(); // 3386
} /* size: 30, inline expansions: 2 (33 bytes) */

// <0131107B> engine2/interop.engine.cpp:3389
// function call: 1
void CMtrlSystm2ppSys_SetInToolsMode(void* self)
{
	CAppSystemDict::SetInToolsMode(); // 3392
} /* size: 82, inline expansions: 1 (45 bytes) */

// <0131101D> engine2/interop.engine.cpp:3395
// function call: 1
void CMtrlSystm2ppSys_IsInToolsMode(void* self)
{
	CAppSystemDict::IsInToolsMode(); // 3398
} /* size: 12, inline expansions: 1 (0 bytes) */

// <01310FBF> engine2/interop.engine.cpp:3401
// function call: 1
void CMtrlSystm2ppSys_IsInDeveloperMode(void* self)
{
	CAppSystemDict::IsInDeveloperMode(); // 3404
} /* size: 12, inline expansions: 1 (0 bytes) */

// <01310E71> engine2/interop.engine.cpp:3413
const void* CMtrlSystm2ppSys_CreateAppWindow(void* self, const char* pTitle, int nPlatWindowFlags, int x, int y, int w, int h, int nRefreshRateHz)
{
} /* size: 9 */

// <01310E13> engine2/interop.engine.cpp:3419
// function call: 1
void CMtrlSystm2ppSys_SuppressCOMInitialization(void* self)
{
	CAppSystemDict::SuppressCOMInitialization(); // 3422
} /* size: 12, inline expansions: 1 (7 bytes) */

// <01310DB5> engine2/interop.engine.cpp:3425
// function call: 1
void CMtrlSystm2ppSys_IsRunningOnCustomerMachine(void* self)
{
	CAppSystemDict::IsRunningOnCustomerMachine(); // 3428
} /* size: 12, inline expansions: 1 (0 bytes) */

// <01310D2A> engine2/interop.engine.cpp:3431
const void* CMtrlSystm2ppSys_AddSystem(void* self, const char* dllName, const char* interfaceName)
{
} /* size: 11 */

// <01310CCC> engine2/interop.engine.cpp:3437
// function call: 1
void CMtrlSystm2ppSys_SetInTestMode(void* self)
{
	CAppSystemDict::SetInTestMode(); // 3440
} /* size: 12, inline expansions: 1 (7 bytes) */

// <01310C6E> engine2/interop.engine.cpp:3443
// function call: 1
void CMtrlSystm2ppSys_IsInTestMode(void* self)
{
	CAppSystemDict::IsInTestMode(); // 3446
} /* size: 12, inline expansions: 1 (0 bytes) */

// <01310C10> engine2/interop.engine.cpp:3449
// function call: 1
void CMtrlSystm2ppSys_SetInStandaloneApp(void* self)
{
	CAppSystemDict::SetInStandaloneApp(); // 3452
} /* size: 12, inline expansions: 1 (7 bytes) */

// <01310B38> engine2/interop.engine.cpp:3461
// function call: 1
void CMtrlSystm2ppSys_SetSteamAppId(void* self, unsigned int appId)
{
	CAppSystemDict::SetSteamAppId(
			uint32 appId);  // 3464
} /* size: 11, inline expansions: 1 (6 bytes) */

// <01310ADA> engine2/interop.engine.cpp:3467
// function call: 1
void CMtrlSystm2ppSys_GetSteamAppId(void* self)
{
	CAppSystemDict::GetSteamAppId(); // 3470
} /* size: 11, inline expansions: 1 (0 bytes) */

// <0136A16F> engine2/interop.engine.cpp:3473
// function calls: 2
void CModel_DestroyStrongHandle(void* self)
{
	CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 3476
	CModel_DestroyStrongHandle(void* self); // 3473
} /* size: 49, inline expansions: 2 (40 bytes) */

// <01310AC2> engine2/interop.engine.cpp:3473
void CModel_DestroyStrongHandle(void* self)
{
} /* size: 0 */

// <01310A64> engine2/interop.engine.cpp:3479
// function call: 1
void CModel_IsStrongHandleValid(void* self)
{
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3482
} /* size: 24, inline expansions: 1 (19 bytes) */

// <01310A06> engine2/interop.engine.cpp:3485
// function call: 1
void CModel_IsError(void* self)
{
	CStrongHandle<InfoForResourceTypeCModel>::IsError(); // 3488
} /* size: 24, inline expansions: 1 (16 bytes) */

// <013109AD> engine2/interop.engine.cpp:3491
// function call: 1
void CModel_IsStrongHandleLoaded(void* self)
{
	CStrongHandle<InfoForResourceTypeCModel>::IsLoaded(); // 3494
} /* size: 41, inline expansions: 1 (28 bytes) */

// <013107CA> engine2/interop.engine.cpp:3497
// function calls: 8
void CModel_CopyStrongHandle(void* self)
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCModel>::GetHandle(); // 3500
	CWeakHandle<InfoForResourceTypeCModel>::GetBinding(); // 476
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 3500
} /* size: 102, inline expansions: 8 (127 bytes) */

// <01310767> engine2/interop.engine.cpp:3503
// function call: 1
const void* CModel_GetBindingPtr(void* self)
{
	CStrongHandle<InfoForResourceTypeCModel>::GetBinding(); // 3506
} /* size: 8, inline expansions: 1 (0 bytes) */

// <01310690> engine2/interop.engine.cpp:3509
// variables: 2
// function calls: 2
void CModel_GetModelName(void* self)
{
	HModelStrong* __handle; // 3512
	CModel* __self; // 3514
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3513
	CModel::GetModelName(); // 3516
} /* size: 51, variables: 2, inline expansions: 2 (21 bytes) */

// <0131058A> engine2/interop.engine.cpp:3519
// variables: 2
// function calls: 3
void CModel_GetBaseModelName(void* self)
{
	HModelStrong* __handle; // 3522
	CModel* __self; // 3524
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3523
	CUtlString::Get(); // 731
	CModel::GetBaseModelName(); // 3526
} /* size: 59, variables: 2, inline expansions: 3 (58 bytes) */

// <013103D3> engine2/interop.engine.cpp:3529
// variables: 2
// function calls: 7
void CModel_GetBaseModel(void* self)
{
	HModelStrong* __handle; // 3532
	CModel* __self; // 3534
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3533
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 732
	CModel::GetBaseModel(); // 3536
	CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CWeakHandle<InfoForResourceTypeCModel>::GetBinding(); // 223
	CStrongHandleCopyable<InfoForResourceTypeCModel>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 3536
} /* size: 99, variables: 2, inline expansions: 7 (95 bytes) */

// <0131033F> engine2/interop.engine.cpp:3539
// variables: 2
// function call: 1
void CModel_IsTranslucent(void* self)
{
	HModelStrong* __handle; // 3542
	CModel* __self; // 3544
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3543
} /* size: 59, variables: 2, inline expansions: 1 (16 bytes) */

// <013102AB> engine2/interop.engine.cpp:3549
// variables: 2
// function call: 1
void CModel_IsTranslucentTwoPass(void* self)
{
	HModelStrong* __handle; // 3552
	CModel* __self; // 3554
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3553
} /* size: 59, variables: 2, inline expansions: 1 (16 bytes) */

// <013101F2> engine2/interop.engine.cpp:3559
// variables: 2
// function calls: 2
void CModel_HasPhysics(void* self)
{
	HModelStrong* __handle; // 3562
	CModel* __self; // 3564
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3563
	CModel::HasPhysics(); // 3566
} /* size: 59, variables: 2, inline expansions: 2 (21 bytes) */

// <01310135> engine2/interop.engine.cpp:3569
// variables: 2
// function call: 1
void CModel_FindModelSubKey(void* self, const char* name)
{
	HModelStrong* __handle; // 3572
	CModel* __self; // 3574
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3573
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130FFFF> engine2/interop.engine.cpp:3579
// variables: 2
// function calls: 3
void CModel_GetAttachmentTransform(void* self, uint32 name, CTransformUnaligned* tx)
{
	HModelStrong* __handle; // 3582
	CModel* __self; // 3584
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3583
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 3586
} /* size: 59, variables: 2, inline expansions: 3 (16 bytes) */

// <0130FF30> engine2/interop.engine.cpp:3589
// variables: 2
// function call: 1
void CModel_GetAttachmentNameFromIndex(void* self, int index)
{
	HModelStrong* __handle; // 3592
	CModel* __self; // 3594
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3593
} /* size: 51, variables: 2, inline expansions: 1 (16 bytes) */

// <0130FE73> engine2/interop.engine.cpp:3599
// variables: 2
// function call: 1
void CModel_GetBodyPartForName(void* self, const char* pName)
{
	HModelStrong* __handle; // 3602
	CModel* __self; // 3604
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3603
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130FDA4> engine2/interop.engine.cpp:3609
// variables: 2
// function call: 1
void CModel_GetBodyPartName(void* self, int nPart)
{
	HModelStrong* __handle; // 3612
	CModel* __self; // 3614
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3613
} /* size: 51, variables: 2, inline expansions: 1 (16 bytes) */

// <0130FD04> engine2/interop.engine.cpp:3619
// variables: 2
// function call: 1
void CModel_GetNumBodyParts(void* self)
{
	HModelStrong* __handle; // 3622
	CModel* __self; // 3624
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3623
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130FC47> engine2/interop.engine.cpp:3629
// variables: 2
// function call: 1
void CModel_GetNumBodyPartMeshes(void* self, int nPart)
{
	HModelStrong* __handle; // 3632
	CModel* __self; // 3634
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3633
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130FB8A> engine2/interop.engine.cpp:3639
// variables: 2
// function call: 1
void CModel_GetBodyPartMask(void* self, int nPart)
{
	HModelStrong* __handle; // 3642
	CModel* __self; // 3644
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3643
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130FAB1> engine2/interop.engine.cpp:3649
// variables: 2
// function call: 1
void CModel_GetBodyPartMeshMask(void* self, int nPart, int nMesh)
{
	HModelStrong* __handle; // 3652
	CModel* __self; // 3654
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3653
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130F9D8> engine2/interop.engine.cpp:3659
// variables: 2
// function call: 1
void CModel_FindMeshIndexForMask(void* self, int nPart, uint64 nMask)
{
	HModelStrong* __handle; // 3662
	CModel* __self; // 3664
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3663
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130F938> engine2/interop.engine.cpp:3669
// variables: 2
// function call: 1
void CModel_GetNumMeshGroups(void* self)
{
	HModelStrong* __handle; // 3672
	CModel* __self; // 3674
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3673
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130F898> engine2/interop.engine.cpp:3679
// variables: 2
// function call: 1
void CModel_GetDefaultMeshGroupMask(void* self)
{
	HModelStrong* __handle; // 3682
	CModel* __self; // 3684
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3683
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130F680> engine2/interop.engine.cpp:3689
// variables: 5
// function calls: 6
void CModel_GetBodyPartMeshName(void* __self, int __nPart, int __nMesh)
{
	CModel* self; // 3701
	int nPart; // 3702
	int nMesh; // 3703
	CBufferString str; // 3706
	{
		HModelStrong* __handle; // 3694
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3695
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 3708
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 3706
} /* size: 243, variables: 4, inline expansions: 5 (128 bytes) */

// <0130F5E0> engine2/interop.engine.cpp:3712
// variables: 2
// function call: 1
void CModel_GetNumMaterialGroups(void* self)
{
	HModelStrong* __handle; // 3715
	CModel* __self; // 3717
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3716
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130F511> engine2/interop.engine.cpp:3722
// variables: 2
// function call: 1
void CModel_GetMaterialGroupName(void* self, int iGroup)
{
	HModelStrong* __handle; // 3725
	CModel* __self; // 3727
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3726
} /* size: 51, variables: 2, inline expansions: 1 (16 bytes) */

// <0130F3EA> engine2/interop.engine.cpp:3732
// variables: 2
// function calls: 3
void CModel_GetMaterialGroupIndex(void* self, uint32 nGroup)
{
	HModelStrong* __handle; // 3735
	CModel* __self; // 3737
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3736
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 3739
} /* size: 35, variables: 2, inline expansions: 3 (16 bytes) */

// <0130F32D> engine2/interop.engine.cpp:3742
// variables: 2
// function call: 1
void CModel_GetNumMaterialsInGroup(void* self, int iGroup)
{
	HModelStrong* __handle; // 3745
	CModel* __self; // 3747
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3746
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130F162> engine2/interop.engine.cpp:3752
// variables: 2
// function calls: 4
void CModel_GetMaterialInGroup(void* self, int iGroup, int iIndex)
{
	HModelStrong* __handle; // 3755
	CModel* __self; // 3757
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3756
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 3759
} /* size: 153, variables: 2, inline expansions: 4 (57 bytes) */

// <0130F058> engine2/interop.engine.cpp:3762
// variables: 4
// function calls: 2
void CModel_GetNumSceneObjects(void* __self, int __iMesh)
{
	CModel* self; // 3774
	int iMesh; // 3775
	const CRenderMesh* pMesh; // 3778
	{
		HModelStrong* __handle; // 3767
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3768
	}
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 3779
} /* size: 59, variables: 3, inline expansions: 1 (3 bytes) */

// <0130EEBC> engine2/interop.engine.cpp:3783
// variables: 5
// function calls: 4
void CModel_GetNumDrawCalls(void* __self, int __iMesh, int __nSceneObject)
{
	CModel* self; // 3795
	int iMesh; // 3796
	int nSceneObject; // 3797
	const CRenderMesh* pMesh; // 3800
	{
		HModelStrong* __handle; // 3788
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3789
	}
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
			int i);  // 3801
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 3801
} /* size: 75, variables: 4, inline expansions: 3 (17 bytes) */

// <0130EB9E> engine2/interop.engine.cpp:3805
// variables: 6
// function calls: 8
void CModel_GetMaterial(void* __self, int __iMesh, int __nSceneObject, int __nDrawCall)
{
	CModel* self; // 3817
	int iMesh; // 3818
	int nSceneObject; // 3819
	int nDrawCall; // 3820
	const CRenderMesh* pMesh; // 3823
	{
		HModelStrong* __handle; // 3810
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3811
	}
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
			int i);  // 3824
	CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
			int i);  // 3824
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 3824
} /* size: 185, variables: 5, inline expansions: 7 (92 bytes) */

// <0130EAFE> engine2/interop.engine.cpp:3828
// variables: 2
// function call: 1
void CModel_GetNumMeshes(void* self)
{
	HModelStrong* __handle; // 3831
	CModel* __self; // 3833
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3832
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130E98A> engine2/interop.engine.cpp:3838
// variables: 2
// function calls: 5
void CModel_GetMeshBounds(void* self)
{
	HModelStrong* __handle; // 3841
	CModel* __self; // 3843
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3842
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 738
	CModel::GetMeshBounds(); // 3845
} /* size: 65, variables: 2, inline expansions: 5 (36 bytes) */

// <0130E816> engine2/interop.engine.cpp:3848
// variables: 2
// function calls: 5
void CModel_GetPhysicsBounds(void* self)
{
	HModelStrong* __handle; // 3851
	CModel* __self; // 3853
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3852
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 745
	CModel::GetPhysicsBounds(); // 3855
} /* size: 65, variables: 2, inline expansions: 5 (36 bytes) */

// <0130E6A2> engine2/interop.engine.cpp:3858
// variables: 2
// function calls: 5
void CModel_GetModelRenderBounds(void* self)
{
	HModelStrong* __handle; // 3861
	CModel* __self; // 3863
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3862
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 752
	CModel::GetModelRenderBounds(); // 3865
} /* size: 65, variables: 2, inline expansions: 5 (36 bytes) */

// <0130E602> engine2/interop.engine.cpp:3868
// variables: 2
// function call: 1
void CModel_NumBones(void* self)
{
	HModelStrong* __handle; // 3871
	CModel* __self; // 3873
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3872
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130E545> engine2/interop.engine.cpp:3878
// variables: 2
// function call: 1
void CModel_FindBoneIndex(void* self, const char* name)
{
	HModelStrong* __handle; // 3881
	CModel* __self; // 3883
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3882
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130E476> engine2/interop.engine.cpp:3888
// variables: 2
// function call: 1
void CModel_boneName(void* self, int iBone)
{
	HModelStrong* __handle; // 3891
	CModel* __self; // 3893
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3892
} /* size: 51, variables: 2, inline expansions: 1 (16 bytes) */

// <0130E3B9> engine2/interop.engine.cpp:3898
// variables: 2
// function call: 1
void CModel_boneParent(void* self, int iBone)
{
	HModelStrong* __handle; // 3901
	CModel* __self; // 3903
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3902
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130E2E4> engine2/interop.engine.cpp:3908
// variables: 2
// function call: 1
void CModel_GetBoneTransform(void* self, int iBone)
{
	HModelStrong* __handle; // 3911
	CModel* __self; // 3913
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3912
} /* size: 86, variables: 2, inline expansions: 1 (16 bytes) */

// <0130E1F9> engine2/interop.engine.cpp:3918
// variables: 2
// function calls: 2
void CModel_bonePosParentSpace(void* self, int iBone)
{
	HModelStrong* __handle; // 3921
	CModel* __self; // 3923
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3922
	Vector::Vector(); // 3922
} /* size: 55, variables: 2, inline expansions: 2 (16 bytes) */

// <0130E13C> engine2/interop.engine.cpp:3928
// variables: 2
// function call: 1
void CModel_boneRotParentSpace(void* self, int iBone)
{
	HModelStrong* __handle; // 3931
	CModel* __self; // 3933
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3932
} /* size: 41, variables: 2, inline expansions: 1 (16 bytes) */

// <0130E09C> engine2/interop.engine.cpp:3938
// variables: 2
// function call: 1
void CModel_NumFlexControllers(void* self)
{
	HModelStrong* __handle; // 3941
	CModel* __self; // 3943
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3942
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130DFA6> engine2/interop.engine.cpp:3948
// variables: 3
// function call: 1
void CModel_GetFlexControllerName(void* __self, int __nFlexController)
{
	CModel* self; // 3960
	int nFlexController; // 3961
	{
		HModelStrong* __handle; // 3953
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3954
	}
} /* size: 51, variables: 2 */

// <0130DE1B> engine2/interop.engine.cpp:3968
// variables: 2
// function calls: 3
void CModel_GetVisemeMorph(void* self, const char* viseme, int morph)
{
	HModelStrong* __handle; // 3971
	CModel* __self; // 3973
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3972
	CUtlString::CUtlString(
			const char* pString);  // 3975
	CUtlString::~CUtlString(); // 3975
} /* size: 155, variables: 2, inline expansions: 3 (66 bytes) */

// <0130DD7B> engine2/interop.engine.cpp:3978
// variables: 2
// function call: 1
void CModel_GetNumAnim(void* self)
{
	HModelStrong* __handle; // 3981
	CModel* __self; // 3983
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3982
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130DCAC> engine2/interop.engine.cpp:3988
// variables: 2
// function call: 1
void CModel_GetAnimationName(void* self, int nAnimation)
{
	HModelStrong* __handle; // 3991
	CModel* __self; // 3993
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 3992
} /* size: 51, variables: 2, inline expansions: 1 (16 bytes) */

// <0130D808> engine2/interop.engine.cpp:3998
// variables: 5
// function calls: 15
void CModel_GetSequenceNames(void* __self, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* __names)
{
	CModel* self; // 4010
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* names; // 4011
	{
		HModelStrong* __handle; // 4003
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 4004
	}
	{
		HSequence hSequence; // 4014
		{
			const ISequence* pSequence; // 4016
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 1514
			Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1252
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
					CUtlString& src);  // 4019
			CUtlString::~CUtlString(); // 4019
			CUtlString::CUtlString(
					const char* pString);  // 4019
		}
		HSequence::operator==(
				const HSequence& other);  // 4014
	}
} /* size: 331, variables: 2 */

// <0130D6E6> engine2/interop.engine.cpp:4024
// variables: 4
// function calls: 2
void CModel_HasSceneObjects(void* __self)
{
	CModel* self; // 4036
	{
		HModelStrong* __handle; // 4029
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 4030
	}
	{
		int i; // 4039
		{
			const CRenderMesh* pMesh; // 4041
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 4042
		}
	}
} /* size: 114, variables: 1 */

// <0130D5A8> engine2/interop.engine.cpp:4049
// variables: 4
// function call: 1
void CModel_MeshTrace(void* __self, MeshTraceInput* __input, MeshTraceOutput* __output)
{
	CModel* self; // 4061
	MeshTraceInput input; // 4062
	MeshTraceOutput* output; // 4063
	{
		HModelStrong* __handle; // 4054
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 4055
	}
} /* size: 137, variables: 3 */

// <0130D417> engine2/interop.engine.cpp:4070
// variables: 2
// function calls: 4
void CModel_GetAnimationGraph(void* self)
{
	HModelStrong* __handle; // 4073
	CModel* __self; // 4075
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 4074
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 4077
} /* size: 137, variables: 2, inline expansions: 4 (54 bytes) */

// <0130D329> engine2/interop.engine.cpp:4080
// variables: 2
// function calls: 3
void CModel_GetPhysicsContainer(void* self)
{
	HModelStrong* __handle; // 4083
	CModel* __self; // 4085
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 4084
	CPhysAggregateDataHandle::Get(); // 400
	CModel::GetPhysicsContainer(); // 4087
} /* size: 43, variables: 2, inline expansions: 3 (30 bytes) */

// <0130D250> engine2/interop.engine.cpp:4090
// variables: 2
// function call: 1
void CModel_FindHitboxSetByName(void* self, const char* pName, int nMesh)
{
	HModelStrong* __handle; // 4093
	CModel* __self; // 4095
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 4094
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130D177> engine2/interop.engine.cpp:4100
// variables: 2
// function call: 1
void CModel_FindHitboxSetIndexByName(void* self, const char* pName, int nMesh)
{
	HModelStrong* __handle; // 4103
	CModel* __self; // 4105
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 4104
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130D09E> engine2/interop.engine.cpp:4110
// variables: 2
// function call: 1
void CModel_GetHitboxSetByIndex(void* self, int nIndex, int nMesh)
{
	HModelStrong* __handle; // 4113
	CModel* __self; // 4115
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 4114
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130CFE1> engine2/interop.engine.cpp:4120
// variables: 2
// function call: 1
void CModel_GetBoneIndexForHitbox(void* self, CHitBox* pHitBox)
{
	HModelStrong* __handle; // 4123
	CModel* __self; // 4125
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 4124
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130CF24> engine2/interop.engine.cpp:4130
// variables: 2
// function call: 1
void CModel_GetHitboxSetCount(void* self, int nMesh)
{
	HModelStrong* __handle; // 4133
	CModel* __self; // 4135
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 4134
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130CE90> engine2/interop.engine.cpp:4140
// variables: 2
// function call: 1
void CModel_HasSkinnedMeshes(void* self)
{
	HModelStrong* __handle; // 4143
	CModel* __self; // 4145
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 4144
} /* size: 59, variables: 2, inline expansions: 1 (16 bytes) */

// <0130CDFC> engine2/interop.engine.cpp:4150
// variables: 2
// function call: 1
void CModel_HasAnimationDrivenFlexes(void* self)
{
	HModelStrong* __handle; // 4153
	CModel* __self; // 4155
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 4154
} /* size: 59, variables: 2, inline expansions: 1 (16 bytes) */

// <0130CD4B> engine2/interop.engine.cpp:4160
// variables: 2
// function call: 1
void CModel_boneFlags(void* self, int iBone)
{
	HModelStrong* __handle; // 4163
	CModel* __self; // 4165
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 4164
} /* size: 59, variables: 2, inline expansions: 1 (16 bytes) */

// <0130CCAB> engine2/interop.engine.cpp:4170
// variables: 2
// function call: 1
void CModel_GetNumAttachments(void* self)
{
	HModelStrong* __handle; // 4173
	CModel* __self; // 4175
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 4174
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130CB52> engine2/interop.engine.cpp:4180
// variables: 4
// function calls: 2
void CModel_GetAttachment(void* __self, int __index)
{
	CModel* self; // 4192
	int index; // 4193
	AttachmentHandle_t handle; // 4196
	{
		HModelStrong* __handle; // 4185
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 4186
	}
	AttachmentHandle_t::operator==(
			const AttachmentHandle_t& other);  // 4197
} /* size: 112, variables: 3, inline expansions: 1 (0 bytes) */

// <0130CAB2> engine2/interop.engine.cpp:4203
// variables: 2
// function call: 1
void CModel_GetMaterialIndexCount(void* self)
{
	HModelStrong* __handle; // 4206
	CModel* __self; // 4208
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 4207
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <0130C904> engine2/interop.engine.cpp:4213
// variables: 2
// function calls: 4
void CModel_GetMaterialByIndex(void* self, int index)
{
	HModelStrong* __handle; // 4216
	CModel* __self; // 4218
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 4217
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 4220
} /* size: 145, variables: 2, inline expansions: 4 (56 bytes) */

// <0130C8AD> engine2/interop.engine.cpp:4223
void ConCommand_GetName(void* self)
{
} /* size: 23 */

// <0130C7AC> engine2/interop.engine.cpp:4241
void ConCommand_Run(void* self, const char* command)
{
} /* size: 9 */

// <0130C755> engine2/interop.engine.cpp:4247
void ConVar_GetName(void* self)
{
} /* size: 23 */

// <0130C6FE> engine2/interop.engine.cpp:4253
void ConVar_GetHelpText(void* self)
{
} /* size: 23 */

// <0130C69D> engine2/interop.engine.cpp:4259
void ConVar_SetValue(void* self, const char* value)
{
} /* size: 10 */

// <0130C63A> engine2/interop.engine.cpp:4265
void ConVar_SetValue_1(void* self, float flValue)
{
} /* size: 10 */

// <0130C5D9> engine2/interop.engine.cpp:4271
void ConVar_SetValue_2(void* self, int nValue)
{
} /* size: 13 */

// <0130C556> engine2/interop.engine.cpp:4277
// function call: 1
void ConVar_GetString(void* self)
{
	ConVar::GetString(); // 4280
} /* size: 31, inline expansions: 1 (22 bytes) */

// <0130C50D> engine2/interop.engine.cpp:4283
void ConVar_Revert(void* self)
{
} /* size: 9 */

// <0130C4BB> engine2/interop.engine.cpp:4289
// function call: 1
void ConVar_HasMin(void* self)
{
	ConVar::HasMin(); // 4292
} /* size: 13, inline expansions: 1 (4 bytes) */

// <0130C469> engine2/interop.engine.cpp:4295
// function call: 1
void ConVar_HasMax(void* self)
{
	ConVar::HasMax(); // 4298
} /* size: 13, inline expansions: 1 (4 bytes) */

// <0130C417> engine2/interop.engine.cpp:4301
// function call: 1
void ConVar_GetMinValue(void* self)
{
	ConVar::GetMinValue(); // 4304
} /* size: 14, inline expansions: 1 (4 bytes) */

// <0130C3C5> engine2/interop.engine.cpp:4307
// function call: 1
void ConVar_GetMaxValue(void* self)
{
	ConVar::GetMaxValue(); // 4310
} /* size: 14, inline expansions: 1 (4 bytes) */

// <0130C34F> engine2/interop.engine.cpp:4313
// function call: 1
void ConVar_GetDefault(void* self)
{
	ConVar::GetDefault(); // 4316
} /* size: 17, inline expansions: 1 (4 bytes) */

// <0130C30A> engine2/interop.engine.cpp:4319
void ConVar_GetFlags(void* self)
{
} /* size: 10 */

// <0130C2C1> engine2/interop.engine.cpp:4325
void CPhysggrgtDt_AddRef(void* self)
{
} /* size: 9 */

// <0130C278> engine2/interop.engine.cpp:4331
void CPhysggrgtDt_Release(void* self)
{
} /* size: 9 */

// <0130C22F> engine2/interop.engine.cpp:4337
void CPhysggrgtDt_GetChecksum(void* self)
{
} /* size: 9 */

// <0130C0EC> engine2/interop.engine.cpp:4343
// function calls: 5
void CPhysggrgtDt_GetBoneCount(void* self)
{
	CUtlMemory<short unsigned int, int>::Count(); // 225
	CUtlMemory<unsigned int, int>::Count(); // 225
	CUtlMemory<matrix3x4_t, int>::Count(); // 225
	{
	}
	CUtlMemory<unsigned int, int>::Count(); // 227
	CPhysAggregateData::GetBoneCount(); // 4346
} /* size: 0, inline expansions: 5 (57 bytes) */

// <0130C017> engine2/interop.engine.cpp:4349
// function calls: 2
void CPhysggrgtDt_GetBoneName(void* self, int nBoneIndex)
{
	CUtlVectorUltraConservative<char const::operator[](
			int i);  // 246
	CPhysAggregateData::GetBoneName(
			int nBoneIndex);  // 4352
} /* size: 21, inline expansions: 2 (7 bytes) */

// <0130BF89> engine2/interop.engine.cpp:4355
// function calls: 2
void CPhysggrgtDt_GetPartCount(void* self)
{
	CUtlVectorBase<const VPhysXBodyPart_t::Count(); // 241
	CPhysAggregateData::GetPartCount(); // 4358
} /* size: 8, inline expansions: 2 (0 bytes) */

// <0130BEEB> engine2/interop.engine.cpp:4361
// function calls: 2
void CPhysggrgtDt_GetBoneHash(void* self, int i)
{
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 128
	CPhysAggregateData::GetBoneHash(
			int i);  // 4364
} /* size: 15, inline expansions: 2 (10 bytes) */

// <0130BE4D> engine2/interop.engine.cpp:4367
// function calls: 2
void CPhysggrgtDt_GetIndexHash(void* self, int i)
{
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 129
	CPhysAggregateData::GetIndexHash(
			int i);  // 4370
} /* size: 16, inline expansions: 2 (14 bytes) */

// <0130B8A0> engine2/interop.engine.cpp:4373
// variables: 2
// function calls: 21
void CPhysggrgtDt_GetBindPose(void* __self, int __index)
{
	CPhysAggregateData* self; // 4377
	int index; // 4378
	CUtlMemory<matrix3x4_t, int>::operator[](
			int i);  // 4381
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	matrix3x4_t::ToCTransform(); // 4381
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 127
	CTransform::GetScale(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 127
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 127
	CTransformUnaligned::CTransformUnaligned(
				const CTransform& transform);  // 4381
} /* size: 214, variables: 2, inline expansions: 21 (326 bytes) */

// <0130B7A5> engine2/interop.engine.cpp:4385
// variables: 2
// function calls: 3
void CPhysggrgtDt_GetPart(void* __self, int __index)
{
	CPhysAggregateData* self; // 4389
	int index; // 4390
	CUtlMemoryConservative<const VPhysXBodyPart_t::Base(); // 365
	CUtlMemoryConservative<const VPhysXBodyPart_t::operator[](
			int i);  // 588
	CUtlVectorBase<const VPhysXBodyPart_t::operator[](
			int i);  // 4393
} /* size: 16, variables: 2, inline expansions: 3 (6 bytes) */

// <0130B740> engine2/interop.engine.cpp:4397
void CPhysggrgtDt_GetSurfaceProperties(void* self, int index)
{
} /* size: 9 */

// <0130B6CD> engine2/interop.engine.cpp:4403
// variable: 1
// function call: 1
void CPhysggrgtDt_GetSurfacePropertiesCount(void* __self)
{
	CPhysAggregateData* self; // 4407
	CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::Count(); // 4410
} /* size: 21, variables: 1, inline expansions: 1 (16 bytes) */

// <0130B65A> engine2/interop.engine.cpp:4414
// variable: 1
// function call: 1
void CPhysggrgtDt_GetCollisionAttributeCount(void* __self)
{
	CPhysAggregateData* self; // 4418
	CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::Count(); // 4421
} /* size: 21, variables: 1, inline expansions: 1 (16 bytes) */

// <0130B492> engine2/interop.engine.cpp:4425
// variables: 3
// function calls: 6
void CPhysggrgtDt_GetTag(void* __self, int __nAttribute, int __nIndex)
{
	CPhysAggregateData* self; // 4429
	int nAttribute; // 4430
	int nIndex; // 4431
	CUtlMemory<VPhysXCollisionAttributes_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> >::operator[](
			int i);  // 4434
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 4434
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 4434
} /* size: 55, variables: 3, inline expansions: 6 (92 bytes) */

// <0130B363> engine2/interop.engine.cpp:4438
// variables: 2
// function calls: 4
void CPhysggrgtDt_GetTagCount(void* __self, int __nAttribute)
{
	CPhysAggregateData* self; // 4442
	int nAttribute; // 4443
	CUtlVectorBase<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> >::IsValidIndex(
			int i);  // 4448
	CUtlMemory<VPhysXCollisionAttributes_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> >::operator[](
			int i);  // 4450
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 4450
} /* size: 50, variables: 2, inline expansions: 4 (37 bytes) */

// <0130B2F0> engine2/interop.engine.cpp:4454
// variable: 1
// function call: 1
void CPhysggrgtDt_GetJointCount(void* __self)
{
	CPhysAggregateData* self; // 4458
	CUtlVectorUltraConservative<const VPhysXJoint_t::Count(); // 4461
} /* size: 21, variables: 1, inline expansions: 1 (16 bytes) */

// <0130B24C> engine2/interop.engine.cpp:4465
// variables: 2
// function call: 1
void CPhysggrgtDt_GetJoint(void* __self, int __index)
{
	CPhysAggregateData* self; // 4469
	int index; // 4470
	CUtlVectorUltraConservative<const VPhysXJoint_t::operator[](
			int i);  // 4473
} /* size: 20, variables: 2, inline expansions: 1 (0 bytes) */

// <0130B21F> engine2/interop.engine.cpp:4477
void _Get__CPhysggrgtDt_m_nFlags(void* self)
{
} /* size: 9 */

// <0130B1E3> engine2/interop.engine.cpp:4481
void _Set__CPhysggrgtDt_m_nFlags(void* self, short unsigned int value)
{
} /* size: 9 */

// <0130B0BE> engine2/interop.engine.cpp:4485
// variables: 2
// function calls: 3
void CPhysBodyDesc_SetBoneName(void* __self, const char* __boneName)
{
	CPhysBodyDesc* self; // 4489
	const char* boneName; // 4490
	CUtlString::operator=(
			const char* src);  // 4493
	CUtlString::Get(); // 99
	CUtlString::String(); // 4494
} /* size: 53, variables: 2, inline expansions: 3 (41 bytes) */

// <0130AFF2> engine2/interop.engine.cpp:4498
// variables: 2
// function calls: 2
void CPhysBodyDesc_SetSurface(void* __self, uint32 __surface)
{
	CPhysBodyDesc* self; // 4502
	CUtlStringToken surface; // 4503
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4503
} /* size: 8, variables: 2, inline expansions: 2 (0 bytes) */

// <0130AEEA> engine2/interop.engine.cpp:4510
// variables: 2
// function calls: 2
void CPhysBodyDesc_SetBindPose(void* __self, CTransformUnaligned* __transform)
{
	CPhysBodyDesc* self; // 4514
	CTransformUnaligned transform; // 4515
	matrix3x4_t::matrix3x4_t(); // 248
	CTransformUnaligned::ToMatrix(); // 4518
} /* size: 163, variables: 2, inline expansions: 2 (21 bytes) */

// <0130ADA8> engine2/interop.engine.cpp:4522
// function calls: 3
void CPhysBodyDesc_AddSphere(void* self, RnSphere_t* sphere)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 165
	RnCollisionAttr_t::ComputeHash(); // 167
	RnCollisionAttr_t::RnCollisionAttr_t(); // 4525
} /* size: 127, inline expansions: 3 (74 bytes) */

// <0130AC66> engine2/interop.engine.cpp:4528
// function calls: 3
void CPhysBodyDesc_AddCapsule(void* self, RnCapsule_t* capsule)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 165
	RnCollisionAttr_t::ComputeHash(); // 167
	RnCollisionAttr_t::RnCollisionAttr_t(); // 4531
} /* size: 127, inline expansions: 3 (74 bytes) */

// <0130A4C2> engine2/interop.engine.cpp:4534
// variables: 14
// function calls: 24
void CPhysBodyDesc_AddHull(void* __self, void* __pPoints, int __nNumPoints, CTransformUnaligned* __transform, float __flPrecisionDegrees, float __flPrecisionInches, int __nMaxFaces, int __nMaxEdges, int __nMaxVerts, int __nAlgo)
{
	CPhysBodyDesc* self; // 4538
	Vector* pPoints; // 4539
	int nNumPoints; // 4540
	CTransformUnaligned transform; // 4541
	float flPrecisionDegrees; // 4542
	float flPrecisionInches; // 4543
	int nMaxFaces; // 4544
	int nMaxEdges; // 4545
	int nMaxVerts; // 4546
	int nAlgo; // 4547
	RnHullSimplificationParams_t params; // 4550
	{
		RnHull_t* pHull; // 4557
		VectorAligned::operator=(
				fltx4 src);  // 111
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 33
		VectorAligned::VectorAligned(); // 33
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 30
		QuaternionAligned::QuaternionAligned(
					const Quaternion& rhs);  // 33
		CTransform::CTransform(
				const Vector& v,
				const Quaternion& q,
				float flScale);  // 151
		CTransformUnaligned::AsTransform(); // 4559
		_mm_cvtss_f32(__m128 __A); // 1553
		GetWSIMD<>(fltx4 a); // 98
		VectorAligned::operator fltx4(); // 98
		CTransform::GetScale(); // 362
		{
			int i; // 325
			{
				int j; // 327
			}
		}
		matrix3x4_t::ScaleUpper3x3Matrix(
					float flScale);  // 365
		CTransform::ToMatrix(); // 4559
		matrix3x4_t::matrix3x4_t(); // 290
		matrix3x4_t::Base(); // 291
		matrix3x4_t::Base(); // 291
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 291
		matrix3x4a_t::operator=(
				const matrix3x4_t& src);  // 290
		matrix3x4a_t::matrix3x4a_t(
				const matrix3x4_t& src);  // 4559
		memset(void* __dest,
			int __ch,
			size_t __len);  // 165
		RnCollisionAttr_t::ComputeHash(); // 167
		RnCollisionAttr_t::RnCollisionAttr_t(); // 4560
	}
	RnHullSimplificationParams_t::RnHullSimplificationParams_t(
					HullSimplificationAlgorithm_t nAlgo);  // 4550
} /* size: 616, variables: 11, inline expansions: 1 (0 bytes) */

// <0130A252> engine2/interop.engine.cpp:4565
// variables: 7
// function calls: 3
void CPhysBodyDesc_AddMesh(void* __self, void* __pVertices, unsigned int __nNumVertices, void* __pIndices, unsigned int __nNumIndices, void* __pMaterials)
{
	CPhysBodyDesc* self; // 4569
	Vector* pVertices; // 4570
	unsigned int nNumVertices; // 4571
	unsigned int* pIndices; // 4572
	unsigned int nNumIndices; // 4573
	unsigned char* pMaterials; // 4574
	{
		RnMesh_t* pMesh; // 4577
		memset(void* __dest,
			int __ch,
			size_t __len);  // 165
		RnCollisionAttr_t::ComputeHash(); // 167
		RnCollisionAttr_t::RnCollisionAttr_t(); // 4579
	}
} /* size: 198, variables: 6 */

// <0130A225> engine2/interop.engine.cpp:4584
void _Get__CPhysBodyDesc_m_flMass(void* self)
{
} /* size: 9 */

// <0130A1E9> engine2/interop.engine.cpp:4588
void _Set__CPhysBodyDesc_m_flMass(void* self, float value)
{
} /* size: 9 */

// <0135B326> engine2/interop.engine.cpp:4592
// variable: 1
// function calls: 25
void CPhysBdyDscrry_DeleteThis(void* self)
{
	CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VPhysXJoint_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VPhysXJoint_t, int>::Purge(); // 903
	CUtlMemory<VPhysXJoint_t, int>::Purge(); // 1799
	CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::Purge(); // 560
	ValidateAlignment<VPhysXJoint_t>(void); // 508
	CUtlMemory<VPhysXJoint_t, int>::Purge(); // 510
	CUtlMemory<VPhysXJoint_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::~CUtlVector(); // 174
	{
		int i; // 1721
		CUtlMemory<CPhysBodyDesc, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::Element(
			int i);  // 1723
		Destruct<CPhysBodyDesc>(CPhysBodyDesc* pMemory); // 1723
	}
	CUtlVectorBase<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::RemoveAll(); // 1798
	CUtlMemory<CPhysBodyDesc, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CPhysBodyDesc, int>::Purge(); // 903
	CUtlMemory<CPhysBodyDesc, int>::Purge(); // 1799
	CUtlVectorBase<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::Purge(); // 560
	ValidateAlignment<CPhysBodyDesc>(void); // 508
	CUtlMemory<CPhysBodyDesc, int>::Purge(); // 510
	CUtlMemory<CPhysBodyDesc, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::~CUtlVector(); // 174
	CPhysBodyDescArray::~CPhysBodyDescArray(); // 4595
	CPhysBdyDscrry_DeleteThis(void* self); // 4592
} /* size: 193, inline expansions: 22 (858 bytes) */

// <0130A19E> engine2/interop.engine.cpp:4592
void CPhysBdyDscrry_DeleteThis(void* self)
{
} /* size: 0 */

// <0130A120> engine2/interop.engine.cpp:4598
void CPhysBdyDscrry_Create(int count, int jointCount)
{
} /* size: 60 */

// <0130A049> engine2/interop.engine.cpp:4604
// function calls: 3
void CPhysBdyDscrry_Get(void* self, int index)
{
	CUtlMemory<CPhysBodyDesc, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::operator[](
			int i);  // 196
	CPhysBodyDescArray::Get(
		int index);  // 4607
} /* size: 19, inline expansions: 3 (42 bytes) */

// <01309F78> engine2/interop.engine.cpp:4610
// function calls: 3
void CPhysBdyDscrry_GetJoint(void* self, int index)
{
	CUtlMemory<VPhysXJoint_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::operator[](
			int i);  // 201
	CPhysBodyDescArray::GetJoint(
		int index);  // 4613
} /* size: 20, inline expansions: 3 (45 bytes) */

// <01309E82> engine2/interop.engine.cpp:4616
// function call: 1
void CPhysSrfcPrprts_UpdatePhysics(void* self, float Friction, float Elasticity, float Density, float RollingResistance, float BounceThreshold)
{
	CPhysSurfaceProperties::UpdatePhysics(
			float Friction,
			float Elasticity,
			float Density,
			float RollingResistance,
			float BounceThreshold);  // 4619
} /* size: 24, inline expansions: 1 (19 bytes) */

// <01309E6B> engine2/interop.engine.cpp:4622
void _Get__CPhysSrfcPrprts_m_name(void* self)
{
} /* size: 0 */

// <01309E47> engine2/interop.engine.cpp:4626
void _Set__CPhysSrfcPrprts_m_name(void* self, const char* value)
{
} /* size: 0 */

// <01309E1A> engine2/interop.engine.cpp:4630
void _Get__CPhysSrfcPrprts_m_nameHash(void* self)
{
} /* size: 8 */

// <01309DDE> engine2/interop.engine.cpp:4634
void _Set__CPhysSrfcPrprts_m_nameHash(void* self, unsigned int value)
{
} /* size: 8 */

// <01309D75> engine2/interop.engine.cpp:4642
void _Set__CPhysSrfcPrprts_m_baseNameHash(void* self, unsigned int value)
{
} /* size: 8 */

// <01309D0C> engine2/interop.engine.cpp:4650
void _Set__CPhysSrfcPrprts_m_nIndex(void* self, int value)
{
} /* size: 8 */

// <01309CDF> engine2/interop.engine.cpp:4654
void _Get__CPhysSrfcPrprts_m_nBaseIndex(void* self)
{
} /* size: 8 */

// <01309CA3> engine2/interop.engine.cpp:4658
void _Set__CPhysSrfcPrprts_m_nBaseIndex(void* self, int value)
{
} /* size: 8 */

// <01309C3A> engine2/interop.engine.cpp:4666
void _Set__CPhysSrfcPrprts_m_AudioSurface(void* self, int value)
{
} /* size: 8 */

// <01309C0D> engine2/interop.engine.cpp:4670
void _Get__CPhysSrfcPrprts_m_bHidden(void* self)
{
} /* size: 9 */

// <01309BD1> engine2/interop.engine.cpp:4674
void _Set__CPhysSrfcPrprts_m_bHidden(void* self, int value)
{
} /* size: 11 */

// <01309B2A> engine2/interop.engine.cpp:4678
// function calls: 2
void _Get__CPhysSrfcPrprts_m_description(void* self)
{
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 4680
} /* size: 27, inline expansions: 2 (36 bytes) */

// <01309A91> engine2/interop.engine.cpp:4682
// function call: 1
void _Set__CPhysSrfcPrprts_m_description(void* self, const char* value)
{
	CUtlString::operator=(
			const char* src);  // 4684
} /* size: 13, inline expansions: 1 (5 bytes) */

// <01362EA2> engine2/interop.engine.cpp:4686
// function calls: 18
void CQueryResult_DeleteThis(void* self)
{
	CUtlVectorBase<IPhysicsShape::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<128, IPhysicsShape::Base(); // 237
	CUtlMemory<IPhysicsShape::IsExternallyAllocated(); // 577
	CUtlMemory<IPhysicsShape::ConvertToExternalMemory(
				IPhysicsShape** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<IPhysicsShape::Purge_FixedGrowable(
				IPhysicsShape** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<IPhysicsShape::Purge_FixedGrowable(
				IPhysicsShape** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<IPhysicsShape::Purge(
		int numElements);  // 1799
	CUtlVectorBase<IPhysicsShape::ResetDbgInfo(); // 1800
	CUtlVectorBase<IPhysicsShape::Purge(); // 560
	ValidateAlignment<IPhysicsShape*>(void); // 508
	CUtlMemory<IPhysicsShape::Purge(); // 903
	CUtlMemory<IPhysicsShape::Purge(); // 510
	CUtlMemory<IPhysicsShape::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<IPhysicsShape::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<IPhysicsShape::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<IPhysicsShape::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<IPhysicsShape::~CUtlVectorFixedGrowable(); // 4689
	CQueryResult_DeleteThis(void* self); // 4686
} /* size: 134, inline expansions: 18 (558 bytes) */

// <01309A44> engine2/interop.engine.cpp:4686
void CQueryResult_DeleteThis(void* self)
{
} /* size: 0 */

// <0130979E> engine2/interop.engine.cpp:4692
// function calls: 10
void CQueryResult_Create(void)
{
	CUtlMemory<IPhysicsShape::CUtlMemory(
			IPhysicsShape** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<IPhysicsShape::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<IPhysicsShape::CUtlMemoryFixedGrowable_Base(
					IPhysicsShape** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<128, IPhysicsShape::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, IPhysicsShape::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, IPhysicsShape::Base(); // 231
	CUtlMemoryFixedGrowable<IPhysicsShape::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<IPhysicsShape::ResetDbgInfo(); // 530
	CUtlVectorBase<IPhysicsShape::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<IPhysicsShape::CUtlVectorFixedGrowable(
				int growSize);  // 4695
} /* size: 94, inline expansions: 10 (187 bytes) */

// <0130973A> engine2/interop.engine.cpp:4698
// function call: 1
void CQueryResult_Count(void* self)
{
	CUtlVectorBase<IPhysicsShape::Count(); // 4701
} /* size: 8, inline expansions: 1 (0 bytes) */

// <01309642> engine2/interop.engine.cpp:4704
// function calls: 4
void CQueryResult_Element(void* self, int i)
{
	CUtlMemory<IPhysicsShape::operator[](
			int i);  // 602
	CUtlVectorBase<IPhysicsShape::Element(
		int i);  // 4707
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsShape*>(IPhysicsShape* c); // 4707
} /* size: 43, inline expansions: 4 (29 bytes) */

// <013095E6> engine2/interop.engine.cpp:4710
void* From_IReadBufferCallback_To_CReadBufferManagedCallback(IReadBufferCallback* ptr)
{
} /* size: 35 */

// <013095CA> engine2/interop.engine.cpp:4711
void* To_IReadBufferCallback_From_CReadBufferManagedCallback(CReadBufferManagedCallback* ptr)
{
} /* size: 0 */

// <01309539> engine2/interop.engine.cpp:4713
void CRdBffrMngdCllbc_DeleteThis(void* self)
{
} /* size: 17 */

// <013094EE> engine2/interop.engine.cpp:4719
void CRdBffrMngdCllbc_Create(void)
{
} /* size: 40 */

// <0130948A> engine2/interop.engine.cpp:4725
void CRdBffrMngdCllbc_SetManagedId(void* self, int id)
{
} /* size: 9 */

// <01309441> engine2/interop.engine.cpp:4731
void CRdBffrMngdCllbc_GetManagedId(void* self)
{
} /* size: 9 */

// <013093F8> engine2/interop.engine.cpp:4737
void CRdBffrMngdCllbc_Done(void* self)
{
} /* size: 9 */

// <0130939C> engine2/interop.engine.cpp:4743
void* From_IReadTexturePixelsCallback_To_CReadTexturePixelsManagedCallback(IReadTexturePixelsCallback* ptr)
{
} /* size: 35 */

// <01309380> engine2/interop.engine.cpp:4744
void* To_IReadTexturePixelsCallback_From_CReadTexturePixelsManagedCallback(CReadTexturePixelsManagedCallback* ptr)
{
} /* size: 0 */

// <013092EF> engine2/interop.engine.cpp:4746
void CRdTxtrPxlsMngdC_DeleteThis(void* self)
{
} /* size: 17 */

// <013092A4> engine2/interop.engine.cpp:4752
void CRdTxtrPxlsMngdC_Create(void)
{
} /* size: 40 */

// <013091F7> engine2/interop.engine.cpp:4764
void CRdTxtrPxlsMngdC_GetManagedId(void* self)
{
} /* size: 9 */

// <013091AE> engine2/interop.engine.cpp:4770
void CRdTxtrPxlsMngdC_Done(void* self)
{
} /* size: 9 */

// <013657B9> engine2/interop.engine.cpp:4776
// function call: 1
void CRndrttrbts_DeleteThis(void* self)
{
	CRndrttrbts_DeleteThis(void* self); // 4776
} /* size: 49, inline expansions: 1 (31 bytes) */

// <01309196> engine2/interop.engine.cpp:4776
void CRndrttrbts_DeleteThis(void* self)
{
} /* size: 0 */

// <01308581> engine2/interop.engine.cpp:4782
// function calls: 65
void CRndrttrbts_Create(void)
{
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::CUtlAttributeList(); // 898
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 76
	TextureAttrForStorage_t::TextureAttrForStorage_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 248
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::CUtlAttributeList(); // 898
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t this); // 248
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::CUtlAttributeList(); // 898
	ConstantBufferAttr_t::ConstantBufferAttr_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 248
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::CUtlAttributeList(); // 898
	DescriptorSetAttr_t::DescriptorSetAttr_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 248
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<void::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<void::CUtlIntrusiveList(); // 248
	CUtlAttributeList<void::CUtlAttributeList(); // 898
	CUtlString::CUtlString(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::CUtlAttributeList(); // 898
	CRenderAttributes::CRenderAttributes(); // 4785
} /* size: 375, inline expansions: 65 (1316 bytes) */

// <013083B3> engine2/interop.engine.cpp:4788
// function calls: 6
void CRndrttrbts_SetFloatValue(void* self, uint32 nTokenID, float flValue)
{
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 148
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 148
	CRenderAttributes::SetFloatValue(
			CUtlStringToken nTokenID,
			float flValue);  // 4791
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4791
} /* size: 66, inline expansions: 6 (42 bytes) */

// <01307B52> engine2/interop.engine.cpp:4794
// variables: 14
// function calls: 33
void CRndrttrbts_GetFloatValue(void* self, uint32 nTokenID, float flDefaultValue)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4797
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 376
	{
		int nIndex; // 381
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 61903
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 61913
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 61923
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 284
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const Vector4D ** pValueOut);  // 270
		CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const Vector4D ** pValueOut);  // 381
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 383
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValueOrDefault(
				uint32 k,
				Vector4D nDefault);  // 393
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 393
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValueOrDefault(
				CUtlStringToken nTok,
				Vector4D nDefault);  // 153
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 153
	CRenderAttributes::GetFloatValue(
			CUtlStringToken nTokenID,
			float flDefaultValue);  // 4797
} /* size: 173, inline expansions: 8 (501 bytes) */

// <013073E3> engine2/interop.engine.cpp:4800
// variables: 13
// function calls: 30
void CRndrttrbts_DeleteFloatValue(void* self, uint32 nTokenID)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4803
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 536
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 61796
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 61806
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 61816
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 328
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 536
	ReleaseValueFromAttribute<Vector4D>(Vector4D* pT); // 540
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::DeleteValue(
			CUtlStringToken nTok);  // 180
	CRenderAttributes::DeleteFloatValue(
			CUtlStringToken nToken);  // 4803
} /* size: 155, inline expansions: 10 (576 bytes) */

// <013071A3> engine2/interop.engine.cpp:4806
// function calls: 7
void CRndrttrbts_SetVector2DValue(void* self, uint32 nTokenID, Vector2D* vValue)
{
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 4809
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4809
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 195
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 195
	CRenderAttributes::SetVector2DValue(
			CUtlStringToken nTokenID,
			Vector2D vValue);  // 4809
} /* size: 73, inline expansions: 7 (57 bytes) */

// <013068DD> engine2/interop.engine.cpp:4812
// variables: 14
// function calls: 35
void CRndrttrbts_GetVector2DValue(void* self, uint32 nTokenID, Vector2D* vDefaultValue)
{
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 4815
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4815
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 376
	{
		int nIndex; // 381
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 61903
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 61913
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 61923
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 284
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const Vector4D ** pValueOut);  // 270
		CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const Vector4D ** pValueOut);  // 381
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 383
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValueOrDefault(
				uint32 k,
				Vector4D nDefault);  // 393
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 393
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValueOrDefault(
				CUtlStringToken nTok,
				Vector4D nDefault);  // 200
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 200
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 200
	CRenderAttributes::GetVector2DValue(
			CUtlStringToken nTokenID,
			Vector2D vDefaultValue);  // 4815
} /* size: 214, inline expansions: 10 (563 bytes) */

// <013068B9> engine2/interop.engine.cpp:4818
void CRndrttrbts_DeleteVector2DValue(void* self, uint32 nTokenID)
{
} /* size: 0 */

// <013066AB> engine2/interop.engine.cpp:4824
// function calls: 6
void CRndrttrbts_SetVectorValue(void* self, uint32 nTokenID, Vector* vValue)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4827
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 236
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 236
	CRenderAttributes::SetVectorValue(
			CUtlStringToken nTokenID,
			Vector vValue);  // 4827
} /* size: 82, inline expansions: 6 (69 bytes) */

// <01305E38> engine2/interop.engine.cpp:4830
// variables: 14
// function calls: 33
void CRndrttrbts_GetVectorValue(void* self, uint32 nTokenID, Vector* vDefaultValue)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4833
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 376
	{
		int nIndex; // 381
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 61903
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 61913
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 61923
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 284
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const Vector4D ** pValueOut);  // 270
		CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const Vector4D ** pValueOut);  // 381
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 383
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValueOrDefault(
				uint32 k,
				Vector4D nDefault);  // 393
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 393
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValueOrDefault(
				CUtlStringToken nTok,
				Vector4D nDefault);  // 241
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 241
	CRenderAttributes::GetVectorValue(
			CUtlStringToken nTokenID,
			Vector vDefaultValue);  // 4833
} /* size: 230, inline expansions: 8 (614 bytes) */

// <01305E14> engine2/interop.engine.cpp:4836
void CRndrttrbts_DeleteVectorValue(void* self, uint32 nTokenID)
{
} /* size: 0 */

// <01305C25> engine2/interop.engine.cpp:4842
// function calls: 7
void CRndrttrbts_SetVector4DValue(void* self, uint32 nTokenID, Vector4D* vValue)
{
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 4845
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 277
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 277
	CRenderAttributes::SetVector4DValue(
			CUtlStringToken nTokenID,
			Vector4D vValue);  // 4845
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4845
} /* size: 70, inline expansions: 7 (46 bytes) */

// <01305382> engine2/interop.engine.cpp:4848
// variables: 14
// function calls: 35
void CRndrttrbts_GetVector4DValue(void* self, uint32 nTokenID, Vector4D* vDefaultValue)
{
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 4851
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4851
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 376
	{
		int nIndex; // 381
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 61903
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 61913
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 61923
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 284
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const Vector4D ** pValueOut);  // 270
		CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const Vector4D ** pValueOut);  // 381
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 383
	}
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 388
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValueOrDefault(
				uint32 k,
				Vector4D nDefault);  // 393
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 393
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValueOrDefault(
				CUtlStringToken nTok,
				Vector4D nDefault);  // 282
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 282
	CRenderAttributes::GetVector4DValue(
			CUtlStringToken nTokenID,
			Vector4D vDefaultValue);  // 4851
} /* size: 230, inline expansions: 10 (622 bytes) */

// <0130535E> engine2/interop.engine.cpp:4854
void CRndrttrbts_DeleteVector4DValue(void* self, uint32 nTokenID)
{
} /* size: 0 */

// <013051F8> engine2/interop.engine.cpp:4860
// function calls: 4
void CRndrttrbts_SetVMatrixValue(void* self, uint32 nTokenID, VMatrix* value)
{
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::SetValue(
		const CUtlStringToken& nTok,
		VMatrix nValue);  // 313
	CRenderAttributes::SetVMatrixValue(
			CUtlStringToken nTokenID,
			VMatrix vValue);  // 4863
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4863
} /* size: 187, inline expansions: 4 (235 bytes) */

// <013049E6> engine2/interop.engine.cpp:4866
// variables: 14
// function calls: 30
void CRndrttrbts_GetVMatrixValue(void* self, uint32 nTokenID, VMatrix* vDefaultValue)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4869
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 376
	{
		int nIndex; // 381
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<VMatrix, 1, VMatrix>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		CUtlAttributeListChunk<VMatrix, 1, VMatrix>::GetValuePtrFromIndex(
					int nIdx);  // 275
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 57988
			CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 57998
			CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 58008
			CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<VMatrix, 2, VMatrix>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlAttributeListChunk<VMatrix, 2, VMatrix>::GetValuePtrFromIndex(
						int nIdx);  // 284
			CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 279
		}
		CUtlAttributeList<VMatrix, 1, VMatrix, 2>::FindIndexOfMatch(
				i32x4 n4Key,
				const VMatrix ** pValueOut);  // 270
		CUtlAttributeList<VMatrix, 1, VMatrix, 2>::FindIndexOfMatch(
				i32x4 n4Key,
				const VMatrix ** pValueOut);  // 381
	}
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::GetValueOrDefault(
				uint32 k,
				VMatrix nDefault);  // 393
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::GetValueOrDefault(
				CUtlStringToken nTok,
				VMatrix nDefault);  // 318
	CRenderAttributes::GetVMatrixValue(
			CUtlStringToken nTokenID,
			VMatrix vDefaultValue);  // 4869
} /* size: 283, inline expansions: 6 (785 bytes) */

// <0130421E> engine2/interop.engine.cpp:4872
// variables: 13
// function calls: 30
void CRndrttrbts_DeleteVMatrixValue(void* self, uint32 nTokenID)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4875
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 536
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 57881
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 57891
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 57901
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				VMatrix** pValueOut);  // 328
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				VMatrix** pValueOut);  // 536
	ReleaseValueFromAttribute<VMatrix>(VMatrix* pT); // 540
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::DeleteValue(
			CUtlStringToken nTok);  // 329
	CRenderAttributes::DeleteVMatrixValue(
				CUtlStringToken nToken);  // 4875
} /* size: 137, inline expansions: 10 (480 bytes) */

// <01303F57> engine2/interop.engine.cpp:4878
// function calls: 9
void CRndrttrbts_SetStringValue(void* self, uint32 nTokenID, const char* str)
{
	CUtlString::CUtlString(
			const char* pString);  // 406
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 571
	CUtlString::~CUtlString(); // 571
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::SetValue(
		const CUtlStringToken& nTok,
		CUtlString nValue);  // 406
	CUtlString::~CUtlString(); // 406
	CRenderAttributes::SetStringValue(
			CUtlStringToken nTokenID,
			const char* str);  // 4881
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4881
} /* size: 177, inline expansions: 9 (272 bytes) */

// <013036C6> engine2/interop.engine.cpp:4884
// variables: 13
// function calls: 33
void CRndrttrbts_DeleteStringValue(void* self, uint32 nTokenID)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4887
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 536
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::GetValuePtrFromIndex(
				int nIdx);  // 334
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 50187
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 50197
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 50207
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				CUtlString** pValueOut);  // 328
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				CUtlString** pValueOut);  // 536
	CUtlString::Clear(); // 962
	ReleaseValueFromAttribute<CUtlString>(CUtlString* pS); // 540
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::DeleteValue(
			CUtlStringToken nTok);  // 417
	CRenderAttributes::DeleteStringValue(
				CUtlStringToken nToken);  // 4887
} /* size: 169, inline expansions: 12 (587 bytes) */

// <01303559> engine2/interop.engine.cpp:4890
// function calls: 4
void CRndrttrbts_SetIntValue(void* self, uint32 nTokenID, int nValue)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4893
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 456
	CRenderAttributes::SetIntValue(
			CUtlStringToken nTokenID,
			int nValue);  // 4893
} /* size: 31, inline expansions: 4 (38 bytes) */

// <01302DE1> engine2/interop.engine.cpp:4896
// variables: 14
// function calls: 30
void CRndrttrbts_GetIntValue(void* self, uint32 nTokenID, int nDefaultValue)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4899
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 376
	{
		int nIndex; // 381
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 46239
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 46249
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 46259
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 284
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const IntVector4D ** pValueOut);  // 270
		CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const IntVector4D ** pValueOut);  // 381
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValueOrDefault(
				uint32 k,
				IntVector4D nDefault);  // 393
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValueOrDefault(
				CUtlStringToken nTok,
				IntVector4D nDefault);  // 465
	CRenderAttributes::GetIntValue(
			CUtlStringToken nTokenID,
			int nDefaultValue);  // 4899
} /* size: 194, inline expansions: 6 (550 bytes) */

// <01302671> engine2/interop.engine.cpp:4902
// variables: 13
// function calls: 30
void CRndrttrbts_DeleteIntValue(void* self, uint32 nTokenID)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4905
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 536
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 46132
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 46142
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 46152
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 328
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 536
	ReleaseValueFromAttribute<IntVector4D>(IntVector4D* pT); // 540
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::DeleteValue(
			CUtlStringToken nTok);  // 491
	CRenderAttributes::DeleteIntValue(
			CUtlStringToken nToken);  // 4905
} /* size: 175, inline expansions: 10 (624 bytes) */

// <01302504> engine2/interop.engine.cpp:4908
// function calls: 4
void CRndrttrbts_SetComboValue(void* self, uint32 nTokenID, unsigned char nValue)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4911
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 4911
} /* size: 32, inline expansions: 4 (39 bytes) */

// <01301D87> engine2/interop.engine.cpp:4914
// variables: 14
// function calls: 30
void CRndrttrbts_GetComboValue(void* self, uint32 nTokenID, unsigned char nValue)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4917
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 376
	{
		int nIndex; // 381
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 46239
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 46249
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 46259
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 284
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const IntVector4D ** pValueOut);  // 270
		CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const IntVector4D ** pValueOut);  // 381
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValueOrDefault(
				uint32 k,
				IntVector4D nDefault);  // 393
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValueOrDefault(
				CUtlStringToken nTok,
				IntVector4D nDefault);  // 523
	CRenderAttributes::GetComboValue(
			CUtlStringToken nTokenID,
			uint8 nDefaultValue);  // 4917
} /* size: 195, inline expansions: 6 (544 bytes) */

// <01301D63> engine2/interop.engine.cpp:4920
void CRndrttrbts_DeleteComboValue(void* self, uint32 nTokenID)
{
} /* size: 0 */

// <01301BF6> engine2/interop.engine.cpp:4926
// function calls: 4
void CRndrttrbts_SetBoolValue(void* self, uint32 nTokenID, int bValue)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4929
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 571
	CRenderAttributes::SetBoolValue(
			CUtlStringToken nTokenID,
			bool bValue);  // 4929
} /* size: 36, inline expansions: 4 (43 bytes) */

// <0130143C> engine2/interop.engine.cpp:4932
// variables: 14
// function calls: 30
void CRndrttrbts_GetBoolValue(void* self, uint32 nTokenID, int bValue)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4935
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 376
	{
		int nIndex; // 381
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 46239
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 46249
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 46259
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 284
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const IntVector4D ** pValueOut);  // 270
		CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const IntVector4D ** pValueOut);  // 381
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValueOrDefault(
				uint32 k,
				IntVector4D nDefault);  // 393
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValueOrDefault(
				CUtlStringToken nTok,
				IntVector4D nDefault);  // 576
	CRenderAttributes::GetBoolValue(
			CUtlStringToken nTokenID,
			bool bDefaultValue);  // 4935
} /* size: 210, inline expansions: 6 (517 bytes) */

// <01301418> engine2/interop.engine.cpp:4938
void CRndrttrbts_DeleteBoolValue(void* self, uint32 nTokenID)
{
} /* size: 0 */

// <01300FF7> engine2/interop.engine.cpp:4944
// function calls: 17
void CRndrttrbts_SetTextureValue(void* self, uint32 nTokenID, HRenderTextureStrong* txtr, int nSingleMipLevelToBind)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 4947
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4947
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 619
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
	TextureAttr_t::TextureAttr_t(
			HRenderTexture hT,
			int32 nMip);  // 619
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
	TextureAttr_t::TextureAttr_t(
			const TextureAttr_t  &);  // 571
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetValue(
		const CUtlStringToken& nTok,
		TextureAttr_t nValue);  // 619
	CRenderAttributes::SetTextureValue(
			CUtlStringToken nTokenID,
			HRenderTexture txtr,
			int32 nSingleMipLevelToBind);  // 4947
} /* size: 80, inline expansions: 17 (65 bytes) */

// <013002DE> engine2/interop.engine.cpp:4950
// variables: 14
// function calls: 55
void CRndrttrbts_GetTextureValue(void* self, uint32 nTokenID, HRenderTextureStrong* defaultTxtr)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 4953
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4953
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 624
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
	TextureAttr_t::TextureAttr_t(
			HRenderTexture hT,
			int32 nMip);  // 624
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
	TextureAttr_t::TextureAttr_t(
			const TextureAttr_t  &);  // 625
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
	TextureAttr_t::TextureAttr_t(
			const TextureAttr_t  &);  // 393
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 376
	{
		int nIndex; // 381
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 41442
			CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 41452
			CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 41462
			Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
			CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
							const OverflowChunk_t* pNode);  // 1160
			begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
			CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
							const OverflowChunk_t* pNode);  // 1165
			end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 284
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
				i32x4 n4Key,
				const TextureAttrForStorage_t ** pValueOut);  // 270
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
				i32x4 n4Key,
				const TextureAttrForStorage_t ** pValueOut);  // 381
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 266
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				ResourceHandleTyped_t hResource);  // 993
		TextureAttr_t::TextureAttr_t(
				const TextureAttrForStorage_t& other);  // 383
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValueOrDefault(
				uint32 k,
				TextureAttr_t nDefault);  // 393
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValueOrDefault(
				CUtlStringToken nTok,
				TextureAttr_t nDefault);  // 625
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 625
	CRenderAttributes::GetTextureValue(
			CUtlStringToken nTokenID,
			HRenderTexture defaultTxtr);  // 4953
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4953
} /* size: 309, inline expansions: 27 (732 bytes) */

// <012FFA23> engine2/interop.engine.cpp:4956
// variables: 13
// function calls: 37
void CRndrttrbts_DeleteTextureValue(void* self, uint32 nTokenID)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4959
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 536
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 41335
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 41345
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 41355
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 337
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this); // 337
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
					int nIdx);  // 343
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				TextureAttrForStorage_t** pValueOut);  // 328
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				TextureAttrForStorage_t** pValueOut);  // 536
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 947
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 947
	ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>(TextureAttrForStorage_t* pT); // 540
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::DeleteValue(
			CUtlStringToken nTok);  // 691
	CRenderAttributes::DeleteTextureValue(
				CUtlStringToken nToken);  // 4959
} /* size: 236, inline expansions: 16 (871 bytes) */

// <012FF473> engine2/interop.engine.cpp:4962
// variables: 4
// function calls: 20
void CRndrttrbts_SetSamplerValue(void* self, uint32 nTokenID, CSamplerStateDesc* samplerDesc)
{
	CSamplerStateDescBase::CSamplerStateDescBase(); // 975
	{
		uint32* pThis; // 978
		const uint32* pDefault; // 979
		CSamplerStateDescBase::CSamplerStateDescBase(); // 927
		{
			float32 flZeros; // 936
			float32 flOnes; // 937
			CSamplerStateDescBase::SetFilterMode(
					RsFilter_t filter);  // 928
			CSamplerStateDescBase::SetTextureAddressModeU(
						RsTextureAddressMode_t addressMode);  // 929
			CSamplerStateDescBase::SetTextureAddressModeV(
						RsTextureAddressMode_t addressMode);  // 930
			CSamplerStateDescBase::SetTextureAddressModeW(
						RsTextureAddressMode_t addressMode);  // 931
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 800
			CSamplerStateDescBase::SetMaxAnisotropy(
					uint32 nMaxAniso);  // 933
			CSamplerStateDescBase::SetMipLodBias(
					float32 flBias);  // 932
			CSamplerStateDescBase::SetBorderColor(
					const float32* pBorderColor);  // 938
			CSamplerStateDescBase::SetComparisonFunc(
						RsComparison_t compFunc);  // 934
			CSamplerStateDescBase::SetMinMaxLod(
					uint32 nMinLod,
					uint32 nMaxLod);  // 935
			CSamplerStateDescBase::SetGlobalMipBiasOverrideAllowed(
							bool bAllow);  // 939
		}
		CSamplerStateDesc::CSamplerStateDesc(
					RsFilter_t filter,
					RsTextureAddressMode_t addressU,
					RsTextureAddressMode_t addressV,
					RsTextureAddressMode_t addressW,
					float32 flMipLodBias,
					uint32 nMaxAniso,
					RsComparison_t comparisonFunc,
					uint32 nMinLod,
					uint32 nMaxLod,
					bool bWhiteBorder,
					bool bAllowGlobalMipBiasOverride);  // 970
		DefaultSamplerStateDesc(void); // 959
		DefaultSamplerStateDesc(void); // 979
	}
	CSamplerStateDesc::CSamplerStateDesc(); // 54
	SamplerAttr_t::SamplerAttr_t(
			const CSamplerStateDesc& inSamplerDesc);  // 600
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::SetValue(
		const CUtlStringToken& nTok,
		SamplerAttr_t nValue);  // 600
	CRenderAttributes::SetSamplerValue(
			CUtlStringToken nTokenID,
			CSamplerStateDesc sampler);  // 4965
} /* size: 280, inline expansions: 5 (541 bytes) */

// <01369FBC> engine2/interop.engine.cpp:4968
// function calls: 5
void CRndrttrbts_SetBufferValue(void* self, uint32 nTokenID, RenderBufferHandle_t hRenderBuffer)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4971
	CUtlAttributeList<void::SetValue(
		const CUtlStringToken& nTok,
		void* nValue);  // 349
	CRenderAttributes::SetPtrValue(
			CUtlStringToken nTokenID,
			void* pValue);  // 398
	CRenderAttributes::SetBufferValue(
			CUtlStringToken nTokenID,
			RenderBufferHandle_t hRenderBuffer);  // 4971
} /* size: 16, inline expansions: 5 (29 bytes) */

// <012FF441> engine2/interop.engine.cpp:4968
void CRndrttrbts_SetBufferValue(void* self, uint32 nTokenID, RenderBufferHandle_t hRenderBuffer)
{
} /* size: 0 */

// <012FF410> engine2/interop.engine.cpp:4974
void CRndrttrbts_SetPtrValue(void* self, uint32 nTokenID, void* ptr)
{
} /* size: 0 */

// <012FEC58> engine2/interop.engine.cpp:4980
// variables: 13
// function calls: 30
void CRndrttrbts_DeletePtrValue(void* self, uint32 nTokenID)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4983
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 536
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<void::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	CUtlAttributeListChunk<void::GetKeyPtrFromIndex(
				int nIdx);  // 333
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 54282
		CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 54292
		CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 54302
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<void::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<void::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlIntrusiveListIterator<CUtlAttributeList<void::operator++(); // 337
	}
	CUtlAttributeList<void::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				void*** pValueOut);  // 328
	CUtlAttributeList<void::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				void*** pValueOut);  // 536
	ReleaseValueFromAttribute<void*>(void** pT); // 540
	CUtlAttributeList<void::DeleteValue(
			CUtlStringToken nTok);  // 365
	CRenderAttributes::DeletePtrValue(
			CUtlStringToken nToken);  // 4983
} /* size: 137, inline expansions: 10 (496 bytes) */

// <012FEA7D> engine2/interop.engine.cpp:4986
// function calls: 4
void CRndrttrbts_SetIntVector4DValue(void* self, uint32 nTokenID, int x, int y, int z, int w)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 4989
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 427
	CRenderAttributes::SetIntVector4DValue(
				CUtlStringToken nTokenID,
				int x,
				int y,
				int z,
				int w);  // 4989
} /* size: 76, inline expansions: 4 (99 bytes) */

// <012FE9DA> engine2/interop.engine.cpp:4992
// function call: 1
void CRndrttrbts_MergeToPtr(void* self, CRenderAttributes* attrList)
{
	CRenderAttributes::MergeToPtr(
			CRenderAttributes* attrList);  // 4995
} /* size: 17, inline expansions: 1 (12 bytes) */

// <012FE991> engine2/interop.engine.cpp:4998
void CRndrttrbts_IsEmpty(void* self)
{
} /* size: 18 */

// <012FE900> engine2/interop.engine.cpp:5004
void CRndrttrbts_Clear(void* self, int freeMemory, int resetParent)
{
} /* size: 27 */

// <0136ABBD> engine2/interop.engine.cpp:5010
// function calls: 2
void CRenderMesh_DestroyStrongHandle(void* self)
{
	CStrongHandle<InfoForResourceTypeCRenderMesh>::~CStrongHandle(); // 5013
	CRenderMesh_DestroyStrongHandle(void* self); // 5010
} /* size: 49, inline expansions: 2 (40 bytes) */

// <012FE8E8> engine2/interop.engine.cpp:5010
void CRenderMesh_DestroyStrongHandle(void* self)
{
} /* size: 0 */

// <012FE88A> engine2/interop.engine.cpp:5016
// function call: 1
void CRenderMesh_IsStrongHandleValid(void* self)
{
	CStrongHandle<InfoForResourceTypeCRenderMesh>::HasData(); // 5019
} /* size: 24, inline expansions: 1 (19 bytes) */

// <012FE82C> engine2/interop.engine.cpp:5022
// function call: 1
void CRenderMesh_IsError(void* self)
{
	CStrongHandle<InfoForResourceTypeCRenderMesh>::IsError(); // 5025
} /* size: 24, inline expansions: 1 (16 bytes) */

// <012FE7D3> engine2/interop.engine.cpp:5028
// function call: 1
void CRenderMesh_IsStrongHandleLoaded(void* self)
{
	CStrongHandle<InfoForResourceTypeCRenderMesh>::IsLoaded(); // 5031
} /* size: 41, inline expansions: 1 (28 bytes) */

// <012FE5F0> engine2/interop.engine.cpp:5034
// function calls: 8
void CRenderMesh_CopyStrongHandle(void* self)
{
	CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle(); // 5037
	CWeakHandle<InfoForResourceTypeCRenderMesh>::GetBinding(); // 476
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCRenderMesh>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCRenderMesh>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCRenderMesh>& src);  // 5037
} /* size: 102, inline expansions: 8 (127 bytes) */

// <012FE58D> engine2/interop.engine.cpp:5040
// function call: 1
const void* CRenderMesh_GetBindingPtr(void* self)
{
	CStrongHandle<InfoForResourceTypeCRenderMesh>::GetBinding(); // 5043
} /* size: 8, inline expansions: 1 (0 bytes) */

// <012FE524> engine2/interop.engine.cpp:5046
void* From_CSceneObject_To_CSceneAnimatableObject(CSceneObject* ptr)
{
} /* size: 35 */

// <012FE100> engine2/interop.engine.cpp:5049
// variables: 2
// function calls: 17
void CScnnmtblbjct_SetWorldSpaceRenderBoneTransform(void* self, int nBoneIndex, CTransformUnaligned* pRenderWorldTransform)
{
	CUtlMemory<matrix3x4a_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
			int i);  // 1063
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	VectorAligned::operator fltx4(); // 98
	CTransform::GetScale(); // 362
	{
		int i; // 325
		{
			int j; // 327
		}
	}
	matrix3x4_t::ScaleUpper3x3Matrix(
				float flScale);  // 365
	CTransform::ToMatrix(); // 208
	TransformMatrix(const CTransform& in,
			matrix3x4_t& out);  // 1063
	CSceneAnimatableObject::SetWorldSpaceRenderBoneTransform(
					int nBoneIndex,
					const CTransform  pRenderWorldTransform);  // 5052
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	VectorAligned::VectorAligned(); // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 534
	CTransformUnaligned::UniformScale(); // 534
	CTransform::CTransform(
			const CTransformUnaligned& tx);  // 5052
} /* size: 352, inline expansions: 17 (947 bytes) */

// <012FDB46> engine2/interop.engine.cpp:5055
// function calls: 27
void CScnnmtblbjct_GetWorldSpaceRenderBoneTransform(void* self, int nBoneIndex)
{
	CSceneObject::GetModel(); // 1068
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 1071
	CUtlMemory<matrix3x4a_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
			int i);  // 1074
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	matrix3x4_t::ToCTransform(); // 1074
	CSceneAnimatableObject::GetWorldSpaceRenderBoneTransform(
					int nBoneIndex);  // 5058
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	CTransform::GetScale(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 127
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 127
	CTransformUnaligned::CTransformUnaligned(
				const CTransform& transform);  // 5058
} /* size: 299, inline expansions: 27 (732 bytes) */

// <012FD371> engine2/interop.engine.cpp:5061
// function calls: 35
void CScnnmtblbjct_GetWorldSpaceRenderBoneTransform_1(void* self, const char* boneName)
{
	CUtlString::CUtlString(
			const char* pString);  // 5064
	CSceneObject::GetModel(); // 1079
	CSceneObject::GetModel(); // 1082
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1082
	CSceneObject::GetModel(); // 1068
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 1071
	CUtlMemory<matrix3x4a_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
			int i);  // 1074
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	matrix3x4_t::ToCTransform(); // 1074
	CSceneAnimatableObject::GetWorldSpaceRenderBoneTransform(
					int nBoneIndex);  // 1066
	CSceneAnimatableObject::GetWorldSpaceRenderBoneTransform(
					int nBoneIndex);  // 1083
	CSceneAnimatableObject::GetWorldSpaceRenderBoneTransform(
					const CUtlString& boneName);  // 5064
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	CTransform::GetScale(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 127
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 127
	CTransformUnaligned::CTransformUnaligned(
				const CTransform& transform);  // 5064
	CUtlString::~CUtlString(); // 5064
} /* size: 465, inline expansions: 35 (1252 bytes) */

// <012FCDB7> engine2/interop.engine.cpp:5067
// function calls: 27
void CScnnmtblbjct_GetWorldSpaceRenderBonePreviousTransform(void* self, int nBoneIndex)
{
	CSceneObject::GetModel(); // 1088
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 1091
	CUtlMemory<matrix3x4a_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
			int i);  // 1094
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	matrix3x4_t::ToCTransform(); // 1094
	CSceneAnimatableObject::GetWorldSpaceRenderBonePreviousTransform(
						int nBoneIndex);  // 5070
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	CTransform::GetScale(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 127
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 127
	CTransformUnaligned::CTransformUnaligned(
				const CTransform& transform);  // 5070
} /* size: 299, inline expansions: 27 (732 bytes) */

// <012FC5F2> engine2/interop.engine.cpp:5073
// function calls: 35
void CScnnmtblbjct_GetWorldSpaceRenderBonePreviousTransform_1(void* self, const char* boneName)
{
	CUtlString::CUtlString(
			const char* pString);  // 5076
	CSceneObject::GetModel(); // 1099
	CSceneObject::GetModel(); // 1102
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1102
	CSceneObject::GetModel(); // 1088
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 1091
	CUtlMemory<matrix3x4a_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
			int i);  // 1094
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	matrix3x4_t::ToCTransform(); // 1094
	CSceneAnimatableObject::GetWorldSpaceRenderBoneTransform(
					int nBoneIndex);  // 1066
	CSceneAnimatableObject::GetWorldSpaceRenderBonePreviousTransform(
						int nBoneIndex);  // 1103
	CSceneAnimatableObject::GetWorldSpaceRenderBonePreviousTransform(
						const CUtlString& boneName);  // 5076
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	CTransform::GetScale(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 127
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 127
	CTransformUnaligned::CTransformUnaligned(
				const CTransform& transform);  // 5076
	CUtlString::~CUtlString(); // 5076
} /* size: 465, inline expansions: 35 (1252 bytes) */

// <012FBC68> engine2/interop.engine.cpp:5079
// variables: 2
// function calls: 47
void CScnnmtblbjct_GetLocalSpaceRenderBoneTransform(void* self, int nBoneIndex)
{
	CSceneObject::GetModel(); // 1108
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 1111
	CSceneObject::GetModel(); // 1114
	{
		matrix3x4a_t worldToBone; // 1118
		matrix3x4a_t local; // 1121
		CUtlMemory<matrix3x4a_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
				int i);  // 1122
		matrix3x4_t::matrix3x4_t(); // 303
		matrix3x4a_t::matrix3x4a_t(); // 1118
		CUtlMemory<matrix3x4a_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
				int i);  // 1119
	}
	CSceneObject::GetTransform(); // 1128
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 1130
	CUtlMemory<matrix3x4a_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
			int i);  // 1131
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	matrix3x4_t::ToCTransform(); // 1133
	CSceneAnimatableObject::GetLocalSpaceRenderBoneTransform(
					int nBoneIndex);  // 1106
	CSceneAnimatableObject::GetLocalSpaceRenderBoneTransform(
					int nBoneIndex);  // 5082
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	CTransform::GetScale(); // 127
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 127
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 127
	CTransformUnaligned::CTransformUnaligned(
				const CTransform& transform);  // 5082
} /* size: 457, inline expansions: 41 (1264 bytes) */

// <012FB126> engine2/interop.engine.cpp:5085
// variables: 2
// function calls: 54
void CScnnmtblbjct_GetLocalSpaceRenderBoneTransform_1(void* self, const char* boneName)
{
	CUtlString::CUtlString(
			const char* pString);  // 5088
	CSceneObject::GetModel(); // 1138
	CSceneObject::GetModel(); // 1141
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1141
	CSceneObject::GetModel(); // 1108
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 1111
	CSceneObject::GetModel(); // 1114
	{
		matrix3x4a_t worldToBone; // 1118
		matrix3x4a_t local; // 1121
		CUtlMemory<matrix3x4a_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
				int i);  // 1122
		matrix3x4_t::matrix3x4_t(); // 303
		matrix3x4a_t::matrix3x4a_t(); // 1118
		CUtlMemory<matrix3x4a_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
				int i);  // 1119
	}
	CSceneObject::GetTransform(); // 1128
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 1130
	CUtlMemory<matrix3x4a_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
			int i);  // 1131
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	matrix3x4_t::ToCTransform(); // 1133
	CSceneAnimatableObject::GetLocalSpaceRenderBoneTransform(
					int nBoneIndex);  // 1106
	CSceneAnimatableObject::GetLocalSpaceRenderBoneTransform(
					int nBoneIndex);  // 1142
	CSceneAnimatableObject::GetLocalSpaceRenderBoneTransform(
					const CUtlString& boneName);  // 5088
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	CTransform::GetScale(); // 127
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 127
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 127
	CTransformUnaligned::CTransformUnaligned(
				const CTransform& transform);  // 5088
	CUtlString::~CUtlString(); // 5088
} /* size: 652, inline expansions: 48 (1986 bytes) */

// <012FADFE> engine2/interop.engine.cpp:5091
// function calls: 14
void CScnnmtblbjct_GetWorldSpaceAnimationTransform(void* self, int nBoneIndex)
{
	CSceneObject::GetModel(); // 1147
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 1150
	CUtlMemory<CTransform, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
			int i);  // 1153
	CSceneAnimatableObject::GetWorldSpaceAnimationTransform(
					int nBoneIndex);  // 1145
	CSceneAnimatableObject::GetWorldSpaceAnimationTransform(
					int nBoneIndex);  // 5094
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 127
	CTransform::GetScale(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 127
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 127
	CTransformUnaligned::CTransformUnaligned(
				const CTransform& transform);  // 5094
} /* size: 144, inline expansions: 14 (189 bytes) */

// <012FAD98> engine2/interop.engine.cpp:5097
void CScnnmtblbjct_Update(void* self, float dt)
{
} /* size: 9 */

// <012FAD33> engine2/interop.engine.cpp:5103
void CScnnmtblbjct_MergeFrom(void* self, CSceneAnimatableObject* other)
{
} /* size: 9 */

// <012FA397> engine2/interop.engine.cpp:5109
// variables: 2
// function calls: 39
void CScnnmtblbjct_SetBindPose(void* self)
{
	CSceneObject::GetModel(); // 854
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 865
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 865
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 865
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 867
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 869
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 870
	{
		int i; // 872
		CUtlMemory<matrix3x4a_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
				int i);  // 874
		matrix3x4_t::matrix3x4_t(); // 753
		Vector::LargestComponentValue(); // 755
		MatrixPosition(const matrix3x4_t& matrix,
				Vector& position);  // 757
		MatrixQuaternion(const matrix3x4_t& mat,
				Quaternion& q,
				Vector& o,
				float& flScale);  // 308
		Quaternion::Quaternion(); // 305
		Vector::Vector(); // 306
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 309
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 111
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 310
		CTransform::InitFromMatrix(
				const matrix3x4_t& xform);  // 530
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 529
		matrix3x4_t::ToCTransform(); // 874
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 874
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 874
	}
	CSceneAnimatableObject::SetBindPose(); // 852
	CSceneAnimatableObject::SetBindPose(); // 5112
} /* size: 519, inline expansions: 17 (752 bytes) */

// <012FA0A5> engine2/interop.engine.cpp:5115
// function calls: 11
void CScnnmtblbjct_CalculateWorldSpaceBones(void* self)
{
	CSceneObject::GetModel(); // 981
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 985
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 989
	CSceneAnimatableObject::CalculateWorldSpaceBones(); // 5118
} /* size: 204, inline expansions: 11 (380 bytes) */

// <012F9D56> engine2/interop.engine.cpp:5121
// function calls: 13
void CScnnmtblbjct_FinishUpdate(void* self)
{
	CSceneObject::GetModel(); // 994
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 998
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 1003
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 1003
	CSceneAnimatableObject::FinishUpdate(); // 5124
} /* size: 193, inline expansions: 13 (325 bytes) */

// <012F9C0E> engine2/interop.engine.cpp:5127
// variables: 2
// function calls: 2
void CScnnmtblbjct_ResetGraphParameters(void* self)
{
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator==(
			const IAnimationGraphInstance* pOther);  // 609
	{
		int i; // 616
		{
			IAnimParameterInstance* pParam; // 618
		}
	}
	CSceneAnimatableObject::ResetGraphParameters(); // 5130
} /* size: 179, inline expansions: 2 (115 bytes) */

// <012F971A> engine2/interop.engine.cpp:5133
// function calls: 22
void CScnnmtblbjct_GetParentSpaceBone(void* self, int index)
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 608
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 608
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 611
	CAnimationState::GetAnimationDataCount<()0>(const CAnimationState* this); // 1015
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 1016
	CSceneAnimatableObject::GetParentSpaceBone(
				int index);  // 5136
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 127
	CTransform::GetScale(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 127
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 127
	CTransformUnaligned::CTransformUnaligned(
				const CTransform& transform);  // 5136
} /* size: 180, inline expansions: 22 (226 bytes) */

// <012F919C> engine2/interop.engine.cpp:5139
// function calls: 24
void CScnnmtblbjct_SetParentSpaceBone(void* self, int index, CTransformUnaligned* tx)
{
	CTransformUnaligned::UniformScale(); // 534
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 534
	CTransform::CTransform(
			const CTransformUnaligned& tx);  // 5142
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 608
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 608
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 611
	CAnimationState::GetAnimationDataCount<()0>(const CAnimationState* this); // 1028
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 1029
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 1032
	CSceneAnimatableObject::SetParentSpaceBone(
				int index,
				const CTransform& tx);  // 5142
} /* size: 169, inline expansions: 24 (320 bytes) */

// <012F8EC0> engine2/interop.engine.cpp:5145
// function calls: 15
void CScnnmtblbjct_InitAnimGraph(void* self, void* pAnimGraphChangedCallback)
{
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(void*), void (*)(void*), void (*)(void*)>* this); // 1084
	FastDelegate1<void::Clear(); // 1084
	FastDelegate1<void::FastDelegate1(); // 2160
	CUtlDelegate<void(void::CUtlDelegate()>* this); // 71
	FastDelegate1<void::Convert<FastDelegate1<void*, void>, void (
																void ()(const FastDelegate1<void*, void> *, void *) FastDelegate1<void*, void>::* function_to_bind,
																void ()(GenericClass *) GenericClass::*& bound_func);  // 746
	ClosurePtr<void (detail::GenericClass::::bindmemfunc<FastDelegate1<void*, void>, void (
													FastDelegate1<void*, void>* pthis,
													void ()(const FastDelegate1<void*, void> *, void *) FastDelegate1<void*, void>::* function_to_bind);  // 861
	ClosurePtr<void (detail::GenericClass::::bindstaticfunc<FastDelegate1<void*, void>, void (
													FastDelegate1<void*, void>* pParent,
													void ()(const FastDelegate1<void*, void> *, void *) FastDelegate1<void*, void>::* static_function_invoker,
													void (*function_to_bind)(void *));  // 1144
	FastDelegate1<void::Bind(
		void (*function_to_bind)(void *));  // 72
	FunctionPointerToDelegate<CUtlDelegate<void(void*)> >(void* ptr); // 5148
	CUtlAbstractDelegate::SetMementoFrom(
			const CUtlAbstractDelegate& right);  // 843
	ClosurePtr<void (detail::GenericClass::::CopyFrom<FastDelegate1<void*, void> >(
						FastDelegate1<void*, void>* pParent,
						const CUtlAbstractDelegate& right);  // 1091
	FastDelegate1<void::operator=(
			const FastDelegate1<void*, void>& x);  // 2148
	CUtlDelegate<void(void::operator=(
			const CUtlDelegate<void(void*)> &);  // 472
	CSceneAnimatableObject::InitAnimGraph(
			SboxAnimGraphChangedCallback pAnimGraphChangedCallback);  // 5148
} /* size: 53, inline expansions: 15 (225 bytes) */

// <012F894E> engine2/interop.engine.cpp:5151
// function calls: 21
void CScnnmtblbjct_SetAnimGraph(void* self, const char* graphName)
{
	CUtlString::CUtlString(
			const char* pString);  // 5154
	CSceneObject::GetModel(); // 554
	CUtlString::Get(); // 558
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 727
	IResourceSystem::FindExistingResourceByNameLoadingJustInTime(
							const CResourceName& resourceName);  // 757
	IResourceSystem::FindExistingResourceByNameLoadingJustInTime(
							const CResourceName& resourceName);  // 729
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 729
	IResourceSystem::FindExistingResourceByNameLoadingJustInTime<7525640765879247222>(
									const CResourceName& resourceName);  // 558
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 558
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 559
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::Init(
		const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 273
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 562
	CSceneAnimatableObject::SetAnimGraph(
			const CUtlString& graphName);  // 5154
	CUtlString::~CUtlString(); // 5154
} /* size: 372, inline expansions: 21 (614 bytes) */

// <012F87D4> engine2/interop.engine.cpp:5157
// function calls: 5
void CScnnmtblbjct_SetAnimGraph_1(void* self, HAnimationGraphStrong* hGraph)
{
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::GetHandle(); // 33
	ResourceHandle_GetHandle(HAnimationGraphStrong* target); // 5160
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012F8634> engine2/interop.engine.cpp:5163
// function calls: 6
void CScnnmtblbjct_GetAnimGraph(void* self)
{
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::Init(
		const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 273
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 604
	CSceneAnimatableObject::GetAnimGraph(); // 5166
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 5166
} /* size: 62, inline expansions: 6 (59 bytes) */

// <012F8278> engine2/interop.engine.cpp:5169
// function calls: 12
void CScnnmtblbjct_SBox_SetFlexOverride(void* self, uint32 name, float flWeight, float flFadeTime)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 5172
	CSceneObject::GetModel(); // 1158
	CSceneObject::GetModel(); // 1171
	Count(const CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> > this); // 1175
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::operator[](
			int i);  // 1180
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 1184
	CSceneAnimatableObject::SBox_SetFlexOverride(
				int flexId,
				float flWeight,
				float flFadeTime);  // 1169
	CSceneAnimatableObject::SBox_SetFlexOverride(
				int flexId,
				float flWeight,
				float flFadeTime);  // 1166
	CSceneAnimatableObject::SBox_SetFlexOverride(
				CUtlStringToken token,
				float flWeight,
				float flFadeTime);  // 5172
} /* size: 157, inline expansions: 12 (323 bytes) */

// <012F7FE9> engine2/interop.engine.cpp:5175
// function calls: 8
void CScnnmtblbjct_SBox_SetFlexOverride_1(void* self, int flexId, float flWeight, float flFadeTime)
{
	CSceneObject::GetModel(); // 1171
	Count(const CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> > this); // 1175
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::operator[](
			int i);  // 1180
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 1184
	CSceneAnimatableObject::SBox_SetFlexOverride(
				int flexId,
				float flWeight,
				float flFadeTime);  // 1169
	CSceneAnimatableObject::SBox_SetFlexOverride(
				int flexId,
				float flWeight,
				float flFadeTime);  // 5178
} /* size: 137, inline expansions: 8 (195 bytes) */

// <012F7E7A> engine2/interop.engine.cpp:5181
// function calls: 5
void CScnnmtblbjct_SBox_GetFlexOverride(void* self, int flexId)
{
	CSceneObject::GetModel(); // 1202
	Count(const CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> > this); // 1206
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::operator[](
			int i);  // 1211
	CSceneAnimatableObject::SBox_GetFlexOverride(
				int flexId);  // 5184
} /* size: 101, inline expansions: 5 (82 bytes) */

// <012F7C04> engine2/interop.engine.cpp:5187
// function calls: 9
void CScnnmtblbjct_SBox_GetFlexOverride_1(void* self, uint32 name)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 5190
	CSceneObject::GetModel(); // 1189
	CSceneObject::GetModel(); // 1202
	Count(const CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> > this); // 1206
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::operator[](
			int i);  // 1211
	CSceneAnimatableObject::SBox_GetFlexOverride(
				int flexId);  // 1197
	CSceneAnimatableObject::SBox_GetFlexOverride(
				CUtlStringToken token);  // 5190
} /* size: 121, inline expansions: 9 (168 bytes) */

// <012F7943> engine2/interop.engine.cpp:5193
// variable: 1
// function calls: 10
void CScnnmtblbjct_SBox_ClearFlexOverride(void* self, float flFadeTime)
{
	{
		int i; // 1216
		Count(const CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> > this); // 1216
		CSceneObject::GetModel(); // 1237
		Count(const CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> > this); // 1241
		CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::operator[](
				int i);  // 1246
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 1249
		CSceneAnimatableObject::SBox_ClearFlexOverride(
					int flexId,
					float flFadeTime);  // 1235
		CSceneAnimatableObject::SBox_ClearFlexOverride(
					int flexId,
					float flFadeTime);  // 1218
	}
	CSceneAnimatableObject::SBox_ClearFlexOverride(
				float flFadeTime);  // 5196
} /* size: 153, inline expansions: 1 (104 bytes) */

// <012F75AB> engine2/interop.engine.cpp:5199
// function calls: 12
void CScnnmtblbjct_SBox_ClearFlexOverride_1(void* self, uint32 name, float flFadeTime)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 5202
	CSceneObject::GetModel(); // 1224
	CSceneObject::GetModel(); // 1237
	Count(const CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> > this); // 1241
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::operator[](
			int i);  // 1246
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 1249
	CSceneAnimatableObject::SBox_ClearFlexOverride(
				int flexId,
				float flFadeTime);  // 1235
	CSceneAnimatableObject::SBox_ClearFlexOverride(
				int flexId,
				float flFadeTime);  // 1232
	CSceneAnimatableObject::SBox_ClearFlexOverride(
				CUtlStringToken token,
				float flFadeTime);  // 5202
} /* size: 146, inline expansions: 12 (283 bytes) */

// <012F7333> engine2/interop.engine.cpp:5205
// function calls: 8
void CScnnmtblbjct_SBox_ClearFlexOverride_2(void* self, int flexId, float flFadeTime)
{
	CSceneObject::GetModel(); // 1237
	Count(const CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> > this); // 1241
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::operator[](
			int i);  // 1246
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 1249
	CSceneAnimatableObject::SBox_ClearFlexOverride(
				int flexId,
				float flFadeTime);  // 1235
	CSceneAnimatableObject::SBox_ClearFlexOverride(
				int flexId,
				float flFadeTime);  // 5208
} /* size: 121, inline expansions: 8 (163 bytes) */

// <012F713A> engine2/interop.engine.cpp:5211
// function calls: 6
void CScnnmtblbjct_DirectPlayback_PlaySequence(void* self, const char* pSequenceName)
{
	CSceneObject::GetModel(); // 1262
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator!(); // 1254
	MyTypeID(void); // 200
	IAnimationGraphInstance::QueryInterface<IDirectPlaybackAnimNodeInstance>(); // 1257
	CSceneAnimatableObject::GetDirectPlaybackInstance(); // 1266
	CSceneAnimatableObject::DirectPlayback_PlaySequence(
					const char* pSequenceName);  // 5214
} /* size: 241, inline expansions: 6 (532 bytes) */

// <012F6EB2> engine2/interop.engine.cpp:5217
// function calls: 6
void CScnnmtblbjct_DirectPlayback_PlaySequence_1(void* self, const char* pSequenceName, Vector* vTargetPos, float flFacingHeading, float flInterpTime)
{
	CSceneObject::GetModel(); // 1279
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator!(); // 1254
	MyTypeID(void); // 200
	IAnimationGraphInstance::QueryInterface<IDirectPlaybackAnimNodeInstance>(); // 1257
	CSceneAnimatableObject::GetDirectPlaybackInstance(); // 1283
	CSceneAnimatableObject::DirectPlayback_PlaySequence(
					const char* pSequenceName,
					const Vector& vTargetPos,
					float flFacingHeading,
					float flInterpTime);  // 5220
} /* size: 276, inline expansions: 6 (580 bytes) */

// <012F6D50> engine2/interop.engine.cpp:5223
// function calls: 5
void CScnnmtblbjct_DirectPlayback_CancelSequence(void* self)
{
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator!(); // 1254
	MyTypeID(void); // 200
	IAnimationGraphInstance::QueryInterface<IDirectPlaybackAnimNodeInstance>(); // 1257
	CSceneAnimatableObject::GetDirectPlaybackInstance(); // 1296
	CSceneAnimatableObject::DirectPlayback_CancelSequence(); // 5226
} /* size: 185, inline expansions: 5 (527 bytes) */

// <012F6BEE> engine2/interop.engine.cpp:5229
// function calls: 5
void CScnnmtblbjct_DirectPlayback_GetSequenceCycle(void* self)
{
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator!(); // 1254
	MyTypeID(void); // 200
	IAnimationGraphInstance::QueryInterface<IDirectPlaybackAnimNodeInstance>(); // 1257
	CSceneAnimatableObject::GetDirectPlaybackInstance(); // 1305
	CSceneAnimatableObject::DirectPlayback_GetSequenceCycle(); // 5232
} /* size: 197, inline expansions: 5 (527 bytes) */

// <012F6994> engine2/interop.engine.cpp:5235
// function calls: 7
void CScnnmtblbjct_DirectPlayback_GetSequence(void* self)
{
	CSceneObject::GetModel(); // 1314
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator!(); // 1254
	MyTypeID(void); // 200
	IAnimationGraphInstance::QueryInterface<IDirectPlaybackAnimNodeInstance>(); // 1257
	CSceneAnimatableObject::GetDirectPlaybackInstance(); // 1318
	HSequence::operator==(
			const HSequence& other);  // 1323
	CSceneAnimatableObject::DirectPlayback_GetSequence(); // 5238
} /* size: 252, inline expansions: 7 (524 bytes) */

// <012F67F8> engine2/interop.engine.cpp:5241
// function calls: 5
void CScnnmtblbjct_DirectPlayback_SetSequenceStartTime(void* self, float flStartTime)
{
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator!(); // 1254
	MyTypeID(void); // 200
	IAnimationGraphInstance::QueryInterface<IDirectPlaybackAnimNodeInstance>(); // 1257
	CSceneAnimatableObject::GetDirectPlaybackInstance(); // 1331
	CSceneAnimatableObject::DirectPlayback_SetSequenceStartTime(
						float flStartTime);  // 5244
} /* size: 193, inline expansions: 5 (526 bytes) */

// <012F65F1> engine2/interop.engine.cpp:5247
// function calls: 7
void CScnnmtblbjct_DirectPlayback_GetSequenceDuration(void* self)
{
	CSceneObject::GetModel(); // 1340
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator!(); // 1254
	MyTypeID(void); // 200
	IAnimationGraphInstance::QueryInterface<IDirectPlaybackAnimNodeInstance>(); // 1257
	CSceneAnimatableObject::GetDirectPlaybackInstance(); // 1344
	HSequence::operator==(
			const HSequence& other);  // 1349
	CSceneAnimatableObject::DirectPlayback_GetSequenceDuration(); // 5250
} /* size: 245, inline expansions: 7 (529 bytes) */

// <012F64E3> engine2/interop.engine.cpp:5253
// function calls: 2
void CScnnmtblbjct_SBox_GetAttachment(void* self, uint32 name, int worldspace, CTransformUnaligned* tx)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 5256
} /* size: 26, inline expansions: 2 (0 bytes) */

// <012F6238> engine2/interop.engine.cpp:5259
// function calls: 10
void CScnnmtblbjct_SetShouldUseAnimGraph(void* self, int bEnabled)
{
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator=(
			IAnimationGraphInstance* pObj);  // 319
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::CSmartPtr(
			IAnimationGraphInstance* pObj);  // 1519
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<IAnimationGraphInstance>(IAnimationGraphInstance* pObj); // 344
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::~CSmartPtr(); // 1519
	CSceneAnimatableObject::SetShouldUseAnimGraph(
				bool bEnabled);  // 5262
} /* size: 197, inline expansions: 10 (239 bytes) */

// <012F61AE> engine2/interop.engine.cpp:5265
// function calls: 2
void CScnnmtblbjct_GetShouldUseAnimGraph(void* self)
{
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator bool(); // 1525
	CSceneAnimatableObject::GetShouldUseAnimGraph(); // 5268
} /* size: 51, inline expansions: 2 (24 bytes) */

// <012F6072> engine2/interop.engine.cpp:5271
// function calls: 3
void CScnnmtblbjct_GetSequence(void* self)
{
	CSceneObject::GetModel(); // 1413
	HSequence::operator==(
			const HSequence& other);  // 1418
	CSceneAnimatableObject::GetSequence(); // 5274
} /* size: 119, inline expansions: 3 (96 bytes) */

// <012F5FA8> engine2/interop.engine.cpp:5277
// function calls: 2
void CScnnmtblbjct_SetSequence(void* self, const char* pSequenceName)
{
	CSceneObject::GetModel(); // 1399
	CSceneAnimatableObject::SetSequence(
			const char* pSequenceName);  // 5280
} /* size: 97, inline expansions: 2 (87 bytes) */

// <012F5EAF> engine2/interop.engine.cpp:5283
// function calls: 3
void CScnnmtblbjct_GetSequenceDuration(void* self)
{
	CSceneObject::GetModel(); // 1429
	HSequence::operator==(
			const HSequence& other);  // 1434
	CSceneAnimatableObject::GetSequenceDuration(); // 5286
} /* size: 133, inline expansions: 3 (117 bytes) */

// <012F5DCA> engine2/interop.engine.cpp:5289
// function calls: 3
void CScnnmtblbjct_GetSequenceCycle(void* self)
{
	CSceneObject::GetModel(); // 1445
	HSequence::operator==(
			const HSequence& other);  // 1450
	CSceneAnimatableObject::GetSequenceCycle(); // 5292
} /* size: 101, inline expansions: 3 (80 bytes) */

// <012F5C83> engine2/interop.engine.cpp:5295
// function calls: 4
void CScnnmtblbjct_SetSequenceCycle(void* self, float flCycle)
{
	CSceneObject::GetModel(); // 1461
	HSequence::operator==(
			const HSequence& other);  // 1466
	CSceneAnimatableObject::SetSequenceCycle(
			float flCycle);  // 1456
	CSceneAnimatableObject::SetSequenceCycle(
			float flCycle);  // 5298
} /* size: 89, inline expansions: 4 (94 bytes) */

// <012F5BE1> engine2/interop.engine.cpp:5301
// function call: 1
void CScnnmtblbjct_SetSequenceLooping(void* self, int bLooping)
{
	CSceneAnimatableObject::SetSequenceLooping(
				bool bLooping);  // 5304
} /* size: 41, inline expansions: 1 (29 bytes) */

// <012F5AD7> engine2/interop.engine.cpp:5307
// function calls: 4
void CScnnmtblbjct_IsSequenceFinished(void* self)
{
	CSceneObject::GetModel(); // 1445
	HSequence::operator==(
			const HSequence& other);  // 1450
	CSceneAnimatableObject::GetSequenceCycle(); // 1503
	CSceneAnimatableObject::IsSequenceFinished(); // 5310
} /* size: 129, inline expansions: 4 (159 bytes) */

// <012F5A43> engine2/interop.engine.cpp:5313
// function call: 1
void CScnnmtblbjct_SetSequenceBlending(void* self, int bBlending)
{
	CSceneAnimatableObject::SetSequenceBlending(
				bool bBlending);  // 5316
} /* size: 41, inline expansions: 1 (19 bytes) */

// <012F59E5> engine2/interop.engine.cpp:5319
// function call: 1
void CScnnmtblbjct_GetPlaybackRate(void* self)
{
	CSceneAnimatableObject::GetPlaybackRate(); // 5322
} /* size: 13, inline expansions: 1 (0 bytes) */

// <012F596B> engine2/interop.engine.cpp:5325
// function call: 1
void CScnnmtblbjct_SetPlaybackRate(void* self, float flPlaybackRate)
{
	CSceneAnimatableObject::SetPlaybackRate(
			float flPlaybackRate);  // 5328
} /* size: 13, inline expansions: 1 (8 bytes) */

// <012F5775> engine2/interop.engine.cpp:5331
// function calls: 6
void CScnnmtblbjct_GetParameterInt(void* self, const char* name)
{
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator==(
			const IAnimationGraphInstance* pOther);  // 151
	CUtlString::CUtlString(
			const char* pString);  // 156
	CUtlString::~CUtlString(); // 156
	CSceneAnimatableObject::GetAnimParameter(
			const char* name);  // 172
	CAnimVariant::GetType(); // 177
	CSceneAnimatableObject::GetParameterInt(
			const char* name);  // 5334
} /* size: 228, inline expansions: 6 (292 bytes) */

// <012F554B> engine2/interop.engine.cpp:5337
// function calls: 7
void CScnnmtblbjct_GetParameterFloat(void* self, const char* name)
{
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator==(
			const IAnimationGraphInstance* pOther);  // 151
	CUtlString::CUtlString(
			const char* pString);  // 156
	CUtlString::~CUtlString(); // 156
	CSceneAnimatableObject::GetAnimParameter(
			const char* name);  // 202
	CAnimVariant::GetType(); // 207
	CAnimVariant::GetValue<CAnimEnum>(); // 219
	CSceneAnimatableObject::GetParameterFloat(
				const char* name);  // 5340
} /* size: 259, inline expansions: 7 (324 bytes) */

// <012F533D> engine2/interop.engine.cpp:5343
// function calls: 6
void CScnnmtblbjct_GetParameterVector3(void* self, const char* name)
{
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator==(
			const IAnimationGraphInstance* pOther);  // 151
	CUtlString::CUtlString(
			const char* pString);  // 156
	CUtlString::~CUtlString(); // 156
	CSceneAnimatableObject::GetAnimParameter(
			const char* name);  // 232
	CAnimVariant::GetType(); // 237
	CSceneAnimatableObject::GetParameterVector3(
				const char* name);  // 5346
} /* size: 224, inline expansions: 6 (293 bytes) */

// <012F512F> engine2/interop.engine.cpp:5349
// function calls: 6
void CScnnmtblbjct_GetParameterRotation(void* self, const char* name)
{
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator==(
			const IAnimationGraphInstance* pOther);  // 151
	CUtlString::CUtlString(
			const char* pString);  // 156
	CUtlString::~CUtlString(); // 156
	CSceneAnimatableObject::GetAnimParameter(
			const char* name);  // 248
	CAnimVariant::GetType(); // 253
	CSceneAnimatableObject::GetParameterRotation(
				const char* name);  // 5352
} /* size: 223, inline expansions: 6 (282 bytes) */

// <012F5009> engine2/interop.engine.cpp:5355
// function calls: 5
void CScnnmtblbjct_PendingAnimationEvents(void* self)
{
	CUtlVectorBase<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::Count(); // 175
	AnimationEventOccurrences_t::Count(); // 263
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator!=(
			const IAnimationGraphInstance* pOther);  // 265
	CUtlVectorBase<animevent_t, CUtlMemory<animevent_t, int> >::Count(); // 267
	CSceneAnimatableObject::PendingAnimationEvents(); // 5358
} /* size: 51, inline expansions: 5 (49 bytes) */

// <012F4D92> engine2/interop.engine.cpp:5361
// function calls: 10
void CScnnmtblbjct_RunAnimationEvents(void* self, void* callback)
{
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(char const*, float, float, const KeyValues3*), void (*)(char const*, floa this); // 1465
	FastDelegate4<char const::Clear(); // 1465
	FastDelegate4<char const::FastDelegate4(); // 2280
	CUtlDelegate<void(char const::CUtlDelegate()>* this); // 71
	FastDelegate4<char const::Convert<FastDelegate4<char const*, float, float, const KeyValues3*, void>, void (
																void ()(const FastDelegate4<char const*, float, float, const KeyValues3*, void>  *, const char  *, float, float, const cl function_to_bind,
																void ()(GenericClass *) GenericClass::*& bound_func);  // 746
	ClosurePtr<void (detail::GenericClass::::bindmemfunc<FastDelegate4<char const*, float, float, const KeyValues3*, void>, void (
																FastDelegate4<char const*, float, float, const KeyValues3*, void>* pthis,
																void ()(const FastDelegate4<char const*, float, float, const KeyValues3*, void> *, const char *, float, float, const cl function_to_bind);  // 861
	ClosurePtr<void (detail::GenericClass::::bindstaticfunc<FastDelegate4<char const*, float, float, const KeyValues3*, void>, void (
																FastDelegate4<char const*, float, float, const KeyValues3*, void>* pParent,
																void ()(const FastDelegate4<char const*, float, float, const KeyValues3*, void>  *, const char  *, float, float, const cl static_function_invoker,
																void (*function_to_bind)(const char *, float, float, const KeyValues3 *));  // 1525
	FastDelegate4<char const::Bind(
		void (*function_to_bind)(const char *, float, float, const KeyValues3 *));  // 72
	FunctionPointerToDelegate<CUtlDelegate<void(char const*, float, float, const KeyValues3*)> >(void* ptr); // 5364
} /* size: 94, inline expansions: 10 (162 bytes) */

// <012F4AA7> engine2/interop.engine.cpp:5367
// function calls: 12
void CScnnmtblbjct_DispatchTagEvents(void* self, void* callback)
{
	FastDelegate2<char const::Convert<FastDelegate2<char const*, int, void>, void (
																void ()(const FastDelegate2<char const*, int, void> *, const char *, int) FastDelegate2<char const*, int, void>::* function_to_bind,
																void ()(GenericClass *) GenericClass::*& bound_func);  // 746
	ClosurePtr<void (detail::GenericClass::::bindmemfunc<FastDelegate2<char const*, int, void>, void (
																FastDelegate2<char const*, int, void>* pthis,
																void ()(const FastDelegate2<char const*, int, void> *, const char *, int) FastDelegate2<char const*, int, void>::* function_to_bind);  // 861
	ClosurePtr<void (detail::GenericClass::::bindstaticfunc<FastDelegate2<char const*, int, void>, void (
																FastDelegate2<char const*, int, void>* pParent,
																void ()(const FastDelegate2<char const*, int, void> *, const char *, int) FastDelegate2<char const*, int, void>::* static_function_invoker,
																void (*function_to_bind)(const char *, int));  // 1271
	FastDelegate2<char const::Bind(
		void (*function_to_bind)(const char *, int));  // 72
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(char const*, int), void (*)(char const*, int), void (*)(char const*, int) this); // 1211
	FastDelegate2<char const::Clear(); // 1211
	FastDelegate2<char const::FastDelegate2(); // 2200
	CUtlDelegate<void(char const::CUtlDelegate()>* this); // 71
	FunctionPointerToDelegate<CUtlDelegate<void(char const*, int)> >(void* ptr); // 5370
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator==(
			const IAnimationGraphInstance* pOther);  // 275
	CSceneAnimatableObject::DispatchTagEvents(
				SboxAnimTagEventCallback callback);  // 5370
} /* size: 134, inline expansions: 12 (212 bytes) */

// <012F4820> engine2/interop.engine.cpp:5373
// function calls: 13
void CScnnmtblbjct_ClearPhysicsBones(void* self)
{
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 333
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 334
	CSceneAnimatableObject::ClearPhysicsBones(); // 5376
} /* size: 160, inline expansions: 13 (494 bytes) */

// <012F3F64> engine2/interop.engine.cpp:5379
// variable: 1
// function calls: 37
void CScnnmtblbjct_SetPhysicsBone(void* self, short unsigned int bone, CTransformUnaligned* transform)
{
	CTransformUnaligned::UniformScale(); // 534
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	VectorAligned::VectorAligned(); // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 534
	CTransform::CTransform(
			const CTransformUnaligned& tx);  // 5382
	{
		int i; // 1531
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 1531
		CUtlMemory<short unsigned int, int>::operator[](
				int i);  // 609
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Element(
			int i);  // 1533
	}
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Find(
		const short unsigned int& src);  // 339
	CUtlMemory<CTransform, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
			int i);  // 342
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 342
	CUtlMemory<short unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Element(
		int i);  // 1201
	CopyConstruct<short unsigned int>(short unsigned int* pMemory,
						const short unsigned int& src);  // 1201
	CUtlMemory<short unsigned int, int>::IsGrowable(); // 823
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<short unsigned int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::AddToTail(
			const short unsigned int& src);  // 346
	CUtlMemory<CTransform, int>::NumAllocated(); // 1196
	CUtlMemory<CTransform, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Element(
		int i);  // 1201
	CopyConstruct<CTransform>(CTransform* pMemory,
					const CTransform& src);  // 1201
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 368
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::AddToTail(
			const CTransform& src);  // 347
	CSceneAnimatableObject::SetPhysicsBone(
			uint16 bone,
			CTransform transform);  // 5382
} /* size: 601, inline expansions: 34 (1964 bytes) */

// <012F3C3C> engine2/interop.engine.cpp:5385
// function calls: 12
void CScnnmtblbjct_GetRootMotion(void* self)
{
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator==(
			const IAnimationGraphInstance* pOther);  // 885
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator==(
			const IAnimationGraphInstance* pOther);  // 888
	CSceneAnimatableObject::GetRootMotion(); // 883
	CSceneAnimatableObject::GetRootMotion(); // 5388
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 127
	CTransform::GetScale(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 127
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 127
	CTransformUnaligned::CTransformUnaligned(
				const CTransform& transform);  // 5388
} /* size: 236, inline expansions: 12 (203 bytes) */

// <012F3BC9> engine2/interop.engine.cpp:5391
// variable: 1
// function call: 1
void CScnnmtblbjct_HasPhysicsBones(void* __self)
{
	CSceneAnimatableObject* self; // 5395
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 5398
} /* size: 18, variables: 1, inline expansions: 1 (0 bytes) */

// <012F3A58> engine2/interop.engine.cpp:5402
// function calls: 4
void CScnnmtblbjct_GetAnimParameter(void* self, const char* name)
{
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator==(
			const IAnimationGraphInstance* pOther);  // 151
	CUtlString::CUtlString(
			const char* pString);  // 156
	CUtlString::~CUtlString(); // 156
	CSceneAnimatableObject::GetAnimParameter(
			const char* name);  // 5405
} /* size: 169, inline expansions: 4 (153 bytes) */

// <012F3969> engine2/interop.engine.cpp:5408
// function calls: 2
void CScnnmtblbjct_GetAnimParameter_1(void* self, int index)
{
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator==(
			const IAnimationGraphInstance* pOther);  // 161
	CSceneAnimatableObject::GetAnimParameter(
			int index);  // 5411
} /* size: 99, inline expansions: 2 (72 bytes) */

// <012F3932> engine2/interop.engine.cpp:5414
void CScnnmtblbjct_ChangeFlags(void* self, int64 nNewFlags, int64 nNewFlagsMask)
{
} /* size: 0 */

// <012F390E> engine2/interop.engine.cpp:5420
void CScnnmtblbjct_SetFlags(void* self, int64 nFlagsToOR)
{
} /* size: 0 */

// <012F38EA> engine2/interop.engine.cpp:5426
void CScnnmtblbjct_HasFlags(void* self, int64 nFlags)
{
} /* size: 0 */

// <012F38D3> engine2/interop.engine.cpp:5432
void CScnnmtblbjct_GetFlags(void* self)
{
} /* size: 0 */

// <012F38BC> engine2/interop.engine.cpp:5438
void CScnnmtblbjct_GetOriginalFlags(void* self)
{
} /* size: 0 */

// <012F3898> engine2/interop.engine.cpp:5444
void CScnnmtblbjct_ClearFlags(void* self, int64 nFlagsToClear)
{
} /* size: 0 */

// <012F385D> engine2/interop.engine.cpp:5456
void CScnnmtblbjct_EnableLightingCache(void* self)
{
} /* size: 0 */

// <012F382C> engine2/interop.engine.cpp:5462
void CScnnmtblbjct_SetLightingOrigin(void* self, Vector* vPos, int worldspace)
{
} /* size: 0 */

// <012F3815> engine2/interop.engine.cpp:5468
void CScnnmtblbjct_GetLightingOrigin(void* self)
{
} /* size: 0 */

// <012F37FE> engine2/interop.engine.cpp:5474
void CScnnmtblbjct_HasLightingOrigin(void* self)
{
} /* size: 0 */

// <012F37DA> engine2/interop.engine.cpp:5480
void CScnnmtblbjct_SetTintRGBA(void* self, Vector4D* color)
{
} /* size: 0 */

// <012F37C3> engine2/interop.engine.cpp:5486
void CScnnmtblbjct_GetTintRGBA(void* self)
{
} /* size: 0 */

// <012F379F> engine2/interop.engine.cpp:5492
void CScnnmtblbjct_SetAlphaFade(void* self, float nAlpha)
{
} /* size: 0 */

// <012F3788> engine2/interop.engine.cpp:5498
void CScnnmtblbjct_GetAlphaFade(void* self)
{
} /* size: 0 */

// <012F3764> engine2/interop.engine.cpp:5504
void CScnnmtblbjct_SetMaterialOverrideForMeshInstances(void* self, HMaterialStrong* mat)
{
} /* size: 0 */

// <012F374D> engine2/interop.engine.cpp:5510
void CScnnmtblbjct_ClearMaterialOverrideList(void* self)
{
} /* size: 0 */

// <012F370F> engine2/interop.engine.cpp:5516
void CScnnmtblbjct_SetMaterialOverride(void* self, HMaterialStrong* hMaterial, uint32 nAttr, int nAttrValueMatch)
{
} /* size: 0 */

// <012F36F8> engine2/interop.engine.cpp:5522
void CScnnmtblbjct_IsLoaded(void* self)
{
} /* size: 0 */

// <012F36E1> engine2/interop.engine.cpp:5528
void CScnnmtblbjct_IsRenderingEnabled(void* self)
{
} /* size: 0 */

// <012F36CA> engine2/interop.engine.cpp:5534
void CScnnmtblbjct_SetLoaded(void* self)
{
} /* size: 0 */

// <012F36B3> engine2/interop.engine.cpp:5540
void CScnnmtblbjct_ClearLoaded(void* self)
{
} /* size: 0 */

// <012F369C> engine2/interop.engine.cpp:5546
void CScnnmtblbjct_DisableRendering(void* self)
{
} /* size: 0 */

// <012F3685> engine2/interop.engine.cpp:5552
void CScnnmtblbjct_EnableRendering(void* self)
{
} /* size: 0 */

// <012F3661> engine2/interop.engine.cpp:5558
void CScnnmtblbjct_SetRenderingEnabled(void* self, int bEnabled)
{
} /* size: 0 */

// <012F364A> engine2/interop.engine.cpp:5564
void CScnnmtblbjct_GetBoundingSphereRadius(void* self)
{
} /* size: 0 */

// <012F3610> engine2/interop.engine.cpp:5576
void CScnnmtblbjct_GetCTransform(void* self)
{
} /* size: 0 */

// <012F35D5> engine2/interop.engine.cpp:5588
void CScnnmtblbjct_GetBounds(void* self)
{
} /* size: 0 */

// <012F35BE> engine2/interop.engine.cpp:5594
void CScnnmtblbjct_SetBoundsInfinite(void* self)
{
} /* size: 0 */

// <012F35A7> engine2/interop.engine.cpp:5600
void CScnnmtblbjct_GetParent(void* self)
{
} /* size: 0 */

// <012F3569> engine2/interop.engine.cpp:5606
void CScnnmtblbjct_AddChildObject(void* self, uint32 nId, CSceneObject* pChild, unsigned int nChildUpdateFlags)
{
} /* size: 0 */

// <012F3545> engine2/interop.engine.cpp:5612
void CScnnmtblbjct_RemoveChild(void* self, CSceneObject* obj)
{
} /* size: 0 */

// <012F352E> engine2/interop.engine.cpp:5618
void CScnnmtblbjct_GetAttributesPtrForModify(void* self)
{
} /* size: 0 */

// <012F34E6> engine2/interop.engine.cpp:5630
void CScnnmtblbjct_DisableMeshGroups(void* self, uint64 nMask)
{
} /* size: 0 */

// <012F34C2> engine2/interop.engine.cpp:5636
void CScnnmtblbjct_ResetMeshGroups(void* self, uint64 nMask)
{
} /* size: 0 */

// <012F34AB> engine2/interop.engine.cpp:5642
void CScnnmtblbjct_GetCurrentMeshGroupMask(void* self)
{
} /* size: 0 */

// <012F3494> engine2/interop.engine.cpp:5648
void CScnnmtblbjct_GetWorld(void* self)
{
} /* size: 0 */

// <012F3470> engine2/interop.engine.cpp:5654
void CScnnmtblbjct_SetLOD(void* self, int nLOD)
{
} /* size: 0 */

// <012F3459> engine2/interop.engine.cpp:5660
void CScnnmtblbjct_DisableLOD(void* self)
{
} /* size: 0 */

// <012F3442> engine2/interop.engine.cpp:5666
void CScnnmtblbjct_GetCurrentLODGroupMask(void* self)
{
} /* size: 0 */

// <012F342B> engine2/interop.engine.cpp:5672
void CScnnmtblbjct_GetCurrentLODLevel(void* self)
{
} /* size: 0 */

// <012F3414> engine2/interop.engine.cpp:5678
void CScnnmtblbjct_GetModelHandle(void* self)
{
} /* size: 0 */

// <012F33F0> engine2/interop.engine.cpp:5684
void CScnnmtblbjct_SetMaterialGroup(void* self, uint32 token)
{
} /* size: 0 */

// <012F33BF> engine2/interop.engine.cpp:5690
void CScnnmtblbjct_SetBodyGroup(void* self, uint32 token, int value)
{
} /* size: 0 */

// <012F339A> engine2/interop.engine.cpp:5696
void CScnnmtblbjct_SetBatchable(void* self, int bIsBatchable)
{
} /* size: 0 */

// <012F3383> engine2/interop.engine.cpp:5702
void CScnnmtblbjct_IsNotBatchable(void* self)
{
} /* size: 0 */

// <012F335E> engine2/interop.engine.cpp:5708
void CScnnmtblbjct_SetUniqueBatchGroup(void* self, int bUnique)
{
} /* size: 0 */

// <012F333A> engine2/interop.engine.cpp:5714
void CScnnmtblbjct_RemoveTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <012F3323> engine2/interop.engine.cpp:5720
void CScnnmtblbjct_RemoveAllTags(void* self)
{
} /* size: 0 */

// <012F330C> engine2/interop.engine.cpp:5726
void CScnnmtblbjct_GetTagCount(void* self)
{
} /* size: 0 */

// <012F32EA> engine2/interop.engine.cpp:5732
void CScnnmtblbjct_GetTagAt(void* self, int i)
{
} /* size: 0 */

// <012F32C6> engine2/interop.engine.cpp:5738
void CScnnmtblbjct_AddTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <012F32A2> engine2/interop.engine.cpp:5744
void CScnnmtblbjct_HasTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <012F327E> engine2/interop.engine.cpp:5750
void CScnnmtblbjct_SetForceLayerID(void* self, uint32 nTok)
{
} /* size: 0 */

// <012F325A> engine2/interop.engine.cpp:5756
void CScnnmtblbjct_SetLayerMatchID(void* self, uint32 nTok)
{
} /* size: 0 */

// <012F3236> engine2/interop.engine.cpp:5762
// variable: 1
void CScnnmtblbjct_UpdateFlagsBasedOnMaterial(void* __self)
{
	CSceneAnimatableObject* self; // 5766
} /* size: 0, variables: 1 */

// <012F3205> engine2/interop.engine.cpp:5774
void CScnnmtblbjct_SetMaterialOverrideByIndex(void* self, int index, HMaterialStrong* material)
{
} /* size: 0 */

// <012F31D8> engine2/interop.engine.cpp:5780
void _Get__CScnnmtblbjct_m_flDeltaTime(void* self)
{
} /* size: 13 */

// <012F319C> engine2/interop.engine.cpp:5784
void _Set__CScnnmtblbjct_m_flDeltaTime(void* self, float value)
{
} /* size: 13 */

// <012F316F> engine2/interop.engine.cpp:5788
void _Get__CScnnmtblbjct_m_worldBounds(void* self)
{
} /* size: 40 */

// <012F3077> engine2/interop.engine.cpp:5792
// function calls: 3
void _Set__CScnnmtblbjct_m_worldBounds(void* self, AABB_t* value)
{
	Vector::operator=(
			const Vector& vOther);  // 17
	Vector::operator=(
			const Vector& vOther);  // 17
	AABB_t::operator=(
			const AABB_t  &);  // 5794
} /* size: 82, inline expansions: 3 (154 bytes) */

// <012F304A> engine2/interop.engine.cpp:5796
void _Get__CScnnmtblbjct_m_localBounds(void* self)
{
} /* size: 40 */

// <012F2F52> engine2/interop.engine.cpp:5800
// function calls: 3
void _Set__CScnnmtblbjct_m_localBounds(void* self, AABB_t* value)
{
	Vector::operator=(
			const Vector& vOther);  // 17
	Vector::operator=(
			const Vector& vOther);  // 17
	AABB_t::operator=(
			const AABB_t  &);  // 5802
} /* size: 82, inline expansions: 3 (154 bytes) */

// <012F2ECD> engine2/interop.engine.cpp:5805
void* To_CSceneObject_From_CSceneLightObject(CSceneLightObject* ptr)
{
} /* size: 0 */

// <012F2D7E> engine2/interop.engine.cpp:5807
// function calls: 4
void CScnLghtbjct_SetWorldPosition(void* self, Vector* pos)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2697
	Vector::operator=(
			const Vector& vOther);  // 2696
	CSceneLightObject::SetWorldPosition(
			Vector pos);  // 5810
} /* size: 99, inline expansions: 4 (165 bytes) */

// <012F2D67> engine2/interop.engine.cpp:5813
void CScnLghtbjct_GetWorldPosition(void* self)
{
} /* size: 0 */

// <012F29E9> engine2/interop.engine.cpp:5819
// function calls: 11
void CScnLghtbjct_SetWorldDirection(void* self, Quaternion* dir)
{
	Vector::operator=(
			const Vector& vOther);  // 2703
	Vector::Negate(); // 2707
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2709
	Vector::NormalizedSafe(
			const Vector& vFallback);  // 2709
	Vector::operator=(
			const Vector& vOther);  // 2709
	Vector::NormalizedSafe(
			const Vector& vFallback);  // 2711
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2711
	Vector::operator=(
			const Vector& vOther);  // 2711
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2712
	CSceneLightObject::SetWorldDirection(
				Quaternion dir);  // 5822
} /* size: 368, inline expansions: 11 (589 bytes) */

// <012F29D2> engine2/interop.engine.cpp:5825
void CScnLghtbjct_GetWorldDirection(void* self)
{
} /* size: 0 */

// <012F2855> engine2/interop.engine.cpp:5831
// function calls: 5
void CScnLghtbjct_SetColor(void* self, Vector* color)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2720
	Vector::operator=(
			const Vector& vOther);  // 2718
	Vector::operator=(
			const Vector& vOther);  // 2719
	CSceneLightObject::SetColor(
		Vector color);  // 5834
} /* size: 107, inline expansions: 5 (179 bytes) */

// <012F2706> engine2/interop.engine.cpp:5837
// function calls: 4
void CScnLghtbjct_SetBounceColor(void* self, Vector* color)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2726
	Vector::operator=(
			const Vector& vOther);  // 2725
	CSceneLightObject::SetBounceColor(
			Vector color);  // 5840
} /* size: 93, inline expansions: 4 (153 bytes) */

// <012F25CE> engine2/interop.engine.cpp:5849
// function calls: 3
void CScnLghtbjct_SetRadius(void* self, float radius)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2761
	CSceneLightObject::SetRadius(
			float radius);  // 5852
} /* size: 81, inline expansions: 3 (140 bytes) */

// <012F25B7> engine2/interop.engine.cpp:5855
void CScnLghtbjct_GetRadius(void* self)
{
} /* size: 0 */

// <012F2498> engine2/interop.engine.cpp:5861
// function calls: 3
void CScnLghtbjct_SetTheta(void* self, float f)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2769
	CSceneLightObject::SetTheta(
		float radius);  // 5864
} /* size: 81, inline expansions: 3 (140 bytes) */

// <012F2481> engine2/interop.engine.cpp:5867
void CScnLghtbjct_GetTheta(void* self)
{
} /* size: 0 */

// <012F2362> engine2/interop.engine.cpp:5873
// function calls: 3
void CScnLghtbjct_SetPhi(void* self, float f)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2780
	CSceneLightObject::SetPhi(
		float radius);  // 5876
} /* size: 81, inline expansions: 3 (140 bytes) */

// <012F234B> engine2/interop.engine.cpp:5879
void CScnLghtbjct_GetPhi(void* self)
{
} /* size: 0 */

// <012F222C> engine2/interop.engine.cpp:5885
// function calls: 3
void CScnLghtbjct_SetFallOff(void* self, float f)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2877
	CSceneLightObject::SetFallOff(
			float falloff);  // 5888
} /* size: 81, inline expansions: 3 (140 bytes) */

// <012F2215> engine2/interop.engine.cpp:5891
void CScnLghtbjct_GetFallOff(void* self)
{
} /* size: 0 */

// <012F21FE> engine2/interop.engine.cpp:5897
void CScnLghtbjct_GetShadowTextureResolution(void* self)
{
} /* size: 0 */

// <012F21C5> engine2/interop.engine.cpp:5909
void CScnLghtbjct_GetShadows(void* self)
{
} /* size: 0 */

// <012F21A3> engine2/interop.engine.cpp:5915
void CScnLghtbjct_SetShadows(void* self, int v)
{
} /* size: 0 */

// <012F2084> engine2/interop.engine.cpp:5921
// function calls: 3
void CScnLghtbjct_SetConstantAttn(void* self, float f)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2737
	CSceneLightObject::SetConstantAttn(
			float f);  // 5924
} /* size: 81, inline expansions: 3 (140 bytes) */

// <012F206D> engine2/interop.engine.cpp:5927
void CScnLghtbjct_GetConstantAttn(void* self)
{
} /* size: 0 */

// <012F1F4E> engine2/interop.engine.cpp:5933
// function calls: 3
void CScnLghtbjct_SetLinearAttn(void* self, float f)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2745
	CSceneLightObject::SetLinearAttn(
			float f);  // 5936
} /* size: 81, inline expansions: 3 (140 bytes) */

// <012F1F37> engine2/interop.engine.cpp:5939
void CScnLghtbjct_GetLinearAttn(void* self)
{
} /* size: 0 */

// <012F1E18> engine2/interop.engine.cpp:5945
// function calls: 3
void CScnLghtbjct_SetQuadraticAttn(void* self, float f)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2753
	CSceneLightObject::SetQuadraticAttn(
			float f);  // 5948
} /* size: 81, inline expansions: 3 (140 bytes) */

// <012F1E01> engine2/interop.engine.cpp:5951
void CScnLghtbjct_GetQuadraticAttn(void* self)
{
} /* size: 0 */

// <012F1DDF> engine2/interop.engine.cpp:5957
void CScnLghtbjct_SetLightCookie(void* self, HRenderTextureStrong* f)
{
} /* size: 0 */

// <012F1DC8> engine2/interop.engine.cpp:5963
void CScnLghtbjct_GetLightCookie(void* self)
{
} /* size: 0 */

// <012F1DB1> engine2/interop.engine.cpp:5969
void CScnLghtbjct_GetShadowCascades(void* self)
{
} /* size: 0 */

// <012F1D8F> engine2/interop.engine.cpp:5975
void CScnLghtbjct_SetShadowCascades(void* self, int v)
{
} /* size: 0 */

// <012F1D78> engine2/interop.engine.cpp:5981
void CScnLghtbjct_GetShadowCascadeSplitRatio(void* self)
{
} /* size: 0 */

// <012F1D56> engine2/interop.engine.cpp:5987
void CScnLghtbjct_SetShadowCascadeSplitRatio(void* self, float v)
{
} /* size: 0 */

// <012F1D3F> engine2/interop.engine.cpp:5993
void CScnLghtbjct_GetCascadeDistanceScale(void* self)
{
} /* size: 0 */

// <012F1D1B> engine2/interop.engine.cpp:5999
void CScnLghtbjct_SetCascadeDistanceScale(void* self, float dist)
{
} /* size: 0 */

// <012F1D04> engine2/interop.engine.cpp:6005
void CScnLghtbjct_GetFogContributionStength(void* self)
{
} /* size: 0 */

// <012F1CE2> engine2/interop.engine.cpp:6011
void CScnLghtbjct_SetFogContributionStength(void* self, float v)
{
} /* size: 0 */

// <012F1CCB> engine2/interop.engine.cpp:6017
void CScnLghtbjct_GetFogLightingMode(void* self)
{
} /* size: 0 */

// <012F1CA9> engine2/interop.engine.cpp:6023
void CScnLghtbjct_SetFogLightingMode(void* self, int v)
{
} /* size: 0 */

// <012F1C87> engine2/interop.engine.cpp:6029
void CScnLghtbjct_SetBakeLightIndex(void* self, int v)
{
} /* size: 0 */

// <012F1C65> engine2/interop.engine.cpp:6035
void CScnLghtbjct_SetBakeLightIndexScale(void* self, float v)
{
} /* size: 0 */

// <012F1C21> engine2/interop.engine.cpp:6047
void CScnLghtbjct_SetRenderDiffuse(void* self, int v)
{
} /* size: 0 */

// <012F1BFF> engine2/interop.engine.cpp:6053
void CScnLghtbjct_SetRenderSpecular(void* self, int v)
{
} /* size: 0 */

// <012F1BDD> engine2/interop.engine.cpp:6059
void CScnLghtbjct_SetRenderTransmissive(void* self, int v)
{
} /* size: 0 */

// <012F1ABE> engine2/interop.engine.cpp:6065
// function calls: 3
void CScnLghtbjct_SetLightSourceSize0(void* self, float v)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2943
	CSceneLightObject::SetLightSourceSize0(
				float v);  // 6068
} /* size: 84, inline expansions: 3 (143 bytes) */

// <012F199F> engine2/interop.engine.cpp:6071
// function calls: 3
void CScnLghtbjct_SetLightSourceSize1(void* self, float v)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2949
	CSceneLightObject::SetLightSourceSize1(
				float v);  // 6074
} /* size: 84, inline expansions: 3 (143 bytes) */

// <012F197D> engine2/interop.engine.cpp:6077
void CScnLghtbjct_SetShadowTextureWidth(void* self, int v)
{
} /* size: 0 */

// <012F195B> engine2/interop.engine.cpp:6083
void CScnLghtbjct_SetShadowTextureHeight(void* self, int v)
{
} /* size: 0 */

// <012F1944> engine2/interop.engine.cpp:6089
void CScnLghtbjct_GetShadowTextureWidth(void* self)
{
} /* size: 0 */

// <012F192D> engine2/interop.engine.cpp:6095
void CScnLghtbjct_GetShadowTextureHeight(void* self)
{
} /* size: 0 */

// <012F1916> engine2/interop.engine.cpp:6101
void CScnLghtbjct_GetLightFlags(void* self)
{
} /* size: 0 */

// <012F18F2> engine2/interop.engine.cpp:6107
void CScnLghtbjct_SetLightFlags(void* self, unsigned int flags)
{
} /* size: 0 */

// <012F18DB> engine2/interop.engine.cpp:6113
void CScnLghtbjct_GetLightShape(void* self)
{
} /* size: 0 */

// <012F17BA> engine2/interop.engine.cpp:6119
// function calls: 3
void CScnLghtbjct_SetLightShape(void* self, int64 shape)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2960
	CSceneLightObject::SetLightShape(
			LightSourceShape_t shape);  // 6122
} /* size: 79, inline expansions: 3 (135 bytes) */

// <012F169B> engine2/interop.engine.cpp:6125
// function calls: 3
void CScnLghtbjct_SetLightSourceDim0(void* self, float v)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2966
	CSceneLightObject::SetLightSourceDim0(
				float v);  // 6128
} /* size: 81, inline expansions: 3 (140 bytes) */

// <012F157C> engine2/interop.engine.cpp:6131
// function calls: 3
void CScnLghtbjct_SetLightSourceDim1(void* self, float v)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 2791
	CSceneLightObject::UpdateBounds(); // 2972
	CSceneLightObject::SetLightSourceDim1(
				float v);  // 6134
} /* size: 84, inline expansions: 3 (143 bytes) */

// <012F1565> engine2/interop.engine.cpp:6137
void CScnLghtbjct_GetLightType(void* self)
{
} /* size: 0 */

// <012F1534> engine2/interop.engine.cpp:6143
void CScnLghtbjct_ChangeFlags(void* self, int64 nNewFlags, int64 nNewFlagsMask)
{
} /* size: 0 */

// <012F14D5> engine2/interop.engine.cpp:6161
void CScnLghtbjct_GetFlags(void* self)
{
} /* size: 0 */

// <012F149A> engine2/interop.engine.cpp:6173
void CScnLghtbjct_ClearFlags(void* self, int64 nFlagsToClear)
{
} /* size: 0 */

// <012F1476> engine2/interop.engine.cpp:6179
void CScnLghtbjct_SetCullDistance(void* self, float dist)
{
} /* size: 0 */

// <012F145F> engine2/interop.engine.cpp:6185
void CScnLghtbjct_EnableLightingCache(void* self)
{
} /* size: 0 */

// <012F142E> engine2/interop.engine.cpp:6191
void CScnLghtbjct_SetLightingOrigin(void* self, Vector* vPos, int worldspace)
{
} /* size: 0 */

// <012F1400> engine2/interop.engine.cpp:6203
void CScnLghtbjct_HasLightingOrigin(void* self)
{
} /* size: 0 */

// <012F13DC> engine2/interop.engine.cpp:6209
void CScnLghtbjct_SetTintRGBA(void* self, Vector4D* color)
{
} /* size: 0 */

// <012F13A1> engine2/interop.engine.cpp:6221
void CScnLghtbjct_SetAlphaFade(void* self, float nAlpha)
{
} /* size: 0 */

// <012F138A> engine2/interop.engine.cpp:6227
void CScnLghtbjct_GetAlphaFade(void* self)
{
} /* size: 0 */

// <012F1366> engine2/interop.engine.cpp:6233
void CScnLghtbjct_SetMaterialOverrideForMeshInstances(void* self, HMaterialStrong* mat)
{
} /* size: 0 */

// <012F134F> engine2/interop.engine.cpp:6239
void CScnLghtbjct_ClearMaterialOverrideList(void* self)
{
} /* size: 0 */

// <012F1311> engine2/interop.engine.cpp:6245
void CScnLghtbjct_SetMaterialOverride(void* self, HMaterialStrong* hMaterial, uint32 nAttr, int nAttrValueMatch)
{
} /* size: 0 */

// <012F12FA> engine2/interop.engine.cpp:6251
void CScnLghtbjct_IsLoaded(void* self)
{
} /* size: 0 */

// <012F12E3> engine2/interop.engine.cpp:6257
void CScnLghtbjct_IsRenderingEnabled(void* self)
{
} /* size: 0 */

// <012F12CC> engine2/interop.engine.cpp:6263
void CScnLghtbjct_SetLoaded(void* self)
{
} /* size: 0 */

// <012F12B5> engine2/interop.engine.cpp:6269
void CScnLghtbjct_ClearLoaded(void* self)
{
} /* size: 0 */

// <012F129E> engine2/interop.engine.cpp:6275
void CScnLghtbjct_DisableRendering(void* self)
{
} /* size: 0 */

// <012F1287> engine2/interop.engine.cpp:6281
void CScnLghtbjct_EnableRendering(void* self)
{
} /* size: 0 */

// <012F1263> engine2/interop.engine.cpp:6287
void CScnLghtbjct_SetRenderingEnabled(void* self, int bEnabled)
{
} /* size: 0 */

// <012F124C> engine2/interop.engine.cpp:6293
void CScnLghtbjct_GetBoundingSphereRadius(void* self)
{
} /* size: 0 */

// <012F1229> engine2/interop.engine.cpp:6299
void CScnLghtbjct_SetTransform(void* self, CTransformUnaligned* tx)
{
} /* size: 0 */

// <012F1212> engine2/interop.engine.cpp:6305
void CScnLghtbjct_GetCTransform(void* self)
{
} /* size: 0 */

// <012F11EE> engine2/interop.engine.cpp:6311
void CScnLghtbjct_SetBounds(void* self, AABB_t* box)
{
} /* size: 0 */

// <012F11D7> engine2/interop.engine.cpp:6317
void CScnLghtbjct_GetBounds(void* self)
{
} /* size: 0 */

// <012F11C0> engine2/interop.engine.cpp:6323
void CScnLghtbjct_SetBoundsInfinite(void* self)
{
} /* size: 0 */

// <012F11A9> engine2/interop.engine.cpp:6329
void CScnLghtbjct_GetParent(void* self)
{
} /* size: 0 */

// <012F116B> engine2/interop.engine.cpp:6335
void CScnLghtbjct_AddChildObject(void* self, uint32 nId, CSceneObject* pChild, unsigned int nChildUpdateFlags)
{
} /* size: 0 */

// <012F1147> engine2/interop.engine.cpp:6341
void CScnLghtbjct_RemoveChild(void* self, CSceneObject* obj)
{
} /* size: 0 */

// <012F1130> engine2/interop.engine.cpp:6347
void CScnLghtbjct_GetAttributesPtrForModify(void* self)
{
} /* size: 0 */

// <012F10E8> engine2/interop.engine.cpp:6359
void CScnLghtbjct_DisableMeshGroups(void* self, uint64 nMask)
{
} /* size: 0 */

// <012F10C4> engine2/interop.engine.cpp:6365
void CScnLghtbjct_ResetMeshGroups(void* self, uint64 nMask)
{
} /* size: 0 */

// <012F10AD> engine2/interop.engine.cpp:6371
void CScnLghtbjct_GetCurrentMeshGroupMask(void* self)
{
} /* size: 0 */

// <012F1072> engine2/interop.engine.cpp:6383
void CScnLghtbjct_SetLOD(void* self, int nLOD)
{
} /* size: 0 */

// <012F105B> engine2/interop.engine.cpp:6389
void CScnLghtbjct_DisableLOD(void* self)
{
} /* size: 0 */

// <012F1044> engine2/interop.engine.cpp:6395
void CScnLghtbjct_GetCurrentLODGroupMask(void* self)
{
} /* size: 0 */

// <012F102D> engine2/interop.engine.cpp:6401
void CScnLghtbjct_GetCurrentLODLevel(void* self)
{
} /* size: 0 */

// <012F1016> engine2/interop.engine.cpp:6407
void CScnLghtbjct_GetModelHandle(void* self)
{
} /* size: 0 */

// <012F0FF2> engine2/interop.engine.cpp:6413
void CScnLghtbjct_SetMaterialGroup(void* self, uint32 token)
{
} /* size: 0 */

// <012F0FC1> engine2/interop.engine.cpp:6419
void CScnLghtbjct_SetBodyGroup(void* self, uint32 token, int value)
{
} /* size: 0 */

// <012F0F9C> engine2/interop.engine.cpp:6425
void CScnLghtbjct_SetBatchable(void* self, int bIsBatchable)
{
} /* size: 0 */

// <012F0F85> engine2/interop.engine.cpp:6431
void CScnLghtbjct_IsNotBatchable(void* self)
{
} /* size: 0 */

// <012F0F60> engine2/interop.engine.cpp:6437
void CScnLghtbjct_SetUniqueBatchGroup(void* self, int bUnique)
{
} /* size: 0 */

// <012F0F3C> engine2/interop.engine.cpp:6443
void CScnLghtbjct_RemoveTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <012F0F0E> engine2/interop.engine.cpp:6455
void CScnLghtbjct_GetTagCount(void* self)
{
} /* size: 0 */

// <012F0EEC> engine2/interop.engine.cpp:6461
void CScnLghtbjct_GetTagAt(void* self, int i)
{
} /* size: 0 */

// <012F0EC8> engine2/interop.engine.cpp:6467
void CScnLghtbjct_AddTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <012F0E80> engine2/interop.engine.cpp:6479
void CScnLghtbjct_SetForceLayerID(void* self, uint32 nTok)
{
} /* size: 0 */

// <012F0E5C> engine2/interop.engine.cpp:6485
void CScnLghtbjct_SetLayerMatchID(void* self, uint32 nTok)
{
} /* size: 0 */

// <012F0E38> engine2/interop.engine.cpp:6491
// variable: 1
void CScnLghtbjct_UpdateFlagsBasedOnMaterial(void* __self)
{
	CSceneLightObject* self; // 6495
} /* size: 0, variables: 1 */

// <012F0D9E> engine2/interop.engine.cpp:6509
void* From_CSceneObject_To_CSceneLightProbeVolumeObject(CSceneObject* ptr)
{
} /* size: 35 */

// <012F0D82> engine2/interop.engine.cpp:6510
void* To_CSceneObject_From_CSceneLightProbeVolumeObject(CSceneLightProbeVolumeObject* ptr)
{
} /* size: 0 */

// <012F0D39> engine2/interop.engine.cpp:6512
void CScnLghtPrbVlmbj_CreateConstants(void* self)
{
} /* size: 9 */

// <012F0D08> engine2/interop.engine.cpp:6518
void CScnLghtPrbVlmbj_ChangeFlags(void* self, int64 nNewFlags, int64 nNewFlagsMask)
{
} /* size: 0 */

// <012F0CE4> engine2/interop.engine.cpp:6524
void CScnLghtPrbVlmbj_SetFlags(void* self, int64 nFlagsToOR)
{
} /* size: 0 */

// <012F0CC0> engine2/interop.engine.cpp:6530
void CScnLghtPrbVlmbj_HasFlags(void* self, int64 nFlags)
{
} /* size: 0 */

// <012F0CA9> engine2/interop.engine.cpp:6536
void CScnLghtPrbVlmbj_GetFlags(void* self)
{
} /* size: 0 */

// <012F0C92> engine2/interop.engine.cpp:6542
void CScnLghtPrbVlmbj_GetOriginalFlags(void* self)
{
} /* size: 0 */

// <012F0C6E> engine2/interop.engine.cpp:6548
void CScnLghtPrbVlmbj_ClearFlags(void* self, int64 nFlagsToClear)
{
} /* size: 0 */

// <012F0C4A> engine2/interop.engine.cpp:6554
void CScnLghtPrbVlmbj_SetCullDistance(void* self, float dist)
{
} /* size: 0 */

// <012F0C33> engine2/interop.engine.cpp:6560
void CScnLghtPrbVlmbj_EnableLightingCache(void* self)
{
} /* size: 0 */

// <012F0C02> engine2/interop.engine.cpp:6566
void CScnLghtPrbVlmbj_SetLightingOrigin(void* self, Vector* vPos, int worldspace)
{
} /* size: 0 */

// <012F0BEB> engine2/interop.engine.cpp:6572
void CScnLghtPrbVlmbj_GetLightingOrigin(void* self)
{
} /* size: 0 */

// <012F0BD4> engine2/interop.engine.cpp:6578
void CScnLghtPrbVlmbj_HasLightingOrigin(void* self)
{
} /* size: 0 */

// <012F0BB0> engine2/interop.engine.cpp:6584
void CScnLghtPrbVlmbj_SetTintRGBA(void* self, Vector4D* color)
{
} /* size: 0 */

// <012F0B99> engine2/interop.engine.cpp:6590
void CScnLghtPrbVlmbj_GetTintRGBA(void* self)
{
} /* size: 0 */

// <012F0B75> engine2/interop.engine.cpp:6596
void CScnLghtPrbVlmbj_SetAlphaFade(void* self, float nAlpha)
{
} /* size: 0 */

// <012F0B5E> engine2/interop.engine.cpp:6602
void CScnLghtPrbVlmbj_GetAlphaFade(void* self)
{
} /* size: 0 */

// <012F0B3A> engine2/interop.engine.cpp:6608
void CScnLghtPrbVlmbj_SetMaterialOverrideForMeshInstances(void* self, HMaterialStrong* mat)
{
} /* size: 0 */

// <012F0B23> engine2/interop.engine.cpp:6614
void CScnLghtPrbVlmbj_ClearMaterialOverrideList(void* self)
{
} /* size: 0 */

// <012F0AE5> engine2/interop.engine.cpp:6620
void CScnLghtPrbVlmbj_SetMaterialOverride(void* self, HMaterialStrong* hMaterial, uint32 nAttr, int nAttrValueMatch)
{
} /* size: 0 */

// <012F0ACE> engine2/interop.engine.cpp:6626
void CScnLghtPrbVlmbj_IsLoaded(void* self)
{
} /* size: 0 */

// <012F0AB7> engine2/interop.engine.cpp:6632
void CScnLghtPrbVlmbj_IsRenderingEnabled(void* self)
{
} /* size: 0 */

// <012F0AA0> engine2/interop.engine.cpp:6638
void CScnLghtPrbVlmbj_SetLoaded(void* self)
{
} /* size: 0 */

// <012F0A89> engine2/interop.engine.cpp:6644
void CScnLghtPrbVlmbj_ClearLoaded(void* self)
{
} /* size: 0 */

// <012F0A72> engine2/interop.engine.cpp:6650
void CScnLghtPrbVlmbj_DisableRendering(void* self)
{
} /* size: 0 */

// <012F0A5B> engine2/interop.engine.cpp:6656
void CScnLghtPrbVlmbj_EnableRendering(void* self)
{
} /* size: 0 */

// <012F0A37> engine2/interop.engine.cpp:6662
void CScnLghtPrbVlmbj_SetRenderingEnabled(void* self, int bEnabled)
{
} /* size: 0 */

// <012F0A20> engine2/interop.engine.cpp:6668
void CScnLghtPrbVlmbj_GetBoundingSphereRadius(void* self)
{
} /* size: 0 */

// <012F09FD> engine2/interop.engine.cpp:6674
void CScnLghtPrbVlmbj_SetTransform(void* self, CTransformUnaligned* tx)
{
} /* size: 0 */

// <012F09E6> engine2/interop.engine.cpp:6680
void CScnLghtPrbVlmbj_GetCTransform(void* self)
{
} /* size: 0 */

// <012F09C2> engine2/interop.engine.cpp:6686
void CScnLghtPrbVlmbj_SetBounds(void* self, AABB_t* box)
{
} /* size: 0 */

// <012F09AB> engine2/interop.engine.cpp:6692
void CScnLghtPrbVlmbj_GetBounds(void* self)
{
} /* size: 0 */

// <012F0994> engine2/interop.engine.cpp:6698
void CScnLghtPrbVlmbj_SetBoundsInfinite(void* self)
{
} /* size: 0 */

// <012F093F> engine2/interop.engine.cpp:6710
void CScnLghtPrbVlmbj_AddChildObject(void* self, uint32 nId, CSceneObject* pChild, unsigned int nChildUpdateFlags)
{
} /* size: 0 */

// <012F091B> engine2/interop.engine.cpp:6716
void CScnLghtPrbVlmbj_RemoveChild(void* self, CSceneObject* obj)
{
} /* size: 0 */

// <012F0904> engine2/interop.engine.cpp:6722
void CScnLghtPrbVlmbj_GetAttributesPtrForModify(void* self)
{
} /* size: 0 */

// <012F08E0> engine2/interop.engine.cpp:6728
void CScnLghtPrbVlmbj_EnableMeshGroups(void* self, uint64 nMask)
{
} /* size: 0 */

// <012F08BC> engine2/interop.engine.cpp:6734
void CScnLghtPrbVlmbj_DisableMeshGroups(void* self, uint64 nMask)
{
} /* size: 0 */

// <012F0898> engine2/interop.engine.cpp:6740
void CScnLghtPrbVlmbj_ResetMeshGroups(void* self, uint64 nMask)
{
} /* size: 0 */

// <012F0881> engine2/interop.engine.cpp:6746
void CScnLghtPrbVlmbj_GetCurrentMeshGroupMask(void* self)
{
} /* size: 0 */

// <012F086A> engine2/interop.engine.cpp:6752
void CScnLghtPrbVlmbj_GetWorld(void* self)
{
} /* size: 0 */

// <012F0846> engine2/interop.engine.cpp:6758
void CScnLghtPrbVlmbj_SetLOD(void* self, int nLOD)
{
} /* size: 0 */

// <012F082F> engine2/interop.engine.cpp:6764
void CScnLghtPrbVlmbj_DisableLOD(void* self)
{
} /* size: 0 */

// <012F0818> engine2/interop.engine.cpp:6770
void CScnLghtPrbVlmbj_GetCurrentLODGroupMask(void* self)
{
} /* size: 0 */

// <012F07EA> engine2/interop.engine.cpp:6782
void CScnLghtPrbVlmbj_GetModelHandle(void* self)
{
} /* size: 0 */

// <012F07C6> engine2/interop.engine.cpp:6788
void CScnLghtPrbVlmbj_SetMaterialGroup(void* self, uint32 token)
{
} /* size: 0 */

// <012F0795> engine2/interop.engine.cpp:6794
void CScnLghtPrbVlmbj_SetBodyGroup(void* self, uint32 token, int value)
{
} /* size: 0 */

// <012F0770> engine2/interop.engine.cpp:6800
void CScnLghtPrbVlmbj_SetBatchable(void* self, int bIsBatchable)
{
} /* size: 0 */

// <012F0759> engine2/interop.engine.cpp:6806
void CScnLghtPrbVlmbj_IsNotBatchable(void* self)
{
} /* size: 0 */

// <012F0734> engine2/interop.engine.cpp:6812
void CScnLghtPrbVlmbj_SetUniqueBatchGroup(void* self, int bUnique)
{
} /* size: 0 */

// <012F0710> engine2/interop.engine.cpp:6818
void CScnLghtPrbVlmbj_RemoveTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <012F06F9> engine2/interop.engine.cpp:6824
void CScnLghtPrbVlmbj_RemoveAllTags(void* self)
{
} /* size: 0 */

// <012F06E2> engine2/interop.engine.cpp:6830
void CScnLghtPrbVlmbj_GetTagCount(void* self)
{
} /* size: 0 */

// <012F06C0> engine2/interop.engine.cpp:6836
void CScnLghtPrbVlmbj_GetTagAt(void* self, int i)
{
} /* size: 0 */

// <012F069C> engine2/interop.engine.cpp:6842
void CScnLghtPrbVlmbj_AddTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <012F0654> engine2/interop.engine.cpp:6854
void CScnLghtPrbVlmbj_SetForceLayerID(void* self, uint32 nTok)
{
} /* size: 0 */

// <012F0630> engine2/interop.engine.cpp:6860
void CScnLghtPrbVlmbj_SetLayerMatchID(void* self, uint32 nTok)
{
} /* size: 0 */

// <012F060C> engine2/interop.engine.cpp:6866
// variable: 1
void CScnLghtPrbVlmbj_UpdateFlagsBasedOnMaterial(void* __self)
{
	CSceneLightProbeVolumeObject* self; // 6870
} /* size: 0, variables: 1 */

// <012F05AD> engine2/interop.engine.cpp:6884
void _Get__CScnLghtPrbVlmbj_m_vBoxMins(void* self)
{
} /* size: 32 */

// <012F0533> engine2/interop.engine.cpp:6888
// function call: 1
void _Set__CScnLghtPrbVlmbj_m_vBoxMins(void* self, Vector* value)
{
	Vector::operator=(
			const Vector& vOther);  // 6890
} /* size: 43, inline expansions: 1 (38 bytes) */

// <012F048B> engine2/interop.engine.cpp:6896
// function call: 1
void _Set__CScnLghtPrbVlmbj_m_vBoxMaxs(void* self, Vector* value)
{
	Vector::operator=(
			const Vector& vOther);  // 6898
} /* size: 43, inline expansions: 1 (38 bytes) */

// <012F045E> engine2/interop.engine.cpp:6900
void _Get__CScnLghtPrbVlmbj_m_nHandshake(void* self)
{
} /* size: 11 */

// <012F0422> engine2/interop.engine.cpp:6904
void _Set__CScnLghtPrbVlmbj_m_nHandshake(void* self, int value)
{
} /* size: 11 */

// <012F03F5> engine2/interop.engine.cpp:6908
void _Get__CScnLghtPrbVlmbj_m_nRenderPriority(void* self)
{
} /* size: 11 */

// <012F03B9> engine2/interop.engine.cpp:6912
void _Set__CScnLghtPrbVlmbj_m_nRenderPriority(void* self, int value)
{
} /* size: 11 */

// <012F02AA> engine2/interop.engine.cpp:6916
// function calls: 3
void _Get__CScnLghtPrbVlmbj_m_hLightProbeTexture(void* self)
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 222
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 222
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 6918
} /* size: 62, inline expansions: 3 (52 bytes) */

// <012F00A7> engine2/interop.engine.cpp:6920
// function calls: 8
void _Set__CScnLghtPrbVlmbj_m_hLightProbeTexture(void* self, HRenderTextureStrong* value)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 6922
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6922
} /* size: 162, inline expansions: 8 (245 bytes) */

// <012F0090> engine2/interop.engine.cpp:6924
void _Get__CScnLghtPrbVlmbj_m_hLightProbeDirectLightIndicesTexture(void* self)
{
} /* size: 0 */

// <012F006C> engine2/interop.engine.cpp:6928
void _Set__CScnLghtPrbVlmbj_m_hLightProbeDirectLightIndicesTexture(void* self, HRenderTextureStrong* value)
{
} /* size: 0 */

// <012EFF5D> engine2/interop.engine.cpp:6932
// function calls: 3
void _Get__CScnLghtPrbVlmbj_m_hLightProbeDirectLightScalarsTexture(void* self)
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 222
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 222
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 6934
} /* size: 62, inline expansions: 3 (52 bytes) */

// <012EFD5A> engine2/interop.engine.cpp:6936
// function calls: 8
void _Set__CScnLghtPrbVlmbj_m_hLightProbeDirectLightScalarsTexture(void* self, HRenderTextureStrong* value)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 6938
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6938
} /* size: 162, inline expansions: 8 (245 bytes) */

// <012EFC07> engine2/interop.engine.cpp:6940
// function calls: 4
void CSceneObject_ChangeFlags(void* self, int64 nNewFlags, int64 nNewFlagsMask)
{
	operator~(ESceneObjectFlags a); // 1934
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1934
	CSceneObject::ChangeFlags(
			ESceneObjectFlags nNewFlags,
			ESceneObjectFlags nNewFlagsMask);  // 6943
} /* size: 65, inline expansions: 4 (145 bytes) */

// <012EFAFF> engine2/interop.engine.cpp:6946
// function calls: 3
void CSceneObject_SetFlags(void* self, int64 nFlagsToOR)
{
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 6949
} /* size: 65, inline expansions: 3 (148 bytes) */

// <012EFADB> engine2/interop.engine.cpp:6952
void CSceneObject_HasFlags(void* self, int64 nFlags)
{
} /* size: 0 */

// <012EFAAD> engine2/interop.engine.cpp:6964
void CSceneObject_GetOriginalFlags(void* self)
{
} /* size: 0 */

// <012EF943> engine2/interop.engine.cpp:6970
// function calls: 5
void CSceneObject_ClearFlags(void* self, int64 nFlagsToClear)
{
	operator~(ESceneObjectFlags a); // 1934
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1934
	CSceneObject::ChangeFlags(
			ESceneObjectFlags nNewFlags,
			ESceneObjectFlags nNewFlagsMask);  // 1951
	CSceneObject::ClearFlags(
			ESceneObjectFlags nFlagsToClear);  // 6973
} /* size: 65, inline expansions: 5 (208 bytes) */

// <012EF91F> engine2/interop.engine.cpp:6976
void CSceneObject_SetCullDistance(void* self, float dist)
{
} /* size: 0 */

// <012EF884> engine2/interop.engine.cpp:6982
// function calls: 2
void CSceneObject_EnableLightingCache(void* self)
{
	CSceneObject::EnableLightingCache(); // 2297
	CSceneObject::EnableLightingCache(); // 6985
} /* size: 44, inline expansions: 2 (63 bytes) */

// <012EF74A> engine2/interop.engine.cpp:6988
// function calls: 4
void CSceneObject_SetLightingOrigin(void* self, Vector* vPos, int worldspace)
{
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 2335
	Vector::operator=(
			const Vector& vOther);  // 2337
	CSceneObject::SetLightingOrigin(
				const Vector& v,
				bool bWorldSpace);  // 6991
} /* size: 139, inline expansions: 4 (225 bytes) */

// <012EF701> engine2/interop.engine.cpp:6994
void CSceneObject_GetLightingOrigin(void* self)
{
} /* size: 9 */

// <012EF66D> engine2/interop.engine.cpp:7000
// function calls: 2
void CSceneObject_HasLightingOrigin(void* self)
{
	Vector::operator!=(
			const Vector& src);  // 2370
	CSceneObject::HasLightingOrigin(); // 7003
} /* size: 99, inline expansions: 2 (139 bytes) */

// <012EF592> engine2/interop.engine.cpp:7006
// function calls: 3
void CSceneObject_SetTintRGBA(void* self, Vector4D* color)
{
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 2375
	CSceneObject::SetAlphaFade(
			float fAlpha);  // 440
	CSceneObject::SetTintRGBA(
			const Vector4D& vTint);  // 7009
} /* size: 100, inline expansions: 3 (168 bytes) */

// <012EF57B> engine2/interop.engine.cpp:7012
void CSceneObject_GetTintRGBA(void* self)
{
} /* size: 0 */

// <012EF557> engine2/interop.engine.cpp:7018
void CSceneObject_SetAlphaFade(void* self, float nAlpha)
{
} /* size: 0 */

// <012EF540> engine2/interop.engine.cpp:7024
void CSceneObject_GetAlphaFade(void* self)
{
} /* size: 0 */

// <012EF39B> engine2/interop.engine.cpp:7030
// function calls: 6
void CSceneObject_SetMaterialOverrideForMeshInstances(void* self, HMaterialStrong* mat)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 15
	ResourceHandle_GetHandle(HMaterialStrong* target); // 7033
	CSceneObject::SetMaterialOverrideForMeshInstances(
						HMaterial hMaterial);  // 7033
} /* size: 94, inline expansions: 6 (11 bytes) */

// <012EEFEF> engine2/interop.engine.cpp:7036
// variable: 1
// function calls: 18
void CSceneObject_ClearMaterialOverrideList(void* self)
{
	Count(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemo this); // 1720
	{
		int i; // 1721
		CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::~CStrongHandleCopyable(); // 167
		CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >::~CSceneObjectStateOverideEntry(); // 1526
		Destruct<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> > >(CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this); // 1798
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::ConvertToExternalMemory(
				CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >,  this,
				CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >,  this,
				CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	Base(const AlignedByteArrayExplicit_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, this); // 237
	Purge(const CUtlMemoryFixedGrowable<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 1, in this,
		int numElements);  // 1799
	ResetDbgInfo(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this); // 1800
	Purge(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this); // 1722
	CSceneObject::UpdateFlagsBasedOnMaterial(); // 1723
	CSceneObject::ClearMaterialOverrideList(); // 7039
} /* size: 262, inline expansions: 12 (903 bytes) */

// <012EED4C> engine2/interop.engine.cpp:7042
// function calls: 10
void CSceneObject_SetMaterialOverride(void* self, HMaterialStrong* hMaterial, uint32 nAttr, int nAttrValueMatch)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 15
	ResourceHandle_GetHandle(HMaterialStrong* target); // 7045
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 7045
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 512
	CSceneObject::SetMaterialOverride(
				HMaterial hMaterial,
				CUtlStringToken nAttr,
				int nAttrValueMatch);  // 7045
} /* size: 97, inline expansions: 10 (52 bytes) */

// <012EED35> engine2/interop.engine.cpp:7048
void CSceneObject_IsLoaded(void* self)
{
} /* size: 0 */

// <012EED1E> engine2/interop.engine.cpp:7054
void CSceneObject_IsRenderingEnabled(void* self)
{
} /* size: 0 */

// <012EEBF9> engine2/interop.engine.cpp:7060
// function calls: 4
void CSceneObject_SetLoaded(void* self)
{
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 7063
} /* size: 65, inline expansions: 4 (198 bytes) */

// <012EEA8E> engine2/interop.engine.cpp:7066
// function calls: 5
void CSceneObject_ClearLoaded(void* self)
{
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1934
	CSceneObject::ChangeFlags(
			ESceneObjectFlags nNewFlags,
			ESceneObjectFlags nNewFlagsMask);  // 1951
	CSceneObject::ClearFlags(
			ESceneObjectFlags nFlagsToClear);  // 1971
	CSceneObject::ClearLoaded(); // 7069
} /* size: 65, inline expansions: 5 (267 bytes) */

// <012EE9A8> engine2/interop.engine.cpp:7072
// function calls: 3
void CSceneObject_DisableRendering(void* self)
{
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1976
	CSceneObject::DisableRendering(); // 7075
} /* size: 65, inline expansions: 3 (138 bytes) */

// <012EE8C2> engine2/interop.engine.cpp:7078
// function calls: 3
void CSceneObject_EnableRendering(void* self)
{
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1981
	CSceneObject::EnableRendering(); // 7081
} /* size: 65, inline expansions: 3 (147 bytes) */

// <012EE7A0> engine2/interop.engine.cpp:7084
// function calls: 3
void CSceneObject_SetRenderingEnabled(void* self, int bEnabled)
{
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1988
	CSceneObject::SetRenderingEnabled(
				bool bEnabled);  // 7087
} /* size: 75, inline expansions: 3 (155 bytes) */

// <012EE4DE> engine2/interop.engine.cpp:7090
// function calls: 13
void CSceneObject_GetBoundingSphereRadius(void* self)
{
	CSceneObject::GetBounds(
			Vector& vecWorldMins,
			Vector& vecWorldMaxes);  // 2026
	Vector::Vector(); // 2024
	Vector::Vector(); // 2025
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2027
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2027
	CSceneObject::GetBoundingSphereRadius(); // 7093
} /* size: 147, inline expansions: 13 (272 bytes) */

// <012EE19F> engine2/interop.engine.cpp:7096
// function calls: 11
void CSceneObject_SetTransform(void* self, CTransformUnaligned* tx)
{
	matrix3x4_t::matrix3x4_t(); // 248
	CTransformUnaligned::ToMatrix(); // 2105
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 2082
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 2090
	CSceneObject::SetTransform(
			const matrix3x4_t& mTransform);  // 2105
	CSceneObject::SetTransform(
			const CTransformUnaligned& transform);  // 7099
} /* size: 257, inline expansions: 11 (540 bytes) */

// <012EE188> engine2/interop.engine.cpp:7102
void CSceneObject_GetCTransform(void* self)
{
} /* size: 0 */

// <012EE0AD> engine2/interop.engine.cpp:7108
// function calls: 2
void CSceneObject_SetBounds(void* self, AABB_t* box)
{
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 625
	CSceneObject::SetBounds(
			const AABB_t& bounds);  // 7111
} /* size: 33, inline expansions: 2 (48 bytes) */

// <012EDF67> engine2/interop.engine.cpp:7114
// function calls: 5
void CSceneObject_GetBounds(void* self)
{
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 637
	CSceneObject::GetBounds(
			AABB_t& bounds);  // 638
	CSceneObject::GetBounds(); // 7117
} /* size: 51, inline expansions: 5 (52 bytes) */

// <012EDEF1> engine2/interop.engine.cpp:7120
// function call: 1
void CSceneObject_SetBoundsInfinite(void* self)
{
	CSceneObject::SetBoundsInfinite(); // 7123
} /* size: 26, inline expansions: 1 (22 bytes) */

// <012EDD93> engine2/interop.engine.cpp:7132
// function calls: 3
void CSceneObject_AddChildObject(void* self, uint32 nId, CSceneObject* pChild, unsigned int nChildUpdateFlags)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 7135
	CSceneObject::AddChildObject(
			CUtlStringToken nId,
			CSceneObject* pChild,
			uint32 nChildUpdateFlags);  // 7135
} /* size: 40, inline expansions: 3 (30 bytes) */

// <012EDD00> engine2/interop.engine.cpp:7138
// function call: 1
void CSceneObject_RemoveChild(void* self, CSceneObject* obj)
{
	CSceneObject::RemoveChild(
			CSceneObject* pChild);  // 7141
} /* size: 29, inline expansions: 1 (22 bytes) */

// <012EDC27> engine2/interop.engine.cpp:7144
// function calls: 4
void CSceneObject_GetAttributesPtrForModify(void* self)
{
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 1063
	CSceneObject::GetAttributesForModify(); // 1035
	CSceneObject::GetAttributesPtrForModify(); // 7147
} /* size: 63, inline expansions: 4 (147 bytes) */

// <012EDA81> engine2/interop.engine.cpp:7150
// function calls: 7
void CSceneObject_EnableMeshGroups(void* self, uint64 nMask)
{
	CSceneObject::GetCurrentMeshGroupMask(); // 2204
	CSceneObject::GetCurrentMeshGroupMask(); // 2165
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 2198
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 2177
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 2167
	CSceneObject::EnableMeshGroups(
			MeshGroupMask_t nMask);  // 7153
} /* size: 174, inline expansions: 7 (433 bytes) */

// <012ED8DB> engine2/interop.engine.cpp:7156
// function calls: 7
void CSceneObject_DisableMeshGroups(void* self, uint64 nMask)
{
	CSceneObject::GetCurrentMeshGroupMask(); // 2204
	CSceneObject::GetCurrentMeshGroupMask(); // 2172
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 2198
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 2177
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 2174
	CSceneObject::DisableMeshGroups(
				MeshGroupMask_t nMask);  // 7159
} /* size: 174, inline expansions: 7 (433 bytes) */

// <012ED7C7> engine2/interop.engine.cpp:7162
// function calls: 4
void CSceneObject_ResetMeshGroups(void* self, uint64 nMask)
{
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 2198
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 2177
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 7165
} /* size: 155, inline expansions: 4 (282 bytes) */

// <012ED758> engine2/interop.engine.cpp:7168
// function calls: 2
void CSceneObject_GetCurrentMeshGroupMask(void* self)
{
	CSceneObject::GetCurrentMeshGroupMask(); // 2204
	CSceneObject::GetCurrentMeshGroupMask(); // 7171
} /* size: 41, inline expansions: 2 (50 bytes) */

// <012ED741> engine2/interop.engine.cpp:7174
void CSceneObject_GetWorld(void* self)
{
} /* size: 0 */

// <012ED5FC> engine2/interop.engine.cpp:7180
// function calls: 5
void CSceneObject_SetLOD(void* self, int nLOD)
{
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 2230
	CSceneObject::DisableLOD(); // 2225
	CSceneObject::SetLOD(
		int nLOD);  // 2221
	CSceneObject::SetLOD(
		int nLOD);  // 7183
} /* size: 120, inline expansions: 5 (224 bytes) */

// <012ED5E5> engine2/interop.engine.cpp:7186
void CSceneObject_DisableLOD(void* self)
{
} /* size: 0 */

// <012ED5CE> engine2/interop.engine.cpp:7192
void CSceneObject_GetCurrentLODGroupMask(void* self)
{
} /* size: 0 */

// <012ED5B7> engine2/interop.engine.cpp:7198
void CSceneObject_GetCurrentLODLevel(void* self)
{
} /* size: 0 */

// <012ED3F3> engine2/interop.engine.cpp:7204
// function calls: 6
void CSceneObject_GetModelHandle(void* self)
{
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 266
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			ResourceHandleTyped_t hResource);  // 1077
	CSceneObject::GetModelHandle(); // 7207
	CWeakHandle<InfoForResourceTypeCModel>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCModel>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 7207
} /* size: 127, inline expansions: 6 (81 bytes) */

// <012ED2F4> engine2/interop.engine.cpp:7210
// function calls: 3
void CSceneObject_SetMaterialGroup(void* self, uint32 token)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 7213
	CSceneObject::SetMaterialGroup(
			CUtlStringToken token);  // 7213
} /* size: 33, inline expansions: 3 (28 bytes) */

// <012ECFC9> engine2/interop.engine.cpp:7216
// function calls: 11
void CSceneObject_SetBodyGroup(void* self, uint32 token, int value)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 7219
	CStrongHandle<InfoForResourceTypeCModel>::GetData(); // 101
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetModelData(); // 1007
	CSceneObject::GetCurrentMeshGroupMask(); // 2204
	CSceneObject::GetCurrentMeshGroupMask(); // 1012
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 2198
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 2177
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 1029
	CSceneObject::SetBodyGroup(
			CUtlStringToken token,
			int iValue);  // 7219
} /* size: 348, inline expansions: 11 (611 bytes) */

// <012ECFA4> engine2/interop.engine.cpp:7222
void CSceneObject_SetBatchable(void* self, int bIsBatchable)
{
} /* size: 0 */

// <012ECF8D> engine2/interop.engine.cpp:7228
void CSceneObject_IsNotBatchable(void* self)
{
} /* size: 0 */

// <012ECF68> engine2/interop.engine.cpp:7234
void CSceneObject_SetUniqueBatchGroup(void* self, int bUnique)
{
} /* size: 0 */

// <012ECF44> engine2/interop.engine.cpp:7240
void CSceneObject_RemoveTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <012ECF16> engine2/interop.engine.cpp:7252
void CSceneObject_GetTagCount(void* self)
{
} /* size: 0 */

// <012ECEF4> engine2/interop.engine.cpp:7258
void CSceneObject_GetTagAt(void* self, int i)
{
} /* size: 0 */

// <012ECB70> engine2/interop.engine.cpp:7264
// variable: 1
// function calls: 16
void CSceneObject_AddTag(void* self, unsigned int tag)
{
	{
		int i; // 1531
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Count(); // 1531
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 609
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Element(
			int i);  // 1533
	}
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Find(
		const unsigned int& src);  // 1563
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::HasElement(
			const unsigned int& src);  // 991
	CSceneObject::HasTag(
		uint hash);  // 980
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::AddToTail(
			const unsigned int& src);  // 981
	CSceneObject::AddTag(
		uint hash);  // 7267
} /* size: 188, inline expansions: 13 (555 bytes) */

// <012ECB4C> engine2/interop.engine.cpp:7270
void CSceneObject_HasTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <012ECA57> engine2/interop.engine.cpp:7276
// function calls: 3
void CSceneObject_SetForceLayerID(void* self, uint32 nTok)
{
	CSceneObject::SetForceLayerID(
			CUtlStringToken nTok);  // 7279
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 7279
} /* size: 28, inline expansions: 3 (22 bytes) */

// <012ECA33> engine2/interop.engine.cpp:7282
void CSceneObject_SetLayerMatchID(void* self, uint32 nTok)
{
} /* size: 0 */

// <012EC99F> engine2/interop.engine.cpp:7288
// variable: 1
// function call: 1
void CSceneObject_UpdateFlagsBasedOnMaterial(void* __self)
{
	CSceneObject* self; // 7292
	CSceneObject::UpdateFlagsBasedOnMaterial(); // 7296
} /* size: 68, variables: 1, inline expansions: 1 (25 bytes) */

// <012EC810> engine2/interop.engine.cpp:7300
// function calls: 5
void CSceneObject_SetMaterialOverrideByIndex(void* self, int index, HMaterialStrong* material)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 15
	ResourceHandle_GetHandle(HMaterialStrong* target); // 7303
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012EC7A7> engine2/interop.engine.cpp:7306
void* From_CSceneObject_To_CSceneSkyBoxObject(CSceneObject* ptr)
{
} /* size: 35 */

// <012EC78B> engine2/interop.engine.cpp:7307
void* To_CSceneObject_From_CSceneSkyBoxObject(CSceneSkyBoxObject* ptr)
{
} /* size: 0 */

// <012EBFF0> engine2/interop.engine.cpp:7309
// function calls: 29
void CScnSkyBxbjct_SetLighting_ConstantColorHemisphere(void* self, Vector* vSkyColor)
{
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 134
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 1660
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 1661
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 277
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 277
	CRenderAttributes::SetVector4DValue(
			CUtlStringToken nTokenID,
			Vector4D vValue);  // 1661
	CSceneObject::SetVector4DValue(
			const CUtlStringToken& attrName,
			const Vector4D& vecValue);  // 134
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 135
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 1660
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 1661
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 277
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 277
	CRenderAttributes::SetVector4DValue(
			CUtlStringToken nTokenID,
			Vector4D vValue);  // 1661
	CSceneObject::SetVector4DValue(
			const CUtlStringToken& attrName,
			const Vector4D& vecValue);  // 135
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 136
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 1660
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 1661
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 277
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 277
	CRenderAttributes::SetVector4DValue(
			CUtlStringToken nTokenID,
			Vector4D vValue);  // 1661
	CSceneObject::SetVector4DValue(
			const CUtlStringToken& attrName,
			const Vector4D& vecValue);  // 136
	Vector::operator=(
			const Vector& vOther);  // 138
	CSceneSkyBoxObject::SetLighting_ConstantColorHemisphere(
						const Vector& vSkyColor);  // 7312
} /* size: 452, inline expansions: 29 (1013 bytes) */

// <012EBF53> engine2/interop.engine.cpp:7315
void CScnSkyBxbjct_SetLighting_Samples(void* self, void* pSkyColors, void* pSkyDirections, int nSkyColors)
{
} /* size: 9 */

// <012EBD91> engine2/interop.engine.cpp:7321
// function calls: 7
void CScnSkyBxbjct_GetMaterial(void* self)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator CWeakHandle<InfoForResourceTypeIMaterial2>(); // 64
	CSceneSkyBoxObject::GetMaterial(); // 7324
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 7324
} /* size: 62, inline expansions: 7 (52 bytes) */

// <012EBB65> engine2/interop.engine.cpp:7327
// function calls: 9
void CScnSkyBxbjct_SetMaterial(void* self, HMaterialStrong* hMaterial)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 15
	ResourceHandle_GetHandle(HMaterialStrong* target); // 7330
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 65
	CSceneSkyBoxObject::SetMaterial(
			HMaterial hMaterial);  // 7330
} /* size: 162, inline expansions: 9 (371 bytes) */

// <012EBAAE> engine2/interop.engine.cpp:7333
// function calls: 2
void CScnSkyBxbjct_SetSkyTint(void* self, Vector* vTint)
{
	Vector::operator=(
			const Vector& vOther);  // 178
	CSceneSkyBoxObject::SetSkyTint(
			const Vector& vTint);  // 7336
} /* size: 43, inline expansions: 2 (76 bytes) */

// <012EBA80> engine2/interop.engine.cpp:7339
void CScnSkyBxbjct_GetSkyTint(void* self)
{
} /* size: 32 */

// <012EBA06> engine2/interop.engine.cpp:7345
// function call: 1
void CScnSkyBxbjct_SetFogType(void* self, int nType)
{
	CSceneSkyBoxObject::SetFogType(
			ESkyboxFogType_t nType);  // 7348
} /* size: 11, inline expansions: 1 (6 bytes) */

// <012EB9A8> engine2/interop.engine.cpp:7351
// function call: 1
void CScnSkyBxbjct_GetFogType(void* self)
{
	CSceneSkyBoxObject::GetFogType(); // 7354
} /* size: 11, inline expansions: 1 (0 bytes) */

// <012EB8CE> engine2/interop.engine.cpp:7357
// function call: 1
void CScnSkyBxbjct_SetAngularFogParams(void* self, float flFogMinStart, float flFogMinEnd, float flFogMaxStart, float flFogMaxEnd)
{
	CSceneSkyBoxObject::SetAngularFogParams(
				float flFogMinStart,
				float flFogMinEnd,
				float flFogMaxStart,
				float flFogMaxEnd);  // 7360
} /* size: 21, inline expansions: 1 (16 bytes) */

// <012EB870> engine2/interop.engine.cpp:7363
// function call: 1
void CScnSkyBxbjct_GetFogMinStart(void* self)
{
	CSceneSkyBoxObject::GetFogMinStart(); // 7366
} /* size: 13, inline expansions: 1 (0 bytes) */

// <012EB812> engine2/interop.engine.cpp:7369
// function call: 1
void CScnSkyBxbjct_GetFogMinEnd(void* self)
{
	CSceneSkyBoxObject::GetFogMinEnd(); // 7372
} /* size: 13, inline expansions: 1 (0 bytes) */

// <012EB7B4> engine2/interop.engine.cpp:7375
// function call: 1
void CScnSkyBxbjct_GetFogMaxStart(void* self)
{
	CSceneSkyBoxObject::GetFogMaxStart(); // 7378
} /* size: 13, inline expansions: 1 (0 bytes) */

// <012EB756> engine2/interop.engine.cpp:7381
// function call: 1
void CScnSkyBxbjct_GetFogMaxEnd(void* self)
{
	CSceneSkyBoxObject::GetFogMaxEnd(); // 7384
} /* size: 13, inline expansions: 1 (0 bytes) */

// <012EB725> engine2/interop.engine.cpp:7387
void CScnSkyBxbjct_ChangeFlags(void* self, int64 nNewFlags, int64 nNewFlagsMask)
{
} /* size: 0 */

// <012EB701> engine2/interop.engine.cpp:7393
void CScnSkyBxbjct_SetFlags(void* self, int64 nFlagsToOR)
{
} /* size: 0 */

// <012EB6DD> engine2/interop.engine.cpp:7399
void CScnSkyBxbjct_HasFlags(void* self, int64 nFlags)
{
} /* size: 0 */

// <012EB6C6> engine2/interop.engine.cpp:7405
void CScnSkyBxbjct_GetFlags(void* self)
{
} /* size: 0 */

// <012EB6AF> engine2/interop.engine.cpp:7411
void CScnSkyBxbjct_GetOriginalFlags(void* self)
{
} /* size: 0 */

// <012EB667> engine2/interop.engine.cpp:7423
void CScnSkyBxbjct_SetCullDistance(void* self, float dist)
{
} /* size: 0 */

// <012EB650> engine2/interop.engine.cpp:7429
void CScnSkyBxbjct_EnableLightingCache(void* self)
{
} /* size: 0 */

// <012EB61F> engine2/interop.engine.cpp:7435
void CScnSkyBxbjct_SetLightingOrigin(void* self, Vector* vPos, int worldspace)
{
} /* size: 0 */

// <012EB608> engine2/interop.engine.cpp:7441
void CScnSkyBxbjct_GetLightingOrigin(void* self)
{
} /* size: 0 */

// <012EB5F1> engine2/interop.engine.cpp:7447
void CScnSkyBxbjct_HasLightingOrigin(void* self)
{
} /* size: 0 */

// <012EB5CD> engine2/interop.engine.cpp:7453
void CScnSkyBxbjct_SetTintRGBA(void* self, Vector4D* color)
{
} /* size: 0 */

// <012EB5B6> engine2/interop.engine.cpp:7459
void CScnSkyBxbjct_GetTintRGBA(void* self)
{
} /* size: 0 */

// <012EB592> engine2/interop.engine.cpp:7465
void CScnSkyBxbjct_SetAlphaFade(void* self, float nAlpha)
{
} /* size: 0 */

// <012EB57B> engine2/interop.engine.cpp:7471
void CScnSkyBxbjct_GetAlphaFade(void* self)
{
} /* size: 0 */

// <012EB557> engine2/interop.engine.cpp:7477
void CScnSkyBxbjct_SetMaterialOverrideForMeshInstances(void* self, HMaterialStrong* mat)
{
} /* size: 0 */

// <012EB540> engine2/interop.engine.cpp:7483
void CScnSkyBxbjct_ClearMaterialOverrideList(void* self)
{
} /* size: 0 */

// <012EB502> engine2/interop.engine.cpp:7489
void CScnSkyBxbjct_SetMaterialOverride(void* self, HMaterialStrong* hMaterial, uint32 nAttr, int nAttrValueMatch)
{
} /* size: 0 */

// <012EB4EB> engine2/interop.engine.cpp:7495
void CScnSkyBxbjct_IsLoaded(void* self)
{
} /* size: 0 */

// <012EB4D4> engine2/interop.engine.cpp:7501
void CScnSkyBxbjct_IsRenderingEnabled(void* self)
{
} /* size: 0 */

// <012EB4BD> engine2/interop.engine.cpp:7507
void CScnSkyBxbjct_SetLoaded(void* self)
{
} /* size: 0 */

// <012EB4A6> engine2/interop.engine.cpp:7513
void CScnSkyBxbjct_ClearLoaded(void* self)
{
} /* size: 0 */

// <012EB48F> engine2/interop.engine.cpp:7519
void CScnSkyBxbjct_DisableRendering(void* self)
{
} /* size: 0 */

// <012EB478> engine2/interop.engine.cpp:7525
void CScnSkyBxbjct_EnableRendering(void* self)
{
} /* size: 0 */

// <012EB454> engine2/interop.engine.cpp:7531
void CScnSkyBxbjct_SetRenderingEnabled(void* self, int bEnabled)
{
} /* size: 0 */

// <012EB43D> engine2/interop.engine.cpp:7537
void CScnSkyBxbjct_GetBoundingSphereRadius(void* self)
{
} /* size: 0 */

// <012EB41A> engine2/interop.engine.cpp:7543
void CScnSkyBxbjct_SetTransform(void* self, CTransformUnaligned* tx)
{
} /* size: 0 */

// <012EB403> engine2/interop.engine.cpp:7549
void CScnSkyBxbjct_GetCTransform(void* self)
{
} /* size: 0 */

// <012EB3DF> engine2/interop.engine.cpp:7555
void CScnSkyBxbjct_SetBounds(void* self, AABB_t* box)
{
} /* size: 0 */

// <012EB3C8> engine2/interop.engine.cpp:7561
void CScnSkyBxbjct_GetBounds(void* self)
{
} /* size: 0 */

// <012EB3B1> engine2/interop.engine.cpp:7567
void CScnSkyBxbjct_SetBoundsInfinite(void* self)
{
} /* size: 0 */

// <012EB39A> engine2/interop.engine.cpp:7573
void CScnSkyBxbjct_GetParent(void* self)
{
} /* size: 0 */

// <012EB35C> engine2/interop.engine.cpp:7579
void CScnSkyBxbjct_AddChildObject(void* self, uint32 nId, CSceneObject* pChild, unsigned int nChildUpdateFlags)
{
} /* size: 0 */

// <012EB338> engine2/interop.engine.cpp:7585
void CScnSkyBxbjct_RemoveChild(void* self, CSceneObject* obj)
{
} /* size: 0 */

// <012EB321> engine2/interop.engine.cpp:7591
void CScnSkyBxbjct_GetAttributesPtrForModify(void* self)
{
} /* size: 0 */

// <012EB2FD> engine2/interop.engine.cpp:7597
void CScnSkyBxbjct_EnableMeshGroups(void* self, uint64 nMask)
{
} /* size: 0 */

// <012EB2D9> engine2/interop.engine.cpp:7603
void CScnSkyBxbjct_DisableMeshGroups(void* self, uint64 nMask)
{
} /* size: 0 */

// <012EB2B5> engine2/interop.engine.cpp:7609
void CScnSkyBxbjct_ResetMeshGroups(void* self, uint64 nMask)
{
} /* size: 0 */

// <012EB29E> engine2/interop.engine.cpp:7615
void CScnSkyBxbjct_GetCurrentMeshGroupMask(void* self)
{
} /* size: 0 */

// <012EB24C> engine2/interop.engine.cpp:7633
void CScnSkyBxbjct_DisableLOD(void* self)
{
} /* size: 0 */

// <012EB21E> engine2/interop.engine.cpp:7645
void CScnSkyBxbjct_GetCurrentLODLevel(void* self)
{
} /* size: 0 */

// <012EB207> engine2/interop.engine.cpp:7651
void CScnSkyBxbjct_GetModelHandle(void* self)
{
} /* size: 0 */

// <012EB1E3> engine2/interop.engine.cpp:7657
void CScnSkyBxbjct_SetMaterialGroup(void* self, uint32 token)
{
} /* size: 0 */

// <012EB1B2> engine2/interop.engine.cpp:7663
void CScnSkyBxbjct_SetBodyGroup(void* self, uint32 token, int value)
{
} /* size: 0 */

// <012EB18D> engine2/interop.engine.cpp:7669
void CScnSkyBxbjct_SetBatchable(void* self, int bIsBatchable)
{
} /* size: 0 */

// <012EB176> engine2/interop.engine.cpp:7675
void CScnSkyBxbjct_IsNotBatchable(void* self)
{
} /* size: 0 */

// <012EB151> engine2/interop.engine.cpp:7681
void CScnSkyBxbjct_SetUniqueBatchGroup(void* self, int bUnique)
{
} /* size: 0 */

// <012EB12D> engine2/interop.engine.cpp:7687
void CScnSkyBxbjct_RemoveTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <012EB0FF> engine2/interop.engine.cpp:7699
void CScnSkyBxbjct_GetTagCount(void* self)
{
} /* size: 0 */

// <012EB0DD> engine2/interop.engine.cpp:7705
void CScnSkyBxbjct_GetTagAt(void* self, int i)
{
} /* size: 0 */

// <012EB0B9> engine2/interop.engine.cpp:7711
void CScnSkyBxbjct_AddTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <012EB095> engine2/interop.engine.cpp:7717
void CScnSkyBxbjct_HasTag(void* self, unsigned int tag)
{
} /* size: 0 */

// <012EB071> engine2/interop.engine.cpp:7723
void CScnSkyBxbjct_SetForceLayerID(void* self, uint32 nTok)
{
} /* size: 0 */

// <012EB029> engine2/interop.engine.cpp:7735
// variable: 1
void CScnSkyBxbjct_UpdateFlagsBasedOnMaterial(void* __self)
{
	CSceneSkyBoxObject* self; // 7739
} /* size: 0, variables: 1 */

// <012EAFF8> engine2/interop.engine.cpp:7747
void CScnSkyBxbjct_SetMaterialOverrideByIndex(void* self, int index, HMaterialStrong* material)
{
} /* size: 0 */

// <012EAF90> engine2/interop.engine.cpp:7753
void CServerList_Create(uint serverObj)
{
} /* size: 49 */

// <01358EB2> engine2/interop.engine.cpp:7759
// function call: 1
void CServerList_Destroy(void* self)
{
	CServerList_Destroy(void* self); // 7759
} /* size: 49, inline expansions: 1 (31 bytes) */

// <012EAF72> engine2/interop.engine.cpp:7759
void CServerList_Destroy(void* self)
{
} /* size: 0 */

// <012EAEA8> engine2/interop.engine.cpp:7771
void CServerList_AddFilter(void* self, const char* key, const char* value)
{
} /* size: 9 */

// <012EAE4E> engine2/interop.engine.cpp:7777
// variable: 1
void CSfxTable_GetCacheStatus(void* __self)
{
	CSfxTable* self; // 7781
} /* size: 9, variables: 1 */

// <012EADD5> engine2/interop.engine.cpp:7788
// variable: 1
// function call: 1
void CSfxTable_GetSampleCount(void* __self)
{
	CSfxTable* self; // 7792
	CAudioStreamManaged::SampleCount(); // 7796
} /* size: 75, variables: 1, inline expansions: 1 (21 bytes) */

// <0135A6E1> engine2/interop.engine.cpp:7800
// variables: 5
// function calls: 19
void CSfxTable_GetSamples(void* __self, void* __samples, unsigned int __numSamples)
{
	CSfxTable* self; // 7804
	short int* samples; // 7805
	unsigned int numSamples; // 7806
	CUtlVector<short int, CUtlMemory<short int, int> > outputSamples; // 7810
	bool bResult; // 7811
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<short int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short int, CUtlMemory<short int, int> >::CUtlVector(); // 7810
	CUtlMemory<short int, int>::Base(); // 112
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 7812
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 7812
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveAll(); // 1798
	CUtlMemory<short int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short int, int>::Purge(); // 903
	CUtlMemory<short int, int>::Purge(); // 1799
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
	ValidateAlignment<short int>(void); // 508
	CUtlMemory<short int, int>::Purge(); // 510
	CUtlMemory<short int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 7816
	CSfxTable_GetSamples(void* __self,
				void* __samples,
				unsigned int __numSamples);  // 7800
} /* size: 222, variables: 5, inline expansions: 19 (436 bytes) */

// <012EAD62> engine2/interop.engine.cpp:7800
// variables: 5
void CSfxTable_GetSamples(void* __self, void* __samples, unsigned int __numSamples)
{
	CSfxTable* self; // 7804
	short int* samples; // 7805
	unsigned int numSamples; // 7806
	CUtlVector<short int, CUtlMemory<short int, int> > outputSamples; // 7810
	bool bResult; // 7811
} /* size: 0, variables: 5 */

// <012EABBD> engine2/interop.engine.cpp:7817
// variable: 1
// function calls: 6
void CSfxTable_GetSound(void* __self)
{
	CSfxTable* self; // 7821
	CStrongHandle<InfoForResourceTypeVSound_t>::operator CStrongHandle<InfoForResourceTypeVSound_t>::ResourceHandleTyped_t(); // 222
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeVSound_t>::Init(
		ResourceHandleTyped_t hResource);  // 462
	CStrongHandle<InfoForResourceTypeVSound_t>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 222
	CStrongHandleCopyable<InfoForResourceTypeVSound_t>::CStrongHandleCopyable(
				const CStrongHandle<InfoForResourceTypeVSound_t>& src);  // 7824
} /* size: 102, variables: 1, inline expansions: 6 (189 bytes) */

// <012EAB74> engine2/interop.engine.cpp:7828
void CSfxTable_IsValidForPlayback(void* self)
{
} /* size: 18 */

// <012EAB2B> engine2/interop.engine.cpp:7834
void CSfxTable_FailedResourceLoad(void* self)
{
} /* size: 18 */

// <012EAACE> engine2/interop.engine.cpp:7840
// variable: 1
void CSfxTable_CreateMixer(void* __self)
{
	CSfxTable* self; // 7844
} /* size: 56, variables: 1 */

// <012EAA16> engine2/interop.engine.cpp:7852
// function call: 1
void CSmplPCMWvDt_Create(void)
{
	CSimplePCMWaveData::CSimplePCMWaveData(); // 7855
} /* size: 61, inline expansions: 1 (13 bytes) */

// <012EA847> engine2/interop.engine.cpp:7858
// function calls: 7
void CSmplPCMWvDt_Dispose(void* self)
{
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 8
	CSimplePCMWaveData::~CSimplePCMWaveData(); // 7861
} /* size: 89, inline expansions: 7 (138 bytes) */

// <012EA7C0> engine2/interop.engine.cpp:7864
void CSmplPCMWvDt_ParseMP3File(void* self, void* pData, int nDataSize)
{
} /* size: 12 */

// <012EA717> engine2/interop.engine.cpp:7870
// variable: 1
// function calls: 2
const void* CSmplPCMWvDt_GetPCMData(void* __self)
{
	CSimplePCMWaveData* self; // 7874
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 7877
} /* size: 9, variables: 1, inline expansions: 2 (0 bytes) */

// <012EA6A4> engine2/interop.engine.cpp:7881
// variable: 1
// function call: 1
void CSmplPCMWvDt_GetPCMSize(void* __self)
{
	CSimplePCMWaveData* self; // 7885
	CUtlBuffer::TellMaxPut(); // 7888
} /* size: 8, variables: 1, inline expansions: 1 (0 bytes) */

// <012EA677> engine2/interop.engine.cpp:7892
void _Get__CSmplPCMWvDt_m_nFormat(void* self)
{
} /* size: 7 */

// <012EA63B> engine2/interop.engine.cpp:7896
void _Set__CSmplPCMWvDt_m_nFormat(void* self, unsigned int value)
{
} /* size: 7 */

// <012EA60E> engine2/interop.engine.cpp:7900
void _Get__CSmplPCMWvDt_m_nSampleRate(void* self)
{
} /* size: 8 */

// <012EA5D2> engine2/interop.engine.cpp:7904
void _Set__CSmplPCMWvDt_m_nSampleRate(void* self, unsigned int value)
{
} /* size: 8 */

// <012EA5A5> engine2/interop.engine.cpp:7908
void _Get__CSmplPCMWvDt_m_nChannels(void* self)
{
} /* size: 8 */

// <012EA569> engine2/interop.engine.cpp:7912
void _Set__CSmplPCMWvDt_m_nChannels(void* self, unsigned int value)
{
} /* size: 8 */

// <012EA53C> engine2/interop.engine.cpp:7916
void _Get__CSmplPCMWvDt_m_nSampleCount(void* self)
{
} /* size: 8 */

// <012EA500> engine2/interop.engine.cpp:7920
void _Set__CSmplPCMWvDt_m_nSampleCount(void* self, unsigned int value)
{
} /* size: 8 */

// <012EA4D3> engine2/interop.engine.cpp:7924
void _Get__CSmplPCMWvDt_m_nBits(void* self)
{
} /* size: 8 */

// <012EA46A> engine2/interop.engine.cpp:7932
void _Get__CSmplPCMWvDt_m_flDuration(void* self)
{
} /* size: 10 */

// <012EA42E> engine2/interop.engine.cpp:7936
void _Set__CSmplPCMWvDt_m_flDuration(void* self, float value)
{
} /* size: 10 */

// <0135B80C> engine2/interop.engine.cpp:7940
// variable: 1
// function calls: 14
void CStmnvntryRslt_Destroy(void* self)
{
	CSteamInventoryResult::DestroyResult(); // 75
	{
		int i; // 1807
		CUtlMemory<CSteamItemInstance::operator[](
				int i);  // 602
		CUtlVectorBase<CSteamItemInstance::Element(
			int i);  // 1809
	}
	CUtlVectorBase<CSteamItemInstance::RemoveAll(); // 1798
	CUtlMemory<CSteamItemInstance::IsExternallyAllocated(); // 905
	CUtlMemory<CSteamItemInstance::Purge(); // 903
	CUtlMemory<CSteamItemInstance::Purge(); // 1799
	CUtlVectorBase<CSteamItemInstance::Purge(); // 1811
	CUtlVectorBase<CSteamItemInstance::PurgeAndDeleteElements(); // 76
	CUtlVectorBase<CSteamItemInstance::Purge(); // 560
	CUtlVectorBase<CSteamItemInstance::~CUtlVectorBase(); // 410
	CUtlVector<CSteamItemInstance::~CUtlVector(); // 77
	CSteamInventoryResult::~CSteamInventoryResult(); // 7943
	CStmnvntryRslt_Destroy(void* self); // 7940
} /* size: 161, inline expansions: 12 (441 bytes) */

// <012EA3BD> engine2/interop.engine.cpp:7946
// function call: 1
void CStmnvntryRslt_IsPending(void* self)
{
	CSteamInventoryResult::IsPending(); // 7949
} /* size: 33, inline expansions: 1 (8 bytes) */

// <012EA364> engine2/interop.engine.cpp:7952
// function call: 1
void CStmnvntryRslt_IsOk(void* self)
{
	CSteamInventoryResult::IsOk(); // 7955
} /* size: 33, inline expansions: 1 (8 bytes) */

// <012EA269> engine2/interop.engine.cpp:7958
// function calls: 3
void CStmnvntryRslt_CheckSteamId(void* self, uint64 steamid)
{
	CSteamID::SetFromUint64(
			uint64 ulSteamID);  // 531
	CSteamID::CSteamID(
		uint64 ulSteamID);  // 97
	CSteamInventoryResult::CheckSteamId(
			uint64 steamid);  // 7961
} /* size: 31, inline expansions: 3 (6 bytes) */

// <012EA211> engine2/interop.engine.cpp:7964
// function call: 1
void CStmnvntryRslt_GetTimestamp(void* self)
{
	CSteamInventoryResult::GetTimestamp(); // 7967
} /* size: 19, inline expansions: 1 (12 bytes) */

// <012EA170> engine2/interop.engine.cpp:7970
// function calls: 2
void CStmnvntryRslt_Count(void* self)
{
	CUtlVectorBase<CSteamItemInstance::Count(); // 133
	CSteamInventoryResult::Count(); // 7973
} /* size: 30, inline expansions: 2 (5 bytes) */

// <012EA09F> engine2/interop.engine.cpp:7976
// function calls: 3
void CStmnvntryRslt_Get(void* self, int index)
{
	CUtlMemory<CSteamItemInstance::operator[](
			int i);  // 588
	CUtlVectorBase<CSteamItemInstance::operator[](
			int i);  // 138
	CSteamInventoryResult::Get(
		int index);  // 7979
} /* size: 16, inline expansions: 3 (13 bytes) */

// <012EA006> engine2/interop.engine.cpp:7982
// function call: 1
void CStmnvntryRslt_GetSerializedSize(void* self)
{
	CSteamInventoryResult::GetSerializedSize(); // 7985
} /* size: 78, inline expansions: 1 (20 bytes) */

// <012E9F35> engine2/interop.engine.cpp:7988
// function call: 1
void CStmnvntryRslt_Serialize(void* self, unsigned char* buffer, unsigned int bufferSize)
{
	CSteamInventoryResult::Serialize(
			uint8* pOutBuffer,
			uint32 unBufferSize);  // 7991
} /* size: 75, inline expansions: 1 (22 bytes) */

// <012E9ED7> engine2/interop.engine.cpp:7994
// function call: 1
void CStmtmnstnc_ItemId(void* self)
{
	CSteamItemInstance::ItemId(); // 7997
} /* size: 9, inline expansions: 1 (0 bytes) */

// <012E9E79> engine2/interop.engine.cpp:8000
// function call: 1
void CStmtmnstnc_DefinitionId(void* self)
{
	CSteamItemInstance::DefinitionId(); // 8003
} /* size: 8, inline expansions: 1 (0 bytes) */

// <013687C9> engine2/interop.engine.cpp:8006
// function calls: 2
void CTextureBase_DestroyStrongHandle(void* self)
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 8009
	CTextureBase_DestroyStrongHandle(void* self); // 8006
} /* size: 49, inline expansions: 2 (40 bytes) */

// <012E9E61> engine2/interop.engine.cpp:8006
void CTextureBase_DestroyStrongHandle(void* self)
{
} /* size: 0 */

// <012E9E03> engine2/interop.engine.cpp:8012
// function call: 1
void CTextureBase_IsStrongHandleValid(void* self)
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::HasData(); // 8015
} /* size: 24, inline expansions: 1 (19 bytes) */

// <012E9D4C> engine2/interop.engine.cpp:8024
// function call: 1
void CTextureBase_IsStrongHandleLoaded(void* self)
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::IsLoaded(); // 8027
} /* size: 41, inline expansions: 1 (28 bytes) */

// <012E9B69> engine2/interop.engine.cpp:8030
// function calls: 8
void CTextureBase_CopyStrongHandle(void* self)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 8033
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 8033
} /* size: 102, inline expansions: 8 (127 bytes) */

// <012E9B06> engine2/interop.engine.cpp:8036
// function call: 1
const void* CTextureBase_GetBindingPtr(void* self)
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 8039
} /* size: 8, inline expansions: 1 (0 bytes) */

// <012E9AAB> engine2/interop.engine.cpp:8042
void CUtlBuffer_Create(void)
{
} /* size: 46 */

// <012E9939> engine2/interop.engine.cpp:8048
// function calls: 6
void CUtlBuffer_Dispose(void* self)
{
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 8051
} /* size: 81, inline expansions: 6 (104 bytes) */

// <012E98A5> engine2/interop.engine.cpp:8054
// function calls: 2
const void* CUtlBuffer_Base(void* self)
{
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 8057
} /* size: 8, inline expansions: 2 (0 bytes) */

// <012E9847> engine2/interop.engine.cpp:8060
// function call: 1
void CUtlBuffer_TellMaxPut(void* self)
{
	CUtlBuffer::TellMaxPut(); // 8063
} /* size: 8, inline expansions: 1 (0 bytes) */

// <012E97CB> engine2/interop.engine.cpp:8066
void CUtlSymbolTable_AddString(void* self, const char* pString)
{
} /* size: 62 */

// <0135F0EE> engine2/interop.engine.cpp:8072
// variable: 1
// function calls: 15
void CtlVctrCtlStrng_DeleteThis(void* self)
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
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 8075
	CtlVctrCtlStrng_DeleteThis(void* self); // 8072
} /* size: 161, inline expansions: 11 (529 bytes) */

// <012E97B3> engine2/interop.engine.cpp:8072
void CtlVctrCtlStrng_DeleteThis(void* self)
{
} /* size: 0 */

// <012E95D0> engine2/interop.engine.cpp:8078
// function calls: 6
void CtlVctrCtlStrng_Create(int growsize, int initialcapacity)
{
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 8081
} /* size: 127, inline expansions: 6 (214 bytes) */

// <012E956C> engine2/interop.engine.cpp:8084
// function call: 1
void CtlVctrCtlStrng_Count(void* self)
{
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 8087
} /* size: 8, inline expansions: 1 (0 bytes) */

// <012E9507> engine2/interop.engine.cpp:8090
void CtlVctrCtlStrng_SetCount(void* self, int count)
{
} /* size: 9 */

// <012E93FE> engine2/interop.engine.cpp:8096
// function calls: 4
void CtlVctrCtlStrng_Element(void* self, int i)
{
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 8099
	CUtlString::Get(); // 99
	CUtlString::String(); // 8099
} /* size: 34, inline expansions: 4 (50 bytes) */

// <0135EDEE> engine2/interop.engine.cpp:8102
// function calls: 11
void CtlVctrflt_DeleteThis(void* self)
{
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 8105
	CtlVctrflt_DeleteThis(void* self); // 8102
} /* size: 97, inline expansions: 11 (241 bytes) */

// <012E93E6> engine2/interop.engine.cpp:8102
void CtlVctrflt_DeleteThis(void* self)
{
} /* size: 0 */

// <012E9203> engine2/interop.engine.cpp:8108
// function calls: 6
void CtlVctrflt_Create(int growsize, int initialcapacity)
{
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 8111
} /* size: 127, inline expansions: 6 (214 bytes) */

// <012E919F> engine2/interop.engine.cpp:8114
// function call: 1
void CtlVctrflt_Count(void* self)
{
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 8117
} /* size: 8, inline expansions: 1 (0 bytes) */

// <012E8E3F> engine2/interop.engine.cpp:8120
// function calls: 14
void CtlVctrflt_SetCount(void* self, int count)
{
	CUtlMemory<float, int>::NumAllocated(); // 782
	CUtlMemory<float, int>::IsGrowable(); // 823
	CUtlMemory<float, int>::IsExternallyAllocated(); // 859
	CUtlMemory<float, int>::IsExternallyAllocated(); // 861
	CUtlMemory<float, int>::Grow(
		int num);  // 806
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<float, CUtlMemory<float, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount(
		int count);  // 8123
} /* size: 286, inline expansions: 14 (1654 bytes) */

// <012E8DA0> engine2/interop.engine.cpp:8126
// function calls: 2
void CtlVctrflt_Element(void* self, int i)
{
	CUtlMemory<float, int>::operator[](
			int i);  // 602
	CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
		int i);  // 8129
} /* size: 17, inline expansions: 2 (6 bytes) */

// <0135EB9D> engine2/interop.engine.cpp:8132
// function calls: 11
void CtlVctrHRndrTxtr_DeleteThis(void* self)
{
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
	RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 1798
	Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 560
	ValidateAlignment<CWeakHandle<InfoForResourceTypeCTextureBase> >(void); // 508
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 510
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 410
	~CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 8135
	CtlVctrHRndrTxtr_DeleteThis(void* self); // 8132
} /* size: 97, inline expansions: 11 (241 bytes) */

// <012E8B70> engine2/interop.engine.cpp:8138
// function calls: 6
void CtlVctrHRndrTxtr_Create(int growsize, int initialcapacity)
{
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 530
	CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this,
			int growSize,
			int initCapacity);  // 8141
} /* size: 127, inline expansions: 6 (214 bytes) */

// <012E8B0C> engine2/interop.engine.cpp:8144
// function call: 1
void CtlVctrHRndrTxtr_Count(void* self)
{
	Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this); // 8147
} /* size: 8, inline expansions: 1 (0 bytes) */

// <012E89BA> engine2/interop.engine.cpp:8150
// function calls: 5
void CtlVctrHRndrTxtr_Element(void* self, int i)
{
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
		int i);  // 8153
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 8153
} /* size: 72, inline expansions: 5 (62 bytes) */

// <0135ABEE> engine2/interop.engine.cpp:8156
// function calls: 11
void CtlVctrMshTrctpt_DeleteThis(void* self)
{
	CUtlMemory<MeshTraceOutput, int>::IsExternallyAllocated(); // 905
	CUtlMemory<MeshTraceOutput, int>::Purge(); // 903
	CUtlMemory<MeshTraceOutput, int>::Purge(); // 1799
	CUtlVectorBase<MeshTraceOutput, CUtlMemory<MeshTraceOutput, int> >::RemoveAll(); // 1798
	CUtlVectorBase<MeshTraceOutput, CUtlMemory<MeshTraceOutput, int> >::Purge(); // 560
	ValidateAlignment<MeshTraceOutput>(void); // 508
	CUtlMemory<MeshTraceOutput, int>::Purge(); // 510
	CUtlMemory<MeshTraceOutput, int>::~CUtlMemory(); // 562
	CUtlVectorBase<MeshTraceOutput, CUtlMemory<MeshTraceOutput, int> >::~CUtlVectorBase(); // 410
	CUtlVector<MeshTraceOutput, CUtlMemory<MeshTraceOutput, int> >::~CUtlVector(); // 8159
	CtlVctrMshTrctpt_DeleteThis(void* self); // 8156
} /* size: 97, inline expansions: 11 (241 bytes) */

// <012E896D> engine2/interop.engine.cpp:8156
void CtlVctrMshTrctpt_DeleteThis(void* self)
{
} /* size: 0 */

// <012E8789> engine2/interop.engine.cpp:8162
// function calls: 6
void CtlVctrMshTrctpt_Create(int growsize, int initialcapacity)
{
	CUtlMemory<MeshTraceOutput, int>::ValidateGrowSize(); // 475
	CUtlMemory<MeshTraceOutput, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<MeshTraceOutput, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<MeshTraceOutput, CUtlMemory<MeshTraceOutput, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<MeshTraceOutput, CUtlMemory<MeshTraceOutput, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<MeshTraceOutput, CUtlMemory<MeshTraceOutput, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 8165
} /* size: 127, inline expansions: 6 (214 bytes) */

// <012E8725> engine2/interop.engine.cpp:8168
// function call: 1
void CtlVctrMshTrctpt_Count(void* self)
{
	CUtlVectorBase<MeshTraceOutput, CUtlMemory<MeshTraceOutput, int> >::Count(); // 8171
} /* size: 8, inline expansions: 1 (0 bytes) */

// <012E85C5> engine2/interop.engine.cpp:8174
// function calls: 4
void CtlVctrMshTrctpt_Element(void* self, int i)
{
	CUtlMemory<MeshTraceOutput, int>::operator[](
			int i);  // 602
	CUtlVectorBase<MeshTraceOutput, CUtlMemory<MeshTraceOutput, int> >::Element(
		int i);  // 8177
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 31
	MeshTraceOutput::MeshTraceOutput(
			const MeshTraceOutput  &);  // 8177
} /* size: 136, inline expansions: 4 (147 bytes) */

// <0135AE3F> engine2/interop.engine.cpp:8180
// function calls: 11
void CtlVctrPhyscsTrc_Result_DeleteThis(void* self)
{
	CUtlMemory<PhysicsTrace::Result, int>::IsExternallyAllocated(); // 905
	CUtlMemory<PhysicsTrace::Result, int>::Purge(); // 903
	CUtlMemory<PhysicsTrace::Result, int>::Purge(); // 1799
	CUtlVectorBase<PhysicsTrace::Result, CUtlMemory<PhysicsTrace::Result, int> >::RemoveAll(); // 1798
	CUtlVectorBase<PhysicsTrace::Result, CUtlMemory<PhysicsTrace::Result, int> >::Purge(); // 560
	ValidateAlignment<PhysicsTrace::Result>(void); // 508
	CUtlMemory<PhysicsTrace::Result, int>::Purge(); // 510
	CUtlMemory<PhysicsTrace::Result, int>::~CUtlMemory(); // 562
	CUtlVectorBase<PhysicsTrace::Result, CUtlMemory<PhysicsTrace::Result, int> >::~CUtlVectorBase(); // 410
	CUtlVector<PhysicsTrace::Result, CUtlMemory<PhysicsTrace::Result, int> >::~CUtlVector(); // 8183
	CtlVctrPhyscsTrc_Result_DeleteThis(void* self); // 8180
} /* size: 97, inline expansions: 11 (241 bytes) */

// <012E8578> engine2/interop.engine.cpp:8180
void CtlVctrPhyscsTrc_Result_DeleteThis(void* self)
{
} /* size: 0 */

// <012E8394> engine2/interop.engine.cpp:8186
// function calls: 6
void CtlVctrPhyscsTrc_Result_Create(int growsize, int initialcapacity)
{
	CUtlMemory<PhysicsTrace::Result, int>::ValidateGrowSize(); // 475
	CUtlMemory<PhysicsTrace::Result, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<PhysicsTrace::Result, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<PhysicsTrace::Result, CUtlMemory<PhysicsTrace::Result, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<PhysicsTrace::Result, CUtlMemory<PhysicsTrace::Result, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<PhysicsTrace::Result, CUtlMemory<PhysicsTrace::Result, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 8189
} /* size: 130, inline expansions: 6 (226 bytes) */

// <012E8330> engine2/interop.engine.cpp:8192
// function call: 1
void CtlVctrPhyscsTrc_Result_Count(void* self)
{
	CUtlVectorBase<PhysicsTrace::Result, CUtlMemory<PhysicsTrace::Result, int> >::Count(); // 8195
} /* size: 8, inline expansions: 1 (0 bytes) */

// <012E824E> engine2/interop.engine.cpp:8198
// function calls: 2
void CtlVctrPhyscsTrc_Result_Element(void* self, int i)
{
	CUtlMemory<PhysicsTrace::Result, int>::operator[](
			int i);  // 602
	CUtlVectorBase<PhysicsTrace::Result, CUtlMemory<PhysicsTrace::Result, int> >::Element(
		int i);  // 8201
} /* size: 37, inline expansions: 2 (6 bytes) */

// <0135F81B> engine2/interop.engine.cpp:8204
// function calls: 11
void CtlVctrnt32_DeleteThis(void* self)
{
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 8207
	CtlVctrnt32_DeleteThis(void* self); // 8204
} /* size: 97, inline expansions: 11 (241 bytes) */

// <012E8236> engine2/interop.engine.cpp:8204
void CtlVctrnt32_DeleteThis(void* self)
{
} /* size: 0 */

// <012E8053> engine2/interop.engine.cpp:8210
// function calls: 6
void CtlVctrnt32_Create(int growsize, int initialcapacity)
{
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 8213
} /* size: 127, inline expansions: 6 (214 bytes) */

// <012E7FEF> engine2/interop.engine.cpp:8216
// function call: 1
void CtlVctrnt32_Count(void* self)
{
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 8219
} /* size: 8, inline expansions: 1 (0 bytes) */

// <012E7D70> engine2/interop.engine.cpp:8222
// function calls: 10
void CtlVctrnt32_SetCount(void* self, int count)
{
	CUtlMemory<unsigned int, int>::NumAllocated(); // 782
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount(
		int count);  // 8225
} /* size: 84, inline expansions: 10 (325 bytes) */

// <012E7CD1> engine2/interop.engine.cpp:8228
// function calls: 2
void CtlVctrnt32_Element(void* self, int i)
{
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 8231
} /* size: 15, inline expansions: 2 (6 bytes) */

// <0135F5CA> engine2/interop.engine.cpp:8234
// function calls: 11
void CtlVctrVctr_DeleteThis(void* self)
{
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 8237
	CtlVctrVctr_DeleteThis(void* self); // 8234
} /* size: 97, inline expansions: 11 (241 bytes) */

// <012E7CB9> engine2/interop.engine.cpp:8234
void CtlVctrVctr_DeleteThis(void* self)
{
} /* size: 0 */

// <012E7AD7> engine2/interop.engine.cpp:8240
// function calls: 6
void CtlVctrVctr_Create(int growsize, int initialcapacity)
{
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 8243
} /* size: 128, inline expansions: 6 (218 bytes) */

// <012E7A73> engine2/interop.engine.cpp:8246
// function call: 1
void CtlVctrVctr_Count(void* self)
{
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 8249
} /* size: 8, inline expansions: 1 (0 bytes) */

// <012E77E1> engine2/interop.engine.cpp:8252
// variable: 1
// function calls: 10
void CtlVctrVctr_SetCount(void* self, int count)
{
	CUtlMemory<Vector, int>::NumAllocated(); // 782
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount(
		int count);  // 8255
} /* size: 84, inline expansions: 10 (316 bytes) */

// <012E7741> engine2/interop.engine.cpp:8258
// function calls: 2
void CtlVctrVctr_Element(void* self, int i)
{
	CUtlMemory<Vector, int>::operator[](
			int i);  // 602
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
		int i);  // 8261
} /* size: 40, inline expansions: 2 (6 bytes) */

// <0136AD23> engine2/interop.engine.cpp:8264
// function calls: 2
void CVfx_DestroyStrongHandle(void* self)
{
	CStrongHandle<InfoForResourceTypeCVfx>::~CStrongHandle(); // 8267
	CVfx_DestroyStrongHandle(void* self); // 8264
} /* size: 49, inline expansions: 2 (40 bytes) */

// <012E76CB> engine2/interop.engine.cpp:8270
// function call: 1
void CVfx_IsStrongHandleValid(void* self)
{
	CStrongHandle<InfoForResourceTypeCVfx>::HasData(); // 8273
} /* size: 24, inline expansions: 1 (19 bytes) */

// <012E766D> engine2/interop.engine.cpp:8276
// function call: 1
void CVfx_IsError(void* self)
{
	CStrongHandle<InfoForResourceTypeCVfx>::IsError(); // 8279
} /* size: 24, inline expansions: 1 (16 bytes) */

// <012E7614> engine2/interop.engine.cpp:8282
// function call: 1
void CVfx_IsStrongHandleLoaded(void* self)
{
	CStrongHandle<InfoForResourceTypeCVfx>::IsLoaded(); // 8285
} /* size: 41, inline expansions: 1 (28 bytes) */

// <012E7431> engine2/interop.engine.cpp:8288
// function calls: 8
void CVfx_CopyStrongHandle(void* self)
{
	CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCVfx>::GetHandle(); // 8291
	CWeakHandle<InfoForResourceTypeCVfx>::GetBinding(); // 476
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCVfx>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCVfx>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCVfx>& src);  // 8291
} /* size: 102, inline expansions: 8 (127 bytes) */

// <012E73CE> engine2/interop.engine.cpp:8294
// function call: 1
const void* CVfx_GetBindingPtr(void* self)
{
	CStrongHandle<InfoForResourceTypeCVfx>::GetBinding(); // 8297
} /* size: 8, inline expansions: 1 (0 bytes) */

// <012E6F40> engine2/interop.engine.cpp:8300
// variables: 4
// function calls: 14
void CVfx_Create(const char* __debugName)
{
	const char* debugName; // 8304
	CVfx* ptr; // 8307
	CResourceName name; // 8308
	HShader t; // 8309
	CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCVfx>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCVfx>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 695
	IResourceSystem::FindOrCreateProceduralResource<125779801368691>(
							const CResourceName& resourceName,
							void* pResourceData,
							ProceduralResourceType_t type);  // 8309
	CStrongHandle<InfoForResourceTypeCVfx>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CWeakHandle<InfoForResourceTypeCVfx>::GetBinding(); // 223
	CStrongHandleCopyable<InfoForResourceTypeCVfx>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCVfx>& src);  // 8310
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 8313
} /* size: 256, variables: 4, inline expansions: 14 (164 bytes) */

// <012E6DA3> engine2/interop.engine.cpp:8314
// variables: 2
// function calls: 6
void CVfx_GetFilename(void* self)
{
	HShaderStrong* __handle; // 8317
	CVfx* __self; // 8319
	CStrongHandle<InfoForResourceTypeCVfx>::HasData(); // 8318
	CBufferString::IsEmpty(); // 1280
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1280
	CVfx::GetFilename(); // 8321
} /* size: 83, variables: 2, inline expansions: 6 (141 bytes) */

// <012E6C96> engine2/interop.engine.cpp:8324
// variables: 2
// function call: 1
void CVfx_CreateFromResourceFile(void* self, const char* pShaderFile, int64 compileTarget, unsigned int nCreateFlags, int bFailSilently)
{
	HShaderStrong* __handle; // 8327
	CVfx* __self; // 8329
	CStrongHandle<InfoForResourceTypeCVfx>::HasData(); // 8328
} /* size: 67, variables: 2, inline expansions: 1 (16 bytes) */

// <012E6BAD> engine2/interop.engine.cpp:8334
// variables: 2
// function call: 1
void CVfx_CreateFromShaderFile(void* self, const char* pShaderFile, int64 compileTarget, unsigned int nCreateFlags)
{
	HShaderStrong* __handle; // 8337
	CVfx* __self; // 8339
	CStrongHandle<InfoForResourceTypeCVfx>::HasData(); // 8338
} /* size: 59, variables: 2, inline expansions: 1 (16 bytes) */

// <012E6AEE> engine2/interop.engine.cpp:8344
// variables: 3
// function call: 1
void CVfx_GetProgramData(void* __self, int64 __pass)
{
	CVfx* self; // 8356
	VfxProgram_t pass; // 8357
	{
		HShaderStrong* __handle; // 8349
		CStrongHandle<InfoForResourceTypeCVfx>::HasData(); // 8350
	}
} /* size: 51, variables: 2 */

// <012E610D> engine2/interop.engine.cpp:8364
// variables: 8
// function calls: 37
void CVfx_GetIterator(void* __self, int64 __program)
{
	CVfx* self; // 8376
	VfxProgram_t program; // 8377
	{
		HShaderStrong* __handle; // 8369
		CStrongHandle<InfoForResourceTypeCVfx>::HasData(); // 8370
	}
	CUtlMemory<CVfxRule, int>::ValidateGrowSize(); // 475
	CUtlMemory<CVfxRule, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxRule, CUtlMemory<CVfxRule, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxRule, CUtlMemory<CVfxRule, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >::CUtlVector(); // 1369
	CUtlMemory<CVfxRule, int>::ValidateGrowSize(); // 475
	CUtlMemory<CVfxRule, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxRule, CUtlMemory<CVfxRule, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxRule, CUtlMemory<CVfxRule, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >::CUtlVector(); // 1369
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::CUtlLeanVectorImpl(); // 799
	CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>::CUtlLeanVectorFixedGrowable(); // 1369
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::CUtlLeanVectorImpl(); // 799
	CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>::CUtlLeanVectorFixedGrowable(); // 1369
	CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 1374
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 169
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 91
		UtlTraitsMoveRawMemoryRange<unsigned char>(unsigned char* pFrom,
								unsigned char* pFromEnd,
								unsigned char* pTo);  // 170
	}
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::SetCount(
		int nCount);  // 1374
	{
		int* _pCrash; // 109
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 109
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 169
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 91
		UtlTraitsMoveRawMemoryRange<unsigned char>(unsigned char* pFrom,
								unsigned char* pFromEnd,
								unsigned char* pTo);  // 170
	}
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::SetCount(
		int nCount);  // 1375
	CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 1375
	CVfxComboIterator::CVfxComboIterator(
				CVfx* pVfx,
				VfxProgram_t programType);  // 8380
} /* size: 970, variables: 2, inline expansions: 24 (2241 bytes) */

// <012E606D> engine2/interop.engine.cpp:8384
// variables: 2
// function call: 1
void CVfx_Serialize(void* self)
{
	HShaderStrong* __handle; // 8387
	CVfx* __self; // 8389
	CStrongHandle<InfoForResourceTypeCVfx>::HasData(); // 8388
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <012E5F9A> engine2/interop.engine.cpp:8394
// variables: 2
// function calls: 2
void CVfx_HasShaderProgram(void* self, int64 programType)
{
	HShaderStrong* __handle; // 8397
	CVfx* __self; // 8399
	CStrongHandle<InfoForResourceTypeCVfx>::HasData(); // 8398
	CVfx::HasShaderProgram(
			VfxProgram_t programType);  // 8401
} /* size: 51, variables: 2, inline expansions: 2 (19 bytes) */

// <012E5F06> engine2/interop.engine.cpp:8404
// variables: 2
// function call: 1
void CVfx_InitializeWrite(void* self)
{
	HShaderStrong* __handle; // 8407
	CVfx* __self; // 8409
	CStrongHandle<InfoForResourceTypeCVfx>::HasData(); // 8408
} /* size: 59, variables: 2, inline expansions: 1 (16 bytes) */

// <012E5D89> engine2/interop.engine.cpp:8424
// variables: 2
// function call: 1
void CVfx_WriteProgramToBuffer(void* self, int64 programType, CVfxByteCodeManager* byteCodeManager, CUtlBuffer* outBuffer)
{
	HShaderStrong* __handle; // 8427
	CVfx* __self; // 8429
	CStrongHandle<InfoForResourceTypeCVfx>::HasData(); // 8428
} /* size: 59, variables: 2, inline expansions: 1 (16 bytes) */

// <012E5C84> engine2/interop.engine.cpp:8434
// variables: 2
// function call: 1
void CVfx_WriteCombo(void* self, int64 programType, uint64 staticId, uint64 dynamicId, VfxCompiledShaderInfo_t* shaderInfo)
{
	HShaderStrong* __handle; // 8437
	CVfx* __self; // 8439
	CStrongHandle<InfoForResourceTypeCVfx>::HasData(); // 8438
} /* size: 59, variables: 2, inline expansions: 1 (16 bytes) */

// <012E5BD6> engine2/interop.engine.cpp:8444
// variables: 2
// function call: 1
void CVfx_GetPropertiesJson(void* self)
{
	HShaderStrong* __handle; // 8447
	CVfx* __self; // 8449
	CStrongHandle<InfoForResourceTypeCVfx>::HasData(); // 8448
} /* size: 51, variables: 2, inline expansions: 1 (16 bytes) */

// <012E5B8A> engine2/interop.engine.cpp:8454
void CVfxBytCdMngr_Create(void)
{
} /* size: 40 */

// <01358F3E> engine2/interop.engine.cpp:8460
// function call: 1
void CVfxBytCdMngr_Delete(void* self)
{
	CVfxBytCdMngr_Delete(void* self); // 8460
} /* size: 49, inline expansions: 1 (31 bytes) */

// <012E5B72> engine2/interop.engine.cpp:8460
void CVfxBytCdMngr_Delete(void* self)
{
} /* size: 0 */

// <012E5AA9> engine2/interop.engine.cpp:8472
void CVfxBytCdMngr_OnDynamicCombo(void* self, VfxCompiledShaderInfo_t* data)
{
} /* size: 9 */

// <012E5A60> engine2/interop.engine.cpp:8478
void CVfxBytCdMngr_Reset(void* self)
{
} /* size: 9 */

// <012E5A02> engine2/interop.engine.cpp:8484
// variable: 1
void CVfxCombo_GetName(void* __self)
{
	CVfxCombo* self; // 8488
} /* size: 9, variables: 1 */

// <012E59A2> engine2/interop.engine.cpp:8495
// variable: 1
void CVfxCombo_GetGroup(void* __self)
{
	CVfxCombo* self; // 8499
} /* size: 13, variables: 1 */

// <012E5975> engine2/interop.engine.cpp:8506
void _Get__CVfxCombo_m_nMin(void* self)
{
} /* size: 12 */

// <012E5939> engine2/interop.engine.cpp:8510
void _Set__CVfxCombo_m_nMin(void* self, unsigned char value)
{
} /* size: 12 */

// <012E590C> engine2/interop.engine.cpp:8514
void _Get__CVfxCombo_m_nMax(void* self)
{
} /* size: 12 */

// <012E58D0> engine2/interop.engine.cpp:8518
void _Set__CVfxCombo_m_nMax(void* self, unsigned char value)
{
} /* size: 12 */

// <0135BD13> engine2/interop.engine.cpp:8522
// variables: 2
// function calls: 36
void CVfxCmbtrtr_Delete(void* self)
{
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::~CUtlLeanVectorImpl(); // 796
	CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>::~CUtlLeanVectorFixedGrowable(); // 1384
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::~CUtlLeanVectorImpl(); // 796
	CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>::~CUtlLeanVectorFixedGrowable(); // 1384
	{
		int i; // 1721
	}
	CUtlVectorBase<CVfxRule, CUtlMemory<CVfxRule, int> >::RemoveAll(); // 1798
	CUtlMemory<CVfxRule, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CVfxRule, int>::Purge(); // 903
	CUtlMemory<CVfxRule, int>::Purge(); // 1799
	CUtlVectorBase<CVfxRule, CUtlMemory<CVfxRule, int> >::Purge(); // 560
	ValidateAlignment<CVfxRule>(void); // 508
	CUtlMemory<CVfxRule, int>::Purge(); // 510
	CUtlMemory<CVfxRule, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CVfxRule, CUtlMemory<CVfxRule, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >::~CUtlVector(); // 1384
	{
		int i; // 1721
	}
	CUtlVectorBase<CVfxRule, CUtlMemory<CVfxRule, int> >::RemoveAll(); // 1798
	CUtlMemory<CVfxRule, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CVfxRule, int>::Purge(); // 903
	CUtlMemory<CVfxRule, int>::Purge(); // 1799
	CUtlVectorBase<CVfxRule, CUtlMemory<CVfxRule, int> >::Purge(); // 560
	ValidateAlignment<CVfxRule>(void); // 508
	CUtlMemory<CVfxRule, int>::Purge(); // 510
	CUtlMemory<CVfxRule, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CVfxRule, CUtlMemory<CVfxRule, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >::~CUtlVector(); // 1384
	CVfxComboIterator::~CVfxComboIterator(); // 8525
	CVfxCmbtrtr_Delete(void* self); // 8522
} /* size: 198, inline expansions: 36 (928 bytes) */

// <012E58B8> engine2/interop.engine.cpp:8522
void CVfxCmbtrtr_Delete(void* self)
{
} /* size: 0 */

// <012E588B> engine2/interop.engine.cpp:8528
void CVfxCmbtrtr_InvalidIndex(void* self)
{
} /* size: 12 */

// <012E5161> engine2/interop.engine.cpp:8534
// variables: 4
// function calls: 35
void CVfxCmbtrtr_SetStaticCombo(void* self, uint64 c)
{
	{
		int i; // 1541
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 1541
		{
			const CVfxCombo& combo; // 1543
			AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
				int i);  // 438
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
					int i);  // 1544
			CVfxCombo::GetCount(); // 473
			CVfxCombo::RemoveValueFromComboId(
						uint64 nComboId,
						VfxComboValue_t* pValue);  // 1544
			CUtlMemory<CVfxCombo, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
					int i);  // 1543
		}
	}
	{
		int i; // 1657
		Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int> this); // 1657
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 1659
		CUtlMemory<CVfxCombo, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
				int i);  // 1659
	}
	CVfxComboIterator::FirstDynamicCombo(); // 1548
	{
		int i; // 1612
		Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int> this); // 1612
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 1614
		CUtlMemory<CVfxCombo, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
				int i);  // 1614
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 1623
	}
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int> this); // 1644
	CVfxComboIterator::NextStaticCombo(); // 1559
	CVfxComboIterator::SetStaticCombo(
			uint64 nStaticComboId);  // 8537
} /* size: 583, inline expansions: 4 (936 bytes) */

// <012E4DB8> engine2/interop.engine.cpp:8540
// variables: 2
// function calls: 17
void CVfxCmbtrtr_FirstStaticCombo(void* self)
{
	{
		int i; // 1596
		Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int> this); // 1596
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 1598
		CUtlMemory<CVfxCombo, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
				int i);  // 1598
	}
	{
		int i; // 1601
		Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int> this); // 1601
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 1603
		CUtlMemory<CVfxCombo, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
				int i);  // 1603
	}
	CVfxComboIterator::FirstStaticCombo(); // 8543
} /* size: 211, inline expansions: 1 (204 bytes) */

// <012E4AC7> engine2/interop.engine.cpp:8546
// variable: 1
// function calls: 15
void CVfxCmbtrtr_NextStaticCombo(void* self)
{
	{
		int i; // 1612
		Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int> this); // 1612
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 1614
		CUtlMemory<CVfxCombo, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
				int i);  // 1614
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 1623
	}
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int> this); // 1644
	CVfxComboIterator::NextStaticCombo(); // 8549
} /* size: 307, inline expansions: 2 (277 bytes) */

// <012E4569> engine2/interop.engine.cpp:8552
// variables: 3
// function calls: 26
void CVfxCmbtrtr_SetDynamicCombo(void* self, uint64 c)
{
	{
		int i; // 1569
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 1569
		{
			const CVfxCombo& combo; // 1571
			AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
				int i);  // 438
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
					int i);  // 1572
			CVfxCombo::GetCount(); // 473
			CVfxCombo::RemoveValueFromComboId(
						uint64 nComboId,
						VfxComboValue_t* pValue);  // 1572
			CUtlMemory<CVfxCombo, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
					int i);  // 1571
		}
	}
	{
		int i; // 1668
		Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int> this); // 1668
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 1670
		CUtlMemory<CVfxCombo, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
				int i);  // 1670
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 1680
	}
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int> this); // 1702
	CVfxComboIterator::NextDynamicCombo(); // 1584
	CVfxComboIterator::SetDynamicCombo(
			uint64 nDynamicComboId);  // 8555
} /* size: 504, inline expansions: 3 (747 bytes) */

// <012E436E> engine2/interop.engine.cpp:8558
// variable: 1
// function calls: 9
void CVfxCmbtrtr_FirstDynamicCombo(void* self)
{
	{
		int i; // 1657
		Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int> this); // 1657
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 1659
		CUtlMemory<CVfxCombo, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
				int i);  // 1659
	}
	CVfxComboIterator::FirstDynamicCombo(); // 8561
} /* size: 115, inline expansions: 1 (108 bytes) */

// <012E407A> engine2/interop.engine.cpp:8564
// variable: 1
// function calls: 15
void CVfxCmbtrtr_NextDynamicCombo(void* self)
{
	{
		int i; // 1668
		Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int> this); // 1668
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 1670
		CUtlMemory<CVfxCombo, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
				int i);  // 1670
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 1680
	}
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int> this); // 1702
	CVfxComboIterator::NextDynamicCombo(); // 8567
} /* size: 315, inline expansions: 2 (270 bytes) */

// <012E404D> engine2/interop.engine.cpp:8570
void _Get__CVfxProgramData_m_bLoadedFromVcsFile(void* self)
{
} /* size: 8 */

// <012E4011> engine2/interop.engine.cpp:8574
void _Set__CVfxProgramData_m_bLoadedFromVcsFile(void* self, int value)
{
} /* size: 10 */

// <012E3FAA> engine2/interop.engine.cpp:8578
void CVideoPlayer_Create(uint managedObject)
{
} /* size: 49 */

// <012E3F5F> engine2/interop.engine.cpp:8584
void CVideoPlayer_Destroy(void* self)
{
} /* size: 17 */

// <012E3EE2> engine2/interop.engine.cpp:8590
void CVideoPlayer_Play(void* self, const char* pUrl, const char* pExt)
{
} /* size: 19 */

// <012E3E9D> engine2/interop.engine.cpp:8596
void CVideoPlayer_Resume(void* self)
{
} /* size: 10 */

// <012E3E58> engine2/interop.engine.cpp:8602
void CVideoPlayer_Stop(void* self)
{
} /* size: 10 */

// <012E3E13> engine2/interop.engine.cpp:8608
void CVideoPlayer_Pause(void* self)
{
} /* size: 10 */

// <012E3DB0> engine2/interop.engine.cpp:8614
void CVideoPlayer_Seek(void* self, double time)
{
} /* size: 10 */

// <012E3D6B> engine2/interop.engine.cpp:8620
void CVideoPlayer_GetRepeat(void* self)
{
} /* size: 19 */

// <012E3D02> engine2/interop.engine.cpp:8626
void CVideoPlayer_SetRepeat(void* self, int bRepeat)
{
} /* size: 20 */

// <012E3C78> engine2/interop.engine.cpp:8638
void CVideoPlayer_GetPlaybackTime(void* self)
{
} /* size: 10 */

// <012E3C33> engine2/interop.engine.cpp:8644
void CVideoPlayer_HasAudioStream(void* self)
{
} /* size: 22 */

// <012E3BEE> engine2/interop.engine.cpp:8650
void CVideoPlayer_Update(void* self)
{
} /* size: 10 */

// <012E3BA9> engine2/interop.engine.cpp:8656
void CVideoPlayer_IsPaused(void* self)
{
} /* size: 19 */

// <012E3B64> engine2/interop.engine.cpp:8662
void CVideoPlayer_IsMuted(void* self)
{
} /* size: 19 */

// <012E3AFB> engine2/interop.engine.cpp:8668
void CVideoPlayer_SetMuted(void* self, int bMuted)
{
} /* size: 20 */

// <012E3AB6> engine2/interop.engine.cpp:8674
void CVideoPlayer_GetWidth(void* self)
{
} /* size: 13 */

// <012E3A71> engine2/interop.engine.cpp:8680
void CVideoPlayer_GetHeight(void* self)
{
} /* size: 13 */

// <012E39B9> engine2/interop.engine.cpp:8692
void CVideoPlayer_GetMetadata(void* self, const char* key)
{
} /* size: 26 */

// <012E3958> engine2/interop.engine.cpp:8698
void CVideoPlayer_GetSpectrum(void* self, CUtlVector<float, CUtlMemory<float, int> >* outSpectrum)
{
} /* size: 13 */

// <012E3721> engine2/interop.engine.cpp:8710
// function calls: 8
void CVideoPlayer_GetTexture(void* self)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 32
	CVideoPlayerProvider::GetTexture(); // 54
	CVideoPlayer::GetTexture(); // 8713
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 8713
} /* size: 59, inline expansions: 8 (50 bytes) */

// <012E363B> engine2/interop.engine.cpp:8716
// function calls: 4
void CVideoPlayer_GetAudioStream(void* self)
{
	CVideoPlayer::GetAudioStream(); // 8719
	CAudioStreamManaged::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CAudioStreamManaged*>(CAudioStreamManaged* c); // 8719
} /* size: 64, inline expansions: 4 (60 bytes) */

// <012E2D4A> engine2/interop.engine.cpp:8722
// function calls: 30
void CVideoRecorder_Create(void)
{
	IVideoRecorder::IVideoRecorder(); // 15
	AudioSampleData::AudioSampleData(); // 15
	CUtlMemory<CVideoRecorder::VideoFrameData::ValidateGrowSize(); // 475
	CUtlMemory<CVideoRecorder::VideoFrameData::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVideoRecorder::VideoFrameData::ResetDbgInfo(); // 530
	CUtlVectorBase<CVideoRecorder::VideoFrameData::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVideoRecorder::VideoFrameData::CUtlVector(); // 15
	CUtlMemory<CVideoRecorder::AudioSampleData::ValidateGrowSize(); // 475
	CUtlMemory<CVideoRecorder::AudioSampleData::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVideoRecorder::AudioSampleData::ResetDbgInfo(); // 530
	CUtlVectorBase<CVideoRecorder::AudioSampleData::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVideoRecorder::AudioSampleData::CUtlVector(); // 15
	CUtlMemory<CVideoRecorder::VideoFrameData::ValidateGrowSize(); // 475
	CUtlMemory<CVideoRecorder::VideoFrameData::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVideoRecorder::VideoFrameData::ResetDbgInfo(); // 530
	CUtlVectorBase<CVideoRecorder::VideoFrameData::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVideoRecorder::VideoFrameData::CUtlVector(); // 15
	CUtlMemory<CVideoRecorder::AudioSampleData::ValidateGrowSize(); // 475
	CUtlMemory<CVideoRecorder::AudioSampleData::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVideoRecorder::AudioSampleData::ResetDbgInfo(); // 530
	CUtlVectorBase<CVideoRecorder::AudioSampleData::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVideoRecorder::AudioSampleData::CUtlVector(); // 15
	CThreadMutex::CThreadMutex(
			const char* pName);  // 15
	CThreadMutex::CThreadMutex(
			const char* pName);  // 15
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 15
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 15
	CThreadMutex::CThreadMutex(
			const char* pName);  // 15
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 15
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 15
	CVideoRecorder::CVideoRecorder(); // 8725
} /* size: 927, inline expansions: 30 (1676 bytes) */

// <012E2CFF> engine2/interop.engine.cpp:8728
void CVideoRecorder_Destroy(void* self)
{
} /* size: 17 */

// <012E2BDC> engine2/interop.engine.cpp:8746
void CVideoRecorder_AddAudioSamples(void* self, CAudioMixDeviceBuffers* none)
{
} /* size: 10 */

// <012E2A7D> engine2/interop.engine.cpp:8752
void CVideoRecorder_Initialize(void* self, const char* filename, int width, int height, int fps, int bitRateMb, int audioSampleRate, int audioChannels, const char* videoCodec, const char* container, int encodingPreset, const char* audioCodec, int transparency)
{
} /* size: 66 */

// <01358FC9> engine2/interop.engine.cpp:8758
// function call: 1
void DspInstance_Dispose(void* self)
{
	DspInstance_Dispose(void* self); // 8758
} /* size: 49, inline expansions: 1 (31 bytes) */

// <012E2A65> engine2/interop.engine.cpp:8758
void DspInstance_Dispose(void* self)
{
} /* size: 0 */

// <012E29C8> engine2/interop.engine.cpp:8764
void DspInstance_ProcessChannel(void* self, CAudioMixBuffer* pOutput, CAudioMixBuffer* input, int nChannelIndex)
{
} /* size: 9 */

// <012E2962> engine2/interop.engine.cpp:8770
void DspPreset_Create(const char* name)
{
} /* size: 51 */

// <01359054> engine2/interop.engine.cpp:8776
// function call: 1
void DspPreset_Dispose(void* self)
{
	DspPreset_Dispose(void* self); // 8776
} /* size: 49, inline expansions: 1 (31 bytes) */

// <012E2944> engine2/interop.engine.cpp:8776
void DspPreset_Dispose(void* self)
{
} /* size: 0 */

// <012E28A7> engine2/interop.engine.cpp:8782
void DspPreset_AddProcessor(void* self, int nType, float* prms, unsigned int prmsCount)
{
} /* size: 9 */

// <012E285E> engine2/interop.engine.cpp:8788
void DspPreset_FinishBuilding(void* self)
{
} /* size: 9 */

// <012E27F9> engine2/interop.engine.cpp:8794
void DspPreset_Instantiate(void* self, int channels)
{
} /* size: 9 */

// <012E27AA> engine2/interop.engine.cpp:8800
void EngineGlue_JsonToKeyValues3(const char* json)
{
} /* size: 9 */

// <012E2750> engine2/interop.engine.cpp:8806
void EngineGlue_KeyValuesToJson(const char* kv)
{
} /* size: 22 */

// <012E26F6> engine2/interop.engine.cpp:8812
void EngineGlue_KeyValues3ToJson(KeyValues3* kv)
{
} /* size: 22 */

// <012E26AD> engine2/interop.engine.cpp:8818
void EngineGlue_LoadKeyValues3(const char* kvString)
{
} /* size: 9 */

// <012E2609> engine2/interop.engine.cpp:8830
void EngineGlue_GetStringTokenValue(unsigned int token)
{
} /* size: 22 */

// <012E2580> engine2/interop.engine.cpp:8836
void EngineGlue_AddSearchPath(const char* path, const char* groupid, int head)
{
} /* size: 17 */

// <012E251B> engine2/interop.engine.cpp:8842
void EngineGlue_RemoveSearchPath(const char* path, const char* groupid)
{
} /* size: 18 */

// <012E24EF> engine2/interop.engine.cpp:8848
void EngineGlue_ApproximateProcessMemoryUsage(void)
{
} /* size: 9 */

// <012E2494> engine2/interop.engine.cpp:8854
void EngineGlue_ReadCompiledResourceFileJson(void* data)
{
} /* size: 22 */

// <012E23A9> engine2/interop.engine.cpp:8860
// variables: 5
const void* EngineGlue_ReadCompiledResourceFileBlock(const char* __blockName, void* __pHeader, int* __nSize)
{
	const char* blockName; // 8864
	ResourceFileHeader_t* pHeader; // 8865
	int nSize; // 8866
	unsigned int blockId; // 8869
	ResourceHeaderBlockInfo_t info; // 8870
} /* size: 105, variables: 5 */

// <012E234E> engine2/interop.engine.cpp:8878
void EngineGlue_ReadCompiledResourceFileJsonFromFilesystem(const char* filename)
{
} /* size: 22 */

// <012E22FD> engine2/interop.engine.cpp:8884
void EngineGlue_SetEngineLoggingVerbose(int verbose)
{
} /* size: 19 */

// <012E22D1> engine2/interop.engine.cpp:8890
void EngineGlue_RequestWebAuthTicket(void)
{
} /* size: 9 */

// <012E22A5> engine2/interop.engine.cpp:8896
void EngineGlue_CancelWebAuthTicket(void)
{
} /* size: 9 */

// <012E226B> engine2/interop.engine.cpp:8902
void EngineGlue_GetWebAuthTicket(void)
{
} /* size: 22 */

// <012E223F> engine2/interop.engine.cpp:8908
void ErrorReports_Init(void)
{
} /* size: 9 */

// <012E21DA> engine2/interop.engine.cpp:8914
void ErrorReports_SetTag(const char* key, const char* value)
{
} /* size: 9 */

// <012E2151> engine2/interop.engine.cpp:8920
void ErrorReports_Breadcrumb(int action, const char* category, const char* description)
{
} /* size: 19 */

// <012E2125> engine2/interop.engine.cpp:8926
void ErrorReports_Shutdown(void)
{
} /* size: 9 */

// <012E1F80> engine2/interop.engine.cpp:8932
// function calls: 7
void FloatBitMap_t_Create(void)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 901
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 900
	CSOAContainer::Init(); // 1482
	CSOAContainer::CSOAContainer(); // 461
	FloatBitMap_t::FloatBitMap_t(); // 8935
} /* size: 272, inline expansions: 7 (1124 bytes) */

// <012E1EF3> engine2/interop.engine.cpp:8938
void FloatBitMap_t_Create_1(int width, int height)
{
} /* size: 71 */

// <01359435> engine2/interop.engine.cpp:8944
// function calls: 2
void FloatBitMap_t_Delete(void* self)
{
	FloatBitMap_t::~FloatBitMap_t(); // 8947
	FloatBitMap_t_Delete(void* self); // 8944
} /* size: 49, inline expansions: 2 (40 bytes) */

// <012E1EDB> engine2/interop.engine.cpp:8944
void FloatBitMap_t_Delete(void* self)
{
} /* size: 0 */

// <012E1E5A> engine2/interop.engine.cpp:8950
void FloatBitMap_t_LoadFromFile(void* self, const char* filename, int64 gamma)
{
} /* size: 18 */

// <012E1DF5> engine2/interop.engine.cpp:8956
void FloatBitMap_t_LoadFromPFM(void* self, const char* pFilename)
{
} /* size: 18 */

// <012E1D74> engine2/interop.engine.cpp:8962
void FloatBitMap_t_LoadFromPSD(void* self, const char* pFilename, int64 ldrFileGammaType)
{
} /* size: 18 */

// <012E1CF3> engine2/interop.engine.cpp:8968
void FloatBitMap_t_LoadFromTIF(void* self, const char* pFilename, int64 ldrFileGammaType)
{
} /* size: 18 */

// <012E1C72> engine2/interop.engine.cpp:8974
void FloatBitMap_t_LoadFromPNG(void* self, const char* pFilename, int64 ldrFileGammaType)
{
} /* size: 18 */

// <012E1B8C> engine2/interop.engine.cpp:8986
void FloatBitMap_t_LoadFromEXR(void* self, const char* pFilename)
{
} /* size: 18 */

// <012E1ACD> engine2/interop.engine.cpp:8992
void FloatBitMap_t_LoadFromBuffer(void* self, void* data, int size, int64 format, int64 gamma)
{
} /* size: 12 */

// <012E1A2B> engine2/interop.engine.cpp:8998
void FloatBitMap_t_Init(void* self, int nWidth, int nHeight, int depth)
{
} /* size: 15 */

// <012E19E2> engine2/interop.engine.cpp:9004
void FloatBitMap_t_Shutdown(void* self)
{
} /* size: 9 */

// <012E195F> engine2/interop.engine.cpp:9010
void FloatBitMap_t_SetChannel(void* self, int nComponent, float flValue)
{
} /* size: 9 */

// <012E18CD> engine2/interop.engine.cpp:9022
void FloatBitMap_t_Rotate90DegreesCCW(void* self)
{
} /* size: 9 */

// <012E1884> engine2/interop.engine.cpp:9028
void FloatBitMap_t_Rotate180Degrees(void* self)
{
} /* size: 9 */

// <012E183B> engine2/interop.engine.cpp:9034
void FloatBitMap_t_MirrorHorizontally(void* self)
{
} /* size: 9 */

// <012E17F2> engine2/interop.engine.cpp:9040
void FloatBitMap_t_MirrorVertically(void* self)
{
} /* size: 9 */

// <012E178D> engine2/interop.engine.cpp:9046
void FloatBitMap_t_WriteTGAFile(void* self, const char* pFilename)
{
} /* size: 18 */

// <012E16A7> engine2/interop.engine.cpp:9058
void FloatBitMap_t_WriteEXR(void* self, const char* pFilename, int nExrCompressionTypeType)
{
} /* size: 18 */

// <012E1620> engine2/interop.engine.cpp:9064
void FloatBitMap_t_LoadFromInMemoryTGA(void* self, void* pBuffer, int nSize)
{
} /* size: 21 */

// <012E1599> engine2/interop.engine.cpp:9070
void FloatBitMap_t_LoadFromInMemoryPSD(void* self, void* pBuffer, int nSize)
{
} /* size: 21 */

// <012E1512> engine2/interop.engine.cpp:9076
void FloatBitMap_t_LoadFromInMemoryTIF(void* self, void* pBuffer, int nSize)
{
} /* size: 21 */

// <012E115E> engine2/interop.engine.cpp:9082
// function calls: 12
void FloatBitMap_t_Pixel(void* self, int x, int y, int z, int comp)
{
	CSOAContainer::NumCols(); // 524
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 524
	{
	}
	CSOAContainer::ElementPointer<float>(
				int nAttributeIdx,
				int nX,
				int nY,
				int nZ);  // 535
	CSOAContainer::NumRows(); // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	CSOAContainer::NumSlices(); // 526
	CSOAContainer::NumRows(); // 529
	{
	}
	CSOAContainer::NumSlices(); // 530
	{
	}
	_CUnalignedPointer_Base<float>::_Initialize(
			float* pOriginal);  // 145
	CUnalignedPointer<float>::CUnalignedPointer(
				Pointer_t pOriginal);  // 535
	FloatBitMap_t::Pixel(
		int x,
		int y,
		int z,
		int comp);  // 9085
} /* size: 0, inline expansions: 12 (698 bytes) */

// <012E0BE7> engine2/interop.engine.cpp:9088
// function calls: 19
void FloatBitMap_t_PixelWrapped(void* self, int x, int y, int z, int comp)
{
	CSOAContainer::NumCols(); // 546
	CoordWrap(int nC,
			int nLimit);  // 507
	CoordWrap(int nC,
			int nLimit);  // 546
	CSOAContainer::NumRows(); // 547
	CoordWrap(int nC,
			int nLimit);  // 507
	CoordWrap(int nC,
			int nLimit);  // 547
	CSOAContainer::NumSlices(); // 548
	CoordWrap(int nC,
			int nLimit);  // 507
	CoordWrap(int nC,
			int nLimit);  // 548
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 524
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	CSOAContainer::ElementPointer<float>(
				int nAttributeIdx,
				int nX,
				int nY,
				int nZ);  // 535
	{
	}
	CSOAContainer::NumRows(); // 529
	{
	}
	CSOAContainer::NumSlices(); // 530
	{
	}
	_CUnalignedPointer_Base<float>::_Initialize(
			float* pOriginal);  // 145
	CUnalignedPointer<float>::CUnalignedPointer(
				Pointer_t pOriginal);  // 535
	FloatBitMap_t::Pixel(
		int x,
		int y,
		int z,
		int comp);  // 549
	FloatBitMap_t::PixelWrapped(
			int x,
			int y,
			int z,
			int comp);  // 9091
} /* size: 0, inline expansions: 19 (2785 bytes) */

// <012E0733> engine2/interop.engine.cpp:9094
// function calls: 16
void FloatBitMap_t_PixelClamped(void* self, int x, int y, int z, int comp)
{
	CSOAContainer::NumCols(); // 590
	CSOAContainer::NumRows(); // 591
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 590
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 591
	CSOAContainer::NumSlices(); // 592
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 592
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 524
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 525
	CSOAContainer::ElementPointer<float>(
				int nAttributeIdx,
				int nX,
				int nY,
				int nZ);  // 535
	{
	}
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	CSOAContainer::NumRows(); // 529
	{
	}
	CSOAContainer::NumSlices(); // 530
	{
	}
	_CUnalignedPointer_Base<float>::_Initialize(
			float* pOriginal);  // 145
	CUnalignedPointer<float>::CUnalignedPointer(
				Pointer_t pOriginal);  // 535
	FloatBitMap_t::Pixel(
		int x,
		int y,
		int z,
		int comp);  // 593
	FloatBitMap_t::PixelClamped(
			int x,
			int y,
			int z,
			int comp);  // 9097
} /* size: 0, inline expansions: 16 (2948 bytes) */

// <012E0213> engine2/interop.engine.cpp:9100
// function calls: 16
void FloatBitMap_t_Alpha(void* self, int x, int y, int z)
{
	CSOAContainer::NumCols(); // 598
	{
	}
	CSOAContainer::NumRows(); // 599
	{
	}
	CSOAContainer::NumSlices(); // 600
	{
	}
	CSOAContainer::NumCols(); // 524
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 524
	{
	}
	CSOAContainer::ElementPointer<float>(
				int nAttributeIdx,
				int nX,
				int nY,
				int nZ);  // 535
	CSOAContainer::NumRows(); // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	CSOAContainer::NumSlices(); // 526
	CSOAContainer::NumRows(); // 529
	{
	}
	CSOAContainer::NumSlices(); // 530
	{
	}
	_CUnalignedPointer_Base<float>::_Initialize(
			float* pOriginal);  // 145
	CUnalignedPointer<float>::CUnalignedPointer(
				Pointer_t pOriginal);  // 535
	FloatBitMap_t::Pixel(
		int x,
		int y,
		int z,
		int comp);  // 601
	FloatBitMap_t::Alpha(
		int x,
		int y,
		int z);  // 9103
} /* size: 0, inline expansions: 16 (1392 bytes) */

// <012DF779> engine2/interop.engine.cpp:9106
// function calls: 38
void FloatBitMap_t_RGBPixelAsVector(void* self, int nX, int nY, int nZ)
{
	CSOAContainer::NumCols(); // 524
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 524
	{
	}
	CSOAContainer::ElementPointer<float>(
				int nAttributeIdx,
				int nX,
				int nY,
				int nZ);  // 535
	CSOAContainer::NumRows(); // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	CSOAContainer::NumSlices(); // 526
	CSOAContainer::NumRows(); // 529
	{
	}
	CSOAContainer::NumSlices(); // 530
	{
	}
	_CUnalignedPointer_Base<float>::_Initialize(
			float* pOriginal);  // 145
	CUnalignedPointer<float>::CUnalignedPointer(
				Pointer_t pOriginal);  // 535
	FloatBitMap_t::Pixel(
		int x,
		int y,
		int z,
		int comp);  // 554
	CSOAContainer::NumCols(); // 524
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 524
	{
	}
	CSOAContainer::ElementPointer<float>(
				int nAttributeIdx,
				int nX,
				int nY,
				int nZ);  // 535
	CSOAContainer::NumRows(); // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	CSOAContainer::NumSlices(); // 526
	CSOAContainer::NumRows(); // 529
	{
	}
	CSOAContainer::NumSlices(); // 530
	{
	}
	_CUnalignedPointer_Base<float>::_Initialize(
			float* pOriginal);  // 145
	CUnalignedPointer<float>::CUnalignedPointer(
				Pointer_t pOriginal);  // 535
	FloatBitMap_t::Pixel(
		int x,
		int y,
		int z,
		int comp);  // 554
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 524
	CSOAContainer::NumCols(); // 524
	{
	}
	CSOAContainer::ElementPointer<float>(
				int nAttributeIdx,
				int nX,
				int nY,
				int nZ);  // 535
	CSOAContainer::NumRows(); // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	CSOAContainer::NumSlices(); // 526
	CSOAContainer::NumRows(); // 529
	{
	}
	CSOAContainer::NumSlices(); // 530
	{
	}
	_CUnalignedPointer_Base<float>::_Initialize(
			float* pOriginal);  // 145
	CUnalignedPointer<float>::CUnalignedPointer(
				Pointer_t pOriginal);  // 535
	FloatBitMap_t::Pixel(
		int x,
		int y,
		int z,
		int comp);  // 554
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 554
	FloatBitMap_t::RGBPixelAsVector(
			int nX,
			int nY,
			int nZ);  // 9109
} /* size: 0, inline expansions: 38 (4008 bytes) */

// <012DF6EA> engine2/interop.engine.cpp:9112
// function calls: 2
void FloatBitMap_t_Width(void* self)
{
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 9115
} /* size: 7, inline expansions: 2 (0 bytes) */

// <012DF65B> engine2/interop.engine.cpp:9118
// function calls: 2
void FloatBitMap_t_Height(void* self)
{
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 9121
} /* size: 8, inline expansions: 2 (0 bytes) */

// <012DF5CC> engine2/interop.engine.cpp:9124
// function calls: 2
void FloatBitMap_t_Depth(void* self)
{
	CSOAContainer::NumSlices(); // 384
	CSOAContainer::Depth(); // 9127
} /* size: 8, inline expansions: 2 (0 bytes) */

// <012DF527> engine2/interop.engine.cpp:9130
void FloatBitMap_t_Resize2D(void* self, int nNewWidth, int nNewHeight, int bClamp)
{
} /* size: 17 */

// <012DF42C> engine2/interop.engine.cpp:9136
void FloatBitMap_t_WriteToBuffer(void* self, void* pBuffer, int nBufSize, int64 fmt, int bLowQualityFastCompile, int bIsSrgb, unsigned int nFlags)
{
} /* size: 51 */

// <012DF346> engine2/interop.engine.cpp:9142
// variable: 1
// function calls: 3
void fpxr_pplctnCnfg_SetDebugCallback(void* __dbgCallback)
{
	void* dbgCallback; // 9146
	ApplicationConfig::ApplicationConfig(); // 119
	GetInstance(void); // 117
	GetInstance(void); // 9149
} /* size: 116, variables: 1, inline expansions: 3 (96 bytes) */

// <012DF260> engine2/interop.engine.cpp:9153
// variable: 1
// function calls: 3
void fpxr_pplctnCnfg_SetErrorCallback(void* __errCallback)
{
	void* errCallback; // 9157
	ApplicationConfig::ApplicationConfig(); // 119
	GetInstance(void); // 117
	GetInstance(void); // 9160
} /* size: 116, variables: 1, inline expansions: 3 (96 bytes) */

// <012DF21B> engine2/interop.engine.cpp:9164
void fpxr_Compositor_EventManager(void* self)
{
} /* size: 9 */

// <012DF1BB> engine2/interop.engine.cpp:9170
void fpxr_Compositor_Submit(void* self, TextureSubmitInfo* info)
{
} /* size: 128 */

// <012DF12B> engine2/interop.engine.cpp:9182
void fpxr_Compositor_EndFrame(void* self)
{
} /* size: 18 */

// <012DF0A1> engine2/interop.engine.cpp:9194
void fpxr_Compositor_GetEyeHeight(void* self)
{
} /* size: 10 */

// <012DF05C> engine2/interop.engine.cpp:9200
void fpxr_Compositor_GetRenderTargetWidth(void* self)
{
} /* size: 10 */

// <012DF017> engine2/interop.engine.cpp:9206
void fpxr_Compositor_GetRenderTargetHeight(void* self)
{
} /* size: 10 */

// <012DEFD2> engine2/interop.engine.cpp:9212
void fpxr_Compositor_GetDisplayRefreshRate(void* self)
{
} /* size: 10 */

// <012DEF55> engine2/interop.engine.cpp:9218
void fpxr_Compositor_GetViewInfo(void* self, unsigned int viewIndex, ViewInfo* outViewInfo)
{
} /* size: 18 */

// <012DEE96> engine2/interop.engine.cpp:9224
void fpxr_Compositor_GetProjectionMatrix(void* self, unsigned int viewIndex, float flNearZ, float flFarZ, Matrix* outViewInfo)
{
} /* size: 18 */

// <012DEE4B> engine2/interop.engine.cpp:9230
void fpxr_Compositor_Shutdown(void* self)
{
} /* size: 10 */

// <012DEDBA> engine2/interop.engine.cpp:9236
// variables: 2
void fpxr_EventManager_PumpEvent(void* __self, Event* __ev)
{
	EventManager* self; // 9240
	Event* ev; // 9241
} /* size: 18, variables: 2 */

// <012DED6F> engine2/interop.engine.cpp:9248
void fpxr_EventManager_GetSessionState(void* self)
{
} /* size: 17 */

// <012DECD6> engine2/interop.engine.cpp:9254
void fpxr_Input_GetBooleanActionState(void* self, const char* path, int64 inputSource, InputBooleanActionState* outState)
{
} /* size: 18 */

// <012DEC37> engine2/interop.engine.cpp:9260
void fpxr_Input_GetFloatActionState(void* self, const char* path, int64 inputSource, InputFloatActionState* outState)
{
} /* size: 18 */

// <012DEB98> engine2/interop.engine.cpp:9266
void fpxr_Input_GetVector2ActionState(void* self, const char* path, int64 inputSource, InputVector2ActionState* outState)
{
} /* size: 18 */

// <012DEAF9> engine2/interop.engine.cpp:9272
void fpxr_Input_GetPoseActionState(void* self, const char* path, int64 inputSource, InputPoseActionState* outState)
{
} /* size: 18 */

// <012DEA38> engine2/interop.engine.cpp:9278
void fpxr_Input_TriggerHapticVibration(void* self, float duration, float frequency, float amplitude, int64 inputSource)
{
} /* size: 18 */

// <012DE99F> engine2/interop.engine.cpp:9284
void fpxr_Input_GetHandPoseState(void* self, int64 inputSource, int64 motionRange, InputPoseHandState* outState)
{
} /* size: 18 */

// <0135885D> engine2/interop.engine.cpp:9290
void fpxr_Instance_Create(InstanceInfo* __instanceInfo)
{
} /* size: 7 */

// <01358886> engine2/interop.engine.cpp:9297
void fpxr_Instance_HasHeadset(void)
{
} /* size: 7 */

// <012DE932> engine2/interop.engine.cpp:9304
void fpxr_Instance_Compositor(void* self, VulkanInfo* vulkanInfo)
{
} /* size: 7 */

// <012DE90F> engine2/interop.engine.cpp:9311
void fpxr_Instance_Input(void* self)
{
} /* size: 0 */

// <012DE8F2> engine2/interop.engine.cpp:9318
void fpxr_Instance_GetRequiredDeviceExtensions(void* __self)
{
} /* size: 0 */

// <012DE857> engine2/interop.engine.cpp:9339
// variables: 2
void g_pnmtnSystmtls_MaintainDecodeCaches(void)
{
	const char   __FUNCTION__; // 47478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9343
	}
} /* size: 0, variables: 1 */

// <012DE7B8> engine2/interop.engine.cpp:9348
// variables: 2
// function call: 1
void g_pAudioDevice_Name(void)
{
	const char   __FUNCTION__; // 47019
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9352
	}
	IAudioDevice2::Name(); // 9354
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <012DE739> engine2/interop.engine.cpp:9357
// variables: 2
// function call: 1
void g_pAudioDevice_ChannelCount(void)
{
	const char   __FUNCTION__; // 47235
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9361
	}
	IAudioDevice2::ChannelCount(); // 9363
} /* size: 0, variables: 1, inline expansions: 1 (8 bytes) */

// <012DE6BA> engine2/interop.engine.cpp:9366
// variables: 2
// function call: 1
void g_pAudioDevice_MixChannelCount(void)
{
	const char   __FUNCTION__; // 47316
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9370
	}
	IAudioDevice2::MixChannelCount(); // 9372
} /* size: 0, variables: 1, inline expansions: 1 (30 bytes) */

// <012DE63B> engine2/interop.engine.cpp:9375
// variables: 2
// function call: 1
void g_pAudioDevice_BitsPerSample(void)
{
	const char   __FUNCTION__; // 47262
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9379
	}
	IAudioDevice2::BitsPerSample(); // 9381
} /* size: 0, variables: 1, inline expansions: 1 (8 bytes) */

// <012DE598> engine2/interop.engine.cpp:9384
// variables: 2
// function calls: 2
void g_pAudioDevice_BytesPerSample(void)
{
	const char   __FUNCTION__; // 47289
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9388
	}
	IAudioDevice2::BitsPerSample(); // 209
	IAudioDevice2::BytesPerSample(); // 9390
} /* size: 0, variables: 1, inline expansions: 2 (22 bytes) */

// <012DE519> engine2/interop.engine.cpp:9393
// variables: 2
// function call: 1
void g_pAudioDevice_SampleRate(void)
{
	const char   __FUNCTION__; // 47181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9397
	}
	IAudioDevice2::SampleRate(); // 9399
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <012DE49A> engine2/interop.engine.cpp:9402
// variables: 2
// function call: 1
void g_pAudioDevice_IsActive(void)
{
	const char   __FUNCTION__; // 47127
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9406
	}
	IAudioDevice2::IsActive(); // 9408
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <012DE443> engine2/interop.engine.cpp:9411
// variables: 2
void g_pAudioDevice_CancelOutput(void)
{
	const char   __FUNCTION__; // 47235
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9415
	}
} /* size: 0, variables: 1 */

// <012DE3EC> engine2/interop.engine.cpp:9420
// variables: 2
void g_pAudioDevice_WaitForComplete(void)
{
	const char   __FUNCTION__; // 47316
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9424
	}
} /* size: 0, variables: 1 */

// <012DE374> engine2/interop.engine.cpp:9429
// variables: 2
void g_pAudioDevice_MuteDevice(int bMuteDevice)
{
	const char   __FUNCTION__; // 47181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9433
	}
} /* size: 0, variables: 1 */

// <012DE2C6> engine2/interop.engine.cpp:9447
// variables: 2
void g_pAudioDevice_OutputDebugInfo(void)
{
	const char   __FUNCTION__; // 47316
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9451
	}
} /* size: 0, variables: 1 */

// <012DE2AC> engine2/interop.engine.cpp:9456
void g_pAudioDevice_IsValid(void)
{
} /* size: 22 */

// <012DE252> engine2/interop.engine.cpp:9466
// variable: 1
void g_pAudioDevice_SendOutput(CAudioMixDeviceBuffers* __buffers)
{
	CAudioMixDeviceBuffers* buffers; // 9470
} /* size: 29, variables: 1 */

// <012DE1BA> engine2/interop.engine.cpp:9477
// variables: 2
void g_pngnPVSMngr_BuildPvs(IWorldReference* world)
{
	const char   __FUNCTION__; // 47100
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9481
	}
} /* size: 0, variables: 1 */

// <012DE122> engine2/interop.engine.cpp:9486
// variables: 2
void g_pngnPVSMngr_DestroyPvs(IPVS* pvs)
{
	const char   __FUNCTION__; // 47154
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9490
	}
} /* size: 0, variables: 1 */

// <012DE0CB> engine2/interop.engine.cpp:9495
// variables: 2
void g_pngnSrvcMgr_GetEngineSwapChain(void)
{
	const char   __FUNCTION__; // 47370
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9499
	}
} /* size: 0, variables: 1 */

// <012DE01B> engine2/interop.engine.cpp:9504
// variables: 2
void g_pngnSrvcMgr_GetEngineSwapChainSize(int* w, int* h)
{
	const char   __FUNCTION__; // 47478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9508
	}
} /* size: 0, variables: 1 */

// <012DDF79> engine2/interop.engine.cpp:9513
// variables: 2
void g_pngnSrvcMgr_SetEngineState(void* __hWnd, SwapChainHandle_t __hSwapChain)
{
	OsSpecificWindowHandle_t__* hWnd; // 9517
	SwapChainHandle_t__* hSwapChain; // 9518
} /* size: 34, variables: 2 */

// <012DDF22> engine2/interop.engine.cpp:9525
// variables: 2
void g_pngnSrvcMgr_ExitMainLoop(void)
{
	const char   __FUNCTION__; // 47208
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9529
	}
} /* size: 0, variables: 1 */

// <012DDD65> engine2/interop.engine.cpp:9534
// variables: 2
// function calls: 4
void g_pFllFlSystm_GetSymLink(const char* pPath, const char* pathID)
{
	const char   __FUNCTION__; // 47154
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9538
	}
	CFileSystemPassThru::GetSymLink(
			const char* pPath,
			const char* pathID);  // 227
	CFileSystemPassThru::GetSymLink(
			const char* pPath,
			const char* pathID);  // 227
	CFileSystemPassThru::GetSymLink(
			const char* pPath,
			const char* pathID);  // 227
	CFileSystemPassThru::GetSymLink(
			const char* pPath,
			const char* pathID);  // 9540
} /* size: 0, variables: 1, inline expansions: 4 (257 bytes) */

// <012DDB8D> engine2/interop.engine.cpp:9543
// variables: 2
// function calls: 4
void g_pFllFlSystm_AddSymLink(const char* pPath, const char* pathID, const char* realPath)
{
	const char   __FUNCTION__; // 47154
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9547
	}
	CFileSystemPassThru::AddSymLink(
			const char* pPath,
			const char* pathID,
			const char* realPath);  // 228
	CFileSystemPassThru::AddSymLink(
			const char* pPath,
			const char* pathID,
			const char* realPath);  // 228
	CFileSystemPassThru::AddSymLink(
			const char* pPath,
			const char* pathID,
			const char* realPath);  // 228
	CFileSystemPassThru::AddSymLink(
			const char* pPath,
			const char* pathID,
			const char* realPath);  // 9549
} /* size: 0, variables: 1, inline expansions: 4 (269 bytes) */

// <012DD9FE> engine2/interop.engine.cpp:9552
// variables: 2
// function calls: 4
void g_pFllFlSystm_RemoveSymLink(const char* pPath, const char* pathID)
{
	const char   __FUNCTION__; // 47235
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9556
	}
	CFileSystemPassThru::RemoveSymLink(
			const char* pPath,
			const char* pathID);  // 229
	CFileSystemPassThru::RemoveSymLink(
			const char* pPath,
			const char* pathID);  // 229
	CFileSystemPassThru::RemoveSymLink(
			const char* pPath,
			const char* pathID);  // 229
	CFileSystemPassThru::RemoveSymLink(
			const char* pPath,
			const char* pathID);  // 9558
} /* size: 0, variables: 1, inline expansions: 4 (249 bytes) */

// <012DD8D8> engine2/interop.engine.cpp:9561
// variables: 2
// function calls: 4
void g_pFllFlSystm_ResetProjectPaths(int includeCloudAssets)
{
	const char   __FUNCTION__; // 47343
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9565
	}
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 9567
} /* size: 0, variables: 1, inline expansions: 4 (245 bytes) */

// <012DD749> engine2/interop.engine.cpp:9570
// variables: 2
// function calls: 4
void g_pFllFlSystm_AddProjectPath(const char* ident, const char* fullPath)
{
	const char   __FUNCTION__; // 47262
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9574
	}
	CFileSystemPassThru::AddProjectPath(
			const char* modName,
			const char* pPath);  // 223
	CFileSystemPassThru::AddProjectPath(
			const char* modName,
			const char* pPath);  // 223
	CFileSystemPassThru::AddProjectPath(
			const char* modName,
			const char* pPath);  // 223
	CFileSystemPassThru::AddProjectPath(
			const char* modName,
			const char* pPath);  // 9576
} /* size: 0, variables: 1, inline expansions: 4 (249 bytes) */

// <012DD5BA> engine2/interop.engine.cpp:9579
// variables: 2
// function calls: 4
void g_pFllFlSystm_AddCloudPath(const char* ident, const char* fullPath)
{
	const char   __FUNCTION__; // 47208
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9583
	}
	CFileSystemPassThru::AddCloudPath(
			const char* modName,
			const char* pPath);  // 224
	CFileSystemPassThru::AddCloudPath(
			const char* modName,
			const char* pPath);  // 224
	CFileSystemPassThru::AddCloudPath(
			const char* modName,
			const char* pPath);  // 224
	CFileSystemPassThru::AddCloudPath(
			const char* modName,
			const char* pPath);  // 9585
} /* size: 0, variables: 1, inline expansions: 4 (249 bytes) */

// <012DD556> engine2/interop.engine.cpp:9588
// variables: 2
void g_pInputService_IsAppActive(void)
{
	const char   __FUNCTION__; // 47235
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9592
	}
} /* size: 0, variables: 1 */

// <012DD4F2> engine2/interop.engine.cpp:9597
// variables: 2
void g_pInputService_HasMouseFocus(void)
{
	const char   __FUNCTION__; // 47289
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9601
	}
} /* size: 0, variables: 1 */

// <012DD450> engine2/interop.engine.cpp:9606
// variables: 2
void g_pInputService_Key_NameForBinding(const char* binding)
{
	const char   __FUNCTION__; // 47424
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9610
	}
} /* size: 0, variables: 1 */

// <012DD3C6> engine2/interop.engine.cpp:9615
// variables: 2
void g_pInputService_GetBinding(int64 button)
{
	const char   __FUNCTION__; // 47208
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9619
	}
} /* size: 0, variables: 1 */

// <012DD315> engine2/interop.engine.cpp:9624
// variables: 2
void g_pInputService_SetCursorPosition(int x, int y)
{
	const char   __FUNCTION__; // 47397
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9628
	}
} /* size: 0, variables: 1 */

// <012DD2BE> engine2/interop.engine.cpp:9633
// variables: 2
void g_pInputService_Pump(void)
{
	const char   __FUNCTION__; // 47046
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9637
	}
} /* size: 0, variables: 1 */

// <012DD226> engine2/interop.engine.cpp:9642
// variables: 2
void g_pInputSystem_RegisterWindowWithSDL(void* hwnd)
{
	const char   __FUNCTION__; // 47478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9646
	}
} /* size: 0, variables: 1 */

// <012DD18E> engine2/interop.engine.cpp:9651
// variables: 2
void g_pInputSystem_UnregisterWindowFromSDL(void* hwnd)
{
	const char   __FUNCTION__; // 47532
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9655
	}
} /* size: 0, variables: 1 */

// <012DD0F6> engine2/interop.engine.cpp:9660
// variables: 2
void g_pInputSystem_SetEditorMainWindow(void* hwnd)
{
	const char   __FUNCTION__; // 47424
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9664
	}
} /* size: 0, variables: 1 */

// <012DD069> engine2/interop.engine.cpp:9669
// variables: 2
void g_pInputSystem_OnEditorGameFocusChange(void* hwnd, int bIsFocused)
{
	const char   __FUNCTION__; // 47532
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9673
	}
} /* size: 0, variables: 1 */

// <012DCFCB> engine2/interop.engine.cpp:9678
// variables: 2
void g_pInputSystem_SetCursorPosition(int x, int y, void* window)
{
	const char   __FUNCTION__; // 47370
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9682
	}
} /* size: 0, variables: 1 */

// <012DCF67> engine2/interop.engine.cpp:9687
// variables: 2
void g_pInputSystem_HasMouseFocus(void)
{
	const char   __FUNCTION__; // 47262
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9691
	}
} /* size: 0, variables: 1 */

// <012DCF03> engine2/interop.engine.cpp:9696
// variables: 2
void g_pInputSystem_IsAppActive(void)
{
	const char   __FUNCTION__; // 47208
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9700
	}
} /* size: 0, variables: 1 */

// <012DCE27> engine2/interop.engine.cpp:9714
// variables: 2
void g_pInputSystem_SetIMEAllowed(int bAllowed)
{
	const char   __FUNCTION__; // 47262
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9718
	}
} /* size: 0, variables: 1 */

// <012DCD74> engine2/interop.engine.cpp:9723
// variables: 2
void g_pInputSystem_SetIMETextLocation(int x, int y, int nWidth, int nHeight)
{
	const char   __FUNCTION__; // 47397
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9727
	}
} /* size: 0, variables: 1 */

// <012DCD1D> engine2/interop.engine.cpp:9732
// variables: 2
void g_pInputSystem_DismissIME(void)
{
	const char   __FUNCTION__; // 47181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9736
	}
} /* size: 0, variables: 1 */

// <012DCC93> engine2/interop.engine.cpp:9741
// variables: 2
void g_pInputSystem_CodeToString(int64 code)
{
	const char   __FUNCTION__; // 47235
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9745
	}
} /* size: 0, variables: 1 */

// <012DCC09> engine2/interop.engine.cpp:9750
// variables: 2
void g_pInputSystem_GetKeyDisplayName(int64 code)
{
	const char   __FUNCTION__; // 47370
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9754
	}
} /* size: 0, variables: 1 */

// <012DCB90> engine2/interop.engine.cpp:9759
// variables: 2
void g_pInputSystem_StringToButtonCode(const char* pString)
{
	const char   __FUNCTION__; // 47397
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9763
	}
} /* size: 0, variables: 1 */

// <012DCB17> engine2/interop.engine.cpp:9768
// variables: 2
void g_pInputSystem_VirtualKeyToButtonCode(int nVirtualKey)
{
	const char   __FUNCTION__; // 47505
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9772
	}
} /* size: 0, variables: 1 */

// <012DCA96> engine2/interop.engine.cpp:9777
// variables: 2
void g_pInputSystem_ButtonCodeToVirtualKey(int64 code)
{
	const char   __FUNCTION__; // 47505
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9781
	}
} /* size: 0, variables: 1 */

// <012DCA1E> engine2/interop.engine.cpp:9786
// variables: 2
void g_pInputSystem_SetRelativeMouseMode(int bState)
{
	const char   __FUNCTION__; // 47451
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9790
	}
} /* size: 0, variables: 1 */

// <012DC9BA> engine2/interop.engine.cpp:9795
// variables: 2
void g_pInputSystem_GetRelativeMouseMode(void)
{
	const char   __FUNCTION__; // 47451
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9799
	}
} /* size: 0, variables: 1 */

// <012DC92F> engine2/interop.engine.cpp:9804
// variables: 2
void g_pInputSystem_SetCursorStandard(int64 cursor)
{
	const char   __FUNCTION__; // 47370
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9808
	}
} /* size: 0, variables: 1 */

// <012DC8A4> engine2/interop.engine.cpp:9813
// variables: 2
void g_pInputSystem_SetCursorUser(const char* pName)
{
	const char   __FUNCTION__; // 47262
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9817
	}
} /* size: 0, variables: 1 */

// <012DC7EC> engine2/interop.engine.cpp:9822
// variables: 2
void g_pInputSystem_LoadCursorFromFile(const char* pFileName, const char* pName, int nHotX, int nHotY)
{
	const char   __FUNCTION__; // 47397
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9826
	}
} /* size: 0, variables: 1 */

// <012DC795> engine2/interop.engine.cpp:9831
// variables: 2
void g_pInputSystem_ShutdownUserCursors(void)
{
	const char   __FUNCTION__; // 47424
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9835
	}
} /* size: 0, variables: 1 */

// <012DC5D0> engine2/interop.engine.cpp:9840
// variables: 2
// function calls: 3
void g_pMtrlSystm2_CreateRawMaterial(const char* materialName, const char* shader, int anonymous)
{
	const char   __FUNCTION__; // 47343
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9844
	}
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 9846
} /* size: 0, variables: 1, inline expansions: 3 (40 bytes) */

// <012DC318> engine2/interop.engine.cpp:9849
// variables: 2
// function calls: 8
void g_pMtrlSystm2_CreateProceduralMaterialCopy(HMaterialStrong* hSrcMaterial, int nResourceType, int bRecreateStaticBuffers)
{
	const char   __FUNCTION__; // 47640
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9853
	}
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 15
	ResourceHandle_GetHandle(HMaterialStrong* target); // 9855
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 9855
} /* size: 0, variables: 1, inline expansions: 8 (51 bytes) */

// <012DC192> engine2/interop.engine.cpp:9858
// variables: 2
// function calls: 3
void g_pMtrlSystm2_FindOrCreateMaterialFromResource(const char* pResourceName)
{
	const char   __FUNCTION__; // 47743
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9862
	}
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 9864
} /* size: 0, variables: 1, inline expansions: 3 (40 bytes) */

// <012DC13B> engine2/interop.engine.cpp:9867
// variables: 2
void g_pMtrlSystm2_FrameUpdate(void)
{
	const char   __FUNCTION__; // 47181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9871
	}
} /* size: 0, variables: 1 */

// <012DBCB2> engine2/interop.engine.cpp:9876
// variables: 2
// function calls: 16
void g_pMeshSystem_CreateSceneObject(HModelStrong* model, CTransformUnaligned* modelToWorld, const char* pDescName, int64 nFlags, int64 nObjectTypeFlags, ISceneWorld* pWorld, int creationFlags)
{
	const char   __FUNCTION__; // 47343
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9880
	}
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCModel>::GetHandle(); // 27
	ResourceHandle_GetHandle(HModelStrong* target); // 9882
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	VectorAligned::VectorAligned(); // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 534
	CTransformUnaligned::UniformScale(); // 534
	CTransform::CTransform(
			const CTransformUnaligned& tx);  // 9882
	CSceneObject::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CSceneObject*>(CSceneObject* c); // 9882
} /* size: 0, variables: 1, inline expansions: 16 (174 bytes) */

// <012DBB01> engine2/interop.engine.cpp:9885
// variables: 2
// function calls: 5
void g_pMeshSystem_ChangeModel(CSceneObject* obj, HModelStrong* model)
{
	const char   __FUNCTION__; // 47181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9889
	}
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCModel>::GetHandle(); // 27
	ResourceHandle_GetHandle(HModelStrong* target); // 9891
} /* size: 0, variables: 1, inline expansions: 5 (27 bytes) */

// <012DBAAA> engine2/interop.engine.cpp:9894
// variables: 2
void g_pPhysicsSystem_NumWorlds(void)
{
	const char   __FUNCTION__; // 47208
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9898
	}
} /* size: 0, variables: 1 */

// <012DB9FA> engine2/interop.engine.cpp:9903
// variables: 2
// function calls: 2
void g_pPhysicsSystem_CreateWorld(void)
{
	const char   __FUNCTION__; // 47262
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9907
	}
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsWorld*>(IPhysicsWorld* c); // 9909
} /* size: 0, variables: 1, inline expansions: 2 (26 bytes) */

// <012DB962> engine2/interop.engine.cpp:9912
// variables: 2
void g_pPhysicsSystem_DestroyWorld(IPhysicsWorld* world)
{
	const char   __FUNCTION__; // 47289
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9916
	}
} /* size: 0, variables: 1 */

// <012DB90B> engine2/interop.engine.cpp:9921
// variables: 2
void g_pPhysicsSystem_GetSurfacePropertyController(void)
{
	const char   __FUNCTION__; // 47716
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9925
	}
} /* size: 0, variables: 1 */

// <012DB7FF> engine2/interop.engine.cpp:9930
// variables: 2
void g_pPhysicsSystem_CastHeightField(Vector* vOut, Vector* vRayStart, Vector* vRayDelta, void* Heights, int SizeX, int SizeY, float SizeScale, float HeightScale)
{
	const char   __FUNCTION__; // 47370
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9934
	}
} /* size: 0, variables: 1 */

// <012DB4DF> engine2/interop.engine.cpp:9939
// variables: 2
// function calls: 11
void g_pPhysicsSystem_GetAggregateData(const char* __resourceName)
{
	const char* resourceName; // 9943
	HPhysAggregateData_Internal hPhysicsData; // 9946
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 718
	IResourceSystem::FindExistingResourceByName(
					const CResourceName& resourceName);  // 720
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 720
	IResourceSystem::FindExistingResourceByName<495958126710>(
						const CResourceName& resourceName);  // 9946
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 9946
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::HasData(); // 9947
} /* size: 226, variables: 2, inline expansions: 11 (226 bytes) */

// <012DB447> engine2/interop.engine.cpp:9953
// variables: 2
void g_pPhysicsSystem_UpdateSurfaceProperties(CPhysSurfaceProperties* pSurfaceProperties)
{
	const char   __FUNCTION__; // 47586
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9957
	}
} /* size: 0, variables: 1 */

// <012DB3BC> engine2/interop.engine.cpp:9962
// variables: 2
void g_pRenderDevice_FindOrCreateSamplerState(CSamplerStateDesc* samplerDesc)
{
	const char   __FUNCTION__; // 47586
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9966
	}
} /* size: 0, variables: 1 */

// <012DB324> engine2/interop.engine.cpp:9971
// variables: 2
void g_pRenderDevice_GetSamplerIndex(SamplerStateHandle_t samplerState)
{
	const char   __FUNCTION__; // 47343
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9975
	}
} /* size: 0, variables: 1 */

// <012DB2AB> engine2/interop.engine.cpp:9980
// variables: 2
void g_pRenderDevice_GetSwapChainInfo(SwapChainHandle_t swapChain)
{
	const char   __FUNCTION__; // 47370
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9984
	}
} /* size: 0, variables: 1 */

// <012DB10A> engine2/interop.engine.cpp:9989
// variables: 2
// function calls: 3
void g_pRenderDevice_FindOrCreateFileTexture(const char* pFileName, int64 nLoadMode)
{
	const char   __FUNCTION__; // 47559
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 9993
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 9995
} /* size: 0, variables: 1, inline expansions: 3 (40 bytes) */

// <012DAF11> engine2/interop.engine.cpp:9998
// variables: 2
// function calls: 3
void g_pRenderDevice_FindOrCreateTexture2(const char* pResourceName, int bIsAnonymous, TextureCreationConfig_t* pDescriptor, void* data, int dataSize)
{
	const char   __FUNCTION__; // 47478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10002
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 10004
} /* size: 0, variables: 1, inline expansions: 3 (40 bytes) */

// <012DAD5A> engine2/interop.engine.cpp:10007
// variables: 2
// function calls: 5
void g_pRenderDevice_ClearTexture(HRenderTextureStrong* hTexture, Color color)
{
	const char   __FUNCTION__; // 47262
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10011
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10013
} /* size: 0, variables: 1, inline expansions: 5 (27 bytes) */

// <012DAB7F> engine2/interop.engine.cpp:10016
// variables: 2
// function calls: 5
void g_pRenderDevice_AsyncSetTextureData2(HRenderTextureStrong* hTexture, void* pData, int nDataSize, Rect3D_t* rect)
{
	const char   __FUNCTION__; // 47478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10020
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10022
} /* size: 0, variables: 1, inline expansions: 5 (27 bytes) */

// <012DA93B> engine2/interop.engine.cpp:10034
// variables: 2
void g_pRenderDevice_GetGPUFrameTimeMS(SwapChainHandle_t swapChain, float* pGPUFrameTimeMSOut, unsigned int* pFrameNumberOut)
{
	const char   __FUNCTION__; // 47397
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10038
	}
} /* size: 0, variables: 1 */

// <012DA79F> engine2/interop.engine.cpp:10043
// variables: 2
// function calls: 5
void g_pRenderDevice_GetTextureDesc(HRenderTextureStrong* hTexture)
{
	const char   __FUNCTION__; // 47316
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10047
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10049
} /* size: 0, variables: 1, inline expansions: 5 (27 bytes) */

// <012DA603> engine2/interop.engine.cpp:10052
// variables: 2
// function calls: 5
void g_pRenderDevice_GetOnDiskTextureDesc(HRenderTextureStrong* hTexture)
{
	const char   __FUNCTION__; // 47478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10056
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10058
} /* size: 0, variables: 1, inline expansions: 5 (27 bytes) */

// <012DA467> engine2/interop.engine.cpp:10061
// variables: 2
// function calls: 5
void g_pRenderDevice_GetTextureMultisampleType(HRenderTextureStrong* hTexture)
{
	const char   __FUNCTION__; // 47613
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10065
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10067
} /* size: 0, variables: 1, inline expansions: 5 (27 bytes) */

// <012DA274> engine2/interop.engine.cpp:10070
// variables: 2
// function calls: 7
void g_pRenderDevice_ComputeTextureMemorySize(HRenderTextureStrong* __hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase> hTexture; // 10074
	const CTextureDesc* pDesc; // 10077
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10074
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 10077
} /* size: 109, variables: 2, inline expansions: 7 (19 bytes) */

// <012DA1E4> engine2/interop.engine.cpp:10082
// variables: 2
void g_pRenderDevice_CreateRenderContext(unsigned int flags)
{
	const char   __FUNCTION__; // 47451
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10086
	}
} /* size: 0, variables: 1 */

// <012DA14C> engine2/interop.engine.cpp:10091
// variables: 2
void g_pRenderDevice_ReleaseRenderContext(IRenderContext* context)
{
	const char   __FUNCTION__; // 47478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10095
	}
} /* size: 0, variables: 1 */

// <012D9F22> engine2/interop.engine.cpp:10100
// variables: 2
// function calls: 5
void g_pRenderDevice_ReadTexturePixels(HRenderTextureStrong* hTexture, Rect_t* pSrcRect, int nSrcSlice, int nSrcMip, Rect_t* pDstRect, void* pData, int64 dstFormat, int nDstStride)
{
	const char   __FUNCTION__; // 47397
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10104
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10106
} /* size: 0, variables: 1, inline expansions: 5 (27 bytes) */

// <012D9E8A> engine2/interop.engine.cpp:10109
// variables: 2
void g_pRenderDevice_DestroySwapChain(SwapChainHandle_t hSwapChain)
{
	const char   __FUNCTION__; // 47370
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10113
	}
} /* size: 0, variables: 1 */

// <012D9E11> engine2/interop.engine.cpp:10118
// variables: 2
void g_pRenderDevice_Present(SwapChainHandle_t chain)
{
	const char   __FUNCTION__; // 47127
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10122
	}
} /* size: 0, variables: 1 */

// <012D9DBA> engine2/interop.engine.cpp:10127
// variables: 2
void g_pRenderDevice_Flush(void)
{
	const char   __FUNCTION__; // 47073
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10131
	}
} /* size: 0, variables: 1 */

// <012D9D22> engine2/interop.engine.cpp:10136
// variables: 2
void g_pRenderDevice_ForceFlushGPU(SwapChainHandle_t hSwapChain)
{
	const char   __FUNCTION__; // 47289
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10140
	}
} /* size: 0, variables: 1 */

// <012D9CA9> engine2/interop.engine.cpp:10145
// variables: 2
void g_pRenderDevice_CanRenderToSwapChain(SwapChainHandle_t chain)
{
	const char   __FUNCTION__; // 47478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10149
	}
} /* size: 0, variables: 1 */

// <012D9C19> engine2/interop.engine.cpp:10154
// variables: 2
// function call: 1
void g_pRenderDevice_IsUsing32BitDepthBuffer(void)
{
	const char   __FUNCTION__; // 47559
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10158
	}
	IRenderDevice::IsUsing32BitDepthBuffer(); // 10160
} /* size: 0, variables: 1, inline expansions: 1 (4 bytes) */

// <012D9B3F> engine2/interop.engine.cpp:10163
// variables: 3
// function call: 1
void g_pRenderDevice_GetBackbufferDimensions(SwapChainHandle_t __chain)
{
	SwapChainHandle_t__* chain; // 10167
	int nBBWidth; // 10170
	int nBBHeight; // 10170
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 10172
} /* size: 106, variables: 3, inline expansions: 1 (3 bytes) */

// <012D95BC> engine2/interop.engine.cpp:10176
// variables: 4
// function calls: 19
void g_pRenderDevice_CompileAndCreateShader(int64 nType, const char* pProgram, unsigned int nBufLen, const char* pShaderVersion, const char* pDebugName)
{
	const char   __FUNCTION__; // 47532
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10180
	}
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 472
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::get(); // 489
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::operator bool(); // 1016
	_Tuple_impl<1, std::default_delete<IRenderShaderByteCode> >::_Tuple_impl(
			_Tuple_impl<1, std::default_delete<IRenderShaderByteCode> >& __in);  // 324
	_Tuple_impl<0, IRenderShaderByteCode::_Tuple_impl(
			_Tuple_impl<0, IRenderShaderByteCode*, std::default_delete<IRenderShaderByteCode> > &);  // 996
	tuple<IRenderShaderByteCode::tuple(
		tuple<IRenderShaderByteCode*, std::default_delete<IRenderShaderByteCode> > &);  // 178
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 179
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::__uniq_ptr_impl(
			__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >& __u);  // 235
	__uniq_ptr_data<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode>, true, true>::__uniq_ptr_data(
			__uniq_ptr_data<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode>, true, true> &);  // 359
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::unique_ptr(
			unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > &);  // 1018
	{
		IRenderShaderByteCode *& __ptr; // 396
		__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 396
		unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::get_deleter(); // 398
		default_delete<IRenderShaderByteCode>::operator(
				IRenderShaderByteCode* __ptr);  // 398
	}
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::~unique_ptr(); // 1018
	{
		IRenderShaderByteCode *& __ptr; // 396
		__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 396
		unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::get_deleter(); // 398
		default_delete<IRenderShaderByteCode>::operator(
				IRenderShaderByteCode* __ptr);  // 398
	}
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::~unique_ptr(); // 1021
	IRenderDevice::CompileAndCreateShader(
				RenderShaderType_t nType,
				const char* pProgram,
				uint32 nBufLen,
				const char* pShaderVersion,
				const char* pDebugName);  // 10182
} /* size: 0, variables: 1, inline expansions: 13 (188 bytes) */

// <012D9420> engine2/interop.engine.cpp:10185
// variables: 2
// function calls: 5
void g_pRenderDevice_GetTextureLastUsed(HRenderTextureStrong* hTexture)
{
	const char   __FUNCTION__; // 47424
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10189
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10191
} /* size: 0, variables: 1, inline expansions: 5 (27 bytes) */

// <012D9387> engine2/interop.engine.cpp:10194
// variables: 2
void g_pRenderDevice_UnThrottleTextureStreamingForNFrames(unsigned int nNumberOfFramesForUnthrottledTextureLoading)
{
	const char   __FUNCTION__; // 47890
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10198
	}
} /* size: 0, variables: 1 */

// <012D9330> engine2/interop.engine.cpp:10203
// variables: 2
void g_pRenderDevice_GetNumTextureLoadsInFlight(void)
{
	const char   __FUNCTION__; // 47640
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10207
	}
} /* size: 0, variables: 1 */

// <012D92B8> engine2/interop.engine.cpp:10212
// variables: 2
void g_pRenderDevice_SetForcePreloadStreamingData(int bForcePreloadStreamingData)
{
	const char   __FUNCTION__; // 47689
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10216
	}
} /* size: 0, variables: 1 */

// <012D9254> engine2/interop.engine.cpp:10221
// variables: 2
void g_pRenderDevice_GetRenderDeviceAPI(void)
{
	const char   __FUNCTION__; // 47424
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10225
	}
} /* size: 0, variables: 1 */

// <012D90A3> engine2/interop.engine.cpp:10230
// variables: 2
// function calls: 5
void g_pRenderDevice_MarkTextureUsed(HRenderTextureStrong* texture, int nRequiredMipSize)
{
	const char   __FUNCTION__; // 47343
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10234
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10236
} /* size: 0, variables: 1, inline expansions: 5 (27 bytes) */

// <012D8F07> engine2/interop.engine.cpp:10239
// variables: 2
// function calls: 5
void g_pRenderDevice_IsTextureRenderTarget(HRenderTextureStrong* texture)
{
	const char   __FUNCTION__; // 47505
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10243
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10245
} /* size: 0, variables: 1, inline expansions: 5 (27 bytes) */

// <012D8EA3> engine2/interop.engine.cpp:10248
// variables: 2
void g_pRenderDevice_IsRayTracingSupported(void)
{
	const char   __FUNCTION__; // 47505
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10252
	}
} /* size: 0, variables: 1 */

// <012D8DC5> engine2/interop.engine.cpp:10257
// variables: 4
void g_pRenderDevice_CreateGPUBuffer(int64 __nType, BufferDesc_t* __desc, int64 __usage, const char* __pDebugName)
{
	RenderBufferType_t nType; // 10261
	BufferDesc_t desc; // 10262
	RenderBufferFlags_t usage; // 10263
	const char* pDebugName; // 10264
} /* size: 100, variables: 4 */

// <012D8D27> engine2/interop.engine.cpp:10272
// variables: 2
void g_pRenderDevice_DestroyGPUBuffer(RenderBufferHandle_t hGPUBuffer)
{
	const char   __FUNCTION__; // 47370
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10276
	}
} /* size: 0, variables: 1 */

// <012D8C6F> engine2/interop.engine.cpp:10281
// variables: 2
void g_pRenderDevice_ReadBuffer(RenderBufferHandle_t hBuffer, unsigned int nOffsetInBytes, void* pBuf, unsigned int nBytesToRead)
{
	const char   __FUNCTION__; // 47208
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10285
	}
} /* size: 0, variables: 1 */

// <012D8BEA> engine2/interop.engine.cpp:10290
// variables: 2
const void* g_pRenderDevice_GetDeviceSpecificInfo(int64 info)
{
	const char   __FUNCTION__; // 47505
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10294
	}
} /* size: 0, variables: 1 */

// <012D8A49> engine2/interop.engine.cpp:10299
// variables: 2
// function calls: 5
const void* g_pRenderDevice_GetGraphicsAPISpecificTextureHandle(HRenderTextureStrong* hTexture)
{
	const char   __FUNCTION__; // 47863
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10303
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10305
} /* size: 0, variables: 1, inline expansions: 5 (27 bytes) */

// <012D88A3> engine2/interop.engine.cpp:10308
// variables: 2
// function calls: 5
const void* g_pRenderDevice_GetDeviceSpecificTexture(HRenderTextureStrong* hTexture)
{
	const char   __FUNCTION__; // 47586
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10312
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10314
} /* size: 0, variables: 1, inline expansions: 5 (27 bytes) */

// <012D86DD> engine2/interop.engine.cpp:10317
// variables: 2
// function calls: 5
void g_pRenderDevice_GetTextureViewIndex(HRenderTextureStrong* hTexture, unsigned char colorSpace, int64 dim)
{
	const char   __FUNCTION__; // 47451
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10321
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10323
} /* size: 0, variables: 1, inline expansions: 5 (27 bytes) */

// <012D6FF8> engine2/interop.engine.cpp:10326
// variables: 9
// function calls: 102
void g_pRenderDevice_GetTextureResidencyInfo(CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int> > __pTextures, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* __pNames)
{
	CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int> >* pTextures; // 10330
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pNames; // 10331
	TextureResidencyStats_t textureResidencyStats; // 10334
	CUtlVector<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> > rawTextures; // 10335
	{
		const TextureResidencyInfo_t& info; // 10339
		CUtlVector<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >& __for_range; // 7768
		iterator __for_begin; // 29999
		iterator __for_end; // 29999
		{
			CPathBufferString texName; // 10342
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 1514
			Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1252
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
					CUtlString& src);  // 10345
			CWeakHandle<InfoForResourceTypeCTextureBase>::IsLoaded(); // 10341
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 10342
			CUtlSymbolLarge::String(); // 148
			CBufferString::Append(
				const char* pString,
				int nChars,
				bool bExact);  // 148
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CBufferString* pOutBuffer,
					bool bAppend);  // 172
			ResourceGetName(ResourceHandle_t hResource,
					CBufferString* pOutBuffer,
					bool bAppend);  // 480
			CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
					CBufferString* pOutName,
					bool bAppend);  // 10343
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::NumAllocated(); // 1196
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
			Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 368
			ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 824
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsGrowable(); // 823
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Grow(
				int num);  // 806
			GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					int num);  // 1198
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int i);  // 1201
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1520
			CopyConstruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory,
											const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1201
			AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 10344
			CUtlString::~CUtlString(); // 10345
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 10346
		}
		CUtlVectorBase<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::Count(); // 104
		CUtlVectorBase<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::end(); // 10339
		CUtlMemory<TextureResidencyInfo_t, int>::Base(); // 112
		CUtlVectorBase<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::Base(); // 102
		CUtlVectorBase<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::begin(); // 10339
	}
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 530
	CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 87
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 530
	CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 87
	TextureResidencyStats_t::TextureResidencyStats_t(); // 10334
	CUtlMemory<TextureResidencyInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TextureResidencyInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::CUtlVector(); // 10335
	CUtlVectorBase<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::Count(); // 10337
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsGrowable(); // 881
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 1024
	EnsureCapacity(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			int num);  // 10337
	CUtlVectorBase<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::Count(); // 10338
	CUtlMemory<CUtlString, int>::IsGrowable(); // 881
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CUtlString, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::EnsureCapacity(
			int num);  // 10338
	CUtlMemory<TextureResidencyInfo_t, int>::Purge(); // 903
	CUtlMemory<TextureResidencyInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<TextureResidencyInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::RemoveAll(); // 1798
	CUtlVectorBase<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::Purge(); // 560
	ValidateAlignment<TextureResidencyInfo_t>(void); // 508
	CUtlMemory<TextureResidencyInfo_t, int>::Purge(); // 510
	CUtlMemory<TextureResidencyInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::~CUtlVector(); // 10349
	RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 1798
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 560
	ValidateAlignment<CWeakHandle<InfoForResourceTypeCTextureBase> >(void); // 508
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 510
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 410
	~CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 87
	RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 1798
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 560
	ValidateAlignment<CWeakHandle<InfoForResourceTypeCTextureBase> >(void); // 508
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 510
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 410
	~CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 87
	TextureResidencyStats_t::~TextureResidencyStats_t(); // 10349
} /* size: 1345, variables: 4, inline expansions: 59 (1664 bytes) */

// <012D6C52> engine2/interop.engine.cpp:10350
// variables: 6
// function calls: 12
void g_pRenderDevice_GetSheetInfo(HRenderTextureStrong* __texture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase> texture; // 10354
	Vector4D vec; // 10357
	Vector2D vSheetSequenceDataUVCoords; // 10358
	HRenderTexture hSequenceDataTexture; // 10359
	int nSequenceCount; // 10360
	{
		const CTextureDesc* pTexHeader; // 10364
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 10364
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10354
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 10357
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 10361
	Vector2D::Vector2D(); // 10358
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 10359
} /* size: 246, variables: 5, inline expansions: 10 (42 bytes) */

// <012D6A2A> engine2/interop.engine.cpp:10376
// variables: 2
// function calls: 8
void g_pRenderDevice_GetSequenceCount(HRenderTextureStrong* __texture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase> texture; // 10380
	const Sheet_t* pSheet; // 10383
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10380
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 10383
	CResourceArrayBase::Count(); // 10385
} /* size: 105, variables: 2, inline expansions: 8 (22 bytes) */

// <012D672B> engine2/interop.engine.cpp:10389
// variables: 3
// function calls: 11
void g_pRenderDevice_GetSequence(HRenderTextureStrong* __texture, int __index)
{
	CWeakHandle<InfoForResourceTypeCTextureBase> texture; // 10393
	int index; // 10394
	const Sheet_t* pSheet; // 10397
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10393
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 10397
	ResolveOffset(const int32* pOffset); // 304
	CResourceArrayBase::GetRawPtr(); // 416
	CResourceArray<SheetSequence_t>::GetPtr(); // 379
	CResourceArray<SheetSequence_t>::operator[](
			int nIndex);  // 10399
} /* size: 124, variables: 3, inline expansions: 11 (94 bytes) */

// <012D66C7> engine2/interop.engine.cpp:10403
// variables: 2
void g_pRenderService_GetMultisampleType(void)
{
	const char   __FUNCTION__; // 47451
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10407
	}
} /* size: 0, variables: 1 */

// <012D64AE> engine2/interop.engine.cpp:10412
// variables: 5
// function calls: 6
void g_pRsrcCmplrSyst_GenerateResourceFile(const char* __path, void* __pData, int __size)
{
	const char* path; // 10416
	void* pData; // 10417
	int size; // 10418
	CUtlBuffer inputData; // 10421
	ResourceCompileSettings_t compileSettings; // 10422
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 10427
} /* size: 262, variables: 5, inline expansions: 6 (143 bytes) */

// <012D62A4> engine2/interop.engine.cpp:10428
// variables: 4
// function calls: 6
void g_pRsrcCmplrSyst_GenerateResourceFile_1(const char* __path, const char* __text)
{
	const char* path; // 10432
	const char* text; // 10433
	CUtlBuffer inputData; // 10436
	ResourceCompileSettings_t compileSettings; // 10438
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 10443
} /* size: 287, variables: 4, inline expansions: 6 (143 bytes) */

// <012D5EA7> engine2/interop.engine.cpp:10444
// variables: 6
// function calls: 12
void g_pRsrcCmplrSyst_GenerateResourceBytes(const char* __path, void* __pData, int __size)
{
	const char* path; // 10448
	void* pData; // 10449
	int size; // 10450
	CUtlBuffer inputData; // 10453
	CUtlBuffer* outputData; // 10455
	ResourceCompileSettings_t compileSettings; // 10456
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 10466
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 10460
} /* size: 372, variables: 6, inline expansions: 12 (183 bytes) */

// <012D5E50> engine2/interop.engine.cpp:10467
// variables: 2
void g_pRsrcSystm_ReloadSymlinkedResidentResources(void)
{
	const char   __FUNCTION__; // 47716
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10471
	}
} /* size: 0, variables: 1 */

// <012D5DF9> engine2/interop.engine.cpp:10476
// variables: 2
void g_pRsrcSystm_UpdateSimple(void)
{
	const char   __FUNCTION__; // 47181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10480
	}
} /* size: 0, variables: 1 */

// <012D5D95> engine2/interop.engine.cpp:10485
// variables: 2
void g_pRsrcSystm_HasPendingWork(void)
{
	const char   __FUNCTION__; // 47235
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10489
	}
} /* size: 0, variables: 1 */

// <012D5D31> engine2/interop.engine.cpp:10494
// variables: 2
void g_pRsrcSystm_IsShuttingDown(void)
{
	const char   __FUNCTION__; // 47235
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10498
	}
} /* size: 0, variables: 1 */

// <012D5C42> engine2/interop.engine.cpp:10503
// variables: 2
// function call: 1
void g_pRsrcSystm_LoadResourceInManifest(const char* __name)
{
	const char* name; // 10507
	ResourceManifestCreationInfo_t info; // 10510
	ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(
					int nCount,
					const char ** ppResourceFiles,
					ResourceManifestType_t nType,
					ResourceManifestLoadBehavior_t nLoadBehavior,
					const char* pDebugName,
					ResourceManifestLoadPriority_t nPriority);  // 10510
} /* size: 126, variables: 2, inline expansions: 1 (50 bytes) */

// <012D5BA4> engine2/interop.engine.cpp:10515
// variables: 2
void g_pRsrcSystm_DestroyResourceManifest(HResourceManifest__* manifest)
{
	const char   __FUNCTION__; // 47478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10519
	}
} /* size: 0, variables: 1 */

// <012D5B2B> engine2/interop.engine.cpp:10524
// variables: 2
void g_pRsrcSystm_IsManifestLoaded(HResourceManifest__* manifest)
{
	const char   __FUNCTION__; // 47289
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10528
	}
} /* size: 0, variables: 1 */

// <012D5AD0> engine2/interop.engine.cpp:10533
// variable: 1
void g_pRsrcSystm_GetAllCodeManifests(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* __values)
{
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* values; // 10537
} /* size: 55, variables: 1 */

// <012D5A38> engine2/interop.engine.cpp:10544
// variables: 2
void g_pSceneSystem_DeleteSceneObject(CSceneObject* pObj)
{
	const char   __FUNCTION__; // 47370
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10548
	}
} /* size: 0, variables: 1 */

// <012D59A0> engine2/interop.engine.cpp:10553
// variables: 2
void g_pSceneSystem_DeleteSceneObjectAtFrameEnd(CSceneObject* pObj)
{
	const char   __FUNCTION__; // 47640
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10557
	}
} /* size: 0, variables: 1 */

// <012D5761> engine2/interop.engine.cpp:10562
// variables: 2
// function calls: 8
void g_pSceneSystem_CreateSkyBox(HMaterialStrong* skyMaterial, ISceneWorld* world)
{
	const char   __FUNCTION__; // 47235
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10566
	}
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 15
	ResourceHandle_GetHandle(HMaterialStrong* target); // 10568
	CSceneObject::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CSceneSkyBoxObject*>(CSceneSkyBoxObject* c); // 10568
} /* size: 0, variables: 1, inline expansions: 8 (79 bytes) */

// <012D5668> engine2/interop.engine.cpp:10571
// variables: 2
// function calls: 3
void g_pSceneSystem_CreateDecal(ISceneWorld* world)
{
	const char   __FUNCTION__; // 47208
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10575
	}
	CSceneObject::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CDecalSceneObject*>(CDecalSceneObject* c); // 10577
} /* size: 0, variables: 1, inline expansions: 3 (58 bytes) */

// <012D55D8> engine2/interop.engine.cpp:10580
// variables: 2
void g_pSceneSystem_BeginRenderingDynamicView(ISceneView* pView)
{
	const char   __FUNCTION__; // 47586
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10584
	}
} /* size: 0, variables: 1 */

// <012D536E> engine2/interop.engine.cpp:10589
// variables: 2
// function calls: 5
void g_pSceneSystem_AddShadowView(const char* debugName, ISceneView* pParentView, CFrustum* frustum, RenderViewport_t* mainViewport, HRenderTextureStrong* rt, int rtIdx, int64 requiredFlags, int64 excludedFlags, int depthBias, float slopeScaledDepthBias, CFrustum* exclusionFrustum)
{
	const char   __FUNCTION__; // 47262
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10593
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10595
} /* size: 0, variables: 1, inline expansions: 5 (27 bytes) */

// <012D5005> engine2/interop.engine.cpp:10598
// variables: 10
// function calls: 7
void g_pSceneSystem_AddShadowView_1(const char* __debugName, ISceneView* __pParentView, CFrustum* __frustum, RenderViewport_t* __mainViewport, HRenderTextureStrong* __rt, int __rtIdx, int64 __requiredFlags, int64 __excludedFlags, int __depthBias, float __slopeScaledDepthBias)
{
	const char* debugName; // 10602
	ISceneView* pParentView; // 10603
	CFrustum* frustum; // 10604
	RenderViewport_t mainViewport; // 10605
	CWeakHandle<InfoForResourceTypeCTextureBase> rt; // 10606
	int rtIdx; // 10607
	ESceneObjectFlags requiredFlags; // 10608
	ESceneObjectFlags excludedFlags; // 10609
	int depthBias; // 10610
	float slopeScaledDepthBias; // 10611
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10606
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 10614
} /* size: 148, variables: 10, inline expansions: 7 (19 bytes) */

// <012D4E81> engine2/interop.engine.cpp:10618
// variables: 2
// function calls: 3
void g_pSceneSystem_GetWellKnownTexture(int64 a)
{
	const char   __FUNCTION__; // 47424
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10622
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 10624
} /* size: 0, variables: 1, inline expansions: 3 (40 bytes) */

// <012D4CFD> engine2/interop.engine.cpp:10627
// variables: 2
// function calls: 3
void g_pSceneSystem_GetWellKnownMaterialHandle(int64 a)
{
	const char   __FUNCTION__; // 47613
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10631
	}
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 10633
} /* size: 0, variables: 1, inline expansions: 3 (40 bytes) */

// <012D4CE4> engine2/interop.engine.cpp:10636
void g_pSceneSystem_GetPerFrameStats(void)
{
} /* size: 23 */

// <012D4C0D> engine2/interop.engine.cpp:10646
// variables: 2
// function calls: 2
void g_pSceneSystem_CreateWorld(const char* debugName)
{
	const char   __FUNCTION__; // 47208
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10650
	}
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<ISceneWorld*>(ISceneWorld* c); // 10652
} /* size: 0, variables: 1, inline expansions: 2 (26 bytes) */

// <012D4B75> engine2/interop.engine.cpp:10655
// variables: 2
void g_pSceneSystem_DestroyWorld(ISceneWorld* world)
{
	const char   __FUNCTION__; // 47235
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10659
	}
} /* size: 0, variables: 1 */

// <012D4B1E> engine2/interop.engine.cpp:10664
// variables: 2
void g_pSceneSystem_PerformEndOfFrameDeletes(void)
{
	const char   __FUNCTION__; // 47559
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10668
	}
} /* size: 0, variables: 1 */

// <012D4A5D> engine2/interop.engine.cpp:10673
// variables: 3
void g_pSceneSystem_SetupPerObjectLighting(CRenderAttributes* __renderAttributes, CSceneObject* __pSceneObject, ISceneLayer* __pSceneLayerInterface)
{
	CRenderAttributes* renderAttributes; // 10677
	CSceneObject* pSceneObject; // 10678
	ISceneLayer* pSceneLayerInterface; // 10679
} /* size: 44, variables: 3 */

// <012D44BB> engine2/interop.engine.cpp:10686
// variables: 2
// function calls: 25
void g_pSceneSystem_CreatePointLight(ISceneWorld* __pWorld)
{
	ISceneWorld* pWorld; // 10690
	LightDesc_t desc; // 10693
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 217
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(); // 153
	CUtlStringToken::CUtlStringToken(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 258
	Vector::operator=(
			const Vector& vOther);  // 268
	Vector::operator=(
			const Vector& vOther);  // 269
	LightDesc_t::Clear(); // 154
	LightDesc_t::LightDesc_t(); // 10693
	Vector::operator=(
			const Vector& vOther);  // 341
	Vector::operator=(
			const Vector& vOther);  // 339
	LightDesc_t::InitPoint(
			const Vector& pos,
			const Vector& color);  // 10695
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 10695
	CSceneObject::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CSceneLightObject*>(CSceneLightObject* c); // 10697
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 211
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::~CStrongHandleCopyable(); // 76
	LightDesc_t::~LightDesc_t(); // 10700
} /* size: 547, variables: 2, inline expansions: 25 (749 bytes) */

// <012D3D60> engine2/interop.engine.cpp:10701
// variables: 2
// function calls: 33
void g_pSceneSystem_CreateSpotLight(ISceneWorld* __pWorld)
{
	ISceneWorld* pWorld; // 10705
	LightDesc_t desc; // 10708
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 264
	Vector::operator=(
			const Vector& vOther);  // 268
	Vector::operator=(
			const Vector& vOther);  // 269
	LightDesc_t::Clear(); // 154
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 217
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(); // 153
	CUtlStringToken::CUtlStringToken(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	LightDesc_t::LightDesc_t(); // 10708
	Vector::operator=(
			const Vector& vOther);  // 377
	Vector::operator-=(
			const Vector& v);  // 379
	Vector::operator=(
			const Vector& vOther);  // 375
	_mm_load_ss(const float* __P); // 35
	_mm_rsqrt_ss(__m128 __A); // 35
	_mm_cvtss_f32(__m128 __A); // 35
	FastRSqrtFast(float x); // 49
	FastRSqrt(float x); // 2837
	VectorNormalizeFast(Vector& vec); // 380
	LightDesc_t::InitSpot(
		const Vector& pos,
		const Vector& color,
		const Vector& point_at,
		float inner_cone_boundary,
		float outer_cone_boundary);  // 10710
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 10710
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 10710
	CSceneObject::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CSceneLightObject*>(CSceneLightObject* c); // 10712
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 211
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::~CStrongHandleCopyable(); // 76
	LightDesc_t::~LightDesc_t(); // 10715
} /* size: 667, variables: 2, inline expansions: 33 (1027 bytes) */

// <012D3886> engine2/interop.engine.cpp:10716
// variables: 2
// function calls: 21
void g_pSceneSystem_CreateOrthoLight(ISceneWorld* __pWorld)
{
	ISceneWorld* pWorld; // 10720
	LightDesc_t desc; // 10723
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 223
	Vector::operator=(
			const Vector& vOther);  // 268
	Vector::operator=(
			const Vector& vOther);  // 269
	LightDesc_t::Clear(); // 154
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 217
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(); // 153
	CUtlStringToken::CUtlStringToken(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	LightDesc_t::LightDesc_t(); // 10723
	CSceneObject::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CSceneLightObject*>(CSceneLightObject* c); // 10727
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 211
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::~CStrongHandleCopyable(); // 76
	LightDesc_t::~LightDesc_t(); // 10730
} /* size: 531, variables: 2, inline expansions: 21 (742 bytes) */

// <012D32AA> engine2/interop.engine.cpp:10731
// variables: 3
// function calls: 25
void g_pSceneSystem_CreateDirectionalLight(ISceneWorld* __pWorld, Vector* __direction)
{
	ISceneWorld* pWorld; // 10735
	Vector direction; // 10736
	LightDesc_t desc; // 10739
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 264
	Vector::operator=(
			const Vector& vOther);  // 268
	Vector::operator=(
			const Vector& vOther);  // 269
	LightDesc_t::Clear(); // 154
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 217
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(); // 153
	CUtlStringToken::CUtlStringToken(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	LightDesc_t::LightDesc_t(); // 10739
	Vector::operator=(
			const Vector& vOther);  // 358
	Vector::operator=(
			const Vector& vOther);  // 356
	LightDesc_t::InitDirectional(
			const Vector& dir,
			const Vector& color);  // 10741
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 10741
	CSceneObject::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CSceneLightObject*>(CSceneLightObject* c); // 10743
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 211
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::~CStrongHandleCopyable(); // 76
	LightDesc_t::~LightDesc_t(); // 10746
} /* size: 539, variables: 3, inline expansions: 25 (657 bytes) */

// <012D2D24> engine2/interop.engine.cpp:10747
// variables: 4
// function calls: 24
void g_pSceneSystem_CreateEnvMap(ISceneWorld* __pWorld, int __nProjectionMode)
{
	ISceneWorld* pWorld; // 10751
	int nProjectionMode; // 10752
	LightDesc_t desc; // 10755
	CEnvMapSceneObject* pSceneObject; // 10759
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 217
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(); // 153
	CUtlStringToken::CUtlStringToken(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 223
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 258
	Vector::operator=(
			const Vector& vOther);  // 268
	Vector::operator=(
			const Vector& vOther);  // 269
	LightDesc_t::Clear(); // 154
	LightDesc_t::LightDesc_t(); // 10755
	Vector::operator=(
			const Vector& vOther);  // 397
	LightDesc_t::InitEnvironmentProbe(
				const Vector& pos,
				float flInfluenceRadius);  // 10756
	CSceneObject::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CEnvMapSceneObject*>(CEnvMapSceneObject* c); // 10761
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 211
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::~CStrongHandleCopyable(); // 76
	LightDesc_t::~LightDesc_t(); // 10764
} /* size: 540, variables: 4, inline expansions: 24 (773 bytes) */

// <012D2C2B> engine2/interop.engine.cpp:10765
// variables: 2
// function calls: 3
void g_pSceneSystem_CreateLightProbeVolume(ISceneWorld* pWorld)
{
	const char   __FUNCTION__; // 47505
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10769
	}
	CSceneObject::GetManagedHandle(); // 42
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<CSceneLightProbeVolumeObject*>(CSceneLightProbeVolumeObject* c); // 10771
} /* size: 0, variables: 1, inline expansions: 3 (58 bytes) */

// <012D2B93> engine2/interop.engine.cpp:10774
// variables: 2
void g_pSceneSystem_MarkEnvironmentMapObjectUpdated(CEnvMapSceneObject* pEnvMap)
{
	const char   __FUNCTION__; // 47743
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10778
	}
} /* size: 0, variables: 1 */

// <012D2AFB> engine2/interop.engine.cpp:10783
// variables: 2
void g_pSceneSystem_MarkLightProbeVolumeObjectUpdated(CSceneLightProbeVolumeObject* pLightProbe)
{
	const char   __FUNCTION__; // 47792
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10787
	}
} /* size: 0, variables: 1 */

// <012D29DC> engine2/interop.engine.cpp:10792
// variables: 5
void g_pSceneSystem_AddCullingBox(ISceneWorld* __pWorld, int __nCullMode, Vector* __vOrigin, QAngle* __vAngles, Vector* __vExtents)
{
	ISceneWorld* pWorld; // 10796
	bool nCullMode; // 10797
	Vector vOrigin; // 10798
	QAngle vAngles; // 10799
	Vector vExtents; // 10800
} /* size: 135, variables: 5 */

// <012D2928> engine2/interop.engine.cpp:10807
// variables: 2
void g_pSceneSystem_RemoveCullingBox(ISceneWorld* pWorld, unsigned int nBoxId)
{
	const char   __FUNCTION__; // 47343
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10811
	}
} /* size: 0, variables: 1 */

// <012D2874> engine2/interop.engine.cpp:10816
// variables: 2
void g_pSceneSystem_AddVolumetricFogVolume(ISceneWorld* pWorld, SceneVolumetricFogVolume_t* volume)
{
	const char   __FUNCTION__; // 47505
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10820
	}
} /* size: 0, variables: 1 */

// <012D27BA> engine2/interop.engine.cpp:10825
// variables: 2
void g_pSceneSystem_RemoveVolumetricFogVolume(ISceneWorld* pWorld, unsigned int nId)
{
	const char   __FUNCTION__; // 47586
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10829
	}
} /* size: 0, variables: 1 */

// <012D25EE> engine2/interop.engine.cpp:10834
// variables: 3
// function calls: 5
void g_pSceneSystem_DownsampleTexture(IRenderContext* __ctx, HRenderTextureStrong* __src, unsigned char __nDownsampleType)
{
	IRenderContext* ctx; // 10838
	CWeakHandle<InfoForResourceTypeCTextureBase> src; // 10839
	unsigned char nDownsampleType; // 10840
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 10839
} /* size: 100, variables: 3, inline expansions: 5 (11 bytes) */

// <012D254C> engine2/interop.engine.cpp:10847
// variables: 2
void g_pSceneSystem_BindTransformSlot(IRenderContext* pCtx, int nVBSlot, int nTransformSlotIndex)
{
	const char   __FUNCTION__; // 47370
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10851
	}
} /* size: 0, variables: 1 */

// <012D2498> engine2/interop.engine.cpp:10856
// variables: 2
void g_pSceneSystem_CreateRayTraceWorld(const char* pWorldDebugName, int nMaxRayTypes)
{
	const char   __FUNCTION__; // 47424
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10860
	}
} /* size: 0, variables: 1 */

// <012D23FA> engine2/interop.engine.cpp:10865
// variables: 2
void g_pSceneSystem_DestroyRayTraceWorld(IRayTraceSceneWorld* pRayTraceSceneWorld)
{
	const char   __FUNCTION__; // 47451
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10869
	}
} /* size: 0, variables: 1 */

// <012D2379> engine2/interop.engine.cpp:10874
// variables: 2
void g_pSceneSystem_SetGPUProfilerMode(int64 eProfilerMode)
{
	const char   __FUNCTION__; // 47397
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10878
	}
} /* size: 0, variables: 1 */

// <012D2315> engine2/interop.engine.cpp:10883
// variables: 2
void g_pSceneSystem_GetGPUProfilerMode(void)
{
	const char   __FUNCTION__; // 47397
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10887
	}
} /* size: 0, variables: 1 */

// <012D1E57> engine2/interop.engine.cpp:10892
// variables: 2
// function calls: 21
void g_pSceneSystem_GetGpuTimestampCount(void)
{
	CUtlVector<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> > timestamps; // 10898
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::CUtlVector(); // 10898
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::Count(); // 10900
	{
		int i; // 1721
		CUtlMemory<SceneSystemTimestampFrameData_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 239
		SceneSystemTimestampFrameData_t::~SceneSystemTimestampFrameData_t(); // 1526
		Destruct<SceneSystemTimestampFrameData_t>(SceneSystemTimestampFrameData_t* pMemory); // 1723
	}
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::Purge(); // 903
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::Purge(); // 1799
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::Purge(); // 560
	ValidateAlignment<SceneSystemTimestampFrameData_t>(void); // 508
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::Purge(); // 510
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::~CUtlVector(); // 10903
} /* size: 227, variables: 1, inline expansions: 16 (505 bytes) */

// <012D196C> engine2/interop.engine.cpp:10904
// variables: 3
// function calls: 23
void g_pSceneSystem_GetGpuTimestampDuration(int __index)
{
	int index; // 10908
	CUtlVector<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> > timestamps; // 10911
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::CUtlVector(); // 10911
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::operator[](
			int i);  // 10915
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::Count(); // 10913
	{
		int i; // 1721
		CUtlMemory<SceneSystemTimestampFrameData_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 239
		SceneSystemTimestampFrameData_t::~SceneSystemTimestampFrameData_t(); // 1526
		Destruct<SceneSystemTimestampFrameData_t>(SceneSystemTimestampFrameData_t* pMemory); // 1723
	}
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::Purge(); // 903
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::Purge(); // 1799
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::Purge(); // 560
	ValidateAlignment<SceneSystemTimestampFrameData_t>(void); // 508
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::Purge(); // 510
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::~CUtlVector(); // 10920
} /* size: 265, variables: 2, inline expansions: 18 (488 bytes) */

// <012D13D8> engine2/interop.engine.cpp:10921
// variables: 3
// function calls: 24
void g_pSceneSystem_GetGpuTimestampName(int __index)
{
	int index; // 10925
	CUtlVector<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> > timestamps; // 10928
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::CUtlVector(); // 10928
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::Count(); // 10930
	{
		int i; // 1721
		CUtlMemory<SceneSystemTimestampFrameData_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 239
		SceneSystemTimestampFrameData_t::~SceneSystemTimestampFrameData_t(); // 1526
		Destruct<SceneSystemTimestampFrameData_t>(SceneSystemTimestampFrameData_t* pMemory); // 1723
	}
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::Purge(); // 903
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::Purge(); // 1799
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::Purge(); // 560
	ValidateAlignment<SceneSystemTimestampFrameData_t>(void); // 508
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::Purge(); // 510
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::~CUtlVector(); // 10937
	CUtlMemory<SceneSystemTimestampFrameData_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::operator[](
			int i);  // 10932
	CUtlString::Get(); // 10932
} /* size: 299, variables: 2, inline expansions: 19 (514 bytes) */

// <012D134A> engine2/interop.engine.cpp:10938
// variables: 2
void g_pSceneSystem_SetManagedPerfMarker(IRenderContext* ctx, const char* markerName)
{
	const char   __FUNCTION__; // 47451
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10942
	}
} /* size: 0, variables: 1 */

// <012D12F3> engine2/interop.engine.cpp:10947
// variables: 2
void g_pSceneUtils_CreateTonemapSystem(void)
{
	const char   __FUNCTION__; // 47397
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10951
	}
} /* size: 0, variables: 1 */

// <012D1255> engine2/interop.engine.cpp:10956
// variables: 2
void g_pSceneUtils_DestroyTonemapSystem(ITonemapSystem* pTonemapSystem)
{
	const char   __FUNCTION__; // 47424
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10960
	}
} /* size: 0, variables: 1 */

// <012D11FE> engine2/interop.engine.cpp:10965
// variables: 2
void g_pSceneUtils_CreateVolumetricFog(void)
{
	const char   __FUNCTION__; // 47397
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10969
	}
} /* size: 0, variables: 1 */

// <012D1166> engine2/interop.engine.cpp:10974
// variables: 2
void g_pSceneUtils_DestroyVolumetricFog(IVolumetricFog* pVolumetricFog)
{
	const char   __FUNCTION__; // 47424
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10978
	}
} /* size: 0, variables: 1 */

// <012D110F> engine2/interop.engine.cpp:10983
// variables: 2
void g_pSndSystmntrnl_GetNumAudioDevices(void)
{
	const char   __FUNCTION__; // 47451
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10987
	}
} /* size: 0, variables: 1 */

// <012D1076> engine2/interop.engine.cpp:10992
// variables: 2
void g_pSndSystmntrnl_GetAudioDeviceDesc(int index)
{
	const char   __FUNCTION__; // 47451
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10996
	}
} /* size: 0, variables: 1 */

// <012D0F1E> engine2/interop.engine.cpp:11001
// variables: 2
// function calls: 3
void g_pSndSystmntrnl_GetAudioDeviceId(int index)
{
	const char   __FUNCTION__; // 47397
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 11005
	}
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 11007
	CUtlString::~CUtlString(); // 11007
} /* size: 0, variables: 1, inline expansions: 3 (60 bytes) */

// <012D0DC6> engine2/interop.engine.cpp:11010
// variables: 2
// function calls: 3
void g_pSndSystmntrnl_GetAudioDeviceName(int index)
{
	const char   __FUNCTION__; // 47451
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 11014
	}
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 11016
	CUtlString::~CUtlString(); // 11016
} /* size: 0, variables: 1, inline expansions: 3 (60 bytes) */

// <012D0C83> engine2/interop.engine.cpp:11019
// variables: 2
// function calls: 3
void g_pSndSystmntrnl_GetActiveAudioDevice(void)
{
	const char   __FUNCTION__; // 47505
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 11023
	}
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 11025
	CUtlString::~CUtlString(); // 11025
} /* size: 0, variables: 1, inline expansions: 3 (60 bytes) */

// <012D0B4B> engine2/interop.engine.cpp:11028
// variables: 2
// function calls: 2
void g_pSndSystmntrnl_SetActiveAudioDevice(const char* id)
{
	const char   __FUNCTION__; // 47505
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 11032
	}
	CUtlString::CUtlString(
			const char* pString);  // 11034
	CUtlString::~CUtlString(); // 11034
} /* size: 0, variables: 1, inline expansions: 2 (36 bytes) */

// <012D0AB3> engine2/interop.engine.cpp:11037
// variables: 2
void g_pSndSystmntrnl_PlaySoundAtOSLevel(const char* filename)
{
	const char   __FUNCTION__; // 47451
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 11041
	}
} /* size: 0, variables: 1 */

// <012D0A1B> engine2/interop.engine.cpp:11046
// variables: 2
void g_pSndSystmntrnl_PrecacheSound(const char* pSoundName)
{
	const char   __FUNCTION__; // 47316
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 11050
	}
} /* size: 0, variables: 1 */

// <012D08FF> engine2/interop.engine.cpp:11055
// variables: 2
void g_pSndSystmntrnl_CreateSound(const char* pSoundName, int nChannels, int nRate, int nFormat, int nSampleCount, float flDuration, int bLoop, void* pData, int nDataSize)
{
	const char   __FUNCTION__; // 47262
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 11059
	}
} /* size: 0, variables: 1 */

// <012D0861> engine2/interop.engine.cpp:11064
// variables: 2
void g_pSndSystmntrnl_PreloadSound(CSfxTable* pSfx)
{
	const char   __FUNCTION__; // 47289
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 11068
	}
} /* size: 0, variables: 1 */

// <012D080A> engine2/interop.engine.cpp:11073
// variables: 2
void g_pWrldRndrrMgr_ServiceWorldRequests(void)
{
	const char   __FUNCTION__; // 47478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 11077
	}
} /* size: 0, variables: 1 */

// <012D0701> engine2/interop.engine.cpp:11082
// variables: 4
void g_pWrldRndrrMgr_UpdateObjectsForRendering(uint32 __worldGroupId, Vector* __eyePos, float __flLODScale, float __flMaxVisibleDistance)
{
	CUtlStringToken worldGroupId; // 11086
	Vector eyePos; // 11087
	float flLODScale; // 11088
	float flMaxVisibleDistance; // 11089
} /* size: 94, variables: 4 */

// <012D02CC> engine2/interop.engine.cpp:11096
// variables: 9
// function calls: 11
void g_pWrldRndrrMgr_CreateWorld(const char* __pMapName, ISceneWorld* __pSceneWorld, int __bAsyncLoad, int __bIgnoreExistingWorlds, int __bLoadVis, int __bPrecacheOnly, uint32 __worldGroupId, CTransformUnaligned* __transform)
{
	const char* pMapName; // 11100
	ISceneWorld* pSceneWorld; // 11101
	bool bAsyncLoad; // 11102
	bool bIgnoreExistingWorlds; // 11103
	bool bLoadVis; // 11104
	bool bPrecacheOnly; // 11105
	CUtlStringToken worldGroupId; // 11106
	CTransformUnaligned transform; // 11107
	CreateWorldInfo_t info; // 11110
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 11106
	matrix3x4_t::matrix3x4_t(); // 248
	CTransformUnaligned::ToMatrix(); // 11118
	CUtlStringToken::CUtlStringToken(); // 71
	CreateWorldInfo_t::CreateWorldInfo_t(); // 11110
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 11118
} /* size: 338, variables: 9, inline expansions: 11 (302 bytes) */

// <012D0238> engine2/interop.engine.cpp:11123
// variables: 2
void g_pWrldRndrrMgr_MountWorldVPK(const char* pWorldName, const char* pVpkPath)
{
	const char   __FUNCTION__; // 47289
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 11127
	}
} /* size: 0, variables: 1 */

// <012D01BF> engine2/interop.engine.cpp:11132
// variables: 2
void g_pWrldRndrrMgr_UnmountWorldVPK(const char* pWorldName)
{
	const char   __FUNCTION__; // 47343
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 11136
	}
} /* size: 0, variables: 1 */

// <012D0060> engine2/interop.engine.cpp:11153
void global_Plat_MessageBox(const char* title, const char* message)
{
} /* size: 9 */

// <012CFFC3> engine2/interop.engine.cpp:11159
void global_Plat_GetDesktopResolution(int nMonitorIndex, int* pWidth, int* pHeight, unsigned int* pRefreshRate)
{
} /* size: 18 */

// <012CFF97> engine2/interop.engine.cpp:11165
void global_Plat_GetDefaultMonitorIndex(void)
{
} /* size: 9 */

// <012CFF49> engine2/interop.engine.cpp:11171
void global_Plat_SafeRemoveFile(const char* file)
{
} /* size: 20 */

// <012CFEB7> engine2/interop.engine.cpp:11183
void global_Plat_SetCurrentDirectory(const char* filename)
{
} /* size: 9 */

// <012CFE8B> engine2/interop.engine.cpp:11189
void global_Plat_GetCurrentFrame(void)
{
} /* size: 9 */

// <012CFE42> engine2/interop.engine.cpp:11195
void global_Plat_SetCurrentFrame(uint64 nFrame)
{
} /* size: 9 */

// <012CFDF9> engine2/interop.engine.cpp:11201
void global_Plat_ChangeCurrentFrame(int64 nDelta)
{
} /* size: 9 */

// <012CFDCD> engine2/interop.engine.cpp:11207
void global_Plat_IsRunningOnCustomerMachine(void)
{
} /* size: 18 */

// <012CFDA1> engine2/interop.engine.cpp:11213
void global_Plat_HasClipboardText(void)
{
} /* size: 18 */

// <012CFD1E> engine2/interop.engine.cpp:11225
void global_Plat_GetClipboardText(void)
{
} /* size: 22 */

// <012CFCF2> engine2/interop.engine.cpp:11231
void global_Plat_ClearClipboardText(void)
{
} /* size: 9 */

// <012CFCB1> engine2/interop.engine.cpp:11237
// variable: 1
void global_IsWindowFocused(void)
{
	PlatWindow_t window; // 11243
} /* size: 40, variables: 1 */

// <012CFCAB> engine2/interop.engine.cpp:11248
void global_IsRetail(void)
{
} /* size: 0 */

// <012CFC40> engine2/interop.engine.cpp:11258
// variable: 1
void global_HasLaunchParameter(const char* __name)
{
	const char* name; // 11262
} /* size: 49, variables: 1 */

// <012CFC14> engine2/interop.engine.cpp:11269
void global_Plat_SetNoAssert(void)
{
} /* size: 9 */

// <012CFBCB> engine2/interop.engine.cpp:11275
void global_Plat_ExitProcess(int exitCode)
{
} /* size: 13 */

// <012CF7E4> engine2/interop.engine.cpp:11281
// variable: 1
// function calls: 11
void global_GetGameRootFolder(void)
{
	CPathBufferString gamePath; // 11287
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
			int nMaxElements);  // 11288
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 11289
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 11287
} /* size: 382, variables: 1, inline expansions: 11 (651 bytes) */

// <012CF4C7> engine2/interop.engine.cpp:11293
// variable: 1
// function calls: 10
void global_GetGameSearchPath(void)
{
	CPathBufferString gamePath; // 11299
	CFileSystemPassThru::GetSearchPathArgs(
				const char* pathID,
				CBufferString* pPath);  // 234
	CFileSystemPassThru::GetSearchPathArgs(
				const char* pathID,
				CBufferString* pPath);  // 234
	CFileSystemPassThru::GetSearchPathArgs(
				const char* pathID,
				CBufferString* pPath);  // 234
	CFileSystemPassThru::GetSearchPathArgs(
				const char* pathID,
				CBufferString* pPath);  // 11300
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 11301
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 11299
} /* size: 350, variables: 1, inline expansions: 10 (429 bytes) */

// <012CF49B> engine2/interop.engine.cpp:11305
void global_SourceEngineUnitTestInit(void)
{
} /* size: 18 */

// <012CF436> engine2/interop.engine.cpp:11311
void global_SourceEnginePreInit(const char* lpCmdLine, CMaterialSystem2AppSystemDict* appDict)
{
} /* size: 18 */

// <012CF3ED> engine2/interop.engine.cpp:11317
void global_SourceEngineInit(CMaterialSystem2AppSystemDict* appDict)
{
} /* size: 18 */

// <012CF368> engine2/interop.engine.cpp:11323
void global_SourceEngineFrame(CMaterialSystem2AppSystemDict* appDict, double currentTime, double previousTime)
{
} /* size: 18 */

// <012CF2FB> engine2/interop.engine.cpp:11329
void global_SourceEngineShutdown(CMaterialSystem2AppSystemDict* appDict, int forced)
{
} /* size: 19 */

// <012CF2CF> engine2/interop.engine.cpp:11335
void global_GetDiagonalDpi(void)
{
} /* size: 9 */

// <012CF2A3> engine2/interop.engine.cpp:11345
void global_AppIsDedicatedServer(void)
{
} /* size: 18 */

// <012CF277> engine2/interop.engine.cpp:11351
void global_ToolsStallMonitor_IndicateActivity(void)
{
} /* size: 9 */

// <012CF23B> engine2/interop.engine.cpp:11357
void globalOVRLipSync_ovrLipSync_Initialize(int sampleRate, int bufferSize)
{
} /* size: 7 */

// <012CF221> engine2/interop.engine.cpp:11364
void globalOVRLipSync_ovrLipSync_Shutdown(void)
{
} /* size: 7 */

// <013588A4> engine2/interop.engine.cpp:11371
void globalOVRLipSync_ovrLipSync_DestroyContext(unsigned int context)
{
} /* size: 7 */

// <012CF1F2> engine2/interop.engine.cpp:11378
void globalOVRLipSync_ovrLipSync_ResetContext(unsigned int context)
{
} /* size: 0 */

// <012CF1B6> engine2/interop.engine.cpp:11385
void globalOVRLipSync_ovrLipSync_CreateContext(unsigned int* pContext, int64 provider)
{
} /* size: 7 */

// <012CF15C> engine2/interop.engine.cpp:11392
void globalOVRLipSync_ovrLipSync_CreateContextEx(unsigned int* pContext, int64 provider, int sampleRate, int enableAcceleration)
{
} /* size: 7 */

// <012CF102> engine2/interop.engine.cpp:11399
void globalOVRLipSync_ovrLipSync_SendSignal(unsigned int context, int64 signal, int arg1, int arg2)
{
} /* size: 7 */

// <012CF099> engine2/interop.engine.cpp:11406
void globalOVRLipSync_ovrLipSync_ProcessFrameEx(unsigned int context, void* audioBuffer, int sampleCount, int64 dataType, ovrLipSyncFrame* frame)
{
} /* size: 7 */

// <012CF00F> engine2/interop.engine.cpp:11419
void globalSteam_SteamAPI_RunCallbacks(void)
{
} /* size: 9 */

// <012CEFE3> engine2/interop.engine.cpp:11425
void globalSteam_SteamGameServer_RunCallbacks(void)
{
} /* size: 9 */

// <012CEF91> engine2/interop.engine.cpp:11431
// function call: 1
void globalSteam_SteamUser(void)
{
	SteamUser(void); // 11434
} /* size: 25, inline expansions: 1 (12 bytes) */

// <012CEF39> engine2/interop.engine.cpp:11437
// function call: 1
void globalSteam_SteamFriends(void)
{
	SteamFriends(void); // 11440
} /* size: 25, inline expansions: 1 (12 bytes) */

// <012CEECA> engine2/interop.engine.cpp:11443
// function calls: 2
void globalSteam_SteamNetworkingMessages(void)
{
	SteamNetworkingMessages_SteamAPI(void); // 193
	SteamNetworkingMessages(void); // 11446
} /* size: 25, inline expansions: 2 (24 bytes) */

// <012CEDAA> engine2/interop.engine.cpp:11461
// function call: 1
void globalSteam_SteamGameServer(void)
{
	SteamGameServer(void); // 11464
} /* size: 25, inline expansions: 1 (12 bytes) */

// <012CED52> engine2/interop.engine.cpp:11467
// function call: 1
void globalSteam_SteamApps(void)
{
	SteamApps(void); // 11470
} /* size: 25, inline expansions: 1 (12 bytes) */

// <012CECFA> engine2/interop.engine.cpp:11473
// function call: 1
void globalSteam_SteamUtils(void)
{
	SteamUtils(void); // 11476
} /* size: 25, inline expansions: 1 (12 bytes) */

// <012CECC8> engine2/interop.engine.cpp:11479
void globalSteam_SteamGameServer_BSecure(void)
{
} /* size: 18 */

// <012CEC9C> engine2/interop.engine.cpp:11485
void globalSteam_SteamGameServer_GetSteamID(void)
{
} /* size: 9 */

// <012CEC70> engine2/interop.engine.cpp:11491
void globalSteam_SteamGameServer_Shutdown(void)
{
} /* size: 9 */

// <012CEC20> engine2/interop.engine.cpp:11497
// function call: 1
void globalSteam_SteamGameServer_ReleaseCurrentThreadMemory(void)
{
	SteamGameServer_ReleaseCurrentThreadMemory(void); // 11500
} /* size: 9, inline expansions: 1 (5 bytes) */

// <0135986D> engine2/interop.engine.cpp:11503
// function calls: 9
void globalSteam_SteamNetworkingSockets(void)
{
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 11509
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 11510
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 11511
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 11512
	globalSteam_SteamNetworkingSockets(void); // 11503
} /* size: 85, inline expansions: 9 (129 bytes) */

// <012CEC19> engine2/interop.engine.cpp:11503
void globalSteam_SteamNetworkingSockets(void)
{
} /* size: 0 */

// <012CEABE> engine2/interop.engine.cpp:11517
// variables: 3
// function call: 1
void globalSteam_SteamGameServer_Init(int __gamePort, int __queryPort, const char* __serverVersion)
{
	int gamePort; // 11521
	int queryPort; // 11522
	const char* serverVersion; // 11523
	SteamGameServer_InitEx(uint32 unIP,
				uint16 usGamePort,
				uint16 usQueryPort,
				EServerMode eServerMode,
				const char* pchVersionString,
				SteamErrMsg* pOutErrMsg);  // 11526
} /* size: 46, variables: 3, inline expansions: 1 (31 bytes) */

// <012CEA92> engine2/interop.engine.cpp:11530
void globalYoga_YGNodeNew(void)
{
} /* size: 9 */

// <012CEA49> engine2/interop.engine.cpp:11536
void globalYoga_YGNodeNewWithConfig(YGConfigRef config)
{
} /* size: 9 */

// <012CEA02> engine2/interop.engine.cpp:11542
void globalYoga_YGNodeFree(YGNodeRef r)
{
} /* size: 9 */

// <012CE9BB> engine2/interop.engine.cpp:11548
void globalYoga_YGNodeReset(YGNodeRef r)
{
} /* size: 9 */

// <012CE91C> engine2/interop.engine.cpp:11554
void globalYoga_YGNodeCalculateLayout(YGNodeRef r, float ownerWidth, float ownerHeight, int64 direction)
{
} /* size: 9 */

// <012CE8D5> engine2/interop.engine.cpp:11560
void globalYoga_YGNodeGetHasNewLayout(YGNodeRef r)
{
} /* size: 18 */

// <012CE86C> engine2/interop.engine.cpp:11566
void globalYoga_YGNodeSetHasNewLayout(YGNodeRef r, int b)
{
} /* size: 19 */

// <012CE825> engine2/interop.engine.cpp:11572
void globalYoga_YGNodeIsDirty(YGNodeRef r)
{
} /* size: 9 */

// <012CE757> engine2/interop.engine.cpp:11584
void globalYoga_YGNodeInsertChild(YGNodeRef owner, YGNodeRef child, int index)
{
} /* size: 12 */

// <012CE6F2> engine2/interop.engine.cpp:11590
void globalYoga_YGNodeRemoveChild(YGNodeRef owner, YGNodeRef child)
{
} /* size: 9 */

// <012CE6A9> engine2/interop.engine.cpp:11596
void globalYoga_YGNodeRemoveAllChildren(YGNodeRef owner)
{
} /* size: 9 */

// <012CE660> engine2/interop.engine.cpp:11602
void globalYoga_YGNodeGetChildCount(YGNodeRef owner)
{
} /* size: 9 */

// <012CE5B4> engine2/interop.engine.cpp:11614
void globalYoga_YGNodeSetConfig(YGNodeRef r, YGConfigRef congig)
{
} /* size: 9 */

// <012CE56D> engine2/interop.engine.cpp:11620
void globalYoga_YGNodeLayoutGetLeft(YGNodeRef r)
{
} /* size: 9 */

// <012CE526> engine2/interop.engine.cpp:11626
void globalYoga_YGNodeLayoutGetTop(YGNodeRef r)
{
} /* size: 9 */

// <012CE4DF> engine2/interop.engine.cpp:11632
void globalYoga_YGNodeLayoutGetRight(YGNodeRef r)
{
} /* size: 9 */

// <012CE498> engine2/interop.engine.cpp:11638
void globalYoga_YGNodeLayoutGetBottom(YGNodeRef r)
{
} /* size: 9 */

// <012CE451> engine2/interop.engine.cpp:11644
void globalYoga_YGNodeLayoutGetWidth(YGNodeRef r)
{
} /* size: 9 */

// <012CE3C3> engine2/interop.engine.cpp:11656
void globalYoga_YGNodeLayoutGetDirection(YGNodeRef r)
{
} /* size: 17 */

// <012CE317> engine2/interop.engine.cpp:11668
void globalYoga_YGNodeLayoutGetMargin(YGNodeRef node, int64 edge)
{
} /* size: 9 */

// <012CE24D> engine2/interop.engine.cpp:11680
void globalYoga_YGNodeLayoutGetPadding(YGNodeRef node, int64 edge)
{
} /* size: 9 */

// <012CE221> engine2/interop.engine.cpp:11686
void globalYoga_YGConfigNew(void)
{
} /* size: 9 */

// <012CE1DA> engine2/interop.engine.cpp:11692
void globalYoga_YGConfigFree(YGConfigRef c)
{
} /* size: 9 */

// <012CE16D> engine2/interop.engine.cpp:11698
void globalYoga_YGConfigSetUseWebDefaults(YGConfigRef config, int enabled)
{
} /* size: 19 */

// <012CE106> engine2/interop.engine.cpp:11704
void globalYoga_YGConfigSetPointScaleFactor(YGConfigRef config, float pixelsInPoint)
{
} /* size: 9 */

// <012CE0A1> engine2/interop.engine.cpp:11710
void globalYoga_YGNodeCopyStyle(YGNodeRef dstNode, YGNodeRef srcNode)
{
} /* size: 9 */

// <012CE03C> engine2/interop.engine.cpp:11716
void globalYoga_YGNodeStyleSetDirection(YGNodeRef node, int64 direction)
{
} /* size: 9 */

// <012CDF8E> engine2/interop.engine.cpp:11728
void globalYoga_YGNodeStyleSetFlexDirection(YGNodeRef node, int64 flexDirection)
{
} /* size: 9 */

// <012CDF45> engine2/interop.engine.cpp:11734
void globalYoga_YGNodeStyleGetFlexDirection(YGNodeRef node)
{
} /* size: 17 */

// <012CDEE0> engine2/interop.engine.cpp:11740
void globalYoga_YGNodeStyleSetJustifyContent(YGNodeRef node, int64 justifyContent)
{
} /* size: 9 */

// <012CDE97> engine2/interop.engine.cpp:11746
void globalYoga_YGNodeStyleGetJustifyContent(YGNodeRef node)
{
} /* size: 17 */

// <012CDE32> engine2/interop.engine.cpp:11752
void globalYoga_YGNodeStyleSetAlignContent(YGNodeRef node, int64 alignContent)
{
} /* size: 9 */

// <012CDDE9> engine2/interop.engine.cpp:11758
void globalYoga_YGNodeStyleGetAlignContent(YGNodeRef node)
{
} /* size: 17 */

// <012CDD84> engine2/interop.engine.cpp:11764
void globalYoga_YGNodeStyleSetAlignItems(YGNodeRef node, int64 alignItems)
{
} /* size: 9 */

// <012CDD3B> engine2/interop.engine.cpp:11770
void globalYoga_YGNodeStyleGetAlignItems(YGNodeRef node)
{
} /* size: 17 */

// <012CDCD6> engine2/interop.engine.cpp:11776
void globalYoga_YGNodeStyleSetAlignSelf(YGNodeRef node, int64 alignSelf)
{
} /* size: 9 */

// <012CDC8D> engine2/interop.engine.cpp:11782
void globalYoga_YGNodeStyleGetAlignSelf(YGNodeRef node)
{
} /* size: 17 */

// <012CDC28> engine2/interop.engine.cpp:11788
void globalYoga_YGNodeStyleSetPositionType(YGNodeRef node, int64 positionType)
{
} /* size: 9 */

// <012CDBDF> engine2/interop.engine.cpp:11794
void globalYoga_YGNodeStyleGetPositionType(YGNodeRef node)
{
} /* size: 17 */

// <012CDB7A> engine2/interop.engine.cpp:11800
void globalYoga_YGNodeStyleSetFlexWrap(YGNodeRef node, int64 flexWrap)
{
} /* size: 9 */

// <012CDB31> engine2/interop.engine.cpp:11806
void globalYoga_YGNodeStyleGetFlexWrap(YGNodeRef node)
{
} /* size: 17 */

// <012CDACC> engine2/interop.engine.cpp:11812
void globalYoga_YGNodeStyleSetOverflow(YGNodeRef node, int64 overflow)
{
} /* size: 9 */

// <012CDA1E> engine2/interop.engine.cpp:11824
void globalYoga_YGNodeStyleSetDisplay(YGNodeRef node, int64 display)
{
} /* size: 9 */

// <012CD9D5> engine2/interop.engine.cpp:11830
void globalYoga_YGNodeStyleGetDisplay(YGNodeRef node)
{
} /* size: 17 */

// <012CD96E> engine2/interop.engine.cpp:11836
void globalYoga_YGNodeStyleSetFlex(YGNodeRef node, float flex)
{
} /* size: 9 */

// <012CD925> engine2/interop.engine.cpp:11842
void globalYoga_YGNodeStyleGetFlex(YGNodeRef node)
{
} /* size: 9 */

// <012CD8BE> engine2/interop.engine.cpp:11848
void globalYoga_YGNodeStyleSetFlexGrow(YGNodeRef node, float flexGrow)
{
} /* size: 9 */

// <012CD875> engine2/interop.engine.cpp:11854
void globalYoga_YGNodeStyleGetFlexGrow(YGNodeRef node)
{
} /* size: 9 */

// <012CD80E> engine2/interop.engine.cpp:11860
void globalYoga_YGNodeStyleSetFlexShrink(YGNodeRef node, float flexShrink)
{
} /* size: 9 */

// <012CD7C5> engine2/interop.engine.cpp:11866
void globalYoga_YGNodeStyleGetFlexShrink(YGNodeRef node)
{
} /* size: 9 */

// <012CD75E> engine2/interop.engine.cpp:11872
void globalYoga_YGNodeStyleSetFlexBasis(YGNodeRef node, float flexBasis)
{
} /* size: 9 */

// <012CD6F7> engine2/interop.engine.cpp:11878
void globalYoga_YGNodeStyleSetFlexBasisPercent(YGNodeRef node, float flexBasis)
{
} /* size: 9 */

// <012CD6AE> engine2/interop.engine.cpp:11884
void globalYoga_YGNodeStyleSetFlexBasisAuto(YGNodeRef node)
{
} /* size: 9 */

// <012CD665> engine2/interop.engine.cpp:11890
void globalYoga_YGNodeStyleGetFlexBasis(YGNodeRef node)
{
} /* size: 9 */

// <012CD5E2> engine2/interop.engine.cpp:11896
void globalYoga_YGNodeStyleSetPosition(YGNodeRef node, int64 edge, float position)
{
} /* size: 9 */

// <012CD55F> engine2/interop.engine.cpp:11902
void globalYoga_YGNodeStyleSetPositionPercent(YGNodeRef node, int64 edge, float position)
{
} /* size: 9 */

// <012CD4FA> engine2/interop.engine.cpp:11908
void globalYoga_YGNodeStyleGetPosition(YGNodeRef node, int64 edge)
{
} /* size: 9 */

// <012CD477> engine2/interop.engine.cpp:11914
void globalYoga_YGNodeStyleSetMargin(YGNodeRef node, int64 edge, float margin)
{
} /* size: 9 */

// <012CD3F4> engine2/interop.engine.cpp:11920
void globalYoga_YGNodeStyleSetMarginPercent(YGNodeRef node, int64 edge, float margin)
{
} /* size: 9 */

// <012CD32A> engine2/interop.engine.cpp:11932
void globalYoga_YGNodeStyleGetMargin(YGNodeRef node, int64 edge)
{
} /* size: 9 */

// <012CD2A7> engine2/interop.engine.cpp:11938
void globalYoga_YGNodeStyleSetPadding(YGNodeRef node, int64 edge, float padding)
{
} /* size: 9 */

// <012CD224> engine2/interop.engine.cpp:11944
void globalYoga_YGNodeStyleSetPaddingPercent(YGNodeRef node, int64 edge, float padding)
{
} /* size: 9 */

// <012CD1BF> engine2/interop.engine.cpp:11950
void globalYoga_YGNodeStyleGetPadding(YGNodeRef node, int64 edge)
{
} /* size: 9 */

// <012CD054> engine2/interop.engine.cpp:11968
void globalYoga_YGNodeStyleSetGap(YGNodeRef node, int64 gutter, float gapLength)
{
} /* size: 9 */

// <012CCFEF> engine2/interop.engine.cpp:11974
void globalYoga_YGNodeStyleGetGap(YGNodeRef node, int64 gutter)
{
} /* size: 9 */

// <012CCF88> engine2/interop.engine.cpp:11980
void globalYoga_YGNodeStyleSetWidth(YGNodeRef node, float width)
{
} /* size: 9 */

// <012CCF21> engine2/interop.engine.cpp:11986
void globalYoga_YGNodeStyleSetWidthPercent(YGNodeRef node, float width)
{
} /* size: 9 */

// <012CCED8> engine2/interop.engine.cpp:11992
void globalYoga_YGNodeStyleSetWidthAuto(YGNodeRef node)
{
} /* size: 9 */

// <012CCE28> engine2/interop.engine.cpp:12004
void globalYoga_YGNodeStyleSetHeight(YGNodeRef node, float height)
{
} /* size: 9 */

// <012CCDC1> engine2/interop.engine.cpp:12010
void globalYoga_YGNodeStyleSetHeightPercent(YGNodeRef node, float height)
{
} /* size: 9 */

// <012CCCC8> engine2/interop.engine.cpp:12028
void globalYoga_YGNodeStyleSetMinWidth(YGNodeRef node, float minWidth)
{
} /* size: 9 */

// <012CCC61> engine2/interop.engine.cpp:12034
void globalYoga_YGNodeStyleSetMinWidthPercent(YGNodeRef node, float minWidth)
{
} /* size: 9 */

// <012CCC18> engine2/interop.engine.cpp:12040
void globalYoga_YGNodeStyleGetMinWidth(YGNodeRef node)
{
} /* size: 9 */

// <012CCBB1> engine2/interop.engine.cpp:12046
void globalYoga_YGNodeStyleSetMinHeight(YGNodeRef node, float minHeight)
{
} /* size: 9 */

// <012CCB4A> engine2/interop.engine.cpp:12052
void globalYoga_YGNodeStyleSetMinHeightPercent(YGNodeRef node, float minHeight)
{
} /* size: 9 */

// <012CCB01> engine2/interop.engine.cpp:12058
void globalYoga_YGNodeStyleGetMinHeight(YGNodeRef node)
{
} /* size: 9 */

// <012CCA9A> engine2/interop.engine.cpp:12064
void globalYoga_YGNodeStyleSetMaxWidth(YGNodeRef node, float maxWidth)
{
} /* size: 9 */

// <012CCA33> engine2/interop.engine.cpp:12070
void globalYoga_YGNodeStyleSetMaxWidthPercent(YGNodeRef node, float maxWidth)
{
} /* size: 9 */

// <012CC9EA> engine2/interop.engine.cpp:12076
void globalYoga_YGNodeStyleGetMaxWidth(YGNodeRef node)
{
} /* size: 9 */

// <012CC983> engine2/interop.engine.cpp:12082
void globalYoga_YGNodeStyleSetMaxHeight(YGNodeRef node, float maxHeight)
{
} /* size: 9 */

// <012CC91C> engine2/interop.engine.cpp:12088
void globalYoga_YGNodeStyleSetMaxHeightPercent(YGNodeRef node, float maxHeight)
{
} /* size: 9 */

// <012CC86C> engine2/interop.engine.cpp:12100
void globalYoga_YGNodeStyleSetAspectRatio(YGNodeRef node, float aspectRatio)
{
} /* size: 9 */

// <012CC823> engine2/interop.engine.cpp:12106
void globalYoga_YGNodeStyleGetAspectRatio(YGNodeRef node)
{
} /* size: 9 */

// <012CC7BE> engine2/interop.engine.cpp:12112
void globalYoga_YGNodeSetMeasureFunc(YGNodeRef node, YGMeasureFunc measureFunc)
{
} /* size: 9 */

// <012CC775> engine2/interop.engine.cpp:12118
void globalYoga_YGNodeHasMeasureFunc(YGNodeRef node)
{
} /* size: 18 */

// <012CC749> engine2/interop.engine.cpp:12124
void Glue_Networking_RunCallbacks(void)
{
} /* size: 9 */

// <012CC6E4> engine2/interop.engine.cpp:12130
void Glue_Networking_SetDebugFunction(int level, void* func)
{
} /* size: 9 */

// <012CC69B> engine2/interop.engine.cpp:12136
void Glue_Networking_GetAuthenticationStatus(void* debugMsg)
{
} /* size: 17 */

// <012CC652> engine2/interop.engine.cpp:12142
void Glue_Networking_GetRelayNetworkStatus(void* debugMsg)
{
} /* size: 17 */

// <012CC59C> engine2/interop.engine.cpp:12154
void Glue_Networking_CreateIpBasedSocket(int port, int hideAddress)
{
} /* size: 19 */

// <012CC553> engine2/interop.engine.cpp:12160
void Glue_Networking_CloseSocket(HSteamListenSocket socket)
{
} /* size: 9 */

// <012CC4F8> engine2/interop.engine.cpp:12166
void Glue_Networking_GetSocketAddress(HSteamListenSocket socket)
{
} /* size: 22 */

// <012CC4CC> engine2/interop.engine.cpp:12172
void Glue_Networking_BeginAsyncRequestFakeIP(void)
{
} /* size: 9 */

// <012CC492> engine2/interop.engine.cpp:12178
void Glue_Networking_GetIdentity(void)
{
} /* size: 22 */

// <012CC41D> engine2/interop.engine.cpp:12190
void Glue_Networking_DestroyPollGroup(HSteamNetPollGroup group)
{
} /* size: 9 */

// <012CC3B8> engine2/interop.engine.cpp:12196
void Glue_Networking_SetPollGroup(HSteamNetConnection connection, HSteamNetPollGroup group)
{
} /* size: 9 */

// <012CC337> engine2/interop.engine.cpp:12202
void Glue_Networking_GetPollGroupMessages(HSteamNetPollGroup group, void* array_of_pointers, int maxmessages)
{
} /* size: 9 */

// <012CC2D2> engine2/interop.engine.cpp:12208
void Glue_Networking_ConnectToSteamId(uint64 steamid, int virtualPort)
{
} /* size: 9 */

// <012CC289> engine2/interop.engine.cpp:12214
void Glue_Networking_ConnectToIpAddress(const char* address)
{
} /* size: 9 */

// <012CC1C3> engine2/interop.engine.cpp:12226
void Glue_Networking_AcceptConnection(HSteamNetConnection c)
{
} /* size: 9 */

// <012CC175> engine2/interop.engine.cpp:12232
const void* Glue_Networking_GetMessageDataBuffer(void* message)
{
} /* size: 9 */

// <012CC0D5> engine2/interop.engine.cpp:12238
const void* Glue_Networking_AllocateMessageWithManagedBuffer(HSteamNetConnection c, void* buffer, int size, int flags)
{
} /* size: 9 */

// <012CC051> engine2/interop.engine.cpp:12244
const void* Glue_Networking_AllocateMessage(HSteamNetConnection c, int size, int flags)
{
} /* size: 9 */

// <012CC00A> engine2/interop.engine.cpp:12250
void Glue_Networking_FlushMessagesOnConnection(HSteamNetConnection c)
{
} /* size: 9 */

// <012CBF6F> engine2/interop.engine.cpp:12256
void Glue_Networking_SendMessage(HSteamNetConnection c, void* data, int length, int flags)
{
} /* size: 17 */

// <012CBF0A> engine2/interop.engine.cpp:12262
void Glue_Networking_SendMessages(void* messages, int numberOfMessages)
{
} /* size: 9 */

// <012CBE8B> engine2/interop.engine.cpp:12268
void Glue_Networking_GetConnectionMessages(HSteamNetConnection c, void* array_of_pointers, int maxmessages)
{
} /* size: 9 */

// <012CBE44> engine2/interop.engine.cpp:12274
void Glue_Networking_GetConnectionState(HSteamNetConnection c)
{
} /* size: 9 */

// <012CBDEB> engine2/interop.engine.cpp:12280
void Glue_Networking_GetConnectionDescription(HSteamNetConnection c)
{
} /* size: 22 */

// <012CBD2F> engine2/interop.engine.cpp:12298
void Glue_RndrDvcMngr_WriteVideoConfig(void)
{
} /* size: 9 */

// <012CBC16> engine2/interop.engine.cpp:12310
void Glue_RndrDvcMngr_ChangeVideoMode(int fullscreen, int noborder, int vsync, int width, int height, int64 multisample)
{
} /* size: 37 */

// <012CBB8D> engine2/interop.engine.cpp:12316
void Glue_RndrDvcMngr_GetDisplayModes(DisplayMode_t* modes, int max, int windowed)
{
} /* size: 17 */

// <012CBA50> engine2/interop.engine.cpp:12322
// function calls: 3
void Glue_Resources_GetMaterial(const char* name)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 12325
} /* size: 107, inline expansions: 3 (38 bytes) */

// <012CB913> engine2/interop.engine.cpp:12328
// function calls: 3
void Glue_Resources_GetTexture(const char* name)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 12331
} /* size: 107, inline expansions: 3 (38 bytes) */

// <012CB7D6> engine2/interop.engine.cpp:12334
// function calls: 3
void Glue_Resources_GetModel(const char* name)
{
	CWeakHandle<InfoForResourceTypeCModel>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCModel>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 12337
} /* size: 107, inline expansions: 3 (38 bytes) */

// <012CB699> engine2/interop.engine.cpp:12340
// function calls: 3
void Glue_Resources_GetAnimationGraph(const char* name)
{
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 12343
} /* size: 107, inline expansions: 3 (38 bytes) */

// <012CB55C> engine2/interop.engine.cpp:12346
// function calls: 3
void Glue_Resources_GetShader(const char* name)
{
	CWeakHandle<InfoForResourceTypeCVfx>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCVfx>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCVfx>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCVfx>& src);  // 12349
} /* size: 107, inline expansions: 3 (38 bytes) */

// <0136AEA7> engine2/interop.engine.cpp:12352
// function calls: 2
void IAnimationGraph_DestroyStrongHandle(void* self)
{
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::~CStrongHandle(); // 12355
	IAnimationGraph_DestroyStrongHandle(void* self); // 12352
} /* size: 49, inline expansions: 2 (40 bytes) */

// <012CB4E6> engine2/interop.engine.cpp:12358
// function call: 1
void IAnimationGraph_IsStrongHandleValid(void* self)
{
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::HasData(); // 12361
} /* size: 24, inline expansions: 1 (19 bytes) */

// <012CB488> engine2/interop.engine.cpp:12364
// function call: 1
void IAnimationGraph_IsError(void* self)
{
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::IsError(); // 12367
} /* size: 24, inline expansions: 1 (16 bytes) */

// <012CB42F> engine2/interop.engine.cpp:12370
// function call: 1
void IAnimationGraph_IsStrongHandleLoaded(void* self)
{
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::IsLoaded(); // 12373
} /* size: 41, inline expansions: 1 (28 bytes) */

// <012CB24C> engine2/interop.engine.cpp:12376
// function calls: 8
void IAnimationGraph_CopyStrongHandle(void* self)
{
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::GetHandle(); // 12379
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::GetBinding(); // 476
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 12379
} /* size: 102, inline expansions: 8 (127 bytes) */

// <012CB1E9> engine2/interop.engine.cpp:12382
// function call: 1
const void* IAnimationGraph_GetBindingPtr(void* self)
{
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::GetBinding(); // 12385
} /* size: 8, inline expansions: 1 (0 bytes) */

// <012CB148> engine2/interop.engine.cpp:12388
// variables: 2
// function call: 1
void IAnimationGraph_GetResourceName(void* self)
{
	HAnimationGraphStrong* __handle; // 12391
	IAnimationGraph* __self; // 12393
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::HasData(); // 12392
} /* size: 51, variables: 2, inline expansions: 1 (16 bytes) */

// <012CB0AE> engine2/interop.engine.cpp:12398
// variables: 2
// function call: 1
void IAnimationGraph_GetParameterList(void* self)
{
	HAnimationGraphStrong* __handle; // 12401
	IAnimationGraph* __self; // 12403
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::HasData(); // 12402
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <012CAFF8> engine2/interop.engine.cpp:12408
// function calls: 2
void IAnimParameter_GetName(void* self)
{
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 12411
} /* size: 37, inline expansions: 2 (34 bytes) */

// <012CAF57> engine2/interop.engine.cpp:12420
void IAnimParameter_GetDefaultValue(void* self)
{
} /* size: 64 */

// <012CAE9F> engine2/interop.engine.cpp:12432
void IAnimParameter_GetMaxValue(void* self)
{
} /* size: 64 */

// <012CADF7> engine2/interop.engine.cpp:12438
// variables: 2
// function call: 1
void IAnimParameter_GetNumOptionNames(void* __self)
{
	IAnimParameter* self; // 12442
	const IEnumAnimParameter* pEnumParam; // 12445
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 12448
} /* size: 36, variables: 2, inline expansions: 1 (3 bytes) */

// <012CA2FA> engine2/interop.engine.cpp:12454
// variables: 6
// function calls: 49
void IAnimParameter_GetOptionName(void* __self, int __nIndex)
{
	IAnimParameter* self; // 12458
	int nIndex; // 12459
	const IEnumAnimParameter* pEnumParam; // 12462
	{
		const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >  optionList; // 12465
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 574
		CUtlMemory<CUtlString, int>::Base(); // 113
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 209
		UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
						const CUtlString* pFromEnd,
						CUtlString* pTo);  // 200
		UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
						const CUtlString* pFromEnd,
						CUtlString* pTo);  // 574
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
				const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
				const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
		CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
				const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 434
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
		CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlString, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 434
		CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(
				const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 12465
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 12466
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 12468
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 12468
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
		CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 12470
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
		CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 12470
	}
} /* size: 477, variables: 3 */

// <012CA232> engine2/interop.engine.cpp:12475
// function calls: 2
void nmPrmtrnstnc_SetValue(void* self, int val)
{
	CAnimVariant::SetValue<bool>(
			const bool& value);  // 159
	CAnimVariant::CAnimVariant<bool>(
				const bool& v);  // 12478
} /* size: 67, inline expansions: 2 (16 bytes) */

// <012CA15A> engine2/interop.engine.cpp:12481
// function calls: 2
void nmPrmtrnstnc_SetValue_1(void* self, int val)
{
	CAnimVariant::SetValue<int>(
			const int& value);  // 159
	CAnimVariant::CAnimVariant<int>(
				const int& v);  // 12484
} /* size: 64, inline expansions: 2 (14 bytes) */

// <012CA082> engine2/interop.engine.cpp:12487
// function calls: 2
void nmPrmtrnstnc_SetValue_2(void* self, float val)
{
	CAnimVariant::SetValue<float>(
			const float& value);  // 159
	CAnimVariant::CAnimVariant<float>(
				const float& v);  // 12490
} /* size: 66, inline expansions: 2 (18 bytes) */

// <012C9F79> engine2/interop.engine.cpp:12493
// function calls: 3
void nmPrmtrnstnc_SetValue_3(void* self, Vector* val)
{
	Vector::operator=(
			const Vector& vOther);  // 238
	CAnimVariant::SetValue<Vector>(
			const Vector& value);  // 159
	CAnimVariant::CAnimVariant<Vector>(
				const Vector& v);  // 12496
} /* size: 78, inline expansions: 3 (59 bytes) */

// <012C9EA1> engine2/interop.engine.cpp:12499
// function calls: 2
void nmPrmtrnstnc_SetValue_4(void* self, Quaternion* val)
{
	CAnimVariant::SetValue<Quaternion>(
				const Quaternion& value);  // 159
	CAnimVariant::CAnimVariant<Quaternion>(
				const Quaternion& v);  // 12502
} /* size: 69, inline expansions: 2 (24 bytes) */

// <012C9D85> engine2/interop.engine.cpp:12505
// variables: 2
// function calls: 3
void nmPrmtrnstnc_SetEnumValue(void* __self, int __val)
{
	IAnimParameterInstance* self; // 12509
	int val; // 12510
	CAnimEnum::CAnimEnum(
			AnimEnumValue_t value);  // 12513
	CAnimVariant::SetValue<CAnimEnum>(
				const CAnimEnum& value);  // 159
	CAnimVariant::CAnimVariant<CAnimEnum>(
				const CAnimEnum& v);  // 12513
} /* size: 65, variables: 2, inline expansions: 3 (8 bytes) */

// <012C9CE1> engine2/interop.engine.cpp:12517
// function calls: 2
void nmPrmtrnstnc_GetName(void* self)
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 12520
} /* size: 37, inline expansions: 2 (34 bytes) */

// <012C9C9C> engine2/interop.engine.cpp:12523
void nmPrmtrnstnc_IsAutoReset(void* self)
{
} /* size: 22 */

// <012C9C57> engine2/interop.engine.cpp:12529
void nmPrmtrnstnc_GetParameterType(void* self)
{
} /* size: 19 */

// <012C9C12> engine2/interop.engine.cpp:12535
void nmPrmtrLst_Count(void* self)
{
} /* size: 9 */

// <012C9BB1> engine2/interop.engine.cpp:12541
void nmPrmtrLst_GetParameter(void* self, int index)
{
} /* size: 10 */

// <012C9AA3> engine2/interop.engine.cpp:12547
// function calls: 2
void nmPrmtrLst_GetParameter_1(void* self, const char* name)
{
	CUtlString::CUtlString(
			const char* pString);  // 12550
	CUtlString::~CUtlString(); // 12550
} /* size: 122, inline expansions: 2 (41 bytes) */

// <012C9A46> engine2/interop.engine.cpp:12553
void syncRsrcDtRqst_GetFileName(void* self)
{
} /* size: 23 */

// <012C99FC> engine2/interop.engine.cpp:12559
const void* syncRsrcDtRqst_GetResultBuffer(void* self)
{
} /* size: 10 */

// <012C9885> engine2/interop.engine.cpp:12571
// function call: 1
void ImageLoader_GetMemRequired(int width, int height, int depth, int64 imageFormat, int mipmap)
{
	GetMemRequired(int width,
			int height,
			int depth,
			ImageFormat imageFormat,
			bool mipmap,
			int* pAdjustedHeight);  // 12574
} /* size: 24, inline expansions: 1 (20 bytes) */

// <012C97C7> engine2/interop.engine.cpp:12577
void ImageLoader_GetMemRequired_1(int width, int height, int depth, int mipmaps, int64 imageFormat)
{
} /* size: 12 */

// <012C96CD> engine2/interop.engine.cpp:12583
void ImageLoader_ConvertImageFormat(void* src, int64 srcImageFormat, void* dst, int64 dstImageFormat, int width, int height, int srcStride, int dstStride)
{
} /* size: 26 */

// <0136A690> engine2/interop.engine.cpp:12589
// function calls: 2
void IMaterial2_DestroyStrongHandle(void* self)
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 12592
	IMaterial2_DestroyStrongHandle(void* self); // 12589
} /* size: 49, inline expansions: 2 (40 bytes) */

// <012C9657> engine2/interop.engine.cpp:12595
// function call: 1
void IMaterial2_IsStrongHandleValid(void* self)
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12598
} /* size: 24, inline expansions: 1 (19 bytes) */

// <012C95F9> engine2/interop.engine.cpp:12601
// function call: 1
void IMaterial2_IsError(void* self)
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::IsError(); // 12604
} /* size: 24, inline expansions: 1 (16 bytes) */

// <012C95A0> engine2/interop.engine.cpp:12607
// function call: 1
void IMaterial2_IsStrongHandleLoaded(void* self)
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::IsLoaded(); // 12610
} /* size: 41, inline expansions: 1 (28 bytes) */

// <012C93BD> engine2/interop.engine.cpp:12613
// function calls: 8
void IMaterial2_CopyStrongHandle(void* self)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 12616
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 476
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 12616
} /* size: 102, inline expansions: 8 (127 bytes) */

// <012C935A> engine2/interop.engine.cpp:12619
// function call: 1
const void* IMaterial2_GetBindingPtr(void* self)
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 12622
} /* size: 8, inline expansions: 1 (0 bytes) */

// <012C92B9> engine2/interop.engine.cpp:12625
// variables: 2
// function call: 1
void IMaterial2_GetName(void* self)
{
	HMaterialStrong* __handle; // 12628
	IMaterial2* __self; // 12630
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12629
} /* size: 51, variables: 2, inline expansions: 1 (16 bytes) */

// <012C9218> engine2/interop.engine.cpp:12635
// variables: 2
// function call: 1
void IMaterial2_GetNameWithMod(void* self)
{
	HMaterialStrong* __handle; // 12638
	IMaterial2* __self; // 12640
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12639
} /* size: 51, variables: 2, inline expansions: 1 (16 bytes) */

// <012C918A> engine2/interop.engine.cpp:12645
// variables: 2
// function call: 1
void IMaterial2_GetSimilarityKey(void* self)
{
	HMaterialStrong* __handle; // 12648
	IMaterial2* __self; // 12650
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12649
} /* size: 35, variables: 2, inline expansions: 1 (16 bytes) */

// <012C9107> engine2/interop.engine.cpp:12655
// variables: 2
// function call: 1
void IMaterial2_IsLoaded(void* self)
{
	HMaterialStrong* __handle; // 12658
	IMaterial2* __self; // 12660
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12659
} /* size: 59, variables: 2, inline expansions: 1 (16 bytes) */

// <012C8FD4> engine2/interop.engine.cpp:12665
// variables: 2
// function calls: 3
void IMaterial2_GetMode(void* self, uint32 token)
{
	HMaterialStrong* __handle; // 12668
	IMaterial2* __self; // 12670
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12669
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 12672
} /* size: 97, variables: 2, inline expansions: 3 (16 bytes) */

// <012C8EF7> engine2/interop.engine.cpp:12675
// variables: 2
// function calls: 2
void IMaterial2_GetMode_1(void* self)
{
	HMaterialStrong* __handle; // 12678
	IMaterial2* __self; // 12680
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12679
	CUtlStringToken::CUtlStringToken(); // 12682
} /* size: 97, variables: 2, inline expansions: 2 (23 bytes) */

// <012C8DEC> engine2/interop.engine.cpp:12685
// variables: 3
// function calls: 2
void IMaterial2_GetMode_2(void* __self, ISceneLayer* __layer)
{
	IMaterial2* self; // 12697
	ISceneLayer* layer; // 12698
	{
		HMaterialStrong* __handle; // 12690
		CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12691
	}
	ISceneLayer::GetShaderMode(); // 12701
} /* size: 43, variables: 2, inline expansions: 1 (4 bytes) */

// <012C8D5E> engine2/interop.engine.cpp:12705
// variables: 2
// function call: 1
void IMaterial2_GetRenderAttributes(void* self)
{
	HMaterialStrong* __handle; // 12708
	IMaterial2* __self; // 12710
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12709
} /* size: 43, variables: 2, inline expansions: 1 (16 bytes) */

// <012C8CD0> engine2/interop.engine.cpp:12715
// variables: 2
// function call: 1
void IMaterial2_RecreateAllStaticConstantAndCommandBuffers(void* self)
{
	HMaterialStrong* __handle; // 12718
	IMaterial2* __self; // 12720
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12719
} /* size: 41, variables: 2, inline expansions: 1 (16 bytes) */

// <012C8B43> engine2/interop.engine.cpp:12725
// variables: 2
// function calls: 4
void IMaterial2_GetFirstTextureAttribute(void* self)
{
	HMaterialStrong* __handle; // 12728
	IMaterial2* __self; // 12730
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12729
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 12732
} /* size: 137, variables: 2, inline expansions: 4 (54 bytes) */

// <012C89AB> engine2/interop.engine.cpp:12735
// variables: 2
// function calls: 4
void IMaterial2_GetBoolAttributeOrDefault(void* self, uint32 name, int i)
{
	HMaterialStrong* __handle; // 12738
	IMaterial2* __self; // 12740
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12739
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 12742
	IMaterial2::GetBoolAttributeOrDefault(
					CUtlStringToken name,
					bool bDefault);  // 12742
} /* size: 113, variables: 2, inline expansions: 4 (39 bytes) */

// <012C8813> engine2/interop.engine.cpp:12745
// variables: 2
// function calls: 4
void IMaterial2_GetIntAttributeOrDefault(void* self, uint32 name, int i)
{
	HMaterialStrong* __handle; // 12748
	IMaterial2* __self; // 12750
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12749
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 12752
	IMaterial2::GetIntAttributeOrDefault(
				CUtlStringToken name,
				int nDefault);  // 12752
} /* size: 105, variables: 2, inline expansions: 4 (40 bytes) */

// <012C8687> engine2/interop.engine.cpp:12755
// variables: 2
// function calls: 4
void IMaterial2_GetFloatAttributeOrDefault(void* self, uint32 name, float f)
{
	HMaterialStrong* __handle; // 12758
	IMaterial2* __self; // 12760
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12759
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 12762
	IMaterial2::GetFloatAttributeOrDefault(
					CUtlStringToken name,
					float32 flDefault);  // 12762
} /* size: 123, variables: 2, inline expansions: 4 (50 bytes) */

// <012C8377> engine2/interop.engine.cpp:12765
// variables: 2
// function calls: 13
void IMaterial2_GetTextureAttributeOrDefault(void* self, uint32 name)
{
	HMaterialStrong* __handle; // 12768
	IMaterial2* __self; // 12770
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12769
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 199
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 200
	IMaterial2::GetTextureAttributeOrDefault(
					CUtlStringToken name,
					HRenderTexture hDefault);  // 12772
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 12772
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 12772
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 223
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 12772
} /* size: 169, variables: 2, inline expansions: 13 (124 bytes) */

// <012C82CA> engine2/interop.engine.cpp:12775
// variables: 2
// function call: 1
void IMaterial2_HasParam(void* self, const char* name)
{
	HMaterialStrong* __handle; // 12778
	IMaterial2* __self; // 12780
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12779
} /* size: 59, variables: 2, inline expansions: 1 (16 bytes) */

// <012C81F5> engine2/interop.engine.cpp:12785
// variables: 2
// function call: 1
void IMaterial2_Set(void* self, const char* name, const char* val)
{
	HMaterialStrong* __handle; // 12788
	IMaterial2* __self; // 12790
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12789
} /* size: 41, variables: 2, inline expansions: 1 (16 bytes) */

// <012C810E> engine2/interop.engine.cpp:12795
// variables: 2
// function call: 1
void IMaterial2_GetString(void* self, const char* name, const char* defaultValue)
{
	HMaterialStrong* __handle; // 12798
	IMaterial2* __self; // 12800
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12799
} /* size: 51, variables: 2, inline expansions: 1 (16 bytes) */

// <012C7FF3> engine2/interop.engine.cpp:12805
// variables: 2
// function calls: 2
void IMaterial2_Set_1(void* self, const char* name, Vector4D* value)
{
	HMaterialStrong* __handle; // 12808
	IMaterial2* __self; // 12810
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12809
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 12812
} /* size: 95, variables: 2, inline expansions: 2 (28 bytes) */

// <012C7F22> engine2/interop.engine.cpp:12815
// variables: 2
// function call: 1
void IMaterial2_GetVector4(void* self, const char* name)
{
	HMaterialStrong* __handle; // 12818
	IMaterial2* __self; // 12820
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12819
} /* size: 90, variables: 2, inline expansions: 1 (16 bytes) */

// <012C7D44> engine2/interop.engine.cpp:12825
// variables: 2
// function calls: 6
void IMaterial2_Set_2(void* self, const char* name, HRenderTextureStrong* value)
{
	HMaterialStrong* __handle; // 12828
	IMaterial2* __self; // 12830
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12829
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 12832
} /* size: 98, variables: 2, inline expansions: 6 (43 bytes) */

// <012C7B9B> engine2/interop.engine.cpp:12835
// variables: 2
// function calls: 4
void IMaterial2_GetTexture(void* self, const char* name)
{
	HMaterialStrong* __handle; // 12838
	IMaterial2* __self; // 12840
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12839
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 12842
} /* size: 153, variables: 2, inline expansions: 4 (57 bytes) */

// <012C7ADC> engine2/interop.engine.cpp:12845
// variables: 2
// function call: 1
void IMaterial2_SetEdited(void* self, int b)
{
	HMaterialStrong* __handle; // 12848
	IMaterial2* __self; // 12850
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12849
} /* size: 49, variables: 2, inline expansions: 1 (16 bytes) */

// <012C7A59> engine2/interop.engine.cpp:12855
// variables: 2
// function call: 1
void IMaterial2_IsEdited(void* self)
{
	HMaterialStrong* __handle; // 12858
	IMaterial2* __self; // 12860
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12859
} /* size: 59, variables: 2, inline expansions: 1 (16 bytes) */

// <012C78DB> engine2/interop.engine.cpp:12865
// variables: 2
// function calls: 5
void IMaterial2_ReloadStaticCombos(void* __self)
{
	IMaterial2* self; // 12877
	{
		HMaterialStrong* __handle; // 12870
		CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12871
	}
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator CWeakHandle<InfoForResourceTypeIMaterial2>(); // 12880
} /* size: 87, variables: 1, inline expansions: 4 (12 bytes) */

// <012C75C1> engine2/interop.engine.cpp:12884
// variables: 4
// function calls: 8
void IMaterial2_GetPhysicsSurfaceProperties(void* __self)
{
	IMaterial2* self; // 12896
	CUtlString surfacePropertiesName; // 12899
	{
		HMaterialStrong* __handle; // 12889
		CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 12890
	}
	{
		const CPhysSurfaceProperties* pSurfaceProperties; // 12902
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 12902
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 12902
	}
	CUtlString::CUtlString(); // 12899
	CUtlString::~CUtlString(); // 12908
} /* size: 0, variables: 2, inline expansions: 2 (50 bytes) */

// <012C757C> engine2/interop.engine.cpp:12909
void Physggrgtnstnc_WakeUp(void* self)
{
} /* size: 13 */

// <012C74F2> engine2/interop.engine.cpp:12921
void Physggrgtnstnc_IsAsleep(void* self)
{
} /* size: 22 */

// <012C7434> engine2/interop.engine.cpp:12933
void Physggrgtnstnc_AddVelocity(void* self, Vector* v)
{
} /* size: 10 */

// <012C73D5> engine2/interop.engine.cpp:12939
void Physggrgtnstnc_SetAngularVelocity(void* self, Vector* v)
{
} /* size: 10 */

// <012C7331> engine2/interop.engine.cpp:12951
void Physggrgtnstnc_GetBodyCount(void* self)
{
} /* size: 10 */

// <012C72A1> engine2/interop.engine.cpp:12957
// function calls: 2
void Physggrgtnstnc_GetBodyHandle(void* self, int i)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsBody*>(IPhysicsBody* c); // 12960
} /* size: 66, inline expansions: 2 (28 bytes) */

// <012C71D1> engine2/interop.engine.cpp:12969
void Physggrgtnstnc_GetBodyNameHash(void* self, int i)
{
} /* size: 13 */

// <012C7125> engine2/interop.engine.cpp:12975
// function calls: 2
void Physggrgtnstnc_GetBodyByNameHash(void* self, int i)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsBody*>(IPhysicsBody* c); // 12978
} /* size: 45, inline expansions: 2 (26 bytes) */

// <012C70C4> engine2/interop.engine.cpp:12981
void Physggrgtnstnc_GetBodyIndex(void* self, IPhysicsBody* body)
{
} /* size: 13 */

// <012C7016> engine2/interop.engine.cpp:12987
// function calls: 2
void Physggrgtnstnc_FindBodyByName(void* self, const char* name)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsBody*>(IPhysicsBody* c); // 12990
} /* size: 45, inline expansions: 2 (26 bytes) */

// <012C6FD1> engine2/interop.engine.cpp:12993
void Physggrgtnstnc_GetJointCount(void* self)
{
} /* size: 10 */

// <012C6F23> engine2/interop.engine.cpp:12999
// function calls: 2
void Physggrgtnstnc_GetJointHandle(void* self, int nIndex)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsJoint*>(IPhysicsJoint* c); // 13002
} /* size: 39, inline expansions: 2 (23 bytes) */

// <012C6EC2> engine2/interop.engine.cpp:13005
void Physggrgtnstnc_RemoveJoint(void* self, IPhysicsJoint* pJoint)
{
} /* size: 10 */

// <012C6E7D> engine2/interop.engine.cpp:13011
void Physggrgtnstnc_GetOrigin(void* self)
{
} /* size: 13 */

// <012C6E38> engine2/interop.engine.cpp:13017
void Physggrgtnstnc_GetMassCenter(void* self)
{
} /* size: 13 */

// <012C6DD7> engine2/interop.engine.cpp:13023
void Physggrgtnstnc_SetSurfaceProperties(void* self, uint32 name)
{
} /* size: 13 */

// <012C6D92> engine2/interop.engine.cpp:13029
void Physggrgtnstnc_GetTotalMass(void* self)
{
} /* size: 13 */

// <012C6D2F> engine2/interop.engine.cpp:13035
void Physggrgtnstnc_SetTotalMass(void* self, float flMass)
{
} /* size: 13 */

// <012C6CCC> engine2/interop.engine.cpp:13041
void Physggrgtnstnc_SetLinearDamping(void* self, float flLinearDamping)
{
} /* size: 13 */

// <012C6BD7> engine2/interop.engine.cpp:13053
// function calls: 2
void Physggrgtnstnc_GetWorld(void* self)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsWorld*>(IPhysicsWorld* c); // 13056
} /* size: 45, inline expansions: 2 (26 bytes) */

// <012C6B45> engine2/interop.engine.cpp:13059
// function calls: 2
void IPhysicsBody_GetWorld(void* self)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsWorld*>(IPhysicsWorld* c); // 13062
} /* size: 42, inline expansions: 2 (26 bytes) */

// <012C6AE4> engine2/interop.engine.cpp:13065
void IPhysicsBody_SetGravityScale(void* self, float f)
{
} /* size: 13 */

// <012C6A9F> engine2/interop.engine.cpp:13071
void IPhysicsBody_GetGravityScale(void* self)
{
} /* size: 13 */

// <012C6A5A> engine2/interop.engine.cpp:13077
void IPhysicsBody_IsGravityEnabled(void* self)
{
} /* size: 22 */

// <012C69F1> engine2/interop.engine.cpp:13083
void IPhysicsBody_EnableGravity(void* self, int value)
{
} /* size: 23 */

// <012C6990> engine2/interop.engine.cpp:13089
void IPhysicsBody_SetMass(void* self, float f)
{
} /* size: 13 */

// <012C694B> engine2/interop.engine.cpp:13095
void IPhysicsBody_GetMass(void* self)
{
} /* size: 13 */

// <012C6906> engine2/interop.engine.cpp:13101
void IPhysicsBody_GetMassCenter(void* self)
{
} /* size: 13 */

// <012C68C1> engine2/interop.engine.cpp:13107
void IPhysicsBody_GetLocalMassCenter(void* self)
{
} /* size: 13 */

// <012C6862> engine2/interop.engine.cpp:13113
void IPhysicsBody_SetLocalMassCenter(void* self, Vector* v)
{
} /* size: 13 */

// <012C67F9> engine2/interop.engine.cpp:13119
void IPhysicsBody_SetOverrideMassCenter(void* self, int bOverride)
{
} /* size: 23 */

// <012C67B4> engine2/interop.engine.cpp:13125
void IPhysicsBody_GetOverrideMassCenter(void* self)
{
} /* size: 22 */

// <012C6755> engine2/interop.engine.cpp:13131
void IPhysicsBody_SetPosition(void* self, Vector* v)
{
} /* size: 13 */

// <012C66B1> engine2/interop.engine.cpp:13143
void IPhysicsBody_SetOrientation(void* self, Quaternion* q)
{
} /* size: 13 */

// <012C666C> engine2/interop.engine.cpp:13149
void IPhysicsBody_GetOrientation(void* self)
{
} /* size: 13 */

// <012C65F3> engine2/interop.engine.cpp:13155
void IPhysicsBody_SetTransform(void* self, Vector* v, Quaternion* q)
{
} /* size: 13 */

// <012C6391> engine2/interop.engine.cpp:13161
// function calls: 10
void IPhysicsBody_GetTransform(void* self)
{
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 127
	CTransform::GetScale(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 127
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 127
	CTransformUnaligned::CTransformUnaligned(
				const CTransform& transform);  // 13164
} /* size: 106, inline expansions: 10 (59 bytes) */

// <012C62ED> engine2/interop.engine.cpp:13173
void IPhysicsBody_GetLinearVelocity(void* self)
{
} /* size: 13 */

// <012C628E> engine2/interop.engine.cpp:13179
void IPhysicsBody_GetVelocityAtPoint(void* self, Vector* v)
{
} /* size: 13 */

// <012C622F> engine2/interop.engine.cpp:13185
void IPhysicsBody_AddLinearVelocity(void* self, Vector* v)
{
} /* size: 13 */

// <012C61D0> engine2/interop.engine.cpp:13191
void IPhysicsBody_SetAngularVelocity(void* self, Vector* v)
{
} /* size: 13 */

// <012C618B> engine2/interop.engine.cpp:13197
void IPhysicsBody_GetAngularVelocity(void* self)
{
} /* size: 13 */

// <012C6146> engine2/interop.engine.cpp:13203
void IPhysicsBody_Wake(void* self)
{
} /* size: 13 */

// <012C6101> engine2/interop.engine.cpp:13209
void IPhysicsBody_Sleep(void* self)
{
} /* size: 13 */

// <012C60BC> engine2/interop.engine.cpp:13215
void IPhysicsBody_IsSleeping(void* self)
{
} /* size: 22 */

// <012C6077> engine2/interop.engine.cpp:13221
void IPhysicsBody_EnableAutoSleeping(void* self)
{
} /* size: 13 */

// <012C6032> engine2/interop.engine.cpp:13227
void IPhysicsBody_DisableAutoSleeping(void* self)
{
} /* size: 13 */

// <012C5FA8> engine2/interop.engine.cpp:13239
void IPhysicsBody_DisableTouchEvents(void* self)
{
} /* size: 13 */

// <012C5F1E> engine2/interop.engine.cpp:13251
void IPhysicsBody_GetType(void* self)
{
} /* size: 18 */

// <012C5EBD> engine2/interop.engine.cpp:13257
void IPhysicsBody_SetType(void* self, int64 type)
{
} /* size: 10 */

// <012C5E78> engine2/interop.engine.cpp:13263
void IPhysicsBody_GetShapeCount(void* self)
{
} /* size: 10 */

// <012C5DCA> engine2/interop.engine.cpp:13269
// function calls: 2
void IPhysicsBody_GetShape(void* self, int nShape)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsShape*>(IPhysicsShape* c); // 13272
} /* size: 42, inline expansions: 2 (26 bytes) */

// <012C5CFE> engine2/interop.engine.cpp:13275
// function calls: 2
void IPhysicsBody_AddSphereShape(void* self, Vector* vCenter, float flRadius)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsShape*>(IPhysicsShape* c); // 13278
} /* size: 42, inline expansions: 2 (26 bytes) */

// <012C5C16> engine2/interop.engine.cpp:13281
// function calls: 2
void IPhysicsBody_AddCapsuleShape(void* self, Vector* vCenter1, Vector* vCenter2, float flRadius)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsShape*>(IPhysicsShape* c); // 13284
} /* size: 42, inline expansions: 2 (26 bytes) */

// <012C5B30> engine2/interop.engine.cpp:13287
// function calls: 2
void IPhysicsBody_AddBoxShape(void* self, Vector* position, Quaternion* rotation, Vector* extent)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsShape*>(IPhysicsShape* c); // 13290
} /* size: 42, inline expansions: 2 (26 bytes) */

// <012C5A2E> engine2/interop.engine.cpp:13293
// function calls: 2
void IPhysicsBody_AddHullShape(void* self, Vector* position, Quaternion* rotation, int numVertices, void* vertices)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsShape*>(IPhysicsShape* c); // 13296
} /* size: 42, inline expansions: 2 (26 bytes) */

// <012C5964> engine2/interop.engine.cpp:13299
// function calls: 2
void IPhysicsBody_AddHullShape_1(void* self, RnHull_t* hull, CTransformUnaligned* xform)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsShape*>(IPhysicsShape* c); // 13302
} /* size: 42, inline expansions: 2 (26 bytes) */

// <012C589A> engine2/interop.engine.cpp:13305
// function calls: 2
void IPhysicsBody_AddHullShape_2(void* self, RnMesh_t* mesh, CTransformUnaligned* xform)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsShape*>(IPhysicsShape* c); // 13308
} /* size: 42, inline expansions: 2 (26 bytes) */

// <012C577C> engine2/interop.engine.cpp:13311
// function calls: 2
void IPhysicsBody_AddMeshShape(void* self, int numVertices, void* vertices, int numIndices, void* indices, int nMaterialCount)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsShape*>(IPhysicsShape* c); // 13314
} /* size: 45, inline expansions: 2 (26 bytes) */

// <012C5696> engine2/interop.engine.cpp:13317
// function calls: 2
void IPhysicsBody_AddMeshShape_1(void* self, RnMesh_t* mesh, CTransformUnaligned* xform, int nMaterialCount)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsShape*>(IPhysicsShape* c); // 13320
} /* size: 45, inline expansions: 2 (26 bytes) */

// <012C553C> engine2/interop.engine.cpp:13323
// function calls: 2
void IPhysicsBody_AddHeightFieldShape(void* self, void* pHeights, void* pMaterials, int sizeX, int sizeY, float sizeScale, float heightScale, int nMaterialCount)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsShape*>(IPhysicsShape* c); // 13326
} /* size: 45, inline expansions: 2 (26 bytes) */

// <012C54DB> engine2/interop.engine.cpp:13329
void IPhysicsBody_RemoveShape(void* self, IPhysicsShape* pShape)
{
} /* size: 13 */

// <012C5496> engine2/interop.engine.cpp:13335
void IPhysicsBody_PurgeShapes(void* self)
{
} /* size: 13 */

// <012C5435> engine2/interop.engine.cpp:13341
void IPhysicsBody_ApplyLinearImpulse(void* self, Vector* impulse)
{
} /* size: 13 */

// <012C53B8> engine2/interop.engine.cpp:13347
void IPhysicsBody_ApplyLinearImpulseAtWorldSpace(void* self, Vector* impulse, Vector* pos)
{
} /* size: 13 */

// <012C5357> engine2/interop.engine.cpp:13353
void IPhysicsBody_ApplyAngularImpulse(void* self, Vector* impulse)
{
} /* size: 13 */

// <012C52F8> engine2/interop.engine.cpp:13359
void IPhysicsBody_ApplyForce(void* self, Vector* F)
{
} /* size: 13 */

// <012C527F> engine2/interop.engine.cpp:13365
void IPhysicsBody_ApplyForceAt(void* self, Vector* F, Vector* r)
{
} /* size: 13 */

// <012C5220> engine2/interop.engine.cpp:13371
void IPhysicsBody_ApplyTorque(void* self, Vector* M)
{
} /* size: 13 */

// <012C51DB> engine2/interop.engine.cpp:13377
void IPhysicsBody_ClearForces(void* self)
{
} /* size: 13 */

// <012C5151> engine2/interop.engine.cpp:13389
void IPhysicsBody_Enable(void* self)
{
} /* size: 13 */

// <012C5082> engine2/interop.engine.cpp:13407
void IPhysicsBody_BuildMass(void* self)
{
} /* size: 13 */

// <012C4FDC> engine2/interop.engine.cpp:13419
void IPhysicsBody_GetLinearDamping(void* self)
{
} /* size: 13 */

// <012C4F7B> engine2/interop.engine.cpp:13425
void IPhysicsBody_SetAngularDamping(void* self, float d)
{
} /* size: 13 */

// <012C4F36> engine2/interop.engine.cpp:13431
void IPhysicsBody_GetAngularDamping(void* self)
{
} /* size: 13 */

// <012C4E95> engine2/interop.engine.cpp:13443
void IPhysicsBody_GetDensity(void* self)
{
} /* size: 13 */

// <012C4E34> engine2/interop.engine.cpp:13449
void IPhysicsBody_GetClosestPoint(void* self, Vector* vPoint)
{
} /* size: 13 */

// <012C4DD3> engine2/interop.engine.cpp:13455
void IPhysicsBody_SetMaterialIndex(void* self, uint32 name)
{
} /* size: 13 */

// <012C4D2C> engine2/interop.engine.cpp:13461
// variable: 1
// function calls: 2
void IPhysicsBody_GetAggregate(void* __self)
{
	IPhysicsBody* self; // 13465
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysAggregateInstance*>(IPhysAggregateInstance* c); // 13468
} /* size: 45, variables: 1, inline expansions: 2 (26 bytes) */

// <012C4C91> engine2/interop.engine.cpp:13472
void IPhysicsBody_SetTargetTransform(void* self, Vector* vTargetPosition, Quaternion* vTargetAngles, float flTimeOffset)
{
} /* size: 13 */

// <012C4A1D> engine2/interop.engine.cpp:13478
// function calls: 8
void IPhysicsBody_CheckOverlap(void* self, IPhysicsBody* body, CTransformUnaligned* transform)
{
	CTransformUnaligned::UniformScale(); // 534
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 534
	CTransform::CTransform(
			const CTransformUnaligned& tx);  // 13481
} /* size: 88, inline expansions: 8 (91 bytes) */

// <012C49D8> engine2/interop.engine.cpp:13484
void IPhysicsBody_GetLocalInertiaVector(void* self)
{
} /* size: 13 */

// <012C4916> engine2/interop.engine.cpp:13496
void IPhysicsBody_SetLocalInertia(void* self, Vector* vInertia, Quaternion* qRotation)
{
} /* size: 13 */

// <012C482A> engine2/interop.engine.cpp:13508
// variable: 1
// function calls: 2
void IPhysicsBody_ManagedObject(void* __self)
{
	IPhysicsBody* self; // 13512
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsBody*>(IPhysicsBody* c); // 13515
} /* size: 32, variables: 1, inline expansions: 2 (23 bytes) */

// <012C4721> engine2/interop.engine.cpp:13519
void IPhysicsBody_SetMotionLocks(void* self, int x, int y, int z, int pitch, int yaw, int roll)
{
} /* size: 87 */

// <012C469C> engine2/interop.engine.cpp:13525
void IPhysicsBody_IsTouching(void* self, IPhysicsBody* pBody, int bTriggers)
{
} /* size: 30 */

// <012C4617> engine2/interop.engine.cpp:13531
void IPhysicsBody_IsTouching_1(void* self, IPhysicsShape* pShape, int bTriggers)
{
} /* size: 30 */

// <012C4569> engine2/interop.engine.cpp:13543
void IPhysicsBody_ResetProxy(void* self)
{
} /* size: 13 */

// <012C43D4> engine2/interop.engine.cpp:13555
void IPhysicsBody_ApplyBuoyancyImpulse(void* self, Vector* planeOrigin, Vector* planeNormal, float buoyancy, float linearDrag, float angularDrag, Vector* fluidVelocity, Vector* gravity, float dt)
{
} /* size: 13 */

// <012C4342> engine2/interop.engine.cpp:13561
// function calls: 2
void IPhysicsJoint_GetWorld(void* self)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsWorld*>(IPhysicsWorld* c); // 13564
} /* size: 42, inline expansions: 2 (26 bytes) */

// <012C42B0> engine2/interop.engine.cpp:13567
// function calls: 2
void IPhysicsJoint_GetBody1(void* self)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsBody*>(IPhysicsBody* c); // 13570
} /* size: 42, inline expansions: 2 (26 bytes) */

// <012C421E> engine2/interop.engine.cpp:13573
// function calls: 2
void IPhysicsJoint_GetBody2(void* self)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsBody*>(IPhysicsBody* c); // 13576
} /* size: 42, inline expansions: 2 (26 bytes) */

// <012C41A1> engine2/interop.engine.cpp:13579
void IPhysicsJoint_GetLocalFrameA(void* self, Vector* position, Quaternion* rotation)
{
} /* size: 10 */

// <012C4124> engine2/interop.engine.cpp:13585
void IPhysicsJoint_GetLocalFrameB(void* self, Vector* position, Quaternion* rotation)
{
} /* size: 10 */

// <012C40A7> engine2/interop.engine.cpp:13591
void IPhysicsJoint_SetLocalFrameA(void* self, Vector* position, Quaternion* rotation)
{
} /* size: 10 */

// <012C402A> engine2/interop.engine.cpp:13597
void IPhysicsJoint_SetLocalFrameB(void* self, Vector* position, Quaternion* rotation)
{
} /* size: 10 */

// <012C3FC1> engine2/interop.engine.cpp:13603
void IPhysicsJoint_SetEnableCollision(void* self, int bEnabled)
{
} /* size: 20 */

// <012C3F7C> engine2/interop.engine.cpp:13609
void IPhysicsJoint_IsCollisionEnabled(void* self)
{
} /* size: 19 */

// <012C3F37> engine2/interop.engine.cpp:13615
void IPhysicsJoint_GetType(void* self)
{
} /* size: 18 */

// <012C3EDD> engine2/interop.engine.cpp:13621
void IPhysicsJoint_SetLinearSpring(void* self, Vector* vec)
{
} /* size: 22 */

// <012C3E98> engine2/interop.engine.cpp:13627
void IPhysicsJoint_GetLinearSpring(void* self)
{
} /* size: 13 */

// <012C3E3E> engine2/interop.engine.cpp:13633
void IPhysicsJoint_SetAngularSpring(void* self, Vector* vec)
{
} /* size: 25 */

// <012C3DF9> engine2/interop.engine.cpp:13639
void IPhysicsJoint_GetAngularSpring(void* self)
{
} /* size: 13 */

// <012C3D78> engine2/interop.engine.cpp:13645
void IPhysicsJoint_SetAngularMotor(void* self, float targetVelocity, float maxTorque)
{
} /* size: 13 */

// <012C3D17> engine2/interop.engine.cpp:13651
void IPhysicsJoint_SetMinLength(void* self, float f)
{
} /* size: 13 */

// <012C3CD2> engine2/interop.engine.cpp:13657
void IPhysicsJoint_GetMinLength(void* self)
{
} /* size: 13 */

// <012C3C71> engine2/interop.engine.cpp:13663
void IPhysicsJoint_SetMaxLength(void* self, float f)
{
} /* size: 13 */

// <012C3C2C> engine2/interop.engine.cpp:13669
void IPhysicsJoint_GetMaxLength(void* self)
{
} /* size: 13 */

// <012C3BCB> engine2/interop.engine.cpp:13675
void IPhysicsJoint_SetMinForce(void* self, float f)
{
} /* size: 13 */

// <012C3B86> engine2/interop.engine.cpp:13681
void IPhysicsJoint_GetMinForce(void* self)
{
} /* size: 13 */

// <012C3B25> engine2/interop.engine.cpp:13687
void IPhysicsJoint_SetMaxForce(void* self, float f)
{
} /* size: 13 */

// <012C3A7F> engine2/interop.engine.cpp:13699
void IPhysicsJoint_SetFriction(void* self, float f)
{
} /* size: 13 */

// <012C3984> engine2/interop.engine.cpp:13711
void IPhysicsJoint_SetLimitEnabled(void* self, const char* name, int state)
{
} /* size: 21 */

// <012C393F> engine2/interop.engine.cpp:13717
void IPhysicsJoint_GetAngle(void* self)
{
} /* size: 13 */

// <012C38FA> engine2/interop.engine.cpp:13723
void IPhysicsJoint_GetLinearImpulse(void* self)
{
} /* size: 13 */

// <012C38B5> engine2/interop.engine.cpp:13729
void IPhysicsJoint_GetAngularImpulse(void* self)
{
} /* size: 13 */

// <012C3870> engine2/interop.engine.cpp:13735
void IPhysicsJoint_GetMaxLinearImpulse(void* self)
{
} /* size: 13 */

// <012C382B> engine2/interop.engine.cpp:13741
void IPhysicsJoint_GetMaxAngularImpulse(void* self)
{
} /* size: 13 */

// <012C37C8> engine2/interop.engine.cpp:13747
void IPhysicsJoint_SetMaxLinearImpulse(void* self, float flMaxLinearImpulse)
{
} /* size: 13 */

// <012C3765> engine2/interop.engine.cpp:13753
void IPhysicsJoint_SetMaxAngularImpulse(void* self, float flMaxAngularImpulse)
{
} /* size: 13 */

// <012C36E6> engine2/interop.engine.cpp:13759
void IPhysicsJoint_SetMotorVelocity(void* self, Vector* velocity, float maxTorque)
{
} /* size: 13 */

// <012C3649> engine2/interop.engine.cpp:13765
void IPhysicsJoint_SetTargetRotation(void* self, Quaternion* rotation, float hertz, float damping)
{
} /* size: 13 */

// <012C3587> engine2/interop.engine.cpp:13777
void IPhysicsJoint_Motor_SetAngularVelocity(void* self, Vector* velocity)
{
} /* size: 13 */

// <012C3524> engine2/interop.engine.cpp:13783
void IPhysicsJoint_Motor_SetMaxVelocityForce(void* self, float maxForce)
{
} /* size: 13 */

// <012C34C1> engine2/interop.engine.cpp:13789
void IPhysicsJoint_Motor_SetMaxVelocityTorque(void* self, float maxTorque)
{
} /* size: 13 */

// <012C345E> engine2/interop.engine.cpp:13795
void IPhysicsJoint_Motor_SetLinearHertz(void* self, float hertz)
{
} /* size: 13 */

// <012C33FB> engine2/interop.engine.cpp:13801
void IPhysicsJoint_Motor_SetLinearDampingRatio(void* self, float damping)
{
} /* size: 13 */

// <012C3398> engine2/interop.engine.cpp:13807
void IPhysicsJoint_Motor_SetAngularHertz(void* self, float hertz)
{
} /* size: 13 */

// <012C3335> engine2/interop.engine.cpp:13813
void IPhysicsJoint_Motor_SetAngularDampingRatio(void* self, float damping)
{
} /* size: 13 */

// <012C32D2> engine2/interop.engine.cpp:13819
void IPhysicsJoint_Motor_SetMaxSpringForce(void* self, float maxForce)
{
} /* size: 13 */

// <012C326F> engine2/interop.engine.cpp:13825
void IPhysicsJoint_Motor_SetMaxSpringTorque(void* self, float maxTorque)
{
} /* size: 13 */

// <012C322A> engine2/interop.engine.cpp:13831
void IPhysicsJoint_Motor_GetLinearVelocity(void* self)
{
} /* size: 13 */

// <012C31E5> engine2/interop.engine.cpp:13837
void IPhysicsJoint_Motor_GetAngularVelocity(void* self)
{
} /* size: 13 */

// <012C31A0> engine2/interop.engine.cpp:13843
void IPhysicsJoint_Motor_GetMaxVelocityForce(void* self)
{
} /* size: 13 */

// <012C315B> engine2/interop.engine.cpp:13849
void IPhysicsJoint_Motor_GetMaxVelocityTorque(void* self)
{
} /* size: 13 */

// <012C3116> engine2/interop.engine.cpp:13855
void IPhysicsJoint_Motor_GetLinearHertz(void* self)
{
} /* size: 13 */

// <012C30D1> engine2/interop.engine.cpp:13861
void IPhysicsJoint_Motor_GetLinearDampingRatio(void* self)
{
} /* size: 13 */

// <012C3002> engine2/interop.engine.cpp:13879
void IPhysicsJoint_Motor_GetMaxSpringForce(void* self)
{
} /* size: 13 */

// <012C2F54> engine2/interop.engine.cpp:13891
void IPhysicsJoint_Wheel_EnableSuspension(void* self, int flag)
{
} /* size: 23 */

// <012C2F0F> engine2/interop.engine.cpp:13897
void IPhysicsJoint_Wheel_IsSuspensionEnabled(void* self)
{
} /* size: 22 */

// <012C2EAC> engine2/interop.engine.cpp:13903
void IPhysicsJoint_Wheel_SetSuspensionHertz(void* self, float hertz)
{
} /* size: 13 */

// <012C2E67> engine2/interop.engine.cpp:13909
void IPhysicsJoint_Wheel_GetSuspensionHertz(void* self)
{
} /* size: 13 */

// <012C2E04> engine2/interop.engine.cpp:13915
void IPhysicsJoint_Wheel_SetSuspensionDampingRatio(void* self, float dampingRatio)
{
} /* size: 13 */

// <012C2DBF> engine2/interop.engine.cpp:13921
void IPhysicsJoint_Wheel_GetSuspensionDampingRatio(void* self)
{
} /* size: 13 */

// <012C2D56> engine2/interop.engine.cpp:13927
void IPhysicsJoint_Wheel_EnableSuspensionLimit(void* self, int flag)
{
} /* size: 23 */

// <012C2D11> engine2/interop.engine.cpp:13933
void IPhysicsJoint_Wheel_IsSuspensionLimitEnabled(void* self)
{
} /* size: 22 */

// <012C2CCC> engine2/interop.engine.cpp:13939
void IPhysicsJoint_Wheel_GetLowerSuspensionLimit(void* self)
{
} /* size: 13 */

// <012C2C87> engine2/interop.engine.cpp:13945
void IPhysicsJoint_Wheel_GetUpperSuspensionLimit(void* self)
{
} /* size: 13 */

// <012C2C06> engine2/interop.engine.cpp:13951
void IPhysicsJoint_Wheel_SetSuspensionLimits(void* self, float lower, float upper)
{
} /* size: 13 */

// <012C2B9D> engine2/interop.engine.cpp:13957
void IPhysicsJoint_Wheel_EnableSpinMotor(void* self, int flag)
{
} /* size: 23 */

// <012C2B58> engine2/interop.engine.cpp:13963
void IPhysicsJoint_Wheel_IsSpinMotorEnabled(void* self)
{
} /* size: 22 */

// <012C2AF5> engine2/interop.engine.cpp:13969
void IPhysicsJoint_Wheel_SetSpinMotorSpeed(void* self, float speed)
{
} /* size: 13 */

// <012C2AB0> engine2/interop.engine.cpp:13975
void IPhysicsJoint_Wheel_GetSpinMotorSpeed(void* self)
{
} /* size: 13 */

// <012C2A4D> engine2/interop.engine.cpp:13981
void IPhysicsJoint_Wheel_SetMaxSpinTorque(void* self, float torque)
{
} /* size: 13 */

// <012C299F> engine2/interop.engine.cpp:13993
void IPhysicsJoint_Wheel_EnableSteering(void* self, int flag)
{
} /* size: 23 */

// <012C295A> engine2/interop.engine.cpp:13999
void IPhysicsJoint_Wheel_IsSteeringEnabled(void* self)
{
} /* size: 22 */

// <012C28F7> engine2/interop.engine.cpp:14005
void IPhysicsJoint_Wheel_SetSteeringHertz(void* self, float hertz)
{
} /* size: 13 */

// <012C28B2> engine2/interop.engine.cpp:14011
void IPhysicsJoint_Wheel_GetSteeringHertz(void* self)
{
} /* size: 13 */

// <012C284F> engine2/interop.engine.cpp:14017
void IPhysicsJoint_Wheel_SetSteeringDampingRatio(void* self, float dampingRatio)
{
} /* size: 13 */

// <012C280A> engine2/interop.engine.cpp:14023
void IPhysicsJoint_Wheel_GetSteeringDampingRatio(void* self)
{
} /* size: 13 */

// <012C27A7> engine2/interop.engine.cpp:14029
void IPhysicsJoint_Wheel_SetMaxSteeringTorque(void* self, float torque)
{
} /* size: 13 */

// <012C2762> engine2/interop.engine.cpp:14035
void IPhysicsJoint_Wheel_GetMaxSteeringTorque(void* self)
{
} /* size: 13 */

// <012C26F9> engine2/interop.engine.cpp:14041
void IPhysicsJoint_Wheel_EnableSteeringLimit(void* self, int flag)
{
} /* size: 23 */

// <012C26B4> engine2/interop.engine.cpp:14047
void IPhysicsJoint_Wheel_IsSteeringLimitEnabled(void* self)
{
} /* size: 22 */

// <012C266F> engine2/interop.engine.cpp:14053
void IPhysicsJoint_Wheel_GetLowerSteeringLimit(void* self)
{
} /* size: 13 */

// <012C262A> engine2/interop.engine.cpp:14059
void IPhysicsJoint_Wheel_GetUpperSteeringLimit(void* self)
{
} /* size: 13 */

// <012C25A9> engine2/interop.engine.cpp:14065
void IPhysicsJoint_Wheel_SetSteeringLimits(void* self, float lowerRadians, float upperRadians)
{
} /* size: 13 */

// <012C2546> engine2/interop.engine.cpp:14071
void IPhysicsJoint_Wheel_SetTargetSteeringAngle(void* self, float radians)
{
} /* size: 13 */

// <012C2501> engine2/interop.engine.cpp:14077
void IPhysicsJoint_Wheel_GetTargetSteeringAngle(void* self)
{
} /* size: 13 */

// <012C24BC> engine2/interop.engine.cpp:14083
void IPhysicsJoint_Wheel_GetSpinSpeed(void* self)
{
} /* size: 13 */

// <012C2477> engine2/interop.engine.cpp:14089
void IPhysicsJoint_Wheel_GetSpinTorque(void* self)
{
} /* size: 13 */

// <012C2432> engine2/interop.engine.cpp:14095
void IPhysicsJoint_Wheel_GetSteeringAngle(void* self)
{
} /* size: 13 */

// <012C23ED> engine2/interop.engine.cpp:14101
void IPhysicsJoint_Wheel_GetSteeringTorque(void* self)
{
} /* size: 13 */

// <012C238A> engine2/interop.engine.cpp:14107
void IPhysicsJoint_Parallel_SetHertz(void* self, float hertz)
{
} /* size: 13 */

// <012C2345> engine2/interop.engine.cpp:14113
void IPhysicsJoint_Parallel_GetHertz(void* self)
{
} /* size: 13 */

// <012C22E2> engine2/interop.engine.cpp:14119
void IPhysicsJoint_Parallel_SetDampingRatio(void* self, float dampingRatio)
{
} /* size: 13 */

// <012C229D> engine2/interop.engine.cpp:14125
void IPhysicsJoint_Parallel_GetDampingRatio(void* self)
{
} /* size: 13 */

// <012C21F5> engine2/interop.engine.cpp:14137
void IPhysicsJoint_Parallel_GetMaxTorque(void* self)
{
} /* size: 13 */

// <012C2191> engine2/interop.engine.cpp:14143
void IPhysicsShape_AddCollisionFunctionMask(void* self, unsigned char nMask)
{
} /* size: 14 */

// <012C212D> engine2/interop.engine.cpp:14149
void IPhysicsShape_RemoveCollisionFunctionMask(void* self, unsigned char nMask)
{
} /* size: 14 */

// <012C209E> engine2/interop.engine.cpp:14155
// variable: 1
// function call: 1
void IPhysicsShape_GetCollisionFunctionMask(void* __self)
{
	IPhysicsShape* self; // 14159
	RnCollisionAttr_t::GetCollisionFunctionMask(); // 14162
} /* size: 20, variables: 1, inline expansions: 1 (0 bytes) */

// <012C203D> engine2/interop.engine.cpp:14166
void IPhysicsShape_HasTag(void* self, unsigned int tag)
{
} /* size: 22 */

// <012C1FDC> engine2/interop.engine.cpp:14172
void IPhysicsShape_AddTag(void* self, unsigned int tag)
{
} /* size: 22 */

// <012C1F7B> engine2/interop.engine.cpp:14178
void IPhysicsShape_RemoveTag(void* self, unsigned int tag)
{
} /* size: 22 */

// <012C1EA4> engine2/interop.engine.cpp:14190
// function calls: 2
void IPhysicsShape_GetBody(void* self)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsBody*>(IPhysicsBody* c); // 14193
} /* size: 42, inline expansions: 2 (26 bytes) */

// <012C1E43> engine2/interop.engine.cpp:14196
void IPhysicsShape_SetMaterialIndex(void* self, uint32 name)
{
} /* size: 10 */

// <012C1DC6> engine2/interop.engine.cpp:14202
void IPhysicsShape_SetSurfaceIndex(void* self, int nSurfaceIndex, int index)
{
} /* size: 10 */

// <012C1D1C> engine2/interop.engine.cpp:14208
// variable: 1
// function call: 1
void IPhysicsShape_GetMaterialName(void* __self)
{
	IPhysicsShape* self; // 14212
	CUtlString::Get(); // 14216
} /* size: 81, variables: 1, inline expansions: 1 (21 bytes) */

// <012C1CD7> engine2/interop.engine.cpp:14220
void IPhysicsShape_GetType(void* self)
{
} /* size: 18 */

// <012C1C22> engine2/interop.engine.cpp:14226
void IPhysicsShape_UpdateMeshShape(void* self, int numVertices, void* vertices, int numIndices, void* indices)
{
} /* size: 13 */

// <012C1B03> engine2/interop.engine.cpp:14232
void IPhysicsShape_UpdateHeightShape(void* self, void* pHeights, void* pMaterials, int x, int y, int w, int h, float SizeScale, float HeightScale)
{
} /* size: 13 */

// <012C1A84> engine2/interop.engine.cpp:14238
void IPhysicsShape_UpdateSphereShape(void* self, Vector* vCenter, float flRadius)
{
} /* size: 13 */

// <012C19E9> engine2/interop.engine.cpp:14244
void IPhysicsShape_UpdateCapsuleShape(void* self, Vector* vCenter1, Vector* vCenter2, float flRadius)
{
} /* size: 13 */

// <012C1934> engine2/interop.engine.cpp:14250
void IPhysicsShape_UpdateHullShape(void* self, Vector* position, Quaternion* rotation, int nVertexCount, void* pvVertexBase)
{
} /* size: 13 */

// <012C188D> engine2/interop.engine.cpp:14256
// variable: 1
// function calls: 2
void IPhysicsShape_ManagedObject(void* __self)
{
	IPhysicsShape* self; // 14260
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsShape*>(IPhysicsShape* c); // 14263
} /* size: 32, variables: 1, inline expansions: 2 (23 bytes) */

// <012C1824> engine2/interop.engine.cpp:14267
void IPhysicsShape_SetTrigger(void* self, int trigger)
{
} /* size: 23 */

// <012C1762> engine2/interop.engine.cpp:14279
void IPhysicsShape_GetTriangulation(void* self, CUtlVector<Vector, CUtlMemory<Vector, int> >* arrVectors, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* arrIndices)
{
} /* size: 13 */

// <012C16C9> engine2/interop.engine.cpp:14285
void IPhysicsShape_GetTriangulationForNavmesh(void* self, CUtlVector<Vector, CUtlMemory<Vector, int> >* arrVectors, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* arrIndices, AABB_t* bounds)
{
} /* size: 13 */

// <012C1668> engine2/interop.engine.cpp:14291
void IPhysicsShape_GetOutline(void* self, CUtlVector<Vector, CUtlMemory<Vector, int> >* arrVectors)
{
} /* size: 13 */

// <012C1623> engine2/interop.engine.cpp:14297
void IPhysicsShape_AsSphere(void* self)
{
} /* size: 10 */

// <012C15C7> engine2/interop.engine.cpp:14303
void IPhysicsShape_AsCapsule(void* self)
{
} /* size: 64 */

// <012C152E> engine2/interop.engine.cpp:14309
void IPhysicsShape_UpdateBoxShape(void* self, Vector* vCenter, Quaternion* qRotation, Vector* vExtents)
{
} /* size: 13 */

// <012C14CD> engine2/interop.engine.cpp:14315
void IPhysicsShape_SetFriction(void* self, float f)
{
} /* size: 13 */

// <012C1488> engine2/interop.engine.cpp:14321
void IPhysicsShape_GetFriction(void* self)
{
} /* size: 13 */

// <012C13E4> engine2/interop.engine.cpp:14333
void IPhysicsShape_GetLocalVelocity(void* self)
{
} /* size: 13 */

// <012C1383> engine2/interop.engine.cpp:14339
void IPhysicsShape_SetElasticity(void* self, float f)
{
} /* size: 13 */

// <012C12BB> engine2/interop.engine.cpp:14351
void IPhysicsShape_SetIgnoreTraces(void* self, int b)
{
} /* size: 23 */

// <012C11F8> engine2/interop.engine.cpp:14363
void IPhysicsShape_BuildBounds(void* self)
{
} /* size: 64 */

// <012C1187> engine2/interop.engine.cpp:14369
// variable: 1
void IPhysicsShape_LocalBounds(void* __self)
{
	IPhysicsShape* self; // 14373
} /* size: 74, variables: 1 */

// <012C1102> engine2/interop.engine.cpp:14380
void IPhysicsShape_IsTouching(void* self, IPhysicsShape* pShape, int bTriggers)
{
} /* size: 30 */

// <012C10BD> engine2/interop.engine.cpp:14386
void IPhysicsShape_ResetProxy(void* self)
{
} /* size: 13 */

// <012C102B> engine2/interop.engine.cpp:14392
// function calls: 2
void IPhysicsWorld_AddBody(void* self)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsBody*>(IPhysicsBody* c); // 14395
} /* size: 45, inline expansions: 2 (26 bytes) */

// <012C0FCA> engine2/interop.engine.cpp:14398
void IPhysicsWorld_RemoveBody(void* self, IPhysicsBody* pBody)
{
} /* size: 13 */

// <012C0F38> engine2/interop.engine.cpp:14404
// function calls: 2
void IPhysicsWorld_GetWorldReferenceBody(void* self)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsBody*>(IPhysicsBody* c); // 14407
} /* size: 45, inline expansions: 2 (26 bytes) */

// <012C0ED7> engine2/interop.engine.cpp:14410
void IPhysicsWorld_SetWorldReferenceBody(void* self, IPhysicsBody* pBody)
{
} /* size: 13 */

// <012C0E76> engine2/interop.engine.cpp:14416
void IPhysicsWorld_RemoveJoint(void* self, IPhysicsJoint* pJoint)
{
} /* size: 13 */

// <012C0E15> engine2/interop.engine.cpp:14422
void IPhysicsWorld_SetGravity(void* self, Vector* gravity)
{
} /* size: 10 */

// <012C0DD0> engine2/interop.engine.cpp:14428
void IPhysicsWorld_GetGravity(void* self)
{
} /* size: 10 */

// <012C0D6F> engine2/interop.engine.cpp:14434
void IPhysicsWorld_SetSimulation(void* self, int64 simulation)
{
} /* size: 10 */

// <012C0D2A> engine2/interop.engine.cpp:14440
void IPhysicsWorld_GetSimulation(void* self)
{
} /* size: 18 */

// <012C0CE5> engine2/interop.engine.cpp:14446
void IPhysicsWorld_EnableSleeping(void* self)
{
} /* size: 10 */

// <012C0CA0> engine2/interop.engine.cpp:14452
void IPhysicsWorld_DisableSleeping(void* self)
{
} /* size: 13 */

// <012C0AF8> engine2/interop.engine.cpp:14470
// function calls: 2
void IPhysicsWorld_AddWeldJoint(void* self, IPhysicsBody* pBody1, IPhysicsBody* pBody2, CTransformUnaligned* localFrame1, CTransformUnaligned* localFrame2)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsJoint*>(IPhysicsJoint* c); // 14473
} /* size: 137, inline expansions: 2 (27 bytes) */

// <012C09F8> engine2/interop.engine.cpp:14476
// function calls: 2
void IPhysicsWorld_AddSpringJoint(void* self, IPhysicsBody* pBody1, IPhysicsBody* pBody2, CTransformUnaligned* localFrame1, CTransformUnaligned* localFrame2)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsJoint*>(IPhysicsJoint* c); // 14479
} /* size: 137, inline expansions: 2 (27 bytes) */

// <012C08F8> engine2/interop.engine.cpp:14482
// function calls: 2
void IPhysicsWorld_AddRevoluteJoint(void* self, IPhysicsBody* pBody1, IPhysicsBody* pBody2, CTransformUnaligned* localFrame1, CTransformUnaligned* localFrame2)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsJoint*>(IPhysicsJoint* c); // 14485
} /* size: 137, inline expansions: 2 (27 bytes) */

// <012C07F8> engine2/interop.engine.cpp:14488
// function calls: 2
void IPhysicsWorld_AddPrismaticJoint(void* self, IPhysicsBody* pBody1, IPhysicsBody* pBody2, CTransformUnaligned* localFrame1, CTransformUnaligned* localFrame2)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsJoint*>(IPhysicsJoint* c); // 14491
} /* size: 137, inline expansions: 2 (27 bytes) */

// <012C06F8> engine2/interop.engine.cpp:14494
// function calls: 2
void IPhysicsWorld_AddSphericalJoint(void* self, IPhysicsBody* pBody1, IPhysicsBody* pBody2, CTransformUnaligned* localFrame1, CTransformUnaligned* localFrame2)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsJoint*>(IPhysicsJoint* c); // 14497
} /* size: 137, inline expansions: 2 (27 bytes) */

// <012C05F8> engine2/interop.engine.cpp:14500
// function calls: 2
void IPhysicsWorld_AddMotorJoint(void* self, IPhysicsBody* pBody1, IPhysicsBody* pBody2, CTransformUnaligned* localFrame1, CTransformUnaligned* localFrame2)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsJoint*>(IPhysicsJoint* c); // 14503
} /* size: 137, inline expansions: 2 (27 bytes) */

// <012C04F8> engine2/interop.engine.cpp:14506
// function calls: 2
void IPhysicsWorld_AddWheelJoint(void* self, IPhysicsBody* pBody1, IPhysicsBody* pBody2, CTransformUnaligned* localFrame1, CTransformUnaligned* localFrame2)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsJoint*>(IPhysicsJoint* c); // 14509
} /* size: 137, inline expansions: 2 (27 bytes) */

// <012C03F8> engine2/interop.engine.cpp:14512
// function calls: 2
void IPhysicsWorld_AddParallelJoint(void* self, IPhysicsBody* pBody1, IPhysicsBody* pBody2, CTransformUnaligned* localFrame1, CTransformUnaligned* localFrame2)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsJoint*>(IPhysicsJoint* c); // 14515
} /* size: 137, inline expansions: 2 (27 bytes) */

// <012C032E> engine2/interop.engine.cpp:14518
// function calls: 2
void IPhysicsWorld_AddFilterJoint(void* self, IPhysicsBody* pBody1, IPhysicsBody* pBody2)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsJoint*>(IPhysicsJoint* c); // 14521
} /* size: 42, inline expansions: 2 (23 bytes) */

// <012C02CD> engine2/interop.engine.cpp:14524
void IPhysicsWorld_SetCollisionRulesFromJson(void* self, const char* rules)
{
} /* size: 13 */

// <012C01FF> engine2/interop.engine.cpp:14530
// variables: 3
void IPhysicsWorld_StepSimulation(void* __self, float __flTimestep, int __nNumSteps)
{
	IPhysicsWorld* self; // 14534
	float flTimestep; // 14535
	int nNumSteps; // 14536
} /* size: 81, variables: 3 */

// <012BFF9A> engine2/interop.engine.cpp:14543
// function calls: 10
void IPhysicsWorld_ProcessIntersections(void* self, void* f)
{
	FastDelegate1<VPhysIntersectionNotification_t::Convert<FastDelegate1<VPhysIntersectionNotification_t*, void>, void (
																void ()(const FastDelegate1<VPhysIntersectionNotification_t*, void> *, VPhysIntersectionNotification_t *) FastDele function_to_bind,
																void ()(GenericClass *) GenericClass::*& bound_func);  // 746
	ClosurePtr<void (detail::GenericClass::::bindmemfunc<FastDelegate1<VPhysIntersectionNotification_t*, void>, void (
																FastDelegate1<VPhysIntersectionNotification_t*, void>* pthis,
																void ()(const FastDelegate1<VPhysIntersectionNotification_t*, void> *, VPhysIntersectionNotification_t *) FastDele function_to_bind);  // 861
	ClosurePtr<void (detail::GenericClass::::bindstaticfunc<FastDelegate1<VPhysIntersectionNotification_t*, void>, void (
																FastDelegate1<VPhysIntersectionNotification_t*, void>* pParent,
																void ()(const FastDelegate1<VPhysIntersectionNotification_t*, void> *, VPhysIntersectionNotification_t *) FastDele static_function_invoker,
																void (*function_to_bind)(VPhysIntersectionNotification_t *));  // 1144
	FastDelegate1<VPhysIntersectionNotification_t::Bind(
		void (*function_to_bind)(VPhysIntersectionNotification_t *));  // 72
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(VPhysIntersectionNotification_t*), void (*)(VPhysIntersectionNotification this); // 1084
	FastDelegate1<VPhysIntersectionNotification_t::Clear(); // 1084
	FastDelegate1<VPhysIntersectionNotification_t::FastDelegate1(); // 2160
	CUtlDelegate<void(VPhysIntersectionNotification_t::CUtlDelegate()>* this); // 71
	FunctionPointerToDelegate<CUtlDelegate<void(VPhysIntersectionNotification_t*)> >(void* ptr); // 14546
} /* size: 96, inline expansions: 10 (162 bytes) */

// <012BFF39> engine2/interop.engine.cpp:14549
void IPhysicsWorld_DestroyAggregateInstance(void* self, IPhysAggregateInstance* pAggregate)
{
} /* size: 10 */

// <012BF8E8> engine2/interop.engine.cpp:14555
// variables: 7
// function calls: 22
void IPhysicsWorld_CreateAggregateInstance(void* __self, const char* __resourceName, CTransformUnaligned* __tmStart, uint64 __nGSNHandle, int64 __nMotionType)
{
	IPhysicsWorld* self; // 14559
	const char* resourceName; // 14560
	CTransformUnaligned tmStart; // 14561
	long long unsigned int nGSNHandle; // 14562
	VPhysicsMotionType_t nMotionType; // 14563
	HPhysAggregateData_Internal hPhysicsData; // 14566
	IPhysAggregateInstance* pInstance; // 14567
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 718
	IResourceSystem::FindExistingResourceByName(
					const CResourceName& resourceName);  // 720
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 720
	IResourceSystem::FindExistingResourceByName<495958126710>(
						const CResourceName& resourceName);  // 14566
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 14566
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::HasData(); // 14568
	CTransformUnaligned::UniformScale(); // 534
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 534
	CTransform::CTransform(
			const CTransformUnaligned& tx);  // 14570
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::operator const ResourceHandleInfo_t<InfoForResourceTypeCPhysAggregateData>::RuntimeClass_t*(); // 14570
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysAggregateInstance*>(IPhysAggregateInstance* c); // 14571
} /* size: 415, variables: 7, inline expansions: 22 (384 bytes) */

// <012BF448> engine2/interop.engine.cpp:14575
// variables: 5
// function calls: 18
void IPhysicsWorld_CreateAggregateInstance_1(void* __self, HModelStrong* __model, CTransformUnaligned* __tmStart, uint64 __nGSNHandle, int64 __nMotionType)
{
	IPhysicsWorld* self; // 14579
	CWeakHandle<InfoForResourceTypeCModel> model; // 14580
	CTransformUnaligned tmStart; // 14581
	long long unsigned int nGSNHandle; // 14582
	VPhysicsMotionType_t nMotionType; // 14583
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCModel>::GetHandle(); // 27
	ResourceHandle_GetHandle(HModelStrong* target); // 14580
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 14586
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	VectorAligned::VectorAligned(); // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 534
	CTransformUnaligned::UniformScale(); // 534
	CTransform::CTransform(
			const CTransformUnaligned& tx);  // 14586
	CPhysAggregateDataHandle::Get(); // 400
	CModel::GetPhysicsContainer(); // 14586
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysAggregateInstance*>(IPhysAggregateInstance* c); // 14586
} /* size: 0, variables: 5, inline expansions: 18 (133 bytes) */

// <012BF3E7> engine2/interop.engine.cpp:14590
void IPhysicsWorld_SetDebugScene(void* self, ISceneWorld* world)
{
} /* size: 13 */

// <012BF355> engine2/interop.engine.cpp:14596
// function calls: 2
void IPhysicsWorld_GetDebugScene(void* self)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<ISceneWorld*>(ISceneWorld* c); // 14599
} /* size: 45, inline expansions: 2 (26 bytes) */

// <012BF0EE> engine2/interop.engine.cpp:14602
// function calls: 10
void IPhysicsWorld_Draw(void* self, void* debugDrawFcn)
{
	FastDelegate1<DebugDrawArgs_t::Convert<FastDelegate1<DebugDrawArgs_t*, void>, void (
																void ()(const FastDelegate1<DebugDrawArgs_t*, void> *, DebugDrawArgs_t *) FastDelegate1<DebugDrawArgs_t*, void>::* function_to_bind,
																void ()(GenericClass *) GenericClass::*& bound_func);  // 746
	ClosurePtr<void (detail::GenericClass::::bindmemfunc<FastDelegate1<DebugDrawArgs_t*, void>, void (
																FastDelegate1<DebugDrawArgs_t*, void>* pthis,
																void ()(const FastDelegate1<DebugDrawArgs_t*, void> *, DebugDrawArgs_t *) FastDelegate1<DebugDrawArgs_t*, void>::* function_to_bind);  // 861
	ClosurePtr<void (detail::GenericClass::::bindstaticfunc<FastDelegate1<DebugDrawArgs_t*, void>, void (
																FastDelegate1<DebugDrawArgs_t*, void>* pParent,
																void ()(const FastDelegate1<DebugDrawArgs_t*, void> *, DebugDrawArgs_t *) FastDelegate1<DebugDrawArgs_t*, void>::* static_function_invoker,
																void (*function_to_bind)(DebugDrawArgs_t *));  // 1144
	FastDelegate1<DebugDrawArgs_t::Bind(
		void (*function_to_bind)(DebugDrawArgs_t *));  // 72
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(DebugDrawArgs_t*), void (*)(DebugDrawArgs_t*), void (*)(DebugDrawArgs_t*) this); // 1084
	FastDelegate1<DebugDrawArgs_t::Clear(); // 1084
	FastDelegate1<DebugDrawArgs_t::FastDelegate1(); // 2160
	CUtlDelegate<void(DebugDrawArgs_t::CUtlDelegate()>* this); // 71
	FunctionPointerToDelegate<CUtlDelegate<void(DebugDrawArgs_t*)> >(void* ptr); // 14605
} /* size: 96, inline expansions: 10 (162 bytes) */

// <012BF047> engine2/interop.engine.cpp:14608
// variable: 1
// function calls: 2
void IPhysicsWorld_ManagedObject(void* __self)
{
	IPhysicsWorld* self; // 14612
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<IPhysicsWorld*>(IPhysicsWorld* c); // 14615
} /* size: 32, variables: 1, inline expansions: 2 (23 bytes) */

// <012BEF24> engine2/interop.engine.cpp:14619
// function calls: 2
void IPhysicsWorld_Query(void* self, CQueryResult* result, Vector* vCenter, float flRadius, short unsigned int nObjectSetMask)
{
	RnQueryShapeAttr_t::RnQueryShapeAttr_t(); // 335
	RnQueryAttr_t::RnQueryAttr_t(
			RnQueryObjectSet nObjectSetMask);  // 14622
} /* size: 194, inline expansions: 2 (237 bytes) */

// <012BEE1F> engine2/interop.engine.cpp:14625
// function calls: 2
void IPhysicsWorld_Query_1(void* self, CQueryResult* result, AABB_t* bounds, short unsigned int nObjectSetMask)
{
	RnQueryShapeAttr_t::RnQueryShapeAttr_t(); // 335
	RnQueryAttr_t::RnQueryAttr_t(
			RnQueryObjectSet nObjectSetMask);  // 14628
} /* size: 194, inline expansions: 2 (237 bytes) */

// <012BECFE> engine2/interop.engine.cpp:14631
// function calls: 2
void IPhysicsWorld_Query_2(void* self, CQueryResult* result, void* pPoints, int nPoints, short unsigned int nObjectSetMask)
{
	RnQueryShapeAttr_t::RnQueryShapeAttr_t(); // 335
	RnQueryAttr_t::RnQueryAttr_t(
			RnQueryObjectSet nObjectSetMask);  // 14634
} /* size: 195, inline expansions: 2 (238 bytes) */

// <012BECB3> engine2/interop.engine.cpp:14637
void PhysSrfcPrprtyCn_GetSurfacePropCount(void* self)
{
} /* size: 10 */

// <012BEC52> engine2/interop.engine.cpp:14643
void PhysSrfcPrprtyCn_GetSurfaceProperty(void* self, int nIndex)
{
} /* size: 10 */

// <012BE9C5> engine2/interop.engine.cpp:14649
// function calls: 6
void PhysSrfcPrprtyCn_AddProperty(void* self, const char* name, const char* basename, const char* description)
{
	CUtlString::CUtlString(
			const char* pString);  // 14652
	CUtlString::CUtlString(
			const char* pString);  // 14652
	CUtlString::CUtlString(
			const char* pString);  // 14652
	CUtlString::~CUtlString(); // 14652
	CUtlString::~CUtlString(); // 14652
	CUtlString::~CUtlString(); // 14652
} /* size: 219, inline expansions: 6 (109 bytes) */

// <012BE980> engine2/interop.engine.cpp:14655
void IPVS_IsEmptyPVS(void* self)
{
} /* size: 19 */

// <012BE8E7> engine2/interop.engine.cpp:14661
void IPVS_IsInPVS(void* self, int numSources, void* sources, Vector* position)
{
} /* size: 19 */

// <012BE832> engine2/interop.engine.cpp:14667
void IPVS_IsAbsBoxInPVS(void* self, int numSources, void* sources, Vector* mins, Vector* maxs)
{
} /* size: 19 */

// <012BE7D1> engine2/interop.engine.cpp:14673
void IPVS_IsSkyVisibleFromPosition(void* self, Vector* position)
{
} /* size: 19 */

// <012BE6AE> engine2/interop.engine.cpp:14691
void RyTrcScnWrld_AddSceneWorldToBuild(void* self, ISceneWorld* pWorld, IRenderContext* pRenderContext)
{
} /* size: 10 */

// <012BE631> engine2/interop.engine.cpp:14697
void RyTrcScnWrld_EndBuild(void* self, IRenderContext* pRenderContext, CRenderAttributes* attrs)
{
} /* size: 19 */

// <012BE3E7> engine2/interop.engine.cpp:14703
// variables: 4
// function calls: 4
void RyTrcScnWrld_BuildTLASForWorld(void* __self, ISceneWorld* __pWorld, CRenderAttributes* __attrs)
{
	IRayTraceSceneWorld* self; // 14707
	ISceneWorld* pWorld; // 14708
	CRenderAttributes* attrs; // 14709
	CRenderContextPtr pRenderContext; // 14712
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 14712
	CRenderContextPtr::operator IRenderContext*(); // 14714
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 14719
} /* size: 184, variables: 4, inline expansions: 4 (88 bytes) */

// <012BE3A2> engine2/interop.engine.cpp:14720
void RD_RgstrRsrcDttl_SetDataRegistrationFailed(void* self)
{
} /* size: 9 */

// <012BE2B7> engine2/interop.engine.cpp:14738
void RD_RgstrRsrcDttl_GetDataRegistrationFailed(void* self)
{
} /* size: 19 */

// <012BE26D> engine2/interop.engine.cpp:14744
const void* RD_RgstrRsrcDttl_GetFinalResourceData(void* self)
{
} /* size: 10 */

// <012BE228> engine2/interop.engine.cpp:14750
void RD_RgstrRsrcDttl_GetResultBufferSize(void* self)
{
} /* size: 10 */

// <012BE18F> engine2/interop.engine.cpp:14756
void IRenderContext_Draw(void* self, int64 type, int nFirstVertex, int nVertexCount)
{
} /* size: 13 */

// <012BE0DA> engine2/interop.engine.cpp:14762
void IRenderContext_DrawInstanced(void* self, int64 type, int nFirstVertex, int nVertexCountPerInstance, int nInstanceCount)
{
} /* size: 13 */

// <012BE009> engine2/interop.engine.cpp:14768
void IRenderContext_DrawIndexed(void* self, int64 type, int nFirstIndex, int nIndexCount, int nMaxVertexCount, int nBaseVertex)
{
} /* size: 13 */

// <012BDF28> engine2/interop.engine.cpp:14774
void IRenderContext_DrawIndexedInstanced(void* self, int64 type, int nFirstIndex, int nIndexCountPerInstance, int nInstanceCount, int nMaxVertexCount, int nBaseVertex)
{
} /* size: 29 */

// <012BDE8F> engine2/interop.engine.cpp:14780
void IRenderContext_DrawInstancedIndirect(void* self, int64 type, RenderBufferHandle_t hDrawArgBuffer, unsigned int nBufferOffset)
{
} /* size: 13 */

// <012BDDF6> engine2/interop.engine.cpp:14786
void IRenderContext_DrawIndexedInstancedIndirect(void* self, int64 type, RenderBufferHandle_t hDrawArgBuffer, unsigned int nBufferOffset)
{
} /* size: 13 */

// <012BDA88> engine2/interop.engine.cpp:14792
// variables: 9
// function calls: 9
void IRenderContext_TextureBarrierTransition(void* __self, HRenderTextureStrong* __hSrc, int __mips, int64 __srcStage, int64 __dstStage, int64 __layout, int64 __srcFlags, int64 __dstFlags)
{
	IRenderContext* self; // 14796
	CWeakHandle<InfoForResourceTypeCTextureBase> hSrc; // 14797
	int mips; // 14798
	RenderBarrierPipelineStageFlags_t srcStage; // 14799
	RenderBarrierPipelineStageFlags_t dstStage; // 14800
	RenderImageLayout_t layout; // 14801
	RenderBarrierAccessFlags_t srcFlags; // 14802
	RenderBarrierAccessFlags_t dstFlags; // 14803
	RenderUAVBarrier_t uavBarrier; // 14808
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 14797
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 14806
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 14808
} /* size: 175, variables: 9, inline expansions: 9 (19 bytes) */

// <012BD90E> engine2/interop.engine.cpp:14814
// variables: 6
// function call: 1
void IRenderContext_BufferBarrierTransition(void* __self, RenderBufferHandle_t __hSrc, int64 __srcStage, int64 __dstStage, int64 __srcFlags, int64 __dstFlags)
{
	IRenderContext* self; // 14818
	RenderBufferHandle_t__* hSrc; // 14819
	RenderBarrierPipelineStageFlags_t srcStage; // 14820
	RenderBarrierPipelineStageFlags_t dstStage; // 14821
	RenderBarrierAccessFlags_t srcFlags; // 14822
	RenderBarrierAccessFlags_t dstFlags; // 14823
	IRenderContext::BufferBarrier(
			const RenderBufferBarrier_t& barrier);  // 14826
} /* size: 107, variables: 6, inline expansions: 1 (18 bytes) */

// <012BD876> engine2/interop.engine.cpp:14830
// function call: 1
void IRenderContext_SetScissorRect(void* self, Rect_t* rect)
{
	IRenderContext::SetScissorRect(
			const Rect_t& rect);  // 14833
} /* size: 24, inline expansions: 1 (17 bytes) */

// <012BD800> engine2/interop.engine.cpp:14836
// function call: 1
void IRenderContext_GetAttributesPtrForModify(void* self)
{
	IRenderContext::GetAttributesPtrForModify(); // 14839
} /* size: 13, inline expansions: 1 (9 bytes) */

// <012BD696> engine2/interop.engine.cpp:14842
// function calls: 5
void IRenderContext_GenerateMipMaps(void* self, HRenderTextureStrong* material)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 14845
} /* size: 75, inline expansions: 5 (27 bytes) */

// <012BD439> engine2/interop.engine.cpp:14848
// variables: 6
// function calls: 7
void IRenderContext_Clear(void* __self, Vector4D* __col, int __clearColor, int __clearDepth, int __clearStencil)
{
	IRenderContext* self; // 14852
	Vector4D col; // 14853
	bool clearColor; // 14854
	bool clearDepth; // 14855
	bool clearStencil; // 14856
	RenderClearFlags_t flags; // 14859
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 14853
	RenderClearInfo_t::RenderClearInfo_t(
				const Vector4D& vecRGBAColor,
				int nFlags);  // 241
	IRenderContext::Clear(
		const Vector4D& vecRGBAColor,
		int nFlags);  // 14863
	operator|(RenderClearFlags_t a,
			RenderClearFlags_t b);  // 615
	operator|=(RenderClearFlags_t& a,
			RenderClearFlags_t b);  // 14861
	operator|(RenderClearFlags_t a,
			RenderClearFlags_t b);  // 615
	operator|=(RenderClearFlags_t& a,
			RenderClearFlags_t b);  // 14862
} /* size: 126, variables: 6, inline expansions: 7 (118 bytes) */

// <012BCCC2> engine2/interop.engine.cpp:14867
// variables: 6
// function calls: 35
void IRenderContext_BindRenderTargets(void* __self, HRenderTextureStrong* __colorTexture, HRenderTextureStrong* __depthTexture, ISceneLayer* __layer)
{
	IRenderContext* self; // 14871
	CWeakHandle<InfoForResourceTypeCTextureBase> colorTexture; // 14872
	CWeakHandle<InfoForResourceTypeCTextureBase> depthTexture; // 14873
	ISceneLayer* layer; // 14874
	RenderTargetDesc_t rtDesc; // 14879
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 14872
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 14873
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 14877
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 14879
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 14879
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 141
	{
		int i; // 121
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 123
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 127
	RenderTargetDesc_t::Clear(); // 142
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 175
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 177
	RenderTargetDesc_t::Init(
		HRenderTexture hColor,
		HRenderTexture hDepth,
		RenderColorSpace_t allowSrgbWrites);  // 143
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 143
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 143
	RenderTargetDesc_t::RenderTargetDesc_t(
				HRenderTexture hColor,
				HRenderTexture hDepth,
				RenderColorSpace_t allowSrgbWrites);  // 14879
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 14878
} /* size: 234, variables: 5, inline expansions: 33 (264 bytes) */

// <012BCC28> engine2/interop.engine.cpp:14884
// variables: 2
void IRenderContext_RestoreRenderTargets(void* __self, ISceneLayer* __layer)
{
	IRenderContext* self; // 14888
	ISceneLayer* layer; // 14889
} /* size: 45, variables: 2 */

// <012BCABC> engine2/interop.engine.cpp:14896
// variables: 3
// function calls: 3
void IRenderContext_SetViewport(void* __self, Rect_t* __rect)
{
	IRenderContext* self; // 14900
	Rect_t rect; // 14901
	RenderViewport_t vp; // 14904
	RenderViewport_t::RenderViewport_t(); // 14904
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 422
	RenderViewport_t::Init(
		const Rect_t& rect,
		float flMinZ,
		float flMaxZ);  // 14905
} /* size: 95, variables: 3, inline expansions: 3 (45 bytes) */

// <012BCA29> engine2/interop.engine.cpp:14910
// variables: 2
void IRenderContext_SetViewport_1(void* __self, RenderViewport_t* __viewport)
{
	IRenderContext* self; // 14914
	RenderViewport_t viewport; // 14915
} /* size: 91, variables: 2 */

// <012BC870> engine2/interop.engine.cpp:14922
// variables: 6
// function calls: 2
void IRenderContext_SetViewport_2(void* __self, int __x, int __y, int __w, int __h)
{
	IRenderContext* self; // 14926
	int x; // 14927
	int y; // 14928
	int w; // 14929
	int h; // 14930
	RenderViewport_t vp; // 14933
	RenderViewport_t::RenderViewport_t(); // 14933
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 14934
} /* size: 116, variables: 6, inline expansions: 2 (52 bytes) */

// <012BC7CD> engine2/interop.engine.cpp:14939
// variables: 2
// function call: 1
void IRenderContext_GetViewport(void* __self)
{
	IRenderContext* self; // 14943
	RenderViewport_t viewport; // 14946
	RenderViewport_t::RenderViewport_t(); // 14946
} /* size: 45, variables: 2, inline expansions: 1 (6 bytes) */

// <012BC788> engine2/interop.engine.cpp:14952
void IRenderContext_Submit(void* self)
{
} /* size: 10 */

// <012BC22D> engine2/interop.engine.cpp:14958
// variables: 5
// function calls: 21
void IRenderContext_BindRenderTargets_1(void* __self, SwapChainHandle_t __swapChain, int __color, int __depth)
{
	IRenderContext* self; // 14962
	SwapChainHandle_t__* swapChain; // 14963
	bool color; // 14964
	bool depth; // 14965
	{
		int i; // 121
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 123
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 127
	RenderTargetDesc_t::Clear(); // 136
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 135
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 989
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 990
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 999
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1003
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1003
	RenderTargetDesc_t::Init(
		SwapChainHandle_t hSwapChain,
		bool bUseColorBuffer,
		bool bUseDepthBuffer,
		RenderColorSpace_t allowSrgbWrites);  // 137
	RenderTargetDesc_t::RenderTargetDesc_t(
				SwapChainHandle_t hSwapChain,
				bool bUseColorBuffer,
				bool bUseDepthBuffer,
				RenderColorSpace_t allowSrgbWrites);  // 14968
} /* size: 335, variables: 4, inline expansions: 19 (534 bytes) */

// <012BC1B0> engine2/interop.engine.cpp:14972
void IRenderContext_BindIndexBuffer(void* self, IndexBufferHandle_t hIndexBuffer, int nOffset)
{
} /* size: 22 */

// <012BC117> engine2/interop.engine.cpp:14978
void IRenderContext_BindIndexBuffer_1(void* self, RenderBufferHandle_t hIndexBuffer, int nIndexSize, int nOffset)
{
} /* size: 22 */

// <012BC078> engine2/interop.engine.cpp:14984
void IRenderContext_BindVertexBuffer(void* self, int nSlot, VertexBufferHandle_t hVertexBuffer, int nOffset)
{
} /* size: 28 */

// <012BBFC3> engine2/interop.engine.cpp:14990
void IRenderContext_BindVertexBuffer_1(void* self, int nSlot, VertexBufferHandle_t hVertexBuffer, int nOffset, int nStride)
{
} /* size: 22 */

// <012BBF24> engine2/interop.engine.cpp:14996
void IRenderContext_BindVertexBuffer_2(void* self, int nSlot, RenderBufferHandle_t hVertexBuffer, int nOffset)
{
} /* size: 28 */

// <012BBE6F> engine2/interop.engine.cpp:15002
void IRenderContext_BindVertexBuffer_3(void* self, int nSlot, RenderBufferHandle_t hVertexBuffer, int nOffset, int nStride)
{
} /* size: 22 */

// <012BBD98> engine2/interop.engine.cpp:15008
// variables: 3
void IRenderContext_BindVertexShader(void* __self, RenderShaderHandle_t __hVertexShader, VertexBufferHandle_t __hInputLayout)
{
	IRenderContext* self; // 15012
	RenderShaderHandle_t__* hVertexShader; // 15013
	VertexBufferHandle_t__* hInputLayout; // 15014
} /* size: 66, variables: 3 */

// <012BBD08> engine2/interop.engine.cpp:15021
// variables: 2
void IRenderContext_BindPixelShader(void* __self, RenderShaderHandle_t __hShader)
{
	IRenderContext* self; // 15025
	RenderShaderHandle_t__* hShader; // 15026
} /* size: 21, variables: 2 */

// <012BBADD> engine2/interop.engine.cpp:15033
// variables: 7
// function calls: 2
void IRenderContext_SetDynamicConstantBufferData(void* __self, int64 __shaderType, void* __pData, int __nSize, int __slot)
{
	IRenderContext* self; // 15037
	RenderShaderType_t shaderType; // 15038
	void* pData; // 15039
	int nSize; // 15040
	int slot; // 15041
	DynamicLockDesc_t lock; // 15044
	ConstantBufferHandle_t hConstantBuffer; // 15045
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 15048
} /* size: 168, variables: 7, inline expansions: 2 (30 bytes) */

// <012BB86D> engine2/interop.engine.cpp:15055
// variables: 3
// function calls: 7
void IRenderContext_BindTexture(void* __self, int __nTextureIndex, HRenderTextureStrong* __hTexture)
{
	IRenderContext* self; // 15059
	int nTextureIndex; // 15060
	CWeakHandle<InfoForResourceTypeCTextureBase> hTexture; // 15061
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 15061
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 15065
} /* size: 152, variables: 3, inline expansions: 7 (19 bytes) */

// <012BB55D> engine2/interop.engine.cpp:15069
// variables: 8
// function calls: 8
void IRenderContext_ReadTexturePixels(void* __self, HRenderTextureStrong* __hTexture, IReadTexturePixelsCallback* __pCallback, Rect_t* __srcRect, int __nSrcSlice, int __nSrcMip, int __bDeleteCallbackWhenFinished)
{
	IRenderContext* self; // 15073
	CWeakHandle<InfoForResourceTypeCTextureBase> hTexture; // 15074
	IReadTexturePixelsCallback* pCallback; // 15075
	Rect_t srcRect; // 15076
	int nSrcSlice; // 15077
	int nSrcMip; // 15078
	bool bDeleteCallbackWhenFinished; // 15079
	Rect_t* pSrcRect; // 15082
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 15074
	Rect_t::IsEmpty(); // 15083
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 15087
} /* size: 135, variables: 8, inline expansions: 8 (26 bytes) */

// <012BB484> engine2/interop.engine.cpp:15091
void IRenderContext_ReadBuffer(void* self, RenderBufferHandle_t hBuffer, IReadBufferCallback* pCallback, int nOffset, int nBytesToRead, int bDeleteCallbackWhenFinished)
{
} /* size: 27 */

// <012BB423> engine2/interop.engine.cpp:15097
void IRenderContext_BeginPixEvent(void* self, const char* name)
{
} /* size: 13 */

// <012BB37D> engine2/interop.engine.cpp:15109
void IRenderContext_PixSetMarker(void* self, const char* name)
{
} /* size: 13 */

// <012BB299> engine2/interop.engine.cpp:15115
// function calls: 3
void ISceneLayer_SetObjectMatchID(void* self, uint32 nTok)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 15118
	ISceneLayer::SetObjectMatchID(
			CUtlStringToken nTok);  // 15118
} /* size: 11, inline expansions: 3 (6 bytes) */

// <012BB1E1> engine2/interop.engine.cpp:15121
// function calls: 2
void ISceneLayer_AddObjectFlagsRequiredMask(void* self, int64 nRequiredFlags)
{
	operator|=(ESceneObjectFlags& a,
			ESceneObjectFlags b);  // 605
	ISceneLayer::AddObjectFlagsRequiredMask(
					ESceneObjectFlags nRequiredFlags);  // 15124
} /* size: 12, inline expansions: 2 (14 bytes) */

// <012BB129> engine2/interop.engine.cpp:15127
// function calls: 2
void ISceneLayer_AddObjectFlagsExcludedMask(void* self, int64 nExcludedFlags)
{
	operator|=(ESceneObjectFlags& a,
			ESceneObjectFlags b);  // 610
	ISceneLayer::AddObjectFlagsExcludedMask(
					ESceneObjectFlags nExcludedFlags);  // 15130
} /* size: 12, inline expansions: 2 (14 bytes) */

// <012BB04E> engine2/interop.engine.cpp:15133
// function calls: 3
void ISceneLayer_RemoveObjectFlagsRequiredMask(void* self, int64 nRequiredFlags)
{
	operator~(ESceneObjectFlags a); // 615
	operator&=(ESceneObjectFlags& a,
			ESceneObjectFlags b);  // 615
	ISceneLayer::RemoveObjectFlagsRequiredMask(
					ESceneObjectFlags nRequiredFlags);  // 15136
} /* size: 15, inline expansions: 3 (20 bytes) */

// <012BAF73> engine2/interop.engine.cpp:15139
// function calls: 3
void ISceneLayer_RemoveObjectFlagsExcludedMask(void* self, int64 nExcludedFlags)
{
	operator~(ESceneObjectFlags a); // 620
	operator&=(ESceneObjectFlags& a,
			ESceneObjectFlags b);  // 620
	ISceneLayer::RemoveObjectFlagsExcludedMask(
					ESceneObjectFlags nExcludedFlags);  // 15142
} /* size: 15, inline expansions: 3 (20 bytes) */

// <012BAF15> engine2/interop.engine.cpp:15145
// function call: 1
void ISceneLayer_GetObjectFlagsRequiredMask(void* self)
{
	ISceneLayer::GetObjectFlagsRequiredMask(); // 15148
} /* size: 12, inline expansions: 1 (0 bytes) */

// <012BAEB7> engine2/interop.engine.cpp:15151
// function call: 1
void ISceneLayer_GetObjectFlagsExcludedMask(void* self)
{
	ISceneLayer::GetObjectFlagsExcludedMask(); // 15154
} /* size: 12, inline expansions: 1 (0 bytes) */

// <012BAE36> engine2/interop.engine.cpp:15157
// function call: 1
void ISceneLayer_GetDebugName(void* self)
{
	ISceneLayer::GetDebugName(); // 15160
} /* size: 16, inline expansions: 1 (7 bytes) */

// <012BADF4> engine2/interop.engine.cpp:15163
// variable: 1
void ISceneLayer_GetRenderAttributesPtr(void* __self)
{
	ISceneLayer* self; // 15167
} /* size: 12, variables: 1 */

// <012B9DCD> engine2/interop.engine.cpp:15174
// variables: 27
// function calls: 69
void ISceneLayer_SetAttr(void* self, uint32 nTokenID, HSceneViewRenderTarget hRenderTarget, int64 msaa, unsigned int flags)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 15177
	{
		RenderTargetAttribute_t attr; // 583
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 356
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 311
		{
			OverflowChunk_t& p; // 317
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>& __for_range; // 44718
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_begin; // 44728
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_end; // 44738
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::Head(); // 1151
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1151
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::begin(); // 317
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1156
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::end(); // 317
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 319
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::operator++(); // 317
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
						int nIdx);  // 322
		}
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				RenderTargetAttribute_t** pValueOut);  // 309
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
					int nIdx);  // 314
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				RenderTargetAttribute_t** pValueOut);  // 356
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexOfMatch(
				uint32 nKey,
				RenderTargetAttribute_t** pValueOut);  // 547
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 330
		{
			OverflowChunk_t& p; // 337
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>& __for_range; // 64929
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_begin; // 64939
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_end; // 64949
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1151
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::begin(); // 337
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1156
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::end(); // 337
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 339
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::operator++(); // 337
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetKeyPtrFromIndex(
						int nIdx);  // 342
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
						int nIdx);  // 343
		}
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexAndKeyOfMatch(
					i32x4 n4Key,
					uint32** pKeyOut,
					RenderTargetAttribute_t** pValueOut);  // 328
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetKeyPtrFromIndex(
					int nIdx);  // 333
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
					int nIdx);  // 334
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexAndKeyOfMatch(
					i32x4 n4Key,
					uint32** pKeyOut,
					RenderTargetAttribute_t** pValueOut);  // 556
		{
			OverflowChunk_t* pNew; // 559
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 61
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 62
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 63
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 64
			SetFixedKeysToZero<4>(i32x4* pFixedKeys); // 118
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::CUtlAttributeListChunk(); // 254
			OverflowChunk_t::OverflowChunk_t(); // 559
			AddToHead<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t, CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::AddToHead(
					OverflowChunk_t* node);  // 560
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
						int nIdx);  // 563
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetKeyPtrFromIndex(
						int nIdx);  // 562
		}
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::SetValue(
			uint32 nKey,
			RenderTargetAttribute_t nValue);  // 571
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::SetValue(
			const CUtlStringToken& nTok,
			RenderTargetAttribute_t nValue);  // 587
	}
	ISceneLayer::SetAttr(
		CUtlStringToken nTokenID,
		HSceneViewRenderTarget hRenderTarget,
		SceneLayerMSAAMode_t nMSAAMode,
		uint32 nFlags);  // 15177
} /* size: 581, inline expansions: 3 (533 bytes) */

// <012B9CE4> engine2/interop.engine.cpp:15186
// function call: 1
void ISceneLayer_SetBoundingVolumeSizeCullThresholdInPercent(void* self, float flSizeCullThreshold)
{
	ISceneLayer::SetBoundingVolumeSizeCullThresholdInPercent(
							float flSizeCullThreshold);  // 15189
} /* size: 21, inline expansions: 1 (16 bytes) */

// <012B9BEC> engine2/interop.engine.cpp:15192
// function calls: 2
void ISceneLayer_SetClearColor(void* self, Vector4D* vecColor, int nRenderTargetIndex)
{
	{
	}
	Vector4D::operator=(
			const Vector4D& vOther);  // 234
	ISceneLayer::SetClearColor(
			const Vector4D& vecColor,
			int nRenderTargetIndex);  // 15195
} /* size: 0, inline expansions: 2 (218 bytes) */

// <012B8E44> engine2/interop.engine.cpp:15198
// variables: 14
// function calls: 58
void ISceneLayer_GetTextureValue(void* self, uint32 nTokenID, HRenderTextureStrong* nDefaultValue)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 15201
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 15201
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 261
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 624
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
	TextureAttr_t::TextureAttr_t(
			HRenderTexture hT,
			int32 nMip);  // 624
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
	TextureAttr_t::TextureAttr_t(
			const TextureAttr_t  &);  // 625
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
	TextureAttr_t::TextureAttr_t(
			const TextureAttr_t  &);  // 393
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 376
	{
		int nIndex; // 381
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 41442
			CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 41452
			CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 41462
			Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
			CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
							const OverflowChunk_t* pNode);  // 1160
			begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
			CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
							const OverflowChunk_t* pNode);  // 1165
			end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 284
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
				i32x4 n4Key,
				const TextureAttrForStorage_t ** pValueOut);  // 270
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
				i32x4 n4Key,
				const TextureAttrForStorage_t ** pValueOut);  // 381
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 266
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				ResourceHandleTyped_t hResource);  // 993
		TextureAttr_t::TextureAttr_t(
				const TextureAttrForStorage_t& other);  // 383
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValueOrDefault(
				uint32 k,
				TextureAttr_t nDefault);  // 393
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValueOrDefault(
				CUtlStringToken nTok,
				TextureAttr_t nDefault);  // 625
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 625
	CRenderAttributes::GetTextureValue(
			CUtlStringToken nTokenID,
			HRenderTexture defaultTxtr);  // 261
	ISceneLayer::GetTextureValue(
			CUtlStringToken nTokenID,
			HRenderTexture nDefaultValue);  // 15201
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 15201
} /* size: 309, inline expansions: 30 (961 bytes) */

// <012B8152> engine2/interop.engine.cpp:15204
// variables: 14
// function calls: 56
void ISceneLayer_GetTextureValue_1(void* self, uint32 nTokenID)
{
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 376
	{
		int nIndex; // 381
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 41442
			CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 41452
			CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 41462
			Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
			CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
							const OverflowChunk_t* pNode);  // 1160
			begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
			CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
							const OverflowChunk_t* pNode);  // 1165
			end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 284
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
				i32x4 n4Key,
				const TextureAttrForStorage_t ** pValueOut);  // 270
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
				i32x4 n4Key,
				const TextureAttrForStorage_t ** pValueOut);  // 381
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 266
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				ResourceHandleTyped_t hResource);  // 993
		TextureAttr_t::TextureAttr_t(
				const TextureAttrForStorage_t& other);  // 383
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValueOrDefault(
				uint32 k,
				TextureAttr_t nDefault);  // 393
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
	TextureAttr_t::TextureAttr_t(
			const TextureAttr_t  &);  // 393
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValueOrDefault(
				CUtlStringToken nTok,
				TextureAttr_t nDefault);  // 625
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 624
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
	TextureAttr_t::TextureAttr_t(
			HRenderTexture hT,
			int32 nMip);  // 624
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
	TextureAttr_t::TextureAttr_t(
			const TextureAttr_t  &);  // 625
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 625
	CRenderAttributes::GetTextureValue(
			CUtlStringToken nTokenID,
			HRenderTexture defaultTxtr);  // 261
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 261
	ISceneLayer::GetTextureValue(
			CUtlStringToken nTokenID,
			HRenderTexture nDefaultValue);  // 15207
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 15207
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 15207
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 15207
} /* size: 309, inline expansions: 28 (980 bytes) */

// <012B8033> engine2/interop.engine.cpp:15210
// variable: 1
// function calls: 3
void ISceneLayer_GetColorTarget(void* __self)
{
	ISceneLayer* self; // 15214
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 15217
} /* size: 63, variables: 1, inline expansions: 3 (36 bytes) */

// <012B7F14> engine2/interop.engine.cpp:15221
// variable: 1
// function calls: 3
void ISceneLayer_GetDepthTarget(void* __self)
{
	ISceneLayer* self; // 15225
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 15228
} /* size: 64, variables: 1, inline expansions: 3 (38 bytes) */

// <012B7E32> engine2/interop.engine.cpp:15232
// variables: 3
// function call: 1
void ISceneLayer_SetOutput(void* __self, HSceneViewRenderTarget __hColor, HSceneViewRenderTarget __hDepth)
{
	ISceneLayer* self; // 15236
	HSceneViewRenderTarget__* hColor; // 15237
	HSceneViewRenderTarget__* hDepth; // 15238
	SceneLayerOutputs_t::Init(
		HSceneViewRenderTarget hColor0,
		HSceneViewRenderTarget hDepth,
		RenderColorSpace_t allowSrgbWrites);  // 15241
} /* size: 35, variables: 3, inline expansions: 1 (30 bytes) */

// <012B7D9C> engine2/interop.engine.cpp:15253
void _Get__ISceneLayer_LayerEnum(void* self)
{
} /* size: 12 */

// <012B7D60> engine2/interop.engine.cpp:15257
void _Set__ISceneLayer_LayerEnum(void* self, int64 value)
{
} /* size: 11 */

// <012B7D33> engine2/interop.engine.cpp:15261
void _Get__ISceneLayer_m_viewport(void* self)
{
} /* size: 37 */

// <012B7CF7> engine2/interop.engine.cpp:15265
void _Set__ISceneLayer_m_viewport(void* self, RenderViewport_t* value)
{
} /* size: 34 */

// <012B7C8E> engine2/interop.engine.cpp:15273
void _Set__ISceneLayer_m_nClearFlags(void* self, int value)
{
} /* size: 8 */

// <012B7C17> engine2/interop.engine.cpp:15283
const void* ISceneView_GetSwapChain(void* self)
{
} /* size: 13 */

// <012B7BB6> engine2/interop.engine.cpp:15289
void ISceneView_AddDependentView(void* self, ISceneView* pView)
{
} /* size: 13 */

// <012B7B40> engine2/interop.engine.cpp:15295
// function call: 1
void ISceneView_GetRenderAttributesPtr(void* self)
{
	ISceneView::GetRenderAttributesPtr(); // 15298
} /* size: 13, inline expansions: 1 (9 bytes) */

// <012B7A11> engine2/interop.engine.cpp:15301
// function calls: 2
void ISceneView_AddRenderLayer(void* self, const char* pszDebugName, RenderViewport_t* viewport, uint32 eShaderMode, ISceneLayer* pAddBefore)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 15304
} /* size: 60, inline expansions: 2 (0 bytes) */

// <012B7756> engine2/interop.engine.cpp:15307
// function calls: 10
void ISceneView_AddManagedProceduralLayer(void* self, const char* pszDebugName, RenderViewport_t* viewport, void* renderCallback, ISceneLayer* pAddBefore, int bDeleteWhenDone)
{
	FastDelegate1<ManagedRenderSetup_t, void>::Convert<FastDelegate1<ManagedRenderSetup_t, void>, void (
																void ()(const FastDelegate1<ManagedRenderSetup_t, void> *, ManagedRenderSetup_t) FastDelegate1<ManagedRenderSetup_ function_to_bind,
																void ()(GenericClass *) GenericClass::*& bound_func);  // 746
	ClosurePtr<void (detail::GenericClass::::bindmemfunc<FastDelegate1<ManagedRenderSetup_t, void>, void (
																FastDelegate1<ManagedRenderSetup_t, void>* pthis,
																void ()(const FastDelegate1<ManagedRenderSetup_t, void> *, ManagedRenderSetup_t) FastDelegate1<ManagedRenderSetup_ function_to_bind);  // 861
	ClosurePtr<void (detail::GenericClass::::bindstaticfunc<FastDelegate1<ManagedRenderSetup_t, void>, void (
																FastDelegate1<ManagedRenderSetup_t, void>* pParent,
																void ()(const FastDelegate1<ManagedRenderSetup_t, void> *, ManagedRenderSetup_t) FastDelegate1<ManagedRenderSetup_ static_function_invoker,
																void (*function_to_bind)(ManagedRenderSetup_t));  // 1144
	FastDelegate1<ManagedRenderSetup_t, void>::Bind(
		void (*function_to_bind)(ManagedRenderSetup_t));  // 72
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(ManagedRenderSetup_t), void (*)(ManagedRenderSetup_t), void (*)(ManagedRe this); // 1084
	FastDelegate1<ManagedRenderSetup_t, void>::Clear(); // 1084
	FastDelegate1<ManagedRenderSetup_t, void>::FastDelegate1(); // 2160
	CUtlDelegate<void(ManagedRenderSetup_t)>::CUtlDelegate()>* this); // 71
	FunctionPointerToDelegate<CUtlDelegate<void(ManagedRenderSetup_t)> >(void* ptr); // 15310
} /* size: 107, inline expansions: 10 (162 bytes) */

// <012B7694> engine2/interop.engine.cpp:15319
void ISceneView_SetDefaultLayerObjectExcludedFlags(void* self, int64 nFlags)
{
} /* size: 13 */

// <012B764F> engine2/interop.engine.cpp:15325
void ISceneView_GetDefaultLayerObjectRequiredFlags(void* self)
{
} /* size: 13 */

// <012B760A> engine2/interop.engine.cpp:15331
void ISceneView_GetDefaultLayerObjectExcludedFlags(void* self)
{
} /* size: 13 */

// <012B759F> engine2/interop.engine.cpp:15337
void ISceneView_AddWorldToRenderList(void* self, ISceneWorld* pWorld)
{
} /* size: 20 */

// <012B7541> engine2/interop.engine.cpp:15343
// function call: 1
void ISceneView_GetCameraPosition(void* self)
{
	ISceneView::GetCameraPosition(); // 15346
} /* size: 15, inline expansions: 1 (0 bytes) */

// <012B73AD> engine2/interop.engine.cpp:15349
// function calls: 5
void ISceneView_FindOrCreateRenderTarget(void* self, const char* pName, HRenderTextureStrong* hTexture, int nFlags)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 15352
} /* size: 75, inline expansions: 5 (27 bytes) */

// <012B7307> engine2/interop.engine.cpp:15361
void ISceneView_GetParent(void* self)
{
} /* size: 13 */

// <012B72C2> engine2/interop.engine.cpp:15367
void ISceneView_GetPriority(void* self)
{
} /* size: 13 */

// <012B7261> engine2/interop.engine.cpp:15373
void ISceneView_SetPriority(void* self, int nPriority)
{
} /* size: 13 */

// <012B71FA> engine2/interop.engine.cpp:15379
// variable: 1
// function call: 1
void ISceneView_GetFrustum(void* __self)
{
	ISceneView* self; // 15383
	ISceneView::GetFrustum(); // 15386
} /* size: 9, variables: 1, inline expansions: 1 (4 bytes) */

// <012B71B5> engine2/interop.engine.cpp:15390
void ISceneView_GetPostProcessEnabled(void* self)
{
} /* size: 22 */

// <012B6AA8> engine2/interop.engine.cpp:15396
// variables: 15
// function calls: 28
void ISceneView_GetToolsVisMode(void* __self)
{
	ISceneView* self; // 15400
	CRenderAttributes* attrs; // 15403
	ISceneView::GetRenderAttributesPtr(); // 15403
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 15406
	{
		int nIndex; // 381
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 46239
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 46249
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 46259
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 284
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const IntVector4D ** pValueOut);  // 270
		CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const IntVector4D ** pValueOut);  // 381
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValueOrDefault(
				uint32 k,
				IntVector4D nDefault);  // 393
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValueOrDefault(
				CUtlStringToken nTok,
				IntVector4D nDefault);  // 465
	CRenderAttributes::GetIntValue(
			CUtlStringToken nTokenID,
			int nDefaultValue);  // 15406
} /* size: 212, variables: 2, inline expansions: 6 (505 bytes) */

// <012B6A7B> engine2/interop.engine.cpp:15410
void _Get__ISceneView_m_ViewUniqueId(void* self)
{
} /* size: 11 */

// <012B6A3F> engine2/interop.engine.cpp:15414
void _Set__ISceneView_m_ViewUniqueId(void* self, int value)
{
} /* size: 11 */

// <012B69D6> engine2/interop.engine.cpp:15422
void _Set__ISceneView_m_ManagedCameraId(void* self, int value)
{
} /* size: 11 */

// <012B694C> engine2/interop.engine.cpp:15432
void ISceneWorld_Release(void* self)
{
} /* size: 10 */

// <012B6907> engine2/interop.engine.cpp:15438
void ISceneWorld_GetSceneObjectCount(void* self)
{
} /* size: 10 */

// <012B686B> engine2/interop.engine.cpp:15450
void ISceneWorld_GetWorldDebugName(void* self)
{
} /* size: 23 */

// <012B6802> engine2/interop.engine.cpp:15456
void ISceneWorld_SetDeleteAtEndOfFrame(void* self, int bDelete)
{
} /* size: 20 */

// <012B67BD> engine2/interop.engine.cpp:15462
void ISceneWorld_GetDeleteAtEndOfFrame(void* self)
{
} /* size: 19 */

// <012B6692> engine2/interop.engine.cpp:15474
// variables: 3
void ISceneWorld_MeshTrace(void* __self, MeshTraceInput* __input, MeshTraceOutput* __output)
{
	ISceneWorld* self; // 15478
	MeshTraceInput input; // 15479
	MeshTraceOutput* output; // 15480
} /* size: 107, variables: 3 */

// <012B6615> engine2/interop.engine.cpp:15487
void ISceneWorld_MeshTraceAll(void* self, MeshTraceInput* input, CUtlVector<MeshTraceOutput, CUtlMemory<MeshTraceOutput, int> >* results)
{
} /* size: 22 */

// <012B65CA> engine2/interop.engine.cpp:15493
void ISceneWorld_GetPVS(void* self)
{
} /* size: 10 */

// <012B6563> engine2/interop.engine.cpp:15499
void ISceneWorld_SetPVS(void* self, IPVS* pPVS)
{
} /* size: 10 */

// <012B64A1> engine2/interop.engine.cpp:15511
void ISceneWorld_Remove3DSkyboxWorld(void* self, ISceneWorld* world)
{
} /* size: 13 */

// <012B6414> engine2/interop.engine.cpp:15517
void ISceneWorld_Set3DSkyboxParameters(void* self, Vector* origin, QAngle* angle, float scale)
{
} /* size: 37 */

// <01358D21> engine2/interop.engine.cpp:15523
// function call: 1
void ShdrCmplCntxt_Delete(void* self)
{
	ShdrCmplCntxt_Delete(void* self); // 15523
} /* size: 25, inline expansions: 1 (15 bytes) */

// <012B63FC> engine2/interop.engine.cpp:15523
void ShdrCmplCntxt_Delete(void* self)
{
} /* size: 0 */

// <012B633A> engine2/interop.engine.cpp:15535
void ISteamApps_BIsAppInstalled(void* self, int appid)
{
} /* size: 22 */

// <012B6294> engine2/interop.engine.cpp:15547
void ISteamApps_BIsDlcInstalled(void* self, int appID)
{
} /* size: 19 */

// <012B624F> engine2/interop.engine.cpp:15553
void ISteamApps_BIsLowViolence(void* self)
{
} /* size: 19 */

// <012B620A> engine2/interop.engine.cpp:15559
void ISteamApps_BIsSubscribed(void* self)
{
} /* size: 18 */

// <012B61A9> engine2/interop.engine.cpp:15565
void ISteamApps_BIsSubscribedApp(void* self, int appID)
{
} /* size: 19 */

// <012B60B6> engine2/interop.engine.cpp:15583
void ISteamApps_GetAppBuildId(void* self)
{
} /* size: 13 */

// <012B6071> engine2/interop.engine.cpp:15589
void ISteamApps_BIsVACBanned(void* self)
{
} /* size: 19 */

// <012B5FD6> engine2/interop.engine.cpp:15595
// variables: 2
void ISteamApps_GetCommandLine(void* __self)
{
	ISteamApps* self; // 15599
	char buffer; // 15602
} /* size: 88, variables: 2 */

// <012B5EEF> engine2/interop.engine.cpp:15608
// variables: 3
void ISteamApps_GetAppInstallDir(void* __self, int __appid)
{
	ISteamApps* self; // 15612
	int appid; // 15613
	char buffer; // 15616
} /* size: 88, variables: 3 */

// <012B5D6F> engine2/interop.engine.cpp:15622
// variables: 4
// function calls: 2
void ISteamFriends_GetProfileItemPropertyString(void* __self, uint64 __steamID, int __itemType, int __prop)
{
	ISteamFriends* self; // 15626
	long long unsigned int steamID; // 15627
	int itemType; // 15628
	int prop; // 15629
	CSteamID::SetFromUint64(
			uint64 ulSteamID);  // 531
	CSteamID::CSteamID(
		uint64 ulSteamID);  // 15632
} /* size: 26, variables: 4, inline expansions: 2 (0 bytes) */

// <012B5CB7> engine2/interop.engine.cpp:15642
void ISteamFriends_GetPersonaName(void* self)
{
} /* size: 22 */

// <012B5C3A> engine2/interop.engine.cpp:15648
void ISteamFriends_SetRichPresence(void* self, const char* pchKey, const char* pchValue)
{
} /* size: 22 */

// <012B5BF5> engine2/interop.engine.cpp:15654
void ISteamFriends_ClearRichPresence(void* self)
{
} /* size: 13 */

// <012B5B94> engine2/interop.engine.cpp:15660
void ISteamGameServer_SetServerName(void* self, const char* name)
{
} /* size: 10 */

// <012B5B33> engine2/interop.engine.cpp:15666
void ISteamGameServer_SetMapName(void* self, const char* name)
{
} /* size: 10 */

// <012B5AD2> engine2/interop.engine.cpp:15672
void ISteamGameServer_SetGameTags(void* self, const char* tags)
{
} /* size: 13 */

// <012B5A69> engine2/interop.engine.cpp:15678
void ISteamGameServer_SetDedicatedServer(void* self, int isDedicatedServer)
{
} /* size: 20 */

// <012B5A00> engine2/interop.engine.cpp:15684
void ISteamGameServer_SetAdvertiseServerActive(void* self, int heartbeats)
{
} /* size: 23 */

// <012B599F> engine2/interop.engine.cpp:15690
void ISteamGameServer_SetMaxPlayerCount(void* self, int maxPlayers)
{
} /* size: 10 */

// <012B595A> engine2/interop.engine.cpp:15696
void ISteamGameServer_LogOnAnonymous(void* self)
{
} /* size: 10 */

// <012B58F9> engine2/interop.engine.cpp:15702
void ISteamGameServer_LogOn(void* self, const char* token)
{
} /* size: 10 */

// <012B58B4> engine2/interop.engine.cpp:15708
void ISteamGameServer_LogOff(void* self)
{
} /* size: 10 */

// <012B5853> engine2/interop.engine.cpp:15714
void ISteamGameServer_SetGameDescription(void* self, const char* description)
{
} /* size: 10 */

// <012B5791> engine2/interop.engine.cpp:15726
void ISteamGameServer_SetModDir(void* self, const char* modDir)
{
} /* size: 10 */

// <012B574C> engine2/interop.engine.cpp:15732
void ISteamGameServer_BLoggedOn(void* self)
{
} /* size: 19 */

// <012B5600> engine2/interop.engine.cpp:15738
// variables: 5
// function call: 1
void ISteamGameServer_GetAuthSessionTicket(void* __self, uint64 __targetSteamId, void* __buffer, unsigned int* __ticketLength)
{
	ISteamGameServer* self; // 15742
	long long unsigned int targetSteamId; // 15743
	void* buffer; // 15744
	unsigned int* ticketLength; // 15745
	SteamNetworkingIdentity ident; // 15748
	SteamNetworkingIdentity::SetSteamID64(
			uint64 steamID);  // 15749
} /* size: 101, variables: 5, inline expansions: 1 (24 bytes) */

// <012B5486> engine2/interop.engine.cpp:15754
// variables: 5
// function calls: 2
void ISteamGameServer_BeginAuthSession(void* __self, uint64 __senderSteamId, void* __buffer, int __length)
{
	ISteamGameServer* self; // 15758
	long long unsigned int senderSteamId; // 15759
	void* buffer; // 15760
	int length; // 15761
	CSteamID ident; // 15764
	CSteamID::SetFromUint64(
			uint64 ulSteamID);  // 531
	CSteamID::CSteamID(
		uint64 ulSteamID);  // 15764
} /* size: 32, variables: 5, inline expansions: 2 (0 bytes) */

// <012B5425> engine2/interop.engine.cpp:15769
void ISteamGameServer_CancelAuthTicket(void* self, HAuthTicket ticket)
{
} /* size: 13 */

// <012B537F> engine2/interop.engine.cpp:15781
void StmHTMLSrfc_Init(void* self)
{
} /* size: 19 */

// <012B533A> engine2/interop.engine.cpp:15787
void StmHTMLSrfc_Shutdown(void* self)
{
} /* size: 19 */

// <012B52BD> engine2/interop.engine.cpp:15793
void StmHTMLSrfc_CreateBrowser(void* self, const char* pchUserAgent, const char* pchUserCSS)
{
} /* size: 10 */

// <012B51C5> engine2/interop.engine.cpp:15805
void StmHTMLSrfc_LoadURL(void* self, unsigned int bx, const char* pchURL, const char* pchPostData)
{
} /* size: 10 */

// <012B5099> engine2/interop.engine.cpp:15817
void StmHTMLSrfc_SetSize(void* self, unsigned int bx, unsigned int w, unsigned int h)
{
} /* size: 10 */

// <012B5005> engine2/interop.engine.cpp:15823
void StmHTMLSrfc_GetLinkAtPosition(void* self, unsigned int bx, unsigned int w, unsigned int h)
{
} /* size: 13 */

// <012B4F88> engine2/interop.engine.cpp:15829
void StmHTMLSrfc_SetHorizontalScroll(void* self, unsigned int unBrowserHandle, unsigned int nAbsolutePixelScroll)
{
} /* size: 13 */

// <012B4F0B> engine2/interop.engine.cpp:15835
void StmHTMLSrfc_SetVerticalScroll(void* self, unsigned int unBrowserHandle, unsigned int nAbsolutePixelScroll)
{
} /* size: 13 */

// <012B4E06> engine2/interop.engine.cpp:15847
void StmHTMLSrfc_AllowStartRequest(void* self, unsigned int bx, int b)
{
} /* size: 21 */

// <012B4D84> engine2/interop.engine.cpp:15853
void StmHTMLSrfc_JSDialogResponse(void* self, unsigned int bx, int b)
{
} /* size: 21 */

// <012B4D02> engine2/interop.engine.cpp:15859
void StmHTMLSrfc_SetBackgroundMode(void* self, unsigned int bx, int b)
{
} /* size: 21 */

// <012B4C84> engine2/interop.engine.cpp:15865
void StmHTMLSrfc_SetDPIScalingFactor(void* self, unsigned int bx, float scale)
{
} /* size: 13 */

// <012B4BC7> engine2/interop.engine.cpp:15871
void StmHTMLSrfc_KeyDown(void* self, unsigned int unBrowserHandle, unsigned int key, int modifiers, int isSystemKey)
{
} /* size: 27 */

// <012B4B2E> engine2/interop.engine.cpp:15877
void StmHTMLSrfc_KeyUp(void* self, unsigned int unBrowserHandle, unsigned int key, int modifiers)
{
} /* size: 13 */

// <012B4A95> engine2/interop.engine.cpp:15883
void StmHTMLSrfc_KeyChar(void* self, unsigned int unBrowserHandle, unsigned int unicodeChar, int modifiers)
{
} /* size: 13 */

// <012B4A18> engine2/interop.engine.cpp:15889
void StmHTMLSrfc_MouseUp(void* self, unsigned int unBrowserHandle, int eMouseButton)
{
} /* size: 10 */

// <012B499B> engine2/interop.engine.cpp:15895
void StmHTMLSrfc_MouseDown(void* self, unsigned int unBrowserHandle, int eMouseButton)
{
} /* size: 10 */

// <012B491E> engine2/interop.engine.cpp:15901
void StmHTMLSrfc_MouseDoubleClick(void* self, unsigned int unBrowserHandle, int eMouseButton)
{
} /* size: 13 */

// <012B4889> engine2/interop.engine.cpp:15907
void StmHTMLSrfc_MouseMove(void* self, unsigned int unBrowserHandle, int x, int y)
{
} /* size: 13 */

// <012B480C> engine2/interop.engine.cpp:15913
void StmHTMLSrfc_MouseWheel(void* self, unsigned int unBrowserHandle, int nDelta)
{
} /* size: 13 */

// <012B4710> engine2/interop.engine.cpp:15919
void StmHTMLSrfc_SetCookie(void* self, const char* pchHostname, const char* pchKey, const char* pchValue, const char* pchPath, unsigned int nExpires, int bSecure, int bHTTPOnly)
{
} /* size: 57 */

// <012B44F5> engine2/interop.engine.cpp:15937
// variables: 3
// function calls: 3
void StmMtchmkng_GetLobbyMemberByIndex(void* __self, uint64 __steamid, int __index)
{
	ISteamMatchmaking* self; // 15941
	long long unsigned int steamid; // 15942
	int index; // 15943
	CSteamID::SetFromUint64(
			uint64 ulSteamID);  // 531
	CSteamID::CSteamID(
		uint64 ulSteamID);  // 15946
	CSteamID::ConvertToUint64(); // 15946
} /* size: 19, variables: 3, inline expansions: 3 (0 bytes) */

// <012B4473> engine2/interop.engine.cpp:15950
const void* StmMtchmkng_GetLobbyData(void* self, uint64 steamid, const char* key)
{
} /* size: 13 */

// <012B436A> engine2/interop.engine.cpp:15956
// function calls: 2
void StmMtchmkng_SetLobbyData(void* self, uint64 steamid, const char* key, const char* data)
{
	CSteamID::SetFromUint64(
			uint64 ulSteamID);  // 531
	CSteamID::CSteamID(
		uint64 ulSteamID);  // 15959
} /* size: 22, inline expansions: 2 (0 bytes) */

// <012B4309> engine2/interop.engine.cpp:15962
void StmMtchmkng_GetLobbyDataCount(void* self, uint64 steamid)
{
} /* size: 13 */

// <012B4097> engine2/interop.engine.cpp:15974
// variables: 7
// function calls: 2
void StmMtchmkng_GetLobbyDataByIndex(void* __self, uint64 __steamid, int __index, void* __data, int __datasize, void* __value, int __valueSize)
{
	ISteamMatchmaking* self; // 15978
	long long unsigned int steamid; // 15979
	int index; // 15980
	void* data; // 15981
	int datasize; // 15982
	void* value; // 15983
	int valueSize; // 15984
	CSteamID::SetFromUint64(
			uint64 ulSteamID);  // 531
	CSteamID::CSteamID(
		uint64 ulSteamID);  // 15987
} /* size: 35, variables: 7, inline expansions: 2 (0 bytes) */

// <012B3F0B> engine2/interop.engine.cpp:15991
// variables: 8
// function calls: 2
void StmNtwrkngMssgs_SendMessageToUser(void* __self, uint64 __steamid, void* __data, int __dataSize, int __flags, int __channel)
{
	ISteamNetworkingMessages* self; // 15995
	long long unsigned int steamid; // 15996
	void* data; // 15997
	int dataSize; // 15998
	int flags; // 15999
	int channel; // 16000
	SteamNetworkingIdentity ident; // 16003
	EResult result; // 16005
	SteamNetworkingIdentity::SetSteamID64(
			uint64 steamID);  // 1849
	SteamNetworkingIdentity::SetSteamID(
			CSteamID steamID);  // 16004
} /* size: 86, variables: 8, inline expansions: 2 (74 bytes) */

// <012B3E1E> engine2/interop.engine.cpp:16010
// variables: 4
void StmNtwrkngMssgs_ReceiveMessagesOnChannel(void* __self, int __channel, void* __array_of_pointers, int __maxmessages)
{
	ISteamNetworkingMessages* self; // 16014
	int channel; // 16015
	void* array_of_pointers; // 16016
	int maxmessages; // 16017
} /* size: 10, variables: 4 */

// <012B3D4B> engine2/interop.engine.cpp:16024
// variables: 3
// function calls: 2
void StmNtwrkngMssgs_AcceptSessionWithUser(void* __self, uint64 __steamid)
{
	ISteamNetworkingMessages* self; // 16028
	long long unsigned int steamid; // 16029
	SteamNetworkingIdentity ident; // 16032
	SteamNetworkingIdentity::SetSteamID64(
			uint64 steamID);  // 1849
	SteamNetworkingIdentity::SetSteamID(
			CSteamID steamID);  // 16033
} /* size: 90, variables: 3, inline expansions: 2 (74 bytes) */

// <012B3C4F> engine2/interop.engine.cpp:16038
// variables: 4
// function calls: 2
void StmNtwrkngMssgs_CloseChannelWithUser(void* __self, uint64 __steamid, int __nLocalChannel)
{
	ISteamNetworkingMessages* self; // 16042
	long long unsigned int steamid; // 16043
	int nLocalChannel; // 16044
	SteamNetworkingIdentity ident; // 16047
	SteamNetworkingIdentity::SetSteamID64(
			uint64 steamID);  // 1849
	SteamNetworkingIdentity::SetSteamID(
			CSteamID steamID);  // 16048
} /* size: 90, variables: 4, inline expansions: 2 (74 bytes) */

// <013588CD> engine2/interop.engine.cpp:16053
// variables: 3
// function call: 1
void StmNtwrkngMssgs_ReleaseMessage(void* __self, void* __message)
{
	ISteamNetworkingMessages* self; // 16057
	void* message; // 16058
	SteamNetworkingMessage_t* msg; // 16061
	SteamNetworkingMessage_t::Release(); // 16062
} /* size: 16, variables: 3, inline expansions: 1 (12 bytes) */

// <012B3C03> engine2/interop.engine.cpp:16053
// variables: 3
void StmNtwrkngMssgs_ReleaseMessage(void* __self, void* __message)
{
	ISteamNetworkingMessages* self; // 16057
	void* message; // 16058
	SteamNetworkingMessage_t* msg; // 16061
} /* size: 0, variables: 3 */

// <012B3A3A> engine2/interop.engine.cpp:16066
// variables: 5
// function calls: 4
void StmNtwrkngMssgs_GetConnectionInfo(void* __self, uint64 __steamid)
{
	ISteamNetworkingMessages* self; // 16070
	long long unsigned int steamid; // 16071
	SteamNetworkingIdentity ident; // 16074
	SteamNetConnectionInfo_t info; // 16076
	SteamNetConnectionRealTimeStatus_t status; // 16077
	SteamNetworkingIdentity::SetSteamID64(
			uint64 steamID);  // 1849
	SteamNetworkingIdentity::SetSteamID(
			CSteamID steamID);  // 16075
	CSteamID::SetFromUint64(
			uint64 ulSteamID);  // 531
	CSteamID::CSteamID(
		uint64 ulSteamID);  // 16075
} /* size: 115, variables: 5, inline expansions: 4 (48 bytes) */

// <012B398A> engine2/interop.engine.cpp:16083
// variables: 3
void StmNtwrkngSckts_GetConnectionInfo(void* __self, HSteamNetConnection __handle)
{
	ISteamNetworkingSockets* self; // 16087
	unsigned int handle; // 16088
	SteamNetConnectionRealTimeStatus_t status; // 16091
} /* size: 51, variables: 3 */

// <012B3930> engine2/interop.engine.cpp:16097
// variable: 1
void StmNtwrkngSckts_StartAuthentication(void* __self)
{
	ISteamNetworkingSockets* self; // 16101
} /* size: 13, variables: 1 */

// <012B38D1> engine2/interop.engine.cpp:16108
// variable: 1
void StmNtwrkngSckts_BeginRequestFakeIP(void* __self)
{
	ISteamNetworkingSockets* self; // 16112
} /* size: 21, variables: 1 */

// <012B3875> engine2/interop.engine.cpp:16119
// variables: 3
void StmNtwrkngSckts_ReleaseMessage(void* __self, void* __message)
{
	ISteamNetworkingSockets* self; // 16123
	void* message; // 16124
	SteamNetworkingMessage_t* msg; // 16127
} /* size: 0, variables: 3 */

// <012B375A> engine2/interop.engine.cpp:16132
// variables: 3
// function call: 1
void StmNtwrkngtls_SetConfig(void* __self, int64 __key, int __value)
{
	ISteamNetworkingUtils* self; // 16136
	ESteamNetworkingConfigValue key; // 16137
	int value; // 16138
	ISteamNetworkingUtils::SetGlobalConfigValueInt32(
					ESteamNetworkingConfigValue eValue,
					int32 val);  // 16141
} /* size: 78, variables: 3, inline expansions: 1 (29 bytes) */

// <012B364F> engine2/interop.engine.cpp:16145
// variables: 3
// function call: 1
void StmNtwrkngtls_SetConfig_1(void* __self, int64 __key, const char* __value)
{
	ISteamNetworkingUtils* self; // 16149
	ESteamNetworkingConfigValue key; // 16150
	const char* value; // 16151
	ISteamNetworkingUtils::SetGlobalConfigValueString(
					ESteamNetworkingConfigValue eValue,
					const char* val);  // 16154
} /* size: 32, variables: 3, inline expansions: 1 (25 bytes) */

// <012B34E5> engine2/interop.engine.cpp:16169
void ISteamUser_BLoggedOn(void* self)
{
} /* size: 19 */

// <012B345E> engine2/interop.engine.cpp:16175
// variable: 1
// function call: 1
void ISteamUser_GetSteamID(void* __self)
{
	ISteamUser* self; // 16179
	CSteamID::ConvertToUint64(); // 16182
} /* size: 16, variables: 1, inline expansions: 1 (0 bytes) */

// <012B339C> engine2/interop.engine.cpp:16186
void ISteamUser_GetVoice(void* self, int bWantCompressed, void* pDestBuffer, unsigned int cbDestBufferSize, unsigned int* nBytesWritten)
{
} /* size: 37 */

// <012B3331> engine2/interop.engine.cpp:16192
void ISteamUser_GetAvailableVoice(void* self, unsigned int* availableData)
{
} /* size: 17 */

// <012B32EC> engine2/interop.engine.cpp:16198
void ISteamUser_GetVoiceOptimalSampleRate(void* self)
{
} /* size: 10 */

// <012B3202> engine2/interop.engine.cpp:16204
void ISteamUser_DecompressVoice(void* self, void* pCompressed, unsigned int cbCompressed, void* pDestBuffer, unsigned int cbDestBufferSize, unsigned int* nBytesWritten, unsigned int nDesiredSampleRate)
{
} /* size: 10 */

// <012B31BD> engine2/interop.engine.cpp:16210
void ISteamUser_StartVoiceRecording(void* self)
{
} /* size: 10 */

// <012B3178> engine2/interop.engine.cpp:16216
void ISteamUser_StopVoiceRecording(void* self)
{
} /* size: 10 */

// <012B302C> engine2/interop.engine.cpp:16222
// variables: 5
// function call: 1
void ISteamUser_GetAuthSessionTicket(void* __self, uint64 __targetSteamId, void* __buffer, unsigned int* __ticketLength)
{
	ISteamUser* self; // 16226
	long long unsigned int targetSteamId; // 16227
	void* buffer; // 16228
	unsigned int* ticketLength; // 16229
	SteamNetworkingIdentity ident; // 16232
	SteamNetworkingIdentity::SetSteamID64(
			uint64 steamID);  // 16233
} /* size: 98, variables: 5, inline expansions: 1 (24 bytes) */

// <012B2EA1> engine2/interop.engine.cpp:16238
// variables: 5
// function calls: 2
void ISteamUser_BeginAuthSession(void* __self, uint64 __senderSteamId, void* __buffer, int __length)
{
	ISteamUser* self; // 16242
	long long unsigned int senderSteamId; // 16243
	void* buffer; // 16244
	int length; // 16245
	CSteamID ident; // 16248
	CSteamID::SetFromUint64(
			uint64 ulSteamID);  // 531
	CSteamID::CSteamID(
		uint64 ulSteamID);  // 16248
} /* size: 29, variables: 5, inline expansions: 2 (0 bytes) */

// <012B2E40> engine2/interop.engine.cpp:16253
void ISteamUser_CancelAuthTicket(void* self, HAuthTicket ticket)
{
} /* size: 13 */

// <012B2DDF> engine2/interop.engine.cpp:16259
void ISteamUser_EndAuthSession(void* self, uint64 steamId)
{
} /* size: 13 */

// <012B2D7E> engine2/interop.engine.cpp:16265
void ISteamUtils_InitFilterText(void* self, unsigned int unFilterOptions)
{
} /* size: 22 */

// <012B2CAD> engine2/interop.engine.cpp:16271
void ISteamUtils_FilterText(void* self, int64 eContext, uint64 sourceSteamID, const char* pchInputMessage, void* pchOutFilteredText, unsigned int nByteSizeOutFilteredText)
{
} /* size: 13 */

// <012B2C4C> engine2/interop.engine.cpp:16277
void ITonemapSystem_SetTonemapParameters(void* self, SceneTonemapParameters_t* pParams)
{
} /* size: 10 */

// <012B2BDC> engine2/interop.engine.cpp:16283
// variable: 1
void ITonemapSystem_ResetTonemapParameters(void* __self)
{
	ITonemapSystem* self; // 16287
} /* size: 15, variables: 1 */

// <012B2B51> engine2/interop.engine.cpp:16294
// variables: 2
void IVfx_Init(void* __self, void* __factory)
{
	IVfx* self; // 16298
	void* factory; // 16299
} /* size: 9, variables: 2 */

// <012B175D> engine2/interop.engine.cpp:16306
// variables: 11
// function calls: 72
void IVfx_CompileShader(void* __self, IShaderCompileContext* __ctx, uint64 __staticcombo, uint64 __dynamiccombo, HShaderStrong* __pVfx, int64 __compileTarget, int64 __programType, int __useShaderCache, unsigned int __flags)
{
	IVfx* self; // 16310
	IShaderCompileContext* ctx; // 16311
	long long unsigned int staticcombo; // 16312
	long long unsigned int dynamiccombo; // 16313
	CWeakHandle<InfoForResourceTypeCVfx> pVfx; // 16314
	VfxCompileTarget_t compileTarget; // 16315
	VfxProgram_t programType; // 16316
	bool useShaderCache; // 16317
	unsigned int flags; // 16318
	VfxCompiledShaderInfo_t* result; // 16321
	CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCVfx>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCVfx>::GetHandle(); // 45
	ResourceHandle_GetHandle(HShaderStrong* target); // 16314
	CUtlMemory<CVfxVariableDescription, int>::ValidateGrowSize(); // 475
	CUtlMemory<CVfxVariableDescription, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::CUtlVector(); // 56
	CUtlMemory<CVfxTextureChannelProcessor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CVfxTextureChannelProcessor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::CUtlVector(); // 56
	CUtlMemory<ConstantBufferDescription_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ConstantBufferDescription_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> >::CUtlVector(); // 56
	CUtlMemory<CVfxShaderAttribute, int>::ValidateGrowSize(); // 475
	CUtlMemory<CVfxShaderAttribute, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >::CUtlVector(); // 56
	CUtlMemory<VsInputSignatureElement_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VsInputSignatureElement_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::CUtlVector(); // 56
	RsRasterizerStateDesc_t::RsRasterizerStateDesc_t(); // 355
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 251
	RsStencilStateDesc_t::RsStencilStateDesc_t(); // 433
	RsStencilStateDesc_t::RsStencilStateDesc_t(
				bool bStencilEnable,
				uint8 nStencilReadMask,
				uint8 nStencilWriteMask,
				RsStencilOp_t frontStencilFailOp,
				RsStencilOp_t frontStencilDepthFailOp,
				RsStencilOp_t frontStencilPassOp,
				RsComparison_t frontStencilFunc,
				RsStencilOp_t backStencilFailOp,
				RsStencilOp_t backStencilDepthFailOp,
				RsStencilOp_t backStencilPassOp,
				RsComparison_t backStencilFunc);  // 356
	RsDepthStencilStateDesc_t::RsDepthStencilStateDesc_t(
					bool bDepthTestEnable,
					bool bDepthWriteEnable,
					RsComparison_t depthFunc,
					bool bStencilEnable,
					uint8 nStencilReadMask,
					uint8 nStencilWriteMask,
					RsStencilOp_t frontStencilFailOp,
					RsStencilOp_t frontStencilDepthFailOp,
					RsStencilOp_t frontStencilPassOp,
					RsComparison_t frontStencilFunc,
					RsStencilOp_t backStencilFailOp,
					RsStencilOp_t backStencilDepthFailOp,
					RsStencilOp_t backStencilPassOp,
					RsComparison_t backStencilFunc);  // 429
	DefaultDepthStencilStateDesc(void); // 424
	DefaultDepthStencilStateDesc(void); // 435
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 435
	RsDepthStencilStateDesc_t::RsDepthStencilStateDesc_t(); // 355
	RsBlendStateDesc_t::SetAlphaToCoverageEnabled(
					bool bEnable);  // 453
	RsBlendStateDesc_t::SetIndependentBlendEnabled(
					bool bEnable);  // 454
	{
		int i; // 455
		RsBlendStateDesc_t::SetAlphaBlendEnabled(
					bool bEnable,
					int nRenderTargetIdx);  // 457
		RsBlendStateDesc_t::SetSrcBlend(
				RsBlendMode_t blendMode,
				int nRenderTargetIdx);  // 458
		RsBlendStateDesc_t::SetRenderTargetWriteMask(
					uint8 nWriteMask,
					int nRenderTargetIdx);  // 464
		RsBlendStateDesc_t::SetDestBlend(
				RsBlendMode_t blendMode,
				int nRenderTargetIdx);  // 459
		RsBlendStateDesc_t::SetBlendOp(
				RsBlendOp_t blendOp,
				int nRenderTargetIdx);  // 460
		RsBlendStateDesc_t::SetSrcBlendAlpha(
				RsBlendMode_t blendMode,
				int nRenderTargetIdx);  // 461
		RsBlendStateDesc_t::SetDestBlendAlpha(
					RsBlendMode_t blendMode,
					int nRenderTargetIdx);  // 462
		RsBlendStateDesc_t::SetBlendOpAlpha(
				RsBlendOp_t blendOp,
				int nRenderTargetIdx);  // 463
		RsBlendStateDesc_t::SetSrgbWriteEnabled(
					bool bEnable,
					int nRenderTargetIdx);  // 465
	}
	RsBlendStateDesc_t::RsBlendStateDesc_t(
				bool bBlendEnable,
				bool bAlphaToCoverageEnable,
				bool bIndependendBlendEnable,
				RsBlendMode_t srcBlend,
				RsBlendMode_t destBlend,
				RsBlendOp_t blendOp,
				RsBlendMode_t srcBlendAlpha,
				RsBlendMode_t destBlendAlpha,
				RsBlendOp_t blendOpAlpha,
				uint8 nRenderTargetWriteMask,
				bool bSrgbWriteEnable);  // 646
	DefaultBlendStateDesc(void); // 640
	DefaultBlendStateDesc(void); // 656
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 656
	RsBlendStateDesc_t::RsBlendStateDesc_t(); // 355
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 357
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 358
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 359
	CVfxRenderStateInfo::CVfxRenderStateInfo(); // 56
	CUtlMemory<CUtlStringToken, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlStringToken, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVector(); // 56
	CUtlString::CUtlString(); // 56
	VfxCompiledShaderInfo_t::VfxCompiledShaderInfo_t(); // 16321
	CWeakHandle<InfoForResourceTypeCVfx>::operator const ResourceHandleInfo_t<InfoForResourceTypeCVfx>::RuntimeClass_t*(); // 16322
} /* size: 848, variables: 10, inline expansions: 63 (2586 bytes) */

// <012B1706> engine2/interop.engine.cpp:16327
void IVfx_ClearShaderCache(void* self)
{
} /* size: 10 */

// <012B14EC> engine2/interop.engine.cpp:16345
// function calls: 5
void IVolumetricFog_SetParams(void* self, SceneVolumetricFogParameters2_t* parameters, HRenderTextureStrong* bakedTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 16348
} /* size: 112, inline expansions: 5 (11 bytes) */

// <012B14A1> engine2/interop.engine.cpp:16351
void IWorldReference_Release(void* self)
{
} /* size: 9 */

// <012B145C> engine2/interop.engine.cpp:16357
void IWorldReference_IsWorldLoaded(void* self)
{
} /* size: 19 */

// <012B13D2> engine2/interop.engine.cpp:16369
void IWorldReference_IsMarkedForDeletion(void* self)
{
} /* size: 19 */

// <012B1355> engine2/interop.engine.cpp:16375
void IWorldReference_GetWorldBounds(void* self, Vector* vMin, Vector* vMax)
{
} /* size: 19 */

// <012B12C3> engine2/interop.engine.cpp:16381
// function calls: 2
void IWorldReference_GetSceneWorld(void* self)
{
	CManagedHandle::GetValue(); // 42
	GetManagedHandle<ISceneWorld*>(ISceneWorld* c); // 16384
} /* size: 42, inline expansions: 2 (26 bytes) */

// <012B1206> engine2/interop.engine.cpp:16393
void IWorldReference_GetFolder(void* self)
{
} /* size: 23 */

// <012B1131> engine2/interop.engine.cpp:16399
// variables: 3
// function call: 1
void IWorldReference_GetEntityCount(void* __self, const char* __pEntityLumpName)
{
	IWorldReference* self; // 16403
	const char* pEntityLumpName; // 16404
	const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >* pEnts; // 16407
	CUtlVectorBase<const CEntityKeyValues::Count(); // 16408
} /* size: 48, variables: 3, inline expansions: 1 (3 bytes) */

// <012B0FE1> engine2/interop.engine.cpp:16412
// variables: 4
// function calls: 2
void IWorldReference_GetEntityKeyValues(void* __self, const char* __pEntityLumpName, int __index)
{
	IWorldReference* self; // 16416
	const char* pEntityLumpName; // 16417
	int index; // 16418
	const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >* pEnts; // 16421
	CUtlMemory<const CEntityKeyValues::operator[](
			int i);  // 609
	CUtlVectorBase<const CEntityKeyValues::Element(
		int i);  // 16422
} /* size: 63, variables: 4, inline expansions: 2 (0 bytes) */

// <012B0CE3> engine2/interop.engine.cpp:16426
// variables: 3
// function calls: 9
void IWorldReference_SetWorldTransform(void* __self, CTransformUnaligned* __transform)
{
	IWorldReference* self; // 16430
	CTransformUnaligned transform; // 16431
	{
		IWorld* pGeometryWorld; // 16434
		matrix3x4_t::matrix3x4_t(); // 248
		CTransformUnaligned::ToMatrix(); // 16436
		matrix3x4_t::matrix3x4_t(); // 290
		matrix3x4_t::Base(); // 291
		matrix3x4_t::Base(); // 291
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 291
		matrix3x4a_t::operator=(
				const matrix3x4_t& src);  // 290
		matrix3x4a_t::matrix3x4a_t(
				const matrix3x4_t& src);  // 16436
	}
} /* size: 225, variables: 2 */

// <013590DE> engine2/interop.engine.cpp:16441
// function call: 1
void KeyValues3_DeleteThis(void* self)
{
	KeyValues3_DeleteThis(void* self); // 16441
} /* size: 49, inline expansions: 1 (31 bytes) */

// <012B0CCB> engine2/interop.engine.cpp:16441
void KeyValues3_DeleteThis(void* self)
{
} /* size: 0 */

// <012B0C7B> engine2/interop.engine.cpp:16447
void KeyValues3_Create(void)
{
} /* size: 45 */

// <012B0BC1> engine2/interop.engine.cpp:16453
// function calls: 4
void KeyValues3_IsArray(void* self)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 255
	KeyValues3::IsArray(); // 16456
} /* size: 23, inline expansions: 4 (30 bytes) */

// <012B0B06> engine2/interop.engine.cpp:16459
// function calls: 4
void KeyValues3_IsTable(void* self)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 260
	KeyValues3::IsTable(); // 16462
} /* size: 23, inline expansions: 4 (30 bytes) */

// <012B0A64> engine2/interop.engine.cpp:16465
// function calls: 3
void KeyValues3_GetType(void* self)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 16468
} /* size: 15, inline expansions: 3 (14 bytes) */

// <012B0A1B> engine2/interop.engine.cpp:16471
void KeyValues3_GetValueBool(void* self)
{
} /* size: 18 */

// <012B086B> engine2/interop.engine.cpp:16477
// function calls: 7
void KeyValues3_GetValueInt(void* self)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<int>(); // 694
	KeyValues3::GetValueAsNumeric<int>(); // 184
	KeyValues3::GetValueInt(); // 16480
} /* size: 0, inline expansions: 7 (348 bytes) */

// <012B06BA> engine2/interop.engine.cpp:16483
// function calls: 7
void KeyValues3_GetValueInt64(void* self)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 16486
} /* size: 0, inline expansions: 7 (348 bytes) */

// <012B0509> engine2/interop.engine.cpp:16489
// function calls: 7
void KeyValues3_GetValueUint64(void* self)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 16492
} /* size: 0, inline expansions: 7 (412 bytes) */

// <012B035A> engine2/interop.engine.cpp:16495
// function calls: 7
void KeyValues3_GetValueFloat(void* self)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	{
	}
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 16498
} /* size: 0, inline expansions: 7 (476 bytes) */

// <012B01A6> engine2/interop.engine.cpp:16501
// function calls: 7
void KeyValues3_GetValueDouble(void* self)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	KV3Helper_StringToNumber<double>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<double>(); // 694
	{
	}
	KeyValues3::GetValueAsNumeric<double>(); // 204
	KeyValues3::GetValueDouble(); // 16504
} /* size: 0, inline expansions: 7 (464 bytes) */

// <012B00AC> engine2/interop.engine.cpp:16519
void KeyValues3_GetValueColor(void* self)
{
} /* size: 16 */

// <012AFFB6> engine2/interop.engine.cpp:16525
// function calls: 3
void KeyValues3_SetValueBool(void* self, int o)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 16528
} /* size: 70, inline expansions: 3 (114 bytes) */

// <012AFF53> engine2/interop.engine.cpp:16531
void KeyValues3_SetValueString(void* self, const char* o)
{
} /* size: 9 */

// <012AFEF0> engine2/interop.engine.cpp:16537
void KeyValues3_SetValueResourceString(void* self, const char* o)
{
} /* size: 9 */

// <012AFDFA> engine2/interop.engine.cpp:16543
// function calls: 3
void KeyValues3_SetValueInt(void* self, int o)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 16546
} /* size: 71, inline expansions: 3 (119 bytes) */

// <012AFD04> engine2/interop.engine.cpp:16549
// function calls: 3
void KeyValues3_SetValueFloat(void* self, float o)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 16552
} /* size: 79, inline expansions: 3 (128 bytes) */

// <012AFADF> engine2/interop.engine.cpp:16555
// function calls: 5
void KeyValues3_SetMemberString(void* self, const char* key, const char* value)
{
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 16558
} /* size: 0, inline expansions: 5 (369 bytes) */

// <012AF8BA> engine2/interop.engine.cpp:16561
// function calls: 5
void KeyValues3_SetMemberInt(void* self, const char* key, int value)
{
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 16564
} /* size: 0, inline expansions: 5 (369 bytes) */

// <012AF69C> engine2/interop.engine.cpp:16567
// function calls: 5
void KeyValues3_SetMemberFloat(void* self, const char* key, float value)
{
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 16570
} /* size: 0, inline expansions: 5 (521 bytes) */

// <012AF479> engine2/interop.engine.cpp:16573
// function calls: 5
void KeyValues3_GetMemberString(void* self, const char* key)
{
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 16576
} /* size: 0, inline expansions: 5 (381 bytes) */

// <012AF254> engine2/interop.engine.cpp:16579
// function calls: 5
void KeyValues3_GetMemberInt(void* self, const char* key, int defaultValue)
{
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 16582
} /* size: 0, inline expansions: 5 (369 bytes) */

// <012AF036> engine2/interop.engine.cpp:16585
// function calls: 5
void KeyValues3_GetMemberFloat(void* self, const char* key, float defaultValue)
{
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 16588
} /* size: 0, inline expansions: 5 (521 bytes) */

// <012AEE11> engine2/interop.engine.cpp:16591
// function calls: 5
void KeyValues3_GetMemberVector(void* self, const char* key, Vector* defaultValue)
{
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 16594
} /* size: 0, inline expansions: 5 (369 bytes) */

// <012AED4E> engine2/interop.engine.cpp:16603
// function call: 1
void KeyValues3_GetArrayLength(void* self)
{
	KeyValues3::GetArrayLength(); // 16606
} /* size: 9, inline expansions: 1 (5 bytes) */

// <012AED05> engine2/interop.engine.cpp:16609
void KeyValues3_ArrayAddToTail(void* self)
{
} /* size: 9 */

// <012AECA2> engine2/interop.engine.cpp:16615
void KeyValues3_GetArrayElement(void* self, int i)
{
} /* size: 9 */

// <012AEA94> engine2/interop.engine.cpp:16621
// function calls: 5
void KeyValues3_FindOrCreateMember(void* self, const char* name)
{
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 16624
} /* size: 0, inline expansions: 5 (369 bytes) */

// <012AEA02> engine2/interop.engine.cpp:16633
void KeyValues3_GetMemberCount(void* self)
{
} /* size: 9 */

// <012AE99D> engine2/interop.engine.cpp:16639
void KeyValues3_GetMember(void* self, int idx)
{
} /* size: 9 */

// <012AE7BB> engine2/interop.engine.cpp:16651
// variables: 3
// function calls: 2
void KeyValues3_Save(void* __self)
{
	KeyValues3* self; // 16655
	CUtlString err; // 16658
	CUtlBuffer* kv3DataBuf; // 16659
	CUtlString::CUtlString(); // 16658
	CUtlString::~CUtlString(); // 16664
} /* size: 147, variables: 3, inline expansions: 2 (24 bytes) */

// <012AE772> engine2/interop.engine.cpp:16665
void LZ4Glue_CompressBound(int inputSize)
{
} /* size: 9 */

// <012AE6D5> engine2/interop.engine.cpp:16671
void LZ4Glue_Compress(void* src, void* dst, int srcSize, int dstCapacity)
{
} /* size: 9 */

// <012AE61C> engine2/interop.engine.cpp:16677
void LZ4Glue_CompressHC(void* src, void* dst, int srcSize, int dstCapacity, int compressionLevel)
{
} /* size: 9 */

// <012AE57F> engine2/interop.engine.cpp:16683
void LZ4Glue_Decompress(void* src, void* dst, int compressedSize, int dstCapacity)
{
} /* size: 9 */

// <012AE536> engine2/interop.engine.cpp:16689
void LZ4Glue_CompressFrameBound(int inputSize)
{
} /* size: 9 */

// <012AE47D> engine2/interop.engine.cpp:16695
void LZ4Glue_CompressFrame(void* src, void* dst, int srcSize, int dstCapacity, int compressionLevel)
{
} /* size: 9 */

// <012AE418> engine2/interop.engine.cpp:16701
void LZ4Glue_GetFrameContentSize(void* src, int srcSize)
{
} /* size: 9 */

// <012AE37B> engine2/interop.engine.cpp:16707
void LZ4Glue_DecompressFrame(void* src, void* dst, int srcSize, int dstCapacity)
{
} /* size: 9 */

// <012AE03D> engine2/interop.engine.cpp:16713
// function calls: 12
void MeshGlue_CreateRenderMesh(HMaterialStrong* material, int nPrimType, const char* pName)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 15
	ResourceHandle_GetHandle(HMaterialStrong* target); // 16716
	CStrongHandle<InfoForResourceTypeCRenderMesh>::operator CStrongHandle<InfoForResourceTypeCRenderMesh>::ResourceHandleTyped_t(); // 222
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCRenderMesh>::Init(
		ResourceHandleTyped_t hResource);  // 462
	CStrongHandle<InfoForResourceTypeCRenderMesh>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 222
	CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>::CStrongHandleCopyable(
				const CStrongHandle<InfoForResourceTypeCRenderMesh>& src);  // 16716
	CStrongHandle<InfoForResourceTypeCRenderMesh>::~CStrongHandle(); // 16716
} /* size: 187, inline expansions: 12 (188 bytes) */

// <012ADB49> engine2/interop.engine.cpp:16719
// function calls: 5
void MeshGlue_CreateModel(CAnimationGroupBuilder* anim, CPhysBodyDescArray* pBodies, CBuilderMaterialGroupArray* pMaterialGroups, float mass, uint32 surfaceProp, void* lodSwitchDistance, void* meshes, int numMeshes, void* lodMasks, void* meshGroupMasks, void* meshGroups, int numMeshGroups, void* vertices, int numVertices, void* indices, int numIndices, void* materials, void* surfaces, int numSurfaces, void* spheres, int numSpheres, void* capsules, int numCapsules, void* boxes, int numBoxes, void* hulls, int numHulls, void* meshShapes, int numMeshShapes, void* bones, int numBones, const char* boneNames, int startTraceVertex, int startTraceIndex, int numTraceVertices, int numTraceIndices, uint64 _defaultMeshGroupMask)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 16722
	CWeakHandle<InfoForResourceTypeCModel>::GetBinding(); // 223
	CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(
			ResourceHandleTyped_t hResource);  // 223
	CStrongHandleCopyable<InfoForResourceTypeCModel>::CStrongHandleCopyable(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 16722
} /* size: 494, inline expansions: 5 (52 bytes) */

// <012AD9E4> engine2/interop.engine.cpp:16725
// function calls: 5
void MeshGlue_GetModelNumVertices(HModelStrong* model)
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCModel>::GetHandle(); // 27
	ResourceHandle_GetHandle(HModelStrong* target); // 16728
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012AD855> engine2/interop.engine.cpp:16731
// function calls: 5
void MeshGlue_GetModelVertices(HModelStrong* model, void* vertices, unsigned int numVertices)
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCModel>::GetHandle(); // 27
	ResourceHandle_GetHandle(HModelStrong* target); // 16734
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012AD6F0> engine2/interop.engine.cpp:16737
// function calls: 5
void MeshGlue_GetModelNumIndices(HModelStrong* model)
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCModel>::GetHandle(); // 27
	ResourceHandle_GetHandle(HModelStrong* target); // 16740
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012AD561> engine2/interop.engine.cpp:16743
// function calls: 5
void MeshGlue_GetModelIndices(HModelStrong* model, void* indices, unsigned int numIndices)
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCModel>::GetHandle(); // 27
	ResourceHandle_GetHandle(HModelStrong* target); // 16746
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012AD3E7> engine2/interop.engine.cpp:16749
// function calls: 5
void MeshGlue_GetModelIndexCount(HModelStrong* model, int drawCall)
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCModel>::GetHandle(); // 27
	ResourceHandle_GetHandle(HModelStrong* target); // 16752
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012AD26D> engine2/interop.engine.cpp:16755
// function calls: 5
void MeshGlue_GetModelIndexStart(HModelStrong* model, int drawCall)
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCModel>::GetHandle(); // 27
	ResourceHandle_GetHandle(HModelStrong* target); // 16758
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012AD0F3> engine2/interop.engine.cpp:16761
// function calls: 5
void MeshGlue_GetModelBaseVertex(HModelStrong* model, int drawCall)
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCModel>::GetHandle(); // 27
	ResourceHandle_GetHandle(HModelStrong* target); // 16764
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012ACE67> engine2/interop.engine.cpp:16767
// function calls: 10
void MeshGlue_SetMeshMaterial(HRenderMesh_InternalStrong* renderMesh, HMaterialStrong* material)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 15
	ResourceHandle_GetHandle(HMaterialStrong* target); // 16770
	CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCRenderMesh>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle(); // 39
	ResourceHandle_GetHandle(HRenderMesh_InternalStrong* target); // 16770
} /* size: 86, inline expansions: 10 (42 bytes) */

// <012ACCED> engine2/interop.engine.cpp:16773
// function calls: 5
void MeshGlue_SetMeshPrimType(HRenderMesh_InternalStrong* renderMesh, int nPrimType)
{
	CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCRenderMesh>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle(); // 39
	ResourceHandle_GetHandle(HRenderMesh_InternalStrong* target); // 16776
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012ACB5E> engine2/interop.engine.cpp:16779
// function calls: 5
void MeshGlue_SetMeshBounds(HRenderMesh_InternalStrong* renderMesh, Vector* mins, Vector* maxs)
{
	CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCRenderMesh>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle(); // 39
	ResourceHandle_GetHandle(HRenderMesh_InternalStrong* target); // 16782
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012AC9E4> engine2/interop.engine.cpp:16785
// function calls: 5
void MeshGlue_SetMeshUvDensity(HRenderMesh_InternalStrong* renderMesh, float flDensity)
{
	CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCRenderMesh>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle(); // 39
	ResourceHandle_GetHandle(HRenderMesh_InternalStrong* target); // 16788
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012AC855> engine2/interop.engine.cpp:16791
// function calls: 5
void MeshGlue_SetMeshVertexRange(HRenderMesh_InternalStrong* renderMesh, int startVertex, int vertexCount)
{
	CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCRenderMesh>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle(); // 39
	ResourceHandle_GetHandle(HRenderMesh_InternalStrong* target); // 16794
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012AC6C6> engine2/interop.engine.cpp:16797
// function calls: 5
void MeshGlue_SetMeshIndexRange(HRenderMesh_InternalStrong* renderMesh, int startIndex, int indexCount)
{
	CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCRenderMesh>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle(); // 39
	ResourceHandle_GetHandle(HRenderMesh_InternalStrong* target); // 16800
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012AC522> engine2/interop.engine.cpp:16803
// function calls: 5
void MeshGlue_SetMeshVertexBuffer(HRenderMesh_InternalStrong* renderMesh, VertexBufferHandle_t hVB, void* pData, int nDataSize)
{
	CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCRenderMesh>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle(); // 39
	ResourceHandle_GetHandle(HRenderMesh_InternalStrong* target); // 16806
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012AC37E> engine2/interop.engine.cpp:16809
// function calls: 5
void MeshGlue_SetMeshIndexBuffer(HRenderMesh_InternalStrong* renderMesh, IndexBufferHandle_t hIB, void* pData, int nDataSize)
{
	CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCRenderMesh>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle(); // 39
	ResourceHandle_GetHandle(HRenderMesh_InternalStrong* target); // 16812
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012AC290> engine2/interop.engine.cpp:16815
void MeshGlue_CreateVertexBuffer(int nElementSizeInBytes, int nElementCount, const char* fieldNames, void* pFields, int nFields, void* pData, int nDataSize)
{
} /* size: 9 */

// <012AC20F> engine2/interop.engine.cpp:16821
void MeshGlue_CreateVertexBuffer_1(int nElementCount, VertexLayout* pLayout, void* pData)
{
} /* size: 9 */

// <012AC16A> engine2/interop.engine.cpp:16827
void MeshGlue_CreateIndexBuffer(int nElementCount, int b32Bit, void* pData, int nDataSize)
{
} /* size: 19 */

// <012AC0E4> engine2/interop.engine.cpp:16833
const void* MeshGlue_LockVertexBuffer(VertexBufferHandle_t hVB, int nDataSize, int nDataOffset)
{
} /* size: 9 */

// <012AC047> engine2/interop.engine.cpp:16839
void MeshGlue_UnlockVertexBuffer(VertexBufferHandle_t hVB, void* pData, int nDataSize, int nDataOffset)
{
} /* size: 9 */

// <012ABFC1> engine2/interop.engine.cpp:16845
const void* MeshGlue_LockIndexBuffer(IndexBufferHandle_t hIB, int nDataSize, int nDataOffset)
{
} /* size: 9 */

// <012ABF24> engine2/interop.engine.cpp:16851
void MeshGlue_UnlockIndexBuffer(IndexBufferHandle_t hIB, void* pData, int nDataSize, int nDataOffset)
{
} /* size: 9 */

// <012ABE87> engine2/interop.engine.cpp:16857
void MeshGlue_SetVertexBufferData(VertexBufferHandle_t hVB, void* pData, int nDataSize, int nDataOffset)
{
} /* size: 9 */

// <012ABDEA> engine2/interop.engine.cpp:16863
void MeshGlue_SetIndexBufferData(IndexBufferHandle_t hIB, void* pData, int nDataSize, int nDataOffset)
{
} /* size: 9 */

// <012ABD85> engine2/interop.engine.cpp:16869
void MeshGlue_SetVertexBufferSize(VertexBufferHandle_t hVB, int nDataSize)
{
} /* size: 9 */

// <012ABD20> engine2/interop.engine.cpp:16875
void MeshGlue_SetIndexBufferSize(IndexBufferHandle_t hIB, int nDataSize)
{
} /* size: 9 */

// <012ABC2F> engine2/interop.engine.cpp:16881
// variables: 4
void MeshGlue_TriangulatePolygon(void* __pPolygonVerts, int __nNumVerts, void* __pOutIndexList, int __nMaxIndices)
{
	Vector* pPolygonVerts; // 16885
	int nNumVerts; // 16886
	int* pOutIndexList; // 16887
	int nMaxIndices; // 16888
} /* size: 9, variables: 4 */

// <012AAEDB> engine2/interop.engine.cpp:16895
// variables: 6
// function calls: 58
void MeshGlue_ClipPolygonLineSegment(void* __pPolygonVerts, int __nNumVerts, Vector* __vA, Vector* __vB, CUtlVector<Vector, CUtlMemory<Vector, int> >* __pOutSegmentPointsInside)
{
	Vector* pPolygonVerts; // 16899
	int nNumVerts; // 16900
	Vector vA; // 16901
	Vector vB; // 16902
	CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutSegmentPointsInside; // 16903
	CTriangulatedPolygon polygon; // 16906
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<int, int>::ConvertToExternalMemory(
				int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
				int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
				int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<45, int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<int, 45, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<int, 45, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<int, 45>::~CUtlVectorFixedGrowable(); // 62
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<16, Vector2D, 4>::Base(); // 237
	CUtlMemory<Vector2D, int>::IsExternallyAllocated(); // 577
	CUtlMemory<Vector2D, int>::ConvertToExternalMemory(
				Vector2D* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<Vector2D, int>::Purge_FixedGrowable(
				Vector2D* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<Vector2D, int>::Purge_FixedGrowable(
				Vector2D* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<Vector2D, 16, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::Base(); // 368
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::Purge(); // 560
	ValidateAlignment<Vector2D>(void); // 508
	CUtlMemory<Vector2D, int>::Purge(); // 903
	CUtlMemory<Vector2D, int>::Purge(); // 510
	CUtlMemory<Vector2D, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<Vector2D, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<Vector2D, 16, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<Vector2D, 16>::~CUtlVectorFixedGrowable(); // 62
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<16, Vector, 4>::Base(); // 237
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 577
	CUtlMemory<Vector, int>::ConvertToExternalMemory(
				Vector* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<Vector, int>::Purge_FixedGrowable(
				Vector* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<Vector, int>::Purge_FixedGrowable(
				Vector* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<Vector, 16, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 368
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<Vector, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<Vector, 16, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<Vector, 16>::~CUtlVectorFixedGrowable(); // 62
	CTriangulatedPolygon::~CTriangulatedPolygon(); // 16910
} /* size: 497, variables: 6, inline expansions: 58 (2291 bytes) */

// <012AA68E> engine2/interop.engine.cpp:16911
// variables: 12
// function calls: 28
void MeshGlue_GenerateUVsForTriangles(int __nNumVertices, void* __VertexPositions, int __nNumTriangles, void* __pTriangleVertexIndices, void* __pTriangleFaceIds, int64 __nGenerationMode, int64 __nEdgeAlignMode, int __nAlignEdgeVertexIndexA, int __nAlignEdgeVertexIndexB, CUtlVector<Vector, CUtlMemory<Vector, int> >* __pOutVertexUVs)
{
	int nNumVertices; // 16915
	Vector* VertexPositions; // 16916
	int nNumTriangles; // 16917
	unsigned int* pTriangleVertexIndices; // 16918
	unsigned int* pTriangleFaceIds; // 16919
	GenerateUVsMode_t nGenerationMode; // 16920
	AlignEdgeUV_t nEdgeAlignMode; // 16921
	int nAlignEdgeVertexIndexA; // 16922
	int nAlignEdgeVertexIndexB; // 16923
	CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutVertexUVs; // 16924
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> > uvs; // 16927
	{
		int i; // 16929
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 16929
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1252
		Construct<Vector, Vector>(Vector* pMemory); // 1252
		CUtlMemory<Vector, int>::NumAllocated(); // 1247
		CUtlMemory<Vector, int>::Base(); // 112
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
				Vector& src);  // 16931
		CUtlMemory<Vector2D, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::operator[](
				int i);  // 16931
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 16931
	}
	CUtlMemory<Vector2D, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector2D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVector(); // 16927
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector2D, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector2D, int>::Purge(); // 903
	CUtlMemory<Vector2D, int>::Purge(); // 1799
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Purge(); // 560
	ValidateAlignment<Vector2D>(void); // 508
	CUtlMemory<Vector2D, int>::Purge(); // 510
	CUtlMemory<Vector2D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVector(); // 16935
} /* size: 289, variables: 11, inline expansions: 15 (214 bytes) */

// <012AA514> engine2/interop.engine.cpp:16936
// function calls: 5
void MeshGlue_SerializeMeshBuffers(HModelStrong* model, int nMesh)
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCModel>::GetHandle(); // 27
	ResourceHandle_GetHandle(HModelStrong* target); // 16939
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012AA39A> engine2/interop.engine.cpp:16942
// function calls: 5
void MeshGlue_SerializeMeshData(HModelStrong* model, int nMesh)
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCModel>::GetHandle(); // 27
	ResourceHandle_GetHandle(HModelStrong* target); // 16945
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012AA235> engine2/interop.engine.cpp:16948
// function calls: 5
void MeshGlue_SerializeModelData(HModelStrong* model)
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCModel>::GetHandle(); // 27
	ResourceHandle_GetHandle(HModelStrong* target); // 16951
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012AA1D0> engine2/interop.engine.cpp:16954
void NativeEngine_SDLGmCntrllr_GetAxis(int joystickId, int64 axis)
{
} /* size: 9 */

// <012AA187> engine2/interop.engine.cpp:16960
void NativeEngine_SDLGmCntrllr_GetControllerType(int joystickId)
{
} /* size: 17 */

// <012AA13E> engine2/interop.engine.cpp:16966
void NativeEngine_SDLGmCntrllr_Close(int joystickId)
{
} /* size: 18 */

// <012AA0A1> engine2/interop.engine.cpp:16972
void NativeEngine_SDLGmCntrllr_SetLEDColor(int joystickId, int red, int green, int blue)
{
} /* size: 18 */

// <012AA004> engine2/interop.engine.cpp:16978
void NativeEngine_SDLGmCntrllr_Rumble(int joystickId, int lowFreq, int highFreq, int duration)
{
} /* size: 18 */

// <012A9F67> engine2/interop.engine.cpp:16984
void NativeEngine_SDLGmCntrllr_RumbleTriggers(int joystickId, int lowFreq, int highFreq, int duration)
{
} /* size: 18 */

// <012A9F1E> engine2/interop.engine.cpp:16990
void NativeEngine_SDLGmCntrllr_GetGyroscope(int joystickId)
{
} /* size: 9 */

// <012A9ED5> engine2/interop.engine.cpp:16996
void NativeEngine_SDLGmCntrllr_GetAccelerometer(int joystickId)
{
} /* size: 9 */

// <012A9D7F> engine2/interop.engine.cpp:17002
// variables: 3
// function calls: 2
void NativeLowLevel_Copy(void* __dest, void* __src, int64 __count)
{
	void* dest; // 17006
	void* src; // 17007
	long long int count; // 17008
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 17011
} /* size: 9, variables: 3, inline expansions: 2 (10 bytes) */

// <012A9CBF> engine2/interop.engine.cpp:17015
// variables: 3
void PerformanceTrace_BeginEvent(void* __name, const char* __data, unsigned int __color)
{
	void* name; // 17019
	const char* data; // 17020
	unsigned int color; // 17021
} /* size: 9, variables: 3 */

// <012A9C15> engine2/interop.engine.cpp:17034
void PhysicsTrace_Trace(Request* request)
{
} /* size: 82 */

// <012A9B93> engine2/interop.engine.cpp:17040
void PhysicsTrace_TraceAll(Request* request, CUtlVector<PhysicsTrace::Result, CUtlMemory<PhysicsTrace::Result, int> >* results)
{
} /* size: 56 */

// <012A990D> engine2/interop.engine.cpp:17046
// function calls: 8
void PhysicsTrace_TraceAgainstCapsule(Request* request, RnCapsule_t* capsule, CTransformUnaligned* tx)
{
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 534
	CTransformUnaligned::UniformScale(); // 534
	CTransform::CTransform(
			const CTransformUnaligned& tx);  // 17049
} /* size: 197, inline expansions: 8 (87 bytes) */

// <012A9687> engine2/interop.engine.cpp:17052
// function calls: 8
void PhysicsTrace_TraceAgainstBBox(Request* request, AABB_t* box, CTransformUnaligned* tx)
{
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 534
	CTransformUnaligned::UniformScale(); // 534
	CTransform::CTransform(
			const CTransformUnaligned& tx);  // 17055
} /* size: 187, inline expansions: 8 (87 bytes) */

// <012A9401> engine2/interop.engine.cpp:17058
// function calls: 8
void PhysicsTrace_TraceAgainstSphere(Request* request, RnSphere_t* sphere, CTransformUnaligned* tx)
{
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 534
	CTransformUnaligned::UniformScale(); // 534
	CTransform::CTransform(
			const CTransformUnaligned& tx);  // 17061
} /* size: 185, inline expansions: 8 (107 bytes) */

// <012A9342> engine2/interop.engine.cpp:17064
void RenderTools_SetRenderState(IRenderContext* context, CRenderAttributes* attributes, IMaterialMode* materialMode, VertexLayout* layout, SceneSystemPerFrameStats_t* stats)
{
} /* size: 18 */

// <012A923C> engine2/interop.engine.cpp:17070
void RenderTools_Draw(IRenderContext* context, int64 type, VertexLayout* layout, void* vertices, int numVertices, void* indices, int numIndices, SceneSystemPerFrameStats_t* stats)
{
} /* size: 9 */

// <012A90AD> engine2/interop.engine.cpp:17076
// function calls: 5
void RenderTools_ResolveFrameBuffer(IRenderContext* renderContext, HRenderTextureStrong* texture, Rect_t* viewport)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 17079
} /* size: 83, inline expansions: 5 (11 bytes) */

// <012A8F1E> engine2/interop.engine.cpp:17082
// function calls: 5
void RenderTools_ResolveDepthBuffer(IRenderContext* renderContext, HRenderTextureStrong* texture, Rect_t* viewport)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 17085
} /* size: 83, inline expansions: 5 (11 bytes) */

// <012A8D10> engine2/interop.engine.cpp:17088
// function calls: 6
void RenderTools_DrawSceneObject(IRenderContext* renderContext, ISceneLayer* sceneLayer, CSceneObject* sceneObject, CTransformUnaligned* transform, Vector4D* color, HMaterialStrong* material, CRenderAttributes* attributes)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 15
	ResourceHandle_GetHandle(HMaterialStrong* target); // 17091
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 17091
} /* size: 144, inline expansions: 6 (25 bytes) */

// <012A8B3C> engine2/interop.engine.cpp:17094
// function calls: 5
void RenderTools_DrawModel(IRenderContext* renderContext, ISceneLayer* sceneLayer, HModelStrong* hModel, void* transforms, int numTransforms, CRenderAttributes* attributes)
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCModel>::GetHandle(); // 27
	ResourceHandle_GetHandle(HModelStrong* target); // 17097
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012A896E> engine2/interop.engine.cpp:17100
// function calls: 5
void RenderTools_DrawModel_1(IRenderContext* renderContext, ISceneLayer* sceneLayer, HModelStrong* hModel, RenderBufferHandle_t hDrawArgBuffer, int nBufferOffset, CRenderAttributes* attributes)
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCModel>::GetHandle(); // 27
	ResourceHandle_GetHandle(HModelStrong* target); // 17103
} /* size: 70, inline expansions: 5 (27 bytes) */

// <012A8896> engine2/interop.engine.cpp:17106
void RenderTools_Compute(IRenderContext* renderContext, CRenderAttributes* attributes, IMaterialMode* pMode, int tx, int ty, int tz)
{
} /* size: 9 */

// <012A87DD> engine2/interop.engine.cpp:17112
void RenderTools_ComputeIndirect(IRenderContext* renderContext, CRenderAttributes* attributes, IMaterialMode* pMode, RenderBufferHandle_t hIndirectBuffer, unsigned int nIndirectBufferOffset)
{
} /* size: 9 */

// <012A870B> engine2/interop.engine.cpp:17118
void RenderTools_TraceRays(IRenderContext* renderContext, CRenderAttributes* attributes, IMaterialMode* pMode, unsigned int tx, unsigned int ty, unsigned int tz)
{
} /* size: 9 */

// <012A8652> engine2/interop.engine.cpp:17124
void RenderTools_TraceRaysIndirect(IRenderContext* renderContext, CRenderAttributes* attributes, IMaterialMode* pMode, RenderBufferHandle_t hIndirectBuffer, unsigned int nIndirectBufferOffset)
{
} /* size: 9 */

// <012A852F> engine2/interop.engine.cpp:17130
// function calls: 2
void RenderTools_SetDynamicConstantBufferData(CRenderAttributes* attributes, uint32 nTokenID, IRenderContext* renderContext, void* data, int dataSize)
{
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 17133
} /* size: 9, inline expansions: 2 (0 bytes) */

// <012A8203> engine2/interop.engine.cpp:17136
// function calls: 10
void RenderTools_CopyTexture(IRenderContext* renderContext, HRenderTextureStrong* sourceTexture, HRenderTextureStrong* destTexture, Rect_t* pSrcRect, int nDestX, int nDestY, unsigned int nSrcMipSlice, unsigned int nSrcArraySlice, unsigned int nDstMipSlice, unsigned int nDstArraySlice)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 17139
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 21
	ResourceHandle_GetHandle(HRenderTextureStrong* target); // 17139
} /* size: 131, inline expansions: 10 (26 bytes) */

// <0136621C> engine2/interop.engine.cpp:17142
// variables: 6
// function calls: 5
void RenderTools_SetGPUBufferData(IRenderContext* __renderContext, RenderBufferHandle_t __hGpuBuffer, void* __pData, unsigned int __nDataSize, unsigned int __nOffset)
{
	IRenderContext* renderContext; // 17146
	RenderBufferHandle_t__* hGpuBuffer; // 17147
	void* pData; // 17148
	unsigned int nDataSize; // 17149
	unsigned int nOffset; // 17150
	{
		CRenderContextPtr pRenderContext; // 17155
		CRenderContextPtr::CRenderContextPtr(
					IRenderDevice* pDevice);  // 17155
		CRenderContextPtr::operator->(); // 17156
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 17157
	}
	RenderTools_SetGPUBufferData(IRenderContext* __renderContext,
					RenderBufferHandle_t __hGpuBuffer,
					void* __pData,
					unsigned int __nDataSize,
					unsigned int __nOffset);  // 17142
} /* size: 211, variables: 5, inline expansions: 1 (121 bytes) */

// <012A8161> engine2/interop.engine.cpp:17142
// variables: 6
void RenderTools_SetGPUBufferData(IRenderContext* __renderContext, RenderBufferHandle_t __hGpuBuffer, void* __pData, unsigned int __nDataSize, unsigned int __nOffset)
{
	IRenderContext* renderContext; // 17146
	RenderBufferHandle_t__* hGpuBuffer; // 17147
	void* pData; // 17148
	unsigned int nDataSize; // 17149
	unsigned int nOffset; // 17150
	{
		CRenderContextPtr pRenderContext; // 17155
	}
} /* size: 0, variables: 5 */

// <013664B4> engine2/interop.engine.cpp:17165
// variables: 4
// function calls: 5
void RenderTools_FillGPUBuffer(IRenderContext* __renderContext, RenderBufferHandle_t __hBuffer, unsigned int __nFillValue)
{
	IRenderContext* renderContext; // 17169
	RenderBufferHandle_t__* hBuffer; // 17170
	unsigned int nFillValue; // 17171
	{
		CRenderContextPtr pRenderContext; // 17176
		CRenderContextPtr::CRenderContextPtr(
					IRenderDevice* pDevice);  // 17176
		CRenderContextPtr::operator->(); // 17177
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 17178
	}
	RenderTools_FillGPUBuffer(IRenderContext* __renderContext,
					RenderBufferHandle_t __hBuffer,
					unsigned int __nFillValue);  // 17165
} /* size: 180, variables: 3, inline expansions: 1 (110 bytes) */

// <012A80F9> engine2/interop.engine.cpp:17165
// variables: 4
void RenderTools_FillGPUBuffer(IRenderContext* __renderContext, RenderBufferHandle_t __hBuffer, unsigned int __nFillValue)
{
	IRenderContext* renderContext; // 17169
	RenderBufferHandle_t__* hBuffer; // 17170
	unsigned int nFillValue; // 17171
	{
		CRenderContextPtr pRenderContext; // 17176
	}
} /* size: 0, variables: 3 */

// <013666D4> engine2/interop.engine.cpp:17186
// variables: 5
// function calls: 5
void RenderTools_CopyGPUBufferHiddenStructureCount(IRenderContext* __renderContext, RenderBufferHandle_t __hSrcBuffer, RenderBufferHandle_t __hDestBuffer, unsigned int __nDestBufferOffset)
{
	IRenderContext* renderContext; // 17190
	RenderBufferHandle_t__* hSrcBuffer; // 17191
	RenderBufferHandle_t__* hDestBuffer; // 17192
	unsigned int nDestBufferOffset; // 17193
	{
		CRenderContextPtr pRenderContext; // 17198
		CRenderContextPtr::CRenderContextPtr(
					IRenderDevice* pDevice);  // 17198
		CRenderContextPtr::operator->(); // 17199
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 17200
	}
	RenderTools_CopyGPUBufferHiddenStructureCount(IRenderContext* __renderContext,
							RenderBufferHandle_t __hSrcBuffer,
							RenderBufferHandle_t __hDestBuffer,
							unsigned int __nDestBufferOffset);  // 17186
} /* size: 189, variables: 4, inline expansions: 1 (119 bytes) */

// <012A8077> engine2/interop.engine.cpp:17186
// variables: 5
void RenderTools_CopyGPUBufferHiddenStructureCount(IRenderContext* __renderContext, RenderBufferHandle_t __hSrcBuffer, RenderBufferHandle_t __hDestBuffer, unsigned int __nDestBufferOffset)
{
	IRenderContext* renderContext; // 17190
	RenderBufferHandle_t__* hSrcBuffer; // 17191
	RenderBufferHandle_t__* hDestBuffer; // 17192
	unsigned int nDestBufferOffset; // 17193
	{
		CRenderContextPtr pRenderContext; // 17198
	}
} /* size: 0, variables: 4 */

// <0136692F> engine2/interop.engine.cpp:17208
// variables: 4
// function calls: 5
void RenderTools_SetGPUBufferHiddenStructureCount(IRenderContext* __renderContext, RenderBufferHandle_t __hBuffer, unsigned int __nCounter)
{
	IRenderContext* renderContext; // 17212
	RenderBufferHandle_t__* hBuffer; // 17213
	unsigned int nCounter; // 17214
	{
		CRenderContextPtr pRenderContext; // 17219
		CRenderContextPtr::CRenderContextPtr(
					IRenderDevice* pDevice);  // 17219
		CRenderContextPtr::operator->(); // 17220
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 17221
	}
	RenderTools_SetGPUBufferHiddenStructureCount(IRenderContext* __renderContext,
							RenderBufferHandle_t __hBuffer,
							unsigned int __nCounter);  // 17208
} /* size: 180, variables: 3, inline expansions: 1 (110 bytes) */

// <012A800F> engine2/interop.engine.cpp:17208
// variables: 4
void RenderTools_SetGPUBufferHiddenStructureCount(IRenderContext* __renderContext, RenderBufferHandle_t __hBuffer, unsigned int __nCounter)
{
	IRenderContext* renderContext; // 17212
	RenderBufferHandle_t__* hBuffer; // 17213
	unsigned int nCounter; // 17214
	{
		CRenderContextPtr pRenderContext; // 17219
	}
} /* size: 0, variables: 3 */

// <012A7F10> engine2/interop.engine.cpp:17233
// function calls: 2
void _Set__RnCapsuleDesc_t_m_Capsule(void* self, RnCapsule_t* value)
{
	Vector::operator=(
			const Vector& vOther);  // 123
	RnCapsule_t::operator=(
			const RnCapsule_t  &);  // 17235
} /* size: 74, inline expansions: 2 (128 bytes) */

// <012A7EE3> engine2/interop.engine.cpp:17237
void _Get__RnCapsuleDesc_t_m_nCollisionAttributeIndex(void* self)
{
} /* size: 7 */

// <012A7EA7> engine2/interop.engine.cpp:17241
void _Set__RnCapsuleDesc_t_m_nCollisionAttributeIndex(void* self, unsigned int value)
{
} /* size: 7 */

// <012A7E7A> engine2/interop.engine.cpp:17245
void _Get__RnCapsuleDesc_t_m_nSurfacePropertyIndex(void* self)
{
} /* size: 8 */

// <012A7E3E> engine2/interop.engine.cpp:17249
void _Set__RnCapsuleDesc_t_m_nSurfacePropertyIndex(void* self, unsigned int value)
{
} /* size: 8 */

// <012A7DAF> engine2/interop.engine.cpp:17253
// function calls: 2
void RnHull_t_GetVertexCount(void* self)
{
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 320
	RnHull_t::GetVertexCount(); // 17256
} /* size: 8, inline expansions: 2 (0 bytes) */

// <012A7D20> engine2/interop.engine.cpp:17259
// function calls: 2
void RnHull_t_GetEdgeCount(void* self)
{
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Count(); // 325
	RnHull_t::GetEdgeCount(); // 17262
} /* size: 8, inline expansions: 2 (0 bytes) */

// <012A7BEE> engine2/interop.engine.cpp:17271
// function calls: 3
void RnHull_t_GetMassCenter(void* self)
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 330
	RnHull_t::GetMassCenter(); // 17274
} /* size: 49, inline expansions: 3 (42 bytes) */

// <012A7B90> engine2/interop.engine.cpp:17277
// function call: 1
void RnHull_t_GetCentroid(void* self)
{
	RnHull_t::GetCentroid(); // 17280
} /* size: 14, inline expansions: 1 (0 bytes) */

// <012A7B47> engine2/interop.engine.cpp:17283
void RnHull_t_GetSurfaceArea(void* self)
{
} /* size: 9 */

// <012A7A18> engine2/interop.engine.cpp:17289
// function calls: 5
void RnHull_t_GetMemory(void* self)
{
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1167
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Count(); // 1168
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Count(); // 1169
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Count(); // 1170
	RnHull_t::GetMemory(); // 17292
} /* size: 40, inline expansions: 5 (35 bytes) */

// <012A7657> engine2/interop.engine.cpp:17295
// variable: 1
// function calls: 15
void RnHull_t_GetBbox(void* self)
{
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 139
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 138
	AABB_t::MakeInvalid(); // 1710
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 1709
	{
		int nVert; // 1712
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1712
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 1714
		AABB_t::AddPointToBounds(
				const Vector& vPoint);  // 83
		AABB_t::operator|=(
				const Vector& vPoint);  // 1714
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1714
	}
	RnHull_t::GetBbox(
		float flScale);  // 17298
} /* size: 174, inline expansions: 7 (149 bytes) */

// <012A7561> engine2/interop.engine.cpp:17301
// function calls: 3
void RnHull_t_GetVertex(void* self, int nVertex)
{
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 321
	RnHull_t::GetVertex(
			int nVertex);  // 17304
} /* size: 29, inline expansions: 3 (45 bytes) */

// <012A7196> engine2/interop.engine.cpp:17307
// variables: 6
// function calls: 14
void RnHull_t_GetEdgeVertex(void* __self, int __edge, Vector* __a, Vector* __b)
{
	RnHull_t* self; // 17311
	int edge; // 17312
	Vector* a; // 17313
	Vector* b; // 17314
	const RnHalfEdge_t* pEdge; // 17317
	const RnHalfEdge_t* pTwin; // 17318
	CUtlMemory<RnHalfEdge_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator[](
			int i);  // 326
	RnHull_t::GetEdge(
		int nEdge);  // 17317
	CUtlMemory<RnHalfEdge_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator[](
			int i);  // 326
	RnHull_t::GetEdge(
		int nEdge);  // 17318
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 321
	RnHull_t::GetVertex(
			int nVertex);  // 17319
	Vector::operator=(
			const Vector& vOther);  // 17319
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 321
	RnHull_t::GetVertex(
			int nVertex);  // 17320
	Vector::operator=(
			const Vector& vOther);  // 17320
} /* size: 85, variables: 6, inline expansions: 14 (176 bytes) */

// <01358973> engine2/interop.engine.cpp:17324
// variable: 1
void RnHullDesc_t_GetHull(void* __self)
{
	RnHullDesc_t* self; // 17328
} /* size: 9, variables: 1 */

// <012A7108> engine2/interop.engine.cpp:17339
void _Set__RnHullDesc_t_m_nCollisionAttributeIndex(void* self, unsigned int value)
{
} /* size: 7 */

// <012A70DB> engine2/interop.engine.cpp:17343
void _Get__RnHullDesc_t_m_nSurfacePropertyIndex(void* self)
{
} /* size: 8 */

// <012A709F> engine2/interop.engine.cpp:17347
void _Set__RnHullDesc_t_m_nSurfacePropertyIndex(void* self, unsigned int value)
{
} /* size: 8 */

// <012A63CA> engine2/interop.engine.cpp:17357
// function calls: 64
void RnMesh_t_GetHeight(void* self)
{
	CUtlMemory<RnNode_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::operator[](
			int i);  // 649
	RnMesh_t::GetRoot(); // 1152
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetLeftChild(); // 1138
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetLeftChild(); // 1138
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetLeftChild(); // 1138
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1139
	RnNode_t::GetChildOffset(); // 551
	RnNode_t::GetRightChild(); // 1140
	RnNode_t::GetType(); // 547
	RnNode_t::IsLeaf(); // 1133
	RnNode_t::GetHeight(); // 1141
	RnNode_t::GetHeight(); // 1131
	RnNode_t::GetHeight(); // 1158
	RnMesh_t::GetHeight(); // 17360
} /* size: 888, inline expansions: 64 (6410 bytes) */

// <012A629B> engine2/interop.engine.cpp:17363
// function calls: 5
void RnMesh_t_GetMemory(void* self)
{
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Count(); // 1180
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1181
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 1182
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 1183
	RnMesh_t::GetMemory(); // 17366
} /* size: 48, inline expansions: 5 (43 bytes) */

// <012A6143> engine2/interop.engine.cpp:17369
// function calls: 6
void RnMesh_t_GetBbox(void* self)
{
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 1865
	Vector::operator=(
			const Vector& vOther);  // 1866
	Vector::operator=(
			const Vector& vOther);  // 1867
	RnMesh_t::GetBbox(); // 17372
} /* size: 31, inline expansions: 6 (46 bytes) */

// <012A60B4> engine2/interop.engine.cpp:17375
// function calls: 2
void RnMesh_t_GetMaterialCount(void* self)
{
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 654
	RnMesh_t::GetMaterialCount(); // 17378
} /* size: 11, inline expansions: 2 (0 bytes) */

// <012A5C20> engine2/interop.engine.cpp:17381
// variables: 6
// function calls: 15
void RnMesh_t_GetTriangle(void* __self, int __triangle, Vector* __a, Vector* __b, Vector* __c)
{
	RnMesh_t* self; // 17385
	int triangle; // 17386
	Vector* a; // 17387
	Vector* b; // 17388
	Vector* c; // 17389
	const RnTriangle_t* pTriangle; // 17392
	CUtlMemory<RnTriangle_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::operator[](
			int i);  // 653
	RnMesh_t::GetTriangle(
			int nTriangle);  // 17392
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 651
	RnMesh_t::GetVertex(
			int nVertex);  // 17393
	Vector::operator=(
			const Vector& vOther);  // 17393
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 651
	RnMesh_t::GetVertex(
			int nVertex);  // 17394
	Vector::operator=(
			const Vector& vOther);  // 17394
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 651
	RnMesh_t::GetVertex(
			int nVertex);  // 17395
	Vector::operator=(
			const Vector& vOther);  // 17395
} /* size: 116, variables: 6, inline expansions: 15 (235 bytes) */

// <012A5BFC> engine2/interop.engine.cpp:17399
// variable: 1
void RnMeshDesc_t_GetMesh(void* __self)
{
	RnMeshDesc_t* self; // 17403
} /* size: 0, variables: 1 */

// <012A5BCF> engine2/interop.engine.cpp:17410
void _Get__RnMeshDesc_t_m_nCollisionAttributeIndex(void* self)
{
} /* size: 7 */

// <012A5B93> engine2/interop.engine.cpp:17414
void _Set__RnMeshDesc_t_m_nCollisionAttributeIndex(void* self, unsigned int value)
{
} /* size: 7 */

// <012A5B66> engine2/interop.engine.cpp:17418
void _Get__RnMeshDesc_t_m_nSurfacePropertyIndex(void* self)
{
} /* size: 8 */

// <012A5B2A> engine2/interop.engine.cpp:17422
void _Set__RnMeshDesc_t_m_nSurfacePropertyIndex(void* self, unsigned int value)
{
} /* size: 8 */

// <012A5AFD> engine2/interop.engine.cpp:17426
void _Get__RnSphereDesc_t_m_Sphere(void* self)
{
} /* size: 15 */

// <012A5A1F> engine2/interop.engine.cpp:17430
// function calls: 2
void _Set__RnSphereDesc_t_m_Sphere(void* self, RnSphere_t* value)
{
	Vector::operator=(
			const Vector& vOther);  // 72
	RnSphere_t::operator=(
			const RnSphere_t  &);  // 17432
} /* size: 44, inline expansions: 2 (68 bytes) */

// <012A59F2> engine2/interop.engine.cpp:17434
void _Get__RnSphereDesc_t_m_nCollisionAttributeIndex(void* self)
{
} /* size: 7 */

// <012A59B6> engine2/interop.engine.cpp:17438
void _Set__RnSphereDesc_t_m_nCollisionAttributeIndex(void* self, unsigned int value)
{
} /* size: 7 */

// <012A5989> engine2/interop.engine.cpp:17442
void _Get__RnSphereDesc_t_m_nSurfacePropertyIndex(void* self)
{
} /* size: 8 */

// <012A594D> engine2/interop.engine.cpp:17446
void _Set__RnSphereDesc_t_m_nSurfacePropertyIndex(void* self, unsigned int value)
{
} /* size: 8 */

// <012A5920> engine2/interop.engine.cpp:17450
void _Get__ScnSystmPrFrmStt_m_nTrianglesRendered(void* self)
{
} /* size: 7 */

// <012A58E4> engine2/interop.engine.cpp:17454
void _Set__ScnSystmPrFrmStt_m_nTrianglesRendered(void* self, unsigned int value)
{
} /* size: 7 */

// <012A58B7> engine2/interop.engine.cpp:17458
void _Get__ScnSystmPrFrmStt_m_nArtistTrianglesRendered(void* self)
{
} /* size: 8 */

// <012A587B> engine2/interop.engine.cpp:17462
void _Set__ScnSystmPrFrmStt_m_nArtistTrianglesRendered(void* self, unsigned int value)
{
} /* size: 8 */

// <012A584E> engine2/interop.engine.cpp:17466
void _Get__ScnSystmPrFrmStt_m_nRenderBatchDraws(void* self)
{
} /* size: 8 */

// <012A5812> engine2/interop.engine.cpp:17470
void _Set__ScnSystmPrFrmStt_m_nRenderBatchDraws(void* self, unsigned int value)
{
} /* size: 8 */

// <012A57E5> engine2/interop.engine.cpp:17474
void _Get__ScnSystmPrFrmStt_m_nDrawCalls(void* self)
{
} /* size: 8 */

// <012A57A9> engine2/interop.engine.cpp:17478
void _Set__ScnSystmPrFrmStt_m_nDrawCalls(void* self, unsigned int value)
{
} /* size: 8 */

// <012A577C> engine2/interop.engine.cpp:17482
void _Get__ScnSystmPrFrmStt_m_nDrawPrimitives(void* self)
{
} /* size: 8 */

// <012A5740> engine2/interop.engine.cpp:17486
void _Set__ScnSystmPrFrmStt_m_nDrawPrimitives(void* self, unsigned int value)
{
} /* size: 8 */

// <012A5713> engine2/interop.engine.cpp:17490
void _Get__ScnSystmPrFrmStt_m_nBaseSceneObjectPrimDraws(void* self)
{
} /* size: 8 */

// <012A56D7> engine2/interop.engine.cpp:17494
void _Set__ScnSystmPrFrmStt_m_nBaseSceneObjectPrimDraws(void* self, unsigned int value)
{
} /* size: 8 */

// <012A56AA> engine2/interop.engine.cpp:17498
void _Get__ScnSystmPrFrmStt_m_nAnimatableObjectPrimDraws(void* self)
{
} /* size: 8 */

// <012A566E> engine2/interop.engine.cpp:17502
void _Set__ScnSystmPrFrmStt_m_nAnimatableObjectPrimDraws(void* self, unsigned int value)
{
} /* size: 8 */

// <012A5641> engine2/interop.engine.cpp:17506
void _Get__ScnSystmPrFrmStt_m_nAggregateSceneObjectPrimDraws(void* self)
{
} /* size: 8 */

// <012A5605> engine2/interop.engine.cpp:17510
void _Set__ScnSystmPrFrmStt_m_nAggregateSceneObjectPrimDraws(void* self, unsigned int value)
{
} /* size: 8 */

// <012A55D8> engine2/interop.engine.cpp:17514
void _Get__ScnSystmPrFrmStt_m_nAggregateSceneObjectsFullyCulled(void* self)
{
} /* size: 8 */

// <012A559C> engine2/interop.engine.cpp:17518
void _Set__ScnSystmPrFrmStt_m_nAggregateSceneObjectsFullyCulled(void* self, unsigned int value)
{
} /* size: 8 */

// <012A556F> engine2/interop.engine.cpp:17522
void _Get__ScnSystmPrFrmStt_m_nAggregateSceneObjectDrawCalls(void* self)
{
} /* size: 8 */

// <012A5533> engine2/interop.engine.cpp:17526
void _Set__ScnSystmPrFrmStt_m_nAggregateSceneObjectDrawCalls(void* self, unsigned int value)
{
} /* size: 8 */

// <012A5506> engine2/interop.engine.cpp:17530
void _Get__ScnSystmPrFrmStt_m_nNumMaterialCompute(void* self)
{
} /* size: 8 */

// <012A54CA> engine2/interop.engine.cpp:17534
void _Set__ScnSystmPrFrmStt_m_nNumMaterialCompute(void* self, unsigned int value)
{
} /* size: 8 */

// <012A549D> engine2/interop.engine.cpp:17538
void _Get__ScnSystmPrFrmStt_m_nNumMaterialSet(void* self)
{
} /* size: 8 */

// <012A5461> engine2/interop.engine.cpp:17542
void _Set__ScnSystmPrFrmStt_m_nNumMaterialSet(void* self, unsigned int value)
{
} /* size: 8 */

// <012A5434> engine2/interop.engine.cpp:17546
void _Get__ScnSystmPrFrmStt_m_nNumSimilarMaterialSet(void* self)
{
} /* size: 8 */

// <012A53F8> engine2/interop.engine.cpp:17550
void _Set__ScnSystmPrFrmStt_m_nNumSimilarMaterialSet(void* self, unsigned int value)
{
} /* size: 8 */

// <012A53CB> engine2/interop.engine.cpp:17554
void _Get__ScnSystmPrFrmStt_m_nNumTextureOnlyMaterialSet(void* self)
{
} /* size: 8 */

// <012A5362> engine2/interop.engine.cpp:17562
void _Get__ScnSystmPrFrmStt_m_nNumVfxEval(void* self)
{
} /* size: 8 */

// <012A5326> engine2/interop.engine.cpp:17566
void _Set__ScnSystmPrFrmStt_m_nNumVfxEval(void* self, unsigned int value)
{
} /* size: 8 */

// <012A52F9> engine2/interop.engine.cpp:17570
void _Get__ScnSystmPrFrmStt_m_nNumVfxRule(void* self)
{
} /* size: 8 */

// <012A52BD> engine2/interop.engine.cpp:17574
void _Set__ScnSystmPrFrmStt_m_nNumVfxRule(void* self, unsigned int value)
{
} /* size: 8 */

// <012A5290> engine2/interop.engine.cpp:17578
void _Get__ScnSystmPrFrmStt_m_nNumConstantBufferUpdates(void* self)
{
} /* size: 8 */

// <012A5254> engine2/interop.engine.cpp:17582
void _Set__ScnSystmPrFrmStt_m_nNumConstantBufferUpdates(void* self, unsigned int value)
{
} /* size: 8 */

// <012A5227> engine2/interop.engine.cpp:17586
void _Get__ScnSystmPrFrmStt_m_nNumConstantBufferBytes(void* self)
{
} /* size: 8 */

// <012A51EB> engine2/interop.engine.cpp:17590
void _Set__ScnSystmPrFrmStt_m_nNumConstantBufferBytes(void* self, unsigned int value)
{
} /* size: 8 */

// <012A51BE> engine2/interop.engine.cpp:17594
void _Get__ScnSystmPrFrmStt_m_nMaterialChangesNonShadow(void* self)
{
} /* size: 8 */

// <012A5182> engine2/interop.engine.cpp:17598
void _Set__ScnSystmPrFrmStt_m_nMaterialChangesNonShadow(void* self, unsigned int value)
{
} /* size: 8 */

// <012A5155> engine2/interop.engine.cpp:17602
void _Get__ScnSystmPrFrmStt_m_nMaterialChangesNonShadowInitial(void* self)
{
} /* size: 8 */

// <012A5119> engine2/interop.engine.cpp:17606
void _Set__ScnSystmPrFrmStt_m_nMaterialChangesNonShadowInitial(void* self, unsigned int value)
{
} /* size: 8 */

// <012A50EC> engine2/interop.engine.cpp:17610
void _Get__ScnSystmPrFrmStt_m_nMaterialChangesShadow(void* self)
{
} /* size: 8 */

// <012A50B0> engine2/interop.engine.cpp:17614
void _Set__ScnSystmPrFrmStt_m_nMaterialChangesShadow(void* self, unsigned int value)
{
} /* size: 8 */

// <012A5083> engine2/interop.engine.cpp:17618
void _Get__ScnSystmPrFrmStt_m_nMaterialChangesShadowInitial(void* self)
{
} /* size: 8 */

// <012A5047> engine2/interop.engine.cpp:17622
void _Set__ScnSystmPrFrmStt_m_nMaterialChangesShadowInitial(void* self, unsigned int value)
{
} /* size: 8 */

// <012A501A> engine2/interop.engine.cpp:17626
void _Get__ScnSystmPrFrmStt_m_nMaterialChangesShadowAlphaTested(void* self)
{
} /* size: 8 */

// <012A4FDE> engine2/interop.engine.cpp:17630
void _Set__ScnSystmPrFrmStt_m_nMaterialChangesShadowAlphaTested(void* self, unsigned int value)
{
} /* size: 8 */

// <012A4FB1> engine2/interop.engine.cpp:17634
void _Get__ScnSystmPrFrmStt_m_nCopyMaterialChangesNonShadow(void* self)
{
} /* size: 8 */

// <012A4F75> engine2/interop.engine.cpp:17638
void _Set__ScnSystmPrFrmStt_m_nCopyMaterialChangesNonShadow(void* self, unsigned int value)
{
} /* size: 8 */

// <012A4EA3> engine2/interop.engine.cpp:17654
void _Set__ScnSystmPrFrmStt_m_nNumRowsUsed(void* self, unsigned int value)
{
} /* size: 8 */

// <012A4E76> engine2/interop.engine.cpp:17658
void _Get__ScnSystmPrFrmStt_m_nNumObjectsTested(void* self)
{
} /* size: 8 */

// <012A4E3A> engine2/interop.engine.cpp:17662
void _Set__ScnSystmPrFrmStt_m_nNumObjectsTested(void* self, unsigned int value)
{
} /* size: 8 */

// <012A4E0D> engine2/interop.engine.cpp:17666
void _Get__ScnSystmPrFrmStt_m_nNumObjectsPreCullCheck(void* self)
{
} /* size: 8 */

// <012A4DD1> engine2/interop.engine.cpp:17670
void _Set__ScnSystmPrFrmStt_m_nNumObjectsPreCullCheck(void* self, unsigned int value)
{
} /* size: 8 */

// <012A4DA4> engine2/interop.engine.cpp:17674
void _Get__ScnSystmPrFrmStt_m_nNumObjectsPassingCullCheck(void* self)
{
} /* size: 8 */

// <012A4D68> engine2/interop.engine.cpp:17678
void _Set__ScnSystmPrFrmStt_m_nNumObjectsPassingCullCheck(void* self, unsigned int value)
{
} /* size: 8 */

// <012A4D3B> engine2/interop.engine.cpp:17682
void _Get__ScnSystmPrFrmStt_m_nNumVerticesReferenced(void* self)
{
} /* size: 8 */

// <012A4CFF> engine2/interop.engine.cpp:17686
void _Set__ScnSystmPrFrmStt_m_nNumVerticesReferenced(void* self, unsigned int value)
{
} /* size: 8 */

// <012A4CD2> engine2/interop.engine.cpp:17690
void _Get__ScnSystmPrFrmStt_m_nNumPrimaryContexts(void* self)
{
} /* size: 8 */

// <012A4C96> engine2/interop.engine.cpp:17694
void _Set__ScnSystmPrFrmStt_m_nNumPrimaryContexts(void* self, unsigned int value)
{
} /* size: 8 */

// <012A4C2D> engine2/interop.engine.cpp:17702
void _Set__ScnSystmPrFrmStt_m_nNumSecondaryContexts(void* self, unsigned int value)
{
} /* size: 8 */

// <012A4C00> engine2/interop.engine.cpp:17706
void _Get__ScnSystmPrFrmStt_m_nNumDisplayListsSubmitted(void* self)
{
} /* size: 11 */

// <012A4BC4> engine2/interop.engine.cpp:17710
void _Set__ScnSystmPrFrmStt_m_nNumDisplayListsSubmitted(void* self, unsigned int value)
{
} /* size: 11 */

// <012A4B66> engine2/interop.engine.cpp:17714
// function call: 1
void _Get__ScnSystmPrFrmStt_m_nNumViewsRendered(void* self)
{
	CInterlockedIntT<int, 4>::operator int(); // 17716
} /* size: 11, inline expansions: 1 (6 bytes) */

// <012A4AAF> engine2/interop.engine.cpp:17718
// function calls: 2
void _Set__ScnSystmPrFrmStt_m_nNumViewsRendered(void* self, int value)
{
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 17720
} /* size: 20, inline expansions: 2 (17 bytes) */

// <012A4A82> engine2/interop.engine.cpp:17722
void _Get__ScnSystmPrFrmStt_m_nNumResolves(void* self)
{
} /* size: 11 */

// <012A4A46> engine2/interop.engine.cpp:17726
void _Set__ScnSystmPrFrmStt_m_nNumResolves(void* self, unsigned int value)
{
} /* size: 11 */

// <012A4A19> engine2/interop.engine.cpp:17730
void _Get__ScnSystmPrFrmStt_m_nNumCullBoxes(void* self)
{
} /* size: 11 */

// <012A49DD> engine2/interop.engine.cpp:17734
void _Set__ScnSystmPrFrmStt_m_nNumCullBoxes(void* self, unsigned int value)
{
} /* size: 11 */

// <012A49B0> engine2/interop.engine.cpp:17738
void _Get__ScnSystmPrFrmStt_m_nCullingBoxCycleCount(void* self)
{
} /* size: 12 */

// <012A4974> engine2/interop.engine.cpp:17742
void _Set__ScnSystmPrFrmStt_m_nCullingBoxCycleCount(void* self, uint64 value)
{
} /* size: 12 */

// <012A4947> engine2/interop.engine.cpp:17746
void _Get__ScnSystmPrFrmStt_m_nNumObjectsTestedAgainstCullingBoxes(void* self)
{
} /* size: 11 */

// <012A490B> engine2/interop.engine.cpp:17750
void _Set__ScnSystmPrFrmStt_m_nNumObjectsTestedAgainstCullingBoxes(void* self, unsigned int value)
{
} /* size: 11 */

// <012A48DE> engine2/interop.engine.cpp:17754
void _Get__ScnSystmPrFrmStt_m_nNumObjectsRejectedByBoundsIndex(void* self)
{
} /* size: 11 */

// <012A48A2> engine2/interop.engine.cpp:17758
void _Set__ScnSystmPrFrmStt_m_nNumObjectsRejectedByBoundsIndex(void* self, unsigned int value)
{
} /* size: 11 */

// <012A4875> engine2/interop.engine.cpp:17762
void _Get__ScnSystmPrFrmStt_m_nNumObjectsRejectedByCullBoxes(void* self)
{
} /* size: 11 */

// <012A4839> engine2/interop.engine.cpp:17766
void _Set__ScnSystmPrFrmStt_m_nNumObjectsRejectedByCullBoxes(void* self, unsigned int value)
{
} /* size: 11 */

// <012A480C> engine2/interop.engine.cpp:17770
void _Get__ScnSystmPrFrmStt_m_nNumObjectsRejectedByVis(void* self)
{
} /* size: 11 */

// <012A47D0> engine2/interop.engine.cpp:17774
void _Set__ScnSystmPrFrmStt_m_nNumObjectsRejectedByVis(void* self, unsigned int value)
{
} /* size: 11 */

// <012A4767> engine2/interop.engine.cpp:17782
void _Set__ScnSystmPrFrmStt_m_nNumObjectsRejectedByBackfaceCulling(void* self, unsigned int value)
{
} /* size: 11 */

// <012A473A> engine2/interop.engine.cpp:17786
void _Get__ScnSystmPrFrmStt_m_nNumObjectsRejectedByScreenSizeCulling(void* self)
{
} /* size: 11 */

// <012A46FE> engine2/interop.engine.cpp:17790
void _Set__ScnSystmPrFrmStt_m_nNumObjectsRejectedByScreenSizeCulling(void* self, unsigned int value)
{
} /* size: 11 */

// <012A46D1> engine2/interop.engine.cpp:17794
void _Get__ScnSystmPrFrmStt_m_nNumObjectsRejectedByFading(void* self)
{
} /* size: 11 */

// <012A4695> engine2/interop.engine.cpp:17798
void _Set__ScnSystmPrFrmStt_m_nNumObjectsRejectedByFading(void* self, unsigned int value)
{
} /* size: 11 */

// <012A45FF> engine2/interop.engine.cpp:17810
void _Get__ScnSystmPrFrmStt_m_nNumUniqueMaterialsSeen(void* self)
{
} /* size: 11 */

// <012A45C3> engine2/interop.engine.cpp:17814
void _Set__ScnSystmPrFrmStt_m_nNumUniqueMaterialsSeen(void* self, unsigned int value)
{
} /* size: 11 */

// <012A4596> engine2/interop.engine.cpp:17818
void _Get__ScnSystmPrFrmStt_m_nNumUnshadowedLightsInView(void* self)
{
} /* size: 11 */

// <012A455A> engine2/interop.engine.cpp:17822
void _Set__ScnSystmPrFrmStt_m_nNumUnshadowedLightsInView(void* self, unsigned int value)
{
} /* size: 11 */

// <012A44F1> engine2/interop.engine.cpp:17830
void _Set__ScnSystmPrFrmStt_m_nNumShadowedLightsInView(void* self, unsigned int value)
{
} /* size: 11 */

// <012A44C4> engine2/interop.engine.cpp:17834
void _Get__ScnSystmPrFrmStt_m_nNumShadowMaps(void* self)
{
} /* size: 11 */

// <012A4488> engine2/interop.engine.cpp:17838
void _Set__ScnSystmPrFrmStt_m_nNumShadowMaps(void* self, unsigned int value)
{
} /* size: 11 */

// <012A445B> engine2/interop.engine.cpp:17842
void _Get__ScnSystmPrFrmStt_m_nNumRenderTargetBinds(void* self)
{
} /* size: 11 */

// <012A441F> engine2/interop.engine.cpp:17846
void _Set__ScnSystmPrFrmStt_m_nNumRenderTargetBinds(void* self, unsigned int value)
{
} /* size: 11 */

// <012A43F2> engine2/interop.engine.cpp:17850
void _Get__ScnSystmPrFrmStt_m_nPushConstantSets(void* self)
{
} /* size: 11 */

// <012A43B6> engine2/interop.engine.cpp:17854
void _Set__ScnSystmPrFrmStt_m_nPushConstantSets(void* self, unsigned int value)
{
} /* size: 11 */

// <012A4149> engine2/interop.engine.cpp:17858
// variables: 2
// function calls: 8
void ShaderTools_GetShaderSource(const char* __pShaderFile)
{
	const char* pShaderFile; // 17862
	CUtlBuffer shaderFileBuf; // 17865
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 17873
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 17870
} /* size: 152, variables: 2, inline expansions: 8 (115 bytes) */

// <012A3E51> engine2/interop.engine.cpp:17874
// variables: 4
// function calls: 9
void ShaderTools_MaskShaderSource(const char* __sourcecode, int64 __program, int __bIsForCrc)
{
	const char* sourcecode; // 17878
	VfxProgram_t program; // 17879
	bool bIsForCrc; // 17880
	CUtlBuffer shaderFileBuf; // 17883
	V_strlen(const char* str); // 17884
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 17885
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 17892
} /* size: 185, variables: 4, inline expansions: 9 (158 bytes) */

// <012A3DDE> engine2/interop.engine.cpp:17893
// variable: 1
// function call: 1
void SheetSequence_t_FrameCount(void* __self)
{
	SheetSequence_t* self; // 17897
	CResourceArrayBase::Count(); // 17900
} /* size: 8, variables: 1, inline expansions: 1 (0 bytes) */

// <012A3D75> engine2/interop.engine.cpp:17908
void _Set__SheetSequence_t_m_nId(void* self, unsigned int value)
{
} /* size: 7 */

// <012A3D0C> engine2/interop.engine.cpp:17916
void _Set__SheetSequence_t_m_bClamp(void* self, int value)
{
} /* size: 11 */

// <012A3C3A> engine2/interop.engine.cpp:17932
void _Set__SheetSequence_t_m_bNoColor(void* self, int value)
{
} /* size: 11 */

// <012A3BD1> engine2/interop.engine.cpp:17940
void _Set__SheetSequence_t_m_bNoAlpha(void* self, int value)
{
} /* size: 11 */

// <012A3BA4> engine2/interop.engine.cpp:17944
void _Get__SheetSequence_t_m_flTotalTime(void* self)
{
} /* size: 10 */

// <012A38EB> engine2/interop.engine.cpp:17963
// variables: 2
// function calls: 7
void ShtSqncFrm_t_GetImage(void* __self, int __i)
{
	SheetSequenceFrame_t* self; // 17967
	int i; // 17968
	ResolveOffset(const int32* pOffset); // 310
	CResourceArrayBase::GetRawPtr(); // 421
	CResourceArray<SheetFrameImage_t>::GetPtr(); // 385
	CResourceArray<SheetFrameImage_t>::operator[](
			int nIndex);  // 17971
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 100
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 100
	SheetFrameImage_t::SheetFrameImage_t(
				const SheetFrameImage_t  &);  // 17971
} /* size: 71, variables: 2, inline expansions: 7 (162 bytes) */

// <012A38BE> engine2/interop.engine.cpp:17975
void _Get__ShtSqncFrm_t_m_flDisplayTime(void* self)
{
} /* size: 9 */

// <012A3882> engine2/interop.engine.cpp:17979
void _Set__ShtSqncFrm_t_m_flDisplayTime(void* self, float value)
{
} /* size: 9 */

// <012A3856> engine2/interop.engine.cpp:17983
void Steam_Inventory_GetAllItems(void)
{
} /* size: 9 */

// <012A382A> engine2/interop.engine.cpp:17989
void Steam_Inventory_DefinitionCount(void)
{
} /* size: 9 */

// <012A37E1> engine2/interop.engine.cpp:17995
void Steam_Inventory_GetDefinitionId(int index)
{
} /* size: 9 */

// <012A376A> engine2/interop.engine.cpp:18001
void Steam_Inventory_GetDefinitionProperty(int definitionId, const char* propertyName)
{
} /* size: 22 */

// <012A36E9> engine2/interop.engine.cpp:18007
void Steam_Inventory_GetDefinitionPrice(int index, uint64* price, uint64* baseprice)
{
} /* size: 18 */

// <012A3683> engine2/interop.engine.cpp:18019
void Steam_Inventory_GetCurrency(void)
{
} /* size: 22 */

// <012A361E> engine2/interop.engine.cpp:18025
void Steam_Inventory_CheckOut(int* defs, int count)
{
} /* size: 9 */

// <012A35F2> engine2/interop.engine.cpp:18031
void Steam_Inventory_IsCheckingOut(void)
{
} /* size: 18 */

// <012A35C6> engine2/interop.engine.cpp:18037
void Steam_Inventory_WasCheckoutSuccessful(void)
{
} /* size: 18 */

// <012A3561> engine2/interop.engine.cpp:18043
void Steam_Inventory_Deserialize(unsigned char* buffer, unsigned int bufferSize)
{
} /* size: 9 */

// <012A34BE> engine2/interop.engine.cpp:18049
void Steam_Screenshots_WriteScreenshot(void* pubRGB, unsigned int cubRGB, int nWidth, int nHeight)
{
} /* size: 18 */

// <012A3442> engine2/interop.engine.cpp:18055
// variable: 1
void SteamUgc_CUgcInstall_Create(uint64 __fileid)
{
	long long unsigned int fileid; // 18059
} /* size: 51, variables: 1 */

// <01359168> engine2/interop.engine.cpp:18066
// function call: 1
void SteamUgc_CUgcInstall_Dispose(void* self)
{
	SteamUgc_CUgcInstall_Dispose(void* self); // 18066
} /* size: 49, inline expansions: 1 (31 bytes) */

// <012A342A> engine2/interop.engine.cpp:18066
void SteamUgc_CUgcInstall_Dispose(void* self)
{
} /* size: 0 */

// <012A3366> engine2/interop.engine.cpp:18082
void _Set__SteamUgc_CUgcInstall_m_complete(void* self, int value)
{
} /* size: 10 */

// <012A3339> engine2/interop.engine.cpp:18086
void _Get__SteamUgc_CUgcInstall_m_success(void* self)
{
} /* size: 9 */

// <012A32FD> engine2/interop.engine.cpp:18090
void _Set__SteamUgc_CUgcInstall_m_success(void* self, int value)
{
} /* size: 11 */

// <012A32D0> engine2/interop.engine.cpp:18094
void _Get__SteamUgc_CUgcInstall_m_resultCode(void* self)
{
} /* size: 8 */

// <012A3294> engine2/interop.engine.cpp:18098
void _Set__SteamUgc_CUgcInstall_m_resultCode(void* self, int value)
{
} /* size: 8 */

// <012A322F> engine2/interop.engine.cpp:18102
void SteamUgc_CUgcQuery_CreateQuery(const char* json, const char* cursor)
{
} /* size: 9 */

// <013591F3> engine2/interop.engine.cpp:18108
// function call: 1
void SteamUgc_CUgcQuery_Dispose(void* self)
{
	SteamUgc_CUgcQuery_Dispose(void* self); // 18108
} /* size: 49, inline expansions: 1 (31 bytes) */

// <012A3217> engine2/interop.engine.cpp:18108
void SteamUgc_CUgcQuery_Dispose(void* self)
{
} /* size: 0 */

// <012A31BC> engine2/interop.engine.cpp:18114
void SteamUgc_CUgcQuery_GetResultJson(void* self)
{
} /* size: 22 */

// <012A3153> engine2/interop.engine.cpp:18124
void _Set__SteamUgc_CUgcQuery_m_complete(void* self, int value)
{
} /* size: 10 */

// <012A3126> engine2/interop.engine.cpp:18128
void _Get__SteamUgc_CUgcQuery_m_success(void* self)
{
} /* size: 9 */

// <012A30EA> engine2/interop.engine.cpp:18132
void _Set__SteamUgc_CUgcQuery_m_success(void* self, int value)
{
} /* size: 11 */

// <012A2F60> engine2/interop.engine.cpp:18164
// variable: 1
void SteamUgc_CUgcUpdate_OpenCommunityItem(uint64 __itemid)
{
	long long unsigned int itemid; // 18168
} /* size: 51, variables: 1 */

// <0135927E> engine2/interop.engine.cpp:18175
// function call: 1
void SteamUgc_CUgcUpdate_Dispose(void* self)
{
	SteamUgc_CUgcUpdate_Dispose(void* self); // 18175
} /* size: 49, inline expansions: 1 (31 bytes) */

// <012A2F48> engine2/interop.engine.cpp:18175
void SteamUgc_CUgcUpdate_Dispose(void* self)
{
} /* size: 0 */

// <012A2E9A> engine2/interop.engine.cpp:18187
void SteamUgc_CUgcUpdate_SetTitle(void* self, const char* title)
{
} /* size: 9 */

// <012A2E35> engine2/interop.engine.cpp:18193
void SteamUgc_CUgcUpdate_SetDescription(void* self, const char* description)
{
} /* size: 9 */

// <012A2DD0> engine2/interop.engine.cpp:18199
void SteamUgc_CUgcUpdate_SetLanguage(void* self, const char* language)
{
} /* size: 9 */

// <012A2CA1> engine2/interop.engine.cpp:18217
void SteamUgc_CUgcUpdate_SetTag(void* self, const char* tag)
{
} /* size: 9 */

// <012A2C3C> engine2/interop.engine.cpp:18223
void SteamUgc_CUgcUpdate_SetContentFolder(void* self, const char* contentFolder)
{
} /* size: 9 */

// <012A2BD7> engine2/interop.engine.cpp:18229
void SteamUgc_CUgcUpdate_SetPreviewImage(void* self, const char* previewFile)
{
} /* size: 9 */

// <012A2B6A> engine2/interop.engine.cpp:18235
void SteamUgc_CUgcUpdate_SetAllowLegacyUpload(void* self, int allow)
{
} /* size: 19 */

// <012A2AE9> engine2/interop.engine.cpp:18241
void SteamUgc_CUgcUpdate_AddKeyValueTag(void* self, const char* key, const char* value)
{
} /* size: 9 */

// <012A2A84> engine2/interop.engine.cpp:18247
void SteamUgc_CUgcUpdate_RemoveKeyValueTags(void* self, const char* key)
{
} /* size: 9 */

// <012A29BA> engine2/interop.engine.cpp:18259
void SteamUgc_CUgcUpdate_AddPreviewFile(void* self, const char* previewFile, int type)
{
} /* size: 9 */

// <012A2955> engine2/interop.engine.cpp:18265
void SteamUgc_CUgcUpdate_AddPreviewVideo(void* self, const char* videoId)
{
} /* size: 9 */

// <012A28D4> engine2/interop.engine.cpp:18271
void SteamUgc_CUgcUpdate_UpdatePreviewFile(void* self, unsigned int index, const char* previewFile)
{
} /* size: 9 */

// <012A2853> engine2/interop.engine.cpp:18277
void SteamUgc_CUgcUpdate_UpdatePreviewVideo(void* self, unsigned int index, const char* videoId)
{
} /* size: 9 */

// <012A27EE> engine2/interop.engine.cpp:18283
void SteamUgc_CUgcUpdate_RemovePreview(void* self, unsigned int index)
{
} /* size: 9 */

// <012A276D> engine2/interop.engine.cpp:18289
void SteamUgc_CUgcUpdate_SetRequiredGameVersions(void* self, const char* minVersion, const char* maxVersion)
{
} /* size: 9 */

// <012A2708> engine2/interop.engine.cpp:18295
void SteamUgc_CUgcUpdate_Submit(void* self, const char* changeNote)
{
} /* size: 18 */

// <012A26BF> engine2/interop.engine.cpp:18301
void SteamUgc_CUgcUpdate_GetProgressPercent(void* self)
{
} /* size: 9 */

// <012A2676> engine2/interop.engine.cpp:18307
void SteamUgc_CUgcUpdate_GetBytesProcessed(void* self)
{
} /* size: 9 */

// <012A262D> engine2/interop.engine.cpp:18313
void SteamUgc_CUgcUpdate_GetBytesTotal(void* self)
{
} /* size: 9 */

// <012A2600> engine2/interop.engine.cpp:18319
void _Get__SteamUgc_CUgcUpdate_m_creating(void* self)
{
} /* size: 8 */

// <012A25C4> engine2/interop.engine.cpp:18323
void _Set__SteamUgc_CUgcUpdate_m_creating(void* self, int value)
{
} /* size: 10 */

// <012A2597> engine2/interop.engine.cpp:18327
void _Get__SteamUgc_CUgcUpdate_m_created(void* self)
{
} /* size: 9 */

// <012A255B> engine2/interop.engine.cpp:18331
void _Set__SteamUgc_CUgcUpdate_m_created(void* self, int value)
{
} /* size: 11 */

// <012A24F2> engine2/interop.engine.cpp:18339
void _Set__SteamUgc_CUgcUpdate_m_submitted(void* self, int value)
{
} /* size: 11 */

// <012A24C5> engine2/interop.engine.cpp:18343
void _Get__SteamUgc_CUgcUpdate_m_complete(void* self)
{
} /* size: 9 */

// <012A2489> engine2/interop.engine.cpp:18347
void _Set__SteamUgc_CUgcUpdate_m_complete(void* self, int value)
{
} /* size: 11 */

// <012A245C> engine2/interop.engine.cpp:18351
void _Get__SteamUgc_CUgcUpdate_m_success(void* self)
{
} /* size: 9 */

// <012A2420> engine2/interop.engine.cpp:18355
void _Set__SteamUgc_CUgcUpdate_m_success(void* self, int value)
{
} /* size: 11 */

// <012A23F3> engine2/interop.engine.cpp:18359
void _Get__SteamUgc_CUgcUpdate_m_bNeedsLegalAgreement(void* self)
{
} /* size: 9 */

// <012A23B7> engine2/interop.engine.cpp:18363
void _Set__SteamUgc_CUgcUpdate_m_bNeedsLegalAgreement(void* self, int value)
{
} /* size: 11 */

// <012A234E> engine2/interop.engine.cpp:18371
void _Set__SteamUgc_CUgcUpdate_m_resultCode(void* self, int value)
{
} /* size: 8 */

// <012A2153> engine2/interop.engine.cpp:18375
// function calls: 7
void VertexLayout_Create(const char* name, int size)
{
	CUtlString::CUtlString(); // 36
	CUtlMemory<RenderInputLayoutField_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<RenderInputLayoutField_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::CUtlVector(); // 36
	VertexLayout::VertexLayout(
			const char* name,
			int size);  // 18378
} /* size: 114, inline expansions: 7 (105 bytes) */

// <0135B090> engine2/interop.engine.cpp:18381
// function calls: 13
void VertexLayout_Destroy(void* self)
{
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RenderInputLayoutField_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 903
	CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 1799
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Purge(); // 560
	ValidateAlignment<RenderInputLayoutField_t>(void); // 508
	CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 510
	CUtlMemory<RenderInputLayoutField_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::~CUtlVector(); // 31
	CUtlString::~CUtlString(); // 31
	VertexLayout::~VertexLayout(); // 18384
	VertexLayout_Destroy(void* self); // 18381
} /* size: 97, inline expansions: 13 (332 bytes) */

// <012A20BF> engine2/interop.engine.cpp:18387
void VertexLayout_Free(void* self)
{
} /* size: 9 */

// <012A1ABC> engine2/interop.engine.cpp:18393
// function calls: 25
void VertexLayout_Add(void* self, const char* semanticName, int semanticIndex, unsigned int format, int offset)
{
	CUtlMemory<RenderInputLayoutField_t, int>::NumAllocated(); // 1143
	CUtlMemory<RenderInputLayoutField_t, int>::Base(); // 112
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Base(); // 368
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<RenderInputLayoutField_t, int>::IsGrowable(); // 823
	CUtlMemory<RenderInputLayoutField_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<RenderInputLayoutField_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<RenderInputLayoutField_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::AddToTail(); // 49
	CUtlMemory<RenderInputLayoutField_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::operator[](
			int i);  // 51
	strcpy(char* __dest,
		const char* __src);  // 124
	V_strcpy(char* dest,
		const char* src);  // 51
	CUtlMemory<RenderInputLayoutField_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::operator[](
			int i);  // 52
	CUtlMemory<RenderInputLayoutField_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::operator[](
			int i);  // 53
	CUtlMemory<RenderInputLayoutField_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::operator[](
			int i);  // 54
	CUtlMemory<RenderInputLayoutField_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::operator[](
			int i);  // 57
	CUtlMemory<RenderInputLayoutField_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::operator[](
			int i);  // 58
	VertexLayout::Add(
		const char* semanticName,
		int semanticIndex,
		uint format,
		int offset);  // 18396
} /* size: 378, inline expansions: 25 (1119 bytes) */

// <012A1686> engine2/interop.engine.cpp:18399
// function calls: 15
void VertexLayout_Build(void* self)
{
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 84
	CUtlMemory<RenderInputLayoutField_t, int>::Base(); // 112
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Base(); // 86
	CUtlString::Get(); // 86
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 86
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 88
	VertexLayout::Build(); // 18402
} /* size: 231, inline expansions: 15 (556 bytes) */

// <012A1659> engine2/interop.engine.cpp:18405
void _Get__VertexLayout_m_Size(void* self)
{
} /* size: 8 */

// <01367AD3> engine2/interop.engine.cpp:18413
// variable: 1
// function call: 1
void VfxCmpldShdrnf_t_Delete(void* __self)
{
	VfxCompiledShaderInfo_t* self; // 18417
	VfxCmpldShdrnf_t_Delete(void* __self); // 18413
} /* size: 49, variables: 1, inline expansions: 1 (31 bytes) */

// <012A04E7> engine2/interop.engine.cpp:18413
// variable: 1
void VfxCmpldShdrnf_t_Delete(void* __self)
{
	VfxCompiledShaderInfo_t* self; // 18417
} /* size: 0, variables: 1 */

// <012A0441> engine2/interop.engine.cpp:18424
// function calls: 2
void _Get__VfxCmpldShdrnf_t_compilerOutput(void* self)
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 18426
} /* size: 30, inline expansions: 2 (42 bytes) */

// <012A03A7> engine2/interop.engine.cpp:18428
// function call: 1
void _Set__VfxCmpldShdrnf_t_compilerOutput(void* self, const char* value)
{
	CUtlString::operator=(
			const char* src);  // 18430
} /* size: 16, inline expansions: 1 (5 bytes) */

// <012A037A> engine2/interop.engine.cpp:18432
void _Get__VfxCmpldShdrnf_t_compileFailed(void* self)
{
} /* size: 9 */

// <012A02CB> engine2/interop.engine.cpp:18440
// variable: 1
// function call: 1
void VPhysXBodyPart_t_GetSphereCount(void* __self)
{
	VPhysXBodyPart_t* self; // 18444
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::Count(); // 18447
} /* size: 8, variables: 1, inline expansions: 1 (0 bytes) */

// <012A0201> engine2/interop.engine.cpp:18451
// variables: 2
// function calls: 2
void VPhysXBodyPart_t_GetSphere(void* __self, int __index)
{
	VPhysXBodyPart_t* self; // 18455
	int index; // 18456
	CUtlMemory<RnSphereDesc_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::operator[](
			int i);  // 18459
} /* size: 16, variables: 2, inline expansions: 2 (22 bytes) */

// <012A018E> engine2/interop.engine.cpp:18463
// variable: 1
// function call: 1
void VPhysXBodyPart_t_GetCapsuleCount(void* __self)
{
	VPhysXBodyPart_t* self; // 18467
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::Count(); // 18470
} /* size: 8, variables: 1, inline expansions: 1 (0 bytes) */

// <012A00C4> engine2/interop.engine.cpp:18474
// variables: 2
// function calls: 2
void VPhysXBodyPart_t_GetCapsule(void* __self, int __index)
{
	VPhysXBodyPart_t* self; // 18478
	int index; // 18479
	CUtlMemory<RnCapsuleDesc_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::operator[](
			int i);  // 18482
} /* size: 20, variables: 2, inline expansions: 2 (30 bytes) */

// <012A0051> engine2/interop.engine.cpp:18486
// variable: 1
// function call: 1
void VPhysXBodyPart_t_GetHullCount(void* __self)
{
	VPhysXBodyPart_t* self; // 18490
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Count(); // 18493
} /* size: 8, variables: 1, inline expansions: 1 (0 bytes) */

// <0129FF87> engine2/interop.engine.cpp:18497
// variables: 2
// function calls: 2
void VPhysXBodyPart_t_GetHull(void* __self, int __index)
{
	VPhysXBodyPart_t* self; // 18501
	int index; // 18502
	CUtlMemory<RnHullDesc_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::operator[](
			int i);  // 18505
} /* size: 19, variables: 2, inline expansions: 2 (28 bytes) */

// <0129FF14> engine2/interop.engine.cpp:18509
// variable: 1
// function call: 1
void VPhysXBodyPart_t_GetMeshCount(void* __self)
{
	VPhysXBodyPart_t* self; // 18513
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::Count(); // 18516
} /* size: 8, variables: 1, inline expansions: 1 (0 bytes) */

// <0129FE4A> engine2/interop.engine.cpp:18520
// variables: 2
// function calls: 2
void VPhysXBodyPart_t_GetMesh(void* __self, int __index)
{
	VPhysXBodyPart_t* self; // 18524
	int index; // 18525
	CUtlMemory<RnMeshDesc_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::operator[](
			int i);  // 18528
} /* size: 19, variables: 2, inline expansions: 2 (28 bytes) */

// <0129FDD7> engine2/interop.engine.cpp:18532
// variable: 1
// function call: 1
void VPhysXBodyPart_t_GetCollisionAttributeCount(void* __self)
{
	VPhysXBodyPart_t* self; // 18536
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 18539
} /* size: 11, variables: 1, inline expansions: 1 (0 bytes) */

// <0129FD0D> engine2/interop.engine.cpp:18543
// variables: 2
// function calls: 2
void VPhysXBodyPart_t_GetCollisionAttributeIndex(void* __self, int __index)
{
	VPhysXBodyPart_t* self; // 18547
	int index; // 18548
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 18551
} /* size: 19, variables: 2, inline expansions: 2 (6 bytes) */

// <0129FCE0> engine2/interop.engine.cpp:18555
void _Get__VPhysXBodyPart_t_m_nFlags(void* self)
{
} /* size: 7 */

// <0129FCA4> engine2/interop.engine.cpp:18559
void _Set__VPhysXBodyPart_t_m_nFlags(void* self, unsigned int value)
{
} /* size: 7 */

// <0129FC3B> engine2/interop.engine.cpp:18567
void _Set__VPhysXBodyPart_t_m_flMass(void* self, float value)
{
} /* size: 10 */

// <0129FC0E> engine2/interop.engine.cpp:18571
void _Get__VPhysXBodyPart_t_m_nCollisionAttributeIndex(void* self)
{
} /* size: 12 */

// <0129FBD2> engine2/interop.engine.cpp:18575
void _Set__VPhysXBodyPart_t_m_nCollisionAttributeIndex(void* self, short unsigned int value)
{
} /* size: 12 */

// <0129FBA5> engine2/interop.engine.cpp:18579
void _Get__VPhysXBodyPart_t_m_flInertiaScale(void* self)
{
} /* size: 13 */

// <0129FB69> engine2/interop.engine.cpp:18583
void _Set__VPhysXBodyPart_t_m_flInertiaScale(void* self, float value)
{
} /* size: 13 */

// <0129FB00> engine2/interop.engine.cpp:18591
void _Set__VPhysXBodyPart_t_m_flLinearDamping(void* self, float value)
{
} /* size: 13 */

// <0129FAD3> engine2/interop.engine.cpp:18595
void _Get__VPhysXBodyPart_t_m_flAngularDamping(void* self)
{
} /* size: 13 */

// <0129FA97> engine2/interop.engine.cpp:18599
void _Set__VPhysXBodyPart_t_m_flAngularDamping(void* self, float value)
{
} /* size: 13 */

// <0129FA6A> engine2/interop.engine.cpp:18603
void _Get__VPhysXBodyPart_t_m_flGravityScale(void* self)
{
} /* size: 13 */

// <0129F997> engine2/interop.engine.cpp:18619
void _Get__VPhysXBodyPart_t_m_vMassCenterOverride(void* self)
{
} /* size: 32 */

// <0129F91D> engine2/interop.engine.cpp:18623
// function call: 1
void _Set__VPhysXBodyPart_t_m_vMassCenterOverride(void* self, Vector* value)
{
	Vector::operator=(
			const Vector& vOther);  // 18625
} /* size: 43, inline expansions: 1 (38 bytes) */

// <0129F8DB> engine2/interop.engine.cpp:18627
// variable: 1
void VPhysXJoint_t_GetLinearLimitMin(void* __self)
{
	VPhysXJoint_t* self; // 18631
} /* size: 10, variables: 1 */

// <0129F899> engine2/interop.engine.cpp:18638
// variable: 1
void VPhysXJoint_t_GetLinearLimitMax(void* __self)
{
	VPhysXJoint_t* self; // 18642
} /* size: 10, variables: 1 */

// <0129F857> engine2/interop.engine.cpp:18649
// variable: 1
void VPhysXJoint_t_GetSwingLimitMin(void* __self)
{
	VPhysXJoint_t* self; // 18653
} /* size: 10, variables: 1 */

// <0129F791> engine2/interop.engine.cpp:18682
// variable: 1
void VPhysXJoint_t_GetTwistLimitMax(void* __self)
{
	VPhysXJoint_t* self; // 18686
} /* size: 13, variables: 1 */

// <0129F72B> engine2/interop.engine.cpp:18693
// variables: 2
void VPhysXJoint_t_SetLinearLimitMin(void* __self, float __value)
{
	VPhysXJoint_t* self; // 18697
	float value; // 18698
} /* size: 10, variables: 2 */

// <0129F6C5> engine2/interop.engine.cpp:18705
// variables: 2
void VPhysXJoint_t_SetLinearLimitMax(void* __self, float __value)
{
	VPhysXJoint_t* self; // 18709
	float value; // 18710
} /* size: 10, variables: 2 */

// <0129F65F> engine2/interop.engine.cpp:18717
// variables: 2
void VPhysXJoint_t_SetSwingLimitMin(void* __self, float __value)
{
	VPhysXJoint_t* self; // 18721
	float value; // 18722
} /* size: 10, variables: 2 */

// <0129F5F9> engine2/interop.engine.cpp:18729
// variables: 2
void VPhysXJoint_t_SetSwingLimitMax(void* __self, float __value)
{
	VPhysXJoint_t* self; // 18733
	float value; // 18734
} /* size: 10, variables: 2 */

// <0129F593> engine2/interop.engine.cpp:18741
// variables: 2
void VPhysXJoint_t_SetTwistLimitMin(void* __self, float __value)
{
	VPhysXJoint_t* self; // 18745
	float value; // 18746
} /* size: 13, variables: 2 */

// <0129F52D> engine2/interop.engine.cpp:18753
// variables: 2
void VPhysXJoint_t_SetTwistLimitMax(void* __self, float __value)
{
	VPhysXJoint_t* self; // 18757
	float value; // 18758
} /* size: 13, variables: 2 */

// <0129F500> engine2/interop.engine.cpp:18765
void _Get__VPhysXJoint_t_m_nType(void* self)
{
} /* size: 8 */

// <0129F4C4> engine2/interop.engine.cpp:18769
void _Set__VPhysXJoint_t_m_nType(void* self, short unsigned int value)
{
} /* size: 8 */

// <0129F45B> engine2/interop.engine.cpp:18777
void _Set__VPhysXJoint_t_m_nBody1(void* self, short unsigned int value)
{
} /* size: 9 */

// <0129F42E> engine2/interop.engine.cpp:18781
void _Get__VPhysXJoint_t_m_nBody2(void* self)
{
} /* size: 9 */

// <0129F3F2> engine2/interop.engine.cpp:18785
void _Set__VPhysXJoint_t_m_nBody2(void* self, short unsigned int value)
{
} /* size: 9 */

// <0129F3C5> engine2/interop.engine.cpp:18789
void _Get__VPhysXJoint_t_m_nFlags(void* self)
{
} /* size: 9 */

// <0129F35C> engine2/interop.engine.cpp:18797
void _Get__VPhysXJoint_t_m_bEnableCollision(void* self)
{
} /* size: 9 */

// <0129F320> engine2/interop.engine.cpp:18801
void _Set__VPhysXJoint_t_m_bEnableCollision(void* self, int value)
{
} /* size: 11 */

// <0129F2F3> engine2/interop.engine.cpp:18805
void _Get__VPhysXJoint_t_m_bEnableLinearLimit(void* self)
{
} /* size: 9 */

// <0129F2B7> engine2/interop.engine.cpp:18809
void _Set__VPhysXJoint_t_m_bEnableLinearLimit(void* self, int value)
{
} /* size: 11 */

// <0129F1A6> engine2/interop.engine.cpp:18825
// function call: 1
void _Set__VPhysXJoint_t_m_vLinearTargetVelocity(void* self, Vector* value)
{
	Vector::operator=(
			const Vector& vOther);  // 18827
} /* size: 34, inline expansions: 1 (29 bytes) */

// <0129F179> engine2/interop.engine.cpp:18829
void _Get__VPhysXJoint_t_m_flMaxForce(void* self)
{
} /* size: 10 */

// <0129F13D> engine2/interop.engine.cpp:18833
void _Set__VPhysXJoint_t_m_flMaxForce(void* self, float value)
{
} /* size: 10 */

// <0129F110> engine2/interop.engine.cpp:18837
void _Get__VPhysXJoint_t_m_bEnableSwingLimit(void* self)
{
} /* size: 9 */

// <0129F0D4> engine2/interop.engine.cpp:18841
void _Set__VPhysXJoint_t_m_bEnableSwingLimit(void* self, int value)
{
} /* size: 11 */

// <0129F06B> engine2/interop.engine.cpp:18849
void _Set__VPhysXJoint_t_m_bEnableTwistLimit(void* self, int value)
{
} /* size: 11 */

// <0129F03E> engine2/interop.engine.cpp:18853
void _Get__VPhysXJoint_t_m_bEnableAngularMotor(void* self)
{
} /* size: 12 */

// <0129F002> engine2/interop.engine.cpp:18857
void _Set__VPhysXJoint_t_m_bEnableAngularMotor(void* self, int value)
{
} /* size: 14 */

// <0129EF5A> engine2/interop.engine.cpp:18865
// function call: 1
void _Set__VPhysXJoint_t_m_vAngularTargetVelocity(void* self, Vector* value)
{
	Vector::operator=(
			const Vector& vOther);  // 18867
} /* size: 43, inline expansions: 1 (38 bytes) */

// <0129EF2D> engine2/interop.engine.cpp:18869
void _Get__VPhysXJoint_t_m_flMaxTorque(void* self)
{
} /* size: 13 */

// <0129EEF1> engine2/interop.engine.cpp:18873
void _Set__VPhysXJoint_t_m_flMaxTorque(void* self, float value)
{
} /* size: 13 */

// <0129EE88> engine2/interop.engine.cpp:18881
void _Set__VPhysXJoint_t_m_flLinearFrequency(void* self, float value)
{
} /* size: 13 */

// <0129EE5B> engine2/interop.engine.cpp:18885
void _Get__VPhysXJoint_t_m_flLinearDampingRatio(void* self)
{
} /* size: 13 */

// <0129EE1F> engine2/interop.engine.cpp:18889
void _Set__VPhysXJoint_t_m_flLinearDampingRatio(void* self, float value)
{
} /* size: 13 */

// <0129EDF2> engine2/interop.engine.cpp:18893
void _Get__VPhysXJoint_t_m_flAngularFrequency(void* self)
{
} /* size: 13 */

// <0129EDB6> engine2/interop.engine.cpp:18897
void _Set__VPhysXJoint_t_m_flAngularFrequency(void* self, float value)
{
} /* size: 13 */

// <0129ED89> engine2/interop.engine.cpp:18901
void _Get__VPhysXJoint_t_m_flAngularDampingRatio(void* self)
{
} /* size: 13 */

// <0129ED4D> engine2/interop.engine.cpp:18905
void _Set__VPhysXJoint_t_m_flAngularDampingRatio(void* self, float value)
{
} /* size: 13 */

// <0129ED20> engine2/interop.engine.cpp:18909
void _Get__VPhysXJoint_t_m_flLinearStrength(void* self)
{
} /* size: 13 */

// <0129ECE4> engine2/interop.engine.cpp:18913
void _Set__VPhysXJoint_t_m_flLinearStrength(void* self, float value)
{
} /* size: 13 */

// <0129EA59> engine2/interop.engine.cpp:18925
// function calls: 10
void _Get__VPhysXJoint_t_m_Frame1(void* self)
{
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 127
	CTransform::GetScale(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 127
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 127
	CTransformUnaligned::CTransformUnaligned(
				const CTransform& transform);  // 18927
} /* size: 43, inline expansions: 10 (67 bytes) */

// <0129E8B3> engine2/interop.engine.cpp:18929
// function calls: 5
void _Set__VPhysXJoint_t_m_Frame1(void* self, CTransformUnaligned* value)
{
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 176
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 177
	CTransform::operator=(
			const CTransformUnaligned& i);  // 18931
} /* size: 30, inline expansions: 5 (66 bytes) */

// <0129E4EB> engine2/interop.engine.cpp:18937
// function calls: 5
void _Set__VPhysXJoint_t_m_Frame2(void* self, CTransformUnaligned* value)
{
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 176
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 177
	CTransform::operator=(
			const CTransformUnaligned& i);  // 18939
} /* size: 30, inline expansions: 5 (66 bytes) */

// <0136AC70> engine2/interop.engine.cpp:18941
// function calls: 2
void VSound_t_DestroyStrongHandle(void* self)
{
	CStrongHandle<InfoForResourceTypeVSound_t>::~CStrongHandle(); // 18944
	VSound_t_DestroyStrongHandle(void* self); // 18941
} /* size: 49, inline expansions: 2 (40 bytes) */

// <0129E4D3> engine2/interop.engine.cpp:18941
void VSound_t_DestroyStrongHandle(void* self)
{
} /* size: 0 */

// <0129E475> engine2/interop.engine.cpp:18947
// function call: 1
void VSound_t_IsStrongHandleValid(void* self)
{
	CStrongHandle<InfoForResourceTypeVSound_t>::HasData(); // 18950
} /* size: 24, inline expansions: 1 (19 bytes) */

// <0129E417> engine2/interop.engine.cpp:18953
// function call: 1
void VSound_t_IsError(void* self)
{
	CStrongHandle<InfoForResourceTypeVSound_t>::IsError(); // 18956
} /* size: 24, inline expansions: 1 (16 bytes) */

// <0129E3BE> engine2/interop.engine.cpp:18959
// function call: 1
void VSound_t_IsStrongHandleLoaded(void* self)
{
	CStrongHandle<InfoForResourceTypeVSound_t>::IsLoaded(); // 18962
} /* size: 41, inline expansions: 1 (28 bytes) */

// <0129E1DB> engine2/interop.engine.cpp:18965
// function calls: 8
void VSound_t_CopyStrongHandle(void* self)
{
	CWeakHandle<InfoForResourceTypeVSound_t>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeVSound_t>::GetHandle(); // 18968
	CWeakHandle<InfoForResourceTypeVSound_t>::GetBinding(); // 476
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeVSound_t>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeVSound_t>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeVSound_t>& src);  // 18968
} /* size: 102, inline expansions: 8 (127 bytes) */

// <0129E178> engine2/interop.engine.cpp:18971
// function call: 1
const void* VSound_t_GetBindingPtr(void* self)
{
	CStrongHandle<InfoForResourceTypeVSound_t>::GetBinding(); // 18974
} /* size: 8, inline expansions: 1 (0 bytes) */

// <0129E0C7> engine2/interop.engine.cpp:18977
// variables: 2
// function calls: 2
void VSound_t_format(void* self)
{
	HSoundStrong* __handle; // 18980
	VSound_t* __self; // 18982
	CStrongHandle<InfoForResourceTypeVSound_t>::HasData(); // 18981
	VSoundV00_t::format(); // 18984
} /* size: 35, variables: 2, inline expansions: 2 (16 bytes) */

// <0129DFA5> engine2/interop.engine.cpp:18987
// variables: 2
// function calls: 4
void VSound_t_BitsPerSample(void* self)
{
	HSoundStrong* __handle; // 18990
	VSound_t* __self; // 18992
	CStrongHandle<InfoForResourceTypeVSound_t>::HasData(); // 18991
	VSoundV00_t::format(); // 225
	VSoundV00_t::BitsPerSample(
			vsound_format_t nFormat);  // 225
	VSoundV00_t::BitsPerSample(); // 18994
} /* size: 51, variables: 2, inline expansions: 4 (58 bytes) */

// <0129DEF4> engine2/interop.engine.cpp:18997
// variables: 2
// function calls: 2
void VSound_t_channels(void* self)
{
	HSoundStrong* __handle; // 19000
	VSound_t* __self; // 19002
	CStrongHandle<InfoForResourceTypeVSound_t>::HasData(); // 19001
	VSoundV00_t::channels(); // 19004
} /* size: 35, variables: 2, inline expansions: 2 (20 bytes) */

// <0129DDD2> engine2/interop.engine.cpp:19007
// variables: 2
// function calls: 4
void VSound_t_BytesPerSample(void* self)
{
	HSoundStrong* __handle; // 19010
	VSound_t* __self; // 19012
	CStrongHandle<InfoForResourceTypeVSound_t>::HasData(); // 19011
	VSoundV00_t::format(); // 227
	VSoundV00_t::BytesPerSample(
			vsound_format_t nFormat);  // 227
	VSoundV00_t::BytesPerSample(); // 19014
} /* size: 59, variables: 2, inline expansions: 4 (74 bytes) */

// <0129DC70> engine2/interop.engine.cpp:19017
// variables: 2
// function calls: 6
void VSound_t_m_sampleFrameSize(void* self)
{
	HSoundStrong* __handle; // 19020
	VSound_t* __self; // 19022
	CStrongHandle<InfoForResourceTypeVSound_t>::HasData(); // 19021
	VSoundV00_t::format(); // 228
	VSoundV00_t::BytesPerSample(
			vsound_format_t nFormat);  // 227
	VSoundV00_t::BytesPerSample(); // 228
	VSoundV00_t::channels(); // 228
	VSoundV00_t::m_sampleFrameSize(); // 19024
} /* size: 67, variables: 2, inline expansions: 6 (85 bytes) */

// <0129DBBF> engine2/interop.engine.cpp:19027
// variables: 2
// function calls: 2
void VSound_t_m_rate(void* self)
{
	HSoundStrong* __handle; // 19030
	VSound_t* __self; // 19032
	CStrongHandle<InfoForResourceTypeVSound_t>::HasData(); // 19031
	VSoundV00_t::m_rate(); // 19034
} /* size: 35, variables: 2, inline expansions: 2 (19 bytes) */

// <0129DB02> engine2/interop.engine.cpp:19037
// variables: 2
// function calls: 2
void VSound_t_Duration(void* self)
{
	HSoundStrong* __handle; // 19040
	VSound_t* __self; // 19042
	CStrongHandle<InfoForResourceTypeVSound_t>::HasData(); // 19041
	VSoundV00_t::Duration(); // 19044
} /* size: 45, variables: 2, inline expansions: 2 (21 bytes) */

// <0129DAC8> engine2/interop.engine.cpp:19047
void WindowsGlue_FindFile(void)
{
} /* size: 22 */

// <01288394> engine2/interop.engine.cpp:19064
// variables: 2
// function call: 1
void Debug_Error(const char* string)
{
	const char   __FUNCTION__; // 46803
	{
		int* _pCrash; // 19066
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 19066
} /* size: 126, variables: 1, inline expansions: 1 (29 bytes) */

// <012811D9> engine2/interop.engine.cpp:19074
// variables: 156
// function calls: 154
void igen_engine(int hash, void** managedFunctions, void** nativeFunctions, int* structSizes)
{
	const char   __FUNCTION__; // 46803
	{
		int* _pCrash; // 19078
	}
	{
		int* _pCrash; // 21924
	}
	{
		int* _pCrash; // 21926
	}
	{
		int* _pCrash; // 21927
	}
	{
		int* _pCrash; // 21928
	}
	{
		int* _pCrash; // 21930
	}
	{
		int* _pCrash; // 21931
	}
	{
		int* _pCrash; // 21933
	}
	{
		int* _pCrash; // 21934
	}
	{
		int* _pCrash; // 21936
	}
	{
		int* _pCrash; // 21937
	}
	{
		int* _pCrash; // 21938
	}
	{
		int* _pCrash; // 21939
	}
	{
		int* _pCrash; // 21940
	}
	{
		int* _pCrash; // 21941
	}
	{
		int* _pCrash; // 21943
	}
	{
		int* _pCrash; // 21945
	}
	{
		int* _pCrash; // 21947
	}
	{
		int* _pCrash; // 21948
	}
	{
		int* _pCrash; // 21949
	}
	{
		int* _pCrash; // 21951
	}
	{
		int* _pCrash; // 21952
	}
	{
		int* _pCrash; // 21953
	}
	{
		int* _pCrash; // 21954
	}
	{
		int* _pCrash; // 21955
	}
	{
		int* _pCrash; // 21956
	}
	{
		int* _pCrash; // 21957
	}
	{
		int* _pCrash; // 21958
	}
	{
		int* _pCrash; // 21959
	}
	{
		int* _pCrash; // 21960
	}
	{
		int* _pCrash; // 21961
	}
	{
		int* _pCrash; // 21963
	}
	{
		int* _pCrash; // 21964
	}
	{
		int* _pCrash; // 21965
	}
	{
		int* _pCrash; // 21966
	}
	{
		int* _pCrash; // 21967
	}
	{
		int* _pCrash; // 21969
	}
	{
		int* _pCrash; // 21971
	}
	{
		int* _pCrash; // 21973
	}
	{
		int* _pCrash; // 21974
	}
	{
		int* _pCrash; // 21976
	}
	{
		int* _pCrash; // 21978
	}
	{
		int* _pCrash; // 21979
	}
	{
		int* _pCrash; // 21981
	}
	{
		int* _pCrash; // 21982
	}
	{
		int* _pCrash; // 21983
	}
	{
		int* _pCrash; // 21985
	}
	{
		int* _pCrash; // 21987
	}
	{
		int* _pCrash; // 21989
	}
	{
		int* _pCrash; // 21990
	}
	{
		int* _pCrash; // 21991
	}
	{
		int* _pCrash; // 21992
	}
	{
		int* _pCrash; // 21993
	}
	{
		int* _pCrash; // 21994
	}
	{
		int* _pCrash; // 21996
	}
	{
		int* _pCrash; // 21998
	}
	{
		int* _pCrash; // 21999
	}
	{
		int* _pCrash; // 22000
	}
	{
		int* _pCrash; // 22001
	}
	{
		int* _pCrash; // 22002
	}
	{
		int* _pCrash; // 22004
	}
	{
		int* _pCrash; // 22005
	}
	{
		int* _pCrash; // 22006
	}
	{
		int* _pCrash; // 22007
	}
	{
		int* _pCrash; // 22008
	}
	{
		int* _pCrash; // 22009
	}
	{
		int* _pCrash; // 22011
	}
	{
		int* _pCrash; // 22013
	}
	{
		int* _pCrash; // 22015
	}
	{
		int* _pCrash; // 22017
	}
	{
		int* _pCrash; // 22018
	}
	{
		int* _pCrash; // 22019
	}
	{
		int* _pCrash; // 22021
	}
	{
		int* _pCrash; // 22022
	}
	{
		int* _pCrash; // 22023
	}
	{
		int* _pCrash; // 22024
	}
	{
		int* _pCrash; // 22025
	}
	{
		int* _pCrash; // 22026
	}
	{
		int* _pCrash; // 22027
	}
	{
		int* _pCrash; // 22029
	}
	{
		int* _pCrash; // 22031
	}
	{
		int* _pCrash; // 22033
	}
	{
		int* _pCrash; // 22035
	}
	{
		int* _pCrash; // 22036
	}
	{
		int* _pCrash; // 22037
	}
	{
		int* _pCrash; // 22038
	}
	{
		int* _pCrash; // 22040
	}
	{
		int* _pCrash; // 22041
	}
	{
		int* _pCrash; // 22042
	}
	{
		int* _pCrash; // 22043
	}
	{
		int* _pCrash; // 22045
	}
	{
		int* _pCrash; // 22046
	}
	{
		int* _pCrash; // 22048
	}
	{
		int* _pCrash; // 22049
	}
	{
		int* _pCrash; // 22050
	}
	{
		int* _pCrash; // 22052
	}
	{
		int* _pCrash; // 22053
	}
	{
		int* _pCrash; // 22054
	}
	{
		int* _pCrash; // 22055
	}
	{
		int* _pCrash; // 22057
	}
	{
		int* _pCrash; // 22059
	}
	{
		int* _pCrash; // 22061
	}
	{
		int* _pCrash; // 22063
	}
	{
		int* _pCrash; // 22065
	}
	{
		int* _pCrash; // 22066
	}
	{
		int* _pCrash; // 22067
	}
	{
		int* _pCrash; // 22068
	}
	{
		int* _pCrash; // 22069
	}
	{
		int* _pCrash; // 22071
	}
	{
		int* _pCrash; // 22073
	}
	{
		int* _pCrash; // 22074
	}
	{
		int* _pCrash; // 22075
	}
	{
		int* _pCrash; // 22076
	}
	{
		int* _pCrash; // 22077
	}
	{
		int* _pCrash; // 22078
	}
	{
		int* _pCrash; // 22080
	}
	{
		int* _pCrash; // 22081
	}
	{
		int* _pCrash; // 22083
	}
	{
		int* _pCrash; // 22085
	}
	{
		int* _pCrash; // 22087
	}
	{
		int* _pCrash; // 22089
	}
	{
		int* _pCrash; // 22090
	}
	{
		int* _pCrash; // 22092
	}
	{
		int* _pCrash; // 22094
	}
	{
		int* _pCrash; // 22095
	}
	{
		int* _pCrash; // 22096
	}
	{
		int* _pCrash; // 22097
	}
	{
		int* _pCrash; // 22098
	}
	{
		int* _pCrash; // 22100
	}
	{
		int* _pCrash; // 22102
	}
	{
		int* _pCrash; // 22104
	}
	{
		int* _pCrash; // 22106
	}
	{
		int* _pCrash; // 22108
	}
	{
		int* _pCrash; // 22109
	}
	{
		int* _pCrash; // 22110
	}
	{
		int* _pCrash; // 22112
	}
	{
		int* _pCrash; // 22113
	}
	{
		int* _pCrash; // 22114
	}
	{
		int* _pCrash; // 22116
	}
	{
		int* _pCrash; // 22117
	}
	{
		int* _pCrash; // 22118
	}
	{
		int* _pCrash; // 22119
	}
	{
		int* _pCrash; // 22120
	}
	{
		int* _pCrash; // 22121
	}
	{
		int* _pCrash; // 22122
	}
	{
		int* _pCrash; // 22123
	}
	{
		int* _pCrash; // 22124
	}
	{
		int* _pCrash; // 22125
	}
	{
		int* _pCrash; // 22126
	}
	{
		int* _pCrash; // 22127
	}
	{
		int* _pCrash; // 22128
	}
	{
		int* _pCrash; // 22129
	}
	{
		int* _pCrash; // 22131
	}
	{
		int f; // 22135
		{
			int* _pCrash; // 22135
		}
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 22135
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 19078
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21924
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21926
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21927
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21928
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21930
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21931
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21933
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21934
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21936
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21937
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21938
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21939
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21940
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21941
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21943
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21945
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21947
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21948
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21949
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21951
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21952
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21953
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21954
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21955
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21956
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21957
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21958
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21959
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21960
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21961
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21963
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21964
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21965
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21966
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21967
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21969
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21971
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21973
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21974
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21976
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21978
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21979
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21981
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21982
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21983
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21985
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21987
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21989
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21990
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21991
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21992
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21993
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21994
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21996
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21998
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 21999
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22000
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22001
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22002
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22004
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22005
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22006
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22007
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22008
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22009
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22011
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22013
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22015
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22017
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22018
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22019
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22021
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22022
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22023
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22024
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22025
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22026
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22027
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22029
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22031
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22033
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22035
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22036
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22037
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22038
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22040
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22041
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22042
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22043
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22045
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22046
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22048
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22049
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22050
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22052
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22053
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22054
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22055
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22057
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22059
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22061
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22063
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22065
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22066
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22067
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22068
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22069
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22071
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22073
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22074
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22075
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22076
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22077
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22078
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22080
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22081
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22083
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22085
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22087
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22089
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22090
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22092
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22094
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22095
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22096
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22097
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22098
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22100
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22102
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22104
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22106
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22108
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22109
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22110
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22112
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22113
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22114
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22116
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22117
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22118
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22119
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22120
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22121
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22122
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22123
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22124
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22125
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22126
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22127
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22128
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22129
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 22131
} /* size: 61103, variables: 1, inline expansions: 153 (4437 bytes) */

// <012811BF> engine2/interop.engine.cpp:22225
void IsReady(void)
{
} /* size: 12 */

// <012811A5> engine2/interop.engine.cpp:22230
void Shutdown(void)
{
} /* size: 12 */

