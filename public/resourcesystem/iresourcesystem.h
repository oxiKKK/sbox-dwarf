
//
// public/resourcesystem/iresourcesystem.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 152
//	classes: 12
//	structs: 3
//

// <0670ED17> ../public/resourcesystem/iresourcesystem.h:29
unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeManager:: make_unique<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>(void)
{
} /* size: 0 */

// <00E72AA7> ../public/resourcesystem/iresourcesystem.h:29
unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> > make_unique<CKeyValues3Context>(void)
{
} /* size: 0 */

// <0040A12F> ../public/resourcesystem/iresourcesystem.h:29
// function calls: 32
unique_ptr<CRenderMeshManager::AsyncProcessDataResult, std::default_delete<CRenderMeshManager::AsyncProcessDataResult> > make_unique<CRenderMeshManager::AsyncProcessDataResult>(void)
{
	IAsyncProcessedDataResult::IAsyncProcessedDataResult(); // 507
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::CUtlMemory(
			BufferInfo_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::CUtlMemoryFixedGrowable_Base(
					BufferInfo_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<1, RuntimeBuffersInfo_t::BufferInfo_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>::CUtlVectorFixedGrowable(
				int growSize);  // 776
	{
	}
	AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<1, RuntimeBuffersInfo_t::BufferInfo_t>::AlignedByteArray_t(); // 228
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::CUtlMemory(
			BufferInfo_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::CUtlMemoryFixedGrowable_Base(
					BufferInfo_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>::CUtlVectorFixedGrowable(
				int growSize);  // 776
	RuntimeBuffersInfo_t::RuntimeBuffersInfo_t(); // 507
	AsyncProcessDataResult::AsyncProcessDataResult(); // 31
	_Head_base<1, std::default_delete<CRenderMeshManager::AsyncProcessDataResult>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CRenderMeshManager::AsyncProcessDataResult> >::_Tuple_impl(); // 303
	_Head_base<0, CRenderMeshManager::AsyncProcessDataResult::_Head_base(); // 303
	_Tuple_impl<0, CRenderMeshManager::AsyncProcessDataResult::_Tuple_impl(); // 966
	tuple<CRenderMeshManager::AsyncProcessDataResult::tuple(); // 169
	_M_ptr(const __uniq_ptr_impl<CRenderMeshManager::AsyncProcessDataResult, std::default_delete<CRenderMeshManager::AsyncProcessDat this); // 169
	__uniq_ptr_impl(const __uniq_ptr_impl<CRenderMeshManager::AsyncProcessDataResult, std::default_delete<CRenderMeshManager::AsyncProcessDat this,
			pointer __p);  // 234
	__uniq_ptr_data(const __uniq_ptr_data<CRenderMeshManager::AsyncProcessDataResult, std::default_delete<CRenderMeshManager::AsyncProcessDat this,
			pointer);  // 311
	unique_ptr<>(const unique_ptr<CRenderMeshManager::AsyncProcessDataResult, std::default_delete<CRenderMeshManager::AsyncProcessDataResu this,
			pointer __p);  // 31
} /* size: 255, inline expansions: 32 (858 bytes) */

// <0016ECDE> ../public/resourcesystem/iresourcesystem.h:29
// function calls: 46
unique_ptr<CModelTypeManager::AsyncProcessDataResults, std::default_delete<CModelTypeManager::AsyncProcessDataResults> > make_unique<CModelTypeManager::AsyncProcessDataResults>(void)
{
	IAsyncProcessedDataResult::IAsyncProcessedDataResult(); // 71
	_Head_base<1, std::default_delete<IAsyncProcessedDataResult>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl(); // 303
	_Head_base<0, IAsyncProcessedDataResult::_Head_base(); // 303
	_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl(); // 966
	tuple<IAsyncProcessedDataResult::tuple(); // 167
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl(); // 232
	__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data(); // 298
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr<>(); // 71
	{
	}
	AlignedByteArrayExplicit_t<4, CModelTypeManager::AsyncProcessDataResults::MeshData::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CModelTypeManager::AsyncProcessDataResults::MeshData::AlignedByteArray_t(); // 228
	CUtlMemory<CModelTypeManager::AsyncProcessDataResults::MeshData::CUtlMemory(
			MeshData** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CModelTypeManager::AsyncProcessDataResults::MeshData::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CModelTypeManager::AsyncProcessDataResults::MeshData::CUtlMemoryFixedGrowable_Base(
					MeshData** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<4, CModelTypeManager::AsyncProcessDataResults::MeshData::Base(); // 231
	CUtlMemoryFixedGrowable<CModelTypeManager::AsyncProcessDataResults::MeshData::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CModelTypeManager::AsyncProcessDataResults::MeshData::CUtlVectorFixedGrowable(
				int growSize);  // 71
	_Head_base<0, CModelTypeManager::AsyncProcessDataResults::AnimData::_Head_base(); // 303
	_Head_base<1, std::default_delete<CModelTypeManager::AsyncProcessDataResults::AnimData>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CModelTypeManager::AsyncProcessDataResults::AnimData> >::_Tuple_impl(); // 303
	_Tuple_impl<0, CModelTypeManager::AsyncProcessDataResults::AnimData::_Tuple_impl(); // 966
	tuple<CModelTypeManager::AsyncProcessDataResults::AnimData::tuple(); // 167
	__uniq_ptr_impl(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncP this); // 232
	__uniq_ptr_data(const __uniq_ptr_data<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncP this); // 298
	unique_ptr<>(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncProces this); // 71
	_Head_base<1, std::default_delete<CModelTypeManager::AsyncProcessDataResults::PhysData>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CModelTypeManager::AsyncProcessDataResults::PhysData> >::_Tuple_impl(); // 303
	_Head_base<0, CModelTypeManager::AsyncProcessDataResults::PhysData::_Head_base(); // 303
	_Tuple_impl<0, CModelTypeManager::AsyncProcessDataResults::PhysData::_Tuple_impl(); // 966
	tuple<CModelTypeManager::AsyncProcessDataResults::PhysData::tuple(); // 167
	__uniq_ptr_impl(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncP this); // 232
	__uniq_ptr_data(const __uniq_ptr_data<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncP this); // 298
	unique_ptr<>(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncProces this); // 71
	CUtlString::CUtlString(); // 71
	AsyncProcessDataResults::AsyncProcessDataResults(); // 31
	_Head_base<1, std::default_delete<CModelTypeManager::AsyncProcessDataResults>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CModelTypeManager::AsyncProcessDataResults> >::_Tuple_impl(); // 303
	_Head_base<0, CModelTypeManager::AsyncProcessDataResults::_Head_base(); // 303
	_Tuple_impl<0, CModelTypeManager::AsyncProcessDataResults::_Tuple_impl(); // 966
	tuple<CModelTypeManager::AsyncProcessDataResults::tuple(); // 169
	_M_ptr(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults, std::default_delete<CModelTypeManager::AsyncProcessData this); // 169
	__uniq_ptr_impl(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults, std::default_delete<CModelTypeManager::AsyncProcessData this,
			pointer __p);  // 234
	__uniq_ptr_data(const __uniq_ptr_data<CModelTypeManager::AsyncProcessDataResults, std::default_delete<CModelTypeManager::AsyncProcessData this,
			pointer);  // 311
	unique_ptr<>(const unique_ptr<CModelTypeManager::AsyncProcessDataResults, std::default_delete<CModelTypeManager::AsyncProcessDataResul this,
			pointer __p);  // 31
} /* size: 175, inline expansions: 46 (320 bytes) */

// <0016EA87> ../public/resourcesystem/iresourcesystem.h:29
unique_ptr<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV3BlockHelpe make_unique<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> >(void)
{
} /* size: 0 */

// <0016E924> ../public/resourcesystem/iresourcesystem.h:29
unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncProcessDataR make_unique<CModelTypeManager::AsyncProcessDataResults::AnimData>(void)
{
} /* size: 0 */

// <0016E628> ../public/resourcesystem/iresourcesystem.h:29
unique_ptr<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncProcessDataR make_unique<CModelTypeManager::AsyncProcessDataResults::PhysData>(void)
{
} /* size: 0 */

// <02382B89> ../public/resourcesystem/iresourcesystem.h:80
void IResourceDeallocatorUtils::IResourceDeallocatorUtils()
{
} /* size: 0 */

// <02382B6D> ../public/resourcesystem/iresourcesystem.h:80
inline void IResourceDeallocatorUtils::IResourceDeallocatorUtils()
{
} /* size: 0 */

// <009D7C4B> ../public/resourcesystem/iresourcesystem.h:80
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class IResourceDeallocatorUtils {
	void ~IResourceDeallocatorUtils(IResourceDeallocatorUtils* );
	void IResourceDeallocatorUtils(IResourceDeallocatorUtils* , IResourceDeallocatorUtils& );
	void IResourceDeallocatorUtils(IResourceDeallocatorUtils* , const IResourceDeallocatorUtils& );
	void IResourceDeallocatorUtils(IResourceDeallocatorUtils* );
	int ()(void) * * _vptr.IResourceDeallocatorUtils; /* 0 8 */
	/* ../public/resourcesystem/iresourcesystem.h:84 */
	virtual void ReleaseControl(IResourceDeallocatorUtils* , const void* );
	/* ../public/resourcesystem/iresourcesystem.h:85 */
	virtual ResourceDeallocationType_t GetDeallocationType(const IResourceDeallocatorUtils* );
	/* ../public/resourcesystem/iresourcesystem.h:86 */
	virtual ResourceHandle_t GetResourceHandle(const IResourceDeallocatorUtils* );
	/* ../public/resourcesystem/iresourcesystem.h:91 */
	virtual bool IsQueuedReloadDeallocate(const IResourceDeallocatorUtils* );
	/* ../public/resourcesystem/iresourcesystem.h:93 */
	virtual void* GetReleasedData(const IResourceDeallocatorUtils* );
	void ~IResourceDeallocatorUtils(class IResourceDeallocatorUtils *); /* linkage=_ZN25IResourceDeallocatorUtilsD4Ev */
	void IResourceDeallocatorUtils(class IResourceDeallocatorUtils *, class IResourceDeallocatorUtils &); /* linkage=_ZN25IResourceDeallocatorUtilsC4EOS_ */
	void IResourceDeallocatorUtils(class IResourceDeallocatorUtils *, const class IResourceDeallocatorUtils  &); /* linkage=_ZN25IResourceDeallocatorUtilsC4ERKS_ */
	void IResourceDeallocatorUtils(class IResourceDeallocatorUtils *); /* linkage=_ZN25IResourceDeallocatorUtilsC4Ev */
	virtual void ReleaseControl(class IResourceDeallocatorUtils *, const void  *); /* linkage=_ZN25IResourceDeallocatorUtils14ReleaseControlEPKv */
	virtual enum ResourceDeallocationType_t GetDeallocationType(const class IResourceDeallocatorUtils  *); /* linkage=_ZNK25IResourceDeallocatorUtils19GetDeallocationTypeEv */
	virtual ResourceHandle_t GetResourceHandle(const class IResourceDeallocatorUtils  *); /* linkage=_ZNK25IResourceDeallocatorUtils17GetResourceHandleEv */
	virtual bool IsQueuedReloadDeallocate(const class IResourceDeallocatorUtils  *); /* linkage=_ZNK25IResourceDeallocatorUtils24IsQueuedReloadDeallocateEv */
	virtual void * GetReleasedData(const class IResourceDeallocatorUtils  *); /* linkage=_ZNK25IResourceDeallocatorUtils15GetReleasedDataEv */
};

// <06711C6B> ../public/resourcesystem/iresourcesystem.h:99
void IAsyncProcessedDataResult::IAsyncProcessedDataResult()
{
} /* size: 0 */

// <06711C4F> ../public/resourcesystem/iresourcesystem.h:99
inline void IAsyncProcessedDataResult::IAsyncProcessedDataResult()
{
} /* size: 0 */

// <0091D1EC> ../public/resourcesystem/iresourcesystem.h:99
// member functions: 6
// member variable: 1
// class size: 8
class IAsyncProcessedDataResult {
	void IAsyncProcessedDataResult(IAsyncProcessedDataResult* , const IAsyncProcessedDataResult& );
	void IAsyncProcessedDataResult(IAsyncProcessedDataResult* );
	int ()(void) * * _vptr.IAsyncProcessedDataResult; /* 0 8 */
	/* ../public/resourcesystem/iresourcesystem.h:105 */
	virtual void ~IAsyncProcessedDataResult(IAsyncProcessedDataResult* );
	void IAsyncProcessedDataResult(class IAsyncProcessedDataResult *, const class IAsyncProcessedDataResult  &); /* linkage=_ZN25IAsyncProcessedDataResultC4ERKS_ */
	void IAsyncProcessedDataResult(class IAsyncProcessedDataResult *); /* linkage=_ZN25IAsyncProcessedDataResultC4Ev */
	virtual void ~IAsyncProcessedDataResult(class IAsyncProcessedDataResult *); /* linkage=_ZN25IAsyncProcessedDataResultD4Ev */
};

// <002BFDB5> ../public/resourcesystem/iresourcesystem.h:99
// member functions: 4
// member variable: 1
// class size: 8
class IAsyncProcessedDataResult {
	int ()(void) * * _vptr.IAsyncProcessedDataResult; /* 0 8 */
	/* ../public/resourcesystem/iresourcesystem.h:105 */
	virtual void ~IAsyncProcessedDataResult(IAsyncProcessedDataResult* );
	void IAsyncProcessedDataResult(class IAsyncProcessedDataResult *, const class IAsyncProcessedDataResult  &); /* linkage=_ZN25IAsyncProcessedDataResultC4ERKS_ */
	void IAsyncProcessedDataResult(class IAsyncProcessedDataResult *); /* linkage=_ZN25IAsyncProcessedDataResultC4Ev */
	virtual void ~IAsyncProcessedDataResult(class IAsyncProcessedDataResult *); /* linkage=_ZN25IAsyncProcessedDataResultD4Ev */
};

// <06714148> ../public/resourcesystem/iresourcesystem.h:105
void IAsyncProcessedDataResult::~IAsyncProcessedDataResult()
{
} /* size: 0 */

// <06714118> ../public/resourcesystem/iresourcesystem.h:105
inline void IAsyncProcessedDataResult::~IAsyncProcessedDataResult()
{
} /* size: 0 */

// <022C0D18> ../public/resourcesystem/iresourcesystem.h:110
void IRD_RegisterResourceDataUtils::IRD_RegisterResourceDataUtils()
{
} /* size: 0 */

// <022C0CFB> ../public/resourcesystem/iresourcesystem.h:110
inline void IRD_RegisterResourceDataUtils::IRD_RegisterResourceDataUtils()
{
} /* size: 0 */

// <021C69DB> ../public/resourcesystem/iresourcesystem.h:110
// member functions: 26
// member variable: 1
// vtable entries: 9
// class size: 8
class IRD_RegisterResourceDataUtils {
	void ~IRD_RegisterResourceDataUtils(IRD_RegisterResourceDataUtils* );
	void IRD_RegisterResourceDataUtils(IRD_RegisterResourceDataUtils* , IRD_RegisterResourceDataUtils& );
	void IRD_RegisterResourceDataUtils(IRD_RegisterResourceDataUtils* , const IRD_RegisterResourceDataUtils& );
	void IRD_RegisterResourceDataUtils(IRD_RegisterResourceDataUtils* );
	int ()(void) * * _vptr.IRD_RegisterResourceDataUtils; /* 0 8 */
	/* ../public/resourcesystem/iresourcesystem.h:113 */
	virtual void SetDataRegistrationFailed(IRD_RegisterResourceDataUtils* );
	/* ../public/resourcesystem/iresourcesystem.h:114 */
	virtual bool IsReloading(IRD_RegisterResourceDataUtils* );
	/* ../public/resourcesystem/iresourcesystem.h:115 */
	virtual void SetFinalResourceData(IRD_RegisterResourceDataUtils* , void* );
	/* ../public/resourcesystem/iresourcesystem.h:116 */
	virtual bool RegisterResourceExternalReference(IRD_RegisterResourceDataUtils* , ResourceHandle_t, const CResourceName& , CStrongHandleVoid* );
	/* ../public/resourcesystem/iresourcesystem.h:117 */
	virtual bool GetDataRegistrationFailed(IRD_RegisterResourceDataUtils* );
	/* ../public/resourcesystem/iresourcesystem.h:118 */
	virtual void* GetFinalResourceData(IRD_RegisterResourceDataUtils* );
	/* ../public/resourcesystem/iresourcesystem.h:120 */
	virtual size_t GetResultBufferSize(IRD_RegisterResourceDataUtils* );
	/* ../public/resourcesystem/iresourcesystem.h:122 */
	virtual IAsyncProcessedDataResult* GetAsyncProcessedResult(IRD_RegisterResourceDataUtils* );
	/* ../public/resourcesystem/iresourcesystem.h:125 */
	virtual void KeepResultBuffer(IRD_RegisterResourceDataUtils* , IMemoryMappedFile** );
	void ~IRD_RegisterResourceDataUtils(class IRD_RegisterResourceDataUtils *); /* linkage=_ZN29IRD_RegisterResourceDataUtilsD4Ev */
	void IRD_RegisterResourceDataUtils(class IRD_RegisterResourceDataUtils *, class IRD_RegisterResourceDataUtils &); /* linkage=_ZN29IRD_RegisterResourceDataUtilsC4EOS_ */
	void IRD_RegisterResourceDataUtils(class IRD_RegisterResourceDataUtils *, const class IRD_RegisterResourceDataUtils  &); /* linkage=_ZN29IRD_RegisterResourceDataUtilsC4ERKS_ */
	void IRD_RegisterResourceDataUtils(class IRD_RegisterResourceDataUtils *); /* linkage=_ZN29IRD_RegisterResourceDataUtilsC4Ev */
	virtual void SetDataRegistrationFailed(class IRD_RegisterResourceDataUtils *); /* linkage=_ZN29IRD_RegisterResourceDataUtils25SetDataRegistrationFailedEv */
	virtual bool IsReloading(class IRD_RegisterResourceDataUtils *); /* linkage=_ZN29IRD_RegisterResourceDataUtils11IsReloadingEv */
	virtual void SetFinalResourceData(class IRD_RegisterResourceDataUtils *, void *); /* linkage=_ZN29IRD_RegisterResourceDataUtils20SetFinalResourceDataEPv */
	virtual bool RegisterResourceExternalReference(class IRD_RegisterResourceDataUtils *, ResourceHandle_t, const class CResourceName  &, class CStrongHandleVoid *); /* linkage=_ZN29IRD_RegisterResourceDataUtils33RegisterResourceExternalReferenceEPK21ResourceBindingBase_tRK13CResourceNameP17CStrongHandleVoid */
	virtual bool GetDataRegistrationFailed(class IRD_RegisterResourceDataUtils *); /* linkage=_ZN29IRD_RegisterResourceDataUtils25GetDataRegistrationFailedEv */
	virtual void * GetFinalResourceData(class IRD_RegisterResourceDataUtils *); /* linkage=_ZN29IRD_RegisterResourceDataUtils20GetFinalResourceDataEv */
	virtual size_t GetResultBufferSize(class IRD_RegisterResourceDataUtils *); /* linkage=_ZN29IRD_RegisterResourceDataUtils19GetResultBufferSizeEv */
	virtual class IAsyncProcessedDataResult * GetAsyncProcessedResult(class IRD_RegisterResourceDataUtils *); /* linkage=_ZN29IRD_RegisterResourceDataUtils23GetAsyncProcessedResultEv */
	virtual void KeepResultBuffer(class IRD_RegisterResourceDataUtils *, class IMemoryMappedFile * *); /* linkage=_ZN29IRD_RegisterResourceDataUtils16KeepResultBufferEPP17IMemoryMappedFile */
};

// <02166C83> ../public/resourcesystem/iresourcesystem.h:131
void IAsyncResourceDataRequest::IAsyncResourceDataRequest()
{
} /* size: 0 */

// <02166C66> ../public/resourcesystem/iresourcesystem.h:131
inline void IAsyncResourceDataRequest::IAsyncResourceDataRequest()
{
} /* size: 0 */

// <02159430> ../public/resourcesystem/iresourcesystem.h:131
// member functions: 28
// member variable: 1
// vtable entries: 9
// class size: 8
class IAsyncResourceDataRequest {
	/* ../public/resourcesystem/iresourcesystem.h:135 */
	typedef struct function<void(IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >)> Callback_t;
	/* ../public/resourcesystem/iresourcesystem.h:134 */
	typedef struct function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncResourceDataRequest*)> AsyncCallback_t;
	void IAsyncResourceDataRequest(IAsyncResourceDataRequest* , IAsyncResourceDataRequest& );
	void IAsyncResourceDataRequest(IAsyncResourceDataRequest* , const IAsyncResourceDataRequest& );
	void IAsyncResourceDataRequest(IAsyncResourceDataRequest* );
	void ~IAsyncResourceDataRequest(IAsyncResourceDataRequest* );
	int ()(void) * * _vptr.IAsyncResourceDataRequest; /* 0 8 */
	/* ../public/resourcesystem/iresourcesystem.h:137 */
	virtual AsyncRequestStatus_t GetRequestStatus(IAsyncResourceDataRequest* );
	/* ../public/resourcesystem/iresourcesystem.h:138 */
	virtual const char* GetFileName(IAsyncResourceDataRequest* );
	/* ../public/resourcesystem/iresourcesystem.h:139 */
	virtual void* GetResultBuffer(IAsyncResourceDataRequest* );
	/* ../public/resourcesystem/iresourcesystem.h:140 */
	virtual size_t GetResultBufferSize(IAsyncResourceDataRequest* );
	/* ../public/resourcesystem/iresourcesystem.h:141 */
	virtual void KeepResultBuffer(IAsyncResourceDataRequest* , IMemoryMappedFile** );
	/* ../public/resourcesystem/iresourcesystem.h:142 */
	virtual void AssignCallback(IAsyncResourceDataRequest* , Callback_t& );
	/* ../public/resourcesystem/iresourcesystem.h:143 */
	virtual void AssignAsyncCallback(IAsyncResourceDataRequest* , AsyncCallback_t& );
	/* ../public/resourcesystem/iresourcesystem.h:144 */
	virtual bool GetProfilingInfo(IAsyncResourceDataRequest* , uint64* , int);
	/* ../public/resourcesystem/iresourcesystem.h:145 */
	virtual void Cancel(IAsyncResourceDataRequest* );
	void IAsyncResourceDataRequest(class IAsyncResourceDataRequest *, class IAsyncResourceDataRequest &); /* linkage=_ZN25IAsyncResourceDataRequestC4EOS_ */
	void IAsyncResourceDataRequest(class IAsyncResourceDataRequest *, const class IAsyncResourceDataRequest  &); /* linkage=_ZN25IAsyncResourceDataRequestC4ERKS_ */
	void IAsyncResourceDataRequest(class IAsyncResourceDataRequest *); /* linkage=_ZN25IAsyncResourceDataRequestC4Ev */
	void ~IAsyncResourceDataRequest(class IAsyncResourceDataRequest *); /* linkage=_ZN25IAsyncResourceDataRequestD4Ev */
	virtual enum AsyncRequestStatus_t GetRequestStatus(class IAsyncResourceDataRequest *); /* linkage=_ZN25IAsyncResourceDataRequest16GetRequestStatusEv */
	virtual const char  * GetFileName(class IAsyncResourceDataRequest *); /* linkage=_ZN25IAsyncResourceDataRequest11GetFileNameEv */
	virtual void * GetResultBuffer(class IAsyncResourceDataRequest *); /* linkage=_ZN25IAsyncResourceDataRequest15GetResultBufferEv */
	virtual size_t GetResultBufferSize(class IAsyncResourceDataRequest *); /* linkage=_ZN25IAsyncResourceDataRequest19GetResultBufferSizeEv */
	virtual void KeepResultBuffer(class IAsyncResourceDataRequest *, class IMemoryMappedFile * *); /* linkage=_ZN25IAsyncResourceDataRequest16KeepResultBufferEPP17IMemoryMappedFile */
	virtual void AssignCallback(class IAsyncResourceDataRequest *, Callback_t &); /* linkage=_ZN25IAsyncResourceDataRequest14AssignCallbackEOSt8functionIFvPS_St10unique_ptrI25IAsyncProcessedDataResultSt14default_deleteIS3_EEEE */
	virtual void AssignAsyncCallback(class IAsyncResourceDataRequest *, AsyncCallback_t &); /* linkage=_ZN25IAsyncResourceDataRequest19AssignAsyncCallbackEOSt8functionIFSt10unique_ptrI25IAsyncProcessedDataResultSt14default_deleteIS2_EEPS_EE */
	virtual bool GetProfilingInfo(class IAsyncResourceDataRequest *, uint64 *, int); /* linkage=_ZN25IAsyncResourceDataRequest16GetProfilingInfoEPyi */
	virtual void Cancel(class IAsyncResourceDataRequest *); /* linkage=_ZN25IAsyncResourceDataRequest6CancelEv */
};

// <023814B3> ../public/resourcesystem/iresourcesystem.h:152
void IResourceSystemUtils::IResourceSystemUtils()
{
} /* size: 0 */

// <02381497> ../public/resourcesystem/iresourcesystem.h:152
inline void IResourceSystemUtils::IResourceSystemUtils()
{
} /* size: 0 */

// <023426E3> ../public/resourcesystem/iresourcesystem.h:152
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 8
class IResourceSystemUtils {
	void IResourceSystemUtils(IResourceSystemUtils* , IResourceSystemUtils& );
	void IResourceSystemUtils(IResourceSystemUtils* , const IResourceSystemUtils& );
	void IResourceSystemUtils(IResourceSystemUtils* );
	void ~IResourceSystemUtils(IResourceSystemUtils* );
	int ()(void) * * _vptr.IResourceSystemUtils; /* 0 8 */
	/* ../public/resourcesystem/iresourcesystem.h:156 */
	virtual void MarkLoadingWorkPending(IResourceSystemUtils* , ResourceHandle_t, bool);
	/* ../public/resourcesystem/iresourcesystem.h:160 */
	virtual IAsyncResourceDataRequest* CreateAsyncResourceDataRequest(IResourceSystemUtils* , ResourceHandle_t, int64, size_t, const char* );
	/* ../public/resourcesystem/iresourcesystem.h:161 */
	virtual void SubmitAsyncResourceDataRequest(IResourceSystemUtils* , IAsyncResourceDataRequest* );
	/* ../public/resourcesystem/iresourcesystem.h:163 */
	virtual bool IsBlockingOnManifestLoad(IResourceSystemUtils* );
	void IResourceSystemUtils(class IResourceSystemUtils *, class IResourceSystemUtils &); /* linkage=_ZN20IResourceSystemUtilsC4EOS_ */
	void IResourceSystemUtils(class IResourceSystemUtils *, const class IResourceSystemUtils  &); /* linkage=_ZN20IResourceSystemUtilsC4ERKS_ */
	void IResourceSystemUtils(class IResourceSystemUtils *); /* linkage=_ZN20IResourceSystemUtilsC4Ev */
	void ~IResourceSystemUtils(class IResourceSystemUtils *); /* linkage=_ZN20IResourceSystemUtilsD4Ev */
	virtual void MarkLoadingWorkPending(class IResourceSystemUtils *, ResourceHandle_t, bool); /* linkage=_ZN20IResourceSystemUtils22MarkLoadingWorkPendingEPK21ResourceBindingBase_tb */
	virtual class IAsyncResourceDataRequest * CreateAsyncResourceDataRequest(class IResourceSystemUtils *, ResourceHandle_t, int64, size_t, const char  *); /* linkage=_ZN20IResourceSystemUtils30CreateAsyncResourceDataRequestEPK21ResourceBindingBase_txmPKc */
	virtual void SubmitAsyncResourceDataRequest(class IResourceSystemUtils *, class IAsyncResourceDataRequest *); /* linkage=_ZN20IResourceSystemUtils30SubmitAsyncResourceDataRequestEP25IAsyncResourceDataRequest */
	virtual bool IsBlockingOnManifestLoad(class IResourceSystemUtils *); /* linkage=_ZN20IResourceSystemUtils24IsBlockingOnManifestLoadEv */
};

// <06711AEB> ../public/resourcesystem/iresourcesystem.h:190
void IResourceTypeManager::IResourceTypeManager()
{
} /* size: 0 */

// <06711ACF> ../public/resourcesystem/iresourcesystem.h:190
inline void IResourceTypeManager::IResourceTypeManager()
{
} /* size: 0 */

// <009D58AA> ../public/resourcesystem/iresourcesystem.h:190
// member functions: 46
// member variable: 1
// vtable entries: 19
// class size: 8
class IResourceTypeManager {
	void IResourceTypeManager(IResourceTypeManager* , IResourceTypeManager& );
	void IResourceTypeManager(IResourceTypeManager* , const IResourceTypeManager& );
	void IResourceTypeManager(IResourceTypeManager* );
	void ~IResourceTypeManager(IResourceTypeManager* );
	int ()(void) * * _vptr.IResourceTypeManager; /* 0 8 */
	/* ../public/resourcesystem/iresourcesystem.h:195 */
	virtual bool Init(IResourceTypeManager* , IResourceSystemUtils* );
	/* ../public/resourcesystem/iresourcesystem.h:196 */
	virtual void Shutdown(IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:200 */
	virtual void* GetErrorResource(IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:205 */
	virtual bool NeedsFrameUpdate(const IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:206 */
	virtual void FrameUpdate(IResourceTypeManager* , int);
	/* ../public/resourcesystem/iresourcesystem.h:213 */
	virtual bool RequiresFinalizeResourceCall(const IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:218 */
	virtual void FinalizeResource(IResourceTypeManager* , ResourceHandle_t, ResourceLoadType_t);
	/* ../public/resourcesystem/iresourcesystem.h:224 */
	virtual ResourceStreamingType_t GetStreamingType(const IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:228 */
	virtual int GetNonStreamingDataLoadSize(const IResourceTypeManager* , ResourceHandle_t, bool);
	/* ../public/resourcesystem/iresourcesystem.h:233 */
	virtual void LoadStreamingData(IResourceTypeManager* , ResourceHandle_t, IResourceSystemUtils* );
	/* ../public/resourcesystem/iresourcesystem.h:238 */
	virtual void AllocateResource(IResourceTypeManager* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* ../public/resourcesystem/iresourcesystem.h:239 */
	virtual void DeallocateResource(IResourceTypeManager* , void* , IResourceDeallocatorUtils* );
	/* ../public/resourcesystem/iresourcesystem.h:240 */
	virtual void NotifyResourceWithWorkPendingLoadCancelled(IResourceTypeManager* , ResourceHandle_t, void* );
	/* ../public/resourcesystem/iresourcesystem.h:243 */
	virtual bool UsesData(const IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:246 */
	virtual void* GetEmpty(IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:249 */
	virtual bool IsStreamingDataAlreadyLoaded(IResourceTypeManager* , ResourceHandle_t);
	/* ../public/resourcesystem/iresourcesystem.h:254 */
	virtual bool MemoryMappedFileDataIsAcceptable(const IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:259 */
	virtual bool WantsAsyncProcessData(const IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:260 */
	virtual unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(IResourceTypeManager* , ResourceHandle_t, const ResourceFileHeader_t* );
	void IResourceTypeManager(class IResourceTypeManager *, class IResourceTypeManager &); /* linkage=_ZN20IResourceTypeManagerC4EOS_ */
	void IResourceTypeManager(class IResourceTypeManager *, const class IResourceTypeManager  &); /* linkage=_ZN20IResourceTypeManagerC4ERKS_ */
	void IResourceTypeManager(class IResourceTypeManager *); /* linkage=_ZN20IResourceTypeManagerC4Ev */
	void ~IResourceTypeManager(class IResourceTypeManager *); /* linkage=_ZN20IResourceTypeManagerD4Ev */
	virtual bool Init(class IResourceTypeManager *, class IResourceSystemUtils *); /* linkage=_ZN20IResourceTypeManager4InitEP20IResourceSystemUtils */
	virtual void Shutdown(class IResourceTypeManager *); /* linkage=_ZN20IResourceTypeManager8ShutdownEv */
	/* <2384eff> ../public/resourcesystem/iresourcesystem.h:200 */
	virtual void * GetErrorResource(class IResourceTypeManager *); /* linkage=_ZN20IResourceTypeManager16GetErrorResourceEv */
	virtual bool NeedsFrameUpdate(const class IResourceTypeManager  *); /* linkage=_ZNK20IResourceTypeManager16NeedsFrameUpdateEv */
	virtual void FrameUpdate(class IResourceTypeManager *, int); /* linkage=_ZN20IResourceTypeManager11FrameUpdateEi */
	virtual bool RequiresFinalizeResourceCall(const class IResourceTypeManager  *); /* linkage=_ZNK20IResourceTypeManager28RequiresFinalizeResourceCallEv */
	/* <22c2dc4> ../public/resourcesystem/iresourcesystem.h:218 */
	virtual void FinalizeResource(class IResourceTypeManager *, ResourceHandle_t, enum ResourceLoadType_t); /* linkage=_ZN20IResourceTypeManager16FinalizeResourceEPK21ResourceBindingBase_t18ResourceLoadType_t */
	/* <22c2dfc> ../public/resourcesystem/iresourcesystem.h:224 */
	virtual enum ResourceStreamingType_t GetStreamingType(const class IResourceTypeManager  *); /* linkage=_ZNK20IResourceTypeManager16GetStreamingTypeEv */
	virtual int GetNonStreamingDataLoadSize(const class IResourceTypeManager  *, ResourceHandle_t, bool); /* linkage=_ZNK20IResourceTypeManager27GetNonStreamingDataLoadSizeEPK21ResourceBindingBase_tb */
	virtual void LoadStreamingData(class IResourceTypeManager *, ResourceHandle_t, class IResourceSystemUtils *); /* linkage=_ZN20IResourceTypeManager17LoadStreamingDataEPK21ResourceBindingBase_tP20IResourceSystemUtils */
	virtual void AllocateResource(class IResourceTypeManager *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN20IResourceTypeManager16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	virtual void DeallocateResource(class IResourceTypeManager *, void *, class IResourceDeallocatorUtils *); /* linkage=_ZN20IResourceTypeManager18DeallocateResourceEPvP25IResourceDeallocatorUtils */
	/* <22c2e26> ../public/resourcesystem/iresourcesystem.h:240 */
	virtual void NotifyResourceWithWorkPendingLoadCancelled(class IResourceTypeManager *, ResourceHandle_t, void *); /* linkage=_ZN20IResourceTypeManager42NotifyResourceWithWorkPendingLoadCancelledEPK21ResourceBindingBase_tPv */
	virtual bool UsesData(const class IResourceTypeManager  *); /* linkage=_ZNK20IResourceTypeManager8UsesDataEv */
	/* <22c2e5e> ../public/resourcesystem/iresourcesystem.h:246 */
	virtual void * GetEmpty(class IResourceTypeManager *); /* linkage=_ZN20IResourceTypeManager8GetEmptyEv */
	virtual bool IsStreamingDataAlreadyLoaded(class IResourceTypeManager *, ResourceHandle_t); /* linkage=_ZN20IResourceTypeManager28IsStreamingDataAlreadyLoadedEPK21ResourceBindingBase_t */
	/* <2384f29> ../public/resourcesystem/iresourcesystem.h:254 */
	virtual bool MemoryMappedFileDataIsAcceptable(const class IResourceTypeManager  *); /* linkage=_ZNK20IResourceTypeManager32MemoryMappedFileDataIsAcceptableEv */
	/* <22c2e88> ../public/resourcesystem/iresourcesystem.h:259 */
	virtual bool WantsAsyncProcessData(const class IResourceTypeManager  *); /* linkage=_ZNK20IResourceTypeManager21WantsAsyncProcessDataEv */
	/* <22c2eb2> ../public/resourcesystem/iresourcesystem.h:260 */
	virtual class unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(class IResourceTypeManager *, ResourceHandle_t, const class ResourceFileHeader_t  *); /* linkage=_ZN20IResourceTypeManager16AsyncProcessDataEPK21ResourceBindingBase_tPK20ResourceFileHeader_t */
};

// <00E66A63> ../public/resourcesystem/iresourcesystem.h:190
// member functions: 43
// member variable: 1
// vtable entries: 19
// class size: 8
class IResourceTypeManager {
	void ~IResourceTypeManager(IResourceTypeManager* );
	int ()(void) * * _vptr.IResourceTypeManager; /* 0 8 */
	/* ../public/resourcesystem/iresourcesystem.h:195 */
	virtual bool Init(IResourceTypeManager* , IResourceSystemUtils* );
	/* ../public/resourcesystem/iresourcesystem.h:196 */
	virtual void Shutdown(IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:200 */
	virtual void* GetErrorResource(IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:205 */
	virtual bool NeedsFrameUpdate(const IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:206 */
	virtual void FrameUpdate(IResourceTypeManager* , int);
	/* ../public/resourcesystem/iresourcesystem.h:213 */
	virtual bool RequiresFinalizeResourceCall(const IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:218 */
	virtual void FinalizeResource(IResourceTypeManager* , ResourceHandle_t, ResourceLoadType_t);
	/* ../public/resourcesystem/iresourcesystem.h:224 */
	virtual ResourceStreamingType_t GetStreamingType(const IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:228 */
	virtual int GetNonStreamingDataLoadSize(const IResourceTypeManager* , ResourceHandle_t, bool);
	/* ../public/resourcesystem/iresourcesystem.h:233 */
	virtual void LoadStreamingData(IResourceTypeManager* , ResourceHandle_t, IResourceSystemUtils* );
	/* ../public/resourcesystem/iresourcesystem.h:238 */
	virtual void AllocateResource(IResourceTypeManager* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* ../public/resourcesystem/iresourcesystem.h:239 */
	virtual void DeallocateResource(IResourceTypeManager* , void* , IResourceDeallocatorUtils* );
	/* ../public/resourcesystem/iresourcesystem.h:240 */
	virtual void NotifyResourceWithWorkPendingLoadCancelled(IResourceTypeManager* , ResourceHandle_t, void* );
	/* ../public/resourcesystem/iresourcesystem.h:243 */
	virtual bool UsesData(const IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:246 */
	virtual void* GetEmpty(IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:249 */
	virtual bool IsStreamingDataAlreadyLoaded(IResourceTypeManager* , ResourceHandle_t);
	/* ../public/resourcesystem/iresourcesystem.h:254 */
	virtual bool MemoryMappedFileDataIsAcceptable(const IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:259 */
	virtual bool WantsAsyncProcessData(const IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:260 */
	virtual unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(IResourceTypeManager* , ResourceHandle_t, const ResourceFileHeader_t* );
	void IResourceTypeManager(class IResourceTypeManager *, class IResourceTypeManager &); /* linkage=_ZN20IResourceTypeManagerC4EOS_ */
	void IResourceTypeManager(class IResourceTypeManager *, const class IResourceTypeManager  &); /* linkage=_ZN20IResourceTypeManagerC4ERKS_ */
	void IResourceTypeManager(class IResourceTypeManager *); /* linkage=_ZN20IResourceTypeManagerC4Ev */
	void ~IResourceTypeManager(class IResourceTypeManager *); /* linkage=_ZN20IResourceTypeManagerD4Ev */
	virtual bool Init(class IResourceTypeManager *, class IResourceSystemUtils *); /* linkage=_ZN20IResourceTypeManager4InitEP20IResourceSystemUtils */
	virtual void Shutdown(class IResourceTypeManager *); /* linkage=_ZN20IResourceTypeManager8ShutdownEv */
	/* <2384eff> ../public/resourcesystem/iresourcesystem.h:200 */
	virtual void * GetErrorResource(class IResourceTypeManager *); /* linkage=_ZN20IResourceTypeManager16GetErrorResourceEv */
	virtual bool NeedsFrameUpdate(const class IResourceTypeManager  *); /* linkage=_ZNK20IResourceTypeManager16NeedsFrameUpdateEv */
	virtual void FrameUpdate(class IResourceTypeManager *, int); /* linkage=_ZN20IResourceTypeManager11FrameUpdateEi */
	virtual bool RequiresFinalizeResourceCall(const class IResourceTypeManager  *); /* linkage=_ZNK20IResourceTypeManager28RequiresFinalizeResourceCallEv */
	/* <22c2dc4> ../public/resourcesystem/iresourcesystem.h:218 */
	virtual void FinalizeResource(class IResourceTypeManager *, ResourceHandle_t, enum ResourceLoadType_t); /* linkage=_ZN20IResourceTypeManager16FinalizeResourceEPK21ResourceBindingBase_t18ResourceLoadType_t */
	/* <22c2dfc> ../public/resourcesystem/iresourcesystem.h:224 */
	virtual enum ResourceStreamingType_t GetStreamingType(const class IResourceTypeManager  *); /* linkage=_ZNK20IResourceTypeManager16GetStreamingTypeEv */
	virtual int GetNonStreamingDataLoadSize(const class IResourceTypeManager  *, ResourceHandle_t, bool); /* linkage=_ZNK20IResourceTypeManager27GetNonStreamingDataLoadSizeEPK21ResourceBindingBase_tb */
	virtual void LoadStreamingData(class IResourceTypeManager *, ResourceHandle_t, class IResourceSystemUtils *); /* linkage=_ZN20IResourceTypeManager17LoadStreamingDataEPK21ResourceBindingBase_tP20IResourceSystemUtils */
	virtual void AllocateResource(class IResourceTypeManager *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN20IResourceTypeManager16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	virtual void DeallocateResource(class IResourceTypeManager *, void *, class IResourceDeallocatorUtils *); /* linkage=_ZN20IResourceTypeManager18DeallocateResourceEPvP25IResourceDeallocatorUtils */
	/* <22c2e26> ../public/resourcesystem/iresourcesystem.h:240 */
	virtual void NotifyResourceWithWorkPendingLoadCancelled(class IResourceTypeManager *, ResourceHandle_t, void *); /* linkage=_ZN20IResourceTypeManager42NotifyResourceWithWorkPendingLoadCancelledEPK21ResourceBindingBase_tPv */
	virtual bool UsesData(const class IResourceTypeManager  *); /* linkage=_ZNK20IResourceTypeManager8UsesDataEv */
	/* <22c2e5e> ../public/resourcesystem/iresourcesystem.h:246 */
	virtual void * GetEmpty(class IResourceTypeManager *); /* linkage=_ZN20IResourceTypeManager8GetEmptyEv */
	virtual bool IsStreamingDataAlreadyLoaded(class IResourceTypeManager *, ResourceHandle_t); /* linkage=_ZN20IResourceTypeManager28IsStreamingDataAlreadyLoadedEPK21ResourceBindingBase_t */
	/* <2384f29> ../public/resourcesystem/iresourcesystem.h:254 */
	virtual bool MemoryMappedFileDataIsAcceptable(const class IResourceTypeManager  *); /* linkage=_ZNK20IResourceTypeManager32MemoryMappedFileDataIsAcceptableEv */
	/* <22c2e88> ../public/resourcesystem/iresourcesystem.h:259 */
	virtual bool WantsAsyncProcessData(const class IResourceTypeManager  *); /* linkage=_ZNK20IResourceTypeManager21WantsAsyncProcessDataEv */
	/* <22c2eb2> ../public/resourcesystem/iresourcesystem.h:260 */
	virtual class unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(class IResourceTypeManager *, ResourceHandle_t, const class ResourceFileHeader_t  *); /* linkage=_ZN20IResourceTypeManager16AsyncProcessDataEPK21ResourceBindingBase_tPK20ResourceFileHeader_t */
};

// <067140F4> ../public/resourcesystem/iresourcesystem.h:195
void IResourceTypeManager::Init(IResourceSystemUtils* pUtils)
{
} /* size: 0 */

// <067140DC> ../public/resourcesystem/iresourcesystem.h:196
void IResourceTypeManager::Shutdown()
{
} /* size: 0 */

// <067140A9> ../public/resourcesystem/iresourcesystem.h:200
void* IResourceTypeManager::GetErrorResource()
{
} /* size: 7 */

// <0238367E> ../public/resourcesystem/iresourcesystem.h:200
inline void* IResourceTypeManager::GetErrorResource()
{
} /* size: 0 */

// <06714091> ../public/resourcesystem/iresourcesystem.h:205
void IResourceTypeManager::NeedsFrameUpdate()
{
} /* size: 0 */

// <0671406D> ../public/resourcesystem/iresourcesystem.h:206
void IResourceTypeManager::FrameUpdate(int nFinishedFrameCount)
{
} /* size: 0 */

// <0671403F> ../public/resourcesystem/iresourcesystem.h:213
void IResourceTypeManager::RequiresFinalizeResourceCall()
{
} /* size: 7 */

// <06713FF5> ../public/resourcesystem/iresourcesystem.h:218
void IResourceTypeManager::FinalizeResource(ResourceHandle_t hResource, ResourceLoadType_t nLoadType)
{
} /* size: 5 */

// <022C182E> ../public/resourcesystem/iresourcesystem.h:218
inline void IResourceTypeManager::FinalizeResource(ResourceHandle_t hResource, ResourceLoadType_t nLoadType)
{
} /* size: 0 */

// <06713FC7> ../public/resourcesystem/iresourcesystem.h:224
void IResourceTypeManager::GetStreamingType()
{
} /* size: 7 */

// <022C1815> ../public/resourcesystem/iresourcesystem.h:224
inline void IResourceTypeManager::GetStreamingType()
{
} /* size: 0 */

// <06713F22> ../public/resourcesystem/iresourcesystem.h:228
// variables: 2
void IResourceTypeManager::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
	const char   __FUNCTION__; // 57125
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 228
	}
} /* size: 32, variables: 1 */

// <026A3BE0> ../public/resourcesystem/iresourcesystem.h:228
// variables: 2
void IResourceTypeManager::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
	const char   __FUNCTION__; // 676
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 228
	}
} /* size: 0, variables: 1 */

// <023F9158> ../public/resourcesystem/iresourcesystem.h:228
// variables: 2
void IResourceTypeManager::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
	const char   __FUNCTION__; // 59273
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 228
	}
} /* size: 32, variables: 1 */

// <0238350B> ../public/resourcesystem/iresourcesystem.h:228
// variables: 2
void IResourceTypeManager::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
	const char   __FUNCTION__; // 58895
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 228
	}
} /* size: 32, variables: 1 */

// <022C17C6> ../public/resourcesystem/iresourcesystem.h:228
// variables: 2
void IResourceTypeManager::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
	const char   __FUNCTION__; // 19553
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 228
	}
} /* size: 0, variables: 1 */

// <021D5888> ../public/resourcesystem/iresourcesystem.h:228
// variables: 2
void IResourceTypeManager::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
	const char   __FUNCTION__; // 44352
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 228
	}
} /* size: 32, variables: 1 */

// <011126AC> ../public/resourcesystem/iresourcesystem.h:228
// variables: 2
void IResourceTypeManager::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
	const char   __FUNCTION__; // 54813
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 228
	}
} /* size: 32, variables: 1 */

// <00E7AE22> ../public/resourcesystem/iresourcesystem.h:228
// variables: 2
void IResourceTypeManager::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
	const char   __FUNCTION__; // 43013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 228
	}
} /* size: 32, variables: 1 */

// <00D75754> ../public/resourcesystem/iresourcesystem.h:228
// variables: 2
void IResourceTypeManager::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
	const char   __FUNCTION__; // 4925
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 228
	}
} /* size: 32, variables: 1 */

// <00A19802> ../public/resourcesystem/iresourcesystem.h:228
// variables: 2
void IResourceTypeManager::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
	const char   __FUNCTION__; // 57993
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 228
	}
} /* size: 0, variables: 1 */

// <019C4BF4> ../public/resourcesystem/iresourcesystem.h:228
// variables: 2
void IResourceTypeManager::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
	const char   __FUNCTION__; // 63580
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 228
	}
} /* size: 32, variables: 1 */

// <0043DC1E> ../public/resourcesystem/iresourcesystem.h:228
// variables: 2
void IResourceTypeManager::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
	const char   __FUNCTION__; // 39976
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 228
	}
} /* size: 32, variables: 1 */

// <004161D9> ../public/resourcesystem/iresourcesystem.h:228
// variables: 2
void IResourceTypeManager::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
	const char   __FUNCTION__; // 50749
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 228
	}
} /* size: 32, variables: 1 */

// <00328614> ../public/resourcesystem/iresourcesystem.h:228
// variables: 2
void IResourceTypeManager::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
	const char   __FUNCTION__; // 38661
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 228
	}
} /* size: 0, variables: 1 */

