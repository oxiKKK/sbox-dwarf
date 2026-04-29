
//
// ./renderthreadbase.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 62
//	structs: 17
//

// <007F7975> ./renderthreadbase.h:100
// member function: 1
// member variables: 3
// struct size: 4
struct CommandBase_t {
	/* ./renderthreadbase.h:102 */
	void CommandBase_t(CommandBase_t* , int, bool, int);
	uint16 m_nOpCode:15; /* 0: 0 2 */
	uint16 m_bSkipOnLostDevice:1; /* 0:15 2 */
	uint16 m_nCmdSizeInBytes; /* 2 2 */
};

// <00A5901A> ./renderthreadbase.h:102
void CommandBase_t::CommandBase_t(int nOpCode, bool bSkipOnLostDevice, int nCmdSizeInBytes)
{
} /* size: 0 */

// <00A58FDD> ./renderthreadbase.h:102
inline void CommandBase_t::CommandBase_t(int nOpCode, bool bSkipOnLostDevice, int nCmdSizeInBytes)
{
} /* size: 0 */

// <007F7AF3> ./renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandReturn_t, 0, false> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* ./renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandReturn_t, 0, false>* );
};

// <007F7D30> ./renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandDispatchCommandStream_t, 7, false> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* ./renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandDispatchCommandStream_t, 7, false>* );
};

// <007F83C2> ./renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandSetSteamVrCompositorTexture_t, 11, true> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* ./renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandSetSteamVrCompositorTexture_t, 11, true>* );
};

// <008203B2> ./renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandPresentVulkan_t, 4, false> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* ./renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandPresentVulkan_t, 4, false>* );
};

// <008204E5> ./renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandEndQueryVulkan_t, 12, true> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* ./renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandEndQueryVulkan_t, 12, true>* );
};

// <00820584> ./renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandReadTexturePixelsVulkan_t, 15, true> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* ./renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandReadTexturePixelsVulkan_t, 15, true>* );
};

// <00820780> ./renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandReadBufferVulkan_t, 16, true> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* ./renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandReadBufferVulkan_t, 16, true>* );
};

// <008208CC> ./renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandDeviceThreadCallback_t, 18, true> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* ./renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandDeviceThreadCallback_t, 18, true>* );
};

// <00820977> ./renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandUpdateSwappedImageLayout_t, 21, true> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* ./renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandUpdateSwappedImageLayout_t, 21, true>* );
};

// <00980B47> ./renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandDestroyQueryVulkan_t, 13, true> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* ./renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandDestroyQueryVulkan_t, 13, true>* );
};

// <00980E53> ./renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandSetSwapChainSemaphore_t, 19, true> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* ./renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandSetSwapChainSemaphore_t, 19, true>* );
};

// <00980EFE> ./renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandBeginSubmittingViews_t, 20, true> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* ./renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandBeginSubmittingViews_t, 20, true>* );
};

// <00B4193E> ./renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandBlockForQueryVulkan_t, 14, true> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* ./renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandBlockForQueryVulkan_t, 14, true>* );
};

// <009E9A4C> ./renderthreadbase.h:117
void CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t()
{
} /* size: 0 */

// <009E9A33> ./renderthreadbase.h:117
inline void CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t()
{
} /* size: 0 */

// <009E66B6> ./renderthreadbase.h:117
void CommandHelper_t<CommandSetSwapChainSemaphore_t, 19, true>::CommandHelper_t()
{
} /* size: 0 */

// <009E669D> ./renderthreadbase.h:117
inline void CommandHelper_t<CommandSetSwapChainSemaphore_t, 19, true>::CommandHelper_t()
{
} /* size: 0 */

// <009E5EF2> ./renderthreadbase.h:117
void CommandHelper_t<CommandReadTexturePixelsVulkan_t, 15, true>::CommandHelper_t()
{
} /* size: 0 */

// <009E5ED9> ./renderthreadbase.h:117
inline void CommandHelper_t<CommandReadTexturePixelsVulkan_t, 15, true>::CommandHelper_t()
{
} /* size: 0 */

// <009E5DB9> ./renderthreadbase.h:117
void CommandHelper_t<CommandBeginSubmittingViews_t, 20, true>::CommandHelper_t()
{
} /* size: 0 */

// <009E5DA0> ./renderthreadbase.h:117
inline void CommandHelper_t<CommandBeginSubmittingViews_t, 20, true>::CommandHelper_t()
{
} /* size: 0 */

// <009E5C06> ./renderthreadbase.h:117
void CommandHelper_t<CommandDestroyQueryVulkan_t, 13, true>::CommandHelper_t()
{
} /* size: 0 */

