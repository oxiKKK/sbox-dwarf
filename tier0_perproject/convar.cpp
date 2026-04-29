
//
// tier0_perproject/convar.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//
//	functions: 102
//

// <0443C718> tier0_perproject/convar.cpp:21
// variables: 10
// function calls: 8
void CCommand::CCommand(int nArgC, const char ** ppArgV)
{
	{
		{
			char* pBuf; // 27
			char* pSBuf; // 28
			{
			}
			{
				int i; // 30
				{
					int nLen; // 33
					bool bContainsSpace; // 41
				}
			}
		}
	}
	{
		{
			char* pBuf; // 27
			char* pSBuf; // 28
			{
			}
			CCommand::Reset(); // 25
			{
				int i; // 30
				{
					int nLen; // 33
					bool bContainsSpace; // 41
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 75
					V_memcpy(void* dest,
						const void* src,
						int count);  // 46
					V_strlen(const char* str); // 33
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 75
					V_memcpy(void* dest,
						const void* src,
						int count);  // 34
					strchr(const char* __s,
						int __c);  // 186
					V_strchr(const char* s,
						char c);  // 41
				}
			}
		}
	}
} /* size: 0 */

// <0443C679> tier0_perproject/convar.cpp:21
// variables: 7
void CCommand::CCommand(int nArgC, const char ** ppArgV)
{
	const char   __FUNCTION__; // 17393
	{
		char* pBuf; // 27
		char* pSBuf; // 28
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 23
		}
		{
			int i; // 30
			{
				int nLen; // 33
				bool bContainsSpace; // 41
			}
		}
	}
} /* size: 0, variables: 1 */

// <01C05F5A> tier0_perproject/convar.cpp:21
// variables: 7
void CCommand::CCommand(int nArgC, const char ** ppArgV)
{
	const char   __FUNCTION__; // 43975
	{
		char* pBuf; // 27
		char* pSBuf; // 28
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 23
		}
		{
			int i; // 30
			{
				int nLen; // 33
				bool bContainsSpace; // 41
			}
		}
	}
} /* size: 0, variables: 1 */

// <00E3F742> tier0_perproject/convar.cpp:21
// variables: 7
void CCommand::CCommand(int nArgC, const char ** ppArgV)
{
	const char   __FUNCTION__; // 23405
	{
		char* pBuf; // 27
		char* pSBuf; // 28
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 23
		}
		{
			int i; // 30
			{
				int nLen; // 33
				bool bContainsSpace; // 41
			}
		}
	}
} /* size: 0, variables: 1 */

// <00632B08> tier0_perproject/convar.cpp:21
// variables: 7
void CCommand::CCommand(int nArgC, const char ** ppArgV)
{
	const char   __FUNCTION__; // 20184
	{
		char* pBuf; // 27
		char* pSBuf; // 28
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 23
		}
		{
			int i; // 30
			{
				int nLen; // 33
				bool bContainsSpace; // 41
			}
		}
	}
} /* size: 0, variables: 1 */

// <005D0369> tier0_perproject/convar.cpp:21
// variables: 7
void CCommand::CCommand(int nArgC, const char ** ppArgV)
{
	const char   __FUNCTION__; // 36166
	{
		char* pBuf; // 27
		char* pSBuf; // 28
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 23
		}
		{
			int i; // 30
			{
				int nLen; // 33
				bool bContainsSpace; // 41
			}
		}
	}
} /* size: 0, variables: 1 */

// <004F11CF> tier0_perproject/convar.cpp:21
// variables: 7
void CCommand::CCommand(int nArgC, const char ** ppArgV)
{
	const char   __FUNCTION__; // 295
	{
		char* pBuf; // 27
		char* pSBuf; // 28
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 23
		}
		{
			int i; // 30
			{
				int nLen; // 33
				bool bContainsSpace; // 41
			}
		}
	}
} /* size: 0, variables: 1 */

// <0009A5BC> tier0_perproject/convar.cpp:21
// variables: 7
void CCommand::CCommand(int nArgC, const char ** ppArgV)
{
	const char   __FUNCTION__; // 57929
	{
		char* pBuf; // 27
		char* pSBuf; // 28
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 23
		}
		{
			int i; // 30
			{
				int nLen; // 33
				bool bContainsSpace; // 41
			}
		}
	}
} /* size: 0, variables: 1 */

// <00187E7F> tier0_perproject/convar.cpp:21
// variables: 7
void CCommand::CCommand(int nArgC, const char ** ppArgV)
{
	const char   __FUNCTION__; // 44036
	{
		char* pBuf; // 27
		char* pSBuf; // 28
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 23
		}
		{
			int i; // 30
			{
				int nLen; // 33
				bool bContainsSpace; // 41
			}
		}
	}
} /* size: 0, variables: 1 */

// <0443C596> tier0_perproject/convar.cpp:61
// variable: 1
// function calls: 3
void CCommand::StripArg0()
{
	CCommand remainder; // 63
	CCommand::Reset(); // 108
	CCommand::CCommand(); // 63
	CCommand::ArgS(); // 64
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0443C032> tier0_perproject/convar.cpp:68
// variables: 12
// function calls: 14
void CCommand::Tokenize(const char* pCommand, const characterset_t* pBreakSet)
{
	const char   __FUNCTION__; // 17393
	int nLen; // 84
	CUtlBuffer bufParse; // 94
	int nArgvBufferSize; // 95
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 77
	}
	{
		char* pArgvBuf; // 98
		int nMaxLen; // 99
		int nStartGet; // 100
		int nSize; // 101
		{
			bool bFoundEndQuote; // 116
			bool bFoundStartQuote; // 126
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 122
			}
			CUtlBuffer::TellGet(); // 115
		}
		CUtlBuffer::TellGet(); // 100
		CCommand::Reset(); // 108
	}
	CCommand::Reset(); // 70
	V_strlen(const char* str); // 84
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 91
	CUtlBuffer::IsValid(); // 96
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 148
} /* size: 0, variables: 4, inline expansions: 11 (238 bytes) */

