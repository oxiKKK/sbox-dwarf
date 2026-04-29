
//
// public/tier0/assert_base.h
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
//				   libvfx_vulkan.so
//
//	functions: 7
//	structs: 2
//

// <00002661> ../public/tier0/assert_base.h:66
// member variables: 6
// struct size: 32
struct _AssertCompileTimeConstantStruct_t {
	const char * pFile; /* 0 8 */
	const char * pFunction; /* 8 8 */
	const char * pExpressionString; /* 16 8 */
	uint32 nLine; /* 24 4 */
	uint32 type:1; /* 28: 0 4 */
	uint32 nFlags:5; /* 28: 1 4 */
};

// <0000412A> ../public/tier0/assert_base.h:88
bool Assert_ConditionFailed(const _AssertCompileTimeConstantStruct_t &, const char *, ...)
{
} /* size: 0 */

// <0001872D> ../public/tier0/assert_base.h:441
// member variables: 4
// struct size: 16
struct AssertIgnoreInfo_t {
	const char * m_pFilename; /* 0 8 */
	int m_nLine; /* 8 4 */
	bool m_bUseDefaultContinueLoggingFailures; /* 12 1 */
	bool m_bContinueLoggingFailures; /* 13 1 */
};

// <040AF7E9> ../public/tier0/assert_base.h:462
// variables: 2
inline const CSceneView* assert_cast<const CSceneView*, const ISceneView>(const ISceneView* pSource)
{
	const char   __FUNCTION__; // 49909
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 464
	}
} /* size: 0, variables: 1 */

// <02EABAE4> ../public/tier0/assert_base.h:462
// variables: 2
inline CSceneWorld* assert_cast<CSceneWorld*, ISceneWorld>(ISceneWorld* pSource)
{
	const char   __FUNCTION__; // 63466
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 464
	}
} /* size: 0, variables: 1 */

// <02EA5DCA> ../public/tier0/assert_base.h:462
// variables: 2
inline CSceneView* assert_cast<CSceneView*, ISceneView>(ISceneView* pSource)
{
	const char   __FUNCTION__; // 63466
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 464
	}
} /* size: 0, variables: 1 */

// <001353E9> ../public/tier0/assert_base.h:462
// variables: 2
inline CTier2AppSystemDict* assert_cast<CTier2AppSystemDict*, CAppSystemDict>(CAppSystemDict* pSource)
{
	const char   __FUNCTION__; // 13347
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 464
	}
} /* size: 0, variables: 1 */

// <02840CF9> ../public/tier0/assert_base.h:462
// variables: 2
inline CLabelledDebugHelper* assert_cast<CLabelledDebugHelper*, IDebugVisualizer>(IDebugVisualizer* pSource)
{
	const char   __FUNCTION__; // 60223
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 464
	}
} /* size: 0, variables: 1 */

// <0272D423> ../public/tier0/assert_base.h:462
// variables: 2
inline CBoneSetup* assert_cast<CBoneSetup*, EBoneSetup>(EBoneSetup* pSource)
{
	const char   __FUNCTION__; // 8763
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 464
	}
} /* size: 0, variables: 1 */

