
//
// public/resourcesystem/resourcehandle.h
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
//	functions: 39
//	classes: 3
//

// <02345D45> ../public/resourcesystem/resourcehandle.h:19
ResourceId_t ComputeResourceIdFromResourceName(const char *)
{
} /* size: 0 */

// <02381480> ../public/resourcesystem/resourcehandle.h:27
void IResourceHandleUtils::IResourceHandleUtils()
{
} /* size: 0 */

// <02381464> ../public/resourcesystem/resourcehandle.h:27
inline void IResourceHandleUtils::IResourceHandleUtils()
{
} /* size: 0 */

// <022F1F3D> ../public/resourcesystem/resourcehandle.h:27
// member functions: 24
// member variable: 1
// vtable entries: 8
// class size: 8
class IResourceHandleUtils {
	void IResourceHandleUtils(IResourceHandleUtils* , IResourceHandleUtils& );
	void IResourceHandleUtils(IResourceHandleUtils* , const IResourceHandleUtils& );
	void IResourceHandleUtils(IResourceHandleUtils* );
	void ~IResourceHandleUtils(IResourceHandleUtils* );
	int ()(void) * * _vptr.IResourceHandleUtils; /* 0 8 */
	/* ../public/resourcesystem/resourcehandle.h:34 */
	virtual ResourceHandle_t FindOrRegisterResourceByName(IResourceHandleUtils* , const CResourceName& , bool);
	/* ../public/resourcesystem/resourcehandle.h:35 */
	virtual ResourceHandle_t FindResourceById(IResourceHandleUtils* , ResourceId_t, ResourceType_t);
	/* ../public/resourcesystem/resourcehandle.h:37 */
	virtual void DeleteResource(IResourceHandleUtils* , ResourceHandle_t);
	/* ../public/resourcesystem/resourcehandle.h:39 */
	virtual void ResourceReferenceLeakTracking_AddRef(IResourceHandleUtils* , ResourceHandle_t, ResourceLeakTrackingGroup_t, uintp);
	/* ../public/resourcesystem/resourcehandle.h:40 */
	virtual void ResourceReferenceLeakTracking_Release(IResourceHandleUtils* , ResourceHandle_t, ResourceLeakTrackingGroup_t, uintp);
	/* ../public/resourcesystem/resourcehandle.h:41 */
	virtual void ResourceReferenceLeakTracking_ReportReferences(IResourceHandleUtils* , ResourceHandle_t);
	/* ../public/resourcesystem/resourcehandle.h:43 */
	virtual ResourceStatus_t GetResourceStatus(IResourceHandleUtils* , ResourceHandle_t);
	/* ../public/resourcesystem/resourcehandle.h:44 */
	virtual ResourceType_t GetResourceHandleType(IResourceHandleUtils* , ResourceHandle_t);
	void IResourceHandleUtils(class IResourceHandleUtils *, class IResourceHandleUtils &); /* linkage=_ZN20IResourceHandleUtilsC4EOS_ */
	void IResourceHandleUtils(class IResourceHandleUtils *, const class IResourceHandleUtils  &); /* linkage=_ZN20IResourceHandleUtilsC4ERKS_ */
	void IResourceHandleUtils(class IResourceHandleUtils *); /* linkage=_ZN20IResourceHandleUtilsC4Ev */
	void ~IResourceHandleUtils(class IResourceHandleUtils *); /* linkage=_ZN20IResourceHandleUtilsD4Ev */
	virtual ResourceHandle_t FindOrRegisterResourceByName(class IResourceHandleUtils *, const class CResourceName  &, bool); /* linkage=_ZN20IResourceHandleUtils28FindOrRegisterResourceByNameERK13CResourceNameb */
	virtual ResourceHandle_t FindResourceById(class IResourceHandleUtils *, class ResourceId_t, ResourceType_t); /* linkage=_ZN20IResourceHandleUtils16FindResourceByIdE12ResourceId_ty */
	virtual void DeleteResource(class IResourceHandleUtils *, ResourceHandle_t); /* linkage=_ZN20IResourceHandleUtils14DeleteResourceEPK21ResourceBindingBase_t */
	virtual void ResourceReferenceLeakTracking_AddRef(class IResourceHandleUtils *, ResourceHandle_t, enum ResourceLeakTrackingGroup_t, uintp); /* linkage=_ZN20IResourceHandleUtils36ResourceReferenceLeakTracking_AddRefEPK21ResourceBindingBase_t27ResourceLeakTrackingGroup_ty */
	virtual void ResourceReferenceLeakTracking_Release(class IResourceHandleUtils *, ResourceHandle_t, enum ResourceLeakTrackingGroup_t, uintp); /* linkage=_ZN20IResourceHandleUtils37ResourceReferenceLeakTracking_ReleaseEPK21ResourceBindingBase_t27ResourceLeakTrackingGroup_ty */
	virtual void ResourceReferenceLeakTracking_ReportReferences(class IResourceHandleUtils *, ResourceHandle_t); /* linkage=_ZN20IResourceHandleUtils46ResourceReferenceLeakTracking_ReportReferencesEPK21ResourceBindingBase_t */
	virtual enum ResourceStatus_t GetResourceStatus(class IResourceHandleUtils *, ResourceHandle_t); /* linkage=_ZN20IResourceHandleUtils17GetResourceStatusEPK21ResourceBindingBase_t */
	virtual ResourceType_t GetResourceHandleType(class IResourceHandleUtils *, ResourceHandle_t); /* linkage=_ZN20IResourceHandleUtils21GetResourceHandleTypeEPK21ResourceBindingBase_t */
};

