
//
// rendersystem/fallbacktexturehelper.cpp
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	function: 1
//

// <0001E28E> rendersystem/fallbacktexturehelper.cpp:12
// variable: 1
// function calls: 5
const TextureSpecification_t& GetFallbackTextureSpec(void)
{
	{
		CThreadMutex mutex; // 16
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 17
		operator|(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 35
		operator|=(RuntimeTextureSpecificationFlags_t& a,
				RuntimeTextureSpecificationFlags_t b);  // 26
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 29
		CThreadMutex::CThreadMutex(
				const char* pName);  // 16
	}
} /* size: 367 */

