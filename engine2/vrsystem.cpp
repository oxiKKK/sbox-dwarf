
//
// engine2/vrsystem.cpp
//
//	referenced by: libengine2.so
//
//	functions: 11
//

// <01E834B4> engine2/vrsystem.cpp:10
void* __CreateCVRSystemIVRSystem_interface(void)
{
} /* size: 12 */

// <01E83486> engine2/vrsystem.cpp:20
void CVRSystem::GetDependencies()
{
} /* size: 12 */

// <01E83458> engine2/vrsystem.cpp:25
void CVRSystem::Init()
{
} /* size: 10 */

// <01E8342A> engine2/vrsystem.cpp:30
void CVRSystem::Shutdown()
{
} /* size: 5 */

// <01E833E7> engine2/vrsystem.cpp:36
void CVRSystem::IsActive()
{
} /* size: 9 */

// <01E8336D> engine2/vrsystem.cpp:41
void CVRSystem::Submit(HRenderTexture* textureHandle, HRenderTexture* depthTextureHandle)
{
} /* size: 15 */

// <01E83342> engine2/vrsystem.cpp:46
bool GetVulkanExtensions(const char* extensionsRequired, CUtlStringList& outList)
{
} /* size: 0 */

// <01E8328A> engine2/vrsystem.cpp:55
// function call: 1
void CVRSystem::GetVulkanInstanceExtensionsRequired(CUtlStringList& outInstanceExtensionList)
{
	GetVulkanExtensions(const char* extensionsRequired,
				CUtlStringList& outList);  // 57
} /* size: 57, inline expansions: 1 (27 bytes) */

// <01E831D2> engine2/vrsystem.cpp:63
// function call: 1
void CVRSystem::GetVulkanDeviceExtensionsRequired(CUtlStringList& outDeviceExtensionList)
{
	GetVulkanExtensions(const char* extensionsRequired,
				CUtlStringList& outList);  // 65
} /* size: 57, inline expansions: 1 (27 bytes) */

// <01E8318F> engine2/vrsystem.cpp:71
void CVRSystem::BeginFrame()
{
} /* size: 9 */

// <01E8314C> engine2/vrsystem.cpp:76
void CVRSystem::EndFrame()
{
} /* size: 9 */

