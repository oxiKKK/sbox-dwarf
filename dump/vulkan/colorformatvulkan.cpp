
//
// vulkan/colorformatvulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 18
//	struct: 1
//

// <0045D505> vulkan/colorformatvulkan.cpp:145
VkFormat ImageFormatToVulkanFormat(ImageFormat format)
{
} /* size: 0 */

// <0045D4CC> vulkan/colorformatvulkan.cpp:152
bool IsTypedImageFormatSrgb(ImageFormat format)
{
} /* size: 0 */

// <0045D46E> vulkan/colorformatvulkan.cpp:160
void VkFormatGetSwizzle(VkFormat format, VkComponentMapping& swizzleOut, ImageFormat requestedFormat)
{
} /* size: 448 */

// <0045D3E1> vulkan/colorformatvulkan.cpp:361
// variables: 2
ImageFormat VkFormatToImageFormat(VkFormat format, ImageFormat requestedFormat)
{
	const char   __FUNCTION__; // 55695
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 508
	}
} /* size: 0, variables: 1 */

// <00459FC1> vulkan/colorformatvulkan.cpp:513
// member variable: 1
// struct size: 48
struct NearbyVulkanFormats_t {
	VkFormat m_pFormat[12]; /* 0 48 */
};

// <0045D762> vulkan/colorformatvulkan.cpp:655
void CColorFormatVulkan::GetNearbyFormatList(ImageFormat fmt)
{
} /* size: 0 */

