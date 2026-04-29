
//
// thirdparty/antlr/antlr3collections.c
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 51
//

// <06AE2BF2> thirdparty/antlr/antlr3collections.c:114
// variables: 2
pANTLR3_HASH_TABLE antlr3HashTableNew(ANTLR3_UINT32 sizeHint)
{
	pANTLR3_HASH_TABLE table; // 119
	ANTLR3_UINT32 bucket; // 121
} /* size: 0, variables: 2 */

// <06AE2B0C> thirdparty/antlr/antlr3collections.c:183
// variables: 4
void antlr3HashFree(pANTLR3_HASH_TABLE table)
{
	ANTLR3_UINT32 bucket; // 185
	pANTLR3_HASH_BUCKET thisBucket; // 187
	pANTLR3_HASH_ENTRY entry; // 188
	pANTLR3_HASH_ENTRY nextEntry; // 189
} /* size: 0, variables: 4 */

// <06AE2AD9> thirdparty/antlr/antlr3collections.c:254
ANTLR3_UINT32 antlr3HashSize(pANTLR3_HASH_TABLE table)
{
} /* size: 0 */

// <06AE2D2A> thirdparty/antlr/antlr3collections.c:262
// variables: 4
pANTLR3_HASH_ENTRY antlr3HashRemoveI(pANTLR3_HASH_TABLE table, ANTLR3_INTKEY key)
{
	ANTLR3_UINT32 hash; // 264
	pANTLR3_HASH_BUCKET bucket; // 265
	pANTLR3_HASH_ENTRY entry; // 266
	pANTLR3_HASH_ENTRY* nextPointer; // 267
} /* size: 0, variables: 4 */

// <06AE2936> thirdparty/antlr/antlr3collections.c:319
// variables: 4
// function call: 1
pANTLR3_HASH_ENTRY antlr3HashRemove(pANTLR3_HASH_TABLE table, void* key)
{
	ANTLR3_UINT32 hash; // 321
	pANTLR3_HASH_BUCKET bucket; // 322
	pANTLR3_HASH_ENTRY entry; // 323
	pANTLR3_HASH_ENTRY* nextPointer; // 324
	antlr3Hash(void* key,
			ANTLR3_UINT32 keylen);  // 328
} /* size: 0, variables: 4, inline expansions: 1 (0 bytes) */

