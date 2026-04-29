
//
// public/scenesystem/vertexformat.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//
//	functions: 78
//	class: 1
//	structs: 18
//

// <0010F226> ../public/scenesystem/vertexformat.h:20
// member functions: 10
// member variables: 2
// class size: 16
class CTSInputLayoutCreator {
	/* ../public/scenesystem/vertexformat.h:23 */
	void CTSInputLayoutCreator(CTSInputLayoutCreator* );
	/* ../public/scenesystem/vertexformat.h:32 */
	bool IsInitialized(CTSInputLayoutCreator* );
	/* ../public/scenesystem/vertexformat.h:37 */
	RenderInputLayout_t CreateLayout(CTSInputLayoutCreator* , const char* , int, const RenderInputLayoutField_t* );
	/* ../public/scenesystem/vertexformat.h:48 */
	void DestroyLayout(CTSInputLayoutCreator* );
	/* ../public/scenesystem/vertexformat.h:58 */
	RenderInputLayout_t GetLayout(CTSInputLayoutCreator* );
private:
	CThreadSyncValue<bool> m_bInitialized; /* 0 1 */
	RenderInputLayout_t m_hLayout; /* 8 8 */
	void CTSInputLayoutCreator(class CTSInputLayoutCreator *); /* linkage=_ZN21CTSInputLayoutCreatorC4Ev */
	bool IsInitialized(class CTSInputLayoutCreator *); /* linkage=_ZN21CTSInputLayoutCreator13IsInitializedEv */
	RenderInputLayout_t CreateLayout(class CTSInputLayoutCreator *, const char  *, int, const class RenderInputLayoutField_t  *); /* linkage=_ZN21CTSInputLayoutCreator12CreateLayoutEPKciPK24RenderInputLayoutField_t */
	void DestroyLayout(class CTSInputLayoutCreator *); /* linkage=_ZN21CTSInputLayoutCreator13DestroyLayoutEv */
	RenderInputLayout_t GetLayout(class CTSInputLayoutCreator *); /* linkage=_ZN21CTSInputLayoutCreator9GetLayoutEv */
};

// <066B5934> ../public/scenesystem/vertexformat.h:23
void CTSInputLayoutCreator::CTSInputLayoutCreator()
{
} /* size: 0 */

// <066B591B> ../public/scenesystem/vertexformat.h:23
inline void CTSInputLayoutCreator::CTSInputLayoutCreator()
{
} /* size: 0 */

// <064689EA> ../public/scenesystem/vertexformat.h:32
inline void CTSInputLayoutCreator::IsInitialized()
{
} /* size: 0 */

// <064689A1> ../public/scenesystem/vertexformat.h:37
// variable: 1
inline void CTSInputLayoutCreator::CreateLayout(const char* pLayoutName, int nFieldCount, const RenderInputLayoutField_t* pFieldDescs)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_39; // 39
} /* size: 0, variables: 1 */

// <00496C64> ../public/scenesystem/vertexformat.h:48
// variable: 1
inline void CTSInputLayoutCreator::DestroyLayout()
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_50; // 50
} /* size: 0, variables: 1 */

// <06468988> ../public/scenesystem/vertexformat.h:58
inline void CTSInputLayoutCreator::GetLayout()
{
} /* size: 0 */

// <03C41ADE> ../public/scenesystem/vertexformat.h:58
// variables: 2
inline void CTSInputLayoutCreator::GetLayout()
{
	const char   __FUNCTION__; // 59398
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 60
	}
} /* size: 0, variables: 1 */

// <03AF677F> ../public/scenesystem/vertexformat.h:58
// variables: 2
inline void CTSInputLayoutCreator::GetLayout()
{
	const char   __FUNCTION__; // 15953
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 60
	}
} /* size: 0, variables: 1 */

// <039350B4> ../public/scenesystem/vertexformat.h:58
// variables: 2
inline void CTSInputLayoutCreator::GetLayout()
{
	const char   __FUNCTION__; // 61941
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 60
	}
} /* size: 0, variables: 1 */

// <033CAC50> ../public/scenesystem/vertexformat.h:58
// variables: 2
inline void CTSInputLayoutCreator::GetLayout()
{
	const char   __FUNCTION__; // 54051
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 60
	}
} /* size: 0, variables: 1 */

// <0317CD61> ../public/scenesystem/vertexformat.h:58
// variables: 2
inline void CTSInputLayoutCreator::GetLayout()
{
	const char   __FUNCTION__; // 38838
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 60
	}
} /* size: 0, variables: 1 */

// <033AF152> ../public/scenesystem/vertexformat.h:72
inline void Vertex2DPos_t::operator=(const Vertex2DPos_t &)
{
} /* size: 0 */

// <033AC6D5> ../public/scenesystem/vertexformat.h:72
void Vertex2DPos_t::Vertex2DPos_t()
{
} /* size: 0 */

// <033AC6B9> ../public/scenesystem/vertexformat.h:72
inline void Vertex2DPos_t::Vertex2DPos_t()
{
} /* size: 0 */

// <033954C5> ../public/scenesystem/vertexformat.h:72
// member functions: 3
// member variable: 1
// struct size: 8
struct Vertex2DPos_t {
	Vector2D m_vecCoord; /* 0 8 */
	/* ../public/scenesystem/vertexformat.h:76 */
	RenderInputLayout_t GetLayout(void);
	void Vertex2DPos_t(Vertex2DPos_t* );
	Vertex2DPos_t& operator=(Vertex2DPos_t* , const Vertex2DPos_t& );
};

// <0645B794> ../public/scenesystem/vertexformat.h:103
inline void VertexPos_t::operator=(const VertexPos_t &)
{
} /* size: 0 */

// <0645258F> ../public/scenesystem/vertexformat.h:103
void VertexPos_t::VertexPos_t()
{
} /* size: 0 */

// <06452573> ../public/scenesystem/vertexformat.h:103
inline void VertexPos_t::VertexPos_t()
{
} /* size: 0 */

