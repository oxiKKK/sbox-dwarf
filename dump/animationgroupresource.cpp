
//
// animationgroupresource.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//

// <00D38BA0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationgroupresource.cpp:21
// variables: 3
void CAnimationGroup::Initalize(CConvertOldDiskCtx& convertCtx)
{
	const int  nAnim; // 28
	int nAnimGroups; // 54
	CSequenceGroupData* pSeqGroupData; // 73
} /* size: 0, variables: 3 */

// <00D3623B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationgroupresource.cpp:21
// variables: 11
// function calls: 185
void CAnimationGroup::Initalize(CConvertOldDiskCtx& convertCtx)
{
	const int  nAnim; // 28
	int nAnimGroups; // 54
	CSequenceGroupData* pSeqGroupData; // 73
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 28
	Count(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std: this); // 30
	{
		int iAnim; // 38
		{
			HAnimation_Internal hAnim; // 40
			CAnimData* pAnim; // 41
			_Head_base<1, std::default_delete<CAnimationResource>, true>::_Head_base(); // 561
			_Tuple_impl<1, std::default_delete<CAnimationResource> >::_Tuple_impl(); // 303
			_Head_base<0, CAnimationResource::_Head_base(); // 303
			_Tuple_impl<0, CAnimationResource::_Tuple_impl(); // 966
			tuple<CAnimationResource::tuple(); // 169
			__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 169
			__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::__uniq_ptr_impl(
					pointer __p);  // 234
			__uniq_ptr_data<CAnimationResource, std::default_delete<CAnimationResource>, true, true>::__uniq_ptr_data(
					pointer);  // 311
			unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::unique_ptr<>(
					pointer __p);  // 44
			CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
					int i);  // 44
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
			Release<CAnimData>(CAnimData* pObj); // 370
			CSmartPtr<CAnimData, CRefCountAccessor>::operator=(
					CAnimData* pObj);  // 459
			CUtlString::~CUtlString(); // 460
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
			Release<CAnimData>(CAnimData* pObj); // 344
			CSmartPtr<CAnimData, CRefCountAccessor>::~CSmartPtr(); // 460
			CAnimationResource::~CAnimationResource(); // 92
			default_delete<CAnimationResource>::operator(
					CAnimationResource* __ptr);  // 86
			default_delete<CAnimationResource>::operator(
					CAnimationResource* __ptr);  // 204
			__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::reset(
				pointer __p);  // 184
			__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::operator=(
					__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >& __u);  // 236
			__uniq_ptr_data<CAnimationResource, std::default_delete<CAnimationResource>, true, true>::operator=(
					__uniq_ptr_data<CAnimationResource, std::default_delete<CAnimationResource>, true, true> &);  // 408
			unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::operator=(
					unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> > &);  // 44
			{
				CAnimationResource *& __ptr; // 396
				__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 396
			}
			unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::~unique_ptr(); // 44
			CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
					int i);  // 45
			__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
			unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 465
			unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::operator->(); // 45
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 488
			CWeakHandle<InfoForResourceTypeCAnimData>::GetResourceName(
					CResourceName* pOutName);  // 206
			CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCAnimData>(
										const CWeakHandle<InfoForResourceTypeCAnimData>& resourceHandle);  // 45
			CResourceName::Get(); // 45
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 45
			CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
					int i);  // 40
			CWeakHandle<InfoForResourceTypeCAnimData>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCAnimData>::operator CWeakHandle<InfoForResourceTypeCAnimData>(); // 40
			CWeakHandle<InfoForResourceTypeCAnimData>::GetData(); // 41
			CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
					int i);  // 49
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
			Release<CAnimData>(CAnimData* pObj); // 370
			CSmartPtr<CAnimData, CRefCountAccessor>::operator=(
					CAnimData* pObj);  // 459
			CUtlString::~CUtlString(); // 460
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
			Release<CAnimData>(CAnimData* pObj); // 344
			CSmartPtr<CAnimData, CRefCountAccessor>::~CSmartPtr(); // 460
			CAnimationResource::~CAnimationResource(); // 92
			default_delete<CAnimationResource>::operator(
					CAnimationResource* __ptr);  // 86
			default_delete<CAnimationResource>::operator(
					CAnimationResource* __ptr);  // 204
			__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::reset(
				pointer __p);  // 511
			unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::reset(
				pointer __p);  // 436
			unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::operator=(
					nullptr_t);  // 49
		}
	}
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
			int i);  // 616
	Head(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 30
	CStrongHandle<InfoForResourceTypeCAnimData>::operator==(
			ResourceHandle_t hResource);  // 30
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 616
	Head(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 33
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 33
	{
	}
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTyp this); // 54
	{
		int iAnimGroup; // 56
		{
			HAnimationGroup_Internal hGroup; // 58
			CAnimationGroup* pAnimGroup; // 59
			CUtlMemory<CAnimationGroupResource::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationGroupResource::operator[](
					int i);  // 67
			CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
					int i);  // 58
			CWeakHandle<InfoForResourceTypeCAnimationGroup>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeCAnimationGroup>::GetHandle(); // 58
			CWeakHandle<InfoForResourceTypeCAnimationGroup>::GetData(); // 59
			Mix32HashFunctor::operator(
					uint32 n);  // 139
			PointerHashFunctor::operator(
					const void* s);  // 218
			CUtlHashtable<const ResourceBindingBase_t::Find(
				KeyArg_t k);  // 235
			CUtlHashtable<const ResourceBindingBase_t::HasElement(
					KeyArg_t k);  // 31
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::operator[](
					int i);  // 706
			CUtlKeyValuePair<const ResourceBindingBase_t::CUtlKeyValuePair<const ResourceBindingBase_t*>(
									const ResourceBindingBase_t* const& k);  // 1514
			Construct<CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>, const ResourceBindingBase_t*&>(CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>* pMemory); // 706
			CUtlHashtable<const ResourceBindingBase_t::DoInsert<const ResourceBindingBase_t*>(
								const ResourceBindingBase_t* k,
								unsigned int h,
								bool* pDidInsert);  // 695
			CUtlHashtable<const ResourceBindingBase_t::DoInsert<const ResourceBindingBase_t*>(
								const ResourceBindingBase_t* k,
								unsigned int h,
								bool* pDidInsert);  // 240
			CUtlHashtable<const ResourceBindingBase_t::Insert(
				KeyArg_t k);  // 36
			CConvertOldDiskCtx::RegisterNewSubresource(
						ResourceHandle_t hResource);  // 60
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 488
			CWeakHandle<InfoForResourceTypeCAnimationGroup>::GetResourceName(
					CResourceName* pOutName);  // 206
			CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCAnimationGroup>(
										const CWeakHandle<InfoForResourceTypeCAnimationGroup>& resourceHandle);  // 63
			CSmartPtr<CAnimationGroup, CRefCountAccessor>::CSmartPtr(); // 225
			CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 225
			CUtlString::CUtlString(); // 225
			CAnimationGroupResource::CAnimationGroupResource(); // 62
			CUtlMemory<CAnimationGroupResource::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationGroupResource::operator[](
					int i);  // 62
			CUtlMemory<CAnimationGroupResource::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationGroupResource::operator[](
					int i);  // 63
			CResourceName::Get(); // 63
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 63
		}
	}
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
	CUtlString::~CUtlString(); // 21
	CSequenceGroupResource::~CSequenceGroupResource(); // 92
	default_delete<CSequenceGroupResource>::operator(
			CSequenceGroupResource* __ptr);  // 86
	default_delete<CSequenceGroupResource>::operator(
			CSequenceGroupResource* __ptr);  // 204
	__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::reset(
		pointer __p);  // 511
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::reset(
		pointer __p);  // 436
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::operator=(
			nullptr_t);  // 71
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::GetData(); // 73
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
	CUtlString::~CUtlString(); // 21
	CSequenceGroupResource::~CSequenceGroupResource(); // 92
	default_delete<CSequenceGroupResource>::operator(
			CSequenceGroupResource* __ptr);  // 86
	default_delete<CSequenceGroupResource>::operator(
			CSequenceGroupResource* __ptr);  // 204
	__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::reset(
		pointer __p);  // 184
	__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::operator=(
			__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >& __u);  // 236
	__uniq_ptr_data<CSequenceGroupResource, std::default_delete<CSequenceGroupResource>, true, true>::operator=(
			__uniq_ptr_data<CSequenceGroupResource, std::default_delete<CSequenceGroupResource>, true, true> &);  // 408
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::operator=(
			unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> > &);  // 76
	CUtlString::CUtlString(); // 20
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::CSmartPtr(); // 20
	CSequenceGroupResource::CSequenceGroupResource(); // 76
	_Head_base<1, std::default_delete<CSequenceGroupResource>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CSequenceGroupResource> >::_Tuple_impl(); // 303
	_Head_base<0, CSequenceGroupResource::_Head_base(); // 303
	_Tuple_impl<0, CSequenceGroupResource::_Tuple_impl(); // 966
	tuple<CSequenceGroupResource::tuple(); // 169
	__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 169
	__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CSequenceGroupResource, std::default_delete<CSequenceGroupResource>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::unique_ptr<>(
			pointer __p);  // 76
	__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 472
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get(); // 465
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::operator->(); // 77
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 76
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 906
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::GetResourceName(
			CResourceName* pOutName);  // 211
	CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCSequenceGroupData>(
									const CStrongHandle<InfoForResourceTypeCSequenceGroupData>& resourceHandle);  // 77
	CResourceName::Get(); // 77
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 77
} /* size: 0, variables: 3, inline expansions: 67 (2359 bytes) */

