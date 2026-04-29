
//
// thirdparty/dxc/include/dxc/dxcapi.h
//
//	referenced by: librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 8
//	structs: 2
//

// <009A5B25> ../thirdparty/dxc/include/dxc/dxcapi.h:75
HRESULT DxcCreateInstance(REFCLSID, REFIID, LPVOID *)
{
} /* size: 0 */

// <0012AAE3> ../../thirdparty/dxc/include/dxc/dxcapi.h:83
HRESULT DxcCreateInstance2(IMalloc *, REFCLSID, REFIID, LPVOID *)
{
} /* size: 0 */

// <00A544B4> ../thirdparty/dxc/include/dxc/dxcapi.h:200
// variable: 1
inline GUID __emulated_uuidof<IDxcBlobUtf8>(void)
{
	const IID  _IID; // 200
} /* size: 0, variables: 1 */

// <0018E98E> ../../thirdparty/dxc/include/dxc/dxcapi.h:234
void IDxcIncludeHandler::IDxcIncludeHandler()
{
} /* size: 0 */

// <0018E971> ../../thirdparty/dxc/include/dxc/dxcapi.h:234
inline void IDxcIncludeHandler::IDxcIncludeHandler()
{
} /* size: 0 */

// <001895E2> ../../thirdparty/dxc/include/dxc/dxcapi.h:234
// member functions: 5
// member variable: 1
// vtable entry: 1
// struct size: 8
struct IDxcIncludeHandler : public IUnknown {
public:
	/* struct IUnknown <ancestor>; */ /* 0 8 */
	void ~IDxcIncludeHandler(IDxcIncludeHandler* );
	void IDxcIncludeHandler(IDxcIncludeHandler* , IDxcIncludeHandler& );
	void IDxcIncludeHandler(IDxcIncludeHandler* , const IDxcIncludeHandler& );
	void IDxcIncludeHandler(IDxcIncludeHandler* );
	/* ../../thirdparty/dxc/include/dxc/dxcapi.h:242 */
	virtual HRESULT LoadSource(IDxcIncludeHandler* , LPCWSTR, IDxcBlob** );
};

// <00995C62> ../thirdparty/dxc/include/dxc/dxcapi.h:247
// member variables: 3
// struct size: 24
struct DxcBuffer {
	LPCVOID Ptr; /* 0 8 */
	SIZE_T Size; /* 8 8 */
	UINT Encoding; /* 16 4 */
};

// <001469F6> ../../thirdparty/dxc/include/dxc/dxcapi.h:510
// variable: 1
inline GUID __emulated_uuidof<IDxcUtils>(void)
{
	const IID  _IID; // 510
} /* size: 0, variables: 1 */

// <00A5447D> ../thirdparty/dxc/include/dxc/dxcapi.h:755
// variable: 1
inline GUID __emulated_uuidof<IDxcResult>(void)
{
	const IID  _IID; // 755
} /* size: 0, variables: 1 */

// <00A54446> ../thirdparty/dxc/include/dxc/dxcapi.h:829
// variable: 1
inline GUID __emulated_uuidof<IDxcCompiler3>(void)
{
	const IID  _IID; // 829
} /* size: 0, variables: 1 */