// <0010F30B> ../public/scenesystem/vertexformat.h:103
// member functions: 6
// member variables: 2
// struct size: 12
struct VertexPos_t : public CBaseVertex {
public:
	/* class CBaseVertex <ancestor>; */ /* 0 0 */
	Vector m_vecPos; /* 0 12 */
	/* ../public/scenesystem/vertexformat.h:109 */
	void Position(VertexPos_t* , const Vector& );
	/* ../public/scenesystem/vertexformat.h:114 */
	void Position3f(VertexPos_t* , float, float, float);
	/* ../public/scenesystem/vertexformat.h:119 */
	void Position3fv(VertexPos_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:127 */
	float* Position(VertexPos_t* );
	/* ../public/scenesystem/vertexformat.h:132 */
	Vector GetPosition(const VertexPos_t* );
	/* ../public/scenesystem/vertexformat.h:135 */
	RenderInputLayout_t GetLayout(void);
};

// <0306023E> ../public/scenesystem/vertexformat.h:103
// member functions: 8
// member variables: 2
// struct size: 12
struct VertexPos_t : public CBaseVertex {
public:
	/* class CBaseVertex <ancestor>; */ /* 0 0 */
	Vector m_vecPos; /* 0 12 */
	/* ../public/scenesystem/vertexformat.h:109 */
	void Position(VertexPos_t* , const Vector& );
	/* ../public/scenesystem/vertexformat.h:114 */
	void Position3f(VertexPos_t* , float, float, float);
	/* ../public/scenesystem/vertexformat.h:119 */
	void Position3fv(VertexPos_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:127 */
	float* Position(VertexPos_t* );
	/* ../public/scenesystem/vertexformat.h:132 */
	Vector GetPosition(const VertexPos_t* );
	/* ../public/scenesystem/vertexformat.h:135 */
	RenderInputLayout_t GetLayout(void);
	void VertexPos_t(VertexPos_t* );
	VertexPos_t& operator=(VertexPos_t* , const VertexPos_t& );
};

// <06468963> ../public/scenesystem/vertexformat.h:109
inline void VertexPos_t::Position(const Vector& vecPos)
{
} /* size: 0 */

// <03C41AA7> ../public/scenesystem/vertexformat.h:114
inline void VertexPos_t::Position3f(float x, float y, float z)
{
} /* size: 0 */

// <03C41A84> ../public/scenesystem/vertexformat.h:119
inline void VertexPos_t::Position3fv(const float* v)
{
} /* size: 0 */

// <0645B76D> ../public/scenesystem/vertexformat.h:160
inline void VertexColorPos_t::operator=(const VertexColorPos_t &)
{
} /* size: 0 */

// <064522CA> ../public/scenesystem/vertexformat.h:160
void VertexColorPos_t::VertexColorPos_t()
{
} /* size: 0 */

// <064522AE> ../public/scenesystem/vertexformat.h:160
inline void VertexColorPos_t::VertexColorPos_t()
{
} /* size: 0 */

// <03395671> ../public/scenesystem/vertexformat.h:160
// member functions: 11
// member variables: 2
// struct size: 16
struct VertexColorPos_t : public VertexPos_t {
public:
	/* struct VertexPos_t <ancestor>; */ /* 0 12 */
	VertexColor_t m_color; /* 12 4 */
	/* ../public/scenesystem/vertexformat.h:164 */
	void Color(VertexColorPos_t* , const VertexColor_t& );
	/* ../public/scenesystem/vertexformat.h:169 */
	void Color3f(VertexColorPos_t* , float, float, float);
	/* ../public/scenesystem/vertexformat.h:177 */
	void Color3fv(VertexColorPos_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:186 */
	void Color4f(VertexColorPos_t* , float, float, float, float);
	/* ../public/scenesystem/vertexformat.h:194 */
	void Color4fv(VertexColorPos_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:203 */
	void Color3ub(VertexColorPos_t* , unsigned char, unsigned char, unsigned char);
	/* ../public/scenesystem/vertexformat.h:208 */
	void Color3ubv(VertexColorPos_t* , const unsigned char* );
	/* ../public/scenesystem/vertexformat.h:214 */
	void Color4ub(VertexColorPos_t* , unsigned char, unsigned char, unsigned char, unsigned char);
	/* ../public/scenesystem/vertexformat.h:219 */
	void Color4ubv(VertexColorPos_t* , const unsigned char* );
	/* ../public/scenesystem/vertexformat.h:227 */
	unsigned int Color(const VertexColorPos_t* );
	/* ../public/scenesystem/vertexformat.h:232 */
	RenderInputLayout_t GetLayout(void);
};

// <0306037A> ../public/scenesystem/vertexformat.h:160
// member functions: 13
// member variables: 2
// struct size: 16
struct VertexColorPos_t : public VertexPos_t {
public:
	/* struct VertexPos_t <ancestor>; */ /* 0 12 */
	VertexColor_t m_color; /* 12 4 */
	/* ../public/scenesystem/vertexformat.h:164 */
	void Color(VertexColorPos_t* , const VertexColor_t& );
	/* ../public/scenesystem/vertexformat.h:169 */
	void Color3f(VertexColorPos_t* , float, float, float);
	/* ../public/scenesystem/vertexformat.h:177 */
	void Color3fv(VertexColorPos_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:186 */
	void Color4f(VertexColorPos_t* , float, float, float, float);
	/* ../public/scenesystem/vertexformat.h:194 */
	void Color4fv(VertexColorPos_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:203 */
	void Color3ub(VertexColorPos_t* , unsigned char, unsigned char, unsigned char);
	/* ../public/scenesystem/vertexformat.h:208 */
	void Color3ubv(VertexColorPos_t* , const unsigned char* );
	/* ../public/scenesystem/vertexformat.h:214 */
	void Color4ub(VertexColorPos_t* , unsigned char, unsigned char, unsigned char, unsigned char);
	/* ../public/scenesystem/vertexformat.h:219 */
	void Color4ubv(VertexColorPos_t* , const unsigned char* );
	/* ../public/scenesystem/vertexformat.h:227 */
	unsigned int Color(const VertexColorPos_t* );
	/* ../public/scenesystem/vertexformat.h:232 */
	RenderInputLayout_t GetLayout(void);
	void VertexColorPos_t(VertexColorPos_t* );
	VertexColorPos_t& operator=(VertexColorPos_t* , const VertexColorPos_t& );
};

// <0646892C> ../public/scenesystem/vertexformat.h:203
inline void VertexColorPos_t::Color3ub(unsigned char r, unsigned char g, unsigned char b)
{
} /* size: 0 */

// <064688E6> ../public/scenesystem/vertexformat.h:232
// variables: 2
inline void GetLayout(void)
{
	CTSInputLayoutCreator inputLayoutCreator; // 234
	{
		RenderInputLayoutField_t colorPositionLayout; // 238
	}
} /* size: 0, variables: 1 */

// <06456098> ../public/scenesystem/vertexformat.h:257
inline void VertexUVPos_t::operator=(const VertexUVPos_t &)
{
} /* size: 0 */

// <0645255C> ../public/scenesystem/vertexformat.h:257
void VertexUVPos_t::VertexUVPos_t()
{
} /* size: 0 */

// <0645253F> ../public/scenesystem/vertexformat.h:257
inline void VertexUVPos_t::VertexUVPos_t()
{
} /* size: 0 */

// <03928EBE> ../public/scenesystem/vertexformat.h:257
void VertexUVPos_t::VertexUVPos_t(const VertexUVPos_t &)
{
} /* size: 0 */

// <03928E9C> ../public/scenesystem/vertexformat.h:257
inline void VertexUVPos_t::VertexUVPos_t(const VertexUVPos_t &)
{
} /* size: 0 */

// <0010F406> ../public/scenesystem/vertexformat.h:257
// member functions: 14
// member variables: 2
// struct size: 20
struct VertexUVPos_t : public VertexPos_t {
public:
	/* struct VertexPos_t <ancestor>; */ /* 0 12 */
	Vector2D m_vecUV; /* 12 8 */
	/* ../public/scenesystem/vertexformat.h:261 */
	void SetUV0(VertexUVPos_t* , const Vector2D& );
	/* ../public/scenesystem/vertexformat.h:266 */
	void SetUV0(VertexUVPos_t* , float, float);
	/* ../public/scenesystem/vertexformat.h:272 */
	void TexCoord(VertexUVPos_t* , int, const Vector4D& );
	/* ../public/scenesystem/vertexformat.h:278 */
	void TexCoord1f(VertexUVPos_t* , int, float);
	/* ../public/scenesystem/vertexformat.h:284 */
	void TexCoord2f(VertexUVPos_t* , int, float, float);
	/* ../public/scenesystem/vertexformat.h:290 */
	void TexCoord2fv(VertexUVPos_t* , int, const float* );
	/* ../public/scenesystem/vertexformat.h:297 */
	void TexCoord3f(VertexUVPos_t* , int, float, float, float);
	/* ../public/scenesystem/vertexformat.h:303 */
	void TexCoord3fv(VertexUVPos_t* , int, const float* );
	/* ../public/scenesystem/vertexformat.h:310 */
	void TexCoord4f(VertexUVPos_t* , int, float, float, float, float);
	/* ../public/scenesystem/vertexformat.h:316 */
	void TexCoord4fv(VertexUVPos_t* , int, const float* );
	/* ../public/scenesystem/vertexformat.h:323 */
	void TexCoordSubRect2f(VertexUVPos_t* , int, float, float, float, float, float, float);
	/* ../public/scenesystem/vertexformat.h:331 */
	void TexCoordSubRect2fv(VertexUVPos_t* , int, const float* , const float* , const float* );
	/* ../public/scenesystem/vertexformat.h:343 */
	const float* TexCoord(const VertexUVPos_t* , int);
	/* ../public/scenesystem/vertexformat.h:348 */
	RenderInputLayout_t GetLayout(void);
};

// <03060589> ../public/scenesystem/vertexformat.h:257
// member functions: 16
// member variables: 2
// struct size: 20
struct VertexUVPos_t : public VertexPos_t {
public:
	/* struct VertexPos_t <ancestor>; */ /* 0 12 */
	Vector2D m_vecUV; /* 12 8 */
	/* ../public/scenesystem/vertexformat.h:261 */
	void SetUV0(VertexUVPos_t* , const Vector2D& );
	/* ../public/scenesystem/vertexformat.h:266 */
	void SetUV0(VertexUVPos_t* , float, float);
	/* ../public/scenesystem/vertexformat.h:272 */
	void TexCoord(VertexUVPos_t* , int, const Vector4D& );
	/* ../public/scenesystem/vertexformat.h:278 */
	void TexCoord1f(VertexUVPos_t* , int, float);
	/* ../public/scenesystem/vertexformat.h:284 */
	void TexCoord2f(VertexUVPos_t* , int, float, float);
	/* ../public/scenesystem/vertexformat.h:290 */
	void TexCoord2fv(VertexUVPos_t* , int, const float* );
	/* ../public/scenesystem/vertexformat.h:297 */
	void TexCoord3f(VertexUVPos_t* , int, float, float, float);
	/* ../public/scenesystem/vertexformat.h:303 */
	void TexCoord3fv(VertexUVPos_t* , int, const float* );
	/* ../public/scenesystem/vertexformat.h:310 */
	void TexCoord4f(VertexUVPos_t* , int, float, float, float, float);
	/* ../public/scenesystem/vertexformat.h:316 */
	void TexCoord4fv(VertexUVPos_t* , int, const float* );
	/* ../public/scenesystem/vertexformat.h:323 */
	void TexCoordSubRect2f(VertexUVPos_t* , int, float, float, float, float, float, float);
	/* ../public/scenesystem/vertexformat.h:331 */
	void TexCoordSubRect2fv(VertexUVPos_t* , int, const float* , const float* , const float* );
	/* ../public/scenesystem/vertexformat.h:343 */
	const float* TexCoord(const VertexUVPos_t* , int);
	/* ../public/scenesystem/vertexformat.h:348 */
	RenderInputLayout_t GetLayout(void);
	void VertexUVPos_t(VertexUVPos_t* );
	VertexUVPos_t& operator=(VertexUVPos_t* , const VertexUVPos_t& );
};

// <0317CD16> ../public/scenesystem/vertexformat.h:261
inline void VertexUVPos_t::SetUV0(const Vector2D& vecUV)
{
} /* size: 0 */

// <064688B3> ../public/scenesystem/vertexformat.h:266
inline void VertexUVPos_t::SetUV0(float flU, float flV)
{
} /* size: 0 */

// <06468880> ../public/scenesystem/vertexformat.h:272
inline void VertexUVPos_t::TexCoord(int nStage, const Vector4D& vecUV)
{
} /* size: 0 */

// <06468844> ../public/scenesystem/vertexformat.h:284
inline void VertexUVPos_t::TexCoord2f(int nStage, float s, float t)
{
} /* size: 0 */

// <03C419E3> ../public/scenesystem/vertexformat.h:290
inline void VertexUVPos_t::TexCoord2fv(int nStage, const float* st)
{
} /* size: 0 */

// <03C4199C> ../public/scenesystem/vertexformat.h:348
// variables: 2
inline void GetLayout(void)
{
	CTSInputLayoutCreator inputLayoutCreator; // 350
	{
		RenderInputLayoutField_t uvTestLayout; // 354
	}
} /* size: 0, variables: 1 */

// <03AF8D50> ../public/scenesystem/vertexformat.h:348
// variable: 1
// function calls: 21
void GetLayout(void)
{
	CThreadSyncValue<bool>::Load(); // 34
	CTSInputLayoutCreator::IsInitialized(); // 352
	CThreadSyncValue<bool>::Load(); // 60
	{
	}
	CTSInputLayoutCreator::GetLayout(); // 364
	{
		RenderInputLayoutField_t uvTestLayout; // 354
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
				const RenderInputLayoutField_t* pFieldDescs);  // 360
	}
	GetLayout(void); // 348
	CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
	CTSInputLayoutCreator::CTSInputLayoutCreator(); // 350
} /* size: 483, inline expansions: 7 (353 bytes) */

// <0645606A> ../public/scenesystem/vertexformat.h:372
inline void VertexColorUVPos_t::operator=(const VertexColorUVPos_t &)
{
} /* size: 0 */

// <06452528> ../public/scenesystem/vertexformat.h:372
void VertexColorUVPos_t::VertexColorUVPos_t()
{
} /* size: 0 */

// <0645250B> ../public/scenesystem/vertexformat.h:372
inline void VertexColorUVPos_t::VertexColorUVPos_t()
{
} /* size: 0 */

// <03928E7A> ../public/scenesystem/vertexformat.h:372
void VertexColorUVPos_t::VertexColorUVPos_t(const VertexColorUVPos_t &)
{
} /* size: 0 */

// <03928E58> ../public/scenesystem/vertexformat.h:372
inline void VertexColorUVPos_t::VertexColorUVPos_t(const VertexColorUVPos_t &)
{
} /* size: 0 */

// <0010F695> ../public/scenesystem/vertexformat.h:372
// member functions: 12
// member variables: 2
// static member variable: 1
// struct size: 24
struct VertexColorUVPos_t : public VertexUVPos_t {
public:
	/* struct VertexUVPos_t <ancestor>; */ /* 0 20 */
	VertexColor_t m_color; /* 20 4 */
	/* ../public/scenesystem/vertexformat.h:376 */
	void Color(VertexColorUVPos_t* , const VertexColor_t& );
	/* ../public/scenesystem/vertexformat.h:381 */
	void Color3f(VertexColorUVPos_t* , float, float, float);
	/* ../public/scenesystem/vertexformat.h:389 */
	void Color3fv(VertexColorUVPos_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:398 */
	void Color4f(VertexColorUVPos_t* , float, float, float, float);
	/* ../public/scenesystem/vertexformat.h:406 */
	void Color4fv(VertexColorUVPos_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:415 */
	void Color3ub(VertexColorUVPos_t* , unsigned char, unsigned char, unsigned char);
	/* ../public/scenesystem/vertexformat.h:420 */
	void Color3ubv(VertexColorUVPos_t* , const unsigned char* );
	/* ../public/scenesystem/vertexformat.h:426 */
	void Color4ub(VertexColorUVPos_t* , unsigned char, unsigned char, unsigned char, unsigned char);
	/* ../public/scenesystem/vertexformat.h:431 */
	void Color4ubv(VertexColorUVPos_t* , const unsigned char* );
	/* ../public/scenesystem/vertexformat.h:439 */
	unsigned int Color(const VertexColorUVPos_t* );
	/* ../public/scenesystem/vertexformat.h:444 */
	RenderInputLayout_t GetLayout(void);
	/* ../public/scenesystem/vertexformat.h:463 */
	void DestroyLayout(void);
	static class CTSInputLayoutCreator sm_inputLayoutCreator; /* 0 0 */
};

// <030DA8DC> ../public/scenesystem/vertexformat.h:372
// member functions: 14
// member variables: 2
// static member variable: 1
// struct size: 24
struct VertexColorUVPos_t : public VertexUVPos_t {
public:
	/* struct VertexUVPos_t <ancestor>; */ /* 0 20 */
	VertexColor_t m_color; /* 20 4 */
	/* ../public/scenesystem/vertexformat.h:376 */
	void Color(VertexColorUVPos_t* , const VertexColor_t& );
	/* ../public/scenesystem/vertexformat.h:381 */
	void Color3f(VertexColorUVPos_t* , float, float, float);
	/* ../public/scenesystem/vertexformat.h:389 */
	void Color3fv(VertexColorUVPos_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:398 */
	void Color4f(VertexColorUVPos_t* , float, float, float, float);
	/* ../public/scenesystem/vertexformat.h:406 */
	void Color4fv(VertexColorUVPos_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:415 */
	void Color3ub(VertexColorUVPos_t* , unsigned char, unsigned char, unsigned char);
	/* ../public/scenesystem/vertexformat.h:420 */
	void Color3ubv(VertexColorUVPos_t* , const unsigned char* );
	/* ../public/scenesystem/vertexformat.h:426 */
	void Color4ub(VertexColorUVPos_t* , unsigned char, unsigned char, unsigned char, unsigned char);
	/* ../public/scenesystem/vertexformat.h:431 */
	void Color4ubv(VertexColorUVPos_t* , const unsigned char* );
	/* ../public/scenesystem/vertexformat.h:439 */
	unsigned int Color(const VertexColorUVPos_t* );
	/* ../public/scenesystem/vertexformat.h:444 */
	RenderInputLayout_t GetLayout(void);
	/* ../public/scenesystem/vertexformat.h:463 */
	void DestroyLayout(void);
	static class CTSInputLayoutCreator sm_inputLayoutCreator; /* 0 0 */
	void VertexColorUVPos_t(VertexColorUVPos_t* );
	VertexColorUVPos_t& operator=(VertexColorUVPos_t* , const VertexColorUVPos_t& );
};

// <039234EC> ../public/scenesystem/vertexformat.h:372
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 24
struct VertexColorUVPos_t : public VertexUVPos_t {
public:
	/* struct VertexUVPos_t <ancestor>; */ /* 0 20 */
	VertexColor_t m_color; /* 20 4 */
	/* ../public/scenesystem/vertexformat.h:376 */
	void Color(VertexColorUVPos_t* , const VertexColor_t& );
	/* ../public/scenesystem/vertexformat.h:381 */
	void Color3f(VertexColorUVPos_t* , float, float, float);
	/* ../public/scenesystem/vertexformat.h:389 */
	void Color3fv(VertexColorUVPos_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:398 */
	void Color4f(VertexColorUVPos_t* , float, float, float, float);
	/* ../public/scenesystem/vertexformat.h:406 */
	void Color4fv(VertexColorUVPos_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:415 */
	void Color3ub(VertexColorUVPos_t* , unsigned char, unsigned char, unsigned char);
	/* ../public/scenesystem/vertexformat.h:420 */
	void Color3ubv(VertexColorUVPos_t* , const unsigned char* );
	/* ../public/scenesystem/vertexformat.h:426 */
	void Color4ub(VertexColorUVPos_t* , unsigned char, unsigned char, unsigned char, unsigned char);
	/* ../public/scenesystem/vertexformat.h:431 */
	void Color4ubv(VertexColorUVPos_t* , const unsigned char* );
	/* ../public/scenesystem/vertexformat.h:439 */
	unsigned int Color(const VertexColorUVPos_t* );
	/* ../public/scenesystem/vertexformat.h:444 */
	RenderInputLayout_t GetLayout(void);
	/* ../public/scenesystem/vertexformat.h:463 */
	void DestroyLayout(void);
	static class CTSInputLayoutCreator sm_inputLayoutCreator; /* 0 0 */
	void VertexColorUVPos_t(VertexColorUVPos_t* , const VertexColorUVPos_t& );
	VertexColorUVPos_t& operator=(VertexColorUVPos_t* , const VertexColorUVPos_t& );
	void VertexColorUVPos_t(VertexColorUVPos_t* );
};

// <0646881E> ../public/scenesystem/vertexformat.h:376
inline void VertexColorUVPos_t::Color(const VertexColor_t& vertexColor)
{
} /* size: 0 */

// <03C41957> ../public/scenesystem/vertexformat.h:426
inline void VertexColorUVPos_t::Color4ub(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
} /* size: 0 */

// <0317CC5B> ../public/scenesystem/vertexformat.h:444
// variable: 1
inline void GetLayout(void)
{
	{
		RenderInputLayoutField_t colorUVTestLayout; // 448
	}
} /* size: 0 */

// <004A1C4D> ../public/scenesystem/vertexformat.h:444
// variable: 1
// function calls: 18
void GetLayout(void)
{
	CThreadSyncValue<bool>::Load(); // 34
	CTSInputLayoutCreator::IsInitialized(); // 446
	{
		RenderInputLayoutField_t colorUVTestLayout; // 448
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
				const RenderInputLayoutField_t* pFieldDescs);  // 455
	}
	CThreadSyncValue<bool>::Load(); // 60
	{
	}
	CTSInputLayoutCreator::GetLayout(); // 459
} /* size: 445, inline expansions: 4 (46 bytes) */

// <00496B4C> ../public/scenesystem/vertexformat.h:463
inline void DestroyLayout(void)
{
} /* size: 0 */

// <03126E15> ../public/scenesystem/vertexformat.h:476
inline void VertexDebugUI_t::operator=(const VertexDebugUI_t &)
{
} /* size: 0 */

// <031213A1> ../public/scenesystem/vertexformat.h:476
void VertexDebugUI_t::VertexDebugUI_t()
{
} /* size: 0 */

// <03121384> ../public/scenesystem/vertexformat.h:476
inline void VertexDebugUI_t::VertexDebugUI_t()
{
} /* size: 0 */

// <030DAB2F> ../public/scenesystem/vertexformat.h:476
// member functions: 6
// member variable: 1
// struct size: 24
struct VertexDebugUI_t : public VertexColorUVPos_t {
public:
	/* struct VertexColorUVPos_t <ancestor>; */ /* 0 24 */
	/* ../public/scenesystem/vertexformat.h:478 */
	void Position(VertexDebugUI_t* , const Vector2D& );
	/* ../public/scenesystem/vertexformat.h:483 */
	void Position(VertexDebugUI_t* , float, float);
	/* ../public/scenesystem/vertexformat.h:488 */
	void Position3f(VertexDebugUI_t* , float, float, float);
	/* ../public/scenesystem/vertexformat.h:493 */
	void Position3fv(VertexDebugUI_t* , const float* );
	void VertexDebugUI_t(VertexDebugUI_t* );
	VertexDebugUI_t& operator=(VertexDebugUI_t* , const VertexDebugUI_t& );
};

// <0317CC35> ../public/scenesystem/vertexformat.h:478
inline void VertexDebugUI_t::Position(const Vector2D& vecPos)
{
} /* size: 0 */

// <03395D21> ../public/scenesystem/vertexformat.h:503
// member functions: 6
// member variables: 3
// struct size: 48
struct VertexUVPosNormalAndTangent_t : public VertexUVPos_t {
public:
	/* struct VertexUVPos_t <ancestor>; */ /* 0 20 */
	Vector m_vecNormal; /* 20 12 */
	Vector4D m_vTangentUOs_flTangentVSign; /* 32 16 */
	/* ../public/scenesystem/vertexformat.h:508 */
	void Normal(VertexUVPosNormalAndTangent_t* , const Vector& );
	/* ../public/scenesystem/vertexformat.h:513 */
	void Normal3f(VertexUVPosNormalAndTangent_t* , float, float, float);
	/* ../public/scenesystem/vertexformat.h:522 */
	void Normal3fv(VertexUVPosNormalAndTangent_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:532 */
	void TangentBasis(VertexUVPosNormalAndTangent_t* , Vector, Vector);
	/* ../public/scenesystem/vertexformat.h:540 */
	const float* Normal(const VertexUVPosNormalAndTangent_t* );
	/* ../public/scenesystem/vertexformat.h:545 */
	RenderInputLayout_t GetLayout(void);
};

// <0645603C> ../public/scenesystem/vertexformat.h:572
inline void VertexUVPosColorNormalAndTangent_t::operator=(const VertexUVPosColorNormalAndTangent_t &)
{
} /* size: 0 */

// <064524F4> ../public/scenesystem/vertexformat.h:572
void VertexUVPosColorNormalAndTangent_t::VertexUVPosColorNormalAndTangent_t()
{
} /* size: 0 */

// <064524D7> ../public/scenesystem/vertexformat.h:572
inline void VertexUVPosColorNormalAndTangent_t::VertexUVPosColorNormalAndTangent_t()
{
} /* size: 0 */

// <03928E36> ../public/scenesystem/vertexformat.h:572
void VertexUVPosColorNormalAndTangent_t::VertexUVPosColorNormalAndTangent_t(const VertexUVPosColorNormalAndTangent_t &)
{
} /* size: 0 */

// <03928E14> ../public/scenesystem/vertexformat.h:572
inline void VertexUVPosColorNormalAndTangent_t::VertexUVPosColorNormalAndTangent_t(const VertexUVPosColorNormalAndTangent_t &)
{
} /* size: 0 */

// <03395E3A> ../public/scenesystem/vertexformat.h:572
// member functions: 7
// member variables: 3
// struct size: 52
struct VertexUVPosColorNormalAndTangent_t : public VertexColorUVPos_t {
public:
	/* struct VertexColorUVPos_t <ancestor>; */ /* 0 24 */
	Vector m_vecNormal; /* 24 12 */
	Vector4D m_vTangentUOs_flTangentVSign; /* 36 16 */
	/* ../public/scenesystem/vertexformat.h:577 */
	void Normal(VertexUVPosColorNormalAndTangent_t* , const Vector& );
	/* ../public/scenesystem/vertexformat.h:582 */
	void Normal3f(VertexUVPosColorNormalAndTangent_t* , float, float, float);
	/* ../public/scenesystem/vertexformat.h:591 */
	void Normal3fv(VertexUVPosColorNormalAndTangent_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:601 */
	void TangentBasis(VertexUVPosColorNormalAndTangent_t* , Vector, Vector);
	/* ../public/scenesystem/vertexformat.h:607 */
	void TangentBasis(VertexUVPosColorNormalAndTangent_t* , const Vector4D& );
	/* ../public/scenesystem/vertexformat.h:614 */
	const float* Normal(const VertexUVPosColorNormalAndTangent_t* );
	/* ../public/scenesystem/vertexformat.h:619 */
	RenderInputLayout_t GetLayout(void);
};

// <03060AAC> ../public/scenesystem/vertexformat.h:572
// member functions: 9
// member variables: 3
// struct size: 52
struct VertexUVPosColorNormalAndTangent_t : public VertexColorUVPos_t {
public:
	/* struct VertexColorUVPos_t <ancestor>; */ /* 0 24 */
	Vector m_vecNormal; /* 24 12 */
	Vector4D m_vTangentUOs_flTangentVSign; /* 36 16 */
	/* ../public/scenesystem/vertexformat.h:577 */
	void Normal(VertexUVPosColorNormalAndTangent_t* , const Vector& );
	/* ../public/scenesystem/vertexformat.h:582 */
	void Normal3f(VertexUVPosColorNormalAndTangent_t* , float, float, float);
	/* ../public/scenesystem/vertexformat.h:591 */
	void Normal3fv(VertexUVPosColorNormalAndTangent_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:601 */
	void TangentBasis(VertexUVPosColorNormalAndTangent_t* , Vector, Vector);
	/* ../public/scenesystem/vertexformat.h:607 */
	void TangentBasis(VertexUVPosColorNormalAndTangent_t* , const Vector4D& );
	/* ../public/scenesystem/vertexformat.h:614 */
	const float* Normal(const VertexUVPosColorNormalAndTangent_t* );
	/* ../public/scenesystem/vertexformat.h:619 */
	RenderInputLayout_t GetLayout(void);
	void VertexUVPosColorNormalAndTangent_t(VertexUVPosColorNormalAndTangent_t* );
	VertexUVPosColorNormalAndTangent_t& operator=(VertexUVPosColorNormalAndTangent_t* , const VertexUVPosColorNormalAndTangent_t& );
};

// <064687F8> ../public/scenesystem/vertexformat.h:577
inline void VertexUVPosColorNormalAndTangent_t::Normal(const Vector& vecNormal)
{
} /* size: 0 */

// <03C4191A> ../public/scenesystem/vertexformat.h:582
inline void VertexUVPosColorNormalAndTangent_t::Normal3f(float nx, float ny, float nz)
{
} /* size: 0 */

// <03C418F6> ../public/scenesystem/vertexformat.h:591
inline void VertexUVPosColorNormalAndTangent_t::Normal3fv(const float* n)
{
} /* size: 0 */

// <064687C5> ../public/scenesystem/vertexformat.h:601
inline void VertexUVPosColorNormalAndTangent_t::TangentBasis(Vector vecTangentU, Vector vecTangentV)
{
} /* size: 0 */

// <004A2152> ../public/scenesystem/vertexformat.h:601
// function calls: 4
void VertexUVPosColorNormalAndTangent_t::TangentBasis(Vector vecTangentU, Vector vecTangentV)
{
	Vector::operator=(
			const Vector& vOther);  // 603
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 604
	DotProduct(const Vector& a,
			const Vector& b);  // 604
} /* size: 159, inline expansions: 4 (86 bytes) */

// <03C418D0> ../public/scenesystem/vertexformat.h:607
inline void VertexUVPosColorNormalAndTangent_t::TangentBasis(const Vector4D& val)
{
} /* size: 0 */

// <0646877D> ../public/scenesystem/vertexformat.h:619
// variables: 2
inline void GetLayout(void)
{
	CTSInputLayoutCreator inputLayoutCreator; // 621
	{
		RenderInputLayoutField_t posColorUVNormalTangentLayout; // 625
	}
} /* size: 0, variables: 1 */

// <03934A47> ../public/scenesystem/vertexformat.h:619
// variables: 2
// function calls: 20
void GetLayout(void)
{
	CTSInputLayoutCreator inputLayoutCreator; // 621
	{
		RenderInputLayoutField_t posColorUVNormalTangentLayout; // 625
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
				const RenderInputLayoutField_t* pFieldDescs);  // 634
	}
	CThreadSyncValue<bool>::Load(); // 34
	CTSInputLayoutCreator::IsInitialized(); // 623
	CThreadSyncValue<bool>::Load(); // 60
	{
	}
	CTSInputLayoutCreator::GetLayout(); // 638
	CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
	CTSInputLayoutCreator::CTSInputLayoutCreator(); // 621
} /* size: 555, variables: 1, inline expansions: 6 (60 bytes) */

// <03127084> ../public/scenesystem/vertexformat.h:647
inline void VertexWireFrame2D_t::operator=(const VertexWireFrame2D_t &)
{
} /* size: 0 */

// <0312165A> ../public/scenesystem/vertexformat.h:647
void VertexWireFrame2D_t::VertexWireFrame2D_t()
{
} /* size: 0 */

// <0312163D> ../public/scenesystem/vertexformat.h:647
inline void VertexWireFrame2D_t::VertexWireFrame2D_t()
{
} /* size: 0 */

// <030DAC2E> ../public/scenesystem/vertexformat.h:647
// member functions: 14
// member variables: 3
// struct size: 28
struct VertexWireFrame2D_t : public VertexPos_t {
public:
	/* struct VertexPos_t <ancestor>; */ /* 0 12 */
	VertexColor_t m_color; /* 12 4 */
	Vector m_vecStartPoint; /* 16 12 */
	/* ../public/scenesystem/vertexformat.h:652 */
	void Color(VertexWireFrame2D_t* , const VertexColor_t& );
	/* ../public/scenesystem/vertexformat.h:657 */
	void Color3f(VertexWireFrame2D_t* , float, float, float);
	/* ../public/scenesystem/vertexformat.h:665 */
	void Color3fv(VertexWireFrame2D_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:674 */
	void Color4f(VertexWireFrame2D_t* , float, float, float, float);
	/* ../public/scenesystem/vertexformat.h:682 */
	void Color4fv(VertexWireFrame2D_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:691 */
	void Color3ub(VertexWireFrame2D_t* , unsigned char, unsigned char, unsigned char);
	/* ../public/scenesystem/vertexformat.h:696 */
	void Color3ubv(VertexWireFrame2D_t* , const unsigned char* );
	/* ../public/scenesystem/vertexformat.h:702 */
	void Color4ub(VertexWireFrame2D_t* , unsigned char, unsigned char, unsigned char, unsigned char);
	/* ../public/scenesystem/vertexformat.h:707 */
	void Color4ubv(VertexWireFrame2D_t* , const unsigned char* );
	/* ../public/scenesystem/vertexformat.h:713 */
	void StartPoint(VertexWireFrame2D_t* , const Vector& );
	/* ../public/scenesystem/vertexformat.h:719 */
	unsigned int Color(const VertexWireFrame2D_t* );
	/* ../public/scenesystem/vertexformat.h:724 */
	RenderInputLayout_t GetLayout(void);
	void VertexWireFrame2D_t(VertexWireFrame2D_t* );
	VertexWireFrame2D_t& operator=(VertexWireFrame2D_t* , const VertexWireFrame2D_t& );
};

// <0317CC0F> ../public/scenesystem/vertexformat.h:713
inline void VertexWireFrame2D_t::StartPoint(const Vector& vecStartPoint)
{
} /* size: 0 */

// <0317CBC8> ../public/scenesystem/vertexformat.h:724
// variables: 2
inline void GetLayout(void)
{
	CTSInputLayoutCreator inputLayoutCreator; // 726
	{
		RenderInputLayoutField_t wireframe2DLayout; // 730
	}
} /* size: 0, variables: 1 */

// <03127559> ../public/scenesystem/vertexformat.h:751
inline void VertexWireFrame_t::operator=(const VertexWireFrame_t &)
{
} /* size: 0 */

// <031219D3> ../public/scenesystem/vertexformat.h:751
void VertexWireFrame_t::VertexWireFrame_t()
{
} /* size: 0 */

// <031219B6> ../public/scenesystem/vertexformat.h:751
inline void VertexWireFrame_t::VertexWireFrame_t()
{
} /* size: 0 */

// <030DAE7D> ../public/scenesystem/vertexformat.h:751
// member functions: 17
// member variables: 4
// struct size: 40
struct VertexWireFrame_t : public VertexPos_t {
public:
	/* struct VertexPos_t <ancestor>; */ /* 0 12 */
	VertexColor_t m_color; /* 12 4 */
	Vector m_vecNormal; /* 16 12 */
	Vector m_vecStartPoint; /* 28 12 */
	/* ../public/scenesystem/vertexformat.h:757 */
	void Color3f(VertexWireFrame_t* , float, float, float);
	/* ../public/scenesystem/vertexformat.h:765 */
	void Color3fv(VertexWireFrame_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:774 */
	void Color4f(VertexWireFrame_t* , float, float, float, float);
	/* ../public/scenesystem/vertexformat.h:782 */
	void Color4fv(VertexWireFrame_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:791 */
	void Color3ub(VertexWireFrame_t* , unsigned char, unsigned char, unsigned char);
	/* ../public/scenesystem/vertexformat.h:796 */
	void Color3ubv(VertexWireFrame_t* , const unsigned char* );
	/* ../public/scenesystem/vertexformat.h:802 */
	void Color4ub(VertexWireFrame_t* , unsigned char, unsigned char, unsigned char, unsigned char);
	/* ../public/scenesystem/vertexformat.h:807 */
	void Color4ubv(VertexWireFrame_t* , const unsigned char* );
	/* ../public/scenesystem/vertexformat.h:813 */
	void Normal(VertexWireFrame_t* , const Vector& );
	/* ../public/scenesystem/vertexformat.h:818 */
	void Normal3f(VertexWireFrame_t* , float, float, float);
	/* ../public/scenesystem/vertexformat.h:827 */
	void Normal3fv(VertexWireFrame_t* , const float* );
	/* ../public/scenesystem/vertexformat.h:837 */
	void StartPoint(VertexWireFrame_t* , const Vector& );
	/* ../public/scenesystem/vertexformat.h:844 */
	unsigned int Color(const VertexWireFrame_t* );
	/* ../public/scenesystem/vertexformat.h:849 */
	const float* Normal(const VertexWireFrame_t* );
	/* ../public/scenesystem/vertexformat.h:854 */
	RenderInputLayout_t GetLayout(void);
	void VertexWireFrame_t(VertexWireFrame_t* );
	VertexWireFrame_t& operator=(VertexWireFrame_t* , const VertexWireFrame_t& );
};

// <0317CBA2> ../public/scenesystem/vertexformat.h:837
inline void VertexWireFrame_t::StartPoint(const Vector& vecStartPoint)
{
} /* size: 0 */

// <0317C5E8> ../public/scenesystem/vertexformat.h:854
// variables: 2
// function calls: 20
void GetLayout(void)
{
	CTSInputLayoutCreator inputLayoutCreator; // 856
	{
		RenderInputLayoutField_t wireFrameVertexLayout; // 860
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
				const RenderInputLayoutField_t* pFieldDescs);  // 868
	}
	CThreadSyncValue<bool>::Load(); // 34
	CTSInputLayoutCreator::IsInitialized(); // 858
	CThreadSyncValue<bool>::Load(); // 60
	{
	}
	CTSInputLayoutCreator::GetLayout(); // 872
	CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
	CTSInputLayoutCreator::CTSInputLayoutCreator(); // 856
} /* size: 539, variables: 1, inline expansions: 6 (60 bytes) */

// <03396414> ../public/scenesystem/vertexformat.h:880
// member function: 1
// member variables: 4
// struct size: 48
struct VertexIrradVolume_t : public VertexPos_t {
public:
	/* struct VertexPos_t <ancestor>; */ /* 0 12 */
	Vector m_vecGridStartWs; /* 12 12 */
	Vector m_vecGridSizeWs; /* 24 12 */
	Vector m_vecGridEndWs; /* 36 12 */
	/* ../public/scenesystem/vertexformat.h:886 */
	RenderInputLayout_t GetLayout(void);
};

// <03225CF2> ../public/scenesystem/vertexformat.h:910
inline void VertexPostProcess_t::operator=(const VertexPostProcess_t &)
{
} /* size: 0 */

// <032226B5> ../public/scenesystem/vertexformat.h:910
void VertexPostProcess_t::VertexPostProcess_t()
{
} /* size: 0 */

// <03222698> ../public/scenesystem/vertexformat.h:910
inline void VertexPostProcess_t::VertexPostProcess_t()
{
} /* size: 0 */

// <031EA8CF> ../public/scenesystem/vertexformat.h:910
// member functions: 3
// member variables: 3
// struct size: 32
struct VertexPostProcess_t {
	Vector2D m_vPos; /* 0 8 */
	Vector m_vCameraToEyeRayWs; /* 8 12 */
	Vector m_vCameraToNearPlaneWs; /* 20 12 */
	/* ../public/scenesystem/vertexformat.h:916 */
	RenderInputLayout_t GetLayout(void);
	void VertexPostProcess_t(VertexPostProcess_t* );
	VertexPostProcess_t& operator=(VertexPostProcess_t* , const VertexPostProcess_t& );
};

// <0324105F> ../public/scenesystem/vertexformat.h:916
// variables: 2
// function calls: 20
void GetLayout(void)
{
	CTSInputLayoutCreator inputLayoutCreator; // 918
	{
		RenderInputLayoutField_t postProcessVertexLayout; // 922
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
				const RenderInputLayoutField_t* pFieldDescs);  // 929
	}
	CThreadSyncValue<bool>::Load(); // 34
	CTSInputLayoutCreator::IsInitialized(); // 920
	CThreadSyncValue<bool>::Load(); // 60
	{
	}
	CTSInputLayoutCreator::GetLayout(); // 933
	CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
	CTSInputLayoutCreator::CTSInputLayoutCreator(); // 918
} /* size: 507, variables: 1, inline expansions: 6 (60 bytes) */

