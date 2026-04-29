
//
// vfx/vfx_vulkan/vfx_dxc_include_handler.h
//
//	referenced by: libvfx_vulkan.so
//
//	function: 1
//	class: 1
//

// <00189458> vfx/vfx_vulkan/vfx_dxc_include_handler.h:16
// member functions: 16
// member variables: 4
// vtable entries: 4
// class size: 32
class CVfxDxcIncludeHandler : public IDxcIncludeHandler {
public:
	/* struct IDxcIncludeHandler <ancestor>; */ /* 0 8 */
	void ~CVfxDxcIncludeHandler(CVfxDxcIncludeHandler* );
	void CVfxDxcIncludeHandler(CVfxDxcIncludeHandler* , CVfxDxcIncludeHandler& );
	void CVfxDxcIncludeHandler(CVfxDxcIncludeHandler* , const CVfxDxcIncludeHandler& );
	/* vfx/vfx_vulkan/vfx_dxc_include_handler.cpp:9 */
	void CVfxDxcIncludeHandler(CVfxDxcIncludeHandler* , IDxcUtils* , ShaderCompileContext* );
	/* vfx/vfx_vulkan/vfx_dxc_include_handler.cpp:15 */
	virtual HRESULT QueryInterface(CVfxDxcIncludeHandler* , REFIID, void** );
	/* vfx/vfx_vulkan/vfx_dxc_include_handler.cpp:22 */
	virtual ULONG AddRef(CVfxDxcIncludeHandler* );
	/* vfx/vfx_vulkan/vfx_dxc_include_handler.cpp:27 */
	virtual ULONG Release(CVfxDxcIncludeHandler* );
	/* vfx/vfx_vulkan/vfx_dxc_include_handler.cpp:40 */
	virtual HRESULT LoadSource(CVfxDxcIncludeHandler* , LPCWSTR, IDxcBlob** );
private:
	ULONG _ref; /* 8 8 */
	IDxcUtils * m_pDxcUtils; /* 16 8 */
	ShaderCompileContext * m_pContext; /* 24 8 */
	void ~CVfxDxcIncludeHandler(class CVfxDxcIncludeHandler *); /* linkage=_ZN21CVfxDxcIncludeHandlerD4Ev */
	void CVfxDxcIncludeHandler(class CVfxDxcIncludeHandler *, class CVfxDxcIncludeHandler &); /* linkage=_ZN21CVfxDxcIncludeHandlerC4EOS_ */
	void CVfxDxcIncludeHandler(class CVfxDxcIncludeHandler *, const class CVfxDxcIncludeHandler  &); /* linkage=_ZN21CVfxDxcIncludeHandlerC4ERKS_ */
	void CVfxDxcIncludeHandler(class CVfxDxcIncludeHandler *, class IDxcUtils *, class ShaderCompileContext *); /* linkage=_ZN21CVfxDxcIncludeHandlerC4EP9IDxcUtilsP20ShaderCompileContext */
	virtual HRESULT QueryInterface(class CVfxDxcIncludeHandler *, REFIID, void * *); /* linkage=_ZN21CVfxDxcIncludeHandler14QueryInterfaceERK4GUIDPPv */
	virtual ULONG AddRef(class CVfxDxcIncludeHandler *); /* linkage=_ZN21CVfxDxcIncludeHandler6AddRefEv */
	virtual ULONG Release(class CVfxDxcIncludeHandler *); /* linkage=_ZN21CVfxDxcIncludeHandler7ReleaseEv */
	virtual HRESULT LoadSource(class CVfxDxcIncludeHandler *, LPCWSTR, class IDxcBlob * *); /* linkage=_ZN21CVfxDxcIncludeHandler10LoadSourceEPKwPP8IDxcBlob */
};

// <0012A9B7> vfx/vfx_vulkan/vfx_dxc_include_handler.h:19
void CVfxDxcIncludeHandler::CVfxDxcIncludeHandler(IDxcUtils* pDxcUtils, ShaderCompileContext* context)
{
} /* size: 0 */