// <01C05913> tier0_perproject/convar.cpp:68
// variables: 12
// function calls: 14
void CCommand::Tokenize(const char* pCommand, const characterset_t* pBreakSet)
{
	const char   __FUNCTION__; // 43975
	int nLen; // 84
	CUtlBuffer bufParse; // 94
	int nArgvBufferSize; // 95
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 77
	}
	{
		char* pArgvBuf; // 98
		int nMaxLen; // 99
		int nStartGet; // 100
		int nSize; // 101
		{
			bool bFoundEndQuote; // 116
			bool bFoundStartQuote; // 126
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 122
			}
			CUtlBuffer::TellGet(); // 115
		}
		CUtlBuffer::TellGet(); // 100
		CCommand::Reset(); // 108
	}
	CCommand::Reset(); // 70
	V_strlen(const char* str); // 84
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 91
	CUtlBuffer::IsValid(); // 96
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 148
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <00E3F0FB> tier0_perproject/convar.cpp:68
// variables: 12
// function calls: 14
void CCommand::Tokenize(const char* pCommand, const characterset_t* pBreakSet)
{
	const char   __FUNCTION__; // 23405
	int nLen; // 84
	CUtlBuffer bufParse; // 94
	int nArgvBufferSize; // 95
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 77
	}
	{
		char* pArgvBuf; // 98
		int nMaxLen; // 99
		int nStartGet; // 100
		int nSize; // 101
		{
			bool bFoundEndQuote; // 116
			bool bFoundStartQuote; // 126
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 122
			}
			CUtlBuffer::TellGet(); // 115
		}
		CUtlBuffer::TellGet(); // 100
		CCommand::Reset(); // 108
	}
	CCommand::Reset(); // 70
	V_strlen(const char* str); // 84
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 91
	CUtlBuffer::IsValid(); // 96
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 148
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <006324C1> tier0_perproject/convar.cpp:68
// variables: 12
// function calls: 14
void CCommand::Tokenize(const char* pCommand, const characterset_t* pBreakSet)
{
	const char   __FUNCTION__; // 20184
	int nLen; // 84
	CUtlBuffer bufParse; // 94
	int nArgvBufferSize; // 95
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 77
	}
	{
		char* pArgvBuf; // 98
		int nMaxLen; // 99
		int nStartGet; // 100
		int nSize; // 101
		{
			bool bFoundEndQuote; // 116
			bool bFoundStartQuote; // 126
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 122
			}
			CUtlBuffer::TellGet(); // 115
		}
		CUtlBuffer::TellGet(); // 100
		CCommand::Reset(); // 108
	}
	CCommand::Reset(); // 70
	V_strlen(const char* str); // 84
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 91
	CUtlBuffer::IsValid(); // 96
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 148
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <005CFD22> tier0_perproject/convar.cpp:68
// variables: 12
// function calls: 14
void CCommand::Tokenize(const char* pCommand, const characterset_t* pBreakSet)
{
	const char   __FUNCTION__; // 36166
	int nLen; // 84
	CUtlBuffer bufParse; // 94
	int nArgvBufferSize; // 95
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 77
	}
	{
		char* pArgvBuf; // 98
		int nMaxLen; // 99
		int nStartGet; // 100
		int nSize; // 101
		{
			bool bFoundEndQuote; // 116
			bool bFoundStartQuote; // 126
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 122
			}
			CUtlBuffer::TellGet(); // 115
		}
		CUtlBuffer::TellGet(); // 100
		CCommand::Reset(); // 108
	}
	CCommand::Reset(); // 70
	V_strlen(const char* str); // 84
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 91
	CUtlBuffer::IsValid(); // 96
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 148
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <004F0B88> tier0_perproject/convar.cpp:68
// variables: 12
// function calls: 14
void CCommand::Tokenize(const char* pCommand, const characterset_t* pBreakSet)
{
	const char   __FUNCTION__; // 295
	int nLen; // 84
	CUtlBuffer bufParse; // 94
	int nArgvBufferSize; // 95
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 77
	}
	{
		char* pArgvBuf; // 98
		int nMaxLen; // 99
		int nStartGet; // 100
		int nSize; // 101
		{
			bool bFoundEndQuote; // 116
			bool bFoundStartQuote; // 126
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 122
			}
			CUtlBuffer::TellGet(); // 115
		}
		CUtlBuffer::TellGet(); // 100
		CCommand::Reset(); // 108
	}
	CCommand::Reset(); // 70
	V_strlen(const char* str); // 84
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 91
	CUtlBuffer::IsValid(); // 96
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 148
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <00099F75> tier0_perproject/convar.cpp:68
// variables: 12
// function calls: 14
void CCommand::Tokenize(const char* pCommand, const characterset_t* pBreakSet)
{
	const char   __FUNCTION__; // 57929
	int nLen; // 84
	CUtlBuffer bufParse; // 94
	int nArgvBufferSize; // 95
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 77
	}
	{
		char* pArgvBuf; // 98
		int nMaxLen; // 99
		int nStartGet; // 100
		int nSize; // 101
		{
			bool bFoundEndQuote; // 116
			bool bFoundStartQuote; // 126
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 122
			}
			CUtlBuffer::TellGet(); // 115
		}
		CUtlBuffer::TellGet(); // 100
		CCommand::Reset(); // 108
	}
	CCommand::Reset(); // 70
	V_strlen(const char* str); // 84
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 91
	CUtlBuffer::IsValid(); // 96
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 148
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <00187838> tier0_perproject/convar.cpp:68
// variables: 12
// function calls: 14
void CCommand::Tokenize(const char* pCommand, const characterset_t* pBreakSet)
{
	const char   __FUNCTION__; // 44036
	int nLen; // 84
	CUtlBuffer bufParse; // 94
	int nArgvBufferSize; // 95
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 77
	}
	{
		char* pArgvBuf; // 98
		int nMaxLen; // 99
		int nStartGet; // 100
		int nSize; // 101
		{
			bool bFoundEndQuote; // 116
			bool bFoundStartQuote; // 126
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 122
			}
			CUtlBuffer::TellGet(); // 115
		}
		CUtlBuffer::TellGet(); // 100
		CCommand::Reset(); // 108
	}
	CCommand::Reset(); // 70
	V_strlen(const char* str); // 84
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 91
	CUtlBuffer::IsValid(); // 96
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 148
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <0443BF15> tier0_perproject/convar.cpp:154
// variables: 2
// function calls: 3
void CCommand::FindArg(const char* pName)
{
	int nArgC; // 156
	{
		int i; // 157
		CCommand::Arg(
			int nIndex);  // 159
		CCommand::Arg(
			int nIndex);  // 160
	}
	CCommand::ArgC(); // 156
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0443BE72> tier0_perproject/convar.cpp:165
// variable: 1
void CCommand::FindArgInt(const char* pName, int nDefaultVal)
{
	const char* pVal; // 167
} /* size: 0, variables: 1 */

// <0443BE2D> tier0_perproject/convar.cpp:178
void DefaultCompletionFunc(const char* partial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
} /* size: 5 */

// <0443BA6E> tier0_perproject/convar.cpp:191
// variables: 2
// function calls: 14
void ConCommand::ConCommand(const char* pName, FnCommandCallback_t callback, const char* pHelpString, int64 flags, FnCommandCompletionCallback completionFunc)
{
	{
		CallbackInfo_t info; // 200
	}
	ConCommandBase::ConCommandBase(); // 191
	{
		CallbackInfo_t info; // 200
		CUtlMemory<ConCommand::CallbackInfo_t, int>::Base(); // 112
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Base(); // 368
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::GrowMemory(
				int num);  // 1198
		CopyConstruct<ConCommand::CallbackInfo_t>(CallbackInfo_t* pMemory,
								const CallbackInfo_t& src);  // 1201
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::AddToTail(
				const CallbackInfo_t& src);  // 205
		CallbackInfo_t::CallbackInfo_t(); // 200
	}
	ConCommand::Create(
		const char* pName,
		const char* pHelpString,
		ConVarFlags_t flags);  // 209
	CUtlMemory<ConCommand::CallbackInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ConCommand::CallbackInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::CUtlVector(); // 191
} /* size: 216, inline expansions: 7 (123 bytes) */

// <0443BA0B> tier0_perproject/convar.cpp:191
// variable: 1
void ConCommand::ConCommand(const char* pName, FnCommandCallback_t callback, const char* pHelpString, int64 flags, FnCommandCompletionCallback completionFunc)
{
	{
		CallbackInfo_t info; // 200
	}
} /* size: 0 */

// <0443B681> tier0_perproject/convar.cpp:212
// variables: 2
// function calls: 14
void ConCommand::ConCommand(const char* pName, FnCommandCallbackVoid_t callback, const char* pHelpString, int64 flags, FnCommandCompletionCallback completionFunc)
{
	{
		CallbackInfo_t info; // 221
	}
	ConCommandBase::ConCommandBase(); // 212
	{
		CallbackInfo_t info; // 221
		CUtlMemory<ConCommand::CallbackInfo_t, int>::Base(); // 112
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Base(); // 368
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::GrowMemory(
				int num);  // 1198
		CopyConstruct<ConCommand::CallbackInfo_t>(CallbackInfo_t* pMemory,
								const CallbackInfo_t& src);  // 1201
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::AddToTail(
				const CallbackInfo_t& src);  // 227
		CallbackInfo_t::CallbackInfo_t(); // 221
	}
	ConCommand::Create(
		const char* pName,
		const char* pHelpString,
		ConVarFlags_t flags);  // 231
	CUtlMemory<ConCommand::CallbackInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ConCommand::CallbackInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::CUtlVector(); // 212
} /* size: 0, inline expansions: 7 (0 bytes) */

// <0443B61E> tier0_perproject/convar.cpp:212
// variable: 1
void ConCommand::ConCommand(const char* pName, FnCommandCallbackVoid_t callback, const char* pHelpString, int64 flags, FnCommandCompletionCallback completionFunc)
{
	{
		CallbackInfo_t info; // 221
	}
} /* size: 0 */

// <0443B294> tier0_perproject/convar.cpp:234
// variables: 2
// function calls: 14
void ConCommand::ConCommand(const char* pName, FnCommandCallbackNoContext_t callback, const char* pHelpString, int64 flags, FnCommandCompletionCallback completionFunc)
{
	{
		CallbackInfo_t info; // 243
	}
	ConCommandBase::ConCommandBase(); // 234
	{
		CallbackInfo_t info; // 243
		CUtlMemory<ConCommand::CallbackInfo_t, int>::Base(); // 112
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Base(); // 368
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::GrowMemory(
				int num);  // 1198
		CopyConstruct<ConCommand::CallbackInfo_t>(CallbackInfo_t* pMemory,
								const CallbackInfo_t& src);  // 1201
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::AddToTail(
				const CallbackInfo_t& src);  // 249
		CallbackInfo_t::CallbackInfo_t(); // 243
	}
	ConCommand::Create(
		const char* pName,
		const char* pHelpString,
		ConVarFlags_t flags);  // 253
	CUtlMemory<ConCommand::CallbackInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ConCommand::CallbackInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::CUtlVector(); // 234
} /* size: 0, inline expansions: 7 (0 bytes) */

// <0443B231> tier0_perproject/convar.cpp:234
// variable: 1
void ConCommand::ConCommand(const char* pName, FnCommandCallbackNoContext_t callback, const char* pHelpString, int64 flags, FnCommandCompletionCallback completionFunc)
{
	{
		CallbackInfo_t info; // 243
	}
} /* size: 0 */

// <0443AEA2> tier0_perproject/convar.cpp:256
// variables: 2
// function calls: 14
void ConCommand::ConCommand(const char* pName, ICommandCallback* pCallback, const char* pHelpString, int64 flags, ICommandCompletionCallback* pCompletionCallback)
{
	{
		CallbackInfo_t info; // 265
	}
	ConCommandBase::ConCommandBase(); // 256
	{
		CallbackInfo_t info; // 265
		CUtlMemory<ConCommand::CallbackInfo_t, int>::Base(); // 112
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Base(); // 368
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::GrowMemory(
				int num);  // 1198
		CopyConstruct<ConCommand::CallbackInfo_t>(CallbackInfo_t* pMemory,
								const CallbackInfo_t& src);  // 1201
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::AddToTail(
				const CallbackInfo_t& src);  // 269
		CallbackInfo_t::CallbackInfo_t(); // 265
	}
	ConCommand::Create(
		const char* pName,
		const char* pHelpString,
		ConVarFlags_t flags);  // 273
	CUtlMemory<ConCommand::CallbackInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ConCommand::CallbackInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::CUtlVector(); // 256
} /* size: 213, inline expansions: 7 (123 bytes) */

// <0443AE39> tier0_perproject/convar.cpp:256
// variable: 1
void ConCommand::ConCommand(const char* pName, ICommandCallback* pCallback, const char* pHelpString, int64 flags, ICommandCompletionCallback* pCompletionCallback)
{
	{
		CallbackInfo_t info; // 265
	}
} /* size: 0 */

// <0443D51C> tier0_perproject/convar.cpp:276
void ConCommand::Create(const char* pName, const char* pHelpString, ConVarFlags_t flags)
{
} /* size: 13 */

// <0443AC86> tier0_perproject/convar.cpp:284
// function calls: 7
void ConCommand::~ConCommand()
{
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<ConCommand::CallbackInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ConCommand::CallbackInfo_t, int>::Purge(); // 903
	CUtlMemory<ConCommand::CallbackInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Purge(); // 560
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::~CUtlVector(); // 293
} /* size: 138, inline expansions: 7 (358 bytes) */

// <0443AC21> tier0_perproject/convar.cpp:284
void ConCommand::~ConCommand()
{
} /* size: 36 */

// <0443ABDA> tier0_perproject/convar.cpp:299
void ConCommand::IsCommand()
{
} /* size: 10 */

// <0443A935> tier0_perproject/convar.cpp:308
// variables: 6
// function calls: 4
void ConCommand::Dispatch(const CCommandContext& ctx, const CCommand& command)
{
	CUtlVector<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >& callbacks; // 310
	const char   __FUNCTION__; // 17393
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 315
	}
	{
		int i; // 319
		{
			CallbackInfo_t& cb; // 321
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 352
			}
			CUtlMemory<ConCommand::CallbackInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::operator[](
					int i);  // 321
		}
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Count(); // 319
	}
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Count(); // 312
} /* size: 281, variables: 2, inline expansions: 1 (0 bytes) */

