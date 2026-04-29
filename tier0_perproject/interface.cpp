
//
// tier0_perproject/interface.cpp
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
//	functions: 4
//

// <04446CAF> tier0_perproject/interface.cpp:15
void InterfaceReg::InterfaceReg(InstantiateInterfaceFn fn, const char* pName)
{
} /* size: 30 */

// <04446BC6> tier0_perproject/interface.cpp:35
// variable: 1
// function call: 1
void* CreateInterfaceInternal(const char* pName, int* pReturnCode)
{
	InterfaceReg* pCur; // 37
	V_strcmp(const char* s1,
		const char* s2);  // 41
} /* size: 122, variables: 1, inline expansions: 1 (12 bytes) */

// <04446B5B> tier0_perproject/interface.cpp:58
void* CreateInterface(const char* pName, int* pReturnCode)
{
} /* size: 9 */

// <01C10417> tier0_perproject/interface.cpp:67
CreateInterfaceFn Sys_GetFactoryThis(void)
{
} /* size: 0 */

