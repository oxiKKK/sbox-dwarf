
//
// materialsystem2/shader_create_callbacks.h
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 15
//	classes: 2
//

// <001825EF> materialsystem2/shader_create_callbacks.h:8
// function call: 1
void CShaderCreateCallbacks::~CShaderCreateCallbacks()
{
	IRuntimeShaderCreateCallbacks::~IRuntimeShaderCreateCallbacks(); // 8
} /* size: 5, inline expansions: 1 (0 bytes) */

// <0018253C> materialsystem2/shader_create_callbacks.h:8
// function calls: 2
void CShaderCreateCallbacks::~CShaderCreateCallbacks()
{
	IRuntimeShaderCreateCallbacks::~IRuntimeShaderCreateCallbacks(); // 8
	CShaderCreateCallbacks::~CShaderCreateCallbacks(); // 8
} /* size: 14, inline expansions: 2 (0 bytes) */

// <00182520> materialsystem2/shader_create_callbacks.h:8
inline void CShaderCreateCallbacks::~CShaderCreateCallbacks()
{
} /* size: 0 */

// <0014E4FF> materialsystem2/shader_create_callbacks.h:8
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 8
class CShaderCreateCallbacks : public IRuntimeShaderCreateCallbacks {
public:
	/* class IRuntimeShaderCreateCallbacks <ancestor>; */ /* 0 8 */
	void CShaderCreateCallbacks(CShaderCreateCallbacks* , CShaderCreateCallbacks& );
	void CShaderCreateCallbacks(CShaderCreateCallbacks* , const CShaderCreateCallbacks& );
	void CShaderCreateCallbacks(CShaderCreateCallbacks* );
	/* materialsystem2/shader_create_callbacks.h:12 */
	virtual RenderShaderHandle_t OnCreateShader(CShaderCreateCallbacks* , VfxProgram_t, unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* materialsystem2/shader_create_callbacks.h:24 */
	virtual RsRasterizerStateHandle_t OnCreateRasterizerState(CShaderCreateCallbacks* , const RsRasterizerStateDesc_t& );
	/* materialsystem2/shader_create_callbacks.h:29 */
	virtual RsDepthStencilStateHandle_t OnCreateDepthStencilState(CShaderCreateCallbacks* , const RsDepthStencilStateDesc_t& );
	/* materialsystem2/shader_create_callbacks.h:34 */
	virtual RsBlendStateHandle_t OnCreateBlendState(CShaderCreateCallbacks* , const RsBlendStateDesc_t& );
	virtual void ~CShaderCreateCallbacks(CShaderCreateCallbacks* );
	void CShaderCreateCallbacks(class CShaderCreateCallbacks *, class CShaderCreateCallbacks &); /* linkage=_ZN22CShaderCreateCallbacksC4EOS_ */
	void CShaderCreateCallbacks(class CShaderCreateCallbacks *, const class CShaderCreateCallbacks  &); /* linkage=_ZN22CShaderCreateCallbacksC4ERKS_ */
	void CShaderCreateCallbacks(class CShaderCreateCallbacks *); /* linkage=_ZN22CShaderCreateCallbacksC4Ev */
	/* <1a4b32> materialsystem2/shader_create_callbacks.h:12 */
	virtual RenderShaderHandle_t OnCreateShader(class CShaderCreateCallbacks *, enum VfxProgram_t, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN22CShaderCreateCallbacks14OnCreateShaderE12VfxProgram_tSt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS2_EEPKc */
	virtual RsRasterizerStateHandle_t OnCreateRasterizerState(class CShaderCreateCallbacks *, const class RsRasterizerStateDesc_t  &); /* linkage=_ZN22CShaderCreateCallbacks23OnCreateRasterizerStateERK23RsRasterizerStateDesc_t */
	virtual RsDepthStencilStateHandle_t OnCreateDepthStencilState(class CShaderCreateCallbacks *, const class RsDepthStencilStateDesc_t  &); /* linkage=_ZN22CShaderCreateCallbacks25OnCreateDepthStencilStateERK25RsDepthStencilStateDesc_t */
	virtual RsBlendStateHandle_t OnCreateBlendState(class CShaderCreateCallbacks *, const class RsBlendStateDesc_t  &); /* linkage=_ZN22CShaderCreateCallbacks18OnCreateBlendStateERK18RsBlendStateDesc_t */
	virtual void ~CShaderCreateCallbacks(class CShaderCreateCallbacks *); /* linkage=_ZN22CShaderCreateCallbacksD4Ev */
};

// <001A4B32> materialsystem2/shader_create_callbacks.h:12
// variable: 1
// function calls: 17
void CShaderCreateCallbacks::OnCreateShader(VfxProgram_t programType, unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShaderBuffer, const char* pDebugName)
{
	VfxProgramHasRenderShader(VfxProgram_t programType); // 14
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 472
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::get(); // 465
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::operator->(); // 14
	_Tuple_impl<1, std::default_delete<IRenderShaderByteCode> >::_Tuple_impl(
			_Tuple_impl<1, std::default_delete<IRenderShaderByteCode> >& __in);  // 324
	_Tuple_impl<0, IRenderShaderByteCode::_Tuple_impl(
			_Tuple_impl<0, IRenderShaderByteCode*, std::default_delete<IRenderShaderByteCode> > &);  // 996
	tuple<IRenderShaderByteCode::tuple(
		tuple<IRenderShaderByteCode*, std::default_delete<IRenderShaderByteCode> > &);  // 178
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 179
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::__uniq_ptr_impl(
			__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >& __u);  // 235
	__uniq_ptr_data<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode>, true, true>::__uniq_ptr_data(
			__uniq_ptr_data<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode>, true, true> &);  // 359
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::unique_ptr(
			unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > &);  // 16
	VfxProgramTypeToRenderShaderType(VfxProgram_t programType); // 16
	{
		IRenderShaderByteCode *& __ptr; // 396
		__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 396
		unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::get_deleter(); // 398
		default_delete<IRenderShaderByteCode>::operator(
				IRenderShaderByteCode* __ptr);  // 398
	}
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::~unique_ptr(); // 16
	CShaderCreateCallbacks::OnCreateShader(
			VfxProgram_t programType,
			unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShaderBuffer,
			const char* pDebugName);  // 12
} /* size: 185, inline expansions: 14 (180 bytes) */

// <00199F97> materialsystem2/shader_create_callbacks.h:12
inline void CShaderCreateCallbacks::OnCreateShader(VfxProgram_t programType, unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShaderBuffer, const char* pDebugName)
{
} /* size: 0 */

// <00199F3A> materialsystem2/shader_create_callbacks.h:24
void CShaderCreateCallbacks::OnCreateRasterizerState(const RsRasterizerStateDesc_t& desc)
{
} /* size: 23 */

// <00199EDD> materialsystem2/shader_create_callbacks.h:29
void CShaderCreateCallbacks::OnCreateDepthStencilState(const RsDepthStencilStateDesc_t& desc)
{
} /* size: 23 */

// <00199E80> materialsystem2/shader_create_callbacks.h:34
void CShaderCreateCallbacks::OnCreateBlendState(const RsBlendStateDesc_t& desc)
{
} /* size: 23 */

// <0018271D> materialsystem2/shader_create_callbacks.h:40
// function call: 1
void CNullShaderCreateCallbacks::~CNullShaderCreateCallbacks()
{
	IRuntimeShaderCreateCallbacks::~IRuntimeShaderCreateCallbacks(); // 40
} /* size: 5, inline expansions: 1 (0 bytes) */

// <0018266A> materialsystem2/shader_create_callbacks.h:40
// function calls: 2
void CNullShaderCreateCallbacks::~CNullShaderCreateCallbacks()
{
	IRuntimeShaderCreateCallbacks::~IRuntimeShaderCreateCallbacks(); // 40
	CNullShaderCreateCallbacks::~CNullShaderCreateCallbacks(); // 40
} /* size: 14, inline expansions: 2 (0 bytes) */

// <0018264E> materialsystem2/shader_create_callbacks.h:40
inline void CNullShaderCreateCallbacks::~CNullShaderCreateCallbacks()
{
} /* size: 0 */

// <0014E38D> materialsystem2/shader_create_callbacks.h:40
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 8
class CNullShaderCreateCallbacks : public IRuntimeShaderCreateCallbacks {
public:
	/* class IRuntimeShaderCreateCallbacks <ancestor>; */ /* 0 8 */
	void CNullShaderCreateCallbacks(CNullShaderCreateCallbacks* , CNullShaderCreateCallbacks& );
	void CNullShaderCreateCallbacks(CNullShaderCreateCallbacks* , const CNullShaderCreateCallbacks& );
	void CNullShaderCreateCallbacks(CNullShaderCreateCallbacks* );
	/* materialsystem2/shader_create_callbacks.h:44 */
	virtual RenderShaderHandle_t OnCreateShader(CNullShaderCreateCallbacks* , VfxProgram_t, unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* materialsystem2/shader_create_callbacks.h:49 */
	virtual RsRasterizerStateHandle_t OnCreateRasterizerState(CNullShaderCreateCallbacks* , const RsRasterizerStateDesc_t& );
	/* materialsystem2/shader_create_callbacks.h:54 */
	virtual RsDepthStencilStateHandle_t OnCreateDepthStencilState(CNullShaderCreateCallbacks* , const RsDepthStencilStateDesc_t& );
	/* materialsystem2/shader_create_callbacks.h:59 */
	virtual RsBlendStateHandle_t OnCreateBlendState(CNullShaderCreateCallbacks* , const RsBlendStateDesc_t& );
	virtual void ~CNullShaderCreateCallbacks(CNullShaderCreateCallbacks* );
	void CNullShaderCreateCallbacks(class CNullShaderCreateCallbacks *, class CNullShaderCreateCallbacks &); /* linkage=_ZN26CNullShaderCreateCallbacksC4EOS_ */
	void CNullShaderCreateCallbacks(class CNullShaderCreateCallbacks *, const class CNullShaderCreateCallbacks  &); /* linkage=_ZN26CNullShaderCreateCallbacksC4ERKS_ */
	void CNullShaderCreateCallbacks(class CNullShaderCreateCallbacks *); /* linkage=_ZN26CNullShaderCreateCallbacksC4Ev */
	virtual RenderShaderHandle_t OnCreateShader(class CNullShaderCreateCallbacks *, enum VfxProgram_t, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN26CNullShaderCreateCallbacks14OnCreateShaderE12VfxProgram_tSt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS2_EEPKc */
	virtual RsRasterizerStateHandle_t OnCreateRasterizerState(class CNullShaderCreateCallbacks *, const class RsRasterizerStateDesc_t  &); /* linkage=_ZN26CNullShaderCreateCallbacks23OnCreateRasterizerStateERK23RsRasterizerStateDesc_t */
	virtual RsDepthStencilStateHandle_t OnCreateDepthStencilState(class CNullShaderCreateCallbacks *, const class RsDepthStencilStateDesc_t  &); /* linkage=_ZN26CNullShaderCreateCallbacks25OnCreateDepthStencilStateERK25RsDepthStencilStateDesc_t */
	virtual RsBlendStateHandle_t OnCreateBlendState(class CNullShaderCreateCallbacks *, const class RsBlendStateDesc_t  &); /* linkage=_ZN26CNullShaderCreateCallbacks18OnCreateBlendStateERK18RsBlendStateDesc_t */
	virtual void ~CNullShaderCreateCallbacks(class CNullShaderCreateCallbacks *); /* linkage=_ZN26CNullShaderCreateCallbacksD4Ev */
};

// <00199E22> materialsystem2/shader_create_callbacks.h:44
void CNullShaderCreateCallbacks::OnCreateShader(VfxProgram_t programType, unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShaderBuffer, const char* pDebugName)
{
} /* size: 7 */

// <00199DE3> materialsystem2/shader_create_callbacks.h:49
void CNullShaderCreateCallbacks::OnCreateRasterizerState(const RsRasterizerStateDesc_t& desc)
{
} /* size: 7 */

// <00199DA4> materialsystem2/shader_create_callbacks.h:54
void CNullShaderCreateCallbacks::OnCreateDepthStencilState(const RsDepthStencilStateDesc_t& desc)
{
} /* size: 7 */

// <00199D65> materialsystem2/shader_create_callbacks.h:59
void CNullShaderCreateCallbacks::OnCreateBlendState(const RsBlendStateDesc_t& desc)
{
} /* size: 7 */

