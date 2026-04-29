
//
// engine2/inputservice.cpp
//
//	referenced by: libengine2.so
//
//	functions: 79
//

// <004C4AA5> engine2/inputservice.cpp:57
void* __CreateCInputServiceIEngineService_interface(void)
{
} /* size: 12 */

// <004C3102> engine2/inputservice.cpp:72
// function calls: 85
void CInputService::CInputService()
{
	IAppSystem::IAppSystem(); // 78
	IEngineService::IEngineService(); // 39
	IInputService::IInputService(); // 120
	CBaseAppSystem<IInputService>::CBaseAppSystem(); // 171
	CTier0AppSystem<IInputService, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IInputService, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<IInputService, 0>::CTier2AppSystem(); // 18
	CTier3AppSystem<IInputService, 0>::CTier3AppSystem(); // 149
	CBaseEngineService<IInputService>::CBaseEngineService(); // 72
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CInputService>::CConCommandMemberAccessor(
					CInputService* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 128
	CConCommandMemberAccessor<CInputService>::SetOwner(
		CInputService* pOwner);  // 128
	CCommandMemberInitializer_ListBoundKeys::CCommandMemberInitializer_ListBoundKeys(); // 72
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CInputService>::CConCommandMemberAccessor(
					CInputService* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 129
	CConCommandMemberAccessor<CInputService>::SetOwner(
		CInputService* pOwner);  // 129
	CCommandMemberInitializer_FindBinding::CCommandMemberInitializer_FindBinding(); // 72
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CInputService>::CConCommandMemberAccessor(
					CInputService* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 130
	CConCommandMemberAccessor<CInputService>::SetOwner(
		CInputService* pOwner);  // 130
	CCommandMemberInitializer_ExecConfigFile::CCommandMemberInitializer_ExecConfigFile(); // 72
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CInputService>::CConCommandMemberAccessor(
					CInputService* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 131
	CConCommandMemberAccessor<CInputService>::SetOwner(
		CInputService* pOwner);  // 131
	CCommandMemberInitializer_ExecConfigFileIfExists::CCommandMemberInitializer_ExecConfigFileIfExists(); // 72
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CInputService>::CConCommandMemberAccessor(
					CInputService* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 132
	CConCommandMemberAccessor<CInputService>::SetOwner(
		CInputService* pOwner);  // 132
	CCommandMemberInitializer_ExecConfigFileAsync::CCommandMemberInitializer_ExecConfigFileAsync(); // 72
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CInputService>::CConCommandMemberAccessor(
					CInputService* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 133
	CConCommandMemberAccessor<CInputService>::SetOwner(
		CInputService* pOwner);  // 133
	CCommandMemberInitializer_ExecPerfTest::CCommandMemberInitializer_ExecPerfTest(); // 72
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CInputService>::CConCommandMemberAccessor(
					CInputService* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 134
	CConCommandMemberAccessor<CInputService>::SetOwner(
		CInputService* pOwner);  // 134
	CCommandMemberInitializer_BindKey::CCommandMemberInitializer_BindKey(); // 72
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CInputService>::CConCommandMemberAccessor(
					CInputService* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 135
	CConCommandMemberAccessor<CInputService>::SetOwner(
		CInputService* pOwner);  // 135
	CCommandMemberInitializer_UnbindAll::CCommandMemberInitializer_UnbindAll(); // 72
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CInputService>::CConCommandMemberAccessor(
					CInputService* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 136
	CConCommandMemberAccessor<CInputService>::SetOwner(
		CInputService* pOwner);  // 136
	CCommandMemberInitializer_Unbind::CCommandMemberInitializer_Unbind(); // 72
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CInputService>::CConCommandMemberAccessor(
					CInputService* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 137
	CConCommandMemberAccessor<CInputService>::SetOwner(
		CInputService* pOwner);  // 137
	CCommandMemberInitializer_BindDefaults::CCommandMemberInitializer_BindDefaults(); // 72
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CInputService>::CConCommandMemberAccessor(
					CInputService* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 138
	CConCommandMemberAccessor<CInputService>::SetOwner(
		CInputService* pOwner);  // 138
	CCommandMemberInitializer_OnWriteKeyBindings::CCommandMemberInitializer_OnWriteKeyBindings(); // 72
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CInputService>::CConCommandMemberAccessor(
					CInputService* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 139
	CConCommandMemberAccessor<CInputService>::SetOwner(
		CInputService* pOwner);  // 139
	CCommandMemberInitializer_OnWriteConfig::CCommandMemberInitializer_OnWriteConfig(); // 72
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 79
	CUtlMemory<ButtonCode_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ButtonCode_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ButtonCode_t, CUtlMemory<ButtonCode_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ButtonCode_t, CUtlMemory<ButtonCode_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ButtonCode_t, CUtlMemory<ButtonCode_t, int> >::CUtlVector(); // 78
	KeyContext_t::KeyContext_t(); // 72
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::CUtlLeanVectorBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfigFile_ this); // 832
	CUtlLeanVector<CInputService::AsyncConfigFile_t, short int>::CUtlLeanVector(); // 72
} /* size: 1566, inline expansions: 85 (2958 bytes) */

// <004C30E9> engine2/inputservice.cpp:72
void CInputService::CInputService()
{
} /* size: 0 */

// <004C22F3> engine2/inputservice.cpp:80
// function calls: 63
void CInputService::~CInputService()
{
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 363
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 158
	AsyncConfigFile_t::~AsyncConfigFile_t(); // 1526
	Destruct<CInputService::AsyncConfigFile_t>(AsyncConfigFile_t* pMemory); // 76
	UtlTraitsDestructRange<CInputService::AsyncConfigFile_t>(AsyncConfigFile_t* pStart,
								AsyncConfigFile_t* pEnd);  // 364
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::RemoveAll(); // 371
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 374
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Purge(); // 270
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::~CUtlLeanVectorBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfigFile_ this); // 829
	CUtlLeanVector<CInputService::AsyncConfigFile_t, short int>::~CUtlLeanVector(); // 82
	CUtlVectorBase<ButtonCode_t, CUtlMemory<ButtonCode_t, int> >::RemoveAll(); // 1798
	CUtlMemory<ButtonCode_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ButtonCode_t, int>::Purge(); // 903
	CUtlMemory<ButtonCode_t, int>::Purge(); // 1799
	CUtlVectorBase<ButtonCode_t, CUtlMemory<ButtonCode_t, int> >::Purge(); // 560
	ValidateAlignment<ButtonCode_t>(void); // 508
	CUtlMemory<ButtonCode_t, int>::Purge(); // 510
	CUtlMemory<ButtonCode_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ButtonCode_t, CUtlMemory<ButtonCode_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ButtonCode_t, CUtlMemory<ButtonCode_t, int> >::~CUtlVector(); // 75
	KeyContext_t::~KeyContext_t(); // 82
	CConCommandMemberAccessor<CInputService>::~CConCommandMemberAccessor(); // 139
	CCommandMemberInitializer_OnWriteConfig::~CCommandMemberInitializer_OnWriteConfig(); // 82
	CConCommandMemberAccessor<CInputService>::~CConCommandMemberAccessor(); // 138
	CCommandMemberInitializer_OnWriteKeyBindings::~CCommandMemberInitializer_OnWriteKeyBindings(); // 82
	CConCommandMemberAccessor<CInputService>::~CConCommandMemberAccessor(); // 137
	CCommandMemberInitializer_BindDefaults::~CCommandMemberInitializer_BindDefaults(); // 82
	CConCommandMemberAccessor<CInputService>::~CConCommandMemberAccessor(); // 136
	CCommandMemberInitializer_Unbind::~CCommandMemberInitializer_Unbind(); // 82
	CConCommandMemberAccessor<CInputService>::~CConCommandMemberAccessor(); // 135
	CCommandMemberInitializer_UnbindAll::~CCommandMemberInitializer_UnbindAll(); // 82
	CConCommandMemberAccessor<CInputService>::~CConCommandMemberAccessor(); // 134
	CCommandMemberInitializer_BindKey::~CCommandMemberInitializer_BindKey(); // 82
	CConCommandMemberAccessor<CInputService>::~CConCommandMemberAccessor(); // 133
	CCommandMemberInitializer_ExecPerfTest::~CCommandMemberInitializer_ExecPerfTest(); // 82
	CConCommandMemberAccessor<CInputService>::~CConCommandMemberAccessor(); // 132
	CCommandMemberInitializer_ExecConfigFileAsync::~CCommandMemberInitializer_ExecConfigFileAsync(); // 82
	CConCommandMemberAccessor<CInputService>::~CConCommandMemberAccessor(); // 131
	CCommandMemberInitializer_ExecConfigFileIfExists::~CCommandMemberInitializer_ExecConfigFileIfExists(); // 82
	CConCommandMemberAccessor<CInputService>::~CConCommandMemberAccessor(); // 130
	CCommandMemberInitializer_ExecConfigFile::~CCommandMemberInitializer_ExecConfigFile(); // 82
	CConCommandMemberAccessor<CInputService>::~CConCommandMemberAccessor(); // 129
	CCommandMemberInitializer_FindBinding::~CCommandMemberInitializer_FindBinding(); // 82
	CConCommandMemberAccessor<CInputService>::~CConCommandMemberAccessor(); // 128
	CCommandMemberInitializer_ListBoundKeys::~CCommandMemberInitializer_ListBoundKeys(); // 82
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IInputService, 0>::~CTier2AppSystem(); // 18
	CTier3AppSystem<IInputService, 0>::~CTier3AppSystem(); // 167
	CBaseEngineService<IInputService>::~CBaseEngineService(); // 82
} /* size: 833, inline expansions: 63 (2624 bytes) */

// <004C228C> engine2/inputservice.cpp:80
void CInputService::~CInputService()
{
} /* size: 36 */

// <004C221E> engine2/inputservice.cpp:88
// variable: 1
void CInputService::GetServiceDependencies()
{
	EngineServiceDependencies_t s_Dependencies; // 90
} /* size: 12, variables: 1 */

// <004C21E1> engine2/inputservice.cpp:102
void CInputService::EnableKeyBindingSystem(bool bEnable)
{
} /* size: 12 */

// <004B638B> engine2/inputservice.cpp:112
// variables: 5
// function calls: 4
void CInputService::SetBindingForType<ButtonCode_t>(ButtonCode_t nCode, const char* pBinding, bool bIsDefaultBinding)
{
	const char   __FUNCTION__; // 37504
	char* pNewBinding; // 114
	int l; // 115
	BindingInfo_t& info; // 124
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 120
	}
	CInputService::GetBindingInfo(
			ButtonCode_t code);  // 124
	V_strcmp(const char* s1,
		const char* s2);  // 130
	V_strlen(const char* str); // 138
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 140
} /* size: 233, variables: 4, inline expansions: 4 (63 bytes) */

// <004D9591> engine2/inputservice.cpp:149
void CInputService::SetBinding(ButtonCode_t nCode, const char* pBinding, bool bIsDefaultBinding)
{
} /* size: 12 */

// <004C1FAA> engine2/inputservice.cpp:159
// variables: 2
// function calls: 4
void CInputService::Unbind(const CCommandContext& ctx, const CCommand& args)
{
	const char* pCode; // 173
	ButtonCode_t b; // 174
	CCommand::ArgC(); // 161
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 173
	CInputService::SetBinding(
			ButtonCode_t nCode,
			const char* pBinding,
			bool bIsDefaultBinding);  // 177
} /* size: 204, variables: 2, inline expansions: 4 (50 bytes) */

// <004D9D3A> engine2/inputservice.cpp:184
// function calls: 3
void CInputService::UnbindAll(const CCommandContext& ctx, const CCommand& args)
{
	CCommand::ArgC(); // 186
	CInputService::UnbindAllKeys(); // 192
	CInputService::UnbindAll(
			const CCommandContext& ctx,
			const CCommand& args);  // 184
} /* size: 66, inline expansions: 3 (33 bytes) */

// <004C1F79> engine2/inputservice.cpp:184
void CInputService::UnbindAll(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 0 */

// <004B6182> engine2/inputservice.cpp:201
// variables: 2
// function calls: 2
void CInputService::BindKeyHelper<ButtonCode_t>(const char* pCodeName, const char* pBinding)
{
	ButtonCode_t b; // 203
	const char* pKeyName; // 214
	IInputSystem::StringToCode<ButtonCode_t>(
					const char* pString);  // 203
	CInputService::SetBinding(
			ButtonCode_t nCode,
			const char* pBinding,
			bool bIsDefaultBinding);  // 210
} /* size: 223, variables: 2, inline expansions: 2 (28 bytes) */

// <004C1BF2> engine2/inputservice.cpp:228
// variables: 4
// function calls: 9
void CInputService::BindKey(const CCommandContext& ctx, const CCommand& args)
{
	int c; // 230
	char cmd; // 244
	const char* pCmd; // 254
	{
		int i; // 246
		V_strncat<long unsigned int>(char* pDest,
						const char* pSrc,
						long unsigned int maxLenInChars,
						int nMaxCharsToCopy);  // 250
		CCommand::Arg(
			int nIndex);  // 189
		CCommand::operator[](
				int nIndex);  // 252
		V_strncat<long unsigned int>(char* pDest,
						const char* pSrc,
						long unsigned int maxLenInChars,
						int nMaxCharsToCopy);  // 252
	}
	CCommand::ArgC(); // 230
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 255
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 258
} /* size: 397, variables: 3, inline expansions: 5 (123 bytes) */

// <004C1A91> engine2/inputservice.cpp:261
// function calls: 2
void CInputService::BindDefaults(const CCommandContext& ctx, const CCommand& args)
{
	CCommand::ArgC(); // 263
	CInputService::UnbindAllKeys(); // 281
} /* size: 182, inline expansions: 2 (8 bytes) */

// <004C19EC> engine2/inputservice.cpp:287
// function call: 1
void CInputService::OnWriteKeyBindings(const CCommandContext& ctx, const CCommand& args)
{
	CInputService::SaveKeyBindingsToFile(); // 289
} /* size: 34, inline expansions: 1 (30 bytes) */

// <004C1949> engine2/inputservice.cpp:292
void CInputService::OnWriteConfig(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 83 */

// <004B5D92> engine2/inputservice.cpp:302
// variables: 3
// function call: 1
void CInputService::UnbindAllKeysForType<ButtonCode_t>()
{
	{
		int i; // 304
		{
			ButtonCode_t nCode; // 306
			ButtonCode_t b; // 308
			CInputService::SetBinding(
					ButtonCode_t nCode,
					const char* pBinding,
					bool bIsDefaultBinding);  // 309
		}
	}
} /* size: 102 */

// <004D9616> engine2/inputservice.cpp:313
void CInputService::UnbindAllKeys()
{
} /* size: 9 */

// <004D8280> engine2/inputservice.cpp:323
void CInputService::GetSubkeyNameForType<ButtonCode_t>()
{
} /* size: 0 */

// <004B5E9C> engine2/inputservice.cpp:325
// variables: 7
// function calls: 3
void CInputService::ApplyBindings<ButtonCode_t>(KeyValues* pKeyValues, bool bIsDefaultBinding)
{
	const char* pSubkeyName; // 327
	KeyValues* pBindingKeys; // 330
	{
		KeyValues* pBindKey; // 334
		{
			const char* pKeyName; // 336
			const char* pBindString; // 337
			ButtonCode_t nCode; // 338
			ButtonCode_t nJoyCode; // 344
			CInputService::SetBinding(
					ButtonCode_t nCode,
					const char* pBinding,
					bool bIsDefaultBinding);  // 350
			IInputSystem::StringToCode<ButtonCode_t>(
							const char* pString);  // 338
		}
	}
	CInputService::GetSubkeyNameForType<ButtonCode_t>(); // 327
} /* size: 321, variables: 2, inline expansions: 1 (0 bytes) */

// <004C172B> engine2/inputservice.cpp:358
// variables: 2
// function call: 1
void CInputService::ReadKeyBindings(CUtlBuffer& buf)
{
	KeyValues* pKeyValues; // 365
	bool bOk; // 366
	CInputService::UnbindAllKeys(); // 374
} /* size: 295, variables: 2, inline expansions: 1 (8 bytes) */

// <004C16A3> engine2/inputservice.cpp:399
// function call: 1
bool CVarSortFunc(ConVar* const& lhs, ConVar* const& rhs)
{
	FastCaselessStringLessThan(const char* const& lhs,
					const char* const& rhs);  // 401
} /* size: 87, inline expansions: 1 (31 bytes) */

// <004B5CC7> engine2/inputservice.cpp:404
// variables: 11
void CInputService::WriteKeyBindingsForType<ButtonCode_t>(CUtlBuffer& buf, KeyValues* pKeyValues)
{
	const char* pSubkeyName; // 406
	KeyValues* pBindingKeys; // 407
	KeyValues* pDefBindingKeys; // 408
	{
		int i; // 409
		{
			ButtonCode_t nCode; // 411
			int nSlot; // 413
			const char* pKeyName; // 416
			BindingInfo_t& info; // 422
			const char* pBinding; // 423
			bool bNeedsBinding; // 426
			KeyValues* pExisting; // 427
		}
	}
} /* size: 0, variables: 3 */

// <004C1348> engine2/inputservice.cpp:462
// variables: 9
// function calls: 3
void CInputService::WriteKeyBindings(CUtlBuffer& buf)
{
	KeyValues* pKeyValues; // 469
	CInputService::GetSubkeyNameForType<ButtonCode_t>(); // 406
	{
		int i; // 409
		{
			ButtonCode_t nCode; // 411
			int nSlot; // 413
			const char* pKeyName; // 416
			BindingInfo_t& info; // 422
			const char* pBinding; // 423
			bool bNeedsBinding; // 426
			KeyValues* pExisting; // 427
			CInputService::GetBindingInfo(
					ButtonCode_t code);  // 422
		}
	}
	CInputService::WriteKeyBindingsForType<ButtonCode_t>(
						CUtlBuffer& buf,
						KeyValues* pKeyValues);  // 477
} /* size: 511, variables: 1, inline expansions: 2 (328 bytes) */

// <004C1327> engine2/inputservice.cpp:490
inline char* StripSpecialBindCharacters(char* pBinding)
{
} /* size: 0 */

// <004C1119> engine2/inputservice.cpp:503
// variable: 1
// function calls: 4
void CInputService::FindBindingSubstringMatch(char* pBinding, const char* pBindSubString)
{
	char szBinding; // 516
	strchr(char* __s,
		int __c);  // 508
	V_strcpy_safe<256>(char& pDest,
				const char* pSrc);  // 517
	StripSpecialBindCharacters(char* pBinding); // 521
	StripSpecialBindCharacters(char* pBinding); // 511
} /* size: 318, variables: 1, inline expansions: 4 (112 bytes) */

// <004B5C2E> engine2/inputservice.cpp:529
// variables: 5
void CInputService::FindSubstringMatchForType<ButtonCode_t>(const char* pBinding, int iStartCount, int iAllowJoystick, int& iCount)
{
	{
		int i; // 531
		{
			ButtonCode_t nCode; // 533
			bool bIsJoystickCode; // 536
			char* pTestBinding; // 547
			{
				const char* pKeyName; // 553
			}
		}
	}
} /* size: 0 */

// <004C0F5A> engine2/inputservice.cpp:562
// variables: 7
// function calls: 3
void CInputService::Key_NameForBinding(const char* pBinding, int iStartCount, int iAllowJoystick)
{
	int iCount; // 569
	const char* pMatch; // 570
	StripSpecialBindCharacters(char* pBinding); // 567
	{
		int i; // 531
		{
			ButtonCode_t nCode; // 533
			bool bIsJoystickCode; // 536
			char* pTestBinding; // 547
			{
				const char* pKeyName; // 553
			}
			IsJoystickCode(ButtonCode_t code); // 536
		}
	}
	CInputService::FindSubstringMatchForType<ButtonCode_t>(
						const char* pBinding,
						int iStartCount,
						int iAllowJoystick,
						int& iCount);  // 570
} /* size: 268, variables: 2, inline expansions: 2 (184 bytes) */

// <004D75DE> engine2/inputservice.cpp:574
// variable: 1
// function call: 1
void CInputService::GetBinding(ButtonCode_t code)
{
	const BindingInfo_t& info; // 578
	CInputService::GetBindingInfo(
			ButtonCode_t code);  // 578
} /* size: 44, variables: 1, inline expansions: 1 (0 bytes) */

// <004C0F27> engine2/inputservice.cpp:574
// variable: 1
void CInputService::GetBinding(ButtonCode_t code)
{
	const BindingInfo_t& info; // 578
} /* size: 0, variables: 1 */

// <004B5ADB> engine2/inputservice.cpp:583
// variables: 5
// function calls: 2
void CInputService::ListBoundKeysForType<ButtonCode_t>()
{
	{
		int i; // 585
		{
			ButtonCode_t nCode; // 587
			ButtonCode_t nBaseCode; // 589
			const char* pBinding; // 590
			const char* pCodeName; // 594
			GetBaseCode(ButtonCode_t code); // 589
			CInputService::GetBinding(
					ButtonCode_t code);  // 590
		}
	}
} /* size: 256 */

// <004D9E67> engine2/inputservice.cpp:599
// function calls: 2
void CInputService::ListBoundKeys(const CCommandContext& ctx, const CCommand& args)
{
	CCommand::ArgC(); // 601
	CInputService::ListBoundKeys(
			const CCommandContext& ctx,
			const CCommand& args);  // 599
} /* size: 62, inline expansions: 2 (14 bytes) */

// <004C0EF4> engine2/inputservice.cpp:599
void CInputService::ListBoundKeys(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 0 */

// <004B58D8> engine2/inputservice.cpp:617
// variables: 5
// function calls: 4
void CInputService::FindBindingForType<ButtonCode_t>(const char* pSubString)
{
	{
		int i; // 619
		{
			ButtonCode_t nCode; // 621
			ButtonCode_t nBaseCode; // 623
			const char* pBinding; // 624
			const char* pButtonCodeString; // 631
			GetBaseCode(ButtonCode_t code); // 623
			CInputService::GetBinding(
					ButtonCode_t code);  // 624
			strstr(const char* __haystack,
				const char* __needle);  // 247
			V_strstr(const char* s1,
				const char* search);  // 628
		}
	}
} /* size: 280 */

// <004D9F88> engine2/inputservice.cpp:636
// variable: 1
// function calls: 4
void CInputService::FindBinding(const CCommandContext& ctx, const CCommand& args)
{
	const char* pSubString; // 650
	CCommand::ArgC(); // 638
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 650
	CInputService::FindBinding(
			const CCommandContext& ctx,
			const CCommand& args);  // 636
} /* size: 110, variables: 1, inline expansions: 4 (28 bytes) */

// <004C0EB4> engine2/inputservice.cpp:636
// variable: 1
void CInputService::FindBinding(const CCommandContext& ctx, const CCommand& args)
{
	const char* pSubString; // 650
} /* size: 0, variables: 1 */

// <004C0CFB> engine2/inputservice.cpp:660
// variable: 1
bool IsValidFileExtension(const char* pszFilename)
{
	const char* pExt; // 663
} /* size: 210, variables: 1 */

// <004C0CDA> engine2/inputservice.cpp:681
bool IsValidPath(const char* pszFilename)
{
} /* size: 0 */

// <004C06AE> engine2/inputservice.cpp:699
// variables: 2
// function calls: 9
void CInputService::ReadConfigFile(const char* pCommand, const char* pFile, const char* pPathID, bool bAllowMissingFiles, CUtlBuffer& buf)
{
	char fileName; // 702
	{
		uint64 size; // 724
	}
	V_DefaultExtension<long unsigned int>(char* path,
						const char* extension,
						long unsigned int pathStringLength);  // 704
	V_strlen(const char* str); // 688
	strstr(const char* __haystack,
		const char* __needle);  // 247
	V_strstr(const char* s1,
		const char* search);  // 689
	strstr(const char* __haystack,
		const char* __needle);  // 247
	V_strstr(const char* s1,
		const char* search);  // 690
	strstr(const char* __haystack,
		const char* __needle);  // 247
	V_strstr(const char* s1,
		const char* search);  // 691
	IsValidPath(const char* pszFilename); // 707
} /* size: 833, variables: 1, inline expansions: 9 (233 bytes) */

// <004C0627> engine2/inputservice.cpp:750
void CInputService::ExecConfigFile(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 11 */

// <004C05A0> engine2/inputservice.cpp:755
void CInputService::ExecConfigFileIfExists(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 14 */

// <004C00A3> engine2/inputservice.cpp:763
// variables: 5
// function calls: 16
void CInputService::ExecConfigFile_Internal(const CCommandContext& ctx, const CCommand& args, bool bAllowMissingFiles)
{
	int argc; // 765
	const char* pScriptFileName; // 772
	const char* pPathID; // 775
	CUtlBuffer buf; // 777
	const char* bufBase; // 785
	CCommand::ArgC(); // 765
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 772
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 775
	CCommand::Arg(
		int nIndex);  // 778
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 790
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 785
	CInputService::InsertCommand(
			const char* pText);  // 788
	CCommand::Arg(
		int nIndex);  // 768
} /* size: 474, variables: 5, inline expansions: 16 (267 bytes) */

// <004DA14F> engine2/inputservice.cpp:797
// variables: 3
// function calls: 8
void CInputService::ExecConfigFileAsync(const CCommandContext& ctx, const CCommand& args)
{
	int argc; // 799
	const char* pScriptFileName; // 806
	const char* pPathID; // 809
	CCommand::ArgC(); // 799
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 806
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 809
	CCommand::Arg(
		int nIndex);  // 811
	CCommand::Arg(
		int nIndex);  // 802
	CInputService::ExecConfigFileAsync(
				const CCommandContext& ctx,
				const CCommand& args);  // 797
} /* size: 150, variables: 3, inline expansions: 8 (121 bytes) */

// <004C0049> engine2/inputservice.cpp:797
// variables: 3
void CInputService::ExecConfigFileAsync(const CCommandContext& ctx, const CCommand& args)
{
	int argc; // 799
	const char* pScriptFileName; // 806
	const char* pPathID; // 809
} /* size: 0, variables: 3 */

// <004DA3F9> engine2/inputservice.cpp:814
// function calls: 4
void CInputService::ExecPerfTest(const CCommandContext& ctx, const CCommand& args)
{
	CCommand::ArgC(); // 816
	CCommand::Arg(
		int nIndex);  // 818
	CInputService::ExecPerfTest(
			const CCommandContext& ctx,
			const CCommand& args);  // 814
	CCommand::Arg(
		int nIndex);  // 822
} /* size: 134, inline expansions: 4 (90 bytes) */

// <004C0016> engine2/inputservice.cpp:814
void CInputService::ExecPerfTest(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 0 */

// <004BFB9E> engine2/inputservice.cpp:825
// variables: 4
// function calls: 16
void CInputService::ExecConfigFileAsyncAndWait(int nAsyncIndex, const CCommand& args)
{
	int argc; // 827
	const char* pScriptFileName; // 841
	const char* pPathID; // 844
	int nNewScriptIdx; // 846
	CCommand::ArgC(); // 827
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfigFile_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfigFile_ this,
			int i);  // 835
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 841
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 844
	CCommand::Arg(
		int nIndex);  // 846
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfigFile_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfigFile_ this,
			int i);  // 847
	CCommand::Arg(
		int nIndex);  // 837
	CCommand::Arg(
		int nIndex);  // 830
} /* size: 281, variables: 4, inline expansions: 16 (268 bytes) */

// <004BF8CE> engine2/inputservice.cpp:850
// variables: 2
// function calls: 9
void CInputService::ExecAsyncSleep(int nAsyncIndex, const CCommand& args)
{
	int argc; // 852
	int nMillis; // 859
	CCommand::ArgC(); // 852
	CCommand::Arg(
		int nIndex);  // 855
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 859
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfigFile_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfigFile_ this,
			int i);  // 862
	CCommand::Arg(
		int nIndex);  // 866
} /* size: 252, variables: 2, inline expansions: 9 (134 bytes) */

// <004BF1BC> engine2/inputservice.cpp:877
// variables: 6
// function calls: 22
void CInputService::AddAsyncConfigFile(const char* pCommand, const char* pScriptFileName, const char* pPathID)
{
	CUtlBuffer buf; // 879
	int nIndex; // 885
	AsyncConfigFile_t* pEntry; // 886
	{
		int* _pCrash; // 313
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 313
	{
		ElemType_t* pNew; // 347
		ElemType_t* pBase; // 348
		CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 348
		Min<short int>(const short int& val1,
				const short int& val2);  // 349
	}
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 629
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 630
	AsyncConfigFile_t::AsyncConfigFile_t(); // 1479
	Construct<CInputService::AsyncConfigFile_t>(AsyncConfigFile_t* pMemory); // 63
	UtlTraitsConstructRange<CInputService::AsyncConfigFile_t>(AsyncConfigFile_t* pStart,
									AsyncConfigFile_t* pEnd);  // 631
	AddToTailGetPtr(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfigFile_ this); // 660
	AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfigFile_ this); // 885
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfigFile_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfigFile_ this,
			int i);  // 886
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 891
} /* size: 776, variables: 3, inline expansions: 19 (1737 bytes) */

// <004BE8DD> engine2/inputservice.cpp:893
// variables: 3
// function calls: 38
void CInputService::RemoveAsyncConfigFile(int nIndex)
{
	{
		int i; // 902
		{
			AsyncConfigFile_t& async; // 904
			CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 279
			CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 447
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfigFile_ this,
				int i);  // 438
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfigFile_ this,
					int i);  // 904
		}
		Count(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfi this); // 902
	}
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 707
	CUtlBuffer::TellGet(); // 181
	CUtlBuffer::TellPut(); // 1597
	CUtlMemory<unsigned char, int>::Base(); // 1479
	CUtlBuffer::Base(); // 1597
	CUtlBuffer::Clear(); // 1602
	CUtlBuffer::CopyBuffer(
			const void* pubData,
			int cubData);  // 1600
	CUtlBuffer::CopyBuffer(
			const void* pubData,
			int cubData);  // 1597
	CUtlBuffer::CopyBuffer(
			const CUtlBuffer& buffer);  // 180
	AsyncConfigFile_t::operator=(
			const AsyncConfigFile_t& other);  // 162
	{
		AsyncConfigFile_t* pToEnd; // 149
		CUtlBuffer::TellGet(); // 181
		CUtlMemory<unsigned char, int>::Base(); // 1479
		CUtlBuffer::Base(); // 1597
		CUtlBuffer::TellPut(); // 1597
		CUtlBuffer::Clear(); // 1602
		CUtlBuffer::CopyBuffer(
				const void* pubData,
				int cubData);  // 1600
		CUtlBuffer::CopyBuffer(
				const void* pubData,
				int cubData);  // 1597
		CUtlBuffer::CopyBuffer(
				const CUtlBuffer& buffer);  // 180
		AsyncConfigFile_t::operator=(
				const AsyncConfigFile_t& other);  // 155
	}
	UtlTraitsMoveRange<CInputService::AsyncConfigFile_t>(AsyncConfigFile_t* pFrom,
								AsyncConfigFile_t* pFromEnd,
								AsyncConfigFile_t* pTo);  // 140
	UtlTraitsMoveRange<CInputService::AsyncConfigFile_t>(AsyncConfigFile_t* pFrom,
								AsyncConfigFile_t* pFromEnd,
								AsyncConfigFile_t* pTo);  // 709
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 158
	AsyncConfigFile_t::~AsyncConfigFile_t(); // 1526
	Destruct<CInputService::AsyncConfigFile_t>(AsyncConfigFile_t* pMemory); // 76
	UtlTraitsDestructRange<CInputService::AsyncConfigFile_t>(AsyncConfigFile_t* pStart,
								AsyncConfigFile_t* pEnd);  // 711
	RemoveMultiple(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfigFile_ this,
			int nIdx,
			int nRemove);  // 717
	Remove(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfigFile_ this,
		int nIdx);  // 900
} /* size: 638, inline expansions: 24 (2070 bytes) */

// <004BE6B4> engine2/inputservice.cpp:918
// variables: 4
// function calls: 4
void CInputService::FindAsyncCommand(int nAsyncIndex, const char* pString)
{
	const char* pScan; // 920
	int nPrefixLen; // 930
	{
		int i; // 936
		{
			CCommand tokens; // 941
			CCommand::Reset(); // 108
			CCommand::CCommand(); // 941
		}
		V_strlen(const char* str); // 938
		V_strnicmp_fast<int>(const char* s1,
					const char* s2,
					int n);  // 939
	}
} /* size: 415, variables: 2 */

// <004BE3B8> engine2/inputservice.cpp:951
// variables: 4
// function calls: 8
void CInputService::ProcessAsyncConfigFiles()
{
	uint64 nCurTicks; // 953
	int nEntry; // 955
	{
		AsyncConfigFile_t* pEntry; // 958
		{
			char line; // 962
			CUtlBuffer::GetLine<1000>(
					char& pLine);  // 965
			CUtlBuffer::IsValid(); // 966
			CInputService::InsertCommand(
					const char* pText);  // 977
		}
		CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfigFile_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfigFile_ this,
				int i);  // 958
	}
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>, CInputService::AsyncConfi this); // 955
} /* size: 334, variables: 2, inline expansions: 1 (11 bytes) */

// <004BE0C8> engine2/inputservice.cpp:989
// variables: 3
// function calls: 6
void CInputService::LoadDefaultKeysConfig(const char* pchFileName)
{
	CUtlBuffer buf; // 991
	{
		KeyValues* pKeyValues; // 994
		bool bOk; // 995
	}
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1017
} /* size: 329, variables: 1, inline expansions: 6 (83 bytes) */

// <004BD615> engine2/inputservice.cpp:1023
// variables: 5
// function calls: 41
void CInputService::Init()
{
	InitReturnVal_t nRetVal; // 1025
	bool bNoKeyBindings; // 1041
	const char   __FUNCTION__; // 37168
	{
		bool bLoadedDevConfig; // 1044
		{
			int* _pCrash; // 1064
		}
		CAppSystemDict::IsInDeveloperMode(); // 115
		CTier1Application::IsInDeveloperMode(); // 1045
		CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
		ClosurePtr<bool (detail::GenericClass::::ClosurePtr()(char const*), bool (*)(char const*), bool (*)(char const*)>* this); // 1112
		implicit_cast<CInputService*, CInputService*>(CInputService* inputVal); // 1113
		CInputService::Convert<CInputService, bool (
														bool ()(CInputService *, const char *) CInputService::* function_to_bind,
														void ()(GenericClass *) GenericClass::*& bound_func);  // 746
		ClosurePtr<bool (detail::GenericClass::::bindmemfunc<CInputService, bool (
										CInputService* pthis,
										bool ()(CInputService *, const char *) CInputService::* function_to_bind);  // 1113
		FastDelegate1<char const::FastDelegate1<CInputService, CInputService>(
								CInputService* pthis,
								DesiredRetType ()(CInputService *, const char *) CInputService::* function_to_bind);  // 2164
		CUtlDelegate<bool(char const::CUtlDelegate<CInputService, CInputService>(
								CInputService* pthis,
								bool ()(CInputService *, const char *) CInputService::* function_to_bind);  // 2519
		UtlMakeDelegate<CInputService, CInputService, char const*, bool>(CInputService* x,
										bool ()(CInputService *, const char *) CInputService::* func);  // 1055
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 1064
	}
	CTier0AppSystem<IInputService, 0>::Init(); // 71
	CTier2AppSystem<IInputService, 0>::Init(); // 1025
	GetPrimaryBinding(void); // 57
	Schema_StaticBinding(void); // 237
	GetEventID(void); // 1070
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(const EventProfileStorageAvailable_t&), void (*)(const EventProfileStorag this); // 1112
	implicit_cast<CInputService*, CInputService*>(CInputService* inputVal); // 1113
	CInputService::Convert<CInputService, void (
																void ()(CInputService *, const EventProfileStorageAvailable_t &) CInputService::* function_to_bind,
																void ()(GenericClass *) GenericClass::*& bound_func);  // 746
	ClosurePtr<void (detail::GenericClass::::bindmemfunc<CInputService, void (
													CInputService* pthis,
													void ()(CInputService *, const EventProfileStorageAvailable_t &) CInputService::* function_to_bind);  // 1113
	FastDelegate1<const EventProfileStorageAvailable_t&, void>::FastDelegate1<CInputService, CInputService>(
							CInputService* pthis,
							void ()(CInputService *, const EventProfileStorageAvailable_t &) CInputService::* function_to_bind);  // 2164
	CUtlDelegate<void(const EventProfileStorageAvailable_t&)>::CUtlDelegate<CInputService, CInputService>(
							CInputService* pthis,
							void ()(CInputService *, const EventProfileStorageAvailable_t &) CInputService::* function_to_bind); // 2519
	UtlMakeDelegate<CInputService, CInputService, const EventProfileStorageAvailable_t&, void>(CInputService* x,
													void ()(CInputService *, const EventProfileStorageAvailable_t &) CInputService::* func);  // 1070
	FastDelegate1<const EventProfileStorageAvailable_t&, void>::GetAbstractDelegate(); // 595
	CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1>::RegisterEventListener(
				const CUtlDelegate<void(const EventProfileStorageAvailable_t&)>& listener,
				int nPriority,
				const char* pszName,
				EventID_t EventID);  // 1070
	GetPrimaryBinding(void); // 341
	Schema_StaticBinding(void); // 237
	GetEventID(void); // 1071
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(const EventAppShutdown_t&), void (*)(const EventAppShutdown_t&), void (*) this); // 1112
	implicit_cast<CInputService*, CInputService*>(CInputService* inputVal); // 1113
	CInputService::Convert<CInputService, void (
															void ()(CInputService *, const EventAppShutdown_t &) CInputService::* function_to_bind,
															void ()(GenericClass *) GenericClass::*& bound_func);  // 746
	ClosurePtr<void (detail::GenericClass::::bindmemfunc<CInputService, void (
											CInputService* pthis,
											void ()(CInputService *, const EventAppShutdown_t &) CInputService::* function_to_bind);  // 1113
	FastDelegate1<const EventAppShutdown_t&, void>::FastDelegate1<CInputService, CInputService>(
							CInputService* pthis,
							void ()(CInputService *, const EventAppShutdown_t &) CInputService::* function_to_bind);  // 2164
	CUtlDelegate<void(const EventAppShutdown_t&)>::CUtlDelegate<CInputService, CInputService>(
							CInputService* pthis,
							void ()(CInputService *, const EventAppShutdown_t &) CInputService::* function_to_bind); // 2519
	UtlMakeDelegate<CInputService, CInputService, const EventAppShutdown_t&, void>(CInputService* x,
											void ()(CInputService *, const EventAppShutdown_t &) CInputService::* func);  // 1071
	FastDelegate1<const EventAppShutdown_t&, void>::GetAbstractDelegate(); // 595
	CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1>::RegisterEventListener(
				const CUtlDelegate<void(const EventAppShutdown_t&)>& listener,
				int nPriority,
				const char* pszName,
				EventID_t EventID);  // 1071
} /* size: 713, variables: 3, inline expansions: 28 (467 bytes) */

// <004BCA70> engine2/inputservice.cpp:1079
// variables: 12
// function calls: 46
void CInputService::SaveConvarState()
{
	CUtlBuffer* pConvarOutput; // 1082
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 1085
	CUtlBuffer::TellMaxPut(); // 1085
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1085
	_M_ptr(const __uniq_ptr_impl<IAsyncFileSystem2::IWriteRequestBuilder, std::default_delete<IAsyncFileSystem2::IWriteRequest this); // 472
	get(const unique_ptr<IAsyncFileSystem2::IWriteRequestBuilder, std::default_delete<IAsyncFileSystem2::IWriteRequestBuild this); // 465
	operator->(const unique_ptr<IAsyncFileSystem2::IWriteRequestBuilder, std::default_delete<IAsyncFileSystem2::IWriteRequestBuild this); // 1086
	{
		_M_create<CInputService::SaveConvarState()::<lambda(void const*)> >(union _Any_data& __dest,
											class& __f,
											true_type); // 217
		_M_init_functor<CInputService::SaveConvarState()::<lambda(void const*)> >(union _Any_data& __functor,
												class& __f); // 451
		_M_not_empty_function<CInputService::SaveConvarState()::<lambda(void const*)> >(const &); // 449
	}
	_Function_base::_Function_base(); // 439
	function<void(void const::function<CInputService::SaveConvarState(
										class& __f);  // 1086
	swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>(bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __a,
											bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __b); // 561
	swap<std::_Any_data>(union _Any_data& __a,
				union _Any_data& __b);  // 560
	swap<void (*)(const std::_Any_data&, void const*&&)>(void ()(const union _Any_data &, const void* &) *& __a,
								void ()(const union _Any_data &, const void* &) *& __b); // 562
	function<void(void const::swap(
		function<void(void const*)>& __x);  // 491
	_Function_base::_Function_base(); // 407
	function<void(void const::operator bool()>* this); // 409
	function<void(void const::function(
		function<void(void const*)>& __x);  // 491
	_Function_base::~_Function_base(); // 336
	function<void(void const::~function()>* this); // 491
	function<void(void const::operator=(
			function<void(void const*)>& __x);  // 351
	IWriteRequestBuilder::SetFreeBufferCallback(
				function<void(void const*)>& freeFunction);  // 1086
	__shared_ptr<IAsyncWriteRequest2, (__gnu_cxx::_Lock_policy)2>::get()2>* this); // 1370
	__shared_ptr_access<IAsyncWriteRequest2, (__gnu_cxx::_Lock_policy)2, false, false>::_M_get()2, false, false>* this); // 1364
	__shared_ptr_access<IAsyncWriteRequest2, (__gnu_cxx::_Lock_policy)2, false, false>::operator->()2, false, false>* this); // 1088
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 349
	}
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy()2>* this); // 346
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<IAsyncWriteRequest2, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<IAsyncWriteRequest2>::~shared_ptr(); // 1087
	_Function_base::~_Function_base(); // 336
	function<void(void const::~function()>* this); // 1086
	{
		IWriteRequestBuilder *& __ptr; // 396
		_M_ptr(const __uniq_ptr_impl<IAsyncFileSystem2::IWriteRequestBuilder, std::default_delete<IAsyncFileSystem2::IWriteRequestBuilde this); // 396
		get_deleter(const unique_ptr<IAsyncFileSystem2::IWriteRequestBuilder, std::default_delete<IAsyncFileSystem2::IWriteRequestBuilder> > this); // 398
		default_delete<IAsyncFileSystem2::IWriteRequestBuilder>::operator(
				IWriteRequestBuilder* __ptr);  // 398
	}
	~unique_ptr(const unique_ptr<IAsyncFileSystem2::IWriteRequestBuilder, std::default_delete<IAsyncFileSystem2::IWriteRequestBuilder> > this); // 1085
	CUtlString::~CUtlString(); // 1085
} /* size: 714, variables: 1, inline expansions: 33 (1357 bytes) */

// <004D82AB> engine2/inputservice.cpp:1091
void CInputService::SaveKeyBindingsToFile()
{
} /* size: 0 */

// <004BC66A> engine2/inputservice.cpp:1096
// function calls: 17
void CInputService::OnAppShutdown(const EventAppShutdown_t& msg)
{
	GetPrimaryBinding(void); // 341
	Schema_StaticBinding(void); // 237
	GetEventID(void); // 1098
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(const EventAppShutdown_t&), void (*)(const EventAppShutdown_t&), void (*) this); // 1112
	implicit_cast<CInputService*, CInputService*>(CInputService* inputVal); // 1113
	CInputService::Convert<CInputService, void (
															void ()(CInputService *, const EventAppShutdown_t &) CInputService::* function_to_bind,
															void ()(GenericClass *) GenericClass::*& bound_func);  // 746
	ClosurePtr<void (detail::GenericClass::::bindmemfunc<CInputService, void (
											CInputService* pthis,
											void ()(CInputService *, const EventAppShutdown_t &) CInputService::* function_to_bind);  // 1113
	FastDelegate1<const EventAppShutdown_t&, void>::FastDelegate1<CInputService, CInputService>(
							CInputService* pthis,
							void ()(CInputService *, const EventAppShutdown_t &) CInputService::* function_to_bind);  // 2164
	CUtlDelegate<void(const EventAppShutdown_t&)>::CUtlDelegate<CInputService, CInputService>(
							CInputService* pthis,
							void ()(CInputService *, const EventAppShutdown_t &) CInputService::* function_to_bind); // 2519
	UtlMakeDelegate<CInputService, CInputService, const EventAppShutdown_t&, void>(CInputService* x,
											void ()(CInputService *, const EventAppShutdown_t &) CInputService::* func);  // 1098
	FastDelegate1<const EventAppShutdown_t&, void>::GetAbstractDelegate(); // 600
	CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1>::UnregisterEventListener(
				const CUtlDelegate<void(const EventAppShutdown_t&)>& listener,
				EventID_t EventID);  // 1098
	CAppSystemDict::IsConsoleApp(); // 130
	CTier1Application::IsConsoleApp(); // 1100
	CInputService::SaveKeyBindingsToFile(); // 1106
} /* size: 273, inline expansions: 16 (237 bytes) */

// <004BBF84> engine2/inputservice.cpp:1111
// variable: 1
// function calls: 31
void CInputService::Shutdown()
{
	{
		int i; // 1116
	}
	GetPrimaryBinding(void); // 57
	Schema_StaticBinding(void); // 237
	GetEventID(void); // 1114
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(const EventProfileStorageAvailable_t&), void (*)(const EventProfileStorag this); // 1112
	implicit_cast<CInputService*, CInputService*>(CInputService* inputVal); // 1113
	CInputService::Convert<CInputService, void (
																void ()(CInputService *, const EventProfileStorageAvailable_t &) CInputService::* function_to_bind,
																void ()(GenericClass *) GenericClass::*& bound_func);  // 746
	ClosurePtr<void (detail::GenericClass::::bindmemfunc<CInputService, void (
													CInputService* pthis,
													void ()(CInputService *, const EventProfileStorageAvailable_t &) CInputService::* function_to_bind);  // 1113
	FastDelegate1<const EventProfileStorageAvailable_t&, void>::FastDelegate1<CInputService, CInputService>(
							CInputService* pthis,
							void ()(CInputService *, const EventProfileStorageAvailable_t &) CInputService::* function_to_bind);  // 2164
	CUtlDelegate<void(const EventProfileStorageAvailable_t&)>::CUtlDelegate<CInputService, CInputService>(
							CInputService* pthis,
							void ()(CInputService *, const EventProfileStorageAvailable_t &) CInputService::* function_to_bind); // 2519
	UtlMakeDelegate<CInputService, CInputService, const EventProfileStorageAvailable_t&, void>(CInputService* x,
													void ()(CInputService *, const EventProfileStorageAvailable_t &) CInputService::* func);  // 1114
	FastDelegate1<const EventProfileStorageAvailable_t&, void>::GetAbstractDelegate(); // 600
	CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1>::UnregisterEventListener(
				const CUtlDelegate<void(const EventProfileStorageAvailable_t&)>& listener,
				EventID_t EventID);  // 1114
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 363
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 158
	AsyncConfigFile_t::~AsyncConfigFile_t(); // 1526
	Destruct<CInputService::AsyncConfigFile_t>(AsyncConfigFile_t* pMemory); // 76
	UtlTraitsDestructRange<CInputService::AsyncConfigFile_t>(AsyncConfigFile_t* pStart,
								AsyncConfigFile_t* pEnd);  // 364
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::RemoveAll(); // 371
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Base(); // 374
	CUtlLeanVectorBase<CInputService::AsyncConfigFile_t, short int>::Purge(); // 1127
	CTier0AppSystem<IInputService, 0>::Shutdown(); // 85
	CTier2AppSystem<IInputService, 0>::Shutdown(); // 1129
} /* size: 473, inline expansions: 30 (812 bytes) */

// <004BBC70> engine2/inputservice.cpp:1132
// variables: 3
// function calls: 10
CUtlString GetLocalFilename(const char* pszFilenameBase, bool bOfflineFilename)
{
	AccountID_t nAccountId; // 1135
	const CUtlString  sDiskFilename; // 1147
	{
		const CSteamID  steamId; // 1139
		SteamUser(void); // 1139
		CSteamID::IsValid(); // 1141
	}
	SteamUser(void); // 1137
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 1147
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 1147
} /* size: 454, variables: 2, inline expansions: 8 (203 bytes) */

// <004BB53F> engine2/inputservice.cpp:1152
// variables: 4
// function calls: 25
void CInputService::ReadUserConfigFile(const char* pszFilenameBase, CUtlBuffer& buf)
{
	CUtlString sCloudFilename; // 1155
	const CUtlString  sDiskFilename; // 1158
	{
		int nSz; // 1175
		{
			int nSzRead; // 1179
			SteamRemoteStorage(void); // 1179
			CUtlMemory<unsigned char, int>::Base(); // 1484
			CUtlBuffer::Base(); // 1179
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 1179
			CUtlString::Get(); // 99
			CUtlString::String(); // 1185
			CUtlBuffer::Clear(); // 1186
		}
		SteamRemoteStorage(void); // 1175
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 1175
	}
	CUtlString::CUtlString(); // 1155
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 1156
	CUtlString::~CUtlString(); // 1156
	CUtlBuffer::Clear(); // 1161
	CAppSystemDict::IsConsoleApp(); // 130
	CTier1Application::IsConsoleApp(); // 1164
	SteamRemoteStorage(void); // 1167
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1192
	CUtlString::~CUtlString(); // 1193
	CUtlString::~CUtlString(); // 1193
} /* size: 780, variables: 2, inline expansions: 14 (268 bytes) */

// <004BAAF9> engine2/inputservice.cpp:1195
// variables: 4
// function calls: 35
void CInputService::WriteUserConfigFile(const char* pszFilenameBase, const CUtlBuffer& buf)
{
	CUtlString sCloudFilename; // 1198
	const CUtlString  sDiskFilename; // 1201
	char pDir; // 1218
	const CUtlString  sOfflineFilename; // 1230
	CUtlString::CUtlString(); // 1198
	V_DefaultExtension<long unsigned int>(char* path,
						const char* extension,
						long unsigned int pathStringLength);  // 1269
	CUtlString::CUtlString(
			const char* pString);  // 1276
	CInputService::GenerateConfigFileName(
				const char* pchPrefix,
				bool* pbFileExists,
				bool bExcludeCfgFolder);  // 1199
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 1199
	CUtlString::~CUtlString(); // 1199
	CAppSystemDict::IsConsoleApp(); // 130
	CTier1Application::IsConsoleApp(); // 1204
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1219
	V_ExtractFilePath<long unsigned int>(const char* path,
						char* dest,
						long unsigned int destSize);  // 1219
	CFileSystemPassThru::CreateDirHierarchy(
				const char* path,
				const char* pathID);  // 104
	CFileSystemPassThru::CreateDirHierarchy(
				const char* path,
				const char* pathID);  // 104
	CFileSystemPassThru::CreateDirHierarchy(
				const char* path,
				const char* pathID);  // 1220
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1223
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1231
	CUtlString::~CUtlString(); // 1238
	CUtlString::~CUtlString(); // 1238
	CUtlString::~CUtlString(); // 1238
	CUtlString::Get(); // 99
	CUtlString::String(); // 1225
	SteamRemoteStorage(void); // 1207
	SteamRemoteStorage(void); // 1213
	CUtlBuffer::TellPut(); // 1213
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1213
	CUtlMemory<unsigned char, int>::Base(); // 1479
	CUtlBuffer::Base(); // 1213
	CUtlString::Get(); // 99
	CUtlString::String(); // 1233
} /* size: 1155, variables: 4, inline expansions: 35 (854 bytes) */

// <004BA8F1> engine2/inputservice.cpp:1240
// variables: 2
// function calls: 6
void CInputService::ReadKeyBindings()
{
	bool bOk; // 1242
	CUtlBuffer buf; // 1243
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1251
} /* size: 147, variables: 2, inline expansions: 6 (111 bytes) */

// <004D6698> engine2/inputservice.cpp:1257
// variable: 1
// function calls: 2
void CInputService::GenerateConfigFileName(const char* pchPrefix, bool* pbFileExists, bool bExcludeCfgFolder)
{
	char fileName; // 1259
	V_DefaultExtension<long unsigned int>(char* path,
						const char* extension,
						long unsigned int pathStringLength);  // 1269
	CUtlString::CUtlString(
			const char* pString);  // 1276
} /* size: 240, variables: 1, inline expansions: 2 (39 bytes) */

// <004BA892> engine2/inputservice.cpp:1257
// variable: 1
void CInputService::GenerateConfigFileName(const char* pchPrefix, bool* pbFileExists, bool bExcludeCfgFolder)
{
	char fileName; // 1259
} /* size: 0, variables: 1 */

// <004BA678> engine2/inputservice.cpp:1283
// variable: 1
// function calls: 6
void CInputService::LoadArchivedConvarFile(const char* pchFileName)
{
	CUtlBuffer buf; // 1285
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1294
} /* size: 260, variables: 1, inline expansions: 6 (135 bytes) */

// <004BA37F> engine2/inputservice.cpp:1303
// variables: 2
// function calls: 10
void CInputService::LoadFromDefaultsFiles(const char* pchPrefix, const CUtlDelegate<bool(char const*)>& fnLoadFile)
{
	CUtlString sBaseFileName; // 1305
	CUtlString sFileName; // 1308
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1308
	CUtlString::CUtlString(); // 1305
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1311
	ClosurePtr<bool (detail::GenericClass::::GetClosureMemPtr()(char const*), bool (*)(char const*), bool (*)(char const*)>* this); // 1150
	ClosurePtr<bool (detail::GenericClass::::GetClosureThis()(char const*), bool (*)(char const*), bool (*)(char const*)>* this); // 1150
	FastDelegate1<char const::operator(
			const char* p1);  // 1311
	CUtlString::~CUtlString(); // 1312
	CUtlString::~CUtlString(); // 1312
} /* size: 217, variables: 2, inline expansions: 10 (149 bytes) */

// <004D965C> engine2/inputservice.cpp:1318
// variables: 3
// function calls: 25
void CInputService::OnProfileStorageAvailable(const EventProfileStorageAvailable_t& msg)
{
	CUtlBuffer buf; // 1339
	bool bFileExists; // 1340
	CUtlString sMachineConvarFileName; // 1341
	CAppSystemDict::IsConsoleApp(); // 130
	CTier1Application::IsConsoleApp(); // 1320
	CInputService::UnbindAllKeys(); // 1329
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<bool (detail::GenericClass::::ClosurePtr()(char const*), bool (*)(char const*), bool (*)(char const*)>* this); // 1112
	implicit_cast<CInputService*, CInputService*>(CInputService* inputVal); // 1113
	CInputService::Convert<CInputService, bool (
													bool ()(CInputService *, const char *) CInputService::* function_to_bind,
													void ()(GenericClass *) GenericClass::*& bound_func);  // 746
	ClosurePtr<bool (detail::GenericClass::::bindmemfunc<CInputService, bool (
									CInputService* pthis,
									bool ()(CInputService *, const char *) CInputService::* function_to_bind);  // 1113
	FastDelegate1<char const::FastDelegate1<CInputService, CInputService>(
							CInputService* pthis,
							DesiredRetType ()(CInputService *, const char *) CInputService::* function_to_bind);  // 2164
	CUtlDelegate<bool(char const::CUtlDelegate<CInputService, CInputService>(
							CInputService* pthis,
							bool ()(CInputService *, const char *) CInputService::* function_to_bind);  // 2519
	UtlMakeDelegate<CInputService, CInputService, char const*, bool>(CInputService* x,
									bool ()(CInputService *, const char *) CInputService::* func);  // 1336
	CInputService::InsertCommand(
			const char* pText);  // 1352
	CInputService::InsertCommand(
			const char* pText);  // 1354
	CUtlString::~CUtlString(); // 1355
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1355
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1344
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1346
	CInputService::OnProfileStorageAvailable(
					const EventProfileStorageAvailable_t& msg);  // 1318
} /* size: 716, variables: 3, inline expansions: 25 (1009 bytes) */

// <004BA332> engine2/inputservice.cpp:1318
// variables: 3
void CInputService::OnProfileStorageAvailable(const EventProfileStorageAvailable_t& msg)
{
	CUtlBuffer buf; // 1339
	bool bFileExists; // 1340
	CUtlString sMachineConvarFileName; // 1341
} /* size: 0, variables: 3 */

// <004B9F46> engine2/inputservice.cpp:1361
// variables: 9
// function call: 1
void CInputService::ReadArchivedConvars(const char* pFilename, CUtlBuffer& buf, bool bWarnArchived)
{
	KeyValues configKeyValues; // 1363
	bool bOk; // 1364
	KeyValues* pConfigKeys; // 1371
	{
		char szKVStringScratch; // 1374
		char pBuf; // 1375
		{
			KeyValues* pConfigKey; // 1376
			{
				const char* pVarName; // 1378
				const char* pVarValue; // 1379
				const ConVar* pConvar; // 1382
				CInputService::InsertCommand(
						const char* pText);  // 1395
			}
		}
	}
} /* size: 662, variables: 3 */

// <004B8C3D> engine2/inputservice.cpp:1401
// variables: 13
// function calls: 65
void CInputService::WriteArchivedConvars(CUtlBuffer& buf)
{
	KeyValues configKeys; // 1404
	KeyValues* pConvarKeys; // 1406
	CUtlRBTree<ConVar*, int, bool (*)(ConVar* const&, ConVar* const&), CUtlMemory<UtlRBTreeNode_t<ConVar*, int>, int> > sorted; // 1408
	Iterator iter; // 1410
	{
		ConCommandBase* pBase; // 1413
		ConVar* cv; // 1416
		{
			int newNode; // 1696
		}
		CUtlRBTree<ConVar::LeftChild(
				int i);  // 1667
		CUtlMemory<UtlRBTreeNode_t<ConVar::operator[](
				int i);  // 539
		CUtlRBTree<ConVar::Element(
			int i);  // 1665
		CUtlRBTree<ConVar::RightChild(
				int i);  // 1677
		CUtlRBTree<ConVar::FindInsertionPosition(
					ConVar* const& insert,
					bool bCheckForDuplicates,
					int& parent,
					bool& leftchild,
					bool& isDuplicate);  // 1693
		{
			int newNode; // 1709
			{
			}
		}
		CUtlRBTree<ConVar::Insert(
			ConVar* const& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 1420
		Iterator::Get(); // 1413
	}
	{
		int i; // 1423
		{
			ConVar* var; // 1425
			const char* pName; // 1428
			ConVar::GetString(); // 1429
			CUtlMemory<UtlRBTreeNode_t<ConVar::operator[](
					int i);  // 539
			CUtlRBTree<ConVar::Element(
				int i);  // 551
			CUtlRBTree<ConVar::operator[](
					int i);  // 1425
		}
		CUtlMemory<UtlRBTreeNode_t<ConVar::operator[](
				int i);  // 611
		CUtlRBTree<ConVar::LeftChild(
				int i);  // 1329
		CUtlRBTree<ConVar::FirstInorder()(ConVar* const&, ConVar* const&), CUtlMemory<UtlRBTreeNode_t<ConVar*, int>, this); // 1423
		CUtlMemory<UtlRBTreeNode_t<ConVar::IsIdxValid(
				int i);  // 661
		CUtlRBTree<ConVar::LeftChild(
				int i);  // 667
		CUtlRBTree<ConVar::IsValidIndex(
				int i);  // 659
		CUtlRBTree<ConVar::IsValidIndex(
				int i);  // 1339
		CUtlRBTree<ConVar::RightChild(
				int i);  // 1343
		{
			int left; // 1346
			CUtlMemory<UtlRBTreeNode_t<ConVar::operator[](
					int i);  // 611
			CUtlRBTree<ConVar::LeftChild(
					int i);  // 1347
		}
		CUtlRBTree<ConVar::Parent(
			int i);  // 1352
		CUtlMemory<UtlRBTreeNode_t<ConVar::operator[](
				int i);  // 617
		CUtlRBTree<ConVar::RightChild(
				int i);  // 633
		CUtlRBTree<ConVar::IsRightChild(
				int i);  // 1353
		CUtlRBTree<ConVar::Parent(
			int i);  // 1357
		CUtlRBTree<ConVar::NextInorder(
				int i);  // 1423
	}
	CUtlRBTree<ConVar::ResetDbgInfo()(ConVar* const&, ConVar* const&), CUtlMemory<UtlRBTreeNode_t<ConVar*, int>, int> > this); // 491
	CUtlMemory<UtlRBTreeNode_t<ConVar::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<ConVar::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<ConVar::InvalidIterator(); // 489
	CUtlRBTree<ConVar::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 1408
	Iterator::Iterator(
		ICvar* icvar);  // 1410
	Iterator::SetFirst(); // 1411
	Iterator::IsValid(); // 1411
	Iterator::Next(); // 1411
	Iterator::~Iterator(); // 1433
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<ConVar::InvalidIterator(); // 1248
	{
	}
	{
	}
	{
	}
	{
		Iterator_t it; // 1256
		CUtlMemory<UtlRBTreeNode_t<ConVar::First(); // 1256
		Iterator_t::Iterator_t(
				int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<ConVar::InvalidIterator(); // 1256
		{
			int i; // 1258
			CUtlMemory<UtlRBTreeNode_t<ConVar::IsIdxValid(
					int i);  // 661
			CUtlMemory<UtlRBTreeNode_t<ConVar::operator[](
					int i);  // 611
			CUtlRBTree<ConVar::LeftChild(
					int i);  // 667
			CUtlRBTree<ConVar::IsValidIndex(
					int i);  // 659
			CUtlRBTree<ConVar::IsValidIndex(
					int i);  // 1259
			Destruct<ConVar*>(ConVar** pMemory); // 1261
			CUtlRBTree<ConVar::SetLeftChild(
					int i,
					int child);  // 1263
		}
		CUtlMemory<UtlRBTreeNode_t<ConVar::IsIdxValid(
				int i);  // 82
		CUtlMemory<UtlRBTreeNode_t<ConVar::Next(
			const Iterator_t& it);  // 1256
	}
	CUtlRBTree<ConVar::RemoveAll()(ConVar* const&, ConVar* const&), CUtlMemory<UtlRBTreeNode_t<ConVar*, int>, int> > this); // 1285
	CUtlMemory<UtlRBTreeNode_t<ConVar::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<ConVar::Purge(); // 1287
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<ConVar::InvalidIterator(); // 1288
	CUtlRBTree<ConVar::Purge()(ConVar* const&, ConVar* const&), CUtlMemory<UtlRBTreeNode_t<ConVar*, int>, int> > this); // 509
	ValidateAlignment<UtlRBTreeNode_t<ConVar*, int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<ConVar::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<ConVar::~CUtlMemory(); // 510
	CUtlRBTree<ConVar::~CUtlRBTree()(ConVar* const&, ConVar* const&), CUtlMemory<UtlRBTreeNode_t<ConVar*, int>, int> > this); // 1433
} /* size: 0, variables: 4, inline expansions: 25 (991 bytes) */

// <004B8C09> engine2/inputservice.cpp:1439
void CInputService::IsAppActive()
{
} /* size: 38 */

// <004B8BD5> engine2/inputservice.cpp:1453
void CInputService::HasMouseFocus()
{
} /* size: 35 */

// <004B89E2> engine2/inputservice.cpp:1463
// variable: 1
// function calls: 6
void CInputService::SaveKeyBindings()
{
	CUtlBuffer buf; // 1466
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1469
} /* size: 132, variables: 1, inline expansions: 6 (83 bytes) */

// <004B896C> engine2/inputservice.cpp:1471
void CInputService::GetCursorPosition(int* x, int* y)
{
} /* size: 89 */

// <004B88F4> engine2/inputservice.cpp:1476
void CInputService::SetCursorPosition(int x, int y)
{
} /* size: 85 */

// <004B88B6> engine2/inputservice.cpp:1484
void CInputService::FindInputValue(const char* pName)
{
} /* size: 0 */

// <004B8858> engine2/inputservice.cpp:1489
void CInputService::Pump()
{
} /* size: 55 */

// <004D685A> engine2/inputservice.cpp:1515
void CInputService::InsertCommand(const char* pText)
{
} /* size: 12 */

