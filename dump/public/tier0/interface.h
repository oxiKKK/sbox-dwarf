
//
// public/tier0/interface.h
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
//	functions: 2
//	classes: 2
//

// <00172E79> ../public/tier0/interface.h:46
// member functions: 2
// member variables: 3
// class size: 24
class InterfaceReg {
	/* ../public/tier0/interface.h:49 */
	void InterfaceReg(InterfaceReg* , InstantiateInterfaceFn, const char* );
	InstantiateInterfaceFn m_CreateFn; /* 0 8 */
	const char * m_pName; /* 8 8 */
	InterfaceReg * m_pNext; /* 16 8 */
	void InterfaceReg(class InterfaceReg *, InstantiateInterfaceFn, const char  *); /* linkage=_ZN12InterfaceRegC4EPFPvvEPKc */
};

// <0000A53F> ../../public/tier0/interface.h:46
// member functions: 2
// member variables: 3
// class size: 24
class InterfaceReg {
	/* ../../public/tier0/interface.h:49 */
	void InterfaceReg(InterfaceReg* , InstantiateInterfaceFn, const char* );
	InstantiateInterfaceFn m_CreateFn; /* 0 8 */
	const char * m_pName; /* 8 8 */
	InterfaceReg * m_pNext; /* 16 8 */
	void InterfaceReg(class InterfaceReg *, InstantiateInterfaceFn, const char  *); /* linkage=_ZN12InterfaceRegC4EPFPvvEPKc */
};

// <03AE0128> ../public/tier0/interface.h:49
void InterfaceReg::InterfaceReg(InstantiateInterfaceFn fn, const char* pName)
{
} /* size: 0 */

// <001289FE> ../public/tier0/interface.h:156
CreateInterfaceFn Sys_GetFactoryThis(void)
{
} /* size: 0 */