// <00A19970> ../public/resourcesystem/resourcehandle.h:65
inline int ResourceAddRef(ResourceHandle_t hResource, uintp nLeakTrackingPairingID, ResourceLeakTrackingGroup_t leakTrackingGroup)
{
} /* size: 0 */

// <022C19DE> ../public/resourcesystem/resourcehandle.h:74
// variables: 4
inline int ResourceRelease(ResourceHandle_t hResource, uintp nLeakTrackingPairingID, ResourceLeakTrackingGroup_t leakTrackingGroup)
{
	const char   __FUNCTION__; // 19234
	int nRefCount; // 84
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 76
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 83
	}
} /* size: 0, variables: 2 */

// <00345865> ../public/resourcesystem/resourcehandle.h:74
// variables: 4
inline int ResourceRelease(ResourceHandle_t hResource, uintp nLeakTrackingPairingID, ResourceLeakTrackingGroup_t leakTrackingGroup)
{
	const char   __FUNCTION__; // 55803
	int nRefCount; // 84
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 76
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 83
	}
} /* size: 0, variables: 2 */

// <003288FE> ../public/resourcesystem/resourcehandle.h:74
// variables: 4
inline int ResourceRelease(ResourceHandle_t hResource, uintp nLeakTrackingPairingID, ResourceLeakTrackingGroup_t leakTrackingGroup)
{
	const char   __FUNCTION__; // 38337
	int nRefCount; // 84
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 76
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 83
	}
} /* size: 0, variables: 2 */

// <001ACC75> ../public/resourcesystem/resourcehandle.h:93
// variables: 4
inline int ResourceReleaseNoDelete(ResourceHandle_t hResource, uintp nLeakTrackingPairingID, ResourceLeakTrackingGroup_t leakTrackingGroup)
{
	const char   __FUNCTION__; // 2842
	int nRefCount; // 102
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 95
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 103
	}
} /* size: 0, variables: 2 */

// <001A7FB4> ../public/resourcesystem/resourcehandle.h:93
// variables: 4
inline int ResourceReleaseNoDelete(ResourceHandle_t hResource, uintp nLeakTrackingPairingID, ResourceLeakTrackingGroup_t leakTrackingGroup)
{
	const char   __FUNCTION__; // 32217
	int nRefCount; // 102
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 95
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 103
	}
} /* size: 0, variables: 2 */