// <009E5BED> ./renderthreadbase.h:117
inline void CommandHelper_t<CommandDestroyQueryVulkan_t, 13, true>::CommandHelper_t()
{
} /* size: 0 */

// <0083D64C> ./renderthreadbase.h:117
void CommandHelper_t<CommandDispatchCommandStream_t, 7, false>::CommandHelper_t()
{
} /* size: 0 */

// <0083D633> ./renderthreadbase.h:117
inline void CommandHelper_t<CommandDispatchCommandStream_t, 7, false>::CommandHelper_t()
{
} /* size: 0 */

// <0083D5D1> ./renderthreadbase.h:117
void CommandHelper_t<CommandReturn_t, 0, false>::CommandHelper_t()
{
} /* size: 0 */

// <0083D5B8> ./renderthreadbase.h:117
inline void CommandHelper_t<CommandReturn_t, 0, false>::CommandHelper_t()
{
} /* size: 0 */

// <0083D2AF> ./renderthreadbase.h:117
void CommandHelper_t<CommandEndQueryVulkan_t, 12, true>::CommandHelper_t()
{
} /* size: 0 */

// <0083D296> ./renderthreadbase.h:117
inline void CommandHelper_t<CommandEndQueryVulkan_t, 12, true>::CommandHelper_t()
{
} /* size: 0 */

// <0083D166> ./renderthreadbase.h:117
void CommandHelper_t<CommandPresentVulkan_t, 4, false>::CommandHelper_t()
{
} /* size: 0 */

// <0083D14D> ./renderthreadbase.h:117
inline void CommandHelper_t<CommandPresentVulkan_t, 4, false>::CommandHelper_t()
{
} /* size: 0 */

// <0083CF3B> ./renderthreadbase.h:117
void CommandHelper_t<CommandReadBufferVulkan_t, 16, true>::CommandHelper_t()
{
} /* size: 0 */

// <0083CF22> ./renderthreadbase.h:117
inline void CommandHelper_t<CommandReadBufferVulkan_t, 16, true>::CommandHelper_t()
{
} /* size: 0 */

// <0083CEC0> ./renderthreadbase.h:117
void CommandHelper_t<CommandDeviceThreadCallback_t, 18, true>::CommandHelper_t()
{
} /* size: 0 */

// <0083CEA7> ./renderthreadbase.h:117
inline void CommandHelper_t<CommandDeviceThreadCallback_t, 18, true>::CommandHelper_t()
{
} /* size: 0 */

// <0083CE45> ./renderthreadbase.h:117
void CommandHelper_t<CommandSetSteamVrCompositorTexture_t, 11, true>::CommandHelper_t()
{
} /* size: 0 */

// <0083CE2C> ./renderthreadbase.h:117
inline void CommandHelper_t<CommandSetSteamVrCompositorTexture_t, 11, true>::CommandHelper_t()
{
} /* size: 0 */

// <0083CC21> ./renderthreadbase.h:117
void CommandHelper_t<CommandUpdateSwappedImageLayout_t, 21, true>::CommandHelper_t()
{
} /* size: 0 */

// <0083CC08> ./renderthreadbase.h:117
inline void CommandHelper_t<CommandUpdateSwappedImageLayout_t, 21, true>::CommandHelper_t()
{
} /* size: 0 */

// <0086485F> ./renderthreadbase.h:139
void CommandReturn_t::CommandReturn_t()
{
} /* size: 0 */

// <00864843> ./renderthreadbase.h:139
inline void CommandReturn_t::CommandReturn_t()
{
} /* size: 0 */

// <007F7B4D> ./renderthreadbase.h:139
// member function: 1
// member variable: 1
// struct size: 4
struct CommandReturn_t : public CommandHelper_t<CommandReturn_t, 0, false> {
public:
	/* struct CommandHelper_t<CommandReturn_t, 0, false> <ancestor>; */ /* 0 4 */
	void CommandReturn_t(CommandReturn_t* );
};

// <00A54B44> ./renderthreadbase.h:143
void CommandJump_t::CommandJump_t()
{
} /* size: 0 */

// <00A54B27> ./renderthreadbase.h:143
inline void CommandJump_t::CommandJump_t()
{
} /* size: 0 */

// <00865EC1> ./renderthreadbase.h:192
void CommandDispatchCommandStream_t::CommandDispatchCommandStream_t()
{
} /* size: 0 */

// <00865EA5> ./renderthreadbase.h:192
inline void CommandDispatchCommandStream_t::CommandDispatchCommandStream_t()
{
} /* size: 0 */

// <007F7D8A> ./renderthreadbase.h:192
// member function: 1
// member variables: 2
// struct size: 16
struct CommandDispatchCommandStream_t : public CommandHelper_t<CommandDispatchCommandStream_t, 7, false> {
public:
	/* struct CommandHelper_t<CommandDispatchCommandStream_t, 7, false> <ancestor>; */ /* 0 4 */
	CCommandStream * m_pCommands; /* 8 8 */
	void CommandDispatchCommandStream_t(CommandDispatchCommandStream_t* );
};

