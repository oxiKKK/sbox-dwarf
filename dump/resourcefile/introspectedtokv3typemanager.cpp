
//
// resourcefile/introspectedtokv3typemanager.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//
//	functions: 26
//

// <06711A68> resourcefile/introspectedtokv3typemanager.cpp:25
// function call: 1
void CBaseIntrospectedToKV3TypeManager::CBaseIntrospectedToKV3TypeManager(ResourceType_t nResourceType)
{
	IResourceTypeManager::IResourceTypeManager(); // 25
} /* size: 34, inline expansions: 1 (0 bytes) */

// <06711A43> resourcefile/introspectedtokv3typemanager.cpp:25
void CBaseIntrospectedToKV3TypeManager::CBaseIntrospectedToKV3TypeManager(ResourceType_t nResourceType)
{
} /* size: 0 */

// <06711A07> resourcefile/introspectedtokv3typemanager.cpp:32
void CBaseIntrospectedToKV3TypeManager::Init(IResourceSystemUtils* pUtils)
{
} /* size: 14 */

// <067119D9> resourcefile/introspectedtokv3typemanager.cpp:41
void CBaseIntrospectedToKV3TypeManager::Shutdown()
{
} /* size: 5 */

// <067119AB> resourcefile/introspectedtokv3typemanager.cpp:48
void CBaseIntrospectedToKV3TypeManager::WantsAsyncProcessData()
{
} /* size: 10 */

// <0670ED60> resourcefile/introspectedtokv3typemanager.cpp:57
void AsyncProcessResult::AsyncProcessResult()
{
} /* size: 0 */

// <0670ED44> resourcefile/introspectedtokv3typemanager.cpp:57
inline void AsyncProcessResult::AsyncProcessResult()
{
} /* size: 0 */

// <06711627> resourcefile/introspectedtokv3typemanager.cpp:59
// variables: 2
// function calls: 13
void AsyncProcessResult::~AsyncProcessResult()
{
	{
		CKV3ResourceBlockHelper *& __ptr; // 396
		__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
		unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get_deleter(); // 398
		{
			CKeyValues3Context *& __ptr; // 396
			__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 396
			unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get_deleter(); // 398
			default_delete<CKeyValues3Context>::operator(
					CKeyValues3Context* __ptr);  // 86
			default_delete<CKeyValues3Context>::operator(
					CKeyValues3Context* __ptr);  // 398
		}
		unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::~unique_ptr(); // 20
		IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 20
		CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 20
		CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 92
		default_delete<CKV3ResourceBlockHelper>::operator(
				CKV3ResourceBlockHelper* __ptr);  // 398
	}
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 61
	CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper(); // 61
} /* size: 163, inline expansions: 2 (127 bytes) */

// <06711272> resourcefile/introspectedtokv3typemanager.cpp:59
// variables: 2
// function calls: 15
void AsyncProcessResult::~AsyncProcessResult()
{
	{
		CKV3ResourceBlockHelper *& __ptr; // 396
		__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
		unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get_deleter(); // 398
		{
			CKeyValues3Context *& __ptr; // 396
			__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 396
			unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get_deleter(); // 398
			default_delete<CKeyValues3Context>::operator(
					CKeyValues3Context* __ptr);  // 86
			default_delete<CKeyValues3Context>::operator(
					CKeyValues3Context* __ptr);  // 398
		}
		unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::~unique_ptr(); // 20
		IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 20
		CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 20
		CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 92
		default_delete<CKV3ResourceBlockHelper>::operator(
				CKV3ResourceBlockHelper* __ptr);  // 398
	}
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 61
	CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper(); // 61
	IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 61
	AsyncProcessResult::~AsyncProcessResult(); // 61
} /* size: 159, inline expansions: 4 (230 bytes) */

// <06711259> resourcefile/introspectedtokv3typemanager.cpp:59
inline void AsyncProcessResult::~AsyncProcessResult()
{
} /* size: 0 */

