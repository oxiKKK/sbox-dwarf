
//
// tier2/manifestregistrar.cpp
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
//
//	functions: 8
//

// <0681892C> tier2/manifestregistrar.cpp:20
void CManifestRegistrar::CManifestRegistrar(ResourceManifestDesc_t* pDesc)
{
} /* size: 33 */

// <068188CE> tier2/manifestregistrar.cpp:32
// variable: 1
void RegisterAll(void)
{
	CManifestRegistrar* pCur; // 34
} /* size: 86, variables: 1 */

// <06818A15> tier2/manifestregistrar.cpp:51
// function call: 1
void UnregisterManifest(ResourceManifestDesc_t* pManifest)
{
	UnregisterManifest(ResourceManifestDesc_t* pManifest); // 51
} /* size: 0, inline expansions: 1 (0 bytes) */

// <068188B4> tier2/manifestregistrar.cpp:51
void UnregisterManifest(ResourceManifestDesc_t* pManifest)
{
} /* size: 0 */

// <068187E4> tier2/manifestregistrar.cpp:65
// variable: 1
// function calls: 2
void UnregisterManifests(ResourceManifestDesc_t** pManifests, int nManifests)
{
	{
		int i; // 67
		UnregisterManifest(ResourceManifestDesc_t* pManifest); // 51
		UnregisterManifest(ResourceManifestDesc_t* pManifest); // 69
	}
} /* size: 97 */

// <06818740> tier2/manifestregistrar.cpp:77
// variable: 1
// function calls: 2
void UnregisterAll(void)
{
	CManifestRegistrar* pCur; // 79
	UnregisterManifest(ResourceManifestDesc_t* pManifest); // 51
	UnregisterManifest(ResourceManifestDesc_t* pManifest); // 82
} /* size: 82, variables: 1, inline expansions: 2 (58 bytes) */

// <0681871F> tier2/manifestregistrar.cpp:91
int GetResourceManifestCount(void)
{
} /* size: 11 */

// <0681868B> tier2/manifestregistrar.cpp:96
// variables: 3
int GetResourceManifests(int nFirstIndex, ResourceManifestDesc_t** ppDesc, size_t nDescCount)
{
	int i; // 98
	size_t o; // 99
	CManifestRegistrar* pCur; // 100
} /* size: 78, variables: 3 */

