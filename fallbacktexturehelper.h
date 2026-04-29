
//
// ./fallbacktexturehelper.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 8
//	class: 1
//

// <00C43200> ./fallbacktexturehelper.h:13
void CFallbackTextureHelper<CFallbackTextureVulkan>::~CFallbackTextureHelper()
{
} /* size: 0 */

// <00C431E3> ./fallbacktexturehelper.h:13
inline void CFallbackTextureHelper<CFallbackTextureVulkan>::~CFallbackTextureHelper()
{
} /* size: 0 */

// <00C1736C> ./fallbacktexturehelper.h:13
// member functions: 12
// member variables: 2
// class size: 32
class CFallbackTextureHelper<CFallbackTextureVulkan> {
	/* ./fallbacktexturehelper.h:16 */
	void CFallbackTextureHelper(CFallbackTextureHelper<CFallbackTextureVulkan>* );
	/* ./fallbacktexturehelper.h:21 */
	void Shutdown(CFallbackTextureHelper<CFallbackTextureVulkan>* );
	/* ./fallbacktexturehelper.h:26 */
	int GetFallbackTexturePoolSize(const CFallbackTextureHelper<CFallbackTextureVulkan>* );
	/* ./fallbacktexturehelper.h:31 */
	void ReleaseFallbackTexture(CFallbackTextureHelper<CFallbackTextureVulkan>* , CFallbackTextureVulkan* );
	/* ./fallbacktexturehelper.h:38 */
	bool EnsureFallbackTextureDataResident(CFallbackTextureHelper<CFallbackTextureVulkan>* , HRenderTexture, RenderColorSpace_t);
private:
	CTSPool<CFallbackTextureVulkan> m_fallbackTexturePool __attribute__((__aligned__(16))); /* 0 16 */
	CInterlockedInt m_nCheckedOutFallbackTextureCount __attribute__((__aligned__(4))); /* 16 4 */
	void ~CFallbackTextureHelper(CFallbackTextureHelper<CFallbackTextureVulkan>* );
	void CFallbackTextureHelper(class CFallbackTextureHelper<CFallbackTextureVulkan> *); /* linkage=_ZN22CFallbackTextureHelperI22CFallbackTextureVulkanEC4Ev */
	void Shutdown(class CFallbackTextureHelper<CFallbackTextureVulkan> *); /* linkage=_ZN22CFallbackTextureHelperI22CFallbackTextureVulkanE8ShutdownEv */
	int GetFallbackTexturePoolSize(const class CFallbackTextureHelper<CFallbackTextureVulkan>  *); /* linkage=_ZNK22CFallbackTextureHelperI22CFallbackTextureVulkanE26GetFallbackTexturePoolSizeEv */
	void ReleaseFallbackTexture(class CFallbackTextureHelper<CFallbackTextureVulkan> *, class CFallbackTextureVulkan *); /* linkage=_ZN22CFallbackTextureHelperI22CFallbackTextureVulkanE22ReleaseFallbackTextureEPS0_ */
	bool EnsureFallbackTextureDataResident(class CFallbackTextureHelper<CFallbackTextureVulkan> *, HRenderTexture, enum RenderColorSpace_t); /* linkage=_ZN22CFallbackTextureHelperI22CFallbackTextureVulkanE33EnsureFallbackTextureDataResidentE11CWeakHandleI31InfoForResourceTypeCTextureBaseE18RenderColorSpace_t */
	void ~CFallbackTextureHelper(class CFallbackTextureHelper<CFallbackTextureVulkan> *); /* linkage=_ZN22CFallbackTextureHelperI22CFallbackTextureVulkanED4Ev */
} __attribute__((__aligned__(16)));

// <00C30259> ./fallbacktexturehelper.h:16
void CFallbackTextureHelper<CFallbackTextureVulkan>::CFallbackTextureHelper()
{
} /* size: 0 */

// <00C30240> ./fallbacktexturehelper.h:16
inline void CFallbackTextureHelper<CFallbackTextureVulkan>::CFallbackTextureHelper()
{
} /* size: 0 */

// <00C30197> ./fallbacktexturehelper.h:21
inline void CFallbackTextureHelper<CFallbackTextureVulkan>::Shutdown()
{
} /* size: 0 */

// <00C2F7AC> ./fallbacktexturehelper.h:26
inline void CFallbackTextureHelper<CFallbackTextureVulkan>::GetFallbackTexturePoolSize()
{
} /* size: 0 */

// <00C2F81C> ./fallbacktexturehelper.h:31
inline void CFallbackTextureHelper<CFallbackTextureVulkan>::ReleaseFallbackTexture(CFallbackTextureVulkan* pFallbackTexture)
{
} /* size: 0 */

// <00C2F7C5> ./fallbacktexturehelper.h:38
// variables: 3
inline void CFallbackTextureHelper<CFallbackTextureVulkan>::EnsureFallbackTextureDataResident(HRenderTexture hTexture, RenderColorSpace_t colorSpace)
{
	bool bQueuedUpdate; // 40
	CTextureBase* pTexture; // 41
	{
		CFallbackTextureVulkan* pFallback; // 50
	}
} /* size: 0, variables: 2 */