// <0670FCD4> resourcefile/introspectedtokv3typemanager.cpp:70
// variables: 10
// function calls: 88
void CBaseIntrospectedToKV3TypeManager::AsyncProcessData(ResourceHandle_t hResource, const ResourceFileHeader_t* pHeader)
{
	bool bIntrospected; // 72
	unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> > pResult; // 77
	const char   __FUNCTION__; // 56863
	{
		CResourceNameGetter resourceName; // 100
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 100
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 104
		CResourceName::Get(); // 101
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 106
	}
	IAsyncProcessedDataResult::IAsyncProcessedDataResult(); // 57
	CIntrospectedToKV3ResourceBlockHelper::CIntrospectedToKV3ResourceBlockHelper(); // 57
	_Head_base<1, std::default_delete<CKV3ResourceBlockHelper>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >::_Tuple_impl(); // 303
	_Head_base<0, CKV3ResourceBlockHelper::_Head_base(); // 303
	_Tuple_impl<0, CKV3ResourceBlockHelper::_Tuple_impl(); // 966
	tuple<CKV3ResourceBlockHelper::tuple(); // 167
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::__uniq_ptr_impl(); // 232
	__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::__uniq_ptr_data(); // 298
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::unique_ptr<>(); // 57
	AsyncProcessResult::AsyncProcessResult(); // 31
	_Head_base<1, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >::_Tuple_impl(); // 303
	_Head_base<0, CBaseIntrospectedToKV3TypeManager::AsyncProcessResult::_Head_base(); // 303
	_Tuple_impl<0, CBaseIntrospectedToKV3TypeManager::AsyncProcessResult::_Tuple_impl(); // 966
	tuple<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult::tuple(); // 169
	_M_ptr(const __uniq_ptr_impl<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3Ty this); // 169
	__uniq_ptr_impl(const __uniq_ptr_impl<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3Ty this,
			pointer __p);  // 234
	__uniq_ptr_data(const __uniq_ptr_data<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3Ty this,
			pointer);  // 311
	unique_ptr<>(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this,
			pointer __p);  // 31
	make_unique<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>(void); // 77
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 184
	{
		CKeyValues3Context *& __ptr; // 396
		__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 396
		unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get_deleter(); // 398
		default_delete<CKeyValues3Context>::operator(
				CKeyValues3Context* __ptr);  // 86
		default_delete<CKeyValues3Context>::operator(
				CKeyValues3Context* __ptr);  // 398
	}
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::~unique_ptr(); // 20
	IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 20
	CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 20
	CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 92
	default_delete<CKV3ResourceBlockHelper>::operator(
			CKV3ResourceBlockHelper* __ptr);  // 204
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::reset(
		pointer __p);  // 184
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
			__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __u);  // 236
	__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::operator=(
			__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true> &);  // 408
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
			unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > &);  // 90
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 472
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get(); // 489
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator bool(); // 854
	operator==<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >(const unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __x,
												nullptr_t);  // 91
	{
		CKV3ResourceBlockHelper *& __ptr; // 396
		__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
	}
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 90
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 465
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator->(); // 55
	CKV3ResourceBlockHelper::GetKV3(); // 96
	{
	}
	CIntrospectedToKV3ResourceBlockHelper::InitFromDataBlock(
				ResourceHandle_t hParentResource,
				const ResourceFileHeader_t* pHeader,
				const char* pRootStructName);  // 81
	CIntrospectedToKV3ResourceBlockHelper::GetKV3(); // 86
	{
		AsyncProcessResult *& __ptr; // 396
		_M_ptr(const __uniq_ptr_impl<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3Ty this); // 396
		get_deleter(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this); // 398
		{
			CKV3ResourceBlockHelper *& __ptr; // 396
			__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
			unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get_deleter(); // 398
			{
				CKeyValues3Context *& __ptr; // 396
				__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 396
				unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get_deleter(); // 398
				default_delete<CKeyValues3Context>::operator(
						CKeyValues3Context* __ptr);  // 86
				default_delete<CKeyValues3Context>::operator(
						CKeyValues3Context* __ptr);  // 398
			}
			unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::~unique_ptr(); // 20
			IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 20
			CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 20
			CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 92
			default_delete<CKV3ResourceBlockHelper>::operator(
					CKV3ResourceBlockHelper* __ptr);  // 398
		}
		unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 61
		CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper(); // 61
		IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 61
		AsyncProcessResult::~AsyncProcessResult(); // 61
		AsyncProcessResult::~AsyncProcessResult(); // 92
		default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>::operator(
				AsyncProcessResult* __ptr);  // 398
	}
	~unique_ptr(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this); // 111
	get_deleter(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this); // 374
	release(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this); // 374
	default_delete<IAsyncProcessedDataResult>::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>(
										const default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>  &);  // 104
	_Head_base<1, std::default_delete<IAsyncProcessedDataResult>, true>::_Head_base<std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
												default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>& __h);  // 571
	_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl<std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
												default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>& __head);  // 315
	_Head_base<0, IAsyncProcessedDataResult::_Head_base<IAsyncProcessedDataResult*&>(
						IAsyncProcessedDataResult *& __h);  // 315
	_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl<IAsyncProcessedDataResult*&, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
																IAsyncProcessedDataResult *& __head);  // 985
	tuple<IAsyncProcessedDataResult::tuple<IAsyncProcessedDataResult*&, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(); // 174
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl<std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
													pointer __p,
													default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>& __d);  // 234
	__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data<std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
													pointer,
													default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> &);  // 374
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
																unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeManager:: __u);  // 110
} /* size: 0, variables: 3, inline expansions: 54 (1481 bytes) */