// <003A043A> ../public/resourcesystem/iresourcesystem.h:228
// variables: 2
void IResourceTypeManager::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
	const char   __FUNCTION__; // 47044
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 228
	}
} /* size: 32, variables: 1 */

// <06713E7D> ../public/resourcesystem/iresourcesystem.h:233
// variables: 2
void IResourceTypeManager::LoadStreamingData(ResourceHandle_t hResource, IResourceSystemUtils* pUtils)
{
	const char   __FUNCTION__; // 56890
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
} /* size: 27, variables: 1 */

// <026A3B91> ../public/resourcesystem/iresourcesystem.h:233
// variables: 2
void IResourceTypeManager::LoadStreamingData(ResourceHandle_t hResource, IResourceSystemUtils* pUtils)
{
	const char   __FUNCTION__; // 451
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
} /* size: 0, variables: 1 */

// <023F90B3> ../public/resourcesystem/iresourcesystem.h:233
// variables: 2
void IResourceTypeManager::LoadStreamingData(ResourceHandle_t hResource, IResourceSystemUtils* pUtils)
{
	const char   __FUNCTION__; // 59168
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
} /* size: 27, variables: 1 */

// <02383463> ../public/resourcesystem/iresourcesystem.h:233
// variables: 2
void IResourceTypeManager::LoadStreamingData(ResourceHandle_t hResource, IResourceSystemUtils* pUtils)
{
	const char   __FUNCTION__; // 58640
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
} /* size: 27, variables: 1 */

