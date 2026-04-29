
//
// sbox/glue_resources.cpp
//
//	referenced by: libengine2.so
//
//	functions: 5
//

// <0178E475> sbox/glue_resources.cpp:16
// variables: 3
// function calls: 22
void GetMaterial(const char* name)
{
	CResourceName rname; // 18
	CToolsStallMonitorScope stall_monitor_scope_check_object; // 23
	ResourceHandle_t resourceHandle; // 25
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 19
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 27
	CToolsStallMonitorScope::CToolsStallMonitorScope(
				const char* pScopeName,
				bool bDisableDetection,
				uint32 nStallThresholdMS);  // 23
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 234
	{
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 310
		CResourceName::Get(); // 310
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 310
	}
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 306
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 235
	FromUntypedHandle(ResourceHandle_t hResource); // 26
	CToolsStallMonitorScope::~CToolsStallMonitorScope(); // 27
} /* size: 418, variables: 3, inline expansions: 13 (609 bytes) */

// <0178DF6B> sbox/glue_resources.cpp:29
// variables: 2
// function calls: 20
void GetTexture(const char* name)
{
	CResourceName rname; // 31
	ResourceHandle_t resourceHandle; // 34
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 32
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 36
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 234
	{
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 310
		CResourceName::Get(); // 310
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 310
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 306
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 235
	FromUntypedHandle(ResourceHandle_t hResource); // 35
} /* size: 350, variables: 2, inline expansions: 11 (538 bytes) */

// <0178DA58> sbox/glue_resources.cpp:38
// variables: 2
// function calls: 20
void GetModel(const char* name)
{
	CResourceName rname; // 40
	ResourceHandle_t resourceHandle; // 43
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 41
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 45
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 234
	{
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 310
		CResourceName::Get(); // 310
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 310
	}
	CWeakHandle<InfoForResourceTypeCModel>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 306
	CWeakHandle<InfoForResourceTypeCModel>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 235
	FromUntypedHandle(ResourceHandle_t hResource); // 44
} /* size: 358, variables: 2, inline expansions: 11 (538 bytes) */

// <0178D54D> sbox/glue_resources.cpp:47
// variables: 2
// function calls: 20
void GetAnimationGraph(const char* name)
{
	CResourceName rname; // 49
	ResourceHandle_t resourceHandle; // 52
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 50
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 54
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(); // 234
	{
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 310
		CResourceName::Get(); // 310
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 310
	}
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 306
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 235
	FromUntypedHandle(ResourceHandle_t hResource); // 53
} /* size: 341, variables: 2, inline expansions: 11 (485 bytes) */

// <0178D042> sbox/glue_resources.cpp:56
// variables: 2
// function calls: 20
void GetShader(const char* name)
{
	CResourceName rname; // 58
	ResourceHandle_t resourceHandle; // 61
	CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCVfx>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 59
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 63
	CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(); // 234
	{
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 310
		CResourceName::Get(); // 310
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 310
	}
	CWeakHandle<InfoForResourceTypeCVfx>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 306
	CWeakHandle<InfoForResourceTypeCVfx>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 235
	FromUntypedHandle(ResourceHandle_t hResource); // 62
} /* size: 341, variables: 2, inline expansions: 11 (485 bytes) */

