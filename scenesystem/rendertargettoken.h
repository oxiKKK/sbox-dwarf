
//
// scenesystem/rendertargettoken.h
//
//	referenced by: libengine2.so
//
//	functions: 9
//	structs: 2
//

// <02CDE38B> ../scenesystem/rendertargettoken.h:21
// member functions: 6
// member variable: 1
// static member variable: 1
// struct size: 8
struct RenderTargetToken_t {
	/* ../scenesystem/rendertargettoken.h:23 */
	void RenderTargetToken_t(RenderTargetToken_t* );
	/* ../scenesystem/rendertargettoken.h:24 */
	void RenderTargetToken_t(RenderTargetToken_t* , const RenderTargetToken_t& );
	/* ../scenesystem/rendertargettoken.h:25 */
	void ~RenderTargetToken_t(RenderTargetToken_t* );
	/* ../scenesystem/rendertargettoken.h:26 */
	void Reset(RenderTargetToken_t* );
	/* ../scenesystem/rendertargettoken.h:27 */
	RenderTargetToken_t& operator=(RenderTargetToken_t* , const RenderTargetToken_t& );
	/* ../scenesystem/rendertargettoken.h:28 */
	void SetValue(RenderTargetToken_t* , const char* , int);
	CUtlSymbolLarge m_Name; /* 0 8 */
	static CUtlSymbolTableLargeMT_CI sm_RenderTargetIdSymbolTable; /* 0 0 */
};

// <037363C3> ../scenesystem/rendertargettoken.h:23
void RenderTargetToken_t::RenderTargetToken_t()
{
} /* size: 0 */

// <0373642D> ../scenesystem/rendertargettoken.h:24
void RenderTargetToken_t::RenderTargetToken_t(const RenderTargetToken_t& src)
{
} /* size: 0 */

// <0373638F> ../scenesystem/rendertargettoken.h:25
void RenderTargetToken_t::~RenderTargetToken_t()
{
} /* size: 0 */

// <0374EACF> ../scenesystem/rendertargettoken.h:34
void RenderTargetId_t::RenderTargetId_t(const RenderTargetId_t &)
{
} /* size: 0 */

// <0374EAAE> ../scenesystem/rendertargettoken.h:34
inline void RenderTargetId_t::RenderTargetId_t(const RenderTargetId_t &)
{
} /* size: 0 */

// <0374EA97> ../scenesystem/rendertargettoken.h:34
void RenderTargetId_t::~RenderTargetId_t()
{
} /* size: 0 */

// <0374EA7B> ../scenesystem/rendertargettoken.h:34
inline void RenderTargetId_t::~RenderTargetId_t()
{
} /* size: 0 */

// <037395A7> ../scenesystem/rendertargettoken.h:34
void RenderTargetId_t::RenderTargetId_t()
{
} /* size: 0 */

// <0373958B> ../scenesystem/rendertargettoken.h:34
inline void RenderTargetId_t::RenderTargetId_t()
{
} /* size: 0 */

// <02CDE498> ../scenesystem/rendertargettoken.h:34
// member functions: 4
// member variable: 1
// struct size: 32
struct RenderTargetId_t {
	RenderTargetToken_t m_pTokens[4]; /* 0 32 */
	/* ../scenesystem/rendertargettoken.h:38 */
	bool operator==(const RenderTargetId_t* , const RenderTargetId_t& );
	/* ../scenesystem/rendertargettoken.h:39 */
	bool operator!=(const RenderTargetId_t* , const RenderTargetId_t& );
	/* ../scenesystem/rendertargettoken.h:40 */
	RenderTargetId_t& operator=(RenderTargetId_t* , const RenderTargetId_t& );
	/* ../scenesystem/rendertargettoken.h:41 */
	void BuildNameString(const RenderTargetId_t* , CBufferString* );
};