// <021D57E3> ../public/resourcesystem/iresourcesystem.h:233
// variables: 2
void IResourceTypeManager::LoadStreamingData(ResourceHandle_t hResource, IResourceSystemUtils* pUtils)
{
	const char   __FUNCTION__; // 44122
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
} /* size: 27, variables: 1 */

// <01112604> ../public/resourcesystem/iresourcesystem.h:233
// variables: 2
void IResourceTypeManager::LoadStreamingData(ResourceHandle_t hResource, IResourceSystemUtils* pUtils)
{
	const char   __FUNCTION__; // 54573
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
} /* size: 27, variables: 1 */

// <00F41DAD> ../public/resourcesystem/iresourcesystem.h:233
// variables: 2
void IResourceTypeManager::LoadStreamingData(ResourceHandle_t hResource, IResourceSystemUtils* pUtils)
{
	const char   __FUNCTION__; // 52611
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
} /* size: 27, variables: 1 */

// <00D756AD> ../public/resourcesystem/iresourcesystem.h:233
// variables: 2
void IResourceTypeManager::LoadStreamingData(ResourceHandle_t hResource, IResourceSystemUtils* pUtils)
{
	const char   __FUNCTION__; // 4700
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
} /* size: 27, variables: 1 */

// <00A197B2> ../public/resourcesystem/iresourcesystem.h:233
// variables: 2
void IResourceTypeManager::LoadStreamingData(ResourceHandle_t hResource, IResourceSystemUtils* pUtils)
{
	const char   __FUNCTION__; // 57743
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
} /* size: 0, variables: 1 */

