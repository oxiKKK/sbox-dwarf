
//
// public/resourcefile/resourceextreflist.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//				   libschemasystem.so
//
//	structs: 2
//

// <02333C90> ../public/resourcefile/resourceextreflist.h:23
// member variables: 2
// struct size: 16
struct ResourceReferenceInfo_t {
	uint64 m_nId __attribute__((__aligned__(8))); /* 0 8 */
	CResourceString m_pResourceName; /* 8 4 */
} __attribute__((__aligned__(8)));

// <02334017> ../public/resourcefile/resourceextreflist.h:31
// member variable: 1
// struct size: 8
struct ResourceExtRefList_t {
	CResourceArray<ResourceReferenceInfo_t> m_resourceRefInfoList; /* 0 8 */
};