// <00D1C806> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationgroupresource.cpp:21
// variables: 11
void CAnimationGroup::Initalize(CConvertOldDiskCtx& convertCtx)
{
	const int  nAnim; // 28
	const char   __FUNCTION__; // 21898
	int nAnimGroups; // 54
	CSequenceGroupData* pSeqGroupData; // 73
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 33
	}
	{
		int iAnim; // 38
		{
			HAnimation_Internal hAnim; // 40
			CAnimData* pAnim; // 41
		}
	}
	{
		int iAnimGroup; // 56
		{
			HAnimationGroup_Internal hGroup; // 58
			CAnimationGroup* pAnimGroup; // 59
		}
	}
} /* size: 0, variables: 4 */

// <00D1C42F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationgroupresource.cpp:84
// variables: 2
// function calls: 15
void CAnimationGroupResource::InitFromV0Data(CConvertOldDiskCtx& convertCtx, CAnimationGroup* pData, const char* pName)
{
	const char   __FUNCTION__; // 22033
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 86
	}
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator==(
			const CAnimationGroup* pOther);  // 86
	CUtlString::operator=(
			const char* src);  // 87
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimationGroup>(CAnimationGroup* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CAnimationGroup>(CAnimationGroup* pObj); // 370
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator=(
			CAnimationGroup* pObj);  // 88
	CAnimationGroup::Initalize(
			CConvertOldDiskCtx& convertCtx);  // 89
} /* size: 0, variables: 1, inline expansions: 15 (299 bytes) */

