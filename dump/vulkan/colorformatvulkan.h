
//
// vulkan/colorformatvulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 4
//	class: 1
//

// <00A54024> vulkan/colorformatvulkan.h:20
void CColorFormatVulkan::CColorFormatVulkan()
{
} /* size: 0 */

// <00A54007> vulkan/colorformatvulkan.h:20
inline void CColorFormatVulkan::CColorFormatVulkan()
{
} /* size: 0 */

// <00A53FF0> vulkan/colorformatvulkan.h:20
void CColorFormatVulkan::~CColorFormatVulkan()
{
} /* size: 0 */

// <00A53FD3> vulkan/colorformatvulkan.h:20
inline void CColorFormatVulkan::~CColorFormatVulkan()
{
} /* size: 0 */

// <0045A1E7> vulkan/colorformatvulkan.h:20
// member functions: 15
// member variables: 2
// vtable entry: 1
// class size: 7,056
class CColorFormatVulkan : public CColorFormatBase {
public:
	/* class CColorFormatBase <ancestor>; */ /* 0 7048 */
	void ~CColorFormatVulkan(CColorFormatVulkan* );
	/* vulkan/colorformatvulkan.cpp:711 */
	void Init(CColorFormatVulkan* , VkPhysicalDevice);
	/* vulkan/colorformatvulkan.cpp:820 */
	VkFormat GetPreferredDepthStencilFormat(const CColorFormatVulkan* );
private:
	/* vulkan/colorformatvulkan.cpp:828 */
	virtual bool IsDepthFormatCompatible(CColorFormatVulkan* , ImageFormat, ImageFormat, ImageFormat);
	/* vulkan/colorformatvulkan.cpp:665 */
	bool TestTextureFormat(CColorFormatVulkan* , VkPhysicalDevice, VkFormat, bool);
	/* vulkan/colorformatvulkan.cpp:695 */
	void GetNearestVkColorFormats(CColorFormatVulkan* , VkPhysicalDevice, ImageFormat, bool, CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >& );
	/* vulkan/colorformatvulkan.cpp:655 */
	VkFormat* GetNearbyFormatList(CColorFormatVulkan* , ImageFormat);
	VkFormat m_nPreferredDepthStencilFormat; /* 7048 4 */
	void ~CColorFormatVulkan(class CColorFormatVulkan *); /* linkage=_ZN18CColorFormatVulkanD4Ev */
	void Init(class CColorFormatVulkan *, VkPhysicalDevice); /* linkage=_ZN18CColorFormatVulkan4InitEP18VkPhysicalDevice_T */
	VkFormat GetPreferredDepthStencilFormat(const class CColorFormatVulkan  *); /* linkage=_ZNK18CColorFormatVulkan30GetPreferredDepthStencilFormatEv */
	virtual bool IsDepthFormatCompatible(class CColorFormatVulkan *, enum ImageFormat, enum ImageFormat, enum ImageFormat); /* linkage=_ZN18CColorFormatVulkan23IsDepthFormatCompatibleE11ImageFormatS0_S0_ */
	bool TestTextureFormat(class CColorFormatVulkan *, VkPhysicalDevice, VkFormat, bool); /* linkage=_ZN18CColorFormatVulkan17TestTextureFormatEP18VkPhysicalDevice_T8VkFormatb */
	void GetNearestVkColorFormats(class CColorFormatVulkan *, VkPhysicalDevice, enum ImageFormat, bool, class CUtlVector<VkFormat, CUtlMemory<VkFormat, int> > &); /* linkage=_ZN18CColorFormatVulkan24GetNearestVkColorFormatsEP18VkPhysicalDevice_T11ImageFormatbR10CUtlVectorI8VkFormat10CUtlMemoryIS4_iEE */
	/* <45d762> vulkan/colorformatvulkan.cpp:655 */
	VkFormat * GetNearbyFormatList(class CColorFormatVulkan *, enum ImageFormat); /* linkage=_ZN18CColorFormatVulkan19GetNearbyFormatListE11ImageFormat */
	void CColorFormatVulkan(class CColorFormatVulkan *); /* linkage=_ZN18CColorFormatVulkanC4Ev */
};

