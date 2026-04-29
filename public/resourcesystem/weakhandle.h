
//
// public/resourcesystem/weakhandle.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 232
//	classes: 22
//

// <0003DB56> ../public/resourcesystem/weakhandle.h:21
// member variable: 1
// class size: 8
class CWeakHandleBase {
protected:
	const class ResourceBindingBase_t * m_pBinding; /* 0 8 */
};

// <0003DCD4> ../public/resourcesystem/weakhandle.h:35
// member functions: 84
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeIMaterial2> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeIMaterial2>* , const CWeakHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeIMaterial2>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeIMaterial2> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeIMaterial2>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeIMaterial2>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeIMaterial2>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeIMaterial2>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeIMaterial2>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeIMaterial2>* , const CWeakHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeIMaterial2>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeIMaterial2>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeIMaterial2>& operator=(CWeakHandle<InfoForResourceTypeIMaterial2>* , const CWeakHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeIMaterial2>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeIMaterial2>* GetBinding(const CWeakHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeIMaterial2>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeIMaterial2>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeIMaterial2>* , const CWeakHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeIMaterial2>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeIMaterial2>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeIMaterial2>* , const CWeakHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeIMaterial2>* , const CWeakHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeIMaterial2>* , const CWeakHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeIMaterial2>* , const CWeakHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeIMaterial2>* , const CWeakHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeIMaterial2> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeIMaterial2> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeIMaterial2> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeIMaterial2>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeIMaterial2>* , CResourceName* );
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeIMaterial2> *); /* linkage=_ZN11CWeakHandleI29InfoForResourceTypeIMaterial2EC4Ev */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeIMaterial2> *, const class CWeakHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZN11CWeakHandleI29InfoForResourceTypeIMaterial2EC4ERKS1_ */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeIMaterial2> *, ResourceHandleTyped_t); /* linkage=_ZN11CWeakHandleI29InfoForResourceTypeIMaterial2EC4EPK17ResourceBinding_tIS0_E */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeIMaterial2> *, class ResourceId_t); /* linkage=_ZN11CWeakHandleI29InfoForResourceTypeIMaterial2EC4E12ResourceId_t */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeIMaterial2> *, const class CResourceName  &); /* linkage=_ZN11CWeakHandleI29InfoForResourceTypeIMaterial2EC4ERK13CResourceName */
	void Init(class CWeakHandle<InfoForResourceTypeIMaterial2> *, ResourceHandleTyped_t); /* linkage=_ZN11CWeakHandleI29InfoForResourceTypeIMaterial2E4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CWeakHandle<InfoForResourceTypeIMaterial2> *, class ResourceId_t); /* linkage=_ZN11CWeakHandleI29InfoForResourceTypeIMaterial2E4InitE12ResourceId_t */
	void Init(class CWeakHandle<InfoForResourceTypeIMaterial2> *, const class CResourceName  &); /* linkage=_ZN11CWeakHandleI29InfoForResourceTypeIMaterial2E4InitERK13CResourceName */
	void Init(class CWeakHandle<InfoForResourceTypeIMaterial2> *, const class CWeakHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZN11CWeakHandleI29InfoForResourceTypeIMaterial2E4InitERKS1_ */
	/* <c4282> ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(class CWeakHandle<InfoForResourceTypeIMaterial2> *, ResourceHandle_t); /* linkage=_ZN11CWeakHandleI29InfoForResourceTypeIMaterial2E11InitUntypedEPK21ResourceBindingBase_t */
	void InitUntypedUnchecked(class CWeakHandle<InfoForResourceTypeIMaterial2> *, ResourceHandle_t); /* linkage=_ZN11CWeakHandleI29InfoForResourceTypeIMaterial2E20InitUntypedUncheckedEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeIMaterial2> & operator=(class CWeakHandle<InfoForResourceTypeIMaterial2> *, const class CWeakHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZN11CWeakHandleI29InfoForResourceTypeIMaterial2EaSERKS1_ */
	bool HasHandle(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2E9HasHandleEv */
	bool HasIdentity(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2E11HasIdentityEv */
	bool HasData(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2E7HasDataEv */
	bool IsLoaded(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2E8IsLoadedEv */
	bool IsError(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2E7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2EcvPK10IMaterial2Ev */
	const RuntimeClass_t  * operator->(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2EptEv */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeIMaterial2>::ResourceHandleTyped_t(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2EcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2EcvPK21ResourceBindingBase_tEv */
	const class ResourceBinding_t<InfoForResourceTypeIMaterial2>  * GetBinding(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2E10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2E7GetDataEv */
	bool operator==(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *, ResourceHandle_t); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2EeqEPK21ResourceBindingBase_t */
	bool operator==(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *, ResourceHandleTyped_t); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2EeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *, const class CWeakHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2EeqERKS1_ */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *, ResourceHandle_t); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2EneEPK21ResourceBindingBase_t */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *, ResourceHandleTyped_t); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2EneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *, const class CWeakHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2EneERKS1_ */
	bool operator<(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *, const class CWeakHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2EltERKS1_ */
	bool operator<=(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *, const class CWeakHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2EleERKS1_ */
	bool operator>(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *, const class CWeakHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2EgtERKS1_ */
	bool operator>=(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *, const class CWeakHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2EgeERKS1_ */
	bool operator!(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2EntEv */
	int GetRefCount(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2E11GetRefCountEv */
	int GetReloadCounter(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2E16GetReloadCounterEv */
	ResourceType_t GetResourceType(void); /* linkage=_ZN11CWeakHandleI29InfoForResourceTypeIMaterial2E15GetResourceTypeEv */
	class CWeakHandle<InfoForResourceTypeIMaterial2> FromUntypedHandle(ResourceHandle_t); /* linkage=_ZN11CWeakHandleI29InfoForResourceTypeIMaterial2E17FromUntypedHandleEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeIMaterial2> FromUntypedHandleUnchecked(ResourceHandle_t); /* linkage=_ZN11CWeakHandleI29InfoForResourceTypeIMaterial2E26FromUntypedHandleUncheckedEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeIMaterial2> StaticInvalidHandle(void); /* linkage=_ZN11CWeakHandleI29InfoForResourceTypeIMaterial2E19StaticInvalidHandleEv */
	void GetResourceName(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *, class CBufferString *, bool); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2E15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CWeakHandle<InfoForResourceTypeIMaterial2>  *, class CResourceName *); /* linkage=_ZNK11CWeakHandleI29InfoForResourceTypeIMaterial2E15GetResourceNameEP13CResourceName */
};

// <0003EA5B> ../public/resourcesystem/weakhandle.h:35
// member functions: 84
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeCTextureBase> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCTextureBase> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCTextureBase>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeCTextureBase>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeCTextureBase>& operator=(CWeakHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCTextureBase>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeCTextureBase>* GetBinding(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeCTextureBase> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeCTextureBase> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeCTextureBase> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCTextureBase>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCTextureBase>* , CResourceName* );
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCTextureBase> *); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseEC4Ev */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCTextureBase> *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseEC4ERKS1_ */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCTextureBase> *, ResourceHandleTyped_t); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseEC4EPK17ResourceBinding_tIS0_E */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCTextureBase> *, class ResourceId_t); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseEC4E12ResourceId_t */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCTextureBase> *, const class CResourceName  &); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseEC4ERK13CResourceName */
	void Init(class CWeakHandle<InfoForResourceTypeCTextureBase> *, ResourceHandleTyped_t); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CWeakHandle<InfoForResourceTypeCTextureBase> *, class ResourceId_t); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE4InitE12ResourceId_t */
	void Init(class CWeakHandle<InfoForResourceTypeCTextureBase> *, const class CResourceName  &); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE4InitERK13CResourceName */
	void Init(class CWeakHandle<InfoForResourceTypeCTextureBase> *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE4InitERKS1_ */
	void InitUntyped(class CWeakHandle<InfoForResourceTypeCTextureBase> *, ResourceHandle_t); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE11InitUntypedEPK21ResourceBindingBase_t */
	void InitUntypedUnchecked(class CWeakHandle<InfoForResourceTypeCTextureBase> *, ResourceHandle_t); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE20InitUntypedUncheckedEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCTextureBase> & operator=(class CWeakHandle<InfoForResourceTypeCTextureBase> *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseEaSERKS1_ */
	bool HasHandle(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE9HasHandleEv */
	bool HasIdentity(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE11HasIdentityEv */
	bool HasData(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE7HasDataEv */
	bool IsLoaded(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE8IsLoadedEv */
	bool IsError(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeCTextureBase>::RuntimeClass_t*(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEcvPK12CTextureBaseEv */
	const RuntimeClass_t  * operator->(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEptEv */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEcvPK21ResourceBindingBase_tEv */
	const class ResourceBinding_t<InfoForResourceTypeCTextureBase>  * GetBinding(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE7GetDataEv */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, ResourceHandle_t); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, ResourceHandleTyped_t); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEeqERKS1_ */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, ResourceHandle_t); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, ResourceHandleTyped_t); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEneERKS1_ */
	bool operator<(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEltERKS1_ */
	bool operator<=(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEleERKS1_ */
	bool operator>(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEgtERKS1_ */
	bool operator>=(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEgeERKS1_ */
	bool operator!(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEntEv */
	int GetRefCount(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE11GetRefCountEv */
	int GetReloadCounter(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE16GetReloadCounterEv */
	ResourceType_t GetResourceType(void); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE15GetResourceTypeEv */
	class CWeakHandle<InfoForResourceTypeCTextureBase> FromUntypedHandle(ResourceHandle_t); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE17FromUntypedHandleEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCTextureBase> FromUntypedHandleUnchecked(ResourceHandle_t); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE26FromUntypedHandleUncheckedEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCTextureBase> StaticInvalidHandle(void); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE19StaticInvalidHandleEv */
	void GetResourceName(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, class CBufferString *, bool); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, class CResourceName *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE15GetResourceNameEP13CResourceName */
};

// <00091412> ../public/resourcesystem/weakhandle.h:35
// member functions: 84
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeCModel> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCModel>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCModel> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCModel>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCModel>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeCModel>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeCModel>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeCModel>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeCModel>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeCModel>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeCModel>& operator=(CWeakHandle<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCModel>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeCModel>* GetBinding(const CWeakHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCModel>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCModel>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCModel>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCModel>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeCModel> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeCModel> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeCModel> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCModel>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCModel>* , CResourceName* );
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCModel> *); /* linkage=_ZN11CWeakHandleI25InfoForResourceTypeCModelEC4Ev */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCModel> *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN11CWeakHandleI25InfoForResourceTypeCModelEC4ERKS1_ */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCModel> *, ResourceHandleTyped_t); /* linkage=_ZN11CWeakHandleI25InfoForResourceTypeCModelEC4EPK17ResourceBinding_tIS0_E */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCModel> *, class ResourceId_t); /* linkage=_ZN11CWeakHandleI25InfoForResourceTypeCModelEC4E12ResourceId_t */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCModel> *, const class CResourceName  &); /* linkage=_ZN11CWeakHandleI25InfoForResourceTypeCModelEC4ERK13CResourceName */
	void Init(class CWeakHandle<InfoForResourceTypeCModel> *, ResourceHandleTyped_t); /* linkage=_ZN11CWeakHandleI25InfoForResourceTypeCModelE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CWeakHandle<InfoForResourceTypeCModel> *, class ResourceId_t); /* linkage=_ZN11CWeakHandleI25InfoForResourceTypeCModelE4InitE12ResourceId_t */
	void Init(class CWeakHandle<InfoForResourceTypeCModel> *, const class CResourceName  &); /* linkage=_ZN11CWeakHandleI25InfoForResourceTypeCModelE4InitERK13CResourceName */
	void Init(class CWeakHandle<InfoForResourceTypeCModel> *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN11CWeakHandleI25InfoForResourceTypeCModelE4InitERKS1_ */
	void InitUntyped(class CWeakHandle<InfoForResourceTypeCModel> *, ResourceHandle_t); /* linkage=_ZN11CWeakHandleI25InfoForResourceTypeCModelE11InitUntypedEPK21ResourceBindingBase_t */
	void InitUntypedUnchecked(class CWeakHandle<InfoForResourceTypeCModel> *, ResourceHandle_t); /* linkage=_ZN11CWeakHandleI25InfoForResourceTypeCModelE20InitUntypedUncheckedEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCModel> & operator=(class CWeakHandle<InfoForResourceTypeCModel> *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN11CWeakHandleI25InfoForResourceTypeCModelEaSERKS1_ */
	bool HasHandle(const class CWeakHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelE9HasHandleEv */
	bool HasIdentity(const class CWeakHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelE11HasIdentityEv */
	bool HasData(const class CWeakHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelE7HasDataEv */
	bool IsLoaded(const class CWeakHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelE8IsLoadedEv */
	bool IsError(const class CWeakHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(const class CWeakHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelEcvPK6CModelEv */
	const RuntimeClass_t  * operator->(const class CWeakHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelEptEv */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCModel>::ResourceHandleTyped_t(const class CWeakHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CWeakHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelEcvPK21ResourceBindingBase_tEv */
	const class ResourceBinding_t<InfoForResourceTypeCModel>  * GetBinding(const class CWeakHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CWeakHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelE7GetDataEv */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCModel>  *, ResourceHandle_t); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCModel>  *, ResourceHandleTyped_t); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCModel>  *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelEeqERKS1_ */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCModel>  *, ResourceHandle_t); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCModel>  *, ResourceHandleTyped_t); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCModel>  *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelEneERKS1_ */
	bool operator<(const class CWeakHandle<InfoForResourceTypeCModel>  *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelEltERKS1_ */
	bool operator<=(const class CWeakHandle<InfoForResourceTypeCModel>  *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelEleERKS1_ */
	bool operator>(const class CWeakHandle<InfoForResourceTypeCModel>  *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelEgtERKS1_ */
	bool operator>=(const class CWeakHandle<InfoForResourceTypeCModel>  *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelEgeERKS1_ */
	bool operator!(const class CWeakHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelEntEv */
	int GetRefCount(const class CWeakHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelE11GetRefCountEv */
	int GetReloadCounter(const class CWeakHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelE16GetReloadCounterEv */
	ResourceType_t GetResourceType(void); /* linkage=_ZN11CWeakHandleI25InfoForResourceTypeCModelE15GetResourceTypeEv */
	class CWeakHandle<InfoForResourceTypeCModel> FromUntypedHandle(ResourceHandle_t); /* linkage=_ZN11CWeakHandleI25InfoForResourceTypeCModelE17FromUntypedHandleEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCModel> FromUntypedHandleUnchecked(ResourceHandle_t); /* linkage=_ZN11CWeakHandleI25InfoForResourceTypeCModelE26FromUntypedHandleUncheckedEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCModel> StaticInvalidHandle(void); /* linkage=_ZN11CWeakHandleI25InfoForResourceTypeCModelE19StaticInvalidHandleEv */
	void GetResourceName(const class CWeakHandle<InfoForResourceTypeCModel>  *, class CBufferString *, bool); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CWeakHandle<InfoForResourceTypeCModel>  *, class CResourceName *); /* linkage=_ZNK11CWeakHandleI25InfoForResourceTypeCModelE15GetResourceNameEP13CResourceName */
};

// <000931A0> ../public/resourcesystem/weakhandle.h:35
// member functions: 84
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeIAnimationGraph> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeIAnimationGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeIAnimationGraph>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeIAnimationGraph> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeIAnimationGraph>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeIAnimationGraph>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeIAnimationGraph>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeIAnimationGraph>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeIAnimationGraph>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeIAnimationGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeIAnimationGraph>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeIAnimationGraph>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeIAnimationGraph>& operator=(CWeakHandle<InfoForResourceTypeIAnimationGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeIAnimationGraph>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeIAnimationGraph>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeIAnimationGraph>* GetBinding(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeIAnimationGraph> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeIAnimationGraph> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeIAnimationGraph> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeIAnimationGraph>* , CResourceName* );
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeIAnimationGraph> *); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeIAnimationGraphEC4Ev */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeIAnimationGraph> *, const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeIAnimationGraphEC4ERKS1_ */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeIAnimationGraph> *, ResourceHandleTyped_t); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeIAnimationGraphEC4EPK17ResourceBinding_tIS0_E */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeIAnimationGraph> *, class ResourceId_t); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeIAnimationGraphEC4E12ResourceId_t */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeIAnimationGraph> *, const class CResourceName  &); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeIAnimationGraphEC4ERK13CResourceName */
	void Init(class CWeakHandle<InfoForResourceTypeIAnimationGraph> *, ResourceHandleTyped_t); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeIAnimationGraphE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CWeakHandle<InfoForResourceTypeIAnimationGraph> *, class ResourceId_t); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeIAnimationGraphE4InitE12ResourceId_t */
	void Init(class CWeakHandle<InfoForResourceTypeIAnimationGraph> *, const class CResourceName  &); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeIAnimationGraphE4InitERK13CResourceName */
	void Init(class CWeakHandle<InfoForResourceTypeIAnimationGraph> *, const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeIAnimationGraphE4InitERKS1_ */
	void InitUntyped(class CWeakHandle<InfoForResourceTypeIAnimationGraph> *, ResourceHandle_t); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeIAnimationGraphE11InitUntypedEPK21ResourceBindingBase_t */
	void InitUntypedUnchecked(class CWeakHandle<InfoForResourceTypeIAnimationGraph> *, ResourceHandle_t); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeIAnimationGraphE20InitUntypedUncheckedEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeIAnimationGraph> & operator=(class CWeakHandle<InfoForResourceTypeIAnimationGraph> *, const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeIAnimationGraphEaSERKS1_ */
	bool HasHandle(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphE9HasHandleEv */
	bool HasIdentity(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphE11HasIdentityEv */
	bool HasData(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphE7HasDataEv */
	bool IsLoaded(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphE8IsLoadedEv */
	bool IsError(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeIAnimationGraph>::RuntimeClass_t*(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphEcvPK15IAnimationGraphEv */
	const RuntimeClass_t  * operator->(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphEptEv */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeIAnimationGraph>::ResourceHandleTyped_t(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphEcvPK21ResourceBindingBase_tEv */
	const class ResourceBinding_t<InfoForResourceTypeIAnimationGraph>  * GetBinding(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphE7GetDataEv */
	bool operator==(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *, ResourceHandle_t); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *, ResourceHandleTyped_t); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *, const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphEeqERKS1_ */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *, ResourceHandle_t); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *, ResourceHandleTyped_t); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *, const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphEneERKS1_ */
	bool operator<(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *, const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphEltERKS1_ */
	bool operator<=(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *, const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphEleERKS1_ */
	bool operator>(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *, const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphEgtERKS1_ */
	bool operator>=(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *, const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphEgeERKS1_ */
	bool operator!(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphEntEv */
	int GetRefCount(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphE11GetRefCountEv */
	int GetReloadCounter(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphE16GetReloadCounterEv */
	ResourceType_t GetResourceType(void); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeIAnimationGraphE15GetResourceTypeEv */
	class CWeakHandle<InfoForResourceTypeIAnimationGraph> FromUntypedHandle(ResourceHandle_t); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeIAnimationGraphE17FromUntypedHandleEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeIAnimationGraph> FromUntypedHandleUnchecked(ResourceHandle_t); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeIAnimationGraphE26FromUntypedHandleUncheckedEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeIAnimationGraph> StaticInvalidHandle(void); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeIAnimationGraphE19StaticInvalidHandleEv */
	void GetResourceName(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *, class CBufferString *, bool); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  *, class CResourceName *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeIAnimationGraphE15GetResourceNameEP13CResourceName */
};

// <0039A6C1> ../public/resourcesystem/weakhandle.h:35
// member functions: 42
// member variable: 1
// class size: 8
class CWeakHandle<ResourceBindingVoid_t> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:42 */
	void CWeakHandle(CWeakHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/weakhandle.h:43 */
	void CWeakHandle(CWeakHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/weakhandle.h:44 */
	void CWeakHandle(CWeakHandle<ResourceBindingVoid_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<ResourceBindingVoid_t> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:45 */
	void CWeakHandle(CWeakHandle<ResourceBindingVoid_t>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:46 */
	void CWeakHandle(CWeakHandle<ResourceBindingVoid_t>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:62 */
	void Init(CWeakHandle<ResourceBindingVoid_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:63 */
	void Init(CWeakHandle<ResourceBindingVoid_t>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:64 */
	void Init(CWeakHandle<ResourceBindingVoid_t>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:65 */
	void Init(CWeakHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/weakhandle.h:66 */
	void InitUntyped(CWeakHandle<ResourceBindingVoid_t>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:67 */
	void InitUntypedUnchecked(CWeakHandle<ResourceBindingVoid_t>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:70 */
	CWeakHandle<ResourceBindingVoid_t>& operator=(CWeakHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/weakhandle.h:100 */
	bool HasHandle(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/weakhandle.h:101 */
	bool HasIdentity(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/weakhandle.h:102 */
	bool HasData(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/weakhandle.h:105 */
	bool IsLoaded(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/weakhandle.h:108 */
	bool IsError(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/weakhandle.h:39 */
	typedef void ResourceDataTyped_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcesystem/weakhandle.h:111 */
	const ResourceDataTyped_t* operator const CWeakHandle<ResourceBindingVoid_t>::ResourceDataTyped_t*(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/weakhandle.h:112 */
	const ResourceDataTyped_t* operator->(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/weakhandle.h:113 */
	ResourceHandleTyped_t operator CWeakHandle<ResourceBindingVoid_t>::ResourceHandleTyped_t(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/weakhandle.h:114 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/weakhandle.h:116 */
	const ResourceBinding_t<ResourceBindingVoid_t>* GetBinding(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/weakhandle.h:119 */
	const ResourceDataTyped_t* GetData(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/weakhandle.h:122 */
	bool operator==(const CWeakHandle<ResourceBindingVoid_t>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:123 */
	bool operator==(const CWeakHandle<ResourceBindingVoid_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:124 */
	bool operator==(const CWeakHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/weakhandle.h:126 */
	bool operator!=(const CWeakHandle<ResourceBindingVoid_t>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:127 */
	bool operator!=(const CWeakHandle<ResourceBindingVoid_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:128 */
	bool operator!=(const CWeakHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/weakhandle.h:162 */
	int GetRefCount(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/weakhandle.h:164 */
	int GetReloadCounter(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/weakhandle.h:166 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:168 */
	CWeakHandle<ResourceBindingVoid_t> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:169 */
	CWeakHandle<ResourceBindingVoid_t> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<ResourceBindingVoid_t> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:175 */
	void GetResourceName(const CWeakHandle<ResourceBindingVoid_t>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:176 */
	void GetResourceName(const CWeakHandle<ResourceBindingVoid_t>* , CResourceName* );
};

// <005E036F> ../public/resourcesystem/weakhandle.h:35
// member functions: 42
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeVSound_t> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeVSound_t>* , const CWeakHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeVSound_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeVSound_t> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeVSound_t>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeVSound_t>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeVSound_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeVSound_t>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeVSound_t>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeVSound_t>* , const CWeakHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeVSound_t>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeVSound_t>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeVSound_t>& operator=(CWeakHandle<InfoForResourceTypeVSound_t>* , const CWeakHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeVSound_t>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeVSound_t>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeVSound_t>* GetBinding(const CWeakHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeVSound_t>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeVSound_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeVSound_t>* , const CWeakHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeVSound_t>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeVSound_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeVSound_t>* , const CWeakHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeVSound_t>* , const CWeakHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeVSound_t>* , const CWeakHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeVSound_t>* , const CWeakHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeVSound_t>* , const CWeakHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeVSound_t> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeVSound_t> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeVSound_t> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeVSound_t>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeVSound_t>* , CResourceName* );
};

// <009215C1> ../public/resourcesystem/weakhandle.h:35
// member functions: 84
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeCPhysAggregateData> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCPhysAggregateData> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>& operator=(CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCPhysAggregateData>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCPhysAggregateData>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeCPhysAggregateData>* GetBinding(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeCPhysAggregateData> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeCPhysAggregateData> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeCPhysAggregateData> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>* , CResourceName* );
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCPhysAggregateData> *); /* linkage=_ZN11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEC4Ev */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCPhysAggregateData> *, const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZN11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEC4ERKS1_ */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCPhysAggregateData> *, ResourceHandleTyped_t); /* linkage=_ZN11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEC4EPK17ResourceBinding_tIS0_E */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCPhysAggregateData> *, class ResourceId_t); /* linkage=_ZN11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEC4E12ResourceId_t */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCPhysAggregateData> *, const class CResourceName  &); /* linkage=_ZN11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEC4ERK13CResourceName */
	void Init(class CWeakHandle<InfoForResourceTypeCPhysAggregateData> *, ResourceHandleTyped_t); /* linkage=_ZN11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CWeakHandle<InfoForResourceTypeCPhysAggregateData> *, class ResourceId_t); /* linkage=_ZN11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE4InitE12ResourceId_t */
	void Init(class CWeakHandle<InfoForResourceTypeCPhysAggregateData> *, const class CResourceName  &); /* linkage=_ZN11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE4InitERK13CResourceName */
	void Init(class CWeakHandle<InfoForResourceTypeCPhysAggregateData> *, const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZN11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE4InitERKS1_ */
	void InitUntyped(class CWeakHandle<InfoForResourceTypeCPhysAggregateData> *, ResourceHandle_t); /* linkage=_ZN11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE11InitUntypedEPK21ResourceBindingBase_t */
	void InitUntypedUnchecked(class CWeakHandle<InfoForResourceTypeCPhysAggregateData> *, ResourceHandle_t); /* linkage=_ZN11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE20InitUntypedUncheckedEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCPhysAggregateData> & operator=(class CWeakHandle<InfoForResourceTypeCPhysAggregateData> *, const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZN11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEaSERKS1_ */
	bool HasHandle(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE9HasHandleEv */
	bool HasIdentity(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE11HasIdentityEv */
	bool HasData(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE7HasDataEv */
	bool IsLoaded(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE8IsLoadedEv */
	bool IsError(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeCPhysAggregateData>::RuntimeClass_t*(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEcvPK18CPhysAggregateDataEv */
	const RuntimeClass_t  * operator->(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEptEv */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCPhysAggregateData>::ResourceHandleTyped_t(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEcvPK21ResourceBindingBase_tEv */
	const class ResourceBinding_t<InfoForResourceTypeCPhysAggregateData>  * GetBinding(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE7GetDataEv */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *, ResourceHandle_t); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *, ResourceHandleTyped_t); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *, const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEeqERKS1_ */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *, ResourceHandle_t); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *, ResourceHandleTyped_t); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *, const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEneERKS1_ */
	bool operator<(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *, const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEltERKS1_ */
	bool operator<=(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *, const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEleERKS1_ */
	bool operator>(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *, const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEgtERKS1_ */
	bool operator>=(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *, const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEgeERKS1_ */
	bool operator!(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataEntEv */
	int GetRefCount(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE11GetRefCountEv */
	int GetReloadCounter(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE16GetReloadCounterEv */
	ResourceType_t GetResourceType(void); /* linkage=_ZN11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE15GetResourceTypeEv */
	class CWeakHandle<InfoForResourceTypeCPhysAggregateData> FromUntypedHandle(ResourceHandle_t); /* linkage=_ZN11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE17FromUntypedHandleEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCPhysAggregateData> FromUntypedHandleUnchecked(ResourceHandle_t); /* linkage=_ZN11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE26FromUntypedHandleUncheckedEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCPhysAggregateData> StaticInvalidHandle(void); /* linkage=_ZN11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE19StaticInvalidHandleEv */
	void GetResourceName(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *, class CBufferString *, bool); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  *, class CResourceName *); /* linkage=_ZNK11CWeakHandleI37InfoForResourceTypeCPhysAggregateDataE15GetResourceNameEP13CResourceName */
};

// <00E1087B> ../public/resourcesystem/weakhandle.h:35
// member functions: 84
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeCEntityLump> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCEntityLump>* , const CWeakHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCEntityLump>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCEntityLump> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCEntityLump>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCEntityLump>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeCEntityLump>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeCEntityLump>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeCEntityLump>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeCEntityLump>* , const CWeakHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeCEntityLump>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeCEntityLump>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeCEntityLump>& operator=(CWeakHandle<InfoForResourceTypeCEntityLump>* , const CWeakHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCEntityLump>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCEntityLump>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeCEntityLump>* GetBinding(const CWeakHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCEntityLump>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCEntityLump>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCEntityLump>* , const CWeakHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCEntityLump>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCEntityLump>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCEntityLump>* , const CWeakHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeCEntityLump>* , const CWeakHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeCEntityLump>* , const CWeakHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeCEntityLump>* , const CWeakHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeCEntityLump>* , const CWeakHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeCEntityLump> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeCEntityLump> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeCEntityLump> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCEntityLump>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCEntityLump>* , CResourceName* );
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCEntityLump> *); /* linkage=_ZN11CWeakHandleI30InfoForResourceTypeCEntityLumpEC4Ev */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCEntityLump> *, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN11CWeakHandleI30InfoForResourceTypeCEntityLumpEC4ERKS1_ */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCEntityLump> *, ResourceHandleTyped_t); /* linkage=_ZN11CWeakHandleI30InfoForResourceTypeCEntityLumpEC4EPK17ResourceBinding_tIS0_E */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCEntityLump> *, class ResourceId_t); /* linkage=_ZN11CWeakHandleI30InfoForResourceTypeCEntityLumpEC4E12ResourceId_t */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCEntityLump> *, const class CResourceName  &); /* linkage=_ZN11CWeakHandleI30InfoForResourceTypeCEntityLumpEC4ERK13CResourceName */
	void Init(class CWeakHandle<InfoForResourceTypeCEntityLump> *, ResourceHandleTyped_t); /* linkage=_ZN11CWeakHandleI30InfoForResourceTypeCEntityLumpE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CWeakHandle<InfoForResourceTypeCEntityLump> *, class ResourceId_t); /* linkage=_ZN11CWeakHandleI30InfoForResourceTypeCEntityLumpE4InitE12ResourceId_t */
	void Init(class CWeakHandle<InfoForResourceTypeCEntityLump> *, const class CResourceName  &); /* linkage=_ZN11CWeakHandleI30InfoForResourceTypeCEntityLumpE4InitERK13CResourceName */
	void Init(class CWeakHandle<InfoForResourceTypeCEntityLump> *, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN11CWeakHandleI30InfoForResourceTypeCEntityLumpE4InitERKS1_ */
	void InitUntyped(class CWeakHandle<InfoForResourceTypeCEntityLump> *, ResourceHandle_t); /* linkage=_ZN11CWeakHandleI30InfoForResourceTypeCEntityLumpE11InitUntypedEPK21ResourceBindingBase_t */
	void InitUntypedUnchecked(class CWeakHandle<InfoForResourceTypeCEntityLump> *, ResourceHandle_t); /* linkage=_ZN11CWeakHandleI30InfoForResourceTypeCEntityLumpE20InitUntypedUncheckedEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCEntityLump> & operator=(class CWeakHandle<InfoForResourceTypeCEntityLump> *, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN11CWeakHandleI30InfoForResourceTypeCEntityLumpEaSERKS1_ */
	bool HasHandle(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpE9HasHandleEv */
	bool HasIdentity(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpE11HasIdentityEv */
	bool HasData(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpE7HasDataEv */
	bool IsLoaded(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpE8IsLoadedEv */
	bool IsError(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeCEntityLump>::RuntimeClass_t*(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpEcvPK11CEntityLumpEv */
	const RuntimeClass_t  * operator->(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpEptEv */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCEntityLump>::ResourceHandleTyped_t(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpEcvPK21ResourceBindingBase_tEv */
	const class ResourceBinding_t<InfoForResourceTypeCEntityLump>  * GetBinding(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpE7GetDataEv */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *, ResourceHandle_t); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *, ResourceHandleTyped_t); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpEeqERKS1_ */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *, ResourceHandle_t); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *, ResourceHandleTyped_t); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpEneERKS1_ */
	bool operator<(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpEltERKS1_ */
	bool operator<=(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpEleERKS1_ */
	bool operator>(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpEgtERKS1_ */
	bool operator>=(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpEgeERKS1_ */
	bool operator!(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpEntEv */
	int GetRefCount(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpE11GetRefCountEv */
	int GetReloadCounter(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpE16GetReloadCounterEv */
	ResourceType_t GetResourceType(void); /* linkage=_ZN11CWeakHandleI30InfoForResourceTypeCEntityLumpE15GetResourceTypeEv */
	class CWeakHandle<InfoForResourceTypeCEntityLump> FromUntypedHandle(ResourceHandle_t); /* linkage=_ZN11CWeakHandleI30InfoForResourceTypeCEntityLumpE17FromUntypedHandleEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCEntityLump> FromUntypedHandleUnchecked(ResourceHandle_t); /* linkage=_ZN11CWeakHandleI30InfoForResourceTypeCEntityLumpE26FromUntypedHandleUncheckedEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCEntityLump> StaticInvalidHandle(void); /* linkage=_ZN11CWeakHandleI30InfoForResourceTypeCEntityLumpE19StaticInvalidHandleEv */
	void GetResourceName(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *, class CBufferString *, bool); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CWeakHandle<InfoForResourceTypeCEntityLump>  *, class CResourceName *); /* linkage=_ZNK11CWeakHandleI30InfoForResourceTypeCEntityLumpE15GetResourceNameEP13CResourceName */
};

// <00EB496C> ../public/resourcesystem/weakhandle.h:35
// member functions: 42
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeWorld_t> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeWorld_t>* , const CWeakHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeWorld_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeWorld_t> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeWorld_t>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeWorld_t>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeWorld_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeWorld_t>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeWorld_t>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeWorld_t>* , const CWeakHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeWorld_t>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeWorld_t>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeWorld_t>& operator=(CWeakHandle<InfoForResourceTypeWorld_t>* , const CWeakHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeWorld_t>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeWorld_t>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeWorld_t>* GetBinding(const CWeakHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeWorld_t>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeWorld_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeWorld_t>* , const CWeakHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeWorld_t>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeWorld_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeWorld_t>* , const CWeakHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeWorld_t>* , const CWeakHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeWorld_t>* , const CWeakHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeWorld_t>* , const CWeakHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeWorld_t>* , const CWeakHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeWorld_t> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeWorld_t> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeWorld_t> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeWorld_t>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeWorld_t>* , CResourceName* );
};

// <00EB5B66> ../public/resourcesystem/weakhandle.h:35
// member functions: 42
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeCVoxelVisibility> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , const CWeakHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCVoxelVisibility> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , const CWeakHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeCVoxelVisibility>& operator=(CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , const CWeakHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCVoxelVisibility>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCVoxelVisibility>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeCVoxelVisibility>* GetBinding(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , const CWeakHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , const CWeakHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , const CWeakHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , const CWeakHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , const CWeakHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , const CWeakHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeCVoxelVisibility> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeCVoxelVisibility> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeCVoxelVisibility> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>* , CResourceName* );
};

// <00F73600> ../public/resourcesystem/weakhandle.h:35
// member functions: 42
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeCWorldNode> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCWorldNode>* , const CWeakHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCWorldNode>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCWorldNode> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCWorldNode>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCWorldNode>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeCWorldNode>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeCWorldNode>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeCWorldNode>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeCWorldNode>* , const CWeakHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeCWorldNode>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeCWorldNode>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeCWorldNode>& operator=(CWeakHandle<InfoForResourceTypeCWorldNode>* , const CWeakHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCWorldNode>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCWorldNode>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeCWorldNode>* GetBinding(const CWeakHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCWorldNode>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCWorldNode>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCWorldNode>* , const CWeakHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCWorldNode>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCWorldNode>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCWorldNode>* , const CWeakHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeCWorldNode>* , const CWeakHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeCWorldNode>* , const CWeakHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeCWorldNode>* , const CWeakHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeCWorldNode>* , const CWeakHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeCWorldNode> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeCWorldNode> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeCWorldNode> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCWorldNode>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCWorldNode>* , CResourceName* );
};

// <01052129> ../public/resourcesystem/weakhandle.h:35
// member functions: 42
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeCRenderMesh> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCRenderMesh>* , const CWeakHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCRenderMesh>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCRenderMesh> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCRenderMesh>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCRenderMesh>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeCRenderMesh>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeCRenderMesh>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeCRenderMesh>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeCRenderMesh>* , const CWeakHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeCRenderMesh>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeCRenderMesh>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeCRenderMesh>& operator=(CWeakHandle<InfoForResourceTypeCRenderMesh>* , const CWeakHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCRenderMesh>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCRenderMesh>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeCRenderMesh>* GetBinding(const CWeakHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCRenderMesh>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCRenderMesh>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCRenderMesh>* , const CWeakHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCRenderMesh>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCRenderMesh>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCRenderMesh>* , const CWeakHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeCRenderMesh>* , const CWeakHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeCRenderMesh>* , const CWeakHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeCRenderMesh>* , const CWeakHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeCRenderMesh>* , const CWeakHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeCRenderMesh> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeCRenderMesh> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeCRenderMesh> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCRenderMesh>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCRenderMesh>* , CResourceName* );
};

// <01153E92> ../public/resourcesystem/weakhandle.h:35
// member functions: 84
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeCVfx> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCVfx>* , const CWeakHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCVfx>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCVfx> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCVfx>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCVfx>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeCVfx>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeCVfx>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeCVfx>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeCVfx>* , const CWeakHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeCVfx>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeCVfx>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeCVfx>& operator=(CWeakHandle<InfoForResourceTypeCVfx>* , const CWeakHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCVfx>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCVfx>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeCVfx>* GetBinding(const CWeakHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCVfx>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCVfx>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCVfx>* , const CWeakHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCVfx>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCVfx>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCVfx>* , const CWeakHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeCVfx>* , const CWeakHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeCVfx>* , const CWeakHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeCVfx>* , const CWeakHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeCVfx>* , const CWeakHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeCVfx> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeCVfx> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeCVfx> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCVfx>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCVfx>* , CResourceName* );
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCVfx> *); /* linkage=_ZN11CWeakHandleI23InfoForResourceTypeCVfxEC4Ev */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCVfx> *, const class CWeakHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZN11CWeakHandleI23InfoForResourceTypeCVfxEC4ERKS1_ */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCVfx> *, ResourceHandleTyped_t); /* linkage=_ZN11CWeakHandleI23InfoForResourceTypeCVfxEC4EPK17ResourceBinding_tIS0_E */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCVfx> *, class ResourceId_t); /* linkage=_ZN11CWeakHandleI23InfoForResourceTypeCVfxEC4E12ResourceId_t */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCVfx> *, const class CResourceName  &); /* linkage=_ZN11CWeakHandleI23InfoForResourceTypeCVfxEC4ERK13CResourceName */
	void Init(class CWeakHandle<InfoForResourceTypeCVfx> *, ResourceHandleTyped_t); /* linkage=_ZN11CWeakHandleI23InfoForResourceTypeCVfxE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CWeakHandle<InfoForResourceTypeCVfx> *, class ResourceId_t); /* linkage=_ZN11CWeakHandleI23InfoForResourceTypeCVfxE4InitE12ResourceId_t */
	void Init(class CWeakHandle<InfoForResourceTypeCVfx> *, const class CResourceName  &); /* linkage=_ZN11CWeakHandleI23InfoForResourceTypeCVfxE4InitERK13CResourceName */
	void Init(class CWeakHandle<InfoForResourceTypeCVfx> *, const class CWeakHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZN11CWeakHandleI23InfoForResourceTypeCVfxE4InitERKS1_ */
	void InitUntyped(class CWeakHandle<InfoForResourceTypeCVfx> *, ResourceHandle_t); /* linkage=_ZN11CWeakHandleI23InfoForResourceTypeCVfxE11InitUntypedEPK21ResourceBindingBase_t */
	void InitUntypedUnchecked(class CWeakHandle<InfoForResourceTypeCVfx> *, ResourceHandle_t); /* linkage=_ZN11CWeakHandleI23InfoForResourceTypeCVfxE20InitUntypedUncheckedEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCVfx> & operator=(class CWeakHandle<InfoForResourceTypeCVfx> *, const class CWeakHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZN11CWeakHandleI23InfoForResourceTypeCVfxEaSERKS1_ */
	bool HasHandle(const class CWeakHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxE9HasHandleEv */
	bool HasIdentity(const class CWeakHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxE11HasIdentityEv */
	bool HasData(const class CWeakHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxE7HasDataEv */
	bool IsLoaded(const class CWeakHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxE8IsLoadedEv */
	bool IsError(const class CWeakHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeCVfx>::RuntimeClass_t*(const class CWeakHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxEcvPK4CVfxEv */
	const RuntimeClass_t  * operator->(const class CWeakHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxEptEv */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCVfx>::ResourceHandleTyped_t(const class CWeakHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CWeakHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxEcvPK21ResourceBindingBase_tEv */
	const class ResourceBinding_t<InfoForResourceTypeCVfx>  * GetBinding(const class CWeakHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CWeakHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxE7GetDataEv */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCVfx>  *, ResourceHandle_t); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCVfx>  *, ResourceHandleTyped_t); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCVfx>  *, const class CWeakHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxEeqERKS1_ */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCVfx>  *, ResourceHandle_t); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCVfx>  *, ResourceHandleTyped_t); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCVfx>  *, const class CWeakHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxEneERKS1_ */
	bool operator<(const class CWeakHandle<InfoForResourceTypeCVfx>  *, const class CWeakHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxEltERKS1_ */
	bool operator<=(const class CWeakHandle<InfoForResourceTypeCVfx>  *, const class CWeakHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxEleERKS1_ */
	bool operator>(const class CWeakHandle<InfoForResourceTypeCVfx>  *, const class CWeakHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxEgtERKS1_ */
	bool operator>=(const class CWeakHandle<InfoForResourceTypeCVfx>  *, const class CWeakHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxEgeERKS1_ */
	bool operator!(const class CWeakHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxEntEv */
	int GetRefCount(const class CWeakHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxE11GetRefCountEv */
	int GetReloadCounter(const class CWeakHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxE16GetReloadCounterEv */
	ResourceType_t GetResourceType(void); /* linkage=_ZN11CWeakHandleI23InfoForResourceTypeCVfxE15GetResourceTypeEv */
	class CWeakHandle<InfoForResourceTypeCVfx> FromUntypedHandle(ResourceHandle_t); /* linkage=_ZN11CWeakHandleI23InfoForResourceTypeCVfxE17FromUntypedHandleEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCVfx> FromUntypedHandleUnchecked(ResourceHandle_t); /* linkage=_ZN11CWeakHandleI23InfoForResourceTypeCVfxE26FromUntypedHandleUncheckedEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCVfx> StaticInvalidHandle(void); /* linkage=_ZN11CWeakHandleI23InfoForResourceTypeCVfxE19StaticInvalidHandleEv */
	void GetResourceName(const class CWeakHandle<InfoForResourceTypeCVfx>  *, class CBufferString *, bool); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CWeakHandle<InfoForResourceTypeCVfx>  *, class CResourceName *); /* linkage=_ZNK11CWeakHandleI23InfoForResourceTypeCVfxE15GetResourceNameEP13CResourceName */
};

// <021BB30C> ../public/resourcesystem/weakhandle.h:35
// member functions: 42
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeCGenericDataResource> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCGenericDataResource>* );
	/* ../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCGenericDataResource>* , const CWeakHandle<InfoForResourceTypeCGenericDataResource>& );
	/* ../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCGenericDataResource>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCGenericDataResource> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCGenericDataResource>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCGenericDataResource>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeCGenericDataResource>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeCGenericDataResource>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeCGenericDataResource>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeCGenericDataResource>* , const CWeakHandle<InfoForResourceTypeCGenericDataResource>& );
	/* ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeCGenericDataResource>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeCGenericDataResource>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeCGenericDataResource>& operator=(CWeakHandle<InfoForResourceTypeCGenericDataResource>* , const CWeakHandle<InfoForResourceTypeCGenericDataResource>& );
	/* ../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* );
	/* ../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* );
	/* ../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* );
	/* ../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* );
	/* ../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* );
	/* ../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCGenericDataResource>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* );
	/* ../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* );
	/* ../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCGenericDataResource>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* );
	/* ../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* );
	/* ../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeCGenericDataResource>* GetBinding(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* );
	/* ../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* );
	/* ../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* , const CWeakHandle<InfoForResourceTypeCGenericDataResource>& );
	/* ../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* , const CWeakHandle<InfoForResourceTypeCGenericDataResource>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* , const CWeakHandle<InfoForResourceTypeCGenericDataResource>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* , const CWeakHandle<InfoForResourceTypeCGenericDataResource>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* , const CWeakHandle<InfoForResourceTypeCGenericDataResource>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* , const CWeakHandle<InfoForResourceTypeCGenericDataResource>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* );
	/* ../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* );
	/* ../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* );
	/* ../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeCGenericDataResource> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeCGenericDataResource> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeCGenericDataResource> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCGenericDataResource>* , CResourceName* );
};

// <04B0395D> ../public/resourcesystem/weakhandle.h:35
// member functions: 84
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeCAnimationGroup> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCAnimationGroup>* , const CWeakHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCAnimationGroup>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCAnimationGroup> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCAnimationGroup>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCAnimationGroup>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeCAnimationGroup>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeCAnimationGroup>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeCAnimationGroup>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeCAnimationGroup>* , const CWeakHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeCAnimationGroup>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeCAnimationGroup>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeCAnimationGroup>& operator=(CWeakHandle<InfoForResourceTypeCAnimationGroup>* , const CWeakHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCAnimationGroup>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCAnimationGroup>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeCAnimationGroup>* GetBinding(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* , const CWeakHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* , const CWeakHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* , const CWeakHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* , const CWeakHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* , const CWeakHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* , const CWeakHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeCAnimationGroup> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeCAnimationGroup> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeCAnimationGroup> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCAnimationGroup>* , CResourceName* );
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCAnimationGroup> *); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeCAnimationGroupEC4Ev */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCAnimationGroup> *, const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeCAnimationGroupEC4ERKS1_ */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCAnimationGroup> *, ResourceHandleTyped_t); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeCAnimationGroupEC4EPK17ResourceBinding_tIS0_E */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCAnimationGroup> *, class ResourceId_t); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeCAnimationGroupEC4E12ResourceId_t */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCAnimationGroup> *, const class CResourceName  &); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeCAnimationGroupEC4ERK13CResourceName */
	void Init(class CWeakHandle<InfoForResourceTypeCAnimationGroup> *, ResourceHandleTyped_t); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeCAnimationGroupE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CWeakHandle<InfoForResourceTypeCAnimationGroup> *, class ResourceId_t); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeCAnimationGroupE4InitE12ResourceId_t */
	void Init(class CWeakHandle<InfoForResourceTypeCAnimationGroup> *, const class CResourceName  &); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeCAnimationGroupE4InitERK13CResourceName */
	void Init(class CWeakHandle<InfoForResourceTypeCAnimationGroup> *, const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeCAnimationGroupE4InitERKS1_ */
	void InitUntyped(class CWeakHandle<InfoForResourceTypeCAnimationGroup> *, ResourceHandle_t); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeCAnimationGroupE11InitUntypedEPK21ResourceBindingBase_t */
	void InitUntypedUnchecked(class CWeakHandle<InfoForResourceTypeCAnimationGroup> *, ResourceHandle_t); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeCAnimationGroupE20InitUntypedUncheckedEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCAnimationGroup> & operator=(class CWeakHandle<InfoForResourceTypeCAnimationGroup> *, const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeCAnimationGroupEaSERKS1_ */
	bool HasHandle(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupE9HasHandleEv */
	bool HasIdentity(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupE11HasIdentityEv */
	bool HasData(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupE7HasDataEv */
	bool IsLoaded(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupE8IsLoadedEv */
	bool IsError(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeCAnimationGroup>::RuntimeClass_t*(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupEcvPK15CAnimationGroupEv */
	const RuntimeClass_t  * operator->(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupEptEv */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCAnimationGroup>::ResourceHandleTyped_t(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupEcvPK21ResourceBindingBase_tEv */
	const class ResourceBinding_t<InfoForResourceTypeCAnimationGroup>  * GetBinding(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupE7GetDataEv */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *, ResourceHandle_t); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *, ResourceHandleTyped_t); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *, const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupEeqERKS1_ */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *, ResourceHandle_t); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *, ResourceHandleTyped_t); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *, const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupEneERKS1_ */
	bool operator<(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *, const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupEltERKS1_ */
	bool operator<=(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *, const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupEleERKS1_ */
	bool operator>(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *, const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupEgtERKS1_ */
	bool operator>=(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *, const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupEgeERKS1_ */
	bool operator!(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupEntEv */
	int GetRefCount(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupE11GetRefCountEv */
	int GetReloadCounter(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupE16GetReloadCounterEv */
	ResourceType_t GetResourceType(void); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeCAnimationGroupE15GetResourceTypeEv */
	class CWeakHandle<InfoForResourceTypeCAnimationGroup> FromUntypedHandle(ResourceHandle_t); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeCAnimationGroupE17FromUntypedHandleEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCAnimationGroup> FromUntypedHandleUnchecked(ResourceHandle_t); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeCAnimationGroupE26FromUntypedHandleUncheckedEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCAnimationGroup> StaticInvalidHandle(void); /* linkage=_ZN11CWeakHandleI34InfoForResourceTypeCAnimationGroupE19StaticInvalidHandleEv */
	void GetResourceName(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *, class CBufferString *, bool); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  *, class CResourceName *); /* linkage=_ZNK11CWeakHandleI34InfoForResourceTypeCAnimationGroupE15GetResourceNameEP13CResourceName */
};

// <04C614F7> ../public/resourcesystem/weakhandle.h:35
// member functions: 42
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeCMorphSetData> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCMorphSetData>* , const CWeakHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCMorphSetData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCMorphSetData> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCMorphSetData>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCMorphSetData>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeCMorphSetData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeCMorphSetData>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeCMorphSetData>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeCMorphSetData>* , const CWeakHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeCMorphSetData>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeCMorphSetData>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeCMorphSetData>& operator=(CWeakHandle<InfoForResourceTypeCMorphSetData>* , const CWeakHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCMorphSetData>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCMorphSetData>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeCMorphSetData>* GetBinding(const CWeakHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCMorphSetData>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCMorphSetData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCMorphSetData>* , const CWeakHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCMorphSetData>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCMorphSetData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCMorphSetData>* , const CWeakHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeCMorphSetData>* , const CWeakHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeCMorphSetData>* , const CWeakHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeCMorphSetData>* , const CWeakHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeCMorphSetData>* , const CWeakHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeCMorphSetData> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeCMorphSetData> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeCMorphSetData> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCMorphSetData>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCMorphSetData>* , CResourceName* );
};

// <04EE4623> ../public/resourcesystem/weakhandle.h:35
// member functions: 42
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeCSequenceGroupData> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , const CWeakHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCSequenceGroupData> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , const CWeakHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeCSequenceGroupData>& operator=(CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , const CWeakHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCSequenceGroupData>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCSequenceGroupData>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeCSequenceGroupData>* GetBinding(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , const CWeakHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , const CWeakHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , const CWeakHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , const CWeakHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , const CWeakHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , const CWeakHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeCSequenceGroupData> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeCSequenceGroupData> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeCSequenceGroupData> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>* , CResourceName* );
};

// <05494854> ../public/resourcesystem/weakhandle.h:35
// member functions: 42
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeCAnimData> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCAnimData>* , const CWeakHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCAnimData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCAnimData> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCAnimData>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCAnimData>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeCAnimData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeCAnimData>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeCAnimData>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeCAnimData>* , const CWeakHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeCAnimData>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeCAnimData>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeCAnimData>& operator=(CWeakHandle<InfoForResourceTypeCAnimData>* , const CWeakHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCAnimData>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCAnimData>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeCAnimData>* GetBinding(const CWeakHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCAnimData>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCAnimData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCAnimData>* , const CWeakHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCAnimData>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCAnimData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCAnimData>* , const CWeakHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeCAnimData>* , const CWeakHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeCAnimData>* , const CWeakHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeCAnimData>* , const CWeakHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeCAnimData>* , const CWeakHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeCAnimData> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeCAnimData> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeCAnimData> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCAnimData>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCAnimData>* , CResourceName* );
};

// <00AF74A8> ../public/resourcesystem/weakhandle.h:35
// member functions: 42
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeIAnimationSubGraph> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* );
	/* ../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& );
	/* ../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeIAnimationSubGraph> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , ResourceId_t);
	/* ../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , const CResourceName& );
	/* ../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& );
	/* ../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& operator=(CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& );
	/* ../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* );
	/* ../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* );
	/* ../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* );
	/* ../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* );
	/* ../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* );
	/* ../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeIAnimationSubGraph>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* );
	/* ../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* );
	/* ../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeIAnimationSubGraph>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* );
	/* ../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* );
	/* ../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeIAnimationSubGraph>* GetBinding(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* );
	/* ../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* );
	/* ../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& );
	/* ../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& );
	/* ../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& );
	/* ../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& );
	/* ../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& );
	/* ../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& );
	/* ../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* );
	/* ../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* );
	/* ../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* );
	/* ../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeIAnimationSubGraph> FromUntypedHandle(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeIAnimationSubGraph> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeIAnimationSubGraph> StaticInvalidHandle(void);
	/* ../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , CBufferString* , bool);
	/* ../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>* , CResourceName* );
};

// <00027557> ../../public/resourcesystem/weakhandle.h:35
// member functions: 42
// member variable: 1
// class size: 8
class CWeakHandle<ResourceBindingVoid_t> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../../public/resourcesystem/weakhandle.h:42 */
	void CWeakHandle(CWeakHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/weakhandle.h:43 */
	void CWeakHandle(CWeakHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/weakhandle.h:44 */
	void CWeakHandle(CWeakHandle<ResourceBindingVoid_t>* , ResourceHandleTyped_t);
	/* ../../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<ResourceBindingVoid_t> * ResourceHandleTyped_t;
	/* ../../public/resourcesystem/weakhandle.h:45 */
	void CWeakHandle(CWeakHandle<ResourceBindingVoid_t>* , ResourceId_t);
	/* ../../public/resourcesystem/weakhandle.h:46 */
	void CWeakHandle(CWeakHandle<ResourceBindingVoid_t>* , const CResourceName& );
	/* ../../public/resourcesystem/weakhandle.h:62 */
	void Init(CWeakHandle<ResourceBindingVoid_t>* , ResourceHandleTyped_t);
	/* ../../public/resourcesystem/weakhandle.h:63 */
	void Init(CWeakHandle<ResourceBindingVoid_t>* , ResourceId_t);
	/* ../../public/resourcesystem/weakhandle.h:64 */
	void Init(CWeakHandle<ResourceBindingVoid_t>* , const CResourceName& );
	/* ../../public/resourcesystem/weakhandle.h:65 */
	void Init(CWeakHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/weakhandle.h:66 */
	void InitUntyped(CWeakHandle<ResourceBindingVoid_t>* , ResourceHandle_t);
	/* ../../public/resourcesystem/weakhandle.h:67 */
	void InitUntypedUnchecked(CWeakHandle<ResourceBindingVoid_t>* , ResourceHandle_t);
	/* ../../public/resourcesystem/weakhandle.h:70 */
	CWeakHandle<ResourceBindingVoid_t>& operator=(CWeakHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/weakhandle.h:100 */
	bool HasHandle(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/weakhandle.h:101 */
	bool HasIdentity(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/weakhandle.h:102 */
	bool HasData(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/weakhandle.h:105 */
	bool IsLoaded(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/weakhandle.h:108 */
	bool IsError(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/weakhandle.h:39 */
	typedef void ResourceDataTyped_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/resourcesystem/weakhandle.h:111 */
	const ResourceDataTyped_t* operator const CWeakHandle<ResourceBindingVoid_t>::ResourceDataTyped_t*(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/weakhandle.h:112 */
	const ResourceDataTyped_t* operator->(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/weakhandle.h:113 */
	ResourceHandleTyped_t operator CWeakHandle<ResourceBindingVoid_t>::ResourceHandleTyped_t(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/weakhandle.h:114 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/weakhandle.h:116 */
	const ResourceBinding_t<ResourceBindingVoid_t>* GetBinding(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/weakhandle.h:119 */
	const ResourceDataTyped_t* GetData(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/weakhandle.h:122 */
	bool operator==(const CWeakHandle<ResourceBindingVoid_t>* , ResourceHandle_t);
	/* ../../public/resourcesystem/weakhandle.h:123 */
	bool operator==(const CWeakHandle<ResourceBindingVoid_t>* , ResourceHandleTyped_t);
	/* ../../public/resourcesystem/weakhandle.h:124 */
	bool operator==(const CWeakHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/weakhandle.h:126 */
	bool operator!=(const CWeakHandle<ResourceBindingVoid_t>* , ResourceHandle_t);
	/* ../../public/resourcesystem/weakhandle.h:127 */
	bool operator!=(const CWeakHandle<ResourceBindingVoid_t>* , ResourceHandleTyped_t);
	/* ../../public/resourcesystem/weakhandle.h:128 */
	bool operator!=(const CWeakHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/weakhandle.h:162 */
	int GetRefCount(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/weakhandle.h:164 */
	int GetReloadCounter(const CWeakHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/weakhandle.h:166 */
	ResourceType_t GetResourceType(void);
	/* ../../public/resourcesystem/weakhandle.h:168 */
	CWeakHandle<ResourceBindingVoid_t> FromUntypedHandle(ResourceHandle_t);
	/* ../../public/resourcesystem/weakhandle.h:169 */
	CWeakHandle<ResourceBindingVoid_t> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<ResourceBindingVoid_t> StaticInvalidHandle(void);
	/* ../../public/resourcesystem/weakhandle.h:175 */
	void GetResourceName(const CWeakHandle<ResourceBindingVoid_t>* , CBufferString* , bool);
	/* ../../public/resourcesystem/weakhandle.h:176 */
	void GetResourceName(const CWeakHandle<ResourceBindingVoid_t>* , CResourceName* );
};

// <001E35E1> ../../public/resourcesystem/weakhandle.h:35
// member functions: 84
// member variable: 1
// class size: 8
class CWeakHandle<InfoForResourceTypeCTextureBase> : public CWeakHandleBase {
public:
	/* class CWeakHandleBase <ancestor>; */ /* 0 8 */
	/* ../../public/resourcesystem/weakhandle.h:243 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/weakhandle.h:270 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/weakhandle.h:263 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../../public/resourcesystem/weakhandle.h:38 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCTextureBase> * ResourceHandleTyped_t;
	/* ../../public/resourcesystem/weakhandle.h:256 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceId_t);
	/* ../../public/resourcesystem/weakhandle.h:249 */
	void CWeakHandle(CWeakHandle<InfoForResourceTypeCTextureBase>* , const CResourceName& );
	/* ../../public/resourcesystem/weakhandle.h:294 */
	void Init(CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../../public/resourcesystem/weakhandle.h:280 */
	void Init(CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceId_t);
	/* ../../public/resourcesystem/weakhandle.h:287 */
	void Init(CWeakHandle<InfoForResourceTypeCTextureBase>* , const CResourceName& );
	/* ../../public/resourcesystem/weakhandle.h:300 */
	void Init(CWeakHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/weakhandle.h:306 */
	void InitUntyped(CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceHandle_t);
	/* ../../public/resourcesystem/weakhandle.h:320 */
	void InitUntypedUnchecked(CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceHandle_t);
	/* ../../public/resourcesystem/weakhandle.h:329 */
	CWeakHandle<InfoForResourceTypeCTextureBase>& operator=(CWeakHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/weakhandle.h:438 */
	bool HasHandle(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/weakhandle.h:443 */
	bool HasIdentity(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/weakhandle.h:452 */
	bool HasData(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/weakhandle.h:470 */
	bool IsLoaded(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/weakhandle.h:461 */
	bool IsError(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/weakhandle.h:353 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCTextureBase>::RuntimeClass_t*(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/weakhandle.h:359 */
	const RuntimeClass_t* operator->(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/weakhandle.h:365 */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/weakhandle.h:371 */
	ResourceHandle_t operator ResourceHandle_t(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/weakhandle.h:340 */
	const ResourceBinding_t<InfoForResourceTypeCTextureBase>* GetBinding(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/weakhandle.h:347 */
	const RuntimeClass_t* GetData(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/weakhandle.h:399 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceHandle_t);
	/* ../../public/resourcesystem/weakhandle.h:405 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../../public/resourcesystem/weakhandle.h:411 */
	bool operator==(const CWeakHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/weakhandle.h:417 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceHandle_t);
	/* ../../public/resourcesystem/weakhandle.h:423 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../../public/resourcesystem/weakhandle.h:429 */
	bool operator!=(const CWeakHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/weakhandle.h:132 */
	bool operator<(const CWeakHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/weakhandle.h:137 */
	bool operator<=(const CWeakHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/weakhandle.h:142 */
	bool operator>(const CWeakHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/weakhandle.h:147 */
	bool operator>=(const CWeakHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/weakhandle.h:154 */
	bool operator!(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/weakhandle.h:381 */
	int GetRefCount(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/weakhandle.h:390 */
	int GetReloadCounter(const CWeakHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/weakhandle.h:218 */
	ResourceType_t GetResourceType(void);
	/* ../../public/resourcesystem/weakhandle.h:232 */
	CWeakHandle<InfoForResourceTypeCTextureBase> FromUntypedHandle(ResourceHandle_t);
	/* ../../public/resourcesystem/weakhandle.h:224 */
	CWeakHandle<InfoForResourceTypeCTextureBase> FromUntypedHandleUnchecked(ResourceHandle_t);
	/* ../../public/resourcesystem/weakhandle.h:170 */
	CWeakHandle<InfoForResourceTypeCTextureBase> StaticInvalidHandle(void);
	/* ../../public/resourcesystem/weakhandle.h:478 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCTextureBase>* , CBufferString* , bool);
	/* ../../public/resourcesystem/weakhandle.h:486 */
	void GetResourceName(const CWeakHandle<InfoForResourceTypeCTextureBase>* , CResourceName* );
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCTextureBase> *); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseEC4Ev */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCTextureBase> *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseEC4ERKS1_ */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCTextureBase> *, ResourceHandleTyped_t); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseEC4EPK17ResourceBinding_tIS0_E */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCTextureBase> *, class ResourceId_t); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseEC4E12ResourceId_t */
	void CWeakHandle(class CWeakHandle<InfoForResourceTypeCTextureBase> *, const class CResourceName  &); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseEC4ERK13CResourceName */
	void Init(class CWeakHandle<InfoForResourceTypeCTextureBase> *, ResourceHandleTyped_t); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CWeakHandle<InfoForResourceTypeCTextureBase> *, class ResourceId_t); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE4InitE12ResourceId_t */
	void Init(class CWeakHandle<InfoForResourceTypeCTextureBase> *, const class CResourceName  &); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE4InitERK13CResourceName */
	void Init(class CWeakHandle<InfoForResourceTypeCTextureBase> *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE4InitERKS1_ */
	void InitUntyped(class CWeakHandle<InfoForResourceTypeCTextureBase> *, ResourceHandle_t); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE11InitUntypedEPK21ResourceBindingBase_t */
	void InitUntypedUnchecked(class CWeakHandle<InfoForResourceTypeCTextureBase> *, ResourceHandle_t); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE20InitUntypedUncheckedEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCTextureBase> & operator=(class CWeakHandle<InfoForResourceTypeCTextureBase> *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseEaSERKS1_ */
	bool HasHandle(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE9HasHandleEv */
	bool HasIdentity(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE11HasIdentityEv */
	bool HasData(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE7HasDataEv */
	bool IsLoaded(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE8IsLoadedEv */
	bool IsError(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeCTextureBase>::RuntimeClass_t*(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEcvPK12CTextureBaseEv */
	const RuntimeClass_t  * operator->(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEptEv */
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEcvPK21ResourceBindingBase_tEv */
	const class ResourceBinding_t<InfoForResourceTypeCTextureBase>  * GetBinding(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE7GetDataEv */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, ResourceHandle_t); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, ResourceHandleTyped_t); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEeqERKS1_ */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, ResourceHandle_t); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, ResourceHandleTyped_t); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEneERKS1_ */
	bool operator<(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEltERKS1_ */
	bool operator<=(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEleERKS1_ */
	bool operator>(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEgtERKS1_ */
	bool operator>=(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEgeERKS1_ */
	bool operator!(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseEntEv */
	int GetRefCount(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE11GetRefCountEv */
	int GetReloadCounter(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE16GetReloadCounterEv */
	ResourceType_t GetResourceType(void); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE15GetResourceTypeEv */
	class CWeakHandle<InfoForResourceTypeCTextureBase> FromUntypedHandle(ResourceHandle_t); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE17FromUntypedHandleEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCTextureBase> FromUntypedHandleUnchecked(ResourceHandle_t); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE26FromUntypedHandleUncheckedEPK21ResourceBindingBase_t */
	class CWeakHandle<InfoForResourceTypeCTextureBase> StaticInvalidHandle(void); /* linkage=_ZN11CWeakHandleI31InfoForResourceTypeCTextureBaseE19StaticInvalidHandleEv */
	void GetResourceName(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, class CBufferString *, bool); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CWeakHandle<InfoForResourceTypeCTextureBase>  *, class CResourceName *); /* linkage=_ZNK11CWeakHandleI31InfoForResourceTypeCTextureBaseE15GetResourceNameEP13CResourceName */
};

// <02E8ADC0> ../public/resourcesystem/weakhandle.h:132
inline void CWeakHandle<InfoForResourceTypeCModel>::operator<(const CWeakHandle<InfoForResourceTypeCModel>& rhs)
{
} /* size: 0 */

// <00C249EB> ../public/resourcesystem/weakhandle.h:132
inline void CWeakHandle<InfoForResourceTypeCTextureBase>::operator<(const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs)
{
} /* size: 0 */

// <00C77240> ../public/resourcesystem/weakhandle.h:142
inline void CWeakHandle<InfoForResourceTypeCModel>::operator>(const CWeakHandle<InfoForResourceTypeCModel>& rhs)
{
} /* size: 0 */

// <06E27E19> ../../public/resourcesystem/weakhandle.h:170
inline void StaticInvalidHandle(void)
{
} /* size: 0 */

// <06E27556> ../../public/resourcesystem/weakhandle.h:224
// variable: 1
inline void FromUntypedHandleUnchecked(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeCTextureBase> result; // 226
} /* size: 0, variables: 1 */

// <063115AA> ../public/resourcesystem/weakhandle.h:224
// variable: 1
inline void FromUntypedHandleUnchecked(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeIMaterial2> result; // 226
} /* size: 0, variables: 1 */

// <04E3A5C8> ../public/resourcesystem/weakhandle.h:224
// variable: 1
inline void FromUntypedHandleUnchecked(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeCRenderMesh> result; // 226
} /* size: 0, variables: 1 */

// <04E3A427> ../public/resourcesystem/weakhandle.h:224
// variable: 1
inline void FromUntypedHandleUnchecked(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeCPhysAggregateData> result; // 226
} /* size: 0, variables: 1 */

// <04E3A387> ../public/resourcesystem/weakhandle.h:224
// variable: 1
inline void FromUntypedHandleUnchecked(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeCAnimationGroup> result; // 226
} /* size: 0, variables: 1 */

// <04D6F4FB> ../public/resourcesystem/weakhandle.h:224
// variable: 1
inline void FromUntypedHandleUnchecked(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeIAnimationGraph> result; // 226
} /* size: 0, variables: 1 */

// <04CB8C46> ../public/resourcesystem/weakhandle.h:224
// variable: 1
inline void FromUntypedHandleUnchecked(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeCMorphSetData> result; // 226
} /* size: 0, variables: 1 */

// <04C3A0B8> ../public/resourcesystem/weakhandle.h:224
// variable: 1
inline void FromUntypedHandleUnchecked(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeCModel> result; // 226
} /* size: 0, variables: 1 */

// <0269DE51> ../public/resourcesystem/weakhandle.h:224
// variable: 1
inline void FromUntypedHandleUnchecked(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeVSound_t> result; // 226
} /* size: 0, variables: 1 */

// <021D02E3> ../public/resourcesystem/weakhandle.h:224
// variable: 1
inline void FromUntypedHandleUnchecked(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeCGenericDataResource> result; // 226
} /* size: 0, variables: 1 */

// <0178CBF6> ../public/resourcesystem/weakhandle.h:224
// variable: 1
inline void FromUntypedHandleUnchecked(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeCVfx> result; // 226
} /* size: 0, variables: 1 */

// <010EAAD3> ../public/resourcesystem/weakhandle.h:224
// variable: 1
inline void FromUntypedHandleUnchecked(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeCWorldNode> result; // 226
} /* size: 0, variables: 1 */

// <01005740> ../public/resourcesystem/weakhandle.h:224
// variable: 1
inline void FromUntypedHandleUnchecked(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeCEntityLump> result; // 226
} /* size: 0, variables: 1 */

// <00F28A8A> ../public/resourcesystem/weakhandle.h:224
// variable: 1
inline void FromUntypedHandleUnchecked(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeWorld_t> result; // 226
} /* size: 0, variables: 1 */

// <00F28080> ../public/resourcesystem/weakhandle.h:224
// variable: 1
inline void FromUntypedHandleUnchecked(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeCVoxelVisibility> result; // 226
} /* size: 0, variables: 1 */

// <00DF5A24> ../public/resourcesystem/weakhandle.h:224
// variable: 1
inline void FromUntypedHandleUnchecked(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeIAnimationSubGraph> result; // 226
} /* size: 0, variables: 1 */

// <00C64B82> ../public/resourcesystem/weakhandle.h:224
// variable: 1
inline void FromUntypedHandleUnchecked(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeCAnimData> result; // 226
} /* size: 0, variables: 1 */

// <00C18B43> ../public/resourcesystem/weakhandle.h:224
// variable: 1
inline void FromUntypedHandleUnchecked(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeCSequenceGroupData> result; // 226
} /* size: 0, variables: 1 */

// <0178CEDF> ../public/resourcesystem/weakhandle.h:232
// variable: 1
inline void FromUntypedHandle(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeIMaterial2> result; // 234
} /* size: 0, variables: 1 */

// <0178CEBC> ../public/resourcesystem/weakhandle.h:232
// variable: 1
inline void FromUntypedHandle(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeCTextureBase> result; // 234
} /* size: 0, variables: 1 */

// <0178CE93> ../public/resourcesystem/weakhandle.h:232
// variable: 1
inline void FromUntypedHandle(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeCModel> result; // 234
} /* size: 0, variables: 1 */

// <0178CE6A> ../public/resourcesystem/weakhandle.h:232
// variable: 1
inline void FromUntypedHandle(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeIAnimationGraph> result; // 234
} /* size: 0, variables: 1 */

// <0178CE41> ../public/resourcesystem/weakhandle.h:232
// variable: 1
inline void FromUntypedHandle(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeCVfx> result; // 234
} /* size: 0, variables: 1 */

// <0040AC35> ../public/resourcesystem/weakhandle.h:232
// variable: 1
inline void FromUntypedHandle(ResourceHandle_t hResource)
{
	CWeakHandle<InfoForResourceTypeCRenderMesh> result; // 234
} /* size: 0, variables: 1 */

// <06E27D88> ../../public/resourcesystem/weakhandle.h:243
void CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle()
{
} /* size: 0 */

// <06E27D6F> ../../public/resourcesystem/weakhandle.h:243
inline void CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle()
{
} /* size: 0 */

// <06315BA0> ../public/resourcesystem/weakhandle.h:243
void CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle()
{
} /* size: 0 */

// <06315B87> ../public/resourcesystem/weakhandle.h:243
inline void CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle()
{
} /* size: 0 */

// <04E37D91> ../public/resourcesystem/weakhandle.h:243
void CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle()
{
} /* size: 0 */

// <04E37D78> ../public/resourcesystem/weakhandle.h:243
inline void CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle()
{
} /* size: 0 */

// <04E37C7E> ../public/resourcesystem/weakhandle.h:243
void CWeakHandle<InfoForResourceTypeCPhysAggregateData>::CWeakHandle()
{
} /* size: 0 */

// <04E37C65> ../public/resourcesystem/weakhandle.h:243
inline void CWeakHandle<InfoForResourceTypeCPhysAggregateData>::CWeakHandle()
{
} /* size: 0 */

// <04E37BC0> ../public/resourcesystem/weakhandle.h:243
void CWeakHandle<InfoForResourceTypeCAnimationGroup>::CWeakHandle()
{
} /* size: 0 */

// <04E37BA7> ../public/resourcesystem/weakhandle.h:243
inline void CWeakHandle<InfoForResourceTypeCAnimationGroup>::CWeakHandle()
{
} /* size: 0 */

// <04D6DCF0> ../public/resourcesystem/weakhandle.h:243
void CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle()
{
} /* size: 0 */

// <04D6DCD7> ../public/resourcesystem/weakhandle.h:243
inline void CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle()
{
} /* size: 0 */

// <04CB4E8F> ../public/resourcesystem/weakhandle.h:243
void CWeakHandle<InfoForResourceTypeCMorphSetData>::CWeakHandle()
{
} /* size: 0 */

// <04CB4E76> ../public/resourcesystem/weakhandle.h:243
inline void CWeakHandle<InfoForResourceTypeCMorphSetData>::CWeakHandle()
{
} /* size: 0 */

// <04C3A8E3> ../public/resourcesystem/weakhandle.h:243
void CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle()
{
} /* size: 0 */

// <04C3A8CA> ../public/resourcesystem/weakhandle.h:243
inline void CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle()
{
} /* size: 0 */

// <0269DA71> ../public/resourcesystem/weakhandle.h:243
void CWeakHandle<InfoForResourceTypeVSound_t>::CWeakHandle()
{
} /* size: 0 */

// <0269DA58> ../public/resourcesystem/weakhandle.h:243
inline void CWeakHandle<InfoForResourceTypeVSound_t>::CWeakHandle()
{
} /* size: 0 */

// <021CD9AD> ../public/resourcesystem/weakhandle.h:243
void CWeakHandle<InfoForResourceTypeCGenericDataResource>::CWeakHandle()
{
} /* size: 0 */

// <021CD994> ../public/resourcesystem/weakhandle.h:243
inline void CWeakHandle<InfoForResourceTypeCGenericDataResource>::CWeakHandle()
{
} /* size: 0 */

// <0178CBDF> ../public/resourcesystem/weakhandle.h:243
void CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle()
{
} /* size: 0 */

// <0178CBC6> ../public/resourcesystem/weakhandle.h:243
inline void CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle()
{
} /* size: 0 */

// <010EAA32> ../public/resourcesystem/weakhandle.h:243
void CWeakHandle<InfoForResourceTypeCWorldNode>::CWeakHandle()
{
} /* size: 0 */

// <010EAA19> ../public/resourcesystem/weakhandle.h:243
inline void CWeakHandle<InfoForResourceTypeCWorldNode>::CWeakHandle()
{
} /* size: 0 */

// <01001C80> ../public/resourcesystem/weakhandle.h:243
inline void CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle()
{
} /* size: 0 */

// <00F26CD0> ../public/resourcesystem/weakhandle.h:243
void CWeakHandle<InfoForResourceTypeWorld_t>::CWeakHandle()
{
} /* size: 0 */

// <00F26CB7> ../public/resourcesystem/weakhandle.h:243
inline void CWeakHandle<InfoForResourceTypeWorld_t>::CWeakHandle()
{
} /* size: 0 */

// <00F267EA> ../public/resourcesystem/weakhandle.h:243
void CWeakHandle<InfoForResourceTypeCVoxelVisibility>::CWeakHandle()
{
} /* size: 0 */

// <00F267D1> ../public/resourcesystem/weakhandle.h:243
inline void CWeakHandle<InfoForResourceTypeCVoxelVisibility>::CWeakHandle()
{
} /* size: 0 */

// <00DF58A7> ../public/resourcesystem/weakhandle.h:243
void CWeakHandle<InfoForResourceTypeIAnimationSubGraph>::CWeakHandle()
{
} /* size: 0 */

// <00DF588E> ../public/resourcesystem/weakhandle.h:243
inline void CWeakHandle<InfoForResourceTypeIAnimationSubGraph>::CWeakHandle()
{
} /* size: 0 */

// <00C54084> ../public/resourcesystem/weakhandle.h:243
void CWeakHandle<InfoForResourceTypeCAnimData>::CWeakHandle()
{
} /* size: 0 */

// <00C5406B> ../public/resourcesystem/weakhandle.h:243
inline void CWeakHandle<InfoForResourceTypeCAnimData>::CWeakHandle()
{
} /* size: 0 */

// <00C1776D> ../public/resourcesystem/weakhandle.h:243
void CWeakHandle<InfoForResourceTypeCSequenceGroupData>::CWeakHandle()
{
} /* size: 0 */

// <00C17754> ../public/resourcesystem/weakhandle.h:243
inline void CWeakHandle<InfoForResourceTypeCSequenceGroupData>::CWeakHandle()
{
} /* size: 0 */

// <04007FF5> ../public/resourcesystem/weakhandle.h:263
void CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <04007FCF> ../public/resourcesystem/weakhandle.h:263
inline void CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <0127DDF4> ../public/resourcesystem/weakhandle.h:263
void CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <0127DDCE> ../public/resourcesystem/weakhandle.h:263
inline void CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <00091A23> ../public/resourcesystem/weakhandle.h:263
void CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <000919FD> ../public/resourcesystem/weakhandle.h:263
inline void CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <06A6E369> ../public/resourcesystem/weakhandle.h:270
void CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(const CWeakHandle<InfoForResourceTypeCTextureBase>& src)
{
} /* size: 0 */

// <06457989> ../public/resourcesystem/weakhandle.h:270
void CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(const CWeakHandle<InfoForResourceTypeIMaterial2>& src)
{
} /* size: 0 */

// <04C3A920> ../public/resourcesystem/weakhandle.h:270
void CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(const CWeakHandle<InfoForResourceTypeCModel>& src)
{
} /* size: 0 */

// <021D032C> ../public/resourcesystem/weakhandle.h:270
void CWeakHandle<InfoForResourceTypeCGenericDataResource>::CWeakHandle(const CWeakHandle<InfoForResourceTypeCGenericDataResource>& src)
{
} /* size: 0 */

// <0127A6FB> ../public/resourcesystem/weakhandle.h:270
void CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src)
{
} /* size: 0 */

// <010EAB1C> ../public/resourcesystem/weakhandle.h:270
void CWeakHandle<InfoForResourceTypeCWorldNode>::CWeakHandle(const CWeakHandle<InfoForResourceTypeCWorldNode>& src)
{
} /* size: 0 */

// <010087C7> ../public/resourcesystem/weakhandle.h:270
void CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle(const CWeakHandle<InfoForResourceTypeCEntityLump>& src)
{
} /* size: 0 */

// <00D6D5D2> ../public/resourcesystem/weakhandle.h:270
void CWeakHandle<InfoForResourceTypeCPhysAggregateData>::CWeakHandle(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& src)
{
} /* size: 0 */

// <00DF5A08> ../public/resourcesystem/weakhandle.h:270
void CWeakHandle<InfoForResourceTypeIAnimationSubGraph>::CWeakHandle(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& src)
{
} /* size: 0 */

// <00C54029> ../public/resourcesystem/weakhandle.h:270
void CWeakHandle<InfoForResourceTypeCAnimData>::CWeakHandle(const CWeakHandle<InfoForResourceTypeCAnimData>& src)
{
} /* size: 0 */

// <00C53EA9> ../public/resourcesystem/weakhandle.h:270
void CWeakHandle<InfoForResourceTypeCAnimationGroup>::CWeakHandle(const CWeakHandle<InfoForResourceTypeCAnimationGroup>& src)
{
} /* size: 0 */

// <00C18B8C> ../public/resourcesystem/weakhandle.h:270
void CWeakHandle<InfoForResourceTypeCSequenceGroupData>::CWeakHandle(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>& src)
{
} /* size: 0 */

// <0043C1E0> ../public/resourcesystem/weakhandle.h:270
void CWeakHandle<InfoForResourceTypeCMorphSetData>::CWeakHandle(const CWeakHandle<InfoForResourceTypeCMorphSetData>& src)
{
} /* size: 0 */

// <00091BEA> ../public/resourcesystem/weakhandle.h:270
void CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(const CWeakHandle<InfoForResourceTypeCVfx>& src)
{
} /* size: 0 */

// <0400099F> ../public/resourcesystem/weakhandle.h:294
void CWeakHandle<InfoForResourceTypeCTextureBase>::Init(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <0126F3D9> ../public/resourcesystem/weakhandle.h:294
void CWeakHandle<InfoForResourceTypeCModel>::Init(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <0008FB6A> ../public/resourcesystem/weakhandle.h:294
void CWeakHandle<InfoForResourceTypeCVfx>::Init(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <06E27530> ../../public/resourcesystem/weakhandle.h:300
void CWeakHandle<InfoForResourceTypeCTextureBase>::Init(const CWeakHandle<InfoForResourceTypeCTextureBase>& src)
{
} /* size: 0 */

// <06454D41> ../public/resourcesystem/weakhandle.h:300
void CWeakHandle<InfoForResourceTypeIMaterial2>::Init(const CWeakHandle<InfoForResourceTypeIMaterial2>& src)
{
} /* size: 0 */

// <04D6F4D5> ../public/resourcesystem/weakhandle.h:300
void CWeakHandle<InfoForResourceTypeIAnimationGraph>::Init(const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src)
{
} /* size: 0 */

// <04C3A092> ../public/resourcesystem/weakhandle.h:300
void CWeakHandle<InfoForResourceTypeCModel>::Init(const CWeakHandle<InfoForResourceTypeCModel>& src)
{
} /* size: 0 */

// <021CD9C4> ../public/resourcesystem/weakhandle.h:300
void CWeakHandle<InfoForResourceTypeCGenericDataResource>::Init(const CWeakHandle<InfoForResourceTypeCGenericDataResource>& src)
{
} /* size: 0 */

// <010EAA49> ../public/resourcesystem/weakhandle.h:300
void CWeakHandle<InfoForResourceTypeCWorldNode>::Init(const CWeakHandle<InfoForResourceTypeCWorldNode>& src)
{
} /* size: 0 */

// <01005788> ../public/resourcesystem/weakhandle.h:300
void CWeakHandle<InfoForResourceTypeCEntityLump>::Init(const CWeakHandle<InfoForResourceTypeCEntityLump>& src)
{
} /* size: 0 */

// <00D6D4E9> ../public/resourcesystem/weakhandle.h:300
void CWeakHandle<InfoForResourceTypeCPhysAggregateData>::Init(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& src)
{
} /* size: 0 */

// <00DF5842> ../public/resourcesystem/weakhandle.h:300
void CWeakHandle<InfoForResourceTypeIAnimationSubGraph>::Init(const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& src)
{
} /* size: 0 */

// <00C3E691> ../public/resourcesystem/weakhandle.h:300
void CWeakHandle<InfoForResourceTypeCAnimData>::Init(const CWeakHandle<InfoForResourceTypeCAnimData>& src)
{
} /* size: 0 */

// <00C3E55D> ../public/resourcesystem/weakhandle.h:300
void CWeakHandle<InfoForResourceTypeCAnimationGroup>::Init(const CWeakHandle<InfoForResourceTypeCAnimationGroup>& src)
{
} /* size: 0 */

// <00C17784> ../public/resourcesystem/weakhandle.h:300
void CWeakHandle<InfoForResourceTypeCSequenceGroupData>::Init(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>& src)
{
} /* size: 0 */

// <0043C0F4> ../public/resourcesystem/weakhandle.h:300
void CWeakHandle<InfoForResourceTypeCMorphSetData>::Init(const CWeakHandle<InfoForResourceTypeCMorphSetData>& src)
{
} /* size: 0 */

// <0008FD06> ../public/resourcesystem/weakhandle.h:300
void CWeakHandle<InfoForResourceTypeCVfx>::Init(const CWeakHandle<InfoForResourceTypeCVfx>& src)
{
} /* size: 0 */

// <0178CDAC> ../public/resourcesystem/weakhandle.h:306
// variables: 2
void CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	const char   __FUNCTION__; // 2013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
} /* size: 0, variables: 1 */

// <0178CD5D> ../public/resourcesystem/weakhandle.h:306
// variables: 2
void CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	const char   __FUNCTION__; // 2013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
} /* size: 0, variables: 1 */

// <0178CCBB> ../public/resourcesystem/weakhandle.h:306
// variables: 2
void CWeakHandle<InfoForResourceTypeCModel>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	const char   __FUNCTION__; // 2013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
} /* size: 0, variables: 1 */

// <0178CC19> ../public/resourcesystem/weakhandle.h:306
// variables: 2
void CWeakHandle<InfoForResourceTypeIAnimationGraph>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	const char   __FUNCTION__; // 2013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
} /* size: 0, variables: 1 */

// <0178CB77> ../public/resourcesystem/weakhandle.h:306
// variables: 2
void CWeakHandle<InfoForResourceTypeCVfx>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	const char   __FUNCTION__; // 2013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
} /* size: 0, variables: 1 */

// <003469D3> ../public/resourcesystem/weakhandle.h:306
// function calls: 10
void CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	{
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
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
} /* size: 211 */

// <00304032> ../public/resourcesystem/weakhandle.h:306
// variables: 2
void CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	const char   __FUNCTION__; // 55695
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
} /* size: 0, variables: 1 */

// <004086B9> ../public/resourcesystem/weakhandle.h:306
// variables: 2
void CWeakHandle<InfoForResourceTypeCRenderMesh>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	const char   __FUNCTION__; // 50362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
} /* size: 0, variables: 1 */

// <0018D519> ../public/resourcesystem/weakhandle.h:306
// function calls: 10
void CWeakHandle<InfoForResourceTypeCModel>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	{
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
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
} /* size: 211 */

// <0016B51A> ../public/resourcesystem/weakhandle.h:306
// variables: 2
void CWeakHandle<InfoForResourceTypeCModel>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	const char   __FUNCTION__; // 13355
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
} /* size: 0, variables: 1 */

// <0016A5D6> ../public/resourcesystem/weakhandle.h:306
// variables: 2
void CWeakHandle<InfoForResourceTypeIAnimationGraph>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	const char   __FUNCTION__; // 13355
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
} /* size: 0, variables: 1 */

// <002E70CB> ../public/resourcesystem/weakhandle.h:306
// variables: 2
void CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	const char   __FUNCTION__; // 38229
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
} /* size: 0, variables: 1 */

// <0057B976> ../public/resourcesystem/weakhandle.h:306
// variables: 2
void CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	const char   __FUNCTION__; // 29502
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
} /* size: 0, variables: 1 */

// <0057B927> ../public/resourcesystem/weakhandle.h:306
// variables: 2
void CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	const char   __FUNCTION__; // 29502
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
} /* size: 0, variables: 1 */

// <0034BE7D> ../public/resourcesystem/weakhandle.h:306
// function calls: 10
void CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	{
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
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
} /* size: 211 */

// <003467A1> ../public/resourcesystem/weakhandle.h:306
// variables: 2
void CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	const char   __FUNCTION__; // 64950
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
} /* size: 0, variables: 1 */

// <001601D7> ../public/resourcesystem/weakhandle.h:306
// variables: 2
void CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	const char   __FUNCTION__; // 62858
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
} /* size: 0, variables: 1 */

// <000C4282> ../public/resourcesystem/weakhandle.h:306
// function calls: 10
void CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntyped(ResourceHandle_t hUntypedResource)
{
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
} /* size: 238, inline expansions: 1 (133 bytes) */

// <000C36C4> ../public/resourcesystem/weakhandle.h:306
// function calls: 10
void CWeakHandle<InfoForResourceTypeCVfx>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	{
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
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
} /* size: 211 */

// <000905FA> ../public/resourcesystem/weakhandle.h:306
// variables: 2
void CWeakHandle<InfoForResourceTypeCVfx>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	const char   __FUNCTION__; // 56071
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
} /* size: 0, variables: 1 */

// <00090297> ../public/resourcesystem/weakhandle.h:306
// variables: 2
void CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	const char   __FUNCTION__; // 56071
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
} /* size: 0, variables: 1 */

// <0008FFC8> ../public/resourcesystem/weakhandle.h:306
// variables: 2
void CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntyped(ResourceHandle_t hUntypedResource)
{
	const char   __FUNCTION__; // 56071
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
} /* size: 0, variables: 1 */

// <06E26294> ../../public/resourcesystem/weakhandle.h:320
void CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(ResourceHandle_t hUntypedResource)
{
} /* size: 0 */

// <062EA59D> ../public/resourcesystem/weakhandle.h:320
void CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(ResourceHandle_t hUntypedResource)
{
} /* size: 0 */

// <04E37D52> ../public/resourcesystem/weakhandle.h:320
void CWeakHandle<InfoForResourceTypeCRenderMesh>::InitUntypedUnchecked(ResourceHandle_t hUntypedResource)
{
} /* size: 0 */

// <04E37C3F> ../public/resourcesystem/weakhandle.h:320
void CWeakHandle<InfoForResourceTypeCPhysAggregateData>::InitUntypedUnchecked(ResourceHandle_t hUntypedResource)
{
} /* size: 0 */

// <04E37B81> ../public/resourcesystem/weakhandle.h:320
void CWeakHandle<InfoForResourceTypeCAnimationGroup>::InitUntypedUnchecked(ResourceHandle_t hUntypedResource)
{
} /* size: 0 */

// <04D6DCB1> ../public/resourcesystem/weakhandle.h:320
void CWeakHandle<InfoForResourceTypeIAnimationGraph>::InitUntypedUnchecked(ResourceHandle_t hUntypedResource)
{
} /* size: 0 */

// <04CB4E50> ../public/resourcesystem/weakhandle.h:320
void CWeakHandle<InfoForResourceTypeCMorphSetData>::InitUntypedUnchecked(ResourceHandle_t hUntypedResource)
{
} /* size: 0 */

// <04C39C85> ../public/resourcesystem/weakhandle.h:320
void CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(ResourceHandle_t hUntypedResource)
{
} /* size: 0 */

// <0269DA32> ../public/resourcesystem/weakhandle.h:320
void CWeakHandle<InfoForResourceTypeVSound_t>::InitUntypedUnchecked(ResourceHandle_t hUntypedResource)
{
} /* size: 0 */

// <021CD96E> ../public/resourcesystem/weakhandle.h:320
void CWeakHandle<InfoForResourceTypeCGenericDataResource>::InitUntypedUnchecked(ResourceHandle_t hUntypedResource)
{
} /* size: 0 */

// <0178CAB9> ../public/resourcesystem/weakhandle.h:320
void CWeakHandle<InfoForResourceTypeCVfx>::InitUntypedUnchecked(ResourceHandle_t hUntypedResource)
{
} /* size: 0 */

// <010EA9F3> ../public/resourcesystem/weakhandle.h:320
void CWeakHandle<InfoForResourceTypeCWorldNode>::InitUntypedUnchecked(ResourceHandle_t hUntypedResource)
{
} /* size: 0 */

// <01001C5A> ../public/resourcesystem/weakhandle.h:320
void CWeakHandle<InfoForResourceTypeCEntityLump>::InitUntypedUnchecked(ResourceHandle_t hUntypedResource)
{
} /* size: 0 */

// <00F26C91> ../public/resourcesystem/weakhandle.h:320
void CWeakHandle<InfoForResourceTypeWorld_t>::InitUntypedUnchecked(ResourceHandle_t hUntypedResource)
{
} /* size: 0 */

// <00F267AB> ../public/resourcesystem/weakhandle.h:320
void CWeakHandle<InfoForResourceTypeCVoxelVisibility>::InitUntypedUnchecked(ResourceHandle_t hUntypedResource)
{
} /* size: 0 */

// <00DF5868> ../public/resourcesystem/weakhandle.h:320
void CWeakHandle<InfoForResourceTypeIAnimationSubGraph>::InitUntypedUnchecked(ResourceHandle_t hUntypedResource)
{
} /* size: 0 */

// <00C54045> ../public/resourcesystem/weakhandle.h:320
void CWeakHandle<InfoForResourceTypeCAnimData>::InitUntypedUnchecked(ResourceHandle_t hUntypedResource)
{
} /* size: 0 */

// <00C1772E> ../public/resourcesystem/weakhandle.h:320
void CWeakHandle<InfoForResourceTypeCSequenceGroupData>::InitUntypedUnchecked(ResourceHandle_t hUntypedResource)
{
} /* size: 0 */

// <06E27DF3> ../../public/resourcesystem/weakhandle.h:329
inline void CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(const CWeakHandle<InfoForResourceTypeCTextureBase>& src)
{
} /* size: 0 */

// <04D70974> ../public/resourcesystem/weakhandle.h:329
inline void CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator=(const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src)
{
} /* size: 0 */

// <04999F4E> ../public/resourcesystem/weakhandle.h:329
inline void CWeakHandle<InfoForResourceTypeCModel>::operator=(const CWeakHandle<InfoForResourceTypeCModel>& src)
{
} /* size: 0 */

// <03C1DEFB> ../public/resourcesystem/weakhandle.h:329
inline void CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(const CWeakHandle<InfoForResourceTypeIMaterial2>& src)
{
} /* size: 0 */

// <010EAAAD> ../public/resourcesystem/weakhandle.h:329
inline void CWeakHandle<InfoForResourceTypeCWorldNode>::operator=(const CWeakHandle<InfoForResourceTypeCWorldNode>& src)
{
} /* size: 0 */

// <00F20B1C> ../public/resourcesystem/weakhandle.h:329
inline void CWeakHandle<InfoForResourceTypeCEntityLump>::operator=(const CWeakHandle<InfoForResourceTypeCEntityLump>& src)
{
} /* size: 0 */

// <00D6D562> ../public/resourcesystem/weakhandle.h:329
inline void CWeakHandle<InfoForResourceTypeCPhysAggregateData>::operator=(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& src)
{
} /* size: 0 */

// <00C18B1D> ../public/resourcesystem/weakhandle.h:329
inline void CWeakHandle<InfoForResourceTypeCSequenceGroupData>::operator=(const CWeakHandle<InfoForResourceTypeCSequenceGroupData>& src)
{
} /* size: 0 */

// <00C18A1F> ../public/resourcesystem/weakhandle.h:329
inline void CWeakHandle<InfoForResourceTypeCAnimationGroup>::operator=(const CWeakHandle<InfoForResourceTypeCAnimationGroup>& src)
{
} /* size: 0 */

// <00C1893A> ../public/resourcesystem/weakhandle.h:329
inline void CWeakHandle<InfoForResourceTypeCAnimData>::operator=(const CWeakHandle<InfoForResourceTypeCAnimData>& src)
{
} /* size: 0 */

// <0043C16E> ../public/resourcesystem/weakhandle.h:329
inline void CWeakHandle<InfoForResourceTypeCMorphSetData>::operator=(const CWeakHandle<InfoForResourceTypeCMorphSetData>& src)
{
} /* size: 0 */

// <06311515> ../public/resourcesystem/weakhandle.h:340
inline void CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding()
{
} /* size: 0 */

// <04CB8C90> ../public/resourcesystem/weakhandle.h:340
inline void CWeakHandle<InfoForResourceTypeCMorphSetData>::GetBinding()
{
} /* size: 0 */

// <04BAE99F> ../public/resourcesystem/weakhandle.h:340
inline void CWeakHandle<InfoForResourceTypeCRenderMesh>::GetBinding()
{
} /* size: 0 */

// <04BABC30> ../public/resourcesystem/weakhandle.h:340
inline void CWeakHandle<InfoForResourceTypeCPhysAggregateData>::GetBinding()
{
} /* size: 0 */

// <04BABB3E> ../public/resourcesystem/weakhandle.h:340
inline void CWeakHandle<InfoForResourceTypeCAnimationGroup>::GetBinding()
{
} /* size: 0 */

// <049994CB> ../public/resourcesystem/weakhandle.h:340
inline void CWeakHandle<InfoForResourceTypeCModel>::GetBinding()
{
} /* size: 0 */

// <040AF84C> ../public/resourcesystem/weakhandle.h:340
inline void CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding()
{
} /* size: 0 */

// <0269DE38> ../public/resourcesystem/weakhandle.h:340
inline void CWeakHandle<InfoForResourceTypeVSound_t>::GetBinding()
{
} /* size: 0 */

// <0126BB10> ../public/resourcesystem/weakhandle.h:340
inline void CWeakHandle<InfoForResourceTypeIAnimationGraph>::GetBinding()
{
} /* size: 0 */

// <0126B25F> ../public/resourcesystem/weakhandle.h:340
inline void CWeakHandle<InfoForResourceTypeCVfx>::GetBinding()
{
} /* size: 0 */

// <0100416D> ../public/resourcesystem/weakhandle.h:340
inline void CWeakHandle<InfoForResourceTypeWorld_t>::GetBinding()
{
} /* size: 0 */

// <010040BA> ../public/resourcesystem/weakhandle.h:340
inline void CWeakHandle<InfoForResourceTypeCWorldNode>::GetBinding()
{
} /* size: 0 */

// <00F28067> ../public/resourcesystem/weakhandle.h:340
inline void CWeakHandle<InfoForResourceTypeCVoxelVisibility>::GetBinding()
{
} /* size: 0 */

// <00E6F9DD> ../public/resourcesystem/weakhandle.h:340
inline void CWeakHandle<InfoForResourceTypeCEntityLump>::GetBinding()
{
} /* size: 0 */

// <04E3EED3> ../public/resourcesystem/weakhandle.h:347
void CWeakHandle<InfoForResourceTypeCRenderMesh>::GetData()
{
} /* size: 0 */

// <04E3E42A> ../public/resourcesystem/weakhandle.h:347
void CWeakHandle<InfoForResourceTypeCPhysAggregateData>::GetData()
{
} /* size: 0 */

// <04E3E114> ../public/resourcesystem/weakhandle.h:347
void CWeakHandle<InfoForResourceTypeCAnimationGroup>::GetData()
{
} /* size: 0 */

// <04AB35A0> ../public/resourcesystem/weakhandle.h:347
void CWeakHandle<InfoForResourceTypeIAnimationGraph>::GetData()
{
} /* size: 0 */

// <019362F1> ../public/resourcesystem/weakhandle.h:347
void CWeakHandle<InfoForResourceTypeIMaterial2>::GetData()
{
} /* size: 0 */

// <010EAA94> ../public/resourcesystem/weakhandle.h:347
void CWeakHandle<InfoForResourceTypeCWorldNode>::GetData()
{
} /* size: 0 */

// <00F20B03> ../public/resourcesystem/weakhandle.h:347
void CWeakHandle<InfoForResourceTypeCEntityLump>::GetData()
{
} /* size: 0 */

// <01580F7C> ../public/resourcesystem/weakhandle.h:347
void CWeakHandle<InfoForResourceTypeCModel>::GetData()
{
} /* size: 0 */

// <00C82EE2> ../public/resourcesystem/weakhandle.h:347
void CWeakHandle<InfoForResourceTypeCAnimData>::GetData()
{
} /* size: 0 */

// <00C18B04> ../public/resourcesystem/weakhandle.h:347
void CWeakHandle<InfoForResourceTypeCSequenceGroupData>::GetData()
{
} /* size: 0 */

// <0043C155> ../public/resourcesystem/weakhandle.h:347
void CWeakHandle<InfoForResourceTypeCMorphSetData>::GetData()
{
} /* size: 0 */

// <00091ADD> ../public/resourcesystem/weakhandle.h:347
void CWeakHandle<InfoForResourceTypeCVfx>::GetData()
{
} /* size: 0 */

// <04AADCA6> ../public/resourcesystem/weakhandle.h:353
inline void operator const CWeakHandle<InfoForResourceTypeIMaterial2>::ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*()
{
} /* size: 0 */

// <04999B0A> ../public/resourcesystem/weakhandle.h:353
inline void operator const CWeakHandle<InfoForResourceTypeCModel>::ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*()
{
} /* size: 0 */

// <0127AD5A> ../public/resourcesystem/weakhandle.h:353
inline void operator const CWeakHandle<InfoForResourceTypeIAnimationGraph>::ResourceHandleInfo_t<InfoForResourceTypeIAnimationGraph>::RuntimeClass_t*()
{
} /* size: 0 */

// <01278628> ../public/resourcesystem/weakhandle.h:353
inline void operator const CWeakHandle<InfoForResourceTypeCPhysAggregateData>::ResourceHandleInfo_t<InfoForResourceTypeCPhysAggregateData>::RuntimeClass_t*()
{
} /* size: 0 */

// <01277CF1> ../public/resourcesystem/weakhandle.h:353
inline void operator const CWeakHandle<InfoForResourceTypeCVfx>::ResourceHandleInfo_t<InfoForResourceTypeCVfx>::RuntimeClass_t*()
{
} /* size: 0 */

// <00449BFE> ../public/resourcesystem/weakhandle.h:353
inline void operator const CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleInfo_t<InfoForResourceTypeCTextureBase>::RuntimeClass_t*()
{
} /* size: 0 */

// <04E3C4DB> ../public/resourcesystem/weakhandle.h:359
inline void CWeakHandle<InfoForResourceTypeCModel>::operator->()
{
} /* size: 0 */

// <04AB3587> ../public/resourcesystem/weakhandle.h:359
inline void CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator->()
{
} /* size: 0 */

// <03534C5A> ../public/resourcesystem/weakhandle.h:359
inline void CWeakHandle<InfoForResourceTypeIMaterial2>::operator->()
{
} /* size: 0 */

// <00AC6951> ../public/resourcesystem/weakhandle.h:359
inline void CWeakHandle<InfoForResourceTypeCTextureBase>::operator->()
{
} /* size: 0 */

// <00091C9A> ../public/resourcesystem/weakhandle.h:359
inline void CWeakHandle<InfoForResourceTypeCVfx>::operator->()
{
} /* size: 0 */

// <04008011> ../public/resourcesystem/weakhandle.h:365
inline void operator CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t()
{
} /* size: 0 */

// <04E3E0FB> ../public/resourcesystem/weakhandle.h:371
inline void operator CWeakHandle<InfoForResourceTypeCAnimationGroup>::ResourceHandle_t()
{
} /* size: 0 */

// <04D2356C> ../public/resourcesystem/weakhandle.h:371
inline void operator CWeakHandle<InfoForResourceTypeIMaterial2>::ResourceHandle_t()
{
} /* size: 0 */

// <02EA7EB1> ../public/resourcesystem/weakhandle.h:371
inline void operator CWeakHandle<InfoForResourceTypeCModel>::ResourceHandle_t()
{
} /* size: 0 */

// <02B7B91F> ../public/resourcesystem/weakhandle.h:371
inline void operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandle_t()
{
} /* size: 0 */

// <021D0471> ../public/resourcesystem/weakhandle.h:371
inline void operator CWeakHandle<InfoForResourceTypeCGenericDataResource>::ResourceHandle_t()
{
} /* size: 0 */

// <01007CFD> ../public/resourcesystem/weakhandle.h:371
inline void operator CWeakHandle<InfoForResourceTypeCEntityLump>::ResourceHandle_t()
{
} /* size: 0 */

// <0100790B> ../public/resourcesystem/weakhandle.h:371
inline void operator CWeakHandle<InfoForResourceTypeWorld_t>::ResourceHandle_t()
{
} /* size: 0 */

// <010075CC> ../public/resourcesystem/weakhandle.h:371
inline void operator CWeakHandle<InfoForResourceTypeCWorldNode>::ResourceHandle_t()
{
} /* size: 0 */

// <00409FF3> ../public/resourcesystem/weakhandle.h:371
inline void operator CWeakHandle<InfoForResourceTypeCRenderMesh>::ResourceHandle_t()
{
} /* size: 0 */

// <00C2FBFA> ../public/resourcesystem/weakhandle.h:381
inline void CWeakHandle<InfoForResourceTypeCTextureBase>::GetRefCount()
{
} /* size: 0 */

// <00091BAB> ../public/resourcesystem/weakhandle.h:381
inline void CWeakHandle<InfoForResourceTypeCVfx>::GetRefCount()
{
} /* size: 0 */

// <00675F0B> ../public/resourcesystem/weakhandle.h:399
inline void CWeakHandle<InfoForResourceTypeVSound_t>::operator==(ResourceHandle_t hResource)
{
} /* size: 0 */

// <00C2FB63> ../public/resourcesystem/weakhandle.h:399
inline void CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(ResourceHandle_t hResource)
{
} /* size: 0 */

// <01DA4CBF> ../public/resourcesystem/weakhandle.h:411
inline void CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource)
{
} /* size: 0 */

// <01B58856> ../public/resourcesystem/weakhandle.h:411
inline void CWeakHandle<InfoForResourceTypeIMaterial2>::operator==(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource)
{
} /* size: 0 */

// <0127A717> ../public/resourcesystem/weakhandle.h:411
inline void CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator==(const CWeakHandle<InfoForResourceTypeIAnimationGraph>& hResource)
{
} /* size: 0 */

// <004D3BB7> ../public/resourcesystem/weakhandle.h:411
inline void CWeakHandle<InfoForResourceTypeCModel>::operator==(const CWeakHandle<InfoForResourceTypeCModel>& hResource)
{
} /* size: 0 */

// <00091CB3> ../public/resourcesystem/weakhandle.h:411
inline void CWeakHandle<InfoForResourceTypeCVfx>::operator==(const CWeakHandle<InfoForResourceTypeCVfx>& hResource)
{
} /* size: 0 */

// <0015FF23> ../public/resourcesystem/weakhandle.h:417
inline void CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(ResourceHandle_t hResource)
{
} /* size: 0 */

// <04E3EEEC> ../public/resourcesystem/weakhandle.h:429
inline void CWeakHandle<InfoForResourceTypeCRenderMesh>::operator!=(const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource)
{
} /* size: 0 */

// <04CC01DD> ../public/resourcesystem/weakhandle.h:429
inline void CWeakHandle<InfoForResourceTypeIMaterial2>::operator!=(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource)
{
} /* size: 0 */

// <03AE89C2> ../public/resourcesystem/weakhandle.h:429
inline void CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource)
{
} /* size: 0 */

// <02EB1118> ../public/resourcesystem/weakhandle.h:429
inline void CWeakHandle<InfoForResourceTypeCModel>::operator!=(const CWeakHandle<InfoForResourceTypeCModel>& hResource)
{
} /* size: 0 */

// <034686DE> ../public/resourcesystem/weakhandle.h:438
inline void CWeakHandle<InfoForResourceTypeCTextureBase>::HasHandle()
{
} /* size: 0 */

// <010F9427> ../public/resourcesystem/weakhandle.h:438
inline void CWeakHandle<InfoForResourceTypeIMaterial2>::HasHandle()
{
} /* size: 0 */

// <010088E4> ../public/resourcesystem/weakhandle.h:443
inline void CWeakHandle<InfoForResourceTypeCTextureBase>::HasIdentity()
{
} /* size: 0 */

// <0057C28E> ../public/resourcesystem/weakhandle.h:443
inline void CWeakHandle<InfoForResourceTypeIMaterial2>::HasIdentity()
{
} /* size: 0 */

// <06312E81> ../public/resourcesystem/weakhandle.h:452
inline void CWeakHandle<InfoForResourceTypeIMaterial2>::HasData()
{
} /* size: 0 */

// <033AF013> ../public/resourcesystem/weakhandle.h:452
inline void CWeakHandle<InfoForResourceTypeCTextureBase>::HasData()
{
} /* size: 0 */

// <02E94264> ../public/resourcesystem/weakhandle.h:452
inline void CWeakHandle<InfoForResourceTypeCModel>::HasData()
{
} /* size: 0 */

// <01278641> ../public/resourcesystem/weakhandle.h:452
inline void CWeakHandle<InfoForResourceTypeCPhysAggregateData>::HasData()
{
} /* size: 0 */

// <010F9823> ../public/resourcesystem/weakhandle.h:452
inline void CWeakHandle<InfoForResourceTypeCRenderMesh>::HasData()
{
} /* size: 0 */

// <02B7BE91> ../public/resourcesystem/weakhandle.h:461
void CWeakHandle<InfoForResourceTypeCTextureBase>::IsError()
{
} /* size: 0 */

// <012784E8> ../public/resourcesystem/weakhandle.h:470
inline void CWeakHandle<InfoForResourceTypeCTextureBase>::IsLoaded()
{
} /* size: 0 */

// <0057C1F6> ../public/resourcesystem/weakhandle.h:470
inline void CWeakHandle<InfoForResourceTypeIMaterial2>::IsLoaded()
{
} /* size: 0 */

// <04006D23> ../public/resourcesystem/weakhandle.h:478
inline void CWeakHandle<InfoForResourceTypeCModel>::GetResourceName(CBufferString* pOutName, bool bAppend)
{
} /* size: 0 */

// <012784B5> ../public/resourcesystem/weakhandle.h:478
inline void CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(CBufferString* pOutName, bool bAppend)
{
} /* size: 0 */

// <0057C25B> ../public/resourcesystem/weakhandle.h:478
inline void CWeakHandle<InfoForResourceTypeIMaterial2>::GetResourceName(CBufferString* pOutName, bool bAppend)
{
} /* size: 0 */

// <04E3A33D> ../public/resourcesystem/weakhandle.h:486
void CWeakHandle<InfoForResourceTypeCAnimationGroup>::GetResourceName(CResourceName* pOutName)
{
} /* size: 0 */

// <021CF72D> ../public/resourcesystem/weakhandle.h:486
void CWeakHandle<InfoForResourceTypeCGenericDataResource>::GetResourceName(CResourceName* pOutName)
{
} /* size: 0 */

// <00C64A54> ../public/resourcesystem/weakhandle.h:486
void CWeakHandle<InfoForResourceTypeCAnimData>::GetResourceName(CResourceName* pOutName)
{
} /* size: 0 */

// <00C2F37F> ../public/resourcesystem/weakhandle.h:486
void CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(CResourceName* pOutName)
{
} /* size: 0 */

// <000904C2> ../public/resourcesystem/weakhandle.h:486
void CWeakHandle<InfoForResourceTypeIMaterial2>::GetResourceName(CResourceName* pOutName)
{
} /* size: 0 */