// <0315AEEA> resourcefile/introspectedtokv3typemanager.cpp:70
// variables: 10
// function calls: 88
void CBaseIntrospectedToKV3TypeManager::AsyncProcessData(ResourceHandle_t hResource, const ResourceFileHeader_t* pHeader)
{
	bool bIntrospected; // 72
	unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> > pResult; // 77
	const char   __FUNCTION__; // 24362
	{
		CResourceNameGetter resourceName; // 100
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 100
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 104
		CResourceName::Get(); // 101
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 106
	}
	IAsyncProcessedDataResult::IAsyncProcessedDataResult(); // 57
	CIntrospectedToKV3ResourceBlockHelper::CIntrospectedToKV3ResourceBlockHelper(); // 57
	_Head_base<1, std::default_delete<CKV3ResourceBlockHelper>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >::_Tuple_impl(); // 303
	_Head_base<0, CKV3ResourceBlockHelper::_Head_base(); // 303
	_Tuple_impl<0, CKV3ResourceBlockHelper::_Tuple_impl(); // 966
	tuple<CKV3ResourceBlockHelper::tuple(); // 167
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::__uniq_ptr_impl(); // 232
	__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::__uniq_ptr_data(); // 298
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::unique_ptr<>(); // 57
	AsyncProcessResult::AsyncProcessResult(); // 31
	_Head_base<1, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >::_Tuple_impl(); // 303
	_Head_base<0, CBaseIntrospectedToKV3TypeManager::AsyncProcessResult::_Head_base(); // 303
	_Tuple_impl<0, CBaseIntrospectedToKV3TypeManager::AsyncProcessResult::_Tuple_impl(); // 966
	tuple<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult::tuple(); // 169
	_M_ptr(const __uniq_ptr_impl<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3Ty this); // 169
	__uniq_ptr_impl(const __uniq_ptr_impl<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3Ty this,
			pointer __p);  // 234
	__uniq_ptr_data(const __uniq_ptr_data<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3Ty this,
			pointer);  // 311
	unique_ptr<>(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this,
			pointer __p);  // 31
	make_unique<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>(void); // 77
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 184
	{
		CKeyValues3Context *& __ptr; // 396
		__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 396
		unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get_deleter(); // 398
		default_delete<CKeyValues3Context>::operator(
				CKeyValues3Context* __ptr);  // 86
		default_delete<CKeyValues3Context>::operator(
				CKeyValues3Context* __ptr);  // 398
	}
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::~unique_ptr(); // 20
	IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 20
	CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 20
	CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 92
	default_delete<CKV3ResourceBlockHelper>::operator(
			CKV3ResourceBlockHelper* __ptr);  // 204
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::reset(
		pointer __p);  // 184
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
			__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __u);  // 236
	__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::operator=(
			__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true> &);  // 408
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
			unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > &);  // 90
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 472
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get(); // 489
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator bool(); // 854
	operator==<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >(const unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __x,
												nullptr_t);  // 91
	{
		CKV3ResourceBlockHelper *& __ptr; // 396
		__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
	}
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 90
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 465
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator->(); // 55
	CKV3ResourceBlockHelper::GetKV3(); // 96
	{
	}
	CIntrospectedToKV3ResourceBlockHelper::InitFromDataBlock(
				ResourceHandle_t hParentResource,
				const ResourceFileHeader_t* pHeader,
				const char* pRootStructName);  // 81
	CIntrospectedToKV3ResourceBlockHelper::GetKV3(); // 86
	{
		AsyncProcessResult *& __ptr; // 396
		_M_ptr(const __uniq_ptr_impl<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3Ty this); // 396
		get_deleter(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this); // 398
		{
			CKV3ResourceBlockHelper *& __ptr; // 396
			__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
			unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get_deleter(); // 398
			{
				CKeyValues3Context *& __ptr; // 396
				__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 396
				unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get_deleter(); // 398
				default_delete<CKeyValues3Context>::operator(
						CKeyValues3Context* __ptr);  // 86
				default_delete<CKeyValues3Context>::operator(
						CKeyValues3Context* __ptr);  // 398
			}
			unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::~unique_ptr(); // 20
			IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 20
			CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 20
			CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 92
			default_delete<CKV3ResourceBlockHelper>::operator(
					CKV3ResourceBlockHelper* __ptr);  // 398
		}
		unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 61
		CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper(); // 61
		IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 61
		AsyncProcessResult::~AsyncProcessResult(); // 61
		AsyncProcessResult::~AsyncProcessResult(); // 92
		default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>::operator(
				AsyncProcessResult* __ptr);  // 398
	}
	~unique_ptr(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this); // 111
	get_deleter(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this); // 374
	release(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this); // 374
	default_delete<IAsyncProcessedDataResult>::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>(
										const default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>  &);  // 104
	_Head_base<1, std::default_delete<IAsyncProcessedDataResult>, true>::_Head_base<std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
												default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>& __h);  // 571
	_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl<std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
												default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>& __head);  // 315
	_Head_base<0, IAsyncProcessedDataResult::_Head_base<IAsyncProcessedDataResult*&>(
						IAsyncProcessedDataResult *& __h);  // 315
	_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl<IAsyncProcessedDataResult*&, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
																IAsyncProcessedDataResult *& __head);  // 985
	tuple<IAsyncProcessedDataResult::tuple<IAsyncProcessedDataResult*&, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(); // 174
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl<std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
													pointer __p,
													default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>& __d);  // 234
	__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data<std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
													pointer,
													default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> &);  // 374
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
																unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeManager:: __u);  // 110
} /* size: 0, variables: 3, inline expansions: 54 (1481 bytes) */

