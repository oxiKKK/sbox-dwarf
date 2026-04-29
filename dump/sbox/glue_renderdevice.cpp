
//
// sbox/glue_renderdevice.cpp
//
//	referenced by: libengine2.so
//
//	functions: 6
//

// <0177D396> sbox/glue_renderdevice.cpp:12
void GetConfigInt(const char* name)
{
} /* size: 0 */

// <0177D30D> sbox/glue_renderdevice.cpp:20
void SetConfigInt(const char* name, int val)
{
} /* size: 0 */

// <0177D2F4> sbox/glue_renderdevice.cpp:28
void WriteVideoConfig(void)
{
} /* size: 23 */

// <0177D2DB> sbox/glue_renderdevice.cpp:33
void ResetVideoConfig(void)
{
} /* size: 23 */

// <0177CFEA> sbox/glue_renderdevice.cpp:38
// variables: 2
// function calls: 8
void ChangeVideoMode(bool fullscreen, bool noborder, bool vsync, int width, int height, RenderMultisampleType_t multisample)
{
	RenderDeviceInfo_t deviceInfo; // 40
	{
		RenderDisplayMode_t videoMode; // 54
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 213
		RenderDisplayMode_t::RenderDisplayMode_t(); // 54
		RenderDeviceInfo_t::SetExclusiveFullscreen(); // 369
		RenderDeviceInfo_t::SetHighDPI(
				bool bHighDPI);  // 384
		RenderDeviceInfo_t::SetBorderedWindow(); // 381
		RenderDeviceInfo_t::SetBorderlessWindow(); // 377
		RenderDeviceInfo_t::SetSettingsFlags(
				bool bFullscreen,
				bool bCoopFullscreen,
				bool bNoBorder,
				bool bHighDPI);  // 58
	}
} /* size: 468, variables: 1 */

// <0177CBE8> sbox/glue_renderdevice.cpp:68
// variables: 3
// function calls: 17
void GetDisplayModes(DisplayMode_t* modes, int max, bool windowed)
{
	CUtlVector<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> > listOut; // 70
	int i; // 73
	{
		DisplayMode_t mode; // 76
		RenderDisplayMode_t::GetRefreshRate(); // 81
	}
	CUtlMemory<RenderDisplayMode_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<RenderDisplayMode_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::CUtlVector(); // 70
	CUtlVectorBase<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::Count(); // 74
	CUtlMemory<RenderDisplayMode_t, int>::Purge(); // 903
	CUtlMemory<RenderDisplayMode_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RenderDisplayMode_t, int>::Purge(); // 1799
	CUtlVectorBase<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::RemoveAll(); // 1798
	CUtlVectorBase<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::Purge(); // 560
	ValidateAlignment<RenderDisplayMode_t>(void); // 508
	CUtlMemory<RenderDisplayMode_t, int>::Purge(); // 510
	CUtlMemory<RenderDisplayMode_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::~CUtlVector(); // 87
} /* size: 296, variables: 2, inline expansions: 16 (240 bytes) */