// <0045D243> vulkan/colorformatvulkan.cpp:665
// variables: 2
// function calls: 3
void CColorFormatVulkan::TestTextureFormat(VkPhysicalDevice pPhysicalDeviceVulkan, VkFormat format, bool bIsRenderTarget)
{
	VkFormatProperties formatProperties; // 667
	{
		bool bIsDepthFormat; // 673
		IsDepthFormat(VkFormat format); // 673
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 668
} /* size: 151, variables: 1, inline expansions: 2 (38 bytes) */

// <0045CE5B> vulkan/colorformatvulkan.cpp:695
// variable: 1
// function calls: 14
void CColorFormatVulkan::GetNearestVkColorFormats(VkPhysicalDevice pPhysicalDeviceVulkan, ImageFormat fmt, bool bIsRenderTarget, CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >& outputList)
{
	VkFormat* pNearbyFormats; // 697
	CColorFormatVulkan::GetNearbyFormatList(
				ImageFormat fmt);  // 697
	CUtlMemory<VkFormat, int>::NumAllocated(); // 1196
	CUtlMemory<VkFormat, int>::Base(); // 112
	CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Base(); // 368
	CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::ResetDbgInfo(); // 824
	CUtlMemory<VkFormat, int>::IsGrowable(); // 823
	CUtlMemory<VkFormat, int>::IsExternallyAllocated(); // 859
	CUtlMemory<VkFormat, int>::IsExternallyAllocated(); // 861
	CUtlMemory<VkFormat, int>::Grow(
		int num);  // 806
	CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<VkFormat, int>::operator[](
			int i);  // 602
	CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Element(
		int i);  // 1201
	CopyConstruct<VkFormat>(VkFormat* pMemory,
				const VkFormat& src);  // 1201
	CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::AddToTail(
			const VkFormat& src);  // 702
} /* size: 389, variables: 1, inline expansions: 14 (839 bytes) */

// <0045BCC4> vulkan/colorformatvulkan.cpp:711
// variables: 14
// function calls: 69
void CColorFormatVulkan::Init(VkPhysicalDevice pPhysicalDeviceVulkan)
{
	{
		int fmt; // 713
		{
			ImageFormat testImgFmt; // 716
			{
				int nRenderTarget; // 746
				{
					ImageFormat* pSetArrayValue; // 748
					CUtlVectorFixedGrowableCompat<VkFormat, 16> nearestFormats; // 750
					{
						int nFormatIter; // 758
						CUtlMemory<ImageFormat, int>::Base(); // 112
						CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::Base(); // 368
						CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::GrowMemory(
								int num);  // 1249
						CUtlMemory<ImageFormat, int>::operator[](
								int i);  // 602
						CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::Element(
							int i);  // 1252
						Construct<ImageFormat, ImageFormat>(ImageFormat* pMemory); // 1252
						CUtlMemory<ImageFormat, int>::NumAllocated(); // 1247
						CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::AddToTail(
								ImageFormat& src);  // 760
						CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Count(); // 758
						CUtlMemory<VkFormat, int>::operator[](
								int i);  // 588
						CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::operator[](
								int i);  // 760
					}
					{
						int nVertexTexture; // 765
						{
							int nFilterable; // 767
						}
					}
					CUtlMemory<VkFormat, int>::IsExternallyAllocated(); // 905
					CUtlMemory<VkFormat, int>::Purge(); // 903
					CUtlMemory<VkFormat, int>::Purge(); // 1799
					CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::RemoveAll(); // 1798
					CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Purge(); // 560
					ValidateAlignment<VkFormat>(void); // 508
					CUtlMemory<VkFormat, int>::Purge(); // 510
					CUtlMemory<VkFormat, int>::~CUtlMemory(); // 562
					CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::~CUtlVectorBase(); // 410
					CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >::~CUtlVector(); // 489
					CUtlVectorFixedGrowableCompat<VkFormat, 16>::~CUtlVectorFixedGrowableCompat(); // 772
					CUtlMemory<VkFormat, int>::CUtlMemory(
							VkFormat* pMemory,
							int numElements,
							bool bGrowable,
							uint32 nGrowable_GrowSize);  // 535
					CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::ResetDbgInfo(); // 538
					CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::CUtlVectorBase(
							VkFormat* pMemory,
							int allocationCount,
							int initialCount,
							bool bGrowable);  // 420
					CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >::CUtlVector(
							VkFormat* pMemory,
							int allocationCount,
							int initialCount,
							bool bGrowable);  // 495
					AlignedByteArrayExplicit_t<16, VkFormat, 4>::AlignedByteArrayExplicit_t(); // 1597
					AlignedByteArray_t<16, VkFormat>::AlignedByteArray_t(); // 495
					AlignedByteArrayExplicit_t<16, VkFormat, 4>::Base(); // 497
					CUtlVectorFixedGrowableCompat<VkFormat, 16>::CUtlVectorFixedGrowableCompat(
									int growSize);  // 750
					CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Count(); // 135
					CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::IsEmpty(); // 753
					CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::Count(); // 756
					CUtlMemory<ImageFormat, int>::NumAllocated(); // 1247
					CUtlMemory<ImageFormat, int>::operator[](
							int i);  // 602
					CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::Element(
						int i);  // 1252
					Construct<ImageFormat, ImageFormat>(ImageFormat* pMemory); // 1252
					CUtlMemory<ImageFormat, int>::Base(); // 112
					CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::Base(); // 368
					CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::AddToTail(
							ImageFormat& src);  // 762
				}
			}
		}
	}
	{
		int fmt; // 778
		{
			VkFormat vkFormat; // 780
			{
				CUtlVectorFixedGrowableCompat<VkFormat, 16> nearestFormats; // 787
				CUtlMemory<VkFormat, int>::CUtlMemory(
						VkFormat* pMemory,
						int numElements,
						bool bGrowable,
						uint32 nGrowable_GrowSize);  // 535
				CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::ResetDbgInfo(); // 538
				CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::CUtlVectorBase(
						VkFormat* pMemory,
						int allocationCount,
						int initialCount,
						bool bGrowable);  // 420
				CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >::CUtlVector(
						VkFormat* pMemory,
						int allocationCount,
						int initialCount,
						bool bGrowable);  // 495
				AlignedByteArrayExplicit_t<16, VkFormat, 4>::AlignedByteArrayExplicit_t(); // 1597
				AlignedByteArray_t<16, VkFormat>::AlignedByteArray_t(); // 495
				AlignedByteArrayExplicit_t<16, VkFormat, 4>::Base(); // 497
				CUtlVectorFixedGrowableCompat<VkFormat, 16>::CUtlVectorFixedGrowableCompat(
								int growSize);  // 787
				CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Count(); // 135
				CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::IsEmpty(); // 790
				CUtlMemory<VkFormat, int>::IsExternallyAllocated(); // 905
				CUtlMemory<VkFormat, int>::Purge(); // 903
				CUtlMemory<VkFormat, int>::Purge(); // 1799
				CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::RemoveAll(); // 1798
				CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Purge(); // 560
				ValidateAlignment<VkFormat>(void); // 508
				CUtlMemory<VkFormat, int>::Purge(); // 510
				CUtlMemory<VkFormat, int>::~CUtlMemory(); // 562
				CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::~CUtlVectorBase(); // 410
				CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >::~CUtlVector(); // 489
				CUtlVectorFixedGrowableCompat<VkFormat, 16>::~CUtlVectorFixedGrowableCompat(); // 791
				CUtlMemory<VkFormat, int>::operator[](
						int i);  // 616
				CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Head(); // 790
			}
			{
				int nWindowed; // 792
			}
			IsDepthFormat(ImageFormat fmt); // 781
		}
	}
	{
		int fmt; // 798
		{
			VkFormat vkDepthFormat; // 806
			ImageFormatToVulkanFormat(ImageFormat format); // 806
			IsDepthFormat(ImageFormat fmt); // 800
		}
	}
} /* size: 1057 */

// <0045BC94> vulkan/colorformatvulkan.cpp:820
void CColorFormatVulkan::GetPreferredDepthStencilFormat()
{
} /* size: 11 */

// <0045BC37> vulkan/colorformatvulkan.cpp:828
void CColorFormatVulkan::IsDepthFormatCompatible(ImageFormat displayFormat, ImageFormat renderTargetFormat, ImageFormat depthFormat)
{
} /* size: 10 */

// <0045BB96> vulkan/colorformatvulkan.cpp:838
// variables: 3
VkFormat ColorFormatToVkFormat(ColorFormat_t format)
{
	VkFormat vkFormat; // 840
	const char   __FUNCTION__; // 55695
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 973
	}
} /* size: 0, variables: 2 */

