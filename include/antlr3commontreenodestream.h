
//
// include/antlr3commontreenodestream.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	structs: 2
//

// <06AD8438> include/antlr3commontreenodestream.h:53
// member functions: 10
// member variables: 12
// struct size: 96
struct ANTLR3_TREE_NODE_STREAM_struct {
	pANTLR3_COMMON_TREE_NODE_STREAM ctns; /* 0 8 */
	pANTLR3_INT_STREAM istream; /* 8 8 */
	pANTLR3_BASE_TREE (*_LT)(ANTLR3_TREE_NODE_STREAM_struct* , ANTLR3_INT32); /* 16 8* /
	pANTLR3_BASE_TREE (*getTreeSource)(ANTLR3_TREE_NODE_STREAM_struct* ); /* 24 8* /
	pANTLR3_BASE_TREE_ADAPTOR (*getTreeAdaptor)(ANTLR3_TREE_NODE_STREAM_struct* ); /* 32 8* /
	void (*setUniqueNavigationNodes)(ANTLR3_TREE_NODE_STREAM_struct* , ANTLR3_BOOLEAN); /* 40 8* /
	pANTLR3_STRING (*toString)(ANTLR3_TREE_NODE_STREAM_struct* ); /* 48 8* /
	pANTLR3_STRING (*toStringSS)(ANTLR3_TREE_NODE_STREAM_struct* , pANTLR3_BASE_TREE, pANTLR3_BASE_TREE); /* 56 8* /
	void (*toStringWork)(ANTLR3_TREE_NODE_STREAM_struct* , pANTLR3_BASE_TREE, pANTLR3_BASE_TREE, pANTLR3_STRING); /* 64 8* /
	void (*free)(ANTLR3_TREE_NODE_STREAM_struct* ); /* 72 8* /
	pANTLR3_BASE_TREE (*get)(ANTLR3_TREE_NODE_STREAM_struct* , ANTLR3_INT32); /* 80 8* /
	void (*replaceChildren)(ANTLR3_TREE_NODE_STREAM_struct* , pANTLR3_BASE_TREE, ANTLR3_INT32, ANTLR3_INT32, pANTLR3_BASE_TREE); /* 88 8* /
};

// <06AD850C> include/antlr3commontreenodestream.h:144
// member functions: 16
// member variables: 39
// struct size: 1,520
struct ANTLR3_COMMON_TREE_NODE_STREAM_struct {
	void * super; /* 0 8 */
	pANTLR3_TREE_NODE_STREAM tnstream; /* 8 8 */
	pANTLR3_STRING_FACTORY stringFactory; /* 16 8 */
	ANTLR3_COMMON_TREE DOWN; /* 24 312 */
	ANTLR3_COMMON_TREE UP; /* 336 312 */
	ANTLR3_COMMON_TREE EOF_NODE; /* 648 312 */
	ANTLR3_COMMON_TREE INVALID_NODE; /* 960 312 */
	pANTLR3_VECTOR nodes; /* 1272 8 */
	ANTLR3_BOOLEAN uniqueNavigationNodes; /* 1280 4 */
	pANTLR3_BASE_TREE root; /* 1288 8 */
	pANTLR3_BASE_TREE_ADAPTOR adaptor; /* 1296 8 */
	pANTLR3_STACK nodeStack; /* 1304 8 */
	ANTLR3_INT32 p; /* 1312 4 */
	pANTLR3_BASE_TREE currentNode; /* 1320 8 */
	pANTLR3_BASE_TREE previousNode; /* 1328 8 */
	ANTLR3_INT32 currentChildIndex; /* 1336 4 */
	ANTLR3_MARKER absoluteNodeIndex; /* 1344 8 */
	pANTLR3_BASE_TREE * lookAhead; /* 1352 8 */
	ANTLR3_UINT32 lookAheadLength; /* 1360 4 */
	ANTLR3_UINT32 head; /* 1364 4 */
	ANTLR3_UINT32 tail; /* 1368 4 */
	pANTLR3_VECTOR markers; /* 1376 8 */
	void (*fill)(ANTLR3_COMMON_TREE_NODE_STREAM_struct* , ANTLR3_INT32); /* 1384 8* /
	void (*addLookahead)(ANTLR3_COMMON_TREE_NODE_STREAM_struct* , pANTLR3_BASE_TREE); /* 1392 8* /
	ANTLR3_BOOLEAN (*hasNext)(ANTLR3_COMMON_TREE_NODE_STREAM_struct* ); /* 1400 8* /
	pANTLR3_BASE_TREE (*next)(ANTLR3_COMMON_TREE_NODE_STREAM_struct* ); /* 1408 8* /
	pANTLR3_BASE_TREE (*handleRootnode)(ANTLR3_COMMON_TREE_NODE_STREAM_struct* ); /* 1416 8* /
	pANTLR3_BASE_TREE (*visitChild)(ANTLR3_COMMON_TREE_NODE_STREAM_struct* , ANTLR3_UINT32); /* 1424 8* /
	void (*addNavigationNode)(ANTLR3_COMMON_TREE_NODE_STREAM_struct* , ANTLR3_UINT32); /* 1432 8* /
	pANTLR3_BASE_TREE (*newDownNode)(ANTLR3_COMMON_TREE_NODE_STREAM_struct* ); /* 1440 8* /
	pANTLR3_BASE_TREE (*newUpNode)(ANTLR3_COMMON_TREE_NODE_STREAM_struct* ); /* 1448 8* /
	void (*walkBackToMostRecentNodeWithUnvisitedChildren)(ANTLR3_COMMON_TREE_NODE_STREAM_struct* ); /* 1456 8* /
	ANTLR3_BOOLEAN (*hasUniqueNavigationNodes)(ANTLR3_COMMON_TREE_NODE_STREAM_struct* ); /* 1464 8* /
	ANTLR3_UINT32 (*getLookaheadSize)(ANTLR3_COMMON_TREE_NODE_STREAM_struct* ); /* 1472 8* /
	void (*push)(ANTLR3_COMMON_TREE_NODE_STREAM_struct* , ANTLR3_INT32); /* 1480 8* /
	ANTLR3_INT32 (*pop)(ANTLR3_COMMON_TREE_NODE_STREAM_struct* ); /* 1488 8* /
	void (*reset)(ANTLR3_COMMON_TREE_NODE_STREAM_struct* ); /* 1496 8* /
	void (*free)(ANTLR3_COMMON_TREE_NODE_STREAM_struct* ); /* 1504 8* /
	ANTLR3_BOOLEAN isRewriter; /* 1512 4 */
};