// <019C09A6> resourcefile/introspectedtokv3typemanager.cpp:70
// variables: 10
// function calls: 88
void CBaseIntrospectedToKV3TypeManager::AsyncProcessData(ResourceHandle_t hResource, const ResourceFileHeader_t* pHeader)
{
	bool bIntrospected; // 72
	unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> > pResult; // 77
	const char   __FUNCTION__; // 63318
	{
		CResourceNameGetter resourceName; // 100
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 100
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 104
		CResourceName::Get(); // 101
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 106
	}
	IAsyncProcessedDataResult::IAsyncProcessedDataResult(); // 57
	CIntrospectedToKV3ResourceBlockHelper::CIntrospectedToKV3ResourceBlockHelper(); // 57
	_Head_base<1, std::default_delete<CKV3ResourceBlockHelper>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >::_Tuple_impl(); // 303
	_Head_base<0, CKV3ResourceBlockHelper::_Head_base(); // 303
	_Tuple_impl<0, CKV3ResourceBlockHelper::_Tuple_impl(); // 966
	tuple<CKV3ResourceBlockHelper::tuple(); // 167
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::__uniq_ptr_impl(); // 232
	__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::__uniq_ptr_data(); // 298
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::unique_ptr<>(); // 57
	AsyncProcessResult::AsyncProcessResult(); // 31
	_Head_base<1, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >::_Tuple_impl(); // 303
	_Head_base<0, CBaseIntrospectedToKV3TypeManager::AsyncProcessResult::_Head_base(); // 303
	_Tuple_impl<0, CBaseIntrospectedToKV3TypeManager::AsyncProcessResult::_Tuple_impl(); // 966
	tuple<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult::tuple(); // 169
	_M_ptr(const __uniq_ptr_impl<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3Ty this); // 169
	__uniq_ptr_impl(const __uniq_ptr_impl<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3Ty this,
			pointer __p);  // 234
	__uniq_ptr_data(const __uniq_ptr_data<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3Ty this,
			pointer);  // 311
	unique_ptr<>(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this,
			pointer __p);  // 31
	make_unique<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>(void); // 77
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 184
	{
		CKeyValues3Context *& __ptr; // 396
		__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 396
		unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get_deleter(); // 398
		default_delete<CKeyValues3Context>::operator(
				CKeyValues3Context* __ptr);  // 86
		default_delete<CKeyValues3Context>::operator(
				CKeyValues3Context* __ptr);  // 398
	}
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::~unique_ptr(); // 20
	IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 20
	CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 20
	CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 92
	default_delete<CKV3ResourceBlockHelper>::operator(
			CKV3ResourceBlockHelper* __ptr);  // 204
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::reset(
		pointer __p);  // 184
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
			__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __u);  // 236
	__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::operator=(
			__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true> &);  // 408
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
			unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > &);  // 90
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 472
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get(); // 489
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator bool(); // 854
	operator==<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >(const unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __x,
												nullptr_t);  // 91
	{
		CKV3ResourceBlockHelper *& __ptr; // 396
		__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
	}
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 90
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 465
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator->(); // 55
	CKV3ResourceBlockHelper::GetKV3(); // 96
	{
	}
	CIntrospectedToKV3ResourceBlockHelper::InitFromDataBlock(
				ResourceHandle_t hParentResource,
				const ResourceFileHeader_t* pHeader,
				const char* pRootStructName);  // 81
	CIntrospectedToKV3ResourceBlockHelper::GetKV3(); // 86
	{
		AsyncProcessResult *& __ptr; // 396
		_M_ptr(const __uniq_ptr_impl<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3Ty this); // 396
		get_deleter(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this); // 398
		{
			CKV3ResourceBlockHelper *& __ptr; // 396
			__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
			unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get_deleter(); // 398
			{
				CKeyValues3Context *& __ptr; // 396
				__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 396
				unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get_deleter(); // 398
				default_delete<CKeyValues3Context>::operator(
						CKeyValues3Context* __ptr);  // 86
				default_delete<CKeyValues3Context>::operator(
						CKeyValues3Context* __ptr);  // 398
			}
			unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::~unique_ptr(); // 20
			IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 20
			CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 20
			CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 92
			default_delete<CKV3ResourceBlockHelper>::operator(
					CKV3ResourceBlockHelper* __ptr);  // 398
		}
		unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 61
		CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper(); // 61
		IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 61
		AsyncProcessResult::~AsyncProcessResult(); // 61
		AsyncProcessResult::~AsyncProcessResult(); // 92
		default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>::operator(
				AsyncProcessResult* __ptr);  // 398
	}
	~unique_ptr(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this); // 111
	get_deleter(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this); // 374
	release(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this); // 374
	default_delete<IAsyncProcessedDataResult>::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>(
										const default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>  &);  // 104
	_Head_base<1, std::default_delete<IAsyncProcessedDataResult>, true>::_Head_base<std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
												default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>& __h);  // 571
	_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl<std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
												default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>& __head);  // 315
	_Head_base<0, IAsyncProcessedDataResult::_Head_base<IAsyncProcessedDataResult*&>(
						IAsyncProcessedDataResult *& __h);  // 315
	_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl<IAsyncProcessedDataResult*&, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
																IAsyncProcessedDataResult *& __head);  // 985
	tuple<IAsyncProcessedDataResult::tuple<IAsyncProcessedDataResult*&, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(); // 174
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl<std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
													pointer __p,
													default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>& __d);  // 234
	__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data<std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
													pointer,
													default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> &);  // 374
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
																unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeManager:: __u);  // 110
} /* size: 0, variables: 3, inline expansions: 54 (1481 bytes) */