// <0045BB0A> vulkan/colorformatvulkan.cpp:982
// variables: 2
uint32 VkFormatGetBytesPerTexel(VkFormat format)
{
	const char   __FUNCTION__; // 55716
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
} /* size: 0, variables: 1 */

// <0045BAE5> vulkan/colorformatvulkan.cpp:1107
bool IsDepthFormat(VkFormat format)
{
} /* size: 0 */

// <0045BAC0> vulkan/colorformatvulkan.cpp:1123
bool FormatHasStencilAspect(VkFormat format)
{
} /* size: 0 */

// <0045BA4C> vulkan/colorformatvulkan.cpp:1136
// variable: 1
// function call: 1
VkImageAspectFlags GetImageAspectFlags(VkFormat format)
{
	VkImageAspectFlags nImageAspectFlags; // 1138
	IsDepthFormat(VkFormat format); // 1139
} /* size: 39, variables: 1, inline expansions: 1 (19 bytes) */

// <0045BA12> vulkan/colorformatvulkan.cpp:1155
VkFormat GetLinearFormat(VkFormat format)
{
} /* size: 294 */

// <0045B9D2> vulkan/colorformatvulkan.cpp:1193
bool IsBlockCompressedFormat(VkFormat format)
{
} /* size: 17 */

// <0045B992> vulkan/colorformatvulkan.cpp:1226
bool IsSRGBFormat(VkFormat format)
{
} /* size: 67 */

