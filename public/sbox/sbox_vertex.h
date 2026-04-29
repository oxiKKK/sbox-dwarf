
//
// public/sbox/sbox_vertex.h
//
//	referenced by: libengine2.so
//
//	functions: 5
//	struct: 1
//

// <01B57C2F> ../public/sbox/sbox_vertex.h:5
void SboxVertex_t::SboxVertex_t(const SboxVertex_t &)
{
} /* size: 0 */

// <01B57C0E> ../public/sbox/sbox_vertex.h:5
inline void SboxVertex_t::SboxVertex_t(const SboxVertex_t &)
{
} /* size: 0 */

// <01B56EE9> ../public/sbox/sbox_vertex.h:5
void SboxVertex_t::SboxVertex_t()
{
} /* size: 0 */

// <01B56ECD> ../public/sbox/sbox_vertex.h:5
inline void SboxVertex_t::SboxVertex_t()
{
} /* size: 0 */

// <011D3ADE> ../public/sbox/sbox_vertex.h:5
// member functions: 3
// member variables: 7
// struct size: 76
struct SboxVertex_t : public CBaseVertex {
public:
	/* class CBaseVertex <ancestor>; */ /* 0 0 */
	Vector m_vecPos; /* 0 12 */
	VertexColor_t m_color; /* 12 4 */
	Vector m_vecNormal; /* 16 12 */
	Vector4D m_vecUV0; /* 28 16 */
	Vector4D m_vecUV1; /* 44 16 */
	Vector4D m_vTangent; /* 60 16 */
	/* ../public/sbox/sbox_vertex.h:14 */
	float* Position(SboxVertex_t* );
	/* ../public/sbox/sbox_vertex.h:16 */
	Vector GetPosition(const SboxVertex_t* );
	/* ../public/sbox/sbox_vertex.h:18 */
	RenderInputLayout_t GetLayout(void);
};

// <01B5EDCC> ../public/sbox/sbox_vertex.h:18
// variables: 2
// function calls: 20
void GetLayout(void)
{
	CTSInputLayoutCreator inputLayoutCreator; // 20
	RenderInputLayoutField_t uvTangentVertexLayout; // 26
	CThreadSyncValue<bool>::Load(); // 34
	CTSInputLayoutCreator::IsInitialized(); // 22
	CThreadSyncValue<bool>::Load(); // 60
	{
	}
	CTSInputLayoutCreator::GetLayout(); // 23
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
			int nLineNumber);  // 39
	CThreadSyncValue<bool>::Load(); // 34
	CTSInputLayoutCreator::IsInitialized(); // 40
	CThreadSyncValue<bool>::Store(
		bool value);  // 43
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 46
	CTSInputLayoutCreator::CreateLayout(
			const char* pLayoutName,
			int nFieldCount,
			const RenderInputLayoutField_t* pFieldDescs);  // 36
	CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
	CTSInputLayoutCreator::CTSInputLayoutCreator(); // 20
} /* size: 587, variables: 2, inline expansions: 20 (593 bytes) */