// <01C04216> tier0_perproject/convar.cpp:308
// variables: 6
// function calls: 4
void ConCommand::Dispatch(const CCommandContext& ctx, const CCommand& command)
{
	CUtlVector<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >& callbacks; // 310
	const char   __FUNCTION__; // 43975
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 315
	}
	{
		int i; // 319
		{
			CallbackInfo_t& cb; // 321
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 352
			}
			CUtlMemory<ConCommand::CallbackInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::operator[](
					int i);  // 321
		}
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Count(); // 319
	}
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Count(); // 312
} /* size: 281, variables: 2, inline expansions: 1 (0 bytes) */

// <00E3D9FE> tier0_perproject/convar.cpp:308
// variables: 6
// function calls: 4
void ConCommand::Dispatch(const CCommandContext& ctx, const CCommand& command)
{
	CUtlVector<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >& callbacks; // 310
	const char   __FUNCTION__; // 23405
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 315
	}
	{
		int i; // 319
		{
			CallbackInfo_t& cb; // 321
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 352
			}
			CUtlMemory<ConCommand::CallbackInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::operator[](
					int i);  // 321
		}
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Count(); // 319
	}
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Count(); // 312
} /* size: 281, variables: 2, inline expansions: 1 (0 bytes) */

// <00630DC4> tier0_perproject/convar.cpp:308
// variables: 6
// function calls: 4
void ConCommand::Dispatch(const CCommandContext& ctx, const CCommand& command)
{
	CUtlVector<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >& callbacks; // 310
	const char   __FUNCTION__; // 20184
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 315
	}
	{
		int i; // 319
		{
			CallbackInfo_t& cb; // 321
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 352
			}
			CUtlMemory<ConCommand::CallbackInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::operator[](
					int i);  // 321
		}
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Count(); // 319
	}
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Count(); // 312
} /* size: 281, variables: 2, inline expansions: 1 (0 bytes) */

