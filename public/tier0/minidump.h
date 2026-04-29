
//
// public/tier0/minidump.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	class: 1
//

// <0006CC45> ../public/tier0/minidump.h:18
// member functions: 9
// class size: 1
class ErrorReports {
	/* ../public/tier0/minidump.h:22 */
	void Init(void);
	/* ../public/tier0/minidump.h:23 */
	void Shutdown(void);
	/* ../public/tier0/minidump.h:24 */
	bool IsInterested(void);
	/* ../public/tier0/minidump.h:25 */
	int OnException(void* );
	/* ../public/tier0/minidump.h:26 */
	void SetTag(const char* , const char* );
	/* ../public/tier0/minidump.h:27 */
	void UpdateUser(const char* , const char* );
	/* ../public/tier0/minidump.h:28 */
	void UpdateGpu(const char* , uint64, const char* , const char* );
	/* ../public/tier0/minidump.h:29 */
	void Breadcrumb(bool, const char* , const char* );
	/* ../public/tier0/minidump.h:30 */
	void BreadcrumbFmt(bool, const char* , const char* , ...);
};

