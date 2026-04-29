
//
// public/resourcefile/resourceeditinfo.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	structs: 9
//

// <05B9646D> ../public/resourcefile/resourceeditinfo.h:34
// member variables: 4
// struct size: 16
struct ResourceInputDependency_t {
	CResourceString m_RelativeFilename; /* 0 4 */
	CResourceString m_SearchPath; /* 4 4 */
	uint32 m_nFileChecksum; /* 8 4 */
	uint32 m_nFlags; /* 12 4 */
};

// <05B964BC> ../public/resourcefile/resourceeditinfo.h:42
// member variables: 4
// struct size: 16
struct ResourceArgumentDependency_t {
	CResourceString m_ParameterName; /* 0 4 */
	CResourceString m_ParameterType; /* 4 4 */
	uint32 m_nFingerprint; /* 8 4 */
	uint32 m_nFingerprintDefault; /* 12 4 */
};

// <05B9650B> ../public/resourcefile/resourceeditinfo.h:50
// member variables: 4
// struct size: 16
struct ResourceSpecialDependency_t {
	CResourceString m_String; /* 0 4 */
	CResourceString m_CompilerIdentifier; /* 4 4 */
	uint32 m_nFingerprint; /* 8 4 */
	uint32 m_nUserData; /* 12 4 */
};

// <05B9655A> ../public/resourcefile/resourceeditinfo.h:58
// member variables: 2
// struct size: 8
struct ResourceEditIntData_t {
	CResourceString m_Name; /* 0 4 */
	int32 m_nInt; /* 4 4 */
};

// <05B9658B> ../public/resourcefile/resourceeditinfo.h:64
// member variables: 2
// struct size: 8
struct ResourceEditFloatData_t {
	CResourceString m_Name; /* 0 4 */
	float32 m_flFloat; /* 4 4 */
};

// <05B965BC> ../public/resourcefile/resourceeditinfo.h:70
// member variables: 2
// struct size: 8
struct ResourceEditStringData_t {
	CResourceString m_Name; /* 0 4 */
	CResourceString m_String; /* 4 4 */
};

// <05B965ED> ../public/resourcefile/resourceeditinfo.h:76
// member variables: 3
// struct size: 12
struct ResourceCustomDependency_t {
	CResourceString m_Name; /* 0 4 */
	int32 m_nParentIndex; /* 4 4 */
	uint32 m_nFingerprint; /* 8 4 */
};

// <05B9662D> ../public/resourcefile/resourceeditinfo.h:85
// member variables: 2
// struct size: 8
struct ResourceAdditionalRelatedFile_t {
	CResourceString m_RelativeFilename; /* 0 4 */
	CResourceString m_SearchPath; /* 4 4 */
};

// <05B980CB> ../public/resourcefile/resourceeditinfo.h:95
// member variables: 10
// struct size: 80
struct ResourceEditInfoBlock_t {
	CResourceArray<ResourceInputDependency_t> m_InputDependencies; /* 0 8 */
	CResourceArray<ResourceInputDependency_t> m_AdditionalInputDependencies; /* 8 8 */
	CResourceArray<ResourceArgumentDependency_t> m_ArgumentDependencies; /* 16 8 */
	CResourceArray<ResourceSpecialDependency_t> m_SpecialDependencies; /* 24 8 */
	CResourceArray<ResourceCustomDependency_t> m_CustomDependencies; /* 32 8 */
	CResourceArray<ResourceAdditionalRelatedFile_t> m_AdditionalRelatedFiles; /* 40 8 */
	CResourceArray<ResourceReferenceInfo_t> m_ChildResourceList; /* 48 8 */
	CResourceArray<ResourceEditIntData_t> m_ExtraIntData; /* 56 8 */
	CResourceArray<ResourceEditFloatData_t> m_ExtraFloatData; /* 64 8 */
	CResourceArray<ResourceEditStringData_t> m_ExtraStringData; /* 72 8 */
};