// <008446B8> ./renderthreadbase.h:217
void CommandSetSteamVrCompositorTexture_t::CommandSetSteamVrCompositorTexture_t()
{
} /* size: 0 */

// <0084469C> ./renderthreadbase.h:217
inline void CommandSetSteamVrCompositorTexture_t::CommandSetSteamVrCompositorTexture_t()
{
} /* size: 0 */

// <0083CE0B> ./renderthreadbase.h:217
inline void CommandSetSteamVrCompositorTexture_t::operator=(const CommandSetSteamVrCompositorTexture_t &)
{
} /* size: 0 */

// <007F841E> ./renderthreadbase.h:217
// member functions: 2
// member variables: 3
// struct size: 24
struct CommandSetSteamVrCompositorTexture_t : public CommandHelper_t<CommandSetSteamVrCompositorTexture_t, 11, true> {
public:
	/* struct CommandHelper_t<CommandSetSteamVrCompositorTexture_t, 11, true> <ancestor>; */ /* 0 4 */
	HRenderTexture m_pTextureHandle; /* 8 8 */
	HRenderTexture m_pDepthTextureHandle; /* 16 8 */
	CommandSetSteamVrCompositorTexture_t& operator=(CommandSetSteamVrCompositorTexture_t* , const CommandSetSteamVrCompositorTexture_t& );
	void CommandSetSteamVrCompositorTexture_t(CommandSetSteamVrCompositorTexture_t* );
};

// <00B8B2F9> ./renderthreadbase.h:264
void CRenderThreadBase::~CRenderThreadBase()
{
} /* size: 0 */

// <00B8B2DC> ./renderthreadbase.h:264
inline void CRenderThreadBase::~CRenderThreadBase()
{
} /* size: 0 */

// <00B6439A> ./renderthreadbase.h:267
void CRenderThreadBase::CRenderThreadBase(CRenderDeviceBase* pDevice, RenderThreadMode_t mode)
{
} /* size: 0 */

// <00B8BA59> ./renderthreadbase.h:294
void CRenderThreadBase::WaitingForWork()
{
} /* size: 0 */

// <00B8BA41> ./renderthreadbase.h:297
void CRenderThreadBase::OnThreadStart()
{
} /* size: 0 */

// <00B8BA29> ./renderthreadbase.h:299
void CRenderThreadBase::OnThreadStop()
{
} /* size: 0 */

// <009E2E59> ./renderthreadbase.h:338
// variable: 1
inline CommandBase_t Load<CommandBase_t>(const uint8 *& pPtr)
{
	const uint8* pO; // 340
} /* size: 0, variables: 1 */

