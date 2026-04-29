
//
// thirdparty/antlr/include/antlr3baserecognizer.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	struct: 1
//

// <06A52927> ../thirdparty/antlr/include/antlr3baserecognizer.h:67
// member functions: 33
// member variables: 37
// struct size: 296
struct ANTLR3_BASE_RECOGNIZER_struct {
	void * super; /* 0 8 */
	ANTLR3_UINT32 type; /* 8 4 */
	pANTLR3_RECOGNIZER_SHARED_STATE state; /* 16 8 */
	pANTLR3_DEBUG_EVENT_LISTENER debugger; /* 24 8 */
	void* (*match)(ANTLR3_BASE_RECOGNIZER_struct* , ANTLR3_UINT32, pANTLR3_BITSET_LIST); /* 32 8* /
	void (*matchAny)(ANTLR3_BASE_RECOGNIZER_struct* ); /* 40 8* /
	ANTLR3_BOOLEAN (*mismatchIsUnwantedToken)(ANTLR3_BASE_RECOGNIZER_struct* , pANTLR3_INT_STREAM, ANTLR3_UINT32); /* 48 8* /
	ANTLR3_BOOLEAN (*mismatchIsMissingToken)(ANTLR3_BASE_RECOGNIZER_struct* , pANTLR3_INT_STREAM, pANTLR3_BITSET_LIST); /* 56 8* /
	void (*mismatch)(ANTLR3_BASE_RECOGNIZER_struct* , ANTLR3_UINT32, pANTLR3_BITSET_LIST); /* 64 8* /
	void (*reportError)(ANTLR3_BASE_RECOGNIZER_struct* ); /* 72 8* /
	void (*displayRecognitionError)(ANTLR3_BASE_RECOGNIZER_struct* , pANTLR3_UINT8* ); /* 80 8* /
	ANTLR3_UINT32 (*getNumberOfSyntaxErrors)(ANTLR3_BASE_RECOGNIZER_struct* ); /* 88 8* /
	void (*recover)(ANTLR3_BASE_RECOGNIZER_struct* ); /* 96 8* /
	void (*beginResync)(ANTLR3_BASE_RECOGNIZER_struct* ); /* 104 8* /
	void (*endResync)(ANTLR3_BASE_RECOGNIZER_struct* ); /* 112 8* /
	void (*beginBacktrack)(ANTLR3_BASE_RECOGNIZER_struct* , ANTLR3_UINT32); /* 120 8* /
	void (*endBacktrack)(ANTLR3_BASE_RECOGNIZER_struct* , ANTLR3_UINT32, ANTLR3_BOOLEAN); /* 128 8* /
	pANTLR3_BITSET (*computeErrorRecoverySet)(ANTLR3_BASE_RECOGNIZER_struct* ); /* 136 8* /
	pANTLR3_BITSET (*computeCSRuleFollow)(ANTLR3_BASE_RECOGNIZER_struct* ); /* 144 8* /
	pANTLR3_BITSET (*combineFollows)(ANTLR3_BASE_RECOGNIZER_struct* , ANTLR3_BOOLEAN); /* 152 8* /
	void* (*recoverFromMismatchedToken)(ANTLR3_BASE_RECOGNIZER_struct* , ANTLR3_UINT32, pANTLR3_BITSET_LIST); /* 160 8* /
	void* (*recoverFromMismatchedSet)(ANTLR3_BASE_RECOGNIZER_struct* , pANTLR3_BITSET_LIST); /* 168 8* /
	ANTLR3_BOOLEAN (*recoverFromMismatchedElement)(ANTLR3_BASE_RECOGNIZER_struct* , pANTLR3_BITSET_LIST); /* 176 8* /
	void (*consumeUntil)(ANTLR3_BASE_RECOGNIZER_struct* , ANTLR3_UINT32); /* 184 8* /
	void (*consumeUntilSet)(ANTLR3_BASE_RECOGNIZER_struct* , pANTLR3_BITSET); /* 192 8* /
	pANTLR3_STACK (*getRuleInvocationStack)(ANTLR3_BASE_RECOGNIZER_struct* ); /* 200 8* /
	pANTLR3_STACK (*getRuleInvocationStackNamed)(ANTLR3_BASE_RECOGNIZER_struct* , pANTLR3_UINT8); /* 208 8* /
	pANTLR3_HASH_TABLE (*toStrings)(ANTLR3_BASE_RECOGNIZER_struct* , pANTLR3_HASH_TABLE); /* 216 8* /
	ANTLR3_MARKER (*getRuleMemoization)(ANTLR3_BASE_RECOGNIZER_struct* , ANTLR3_INTKEY, ANTLR3_MARKER); /* 224 8* /
	ANTLR3_BOOLEAN (*alreadyParsedRule)(ANTLR3_BASE_RECOGNIZER_struct* , ANTLR3_MARKER); /* 232 8* /
	void (*memoize)(ANTLR3_BASE_RECOGNIZER_struct* , ANTLR3_MARKER, ANTLR3_MARKER); /* 240 8* /
	void* (*getCurrentInputSymbol)(ANTLR3_BASE_RECOGNIZER_struct* , pANTLR3_INT_STREAM); /* 248 8* /
	void* (*getMissingSymbol)(ANTLR3_BASE_RECOGNIZER_struct* , pANTLR3_INT_STREAM, pANTLR3_EXCEPTION, ANTLR3_UINT32, pANTLR3_BITSET_LIST); /* 256 8* /
	ANTLR3_BOOLEAN (*synpred)(ANTLR3_BASE_RECOGNIZER_struct* , void* , void (*)(void* )); /* 264 8* /
	void (*exConstruct)(ANTLR3_BASE_RECOGNIZER_struct* ); /* 272 8* /
	void (*reset)(ANTLR3_BASE_RECOGNIZER_struct* ); /* 280 8* /
	void (*free)(ANTLR3_BASE_RECOGNIZER_struct* ); /* 288 8* /
};