// <02383858> ../public/resourcesystem/resourcehandle.h:107
inline int ResourceRefCount(ResourceHandle_t hResource)
{
} /* size: 0 */

// <027E0498> ../public/resourcesystem/resourcehandle.h:112
inline bool ResourceIsLoaded(ResourceHandle_t hResource)
{
} /* size: 0 */

// <00F42200> ../public/resourcesystem/resourcehandle.h:117
inline bool ResourceIsError(ResourceHandle_t hResource)
{
} /* size: 0 */

// <00345842> ../public/resourcesystem/resourcehandle.h:122
inline bool ResourceIsProcedural(ResourceHandle_t hResource)
{
} /* size: 0 */

// <000C1572> ../public/resourcesystem/resourcehandle.h:127
inline bool ResourceIsAnonymous(ResourceHandle_t hResource)
{
} /* size: 0 */

// <0015D0A5> ../public/resourcesystem/resourcehandle.h:152
void ResourceGetName(ResourceNameHandle_t hResourceName, CResourceName* pTarget)
{
} /* size: 0 */

// <000FDCD7> ../public/resourcesystem/resourcehandle.h:152
// function call: 1
void ResourceGetName(ResourceNameHandle_t hResourceName, CResourceName* pTarget)
{
	CUtlSymbolLarge::String(); // 160
} /* size: 48, inline expansions: 1 (10 bytes) */

// <001ACC4A> ../public/resourcesystem/resourcehandle.h:152
inline void ResourceGetName(ResourceNameHandle_t hResourceName, CResourceName* pTarget)
{
} /* size: 0 */

// <000C151A> ../public/resourcesystem/resourcehandle.h:176
inline void ResourceGetName(ResourceHandle_t hResource, CResourceName* pTarget)
{
} /* size: 0 */

// <06E2776A> ../../public/resourcesystem/resourcehandle.h:191
void CResourceNameGetter::~CResourceNameGetter()
{
} /* size: 0 */

// <06E2774E> ../../public/resourcesystem/resourcehandle.h:191
inline void CResourceNameGetter::~CResourceNameGetter()
{
} /* size: 0 */

