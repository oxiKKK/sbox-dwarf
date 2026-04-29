
//
// meshsystem/morphsetmgr.cpp
//
//	referenced by: libmeshsystem.so
//
//	functions: 10
//

// <0043D5E5> meshsystem/morphsetmgr.cpp:16
// function call: 1
void CMorphSetManagerV0::CMorphSetManagerV0()
{
	CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>::CTypesafeIntrospectedToKV3TypeManager(); // 16
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0043D5CC> meshsystem/morphsetmgr.cpp:16
void CMorphSetManagerV0::CMorphSetManagerV0()
{
} /* size: 0 */

// <0043D540> meshsystem/morphsetmgr.cpp:22
// function calls: 2
void CMorphSetManagerV0::~CMorphSetManagerV0()
{
	CBaseIntrospectedToKV3TypeManager::~CBaseIntrospectedToKV3TypeManager(); // 113
	CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>::~CTypesafeIntrospectedToKV3TypeManager(); // 24
} /* size: 5, inline expansions: 2 (0 bytes) */

// <0043D45E> meshsystem/morphsetmgr.cpp:22
// function calls: 3
void CMorphSetManagerV0::~CMorphSetManagerV0()
{
	CBaseIntrospectedToKV3TypeManager::~CBaseIntrospectedToKV3TypeManager(); // 113
	CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>::~CTypesafeIntrospectedToKV3TypeManager(); // 24
	CMorphSetManagerV0::~CMorphSetManagerV0(); // 24
} /* size: 14, inline expansions: 3 (0 bytes) */

// <0043D445> meshsystem/morphsetmgr.cpp:22
void CMorphSetManagerV0::~CMorphSetManagerV0()
{
} /* size: 0 */

// <0043E08F> meshsystem/morphsetmgr.cpp:26
void CMorphSetManagerV0::AllocateTypesafe(CMorphSetData* pDataFromDisk, IKV3ResourceAllocatorUtils* pUtils)
{
} /* size: 8 */

// <0043E129> meshsystem/morphsetmgr.cpp:31
// function calls: 7
void CMorphSetManagerV0::DeallocateTypesafe(CMorphSetData* pData, IKV3ResourceDeallocatorUtils* pUtils)
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 185
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 208
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 33
} /* size: 145, inline expansions: 7 (363 bytes) */

// <0043D3E3> meshsystem/morphsetmgr.cpp:31
void CMorphSetManagerV0::DeallocateTypesafe(CMorphSetData* pData, IKV3ResourceDeallocatorUtils* pUtils)
{
} /* size: 0 */

// <0043D325> meshsystem/morphsetmgr.cpp:36
// function calls: 2
void CMorphSetManagerV0::InstallResourceType()
{
	ResourceTypeName(void); // 673
	IResourceSystem::InstallTypeManager<440006569334>(
					IResourceTypeManager* pTypeManager,
					const char* pErrorManifestName);  // 38
} /* size: 46, inline expansions: 2 (29 bytes) */

// <0043D2DE> meshsystem/morphsetmgr.cpp:41
void CMorphSetManagerV0::RemoveResourceType()
{
} /* size: 26 */