// <00E5D554> ../public/resourcesystem/iresourcesystem.h:233
// variables: 2
void IResourceTypeManager::LoadStreamingData(ResourceHandle_t hResource, IResourceSystemUtils* pUtils)
{
	const char   __FUNCTION__; // 10445
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
} /* size: 27, variables: 1 */

// <00D1A535> ../public/resourcesystem/iresourcesystem.h:233
// variables: 2
void IResourceTypeManager::LoadStreamingData(ResourceHandle_t hResource, IResourceSystemUtils* pUtils)
{
	const char   __FUNCTION__; // 22114
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
} /* size: 27, variables: 1 */

// <0034552C> ../public/resourcesystem/iresourcesystem.h:233
// variables: 2
void IResourceTypeManager::LoadStreamingData(ResourceHandle_t hResource, IResourceSystemUtils* pUtils)
{
	const char   __FUNCTION__; // 55857
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
} /* size: 0, variables: 1 */

// <019C4B4F> ../public/resourcesystem/iresourcesystem.h:233
// variables: 2
void IResourceTypeManager::LoadStreamingData(ResourceHandle_t hResource, IResourceSystemUtils* pUtils)
{
	const char   __FUNCTION__; // 63345
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
} /* size: 27, variables: 1 */

// <0043DB77> ../public/resourcesystem/iresourcesystem.h:233
// variables: 2
void IResourceTypeManager::LoadStreamingData(ResourceHandle_t hResource, IResourceSystemUtils* pUtils)
{
	const char   __FUNCTION__; // 39751
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
} /* size: 27, variables: 1 */

// <06713E33> ../public/resourcesystem/iresourcesystem.h:240
void IResourceTypeManager::NotifyResourceWithWorkPendingLoadCancelled(ResourceHandle_t hResource, void* pData)
{
} /* size: 5 */

// <022C1746> ../public/resourcesystem/iresourcesystem.h:240
inline void IResourceTypeManager::NotifyResourceWithWorkPendingLoadCancelled(ResourceHandle_t hResource, void* pData)
{
} /* size: 0 */

// <06713E05> ../public/resourcesystem/iresourcesystem.h:243
void IResourceTypeManager::UsesData()
{
} /* size: 10 */

// <06713DD2> ../public/resourcesystem/iresourcesystem.h:246
void* IResourceTypeManager::GetEmpty()
{
} /* size: 7 */

// <022C1728> ../public/resourcesystem/iresourcesystem.h:246
inline void* IResourceTypeManager::GetEmpty()
{
} /* size: 0 */

// <06713D41> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 57152
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 29, variables: 1 */

// <026A3AA1> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 703
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 0, variables: 1 */

// <023F8F75> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 59294
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 29, variables: 1 */

// <02383338> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 58922
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 29, variables: 1 */

// <022C16E5> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 19580
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 0, variables: 1 */

// <021D56A5> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 44379
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 29, variables: 1 */

// <011124C3> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 54840
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 29, variables: 1 */

// <00E7AC3B> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 43040
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 29, variables: 1 */

// <00D7556F> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 4952
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 29, variables: 1 */

// <00A19709> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 58020
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 0, variables: 1 */

// <0315EF57> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 24651
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 29, variables: 1 */

// <00E5D415> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 10722
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 29, variables: 1 */

// <00D1A3F8> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 22406
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 29, variables: 1 */

// <019C4A13> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 63607
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 29, variables: 1 */

// <0043DA39> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 40003
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 29, variables: 1 */

// <00415FF4> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 50776
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 29, variables: 1 */

// <003284F1> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 38688
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 0, variables: 1 */

// <00CF769D> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 49281
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 29, variables: 1 */

// <003A0251> ../public/resourcesystem/iresourcesystem.h:249
// variables: 2
void IResourceTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 47071
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
} /* size: 29, variables: 1 */

// <06713D29> ../public/resourcesystem/iresourcesystem.h:254
void IResourceTypeManager::MemoryMappedFileDataIsAcceptable()
{
} /* size: 0 */

// <0238331F> ../public/resourcesystem/iresourcesystem.h:254
inline void IResourceTypeManager::MemoryMappedFileDataIsAcceptable()
{
} /* size: 0 */

// <06713D11> ../public/resourcesystem/iresourcesystem.h:259
void IResourceTypeManager::WantsAsyncProcessData()
{
} /* size: 0 */

// <022C16CC> ../public/resourcesystem/iresourcesystem.h:259
inline void IResourceTypeManager::WantsAsyncProcessData()
{
} /* size: 0 */

// <06713CDF> ../public/resourcesystem/iresourcesystem.h:260
void IResourceTypeManager::AsyncProcessData(ResourceHandle_t hResource, const ResourceFileHeader_t* pHeader)
{
} /* size: 0 */

// <022C1545> ../public/resourcesystem/iresourcesystem.h:260
inline void IResourceTypeManager::AsyncProcessData(ResourceHandle_t hResource, const ResourceFileHeader_t* pHeader)
{
} /* size: 0 */

// <0236349E> ../public/resourcesystem/iresourcesystem.h:266
void ResourceStatusChange_t::ResourceStatusChange_t()
{
} /* size: 0 */

// <02363481> ../public/resourcesystem/iresourcesystem.h:266
inline void ResourceStatusChange_t::ResourceStatusChange_t()
{
} /* size: 0 */