// <0008FEAB> ../public/resourcesystem/resourcehandle.h:191
// member functions: 13
// member variable: 1
// class size: 224
class CResourceNameGetter : public CResourceName {
public:
	/* class CResourceName <ancestor>; */ /* 0 224 */
	/* ../public/resourcesystem/resourcehandle.h:194 */
	void CResourceNameGetter(CResourceNameGetter* , ResourceHandle_t);
	/* ../public/resourcesystem/resourcehandle.h:199 */
	void CResourceNameGetter(CResourceNameGetter* , ResourceNameHandle_t);
	void ~CResourceNameGetter(CResourceNameGetter* );
	void CResourceNameGetter(class CResourceNameGetter *, ResourceHandle_t); /* linkage=_ZN19CResourceNameGetterC4EPK21ResourceBindingBase_t */
	void CResourceNameGetter(class CResourceNameGetter *, ResourceNameHandle_t); /* linkage=_ZN19CResourceNameGetterC4EPK18ResourceNameInfo_t */
	void ~CResourceNameGetter(class CResourceNameGetter *); /* linkage=_ZN19CResourceNameGetterD4Ev */
	void CResourceNameGetter<InfoForResourceTypeCTextureBase>(class CResourceNameGetter *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN19CResourceNameGetterC4I31InfoForResourceTypeCTextureBaseEERK11CWeakHandleIT_E */
	void CResourceNameGetter<InfoForResourceTypeCModel>(class CResourceNameGetter *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN19CResourceNameGetterC4I25InfoForResourceTypeCModelEERK11CWeakHandleIT_E */
	void CResourceNameGetter<InfoForResourceTypeCAnimationGroup>(class CResourceNameGetter *, const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZN19CResourceNameGetterC4I34InfoForResourceTypeCAnimationGroupEERK11CWeakHandleIT_E */
	void CResourceNameGetter<InfoForResourceTypeIMaterial2>(class CResourceNameGetter *, const class CWeakHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZN19CResourceNameGetterC4I29InfoForResourceTypeIMaterial2EERK11CWeakHandleIT_E */
	void CResourceNameGetter<InfoForResourceTypeCGenericDataResource>(class CResourceNameGetter *, const class CWeakHandle<InfoForResourceTypeCGenericDataResource>  &); /* linkage=_ZN19CResourceNameGetterC4I39InfoForResourceTypeCGenericDataResourceEERK11CWeakHandleIT_E */
	void CResourceNameGetter<InfoForResourceTypeCSequenceGroupData>(class CResourceNameGetter *, const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  &); /* linkage=_ZN19CResourceNameGetterC4I37InfoForResourceTypeCSequenceGroupDataEERK13CStrongHandleIT_E */
	void CResourceNameGetter<InfoForResourceTypeCAnimData>(class CResourceNameGetter *, const class CWeakHandle<InfoForResourceTypeCAnimData>  &); /* linkage=_ZN19CResourceNameGetterC4I28InfoForResourceTypeCAnimDataEERK11CWeakHandleIT_E */
};

// <000363F2> ../public/resourcesystem/resourcehandle.h:191
// member functions: 15
// member variable: 1
// class size: 224
class CResourceNameGetter : public CResourceName {
public:
	/* class CResourceName <ancestor>; */ /* 0 224 */
	/* ../public/resourcesystem/resourcehandle.h:194 */
	void CResourceNameGetter(CResourceNameGetter* , ResourceHandle_t);
	/* ../public/resourcesystem/resourcehandle.h:199 */
	void CResourceNameGetter(CResourceNameGetter* , ResourceNameHandle_t);
	/* ../public/resourcesystem/resourcehandle.h:204 */
	void CResourceNameGetter<InfoForResourceTypeCTextureBase>(CResourceNameGetter* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/resourcehandle.h:204 */
	void CResourceNameGetter<InfoForResourceTypeIMaterial2>(CResourceNameGetter* , const CWeakHandle<InfoForResourceTypeIMaterial2>& );
	void ~CResourceNameGetter(CResourceNameGetter* );
	void CResourceNameGetter(class CResourceNameGetter *, ResourceHandle_t); /* linkage=_ZN19CResourceNameGetterC4EPK21ResourceBindingBase_t */
	void CResourceNameGetter(class CResourceNameGetter *, ResourceNameHandle_t); /* linkage=_ZN19CResourceNameGetterC4EPK18ResourceNameInfo_t */
	void ~CResourceNameGetter(class CResourceNameGetter *); /* linkage=_ZN19CResourceNameGetterD4Ev */
	void CResourceNameGetter<InfoForResourceTypeCTextureBase>(class CResourceNameGetter *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN19CResourceNameGetterC4I31InfoForResourceTypeCTextureBaseEERK11CWeakHandleIT_E */
	void CResourceNameGetter<InfoForResourceTypeCModel>(class CResourceNameGetter *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN19CResourceNameGetterC4I25InfoForResourceTypeCModelEERK11CWeakHandleIT_E */
	void CResourceNameGetter<InfoForResourceTypeCAnimationGroup>(class CResourceNameGetter *, const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZN19CResourceNameGetterC4I34InfoForResourceTypeCAnimationGroupEERK11CWeakHandleIT_E */
	void CResourceNameGetter<InfoForResourceTypeIMaterial2>(class CResourceNameGetter *, const class CWeakHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZN19CResourceNameGetterC4I29InfoForResourceTypeIMaterial2EERK11CWeakHandleIT_E */
	void CResourceNameGetter<InfoForResourceTypeCGenericDataResource>(class CResourceNameGetter *, const class CWeakHandle<InfoForResourceTypeCGenericDataResource>  &); /* linkage=_ZN19CResourceNameGetterC4I39InfoForResourceTypeCGenericDataResourceEERK11CWeakHandleIT_E */
	void CResourceNameGetter<InfoForResourceTypeCSequenceGroupData>(class CResourceNameGetter *, const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  &); /* linkage=_ZN19CResourceNameGetterC4I37InfoForResourceTypeCSequenceGroupDataEERK13CStrongHandleIT_E */
	void CResourceNameGetter<InfoForResourceTypeCAnimData>(class CResourceNameGetter *, const class CWeakHandle<InfoForResourceTypeCAnimData>  &); /* linkage=_ZN19CResourceNameGetterC4I28InfoForResourceTypeCAnimDataEERK11CWeakHandleIT_E */
};

// <067141C5> ../public/resourcesystem/resourcehandle.h:194
void CResourceNameGetter::CResourceNameGetter(ResourceHandle_t hResource)
{
} /* size: 0 */

// <067141A0> ../public/resourcesystem/resourcehandle.h:194
inline void CResourceNameGetter::CResourceNameGetter(ResourceHandle_t hResource)
{
} /* size: 0 */

// <06E2A4F9> ../../public/resourcesystem/resourcehandle.h:199
void CResourceNameGetter::CResourceNameGetter(ResourceNameHandle_t hResourceName)
{
} /* size: 0 */

// <06E2A4D4> ../../public/resourcesystem/resourcehandle.h:199
inline void CResourceNameGetter::CResourceNameGetter(ResourceNameHandle_t hResourceName)
{
} /* size: 0 */

// <04E3E0D8> ../public/resourcesystem/resourcehandle.h:204
void CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCAnimationGroup>(const CWeakHandle<InfoForResourceTypeCAnimationGroup>& resourceHandle)
{
} /* size: 0 */

// <04E3E0AC> ../public/resourcesystem/resourcehandle.h:204
inline void CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCAnimationGroup>(const CWeakHandle<InfoForResourceTypeCAnimationGroup>& resourceHandle)
{
} /* size: 0 */

// <021D03F9> ../public/resourcesystem/resourcehandle.h:204
void CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCGenericDataResource>(const CWeakHandle<InfoForResourceTypeCGenericDataResource>& resourceHandle)
{
} /* size: 0 */

// <021D03CD> ../public/resourcesystem/resourcehandle.h:204
inline void CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCGenericDataResource>(const CWeakHandle<InfoForResourceTypeCGenericDataResource>& resourceHandle)
{
} /* size: 0 */

// <00C82DA3> ../public/resourcesystem/resourcehandle.h:204
void CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCAnimData>(const CWeakHandle<InfoForResourceTypeCAnimData>& resourceHandle)
{
} /* size: 0 */

// <00C82D77> ../public/resourcesystem/resourcehandle.h:204
inline void CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCAnimData>(const CWeakHandle<InfoForResourceTypeCAnimData>& resourceHandle)
{
} /* size: 0 */

// <00C30520> ../public/resourcesystem/resourcehandle.h:204
void CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle)
{
} /* size: 0 */

// <00C304F4> ../public/resourcesystem/resourcehandle.h:204
inline void CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle)
{
} /* size: 0 */

// <003972CC> ../public/resourcesystem/resourcehandle.h:204
// function calls: 4
void CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle)
{
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 488
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
			CResourceName* pOutName);  // 206
} /* size: 90, inline expansions: 4 (135 bytes) */

// <0016E467> ../public/resourcesystem/resourcehandle.h:204
void CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& resourceHandle)
{
} /* size: 0 */

// <0016E43B> ../public/resourcesystem/resourcehandle.h:204
inline void CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& resourceHandle)
{
} /* size: 0 */

// <00092D39> ../public/resourcesystem/resourcehandle.h:204
void CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& resourceHandle)
{
} /* size: 0 */

// <00092D0D> ../public/resourcesystem/resourcehandle.h:204
inline void CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& resourceHandle)
{
} /* size: 0 */

// <00C8279C> ../public/resourcesystem/resourcehandle.h:209
void CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCSequenceGroupData>(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>& resourceHandle)
{
} /* size: 0 */

// <00C82770> ../public/resourcesystem/resourcehandle.h:209
inline void CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCSequenceGroupData>(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>& resourceHandle)
{
} /* size: 0 */