// <06AE2843> thirdparty/antlr/antlr3collections.c:384
// variable: 1
// function call: 1
void antlr3HashDeleteI(pANTLR3_HASH_TABLE table, ANTLR3_INTKEY key)
{
	pANTLR3_HASH_ENTRY entry; // 386
	antlr3HashRemoveI(pANTLR3_HASH_TABLE table,
				ANTLR3_INTKEY key);  // 388
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06AE27B3> thirdparty/antlr/antlr3collections.c:408
// variable: 1
void antlr3HashDelete(pANTLR3_HASH_TABLE table, void* key)
{
	pANTLR3_HASH_ENTRY entry; // 410
} /* size: 0, variables: 1 */

// <06AE2730> thirdparty/antlr/antlr3collections.c:432
// variables: 3
void* antlr3HashGetI(pANTLR3_HASH_TABLE table, ANTLR3_INTKEY key)
{
	ANTLR3_UINT32 hash; // 434
	pANTLR3_HASH_BUCKET bucket; // 435
	pANTLR3_HASH_ENTRY entry; // 436
} /* size: 0, variables: 3 */

// <06AE261C> thirdparty/antlr/antlr3collections.c:471
// variables: 3
// function call: 1
void* antlr3HashGet(pANTLR3_HASH_TABLE table, void* key)
{
	ANTLR3_UINT32 hash; // 473
	pANTLR3_HASH_BUCKET bucket; // 474
	pANTLR3_HASH_ENTRY entry; // 475
	antlr3Hash(void* key,
			ANTLR3_UINT32 keylen);  // 480
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <06AE2539> thirdparty/antlr/antlr3collections.c:511
// variables: 4
ANTLR3_INT32 antlr3HashPutI(pANTLR3_HASH_TABLE table, ANTLR3_INTKEY key, void* element, void (*freeptr)(void *))
{
	ANTLR3_UINT32 hash; // 513
	pANTLR3_HASH_BUCKET bucket; // 514
	pANTLR3_HASH_ENTRY entry; // 515
	pANTLR3_HASH_ENTRY* newPointer; // 516
} /* size: 0, variables: 4 */

// <06AE23A8> thirdparty/antlr/antlr3collections.c:582
// variables: 4
// function call: 1
ANTLR3_INT32 antlr3HashPut(pANTLR3_HASH_TABLE table, void* key, void* element, void (*freeptr)(void *))
{
	ANTLR3_UINT32 hash; // 584
	pANTLR3_HASH_BUCKET bucket; // 585
	pANTLR3_HASH_ENTRY entry; // 586
	pANTLR3_HASH_ENTRY* newPointer; // 587
	antlr3Hash(void* key,
			ANTLR3_UINT32 keylen);  // 591
} /* size: 0, variables: 4, inline expansions: 1 (0 bytes) */

// <06AE2DF7> thirdparty/antlr/antlr3collections.c:717
// function call: 1
int antlr3EnumNext(pANTLR3_HASH_ENUM en, pANTLR3_HASH_KEY* key, void** data)
{
	antlr3EnumNext(pANTLR3_HASH_ENUM en,
			pANTLR3_HASH_KEY* key,
			void** data);  // 717
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06AE22F2> thirdparty/antlr/antlr3collections.c:717
int antlr3EnumNext(pANTLR3_HASH_ENUM en, pANTLR3_HASH_KEY* key, void** data)
{
} /* size: 0 */

// <06AE2D90> thirdparty/antlr/antlr3collections.c:753
// variable: 1
// function call: 1
void antlr3EnumNextEntry(pANTLR3_HASH_ENUM en)
{
	pANTLR3_HASH_BUCKET bucket; // 755
	antlr3EnumNextEntry(pANTLR3_HASH_ENUM en); // 753
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06AE22CA> thirdparty/antlr/antlr3collections.c:753
// variable: 1
void antlr3EnumNextEntry(pANTLR3_HASH_ENUM en)
{
	pANTLR3_HASH_BUCKET bucket; // 755
} /* size: 0, variables: 1 */

// <06AE227E> thirdparty/antlr/antlr3collections.c:810
void antlr3EnumFree(pANTLR3_HASH_ENUM en)
{
} /* size: 0 */

// <06AE222A> thirdparty/antlr/antlr3collections.c:822
// variables: 3
ANTLR3_UINT32 antlr3Hash(void* key, ANTLR3_UINT32 keylen)
{
	ANTLR3_UINT32 hash; // 826
	pANTLR3_UINT8 keyPtr; // 827
	ANTLR3_UINT32 i1; // 828
} /* size: 0, variables: 3 */

// <06AE21AC> thirdparty/antlr/antlr3collections.c:851
// variable: 1
pANTLR3_LIST antlr3ListNew(ANTLR3_UINT32 sizeHint)
{
	pANTLR3_LIST list; // 853
} /* size: 0, variables: 1 */

// <06AE2172> thirdparty/antlr/antlr3collections.c:886
ANTLR3_UINT32 antlr3ListSize(pANTLR3_LIST list)
{
} /* size: 0 */

// <06AE2124> thirdparty/antlr/antlr3collections.c:892
void antlr3ListFree(pANTLR3_LIST list)
{
} /* size: 0 */

// <06AE20C6> thirdparty/antlr/antlr3collections.c:904
void antlr3ListDelete(pANTLR3_LIST list, ANTLR3_INTKEY key)
{
} /* size: 0 */

// <06AE2064> thirdparty/antlr/antlr3collections.c:910
void* antlr3ListGet(pANTLR3_LIST list, ANTLR3_INTKEY key)
{
} /* size: 0 */

// <06AE1FC9> thirdparty/antlr/antlr3collections.c:917
// variable: 1
ANTLR3_INT32 antlr3ListAdd(pANTLR3_LIST list, void* element, void (*freeptr)(void *))
{
	ANTLR3_INTKEY key; // 919
} /* size: 0, variables: 1 */

// <06AE1F52> thirdparty/antlr/antlr3collections.c:929
// variable: 1
void* antlr3ListRemove(pANTLR3_LIST list, ANTLR3_INTKEY key)
{
	pANTLR3_HASH_ENTRY entry; // 931
} /* size: 0, variables: 1 */

// <06AE1EB8> thirdparty/antlr/antlr3collections.c:946
ANTLR3_INT32 antlr3ListPut(pANTLR3_LIST list, ANTLR3_INTKEY key, void* element, void (*freeptr)(void *))
{
} /* size: 0 */

// <06AE1D5C> thirdparty/antlr/antlr3collections.c:987
ANTLR3_UINT32 antlr3StackSize(pANTLR3_STACK stack)
{
} /* size: 0 */

// <06AE1D0E> thirdparty/antlr/antlr3collections.c:994
void antlr3StackFree(pANTLR3_STACK stack)
{
} /* size: 0 */

// <06AE1CD2> thirdparty/antlr/antlr3collections.c:1006
void* antlr3StackPop(pANTLR3_STACK stack)
{
} /* size: 0 */

// <06AE1C70> thirdparty/antlr/antlr3collections.c:1023
void* antlr3StackGet(pANTLR3_STACK stack, ANTLR3_INTKEY key)
{
} /* size: 0 */

// <06AE1C3B> thirdparty/antlr/antlr3collections.c:1029
void* antlr3StackPeek(pANTLR3_STACK stack)
{
} /* size: 0 */

// <06AE1BBD> thirdparty/antlr/antlr3collections.c:1035
ANTLR3_BOOLEAN antlr3StackPush(pANTLR3_STACK stack, void* element, void (*freeptr)(void *))
{
} /* size: 0 */

// <06AE1B58> thirdparty/antlr/antlr3collections.c:1066
// variable: 1
void antlr3SetVectorApi(pANTLR3_VECTOR vector, ANTLR3_UINT32 sizeHint)
{
	ANTLR3_UINT32 initialSize; // 1068
} /* size: 0, variables: 1 */

// <06AE1B0B> thirdparty/antlr/antlr3collections.c:1122
// variable: 1
void antlr3VectorClear(pANTLR3_VECTOR vector)
{
	ANTLR3_UINT32 entry; // 1124
} /* size: 0, variables: 1 */

// <06AE1A97> thirdparty/antlr/antlr3collections.c:1147
// variable: 1
void antlr3VectorFree(pANTLR3_VECTOR vector)
{
	ANTLR3_UINT32 entry; // 1149
} /* size: 0, variables: 1 */

// <06AE2E89> thirdparty/antlr/antlr3collections.c:1181
// function calls: 2
void antlr3VectorDel(pANTLR3_VECTOR vector, ANTLR3_UINT32 entry)
{
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 1209
	antlr3VectorDel(pANTLR3_VECTOR vector,
			ANTLR3_UINT32 entry);  // 1181
} /* size: 0, inline expansions: 2 (0 bytes) */

// <06AE1A6E> thirdparty/antlr/antlr3collections.c:1181
void antlr3VectorDel(pANTLR3_VECTOR vector, ANTLR3_UINT32 entry)
{
} /* size: 0 */

// <06AE1A24> thirdparty/antlr/antlr3collections.c:1217
void* antlr3VectorGet(pANTLR3_VECTOR vector, ANTLR3_UINT32 entry)
{
} /* size: 0 */

// <06AE196F> thirdparty/antlr/antlr3collections.c:1236
// variable: 1
// function call: 1
void* antrl3VectorRemove(pANTLR3_VECTOR vector, ANTLR3_UINT32 entry)
{
	void* element; // 1238
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 1264
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06AE1887> thirdparty/antlr/antlr3collections.c:1275
// variable: 1
// function call: 1
void antlr3VectorResize(pANTLR3_VECTOR vector, ANTLR3_UINT32 hint)
{
	ANTLR3_UINT32 newSize; // 1277
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1309
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06AE1807> thirdparty/antlr/antlr3collections.c:1318
ANTLR3_UINT32 antlr3VectorAdd(pANTLR3_VECTOR vector, void* element, void (*freeptr)(void *))
{
} /* size: 0 */

// <06AE1761> thirdparty/antlr/antlr3collections.c:1342
ANTLR3_UINT32 antlr3VectorSet(pANTLR3_VECTOR vector, ANTLR3_UINT32 entry, void* element, void (*freeptr)(void *), ANTLR3_BOOLEAN freeExisting)
{
} /* size: 0 */

// <06AE172C> thirdparty/antlr/antlr3collections.c:1375
ANTLR3_UINT32 antlr3VectorSize(pANTLR3_VECTOR vector)
{
} /* size: 0 */

// <06AE162E> thirdparty/antlr/antlr3collections.c:1383
// variable: 1
// function calls: 2
pANTLR3_VECTOR_FACTORY antlr3VectorFactoryNew(ANTLR3_UINT32 sizeHint)
{
	pANTLR3_VECTOR_FACTORY factory; // 1385
	newPool(pANTLR3_VECTOR_FACTORY factory); // 1401
	antlr3SetVectorApi(pANTLR3_VECTOR vector,
				ANTLR3_UINT32 sizeHint);  // 1406
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <06AE1612> thirdparty/antlr/antlr3collections.c:1419
void newPool(pANTLR3_VECTOR_FACTORY factory)
{
} /* size: 0 */

// <06AE1520> thirdparty/antlr/antlr3collections.c:1449
// variables: 5
void closeVectorFactory(pANTLR3_VECTOR_FACTORY factory)
{
	pANTLR3_VECTOR pool; // 1451
	ANTLR3_INT32 poolCount; // 1452
	ANTLR3_UINT32 limit; // 1453
	ANTLR3_UINT32 vector; // 1454
	pANTLR3_VECTOR check; // 1455
} /* size: 0, variables: 5 */

// <06AE1446> thirdparty/antlr/antlr3collections.c:1555
// variable: 1
// function calls: 2
pANTLR3_VECTOR newVector(pANTLR3_VECTOR_FACTORY factory)
{
	pANTLR3_VECTOR vector; // 1557
	antlr3SetVectorApi(pANTLR3_VECTOR vector,
				ANTLR3_UINT32 sizeHint);  // 1577
	newPool(pANTLR3_VECTOR_FACTORY factory); // 1566
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <06AE132C> thirdparty/antlr/antlr3collections.c:1721
// variables: 2
pANTLR3_TRIE_ENTRY intTrieGet(pANTLR3_INT_TRIE trie, ANTLR3_INTKEY key)
{
	pANTLR3_INT_TRIE_NODE thisNode; // 1723
	pANTLR3_INT_TRIE_NODE nextNode; // 1724
} /* size: 0, variables: 2 */

// <06AE12D5> thirdparty/antlr/antlr3collections.c:1791
// variable: 1
ANTLR3_BOOLEAN intTrieDel(pANTLR3_INT_TRIE trie, ANTLR3_INTKEY key)
{
	pANTLR3_INT_TRIE_NODE p; // 1793
} /* size: 0, variables: 1 */

// <06AE114A> thirdparty/antlr/antlr3collections.c:1813
// variables: 7
ANTLR3_BOOLEAN intTrieAdd(pANTLR3_INT_TRIE trie, ANTLR3_INTKEY key, ANTLR3_UINT32 type, ANTLR3_INTKEY intVal, void* data, void (*freeptr)(void *))
{
	pANTLR3_INT_TRIE_NODE thisNode; // 1815
	pANTLR3_INT_TRIE_NODE nextNode; // 1816
	pANTLR3_INT_TRIE_NODE entNode; // 1817
	ANTLR3_UINT32 depth; // 1818
	pANTLR3_TRIE_ENTRY newEnt; // 1819
	pANTLR3_TRIE_ENTRY nextEnt; // 1820
	ANTLR3_INTKEY xorKey; // 1821
} /* size: 0, variables: 7 */

// <06AE1084> thirdparty/antlr/antlr3collections.c:2090
// variables: 2
void freeIntNode(pANTLR3_INT_TRIE_NODE node)
{
	pANTLR3_TRIE_ENTRY thisEntry; // 2092
	pANTLR3_TRIE_ENTRY nextEntry; // 2093
} /* size: 0, variables: 2 */

// <06AE1029> thirdparty/antlr/antlr3collections.c:2149
void intTrieFree(pANTLR3_INT_TRIE trie)
{
} /* size: 0 */