// <005CE625> tier0_perproject/convar.cpp:308
// variables: 6
// function calls: 4
void ConCommand::Dispatch(const CCommandContext& ctx, const CCommand& command)
{
	CUtlVector<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >& callbacks; // 310
	const char   __FUNCTION__; // 36166
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 315
	}
	{
		int i; // 319
		{
			CallbackInfo_t& cb; // 321
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 352
			}
			CUtlMemory<ConCommand::CallbackInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::operator[](
					int i);  // 321
		}
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Count(); // 319
	}
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Count(); // 312
} /* size: 281, variables: 2, inline expansions: 1 (0 bytes) */

// <004EF48B> tier0_perproject/convar.cpp:308
// variables: 6
// function calls: 4
void ConCommand::Dispatch(const CCommandContext& ctx, const CCommand& command)
{
	CUtlVector<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >& callbacks; // 310
	const char   __FUNCTION__; // 295
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 315
	}
	{
		int i; // 319
		{
			CallbackInfo_t& cb; // 321
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 352
			}
			CUtlMemory<ConCommand::CallbackInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::operator[](
					int i);  // 321
		}
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Count(); // 319
	}
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Count(); // 312
} /* size: 281, variables: 2, inline expansions: 1 (0 bytes) */

// <00098878> tier0_perproject/convar.cpp:308
// variables: 6
// function calls: 4
void ConCommand::Dispatch(const CCommandContext& ctx, const CCommand& command)
{
	CUtlVector<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >& callbacks; // 310
	const char   __FUNCTION__; // 57929
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 315
	}
	{
		int i; // 319
		{
			CallbackInfo_t& cb; // 321
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 352
			}
			CUtlMemory<ConCommand::CallbackInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::operator[](
					int i);  // 321
		}
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Count(); // 319
	}
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Count(); // 312
} /* size: 281, variables: 2, inline expansions: 1 (0 bytes) */

// <0018613B> tier0_perproject/convar.cpp:308
// variables: 6
// function calls: 4
void ConCommand::Dispatch(const CCommandContext& ctx, const CCommand& command)
{
	CUtlVector<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >& callbacks; // 310
	const char   __FUNCTION__; // 44036
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 315
	}
	{
		int i; // 319
		{
			CallbackInfo_t& cb; // 321
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 352
			}
			CUtlMemory<ConCommand::CallbackInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::operator[](
					int i);  // 321
		}
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Count(); // 319
	}
	CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Count(); // 312
} /* size: 281, variables: 2, inline expansions: 1 (0 bytes) */