// <00D1C287> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationgroupresource.cpp:95
// function calls: 8
void CAnimationGroupResource::~CAnimationGroupResource()
{
	CUtlString::~CUtlString(); // 97
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CAnimationGroup>(CAnimationGroup* pObj); // 344
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::~CSmartPtr(); // 97
} /* size: 117, inline expansions: 8 (266 bytes) */

// <00D1C03C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationgroupresource.cpp:95
// function calls: 11
void CAnimationGroupResource::~CAnimationGroupResource()
{
	CUtlString::~CUtlString(); // 97
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CAnimationGroup>(CAnimationGroup* pObj); // 344
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::~CSmartPtr(); // 97
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 328
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted(); // 97
	CAnimationGroupResource::~CAnimationGroupResource(); // 97
} /* size: 123, inline expansions: 11 (314 bytes) */

// <00D1C023> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationgroupresource.cpp:95
void CAnimationGroupResource::~CAnimationGroupResource()
{
} /* size: 0 */

// <00D1AADD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationgroupresource.cpp:102
// variables: 6
// function calls: 100
void CAnimationGroupResource::InitFromV0DataEmbedded(CConvertOldDiskCtx& convertCtx, CAnimationGroup* pData, CAnimData* pAnimDataV0, CSequenceGroupData* pSeqGroupV0, const char* pName)
{
	const char   __FUNCTION__; // 22249
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 104
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 111
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
	}
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator==(
			const CAnimationGroup* pOther);  // 104
	CUtlString::operator=(
			const char* src);  // 105
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimationGroup>(CAnimationGroup* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CAnimationGroup>(CAnimationGroup* pObj); // 370
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator=(
			CAnimationGroup* pObj);  // 106
	CAnimationGroup::Initalize(
			CConvertOldDiskCtx& convertCtx);  // 107
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 111
	Count(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std: this); // 111
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 112
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 112
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 489
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::operator bool(); // 854
	operator==<CAnimationResource, std::default_delete<CAnimationResource> >(const unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >& __x,
										nullptr_t);  // 112
	_Head_base<1, std::default_delete<CAnimationResource>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CAnimationResource> >::_Tuple_impl(); // 303
	_Head_base<0, CAnimationResource::_Head_base(); // 303
	_Tuple_impl<0, CAnimationResource::_Tuple_impl(); // 966
	tuple<CAnimationResource::tuple(); // 169
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 169
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CAnimationResource, std::default_delete<CAnimationResource>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::unique_ptr<>(
			pointer __p);  // 113
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 113
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 113
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CAnimData>(CAnimData* pObj); // 370
	CSmartPtr<CAnimData, CRefCountAccessor>::operator=(
			CAnimData* pObj);  // 459
	CUtlString::~CUtlString(); // 460
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CAnimData>(CAnimData* pObj); // 344
	CSmartPtr<CAnimData, CRefCountAccessor>::~CSmartPtr(); // 460
	CAnimationResource::~CAnimationResource(); // 92
	default_delete<CAnimationResource>::operator(
			CAnimationResource* __ptr);  // 86
	default_delete<CAnimationResource>::operator(
			CAnimationResource* __ptr);  // 204
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::reset(
		pointer __p);  // 184
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::operator=(
			__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >& __u);  // 236
	__uniq_ptr_data<CAnimationResource, std::default_delete<CAnimationResource>, true, true>::operator=(
			__uniq_ptr_data<CAnimationResource, std::default_delete<CAnimationResource>, true, true> &);  // 408
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::operator=(
			unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> > &);  // 113
	{
		CAnimationResource *& __ptr; // 396
		__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 396
	}
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::~unique_ptr(); // 113
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 114
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 114
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 465
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::operator->(); // 114
	CUtlString::CUtlString(); // 20
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::CSmartPtr(); // 20
	CSequenceGroupResource::CSequenceGroupResource(); // 119
	_Head_base<1, std::default_delete<CSequenceGroupResource>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CSequenceGroupResource> >::_Tuple_impl(); // 303
	_Head_base<0, CSequenceGroupResource::_Head_base(); // 303
	_Tuple_impl<0, CSequenceGroupResource::_Tuple_impl(); // 966
	tuple<CSequenceGroupResource::tuple(); // 169
	__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 169
	__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CSequenceGroupResource, std::default_delete<CSequenceGroupResource>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::unique_ptr<>(
			pointer __p);  // 119
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 119
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
	CUtlString::~CUtlString(); // 21
	CSequenceGroupResource::~CSequenceGroupResource(); // 92
	default_delete<CSequenceGroupResource>::operator(
			CSequenceGroupResource* __ptr);  // 86
	default_delete<CSequenceGroupResource>::operator(
			CSequenceGroupResource* __ptr);  // 204
	__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::reset(
		pointer __p);  // 184
	__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::operator=(
			__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >& __u);  // 236
	__uniq_ptr_data<CSequenceGroupResource, std::default_delete<CSequenceGroupResource>, true, true>::operator=(
			__uniq_ptr_data<CSequenceGroupResource, std::default_delete<CSequenceGroupResource>, true, true> &);  // 408
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::operator=(
			unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> > &);  // 119
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 119
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 120
	__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 472
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get(); // 465
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::operator->(); // 120
} /* size: 0, variables: 1, inline expansions: 98 (3977 bytes) */

