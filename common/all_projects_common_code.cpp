
//
// common/all_projects_common_code.cpp
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
//	functions: 6
//

// <00005BAD> ../common/all_projects_common_code.cpp:37
const char* GetNameOfModule(void)
{
} /* size: 12 */

// <000041AE> ../common/all_projects_common_code.cpp:185
void EarlyInit_Tier0(COrderedSystem_DependencyManagement *)
{
} /* size: 0 */

// <00005B82> ../common/all_projects_common_code.cpp:187
void EarlyInit_Common(bool bInit, COrderedSystem_DependencyManagement& owner)
{
} /* size: 0 */

// <00005A7D> ../common/all_projects_common_code.cpp:311
// function calls: 3
int BinaryProperties_GetValue(BinaryProperties_Lookups_t propertyLookup, BinaryProperties_Value_t* pOutput)
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1141
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::Touch(); // 314
} /* size: 252, inline expansions: 3 (126 bytes) */

// <00005A38> ../common/all_projects_common_code.cpp:436
int ResolveExeProbe(BinaryProperties_Lookups_t propertyLookup, BinaryProperties_Value_t* pOutput)
{
} /* size: 0 */

// <000059C9> ../common/all_projects_common_code.cpp:465
int BinaryProperties_GetExeValue(BinaryProperties_Lookups_t propertyLookup, BinaryProperties_Value_t* pOutput)
{
} /* size: 0 */

