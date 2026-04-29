
//
// public/resourcesystem/iresourcetypecompiler.h
//
//	referenced by: libengine2.so
//
//	struct: 1
//

// <012003B7> ../public/resourcesystem/iresourcetypecompiler.h:86
// member variables: 9
// struct size: 64
struct ResourceCompileSettings_t {
	ResourceCompileMode_t m_nCompileMode; /* 0 4 */
	bool m_bDisableMeshMaterialCompile; /* 4 1 */
	KeyValues * m_pOptCompilerHints; /* 8 8 */
	CUtlBuffer * m_pOverrideInputData; /* 16 8 */
	const char * m_pOverrideResourceName; /* 24 8 */
	const char * m_pOverrideGameRoot; /* 32 8 */
	const char * m_pOverrideCompilerIdentifier; /* 40 8 */
	const char * m_pOverrideExtension; /* 48 8 */
	const class CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> > * m_pRestrictedWriteTypes; /* 56 8 */
};

