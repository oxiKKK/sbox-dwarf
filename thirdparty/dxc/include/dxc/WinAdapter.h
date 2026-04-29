
//
// thirdparty/dxc/include/dxc/WinAdapter.h
//
//	referenced by: librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 4
//	structs: 3
//

// <00995BAC> ../thirdparty/dxc/include/dxc/WinAdapter.h:372
// member variables: 4
// struct size: 16
struct GUID {
	uint32_t Data1; /* 0 4 */
	uint16_t Data2; /* 4 2 */
	uint16_t Data3; /* 6 2 */
	uint8_t Data4[8]; /* 8 8 */
};

// <0011E976> ../../thirdparty/dxc/include/dxc/WinAdapter.h:573
// member functions: 7
// member variable: 1
// vtable entries: 3
// struct size: 8
struct IUnknown {
	void ~IUnknown(IUnknown* );
	void IUnknown(IUnknown* , IUnknown& );
	void IUnknown(IUnknown* , const IUnknown& );
	int ()(void) * * _vptr.IUnknown; /* 0 8 */
	/* ../../thirdparty/dxc/include/dxc/WinAdapter.h:574 */
	void IUnknown(IUnknown* );
	/* ../../thirdparty/dxc/include/dxc/WinAdapter.h:575 */
	virtual HRESULT QueryInterface(IUnknown* , REFIID, void** );
	/* ../../thirdparty/dxc/include/dxc/WinAdapter.h:576 */
	virtual ULONG AddRef(IUnknown* );
	/* ../../thirdparty/dxc/include/dxc/WinAdapter.h:577 */
	virtual ULONG Release(IUnknown* );
};

// <0018EF0A> ../../thirdparty/dxc/include/dxc/WinAdapter.h:574
void IUnknown::IUnknown()
{
} /* size: 0 */

// <0018EEF1> ../../thirdparty/dxc/include/dxc/WinAdapter.h:574
inline void IUnknown::IUnknown()
{
} /* size: 0 */

// <00142723> ../../thirdparty/dxc/include/dxc/WinAdapter.h:587
void IMalloc::IMalloc()
{
} /* size: 0 */

// <00142706> ../../thirdparty/dxc/include/dxc/WinAdapter.h:587
inline void IMalloc::IMalloc()
{
} /* size: 0 */

// <0011ECB8> ../../thirdparty/dxc/include/dxc/WinAdapter.h:587
// member functions: 10
// member variable: 1
// vtable entries: 6
// struct size: 8
struct IMalloc : public IUnknown {
public:
	/* struct IUnknown <ancestor>; */ /* 0 8 */
	void ~IMalloc(IMalloc* );
	void IMalloc(IMalloc* , IMalloc& );
	void IMalloc(IMalloc* , const IMalloc& );
	void IMalloc(IMalloc* );
	/* ../../thirdparty/dxc/include/dxc/WinAdapter.h:588 */
	virtual void* Alloc(IMalloc* , SIZE_T);
	/* ../../thirdparty/dxc/include/dxc/WinAdapter.h:589 */
	virtual void* Realloc(IMalloc* , void* , SIZE_T);
	/* ../../thirdparty/dxc/include/dxc/WinAdapter.h:590 */
	virtual void Free(IMalloc* , void* );
	/* ../../thirdparty/dxc/include/dxc/WinAdapter.h:591 */
	virtual SIZE_T GetSize(IMalloc* , void* );
	/* ../../thirdparty/dxc/include/dxc/WinAdapter.h:592 */
	virtual int DidAlloc(IMalloc* , void* );
	/* ../../thirdparty/dxc/include/dxc/WinAdapter.h:593 */
	virtual void HeapMinimize(IMalloc* );
};

