
//
// vulkan/inputlayoutvulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 2
//	class: 1
//	struct: 1
//

// <00540035> vulkan/inputlayoutvulkan.h:37
// member variables: 2
// struct size: 304
struct InputLayoutVulkan_t {
	uint8 m_vertexAttribDescToBindingSlot[256]; /* 0 256 */
	VkPipelineVertexInputStateCreateInfo m_pipelineVertexInputStateCreateInfo; /* 256 48 */
};

// <005408F9> vulkan/inputlayoutvulkan.h:73
// member functions: 10
// member variables: 2
// class size: 880
class CInputLayoutVulkan : public CInputLayoutBase {
public:
	/* class CInputLayoutBase <ancestor>; */ /* 0 24 */
	/* vulkan/inputlayoutvulkan.h:78 */
	void CInputLayoutVulkan(CInputLayoutVulkan* , int, const RenderInputLayoutField_t* , const char* );
	/* vulkan/inputlayoutvulkan.h:79 */
	void ~CInputLayoutVulkan(CInputLayoutVulkan* );
	/* vulkan/inputlayoutvulkan.h:81 */
	void CommitInputLayoutChanges(CInputLayoutVulkan* );
	/* vulkan/inputlayoutvulkan.h:83 */
	InputLayoutVulkan_t* GetInputLayout(CInputLayoutVulkan* , RenderShaderHandle_t, const CVsInputSignatureVector* );
private:
	/* vulkan/inputlayoutvulkan.h:86 */
	InputLayoutVulkan_t* ComputeVertexSpec(CInputLayoutVulkan* , const CVsInputSignatureVector* );
	CUtlTSHash<InputLayoutVulkan_t*, 16, long long int, CUtlTSHashGenericHashMethod<long long int> > m_InputLayouts __attribute__((__aligned__(16))); /* 32 848 */
	void CInputLayoutVulkan(class CInputLayoutVulkan *, int, const class RenderInputLayoutField_t  *, const char  *); /* linkage=_ZN18CInputLayoutVulkanC4EiPK24RenderInputLayoutField_tPKc */
	void ~CInputLayoutVulkan(class CInputLayoutVulkan *); /* linkage=_ZN18CInputLayoutVulkanD4Ev */
	void CommitInputLayoutChanges(class CInputLayoutVulkan *); /* linkage=_ZN18CInputLayoutVulkan24CommitInputLayoutChangesEv */
	class InputLayoutVulkan_t * GetInputLayout(class CInputLayoutVulkan *, RenderShaderHandle_t, const CVsInputSignatureVector  *); /* linkage=_ZN18CInputLayoutVulkan14GetInputLayoutEP22RenderShaderHandle_t__PK10CUtlVectorI25VsInputSignatureElement_t10CUtlMemoryIS3_iEE */
	class InputLayoutVulkan_t * ComputeVertexSpec(class CInputLayoutVulkan *, const CVsInputSignatureVector  *); /* linkage=_ZN18CInputLayoutVulkan17ComputeVertexSpecEPK10CUtlVectorI25VsInputSignatureElement_t10CUtlMemoryIS1_iEE */
} __attribute__((__aligned__(16)));

// <009A5FEA> vulkan/inputlayoutvulkan.h:78
void CInputLayoutVulkan::CInputLayoutVulkan(int nFieldCount, const RenderInputLayoutField_t* pFieldDescs, const char* pDebugName)
{
} /* size: 0 */

// <009A5F8A> vulkan/inputlayoutvulkan.h:79
void CInputLayoutVulkan::~CInputLayoutVulkan()
{
} /* size: 0 */