// <00CF3630> resourcefile/introspectedtokv3typemanager.cpp:70
// variables: 10
// function calls: 88
void CBaseIntrospectedToKV3TypeManager::AsyncProcessData(ResourceHandle_t hResource, const ResourceFileHeader_t* pHeader)
{
	bool bIntrospected; // 72
	unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> > pResult; // 77
	const char   __FUNCTION__; // 48992
	{
		CResourceNameGetter resourceName; // 100
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 100
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 104
		CResourceName::Get(); // 101
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 106
	}
	IAsyncProcessedDataResult::IAsyncProcessedDataResult(); // 57
	CIntrospectedToKV3ResourceBlockHelper::CIntrospectedToKV3ResourceBlockHelper(); // 57
	_Head_base<1, std::default_delete<CKV3ResourceBlockHelper>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >::_Tuple_impl(); // 303
	_Head_base<0, CKV3ResourceBlockHelper::_Head_base(); // 303
	_Tuple_impl<0, CKV3ResourceBlockHelper::_Tuple_impl(); // 966
	tuple<CKV3ResourceBlockHelper::tuple(); // 167
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::__uniq_ptr_impl(); // 232
	__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::__uniq_ptr_data(); // 298
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::unique_ptr<>(); // 57
	AsyncProcessResult::AsyncProcessResult(); // 31
	_Head_base<1, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >::_Tuple_impl(); // 303
	_Head_base<0, CBaseIntrospectedToKV3TypeManager::AsyncProcessResult::_Head_base(); // 303
	_Tuple_impl<0, CBaseIntrospectedToKV3TypeManager::AsyncProcessResult::_Tuple_impl(); // 966
	tuple<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult::tuple(); // 169
	_M_ptr(const __uniq_ptr_impl<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3Ty this); // 169
	__uniq_ptr_impl(const __uniq_ptr_impl<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3Ty this,
			pointer __p);  // 234
	__uniq_ptr_data(const __uniq_ptr_data<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3Ty this,
			pointer);  // 311
	unique_ptr<>(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this,
			pointer __p);  // 31
	make_unique<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>(void); // 77
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 184
	{
		CKeyValues3Context *& __ptr; // 396
		__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 396
		unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get_deleter(); // 398
		default_delete<CKeyValues3Context>::operator(
				CKeyValues3Context* __ptr);  // 86
		default_delete<CKeyValues3Context>::operator(
				CKeyValues3Context* __ptr);  // 398
	}
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::~unique_ptr(); // 20
	IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 20
	CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 20
	CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 92
	default_delete<CKV3ResourceBlockHelper>::operator(
			CKV3ResourceBlockHelper* __ptr);  // 204
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::reset(
		pointer __p);  // 184
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
			__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __u);  // 236
	__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::operator=(
			__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true> &);  // 408
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
			unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > &);  // 90
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 472
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get(); // 489
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator bool(); // 854
	operator==<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >(const unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __x,
												nullptr_t);  // 91
	{
		CKV3ResourceBlockHelper *& __ptr; // 396
		__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
	}
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 90
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 465
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator->(); // 55
	CKV3ResourceBlockHelper::GetKV3(); // 96
	{
	}
	CIntrospectedToKV3ResourceBlockHelper::InitFromDataBlock(
				ResourceHandle_t hParentResource,
				const ResourceFileHeader_t* pHeader,
				const char* pRootStructName);  // 81
	CIntrospectedToKV3ResourceBlockHelper::GetKV3(); // 86
	{
		AsyncProcessResult *& __ptr; // 396
		_M_ptr(const __uniq_ptr_impl<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3Ty this); // 396
		get_deleter(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this); // 398
		{
			CKV3ResourceBlockHelper *& __ptr; // 396
			__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
			unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get_deleter(); // 398
			{
				CKeyValues3Context *& __ptr; // 396
				__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 396
				unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get_deleter(); // 398
				default_delete<CKeyValues3Context>::operator(
						CKeyValues3Context* __ptr);  // 86
				default_delete<CKeyValues3Context>::operator(
						CKeyValues3Context* __ptr);  // 398
			}
			unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::~unique_ptr(); // 20
			IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 20
			CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 20
			CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 92
			default_delete<CKV3ResourceBlockHelper>::operator(
					CKV3ResourceBlockHelper* __ptr);  // 398
		}
		unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 61
		CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper(); // 61
		IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 61
		AsyncProcessResult::~AsyncProcessResult(); // 61
		AsyncProcessResult::~AsyncProcessResult(); // 92
		default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>::operator(
				AsyncProcessResult* __ptr);  // 398
	}
	~unique_ptr(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this); // 111
	get_deleter(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this); // 374
	release(const unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeMan this); // 374
	default_delete<IAsyncProcessedDataResult>::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>(
										const default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>  &);  // 104
	_Head_base<1, std::default_delete<IAsyncProcessedDataResult>, true>::_Head_base<std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
												default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>& __h);  // 571
	_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl<std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
												default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>& __head);  // 315
	_Head_base<0, IAsyncProcessedDataResult::_Head_base<IAsyncProcessedDataResult*&>(
						IAsyncProcessedDataResult *& __h);  // 315
	_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl<IAsyncProcessedDataResult*&, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
																IAsyncProcessedDataResult *& __head);  // 985
	tuple<IAsyncProcessedDataResult::tuple<IAsyncProcessedDataResult*&, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(); // 174
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl<std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
													pointer __p,
													default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult>& __d);  // 234
	__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data<std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
													pointer,
													default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> &);  // 374
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult> >(
																unique_ptr<CBaseIntrospectedToKV3TypeManager::AsyncProcessResult, std::default_delete<CBaseIntrospectedToKV3TypeManager:: __u);  // 110
} /* size: 0, variables: 3, inline expansions: 54 (1481 bytes) */

