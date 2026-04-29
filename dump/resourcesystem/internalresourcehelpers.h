
//
// resourcesystem/internalresourcehelpers.h
//
//	referenced by: libengine2.so
//
//	functions: 14
//	class: 1
//

// <02341C4D> resourcesystem/internalresourcehelpers.h:16
// member functions: 20
// member variables: 8
// vtable entries: 9
// class size: 56
class CRD_RegisterResourceDataUtils : public IRD_RegisterResourceDataUtils {
public:
	/* class IRD_RegisterResourceDataUtils <ancestor>; */ /* 0 8 */
	/* resourcesystem/internalresourcehelpers.h:19 */
	void CRD_RegisterResourceDataUtils(CRD_RegisterResourceDataUtils* , ResourceBindingBase_t* , IAsyncResourceDataRequest* , IAsyncProcessedDataResult* );
	/* resourcesystem/internalresourcehelpers.h:30 */
	virtual void SetDataRegistrationFailed(CRD_RegisterResourceDataUtils* );
	/* resourcesystem/internalresourcehelpers.h:35 */
	virtual bool IsReloading(CRD_RegisterResourceDataUtils* );
	/* resourcesystem/internalresourcehelpers.h:40 */
	virtual void SetFinalResourceData(CRD_RegisterResourceDataUtils* , void* );
	/* resourcesystem/internalresourcehelpers.h:46 */
	virtual bool GetDataRegistrationFailed(CRD_RegisterResourceDataUtils* );
	/* resourcesystem/internalresourcehelpers.h:51 */
	virtual void* GetFinalResourceData(CRD_RegisterResourceDataUtils* );
	/* resourcesystem/internalresourcehelpers.h:56 */
	virtual void KeepResultBuffer(CRD_RegisterResourceDataUtils* , IMemoryMappedFile** );
	/* resourcesystem/internalresourcehelpers.h:68 */
	virtual size_t GetResultBufferSize(CRD_RegisterResourceDataUtils* );
	/* resourcesystem/internalresourcehelpers.h:73 */
	virtual IAsyncProcessedDataResult* GetAsyncProcessedResult(CRD_RegisterResourceDataUtils* );
	/* resourcesystem/resourcesystem.cpp:3236 */
	virtual bool RegisterResourceExternalReference(CRD_RegisterResourceDataUtils* , ResourceHandle_t, const CResourceName& , CStrongHandleVoid* );
	void * m_pFinalResourceData; /* 8 8 */
	bool m_bDataRegistrationFailed; /* 16 1 */
	bool m_bIsReloading; /* 17 1 */
	const size_t m_nResultBufferSize; /* 24 8 */
	const class IAsyncResourceDataRequest * m_pDataRequest; /* 32 8 */
	const class IAsyncProcessedDataResult * m_pAsyncProcessResult; /* 40 8 */
	const class ResourceBindingBase_t * m_pBinding; /* 48 8 */
	/* <21d658c> resourcesystem/internalresourcehelpers.h:73 */
	virtual class IAsyncProcessedDataResult * GetAsyncProcessedResult(class CRD_RegisterResourceDataUtils *); /* linkage=_ZN29CRD_RegisterResourceDataUtils23GetAsyncProcessedResultEv */
	/* <23f9d82> resourcesystem/internalresourcehelpers.h:40 */
	virtual void SetFinalResourceData(class CRD_RegisterResourceDataUtils *, void *); /* linkage=_ZN29CRD_RegisterResourceDataUtils20SetFinalResourceDataEPv */
	/* <23f9d59> resourcesystem/internalresourcehelpers.h:30 */
	virtual void SetDataRegistrationFailed(class CRD_RegisterResourceDataUtils *); /* linkage=_ZN29CRD_RegisterResourceDataUtils25SetDataRegistrationFailedEv */
	/* <238e8c3> resourcesystem/resourcesystem.cpp:3236 */
	virtual bool RegisterResourceExternalReference(class CRD_RegisterResourceDataUtils *, ResourceHandle_t, const class CResourceName  &, class CStrongHandleVoid *); /* linkage=_ZN29CRD_RegisterResourceDataUtils33RegisterResourceExternalReferenceEPK21ResourceBindingBase_tRK13CResourceNameP17CStrongHandleVoid */
	virtual size_t GetResultBufferSize(class CRD_RegisterResourceDataUtils *); /* linkage=_ZN29CRD_RegisterResourceDataUtils19GetResultBufferSizeEv */
	virtual void KeepResultBuffer(class CRD_RegisterResourceDataUtils *, class IMemoryMappedFile * *); /* linkage=_ZN29CRD_RegisterResourceDataUtils16KeepResultBufferEPP17IMemoryMappedFile */
	virtual void * GetFinalResourceData(class CRD_RegisterResourceDataUtils *); /* linkage=_ZN29CRD_RegisterResourceDataUtils20GetFinalResourceDataEv */
	virtual bool GetDataRegistrationFailed(class CRD_RegisterResourceDataUtils *); /* linkage=_ZN29CRD_RegisterResourceDataUtils25GetDataRegistrationFailedEv */
	virtual bool IsReloading(class CRD_RegisterResourceDataUtils *); /* linkage=_ZN29CRD_RegisterResourceDataUtils11IsReloadingEv */
	void CRD_RegisterResourceDataUtils(class CRD_RegisterResourceDataUtils *, class ResourceBindingBase_t *, class IAsyncResourceDataRequest *, class IAsyncProcessedDataResult *); /* linkage=_ZN29CRD_RegisterResourceDataUtilsC4EP21ResourceBindingBase_tP25IAsyncResourceDataRequestP25IAsyncProcessedDataResult */
};