// <00B74AC3> ./renderthreadbase.h:352
// variables: 4
inline const CommandDispatchCommandStream_t& LoadCmd<CommandDispatchCommandStream_t>(const uint8 *& pPtr)
{
	const char   __FUNCTION__; // 26722
	const uint8* pO; // 355
	const CommandDispatchCommandStream_t& cmd; // 357
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 3 */

// <00B74A55> ./renderthreadbase.h:352
// variables: 4
inline const CommandPresentVulkan_t& LoadCmd<CommandPresentVulkan_t>(const uint8 *& pPtr)
{
	const char   __FUNCTION__; // 26722
	const uint8* pO; // 355
	const CommandPresentVulkan_t& cmd; // 357
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 3 */

// <00B749E1> ./renderthreadbase.h:352
// variables: 4
inline const CommandFence_t& LoadCmd<CommandFence_t>(const uint8 *& pPtr)
{
	const char   __FUNCTION__; // 26722
	const uint8* pO; // 355
	const CommandFence_t& cmd; // 357
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 3 */

// <00B74973> ./renderthreadbase.h:352
// variables: 4
inline const CommandDestroyQueryVulkan_t& LoadCmd<CommandDestroyQueryVulkan_t>(const uint8 *& pPtr)
{
	const char   __FUNCTION__; // 26722
	const uint8* pO; // 355
	const CommandDestroyQueryVulkan_t& cmd; // 357
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 3 */

// <00B74905> ./renderthreadbase.h:352
// variables: 4
inline const CommandEndQueryVulkan_t& LoadCmd<CommandEndQueryVulkan_t>(const uint8 *& pPtr)
{
	const char   __FUNCTION__; // 26722
	const uint8* pO; // 355
	const CommandEndQueryVulkan_t& cmd; // 357
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 3 */

// <00B74831> ./renderthreadbase.h:352
// variables: 4
inline const CommandBlockForQueryVulkan_t& LoadCmd<CommandBlockForQueryVulkan_t>(const uint8 *& pPtr)
{
	const char   __FUNCTION__; // 26722
	const uint8* pO; // 355
	const CommandBlockForQueryVulkan_t& cmd; // 357
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 3 */

// <00B747C3> ./renderthreadbase.h:352
// variables: 4
inline const CommandReadTexturePixelsVulkan_t& LoadCmd<CommandReadTexturePixelsVulkan_t>(const uint8 *& pPtr)
{
	const char   __FUNCTION__; // 26722
	const uint8* pO; // 355
	const CommandReadTexturePixelsVulkan_t& cmd; // 357
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 3 */

// <00B74755> ./renderthreadbase.h:352
// variables: 4
inline const CommandReadBufferVulkan_t& LoadCmd<CommandReadBufferVulkan_t>(const uint8 *& pPtr)
{
	const char   __FUNCTION__; // 26722
	const uint8* pO; // 355
	const CommandReadBufferVulkan_t& cmd; // 357
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 3 */

// <00B746E1> ./renderthreadbase.h:352
// variables: 4
inline const CommandDeviceThreadCallback_t& LoadCmd<CommandDeviceThreadCallback_t>(const uint8 *& pPtr)
{
	const char   __FUNCTION__; // 26722
	const uint8* pO; // 355
	const CommandDeviceThreadCallback_t& cmd; // 357
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 3 */

// <00B7466D> ./renderthreadbase.h:352
// variables: 4
inline const CommandSetSwapChainSemaphore_t& LoadCmd<CommandSetSwapChainSemaphore_t>(const uint8 *& pPtr)
{
	const char   __FUNCTION__; // 26722
	const uint8* pO; // 355
	const CommandSetSwapChainSemaphore_t& cmd; // 357
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 3 */

// <00B745F9> ./renderthreadbase.h:352
// variables: 4
inline const CommandStartRenderDocCapture_t& LoadCmd<CommandStartRenderDocCapture_t>(const uint8 *& pPtr)
{
	const char   __FUNCTION__; // 26722
	const uint8* pO; // 355
	const CommandStartRenderDocCapture_t& cmd; // 357
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 3 */

// <00B74585> ./renderthreadbase.h:352
// variables: 4
inline const CommandEndRenderDocCapture_t& LoadCmd<CommandEndRenderDocCapture_t>(const uint8 *& pPtr)
{
	const char   __FUNCTION__; // 26722
	const uint8* pO; // 355
	const CommandEndRenderDocCapture_t& cmd; // 357
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 3 */

// <00B74517> ./renderthreadbase.h:352
// variables: 4
inline const CommandSetSteamVrCompositorTexture_t& LoadCmd<CommandSetSteamVrCompositorTexture_t>(const uint8 *& pPtr)
{
	const char   __FUNCTION__; // 26722
	const uint8* pO; // 355
	const CommandSetSteamVrCompositorTexture_t& cmd; // 357
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 3 */

// <00B744A9> ./renderthreadbase.h:352
// variables: 4
inline const CommandBeginSubmittingViews_t& LoadCmd<CommandBeginSubmittingViews_t>(const uint8 *& pPtr)
{
	const char   __FUNCTION__; // 26722
	const uint8* pO; // 355
	const CommandBeginSubmittingViews_t& cmd; // 357
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 3 */

// <00B74435> ./renderthreadbase.h:352
// variables: 4
inline const CommandUpdateSwappedImageLayout_t& LoadCmd<CommandUpdateSwappedImageLayout_t>(const uint8 *& pPtr)
{
	const char   __FUNCTION__; // 26722
	const uint8* pO; // 355
	const CommandUpdateSwappedImageLayout_t& cmd; // 357
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 3 */

// <009E2DE5> ./renderthreadbase.h:352
// variables: 4
inline const CommandReturn_t& LoadCmd<CommandReturn_t>(const uint8 *& pPtr)
{
	const char   __FUNCTION__; // 28543
	const uint8* pO; // 355
	const CommandReturn_t& cmd; // 357
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 3 */

// <009E2D71> ./renderthreadbase.h:352
// variables: 4
inline const CommandJump_t& LoadCmd<CommandJump_t>(const uint8 *& pPtr)
{
	const char   __FUNCTION__; // 28543
	const uint8* pO; // 355
	const CommandJump_t& cmd; // 357
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 3 */

// <009E2CF7> ./renderthreadbase.h:352
// variables: 4
inline const CommandDynamicCBUpdate_t& LoadCmd<CommandDynamicCBUpdate_t>(const uint8 *& pPtr)
{
	const char   __FUNCTION__; // 28543
	const uint8* pO; // 355
	const CommandDynamicCBUpdate_t& cmd; // 357
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 3 */

