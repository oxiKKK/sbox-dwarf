
//
// public/kv3lib/kv3transfer_constants.h
//
//	referenced by: libanimationsystem.so
//
//	structs: 10
//

// <03275227> ../public/kv3lib/kv3transfer_constants.h:190
// member variables: 3
// struct size: 24
struct KV3Transfer_EnumHelpers_StringPair_t<IKSolverType> {
	IKSolverType m_nEnum; /* 0 4 */
	const char * m_pKV3TransferString; /* 8 8 */
	const char * m_pFriendlyName; /* 16 8 */
};

// <0339FCC1> ../public/kv3lib/kv3transfer_constants.h:190
// member variables: 3
// struct size: 24
struct KV3Transfer_EnumHelpers_StringPair_t<IKSystemType> {
	IKSystemType m_nEnum; /* 0 4 */
	const char * m_pKV3TransferString; /* 8 8 */
	const char * m_pFriendlyName; /* 16 8 */
};

// <033BE7D6> ../public/kv3lib/kv3transfer_constants.h:190
// member variables: 3
// struct size: 24
struct KV3Transfer_EnumHelpers_StringPair_t<HingeAxis> {
	HingeAxis m_nEnum; /* 0 4 */
	const char * m_pKV3TransferString; /* 8 8 */
	const char * m_pFriendlyName; /* 16 8 */
};

// <034C13CD> ../public/kv3lib/kv3transfer_constants.h:190
// member variables: 3
// struct size: 24
struct KV3Transfer_EnumHelpers_StringPair_t<IKTargetSource> {
	IKTargetSource m_nEnum; /* 0 4 */
	const char * m_pKV3TransferString; /* 8 8 */
	const char * m_pFriendlyName; /* 16 8 */
};

// <034C14A5> ../public/kv3lib/kv3transfer_constants.h:190
// member variables: 3
// struct size: 24
struct KV3Transfer_EnumHelpers_StringPair_t<IKTargetCoordinateSystem> {
	IKTargetCoordinateSystem m_nEnum; /* 0 4 */
	const char * m_pKV3TransferString; /* 8 8 */
	const char * m_pFriendlyName; /* 16 8 */
};

// <032751ED> ../public/kv3lib/kv3transfer_constants.h:197
// member variables: 2
// struct size: 16
struct KV3Transfer_EnumHelpers_StringPairList_t<IKSolverType> {
	KV3Transfer_EnumHelpers_StringPair_t<IKSolverType> * m_pList; /* 0 8 */
	size_t m_nCount; /* 8 8 */
};

// <0339FC87> ../public/kv3lib/kv3transfer_constants.h:197
// member variables: 2
// struct size: 16
struct KV3Transfer_EnumHelpers_StringPairList_t<IKSystemType> {
	KV3Transfer_EnumHelpers_StringPair_t<IKSystemType> * m_pList; /* 0 8 */
	size_t m_nCount; /* 8 8 */
};

// <033BE79C> ../public/kv3lib/kv3transfer_constants.h:197
// member variables: 2
// struct size: 16
struct KV3Transfer_EnumHelpers_StringPairList_t<HingeAxis> {
	KV3Transfer_EnumHelpers_StringPair_t<HingeAxis> * m_pList; /* 0 8 */
	size_t m_nCount; /* 8 8 */
};

// <034C1393> ../public/kv3lib/kv3transfer_constants.h:197
// member variables: 2
// struct size: 16
struct KV3Transfer_EnumHelpers_StringPairList_t<IKTargetSource> {
	KV3Transfer_EnumHelpers_StringPair_t<IKTargetSource> * m_pList; /* 0 8 */
	size_t m_nCount; /* 8 8 */
};

// <034C146B> ../public/kv3lib/kv3transfer_constants.h:197
// member variables: 2
// struct size: 16
struct KV3Transfer_EnumHelpers_StringPairList_t<IKTargetCoordinateSystem> {
	KV3Transfer_EnumHelpers_StringPair_t<IKTargetCoordinateSystem> * m_pList; /* 0 8 */
	size_t m_nCount; /* 8 8 */
};

