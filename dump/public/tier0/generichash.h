
//
// public/tier0/generichash.h
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
//	functions: 20
//	structs: 2
//

// <00B0A993> ../public/tier0/generichash.h:17
uint32 MurmurHash2(const void *, int, uint32)
{
} /* size: 0 */

// <0012819F> ../public/tier0/generichash.h:20
uint32 MurmurHash2LowerCase(const char *, uint32)
{
} /* size: 0 */

// <066CCC7A> ../public/tier0/generichash.h:23
uint64 MurmurHash64(const void *, int, uint32)
{
} /* size: 0 */

// <04E7F6F0> ../public/tier0/generichash.h:30
unsigned int HashString(const char *)
{
} /* size: 0 */

// <035656F1> ../public/tier0/generichash.h:35
inline unsigned int HashStringFastCaseless(const char* pszKey)
{
} /* size: 0 */

// <00B51A6E> ../public/tier0/generichash.h:38
inline unsigned int Hash12(const void* pKey)
{
} /* size: 0 */

// <02B8A07C> ../public/tier0/generichash.h:40
inline unsigned int HashBlock(const void* pKey, unsigned int size)
{
} /* size: 0 */

// <04D7CB8E> ../public/tier0/generichash.h:41
inline unsigned int HashInt(const int key)
{
} /* size: 0 */

// <04026719> ../public/tier0/generichash.h:42
inline unsigned int HashIntp(const intp key)
{
} /* size: 0 */

// <02F2C915> ../public/tier0/generichash.h:45
inline uint32 HashIntAlternate(uint32 n)
{
} /* size: 0 */

// <02383CC9> ../public/tier0/generichash.h:56
// variable: 1
inline unsigned int HashIntConventional(const int n)
{
	unsigned int hash; // 59
} /* size: 0, variables: 1 */

// <039F92A9> ../public/tier0/generichash.h:85
inline uint32 HashCombine(uint32& nSeed, uint32 nHash)
{
} /* size: 0 */

// <021D0FB5> ../public/tier0/generichash.h:100
inline unsigned int HashItem<ResourceId_t>(const ResourceId_t& item)
{
} /* size: 0 */

// <00D99D05> ../public/tier0/generichash.h:100
inline unsigned int HashItem<long long unsigned int>(const long long unsigned int& item)
{
} /* size: 0 */

// <0017A6DF> ../public/tier0/generichash.h:100
inline unsigned int HashItem<RsRasterizerStateDesc_t>(const RsRasterizerStateDesc_t& item)
{
} /* size: 0 */

// <0017A6B5> ../public/tier0/generichash.h:100
inline unsigned int HashItem<RsDepthStencilStateDesc_t>(const RsDepthStencilStateDesc_t& item)
{
} /* size: 0 */

// <0017A68B> ../public/tier0/generichash.h:100
inline unsigned int HashItem<RsBlendStateDesc_t>(const RsBlendStateDesc_t& item)
{
} /* size: 0 */

// <002F10A7> ../public/tier0/generichash.h:100
inline unsigned int HashItem<SpamKey_t>(const SpamKey_t& item)
{
} /* size: 0 */

// <0098AA21> ../public/tier0/generichash.h:116
// member function: 1
// struct size: 1
struct HashMapFunctor_t<long long unsigned int> {
	/* ../public/tier0/generichash.h:118 */
	typedef uint32 TargetType;
	/* ../public/tier0/generichash.h:119 */
	TargetType operator()(const HashMapFunctor_t<long long unsigned int>* , const long long unsigned int& );
};

// <0098D1CF> ../public/tier0/generichash.h:116
// member function: 1
// struct size: 1
struct HashMapFunctor_t<unsigned int> {
	/* ../public/tier0/generichash.h:118 */
	typedef uint32 TargetType;
	/* ../public/tier0/generichash.h:119 */
	TargetType operator()(const HashMapFunctor_t<unsigned int>* , const unsigned int& );
};

// <00D9A56C> ../public/tier0/generichash.h:119
inline void HashMapFunctor_t<long long unsigned int>::operator(const long long unsigned int& key)
{
} /* size: 0 */

// <00D9A012> ../public/tier0/generichash.h:119
inline void HashMapFunctor_t<unsigned int>::operator(const unsigned int& key)
{
} /* size: 0 */

