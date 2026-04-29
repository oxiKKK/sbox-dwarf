
//
// include/antlr3treeparser.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	struct: 1
//

// <06AD8A5A> include/antlr3treeparser.h:46
// member functions: 3
// member variables: 6
// struct size: 48
struct ANTLR3_TREE_PARSER_struct {
	void * super; /* 0 8 */
	pANTLR3_BASE_RECOGNIZER rec; /* 8 8 */
	pANTLR3_COMMON_TREE_NODE_STREAM ctnstream; /* 16 8 */
	void (*setTreeNodeStream)(ANTLR3_TREE_PARSER_struct* , pANTLR3_COMMON_TREE_NODE_STREAM); /* 24 8* /
	pANTLR3_COMMON_TREE_NODE_STREAM (*getTreeNodeStream)(ANTLR3_TREE_PARSER_struct* ); /* 32 8* /
	void (*free)(ANTLR3_TREE_PARSER_struct* ); /* 40 8* /
};