// <0670FC0E> resourcefile/introspectedtokv3typemanager.cpp:116
void CBaseIntrospectedToKV3TypeManager::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
} /* size: 65 */

// <0670F2E1> resourcefile/introspectedtokv3typemanager.cpp:123
// variables: 8
// function calls: 25
void CBaseIntrospectedToKV3TypeManager::AllocateResourceFromAsyncResult(ResourceHandle_t hResource, ResourceId_t nId, IAsyncProcessedDataResult* pIAsyncResult, IRD_RegisterResourceDataUtils* pUtils)
{
	const char   __FUNCTION__; // 57223
	AsyncProcessResult* pAsyncResult; // 130
	{
		int* _pCrash; // 127
	}
	{
		CKV3TransferLoadContext loadCtx; // 138
		CKV3Transfer_ResourceLoadInterface resourceLoadInterface; // 139
		void* pResult; // 142
		{
			CResourceNameGetter resourceName; // 145
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 145
			CResourceName::Get(); // 146
		}
		{
			CResourceNameGetter resourceName; // 153
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 153
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 157
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 89
			CKV3TransferContextBase::GetErrorMessage(); // 154
			CResourceName::Get(); // 154
		}
		IKV3TransferInterface_ResourceLoad::IKV3TransferInterface_ResourceLoad(); // 19
		ResourceId_t::ResourceId_t(); // 19
		CKV3Transfer_ResourceLoadInterface::CKV3Transfer_ResourceLoadInterface(
							IRD_RegisterResourceDataUtils* pDataUtils,
							ResourceHandle_t hOriginatingResource,
							ResourceId_t nOriginatingResourceId);  // 139
		CKV3TransferContextBase::AddInterface<CKV3Transfer_ResourceLoadInterface>(
								CKV3Transfer_ResourceLoadInterface* pInterface);  // 140
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 127
} /* size: 848, variables: 2, inline expansions: 1 (38 bytes) */

// <0315A4F7> resourcefile/introspectedtokv3typemanager.cpp:123
// variables: 8
// function calls: 25
void CBaseIntrospectedToKV3TypeManager::AllocateResourceFromAsyncResult(ResourceHandle_t hResource, ResourceId_t nId, IAsyncProcessedDataResult* pIAsyncResult, IRD_RegisterResourceDataUtils* pUtils)
{
	const char   __FUNCTION__; // 24722
	AsyncProcessResult* pAsyncResult; // 130
	{
		int* _pCrash; // 127
	}
	{
		CKV3TransferLoadContext loadCtx; // 138
		CKV3Transfer_ResourceLoadInterface resourceLoadInterface; // 139
		void* pResult; // 142
		{
			CResourceNameGetter resourceName; // 145
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 145
			CResourceName::Get(); // 146
		}
		{
			CResourceNameGetter resourceName; // 153
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 153
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 157
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 89
			CKV3TransferContextBase::GetErrorMessage(); // 154
			CResourceName::Get(); // 154
		}
		IKV3TransferInterface_ResourceLoad::IKV3TransferInterface_ResourceLoad(); // 19
		ResourceId_t::ResourceId_t(); // 19
		CKV3Transfer_ResourceLoadInterface::CKV3Transfer_ResourceLoadInterface(
							IRD_RegisterResourceDataUtils* pDataUtils,
							ResourceHandle_t hOriginatingResource,
							ResourceId_t nOriginatingResourceId);  // 139
		CKV3TransferContextBase::AddInterface<CKV3Transfer_ResourceLoadInterface>(
								CKV3Transfer_ResourceLoadInterface* pInterface);  // 140
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 127
} /* size: 848, variables: 2, inline expansions: 1 (38 bytes) */

// <019BFFB3> resourcefile/introspectedtokv3typemanager.cpp:123
// variables: 8
// function calls: 25
void CBaseIntrospectedToKV3TypeManager::AllocateResourceFromAsyncResult(ResourceHandle_t hResource, ResourceId_t nId, IAsyncProcessedDataResult* pIAsyncResult, IRD_RegisterResourceDataUtils* pUtils)
{
	const char   __FUNCTION__; // 63678
	AsyncProcessResult* pAsyncResult; // 130
	{
		int* _pCrash; // 127
	}
	{
		CKV3TransferLoadContext loadCtx; // 138
		CKV3Transfer_ResourceLoadInterface resourceLoadInterface; // 139
		void* pResult; // 142
		{
			CResourceNameGetter resourceName; // 145
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 145
			CResourceName::Get(); // 146
		}
		{
			CResourceNameGetter resourceName; // 153
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 153
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 157
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 89
			CKV3TransferContextBase::GetErrorMessage(); // 154
			CResourceName::Get(); // 154
		}
		IKV3TransferInterface_ResourceLoad::IKV3TransferInterface_ResourceLoad(); // 19
		ResourceId_t::ResourceId_t(); // 19
		CKV3Transfer_ResourceLoadInterface::CKV3Transfer_ResourceLoadInterface(
							IRD_RegisterResourceDataUtils* pDataUtils,
							ResourceHandle_t hOriginatingResource,
							ResourceId_t nOriginatingResourceId);  // 139
		CKV3TransferContextBase::AddInterface<CKV3Transfer_ResourceLoadInterface>(
								CKV3Transfer_ResourceLoadInterface* pInterface);  // 140
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 127
} /* size: 848, variables: 2, inline expansions: 1 (38 bytes) */

// <00CF2C3D> resourcefile/introspectedtokv3typemanager.cpp:123
// variables: 8
// function calls: 25
void CBaseIntrospectedToKV3TypeManager::AllocateResourceFromAsyncResult(ResourceHandle_t hResource, ResourceId_t nId, IAsyncProcessedDataResult* pIAsyncResult, IRD_RegisterResourceDataUtils* pUtils)
{
	const char   __FUNCTION__; // 49352
	AsyncProcessResult* pAsyncResult; // 130
	{
		int* _pCrash; // 127
	}
	{
		CKV3TransferLoadContext loadCtx; // 138
		CKV3Transfer_ResourceLoadInterface resourceLoadInterface; // 139
		void* pResult; // 142
		{
			CResourceNameGetter resourceName; // 145
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 145
			CResourceName::Get(); // 146
		}
		{
			CResourceNameGetter resourceName; // 153
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 153
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 157
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 89
			CKV3TransferContextBase::GetErrorMessage(); // 154
			CResourceName::Get(); // 154
		}
		IKV3TransferInterface_ResourceLoad::IKV3TransferInterface_ResourceLoad(); // 19
		ResourceId_t::ResourceId_t(); // 19
		CKV3Transfer_ResourceLoadInterface::CKV3Transfer_ResourceLoadInterface(
							IRD_RegisterResourceDataUtils* pDataUtils,
							ResourceHandle_t hOriginatingResource,
							ResourceId_t nOriginatingResourceId);  // 139
		CKV3TransferContextBase::AddInterface<CKV3Transfer_ResourceLoadInterface>(
								CKV3Transfer_ResourceLoadInterface* pInterface);  // 140
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 127
} /* size: 848, variables: 2, inline expansions: 1 (38 bytes) */

// <067146FC> resourcefile/introspectedtokv3typemanager.cpp:166
// function calls: 2
void CBaseIntrospectedToKV3TypeManager::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDeallocUtils)
{
	CResourceDeallocatorUtils::GetDeallocationType(); // 168
	CBaseIntrospectedToKV3TypeManager::DeallocateResource(
				void* pResourceData,
				IResourceDeallocatorUtils* pDeallocUtils);  // 166
} /* size: 130, inline expansions: 2 (51 bytes) */

// <0670F2B0> resourcefile/introspectedtokv3typemanager.cpp:166
void CBaseIntrospectedToKV3TypeManager::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDeallocUtils)
{
} /* size: 0 */

// <06714B97> resourcefile/introspectedtokv3typemanager.cpp:180
// variable: 1
// function calls: 11
void CIntrospectedToKV3ResourceBlockHelper::InitFromBlock(ResourceHandle_t hParentResource, const ResourceFileHeader_t* pHeader, const ResourceHeaderBlockInfo_t* pBlockInfo, const char* pIntrospectedRootStructName)
{
	{
		CResourceNameGetter resourceName; // 185
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 185
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 188
		CResourceName::Get(); // 186
	}
	CIntrospectedToKV3ResourceBlockHelper::InitFromBlock(
			ResourceHandle_t hParentResource,
			const ResourceFileHeader_t* pHeader,
			const ResourceHeaderBlockInfo_t* pBlockInfo,
			const char* pIntrospectedRootStructName);  // 180
} /* size: 287, inline expansions: 1 (154 bytes) */

// <0670F256> resourcefile/introspectedtokv3typemanager.cpp:180
// variable: 1
void CIntrospectedToKV3ResourceBlockHelper::InitFromBlock(ResourceHandle_t hParentResource, const ResourceFileHeader_t* pHeader, const ResourceHeaderBlockInfo_t* pBlockInfo, const char* pIntrospectedRootStructName)
{
	{
		CResourceNameGetter resourceName; // 185
	}
} /* size: 0 */

// <06714F5B> resourcefile/introspectedtokv3typemanager.cpp:196
// variable: 1
void CIntrospectedToKV3ResourceBlockHelper::InitFromDataBlock(ResourceHandle_t hParentResource, const ResourceFileHeader_t* pHeader, const char* pRootStructName)
{
	ResourceHeaderBlockInfo_t dataBlockInfo; // 201
	{
	}
} /* size: 0, variables: 1 */

// <06714814> resourcefile/introspectedtokv3typemanager.cpp:196
// variables: 2
// function calls: 11
void CIntrospectedToKV3ResourceBlockHelper::InitFromDataBlock(const char* pRootStructName, const ResourceFileHeader_t* pHeader, ResourceHandle_t hParentResource)
{
	ResourceHeaderBlockInfo_t dataBlockInfo; // 201
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 202
		{
			CResourceNameGetter name; // 204
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 204
			CResourceName::Get(); // 205
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 207
		}
	}
} /* size: 175, variables: 1 */

// <0670F15A> resourcefile/introspectedtokv3typemanager.cpp:196
// variables: 2
void CIntrospectedToKV3ResourceBlockHelper::InitFromDataBlock(ResourceHandle_t hParentResource, const ResourceFileHeader_t* pHeader, const char* pRootStructName)
{
	ResourceHeaderBlockInfo_t dataBlockInfo; // 201
	{
		{
			CResourceNameGetter name; // 204
		}
	}
} /* size: 0, variables: 1 */