// <0220231B> ../public/resourcesystem/iresourcesystem.h:266
// member function: 1
// member variables: 4
// struct size: 32
struct ResourceStatusChange_t {
	ResourceId_t m_nResourceId; /* 0 8 */
	ResourceHandle_t m_hResource; /* 8 8 */
	ResourceType_t m_nResourceType; /* 16 8 */
	ResourceLoadType_t m_nLoadType; /* 24 4 */
	void ResourceStatusChange_t(ResourceStatusChange_t* );
};

// <002BFF0F> ../public/resourcesystem/iresourcesystem.h:266
// member variables: 4
// struct size: 32
struct ResourceStatusChange_t {
	ResourceId_t m_nResourceId; /* 0 8 */
	ResourceHandle_t m_hResource; /* 8 8 */
	ResourceType_t m_nResourceType; /* 16 8 */
	ResourceLoadType_t m_nLoadType; /* 24 4 */
};

// <0033CE64> ../public/resourcesystem/iresourcesystem.h:274
void IToolsResourceListener::IToolsResourceListener()
{
} /* size: 0 */

// <0033CE47> ../public/resourcesystem/iresourcesystem.h:274
inline void IToolsResourceListener::IToolsResourceListener()
{
} /* size: 0 */

// <002F48F3> ../public/resourcesystem/iresourcesystem.h:274
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class IToolsResourceListener {
	void IToolsResourceListener(IToolsResourceListener* , IToolsResourceListener& );
	void IToolsResourceListener(IToolsResourceListener* , const IToolsResourceListener& );
	void IToolsResourceListener(IToolsResourceListener* );
	void ~IToolsResourceListener(IToolsResourceListener* );
	int ()(void) * * _vptr.IToolsResourceListener; /* 0 8 */
	/* ../public/resourcesystem/iresourcesystem.h:277 */
	virtual void NotifyResourceStatusChange(IToolsResourceListener* , const ResourceStatusChange_t* , int);
	void IToolsResourceListener(class IToolsResourceListener *, class IToolsResourceListener &); /* linkage=_ZN22IToolsResourceListenerC4EOS_ */
	void IToolsResourceListener(class IToolsResourceListener *, const class IToolsResourceListener  &); /* linkage=_ZN22IToolsResourceListenerC4ERKS_ */
	void IToolsResourceListener(class IToolsResourceListener *); /* linkage=_ZN22IToolsResourceListenerC4Ev */
	void ~IToolsResourceListener(class IToolsResourceListener *); /* linkage=_ZN22IToolsResourceListenerD4Ev */
	virtual void NotifyResourceStatusChange(class IToolsResourceListener *, const class ResourceStatusChange_t  *, int); /* linkage=_ZN22IToolsResourceListener26NotifyResourceStatusChangeEPK22ResourceStatusChange_ti */
};

// <00F6CD1D> ../public/resourcesystem/iresourcesystem.h:339
// member functions: 3
// member variables: 8
// struct size: 56
struct ResourceManifestCreationInfo_t {
	/* ../public/resourcesystem/iresourcesystem.h:341 */
	void ResourceManifestCreationInfo_t(ResourceManifestCreationInfo_t* );
	/* ../public/resourcesystem/iresourcesystem.h:344 */
	void ResourceManifestCreationInfo_t(ResourceManifestCreationInfo_t* , int, const char** , ResourceManifestLoadBehavior_t, const char* , ResourceManifestLoadPriority_t);
	/* ../public/resourcesystem/iresourcesystem.h:353 */
	void ResourceManifestCreationInfo_t(ResourceManifestCreationInfo_t* , int, const char** , ResourceManifestType_t, ResourceManifestLoadBehavior_t, const char* , ResourceManifestLoadPriority_t);
	int m_nCount; /* 0 4 */
	const char * * m_ppResourceFiles; /* 8 8 */
	ResourceManifestType_t m_nType; /* 16 4 */
	ResourceManifestLoadBehavior_t m_nLoadBehavior; /* 20 4 */
	const char * m_pDebugName; /* 24 8 */
	ResourceManifestLoadPriority_t m_nPriority; /* 32 4 */
	ResourceManifestLoadCompletionCallback_t m_callback; /* 40 8 */
	void * m_pContext; /* 48 8 */
};

// <023F8EB4> ../public/resourcesystem/iresourcesystem.h:341
void ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t()
{
} /* size: 0 */

// <023F8E9B> ../public/resourcesystem/iresourcesystem.h:341
inline void ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t()
{
} /* size: 0 */

// <0266BDBC> ../public/resourcesystem/iresourcesystem.h:344
void ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(int nCount, const char ** ppResourceFiles, ResourceManifestLoadBehavior_t nLoadBehavior, const char* pDebugName, ResourceManifestLoadPriority_t nPriority)
{
} /* size: 0 */

// <0266BD62> ../public/resourcesystem/iresourcesystem.h:344
inline void ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(int nCount, const char ** ppResourceFiles, ResourceManifestLoadBehavior_t nLoadBehavior, const char* pDebugName, ResourceManifestLoadPriority_t nPriority)
{
} /* size: 0 */

// <023831E4> ../public/resourcesystem/iresourcesystem.h:353
void ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(int nCount, const char ** ppResourceFiles, ResourceManifestType_t nType, ResourceManifestLoadBehavior_t nLoadBehavior, const char* pDebugName, ResourceManifestLoadPriority_t nPriority)
{
} /* size: 0 */

// <0238317D> ../public/resourcesystem/iresourcesystem.h:353
inline void ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(int nCount, const char ** ppResourceFiles, ResourceManifestType_t nType, ResourceManifestLoadBehavior_t nLoadBehavior, const char* pDebugName, ResourceManifestLoadPriority_t nPriority)
{
} /* size: 0 */

// <02194E6C> ../public/resourcesystem/iresourcesystem.h:409
void ICodeResourceManifestManager::ICodeResourceManifestManager()
{
} /* size: 0 */

// <02194E4F> ../public/resourcesystem/iresourcesystem.h:409
inline void ICodeResourceManifestManager::ICodeResourceManifestManager()
{
} /* size: 0 */

