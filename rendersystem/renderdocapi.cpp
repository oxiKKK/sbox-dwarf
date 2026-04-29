
//
// rendersystem/renderdocapi.cpp
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 16
//

// <003DFB16> rendersystem/renderdocapi.cpp:54
void CRenderDocAPI::CRenderDocAPI()
{
} /* size: 0 */

// <003DFA9B> rendersystem/renderdocapi.cpp:62
// function call: 1
void CRenderDocAPI::~CRenderDocAPI()
{
	CRenderDocAPI::Shutdown(); // 64
} /* size: 33, inline expansions: 1 (18 bytes) */

// <003DF9E6> rendersystem/renderdocapi.cpp:62
// function calls: 2
void CRenderDocAPI::~CRenderDocAPI()
{
	CRenderDocAPI::Shutdown(); // 64
	CRenderDocAPI::~CRenderDocAPI(); // 65
} /* size: 66, inline expansions: 2 (42 bytes) */

// <003DF9CD> rendersystem/renderdocapi.cpp:62
void CRenderDocAPI::~CRenderDocAPI()
{
} /* size: 0 */

// <003DF76E> rendersystem/renderdocapi.cpp:68
// variables: 3
// function calls: 7
void Instance(void)
{
	const char   __FUNCTION__; // 5533
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_72; // 72
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 72
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 77
		CRenderDocAPI::CRenderDocAPI(); // 75
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 79
	}
} /* size: 0, variables: 1 */

// <00365C3C> rendersystem/renderdocapi.cpp:68
// variables: 3
// function calls: 7
void Instance(void)
{
	const char   __FUNCTION__; // 1432
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_72; // 72
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 72
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 77
		CRenderDocAPI::CRenderDocAPI(); // 75
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 79
	}
} /* size: 0, variables: 1 */

// <003E02FC> rendersystem/renderdocapi.cpp:84
void CRenderDocAPI::Shutdown()
{
} /* size: 0 */

// <003DF716> rendersystem/renderdocapi.cpp:99
void CRenderDocAPI::EarlyInitRenderDocHooking(const char* pPathToRenderDocDLL)
{
} /* size: 7 */

// <003DF6CD> rendersystem/renderdocapi.cpp:145
void CRenderDocAPI::IsRenderDocActive()
{
} /* size: 31 */

// <003DF684> rendersystem/renderdocapi.cpp:151
void CRenderDocAPI::RenderDocAPI()
{
} /* size: 0 */

// <003DF2E7> rendersystem/renderdocapi.cpp:158
// variables: 6
// function calls: 9
void CRenderDocAPI::QueryRenderDoc()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_163; // 163
	pRENDERDOC_GetAPI RENDERDOC_GetAPI; // 168
	{
		int ret; // 171
		{
			int nMajor; // 176
			int nMinor; // 176
			int nPatch; // 176
		}
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 163
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 181
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 181
} /* size: 385, variables: 2, inline expansions: 9 (432 bytes) */

// <003DF2AA> rendersystem/renderdocapi.cpp:184
void CaptureRenderDocFrame(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 15 */

// <003DEF7A> rendersystem/renderdocapi.cpp:190
// variable: 1
// function calls: 8
void CRenderDocAPI::OnBeginFrame()
{
	{
		CBufferString strCapturePath; // 199
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 199
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 201
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 202
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 203
		CBufferString::~CBufferString(); // 204
	}
} /* size: 433 */

// <003DED17> rendersystem/renderdocapi.cpp:214
// variables: 2
// function calls: 4
void CRenderDocAPI::OnEndFrame()
{
	{
		int32 nNumCaptures; // 223
		{
			char szFileName; // 226
			ConVar::GetInt(); // 351
			ConVar::GetBool(); // 230
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 229
		}
	}
} /* size: 326 */

// <003DEC1F> rendersystem/renderdocapi.cpp:242
// variables: 2
void CRenderDocAPI::StartRenderDocCapture(PlatWindow_t hWnd)
{
	{
		OsSpecificWindowHandle_t hOSWnd; // 248
		RENDERDOC_WindowHandle hWndRenderDoc; // 253
	}
} /* size: 142 */

// <003DE950> rendersystem/renderdocapi.cpp:262
// variables: 4
// function calls: 4
void CRenderDocAPI::EndRenderDocCapture(PlatWindow_t hWnd)
{
	{
		OsSpecificWindowHandle_t hOSWnd; // 267
		RENDERDOC_WindowHandle hWndRenderDoc; // 272
		int32 nNumCaptures; // 275
		{
			char szFileName; // 278
			ConVar::GetInt(); // 351
			ConVar::GetBool(); // 282
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 281
		}
	}
} /* size: 349 */