// <022C0CD5> resourcesystem/internalresourcehelpers.h:19
void CRD_RegisterResourceDataUtils::CRD_RegisterResourceDataUtils(ResourceBindingBase_t* pBinding, IAsyncResourceDataRequest* pDataRequest, IAsyncProcessedDataResult* pAsyncResult)
{
} /* size: 0 */

// <022C0C98> resourcesystem/internalresourcehelpers.h:19
inline void CRD_RegisterResourceDataUtils::CRD_RegisterResourceDataUtils(ResourceBindingBase_t* pBinding, IAsyncResourceDataRequest* pDataRequest, IAsyncProcessedDataResult* pAsyncResult)
{
} /* size: 0 */

// <023F9D59> resourcesystem/internalresourcehelpers.h:30
void CRD_RegisterResourceDataUtils::SetDataRegistrationFailed()
{
} /* size: 9 */

// <023F8D52> resourcesystem/internalresourcehelpers.h:30
inline void CRD_RegisterResourceDataUtils::SetDataRegistrationFailed()
{
} /* size: 0 */

// <02382967> resourcesystem/internalresourcehelpers.h:35
void CRD_RegisterResourceDataUtils::IsReloading()
{
} /* size: 9 */

// <023F9D82> resourcesystem/internalresourcehelpers.h:40
void CRD_RegisterResourceDataUtils::SetFinalResourceData(void* pData)
{
} /* size: 16 */

// <023F8D2D> resourcesystem/internalresourcehelpers.h:40
inline void CRD_RegisterResourceDataUtils::SetFinalResourceData(void* pData)
{
} /* size: 0 */

// <02382914> resourcesystem/internalresourcehelpers.h:46
void CRD_RegisterResourceDataUtils::GetDataRegistrationFailed()
{
} /* size: 9 */

// <023828E1> resourcesystem/internalresourcehelpers.h:51
void* CRD_RegisterResourceDataUtils::GetFinalResourceData()
{
} /* size: 9 */

// <02382885> resourcesystem/internalresourcehelpers.h:56
void CRD_RegisterResourceDataUtils::KeepResultBuffer(IMemoryMappedFile** ppMemoryMappedFile)
{
} /* size: 25 */

// <02382857> resourcesystem/internalresourcehelpers.h:68
void CRD_RegisterResourceDataUtils::GetResultBufferSize()
{
} /* size: 9 */

// <02382829> resourcesystem/internalresourcehelpers.h:73
void CRD_RegisterResourceDataUtils::GetAsyncProcessedResult()
{
} /* size: 9 */

// <021D551B> resourcesystem/internalresourcehelpers.h:73
inline void CRD_RegisterResourceDataUtils::GetAsyncProcessedResult()
{
} /* size: 0 */

// <022C0B96> resourcesystem/internalresourcehelpers.h:92
inline ResourceDeallocationType_t ComputeDeallocationType(ResourceHandle_t hResource)
{
} /* size: 0 */