// <0443A82C> tier0_perproject/convar.cpp:360
// variables: 2
// function call: 1
void ConCommand::AutoCompleteSuggest(const char* partial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 11456
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 369
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 373
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <01C0410D> tier0_perproject/convar.cpp:360
// variables: 2
// function call: 1
void ConCommand::AutoCompleteSuggest(const char* partial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 38038
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 369
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 373
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <00E3D8F5> tier0_perproject/convar.cpp:360
// variables: 2
// function call: 1
void ConCommand::AutoCompleteSuggest(const char* partial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 17468
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 369
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 373
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <00630CBB> tier0_perproject/convar.cpp:360
// variables: 2
// function call: 1
void ConCommand::AutoCompleteSuggest(const char* partial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 14247
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 369
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 373
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <005CE51C> tier0_perproject/convar.cpp:360
// variables: 2
// function call: 1
void ConCommand::AutoCompleteSuggest(const char* partial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 30229
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 369
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 373
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <004EF382> tier0_perproject/convar.cpp:360
// variables: 2
// function call: 1
void ConCommand::AutoCompleteSuggest(const char* partial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 59894
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 369
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 373
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <006FF4D0> tier0_perproject/convar.cpp:360
// variables: 2
// function call: 1
void ConCommand::AutoCompleteSuggest(const char* partial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 8521
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 369
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 373
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <00186032> tier0_perproject/convar.cpp:360
// variables: 2
// function call: 1
void ConCommand::AutoCompleteSuggest(const char* partial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 38099
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 369
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 373
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <0443A7FE> tier0_perproject/convar.cpp:380
void ConCommand::CanAutoComplete()
{
} /* size: 16 */

// <0443A64C> tier0_perproject/convar.cpp:397
// function calls: 8
void ConVar::~ConVar()
{
	CUtlVectorBase<void (::RemoveAll()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 1798
	CUtlMemory<void (::IsExternallyAllocated()(IConVar*, char const*, float), int>* this); // 905
	CUtlMemory<void (::Purge()(IConVar*, char const*, float), int>* this); // 903
	CUtlMemory<void (::Purge()(IConVar*, char const*, float), int>* this); // 1799
	CUtlVectorBase<void (::Purge()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 560
	CUtlVectorBase<void (::~CUtlVectorBase()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 410
	CUtlVector<void (::~CUtlVector()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 413
	ConCommandBase::IsPlaceholder(); // 400
} /* size: 154, inline expansions: 8 (166 bytes) */

// <0443A5E7> tier0_perproject/convar.cpp:397
void ConVar::~ConVar()
{
} /* size: 36 */

// <0443A274> tier0_perproject/convar.cpp:419
// variable: 1
// function calls: 14
void ConVar::InstallChangeCallback(FnChangeCallback_t callback, bool bInvoke)
{
	{
		int i; // 1531
		CUtlVectorBase<void (::Count()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int this); // 1531
		CUtlMemory<void (::operator[](
				int i);  // 609
		CUtlVectorBase<void (::Element(
			int i);  // 1533
	}
	CUtlVectorBase<void (::Find(
		void ()(IConVar *, const char *, float)* const& src);  // 427
	CUtlMemory<void (::NumAllocated()(IConVar*, char const*, float), int>* this); // 1196
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1201
	CopyConstruct<void (*)(IConVar*, char const*, float)>(void ()(IConVar *, const char *, float)** pMemory,
								void ()(IConVar *, const char *, float)* const& src); // 1201
	CUtlMemory<void (::Base()(IConVar*, char const*, float), int>* this); // 112
	CUtlVectorBase<void (::Base()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 368
	CUtlVectorBase<void (::ResetDbgInfo()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 824
	CUtlVectorBase<void (::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<void (::AddToTail(
			void ()(IConVar *, const char *, float)* const& src);  // 434
} /* size: 0, inline expansions: 10 (0 bytes) */

// <04439F7E> tier0_perproject/convar.cpp:443
// variable: 1
// function calls: 13
void ConVar::RemoveChangeCallback(FnChangeCallback_t callback)
{
	{
		int i; // 1531
		CUtlVectorBase<void (::Count()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int this); // 1531
		CUtlMemory<void (::operator[](
				int i);  // 609
		CUtlVectorBase<void (::Element(
			int i);  // 1533
	}
	CUtlVectorBase<void (::Find(
		void ()(IConVar *, const char *, float)* const& src);  // 1617
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1114
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<void (::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<void (::Remove(
		int elem);  // 1620
	CUtlVectorBase<void (::FindAndRemove(
			void ()(IConVar *, const char *, float)* const& src);  // 445
} /* size: 0, inline expansions: 10 (0 bytes) */

// <0443D2B6> tier0_perproject/convar.cpp:448
void ConVar::IsFlagSet(ConVarFlags_t flag)
{
} /* size: 16 */

// <04439F2A> tier0_perproject/convar.cpp:453
void ConVar::GetFlags()
{
} /* size: 13 */

// <04439EFC> tier0_perproject/convar.cpp:458
void ConVar::GetHelpText()
{
} /* size: 13 */

// <0443D2EC> tier0_perproject/convar.cpp:463
// function call: 1
void ConVar::AddFlags(ConVarFlags_t flags)
{
	operator|=(ConVarFlags_t& a,
			ConVarFlags_t b);  // 465
} /* size: 13, inline expansions: 1 (4 bytes) */

// <04439ED6> tier0_perproject/convar.cpp:463
void ConVar::AddFlags(ConVarFlags_t flags)
{
} /* size: 0 */

// <04439EA8> tier0_perproject/convar.cpp:468
void ConVar::IsRegistered()
{
} /* size: 13 */

// <0443D359> tier0_perproject/convar.cpp:473
void ConVar::GetName()
{
} /* size: 13 */

// <04439E76> tier0_perproject/convar.cpp:478
void ConVar::GetBaseName()
{
} /* size: 0 */

// <04439E48> tier0_perproject/convar.cpp:487
void ConVar::IsCommand()
{
} /* size: 7 */

// <04439DFE> tier0_perproject/convar.cpp:496
void ConVar::Init()
{
} /* size: 9 */

// <04439D00> tier0_perproject/convar.cpp:501
// variables: 4
void ConVar::InternalSetColorFromString(const char* value)
{
	bool bColor; // 503
	int nRGBA; // 506
	int nParamsRead; // 507
	{
		unsigned char* pColorElement; // 527
	}
} /* size: 244, variables: 3 */

// <044399CB> tier0_perproject/convar.cpp:545
// variables: 9
// function calls: 4
void ConVar::InternalSetValue(const char* value)
{
	char tempVal; // 547
	const char* val; // 548
	const char   __FUNCTION__; // 13591
	float flOldValue; // 552
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 550
	}
	{
		bool bIsTrue; // 559
		bool bIsFalse; // 560
		{
			float64 fNewValue; // 564
			float fClampedValue; // 572
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 565
			ConVar::ClampValue(
					float& value);  // 573
			ConVar::GetName(); // 567
		}
	}
} /* size: 0, variables: 4 */

// <01C032AC> tier0_perproject/convar.cpp:545
// variables: 9
// function calls: 4
void ConVar::InternalSetValue(const char* value)
{
	char tempVal; // 547
	const char* val; // 548
	const char   __FUNCTION__; // 40173
	float flOldValue; // 552
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 550
	}
	{
		bool bIsTrue; // 559
		bool bIsFalse; // 560
		{
			float64 fNewValue; // 564
			float fClampedValue; // 572
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 565
			ConVar::ClampValue(
					float& value);  // 573
			ConVar::GetName(); // 567
		}
	}
} /* size: 0, variables: 4 */

// <0062FE5A> tier0_perproject/convar.cpp:545
// variables: 9
// function calls: 4
void ConVar::InternalSetValue(const char* value)
{
	char tempVal; // 547
	const char* val; // 548
	const char   __FUNCTION__; // 16382
	float flOldValue; // 552
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 550
	}
	{
		bool bIsTrue; // 559
		bool bIsFalse; // 560
		{
			float64 fNewValue; // 564
			float fClampedValue; // 572
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 565
			ConVar::ClampValue(
					float& value);  // 573
			ConVar::GetName(); // 567
		}
	}
} /* size: 0, variables: 4 */

// <005CD6BB> tier0_perproject/convar.cpp:545
// variables: 9
// function calls: 4
void ConVar::InternalSetValue(const char* value)
{
	char tempVal; // 547
	const char* val; // 548
	const char   __FUNCTION__; // 32364
	float flOldValue; // 552
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 550
	}
	{
		bool bIsTrue; // 559
		bool bIsFalse; // 560
		{
			float64 fNewValue; // 564
			float fClampedValue; // 572
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 565
			ConVar::ClampValue(
					float& value);  // 573
			ConVar::GetName(); // 567
		}
	}
} /* size: 0, variables: 4 */

// <001851D1> tier0_perproject/convar.cpp:545
// variables: 9
// function calls: 4
void ConVar::InternalSetValue(const char* value)
{
	char tempVal; // 547
	const char* val; // 548
	const char   __FUNCTION__; // 40234
	float flOldValue; // 552
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 550
	}
	{
		bool bIsTrue; // 559
		bool bIsFalse; // 560
		{
			float64 fNewValue; // 564
			float fClampedValue; // 572
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 565
			ConVar::ClampValue(
					float& value);  // 573
			ConVar::GetName(); // 567
		}
	}
} /* size: 0, variables: 4 */

// <04439649> tier0_perproject/convar.cpp:606
// variables: 3
// function calls: 8
void ConVar::ChangeStringValue(const char* tempVal, float flOldValue)
{
	char* pszOldValue; // 608
	int len; // 611
	{
		int i; // 627
		CUtlVectorBase<void (::Count()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int this); // 627
		CUtlMemory<void (::operator[](
				int i);  // 588
		CUtlVectorBase<void (::operator[](
				int i);  // 629
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 609
	V_strlen(const char* str); // 611
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 624
} /* size: 519, variables: 2, inline expansions: 5 (85 bytes) */

// <0443D382> tier0_perproject/convar.cpp:647
void ConVar::ClampValue(float& value)
{
} /* size: 58 */

// <044394A9> tier0_perproject/convar.cpp:668
// variables: 4
// function call: 1
void ConVar::InternalSetFloatValue(float fNewValue)
{
	const char   __FUNCTION__; // 11834
	float flOldValue; // 679
	char tempVal; // 683
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	ConVar::ClampValue(
			float& value);  // 676
} /* size: 0, variables: 3, inline expansions: 1 (59 bytes) */

// <01C02D8A> tier0_perproject/convar.cpp:668
// variables: 4
// function call: 1
void ConVar::InternalSetFloatValue(float fNewValue)
{
	const char   __FUNCTION__; // 38416
	float flOldValue; // 679
	char tempVal; // 683
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	ConVar::ClampValue(
			float& value);  // 676
} /* size: 0, variables: 3, inline expansions: 1 (59 bytes) */

// <00E3C572> tier0_perproject/convar.cpp:668
// variables: 4
// function call: 1
void ConVar::InternalSetFloatValue(float fNewValue)
{
	const char   __FUNCTION__; // 17846
	float flOldValue; // 679
	char tempVal; // 683
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	ConVar::ClampValue(
			float& value);  // 676
} /* size: 0, variables: 3, inline expansions: 1 (59 bytes) */

// <0062F938> tier0_perproject/convar.cpp:668
// variables: 4
// function call: 1
void ConVar::InternalSetFloatValue(float fNewValue)
{
	const char   __FUNCTION__; // 14625
	float flOldValue; // 679
	char tempVal; // 683
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	ConVar::ClampValue(
			float& value);  // 676
} /* size: 0, variables: 3, inline expansions: 1 (59 bytes) */

// <00259DA1> tier0_perproject/convar.cpp:668
// variables: 4
// function call: 1
void ConVar::InternalSetFloatValue(float fNewValue)
{
	const char   __FUNCTION__; // 12311
	float flOldValue; // 679
	char tempVal; // 683
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	ConVar::ClampValue(
			float& value);  // 676
} /* size: 0, variables: 3, inline expansions: 1 (59 bytes) */

// <005CD199> tier0_perproject/convar.cpp:668
// variables: 4
// function call: 1
void ConVar::InternalSetFloatValue(float fNewValue)
{
	const char   __FUNCTION__; // 30607
	float flOldValue; // 679
	char tempVal; // 683
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	ConVar::ClampValue(
			float& value);  // 676
} /* size: 0, variables: 3, inline expansions: 1 (59 bytes) */

// <006FE14D> tier0_perproject/convar.cpp:668
// variables: 4
// function call: 1
void ConVar::InternalSetFloatValue(float fNewValue)
{
	const char   __FUNCTION__; // 8899
	float flOldValue; // 679
	char tempVal; // 683
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	ConVar::ClampValue(
			float& value);  // 676
} /* size: 0, variables: 3, inline expansions: 1 (59 bytes) */

// <00184CAF> tier0_perproject/convar.cpp:668
// variables: 4
// function call: 1
void ConVar::InternalSetFloatValue(float fNewValue)
{
	const char   __FUNCTION__; // 38477
	float flOldValue; // 679
	char tempVal; // 683
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	ConVar::ClampValue(
			float& value);  // 676
} /* size: 0, variables: 3, inline expansions: 1 (59 bytes) */

// <0443931E> tier0_perproject/convar.cpp:693
// variables: 5
// function call: 1
void ConVar::InternalSetIntValue(int nValue)
{
	const char   __FUNCTION__; // 11456
	float fValue; // 701
	float flOldValue; // 708
	char tempVal; // 712
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 699
	}
	ConVar::ClampValue(
			float& value);  // 702
} /* size: 0, variables: 4, inline expansions: 1 (40 bytes) */

// <01C02BFF> tier0_perproject/convar.cpp:693
// variables: 5
// function call: 1
void ConVar::InternalSetIntValue(int nValue)
{
	const char   __FUNCTION__; // 38038
	float fValue; // 701
	float flOldValue; // 708
	char tempVal; // 712
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 699
	}
	ConVar::ClampValue(
			float& value);  // 702
} /* size: 0, variables: 4, inline expansions: 1 (40 bytes) */

// <00E3C3E7> tier0_perproject/convar.cpp:693
// variables: 5
// function call: 1
void ConVar::InternalSetIntValue(int nValue)
{
	const char   __FUNCTION__; // 17468
	float fValue; // 701
	float flOldValue; // 708
	char tempVal; // 712
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 699
	}
	ConVar::ClampValue(
			float& value);  // 702
} /* size: 0, variables: 4, inline expansions: 1 (40 bytes) */

// <0062F7AD> tier0_perproject/convar.cpp:693
// variables: 5
// function call: 1
void ConVar::InternalSetIntValue(int nValue)
{
	const char   __FUNCTION__; // 14247
	float fValue; // 701
	float flOldValue; // 708
	char tempVal; // 712
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 699
	}
	ConVar::ClampValue(
			float& value);  // 702
} /* size: 0, variables: 4, inline expansions: 1 (40 bytes) */

// <005CD00E> tier0_perproject/convar.cpp:693
// variables: 5
// function call: 1
void ConVar::InternalSetIntValue(int nValue)
{
	const char   __FUNCTION__; // 30229
	float fValue; // 701
	float flOldValue; // 708
	char tempVal; // 712
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 699
	}
	ConVar::ClampValue(
			float& value);  // 702
} /* size: 0, variables: 4, inline expansions: 1 (40 bytes) */

// <004EDE74> tier0_perproject/convar.cpp:693
// variables: 5
// function call: 1
void ConVar::InternalSetIntValue(int nValue)
{
	const char   __FUNCTION__; // 59894
	float fValue; // 701
	float flOldValue; // 708
	char tempVal; // 712
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 699
	}
	ConVar::ClampValue(
			float& value);  // 702
} /* size: 0, variables: 4, inline expansions: 1 (40 bytes) */

// <006FDFC2> tier0_perproject/convar.cpp:693
// variables: 5
// function call: 1
void ConVar::InternalSetIntValue(int nValue)
{
	const char   __FUNCTION__; // 8521
	float fValue; // 701
	float flOldValue; // 708
	char tempVal; // 712
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 699
	}
	ConVar::ClampValue(
			float& value);  // 702
} /* size: 0, variables: 4, inline expansions: 1 (40 bytes) */

// <00184B24> tier0_perproject/convar.cpp:693
// variables: 5
// function call: 1
void ConVar::InternalSetIntValue(int nValue)
{
	const char   __FUNCTION__; // 38099
	float fValue; // 701
	float flOldValue; // 708
	char tempVal; // 712
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 699
	}
	ConVar::ClampValue(
			float& value);  // 702
} /* size: 0, variables: 4, inline expansions: 1 (40 bytes) */

// <0443D3B2> tier0_perproject/convar.cpp:722
// variable: 1
void ConVar::InternalSetColorValue(Color value)
{
	union  nValue; // 730
} /* size: 13, variables: 1 */

// <04438BE9> tier0_perproject/convar.cpp:744
// variables: 8
// function calls: 15
void ConVar::Construct(const char* pName, const char* pDefaultValue, ConVarFlags_t flags, const char* pHelpString, bool bMin, float fMin, bool bMax, float fMax, FnChangeCallback_t callback)
{
	const char* empty_string; // 748
	const char   __FUNCTION__; // 10851
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 754
	}
	{
		bool bIsTrue; // 772
		bool bIsFalse; // 773
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 781
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 787
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
		}
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 777
	}
	CUtlMemory<void (::NumAllocated()(IConVar*, char const*, float), int>* this); // 1196
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1201
	CopyConstruct<void (*)(IConVar*, char const*, float)>(void ()(IConVar *, const char *, float)** pMemory,
								void ()(IConVar *, const char *, float)* const& src); // 1201
	CUtlMemory<void (::Base()(IConVar*, char const*, float), int>* this); // 112
	CUtlVectorBase<void (::Base()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 368
	CUtlVectorBase<void (::ResetDbgInfo()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 824
	CUtlVectorBase<void (::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<void (::AddToTail(
			void ()(IConVar *, const char *, float)* const& src);  // 763
	V_strlen(const char* str); // 766
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 768
} /* size: 0, variables: 2, inline expansions: 12 (219 bytes) */

// <01C024CA> tier0_perproject/convar.cpp:744
// variables: 8
// function calls: 15
void ConVar::Construct(const char* pName, const char* pDefaultValue, ConVarFlags_t flags, const char* pHelpString, bool bMin, float fMin, bool bMax, float fMax, FnChangeCallback_t callback)
{
	const char* empty_string; // 748
	const char   __FUNCTION__; // 37433
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 754
	}
	{
		bool bIsTrue; // 772
		bool bIsFalse; // 773
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 781
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 787
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
		}
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 777
	}
	CUtlMemory<void (::NumAllocated()(IConVar*, char const*, float), int>* this); // 1196
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1201
	CopyConstruct<void (*)(IConVar*, char const*, float)>(void ()(IConVar *, const char *, float)** pMemory,
								void ()(IConVar *, const char *, float)* const& src); // 1201
	CUtlMemory<void (::Base()(IConVar*, char const*, float), int>* this); // 112
	CUtlVectorBase<void (::Base()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 368
	CUtlVectorBase<void (::ResetDbgInfo()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 824
	CUtlVectorBase<void (::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<void (::AddToTail(
			void ()(IConVar *, const char *, float)* const& src);  // 763
	V_strlen(const char* str); // 766
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 768
} /* size: 0, variables: 2, inline expansions: 12 (219 bytes) */

// <00E3BCB2> tier0_perproject/convar.cpp:744
// variables: 8
// function calls: 15
void ConVar::Construct(const char* pName, const char* pDefaultValue, ConVarFlags_t flags, const char* pHelpString, bool bMin, float fMin, bool bMax, float fMax, FnChangeCallback_t callback)
{
	const char* empty_string; // 748
	const char   __FUNCTION__; // 16863
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 754
	}
	{
		bool bIsTrue; // 772
		bool bIsFalse; // 773
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 781
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 787
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
		}
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 777
	}
	CUtlMemory<void (::NumAllocated()(IConVar*, char const*, float), int>* this); // 1196
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1201
	CopyConstruct<void (*)(IConVar*, char const*, float)>(void ()(IConVar *, const char *, float)** pMemory,
								void ()(IConVar *, const char *, float)* const& src); // 1201
	CUtlMemory<void (::Base()(IConVar*, char const*, float), int>* this); // 112
	CUtlVectorBase<void (::Base()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 368
	CUtlVectorBase<void (::ResetDbgInfo()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 824
	CUtlVectorBase<void (::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<void (::AddToTail(
			void ()(IConVar *, const char *, float)* const& src);  // 763
	V_strlen(const char* str); // 766
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 768
} /* size: 0, variables: 2, inline expansions: 12 (219 bytes) */

// <0062F078> tier0_perproject/convar.cpp:744
// variables: 8
// function calls: 15
void ConVar::Construct(const char* pName, const char* pDefaultValue, ConVarFlags_t flags, const char* pHelpString, bool bMin, float fMin, bool bMax, float fMax, FnChangeCallback_t callback)
{
	const char* empty_string; // 748
	const char   __FUNCTION__; // 13642
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 754
	}
	{
		bool bIsTrue; // 772
		bool bIsFalse; // 773
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 781
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 787
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
		}
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 777
	}
	CUtlMemory<void (::NumAllocated()(IConVar*, char const*, float), int>* this); // 1196
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1201
	CopyConstruct<void (*)(IConVar*, char const*, float)>(void ()(IConVar *, const char *, float)** pMemory,
								void ()(IConVar *, const char *, float)* const& src); // 1201
	CUtlMemory<void (::Base()(IConVar*, char const*, float), int>* this); // 112
	CUtlVectorBase<void (::Base()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 368
	CUtlVectorBase<void (::ResetDbgInfo()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 824
	CUtlVectorBase<void (::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<void (::AddToTail(
			void ()(IConVar *, const char *, float)* const& src);  // 763
	V_strlen(const char* str); // 766
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 768
} /* size: 0, variables: 2, inline expansions: 12 (219 bytes) */

// <005CC8D9> tier0_perproject/convar.cpp:744
// variables: 8
// function calls: 15
void ConVar::Construct(const char* pName, const char* pDefaultValue, ConVarFlags_t flags, const char* pHelpString, bool bMin, float fMin, bool bMax, float fMax, FnChangeCallback_t callback)
{
	const char* empty_string; // 748
	const char   __FUNCTION__; // 29624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 754
	}
	{
		bool bIsTrue; // 772
		bool bIsFalse; // 773
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 781
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 787
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
		}
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 777
	}
	CUtlMemory<void (::NumAllocated()(IConVar*, char const*, float), int>* this); // 1196
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1201
	CopyConstruct<void (*)(IConVar*, char const*, float)>(void ()(IConVar *, const char *, float)** pMemory,
								void ()(IConVar *, const char *, float)* const& src); // 1201
	CUtlMemory<void (::Base()(IConVar*, char const*, float), int>* this); // 112
	CUtlVectorBase<void (::Base()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 368
	CUtlVectorBase<void (::ResetDbgInfo()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 824
	CUtlVectorBase<void (::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<void (::AddToTail(
			void ()(IConVar *, const char *, float)* const& src);  // 763
	V_strlen(const char* str); // 766
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 768
} /* size: 0, variables: 2, inline expansions: 12 (219 bytes) */

// <004ED73F> tier0_perproject/convar.cpp:744
// variables: 8
// function calls: 15
void ConVar::Construct(const char* pName, const char* pDefaultValue, ConVarFlags_t flags, const char* pHelpString, bool bMin, float fMin, bool bMax, float fMax, FnChangeCallback_t callback)
{
	const char* empty_string; // 748
	const char   __FUNCTION__; // 59289
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 754
	}
	{
		bool bIsTrue; // 772
		bool bIsFalse; // 773
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 781
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 787
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
		}
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 777
	}
	CUtlMemory<void (::NumAllocated()(IConVar*, char const*, float), int>* this); // 1196
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1201
	CopyConstruct<void (*)(IConVar*, char const*, float)>(void ()(IConVar *, const char *, float)** pMemory,
								void ()(IConVar *, const char *, float)* const& src); // 1201
	CUtlMemory<void (::Base()(IConVar*, char const*, float), int>* this); // 112
	CUtlVectorBase<void (::Base()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 368
	CUtlVectorBase<void (::ResetDbgInfo()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 824
	CUtlVectorBase<void (::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<void (::AddToTail(
			void ()(IConVar *, const char *, float)* const& src);  // 763
	V_strlen(const char* str); // 766
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 768
} /* size: 0, variables: 2, inline expansions: 12 (219 bytes) */

// <006FD88D> tier0_perproject/convar.cpp:744
// variables: 8
// function calls: 15
void ConVar::Construct(const char* pName, const char* pDefaultValue, ConVarFlags_t flags, const char* pHelpString, bool bMin, float fMin, bool bMax, float fMax, FnChangeCallback_t callback)
{
	const char* empty_string; // 748
	const char   __FUNCTION__; // 7916
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 754
	}
	{
		bool bIsTrue; // 772
		bool bIsFalse; // 773
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 781
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 787
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
		}
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 777
	}
	CUtlMemory<void (::NumAllocated()(IConVar*, char const*, float), int>* this); // 1196
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1201
	CopyConstruct<void (*)(IConVar*, char const*, float)>(void ()(IConVar *, const char *, float)** pMemory,
								void ()(IConVar *, const char *, float)* const& src); // 1201
	CUtlMemory<void (::Base()(IConVar*, char const*, float), int>* this); // 112
	CUtlVectorBase<void (::Base()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 368
	CUtlVectorBase<void (::ResetDbgInfo()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 824
	CUtlVectorBase<void (::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<void (::AddToTail(
			void ()(IConVar *, const char *, float)* const& src);  // 763
	V_strlen(const char* str); // 766
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 768
} /* size: 0, variables: 2, inline expansions: 12 (219 bytes) */

// <001843EF> tier0_perproject/convar.cpp:744
// variables: 8
// function calls: 15
void ConVar::Construct(const char* pName, const char* pDefaultValue, ConVarFlags_t flags, const char* pHelpString, bool bMin, float fMin, bool bMax, float fMax, FnChangeCallback_t callback)
{
	const char* empty_string; // 748
	const char   __FUNCTION__; // 37494
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 754
	}
	{
		bool bIsTrue; // 772
		bool bIsFalse; // 773
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 781
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 787
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
		}
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 777
	}
	CUtlMemory<void (::NumAllocated()(IConVar*, char const*, float), int>* this); // 1196
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1201
	CopyConstruct<void (*)(IConVar*, char const*, float)>(void ()(IConVar *, const char *, float)** pMemory,
								void ()(IConVar *, const char *, float)* const& src); // 1201
	CUtlMemory<void (::Base()(IConVar*, char const*, float), int>* this); // 112
	CUtlVectorBase<void (::Base()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 368
	CUtlVectorBase<void (::ResetDbgInfo()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 824
	CUtlVectorBase<void (::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<void (::AddToTail(
			void ()(IConVar *, const char *, float)* const& src);  // 763
	V_strlen(const char* str); // 766
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 768
} /* size: 0, variables: 2, inline expansions: 12 (219 bytes) */

// <0443D406> tier0_perproject/convar.cpp:819
// variable: 1
void ConVar::SetValue(const char* value)
{
	ConVar* var; // 821
} /* size: 17, variables: 1 */

// <0443D462> tier0_perproject/convar.cpp:829
// variable: 1
void ConVar::SetValue(float value)
{
	ConVar* var; // 831
} /* size: 17, variables: 1 */

// <0443D4C0> tier0_perproject/convar.cpp:839
// variable: 1
void ConVar::SetValue(int value)
{
	ConVar* var; // 841
} /* size: 17, variables: 1 */

// <04438AB0> tier0_perproject/convar.cpp:849
// variable: 1
// function call: 1
void ConVar::SetValue(Color value)
{
	ConVar* var; // 851
	ConVar::InternalSetColorValue(
				Color value);  // 852
} /* size: 42, variables: 1, inline expansions: 1 (10 bytes) */

// <04438A1D> tier0_perproject/convar.cpp:858
// variable: 1
// function call: 1
void ConVar::Revert()
{
	ConVar* var; // 861
	ConVar::SetValue(
		const char* value);  // 862
} /* size: 50, variables: 1, inline expansions: 1 (17 bytes) */