// <0218BA58> ../public/resourcesystem/iresourcesystem.h:409
// member functions: 24
// member variable: 1
// vtable entries: 8
// class size: 8
class ICodeResourceManifestManager {
	void ~ICodeResourceManifestManager(ICodeResourceManifestManager* );
	void ICodeResourceManifestManager(ICodeResourceManifestManager* , ICodeResourceManifestManager& );
	void ICodeResourceManifestManager(ICodeResourceManifestManager* , const ICodeResourceManifestManager& );
	void ICodeResourceManifestManager(ICodeResourceManifestManager* );
	int ()(void) * * _vptr.ICodeResourceManifestManager; /* 0 8 */
	/* ../public/resourcesystem/iresourcesystem.h:413 */
	virtual bool IsResourceManifestGroupKnown(ICodeResourceManifestManager* , const char* );
	/* ../public/resourcesystem/iresourcesystem.h:414 */
	virtual bool IsResourceManifestNamedKnown(ICodeResourceManifestManager* , const char* );
	/* ../public/resourcesystem/iresourcesystem.h:419 */
	virtual CodeManifestNameSymbol_t GetNamedManifestResources(ICodeResourceManifestManager* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/resourcesystem/iresourcesystem.h:420 */
	virtual CodeManifestNameSymbol_t GetGroupManifestResources(ICodeResourceManifestManager* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/resourcesystem/iresourcesystem.h:423 */
	virtual void DisconnectResourceManifestHandles(ICodeResourceManifestManager* , CodeManifestNameSymbol_t);
	/* ../public/resourcesystem/iresourcesystem.h:425 */
	virtual void GetAllCodeManifests(ICodeResourceManifestManager* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
private:
	/* ../public/resourcesystem/iresourcesystem.h:429 */
	virtual void RegisterNamedManifest(ICodeResourceManifestManager* , ResourceManifestDesc_t* );
	/* ../public/resourcesystem/iresourcesystem.h:430 */
	virtual void UnregisterNamedManifest(ICodeResourceManifestManager* , ResourceManifestDesc_t* );
	void ~ICodeResourceManifestManager(class ICodeResourceManifestManager *); /* linkage=_ZN28ICodeResourceManifestManagerD4Ev */
	void ICodeResourceManifestManager(class ICodeResourceManifestManager *, class ICodeResourceManifestManager &); /* linkage=_ZN28ICodeResourceManifestManagerC4EOS_ */
	void ICodeResourceManifestManager(class ICodeResourceManifestManager *, const class ICodeResourceManifestManager  &); /* linkage=_ZN28ICodeResourceManifestManagerC4ERKS_ */
	void ICodeResourceManifestManager(class ICodeResourceManifestManager *); /* linkage=_ZN28ICodeResourceManifestManagerC4Ev */
	virtual bool IsResourceManifestGroupKnown(class ICodeResourceManifestManager *, const char  *); /* linkage=_ZN28ICodeResourceManifestManager28IsResourceManifestGroupKnownEPKc */
	virtual bool IsResourceManifestNamedKnown(class ICodeResourceManifestManager *, const char  *); /* linkage=_ZN28ICodeResourceManifestManager28IsResourceManifestNamedKnownEPKc */
	virtual CodeManifestNameSymbol_t GetNamedManifestResources(class ICodeResourceManifestManager *, const char  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN28ICodeResourceManifestManager25GetNamedManifestResourcesEPKcR10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEE */
	virtual CodeManifestNameSymbol_t GetGroupManifestResources(class ICodeResourceManifestManager *, const char  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN28ICodeResourceManifestManager25GetGroupManifestResourcesEPKcR10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEE */
	virtual void DisconnectResourceManifestHandles(class ICodeResourceManifestManager *, CodeManifestNameSymbol_t); /* linkage=_ZN28ICodeResourceManifestManager33DisconnectResourceManifestHandlesEt */
	virtual void GetAllCodeManifests(class ICodeResourceManifestManager *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN28ICodeResourceManifestManager19GetAllCodeManifestsER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	virtual void RegisterNamedManifest(class ICodeResourceManifestManager *, class ResourceManifestDesc_t *); /* linkage=_ZN28ICodeResourceManifestManager21RegisterNamedManifestEP22ResourceManifestDesc_t */
	virtual void UnregisterNamedManifest(class ICodeResourceManifestManager *, class ResourceManifestDesc_t *); /* linkage=_ZN28ICodeResourceManifestManager23UnregisterNamedManifestEP22ResourceManifestDesc_t */
};

// <023A5221> ../public/resourcesystem/iresourcesystem.h:437
// member functions: 7
// member variable: 1
// vtable entries: 3
// class size: 8
class IResourceSystemLeakTracker {
	void ~IResourceSystemLeakTracker(IResourceSystemLeakTracker* );
	void IResourceSystemLeakTracker(IResourceSystemLeakTracker* , IResourceSystemLeakTracker& );
	void IResourceSystemLeakTracker(IResourceSystemLeakTracker* , const IResourceSystemLeakTracker& );
	void IResourceSystemLeakTracker(IResourceSystemLeakTracker* );
	int ()(void) * * _vptr.IResourceSystemLeakTracker; /* 0 8 */
	/* ../public/resourcesystem/iresourcesystem.h:443 */
	virtual void ResourceReferenceLeakTracking_AddRef(IResourceSystemLeakTracker* , ResourceHandle_t, ResourceLeakTrackingGroup_t, uintp);
	/* ../public/resourcesystem/iresourcesystem.h:444 */
	virtual void ResourceReferenceLeakTracking_Release(IResourceSystemLeakTracker* , ResourceHandle_t, ResourceLeakTrackingGroup_t, uintp);
	/* ../public/resourcesystem/iresourcesystem.h:445 */
	virtual void ResourceReferenceLeakTracking_ReportReferences(IResourceSystemLeakTracker* , ResourceHandle_t);
};

// <02359890> ../public/resourcesystem/iresourcesystem.h:465
void IResourceSystem::IResourceSystem()
{
} /* size: 0 */

// <02359873> ../public/resourcesystem/iresourcesystem.h:465
inline void IResourceSystem::IResourceSystem()
{
} /* size: 0 */

// <022F119B> ../public/resourcesystem/iresourcesystem.h:465
// member functions: 191
// member variable: 1
// vtable entries: 64
// class size: 8
class IResourceSystem : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void IResourceSystem(IResourceSystem* , IResourceSystem& );
	void IResourceSystem(IResourceSystem* , const IResourceSystem& );
	void IResourceSystem(IResourceSystem* );
	void ~IResourceSystem(IResourceSystem* );
private:
	/* ../public/resourcesystem/iresourcesystem.h:468 */
	virtual void InstallTypeManager(IResourceSystem* , ResourceType_t, IResourceTypeManager* , const char* , const char* );
	/* ../public/resourcesystem/iresourcesystem.h:469 */
	virtual void InstallNullTypeManager(IResourceSystem* , ResourceType_t, const char* );
	/* ../public/resourcesystem/iresourcesystem.h:474 */
	virtual void Update(IResourceSystem* , int, ResourceSystemUpdateMode_t);
	/* ../public/resourcesystem/iresourcesystem.h:477 */
	virtual void UpdateSimple(IResourceSystem* );
	/* ../public/resourcesystem/iresourcesystem.h:480 */
	virtual bool HasPendingWork(IResourceSystem* );
	/* ../public/resourcesystem/iresourcesystem.h:483 */
	virtual bool IsShuttingDown(IResourceSystem* );
	/* ../public/resourcesystem/iresourcesystem.h:490 */
	virtual void RemoveNullTypeManager(IResourceSystem* , ResourceType_t);
	/* ../public/resourcesystem/iresourcesystem.h:491 */
	virtual void RemoveResourceTypeManager(IResourceSystem* , IResourceTypeManager* );
	/* ../public/resourcesystem/iresourcesystem.h:492 */
	virtual IResourceTypeManager* GetTypeManager(IResourceSystem* , ResourceType_t);
	/* ../public/resourcesystem/iresourcesystem.h:496 */
	virtual void RegisterFinishedFrameCounter(IResourceSystem* , uint32* );
	/* ../public/resourcesystem/iresourcesystem.h:497 */
	virtual void UnregisterFinishedFrameCounter(IResourceSystem* , uint32* );
	/* ../public/resourcesystem/iresourcesystem.h:666 */
	void MarkFinishedFrameCounter(IResourceSystem* , uint32* );
	/* ../public/resourcesystem/iresourcesystem.h:512 */
	virtual HResourceManifest LoadResourceManifestFile(IResourceSystem* , const char* , ResourceManifestLoadBehavior_t, const char* , ResourceManifestLoadPriority_t);
	/* ../public/resourcesystem/iresourcesystem.h:513 */
	virtual HResourceManifest LoadResourceManifestGroup(IResourceSystem* , const char* , ResourceManifestLoadBehavior_t, const char* , ResourceManifestLoadPriority_t);
	/* ../public/resourcesystem/iresourcesystem.h:514 */
	virtual HResourceManifest LoadResourceManifestNamed(IResourceSystem* , const char* , ResourceManifestLoadBehavior_t, const char* , ResourceManifestLoadPriority_t);
	/* ../public/resourcesystem/iresourcesystem.h:515 */
	virtual HResourceManifest CreateResourceManifest(IResourceSystem* , const ResourceManifestCreationInfo_t& );
	/* ../public/resourcesystem/iresourcesystem.h:768 */
	HResourceManifest CreateResourceManifest(IResourceSystem* , int, const char** , ResourceManifestType_t, ResourceManifestLoadBehavior_t, const char* , ResourceManifestLoadPriority_t);
	/* ../public/resourcesystem/iresourcesystem.h:775 */
	HResourceManifest CreateResourceManifest(IResourceSystem* , int, const char** , ResourceManifestLoadBehavior_t, const char* , ResourceManifestLoadPriority_t);
	/* ../public/resourcesystem/iresourcesystem.h:782 */
	void BlockingReloadResources(IResourceSystem* , int, const char** , ResourceManifestLoadBehavior_t, const char* );
	/* ../public/resourcesystem/iresourcesystem.h:525 */
	virtual void SetManifestCompletionCallback(IResourceSystem* , HResourceManifest, ResourceManifestLoadCompletionCallback_t, void* );
	/* ../public/resourcesystem/iresourcesystem.h:527 */
	virtual bool IsManifestLoaded(IResourceSystem* , HResourceManifest);
	/* ../public/resourcesystem/iresourcesystem.h:528 */
	virtual void DestroyResourceManifest(IResourceSystem* , HResourceManifest);
	/* ../public/resourcesystem/iresourcesystem.h:529 */
	virtual const char* GetResourceManifestDebugName(IResourceSystem* , HResourceManifest);
	/* ../public/resourcesystem/iresourcesystem.h:534 */
	virtual void ForceSynchronizationAndBlockUntilManifestLoaded(IResourceSystem* , HResourceManifest);
	/* ../public/resourcesystem/iresourcesystem.h:545 */
	virtual ResourceHandle_t FindOrCreateProceduralResource(IResourceSystem* , const CResourceName& , void* , ProceduralResourceType_t);
	/* ../public/resourcesystem/iresourcesystem.h:549 */
	virtual void DeleteResource(IResourceSystem* , ResourceHandle_t);
	/* ../public/resourcesystem/iresourcesystem.h:557 */
	virtual ResourceHandle_t FindOrRegisterResourceByName(IResourceSystem* , const CResourceName& , bool);
	/* ../public/resourcesystem/iresourcesystem.h:558 */
	virtual ResourceHandle_t FindResourceById(IResourceSystem* , ResourceId_t, ResourceType_t);
	/* ../public/resourcesystem/iresourcesystem.h:747 */
	ResourceHandle_t FindExistingResourceByName(IResourceSystem* , const CResourceName& );
	/* ../public/resourcesystem/iresourcesystem.h:757 */
	ResourceHandle_t FindExistingResourceByNameLoadingJustInTime(IResourceSystem* , const CResourceName& );
	/* ../public/resourcesystem/iresourcesystem.h:563 */
	virtual int GetNamedResourceCount(const IResourceSystem* );
	/* ../public/resourcesystem/iresourcesystem.h:564 */
	virtual int GetNamedResources(IResourceSystem* , int, int, ResourceHandle_t* , ResourceSystemGetNamedResourcesFlags_t);
	/* ../public/resourcesystem/iresourcesystem.h:568 */
	virtual void GetAllNamedResourcesByType(IResourceSystem* , ResourceType_t, CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> >& , ResourceSystemGetNamedResourcesFlags_t);
	/* ../public/resourcesystem/iresourcesystem.h:571 */
	virtual int GetAllResourceCount(const IResourceSystem* , ResourceSystemGetResourcesFlags_t);
	/* ../public/resourcesystem/iresourcesystem.h:572 */
	virtual int GetAllResources(IResourceSystem* , int, int, ResourceHandle_t* , ResourceSystemGetResourcesFlags_t);
	/* ../public/resourcesystem/iresourcesystem.h:576 */
	virtual void GetAllResourcesByType(IResourceSystem* , ResourceType_t, CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> >& , ResourceSystemGetResourcesFlags_t);
	/* ../public/resourcesystem/iresourcesystem.h:579 */
	virtual ResourceId_t ResourceHandleToResourceId(const IResourceSystem* , ResourceHandle_t);
	/* ../public/resourcesystem/iresourcesystem.h:580 */
	virtual void GetResourceName(IResourceSystem* , ResourceHandle_t, CBufferString* , bool);
	/* ../public/resourcesystem/iresourcesystem.h:581 */
	virtual void GetResourceName(IResourceSystem* , ResourceHandle_t, CResourceName* );
	/* ../public/resourcesystem/iresourcesystem.h:582 */
	virtual ResourceType_t GetResourceType(IResourceSystem* , ResourceHandle_t);
	/* ../public/resourcesystem/iresourcesystem.h:587 */
	virtual ResourceHandle_t GetErrorResource(IResourceSystem* , ResourceType_t);
	/* ../public/resourcesystem/iresourcesystem.h:591 */
	virtual const char* GetResourceTypeName(IResourceSystem* , ResourceType_t);
	/* ../public/resourcesystem/iresourcesystem.h:597 */
	virtual void MarkErrorResourcesReloaded(IResourceSystem* );
	/* ../public/resourcesystem/iresourcesystem.h:599 */
	virtual ResourceHandle_t CreateEmptyResource(IResourceSystem* , const CResourceName& );
	/* ../public/resourcesystem/iresourcesystem.h:604 */
	virtual ResourceHandle_t BlockingLoadResourceByName(IResourceSystem* , const CResourceName& , const char* );
	/* ../public/resourcesystem/iresourcesystem.h:605 */
	virtual ResourceHandle_t BlockingLoadResourceByNameIntoJustInTimeManifest(IResourceSystem* , const CResourceName& , const char* );
	/* ../public/resourcesystem/iresourcesystem.h:606 */
	virtual void FreeJustInTimeManifests(IResourceSystem* );
	/* ../public/resourcesystem/iresourcesystem.h:607 */
	virtual int GetJustInTimeManifestCount(IResourceSystem* );
	/* ../public/resourcesystem/iresourcesystem.h:608 */
	virtual void GetJustInTimeManifestResources(IResourceSystem* , CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> >& );
	/* ../public/resourcesystem/iresourcesystem.h:609 */
	virtual void EnsureResourceByNameIntoJustInTimeManifest(IResourceSystem* , const CResourceName& , const char* );
	/* ../public/resourcesystem/iresourcesystem.h:611 */
	virtual void InstallResourceUpdater(IResourceSystem* , IResourceUpdater* );
	/* ../public/resourcesystem/iresourcesystem.h:612 */
	virtual void UninstallResourceUpdater(IResourceSystem* , IResourceUpdater* );
	/* ../public/resourcesystem/iresourcesystem.h:615 */
	virtual void GetActualFileName(IResourceSystem* , ResourceHandle_t, CBufferString* , bool);
	/* ../public/resourcesystem/iresourcesystem.h:619 */
	virtual ResourceStatus_t GetResourceStatus(IResourceSystem* , const CResourceName& );
	/* ../public/resourcesystem/iresourcesystem.h:620 */
	virtual ResourceStatus_t GetResourceStatus(IResourceSystem* , ResourceId_t);
	/* ../public/resourcesystem/iresourcesystem.h:626 */
	virtual void RegisterForcedSynchronizationCallback(IResourceSystem* , ResourceSystemForcedSynchronizationCallback_t, void* );
	/* ../public/resourcesystem/iresourcesystem.h:627 */
	virtual void UnregisterForcedSynchronizationCallback(IResourceSystem* , ResourceSystemForcedSynchronizationCallback_t, void* );
	/* ../public/resourcesystem/iresourcesystem.h:629 */
	virtual void GetResourcesNamesInManifest(const IResourceSystem* , HResourceManifest, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/resourcesystem/iresourcesystem.h:631 */
	virtual void RegisterToolsResourceListener(IResourceSystem* , IToolsResourceListener* );
	/* ../public/resourcesystem/iresourcesystem.h:632 */
	virtual void UnregisterToolsResourceListener(IResourceSystem* , IToolsResourceListener* );
	/* ../public/resourcesystem/iresourcesystem.h:634 */
	virtual ICodeResourceManifestManager* GetCodeResourceManifestManager(IResourceSystem* );
	/* ../public/resourcesystem/iresourcesystem.h:635 */
	virtual IResourceSystemLeakTracker* GetLeakTracker(IResourceSystem* );
	/* ../public/resourcesystem/iresourcesystem.h:637 */
	virtual void SetResourceTypeManifestPriority(IResourceSystem* , ResourceType_t, ResourceManifestPriority_t);
	/* ../public/resourcesystem/iresourcesystem.h:639 */
	virtual void BlockingFinishAllCurrentlyLoadingManifests(IResourceSystem* );
	/* ../public/resourcesystem/iresourcesystem.h:642 */
	virtual bool HasCompletedIORequests(IResourceSystem* );
	/* ../public/resourcesystem/iresourcesystem.h:645 */
	virtual void EnableDebugMode(IResourceSystem* , ResourceSystemDebugMode_t, bool);
	/* ../public/resourcesystem/iresourcesystem.h:648 */
	virtual AsyncRequestPriority_t GetAsyncFileRequestPriority(const IResourceSystem* , ResourceManifestLoadPriority_t);
	/* ../public/resourcesystem/iresourcesystem.h:651 */
	virtual IGenericDataTypeManager* GetGenericDataTypeManager(IResourceSystem* );
	/* ../public/resourcesystem/iresourcesystem.h:654 */
	virtual void ReloadSymlinkedResidentResources(IResourceSystem* );
	/* ../public/resourcesystem/iresourcesystem.h:656 */
	virtual bool IsInFrameUpdate(IResourceSystem* );
	HandleType_t FindResourceById<2019914870>(class IResourceSystem *, class ResourceId_t); /* linkage=_ZN15IResourceSystem16FindResourceByIdILy2019914870EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tE12ResourceId_t */
	HandleType_t FindOrRegisterResourceByName<2019914870>(class IResourceSystem *, const class CResourceName  &, bool); /* linkage=_ZN15IResourceSystem28FindOrRegisterResourceByNameILy2019914870EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceNameb */
	HandleType_t FindOrCreateProceduralResource<2019914870>(class IResourceSystem *, const class CResourceName  &, void *, enum ProceduralResourceType_t); /* linkage=_ZN15IResourceSystem30FindOrCreateProceduralResourceILy2019914870EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceNamePv24ProceduralResourceType_t */
	HandleType_t FindExistingResourceByName<2019914870>(class IResourceSystem *, const class CResourceName  &); /* linkage=_ZN15IResourceSystem26FindExistingResourceByNameILy2019914870EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceName */
	void InstallTypeManager<2019914870>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy2019914870EEEvP20IResourceTypeManagerPKc */
	ResourceHandle_t FindExistingResourceByName(class IResourceSystem *, const class CResourceName  &); /* linkage=_ZN15IResourceSystem26FindExistingResourceByNameERK13CResourceName */
	HandleType_t FindOrCreateProceduralResource<448612625782>(class IResourceSystem *, const class CResourceName  &, void *, enum ProceduralResourceType_t); /* linkage=_ZN15IResourceSystem30FindOrCreateProceduralResourceILy448612625782EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceNamePv24ProceduralResourceType_t */
	HandleType_t FindOrCreateProceduralResource<1818520950>(class IResourceSystem *, const class CResourceName  &, void *, enum ProceduralResourceType_t); /* linkage=_ZN15IResourceSystem30FindOrCreateProceduralResourceILy1818520950EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceNamePv24ProceduralResourceType_t */
	void InstallTypeManager<1818520950>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy1818520950EEEvP20IResourceTypeManagerPKc */
	HandleType_t FindExistingResourceByName<7525640765879247222>(class IResourceSystem *, const class CResourceName  &); /* linkage=_ZN15IResourceSystem26FindExistingResourceByNameILy7525640765879247222EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceName */
	HandleType_t FindExistingResourceByName<1818520950>(class IResourceSystem *, const class CResourceName  &); /* linkage=_ZN15IResourceSystem26FindExistingResourceByNameILy1818520950EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceName */
	void InstallTypeManager<448612625782>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy448612625782EEEvP20IResourceTypeManagerPKc */
	void InstallTypeManager<440006569334>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy440006569334EEEvP20IResourceTypeManagerPKc */
	HandleType_t FindResourceById<1952542070>(class IResourceSystem *, class ResourceId_t); /* linkage=_ZN15IResourceSystem16FindResourceByIdILy1952542070EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tE12ResourceId_t */
	HandleType_t BlockingLoadResourceByName<125779801368691>(class IResourceSystem *, const class CResourceName  &, const char  *); /* linkage=_ZN15IResourceSystem26BlockingLoadResourceByNameILy125779801368691EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceNamePKc */
	HandleType_t FindOrCreateProceduralResource<1952542070>(class IResourceSystem *, const class CResourceName  &, void *, enum ProceduralResourceType_t); /* linkage=_ZN15IResourceSystem30FindOrCreateProceduralResourceILy1952542070EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceNamePv24ProceduralResourceType_t */
	HandleType_t FindOrRegisterResourceByName<1952542070>(class IResourceSystem *, const class CResourceName  &, bool); /* linkage=_ZN15IResourceSystem28FindOrRegisterResourceByNameILy1952542070EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceNameb */
	void BlockingReloadResources(class IResourceSystem *, int, const char  * *, enum ResourceManifestLoadBehavior_t, const char  *); /* linkage=_ZN15IResourceSystem23BlockingReloadResourcesEiPPKc30ResourceManifestLoadBehavior_tS1_ */
	HandleType_t FindExistingResourceByName<125779801368691>(class IResourceSystem *, const class CResourceName  &); /* linkage=_ZN15IResourceSystem26FindExistingResourceByNameILy125779801368691EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceName */
	void InstallTypeManager<1952542070>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy1952542070EEEvP20IResourceTypeManagerPKc */
	void InstallTypeManager<125779801368691>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy125779801368691EEEvP20IResourceTypeManagerPKc */
	HandleType_t BlockingLoadResourceByName<1952542070>(class IResourceSystem *, const class CResourceName  &, const char  *); /* linkage=_ZN15IResourceSystem26BlockingLoadResourceByNameILy1952542070EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceNamePKc */
	HResourceManifest CreateResourceManifest(class IResourceSystem *, int, const char  * *, enum ResourceManifestLoadBehavior_t, const char  *, enum ResourceManifestLoadPriority_t); /* linkage=_ZN15IResourceSystem22CreateResourceManifestEiPPKc30ResourceManifestLoadBehavior_tS1_30ResourceManifestLoadPriority_t */
	void InstallNullTypeManager<500152889462>(class IResourceSystem *); /* linkage=_ZN15IResourceSystem22InstallNullTypeManagerILy500152889462EEEvv */
	HandleType_t FindOrRegisterResourceByName<1684960118>(class IResourceSystem *, const class CResourceName  &, bool); /* linkage=_ZN15IResourceSystem28FindOrRegisterResourceByNameILy1684960118EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceNameb */
	HandleType_t BlockingLoadResourceByName<2019914870>(class IResourceSystem *, const class CResourceName  &, const char  *); /* linkage=_ZN15IResourceSystem26BlockingLoadResourceByNameILy2019914870EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceNamePKc */
	void InstallTypeManager<495958126710>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy495958126710EEEvP20IResourceTypeManagerPKc */
	HandleType_t FindOrRegisterResourceByName<1936291446>(class IResourceSystem *, const class CResourceName  &, bool); /* linkage=_ZN15IResourceSystem28FindOrRegisterResourceByNameILy1936291446EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceNameb */
	HandleType_t FindOrRegisterResourceByName<431316170614>(class IResourceSystem *, const class CResourceName  &, bool); /* linkage=_ZN15IResourceSystem28FindOrRegisterResourceByNameILy431316170614EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceNameb */
	void InstallTypeManager<495874631030>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy495874631030EEEvP20IResourceTypeManagerPKc */
	void InstallTypeManager<1936291446>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy1936291446EEEvP20IResourceTypeManagerPKc */
	void InstallTypeManager<431316170614>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy431316170614EEEvP20IResourceTypeManagerPKc */
	HandleType_t FindOrRegisterResourceByName<431366240118>(class IResourceSystem *, const class CResourceName  &, bool); /* linkage=_ZN15IResourceSystem28FindOrRegisterResourceByNameILy431366240118EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceNameb */
	void InstallTypeManager<431366240118>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy431366240118EEEvP20IResourceTypeManagerPKc */
	HandleType_t FindExistingResourceByName<495958126710>(class IResourceSystem *, const class CResourceName  &); /* linkage=_ZN15IResourceSystem26FindExistingResourceByNameILy495958126710EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceName */
	HandleType_t FindOrCreateProceduralResource<125779801368691>(class IResourceSystem *, const class CResourceName  &, void *, enum ProceduralResourceType_t); /* linkage=_ZN15IResourceSystem30FindOrCreateProceduralResourceILy125779801368691EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceNamePv24ProceduralResourceType_t */
	HandleType_t FindExistingResourceByNameLoadingJustInTime<7525640765879247222>(class IResourceSystem *, const class CResourceName  &); /* linkage=_ZN15IResourceSystem43FindExistingResourceByNameLoadingJustInTimeILy7525640765879247222EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceName */
	ResourceHandle_t FindExistingResourceByNameLoadingJustInTime(class IResourceSystem *, const class CResourceName  &); /* linkage=_ZN15IResourceSystem43FindExistingResourceByNameLoadingJustInTimeERK13CResourceName */
	void InstallTypeManager<418564367478>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy418564367478EEEvP20IResourceTypeManagerPKc */
	void IResourceSystem(class IResourceSystem *, class IResourceSystem &); /* linkage=_ZN15IResourceSystemC4EOS_ */
	void IResourceSystem(class IResourceSystem *, const class IResourceSystem  &); /* linkage=_ZN15IResourceSystemC4ERKS_ */
	void IResourceSystem(class IResourceSystem *); /* linkage=_ZN15IResourceSystemC4Ev */
	void ~IResourceSystem(class IResourceSystem *); /* linkage=_ZN15IResourceSystemD4Ev */
	virtual void InstallTypeManager(class IResourceSystem *, ResourceType_t, class IResourceTypeManager *, const char  *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerEyP20IResourceTypeManagerPKcS3_ */
	virtual void InstallNullTypeManager(class IResourceSystem *, ResourceType_t, const char  *); /* linkage=_ZN15IResourceSystem22InstallNullTypeManagerEyPKc */
	virtual void Update(class IResourceSystem *, int, enum ResourceSystemUpdateMode_t); /* linkage=_ZN15IResourceSystem6UpdateEi26ResourceSystemUpdateMode_t */
	virtual void UpdateSimple(class IResourceSystem *); /* linkage=_ZN15IResourceSystem12UpdateSimpleEv */
	virtual bool HasPendingWork(class IResourceSystem *); /* linkage=_ZN15IResourceSystem14HasPendingWorkEv */
	virtual bool IsShuttingDown(class IResourceSystem *); /* linkage=_ZN15IResourceSystem14IsShuttingDownEv */
	virtual void RemoveNullTypeManager(class IResourceSystem *, ResourceType_t); /* linkage=_ZN15IResourceSystem21RemoveNullTypeManagerEy */
	virtual void RemoveResourceTypeManager(class IResourceSystem *, class IResourceTypeManager *); /* linkage=_ZN15IResourceSystem25RemoveResourceTypeManagerEP20IResourceTypeManager */
	virtual class IResourceTypeManager * GetTypeManager(class IResourceSystem *, ResourceType_t); /* linkage=_ZN15IResourceSystem14GetTypeManagerEy */
	virtual void RegisterFinishedFrameCounter(class IResourceSystem *, uint32 *); /* linkage=_ZN15IResourceSystem28RegisterFinishedFrameCounterEPj */
	virtual void UnregisterFinishedFrameCounter(class IResourceSystem *, uint32 *); /* linkage=_ZN15IResourceSystem30UnregisterFinishedFrameCounterEPj */
	void MarkFinishedFrameCounter(class IResourceSystem *, uint32 *); /* linkage=_ZN15IResourceSystem24MarkFinishedFrameCounterEPj */
	virtual HResourceManifest LoadResourceManifestFile(class IResourceSystem *, const char  *, enum ResourceManifestLoadBehavior_t, const char  *, enum ResourceManifestLoadPriority_t); /* linkage=_ZN15IResourceSystem24LoadResourceManifestFileEPKc30ResourceManifestLoadBehavior_tS1_30ResourceManifestLoadPriority_t */
	virtual HResourceManifest LoadResourceManifestGroup(class IResourceSystem *, const char  *, enum ResourceManifestLoadBehavior_t, const char  *, enum ResourceManifestLoadPriority_t); /* linkage=_ZN15IResourceSystem25LoadResourceManifestGroupEPKc30ResourceManifestLoadBehavior_tS1_30ResourceManifestLoadPriority_t */
	virtual HResourceManifest LoadResourceManifestNamed(class IResourceSystem *, const char  *, enum ResourceManifestLoadBehavior_t, const char  *, enum ResourceManifestLoadPriority_t); /* linkage=_ZN15IResourceSystem25LoadResourceManifestNamedEPKc30ResourceManifestLoadBehavior_tS1_30ResourceManifestLoadPriority_t */
	virtual HResourceManifest CreateResourceManifest(class IResourceSystem *, const class ResourceManifestCreationInfo_t  &); /* linkage=_ZN15IResourceSystem22CreateResourceManifestERK30ResourceManifestCreationInfo_t */
	HResourceManifest CreateResourceManifest(class IResourceSystem *, int, const char  * *, enum ResourceManifestType_t, enum ResourceManifestLoadBehavior_t, const char  *, enum ResourceManifestLoadPriority_t); /* linkage=_ZN15IResourceSystem22CreateResourceManifestEiPPKc22ResourceManifestType_t30ResourceManifestLoadBehavior_tS1_30ResourceManifestLoadPriority_t */
	virtual void SetManifestCompletionCallback(class IResourceSystem *, HResourceManifest, ResourceManifestLoadCompletionCallback_t, void *); /* linkage=_ZN15IResourceSystem29SetManifestCompletionCallbackEP19HResourceManifest__PFvS1_PvES2_ */
	virtual bool IsManifestLoaded(class IResourceSystem *, HResourceManifest); /* linkage=_ZN15IResourceSystem16IsManifestLoadedEP19HResourceManifest__ */
	virtual void DestroyResourceManifest(class IResourceSystem *, HResourceManifest); /* linkage=_ZN15IResourceSystem23DestroyResourceManifestEP19HResourceManifest__ */
	virtual const char  * GetResourceManifestDebugName(class IResourceSystem *, HResourceManifest); /* linkage=_ZN15IResourceSystem28GetResourceManifestDebugNameEP19HResourceManifest__ */
	virtual void ForceSynchronizationAndBlockUntilManifestLoaded(class IResourceSystem *, HResourceManifest); /* linkage=_ZN15IResourceSystem47ForceSynchronizationAndBlockUntilManifestLoadedEP19HResourceManifest__ */
	virtual ResourceHandle_t FindOrCreateProceduralResource(class IResourceSystem *, const class CResourceName  &, void *, enum ProceduralResourceType_t); /* linkage=_ZN15IResourceSystem30FindOrCreateProceduralResourceERK13CResourceNamePv24ProceduralResourceType_t */
	virtual void DeleteResource(class IResourceSystem *, ResourceHandle_t); /* linkage=_ZN15IResourceSystem14DeleteResourceEPK21ResourceBindingBase_t */
	virtual ResourceHandle_t FindOrRegisterResourceByName(class IResourceSystem *, const class CResourceName  &, bool); /* linkage=_ZN15IResourceSystem28FindOrRegisterResourceByNameERK13CResourceNameb */
	virtual ResourceHandle_t FindResourceById(class IResourceSystem *, class ResourceId_t, ResourceType_t); /* linkage=_ZN15IResourceSystem16FindResourceByIdE12ResourceId_ty */
	virtual int GetNamedResourceCount(const class IResourceSystem  *); /* linkage=_ZNK15IResourceSystem21GetNamedResourceCountEv */
	virtual int GetNamedResources(class IResourceSystem *, int, int, ResourceHandle_t *, ResourceSystemGetNamedResourcesFlags_t); /* linkage=_ZN15IResourceSystem17GetNamedResourcesEiiPPK21ResourceBindingBase_t33ResourceSystemGetResourcesFlags_t */
	virtual void GetAllNamedResourcesByType(class IResourceSystem *, ResourceType_t, class CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > &, ResourceSystemGetNamedResourcesFlags_t); /* linkage=_ZN15IResourceSystem26GetAllNamedResourcesByTypeEyR10CUtlVectorIPK21ResourceBindingBase_t10CUtlMemoryIS3_iEE33ResourceSystemGetResourcesFlags_t */
	virtual int GetAllResourceCount(const class IResourceSystem  *, enum ResourceSystemGetResourcesFlags_t); /* linkage=_ZNK15IResourceSystem19GetAllResourceCountE33ResourceSystemGetResourcesFlags_t */
	virtual int GetAllResources(class IResourceSystem *, int, int, ResourceHandle_t *, enum ResourceSystemGetResourcesFlags_t); /* linkage=_ZN15IResourceSystem15GetAllResourcesEiiPPK21ResourceBindingBase_t33ResourceSystemGetResourcesFlags_t */
	virtual void GetAllResourcesByType(class IResourceSystem *, ResourceType_t, class CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > &, enum ResourceSystemGetResourcesFlags_t); /* linkage=_ZN15IResourceSystem21GetAllResourcesByTypeEyR10CUtlVectorIPK21ResourceBindingBase_t10CUtlMemoryIS3_iEE33ResourceSystemGetResourcesFlags_t */
	virtual class ResourceId_t ResourceHandleToResourceId(const class IResourceSystem  *, ResourceHandle_t); /* linkage=_ZNK15IResourceSystem26ResourceHandleToResourceIdEPK21ResourceBindingBase_t */
	virtual void GetResourceName(class IResourceSystem *, ResourceHandle_t, class CBufferString *, bool); /* linkage=_ZN15IResourceSystem15GetResourceNameEPK21ResourceBindingBase_tP13CBufferStringb */
	virtual void GetResourceName(class IResourceSystem *, ResourceHandle_t, class CResourceName *); /* linkage=_ZN15IResourceSystem15GetResourceNameEPK21ResourceBindingBase_tP13CResourceName */
	virtual ResourceType_t GetResourceType(class IResourceSystem *, ResourceHandle_t); /* linkage=_ZN15IResourceSystem15GetResourceTypeEPK21ResourceBindingBase_t */
	virtual ResourceHandle_t GetErrorResource(class IResourceSystem *, ResourceType_t); /* linkage=_ZN15IResourceSystem16GetErrorResourceEy */
	virtual const char  * GetResourceTypeName(class IResourceSystem *, ResourceType_t); /* linkage=_ZN15IResourceSystem19GetResourceTypeNameEy */
	virtual void MarkErrorResourcesReloaded(class IResourceSystem *); /* linkage=_ZN15IResourceSystem26MarkErrorResourcesReloadedEv */
	virtual ResourceHandle_t CreateEmptyResource(class IResourceSystem *, const class CResourceName  &); /* linkage=_ZN15IResourceSystem19CreateEmptyResourceERK13CResourceName */
	virtual ResourceHandle_t BlockingLoadResourceByName(class IResourceSystem *, const class CResourceName  &, const char  *); /* linkage=_ZN15IResourceSystem26BlockingLoadResourceByNameERK13CResourceNamePKc */
	virtual ResourceHandle_t BlockingLoadResourceByNameIntoJustInTimeManifest(class IResourceSystem *, const class CResourceName  &, const char  *); /* linkage=_ZN15IResourceSystem48BlockingLoadResourceByNameIntoJustInTimeManifestERK13CResourceNamePKc */
	virtual void FreeJustInTimeManifests(class IResourceSystem *); /* linkage=_ZN15IResourceSystem23FreeJustInTimeManifestsEv */
	virtual int GetJustInTimeManifestCount(class IResourceSystem *); /* linkage=_ZN15IResourceSystem26GetJustInTimeManifestCountEv */
	virtual void GetJustInTimeManifestResources(class IResourceSystem *, class CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > &); /* linkage=_ZN15IResourceSystem30GetJustInTimeManifestResourcesER10CUtlVectorIPK21ResourceBindingBase_t10CUtlMemoryIS3_iEE */
	virtual void EnsureResourceByNameIntoJustInTimeManifest(class IResourceSystem *, const class CResourceName  &, const char  *); /* linkage=_ZN15IResourceSystem42EnsureResourceByNameIntoJustInTimeManifestERK13CResourceNamePKc */
	virtual void InstallResourceUpdater(class IResourceSystem *, class IResourceUpdater *); /* linkage=_ZN15IResourceSystem22InstallResourceUpdaterEP16IResourceUpdater */
	virtual void UninstallResourceUpdater(class IResourceSystem *, class IResourceUpdater *); /* linkage=_ZN15IResourceSystem24UninstallResourceUpdaterEP16IResourceUpdater */
	virtual void GetActualFileName(class IResourceSystem *, ResourceHandle_t, class CBufferString *, bool); /* linkage=_ZN15IResourceSystem17GetActualFileNameEPK21ResourceBindingBase_tP13CBufferStringb */
	virtual enum ResourceStatus_t GetResourceStatus(class IResourceSystem *, const class CResourceName  &); /* linkage=_ZN15IResourceSystem17GetResourceStatusERK13CResourceName */
	virtual enum ResourceStatus_t GetResourceStatus(class IResourceSystem *, class ResourceId_t); /* linkage=_ZN15IResourceSystem17GetResourceStatusE12ResourceId_t */
	virtual void RegisterForcedSynchronizationCallback(class IResourceSystem *, ResourceSystemForcedSynchronizationCallback_t, void *); /* linkage=_ZN15IResourceSystem37RegisterForcedSynchronizationCallbackEPFvPvES0_ */
	virtual void UnregisterForcedSynchronizationCallback(class IResourceSystem *, ResourceSystemForcedSynchronizationCallback_t, void *); /* linkage=_ZN15IResourceSystem39UnregisterForcedSynchronizationCallbackEPFvPvES0_ */
	virtual void GetResourcesNamesInManifest(const class IResourceSystem  *, HResourceManifest, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZNK15IResourceSystem27GetResourcesNamesInManifestEP19HResourceManifest__R10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEE */
	virtual void RegisterToolsResourceListener(class IResourceSystem *, class IToolsResourceListener *); /* linkage=_ZN15IResourceSystem29RegisterToolsResourceListenerEP22IToolsResourceListener */
	virtual void UnregisterToolsResourceListener(class IResourceSystem *, class IToolsResourceListener *); /* linkage=_ZN15IResourceSystem31UnregisterToolsResourceListenerEP22IToolsResourceListener */
	virtual class ICodeResourceManifestManager * GetCodeResourceManifestManager(class IResourceSystem *); /* linkage=_ZN15IResourceSystem30GetCodeResourceManifestManagerEv */
	virtual class IResourceSystemLeakTracker * GetLeakTracker(class IResourceSystem *); /* linkage=_ZN15IResourceSystem14GetLeakTrackerEv */
	virtual void SetResourceTypeManifestPriority(class IResourceSystem *, ResourceType_t, enum ResourceManifestPriority_t); /* linkage=_ZN15IResourceSystem31SetResourceTypeManifestPriorityEy26ResourceManifestPriority_t */
	virtual void BlockingFinishAllCurrentlyLoadingManifests(class IResourceSystem *); /* linkage=_ZN15IResourceSystem42BlockingFinishAllCurrentlyLoadingManifestsEv */
	virtual bool HasCompletedIORequests(class IResourceSystem *); /* linkage=_ZN15IResourceSystem22HasCompletedIORequestsEv */
	virtual void EnableDebugMode(class IResourceSystem *, enum ResourceSystemDebugMode_t, bool); /* linkage=_ZN15IResourceSystem15EnableDebugModeE25ResourceSystemDebugMode_tb */
	virtual enum AsyncRequestPriority_t GetAsyncFileRequestPriority(const class IResourceSystem  *, enum ResourceManifestLoadPriority_t); /* linkage=_ZNK15IResourceSystem27GetAsyncFileRequestPriorityE30ResourceManifestLoadPriority_t */
	virtual class IGenericDataTypeManager * GetGenericDataTypeManager(class IResourceSystem *); /* linkage=_ZN15IResourceSystem25GetGenericDataTypeManagerEv */
	virtual void ReloadSymlinkedResidentResources(class IResourceSystem *); /* linkage=_ZN15IResourceSystem32ReloadSymlinkedResidentResourcesEv */
	virtual bool IsInFrameUpdate(class IResourceSystem *); /* linkage=_ZN15IResourceSystem15IsInFrameUpdateEv */
	void InstallTypeManager<474080965238>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy474080965238EEEvP20IResourceTypeManagerPKc */
	HandleType_t FindOrCreateProceduralResource<1684960118>(class IResourceSystem *, const class CResourceName  &, void *, enum ProceduralResourceType_t); /* linkage=_ZN15IResourceSystem30FindOrCreateProceduralResourceILy1684960118EEEN18ResourceTypeInfo_tIXT_EE12HandleType_tERK13CResourceNamePv24ProceduralResourceType_t */
	void InstallTypeManager<1684960118>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy1684960118EEEvP20IResourceTypeManagerPKc */
	void InstallTypeManager<7525640765695161206>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy7525640765695161206EEEvP20IResourceTypeManagerPKc */
	void InstallTypeManager<7525640765879247222>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy7525640765879247222EEEvP20IResourceTypeManagerPKc */
	void InstallTypeManager<482955714934>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy482955714934EEEvP20IResourceTypeManagerPKc */
	void InstallTypeManager<1902474102>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy1902474102EEEvP20IResourceTypeManagerPKc */
	void InstallTypeManager<469920276854>(class IResourceSystem *, class IResourceTypeManager *, const char  *); /* linkage=_ZN15IResourceSystem18InstallTypeManagerILy469920276854EEEvP20IResourceTypeManagerPKc */
};

// <0269EC9A> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<1684960118>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <023EB489> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<474080965238>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <021D0A48> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<418564367478>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <010F88AE> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<431366240118>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <00F2B122> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<431316170614>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <00F2B0E1> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<1936291446>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <00F2B09C> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<495874631030>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <009F4AFE> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<495958126710>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <00C77E0F> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<469920276854>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <00C77DCE> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<1902474102>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <00C77D89> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<482955714934>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <00C77D44> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<7525640765879247222>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <00C77CFF> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<7525640765695161206>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <00306227> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<2019914870>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <0043D18C> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<440006569334>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <0040ABBB> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<448612625782>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <0016E06B> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<1818520950>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <0039E4E5> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<125779801368691>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <003470D9> ../public/resourcesystem/iresourcesystem.h:671
inline void IResourceSystem::InstallTypeManager<1952542070>(IResourceTypeManager* pTypeManager, const char* pErrorManifestName)
{
} /* size: 0 */

// <00133BFC> ../public/resourcesystem/iresourcesystem.h:681
inline void IResourceSystem::InstallNullTypeManager<500152889462>()
{
} /* size: 0 */

// <0269E88C> ../public/resourcesystem/iresourcesystem.h:690
inline void IResourceSystem::FindOrCreateProceduralResource<1684960118>(const CResourceName& resourceName, void* pResourceData, ProceduralResourceType_t type)
{
} /* size: 0 */

// <01278775> ../public/resourcesystem/iresourcesystem.h:690
inline void IResourceSystem::FindOrCreateProceduralResource<125779801368691>(const CResourceName& resourceName, void* pResourceData, ProceduralResourceType_t type)
{
} /* size: 0 */

// <00C30006> ../public/resourcesystem/iresourcesystem.h:690
inline void IResourceSystem::FindOrCreateProceduralResource<2019914870>(const CResourceName& resourceName, void* pResourceData, ProceduralResourceType_t type)
{
} /* size: 0 */

// <0016DFE0> ../public/resourcesystem/iresourcesystem.h:690
inline void IResourceSystem::FindOrCreateProceduralResource<1818520950>(const CResourceName& resourceName, void* pResourceData, ProceduralResourceType_t type)
{
} /* size: 0 */

// <00092CBF> ../public/resourcesystem/iresourcesystem.h:690
inline void IResourceSystem::FindOrCreateProceduralResource<1952542070>(const CResourceName& resourceName, void* pResourceData, ProceduralResourceType_t type)
{
} /* size: 0 */

// <0269E95D> ../public/resourcesystem/iresourcesystem.h:700
inline void IResourceSystem::FindOrRegisterResourceByName<1684960118>(const CResourceName& resourceName, bool bWarnIfNotLoaded)
{
} /* size: 0 */

// <010075E5> ../public/resourcesystem/iresourcesystem.h:700
inline void IResourceSystem::FindOrRegisterResourceByName<431366240118>(const CResourceName& resourceName, bool bWarnIfNotLoaded)
{
} /* size: 0 */

// <00F2AC87> ../public/resourcesystem/iresourcesystem.h:700
inline void IResourceSystem::FindOrRegisterResourceByName<431316170614>(const CResourceName& resourceName, bool bWarnIfNotLoaded)
{
} /* size: 0 */

// <00F2AC07> ../public/resourcesystem/iresourcesystem.h:700
inline void IResourceSystem::FindOrRegisterResourceByName<1936291446>(const CResourceName& resourceName, bool bWarnIfNotLoaded)
{
} /* size: 0 */

// <00177409> ../public/resourcesystem/iresourcesystem.h:700
inline void IResourceSystem::FindOrRegisterResourceByName<2019914870>(const CResourceName& resourceName, bool bWarnIfNotLoaded)
{
} /* size: 0 */

// <0009302D> ../public/resourcesystem/iresourcesystem.h:700
inline void IResourceSystem::FindOrRegisterResourceByName<1952542070>(const CResourceName& resourceName, bool bWarnIfNotLoaded)
{
} /* size: 0 */

// <06312E9A> ../public/resourcesystem/iresourcesystem.h:709
inline void IResourceSystem::FindResourceById<1952542070>(ResourceId_t nResourceId)
{
} /* size: 0 */

// <001773D5> ../public/resourcesystem/iresourcesystem.h:709
inline void IResourceSystem::FindResourceById<2019914870>(ResourceId_t nResourceId)
{
} /* size: 0 */

// <0127865A> ../public/resourcesystem/iresourcesystem.h:715
inline void IResourceSystem::FindExistingResourceByName<495958126710>(const CResourceName& resourceName)
{
} /* size: 0 */

// <00306183> ../public/resourcesystem/iresourcesystem.h:715
inline void IResourceSystem::FindExistingResourceByName<2019914870>(const CResourceName& resourceName)
{
} /* size: 0 */

// <003590D4> ../public/resourcesystem/iresourcesystem.h:715
inline void IResourceSystem::FindExistingResourceByName<1818520950>(const CResourceName& resourceName)
{
} /* size: 0 */

// <003580FA> ../public/resourcesystem/iresourcesystem.h:715
inline void IResourceSystem::FindExistingResourceByName<7525640765879247222>(const CResourceName& resourceName)
{
} /* size: 0 */

// <00168C6C> ../public/resourcesystem/iresourcesystem.h:715
inline void IResourceSystem::FindExistingResourceByName<125779801368691>(const CResourceName& resourceName)
{
} /* size: 0 */

// <0127A73D> ../public/resourcesystem/iresourcesystem.h:724
inline void IResourceSystem::FindExistingResourceByNameLoadingJustInTime<7525640765879247222>(const CResourceName& resourceName)
{
} /* size: 0 */

// <06091F3B> ../public/resourcesystem/iresourcesystem.h:733
inline void IResourceSystem::BlockingLoadResourceByName<1952542070>(const CResourceName& resourceName, const char* pDebugName)
{
} /* size: 0 */

// <007D0A1E> ../public/resourcesystem/iresourcesystem.h:733
inline void IResourceSystem::BlockingLoadResourceByName<2019914870>(const CResourceName& resourceName, const char* pDebugName)
{
} /* size: 0 */

// <00091A3F> ../public/resourcesystem/iresourcesystem.h:733
inline void IResourceSystem::BlockingLoadResourceByName<125779801368691>(const CResourceName& resourceName, const char* pDebugName)
{
} /* size: 0 */

// <06713CB9> ../public/resourcesystem/iresourcesystem.h:747
inline void IResourceSystem::FindExistingResourceByName(const CResourceName& resourceName)
{
} /* size: 0 */

// <013490AB> ../public/resourcesystem/iresourcesystem.h:757
inline void IResourceSystem::FindExistingResourceByNameLoadingJustInTime(const CResourceName& resourceName)
{
} /* size: 0 */

// <0266BCFB> ../public/resourcesystem/iresourcesystem.h:775
// variable: 1
inline void IResourceSystem::CreateResourceManifest(int nCount, const char ** ppResourceFiles, ResourceManifestLoadBehavior_t nLoadBehavior, const char* pDebugName, ResourceManifestLoadPriority_t nPriority)
{
	ResourceManifestCreationInfo_t info; // 777
} /* size: 0, variables: 1 */

// <023830F0> ../public/resourcesystem/iresourcesystem.h:782
// variables: 2
inline void IResourceSystem::BlockingReloadResources(int nCount, const char ** ppResourceFiles, ResourceManifestLoadBehavior_t nLoadBehavior, const char* pDebugName)
{
	ResourceManifestCreationInfo_t info; // 784
	HResourceManifest hManifest; // 786
} /* size: 0, variables: 2 */

// <00169537> ../public/resourcesystem/iresourcesystem.h:795
// variables: 4
inline HandleType_t BlockingSingleThreadedLoadResource<2019914870>(const CResourceName& resourceName, const char* pDebugName)
{
	HandleType_t hResult; // 798
	const char* pResourceName; // 809
	ResourceManifestCreationInfo_t info; // 810
	HResourceManifest hManifest; // 811
} /* size: 0, variables: 4 */

